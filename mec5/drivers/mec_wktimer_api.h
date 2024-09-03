/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_WKTIMER_API_H
#define _MEC_WKTIMER_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_retval.h"

/* Microchip MEC5 Week timer is powered by the VBAT power rail.
 * It implements three hardware counters to cover intervals from ~30us to over 8 years.
 * In addition, the week timer includes VBAT power pin outputs.
 */

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_WKTIMER_MAIN_CLK_FREQ    32768u

enum mec_wktmr_cfg_flags {
    MEC_WKTMR_CFG_ENABLE_POS = 0,
    MEC_WKTMR_CFG_VCI_PWR_UP_EV_EN_POS,
    MEC_WKTMR_CFG_SYS_PWR_PRES_EN_POS,
    MEC_WKTMR_CFG_SUBWK_RELOAD_POS,
};

enum mec_wktmr_sub_sec_freq {
    MEC_WKTMR_SUBSEC_DIS = 0,
    MEC_WKTMR_SUBSEC_2HZ,
    MEC_WKTMR_SUBSEC_4HZ,
    MEC_WKTMR_SUBSEC_8HZ,
    MEC_WKTMR_SUBSEC_16HZ,
    MEC_WKTMR_SUBSEC_32HZ,
    MEC_WKTMR_SUBSEC_64HZ,
    MEC_WKTMR_SUBSEC_128HZ,
    MEC_WKTMR_SUBSEC_256HZ,
    MEC_WKTMR_SUBSEC_1024HZ,
    MEC_WKTMR_SUBSEC_2048HZ,
    MEC_WKTMR_SUBSEC_4096HZ,
    MEC_WKTMR_SUBSEC_8192HZ,
    MEC_WKTMR_SUBSEC_16384HZ,
    MEC_WKTMR_SUBSEC_32768HZ,
    MEC_WKTMR_SUBSEC_MAX,
};

enum mec_wktmr_subwk_clk_source {
    MEC_WKTMR_SUBWK_SRC_DIS = 0,
    MEC_WKTMR_SUBWK_SRC_SUB_SEC, /* sub-second frequency */
    MEC_WKTMR_SUBWK_SRC_SEC_1, /* week counter always counts at 1Hz (one second) */
    MEC_WKTMR_SUBWK_SRC_SEC_8,  /* bit[3] every 8 seconds */
    MEC_WKTMR_SUBWK_SRC_SEC_32,  /* bit[5] every 32 seconds */
    MEC_WKTMR_SUBWK_SRC_SEC_256,  /* bit[7] every 256 seconds */
    MEC_WKTMR_SUBWK_SRC_SEC_1024,  /* bit[9] every 1024 seconds */
    MEC_WKTMR_SUBWK_SRC_MAX,
};

struct mec_wktmr_config {
    uint32_t one_sec_count;
    uint32_t one_sec_alarm_count;
    uint16_t sub_week_reload;
    uint8_t sub_week_clk_src;
    uint8_t sub_sec_freq;
    uint8_t cfg_flags;
};

/* forward declaration */
struct mec_wktmr_regs;

int mec_hal_wktimer_init(struct mec_wktmr_regs *regs, struct mec_wktmr_config *cfg);

/* BGPO pins */
enum mec_wktmr_bgpo_prop {
    MEC_WKTMR_BGPO_STATE = 0,
    MEC_WKTMR_BGPO_ENABLE,
    MEC_WKTMR_BGPO_RESET_EVENT,
};

/* Control Week Timer BGPO pins.
 * API has three functions: Enable pin in BGPO hardware, select pins reset power rail,
 * and set pins output state.
 * NOTE: BGPO pins multiplexed with GPIO's require GPIO mux set to BGPO function.
 *
 * Output state property: Output state is not changed until pin is enabled.
 * pin_bm is a bit map of pin states to modify.
 * val_bm is a bit map of pin states (0=low, 1=high)
 *
 * Enable BGPO control of a pin
 * pin_bm is a bit map of pins to enable in BGPO logic
 * val_bm is a bit map of pins to enable BGPO connection to VBAT power rail.
 * (0=not enabled, 1=enable and connect to VBAT power rail).
 *
 * Select reset event for BGPO pins. BGPO pins will be reset on the selected event.
 * pin_bm is a bit map of pin reset events to modify
 * val_bm is a bit map of pin reset events. Bit value = 0(RESET_SYS), 1(RESET_VBAT)
 */
int mec_hal_bgpo_set(struct mec_wktmr_regs *regs, enum mec_wktmr_bgpo_prop prop,
                     uint16_t pin_bitmap, uint16_t val_bitmap);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_WKTIMER_API_H */
