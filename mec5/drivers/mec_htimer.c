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
#include "mec_htimer_api.h"
#include "mec_retval.h"

#define MEC_HTMR_GIRQ       23
#define MEC_HTMR0_GIRQ_POS  16
#define MEC_HTMR1_GIRQ_POS  17
#define MEC_HTMR0_NVIC_NUM  112
#define MEC_HTMR0_ECIA_INFO MEC5_ECIA_INFO(MEC_HTMR_GIRQ, MEC_HTMR0_GIRQ_POS, 14, 112)
#define MEC_HTMR1_NVIC_NUM  113
#define MEC_HTMR1_ECIA_INFO MEC5_ECIA_INFO(MEC_HTMR_GIRQ, MEC_HTMR0_GIRQ_POS, 14, 113)

int mec_hal_htimer_init(struct mec_htmr_regs *regs, struct mec_htimer_context *ctx,
                        uint8_t cfg_flags)
{
    int irq_en = 0;
    uint16_t pcr_id = 0;

    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    switch ((uintptr_t)regs) {
    case MEC_HTMR0_BASE:
        ctx->regs = regs;
        ctx->devi = MEC_HTMR0_ECIA_INFO;
        pcr_id = MEC_PCR_HTMR0;
        break;
    case MEC_HTMR1_BASE:
        ctx->regs = regs;
        ctx->devi = MEC_HTMR1_ECIA_INFO;
        pcr_id = MEC_PCR_HTMR1;
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(pcr_id);

    regs->PRELOAD = 0;
    regs->CTRL = 0;

    mec_hal_girq_ctrl(ctx->devi, 0);

    if (cfg_flags & MEC_BIT(MEC_HTMR_CFG_RESOLUTION_125MS_POS)) {
        regs->CTRL |= MEC_BIT(MEC_HTMR_CTRL_RES_Pos);
    }

    if (cfg_flags & MEC_BIT(MEC_HTMR_CFG_IEN_POS)) {
        irq_en = 1;
    }

    mec_hal_girq_clr_src(ctx->devi);
    mec_hal_girq_ctrl(ctx->devi, irq_en);

    /* Load count by writing it to the preload register.
     * If the value != 0 the timer begins counting down.
     */
    ctx->count = ctx->preload;
    regs->PRELOAD = ctx->preload;

    return MEC_RET_OK;
}

void mec_hal_htimer_intr_ctrl(struct mec_htimer_context *ctx, uint8_t enable)
{
    mec_hal_girq_ctrl(ctx->devi, (int)enable);
}

uint32_t mec_hal_htimer_status(struct mec_htimer_context *ctx)
{
    if (mec_hal_girq_src(ctx->devi)) {
        return MEC_BIT(MEC_HTMR_STATUS_TERM_POS);
    }

    return 0;
}

void mec_hal_htimer_status_clear(struct mec_htimer_context *ctx)
{
    mec_hal_girq_clr_src(ctx->devi);
}

void mec_hal_htimer_stop(struct mec_htmr_regs *regs)
{
    regs->PRELOAD = 0;
}

/* Halt hibernation timer by writing PRELOAD to 0. A side effect is
 * hardware also loads read-only COUNT register with 0. Read COUNT
 * first and store in context structure. A race condition exists if
 * the 32 KHz clock edge the timer decrements on occurs between reading
 * COUNT and writing PRELOAD.
 */
void mec_hal_htimer_halt(struct mec_htimer_context *ctx)
{
    struct mec_htmr_regs *regs = ctx->regs;

    ctx->count = (uint16_t)(regs->COUNT & 0xffffu);
    regs->PRELOAD = 0;
}

/* Unhalt the hibernation timer by writing the COUNT value saved
 * when timer was halted to the PRELOAD register.
 */
void mec_hal_htimer_unhalt(struct mec_htimer_context *ctx)
{
    struct mec_htmr_regs *regs = ctx->regs;

    regs->PRELOAD = ctx->count;
}

/* Restart hibernation timer with a new count down value. */
void mec_hal_htimer_restart(struct mec_htimer_context *ctx, uint16_t new_count)
{
    struct mec_htmr_regs *regs = ctx->regs;

    regs->PRELOAD = 0;
    regs->PRELOAD = new_count;
}

/* end mec_rtimer.c */
