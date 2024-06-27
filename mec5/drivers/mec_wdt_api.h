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

/* forward declaration */
struct mec_wdt_regs;

int mec_hal_wdt_init(struct mec_wdt_regs *regs, uint16_t n32k_ticks, uint32_t flags);

void mec_hal_wdt_intr_ctrl(struct mec_wdt_regs *regs, uint8_t enable);

/* Application WDT ISR calls this helper to restart WDT to reset the SoC
 * after n32k_ticks_before_reset number of 32KHz clock ticks.
 */
void mec_hal_wdt_intr_helper(struct mec_wdt_regs *regs, uint16_t n32k_ticks_before_reset);

void mec_hal_wdt_restart(struct mec_wdt_regs *regs);

void mec_hal_wdt_reload(struct mec_wdt_regs *regs, uint16_t n32k_count);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_WDT_API_H */
