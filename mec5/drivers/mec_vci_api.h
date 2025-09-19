/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_VCI_H
#define _MEC_VCI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_vci_api.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

enum mec_vci_sel {
    MEC_VCI_IN0_POS = 0,
    MEC_VCI_IN1_POS,
    MEC_VCI_IN2_POS,
    MEC_VCI_IN3_POS,
    MEC_VCI_IN4_POS,
    MEC_VCI_IN5_POS,
    MEC_VCI_IN6_POS,
    MEC_VCI_OVRD_IN = 8,
    MEC_VCI_OUT,
    MEC_VCI_IN_WEEK_ALARM_POS = 16,
    MEC_VCI_IN_RTC_ALARM_POS,
};

int mec_hal_vci_pin_disable(uint8_t vci_id);

/* Return current state of VCI pin inputs. If latching is enabled
 * the current state is the latched state otherwise the state is
 * live pin after filtering and polarity are applied.
 * b[6:0] = VCI_IN[6:0]
 * b[8] = current VCI_OVRD_IN state
 * b[9] = current VCI_OUT state
 * b[16] = Week Alarm state
 * b[17] = RTC Alaram state
 */
uint32_t mec_hal_vci_in_pin_states(struct mec_vci_regs *regs);

/* VCI_IN[] pin filter enable/disable */
int mec_hal_vci_in_filter_enable(struct mec_vci_regs *regs, uint8_t enable);

/* set the state of software controlled VCI_OUT pin state
 * This value has no effect on VCI_OUT pin unless the FW_EXT bit is 1.
 */
int mec_hal_vci_sw_vci_out_set(struct mec_vci_regs *regs, uint8_t pin_state);

/* Enable software control of VCI_OUT pin state */
int mec_hal_vci_sw_vci_out_enable(struct mec_vci_regs *regs, uint8_t enable);

uint8_t mec_hal_vci_out_get(struct mec_vci_regs *regs);
uint8_t mec_hal_vci_ovrd_in_get(struct mec_vci_regs *regs);

/* Return bitmap of VCI_IN[6:0] input latched state */
uint32_t mec_hal_vci_in_latched_get(struct mec_vci_regs *regs);

int mec_hal_vci_in_latch_enable(struct mec_vci_regs *regs, uint32_t latch_bitmap);
int mec_hal_vci_in_latch_disable(struct mec_vci_regs *regs, uint32_t latch_bitmap);
uint32_t mec_hal_vci_in_latch_enable_get(struct mec_vci_regs *regs);

/* clear latched state of selected VCI inputs */
int mec_hal_vci_in_latch_reset(struct mec_vci_regs *regs, uint32_t latch_bitmap);
int mec_hal_vci_in_input_enable(struct mec_vci_regs *regs, uint32_t latch_bitmap);
uint32_t mec_hal_vci_in_input_enable_get(struct mec_vci_regs *regs);

/* Program the delay after nSYS_SHDN asserts before VCI logic re-asserts
 * VCI_OUT. A value of zero disables the delay. Non-zero values should
 * be in the range [125, 32000] milliseconds.
 */
int mec_hal_vci_out_power_on_delay(struct mec_vci_regs *regs, uint32_t delay_ms);

/* Set the polarity of selected VCI_IN[n] pins.
 * Polarity = 1 Active High
 *          = 0 Active Low
 */
int mec_hal_vci_in_polarity(struct mec_vci_regs *regs, uint32_t vci_in_bitmap,
                            uint32_t polarity_bitmap);

/* Return bitmap of detected positive edges on VCI_IN[] pins */
uint32_t mec_hal_vci_pedge_detect(struct mec_vci_regs *regs);

/* Return bitmap of detected negative edges on VCI_IN[] pins */
uint32_t mec_hal_vci_nedge_detect(struct mec_vci_regs *regs);

/* Clear edge detection logic */
void mec_hal_vci_pedge_detect_clr(struct mec_vci_regs *regs, uint32_t bitmap);
void mec_hal_vci_nedge_detect_clr(struct mec_vci_regs *regs, uint32_t bitmap);
void mec_hal_vci_edge_detect_clr_all(struct mec_vci_regs *regs);

/* Select which VCI_IN[] pin edge detector are enabled when the chip
 * is powered only by the VBAT power rail (VTR Core is off).
 * When the chip is on (VTR Core ON) this register has no effect on
 * the edge detector enables.
 */
uint32_t mec_hal_vci_vbat_edge_detect_get(struct mec_vci_regs *regs);
int mec_hal_vci_vbat_edge_detect(struct mec_vci_regs *regs, uint32_t bitmap);

#ifdef MEC5_VCI_HAS_LID_DETECT
int mec_hal_vci_lid_detect_enable(struct mec_vci_regs *regs);
#endif

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_VCI_H */
