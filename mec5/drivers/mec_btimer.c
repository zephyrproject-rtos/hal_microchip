/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_btimer_api.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

#define MEC_BTIMER_FAST_ADDR_LOOKUP

#define MEC_BTIMER_GIRQ 23

#define MEC_BTIMER0_GIRQ_POS 0
#define MEC_BTIMER1_GIRQ_POS 1
#define MEC_BTIMER2_GIRQ_POS 2
#define MEC_BTIMER3_GIRQ_POS 3
#define MEC_BTIMER4_GIRQ_POS 4
#define MEC_BTIMER5_GIRQ_POS 5

#define MEC_BTIMER0_ECIA_INFO MEC5_ECIA_INFO(23, 0, 14, 136)
#define MEC_BTIMER1_ECIA_INFO MEC5_ECIA_INFO(23, 1, 14, 137)
#define MEC_BTIMER2_ECIA_INFO MEC5_ECIA_INFO(23, 2, 14, 138)
#define MEC_BTIMER3_ECIA_INFO MEC5_ECIA_INFO(23, 3, 14, 139)
#define MEC_BTIMER4_ECIA_INFO MEC5_ECIA_INFO(23, 4, 14, 140)
#define MEC_BTIMER5_ECIA_INFO MEC5_ECIA_INFO(23, 5, 14, 141)

#define MEC5_BTMR_PRESCALE_MSK0 (MEC_BTMR_CTRL_PRESCALE_Msk >> MEC_BTMR_CTRL_PRESCALE_Pos)

struct mec_btimer_info {
    uintptr_t base_addr;
    uint16_t pcr_id;
    uint32_t devi;
};

static const struct mec_btimer_info btimer_instances[MEC5_BASIC_TIMER_INSTANCES] = {
    { MEC_BTMR0_BASE, MEC_PCR_BTMR0, MEC_BTIMER0_ECIA_INFO },
    { MEC_BTMR1_BASE, MEC_PCR_BTMR1, MEC_BTIMER1_ECIA_INFO },
    { MEC_BTMR2_BASE, MEC_PCR_BTMR2, MEC_BTIMER2_ECIA_INFO },
    { MEC_BTMR3_BASE, MEC_PCR_BTMR3, MEC_BTIMER3_ECIA_INFO },
    { MEC_BTMR4_BASE, MEC_PCR_BTMR4, MEC_BTIMER4_ECIA_INFO },
    { MEC_BTMR5_BASE, MEC_PCR_BTMR5, MEC_BTIMER5_ECIA_INFO },
};

#ifdef MEC_BTIMER_FAST_ADDR_LOOKUP
/* Basic timers are spaced every 32 (0x20) bytes in AHB address space.
 * All six instances are contiguous therefore we can calculate the
 * zero based instance number from the address more quickly than using
 * the lookup table.
 */
static inline uint32_t btimer_fast_idx(struct mec_btmr_regs *regs)
{
    return (((uint32_t)regs >> 5) & 0x7u);
}

static struct mec_btimer_info const *find_btimer_info(uintptr_t base_addr)
{
    return &btimer_instances[btimer_fast_idx((struct mec_btmr_regs *)base_addr)];
}
#else
static struct mec_btimer_info const *find_btimer_info(uintptr_t base_addr)
{
    for (size_t i = 0; i < MEC5_BASIC_TIMER_INSTANCES; i++) {
        if (base_addr == btimer_instances[i].base_addr) {
            return &btimer_instances[i];
        }
    }

    return NULL;
}
#endif /* MEC_BTIMER_FAST_ADDR_LOOKUP */

static int find_btimer_index(uintptr_t base_addr)
{
    for (int i = 0; i < (int)MEC5_BASIC_TIMER_INSTANCES; i++) {
        if (base_addr == btimer_instances[i].base_addr) {
            return i;
        }
    }

    return -1;
}

/* ---- Public API ---- */

/* Initialize a basic timer instance.
 * timer frequency = max_freq / (pre_scale + 1)
 * pre_scale = b[31:16] of Control register.
 */
int mec_hal_btimer_init(struct mec_btmr_regs *regs, uint32_t freq_div,
                        uint32_t count, uint32_t flags)
{
    const struct mec_btimer_info *info = find_btimer_info((uintptr_t)regs);

    if (!info || !freq_div) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, 0);
    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);

    regs->CTRL = MEC_BIT(MEC_BTMR_CTRL_RESET_Pos);
    regs->CTRL = ((freq_div - 1u) & MEC5_BTMR_PRESCALE_MSK0) << MEC_BTMR_CTRL_PRESCALE_Pos;
    regs->PRELOAD = count;
    regs->COUNT = count;

    mec_hal_girq_ctrl(info->devi, 1);

    regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos);

    if (flags & MEC_BIT(MEC5_BTIMER_CFG_FLAG_AUTO_RELOAD_POS)) {
        regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_RESTART_Pos);
    }

    if (flags & MEC_BIT(MEC5_BTIMER_CFG_FLAG_COUNT_UP_POS)) {
        regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_CNT_DIR_Pos);
    }

    if (flags & MEC_BIT(MEC5_BTIMER_CFG_FLAG_INTR_EN_POS)) {
        regs->IEN |= MEC_BIT(MEC_BTMR_IEN_EVENT_Pos);
    }

    if (flags & MEC_BIT(MEC5_BTIMER_CFG_FLAG_START_POS)) {
        regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_START_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_btimer_has_counter32(struct mec_btmr_regs *regs)
{
    int idx = find_btimer_index((uint32_t)regs);

    if ((idx >= 0) && (idx < 32)) {
        if (MEC_BIT(idx) & MEC5_BASIC_TIMER_32_MSK) {
            return 1;
        }
    }

    return 0;
}

int mec_hal_btimer_reset(struct mec_btmr_regs *regs, uint32_t flags)
{
    uint32_t ctrl = 0, msk = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (flags & MEC_BIT(MEC5_BTMR_RST_PRESERVE_FDIV_POS)) {
        msk |= MEC_BTMR_CTRL_PRESCALE_Msk;
    }

    if (flags & MEC_BIT(MEC5_BTMR_RST_PRESERVE_DIR_POS)) {
        msk |= MEC_BTMR_CTRL_CNT_DIR_Msk;
    }

    ctrl = regs->CTRL;
    regs->CTRL = MEC_BIT(MEC_BTMR_CTRL_RESET_Pos);
    mec_hal_btimer_intr_clr(regs);

    if (msk) {
        regs->CTRL = (regs->CTRL & (uint32_t)~msk) | (ctrl & msk);
    }

    return 0;
}

bool mec_hal_btimer_is_enabled(struct mec_btmr_regs *regs)
{
    if (regs->CTRL & MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos)) {
        return true;
    }

    return false;
}

uint32_t mec_hal_btimer_freq(struct mec_btmr_regs *regs)
{
    uint32_t freqhz = 0u;

    if (regs) {
        freqhz = (regs->CTRL & MEC_BTMR_CTRL_PRESCALE_Msk) >> MEC_BTMR_CTRL_PRESCALE_Pos;
        freqhz = MEC5_BTIMER_MAX_FREQ_HZ / (freqhz + 1u); /* truncates */
    }

    return freqhz;
}

int mec_hal_btimer_girq_ctrl(struct mec_btmr_regs *regs, uint8_t enable)
{
    const struct mec_btimer_info *info = find_btimer_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, enable);

    return MEC_RET_OK;
}

int mec_hal_btimer_girq_status_clr(struct mec_btmr_regs *regs)
{
    const struct mec_btimer_info *info = find_btimer_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(info->devi);

    return MEC_RET_OK;
}

void mec_hal_btimer_pre_and_reload(struct mec_btmr_regs *regs, uint32_t preload,
                                   uint8_t do_reload)
{
    uint32_t ctrl = regs->CTRL;

    if (do_reload) {
        ctrl |= (MEC_BIT(MEC_BTMR_CTRL_RELOAD_Pos) | MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos)
                 | MEC_BIT(MEC_BTMR_CTRL_START_Pos));
        regs->PRELOAD = preload;
        regs->CTRL = ctrl;
    } else {
        regs->PRELOAD = preload;
    }
}

void mec_hal_btimer_start_load(struct mec_btmr_regs *regs, uint32_t initial_count,
                               uint32_t flags)
{
    uint32_t ien = 0;
    uint32_t ctrl = regs->CTRL;

    ctrl |= (MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos) | MEC_BIT(MEC_BTMR_CTRL_START_Pos));

    if (flags & MEC_BIT(MEC5_BTIMER_START_FLAG_IEN_POS)) {
        ien |= MEC_BIT(MEC_BTMR_IEN_EVENT_Pos);
    }

    if (flags & MEC_BIT(MEC5_BTIMER_START_FLAG_AUTO_POS)) {
        ctrl |= MEC_BIT(MEC_BTMR_CTRL_RESTART_Pos);
        regs->PRELOAD = initial_count;
    } else {
        ctrl &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_RESTART_Pos);
    }

    if (flags & MEC_BIT(MEC5_BTIMER_START_FLAG_DIR_UP)) {
        ctrl |= MEC_BIT(MEC_BTMR_CTRL_CNT_DIR_Pos);
    } else {
        ctrl &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_CNT_DIR_Pos);
    }

    regs->STATUS = MEC_BIT(MEC_BTMR_STATUS_EVENT_Pos);
    regs->COUNT = initial_count;
    regs->CTRL = ctrl;
    regs->IEN = ien;
}

bool mec_hal_btimer_is_started(struct mec_btmr_regs *regs)
{
    uint32_t msk = (MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos) | MEC_BIT(MEC_BTMR_CTRL_START_Pos));

    if ((regs->CTRL & msk) == msk) {
        return true;
    }

    return false;
}

bool mec_hal_btimer_is_counting_up(struct mec_btmr_regs *regs)
{
    if (regs->CTRL & MEC_BIT(MEC_BTMR_CTRL_CNT_DIR_Pos)) {
        return true;
    }

    return false;
}

void mec_hal_btimer_auto_restart(struct mec_btmr_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_RESTART_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_RESTART_Pos);
    }
}

bool mec_hal_btimer_is_auto_restart(struct mec_btmr_regs *regs)
{
    if (regs->CTRL & MEC_BIT(MEC_BTMR_CTRL_RESTART_Pos)) {
        return true;
    }
    return false;
}

/* Works counter start is 1 or 0.
 * Warning: there is race condition if counter is close to its limit.
 */
void mec_hal_btimer_reload_run(struct mec_btmr_regs *regs, uint32_t new_count)
{
    regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_HALT_Pos);
    regs->COUNT = new_count;
    regs->CTRL &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_HALT_Pos);
}

void mec_hal_btimer_intr_clr(struct mec_btmr_regs *regs)
{
    uint32_t devi = btimer_instances[btimer_fast_idx(regs)].devi;

    regs->STATUS = MEC_BIT(MEC_BTMR_STATUS_EVENT_Pos);
    mec_hal_girq_clr_src(devi);
}

void mec_hal_btimer_intr_en(struct mec_btmr_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->IEN |= MEC_BIT(MEC_BTMR_IEN_EVENT_Pos);
    } else {
        regs->IEN &= (uint32_t)~MEC_BIT(MEC_BTMR_IEN_EVENT_Pos);
    }
}

/* ---- Power Management ----
 * The basic timer keeps its PCR CLK_REQ signal asserted if it is
 * enabled and counting ignoring the PCR SLP_REQ signal. We must
 * save and clear each timers enable bit to cause PCR CLK_REQ to
 * deassert.
 */

static uint8_t btimer_pm_save_buf[MEC5_BASIC_TIMER_INSTANCES];

void mec_hal_btimer_pm_save_disable(void)
{
    for (int i = 0; i < MEC5_BASIC_TIMER_INSTANCES; i++) {
        struct mec_btmr_regs *regs = (struct mec_btmr_regs *)btimer_instances[i].base_addr;

        btimer_pm_save_buf[i] = (uint8_t)(regs->CTRL & MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos));
        regs->CTRL &= (uint32_t)~MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos);
    }
}

void mec_hal_btimer_pm_restore(void)
{
    for (int i = 0; i < MEC5_BASIC_TIMER_INSTANCES; i++) {
        struct mec_btmr_regs *regs = (struct mec_btmr_regs *)btimer_instances[i].base_addr;

        if (btimer_pm_save_buf[i]) {
            regs->CTRL |= MEC_BIT(MEC_BTMR_CTRL_ENABLE_Pos);
        }
    }
}

/* end mec_btimer.c */
