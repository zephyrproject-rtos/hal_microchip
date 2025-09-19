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
#include "mec_ecs_api.h"
#include "mec_pcr_api.h"
#include "mec_peci_api.h"
#include "mec_retval.h"

#define MEC_PECI_GIRQ               17
#define MEC_PECI_GIRQ_POS           0
#define MEC_PECI_GIRQ_NVIC          9
#define MEC_PECI_GIRQ_NVIC_DIRECT   70

#define MEC_PECI_ECIA_INFO MEC5_ECIA_INFO(MEC_PECI_GIRQ, MEC_PECI_GIRQ_POS, \
                                          MEC_PECI_GIRQ_NVIC, MEC_PECI_GIRQ_NVIC_DIRECT)

#define MEC_PECI_OPT_BIT_TIME_MIN 0x0010u
#define MEC_PECI_OPT_BIT_TIME_MAX 0xffffu

static void peci_reset(struct mec_peci_regs *regs)
{
    regs->CTRL = (MEC_BIT(MEC_PECI_CTRL_RST_Pos) | MEC_BIT(MEC_PECI_CTRL_FRST_Pos)
                  | MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos));
    regs->IEN1 = 0u;
    regs->IEN2 = 0u;
    regs->STATUS1 = UINT8_MAX;
    regs->STATUS1 = UINT8_MAX;
    regs->CTRL = MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos);
}

static void peci_girq_dis_clr(void)
{
    mec_hal_girq_ctrl(MEC_PECI_ECIA_INFO, 0);
    mec_hal_girq_clr_src(MEC_PECI_ECIA_INFO);
}

static void peci_intr_en(struct mec_peci_regs *regs, uint16_t ien_bitmap)
{
    if (!ien_bitmap) {
        return;
    }

    regs->IEN1 |= (uint8_t)(ien_bitmap & 0xffu);
    regs->IEN2 |= (uint8_t)((ien_bitmap >> 8) & 0xffu);
}

/* ---- Public API ---- */

/* Initialize the key scan controller */
int mec_hal_peci_init(struct mec_peci_regs *regs, struct mec_peci_config *cfg, uint32_t flags)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!cfg) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_ecs_peci_vtt_ref_pin_ctrl(1);

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_PECI);
    if (flags & MEC_PECI_CFG_RESET) {
        peci_reset(regs);
    }

    peci_girq_dis_clr();

    /* timing */
    if (flags & MEC_PECI_CFG_CLK_DIV) {
        regs->BAUD_CTRL = cfg->clock_div;
    }

    if (flags & MEC_PECI_CFG_OBT) {
        regs->OPTBTM_LO = (uint8_t)(cfg->optimal_bit_time);
        regs->OPTBTM_HI = (uint8_t)(cfg->optimal_bit_time >> 8);
    }

    if (flags & MEC_PECI_CFG_REQ_TIMER) {
        regs->REQ_TIMER_LSB = (uint8_t)(cfg->request_timer);
        regs->REQ_TIMER_MSB = (uint8_t)(cfg->request_timer >> 8);
    }

    if (flags & MEC_PECI_CFG_DIS_BIT_TIME_CLAMP) {
        regs->SSTCTL1 |= MEC_BIT(MEC_PECI_SSTCTL1_DNBTC_Pos);
    }

    mec_hal_girq_ctrl(MEC_PECI_ECIA_INFO, 1);

    if (flags & MEC_PECI_CFG_INTR_EN) {
        peci_intr_en(regs, cfg->intr_enables);
        regs->CTRL |= MEC_BIT(MEC_PECI_CTRL_MIEN_Pos);
    }

    if (flags & MEC_PECI_CFG_ENABLE) {
        regs->CTRL &= (uint8_t)~MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_peci_enable(struct mec_peci_regs *regs, uint8_t enable)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (enable) {
        regs->CTRL &= (uint8_t)~MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos);
    } else {
        regs->CTRL |= MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_peci_ctrl_reset(struct mec_peci_regs *regs, uint8_t assert_reset)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (assert_reset) {
        regs->CTRL |= MEC_BIT(MEC_PECI_CTRL_RST_Pos);
    } else {
        regs->CTRL &= (uint8_t)~MEC_BIT(MEC_PECI_CTRL_RST_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_peci_fifo_reset(struct mec_peci_regs *regs, uint8_t assert_reset)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (assert_reset) {
        regs->CTRL |= MEC_BIT(MEC_PECI_CTRL_FRST_Pos);
    } else {
        regs->CTRL &= (uint8_t)~MEC_BIT(MEC_PECI_CTRL_FRST_Pos);
    }

    return MEC_RET_OK;
}

/* PECI global interrupt enable.
 * Must be set after other lower level interrupts are enabled.
 */
int mec_hal_peci_global_ien(struct mec_peci_regs *regs, uint8_t enable)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (enable) {
        regs->CTRL |= MEC_BIT(MEC_PECI_CTRL_MIEN_Pos);
    } else {
        regs->CTRL &= (uint8_t)~MEC_BIT(MEC_PECI_CTRL_MIEN_Pos);
    }

    return MEC_RET_OK;
}

/* Enable or disable selected low level PECI interrupts
 * Note: does not touch global interrupt enable.
 */
int mec_hal_peci_intr_ctrl(struct mec_peci_regs *regs, uint8_t enable, uint16_t intr_bitmap)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (enable) {
        regs->IEN1 |= (uint8_t)intr_bitmap;
        regs->IEN2 |= (uint8_t)(intr_bitmap >> 8);
    } else {
        regs->IEN1 &= (uint8_t)~intr_bitmap;
        regs->IEN2 &= (uint8_t)~(intr_bitmap >> 8);
    }

    return MEC_RET_OK;
}

int mec_hal_peci_set_opt_bit_time(struct mec_peci_regs *regs, uint16_t opt_bit_time)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (opt_bit_time < MEC_PECI_OPT_BIT_TIME_MIN) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t ctrl = regs->CTRL;

    regs->CTRL = ctrl | MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos);
    regs->OPTBTM_LO = (uint8_t)opt_bit_time;
    regs->OPTBTM_HI = (uint8_t)(opt_bit_time >> 8);
    regs->CTRL = ctrl;

    return MEC_RET_OK;
}

/* Set PECI transmit enable. Hardware clears transmit enable when it
 * received the End-Of-Frame (EOF) and sets EOF status.
 */
int mec_hal_peci_tx_enable(struct mec_peci_regs *regs, uint8_t enable)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (enable) {
        regs->CTRL |= MEC_BIT(MEC_PECI_CTRL_TXEN_Pos);
    } else {
        regs->CTRL &= (uint8_t)~MEC_BIT(MEC_PECI_CTRL_TXEN_Pos);
    }

    return MEC_RET_OK;
}

uint32_t mec_hal_peci_status(struct mec_peci_regs *regs)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return 0;
    }
#endif

    uint32_t sts = regs->STATUS1;

    sts |= ((uint32_t)regs->STATUS2 << 8);
    sts |= ((uint32_t)regs->ERROR << 16);

    return sts;
}

/* PECI status1 has a bit set by any bit active in the error status register.
 * We must clear error status first.
 * PECI status2 is read-only
 */
uint32_t mec_hal_peci_status_clear(struct mec_peci_regs *regs, uint32_t sts)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return 0;
    }
#endif

    regs->ERROR = (uint8_t)(sts >> 16);
    regs->STATUS1 = (uint8_t)sts;

    return sts;
}

int mec_hal_peci_girq_en(struct mec_peci_regs *regs)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_ctrl(MEC_PECI_ECIA_INFO, 1);

    return MEC_RET_OK;
}

int mec_hal_peci_girq_dis(struct mec_peci_regs *regs)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_ctrl(MEC_PECI_ECIA_INFO, 0);

    return MEC_RET_OK;
}

int mec_hal_peci_girq_clr(struct mec_peci_regs *regs)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    mec_hal_girq_clr_src(MEC_PECI_ECIA_INFO);

    return MEC_RET_OK;
}

uint32_t mec_hal_peci_girq_result(struct mec_peci_regs *regs)
{
#ifdef MEC_PECI_BASE_CHECK
    if ((uintptr_t)regs != (uintptr_t)MEC_PECI0_BASE) {
        return MEC_RET_ERR_INVAL;
    }
#else
    (void)regs;
#endif

    return mec_hal_girq_result(MEC_PECI_ECIA_INFO);
}

/* ---- Power Management ---- */

#define MEC_PECI_PM_SAVE_ITEMS_CNT 2
static uint8_t peci_pm_save_buf[MEC_PECI_PM_SAVE_ITEMS_CNT];

void mec_hal_peci_pm_save_disable(void)
{
    peci_pm_save_buf[0] = MEC_PECI0->CTRL;
    MEC_PECI0->CTRL |= MEC_BIT(MEC_PECI_CTRL_PWRDN_Pos);

    if (mec_hal_ecs_peci_vtt_ref_pin_is_enabled()) {
        peci_pm_save_buf[1] = 1;
    }

    mec_hal_ecs_peci_vtt_ref_pin_ctrl(0);
}

void mec_hal_peci_pm_save_restore(void)
{
    if (peci_pm_save_buf[1]) {
        mec_hal_ecs_peci_vtt_ref_pin_ctrl(1);
    }

    MEC_PECI0->CTRL = peci_pm_save_buf[0];
}

/* end mec_peci.c */
