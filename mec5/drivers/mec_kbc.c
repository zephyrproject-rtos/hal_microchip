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
#include "mec_kbc_api.h"
#include "mec_retval.h"

#define MEC_KBC_GIRQ         15
#define MEC_KBC_OBE_GIRQ_POS 18
#define MEC_KBC_IBF_GIRQ_POS 19

#define MEC_KBC_OBE_ECIA_INFO MEC5_ECIA_INFO(15, 18, 7, 58)
#define MEC_KBC_IBF_ECIA_INFO MEC5_ECIA_INFO(15, 19, 7, 60)

#define MEC_KBC_OBE_DEVI_IDX 0
#define MEC_KBC_IBF_DEVI_IDX 1

static void port92h_ctrl(uint8_t enable)
{
    struct mec_port92_regs *regs = (struct mec_port92_regs *)MEC_PORT92_BASE;

    if (enable) {
        regs->P92ACT |= MEC_BIT(MEC_PORT92_P92ACT_ENABLE_Pos);
    } else {
        regs->P92ACT &= (uint8_t)~MEC_BIT(MEC_PORT92_P92ACT_ENABLE_Pos);
    }
}

/* KBC EC-only registers
 * Host-to-EC Data (RO) returns data written by Host to Data/Cmd registers
 * EC Data (WO)
 * EC KB status (RW except OBF, IBF, and CD)
 * KB Control RW
 * EC AUX Data (WO). Writes clear CD bit and set IBF in KB Status
 * PCOBF bit[0] is PCOBF (RW) cleared when Host reads Data or AUX Data.
 */

/* ---- Public API ---- */

/* Initialize EM8042 keyboard controller.
 * This peripheral is reset by chip reset (RESET_SYS), host power rail reset
 * (RESET_VCC), or host reset signal (PCI_RESET# or PLTRST#).
 * RESET_VCC can be EC firmware controlled via the PWR_INV bit in the
 * PCR Reset Control register.
 * EM8042 keyboard controller has two interrupt signals: KIRQ and MIRQ
 * connected to individual GIRQ15 bits and to individual NVIC inputs.
 * If direct NVIC interrupt mode is used, we can ignore the GIRQ15 KIRQ
 * and MIRQ status bits. Only the GIRQ enables matter.
 * KIRQ and MIRQ control in the KBC is not independent.
 * KBC.Control.OBFEN = 0 HW drivers both KIRQ and MIRQ low (inactive).
 * KBC.Control.OBFEN = 1 enables KBC to assert both KIRQ and MIRQ.
 * We can individually enable/disable KIRQ and MIRQ using the GIRQ enable bits.
 * KBC.Control.PCOBFEN selects the event causing KIRQ to assert.
 *  PCOBFEN = 0. KIRQ goes active on writes to Host-to-EC Data register.
 *  PCOBFEN = 1. KIRQ goes active on writes to PCOBF register.
 * KBC.Control.AUXH selects the event causing MIRQ to assert.
 *  AUXH = 0. MIRQ goes active on writes to EC AUX Data register.
 *  AUXH = 1. MIRQ goes active on writes to AUXOBF bit in EC KB Status register.
 */
int mec_hal_kbc_init(struct mec_kbc_regs *base, uint32_t flags)
{
    uint8_t ctrl = 0u, msk = 0u, val = 0u;

    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_KBC0);
    if (flags & MEC_KBC_RESET) {
        mec_hal_pcr_blk_reset(MEC_PCR_KBC0);
    } else {
        base->ACTV &= (uint8_t)~MEC_BIT(MEC_KBC_ACTV_ENABLE_Pos);
    }

    mec_hal_kbc_girq_dis(base, MEC_KBC_IBF_IRQ | MEC_KBC_OBE_IRQ);
    mec_hal_kbc_girq_clr(base, MEC_KBC_IBF_IRQ | MEC_KBC_OBE_IRQ);

    val = (flags & MEC_KBC_PORT92_EN) ? 1 : 0;
    port92h_ctrl(val);

    if (flags & MEC_KBC_GATEA20_FWC_EN) {
        ctrl |= MEC_BIT(MEC_KBC_KECR_SAEN_Pos);
    }

    if (flags & (MEC_KBC_IBF_IRQ | MEC_KBC_OBE_IRQ)) {
        ctrl |= MEC_BIT(MEC_KBC_KECR_OBFEN_Pos);
    }

    if (flags & MEC_KBC_PCOBF_EN) {
        ctrl |= MEC_BIT(MEC_KBC_KECR_PCOBFEN_Pos);
    }
    if (flags & MEC_KBC_AUXOBF_EN) {
        ctrl |= MEC_BIT(MEC_KBC_KECR_AUXH_Pos);
    }

    if (flags & MEC_KBC_UD3_SET) {
        if (flags & MEC_KBC_UD3_ONE) {
            ctrl |= MEC_BIT(MEC_KBC_KECR_UD3_Pos);
        }
    }

    if (flags & MEC_KBC_UD4_SET) {
        if (flags & MEC_KBC_UD4_0_ONE) {
            ctrl |= MEC_BIT(MEC_KBC_KECR_UD4_Pos);
        }
        if (flags & MEC_KBC_UD4_1_ONE) {
            ctrl |= MEC_BIT(MEC_KBC_KECR_UD4_Pos + 1);
        }
    }

    if (flags & MEC_KBC_UD5_SET) {
        if (flags & MEC_KBC_UD5_ONE) {
            ctrl |= MEC_BIT(MEC_KBC_KECR_UD5_Pos);
        }
    }

    if (flags & MEC_KBC_UD0_SET) {
        msk |= MEC_KBC_KESTATUS_UD0_Msk;
        if (flags & MEC_KBC_UD0_ONE) {
            val |= MEC_BIT(MEC_KBC_KESTATUS_UD0_Pos);
        }
    }

    if (flags & MEC_KBC_UD1_SET) {
        msk |= MEC_KBC_KESTATUS_UD1_Msk;
        if (flags & MEC_KBC_UD1_SET) {
            val |= MEC_BIT(MEC_KBC_KESTATUS_UD1_Pos);
        }
    }

    if (flags & MEC_KBC_UD2_SET) {
        msk |= MEC_KBC_KESTATUS_UD2_Msk;
        if (flags & MEC_KBC_UD2_0_ONE) {
            val |= MEC_BIT(MEC_KBC_KESTATUS_UD2_Pos);
        }
        if (flags & MEC_KBC_UD2_1_ONE) {
            val |= MEC_BIT(MEC_KBC_KESTATUS_UD2_Pos + 1);
        }
    }

    if (msk) {
        base->KESTATUS = (base->KESTATUS & ~msk) | val;
    }

    base->KECR = ctrl;
    base->ACTV |= MEC_BIT(MEC_KBC_ACTV_ENABLE_Pos);
    mec_hal_kbc_girq_en(base, flags);

    return MEC_RET_OK;
}

int mec_hal_kbc_activate(struct mec_kbc_regs *base, uint8_t enable, uint8_t flags)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (flags & MEC_KBC_ACTV_P92) {
        port92h_ctrl(enable);
    }

    if (flags & MEC_KBC_ACTV_KBC) {
        if (enable) {
            base->ACTV |= MEC_BIT(MEC_KBC_ACTV_ENABLE_Pos);
        } else {
            base->ACTV &= (uint8_t)~MEC_BIT(MEC_KBC_ACTV_ENABLE_Pos);
        }
    }

    return MEC_RET_OK;
}

static uint32_t kbc_irq_bitmap(uint32_t flags)
{
    uint32_t bm = 0;

    if (flags & MEC_KBC_IBF_IRQ) {
        bm |= MEC_BIT(MEC_KBC_IBF_GIRQ_POS);
    }

    if (flags & MEC_KBC_OBE_IRQ) {
        bm |= MEC_BIT(MEC_KBC_OBE_GIRQ_POS);
    }

    return bm;
}

int mec_hal_kbc_girq_en(struct mec_kbc_regs *base, uint32_t flags)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)base;
#endif

    uint32_t en_bitmap = kbc_irq_bitmap(flags);

    mec_hal_girq_bm_en(MEC_KBC_GIRQ, en_bitmap, 1u);

    return MEC_RET_OK;
}

int mec_hal_kbc_girq_dis(struct mec_kbc_regs *base, uint32_t flags)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)base;
#endif

    uint32_t dis_bitmap = kbc_irq_bitmap(flags);

    mec_hal_girq_bm_en(MEC_KBC_GIRQ, dis_bitmap, 0);

    return MEC_RET_OK;
}

int mec_hal_kbc_girq_clr(struct mec_kbc_regs *base, uint32_t flags)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)base;
#endif

    uint32_t clr_bitmap = kbc_irq_bitmap(flags);

    mec_hal_girq_bm_clr_src(MEC_KBC_GIRQ, clr_bitmap);

    return MEC_RET_OK;
}

uint32_t mec_kbc_girq_result(struct mec_kbc_regs *base)
{
    uint32_t temp = 0u, result = 0u;

#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return 0;
    }
#else
    (void)base;
#endif

    temp = mec_hal_girq_result_get(MEC_KBC_GIRQ);
    if (temp & MEC_BIT(MEC_KBC_IBF_GIRQ_POS)) {
        result |= MEC_KBC_IBF_IRQ;
    }
    if (temp & MEC_BIT(MEC_KBC_OBE_GIRQ_POS)) {
        result |= MEC_KBC_OBE_IRQ;
    }

    return result;
}

int mec_hal_kbc_is_enabled(struct mec_kbc_regs *base)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return 0;
    }
#endif

    if (base->ACTV & MEC_BIT(MEC_KBC_ACTV_ENABLE_Pos)) {
        return 1;
    }

    return 0;
}

int mec_hal_kbc_is_irq_gen_enabled(struct mec_kbc_regs *base)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return 0;
    }
#endif

    if (base->KECR & MEC_BIT(MEC_KBC_KECR_OBFEN_Pos)) {
        return 1;
    }

    return 0;
}

uint8_t mec_hal_kbc_status(struct mec_kbc_regs *base)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return 0;
    }
#endif

    return base->KESTATUS;
}

void mec_hal_kbc_status_wr(struct mec_kbc_regs *base, uint8_t val, uint8_t msk)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return;
    }
#endif

    base->KESTATUS = (base->KESTATUS & ~msk) | (val & msk);
}

void mec_hal_kbc_status_set(struct mec_kbc_regs *base, uint8_t msk)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return;
    }
#endif

    base->KESTATUS |= msk;
}

void mec_hal_kbc_status_clear(struct mec_kbc_regs *base, uint8_t msk)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return;
    }
#endif

    base->KESTATUS &= (uint8_t)~msk;
}

void mec_hal_kbc_wr_data(struct mec_kbc_regs *base, uint8_t data, uint8_t data_is_aux)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return;
    }
#endif

    if (data_is_aux) {
        base->KEAUXD = data;
    } else {
        base->KHECD = data;
    }
}

uint8_t mec_hal_kbc_rd_host_data(struct mec_kbc_regs *base, uint8_t is_host_data_reg)
{
#ifdef MEC_KBC_BASE_CHECK
    if ((uintptr_t)base != (uintptr_t)MEC_KBC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!is_host_data_reg) {
        return base->KHECD;
    } else {
        return base->KHDATA;
    }
}

/* end mec_kbc.c */
