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

#define MEC_BBLED_FAST_ADDR_LOOKUP
#define MEC_BBLED_ADDR_SPACING 0x100u

#define MEC_BBLED_CLK_FREQ      32768u
#define MEC_BBLED_SYS_CLK_FREQ  48000000u

#define MEC_BBLED_GIRQ 17

#define MEC_BBLED0_GIRQ_POS 13
#define MEC_BBLED1_GIRQ_POS 14
#define MEC_BBLED2_GIRQ_POS 15
#define MEC_BBLED3_GIRQ_POS 16

#define MEC_BBLED0_ECIA_INFO MEC5_ECIA_INFO(23, 0, 14, 136)
#define MEC_BBLED1_ECIA_INFO MEC5_ECIA_INFO(23, 1, 14, 137)
#define MEC_BBLED2_ECIA_INFO MEC5_ECIA_INFO(23, 2, 14, 138)
#define MEC_BBLED3_ECIA_INFO MEC5_ECIA_INFO(23, 3, 14, 139)

struct mec_bbled_info {
    uintptr_t base_addr;
    uint16_t pcr_id;
    uint32_t devi;
};

static const struct mec_bbled_info bbled_instances[MEC5_BBLED_INSTANCES] = {
    { MEC_LED0_BASE, MEC_PCR_LED0, MEC_BBLED0_ECIA_INFO },
    { MEC_LED1_BASE, MEC_PCR_LED1, MEC_BBLED1_ECIA_INFO },
    { MEC_LED2_BASE, MEC_PCR_LED2, MEC_BBLED2_ECIA_INFO },
    { MEC_LED3_BASE, MEC_PCR_LED3, MEC_BBLED3_ECIA_INFO },
};

#ifdef MEC_BBLED_FAST_ADDR_LOOKUP
static inline uint32_t bbled_fast_idx(struct mec_btmr_regs *regs)
{
    return (((uint32_t)regs >> 8) & 0x3u);
}

static struct mec_bbled_info const *find_bbled_info(uintptr_t base_addr)
{
    return &bbled_instances[btimer_fast_idx((struct mec_led_regs *)base_addr)];
}
#else
static struct mec_bbled_info const *find_bbled_info(uintptr_t base_addr)
{
    for (size_t i = 0; i < MEC5_BBLED_INSTANCES; i++) {
        if (base_addr == bbled_instances[i].base_addr) {
            return &bbled_instances[i];
        }
    }

    return NULL;
}
#endif /* MEC_BBLED_FAST_ADDR_LOOKUP */

static int find_bbled_index(uintptr_t base_addr)
{
    for (int i = 0; i < (int)MEC5_BASIC_TIMER_INSTANCES; i++) {
        if (base_addr == btimer_instances[i].base_addr) {
            return i;
        }
    }

    return -1;
}

static void bbled_set_pwm_size(struct mec_led_regs *regs, uint32_t bbled_config)
{
    uint32_t temp = (bbled_cfg & MEC_BBLED_CFG_PWM_SIZE_MSK) >> MEC_BBLED_CFG_PWM_SIZE_POS;
    uint32_t rval = regs->CTRL & (uint32_t)~MEC_LED_CONFIG_PWM_SZ_Msk;

    rval |= ((temp << MEC_LED_CONFIG_PWM_SZ_Pos) & MEC_LED_CONFIG_PWM_SZ_Msk);
    regs->CTRL = rval;
}

static void bbled_set_clk_src(struct mec_led_regs *regs, uint8_t use_sys_clk)
{
    if (use_sys_clk) {
        regs->CTRL |= MEC_BIT(MEC_LED_CONFIG_CLKSRC_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(MEC_LED_CONFIG_CLKSRC_Pos);
    }
}

static void bbled_set_wdt_reload(struct mec_led_regs *regs, uint32_t bbcfg)
{
    uint32_t temp = (bbcfg & MEC_BBLED_CFG_WDT_RELOAD_MSK) >> MEC_BBLED_CFG_WDT_RELOAD_POS;

    regs->CTRL = ((regs->CTRL & (uint32_t)~MEC_LED_CONFIG_WDTRLD_Msk) |
                  ((temp << MEC_LED_CONFIG_WDTRLD_Pos) & MEC_LED_CONFIG_WDTRLD_Msk));
}

static void bbled_set_mode(struct mec_led_regs *regs, uint8_t mode)
{
    regs->CTRL = ((regs->CTRL & (uint32_t)~MEC_LED_CONFIG_CTRL_Msk) |
                  (((uint32_t)mode << MEC_LED_CONFIG_CTRL_Pos) & MEC_LED_CONFIG_CTRL_Msk));
}

/* ---- Public API ---- */

bool mec_hal_bbled_is_valid(struct led_regs *regs)
{
    if (find_bbled_index((uintptr_t)regs) < 0) {
        return false;
    }

    return true;
}

int mec_hal_bbled_synchronize_enable(struct led_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CONFIG |= MEC_BIT(MEC_LED_CONFIG_SYNC_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_LED_CONFIG_SYNC_Pos);
    }
}

bool mec_hal_bbled_is_off(struct led_regs *regs)
{
    if (regs->CTRL & MEC_LED_CONFIG_CTRL_Msk) {
        return false
    }

    return true;
}

void mec_hal_bbled_asym_enable(struct led_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CTRL |= MEC_BIT(MEC_LED_CONFIG_ASYM_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(MEC_LED_CONFIG_ASYM_Pos);
    }
}

/* Initialize a BBLED instance */
int mec_hal_bbled_init(struct led_regs *regs, uint32_t bbled_config)
{
    const struct mec_bbled_info *info = find_bbled_info((uintptr_t)regs);
    uint8_t mode = 0;
    uint8_t use_sys_clk = 0;
    uint8_t asym_enable = 0;

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, 0);
    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);

    if (bbled_config) {
        regs->CONFIG |= MEC_BIT(MEC_LED_CONFIG_SRST_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_LED_CONFIG_CTRL_Msk;
        regs->CONFIG |= (MEC_LED_CONFIG_CTRL_OFF << MEC_LED_CONFIG_CTRL_Pos);
    }

    mec_hal_girq_clr_src(info->devi);

    bbled_set_pwm_size(regs, bbled_config);

    mode = (uint8_t)((bbled_config & MEC_BBLED_CFG_MODE_MSK) >> MEC_BBLED_CFG_MODE_POS);
    if (mode == MEC_BBLED_CFG_MODE_BLINK_VAL) {
        if (bbled_config & MEC_BBLED_CFG_CLK_SRC_48M) {
            use_sys_clk = 1u;
        }
    }

    bbled_set_clk_src(regs, use_sys_clk);

    if (bbled_config & MEC_BIT(MEC_BBLED_CFG_SET_WDT_RLD_POS)) {
        bbled_set_wdt_reload(regs, bbled_config);
    }

    if (bbled_config & MEC_BIT(MEC_BBLED_CFG_WDT_ASYM_EN_POS)) {
        asym_enable = 1;
    }

    mec_hal_bbled_asym_enable(regs, asym_enable);
    bbled_set_mode(regs, mode);

    return 0;
}

uint32_t mec_hal_bbled_clk_freq(struct led_regs *regs)
{
    if (regs->CONFIG & MEC_BIT(MEC_LED_CONFIG_CLKSRC_Pos)) {
        return (uint32_t)MEC_BBLED_SYS_CLK_FREQ;
    }
    return (uint32_t)MEC_BBLED_CLK_FREQ;
}

uint16_t mec_hal_bbled_limit_min_get(struct led_regs *regs)
{
    return regs->LIMITS;
}

uint16_t mec_hal_bbled_delay_lo_get(struct led_regs *regs)
{
    return (uint16_t)((regs->DELAY & MEC_LED_DELAY_LO_Msk) >> MEC_LED_DELAY_LO_Pos);
}

uint16_t mec_hal_bbled_delay_hi_get(struct led_regs *regs)
{
    return (uint16_t)((regs->DELAY & MEC_LED_DELAY_HI_Msk) >> MEC_LED_DELAY_HI_Pos);
}

void mec_hal_bbled_delay_lo_set(struct led_regs *regs, uint16_t delay_periods)
{
    regs->DELAY = ((regs->DELAY (uint32_t)~MEC_LED_DELAY_LO_Msk) |
                   (((uint32_t)delay_periods << MEC_LED_DELAY_LO_Pos) & MEC_LED_DELAY_LO_Msk));
}

void mec_hal_bbled_delay_hi_set(struct led_regs *regs, uint16_t delay_periods)
{
    regs->DELAY = ((regs->DELAY (uint32_t)~MEC_LED_DELAY_HI_Msk) |
                   (((uint32_t)delay_periods << MEC_LED_DELAY_HI_Pos) & MEC_LED_DELAY_HI_Msk));
}

uint32_t mec_hal_bbled_step_sizes_get(struct led_regs *regs)
{
    return regs->UPDSS;
}

void mec_hal_bbled_step_sizes_set(struct led_regs *regs, uint32_t step_sizes)
{
    regs->UPDSS = step_sizes;
}

uint32_t mec_hal_bbled_intervals_sizes_get(struct led_regs *regs)
{
    return regs->UPINVL;
}

void mec_hal_bbled_intervals_set(struct led_regs *regs, uint32_t intervals)
{
    regs->UPINVL = intervals;
}

uint8_t mec_hal_bbled_output_delay_get(struct led_regs *regs)
{
    return (regs->OUTDLY & 0xffu);
}

void mec_hal_bbled_output_delay_get(struct led_regs *regs, uint8_t clk_periods)
{
    regs->OUTDLY = clk_periods;
}

int mec_hal_enable_update(struct mec_led_regs *regs)
{
    regs->CTRL |= MEC_BIT(MEC_LED_CONFIG_UPDATE_Pos);
}

bool mec_hal_enable_is_update(struct mec_led_regs *regs)
{
    if (regs->CTRL & MEC_BIT(MEC_LED_CONFIG_UPDATE_Pos)) {
        return true;
    }

    return false;
}


int mec_hal_bbled_girq_ctrl(struct mec_led_regs *regs, uint8_t enable)
{
    const struct mec_bbled_info *info = find_bbled_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, enable);

    return MEC_RET_OK;
}

int mec_hal_bbled_girq_status_clr(struct mec_led_regs *regs)
{
    const struct mec_bbled_info *info = find_bbled_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(info->devi);

    return MEC_RET_OK;
}

/* end mec_bbled.c */
