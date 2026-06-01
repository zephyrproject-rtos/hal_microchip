/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file qtm_freq_hop_auto_0x0004_api.h
 * @brief Top-level include file for touch peripheral.
 *
 * This header provides a central place to include macro mapping headers
 * for Microchip touch support for frequency hop auto-tune module. These headers map
 * auto-tune data containers and associated peripheral headers to generic names
 * used by the common driver.
 */

#ifndef TOUCH_API_FREQ_HOP_AUTO_H
#define TOUCH_API_FREQ_HOP_AUTO_H

/* Include files */
#include <stdint.h>
#include "qtm_common_components_api.h"


/* Structure Declarations */
/* Frequency HOP Module */
/* Configuration */
typedef struct {
	uint16_t num_sensors;
	uint8_t num_freqs;
	uint8_t *freq_option_select;
	uint8_t *median_filter_freq; /* PTC frequencies to be used on the median filter samples */
	uint8_t enable_freq_autotune;
	uint8_t max_variance_limit;
	uint8_t autotune_count_in_limit;
} qtm_freq_hop_autotune_config_t;

/* Status data */
typedef struct {
	uint8_t module_status; /* Obligatory status byte: Bit 7 = Reburst... */
	uint8_t current_freq;  /* PTC Sampling Delay Selection - 0 to 15 PTC CLK cycles */
	uint16_t
		*filter_buffer; /* Filter buffer used to store past cycle signal values of sensor */
	qtm_acq_node_data_t *qtm_acq_node_data;
	uint8_t *freq_tune_count_ins;
} qtm_freq_hop_autotune_data_t;

/* Container */
typedef struct {
	qtm_freq_hop_autotune_data_t(*qtm_freq_hop_autotune_data);
	qtm_freq_hop_autotune_config_t(*qtm_freq_hop_autotune_config);
} qtm_freq_hop_autotune_control_t;


/* prototypes */

/*
 * touch_ret_t qtm_freq_hop_autotune(qtm_freq_hop_autotune_control_t *qtm_freq_hop_autotune_control);
 *
 * Purpose: Runs freq hop auto sequence
 * Input  : Pointer to container structure
 * Output : touch_ret_t
 * Notes  : none
 */
touch_ret_t qtm_freq_hop_autotune(qtm_freq_hop_autotune_control_t *qtm_freq_hop_autotune_control);

/*
 * uint16_t qtm_get_freq_auto_module_id(void)
 *
 * Purpose: Returns the module ID
 * Input  : none
 * Output : Module ID
 * Notes  : none
 */
uint16_t qtm_get_freq_auto_module_id(void);

/*
 * uint8_t qtm_get_freq_auto_module_ver(void)
 *
 * Purpose: Returns the module Firmware version
 * Input  : none
 * Output : Module ID - Upper nibble major / Lower nibble minor
 * Notes  : none
 */
uint8_t qtm_get_freq_auto_module_ver(void);

#endif /* TOUCH_API_FREQ_HOP_AUTO_H */
