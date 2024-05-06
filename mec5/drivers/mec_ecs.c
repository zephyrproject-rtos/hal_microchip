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

void mec_ecs_ictrl(uint8_t direct_en)
{
    if (direct_en) {
        ECS->INTR_CTRL |= MEC_BIT(ECS_INTR_CTRL_DIRECT_Pos);
    } else {
        ECS->INTR_CTRL &= (uint32_t)~MEC_BIT(ECS_INTR_CTRL_DIRECT_Pos);
    }
}

int mec_ecs_is_idirect(void)
{
    if (ECS->INTR_CTRL & MEC_BIT(ECS_INTR_CTRL_DIRECT_Pos)) {
        return 1;
    }

    return 0;
}

void mec_ecs_ahb_error_ctrl(uint8_t ahb_err_enable)
{
    if (ahb_err_enable) { /* clear AHB error capture disable bit */
        ECS->AERRC &= (uint32_t)~MEC_BIT(ECS_AERRC_CAP_Pos);
    } else {
        ECS->AERRC |= MEC_BIT(ECS_AERRC_CAP_Pos);
    }
}

uint32_t mec_ecs_ahb_error_val(uint8_t clr_after_read)
{
    uint32_t ahb_error_val = ECS->AERRA;

    if (clr_after_read) {
        ECS->AERRA = 0u;
    }

    return ahb_error_val;
}

int mec_ecs_is_feature_disabled(uint8_t feature)
{
    if (feature < 32) {
        if (ECS->FEAT_LOCK & MEC_BIT(feature)) {
            return 1;
        }
    } else if (feature < 64) {
        feature -= 32;
        if (ECS->MISC_LOCK & MEC_BIT(feature)) {
            return 1;
        }
    }

    return 0;
}

void mec_ecs_etm_pins(uint8_t enable)
{
    if (enable) {
        ECS->ETM_CTRL |= MEC_BIT(ECS_ETM_CTRL_TRACE_EN_Pos);
    } else {
        ECS->ETM_CTRL &= (uint32_t)~MEC_BIT(ECS_ETM_CTRL_TRACE_EN_Pos);
    }
}

void mec_ecs_debug_port(enum mec_debug_mode mode)
{
    uint32_t msk, temp, val;

    switch (mode) {
    case MEC_DEBUG_MODE_DISABLE:
        msk = (uint32_t)~MEC_BIT(ECS_DBG_CTRL_EN_Pos);
        val = 0u;
        break;
    case MEC_DEBUG_MODE_JTAG:
        msk = ECS_DBG_CTRL_CFG_Msk;
        val = MEC_BIT(ECS_DBG_CTRL_EN_Pos) | (uint32_t)ECS_DBG_CTRL_CFG_JTAG;
        break;
    case MEC_DEBUG_MODE_SWD:
        msk = ECS_DBG_CTRL_CFG_Msk;
        val = MEC_BIT(ECS_DBG_CTRL_EN_Pos) | (uint32_t)ECS_DBG_CTRL_CFG_SWD_ONLY;
        break;
    case MEC_DEBUG_MODE_SWD_SWV:
        msk = ECS_DBG_CTRL_CFG_Msk;
        val = MEC_BIT(ECS_DBG_CTRL_EN_Pos) | (uint32_t)ECS_DBG_CTRL_CFG_SWD_SWV;
        break;
    default:
        return;
    }

    temp = ECS->DBG_CTRL & ~msk;
    temp |= val;
    ECS->DBG_CTRL = temp;
}
/* end mec_ecs.c */
