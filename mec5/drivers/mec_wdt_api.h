/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_WDT_API_H
#define _MEC_WDT_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* Fire an interrupt before SoC reset */
#define MEC5_WDT_INIT_ENABLE 0x01u
#define MEC5_WDT_INIT_STALL_HTMR 0x02u
#define MEC5_WDT_INIT_STALL_WKTMR 0x04u
#define MEC5_WDT_INIT_STALL_JTAG 0x08u
#define MEC5_WDT_INIT_GEN_INTR 0x10u

#define MEC5_WDT_STATUS_EVENT_IRQ 0x01u

/* forward declaration */
struct mec_wdt_regs;

int mec_hal_wdt_init(struct mec_wdt_regs *regs, uint16_t nmsec, uint32_t flags);

uint8_t mec_hal_wdt_intr_get_status(struct mec_wdt_regs *regs);
void mec_hal_wdt_intr_clear_status(struct mec_wdt_regs *regs);

void mec_hal_wdt_intr_ctrl(struct mec_wdt_regs *regs, uint8_t enable);

void mec_hal_wdt_girq_enable(struct mec_wdt_regs *regs, uint8_t enable);

/* Application WDT ISR calls this helper to restart WDT to reset the SoC
 * after counts_before_reset number of 32KHz clock ticks.
 */
void mec_hal_wdt_intr_helper(struct mec_wdt_regs *regs, uint16_t counts_before_reset);

void mec_hal_wdt_restart(struct mec_wdt_regs *regs);

void mec_hal_wdt_reload(struct mec_wdt_regs *regs, uint16_t nmsec);

bool mec_hal_wdt_is_enabled(struct mec_wdt_regs *regs);

void mec_hal_wdt_enable(struct mec_wdt_regs *regs);
void mec_hal_wdt_disable(struct mec_wdt_regs *regs);

void mec_hal_wdt_debug_stall(struct mec_wdt_regs *regs, uint8_t enable);

void mec_hal_wdt_kick(struct mec_wdt_regs *regs);

/* Returns the read-only count (16-bit) register value */
uint32_t mec_hal_wdt_count(struct mec_wdt_regs *regs);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_WDT_API_H */
