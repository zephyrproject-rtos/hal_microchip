/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_MAILBOX_API_H
#define _MEC_MAILBOX_API_H

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

enum mec_mbox_flags {
    MEC_MBOX_FLAG_RESET = MEC_BIT(0),
    MEC_MBOX_FLAG_INTR_EN = MEC_BIT(1),
};

enum mec_mbox_swi_events {
    MEC_MBOX_SWI_EC_WR_POS = 0,
    MEC_MBOX_SWI_1_POS,
    MEC_MBOX_SWI_2_POS,
    MEC_MBOX_SWI_3_POS,
    MEC_MBOX_SWI_4_POS,
    MEC_MBOX_SWI_5_POS,
    MEC_MBOX_SWI_6_POS,
    MEC_MBOX_SWI_7_POS,
};

struct mec_mbox_regs;

int mec_hal_mbox_init(struct mec_mbox_regs *base, uint32_t swi_ien_msk, uint32_t flags);
int mec_hal_mbox_girq_ctrl(struct mec_mbox_regs *base, uint8_t enable);
int mec_hal_mbox_girq_clr(struct mec_mbox_regs *base);
uint32_t mec_hal_mbox_girq_result(struct mec_mbox_regs *base);

int mec_hal_mbox_sirq_set(struct mec_mbox_regs *base, uint8_t bitmap);
int mec_hal_mbox_sirq_en_mask(struct mec_mbox_regs *base, uint8_t val, uint8_t mask);

int mec_hal_mbox_get_host_to_ec(struct mec_mbox_regs *base, uint8_t *data);
int mec_hal_mbox_set_host_to_ec(struct mec_mbox_regs *base, uint8_t data);
int mec_hal_mbox_get_ec_to_host(struct mec_mbox_regs *base, uint8_t *data);
int mec_hal_mbox_set_ec_to_host(struct mec_mbox_regs *base, uint8_t data);

int mec_hal_mbox_get(struct mec_mbox_regs *base, uint8_t mbox, uint8_t *data);
int mec_hal_mbox_put(struct mec_mbox_regs *base, uint8_t mbox, uint8_t data);

int mec_hal_mbox32_get(struct mec_mbox_regs *base, uint8_t mbox, uint32_t *data);
int mec_hal_mbox32_put(struct mec_mbox_regs *base, uint8_t mbox, uint32_t data);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_MAILBOX_API_H */
