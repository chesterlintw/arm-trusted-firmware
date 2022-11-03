#
# Copyright 2022 NXP
#
# SPDX-License-Identifier: BSD-3-Clause
#

include plat/nxp/s32/s32g/s32g3/s32g3.mk

S32_BOARD_PATH		:= ${PLAT_SOC_PATH}/s32g399ardb3

PLAT_INCLUDES		+= -I${S32_BOARD_PATH}/include \

PLAT_BL_COMMON_SOURCES  += ${S32_BOARD_PATH}/s32g399ardb3_ddr_fixup.c

DTB_FILE_NAME		?= s32g399a-rdb3.dtb
