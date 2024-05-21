/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_KSCAN_API_H
#define _MEC_KSCAN_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* Key scan matrix controller */

#define MEC_KSCAN_NUM_IRQS 1 /* number of IRQ sources per instance */

struct mec_kscan_regs;

enum mec_kscan_cfg_flags {
    MEC_KSCAN_CFG_ENABLE = MEC_BIT(0),
    MEC_KSCAN_CFG_RESET = MEC_BIT(1),
    MEC_KSCAN_KSO_PREDRIVE_EN = MEC_BIT(2),
    MEC_KSCAN_KSO_DRV_LO = MEC_BIT(3),
    MEC_KSCAN_INTR_EN = MEC_BIT(4),
};

enum mec_kscan_out_sel {
    MEC_KSCAN_KSO_SEL00 = 0,
    MEC_KSCAN_KSO_SEL01,
    MEC_KSCAN_KSO_SEL02,
    MEC_KSCAN_KSO_SEL03,
    MEC_KSCAN_KSO_SEL04,
    MEC_KSCAN_KSO_SEL05,
    MEC_KSCAN_KSO_SEL06,
    MEC_KSCAN_KSO_SEL07,
    MEC_KSCAN_KSO_SEL08,
    MEC_KSCAN_KSO_SEL09,
    MEC_KSCAN_KSO_SEL10,
    MEC_KSCAN_KSO_SEL11,
    MEC_KSCAN_KSO_SEL12,
    MEC_KSCAN_KSO_SEL13,
    MEC_KSCAN_KSO_SEL14,
    MEC_KSCAN_KSO_SEL15,
    MEC_KSCAN_KSO_SEL16,
    MEC_KSCAN_KSO_SEL17,
    MEC_KSCAN_KSO_MAX,
};

enum mec_kscan_in {
    MEC_KSCAN_IN0 = MEC_BIT(0),
    MEC_KSCAN_IN1 = MEC_BIT(1),
    MEC_KSCAN_IN2 = MEC_BIT(2),
    MEC_KSCAN_IN3 = MEC_BIT(3),
    MEC_KSCAN_IN4 = MEC_BIT(4),
    MEC_KSCAN_IN5 = MEC_BIT(5),
    MEC_KSCAN_IN6 = MEC_BIT(6),
    MEC_KSCAN_IN7 = MEC_BIT(7),
};

int mec_hal_kscan_init(struct mec_kscan_regs *regs, uint32_t flags, uint8_t ksi_in_intr_mask);

int mec_hal_kscan_enable(struct mec_kscan_regs *regs, uint8_t enable);
bool mec_hal_kscan_is_enabled(struct mec_kscan_regs *regs);

int mec_hal_kscan_kso_pre_drive_enable(struct mec_kscan_regs *regs, uint8_t enable);

int mec_hal_kscan_girq_en(struct mec_kscan_regs *regs);
int mec_hal_kscan_girq_dis(struct mec_kscan_regs *regs);
int mec_hal_kscan_girq_clr(struct mec_kscan_regs *regs);
uint32_t mec_hal_kscan_girq_result(struct mec_kscan_regs *regs);

void mec_hal_kscan_wake_enable(uint8_t enable);

static inline void mec_hal_kscan_kso_all_high(struct mec_kscan_regs *regs)
{
    regs->KSO_SEL |= MEC_BIT(MEC_KSCAN_KSO_SEL_KSO_ALL_Pos);
}

static inline void mec_hal_kscan_kso_invert(struct mec_kscan_regs *regs, uint8_t invert)
{
    if (invert) {
        regs->KSO_SEL |= MEC_BIT(MEC_KSCAN_KSO_SEL_KSO_INVERT_Pos);
    } else {
        regs->KSO_SEL &= (uint8_t)~MEC_BIT(MEC_KSCAN_KSO_SEL_KSO_INVERT_Pos);
    }
}

static inline void mec_hal_kscan_kso_select(struct mec_kscan_regs *regs, uint8_t kso_sel)
{
    regs->KSO_SEL = ((regs->KSO_SEL & (uint8_t)~MEC_KSCAN_KSO_SEL_OSEL_Msk)
                     | ((kso_sel << MEC_KSCAN_KSO_SEL_OSEL_Pos) & MEC_KSCAN_KSO_SEL_OSEL_Msk));
}

static inline uint8_t mec_hal_kscan_ksi_state(struct mec_kscan_regs *regs)
{
    return regs->KSI_IN;
}

static inline uint8_t mec_hal_kscan_ksi_status(struct mec_kscan_regs *regs)
{
    return regs->KSI_STS;
}

static inline void mec_hal_kscan_ksi_status_clr(struct mec_kscan_regs *regs, uint8_t clrmsk)
{
    regs->KSI_STS = clrmsk;
}

static inline void mec_hal_kscan_ksi_intr_en_set(struct mec_kscan_regs *regs, uint8_t enmsk)
{
    regs->KSI_INT_EN = enmsk;
}

static inline uint8_t mec_hal_kscan_ksi_intr_en_get(struct mec_kscan_regs *regs)
{
    return regs->KSI_INT_EN;
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_KSCAN_API_H */
