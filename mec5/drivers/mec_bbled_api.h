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

enum mec_bbled_mode {
    MEC_BBLED_MODE_OFF = 0,
    MEC_BBLED_MODE_BREATHE,
    MEC_BBLED_MODE_BLINK,
    MEC_BBLED_MODE_ON,
};

enum mec_bbled_blink_clk_sel {
    MEC_BBLED_BLINK_CLK_SEL_32K = 0,
    MEC_BBLED_BLINK_CLK_SEL_SYS,
};

enum mec_bbled_breathe_pwm_width {
    MEC_BBLED_PWM_WIDTH_8 = 0,
    MEC_BBLED_PWM_WIDTH_7 = 1,
    MEC_BBLED_PWM_WIDTH_6 = 2,
};

/* BBLED initialization configuration */
#define MEC_BBLED_CFG_SOFT_RESET_POS    0
#define MEC_BBLED_CFG_SOFT_RESET        (1u << MEC_BBLED_CFG_SOFT_RESET_POS)

/* Default breathing ramp up/down times are symmetric (same).
 * Asymmetric mode allows ramp up and down to be different.
 */
#define MEC_BBLED_CFG_WDT_ASYM_EN_POS   1
#define MEC_BBLED_CFG_WDT_ASYM_EN       MEC_BIT(MEC_BBLED_CFG_WDT_ASYM_EN_POS)

#define MEC_BBLED_CFG_SET_WDT_RLD_POS   7

#define MEC_BBLED_CFG_WDT_RELOAD_POS    8
#define MEC_BBLED_CFG_WDT_RELOAD_MSK0   0xffu
#define MEC_BBLED_CFG_WDT_RELOAD_MSK    0xff00u
#define MEC_BBLED_CFG_WDT_RELOAD_DFLT0  0x14u
#define MEC_BBLED_CFG_WDT_RELOAD_DFLT   0x1400u

/* forward reference */
struct mec_bbled_regs;

#define MEC_BBLED_BLINK_PWM_FREQ_32K 0
#define MEC_BBLED_BLINK_PWM_FREQ_SYS 1

struct mec_bbled_blink_config {
    uint16_t pwm_clk_prescaler;
    uint8_t duty_cycle;
    uint8_t flags; /* freq select (32KHz vs system clock) */
};

struct mec_bbled_breathe_config {
    uint32_t upd_intervals; /* 4-bit fields update intervals 0-7 */
    uint32_t upd_steps; /* 4-bit fields update steps 0-7 */
    uint16_t lo_delay; /* periods to wait before updating dc */
    uint16_t hi_delay; /* periods to wait before updating dc */
    uint8_t min_hold; /* current dc <= min_hold. Hold dc for low delay periods */
    uint8_t max_hold; /* current dc >= max_hold. Hold dc for high delay periods */
    uint8_t pwm_width; /* must be programmed before BBLED is set to Breathe mode */
};

bool mec_hal_bbled_is_valid(struct mec_bbled_regs *regs);

bool mec_hal_bbled_is_off(struct mec_bbled_regs *regs);

int mec_hal_bbled_init(struct mec_bbled_regs *regs, uint32_t bbled_config);

uint32_t mec_hal_bbled_clk_freq(struct mec_bbled_regs *regs);

int mec_hal_bbled_mode(struct mec_bbled_regs *regs, uint8_t mode);
uint8_t mec_hal_bbled_mode_get(struct mec_bbled_regs *regs);

/* Select Breathe mode PWM width: 8-bit(default), 7-bit, or 6-bit.
 * PWM width is not latched into a holding register and changing it while
 * Breathe mode is active will cause an immediate change in the output
 * waveform. PWM width should be set while the BBLED is in OFF state.
 */
int mec_hal_bbled_breathe_pwm_width(struct mec_bbled_regs *regs, uint8_t pwm_width);
uint8_t mec_hal_bbled_breathe_pwm_width_get(struct mec_bbled_regs *regs);

/* Select clock source 32KHz vs system bus block (48MHz) for blink(PWM) mode
 * Changing clock select while the BBLED is in Blink mode will cause the
 * frequency to immediately change. Clock select is not latch like the duty
 * cycle and prescaler are.
 */
int mec_hal_bbled_blink_clk_sel(struct mec_bbled_regs *regs, uint8_t blink_clk_sel);
uint8_t mec_hal_bbled_blink_clk_sel_get(struct mec_bbled_regs *regs);

void mec_hal_bbled_synchronize_enable(struct mec_bbled_regs *regs, uint8_t enable);

void mec_hal_bbled_asym_enable(struct mec_bbled_regs *regs, uint8_t enable);

/* Set BBLED to update load new values of its Delay, Step, and Interval
 * registers when the current PWM period ends.
 */
void mec_hal_bbled_enable_update(struct mec_bbled_regs *regs);

/* If true the hardware is currently updating Delay, Step, and Interval registers.
 * If false writes to Delay, Step, or Interval register are stored in internal
 * holding registers until firmware sets the enable update bit.
 */
bool mec_hal_bbled_enable_is_update(struct mec_bbled_regs *regs);

/* Program LED breathing configuration.
 * If BBLED is in Blink mode return an error
 * If BBLED is in OFF OR ON mode the values are programmed and will take effect
 * when BBLED is switched to Breathe mode.
 * If BBLED is in Breathe mode the values are programmed and hardware latches
 * the new values into holding registers. Firwmare must then call mec_hal_enable_update
 * to cause hardware to load the new values at the end of the current PWM period.
 */
int mec_hal_bbled_breathe_config(struct mec_bbled_regs *regs,
                                 struct mec_bbled_breathe_config *br_cfg);
int mec_hal_bbled_breathe_config_get(struct mec_bbled_regs *regs,
                                     struct mec_bbled_breathe_config *br_cfg);

/* Program LED blinking configuration.
 * If BBLED is in Breathe mode return an error
 * If BBLED is in OFF OR ON mode the values are programmed and will take effect
 * when BBLED is switched to Blink mode.
 * If BBLED is in Blink mode the values are programmed and hardware latches
 * the new values into holding registers. Firwmare must then call mec_hal_enable_update
 * to cause hardware to load the new values at the end of the current PWM period.
 * Blink mode clock select is not latched and should be done while BBLED is in the
 * OFF state.
 */
int mec_hal_bbled_blink_config(struct mec_bbled_regs *regs, struct mec_bbled_blink_config *bl_cfg);
int mec_hal_bbled_blink_config_get(struct mec_bbled_regs *regs,
                                   struct mec_bbled_blink_config *bl_cfg);

/* Compute the Blink mode PWM frequency based on current Blink and clock select configuration */
uint32_t mec_hal_bbled_blink_pwm_freq_get(struct mec_bbled_regs *regs);

int mec_hal_bbled_girq_ctrl(struct mec_bbled_regs *regs, uint8_t enable);

int mec_hal_bbled_girq_status_clr(struct mec_bbled_regs *regs);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_BBLED_API_H */
