/*
 * Copyright (c) 2016 Laura Garcia <nevola@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/netlink.h>
#include <linux/netfilter.h>
#include <linux/netfilter/nf_tables.h>
#include <net/netfilter/nf_tables.h>
#include <net/netfilter/nf_tables_core.h>
#include <linux/jhash.h>

struct nft_jhash {
	u8			sreg;
	enum nft_registers      dreg:8;
	u8			len;
	bool			autogen_seed:1;
	u32			modulus;
	u32			seed;
	u32			offset;
	struct nft_set		*map;
};

static void nft_jhash_eval(const struct nft_expr *expr,
			   struct nft_regs *regs,
			   const struct nft_pktinfo *pkt)
{
	struct nft_jhash *priv = nft_expr_priv(expr);
	const void *data = &regs->data[priv->sreg];
	u32 h;

	h = reciprocal_scale(jhash(data, priv->len, priv->seed),
			     priv->modulus);

	regs->data[priv->dreg] = h + priv->offset;
}

static void nft_jhash_map_eval(const struct nft_expr *expr,
			       struct nft_regs *regs,
			       const struct nft_pktinfo *pkt)
{
	struct nft_jhash *priv = nft_expr_priv(expr);
	const void *data = &regs->data[priv->sreg];
	const struct nft_set *map = priv->map;
	const struct nft_set_ext *ext;
	u32 result;
	bool found;

	result = reciprocal_scale(jhash(data, priv->len, priv->seed),
					priv->modulus) + priv->offset;

	found = map->ops->lookup(nft_net(pkt), map, &result, &ext);
	if (!found)
		return;

	nft_data_copy(&regs->data[priv->dreg],
		      nft_set_ext_data(ext), map->dlen);
}

struct nft_symhash {
	enum nft_registers      dreg:8;
	u32			modulus;
	u32			offset;
	struct nft_set		*map;
};

static void nft_symhash_eval(const struct nft_expr *expr,
			     struct nft_regs *regs,
			     const struct nft_pktinfo *pkt)
{
	struct nft_symhash *priv = nft_expr_priv(expr);
	struct sk_buff *skb = pkt->skb;
	u32 h;

	h = reciprocal_scale(__skb_get_hash_symmetric(skb), priv->modulus);

	regs->data[priv->dreg] = h + priv->offset;
}

static void nft_symhash_map_eval(const struct nft_expr *expr,
				 struct nft_regs *regs,
				 const struct nft_pktinfo *pkt)
{
	struct nft_symhash *priv = nft_expr_priv(expr);
	struct sk_buff *skb = pkt->skb;
	const struct nft_set *map = priv->map;
	const struct nft_set_ext *ext;
	u32 result;
	bool found;

	result = reciprocal_scale(__skb_get_hash_symmetric(skb),
				  priv->modulus) + priv->offset;

	found = map->ops->lookup(nft_net(pkt), map, &result, &ext);
	if (!found)
		return;

	nft_data_copy(&regs->data[priv->dreg],
		      nft_set_ext_data(ext), map->dlen);
}

static const struct nla_policy nft_hash_policy[NFTA_HASH_MAX + 1] = {
	[NFTA_HASH_SREG]	= { .type = NLA_U32 },
	[NFTA_HASH_DREG]	= { .type = NLA_U32 },
	[NFTA_HASH_LEN]		= { .type = NLA_U32 },
	[NFTA_HASH_MODULUS]	= { .type = NLA_U32 },
	[NFTA_HASH_SEED]	= { .type = NLA_U32 },
	[NFTA_HASH_OFFSET]	= { .type = NLA_U32 },
	[NFTA_HASH_TYPE]	= { .type = NLA_U32 },
	[NFTA_HASH_SET_NAME]	= { .type = NLA_STRING,
				    .len = NFT_SET_MAXNAMELEN - 1 },
	[NFTA_HASH_SET_ID]	= { .type = NLA_U32 },
};

static int nft_jhash_init(const struct nft_ctx *ctx,
			  const struct nft_expr *expr,
			  const struct nlattr * const tb[])
{
	struct nft_jhash *priv = nft_expr_priv(expr);
	u32 len;
	int err;

	if (!tb[NFTA_HASH_SREG] ||
	    !tb[NFTA_HASH_DREG] ||
	    !tb[NFTA_HASH_LEN]  ||
	    !tb[NFTA_HASH_MODULUS])
		return -EINVAL;

	if (tb[NFTA_HASH_OFFSET])
		priv->offset = ntohl(nla_get_be32(tb[NFTA_HASH_OFFSET]));

	priv->dreg = nft_parse_register(tb[NFTA_HASH_DREG]);

	err = nft_parse_u32_check(tb[NFTA_HASH_LEN], U8_MAX, &len);
	if (err < 0)
		return err;
	if (len == 0)
		return -ERANGE;

	priv->len = len;

	err = nft_parse_register_load(tb[NFTA_HASH_SREG], &priv->sreg, len);
	if (err < 0)
		return err;

	priv->modulus = ntohl(nla_get_be32(tb[NFTA_HASH_MODULUS]));
	if (priv->modulus < 1)
		return -ERANGE;

	if (priv->offset + priv->modulus - 1 < priv->offset)
		return -EOVERFLOW;

	if (tb[NFTA_HASH_SEED]) {
		priv->seed = ntohl(nla_get_be32(tb[NFTA_HASH_SEED]));
	} else {
		priv->autogen_seed = true;
		get_random_bytes(&priv->seed, sizeof(priv->seed));
	}

	return nft_validate_register_store(ctx, priv->dreg, NULL,
					   NFT_DATA_VALUE, sizeof(u32));
}

static int nft_jhash_map_init(const struct nft_ctx *ctx,
			      const struct nft_expr *expr,
			      const struct nlattr * const tb[])
{
	struct nft_jhash *priv = nft_expr_priv(expr);
	u8 genmask = nft_genmask_next(ctx->net);

	nft_jhash_init(ctx, expr, tb);
	priv->map = nft_set_lookup_global(ctx->net, ctx->table,
					  tb[NFTA_HASH_SET_NAME],
					  tb[NFTA_HASH_SET_ID], genmask);
	return PTR_ERR_OR_ZERO(priv->map);
}

static int nft_symhash_init(const struct nft_ctx *ctx,
			    const struct nft_expr *expr,
			    const struct nlattr * const tb[])
{
	struct nft_symhash *priv = nft_expr_priv(expr);

	if (!tb[NFTA_HASH_DREG]    ||
	    !tb[NFTA_HASH_MODULUS])
		return -EINVAL;

	if (tb[NFTA_HASH_OFFSET])
		priv->offset = ntohl(nla_get_be32(tb[NFTA_HASH_OFFSET]));

	priv->dreg = nft_parse_register(tb[NFTA_HASH_DREG]);

	priv->modulus = ntohl(nla_get_be32(tb[NFTA_HASH_MODULUS]));
	if (priv->modulus < 1)
		return -ERANGE;

	if (priv->offset + priv->modulus - 1 < priv->offset)
		return -EOVERFLOW;

	return nft_validate_register_store(ctx, priv->dreg, NULL,
					   NFT_DATA_VALUE, sizeof(u32));
}

static int nft_symhash_map_init(const struct nft_ctx *ctx,
				const struct nft_expr *expr,
				const struct nlattr * const tb[])
{
	struct nft_jhash *priv = nft_expr_priv(expr);
	u8 genmask = nft_genmask_next(ctx->net);

	nft_symhash_init(ctx, expr, tb);
	priv->map = nft_set_lookup_global(ctx->net, ctx->table,
					  tb[NFTA_HASH_SET_NAME],
					  tb[NFTA_HASH_SET_ID], genmask);
	return PTR_ERR_OR_ZERO(priv->map);
}

static int nft_jhash_dump(struct sk_buff *skb,
			  const struct nft_expr *expr)
{
	const struct nft_jhash *priv = nft_expr_priv(expr);

	if (nft_dump_register(skb, NFTA_HASH_SREG, priv->sreg))
		goto nla_put_failure;
	if (nft_dump_register(skb, NFTA_HASH_DREG, priv->dreg))
		goto nla_put_failure;
	if (nla_put_be32(skb, NFTA_HASH_LEN, htonl(priv->len)))
		goto nla_put_failure;
	if (nla_put_be32(skb, NFTA_HASH_MODULUS, htonl(priv->modulus)))
		goto nla_put_failure;
	if (!priv->autogen_seed &&
	    nla_put_be32(skb, NFTA_HASH_SEED, htonl(priv->seed)))
		goto nla_put_failure;
	if (priv->offset != 0)
		if (nla_put_be32(skb, NFTA_HASH_OFFSET, htonl(priv->offset)))
			goto nla_put_failure;
	if (nla_put_be32(skb, NFTA_HASH_TYPE, htonl(NFT_HASH_JENKINS)))
		goto nla_put_failure;
	return 0;

nla_put_failure:
	return -1;
}

static int nft_jhash_map_dump(struct sk_buff *skb,
			       const struct nft_expr *expr)
{
	const struct nft_jhash *priv = nft_expr_priv(expr);

	if (nft_jhash_dump(skb, expr) ||
	    nla_put_string(skb, NFTA_HASH_SET_NAME, priv->map->name))
		return -1;

	return 0;
}

static int nft_symhash_dump(struct sk_buff *skb,
			    const struct nft_expr *expr)
{
	const struct nft_symhash *priv = nft_expr_priv(expr);

	if (nft_dump_register(skb, NFTA_HASH_DREG, priv->dreg))
		goto nla_put_failure;
	if (nla_put_be32(skb, NFTA_HASH_MODULUS, htonl(priv->modulus)))
		goto nla_put_failure;
	if (priv->offset != 0)
		if (nla_put_be32(skb, NFTA_HASH_OFFSET, htonl(priv->offset)))
			goto nla_put_failure;
	if (nla_put_be32(skb, NFTA_HASH_TYPE, htonl(NFT_HASH_SYM)))
		goto nla_put_failure;
	return 0;

nla_put_failure:
	return -1;
}

static int nft_symhash_map_dump(struct sk_buff *skb,
				const struct nft_expr *expr)
{
	const struct nft_symhash *priv = nft_expr_priv(expr);

	if (nft_symhash_dump(skb, expr) ||
	    nla_put_string(skb, NFTA_HASH_SET_NAME, priv->map->name))
		return -1;

	return 0;
}

static struct nft_expr_type nft_hash_type;
static const struct nft_expr_ops nft_jhash_ops = {
	.type		= &nft_hash_type,
	.size		= NFT_EXPR_SIZE(sizeof(struct nft_jhash)),
	.eval		= nft_jhash_eval,
	.init		= nft_jhash_init,
	.dump		= nft_jhash_dump,
};

static const struct nft_expr_ops nft_jhash_map_ops = {
	.type		= &nft_hash_type,
	.size		= NFT_EXPR_SIZE(sizeof(struct nft_jhash)),
	.eval		= nft_jhash_map_eval,
	.init		= nft_jhash_map_init,
	.dump		= nft_jhash_map_dump,
};

static const struct nft_expr_ops nft_symhash_ops = {
	.type		= &nft_hash_type,
	.size		= NFT_EXPR_SIZE(sizeof(struct nft_symhash)),
	.eval		= nft_symhash_eval,
	.init		= nft_symhash_init,
	.dump		= nft_symhash_dump,
};

static const struct nft_expr_ops nft_symhash_map_ops = {
	.type		= &nft_hash_type,
	.size		= NFT_EXPR_SIZE(sizeof(struct nft_symhash)),
	.eval		= nft_symhash_map_eval,
	.init		= nft_symhash_map_init,
	.dump		= nft_symhash_map_dump,
};

static const struct nft_expr_ops *
nft_hash_select_ops(const struct nft_ctx *ctx,
		    const struct nlattr * const tb[])
{
	u32 type;

	if (!tb[NFTA_HASH_TYPE])
		return &nft_jhash_ops;

	type = ntohl(nla_get_be32(tb[NFTA_HASH_TYPE]));
	switch (type) {
	case NFT_HASH_SYM:
		if (tb[NFTA_HASH_SET_NAME])
			return &nft_symhash_map_ops;
		return &nft_symhash_ops;
	case NFT_HASH_JENKINS:
		if (tb[NFTA_HASH_SET_NAME])
			return &nft_jhash_map_ops;
		return &nft_jhash_ops;
	default:
		break;
	}
	return ERR_PTR(-EOPNOTSUPP);
}

static struct nft_expr_type nft_hash_type __read_mostly = {
	.name		= "hash",
	.select_ops	= nft_hash_select_ops,
	.policy		= nft_hash_policy,
	.maxattr	= NFTA_HASH_MAX,
	.owner		= THIS_MODULE,
};

static int __init nft_hash_module_init(void)
{
	return nft_register_expr(&nft_hash_type);
}

static void __exit nft_hash_module_exit(void)
{
	nft_unregister_expr(&nft_hash_type);
}

module_init(nft_hash_module_init);
module_exit(nft_hash_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Laura Garcia <nevola@gmail.com>");
MODULE_ALIAS_NFT_EXPR("hash");
