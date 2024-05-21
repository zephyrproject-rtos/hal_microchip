/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_KBC_API_H
#define _MEC_KBC_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* EM8042 Keyboard Controller with GATEA20 support and Port92h fast reset.
 * NOTE: Port92h is a separate hardware block including its own I/O BAR.
 */

#define MEC_KBC_NUM_INSTANCES 1
#define MEC_KBC_NUM_IRQS 2 /* number of IRQ sources per instance */

struct mec_kbc_regs;

enum mec_kbc_flags {
    MEC_KBC_IBF_IRQ        = MEC_BIT(0),
    MEC_KBC_OBE_IRQ        = MEC_BIT(1),
    MEC_KBC_PCOBF_EN       = MEC_BIT(2),
    MEC_KBC_AUXOBF_EN      = MEC_BIT(3),
    MEC_KBC_PORT92_EN      = MEC_BIT(4),
    MEC_KBC_GATEA20_FWC_EN = MEC_BIT(5),
    MEC_KBC_RESET          = MEC_BIT(7),
    MEC_KBC_UD0_SET        = MEC_BIT(8),
    MEC_KBC_UD1_SET        = MEC_BIT(9),
    MEC_KBC_UD2_SET        = MEC_BIT(10),
    MEC_KBC_UD3_SET        = MEC_BIT(11),
    MEC_KBC_UD4_SET        = MEC_BIT(12),
    MEC_KBC_UD5_SET        = MEC_BIT(13),
    MEC_KBC_UD0_ONE        = MEC_BIT(16),
    MEC_KBC_UD1_ONE        = MEC_BIT(17),
    MEC_KBC_UD2_0_ONE      = MEC_BIT(18),
    MEC_KBC_UD2_1_ONE      = MEC_BIT(19),
    MEC_KBC_UD3_ONE        = MEC_BIT(20),
    MEC_KBC_UD4_0_ONE      = MEC_BIT(21),
    MEC_KBC_UD4_1_ONE      = MEC_BIT(22),
    MEC_KBC_UD5_ONE        = MEC_BIT(23),
};

enum mec_kbc_status_pos {
    MEC_KBC_STS_OBF_POS = 0,
    MEC_KBC_STS_IBF_POS,
    MEC_KBC_STS_UD0_POS,
    MEC_KBC_STS_CMD_POS,
    MEC_KBC_STS_UD1_POS,
    MEC_KBC_STS_AUXOBF_POS,
    MEC_KBC_STS_UD2_B0_POS,
    MEC_KBC_STS_UD2_B1_POS,
};

enum mec_kbc_status {
    MEC_KBC_STS_OBF    = MEC_BIT(0),
    MEC_KBC_STS_IBF    = MEC_BIT(1),
    MEC_KBC_STS_UD0    = MEC_BIT(2),
    MEC_KBC_STS_CMD    = MEC_BIT(3),
    MEC_KBC_STS_UD1    = MEC_BIT(4),
    MEC_KBC_STS_AUXOBF = MEC_BIT(5),
    MEC_KBC_STS_UD2_B0 = MEC_BIT(6),
    MEC_KBC_STS_UD2_B1 = MEC_BIT(7),
};

int mec_hal_kbc_init(struct mec_kbc_regs *base, uint32_t flags);

#define MEC_KBC_ACTV_KBC 0x1u
#define MEC_KBC_ACTV_P92 0x2u
#define MEC_KBC_ACT_ALL (MEC_KBC_ACTV_KBC | MEC_KBC_ACTV_P92)
int mec_hal_kbc_activate(struct mec_kbc_regs *base, uint8_t enable, uint8_t flags);

int mec_hal_kbc_girq_en(struct mec_kbc_regs *base, uint32_t flags);
int mec_hal_kbc_girq_dis(struct mec_kbc_regs *base, uint32_t flags);
int mec_hal_kbc_girq_clr(struct mec_kbc_regs *base, uint32_t flags);
uint32_t mec_hal_kbc_girq_result(struct mec_kbc_regs *base);
int mec_hal_kbc_is_enabled(struct mec_kbc_regs *base);
int mec_hal_kbc_is_irq_gen_enabled(struct mec_kbc_regs *base);
uint8_t mec_hal_kbc_status(struct mec_kbc_regs *base);

#define MEC_KBC_DATA_KB 0
#define MEC_KBC_DATA_AUX 1
#define MEC_KBC_DATA_HOST 2

void mec_hal_kbc_wr_data(struct mec_kbc_regs *base, uint8_t data, uint8_t data_is_aux);
void mec_hal_kbc_status_wr(struct mec_kbc_regs *base, uint8_t val, uint8_t msk);

/* Set bits in msk to 1 preserving other bits */
void mec_hal_kbc_status_set(struct mec_kbc_regs *base, uint8_t msk);

/* Clear bits in msk to 0 preserving other bits */
void mec_hal_kbc_status_clear(struct mec_kbc_regs *base, uint8_t msk);

uint8_t mec_hal_kbc_rd_host_data(struct mec_kbc_regs *base, uint8_t is_host_data_reg);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_KBC_API_H */
