/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <s32_mc_rgm.h>
#include <lib/mmio.h>

static uintptr_t s32_mc_rgm_get_addr(void *rgm, uint32_t part)
{
	return 0;
}

uint32_t s32_mc_rgm_read(void *rgm, uint32_t part)
{
	return 0;
}

/*  ERR051700
 *  Releasing more than one Software Resettable Domain (SRD)
 *  from reset simultaneously, by clearing the corresponding
 *  peripheral MC_RGM_PRSTn[PERIPH_x_RST] reset control may
 *  cause a false setting of the Fault Collection and
 *  Control Unit (FCCU) Non-Critical Fault (NCF) flag
 *  corresponding to a Memory-Test-Repair (MTR) Error
 */
#if (ERRATA_S32_051700 == 1)
void s32_mc_rgm_periph_reset(void *rgm, uint32_t part, uint32_t value)
{
	uint32_t current_regs, mask;
	uint32_t current_bit_checked, i;
	uintptr_t addr;

	addr = s32_mc_rgm_get_addr(rgm, part);
	current_regs =  s32_mc_rgm_read(rgm, part);
	/* Create a mask with all changed bits */
	mask = current_regs ^ value;

	while (mask) {
		i = __builtin_ffs(mask) - 1U;
		current_bit_checked = BIT_32(i);

		/* Check if we assert or de-assert.
		 * Also wait for completion.
		 */
		if (value & current_bit_checked) {
			mmio_setbits_32(addr, current_bit_checked);
			while (!(s32_mc_rgm_read(rgm, part) & current_bit_checked))
				;
		} else {
			mmio_clrbits_32(addr, current_bit_checked);
			while (s32_mc_rgm_read(rgm, part) & current_bit_checked)
				;
		}

		mask &= ~current_bit_checked;
	}
}
#else /* ERRATA_S32_051700 */
void s32_mc_rgm_periph_reset(void *rgm, uint32_t part, uint32_t value)
{
	uintptr_t addr;

	addr = s32_mc_rgm_get_addr(rgm, part);
	mmio_write_32(addr, value);
}
#endif /* ERRATA_S32_051700 */
