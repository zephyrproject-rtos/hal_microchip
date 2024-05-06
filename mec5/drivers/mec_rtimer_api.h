/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_RTIMER_API_H
#define _MEC_RTIMER_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Microchip MEC5 32KHz RTOS Timer. 32-bit down counter */

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_RTIMER_MAIN_CLK_FREQ 32768u
#define MEC_RTIMER_COUNT_SIZE_BITS  32
#define MEC_RTIMER_COUNT_MAX        0xffffffffu

enum rtimer_config {
    MEC_RTMR_CFG_EN_POS = 0,
    MEC_RTMR_CFG_AUTO_RELOAD_POS,
    MEC_RTMR_CFG_START_POS,
    MEC_RTMR_CFG_DBG_HALT_POS,
    MEC_RTMR_CFG_IEN_POS,
};

enum rtimer_status {
    MEC_RTMR_STATUS_TERM_POS = 0, /* timer reached terminal value of 0 */
};

int mec_rtimer_init(struct rtmr_regs *regs, uint32_t rtmr_config, uint32_t preload);

void mec_rtimer_restart(struct rtmr_regs *regs, uint32_t new_count, uint8_t restart);

uint32_t mec_rtimer_status(struct rtmr_regs *regs);
void mec_rtimer_status_clear(struct rtmr_regs *regs, uint32_t status);
void mec_rtimer_status_clear_all(struct rtmr_regs *regs);

void mec_rtimer_intr_ctrl(struct rtmr_regs *regs, uint8_t enable);

static inline void mec_rtimer_auto_reload(struct rtmr_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CTRL |= MEC_BIT(RTMR_CTRL_AUTO_RELOAD_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(RTMR_CTRL_AUTO_RELOAD_Pos);
    }
}

static inline void mec_rtimer_stop(struct rtmr_regs *regs)
{
    regs->CTRL &= (uint32_t)~MEC_BIT(RTMR_CTRL_START_Pos);
}

static inline void mec_rtimer_start(struct rtmr_regs *regs)
{
    regs->CTRL |= MEC_BIT(RTMR_CTRL_START_Pos);
}

static inline bool mec_rtimer_is_started(struct rtmr_regs *regs)
{
    return (regs->CTRL & MEC_BIT(RTMR_CTRL_START_Pos)) ? true : false;
}

static inline uint32_t mec_rtimer_count(struct rtmr_regs *regs)
{
    return regs->COUNT;
}

static inline uint32_t mec_rtimer_preload(struct rtmr_regs *regs)
{
    return regs->PRELOAD;
}

/* If preload is written while the timer is running the value will
 * only take effect if auto-restart is enabled and timer reaches
 * its terminal count value of 0
 */
static inline void mec_rtimer_preload_set(struct rtmr_regs *regs, uint32_t preload)
{
    regs->PRELOAD = preload;
}

static inline void mec_rtimer_halt(struct rtmr_regs *regs)
{
    regs->CTRL |= MEC_BIT(RTMR_CTRL_FW_HALT_Pos);
}

static inline void mec_rtimer_unhalt(struct rtmr_regs *regs)
{
    regs->CTRL &= (uint32_t)~MEC_BIT(RTMR_CTRL_FW_HALT_Pos);
}

static inline bool mec_rtimer_is_counting(struct rtmr_regs *regs)
{
    return (regs->COUNT != 0) ? true : false;
}

#define MEC_RTIMER_START            0x05u
/* Start with auto-halt while CPU is halted by debugger */
#define MEC_RTIMER_START_EXT_HALT   0x0du

static inline void mec_rtimer_stop_and_load(struct rtmr_regs *regs, uint32_t count_down,
                                            uint8_t start_val)
{
    regs->CTRL = 0U;
    regs->CTRL = MEC_BIT(RTMR_CTRL_ENABLE_Pos);
    regs->PRELOAD = count_down;
    regs->CTRL = start_val;
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_RTIMER_API_H */
