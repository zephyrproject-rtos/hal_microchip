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

void mec_ecs_ictrl(uint8_t direct_en);
int mec_ecs_is_idirect(void);

void mec_ecs_ahb_error_ctrl(uint8_t ahb_err_enable);
uint32_t mec_ecs_ahb_error_val(uint8_t clr_after_read);

int mec_ecs_is_feature_disabled(uint8_t feature);

#define ECS_ETM_PINS_DISABLE 0
#define ECS_ETM_PINS_ENABLE 1

void mec_ecs_etm_pins(uint8_t enable);

enum mec_debug_mode {
    MEC_DEBUG_MODE_DISABLE = 0,
    MEC_DEBUG_MODE_JTAG,
    MEC_DEBUG_MODE_SWD,
    MEC_DEBUG_MODE_SWD_SWV,
    MEC_DEBUG_MODE_MAX,
};

void mec_ecs_debug_port(enum mec_debug_mode mode);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ECS_API_H */
