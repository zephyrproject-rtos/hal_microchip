/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_BTIMER_API_H
#define _MEC_BTIMER_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* 16-bit and 32-bit Basic Timers */
#define MEC5_BTIMER_MAX_FREQ_HZ      48000000u
#define MEC5_BTIMER_MAX_FREQ_DIVISOR 65536u
#define MEC5_BTIMER_MIN_FREQ_HZ      (MEC5_BTIMER_MAX_FREQ_HZ / MEC5_BTIMER_MAX_FREQ_DIVISOR)

#define MEC5_BTIMER_CFG_FLAG_START_POS       0
#define MEC5_BTIMER_CFG_FLAG_AUTO_RELOAD_POS 1
#define MEC5_BTIMER_CFG_FLAG_COUNT_UP_POS    2
#define MEC5_BTIMER_CFG_FLAG_INTR_EN_POS     4

#if MEC5_BASIC_TIMER_INSTANCES
#define MEC5_BTIMER_INST_MASK MEC_GENMASK(MEC5_BASIC_TIMER_INSTANCES - 1, 0)
#else
#define MEC5_BTIMER_INST_MASK 0
#endif

/* forward reference */
struct mec_btmr_regs;

int mec_hal_btimer_has_counter32(struct mec_btmr_regs *regs);

/* Configure a basic timer for count interval at frequency = max / freq_div */
int mec_hal_btimer_init(struct mec_btmr_regs *regs, uint32_t freq_div,
                        uint32_t count, uint32_t flags);

#define MEC5_BTMR_RST_PRESERVE_FDIV_POS 0
#define MEC5_BTMR_RST_PRESERVE_DIR_POS 1
int mec_hal_btimer_reset(struct mec_btmr_regs *regs, uint32_t flags);

int mec_hal_btimer_girq_ctrl(struct mec_btmr_regs *regs,  uint8_t enable);
int mec_hal_btimer_girq_status_clr(struct mec_btmr_regs *regs);

uint32_t mec_hal_btimer_freq(struct mec_btmr_regs *regs);

void mec_hal_btimer_pre_and_reload(struct mec_btmr_regs *regs,
                                   uint32_t preload, uint8_t do_reload);

#define MEC5_BTIMER_START_FLAG_IEN_POS  0
#define MEC5_BTIMER_START_FLAG_AUTO_POS 1
#define MEC5_BTIMER_START_FLAG_DIR_UP   2
void mec_hal_btimer_start_load(struct mec_btmr_regs *regs, uint32_t initial_count,
                               uint32_t flags);
void mec_hal_btimer_auto_restart(struct mec_btmr_regs *regs, uint8_t enable);
bool mec_hal_btimer_is_auto_restart(struct mec_btmr_regs *regs);

bool mec_hal_btimer_is_enabled(struct mec_btmr_regs *regs);
bool mec_hal_btimer_is_started(struct mec_btmr_regs *regs);
bool mec_hal_btimer_is_counting_up(struct mec_btmr_regs *regs);

void mec_hal_btimer_reload_run(struct mec_btmr_regs *regs, uint32_t new_count);
void mec_hal_btimer_intr_clr(struct mec_btmr_regs *regs);
void mec_hal_btimer_intr_en(struct mec_btmr_regs *regs, uint8_t enable);

void mec_hal_btimer_pm_save_disable();
void mec_hal_btimer_pm_restore();

static inline uint32_t mec_hal_btimer_count(struct mec_btmr_regs *regs)
{
    return regs->COUNT;
}

static inline uint32_t mec_hal_btimer_preload(struct mec_btmr_regs *regs)
{
    return regs->PRELOAD;
}

static inline void mec_hal_btimer_preload_set(struct mec_btmr_regs *regs, uint32_t preload)
{
    regs->PRELOAD = preload;
}

static inline void mec_hal_btimer_count_set(struct mec_btmr_regs *regs, uint32_t cnt)
{
    regs->COUNT = cnt;
}

static inline uint32_t mec_hal_btimer_status(struct mec_btmr_regs *regs)
{
    return regs->STATUS & MEC_BIT(MEC_BTMR_STATUS_EVENT_Pos);
}

static inline void mec_hal_btimer_enable(struct mec_btmr_regs *regs)
{
    regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos);
}

static inline void mec_hal_btimer_disable(struct mec_btmr_regs *regs)
{
    regs->CTRL &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos);
}

static inline void mec_hal_btimer_start(struct mec_btmr_regs *regs)
{
    regs->CTRL |= (MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos) | MEC_BIT(MEC_BTMR_CTRL_START_Pos));
}

static inline void mec_hal_btimer_stop(struct mec_btmr_regs *regs)
{
    regs->CTRL &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_START_Pos);
}

static inline void mec_hal_btimer_halt(struct mec_btmr_regs *regs)
{
    regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_HALT_Pos);
}

static inline void mec_hal_btimer_unhalt(struct mec_btmr_regs *regs)
{
    regs->CTRL &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_HALT_Pos);
}

static inline void mec_hal_btimer_reload(struct mec_btmr_regs *regs)
{
    regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_RELOAD_Pos);
}


#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_BTIMER_API_H */
