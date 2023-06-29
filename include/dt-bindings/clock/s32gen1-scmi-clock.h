/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright 2020-2023 NXP
 */
#ifndef __DT_BINDINGS_SCMI_CLOCK_S32GEN1_H
#define __DT_BINDINGS_SCMI_CLOCK_S32GEN1_H

#define S32GEN1_SCMI_COMPLEX_CLK		0xFFFFFFFFU
#define S32GEN1_SCMI_NOT_IMPLEMENTED_CLK	0xFFFFFFFEU

#define S32GEN1_SCMI_CLK_BASE_ID	0U
#define S32GEN1_SCMI_CLK(N)		((N) + S32GEN1_SCMI_CLK_BASE_ID)
#define S32GEN1_PLAT_SCMI_CLK(N)	((N) + S32GEN1_SCMI_PLAT_CLK_BASE_ID)

#define S32GEN1_SCMI_CLK_VERSION_MAJOR	(1)
#define S32GEN1_SCMI_CLK_VERSION_MINOR	(0)

/* A53 */
#define S32GEN1_SCMI_CLK_A53		S32GEN1_SCMI_CLK(0)
/* SERDES */
#define S32GEN1_SCMI_CLK_SERDES_AXI	S32GEN1_SCMI_CLK(1)
#define S32GEN1_SCMI_CLK_SERDES_AUX	S32GEN1_SCMI_CLK(2)
#define S32GEN1_SCMI_CLK_SERDES_APB	S32GEN1_SCMI_CLK(3)
#define S32GEN1_SCMI_CLK_SERDES_REF	S32GEN1_SCMI_CLK(4)
/* FTM0 */
#define S32GEN1_SCMI_CLK_FTM0_SYS	S32GEN1_SCMI_CLK(5)
#define S32GEN1_SCMI_CLK_FTM0_EXT	S32GEN1_SCMI_CLK(6)
/* FTM1 */
#define S32GEN1_SCMI_CLK_FTM1_SYS	S32GEN1_SCMI_CLK(7)
#define S32GEN1_SCMI_CLK_FTM1_EXT	S32GEN1_SCMI_CLK(8)
/* FlexCAN */
#define S32GEN1_SCMI_CLK_FLEXCAN_REG	S32GEN1_SCMI_CLK(9)
#define S32GEN1_SCMI_CLK_FLEXCAN_SYS	S32GEN1_SCMI_CLK(10)
#define S32GEN1_SCMI_CLK_FLEXCAN_CAN	S32GEN1_SCMI_CLK(11)
#define S32GEN1_SCMI_CLK_FLEXCAN_TS	S32GEN1_SCMI_CLK(12)
/* LINFlexD */
#define S32GEN1_SCMI_CLK_LINFLEX_XBAR	S32GEN1_SCMI_CLK(13)
#define S32GEN1_SCMI_CLK_LINFLEX_LIN	S32GEN1_SCMI_CLK(14)
#define S32GEN1_SCMI_CLK_GMAC0_TS	S32GEN1_SCMI_CLK(15)
/* GMAC0 - SGMII */
#define S32GEN1_SCMI_CLK_GMAC0_RX_SGMII	S32GEN1_SCMI_CLK(16)
#define S32GEN1_SCMI_CLK_GMAC0_TX_SGMII	S32GEN1_SCMI_CLK(17)
/* GMAC0 - RGMII */
#define S32GEN1_SCMI_CLK_GMAC0_RX_RGMII	S32GEN1_SCMI_CLK(18)
#define S32GEN1_SCMI_CLK_GMAC0_TX_RGMII	S32GEN1_SCMI_CLK(19)
/* GMAC0 - RMII */
#define S32GEN1_SCMI_CLK_GMAC0_RX_RMII	S32GEN1_SCMI_CLK(20)
#define S32GEN1_SCMI_CLK_GMAC0_TX_RMII	S32GEN1_SCMI_CLK(21)
/* GMAC0 - MII */
#define S32GEN1_SCMI_CLK_GMAC0_RX_MII	S32GEN1_SCMI_CLK(22)
#define S32GEN1_SCMI_CLK_GMAC0_TX_MII	S32GEN1_SCMI_CLK(23)
#define S32GEN1_SCMI_CLK_GMAC0_AXI	S32GEN1_SCMI_CLK(24)
/* SPI */
#define S32GEN1_SCMI_CLK_SPI_REG	S32GEN1_SCMI_CLK(25)
#define S32GEN1_SCMI_CLK_SPI_MODULE	S32GEN1_SCMI_CLK(26)
/* QSPI */
#define S32GEN1_SCMI_CLK_QSPI_REG	S32GEN1_SCMI_CLK(27)
#define S32GEN1_SCMI_CLK_QSPI_AHB	S32GEN1_SCMI_CLK(28)
#define S32GEN1_SCMI_CLK_QSPI_FLASH2X	S32GEN1_SCMI_CLK(29)
#define S32GEN1_SCMI_CLK_QSPI_FLASH1X	S32GEN1_SCMI_CLK(30)
/* uSDHC */
#define S32GEN1_SCMI_CLK_USDHC_AHB	S32GEN1_SCMI_CLK(31)
#define S32GEN1_SCMI_CLK_USDHC_MODULE	S32GEN1_SCMI_CLK(32)
#define S32GEN1_SCMI_CLK_USDHC_CORE	S32GEN1_SCMI_CLK(33)
#define S32GEN1_SCMI_CLK_USDHC_MOD32K	S32GEN1_SCMI_CLK(34)
/* DDR */
#define S32GEN1_SCMI_CLK_DDR_REG	S32GEN1_SCMI_CLK(35)
#define S32GEN1_SCMI_CLK_DDR_PLL_REF	S32GEN1_SCMI_CLK(36)
#define S32GEN1_SCMI_CLK_DDR_AXI	S32GEN1_SCMI_CLK(37)
/* SRAM */
#define S32GEN1_SCMI_CLK_SRAM_AXI	S32GEN1_SCMI_CLK(38)
#define S32GEN1_SCMI_CLK_SRAM_REG	S32GEN1_SCMI_CLK(39)
/* I2C */
#define S32GEN1_SCMI_CLK_I2C_REG	S32GEN1_SCMI_CLK(40)
#define S32GEN1_SCMI_CLK_I2C_MODULE	S32GEN1_SCMI_CLK(41)
/* SIUL2 */
#define S32GEN1_SCMI_CLK_SIUL2_REG	S32GEN1_SCMI_CLK(42)
#define S32GEN1_SCMI_CLK_SIUL2_FILTER	S32GEN1_SCMI_CLK(43)
/* CRC */
#define S32GEN1_SCMI_CLK_CRC_REG	S32GEN1_SCMI_CLK(44)
#define S32GEN1_SCMI_CLK_CRC_MODULE	S32GEN1_SCMI_CLK(45)
/* EIM0 */
#define S32GEN1_SCMI_CLK_EIM0_REG	S32GEN1_SCMI_CLK(46)
#define S32GEN1_SCMI_CLK_EIM0_MODULE	S32GEN1_SCMI_CLK(47)
/* EIM0 */
#define S32GEN1_SCMI_CLK_EIM123_REG	S32GEN1_SCMI_CLK(48)
#define S32GEN1_SCMI_CLK_EIM123_MODULE	S32GEN1_SCMI_CLK(49)
/* EIM */
#define S32GEN1_SCMI_CLK_EIM_REG	S32GEN1_SCMI_CLK(50)
#define S32GEN1_SCMI_CLK_EIM_MODULE	S32GEN1_SCMI_CLK(51)
/* FCCU */
#define S32GEN1_SCMI_CLK_FCCU_MODULE	S32GEN1_SCMI_CLK(52)
#define S32GEN1_SCMI_CLK_FCCU_SAFE	S32GEN1_SCMI_CLK(53)
/* RTC */
#define S32GEN1_SCMI_CLK_RTC_REG	S32GEN1_SCMI_CLK(54)
#define S32GEN1_SCMI_CLK_RTC_SIRC	S32GEN1_SCMI_CLK(55)
#define S32GEN1_SCMI_CLK_RTC_FIRC	S32GEN1_SCMI_CLK(56)
/* SWT */
#define S32GEN1_SCMI_CLK_SWT_MODULE	S32GEN1_SCMI_CLK(57)
#define S32GEN1_SCMI_CLK_SWT_COUNTER	S32GEN1_SCMI_CLK(58)
/* STM */
#define S32GEN1_SCMI_CLK_STM_MODULE	S32GEN1_SCMI_CLK(59)
#define S32GEN1_SCMI_CLK_STM_REG	S32GEN1_SCMI_CLK(60)
/* PIT */
#define S32GEN1_SCMI_CLK_PIT_MODULE	S32GEN1_SCMI_CLK(61)
#define S32GEN1_SCMI_CLK_PIT_REG	S32GEN1_SCMI_CLK(62)
/* eDMA */
#define S32GEN1_SCMI_CLK_EDMA_MODULE	S32GEN1_SCMI_CLK(63)
#define S32GEN1_SCMI_CLK_EDMA_AHB	S32GEN1_SCMI_CLK(64)
/* ADC */
#define S32GEN1_SCMI_CLK_SAR_ADC_BUS	S32GEN1_SCMI_CLK(65)
/* CMU */
#define S32GEN1_SCMI_CLK_CMU_MODULE	S32GEN1_SCMI_CLK(66)
#define S32GEN1_SCMI_CLK_CMU_REG	S32GEN1_SCMI_CLK(67)
/* TMU */
#define S32GEN1_SCMI_CLK_TMU_MODULE	S32GEN1_SCMI_CLK(68)
#define S32GEN1_SCMI_CLK_TMU_REG	S32GEN1_SCMI_CLK(69)
/* FlexRay */
#define S32GEN1_SCMI_CLK_FR_REG		S32GEN1_SCMI_CLK(70)
#define S32GEN1_SCMI_CLK_FR_PE		S32GEN1_SCMI_CLK(71)
/* WKPU */
#define S32GEN1_SCMI_CLK_WKPU_MODULE	S32GEN1_SCMI_CLK(72)
#define S32GEN1_SCMI_CLK_WKPU_REG	S32GEN1_SCMI_CLK(73)
/* SRC */
#define S32GEN1_SCMI_CLK_SRC_MODULE	S32GEN1_SCMI_CLK(74)
#define S32GEN1_SCMI_CLK_SRC_REG	S32GEN1_SCMI_CLK(75)
/* SRC-TOP */
#define S32GEN1_SCMI_CLK_SRC_TOP_MODULE	S32GEN1_SCMI_CLK(76)
#define S32GEN1_SCMI_CLK_SRC_TOP_REG	S32GEN1_SCMI_CLK(77)
/* CTU */
#define S32GEN1_SCMI_CLK_CTU_MODULE	S32GEN1_SCMI_CLK(78)
#define S32GEN1_SCMI_CLK_CTU_CTU	S32GEN1_SCMI_CLK(79)
/* DBG */
#define S32GEN1_SCMI_CLK_DBG_SYS4	S32GEN1_SCMI_CLK(80)
#define S32GEN1_SCMI_CLK_DBG_SYS2	S32GEN1_SCMI_CLK(81)
/* Cortex-M7 */
#define S32GEN1_SCMI_CLK_M7_CORE	S32GEN1_SCMI_CLK(82)
/* DMAMUX */
#define S32GEN1_SCMI_CLK_DMAMUX_MODULE	S32GEN1_SCMI_CLK(83)
#define S32GEN1_SCMI_CLK_DMAMUX_REG	S32GEN1_SCMI_CLK(84)
/* GIC */
#define S32GEN1_SCMI_CLK_GIC_MODULE	S32GEN1_SCMI_CLK(85)

#define S32GEN1_SCMI_PLAT_CLK_BASE_ID	S32GEN1_SCMI_CLK(86)

#define S32GEN1_SCMI_CLK_MAX_ID		S32GEN1_PLAT_SCMI_CLK(32)

#endif
