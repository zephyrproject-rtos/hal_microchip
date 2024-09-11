/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_HTIMER_API_H
#define _MEC_HTIMER_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Microchip MEC5 32KHz Hibernation Timer. 16-bit down counter */

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_HTIMER_MAIN_CLK_FREQ    32768u
#define MEC_HTIMER_COUNT_SIZE_BITS  16
#define MEC_HTIMER_COUNT_MAX        0xffffu

enum rtimer_config {
    MEC_HTMR_CFG_RESOLUTION_125MS_POS = 0,
    MEC_HTMR_CFG_IEN_POS,
};

enum htimer_status {
    MEC_HTMR_STATUS_TERM_POS = 0, /* timer reached terminal value of 0 */
};

struct mec_htimer_context {
    struct mec_htmr_regs *regs;
    uint32_t devi;
    uint16_t preload;
    uint16_t count;
};

int mec_hal_htimer_init(struct mec_htmr_regs *regs, struct mec_htimer_context *ctx,
                        uint8_t cfg_flags);

void mec_hal_htimer_intr_ctrl(struct mec_htimer_context *ctx, uint8_t enable);

uint32_t mec_hal_htimer_status(struct mec_htimer_context *ctx);
void mec_hal_htimer_status_clear(struct mec_htimer_context *ctx);

void mec_hal_htimer_stop(struct mec_htmr_regs *regs);

void mec_hal_htimer_halt(struct mec_htimer_context *ctx);
void mec_hal_htimer_unhalt(struct mec_htimer_context *ctx);

void mec_hal_htimer_restart(struct mec_htimer_context *ctx, uint16_t new_count);

/* Get read-only 16-bit counter value */
static inline uint32_t mec_hal_htimer_count(struct mec_htmr_regs *regs)
{
    return regs->COUNT;
}

/* Get 16-bit preload value */
static inline uint32_t mec_hal_htimer_preload(struct mec_htmr_regs *regs)
{
    return regs->PRELOAD;
}

/* Write 16-bit preload value.
 * Setting preload to a non-zero value causes the timer to copy
 * preload into the count register and begin counting down.
 * Writing 0 stops the counter and copies 0 into the count register.
 */
static inline void mec_hal_htimer_preload_set(struct mec_htmr_regs *regs, uint16_t preload)
{
    regs->PRELOAD = preload;
}


#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_HTIMER_API_H */
