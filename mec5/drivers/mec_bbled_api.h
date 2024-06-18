/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_BBLED_API_H
#define _MEC_BBLED_API_H

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

/* BBLED initialization configuration */
#define MEC_BBLED_CFG_MODE_POS          0
#define MEC_BBLED_CFG_MODE_MSK0         0x3u
#define MEC_BBLED_CFG_MODE_MSK          0x3u

#define MEC_BBLED_CFG_MODE_OFF_VAL      0
#define MEC_BBLED_CFG_MODE_BREATHE_VAL  1u
#define MEC_BBLED_CFG_MODE_BLINK_VAL    2u
#define MEC_BBLED_CFG_MODE_ON_VAL       3u

#define MEC_BBLED_CFG_MODE_OFF          (0u << MEC_BBLED_CFG_MODE_POS)
#define MEC_BBLED_CFG_MODE_BREATHE      (1u << MEC_BBLED_CFG_MODE_POS)
#define MEC_BBLED_CFG_MODE_BLINK        (2u << MEC_BBLED_CFG_MODE_POS)
#define MEC_BBLED_CFG_MODE_ON           (3u << MEC_BBLED_CFG_MODE_POS)

#define MEC_BBLED_CFG_SOFT_RESET_POS    2
#define MEC_BBLED_CFG_SOFT_RESET        (1u << MEC_BBLED_CFG_SOFT_RESET_POS)

#define MEC_BBLED_CFG_CLK_SRC_POS       3
#define MEC_BBLED_CFG_CLK_SRC_32K       (0u << MEC_BBLED_CFG_CLK_SRC_POS)
/* NOTE: 48MHz clock source is only valid for MEC_BBLED_CFG_MODE_BLINK */
#define MEC_BBLED_CFG_CLK_SRC_48M       (1u << MEC_BBLED_CFG_CLK_SRC_POS)

#define MEC_BBLED_CFG_PWM_SIZE_POS      4
#define MEC_BBLED_CFG_PWM_SIZE_MSK0     0x3u
#define MEC_BBLED_CFG_PWM_SIZE_MSK      \
        (MEC_BBLED_INIT_PWM_SIZE_MSK0 << MEC_BBLED_INIT_PWM_SIZE_POS)
#define MEC_BBLED_CFG_PWM_SIZE_8BIT     0
#define MEC_BBLED_CFG_PWM_SIZE_7BIT     (0x1u << MEC_BBLED_INIT_PWM_SIZE_POS)
#define MEC_BBLED_CFG_PWM_SIZE_6BIT     (0x2u << MEC_BBLED_INIT_PWM_SIZE_POS)

#define MEC_BBLED_CFG_SET_WDT_RLD_POS   7

#define MEC_BBLED_CFG_WDT_RELOAD_POS    8
#define MEC_BBLED_CFG_WDT_RELOAD_MSK0   0xffu
#define MEC_BBLED_CFG_WDT_RELOAD_MSK    0xff00u
#define MEC_BBLED_CFG_WDT_RELOAD_DFLT0  0x14u
#define MEC_BBLED_CFG_WDT_RELOAD_DFLT   0x1400u

/* Default breathing ramp up/down times are symmetric (same).
 * Asymmetric mode allows ramp up and down to be different.
 */
#define MEC_BBLED_CFG_WDT_ASYM_EN_POS   16
#define MEC_BBLED_CFG_WDT_ASYM_EN       MEC_BIT(MEC_BBLED_CFG_WDT_ASYM_EN_POS)

/* forward reference */
struct mec_led_regs;

bool mec_hal_bbled_is_valid(struct led_regs *regs);

bool mec_hal_bbled_is_off(struct led_regs *regs);

int mec_hal_bbled_init(struct led_regs *regs, uint32_t bbled_config);

uint32_t mec_hal_bbled_clk_freq(struct led_regs *regs);

int mec_hal_bbled_synchronize_enable(struct led_regs *regs, uint8_t enable);

void mec_hal_bbled_asym_enable(struct led_regs *regs, uint8_t enable);

uint16_t mec_hal_bbled_delay_lo_get(struct led_regs *regs);
uint16_t mec_hal_bbled_delay_hi_get(struct led_regs *regs);

void mec_hal_bbled_delay_lo_set(struct led_regs *regs, uint16_t delay_periods);
void mec_hal_bbled_delay_hi_set(struct led_regs *regs, uint16_t delay_periods);

uint32_t mec_hal_bbled_step_sizes_get(struct led_regs *regs);
void mec_hal_bbled_step_sizes_set(struct led_regs *regs, uint32_t step_sizes);

uint32_t mec_hal_bbled_intervals_sizes_get(struct led_regs *regs);
void mec_hal_bbled_intervals_set(struct led_regs *regs, uint32_t intervals);

uint8_t mec_hal_bbled_output_delay_get(struct led_regs *regs);
void mec_hal_bbled_output_delay_get(struct led_regs *regs, uint8_t clk_periods);

/* Set BBLED to update load new values of its Delay, Step, and Interval
 * registers when the current PWM period ends.
 */
int mec_hal_enable_update(struct mec_led_regs *regs);

/* If true the hardware is currently updating Delay, Step, and Interval registers.
 * If false writes to Delay, Step, or Interval register are stored in internal
 * holding registers until firmware sets the enable update bit.
 */
bool mec_hal_enable_is_update(struct mec_led_regs *regs);

int mec_hal_bbled_girq_ctrl(struct mec_btmr_regs *regs, uint8_t enable);

int mec_hal_bbled_girq_status_clr(struct mec_led_regs *regs);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_BBLED_API_H */
