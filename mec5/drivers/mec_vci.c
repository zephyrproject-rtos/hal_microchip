/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_vci_api.h"
#include "mec_retval.h"
#include "device_mec5.h"

/* VCI_IN[0:6] are always bits[0:5] in registers referencing them */
#define MEC5_VCI_IN_0_6_MASK 0x3fu

/* -------- VBAT Powered Control Interface (VCI) API -------- */

int mec_hal_vci_pin_disable(uint8_t vci_id)
{
    if (vci_id >= MEC5_VCI_PINS) {
        return MEC_RET_ERR_INVAL;
    }

    MEC_VCI->VCI_INPUT_EN &= (uint32_t)~MEC_BIT(vci_id);
    MEC_VCI->VCI_IN_VBAT_BUFEN &= (uint32_t)~MEC_BIT(vci_id);

    return MEC_RET_OK;
}

/* Return current state of VCI pin inputs. If latching is enabled
 * the current state is the latched state otherwise the state is
 * live pin after filtering and polarity are applied.
 * b[6:0] = VCI_IN[6:0]
 * b[8] = current VCI_OVRD_IN state
 * b[9] = current VCI_OUT state
 * b[16] = Week Alarm state
 * b[17] = RTC Alaram state
 */
uint32_t mec_hal_vci_in_pin_states(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (regs->CONFIG & 0x3037fu);
}

uint8_t mec_hal_vci_out_get(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (uint8_t)((regs->CONFIG >> MEC_VCI_CONFIG_VCI_OUT_Pos) & MEC_BIT(0));
}

uint8_t mec_hal_vci_ovrd_in_get(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (uint8_t)((regs->CONFIG >> MEC_VCI_CONFIG_VCI_OVRD_IN_Pos) & MEC_BIT(0));
}

/* VCI_IN[] pin filter enable/disable */
int mec_hal_vci_in_filter_enable(struct mec_vci_regs *regs, uint8_t enable)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_VCI_CONFIG_VCI_FILT_Pos);
    } else {
        regs->CONFIG |= MEC_BIT(MEC_VCI_CONFIG_VCI_FILT_Pos);
    }

    return MEC_RET_OK;
}

/* set the state of software controlled VCI_OUT pin state
 * This value has no effect on VCI_OUT pin unless the FW_EXT bit is 1.
 */
int mec_hal_vci_sw_vci_out_set(struct mec_vci_regs *regs, uint8_t pin_state)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (pin_state) {
        regs->CONFIG |= MEC_BIT(MEC_VCI_CONFIG_FW_VCI_OUT_Pos);
    } else {
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_VCI_CONFIG_FW_VCI_OUT_Pos);
    }

    return MEC_RET_OK;
}

/* Enable software control of VCI_OUT pin state */
int mec_hal_vci_sw_vci_out_enable(struct mec_vci_regs *regs, uint8_t enable)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) { /* VCI_OUT pin state is set by bit[10] of this register */
        regs->CONFIG |= MEC_BIT(MEC_VCI_CONFIG_VCI_OUT_SRC_Pos);
    } else { /* VCI_OUT pin controlled by external pin inputs */
        regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_VCI_CONFIG_VCI_OUT_SRC_Pos);
    }

    return MEC_RET_OK;
}

uint32_t mec_hal_vci_in_latched_get(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (regs->CONFIG & MEC5_VCI_IN_0_6_MASK);
}

int mec_hal_vci_in_latch_enable(struct mec_vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->LATCH_EN = latch_bitmap;

    return MEC_RET_OK;
}

int mec_hal_vci_in_latch_disable(struct mec_vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->LATCH_EN &= (uint32_t)~latch_bitmap;

    return MEC_RET_OK;
}

uint32_t mec_hal_vci_in_latch_enable_get(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->LATCH_EN;
}

int mec_hal_vci_in_latch_reset(struct mec_vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->LATCH_RESET = latch_bitmap;

    return MEC_RET_OK;
}

int mec_hal_vci_in_input_enable(struct mec_vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VCI_INPUT_EN = latch_bitmap;
    regs->LATCH_RESET = latch_bitmap; /* clear spurious status */

    return MEC_RET_OK;
}

uint32_t mec_hal_vci_in_input_enable_get(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VCI_INPUT_EN;
}

int mec_hal_vci_out_power_on_delay(struct mec_vci_regs *regs, uint32_t delay_ms)
{
    uint32_t delay_cnt = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (delay_ms == 0) { /* disable */
        regs->HOLD_OFF_CNT = 0;
    }

    if ((delay_ms < 125u) || (delay_ms > (32u * 1000u))) {
        return MEC_RET_ERR_INVAL;
    }

    delay_cnt = delay_ms / 125u;
    if (((delay_cnt % 125u) > 62u) && (delay_cnt < 0xffu)) {
        delay_cnt++;
    }

    regs->HOLD_OFF_CNT = delay_cnt;

    return MEC_RET_OK;
}

/* Set the polarity of selected VCI_IN[n] pins.
 * Polarity = 1 Active High
 *          = 0 Active Low
 */
int mec_hal_vci_in_polarity(struct mec_vci_regs *regs, uint32_t vci_in_bitmap,
                            uint32_t polarity_bitmap)
{
    uint32_t temp = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    temp = regs->VCI_POLARITY;
    temp &= (uint32_t)~(vci_in_bitmap);
    temp |= (polarity_bitmap & vci_in_bitmap);
    regs->VCI_POLARITY = temp;

    return MEC_RET_OK;
}

uint32_t mec_hal_vci_pedge_detect(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VCI_IN_POSED_STS;
}

uint32_t mec_hal_vci_nedge_detect(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VCI_IN_NEGED_STS;
}

void mec_hal_vci_pedge_detect_clr(struct mec_vci_regs *regs, uint32_t bitmap)
{
    if (!regs) {
        return;
    }

    regs->VCI_IN_POSED_STS = bitmap;
}

void mec_hal_vci_nedge_detect_clr(struct mec_vci_regs *regs, uint32_t bitmap)
{
    if (!regs) {
        return;
    }

    regs->VCI_IN_NEGED_STS = bitmap;
}

void mec_hal_vci_edge_detect_clr_all(struct mec_vci_regs *regs)
{
    if (!regs) {
        return;
    }

    regs->VCI_IN_POSED_STS = UINT32_MAX;
    regs->VCI_IN_NEGED_STS = UINT32_MAX;
}

/* Select which VCI_IN[] pin edge detector are enabled when the chip
 * is powered only by the VBAT power rail (VTR Core is off).
 * When the chip is on (VTR Core ON) this register has no effect on
 * the edge detector enables.
 */
uint32_t mec_hal_vci_vbat_edge_detect_get(struct mec_vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VCI_IN_VBAT_BUFEN;
}

int mec_hal_vci_vbat_edge_detect(struct mec_vci_regs *regs, uint32_t bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VCI_IN_VBAT_BUFEN = bitmap;

    return MEC_RET_OK;
}

#ifdef MEC5_VCI_HAS_LID_DETECT

int mec_hal_vci_lid_detect_enable(struct mec_vci_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_VCI_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VCI_LID_OPEN_DET_EN |= MEC_BIT(MEC_VCI_VCI_LID_OPEN_DET_EN_VCI_LID_EN_Pos);

    return MEC_RET_OK;
}

#endif

/* end mec_vci.c */
