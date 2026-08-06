/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * @file qtm_acq_pic32cm_pl10_0x005b_api.h
 * @brief Top-level include file for the touch acquisition peripheral.
 *
 * This header provides a central place to include macro mapping headers
 * for Microchip touch support. These headers map the device-specific
 * acquisition module to generic names used by the common driver.
 */

#ifndef TOUCH_API_PIC32CM_PL_ACQ_MODULE_H
#define TOUCH_API_PIC32CM_PL_ACQ_MODULE_H

/* Include files */
#include "qtm_common_components_api.h"
#include <stdint.h>

/* Calibration auto-tuning options */
#define CAL_OPTION_MASK 0x03u

#define CAL_AUTO_TUNE_NONE 0u
#define CAL_AUTO_TUNE_RSEL 1u
#define CAL_AUTO_TUNE_PRSC 2u
#define CAL_AUTO_TUNE_CSD  3u

/* Timing auto-cal target */
#define CAL_CHRG_TIME_MASK 0x30u
#define CAL_CHRG_TIME_POS  4u

#define CAL_CHRG_2TAU 0u
#define CAL_CHRG_3TAU 1u
#define CAL_CHRG_4TAU 2u
#define CAL_CHRG_5TAU 3u

/* Device specific */
#define RSEL_MAX_OPTION RSEL_VAL_200
#define PRSC_MAX_OPTION PRSC_DIV_SEL_30

/* X line bit position */
#define X_NONE 0u
#undef X
#define X(n) ((uint64_t)((uint64_t)1u << (n)))

/* Y line bit position */
#define Y(n) ((uint64_t)((uint64_t)1u << (n)))

/* Extract Analog / Digital Gain */
#define NODE_GAIN_ANA(m) ((uint8_t)(((m) & 0xF0u) >> 4u))
#define NODE_GAIN_DIG(m) (uint8_t)((m) & 0x0Fu)

/* Combine Analog / Digital Gain */
#define NODE_GAIN(a, d) (uint8_t)(((a) << 4u) | (d))

/* Extract Resistor / Prescaler */
#define NODE_RSEL(m) (uint8_t)(((m) & 0xF0u) >> 4u)
#define NODE_PRSC(m) (uint8_t)((m) & 0x0Fu)

/* Combine Resistor / Prescaler */
#define NODE_RSEL_PRSC(r, p) (uint8_t)(((r) << 4u) | (p))

typedef enum tag_filter_level_t {
	FILTER_LEVEL_1,
	FILTER_LEVEL_2,
	FILTER_LEVEL_4,
	FILTER_LEVEL_8,
	FILTER_LEVEL_16,
	FILTER_LEVEL_32,
	FILTER_LEVEL_64,
	FILTER_LEVEL_128,
	FILTER_LEVEL_256
} filter_level_t;

/* Touch library GAIN setting */
/*Analog Gain can take values till GAIN_4 */
typedef enum tag_gain_t {
	GAIN_1 = 0,
	GAIN_2 = 1,
	GAIN_4 = 2,
	GAIN_8 = 3,
	GAIN_16 = 4,
	GAIN_1_5 = 5 /* Gain 1.5 is applicable only for analog gain */
} gain_t;

/* PTC clock prescale setting.
 * Example: if Generic clock input to PTC = 4MHz, then:
 * PRSC_DIV_SEL_1 sets PTC Clock to 4MHz
 * PRSC_DIV_SEL_2 sets PTC Clock to 2MHz
 * PRSC_DIV_SEL_4 sets PTC Clock to 1MHz
 * PRSC_DIV_SEL_8 sets PTC Clock to 500KHz
 *
 */
typedef enum tag_prsc_div_sel_t {
	PRSC_DIV_SEL_1,
	PRSC_DIV_SEL_2,
	PRSC_DIV_SEL_4,
	PRSC_DIV_SEL_6,
	PRSC_DIV_SEL_8,
	PRSC_DIV_SEL_10,
	PRSC_DIV_SEL_12,
	PRSC_DIV_SEL_14,
	PRSC_DIV_SEL_16,
	PRSC_DIV_SEL_18,
	PRSC_DIV_SEL_20,
	PRSC_DIV_SEL_22,
	PRSC_DIV_SEL_24,
	PRSC_DIV_SEL_26,
	PRSC_DIV_SEL_28,
	PRSC_DIV_SEL_30
} prsc_div_sel_t;

/*
 * PTC series resistor setting. For Mutual cap mode, this series
 * resistor is switched internally on the Y-pin. For Self cap mode,
 * thes series resistor is switched internally on the Sensor pin.
 *
 * Example:
 * RSEL_VAL_0 sets internal series resistor to 0ohms.
 * RSEL_VAL_20 sets internal series resistor to 20Kohms.
 * RSEL_VAL_50 sets internal series resistor to 50Kohms.
 * RSEL_VAL_100 sets internal series resistor to 100Kohms.
 */
typedef enum tag_rsel_val_t {
	RSEL_VAL_0,
	RSEL_VAL_20,
	RSEL_VAL_50,
	RSEL_VAL_70,
	RSEL_VAL_80,
	RSEL_VAL_100,
	RSEL_VAL_120,
	RSEL_VAL_200
} rsel_val_t;

/*
 * PTC acquisition frequency delay setting.
 *
 * The PTC acquisition frequency is dependent on the Generic clock
 * input to PTC and PTC clock prescaler setting. This delay setting
 * inserts "n" PTC clock cycles between consecutive measurements on
 * a given sensor, thereby changing the PTC acquisition frequency.
 * FREQ_HOP_SEL_1 setting inserts 1 PTC clock cycle between consecutive
 * measurements. FREQ_HOP_SEL_14 setting inserts 14 PTC clock cycles.
 * Hence, higher delay setting will increase the total time taken for
 * capacitance measurement on a given sensor as compared to a lower
 * delay setting.
 *
 * A desired setting can be used to avoid noise around the same frequency
 * as the acquisition frequency.
 *
 */
typedef enum tag_freq_config_sel_t {
	FREQ_SEL_0,
	FREQ_SEL_1,
	FREQ_SEL_2,
	FREQ_SEL_3,
	FREQ_SEL_4,
	FREQ_SEL_5,
	FREQ_SEL_6,
	FREQ_SEL_7,
	FREQ_SEL_8,
	FREQ_SEL_9,
	FREQ_SEL_10,
	FREQ_SEL_11,
	FREQ_SEL_12,
	FREQ_SEL_13,
	FREQ_SEL_14,
	FREQ_SEL_15
} freq_config_sel_t;

/* Autoscan PIT Setting */
typedef enum tag_pit_div_t {
	NODE_SCAN_8MS = 0u,
	NODE_SCAN_16MS = 1u,
	NODE_SCAN_32MS = 2u,
	NODE_SCAN_64MS = 3u,
	NODE_SCAN_128MS = 4u,
	NODE_SCAN_256MS = 5u,
	NODE_SCAN_512MS = 6u,
	NODE_SCAN_1024MS = 7u,
} pit_div_t;

typedef enum tag_adc_prsc_div_sel_t {
	ADC_PRSC_DIV_SEL_2,
	ADC_PRSC_DIV_SEL_3,
	ADC_PRSC_DIV_SEL_4,
	ADC_PRSC_DIV_SEL_5,
	ADC_PRSC_DIV_SEL_6,
	ADC_PRSC_DIV_SEL_7,
	ADC_PRSC_DIV_SEL_8,
	ADC_PRSC_DIV_SEL_9,
	ADC_PRSC_DIV_SEL_10,
	ADC_PRSC_DIV_SEL_11,
	ADC_PRSC_DIV_SEL_12,
	ADC_PRSC_DIV_SEL_13,
	ADC_PRSC_DIV_SEL_14,
	ADC_PRSC_DIV_SEL_15,
	ADC_PRSC_DIV_SEL_16,
	ADC_PRSC_DIV_SEL_17,
	ADC_PRSC_DIV_SEL_18,
	ADC_PRSC_DIV_SEL_19,
	ADC_PRSC_DIV_SEL_20,
	ADC_PRSC_DIV_SEL_21,
	ADC_PRSC_DIV_SEL_22,
	ADC_PRSC_DIV_SEL_23,
	ADC_PRSC_DIV_SEL_24,
	ADC_PRSC_DIV_SEL_25,
	ADC_PRSC_DIV_SEL_26,
	ADC_PRSC_DIV_SEL_27,
	ADC_PRSC_DIV_SEL_28,
	ADC_PRSC_DIV_SEL_29,
	ADC_PRSC_DIV_SEL_30,
	ADC_PRSC_DIV_SEL_31,
	ADC_PRSC_DIV_SEL_32
} adc_prsc_div_sel_t;

/* Structure Declarations */
/* device information configuration */
typedef struct {
	uint8_t adc_interrupt_priority;   /* priority of ADC interrupt */
	uint8_t adc_timebase;             /* count of CLK_APB cycles that is equivalent to or
					     larger than 1 us */
	uint8_t adc_pump_enable;          /* 0-disable; 1-enable; The pump must be disabled
					     when operating above 4.5V. */
	adc_prsc_div_sel_t adc_prescaler; /* Selects the ADC clock prescaler */
} qtm_acq_pic32cm_pl_device_config_t;

/* Node configuration */
typedef struct {
	uint64_t node_xmask;       /* Selects the X Pins for this node */
	uint64_t node_ymask;       /* Selects the Y Pins for this node */
	uint8_t node_csd;          /* Charge Share Delay */
	uint8_t node_rsel_prsc;    /* Bits 7:4 = Resistor, Bits 3:0  PTC Prescaler */
	uint8_t node_gain;         /* Bits 7:4 = Analog gain, Bits 3:0 = Digital gain */
	uint8_t node_oversampling; /* Accumulator setting */
} qtm_acq_pic32cm_pl_node_config_t;

/* Node run-time data - Defined in common api as it will be used with all
 * acquisition modules */

/* Node group configuration */
typedef struct qtm_acq_node_group_config_type {
	uint16_t num_sensor_nodes;   /* Number of sensor nodes */
	uint8_t acq_sensor_type;     /* Self or mutual sensors */
	uint8_t calib_option_select; /* Hardware tuning: XX | TT 3/4/5 Tau | X | XX
					None/RSEL/PRSC/CSD */
	uint8_t freq_option_select;  /* SDS or ASDV setting */
	uint8_t cc_calib_precision;  /* CC Calibration Precision range */
} qtm_acq_node_group_config_t;

/* Container structure for sensor group */
typedef struct {
	qtm_acq_node_group_config_t *qtm_acq_node_group_config;
	qtm_acq_pic32cm_pl_node_config_t *qtm_acq_node_config;
	qtm_acq_node_data_t *qtm_acq_node_data;
	qtm_acq_pic32cm_pl_device_config_t *qtm_acq_device_config;
} qtm_acquisition_control_t;

typedef struct {
	qtm_acquisition_control_t *qtm_acq_control;
	uint16_t auto_scan_node_number;
	uint8_t auto_scan_node_threshold;
	uint8_t auto_scan_trigger;
} qtm_auto_scan_config_t;

/* Library prototypes */
/*
 * touch_ret_t qtm_acquisition_process(void)
 *
 * Purpose: Signal capture and processing
 * Input  : (Measured signals, config)
 * Output : TOUCH_SUCCESS or TOUCH_CAL_ERROR
 * Notes  : none
 */
touch_ret_t qtm_acquisition_process(void);

/*
 * touch_ret_t qtm_ptc_init_acquisition_module(qtm_acquisition_control_t*
 *                                               qtm_acq_control_ptr);
 *
 * Purpose: Initialize the PTC & Assign pins
 * Input  : pointer to acquisition set
 * Output : touch_ret_t: TOUCH_SUCCESS or INVALID_PARAM
 * Notes  : ptc_init_acquisition module must be called ONLY once with a pointer
 * to each config set
 */
touch_ret_t qtm_ptc_init_acquisition_module(qtm_acquisition_control_t *qtm_acq_control_ptr);

/*
 * touch_ret_t qtm_ptc_qtlib_assign_signal_memory(uint32_t*
 * qtm_signal_raw_data_ptr);
 *
 * Purpose: Assign raw signals pointer to array defined in application code
 * Input  : pointer to raw data array
 * Output : touch_ret_t: TOUCH_SUCCESS
 * Notes  : none
 */
touch_ret_t qtm_ptc_qtlib_assign_signal_memory(uint32_t *qtm_signal_raw_data_ptr);

/* Scan configuration */

/*
 * touch_ret_t qtm_enable_sensor_node(qtm_acquisition_control_t*
 * qtm_acq_control_ptr, uint16_t qtm_which_node_number)
 *
 * Purpose: Enables a sensor node for measurement
 * Input  : Node configurations pointer, node (channel) number
 * Output : touch_ret_t:
 * Notes  : none
 */
touch_ret_t qtm_enable_sensor_node(qtm_acquisition_control_t *qtm_acq_control_ptr,
				   uint16_t qtm_which_node_number);

/*
 * touch_ret_t qtm_calibrate_sensor_node(qtm_acquisition_control_t*
 *          qtm_acq_control_ptr, uint16_t qtm_which_node_number)
 *
 * Purpose:  Marks a sensor node for calibration
 * Input  :  Node configurations pointer, node (channel) number
 * Output : touch_ret_t:
 * Notes  : none
 */
touch_ret_t qtm_calibrate_sensor_node(qtm_acquisition_control_t *qtm_acq_control_ptr,
				      uint16_t qtm_which_node_number);

/* Measurement start - sequence or windowcomp */

/*
 * touch_ret_t qtm_ptc_start_measurement_seq(
 *     qtm_acquisition_control_t* qtm_acq_control_pointer,
 *     void (*measure_complete_callback) (void));
 *
 * Purpose: Loads touch configurations for first channel and start,
 * Input  : Node configurations pointer, measure complete callback pointer
 * Output : touch_ret_t:
 * Notes  : none
 */
touch_ret_t qtm_ptc_start_measurement_seq(qtm_acquisition_control_t *qtm_acq_control_pointer,
					  void (*measure_complete_callback)(void));

/*
 * touch_ret_t qtm_set_sensor_node_cal(
 *         qtm_acquisition_control_t* qtm_acq_control_ptr,
 *         uint16_t qtm_which_node_number,
 *         uint16_t qtm_sensor_node_cal_val)
 *
 * Purpose: Sets the calibration value of a sensor node and stops CC calibration
 *            of that node.
 * Input  : Node configurations pointer, node (channel) number,
 *          Calibration Value
 * Output : touch_ret_t
 * Notes  : none
 */
touch_ret_t qtm_set_sensor_node_cal(qtm_acquisition_control_t *qtm_acq_control_ptr,
				    uint16_t qtm_which_node_number,
				    uint16_t qtm_sensor_node_cal_val);

/*
 * touch_ret_t qtm_autoscan_sensor_node(
 *               qtm_auto_scan_config_t* qtm_auto_scan_config_ptr,
 *               void (*auto_scan_callback)(void))
 *
 * Purpose: Configures the PTC for sleep mode measurement of a single node, with
 *          window comparator wake
 * Input  : Acquisition set, channel number, threshold, scan trigger
 * Output : touch_ret_t
 * Notes  : none
 */
touch_ret_t qtm_autoscan_sensor_node(qtm_auto_scan_config_t *qtm_auto_scan_config_ptr,
				     void (*auto_scan_callback)(void));

/*
 * touch_ret_t qtm_autoscan_node_cancel(void)
 *
 * Purpose: Cancel auto-scan config
 * Input  : None
 * Output : touch_ret_t
 * Notes  : none
 */
touch_ret_t qtm_autoscan_node_cancel(void);

/*
 * void qtm_ptc_de_init(void)
 *
 * Purpose: Clear PTC Pin registers, set TOUCH_STATE_NULL
 * Input  : none
 * Output : none
 * Notes  : none
 */
void qtm_ptc_de_init(void);

/*
 * void qtm_pic32cm_pl_ptc_handler_eoc(void)
 *
 * Purpose:  Captures the measurement, starts the next or End Of Sequence
 *           handler
 * Input  :  none
 * Output :  none
 * Notes  :  none
 */
void qtm_pic32cm_pl_ptc_handler_eoc(void);

/*
 * uint8_t qtm_claim_adc(uint8_t is_forced_claim)
 *
 * Purpose: To claim the ADC
 * Input  : 0 - claim if available to use
 *        : 1 - Force claim - terminate any pending ADC measurements and release
 *              the ADC
 * Output : 0 - Fail to claim
 *        : 1 - Successfully claimed
 * Notes  : The
 * application must claim the ADC before initiating any ADC measurements.
 */
uint8_t qtm_claim_adc(uint8_t is_forced_claim);

/*
 * uint8_t qtm_release_adc(void)
 *
 * Purpose: To release the ADC
 * Input  : none
 * Output : none
 * Notes  : Application must release the ADC after completing the ADC
 * measurement.
 */
void qtm_release_adc(void);

/*
 * uint16_t qtm_pic32cm_pl_acq_module_get_id(void);
 *
 * Purpose: Check module ID
 * Input  :
 * Output : 16-bit ID for the module
 * Notes  : none
 */
uint16_t qtm_pic32cm_pl_acq_module_get_id(void);

/*
 * uint8_t qtm_pic32cm_pl_acq_module_get_version(void);
 *
 * Purpose: Check module verison
 * Input  :
 * Output : 8-bit Firmware version (4-bit Major / 4-bit Minor) for the module
 * Notes  : none
 */
uint8_t qtm_pic32cm_pl_acq_module_get_version(void);

#endif /* TOUCH_API_PIC32CM_PL_ACQ_MODULE_H */
