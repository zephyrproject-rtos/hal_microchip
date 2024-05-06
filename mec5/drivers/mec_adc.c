/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_adc_api.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

#define MEC_ADC_GIRQ         17
#define MEC_ADC_SM_GIRQ_POS  8
#define MEC_ADC_RM_GIRQ_POS  9
#define MEC_ADC_SM_ECIA_INFO MEC5_ECIA_INFO(MEC_ADC_GIRQ, MEC_ADC_SM_GIRQ_POS, 9, 78)
#define MEC_ADC_RM_ECIA_INFO MEC5_ECIA_INFO(MEC_ADC_GIRQ, MEC_ADC_RM_GIRQ_POS, 9, 79)

static inline uint32_t adc_intr_flag_to_bitmap(uint32_t flags)
{
    uint32_t bm = 0;

    if (flags & MEC_BIT(MEC_ADC_SINGLE_INTR_POS)) {
        bm |= MEC_BIT(MEC_ADC_SM_GIRQ_POS);
    }
    if (flags & MEC_BIT(MEC_ADC_REPEAT_INTR_POS)) {
        bm |= MEC_BIT(MEC_ADC_RM_GIRQ_POS);
    }

    return bm;
}

/* ---- Public API ---- */

/* Initialize ADC */
int mec_adc_init(struct adc_regs *regs, struct mec_adc_config *cfg)
{
    uint32_t girq_bm = MEC_BIT(MEC_ADC_SM_GIRQ_POS) | MEC_BIT(MEC_ADC_RM_GIRQ_POS);
    uint32_t temp = 4u;
    uint8_t flags = 0;

    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_clr_blk_slp_en(MEC_PCR_ADC0); /* clear sleep enable */
    mec_girq_bm_en(MEC_ADC_GIRQ, girq_bm, 0);
    mec_girq_bm_clr_src(MEC_ADC_GIRQ, girq_bm);

    regs->CTRL = 0;

    if (cfg) {
        flags = cfg->flags;

        if (flags & MEC_BIT(MEC_ADC_CFG_SOFT_RESET_POS)) {
            regs->CTRL = MEC_BIT(ADC_CTRL_SRST_Pos);
            while (temp--) {
                if (!(regs->CTRL & MEC_BIT(ADC_CTRL_SRST_Pos))) {
                    break;
                }
            }
            regs->CTRL = 0;
        }

        if (flags & MEC_BIT(MEC_ADC_CFG_PWR_SAVE_DIS_POS)) {
            regs->CTRL |= MEC_BIT(ADC_CTRL_PWR_SAVE_Pos);
        } else { /* enable by clearing the bit */
            regs->CTRL &= (uint32_t)~MEC_BIT(ADC_CTRL_PWR_SAVE_Pos);
        }

        if (flags & MEC_BIT(MEC_ADC_CFG_SAMPLE_TIME_POS)) {
            temp = (((uint32_t)cfg->sample_clk_hi_time << ADC_CONFIG_CHTM_Pos)
                    & ADC_CONFIG_CHTM_Msk);
            temp |= (((uint32_t)cfg->sample_clk_lo_time << ADC_CONFIG_CLTM_Pos)
                     & ADC_CONFIG_CLTM_Msk);
            regs->CONFIG = (regs->CONFIG & (uint32_t)~(ADC_CONFIG_CLTM_Msk
                                                       | ADC_CONFIG_CHTM_Msk)) | temp;

        }

        if (flags & MEC_BIT(MEC_ADC_CFG_WARM_UP_POS)) {
            regs->SAR_CTRL = (regs->SAR_CTRL & (uint32_t)~(ADC_SAR_CTRL_WARMUPDLY_Msk))
                             | (((uint32_t)cfg->warm_up_delay << ADC_SAR_CTRL_WARMUPDLY_Pos)
                                & ADC_SAR_CTRL_WARMUPDLY_Msk);
        }

        if (flags & MEC_BIT(MEC_ADC_CFG_RPT_DELAY_POS)) {
            temp = regs->DELAY & (uint32_t)~(ADC_DELAY_RSTART_DLY_Msk | ADC_DELAY_RPT_DLY_Msk);
            temp |= (((uint32_t)cfg->rpt_start_delay << ADC_DELAY_RSTART_DLY_Pos)
                     & ADC_DELAY_RSTART_DLY_Msk);
            temp |= (((uint32_t)cfg->rpt_cycle_delay << ADC_DELAY_RPT_DLY_Pos)
                     & ADC_DELAY_RPT_DLY_Msk);
            regs->DELAY = (regs->DELAY & (uint32_t)~(ADC_DELAY_RSTART_DLY_Msk));
        }

        if (flags & MEC_BIT(MEC_ADC_CFG_SAR_CFG_OVR_POS)) {
            regs->SAR_CFG = cfg->sar_config;
        }
    }

    regs->CTRL |= MEC_BIT(ADC_CTRL_ACTV_Pos);

    return MEC_RET_OK;
}

int mec_adc_activate(struct adc_regs *regs, uint8_t enable)
{
    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        regs->CTRL |= MEC_BIT(ADC_CTRL_ACTV_Pos);
    } else {
        regs->CTRL &= (uint32_t)~MEC_BIT(ADC_CTRL_ACTV_Pos);
    }

    return MEC_RET_OK;
}

/* repeat mode delays
 * Both delays are in units of 40 us.
 * Start delay applies once when repeat conversions are first started.
 * Repeat delay is applied after the first conversions of the selected
 * channels and subsequently between each set of conversions.
 */
int mec_adc_repeat_delay_set(struct adc_regs *regs, uint16_t start_delay, uint16_t repeat_delay)
{
    uint32_t delay = (uint32_t)start_delay | ((uint32_t)repeat_delay << 16);

    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->DELAY = delay;

    return MEC_RET_OK;
}

/* Set the channels for conversion in repeat mode */
int mec_adc_repeat_mode_chan_set(struct adc_regs *regs, uint32_t rpt_chan_bm)
{
    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->RCHEN = rpt_chan_bm;

    return MEC_RET_OK;
}

int mec_adc_chan_vref_select(struct adc_regs *regs, uint8_t chan_id, enum mec_adc_chan_vref vref)
{
    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if ((chan_id >= MEC5_ADC_CHANNELS) || (vref > MEC_ADC_CHAN_VREF_GPIO)) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t temp = regs->VREF_CHAN;

    temp &= ~(0x3u << (chan_id * 2u));
    temp |= (((uint32_t)vref & 0x3u) << (chan_id * 2u));
    regs->VREF_CHAN = temp;

    return MEC_RET_OK;
}

int mec_adc_differential_input_enable(struct adc_regs *regs, uint8_t enable)
{
    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        regs->SAR_CTRL |= MEC_BIT(ADC_SAR_CTRL_SELDIFF_Pos);
    } else {
        regs->SAR_CTRL &= (uint32_t)~MEC_BIT(ADC_SAR_CTRL_SELDIFF_Pos);
    }

    return MEC_RET_OK;
}

int mec_adc_resolution_set(struct adc_regs *regs, uint8_t resolution_bits)
{
    uint32_t res = 0;

    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    switch (resolution_bits) {
    case 10:
        res = ADC_SAR_CTRL_SELRES_10BIT;
        break;
    case 12:
        res = ADC_SAR_CTRL_SELRES_12BIT;
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    regs->SAR_CTRL = (regs->SAR_CTRL & (uint32_t)~(ADC_SAR_CTRL_SELRES_Msk))
                     | (res << ADC_SAR_CTRL_SELRES_Pos);

    return MEC_RET_OK;
}

int mec_adc_girq_ctrl(struct adc_regs *regs, uint32_t flags, uint8_t enable)
{
    uint32_t bm = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    bm = adc_intr_flag_to_bitmap(flags);
    mec_girq_bm_en(MEC_ADC_GIRQ, bm, enable);

    return MEC_RET_OK;
}

int mec_adc_girq_status_clr(struct adc_regs *regs, uint32_t flags)
{
    uint32_t bm = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    bm = adc_intr_flag_to_bitmap(flags);
    mec_girq_bm_clr_src(MEC_ADC_GIRQ, bm);

    return MEC_RET_OK;
}

uint32_t mec_adc_channels_done(struct adc_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return 0;
    }

    return regs->STATUS;
}

uint32_t mec_adc_channel_reading(struct adc_regs *regs, uint8_t channel)
{
    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return 0;
    }

    if (channel >= MEC5_ADC_CHANNELS) {
        return 0;
    }

    return regs->RD[channel];
}


/* Clear HW status in order:
 * 1. Channels done bitmap in STATUS register
 * 2. Single and/or Repeat sequence done in CTRL register
 * 3. Single and/or Repeate sequence done in GIRQ.Source register
 */
int mec_adc_status_clear(struct adc_regs *regs, uint32_t flags)
{
    uint32_t ctrl_val = 0, girq_clr_bm = 0;

    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (flags & MEC_BIT(MEC_ADC_SINGLE_INTR_POS)) {
        regs->STATUS |= regs->SCHEN;
        ctrl_val |= MEC_BIT(ADC_CTRL_SDONE_Pos);
        girq_clr_bm |= MEC_BIT(MEC_ADC_SM_GIRQ_POS);
    }

    if (flags & MEC_BIT(MEC_ADC_REPEAT_INTR_POS)) {
        regs->STATUS |= regs->RCHEN;
        ctrl_val |= MEC_BIT(ADC_CTRL_RDONE_Pos);
        girq_clr_bm |= MEC_BIT(MEC_ADC_RM_GIRQ_POS);
    }

    regs->CTRL |= ctrl_val;

    mec_girq_bm_clr_src(MEC_ADC_GIRQ, girq_clr_bm);

    return MEC_RET_OK;
}

int mec_adc_start(struct adc_regs *regs, uint16_t single_chan_bm, uint16_t rpt_chan_bm)
{
    uint32_t start_val = 0, ctrl_sts = 0, girq_clr_bm = 0;

    if ((uintptr_t)regs != (uintptr_t)ADC0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (single_chan_bm) {
        start_val |= MEC_BIT(ADC_CTRL_SSTART_Pos);
        ctrl_sts |= MEC_BIT(ADC_CTRL_SDONE_Pos);
        girq_clr_bm |= MEC_BIT(MEC_ADC_SM_GIRQ_POS);
        regs->SCHEN = single_chan_bm;
    }

    if (rpt_chan_bm) {
        start_val |= MEC_BIT(ADC_CTRL_RSTART_Pos);
        ctrl_sts |= MEC_BIT(ADC_CTRL_RDONE_Pos);
        girq_clr_bm |= MEC_BIT(MEC_ADC_RM_GIRQ_POS);
        regs->RCHEN = rpt_chan_bm;
    }

    if (start_val) {
        regs->STATUS = single_chan_bm | rpt_chan_bm;
        regs->CTRL |= ctrl_sts;
        mec_girq_bm_clr_src(MEC_ADC_GIRQ, girq_clr_bm);
        regs->CTRL |= start_val;
    }

    return MEC_RET_OK;
}

/* end mec_adc.c */
