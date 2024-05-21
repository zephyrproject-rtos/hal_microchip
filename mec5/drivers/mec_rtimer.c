/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_rtimer_api.h"
#include "mec_retval.h"

#define MEC_RTMR_GIRQ 23
#define MEC_RTMR_GIRQ_POS 10
#define MEC_RTMR_NVIC_NUM 111
#define MEC_RTMR_ECIA_INFO MEC5_ECIA_INFO(MEC_RTMR_GIRQ, MEC_RTMR_GIRQ_POS, 14, 111)

int mec_hal_rtimer_init(struct mec_rtmr_regs *regs, uint32_t rtmr_config, uint32_t preload)
{
    uint32_t ctrl = 0;
    int irq_en = 0;

    if ((uintptr_t)regs != (uintptr_t)MEC_RTMR0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_RTMR);

    regs->CTRL = 0;
    regs->PRELOAD = preload;

    if (rtmr_config & MEC_BIT(MEC_RTMR_CFG_EN_POS)) {
        ctrl |= MEC_BIT(MEC_RTMR_CTRL_ENABLE_Pos);
    }

    if (rtmr_config & MEC_BIT(MEC_RTMR_CFG_AUTO_RELOAD_POS)) {
        ctrl |= MEC_BIT(MEC_RTMR_CTRL_AUTO_RELOAD_Pos);
    }

    if (rtmr_config & MEC_BIT(MEC_RTMR_CFG_START_POS)) {
        ctrl |= MEC_BIT(MEC_RTMR_CTRL_START_Pos);
    }

    if (rtmr_config & MEC_BIT(MEC_RTMR_CFG_DBG_HALT_POS)) {
        ctrl |= MEC_BIT(MEC_RTMR_CTRL_EXT_HALT_Pos);
    }

    if (rtmr_config & MEC_BIT(MEC_RTMR_CFG_IEN_POS)) {
        irq_en = 1;
    }

    mec_hal_girq_clr_src(MEC_RTMR_ECIA_INFO);
    mec_hal_girq_ctrl(MEC_RTMR_ECIA_INFO, irq_en);

    regs->CTRL = ctrl;

    return MEC_RET_OK;
}

uint32_t mec_hal_rtimer_status(struct mec_rtmr_regs *regs)
{
    (void)regs;

    if (mec_hal_girq_src(MEC_RTMR_ECIA_INFO)) {
        return MEC_BIT(MEC_RTMR_STATUS_TERM_POS);
    }

    return 0;
}

void mec_hal_rtimer_status_clear(struct mec_rtmr_regs *regs, uint32_t status)
{
    (void)regs;

    if (status & MEC_BIT(MEC_RTMR_STATUS_TERM_POS)) {
        mec_hal_girq_clr_src(MEC_RTMR_ECIA_INFO);
    }
}

void mec_hal_rtimer_status_clear_all(struct mec_rtmr_regs *regs)
{
    (void)regs;

    mec_hal_girq_clr_src(MEC_RTMR_ECIA_INFO);
}

void mec_hal_rtimer_intr_ctrl(struct mec_rtmr_regs *regs, uint8_t enable)
{
    (void)regs;

    mec_hal_girq_ctrl(MEC_RTMR_ECIA_INFO, (int)enable);
}

/* Reload RTOS timer count.
 * RTOS timer internal logic runs on 32 KHz and requires a sequence
 * to restart the timer with a new count down value.
 * 1. Save CTRL value and make sure FW halt is clear.
 * 2. Make sure start and enable bits are set in saved CTRL.
 * 3. disable RTOS timer to clear registers to default state
 * 4. write new count into PRELOAD register
 * 5. write CTRL value
 * 6. If new count down is not 0 wait for RTOS timer to start
 *    counting down (up to one 32 KHz period).
 */
void mec_hal_rtimer_restart(struct mec_rtmr_regs *regs, uint32_t new_count, uint8_t restart)
{
    uint32_t ctrl = regs->CTRL;

    regs->CTRL = 0;
    ctrl &= (uint32_t)~MEC_BIT(MEC_RTMR_CTRL_FW_HALT_Pos);
    ctrl |= MEC_BIT(MEC_RTMR_CTRL_ENABLE_Pos);
    if (restart) {
        ctrl |= MEC_BIT(MEC_RTMR_CTRL_START_Pos);
    }

    regs->PRELOAD = new_count;
    regs->CTRL = ctrl;
}

/* end mec_rtimer.c */
