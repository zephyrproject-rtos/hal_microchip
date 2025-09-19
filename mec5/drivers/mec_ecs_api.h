/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ECS_API_H
#define _MEC_ECS_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define ECS_FEAT_LOCK_LASIC       0
#define ECS_FEAT_LOCK_ESPI        1
#define ECS_FEAT_LOCK_PUF         2
#define ECS_FEAT_LOCK_PWRGRD      6
#define ECS_FEAT_LOCK_KSCAN       7
#define ECS_FEAT_LOCK_FJ          8
#define ECS_FEAT_LOCK_FPU         9
#define ECS_FEAT_LOCK_CACHE       10
#define ECS_FEAT_LOCK_AES_DPA     11
#define ECS_FEAT_LOCK_PK_DPA      12
#define ECS_FEAT_LOCK_CRYPTO      13
#define ECS_FEAT_LOCK_BGPO_0      64
#define ECS_FEAT_LOCK_VCI_IN1     65
#define ECS_FEAT_LOCK_VCI_OVRD_IN 66
#define ECS_FEAT_LOCK_VCI_OUT1    67
#define ECS_FEAT_LOCK_VCI_OUT2    68
#define ECS_FEAT_LOCK_RSYS_PIN    69
#define ECS_FEAT_LOCK_EMC_SHDN    70
#define ECS_FEAT_LOCK_SYSPWRP     71

void mec_hal_ecs_ictrl(uint8_t direct_en);
int mec_hal_ecs_is_idirect(void);

void mec_hal_ecs_ahb_error_ctrl(uint8_t ahb_err_enable);
uint32_t mec_hal_ecs_ahb_error_val(uint8_t clr_after_read);

int mec_hal_ecs_is_feature_disabled(uint8_t feature);

void mec_hal_ecs_peci_vtt_ref_pin_ctrl(uint8_t enable);
uint8_t mec_hal_ecs_peci_vtt_ref_pin_is_enabled(void);

#define ECS_ETM_PINS_DISABLE 0
#define ECS_ETM_PINS_ENABLE 1

void mec_hal_ecs_etm_pins(uint8_t enable);

enum mec_debug_mode {
    MEC_DEBUG_MODE_DISABLE = 0,
    MEC_DEBUG_MODE_JTAG,
    MEC_DEBUG_MODE_SWD,
    MEC_DEBUG_MODE_SWD_SWV,
    MEC_DEBUG_MODE_MAX,
};

void mec_hal_ecs_debug_port(enum mec_debug_mode mode);

enum mec_analog_comparator_config {
    MEC_ACMP_CFG_EN0 = MEC_BIT(0),
    MEC_ACMP_CFG_DS0 = MEC_BIT(1),
    MEC_ACMP_CFG_LOCK0 = MEC_BIT(2),
    MEC_ACMP_CFG_EN1 = MEC_BIT(4),
    MEC_ACMP_CFG_DS1 = MEC_BIT(5),
};

void mec_hal_ecs_analog_comparator_config(uint32_t config);

/* ---- ECS Embedded Reset ---- */
bool mec_hal_ecs_emb_reset_is_enabled(void);
void mec_hal_ecs_emb_reset_enable(uint8_t enable);
uint8_t mec_hal_ecs_emb_reset_timeout_get(void);
void mec_hal_ecs_emb_reset_timeout(uint8_t timeout);
uint32_t mec_hal_ecs_emb_reset_status(void);
void mec_hal_ecs_emb_reset_status_clear(void);
uint32_t mec_hal_ecs_emb_reset_count(void);

/* ---- PM ---- */
void mec_hal_ecs_debug_ifc_save_disable(void);
void mec_hal_ecs_debug_ifc_restore(void);

void mec_hal_ecs_pm_save_disable(void);
void mec_hal_ecs_pm_restore(void);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ECS_API_H */
