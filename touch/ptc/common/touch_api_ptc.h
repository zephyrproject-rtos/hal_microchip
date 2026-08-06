/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file touch_api_ptc.h
 * @brief Top-level include file for touch peripheral.
 *
 * This header provides a central place to include macro mapping headers
 * for Microchip touch support. These headers map device-specific data
 * containers and associated peripheral headers to generic names used by
 * the common driver.
 */

#ifndef TOUCH_API_PTC_H
#define TOUCH_API_PTC_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/* Include files */
#include "qtm_common_components_api.h"
#include "qtm_touch_key_0x0002_api.h"
#include "qtm_freq_hop_auto_0x0004_api.h"
#include "qtm_scroller_0x000b_api.h"

#if defined(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CM_JH)
#include "qtm_acq_pic32cmjh_0x002f_api.h"
#define qtm_acq_node_config_t qtm_acq_pic32cmjh_node_config_t
#define qtm_ptc_handler_eoc   qtm_pic32cmjh_ptc_handler_eoc
#define qtm_ptc_clear_int()   qtm_ptc_clear_interrupt()
#define touch_acq_signal_t    uint16_t
#elif defined(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CM_PL)
#include "qtm_acq_pic32cm_pl10_0x005b_api.h"
#define qtm_acq_node_config_t   qtm_acq_pic32cm_pl_node_config_t
#define qtm_ptc_handler_eoc     qtm_pic32cm_pl_ptc_handler_eoc
#define qtm_ptc_clear_int()
#define touch_acq_signal_t      uint32_t
#define qtm_acq_device_config_t qtm_acq_pic32cm_pl_device_config_t
#endif

#ifdef __cplusplus
}
#endif

#endif /* TOUCH_API_PTC_H */
