/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_wdt_api.h"
#include "mec_retval.h"
#include "device_mec5.h"

/* Microchip MEC5 family watch dog timer (WDT) fires an optional interrupt
 * to the EC before asserting internal RESET_SYS signal.
 * Power domain: VTR
 * Clock domain: 32KHz
 */

#define MEC5_WDT0_GIRQ      21u
#define MEC5_WDT0_GIRQ_Z    13u
#define MEC5_WDT0_GIRQ_POS  2u
#define MEC5_WDT0_NVIC_NUM  171
#define MEC5_WDT0_ECIA_INFO MEC5_ECIA_INFO(21, 2, 13, 171)

/* -------- WDT API -------- */

/* Initialize a WDT instance
 * regs - Pointer to instance HW registers.
 * n32k_ticks - The number of 32KHz counts when expired will trigger the WDT action.
 * n32k_ticks_intr - If WDT is configured to fire an interrupt before SoC reset,
 *                   this is the number of 32KHz ticks before the SoC reset.
 * flags - Configuration flags.
 */
int mec_wdt_init(struct wdt_regs *regs, uint16_t n32k_ticks, uint32_t flags)
{
    uint32_t ctrl = 0u;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->CTRL = ctrl;
    regs->IEN = 0u;
    regs->STATUS = UINT32_MAX;

    mec_girq_ctrl(MEC5_WDT0_ECIA_INFO, 0);
    mec_girq_clr_src(MEC5_WDT0_ECIA_INFO);

    regs->LOAD = n32k_ticks;

    if (flags & MEC5_WDT_INIT_ENABLE) {
        ctrl |= MEC_BIT(WDT_CTRL_ENABLE_Pos);
    }
    if (flags & MEC5_WDT_INIT_STALL_HTMR) {
        ctrl |= MEC_BIT(WDT_CTRL_STALL_HTMR_Pos);
    }
    if (flags & MEC5_WDT_INIT_STALL_WKTMR) {
        ctrl |= MEC_BIT(WDT_CTRL_STALL_WKTMR_Pos);
    }
    if (flags & MEC5_WDT_INIT_STALL_JTAG) {
        ctrl |= MEC_BIT(WDT_CTRL_STALL_JTAG_Pos);
    }
    if (flags & MEC5_WDT_INIT_GEN_INTR) {
        ctrl |= MEC_BIT(WDT_CTRL_RST_MODE_INTR_Pos);
        regs->IEN |= MEC_BIT(WDT_IEN_INTREN_Pos);
        mec_girq_ctrl(MEC5_WDT0_ECIA_INFO, 1);
    }

    regs->CTRL = ctrl;

    return MEC_RET_OK;
}

void mec_wdt_intr_ctrl(struct wdt_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CTRL |= MEC_BIT(WDT_CTRL_RST_MODE_INTR_Pos);
        regs->IEN |= MEC_BIT(WDT_IEN_INTREN_Pos);
        mec_girq_ctrl(MEC5_WDT0_ECIA_INFO, 1);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(WDT_CTRL_RST_MODE_INTR_Pos);
        regs->IEN &= (uint32_t)~MEC_BIT(WDT_IEN_INTREN_Pos);
    }
}

void mec_wdt_intr_helper(struct wdt_regs *regs, uint16_t n32k_ticks_before_reset)
{
    uint16_t load = 1u;

    regs->CTRL &= (uint32_t)~(MEC_BIT(WDT_CTRL_ENABLE_Pos) | MEC_BIT(WDT_CTRL_RST_MODE_INTR_Pos));
    regs->IEN = 0u;
    regs->STATUS = MEC_BIT(WDT_STATUS_ISTATUS_Pos);
    mec_girq_clr_src(MEC5_WDT0_ECIA_INFO);

    if (n32k_ticks_before_reset) {
        load = n32k_ticks_before_reset;
    }

    regs->LOAD = load;
    regs->CTRL |= MEC_BIT(WDT_CTRL_ENABLE_Pos);
}

/* Force WDT to reload its counter from the currently configured count */
void mec_wdt_restart(struct wdt_regs *regs)
{
    regs->KICK = 0u;
}

/* Update configured WDT with a new count down value */
void mec_wdt_reload(struct wdt_regs *regs, uint16_t n32k_count)
{
    /* Write to LOAD register causes WDT to reload count value */
    regs->LOAD = n32k_count;
}

/* end mec_wdt.c */
