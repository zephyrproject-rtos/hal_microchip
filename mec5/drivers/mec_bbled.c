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
#include "mec_bbled_api.h"
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
    { MEC_BBLED0_BASE, MEC_PCR_BBLED0, MEC_BBLED0_ECIA_INFO },
    { MEC_BBLED1_BASE, MEC_PCR_BBLED1, MEC_BBLED1_ECIA_INFO },
    { MEC_BBLED2_BASE, MEC_PCR_BBLED2, MEC_BBLED2_ECIA_INFO },
#if MEC5_BBLED_INSTANCES == 4
    { MEC_BBLED3_BASE, MEC_PCR_BBLED3, MEC_BBLED3_ECIA_INFO },
#endif
};

#ifdef MEC_BBLED_FAST_ADDR_LOOKUP
static inline uint32_t bbled_fast_idx(uintptr_t base)
{
    return (((uint32_t)base >> 8) & 0x3u);
}

static struct mec_bbled_info const *find_bbled_info(uintptr_t base_addr)
{
    return &bbled_instances[bbled_fast_idx(base_addr)];
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
    for (int i = 0; i < (int)MEC5_BBLED_INSTANCES; i++) {
        if (base_addr == bbled_instances[i].base_addr) {
            return i;
        }
    }

    return -1;
}

static uint8_t bbled_get_pwm_size(struct mec_bbled_regs *regs)
{
    return (uint8_t)((regs->CONFIG & MEC_BBLED_CONFIG_PWM_SZ_Msk) >> MEC_BBLED_CONFIG_PWM_SZ_Pos);
}

static void bbled_set_pwm_size(struct mec_bbled_regs *regs, uint8_t pwm_width)
{
    regs->CONFIG = (regs->CONFIG & (uint32_t)~MEC_BBLED_CONFIG_PWM_SZ_Msk) |
        (((uint32_t)pwm_width << MEC_BBLED_CONFIG_PWM_SZ_Pos) & MEC_BBLED_CONFIG_PWM_SZ_Msk);
}

static void bbled_set_clk_src(struct mec_bbled_regs *regs, uint8_t use_sys_clk)
{
    if (use_sys_clk) {
        regs->CONFIG |= MEC_BIT(MEC_BBLED_CONFIG_CLKSRC_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_BBLED_CONFIG_CLKSRC_Pos);
    }
}

static void bbled_set_wdt_reload(struct mec_bbled_regs *regs, uint32_t bbcfg)
{
    uint32_t temp = (bbcfg & MEC_BBLED_CFG_WDT_RELOAD_MSK) >> MEC_BBLED_CFG_WDT_RELOAD_POS;

    regs->CONFIG = ((regs->CONFIG & (uint32_t)~MEC_BBLED_CONFIG_WDTRLD_Msk) |
                  ((temp << MEC_BBLED_CONFIG_WDTRLD_Pos) & MEC_BBLED_CONFIG_WDTRLD_Msk));
}

static void bbled_set_mode(struct mec_bbled_regs *regs, uint8_t mode)
{
    regs->CONFIG = ((regs->CONFIG & (uint32_t)~MEC_BBLED_CONFIG_CTRL_Msk) |
                  (((uint32_t)mode << MEC_BBLED_CONFIG_CTRL_Pos) & MEC_BBLED_CONFIG_CTRL_Msk));
}

static uint8_t bbled_get_mode(struct mec_bbled_regs *regs)
{
    return (uint8_t)((regs->CONFIG & MEC_BBLED_CONFIG_CTRL_Msk) >> MEC_BBLED_CONFIG_CTRL_Pos);
}

/* ---- Public API ---- */

bool mec_hal_bbled_is_valid(struct mec_bbled_regs *regs)
{
    if (find_bbled_index((uintptr_t)regs) < 0) {
        return false;
    }

    return true;
}

void mec_hal_bbled_synchronize_enable(struct mec_bbled_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CONFIG |= MEC_BIT(MEC_BBLED_CONFIG_SYNC_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_BBLED_CONFIG_SYNC_Pos);
    }
}

bool mec_hal_bbled_is_off(struct mec_bbled_regs *regs)
{
    if (regs->CONFIG & MEC_BBLED_CONFIG_CTRL_Msk) {
        return false;
    }

    return true;
}

void mec_hal_bbled_asym_enable(struct mec_bbled_regs *regs, uint8_t enable)
{
    if (enable) {
        regs->CONFIG |= MEC_BIT(MEC_BBLED_CONFIG_ASYM_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_BBLED_CONFIG_ASYM_Pos);
    }
}

/* Initialize a BBLED instance and leave it in OFF mode */
int mec_hal_bbled_init(struct mec_bbled_regs *regs, uint32_t bbled_config)
{
    const struct mec_bbled_info *info = find_bbled_info((uintptr_t)regs);
    uint8_t asym_enable = 0;

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, 0);
    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);

    if (bbled_config & MEC_BIT(MEC_BBLED_CFG_SOFT_RESET_POS)) {
        regs->CONFIG |= MEC_BIT(MEC_BBLED_CONFIG_SRST_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BBLED_CONFIG_CTRL_Msk;
        regs->CONFIG |= (MEC_BBLED_CONFIG_CTRL_OFF << MEC_BBLED_CONFIG_CTRL_Pos);
    }

    mec_hal_girq_clr_src(info->devi);

    if (bbled_config & MEC_BIT(MEC_BBLED_CFG_SET_WDT_RLD_POS)) {
        bbled_set_wdt_reload(regs, bbled_config);
    }

    if (bbled_config & MEC_BIT(MEC_BBLED_CFG_WDT_ASYM_EN_POS)) {
        asym_enable = 1;
    }

    mec_hal_bbled_asym_enable(regs, asym_enable);

    return 0;
}

int mec_hal_bbled_girq_ctrl(struct mec_bbled_regs *regs, uint8_t enable)
{
    const struct mec_bbled_info *info = find_bbled_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, enable);

    return MEC_RET_OK;
}

int mec_hal_bbled_girq_status_clr(struct mec_bbled_regs *regs)
{
    const struct mec_bbled_info *info = find_bbled_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(info->devi);

    return MEC_RET_OK;
}

void mec_hal_bbled_enable_update(struct mec_bbled_regs *regs)
{
    regs->CONFIG |= MEC_BIT(MEC_BBLED_CONFIG_UPDATE_Pos);
}

bool mec_hal_bbled_enable_is_update(struct mec_bbled_regs *regs)
{
    if (regs->CONFIG & MEC_BIT(MEC_BBLED_CONFIG_UPDATE_Pos)) {
        return true;
    }

    return false;
}

uint32_t mec_hal_bbled_clk_freq(struct mec_bbled_regs *regs)
{
    if (regs->CONFIG & MEC_BIT(MEC_BBLED_CONFIG_CLKSRC_Pos)) {
        return (uint32_t)MEC_BBLED_SYS_CLK_FREQ;
    }
    return (uint32_t)MEC_BBLED_CLK_FREQ;
}

int mec_hal_bbled_breathe_pwm_width(struct mec_bbled_regs *regs, uint8_t pwm_width)
{
    uint8_t mode = 0;

    if (!regs || (pwm_width > MEC_BBLED_PWM_WIDTH_6)) {
        return MEC_RET_ERR_INVAL;
    }

    mode = bbled_get_mode(regs);
    if ((mode == MEC_BBLED_MODE_BREATHE) || (mode == MEC_BBLED_MODE_BLINK)) {
        return MEC_RET_ERR_BUSY;
    }

    bbled_set_pwm_size(regs, pwm_width);

    return MEC_RET_OK;
}

uint8_t mec_hal_bbled_breathe_pwm_width_get(struct mec_bbled_regs *regs)
{
    return bbled_get_pwm_size(regs);
}

int mec_hal_bbled_blink_clk_sel(struct mec_bbled_regs *regs, uint8_t blink_clk_sel)
{
    uint8_t use_sys_clk = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (blink_clk_sel != (uint8_t)MEC_BBLED_BLINK_CLK_SEL_32K) {
        use_sys_clk = 1;
    }

    bbled_set_clk_src(regs, use_sys_clk);

    return MEC_RET_OK;
}

uint8_t mec_hal_bbled_blink_clk_sel_get(struct mec_bbled_regs *regs)
{
    uint8_t clksel = (uint8_t)MEC_BBLED_BLINK_CLK_SEL_32K;

    if (regs->CONFIG & MEC_BIT(MEC_BBLED_CONFIG_CLKSRC_Pos)) {
        clksel = (uint8_t)MEC_BBLED_BLINK_CLK_SEL_SYS;
    }

    return clksel;
}

uint32_t mec_hal_bbled_blink_pwm_freq_get(struct mec_bbled_regs *regs)
{
    uint32_t fsrc = mec_hal_bbled_clk_freq(regs);
    uint32_t prescaler = (regs->DELAY & MEC_BBLED_DELAY_LO_Msk) >> MEC_BBLED_DELAY_LO_Pos;
    uint32_t fpwm = 0;

    prescaler = (prescaler + 1) << 8;
    if (!prescaler) {
        return 0;
    }

    fpwm = fsrc / prescaler;
    if ((fsrc % prescaler) > (prescaler >> 1)) {
        fpwm++;
    }

    return fpwm;
}

int mec_hal_bbled_mode(struct mec_bbled_regs *regs, uint8_t mode)
{
    if (!regs || (mode > MEC_BBLED_MODE_ON)) {
        return MEC_RET_ERR_INVAL;
    }

    bbled_set_mode(regs, mode);

    return MEC_RET_OK;
}

uint8_t mec_hal_bbled_mode_get(struct mec_bbled_regs *regs)
{
    return bbled_get_mode(regs);
}

int mec_hal_bbled_breathe_config(struct mec_bbled_regs *regs, struct mec_bbled_breathe_config *br_cfg)
{
    uint32_t temp = 0;
    uint8_t mode = 0;

    if (!regs || !br_cfg) {
        return MEC_RET_ERR_INVAL;
    }

    mode = bbled_get_mode(regs);
    if (mode == MEC_BBLED_MODE_BLINK) {
        return MEC_RET_ERR_INVAL;
    }

    temp = (((uint32_t)br_cfg->min_hold << MEC_BBLED_LIMITS_MIN_Pos) & MEC_BBLED_LIMITS_MIN_Msk);
    temp |= (((uint32_t)br_cfg->max_hold << MEC_BBLED_LIMITS_MAX_Pos) & MEC_BBLED_LIMITS_MAX_Msk);
    regs->LIMITS = temp;

    temp = ((uint32_t)br_cfg->lo_delay << MEC_BBLED_DELAY_LO_Pos) & MEC_BBLED_DELAY_LO_Msk;
    temp |= (((uint32_t)br_cfg->hi_delay << MEC_BBLED_DELAY_HI_Pos) & MEC_BBLED_DELAY_HI_Msk);
    regs->DELAY = temp;

    regs->UPDSS = br_cfg->upd_steps;
    regs->UPINVL = br_cfg->upd_intervals;

    return MEC_RET_OK;
}

int mec_hal_bbled_breathe_config_get(struct mec_bbled_regs *regs,
                                     struct mec_bbled_breathe_config *br_cfg)
{
    uint32_t temp = 0;

    if (!regs || !br_cfg) {
        return MEC_RET_ERR_INVAL;
    }

    br_cfg->upd_intervals = regs->UPINVL;
    br_cfg->upd_steps = regs->UPDSS;

    temp = regs->DELAY;
    br_cfg->lo_delay = (uint16_t)((temp & MEC_BBLED_DELAY_LO_Msk) >> MEC_BBLED_DELAY_LO_Pos);
    br_cfg->hi_delay = (uint16_t)((temp & MEC_BBLED_DELAY_HI_Msk) >> MEC_BBLED_DELAY_HI_Pos);

    temp = regs->LIMITS;
    br_cfg->min_hold = (uint8_t)((temp & MEC_BBLED_LIMITS_MIN_Msk) >> MEC_BBLED_LIMITS_MIN_Pos);
    br_cfg->max_hold = (uint8_t)((temp & MEC_BBLED_LIMITS_MAX_Msk) >> MEC_BBLED_LIMITS_MAX_Pos);

    br_cfg->pwm_width = bbled_get_pwm_size(regs);

    return MEC_RET_OK;
}

int mec_hal_bbled_blink_config(struct mec_bbled_regs *regs, struct mec_bbled_blink_config *bl_cfg)
{
    uint8_t mode = 0;

    if (!regs || !bl_cfg) {
        return MEC_RET_ERR_INVAL;
    }

    mode = bbled_get_mode(regs);
    if (mode == MEC_BBLED_MODE_BREATHE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->LIMITS =
        ((uint32_t)bl_cfg->duty_cycle << MEC_BBLED_LIMITS_MIN_Pos) & MEC_BBLED_LIMITS_MIN_Msk;
    regs->DELAY =
        ((uint32_t)bl_cfg->pwm_clk_prescaler << MEC_BBLED_DELAY_LO_Pos) & MEC_BBLED_DELAY_LO_Msk;

    return MEC_RET_OK;
}

int mec_hal_bbled_blink_config_get(struct mec_bbled_regs *regs, struct mec_bbled_blink_config *bl_cfg)
{
    if (!regs || !bl_cfg) {
        return MEC_RET_ERR_INVAL;
    }

    bl_cfg->pwm_clk_prescaler =
        (uint16_t)((regs->DELAY & MEC_BBLED_DELAY_LO_Msk) >> MEC_BBLED_DELAY_LO_Pos);
    bl_cfg->duty_cycle =
        (uint8_t)((regs->LIMITS & MEC_BBLED_LIMITS_MIN_Msk) >> MEC_BBLED_LIMITS_MIN_Pos);
    bl_cfg->flags = MEC_BBLED_BLINK_PWM_FREQ_32K;
    if (regs->CONFIG & MEC_BIT(MEC_BBLED_CONFIG_CLKSRC_Pos)) {
        bl_cfg->flags = MEC_BBLED_BLINK_PWM_FREQ_SYS;
    }

    return MEC_RET_OK;
}

/* end mec_bbled.c */
