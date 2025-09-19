/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>

#ifdef MEC5_KSCAN_INSTANCES

#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_kscan_api.h"
#include "mec_retval.h"

#define MEC_KSCAN_GIRQ      21
#define MEC_KSCAN_GIRQ_POS  25
#define MEC_KSCAN_GIRQ_NVIC 13
#define MEC_KSCAN_GIRQ_NVIC_DIRECT 135

#define MEC_KSCAN_ECIA_INFO MEC5_ECIA_INFO(MEC_KSCAN_GIRQ, MEC_KSCAN_GIRQ_POS, \
                                           MEC_KSCAN_GIRQ_NVIC, MEC_KSCAN_GIRQ_NVIC_DIRECT)

#define MEC_KSCAN_KSO_SEL_DLFT 0x40u

/* Key scan EC-only registers
 * Host-to-EC Data (RO) returns data written by Host to Data/Cmd registers
 * EC Data (WO)
 * EC KB status (RW except OBF, IBF, and CD)
 * KB Control RW
 * EC AUX Data (WO). Writes clear CD bit and set IBF in KB Status
 * PCOBF bit[0] is PCOBF (RW) cleared when Host reads Data or AUX Data.
 */

static void kscan_default(struct mec_kscan_regs *regs)
{
    regs->KSI_INT_EN = 0;
    regs->KSO_SEL = MEC_KSCAN_KSO_SEL_DLFT;
    regs->EXT_CTRL = 0;
    regs->KSI_STS = 0xffu;
}

static void kscan_girq_dis_clr(void)
{
    mec_hal_girq_ctrl(MEC_KSCAN_ECIA_INFO, 0);
    mec_hal_girq_clr_src(MEC_KSCAN_ECIA_INFO);
}

/* ---- Public API ---- */

/* Initialize the key scan controller */
int mec_hal_kscan_init(struct mec_kscan_regs *regs, uint32_t flags, uint8_t ksi_in_intr_mask)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_KSCAN0);
    if (flags & MEC_KSCAN_CFG_RESET) {
        mec_hal_pcr_blk_reset(MEC_PCR_KSCAN0);
    } else {
        kscan_default(regs);
    }

    kscan_girq_dis_clr();

    if (flags & MEC_KSCAN_KSO_PREDRIVE_EN) {
        regs->EXT_CTRL |= MEC_BIT(MEC_KSCAN_EXT_CTRL_PREDRIVE_Pos);
    }

    /* When a KSO is selected individually via the KSO_SELECT field
     * it can be driven low (default) or high if this flag is selected.
     */
    if (flags & MEC_KSCAN_KSO_SELECT_DRV_HI) {
        regs->KSO_SEL |= MEC_BIT(MEC_KSCAN_KSO_SEL_KSO_INVERT_Pos);
    }

    regs->KSI_INT_EN = ksi_in_intr_mask;
    regs->KSI_STS = 0xffu;

    if (flags & MEC_KSCAN_INTR_EN) {
            mec_hal_girq_ctrl(MEC_KSCAN_ECIA_INFO, 1);
    }

    if (flags & MEC_KSCAN_CFG_ENABLE) {
        regs->KSO_SEL &= (uint8_t)~MEC_BIT(MEC_KSCAN_KSO_SEL_KSCAN_DIS_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_kscan_enable(struct mec_kscan_regs *regs, uint8_t enable)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (enable) {
        regs->KSO_SEL &= (uint8_t)~MEC_BIT(MEC_KSCAN_KSO_SEL_KSCAN_DIS_Pos);
    } else {
        regs->KSO_SEL |= MEC_BIT(MEC_KSCAN_KSO_SEL_KSCAN_DIS_Pos);
    }

    return MEC_RET_OK;
}

bool mec_hal_kscan_is_enabled(struct mec_kscan_regs *regs)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return false;
    }
#endif

    if (regs->KSO_SEL & MEC_BIT(MEC_KSCAN_KSO_SEL_KSCAN_DIS_Pos)) {
        return false;
    }

    return true;
}

int mec_hal_kscan_kso_pre_drive_enable(struct mec_kscan_regs *regs, uint8_t enable)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return false;
    }
#endif

    if (enable) {
        regs->EXT_CTRL |= MEC_BIT(MEC_KSCAN_EXT_CTRL_PREDRIVE_Pos);
    } else {
        regs->EXT_CTRL &= (uint8_t)~MEC_BIT(MEC_KSCAN_EXT_CTRL_PREDRIVE_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_kscan_girq_en(struct mec_kscan_regs *regs)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_ctrl(MEC_KSCAN_ECIA_INFO, 1);

    return MEC_RET_OK;
}

int mec_hal_kscan_girq_dis(struct mec_kscan_regs *regs)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_ctrl(MEC_KSCAN_ECIA_INFO, 0);

    return MEC_RET_OK;
}

int mec_hal_kscan_girq_clr(struct mec_kscan_regs *regs)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_clr_src(MEC_KSCAN_ECIA_INFO);

    return MEC_RET_OK;
}

uint32_t mec_hal_kscan_girq_result(struct mec_kscan_regs *regs)
{
#ifdef MEC_KSCAN_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_KSCAN0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    return mec_hal_girq_result(MEC_KSCAN_ECIA_INFO);
}

void mec_hal_kscan_wake_enable(uint8_t enable)
{
    if (MEC_KSCAN0->KSO_SEL & MEC_BIT(MEC_KSCAN_KSO_SEL_KSCAN_DIS_Pos)) {
        return;
    }

    if (enable) {
        mec_hal_girq_ctrl(MEC_KSCAN_ECIA_INFO, 1);
    } else {
        mec_hal_girq_ctrl(MEC_KSCAN_ECIA_INFO, 0);
        mec_hal_girq_clr_src(MEC_KSCAN_ECIA_INFO);
    }
}
#endif /* MEC5_KSCAN_INSTANCES */
/* end mec_kscan.c */
