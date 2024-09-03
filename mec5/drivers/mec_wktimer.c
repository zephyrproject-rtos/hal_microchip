/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_wktimer_api.h"
#include "mec_retval.h"

/* week counter has three hardware counters:
 * week counter:
 *   28-bit counter incremented at a 1 Hz rate with a 28-bit compare
 * sub-week:
 *   9-bit counter down counter. Frequency source is either
 *   derived from the sub-second counter (2, 4, ..., 32768 Hz) or
 *   the week counter (125, 31.25, 7.8125, or 1.95) Hz.
 * sub-second: derived from a 15-bit counter incremented at 32.768 Hz
 *   Rate is 2, 4, 8, ..., 32768 Hz.
 *
 * The week timer perpheral also includes Battery Powered General Purpose Outputs (BGPO)
 * functionality. These pins states are controlled by the week timer BGPO registers. The
 * pins are powered by the VBAT power rail and maintain state when VTR power rails are off.
 * Some BGPO pins are multiplexed with GPIO's. Configuration of these pins is:
 * GPIO Control register        BGPO Power register
 * MUX = BGPO function          Corresponding bit = 1, pin powered by VBAT
 * MUX = GPIO function          Corresponding bit = 0, pin powered by VTR
 */

#define MEC_WKTMR_GIRQ                  21
#define MEC_WKTMR_AGGR_NVIC_NUM         13
#define MEC_WKTMR_WK_ALARM_GIRQ_POS     3
#define MEC_WKTMR_SUB_WK_ALARM_GIRQ_POS 4
#define MEC_WKTMR_ONE_SEC_GIRQ_POS      5
#define MEC_WKTMR_SUB_SEC_GIRQ_POS      6
#define MEC_WKTMR_SYS_PWR_PRES_GIRQ_POS 7

/* Direct NVIC interrupt numbers */
#define MEC_WKTMR_WK_ALARM_NVIC_NUM     114
#define MEC_WKTMR_SUB_WK_ALARM_NVIC_NUM 115
#define MEC_WKTMR_ONE_SEC_NVIC_NUM      116
#define MEC_WKTMR_SUB_SEC_NVIC_NUM      117
#define MEC_WKTMR_SYS_PWR_PRES_NVIC_NUM 118

#define MEC_WKTMR_WK_ALARM_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_WKTMR_GIRQ, MEC_WKTMR_WK_ALARM_GIRQ_POS, \
                   MEC_WKTMR_AGGR_NVIC_NUM, MEC_WKTMR_WK_ALARM_NVIC_NUM)

#define MEC_WKTMR_SUB_WK_ALARM_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_WKTMR_GIRQ, MEC_WKTMR_SUB_WK_ALARM_GIRQ_POS, \
                   MEC_WKTMR_AGGR_NVIC_NUM, MEC_WKTMR_SUB_WK_ALARM_NVIC_NUM)

#define MEC_WKTMR_ONE_SEC_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_WKTMR_GIRQ, MEC_WKTMR_ONE_SEC_GIRQ_POS, \
                   MEC_WKTMR_AGGR_NVIC_NUM, MEC_WKTMR_ONE_SEC_NVIC_NUM)

#define MEC_WKTMR_SUB_SEC_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_WKTMR_GIRQ, MEC_WKTMR_SUB_SEC_GIRQ_POS, \
                   MEC_WKTMR_AGGR_NVIC_NUM, MEC_WKTMR_SUB_SEC_NVIC_NUM)

#define MEC_WKTMR_SYS_PWR_PRES_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_WKTMR_GIRQ, MEC_WKTMR_SYS_PWR_PRES_GIRQ_POS, \
                   MEC_WKTMR_AGGR_NVIC_NUM, MEC_WKTMR_SYS_PWR_PRES_NVIC_NUM)


#if 0

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
#endif

/* TODO config
 * 4-bit field for sub-week rate (interrupt when count down reaches 0)
 * 9-bit field for sub-week counter value
 * 28-bit field for initial value of 1Hz week counter
 * 28-bit field for compare value (week alarm interrupt)
 */

int mec_hal_wktimer_init(struct mec_wktmr_regs *regs, struct mec_wktmr_config *cfg)
{
    uint32_t ctrl = 0, swctrl = 0;

#ifdef MEC_WKTMR_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)(MEC_WKTMR0_BASE)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!cfg) {
        return MEC_RET_ERR_INVAL;
    }

    regs->CTRL = 0; /* disable */
    regs->SWCR = MEC_BIT(MEC_WKTMR_SWCR_SUB_PUPEV_Pos) | MEC_BIT(MEC_WKTMR_SWCR_PUPEV_Pos);

    if (cfg->cfg_flags & MEC_BIT(MEC_WKTMR_CFG_SYS_PWR_PRES_EN_POS)) {
        swctrl |= MEC_BIT(MEC_WKTMR_SWCR_SYSPWR_PRES_Pos);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_WKTMR_CFG_SUBWK_RELOAD_POS)) {
        swctrl |= MEC_BIT(MEC_WKTMR_SWCR_AUTO_RELOAD_Pos);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_WKTMR_CFG_VCI_PWR_UP_EV_EN_POS)) {
        ctrl |= MEC_BIT(MEC_WKTMR_CTRL_PUPEV_Pos);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_WKTMR_CFG_ENABLE_POS)) {
        ctrl |= MEC_BIT(MEC_WKTMR_CTRL_TIMER_Pos);
    }

    regs->COUNT = cfg->one_sec_count;
    regs->COMP = cfg->one_sec_alarm_count;
    regs->SWAC = (regs->SWAC & (uint32_t)~MEC_WKTMR_SWAC_SUB_LOAD_Msk)
                 | (cfg->sub_week_reload & MEC_WKTMR_SWAC_SUB_LOAD_Msk);
    regs->SWCR = swctrl;
    regs->CTRL = ctrl;

    return MEC_RET_OK;
}

/* Control Week Timer BGPO pins.
 * API has three functions: Enable pin in BGPO hardware, select pins reset power rail,
 * and set pins output state.
 * NOTE: BGPO pins multiplexed with GPIO's require GPIO mux set to BGPO function.
 */
int mec_hal_bgpo_set(struct mec_wktmr_regs *regs, enum mec_wktmr_bgpo_prop prop,
                     uint16_t pin_bm, uint16_t val_bm)
{
#ifdef MEC_WKTMR_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)(MEC_WKTMR0_BASE)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!pin_bm) {
        return MEC_RET_OK;
    }

    switch (prop) {
    case MEC_WKTMR_BGPO_STATE:
        regs->BGPO_DATA = (regs->BGPO_PWR & (uint32_t)~pin_bm) | (val_bm & pin_bm);
        break;
    case MEC_WKTMR_BGPO_ENABLE:
        regs->BGPO_PWR = (regs->BGPO_PWR & (uint32_t)~pin_bm) | (val_bm & pin_bm);
        break;
    case MEC_WKTMR_BGPO_RESET_EVENT:
        regs->BGPO_RESET = (regs->BGPO_RESET & (uint32_t)~pin_bm) | (val_bm & pin_bm);
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    return MEC_RET_OK;
}

/* end mec_wktimer.c */
