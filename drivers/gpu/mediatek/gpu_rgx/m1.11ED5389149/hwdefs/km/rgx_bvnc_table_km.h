/*************************************************************************/ /*!
@Title          Hardware definition file rgx_bvnc_table_km.h
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

/******************************************************************************
 *                 Auto generated file by rgxbvnc_tablegen.py                 *
 *                  This file should not be edited manually                   *
 *****************************************************************************/

#ifndef RGX_BVNC_TABLE_KM_H
#define RGX_BVNC_TABLE_KM_H

#include "img_types.h"
#include "img_defs.h"
#include "rgxdefs_km.h"

#ifndef _RGXBVNC_C_
#error "This file should only be included from rgxbvnc.c"
#endif

#if defined(RGX_BVNC_TABLE_UM_H)
#error "This file should not be included in conjunction with rgx_bvnc_table_um.h"
#endif


/******************************************************************************
 * Defines and arrays for each feature with values used
 * for handling the corresponding values
 *****************************************************************************/

#define	RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_values[RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 2, };

#define	RGX_FEATURE_FBCDC_ALGORITHM_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_FBCDC_ALGORITHM_values[RGX_FEATURE_FBCDC_ALGORITHM_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 3, 4, };

#define	RGX_FEATURE_FBCDC_ARCHITECTURE_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_FBCDC_ARCHITECTURE_values[RGX_FEATURE_FBCDC_ARCHITECTURE_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 3, };

#define	RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_values[RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 8, };

#define	RGX_FEATURE_META_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_META_values[RGX_FEATURE_META_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, LTP217, LTP218, MTP218, MTP219, };

#define	RGX_FEATURE_META_COREMEM_BANKS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_META_COREMEM_BANKS_values[RGX_FEATURE_META_COREMEM_BANKS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 8, };

#define	RGX_FEATURE_META_COREMEM_SIZE_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_META_COREMEM_SIZE_values[RGX_FEATURE_META_COREMEM_SIZE_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 0, 32, 64, 256, };

#define	RGX_FEATURE_META_DMA_CHANNEL_COUNT_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_META_DMA_CHANNEL_COUNT_values[RGX_FEATURE_META_DMA_CHANNEL_COUNT_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 4, };

#define	RGX_FEATURE_NUM_CLUSTERS_MAX_VALUE_IDX	(7)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_CLUSTERS_values[RGX_FEATURE_NUM_CLUSTERS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 4, 6, 8, 16, };

#define	RGX_FEATURE_NUM_ISP_IPP_PIPES_MAX_VALUE_IDX	(11)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_ISP_IPP_PIPES_values[RGX_FEATURE_NUM_ISP_IPP_PIPES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 3, 4, 6, 7, 8, 12, 16, 32, };

#define	RGX_FEATURE_NUM_RASTER_PIPES_MAX_VALUE_IDX	(3)
static const IMG_UINT16 aui16_RGX_FEATURE_NUM_RASTER_PIPES_values[RGX_FEATURE_NUM_RASTER_PIPES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, };

#define	RGX_FEATURE_PHYS_BUS_WIDTH_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_PHYS_BUS_WIDTH_values[RGX_FEATURE_PHYS_BUS_WIDTH_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 32, 36, 40, };

#define	RGX_FEATURE_SCALABLE_TE_ARCH_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_SCALABLE_TE_ARCH_values[RGX_FEATURE_SCALABLE_TE_ARCH_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 4, };

#define	RGX_FEATURE_SCALABLE_VCE_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_SCALABLE_VCE_values[RGX_FEATURE_SCALABLE_VCE_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 4, };

#define	RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_MAX_VALUE_IDX	(3)
static const IMG_UINT16 aui16_RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_values[RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, };

#define	RGX_FEATURE_SLC_BANKS_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_BANKS_values[RGX_FEATURE_SLC_BANKS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 1, 2, 4, };

#define	RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_values[RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 512, };

#define	RGX_FEATURE_SLC_SIZE_IN_BYTES_MAX_VALUE_IDX	(5)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_SIZE_IN_BYTES_values[RGX_FEATURE_SLC_SIZE_IN_BYTES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 16, 64, 128, 256, };

#define	RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_MAX_VALUE_IDX	(4)
static const IMG_UINT16 aui16_RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_values[RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 128, 256, 512, };

#define	RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_MAX_VALUE_IDX	(2)
static const IMG_UINT16 aui16_RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_values[RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_MAX_VALUE_IDX] = {(IMG_UINT16)RGX_FEATURE_VALUE_DISABLED, 40, };


/******************************************************************************
 * Table contains pointers to each feature value array for features that have
 * values.
 * Indexed using enum RGX_FEATURE_WITH_VALUE_INDEX from rgx_bvnc_defs_km.h
 *****************************************************************************/

static const IMG_UINT16 *gaFeaturesValues[RGX_FEATURE_WITH_VALUES_MAX_IDX] = {
	aui16_RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_values,
	aui16_RGX_FEATURE_FBCDC_ALGORITHM_values,
	aui16_RGX_FEATURE_FBCDC_ARCHITECTURE_values,
	aui16_RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_values,
	aui16_RGX_FEATURE_META_values,
	aui16_RGX_FEATURE_META_COREMEM_BANKS_values,
	aui16_RGX_FEATURE_META_COREMEM_SIZE_values,
	aui16_RGX_FEATURE_META_DMA_CHANNEL_COUNT_values,
	aui16_RGX_FEATURE_NUM_CLUSTERS_values,
	aui16_RGX_FEATURE_NUM_ISP_IPP_PIPES_values,
	aui16_RGX_FEATURE_NUM_RASTER_PIPES_values,
	aui16_RGX_FEATURE_PHYS_BUS_WIDTH_values,
	aui16_RGX_FEATURE_SCALABLE_TE_ARCH_values,
	aui16_RGX_FEATURE_SCALABLE_VCE_values,
	aui16_RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_values,
	aui16_RGX_FEATURE_SLC_BANKS_values,
	aui16_RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_values,
	aui16_RGX_FEATURE_SLC_SIZE_IN_BYTES_values,
	aui16_RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_values,
	aui16_RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_values,
};


/******************************************************************************
 * Array containing the lengths of the arrays containing the values.
 * Used for indexing the aui16_<FEATURE>_values defined upwards
 *****************************************************************************/


static const IMG_UINT16 gaFeaturesValuesMaxIndexes[] = {
	RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_MAX_VALUE_IDX,
	RGX_FEATURE_FBCDC_ALGORITHM_MAX_VALUE_IDX,
	RGX_FEATURE_FBCDC_ARCHITECTURE_MAX_VALUE_IDX,
	RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_MAX_VALUE_IDX,
	RGX_FEATURE_META_MAX_VALUE_IDX,
	RGX_FEATURE_META_COREMEM_BANKS_MAX_VALUE_IDX,
	RGX_FEATURE_META_COREMEM_SIZE_MAX_VALUE_IDX,
	RGX_FEATURE_META_DMA_CHANNEL_COUNT_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_CLUSTERS_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_ISP_IPP_PIPES_MAX_VALUE_IDX,
	RGX_FEATURE_NUM_RASTER_PIPES_MAX_VALUE_IDX,
	RGX_FEATURE_PHYS_BUS_WIDTH_MAX_VALUE_IDX,
	RGX_FEATURE_SCALABLE_TE_ARCH_MAX_VALUE_IDX,
	RGX_FEATURE_SCALABLE_VCE_MAX_VALUE_IDX,
	RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_BANKS_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_SIZE_IN_BYTES_MAX_VALUE_IDX,
	RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_MAX_VALUE_IDX,
	RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_MAX_VALUE_IDX,
};


/******************************************************************************
 * Bit-positions for features with values
 *****************************************************************************/

static const IMG_UINT16 aui16FeaturesWithValuesBitPositions[] = {
	(0U), /* RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_POS */
	(2U), /* RGX_FEATURE_FBCDC_ALGORITHM_POS */
	(5U), /* RGX_FEATURE_FBCDC_ARCHITECTURE_POS */
	(8U), /* RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_POS */
	(10U), /* RGX_FEATURE_META_POS */
	(13U), /* RGX_FEATURE_META_COREMEM_BANKS_POS */
	(15U), /* RGX_FEATURE_META_COREMEM_SIZE_POS */
	(18U), /* RGX_FEATURE_META_DMA_CHANNEL_COUNT_POS */
	(20U), /* RGX_FEATURE_NUM_CLUSTERS_POS */
	(23U), /* RGX_FEATURE_NUM_ISP_IPP_PIPES_POS */
	(27U), /* RGX_FEATURE_NUM_RASTER_PIPES_POS */
	(29U), /* RGX_FEATURE_PHYS_BUS_WIDTH_POS */
	(32U), /* RGX_FEATURE_SCALABLE_TE_ARCH_POS */
	(35U), /* RGX_FEATURE_SCALABLE_VCE_POS */
	(38U), /* RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_POS */
	(40U), /* RGX_FEATURE_SLC_BANKS_POS */
	(43U), /* RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_POS */
	(45U), /* RGX_FEATURE_SLC_SIZE_IN_BYTES_POS */
	(48U), /* RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_POS */
	(51U), /* RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_POS */
};


/******************************************************************************
 * Bit-masks for features with values
 *****************************************************************************/

static const IMG_UINT64 aui64FeaturesWithValuesBitMasks[] = {
	(IMG_UINT64_C(0x0000000000000003)), /* RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT_BIT_MASK */
	(IMG_UINT64_C(0x000000000000001C)), /* RGX_FEATURE_FBCDC_ALGORITHM_BIT_MASK */
	(IMG_UINT64_C(0x00000000000000E0)), /* RGX_FEATURE_FBCDC_ARCHITECTURE_BIT_MASK */
	(IMG_UINT64_C(0x0000000000000300)), /* RGX_FEATURE_GPU_VIRTUALISATION_NUM_OS_BIT_MASK */
	(IMG_UINT64_C(0x0000000000001C00)), /* RGX_FEATURE_META_BIT_MASK */
	(IMG_UINT64_C(0x0000000000006000)), /* RGX_FEATURE_META_COREMEM_BANKS_BIT_MASK */
	(IMG_UINT64_C(0x0000000000038000)), /* RGX_FEATURE_META_COREMEM_SIZE_BIT_MASK */
	(IMG_UINT64_C(0x00000000000C0000)), /* RGX_FEATURE_META_DMA_CHANNEL_COUNT_BIT_MASK */
	(IMG_UINT64_C(0x0000000000700000)), /* RGX_FEATURE_NUM_CLUSTERS_BIT_MASK */
	(IMG_UINT64_C(0x0000000007800000)), /* RGX_FEATURE_NUM_ISP_IPP_PIPES_BIT_MASK */
	(IMG_UINT64_C(0x0000000018000000)), /* RGX_FEATURE_NUM_RASTER_PIPES_BIT_MASK */
	(IMG_UINT64_C(0x00000000E0000000)), /* RGX_FEATURE_PHYS_BUS_WIDTH_BIT_MASK */
	(IMG_UINT64_C(0x0000000700000000)), /* RGX_FEATURE_SCALABLE_TE_ARCH_BIT_MASK */
	(IMG_UINT64_C(0x0000003800000000)), /* RGX_FEATURE_SCALABLE_VCE_BIT_MASK */
	(IMG_UINT64_C(0x000000C000000000)), /* RGX_FEATURE_SIMPLE_PARAMETER_FORMAT_VERSION_BIT_MASK */
	(IMG_UINT64_C(0x0000070000000000)), /* RGX_FEATURE_SLC_BANKS_BIT_MASK */
	(IMG_UINT64_C(0x0000180000000000)), /* RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS_BIT_MASK */
	(IMG_UINT64_C(0x0000E00000000000)), /* RGX_FEATURE_SLC_SIZE_IN_BYTES_BIT_MASK */
	(IMG_UINT64_C(0x0007000000000000)), /* RGX_FEATURE_SLC_SIZE_IN_KILOBYTES_BIT_MASK */
	(IMG_UINT64_C(0x0018000000000000)), /* RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS_BIT_MASK */
};


/******************************************************************************
 * Table mapping bitmasks for features and features with values
 *****************************************************************************/


static const IMG_UINT64 gaFeatures[][3]=
{
	{ IMG_UINT64_C(0x0001000000020000), IMG_UINT64_C(0x0000001000040815), IMG_UINT64_C(0x0008680061a08c00) },	/* 1.0.2.0 */
	{ IMG_UINT64_C(0x0001000000020014), IMG_UINT64_C(0x0000001000040815), IMG_UINT64_C(0x0008680061a08c00) },	/* 1.0.2.20 */
	{ IMG_UINT64_C(0x000100000002001e), IMG_UINT64_C(0x0000001000040815), IMG_UINT64_C(0x0008680061a08c24) },	/* 1.0.2.30 */
	{ IMG_UINT64_C(0x0001000000040005), IMG_UINT64_C(0x0000001000040814), IMG_UINT64_C(0x0008680061b08c24) },	/* 1.0.4.5 */
	{ IMG_UINT64_C(0x0001000000040006), IMG_UINT64_C(0x0000001000040814), IMG_UINT64_C(0x0008680061b08c00) },	/* 1.0.4.6 */
	{ IMG_UINT64_C(0x000100000004000c), IMG_UINT64_C(0x0000001000040814), IMG_UINT64_C(0x0008880061b08c24) },	/* 1.0.4.12 */
	{ IMG_UINT64_C(0x0001000000040013), IMG_UINT64_C(0x0000001000040815), IMG_UINT64_C(0x0008680061b08c24) },	/* 1.0.4.19 */
	{ IMG_UINT64_C(0x0004000000020033), IMG_UINT64_C(0x000008b0000c091f), IMG_UINT64_C(0x0008680063a10848) },	/* 4.0.2.51 */
	{ IMG_UINT64_C(0x0004000000020039), IMG_UINT64_C(0x000008b0000c0d1f), IMG_UINT64_C(0x0008680063a10948) },	/* 4.0.2.57 */
	{ IMG_UINT64_C(0x000400000002003a), IMG_UINT64_C(0x000008b0000c0d1f), IMG_UINT64_C(0x0008680063a10948) },	/* 4.0.2.58 */
	{ IMG_UINT64_C(0x0004000000040037), IMG_UINT64_C(0x000008b0000c091e), IMG_UINT64_C(0x0008680063b10848) },	/* 4.0.4.55 */
	{ IMG_UINT64_C(0x000400000006003e), IMG_UINT64_C(0x000008b0000c0d1f), IMG_UINT64_C(0x00086b0063c10948) },	/* 4.0.6.62 */
	{ IMG_UINT64_C(0x000500000001002e), IMG_UINT64_C(0x0000000000240905), IMG_UINT64_C(0x0008290068908428) },	/* 5.0.1.46 */
	{ IMG_UINT64_C(0x0006000000040023), IMG_UINT64_C(0x000008b0001c091f), IMG_UINT64_C(0x0008680063b10848) },	/* 6.0.4.35 */
	{ IMG_UINT64_C(0x0008000000020027), IMG_UINT64_C(0x000003e901cf1cbf), IMG_UINT64_C(0x00090a096225a968) },	/* 8.0.2.39 */
	{ IMG_UINT64_C(0x000f000000010040), IMG_UINT64_C(0x0000000000240d05), IMG_UINT64_C(0x0008490069108528) },	/* 15.0.1.64 */
	{ IMG_UINT64_C(0x0016000000150010), IMG_UINT64_C(0x000000026c24ec05), IMG_UINT64_C(0x0008094029100100) },	/* 22.0.21.16 */
	{ IMG_UINT64_C(0x0016000000160019), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x0008294029100100) },	/* 22.0.22.25 */
	{ IMG_UINT64_C(0x001600000016001d), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x0008294029100100) },	/* 22.0.22.29 */
	{ IMG_UINT64_C(0x0016000000360019), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x0008494029900100) },	/* 22.0.54.25 */
	{ IMG_UINT64_C(0x001600000036001e), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x000849402a100100) },	/* 22.0.54.30 */
	{ IMG_UINT64_C(0x0016000000360026), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x000849404a100100) },	/* 22.0.54.38 */
	{ IMG_UINT64_C(0x001600000036014a), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x000849402a10012c) },	/* 22.0.54.330 */
	{ IMG_UINT64_C(0x0016000000680012), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x000849404b100100) },	/* 22.0.104.18 */
	{ IMG_UINT64_C(0x00160000006800da), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x000849404b10012c) },	/* 22.0.104.218 */
	{ IMG_UINT64_C(0x0016000000d0013e), IMG_UINT64_C(0x000000022c24ec05), IMG_UINT64_C(0x00084a405420012c) },	/* 22.0.208.318 */
	{ IMG_UINT64_C(0x00180000003600cc), IMG_UINT64_C(0x000004061424ee05), IMG_UINT64_C(0x000849804a10012c) },	/* 24.0.54.204 */
	{ IMG_UINT64_C(0x00180000006801f8), IMG_UINT64_C(0x000004061424ee05), IMG_UINT64_C(0x000849804a90012c) },	/* 24.0.104.504 */
	{ IMG_UINT64_C(0x0018000000d001f8), IMG_UINT64_C(0x000004061424ee05), IMG_UINT64_C(0x00086a805420012c) },	/* 24.0.208.504 */
	{ IMG_UINT64_C(0x0018000000d001f9), IMG_UINT64_C(0x000004061424ee05), IMG_UINT64_C(0x00086a805420012c) },	/* 24.0.208.505 */
	{ IMG_UINT64_C(0x001d0000003400ca), IMG_UINT64_C(0x000004661424ee45), IMG_UINT64_C(0x0008298049100130) },	/* 29.0.52.202 */
};

/******************************************************************************
 * Table mapping bitmasks for ERNs/BRNs
 *****************************************************************************/


static const IMG_UINT64 gaErnsBrns[][2]=
{
	{ IMG_UINT64_C(0x0001002700040013), IMG_UINT64_C(0x000000000001008b) },	/* 1.39.4.19 */
	{ IMG_UINT64_C(0x0001003000020000), IMG_UINT64_C(0x000000000001008b) },	/* 1.48.2.0 */
	{ IMG_UINT64_C(0x000100480004000c), IMG_UINT64_C(0x0000000000010081) },	/* 1.72.4.12 */
	{ IMG_UINT64_C(0x0001004b00020014), IMG_UINT64_C(0x0000000000010089) },	/* 1.75.2.20 */
	{ IMG_UINT64_C(0x0001004b0002001e), IMG_UINT64_C(0x0000000000010089) },	/* 1.75.2.30 */
	{ IMG_UINT64_C(0x0001004c00040006), IMG_UINT64_C(0x0000000000010093) },	/* 1.76.4.6 */
	{ IMG_UINT64_C(0x0001005200040005), IMG_UINT64_C(0x0000000000010081) },	/* 1.82.4.5 */
	{ IMG_UINT64_C(0x0004001d00020033), IMG_UINT64_C(0x0000000001032025) },	/* 4.29.2.51 */
	{ IMG_UINT64_C(0x0004001f00040037), IMG_UINT64_C(0x0000000001032025) },	/* 4.31.4.55 */
	{ IMG_UINT64_C(0x0004002800020033), IMG_UINT64_C(0x0000000001032025) },	/* 4.40.2.51 */
	{ IMG_UINT64_C(0x0004002900020039), IMG_UINT64_C(0x0000000001032025) },	/* 4.41.2.57 */
	{ IMG_UINT64_C(0x0004002b0006003e), IMG_UINT64_C(0x0000000001032025) },	/* 4.43.6.62 */
	{ IMG_UINT64_C(0x0004002d0002003a), IMG_UINT64_C(0x0000000001030025) },	/* 4.45.2.58 */
	{ IMG_UINT64_C(0x0004002e0006003e), IMG_UINT64_C(0x0000000001022025) },	/* 4.46.6.62 */
	{ IMG_UINT64_C(0x000500090001002e), IMG_UINT64_C(0x0000000000000143) },	/* 5.9.1.46 */
	{ IMG_UINT64_C(0x0005000b0001002e), IMG_UINT64_C(0x0000000000000149) },	/* 5.11.1.46 */
	{ IMG_UINT64_C(0x0006002200040023), IMG_UINT64_C(0x0000000001030025) },	/* 6.34.4.35 */
	{ IMG_UINT64_C(0x0008003000020027), IMG_UINT64_C(0x0000000004408e25) },	/* 8.48.2.39 */
	{ IMG_UINT64_C(0x000f000500010040), IMG_UINT64_C(0x0000000008000141) },	/* 15.5.1.64 */
	{ IMG_UINT64_C(0x0016001e00360019), IMG_UINT64_C(0x000000005aac0161) },	/* 22.30.54.25 */
	{ IMG_UINT64_C(0x001600280036001e), IMG_UINT64_C(0x000000005aac0161) },	/* 22.40.54.30 */
	{ IMG_UINT64_C(0x0016002c00160019), IMG_UINT64_C(0x000000005aac0161) },	/* 22.44.22.25 */
	{ IMG_UINT64_C(0x0016002e0036014a), IMG_UINT64_C(0x000000005aa80165) },	/* 22.46.54.330 */
	{ IMG_UINT64_C(0x0016003100150010), IMG_UINT64_C(0x000000005aac0161) },	/* 22.49.21.16 */
	{ IMG_UINT64_C(0x0016003c0016001d), IMG_UINT64_C(0x000000005a940161) },	/* 22.60.22.29 */
	{ IMG_UINT64_C(0x0016003f0036014a), IMG_UINT64_C(0x000000005a900165) },	/* 22.63.54.330 */
	{ IMG_UINT64_C(0x001600430036001e), IMG_UINT64_C(0x000000005a9c0161) },	/* 22.67.54.30 */
	{ IMG_UINT64_C(0x001600440036001e), IMG_UINT64_C(0x000000005a940161) },	/* 22.68.54.30 */
	{ IMG_UINT64_C(0x00160056006800da), IMG_UINT64_C(0x000000004a100161) },	/* 22.86.104.218 */
	{ IMG_UINT64_C(0x0016005700680012), IMG_UINT64_C(0x000000004a140161) },	/* 22.87.104.18 */
	{ IMG_UINT64_C(0x0016005d00d0013e), IMG_UINT64_C(0x000000004a100165) },	/* 22.93.208.318 */
	{ IMG_UINT64_C(0x0016006600360026), IMG_UINT64_C(0x0000000042140161) },	/* 22.102.54.38 */
	{ IMG_UINT64_C(0x0016006800d0013e), IMG_UINT64_C(0x0000000042100165) },	/* 22.104.208.318 */
	{ IMG_UINT64_C(0x0018003200d001f8), IMG_UINT64_C(0x0000000062040165) },	/* 24.50.208.504 */
	{ IMG_UINT64_C(0x0018003800d001f9), IMG_UINT64_C(0x0000000062040165) },	/* 24.56.208.505 */
	{ IMG_UINT64_C(0x00180042003600cc), IMG_UINT64_C(0x0000000062040165) },	/* 24.66.54.204 */
	{ IMG_UINT64_C(0x00180043006801f8), IMG_UINT64_C(0x0000000062040165) },	/* 24.67.104.504 */
	{ IMG_UINT64_C(0x001d0011003400ca), IMG_UINT64_C(0x0000000022040965) },	/* 29.17.52.202 */
};

#if defined(DEBUG)

#define	FEATURE_NO_VALUES_NAMES_MAX_IDX	(44)

static const IMG_CHAR * const gaszFeaturesNoValuesNames[FEATURE_NO_VALUES_NAMES_MAX_IDX] =
{
	"AXI_ACELITE",
	"CLUSTER_GROUPING",
	"COMPUTE",
	"COMPUTE_MORTON_CAPABLE",
	"COMPUTE_OVERLAP",
	"COMPUTE_OVERLAP_WITH_BARRIERS",
	"COREID_PER_OS",
	"DUST_POWER_ISLAND_S7",
	"DYNAMIC_DUST_POWER",
	"FASTRENDER_DM",
	"GPU_VIRTUALISATION",
	"GS_RTA_SUPPORT",
	"META_DMA",
	"MIPS",
	"PBE2_IN_XE",
	"PBVNC_COREID_REG",
	"PDS_PER_DUST",
	"PDS_TEMPSIZE8",
	"PERFBUS",
	"PERF_COUNTER_BATCH",
	"RAY_TRACING_DEPRECATED",
	"ROGUEXE",
	"S7_CACHE_HIERARCHY",
	"S7_TOP_INFRASTRUCTURE",
	"SCALABLE_VDM_GPP",
	"SIGNAL_SNOOPING",
	"SIMPLE_INTERNAL_PARAMETER_FORMAT",
	"SIMPLE_INTERNAL_PARAMETER_FORMAT_V1",
	"SIMPLE_INTERNAL_PARAMETER_FORMAT_V2",
	"SINGLE_BIF",
	"SLCSIZE8",
	"SLC_HYBRID_CACHELINE_64_128",
	"SLC_VIVT",
	"SYS_BUS_SECURE_RESET",
	"TDM_PDS_CHECKSUM",
	"TESSELLATION",
	"TLA",
	"TPU_CEM_DATAMASTER_GLOBAL_REGISTERS",
	"TPU_DM_GLOBAL_REGISTERS",
	"TPU_FILTERING_MODE_CONTROL",
	"VDM_DRAWINDIRECT",
	"VDM_OBJECT_LEVEL_LLS",
	"XE_MEMORY_HIERARCHY",
	"XT_TOP_INFRASTRUCTURE",
};

#define	ERNSBRNS_IDS_MAX_IDX	(31)

static const IMG_UINT32 gaui64ErnsBrnsIDs[ERNSBRNS_IDS_MAX_IDX] =
{
	36400,
	38344,
	42290,
	42321,
	42480,
	42606,
	43276,
	44455,
	44871,
	45914,
	46066,
	47025,
	50539,
	50767,
	51468,
	52563,
	54441,
	57193,
	57596,
	60084,
	61389,
	61450,
	62204,
	63027,
	63142,
	63553,
	64839,
	65168,
	65273,
	66622,
	67349,
};

#endif /* defined(DEBUG) */
#endif /* RGX_BVNC_TABLE_KM_H */
