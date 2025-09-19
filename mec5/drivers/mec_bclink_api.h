/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_BCLINK_API_H
#define _MEC_BCLINK_API_H

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

/* BC-Link */

#define MEC_BCL_NUM_IRQS 2 /* number of IRQ sources per instance */

#define MEC_BCL_SOURCE_CLOCK_FREQ 48000000u
#define MEC_BCL_MAX_CLK_FREQ (MEC_BCL_SOURCE_CLOCK_FREQ)
#define MEC_BCL_MIN_CLK_FREQ (MEC_BCL_SOURCE_CLOCK_FREQ / 256u)

/* forward reference */
struct mec_bcl_regs;

/* configuration */
#define MEC_BCL_CFG_FREQ_DIV_POS 0
#define MEC_BCL_CFG_FREQ_DIV_MSK 0xffu

/* Start API flags */
#define MEC_BCL_START_FLAG_WRITE    0
#define MEC_BCL_START_FLAG_READ     1
#define MEC_BCL_START_FLAG_BCLR_IEN 2
#define MEC_BCL_START_FLAG_BERR_IEN 4

enum mec_bcl_intr_flags {
    MEC_BCL_BCLR_IRQ_POS = 0, /* interrupt when busy clears */
    MEC_BCL_BERR_IRQ_POS,     /* interrupt if protocol error */
};

enum mec_bcl_status_pos {
    MEC_BCL_STS_BUSY_POS = 0,
    MEC_BCL_STS_ERR_POS,
};

int mec_hal_bcl_init(struct mec_bcl_regs *base, uint32_t flags);

int mec_hal_bcl_soft_reset(struct mec_bcl_regs *regs, uint8_t enable);

int mec_hal_bcl_get_freq(struct mec_bcl_regs *regs, uint32_t *freq_hz);
int mec_hal_bcl_set_freq(struct mec_bcl_regs *regs, uint32_t freq_hz);

bool mec_hal_bcl_is_busy(struct mec_bcl_regs *regs);
bool mec_hal_bcl_is_error(struct mec_bcl_regs *regs);
int mec_hal_bcl_clear_error(struct mec_bcl_regs *regs);
int mec_hal_bcl_clear_not_busy(struct mec_bcl_regs *regs);

int mec_hal_bcl_intr_ctrl(struct mec_bcl_regs *regs, uint8_t msk, uint8_t enable);

int mec_hal_bcl_get_target_address(struct mec_bcl_regs *regs, uint8_t *target_address);
int mec_hal_bcl_set_target_address(struct mec_bcl_regs *regs, uint8_t target_address);

int mec_hal_bcl_start(struct mec_bcl_regs *regs, uint8_t target_reg, uint8_t wrdata,
                      uint32_t flags);

int mec_hal_bcl_get_data(struct mec_bcl_regs *regs, uint8_t *data);
int mec_hal_bcl_set_data(struct mec_bcl_regs *regs, uint8_t data);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_BCLINK_API_H */
