/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_bclink_api.h"
#include "mec_retval.h"

#define MEC_BCL_GIRQ             18
#define MEC_BCL_BCLR_GIRQ_POS    6
#define MEC_BCL_BERR_GIRQ_POS    7
#define MEC_BCL_GIRQ_AGGR_NVIC   10
#define MEC_BCL_BCLR_NVIC        97
#define MEC_BCL_BERR_NVIC        96


#define MEC_BCL_BUSY_CLR_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_BCL_GIRQ, MEC_BCL_BUSY_CLR_GIRQ_POS, \
                   MEC_BCL_GIRQ_AGGR_NVIC, MEC_BCL_BUSY_CLR_NVIC)
#define MEC_BCL_ERR_ECIA_INFO      \
    MEC5_ECIA_INFO(MEC_BCL_GIRQ, MEC_BCL_ERR_GIRQ_POS, MEC_BCL_GIRQ_AGGR_NVIC, MEC_BCL_ERR_NVIC)

#define MEC_BCL_BCLR_DEVI_IDX 0
#define MEC_BCL_BERR_DEVI_IDX 1

/* BC-Link EC-only registers
 *
 * EC Data (WO)
 * EC KB status (RW except OBF, IBF, and CD)
 * KB Control RW
 * EC AUX Data (WO). Writes clear CD bit and set IBF in KB Status
 * PCOBF bit[0] is PCOBF (RW) cleared when Host reads Data or AUX Data.
 */

/* ---- Public API ---- */

/* Initialize BC-Link controller
 * BC-Link is a two pin interface (clock and data).
 * BCL clock is derived from the AHB 48MHz clock using an 8-bit divider: Fbcl = 48MHz / (div + 1)
 * Programming frequency divider requires putting BC-Link controller into soft reset.
 * BC-Link controller requires 48 BC-Link clocks after soft-reset is released before it is ready
 * and clears the BUSY read-only status. We do not wait for BUSY to clear.  Also, when HW clears
 * BUSY due to soft-reset it does NOT generate the BUSY clear interrupt.
 */
int mec_hal_bcl_init(struct mec_bcl_regs *base, uint32_t flags)
{
    uint32_t girq_bitmap = MEC_BIT(MEC_BCL_BCLR_GIRQ_POS) | MEC_BIT(MEC_BCL_BERR_GIRQ_POS);

#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_BCL);
    /* put BCL controller and bus into reset before programing and clear error status */
    base->STATUS = MEC_BIT(MEC_BCL_STATUS_SRST_Pos) | MEC_BIT(MEC_BCL_STATUS_BCERR_Pos);

    /* frequency divider can only be programmed while reset is active or not busy */
    base->CLKSEL = (flags & MEC_BCL_CFG_FREQ_DIV_MSK) >> MEC_BCL_CFG_FREQ_DIV_POS;

    mec_hal_girq_bm_clr_src(MEC_BCL_GIRQ, girq_bitmap);

    /* take BC-Link controller out of reset */
    base->STATUS &= (uint32_t)~MEC_BIT(MEC_BCL_STATUS_SRST_Pos);

    return MEC_RET_OK;
}

int mec_hal_bcl_soft_reset(struct mec_bcl_regs *regs, uint8_t enable)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (enable) {
        regs->STATUS |= MEC_BIT(MEC_BCL_STATUS_SRST_Pos);
    } else {
        regs->STATUS = (uint32_t)~MEC_BIT(MEC_BCL_STATUS_SRST_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_bcl_get_freq(struct mec_bcl_regs *regs, uint32_t *freq_hz)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return false;
    }
#endif
    if (!freq_hz) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t fdiv = (regs->CLKSEL & 0xffu);

    *freq_hz = (uint32_t)(MEC_BCL_SOURCE_CLOCK_FREQ) / (fdiv + 1u);

    return MEC_RET_OK;
}

bool mec_hal_bcl_is_busy(struct mec_bcl_regs *regs)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return true;
    }
#endif

    if (regs->STATUS & MEC_BIT(MEC_BCL_STATUS_BUSY_Pos)) {
        return true;
    }

    return false;
}

/* BC-Link clock frequency = Source clock frequency / (clock divider + 1) */
int mec_hal_bcl_set_freq(struct mec_bcl_regs *regs, uint32_t freq_hz)
{
    uint32_t clkdiv = 0; /* maximum frequency */

#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return false;
    }
#endif

    if (mec_hal_bcl_is_busy(regs)) {
        return MEC_RET_ERR_BUSY;
    }

    if ((freq_hz < MEC_BCL_MIN_CLK_FREQ) || (freq_hz > MEC_BCL_MAX_CLK_FREQ)) {
        return MEC_RET_ERR_INVAL;
    }

    clkdiv = MEC_BCL_SOURCE_CLOCK_FREQ / freq_hz;
    if (clkdiv) {
        clkdiv--;
    }

    regs->CLKSEL = (regs->CLKSEL & 0xffffff00u) | (clkdiv & 0xffu);

    return MEC_RET_OK;
}

bool mec_hal_bcl_is_error(struct mec_bcl_regs *regs)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return false;
    }
#endif

    if (regs->STATUS & MEC_BIT(MEC_BCL_STATUS_BCERR_Pos)) {
        return true;
    }

    return false;
}

int mec_hal_bcl_clear_error(struct mec_bcl_regs *regs)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    regs->STATUS |= MEC_BIT(MEC_BCL_STATUS_BCERR_Pos);
    mec_hal_girq_bm_clr_src(MEC_BCL_GIRQ, MEC_BIT(MEC_BCL_BERR_GIRQ_POS));

    return MEC_RET_OK;
}

/* Busy-Clear status is read-only in the BC-Link status register.
 * We can clear the latched R/W1C GIRQ bit busy clear is connected to
 * but it will be latched again while the controller is not busy.
 */
int mec_hal_bcl_clear_not_busy(struct mec_bcl_regs *regs)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_bm_clr_src(MEC_BCL_GIRQ, MEC_BIT(MEC_BCL_BCLR_GIRQ_POS));

    return MEC_RET_OK;
}

int mec_hal_bcl_intr_ctrl(struct mec_bcl_regs *regs, uint8_t msk, uint8_t enable)
{
    uint32_t regmsk = 0, ien = 0;

#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (msk & MEC_BIT(MEC_BCL_BCLR_IRQ_POS)) {
        regmsk |= MEC_BIT(MEC_BCL_STATUS_BCLR_IEN_Pos);
        if (enable) {
            ien |= MEC_BIT(MEC_BCL_STATUS_BCLR_IEN_Pos);
        }
    }

    if (msk & MEC_BIT(MEC_BCL_BERR_IRQ_POS)) {
        regmsk |= MEC_BIT(MEC_BCL_STATUS_BERR_IEN_Pos);
        if (enable) {
            ien |= MEC_BIT(MEC_BCL_STATUS_BERR_IEN_Pos);
        }
    }

    if (!regmsk) {
        return MEC_RET_OK;
    }

    regs->STATUS = (regs->STATUS & (uint32_t)~regmsk) | ien;

    return MEC_RET_OK;
}

int mec_hal_bcl_get_target_address(struct mec_bcl_regs *regs, uint8_t *target_address)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (target_address) {
        *target_address = (uint8_t)(regs->DESTA & 0xffu);
    }

    return MEC_RET_OK;
}

int mec_hal_bcl_set_target_address(struct mec_bcl_regs *regs, uint8_t target_address)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    regs->DESTA = target_address;

    return MEC_RET_OK;
}


int mec_hal_bcl_get_data(struct mec_bcl_regs *regs, uint8_t *data)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (data) {
        *data = (uint8_t)regs->DATA;
    }

    return MEC_RET_OK;
}

int mec_hal_bcl_set_data(struct mec_bcl_regs *regs, uint8_t data)
{
#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    regs->DATA = data;

    return MEC_RET_OK;
}

int mec_hal_bcl_start(struct mec_bcl_regs *regs, uint8_t target_reg, uint8_t wrdata, uint32_t flags)
{
    uint32_t girq_bitmap = MEC_BIT(MEC_BCL_BCLR_GIRQ_POS) | MEC_BIT(MEC_BCL_BERR_GIRQ_POS);

#ifdef MEC_BCL_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_BCL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (regs->STATUS & MEC_BIT(MEC_BCL_STATUS_BUSY_Pos)) {
        return MEC_RET_ERR_BUSY;
    }

    regs->STATUS |= MEC_BIT(MEC_BCL_STATUS_BCERR_Pos);
    mec_hal_girq_bm_clr_src(MEC_BCL_GIRQ, girq_bitmap);

    if (flags & MEC_BCL_START_FLAG_BERR_IEN) {
        regs->STATUS |= MEC_BIT(MEC_BCL_STATUS_BERR_IEN_Pos);
    }

    /* write target register address to BC-Link address register */
    regs->DESTA = target_reg;

    if (flags & MEC_BCL_START_FLAG_READ) {
        regs->DATA; /* first read of data register triggers transmit of read packet */
    } else {
        regs->DATA = wrdata; /* write data register triggers transmit of write packet */
    }

    /* HW is busy, try clearing the GIRQ latched busy-clear status */
    mec_hal_girq_bm_clr_src(MEC_BCL_GIRQ, MEC_BIT(MEC_BCL_BCLR_GIRQ_POS));

    /* Request busy-clear(done) interrupt? */
    if (flags & MEC_BCL_START_FLAG_BCLR_IEN) {
        regs->STATUS |= MEC_BIT(MEC_BCL_STATUS_BCLR_IEN_Pos);
    }

    return MEC_RET_OK;
}

/* end mec_bclink.c */
