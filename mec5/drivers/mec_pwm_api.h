/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_PWM_API_H
#define _MEC_PWM_API_H

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

/* PWM Controller */

struct mec_pwm_regs;

enum mec5_pwm_config {
    MEC5_PWM_CFG_ENABLE = MEC_BIT(0),
    MEC5_PWM_CFG_INVERT = MEC_BIT(2),
    MEC5_PWM_CFG_RESET  = MEC_BIT(3),
};

/* Return PWM frequency input for hi range and lo range */
uint32_t mec_hal_pwm_hi_freq_input(void);
uint32_t mec_hal_pwm_lo_freq_input(void);

/* Initialze a PWM instance
 * period_cycles is the number of PWM input frequency cycles in the desired
 * PWM output period.
 * pulse_cycles is the number of PMW input frequency cycles in the desired
 * PWM active pulse width.
 * flags - Enable after configuration, use low frequeny range instead of high
 * range, invert output (active output is low instead of high), or reset the
 * PWM using PCR peripheral reset before configuration.
 */
int mec_hal_pwm_init(struct mec_pwm_regs *regs, uint32_t period_cycles,
                     uint32_t pulse_cycles, uint32_t flags);

int mec_hal_pwm_reset(struct mec_pwm_regs *regs);

int mec_hal_pwm_set_polarity(struct mec_pwm_regs *regs, uint8_t polarity_inverted);

int mec_hal_pwm_enable(struct mec_pwm_regs *regs, uint8_t enable);
int mec_hal_pwm_is_enabled(struct mec_pwm_regs *regs);

/* set output to inactive state based upon invert bit */
int mec_hal_pwm_off(struct mec_pwm_regs *regs);
/* set output to active state based upon invert bit */
int mec_hal_pwm_on(struct mec_pwm_regs *regs);

uint32_t mec_hal_pwm_get_freq_in(struct mec_pwm_regs *regs);
uint32_t mec_hal_pwm_get_count(struct mec_pwm_regs *regs, uint8_t on_count);
uint32_t mec_hal_pwm_get_freq_out(struct mec_pwm_regs *regs);
int mec_hal_pwm_set_freq_out(struct mec_pwm_regs *regs, uint32_t period_cycles,
                             uint32_t pulse_cycles);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_PWM_API_H */
