/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright 2020-2023 NXP
 */
#ifndef S32GEN1_CLOCK_FREQ_H
#define S32GEN1_CLOCK_FREQ_H

#include <platform_def.h>

#define MHZ					(1000000UL)

/* Frequencies */
#define S32GEN1_PERIPH_PLL_VCO_FREQ		(2000 * MHZ)
#define S32GEN1_FXOSC_FREQ			(40 * MHZ)
#define S32GEN1_FIRC_FREQ			(48 * MHZ)
#define S32GEN1_LIN_BAUD_CLK_FREQ		(125 * MHZ)
#define S32GEN1_SDHC_CLK_FREQ			(400 * MHZ)
#define S32GEN1_DDR_PLL_VCO_FREQ		(1600 * MHZ)
#define S32GEN1_DDR_FREQ			(800 * MHZ)
#define S32GEN1_PERIPH_DFS3_FREQ		(800 * MHZ)

#if defined(PLAT_s32g2)
#define S32GEN1_A53_MAX_FREQ			(1000 * MHZ)
#define S32GEN1_A53_MIN_FREQ			(48 * MHZ)
#define S32GEN1_ARM_PLL_VCO_MAX_FREQ		(2000 * MHZ)
#define S32GEN1_ARM_PLL_PHI0_MAX_FREQ		(1000 * MHZ)
#define S32GEN1_A53_FREQ			(1000 * MHZ)
#define S32GEN1_ARM_PLL_VCO_FREQ		(2000 * MHZ)
#define S32GEN1_ARM_PLL_PHI0_FREQ		(1000 * MHZ)
#define S32GEN1_XBAR_2X_FREQ			(800 * MHZ)
#define S32GEN1_PERIPH_PLL_PHI0_MIN_FREQ	(100 * MHZ)
#define S32GEN1_PERIPH_PLL_PHI2_MIN_FREQ	(40 * MHZ)
#elif defined(PLAT_s32g3)
#define S32GEN1_A53_MAX_FREQ			(1300 * MHZ)
#define S32GEN1_A53_MIN_FREQ			(48 * MHZ)
#define S32GEN1_ARM_PLL_VCO_MAX_FREQ		(2600 * MHZ)
#define S32GEN1_ARM_PLL_PHI0_MAX_FREQ		(1300 * MHZ)
#define S32GEN1_A53_FREQ			(1300 * MHZ)
#define S32GEN1_ARM_PLL_VCO_FREQ		(2600 * MHZ)
#define S32GEN1_ARM_PLL_PHI0_FREQ		(1300 * MHZ)
#define S32GEN1_XBAR_2X_FREQ			(793236859UL)
#define S32GEN1_PERIPH_PLL_PHI0_MIN_FREQ	(100 * MHZ)
#define S32GEN1_PERIPH_PLL_PHI2_MIN_FREQ	(40 * MHZ)

#elif defined(PLAT_s32r)
#define S32GEN1_A53_MAX_FREQ			(800 * MHZ)
#define S32GEN1_A53_MIN_FREQ			    (38400000UL)
#define S32GEN1_ARM_PLL_VCO_MAX_FREQ		(1600 * MHZ)
#define S32GEN1_ARM_PLL_PHI0_MAX_FREQ		(800 * MHZ)
#define S32GEN1_A53_FREQ			(800 * MHZ)
#define S32GEN1_ARM_PLL_VCO_FREQ		(1600 * MHZ)
#define S32GEN1_ARM_PLL_PHI0_FREQ		(800 * MHZ)
#define S32GEN1_XBAR_2X_FREQ			(800 * MHZ)
#define S32GEN1_PERIPH_PLL_PHI0_MIN_FREQ	(0 * MHZ)
#define S32GEN1_PERIPH_PLL_PHI2_MIN_FREQ	(0 * MHZ)
#else
#error Undefined platform
#endif

#if defined(S32GEN1_QSPI_200MHZ)
#define S32GEN1_PERIPH_DFS1_FREQ	(800 * MHZ)
#define S32GEN1_QSPI_CLK_FREQ		(200 * MHZ)
#define S32GEN1_QSPI_2X_CLK_FREQ	(2 * S32GEN1_QSPI_CLK_FREQ)
#elif defined(S32GEN1_QSPI_166MHZ)
#define S32GEN1_PERIPH_DFS1_FREQ	(666666666)
#define S32GEN1_QSPI_CLK_FREQ		(166666666)
#define S32GEN1_QSPI_2X_CLK_FREQ	(333333333)
#elif defined(S32GEN1_QSPI_133MHZ)
#define S32GEN1_PERIPH_DFS1_FREQ	(800 * MHZ)
#define S32GEN1_QSPI_CLK_FREQ		(133333333)
#define S32GEN1_QSPI_2X_CLK_FREQ	(2 * S32GEN1_QSPI_CLK_FREQ)
#else
#error Undefined QSPI frequency
#endif

#endif
