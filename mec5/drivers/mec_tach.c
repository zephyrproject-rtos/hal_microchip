/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_tach_api.h"
#include "mec_retval.h"

#if MEC5_TACH_INSTANCES > 0

#define MEC_TACH0_ECIA_INFO MEC5_ECIA_INFO(17, 1, 9, 71)
#define MEC_TACH1_ECIA_INFO MEC5_ECIA_INFO(17, 2, 9, 72)
#define MEC_TACH2_ECIA_INFO MEC5_ECIA_INFO(17, 3, 9, 73)
#define MEC_TACH3_ECIA_INFO MEC5_ECIA_INFO(17, 4, 9, 159)

struct mec_tach_info {
    uintptr_t base_addr;
    uint32_t devi;
    uint16_t pcr_id;
};

static const struct mec_tach_info tach_instances[MEC5_TACH_INSTANCES] = {
    {MEC_TACH0_BASE, MEC_TACH0_ECIA_INFO, MEC_PCR_TACH0 },
    {MEC_TACH1_BASE, MEC_TACH1_ECIA_INFO, MEC_PCR_TACH1 },
    {MEC_TACH2_BASE, MEC_TACH2_ECIA_INFO, MEC_PCR_TACH2 },
    {MEC_TACH3_BASE, MEC_TACH3_ECIA_INFO, MEC_PCR_TACH3 },
};

static struct mec_tach_info const *tach_get_info(struct mec_tach_regs *regs)
{
    for (int i = 0; i < MEC5_TACH_INSTANCES; i++) {
        const struct mec_tach_info *p = &tach_instances[i];

        if (tach_instances[i].base_addr == (uintptr_t)regs) {
            return p;
        }
    }

    return NULL;
}

int mec_hal_tach_init(struct mec_tach_regs *regs, uint32_t limits, uint32_t flags)
{
    const struct mec_tach_info *info = tach_get_info(regs);
    uint32_t ctrl = 0, temp = 0;
    bool enable_girq = false;

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);
    if (flags & MEC5_TACH_CFG_RESET) {
        mec_hal_pcr_blk_reset(info->pcr_id);
    } else {
        regs->CTRL = 0u;
        regs->STATUS = UINT32_MAX;
    }

    mec_hal_girq_ctrl(info->devi, 0);
    mec_hal_girq_clr_src(info->devi);

    /* program high and low 16-bit counter limits */
    regs->LIMIT_LO = (uint16_t)(limits & 0xffffu);
    regs->LIMIT_HI = (uint16_t)(limits >> 16);

    /* program number of tach edges for the count interval */
    temp = (flags & MEC5_TACH_CFG_INTERVAL_EDGES_MSK) >> MEC5_TACH_CFG_INTERVAL_EDGES_POS;
    ctrl |= ((temp << MEC_TACH_CTRL_EDGES_Pos) & MEC_TACH_CTRL_EDGES_Msk);

    if (flags & MEC5_TACH_CFG_FILTER_EN) {
        ctrl |= MEC_BIT(MEC_TACH_CTRL_FILT_IN_Pos);
    }

    /* counter is incremented on rising edge of tach input or rising edge
     * of Tach input clock. Input clock is the PCR slow clock.
     */
    if (flags & MEC5_TACH_CFG_CNT_INCR_CLK) {
        ctrl |= MEC_BIT(MEC_TACH_CTRL_RDMODE_Pos);
    }

    if (flags & MEC5_TACH_CFG_OOL_INTR_EN) { /* out of limit interrupt? */
        ctrl |= MEC_BIT(MEC_TACH_CTRL_ENOOL_Pos);
        enable_girq = true;
    }

    if (flags & MEC5_TACH_CFG_CNT_RDY_INTR_EN) {
        ctrl |= MEC_BIT(MEC_TACH_CTRL_CNTRDY_IEN_Pos);
        enable_girq = true;
    }

    if (flags & MEC5_TACH_CFG_INPUT_CHG_INTR_EN) {
        ctrl |= MEC_BIT(MEC_TACH_CTRL_INTOG_IEN_Pos);
        enable_girq = true;
    }

    if (flags & MEC5_TACH_CFG_ENABLE) {
        ctrl |= MEC_BIT(MEC_TACH_CTRL_ENABLE_Pos);
    }

    if (enable_girq) {
        mec_hal_girq_ctrl(info->devi, 1);
    }

    regs->CTRL = ctrl;

    return MEC_RET_OK;
}

void mec_hal_tach_enable(struct mec_tach_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CTRL |= MEC_BIT(MEC_TACH_CTRL_ENABLE_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(MEC_TACH_CTRL_ENABLE_Pos);
    }
}

bool mec_hal_tach_is_enabled(struct mec_tach_regs *regs)
{
    if (!regs) {
        return false;
    }

    return (regs->CTRL & MEC_BIT(MEC_TACH_CTRL_ENABLE_Pos)) ? true : false;
}

uint32_t mec_hal_tach_clock_freq(void)
{
    return mec_hal_pcr_slow_clock_freq_get();
}

uint32_t mec_hal_tach_counter(struct mec_tach_regs *regs)
{
    const struct mec_tach_info *info = tach_get_info(regs);

    if (!info) {
        return 0;
    }

    return (regs->CTRL & MEC_TACH_CTRL_COUNT_Msk) >> MEC_TACH_CTRL_COUNT_Pos;
}

uint32_t mec_hal_tach_status(struct mec_tach_regs *regs)
{
    return regs->STATUS;
}

void mec_hal_tach_status_clr(struct mec_tach_regs *regs, uint32_t status)
{
    regs->STATUS = status;
}

int mec_hal_tach_intr_enable(struct mec_tach_regs *regs, uint32_t intr_events, uint8_t enable)
{
    uint32_t msk = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (intr_events & MEC_BIT(MEC5_TACH_IEN_OOL_POS)) {
        msk |= MEC_BIT(MEC_TACH_CTRL_ENOOL_Pos);
    }

    if (intr_events & MEC_BIT(MEC5_TACH_IEN_CNT_RDY_POS)) {
        msk |= MEC_BIT(MEC_TACH_CTRL_CNTRDY_IEN_Pos);
    }

    if (intr_events & MEC_BIT(MEC5_TACH_IEN_INPUT_TOGGLE_POS)) {
        msk |= MEC_BIT(MEC_TACH_CTRL_INTOG_IEN_Pos);
    }

    if (msk) {
        if (enable) {
            regs->CTRL |= msk;
        } else {
            regs->CTRL &= (uint32_t)~msk;
        }
    }

    return MEC_RET_OK;
};

void mec_hal_tach_girq_status_clr(struct mec_tach_regs *regs)
{
    const struct mec_tach_info *info = tach_get_info(regs);

    if (!info) {
        return;
    }

    mec_hal_girq_clr_src(info->devi);
}

void mec_hal_tach_girq_enable(struct mec_tach_regs *regs, uint8_t enable)
{
    const struct mec_tach_info *info = tach_get_info(regs);

    if (!info) {
        return;
    }

    mec_hal_girq_ctrl(info->devi, enable);
}

#endif /* MEC5_TACH_INSTANCES */
/* end mec_tach.c */
