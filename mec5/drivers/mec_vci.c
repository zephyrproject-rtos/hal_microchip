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

/* -------- VBAT Powered Control Interface (VCI) API -------- */

/* Return current state of VCI pin inputs. If latching is enabled
 * the current state is the latched state otherwise the state is
 * live pin after filtering and polarity are applied.
 * b[6:0] = VCI_IN[6:0]
 * b[8] = current VCI_OVRD_IN state
 * b[9] = current VCI_OUT state
 * b[16] = Week Alarm state
 * b[17] = RTC Alaram state
 */
uint32_t mec_vci_in_pin_states(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (regs->CFGIN & 0x3037fu);
}

uint8_t mec_vci_out_get(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (uint8_t)((regs->CFGIN >> VCI_CFGIN_OUT_Pos) & MEC_BIT(0));
}

uint8_t mec_vci_ovrd_in_get(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return (uint8_t)((regs->CFGIN >> VCI_CFGIN_OVRD_IN_Pos) & MEC_BIT(0));
}

/* VCI_IN[] pin filter enable/disable */
int mec_vci_in_filter_enable(struct vci_regs *regs, uint8_t enable)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        regs->CFGIN &= (uint32_t)~MEC_BIT(VCI_CFGIN_VCI_FILT_Pos);
    } else {
        regs->CFGIN |= MEC_BIT(VCI_CFGIN_VCI_FILT_Pos);
    }

    return MEC_RET_OK;
}

/* set the state of software controlled VCI_OUT pin state
 * This value has no effect on VCI_OUT pin unless the FW_EXT bit is 1.
 */
int mec_vci_sw_vci_out_set(struct vci_regs *regs, uint8_t pin_state)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (pin_state) {
        regs->CFGIN |= MEC_BIT(VCI_CFGIN_FW_VCOUT_Pos);
    } else {
        regs->CFGIN &= (uint32_t)~MEC_BIT(VCI_CFGIN_FW_VCOUT_Pos);
    }

    return MEC_RET_OK;
}

/* Enable software control of VCI_OUT pin state */
int mec_vci_sw_vci_out_enable(struct vci_regs *regs, uint8_t enable)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) { /* VCI_OUT pin state is set by bit[10] of this register */
        regs->CFGIN |= MEC_BIT(VCI_CFGIN_VCOUT_SRC_Pos);
    } else { /* VCI_OUT pin controlled by external pin inputs */
        regs->CFGIN &= (uint32_t)~MEC_BIT(VCI_CFGIN_VCOUT_SRC_Pos);
    }

    return MEC_RET_OK;
}

uint32_t mec_vci_in_latched_get(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return ((regs->CFGIN & VCI_CFGIN_LIN_Msk) >> VCI_CFGIN_LIN_Pos);
}

int mec_vci_in_latch_enable(struct vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VLATCH = latch_bitmap;

    return MEC_RET_OK;
}

int mec_vci_in_latch_disable(struct vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VLATCH &= (uint32_t)~latch_bitmap;

    return MEC_RET_OK;
}

uint32_t mec_vci_in_latch_enable_get(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VLATCH;
}

int mec_vci_in_latch_reset(struct vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VLRST = latch_bitmap;

    return MEC_RET_OK;
}

int mec_vci_in_input_enable(struct vci_regs *regs, uint32_t latch_bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VINE = latch_bitmap;
    regs->VLRST = latch_bitmap; /* clear spurious status */

    return MEC_RET_OK;
}

uint32_t mec_vci_in_input_enable_get(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VINE;
}

int mec_vci_out_power_on_delay(struct vci_regs *regs, uint32_t delay_ms)
{
    uint32_t delay_cnt = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (delay_ms == 0) { /* disable */
        regs->HOCNT = 0;
    }

    if ((delay_ms < 125u) || (delay_ms > (32u * 1000u))) {
        return MEC_RET_ERR_INVAL;
    }

    delay_cnt = delay_ms / 125u;
    if (((delay_cnt % 125u) > 62u) && (delay_cnt < 0xffu)) {
        delay_cnt++;
    }

    regs->HOCNT = delay_cnt;

    return MEC_RET_OK;
}

/* Set the polarity of selected VCI_IN[n] pins.
 * Polarity = 1 Active High
 *          = 0 Active Low
 */
int mec_vci_in_polarity(struct vci_regs *regs, uint32_t vci_in_bitmap, uint32_t polarity_bitmap)
{
    uint32_t temp = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    temp = regs->VPOL;
    temp &= (uint32_t)~(vci_in_bitmap);
    temp |= (polarity_bitmap & vci_in_bitmap);
    regs->VPOL = temp;

    return MEC_RET_OK;
}

uint32_t mec_vci_pedge_detect(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VPED;
}

uint32_t mec_vci_nedge_detect(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VNED;
}

void mec_vci_pedge_detect_clr(struct vci_regs *regs, uint32_t bitmap)
{
    if (!regs) {
        return;
    }

    regs->VPED = bitmap;
}

void mec_vci_nedge_detect_clr(struct vci_regs *regs, uint32_t bitmap)
{
    if (!regs) {
        return;
    }

    regs->VNED = bitmap;
}

void mec_vci_edge_detect_clr_all(struct vci_regs *regs)
{
    if (!regs) {
        return;
    }

    regs->VPED = UINT32_MAX;
    regs->VNED = UINT32_MAX;
}

/* Select which VCI_IN[] pin edge detector are enabled when the chip
 * is powered only by the VBAT power rail (VTR Core is off).
 * When the chip is on (VTR Core ON) this register has no effect on
 * the edge detector enables.
 */
uint32_t mec_vci_vbat_only_edge_detect_get(struct vci_regs *regs)
{
    if (!regs) {
        return 0;
    }

    return regs->VBEN;
}

int mec_vci_vbat_only_edge_detect(struct vci_regs *regs, uint32_t bitmap)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->VBEN = bitmap;

    return MEC_RET_OK;
}

/* end mec_vci.c */
