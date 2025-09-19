/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ADC_API_H
#define _MEC_ADC_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "device_mec5.h"
#include "mec_defs.h"
#include "mec_retval.h"

/* Microchip MEC5 ADC */

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_ADC_MAIN_CLK_FREQ 48000000u

/* Default values of ADC sample clock generator.
 * Sample clock low and high times are 8-bit values
 * in units of MEC_ADC_MAIN_CLK_FREQ ticks.
 * Default values produce 50% duty cycle at frequency
 * of (MEC_ADC_SAMPLE_CLK_LIT_DFLT / 2)
 */
#define MEC_ADC_SAMPLE_CLK_LIT_DFLT 1u
#define MEC_ADC_SAMPLE_CLK_HIT_DFLT 1u

/* ADC warm up delay defaults to 514 ADC Sample clocks
 * Hardware applies warm up delay when either start single
 * or start repeat is set when the ADC is fully idle.
 */
#define MEC_ADC_WARM_UP_DLY_CLKS_DFLT 514u

/* Additional delay before the channels selected for repeat
 * conversions are processed for the first time after the
 * start repeat bit is set. Delay is in units of 40 us.
 */
#define MEC_ADC_RPT_CYCLE_START_DLY_DFLT 0

/* Additional delay before the channels selected for repeat
 * conversions are processed for the second and subsequent
 * times after the start repeat bit is set. Delay is in units of 40 us.
 */
#define MEC_ADC_RPT_CYCLE_DLY_DFLT 0

/* Internal voltage reference from the ADC voltage rail */
#define MEC_ADC_INTERNAL_VREF_MV 3300u

enum mec_adc_cfg_flags {
    MEC_ADC_CFG_SOFT_RESET_POS = 0,
    MEC_ADC_CFG_PWR_SAVE_DIS_POS,
    MEC_ADC_CFG_SAMPLE_TIME_POS,
    MEC_ADC_CFG_WARM_UP_POS,
    MEC_ADC_CFG_RPT_DELAY_POS,
    MEC_ADC_CFG_SAR_CFG_OVR_POS,
};

enum mec_adc_intr_flags {
    MEC_ADC_SINGLE_INTR_POS = 0,
    MEC_ADC_REPEAT_INTR_POS,
};

enum mec_adc_chan_vref {
    MEC_ADC_CHAN_VREF_PAD = 0,
    MEC_ADC_CHAN_VREF_GPIO,
};

struct mec_adc_config {
    uint8_t flags;
    uint8_t sample_clk_lo_time;
    uint8_t sample_clk_hi_time;
    uint16_t warm_up_delay;
    uint16_t rpt_start_delay;
    uint16_t rpt_cycle_delay;
    uint32_t sar_config;
};

int mec_hal_adc_init(struct mec_adc_regs *regs, struct mec_adc_config *cfg);
int mec_hal_adc_activate(struct mec_adc_regs *regs, uint8_t enable);

int mec_hal_adc_girq_ctrl(struct mec_adc_regs *regs, uint32_t flags, uint8_t enable);
int mec_hal_adc_girq_status_clr(struct mec_adc_regs *regs, uint32_t flags);

int mec_hal_adc_repeat_delay_set(struct mec_adc_regs *regs, uint16_t start_delay,
                                 uint16_t repeat_delay);
int mec_hal_adc_repeat_mode_chan_set(struct mec_adc_regs *regs, uint32_t rpt_chan_bm);

int mec_hal_adc_chan_vref_select(struct mec_adc_regs *regs, uint8_t chan_id,
                                 enum mec_adc_chan_vref vref);

/* Enable/disable differential input mode for ALL channels */
int mec_hal_adc_differential_input_enable(struct mec_adc_regs *regs, uint8_t enable);

int mec_hal_adc_resolution_set(struct mec_adc_regs *regs, uint8_t resolution_bits);

int mec_hal_adc_start(struct mec_adc_regs *regs, uint16_t single_chan_bm, uint16_t rpt_chan_bm);

uint32_t mec_hal_adc_channels_done(struct mec_adc_regs *regs);

int mec_hal_adc_status_clear(struct mec_adc_regs *regs, uint32_t flags);

uint32_t mec_hal_adc_channel_reading(struct mec_adc_regs *regs, uint8_t channel);

void mec_hal_adc_pm_save_disable(void);
void mec_hal_adc_pm_restore(void);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ADC_API_H */
