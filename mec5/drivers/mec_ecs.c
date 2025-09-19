/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "device_mec5.h"
#include "mec_ecs_api.h"

void mec_hal_ecs_ictrl(uint8_t direct_en)
{
    if (direct_en) {
        MEC_ECS->INTR_CTRL |= MEC_BIT(MEC_ECS_INTR_CTRL_DIRECT_Pos);
    } else {
        MEC_ECS->INTR_CTRL &= (uint32_t)~MEC_BIT(MEC_ECS_INTR_CTRL_DIRECT_Pos);
    }
}

int mec_hal_ecs_is_idirect(void)
{
    if (MEC_ECS->INTR_CTRL & MEC_BIT(MEC_ECS_INTR_CTRL_DIRECT_Pos)) {
        return 1;
    }

    return 0;
}

void mec_hal_ecs_ahb_error_ctrl(uint8_t ahb_err_enable)
{
    if (ahb_err_enable) { /* clear AHB error capture disable bit */
        MEC_ECS->AERRC &= (uint32_t)~MEC_BIT(MEC_ECS_AERRC_CAP_Pos);
    } else {
        MEC_ECS->AERRC |= MEC_BIT(MEC_ECS_AERRC_CAP_Pos);
    }
}

uint32_t mec_hal_ecs_ahb_error_val(uint8_t clr_after_read)
{
    uint32_t ahb_error_val = MEC_ECS->AERRA;

    if (clr_after_read) {
        MEC_ECS->AERRA = 0u;
    }

    return ahb_error_val;
}

int mec_hal_ecs_is_feature_disabled(uint8_t feature)
{
    if (feature < 32) {
        if (MEC_ECS->FEAT_LOCK & MEC_BIT(feature)) {
            return 1;
        }
    } else if (feature < 64) {
        feature -= 32;
        if (MEC_ECS->MISC_LOCK & MEC_BIT(feature)) {
            return 1;
        }
    }

    return 0;
}

void mec_hal_ecs_etm_pins(uint8_t enable)
{
    if (enable) {
        MEC_ECS->ETM_CTRL |= MEC_BIT(MEC_ECS_ETM_CTRL_TRACE_EN_Pos);
    } else {
        MEC_ECS->ETM_CTRL &= (uint32_t)~MEC_BIT(MEC_ECS_ETM_CTRL_TRACE_EN_Pos);
    }
}

void mec_hal_ecs_debug_port(enum mec_debug_mode mode)
{
    uint32_t msk, temp, val;

    switch (mode) {
    case MEC_DEBUG_MODE_DISABLE:
        msk = (uint32_t)~MEC_BIT(MEC_ECS_DBG_CTRL_EN_Pos);
        val = 0u;
        break;
    case MEC_DEBUG_MODE_JTAG:
        msk = MEC_ECS_DBG_CTRL_CFG_Msk;
        val = MEC_BIT(MEC_ECS_DBG_CTRL_EN_Pos) |
            (uint32_t)(MEC_ECS_DBG_CTRL_CFG_JTAG << MEC_ECS_DBG_CTRL_CFG_Pos);
        break;
    case MEC_DEBUG_MODE_SWD:
        msk = MEC_ECS_DBG_CTRL_CFG_Msk;
        val = MEC_BIT(MEC_ECS_DBG_CTRL_EN_Pos) |
            (uint32_t)(MEC_ECS_DBG_CTRL_CFG_SWD_ONLY << MEC_ECS_DBG_CTRL_CFG_Pos);
        break;
    case MEC_DEBUG_MODE_SWD_SWV:
        msk = MEC_ECS_DBG_CTRL_CFG_Msk;
        val = MEC_BIT(MEC_ECS_DBG_CTRL_EN_Pos) |
            (uint32_t)(MEC_ECS_DBG_CTRL_CFG_SWD_SWV << MEC_ECS_DBG_CTRL_CFG_Pos);
        break;
    default:
        return;
    }

    temp = MEC_ECS->DBG_CTRL & ~msk;
    temp |= val;
    MEC_ECS->DBG_CTRL = temp;
}

/* -------- Analog Comparator -------- */

/* Configure Analog comparator - enables, deep sleep enables, and comparator 0 config lock.
 * NOTE 1: Once comparator 0 is locked its configuration bits cannot be changed until RESET_SYS.
 * NOTE 2: Caller responsible for configuring comparator pins.
 */
void mec_hal_ecs_analog_comparator_config(uint32_t config)
{
    uint32_t msk = 0, val = 0;

    msk = MEC_BIT(MEC_ECS_CMPSC_DSLP0_Pos) | MEC_BIT(MEC_ECS_CMPSC_DSLP1_Pos);
    if (config & MEC_ACMP_CFG_DS0) {
        val |= MEC_BIT(MEC_ECS_CMPSC_DSLP0_Pos);
    }

    if (config & MEC_ACMP_CFG_DS1) {
        val |= MEC_BIT(MEC_ECS_CMPSC_DSLP1_Pos);
    }

    MEC_ECS->CMPSC = (MEC_ECS->CMPSC & (uint32_t)~msk) | val;

    msk = (MEC_BIT(MEC_ECS_CMPC_EN0_Pos) | MEC_BIT(MEC_ECS_CMPC_LKCFG0_Pos)
           | MEC_BIT(MEC_ECS_CMPC_EN1_Pos));
    val = 0;
    if (config & MEC_ACMP_CFG_EN0) {
        val |= MEC_BIT(MEC_ECS_CMPC_EN0_Pos);
    }
    if (config & MEC_ACMP_CFG_LOCK0) {
        val |= MEC_BIT(MEC_ECS_CMPC_LKCFG0_Pos);
    }
    if (config & MEC_ACMP_CFG_EN1) {
        val |= MEC_BIT(MEC_ECS_CMPC_EN1_Pos);
    }

    MEC_ECS->CMPC = (MEC_ECS->CMPC & (uint32_t)~msk) | val;
}

/* -------- Embedded Reset -------- */

bool mec_hal_ecs_emb_reset_is_enabled(void)
{
    if (MEC_ECS->EMBRST_EN & MEC_BIT(MEC_ECS_EMBRST_EN_EN_Pos)) {
        return true;
    }
    return false;
}

void mec_hal_ecs_emb_reset_enable(uint8_t enable)
{
    if (enable) {
        MEC_ECS->EMBRST_EN |= MEC_BIT(MEC_ECS_EMBRST_EN_EN_Pos);
    } else {
        MEC_ECS->EMBRST_EN &= (uint32_t)~MEC_BIT(MEC_ECS_EMBRST_EN_EN_Pos);
    }
}

uint8_t mec_hal_ecs_emb_reset_timeout_get(void)
{
    return (uint8_t)((MEC_ECS->EMBRST_TMOUT & MEC_ECS_EMBRST_TMOUT_TM1_Msk)
                     >> MEC_ECS_EMBRST_TMOUT_TM1_Pos);
}

void mec_hal_ecs_emb_reset_timeout(uint8_t timeout)
{
    MEC_ECS->EMBRST_TMOUT = ((MEC_ECS->EMBRST_TMOUT & (uint32_t)~MEC_ECS_EMBRST_TMOUT_TM1_Msk)
                             | (((uint32_t)timeout << MEC_ECS_EMBRST_TMOUT_TM1_Msk)
                                & MEC_ECS_EMBRST_TMOUT_TM1_Msk));
}

uint32_t mec_hal_ecs_emb_reset_status(void)
{
    return MEC_ECS->EMBRST_STS;
}

void mec_hal_ecs_emb_reset_status_clear(void)
{
    MEC_ECS->EMBRST_STS &= (uint32_t)~MEC_BIT(MEC_ECS_EMBRST_STS_RST_Pos);
}

uint32_t mec_hal_ecs_emb_reset_count(void)
{
    return MEC_ECS->EMBRST_CNT;
}

/* ---- PECI VTT Vref pin control ---- */
void mec_hal_ecs_peci_vtt_ref_pin_ctrl(uint8_t enable)
{
    if (enable) {
        MEC_ECS->PECI_CTRL |= MEC_BIT(MEC_ECS_PECI_CTRL_PINS_Pos);
    } else {
        MEC_ECS->PECI_CTRL &= (uint32_t)~MEC_BIT(MEC_ECS_PECI_CTRL_PINS_Pos);
    }
}

uint8_t mec_hal_ecs_peci_vtt_ref_pin_is_enabled(void)
{
    if (MEC_ECS->PECI_CTRL & MEC_BIT(MEC_ECS_PECI_CTRL_PINS_Pos)) {
        return 1;
    }
    return 0;
}

/* ---- Power management ----
 * Debug interface and ETM control registers.
 */

#define MEC_ECS_PM_SAVE_ITEMS_CNT 4
static uint8_t ecs_pm_save_buf[MEC_ECS_PM_SAVE_ITEMS_CNT];

void mec_hal_ecs_debug_ifc_save_disable(void)
{
    ecs_pm_save_buf[0] = (uint8_t)(MEC_ECS->ETM_CTRL & 0xffu);
    MEC_ECS->ETM_CTRL = 0;

    ecs_pm_save_buf[1] = (uint8_t)(MEC_ECS->DBG_CTRL & 0xffu);
    MEC_ECS->DBG_CTRL = 0;
}

void mec_hal_ecs_debug_ifc_restore(void)
{
    MEC_ECS->ETM_CTRL = ecs_pm_save_buf[0];
    MEC_ECS->DBG_CTRL = ecs_pm_save_buf[1];
}


void mec_hal_ecs_pm_save_disable(void)
{
    ecs_pm_save_buf[0] = (uint8_t)(MEC_ECS->ETM_CTRL & 0xffu);
    ecs_pm_save_buf[1] = (uint8_t)(MEC_ECS->DBG_CTRL & 0xffu);
    ecs_pm_save_buf[2] = (uint8_t)(MEC_ECS->PECI_CTRL & 0xffu);

    MEC_ECS->ETM_CTRL = 0;
    MEC_ECS->DBG_CTRL = 0;
    MEC_ECS->PECI_CTRL = 1; /* disable VREF_VTT function */
    /* TODO comparators
     * The EC Subystem Analog Comparators each have a deep sleep enable
     * bit which must be set when the comparator is enabled. Check with DE
     * if these bits allow the comparators to respect SLP_EN from PCR.
     * PCR SLP_EN[1] bit[29] is EC register bank (ECS).
     */
}

void mec_hal_ecs_pm_restore(void)
{
    MEC_ECS->PECI_CTRL = ecs_pm_save_buf[2];
    MEC_ECS->ETM_CTRL = ecs_pm_save_buf[0];
    MEC_ECS->DBG_CTRL = ecs_pm_save_buf[1];
}
/* end mec_ecs.c */
