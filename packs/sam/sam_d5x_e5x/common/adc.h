/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_COMMON_ADC_H_
#define MICROCHIP_COMMON_ADC_H_

/*
 * Calibration fuse field definitions for ADC0 and ADC1.
 * These macros map the factory-programmed fuse values (BIASCOMP, BIASR2R,
 * BIASREFBUF) from the SW0 fuse word to their corresponding bit positions
 * and masks. The driver reads these fields to load hardware-specific
 * calibration values into the ADC_CALIB register at runtime.
 */
#define ADC_CALIBRATION_AREA	SW0_FUSES_BASE_ADDRESS

#define ADC0_BIASCOMP_Msk	FUSES_SW0_WORD_0_ADC0_BIASCOMP_Msk
#define ADC0_BIASCOMP_Pos	FUSES_SW0_WORD_0_ADC0_BIASCOMP_Pos

#define ADC0_BIASR2R_Msk	FUSES_SW0_WORD_0_ADC0_BIASR2R_Msk
#define ADC0_BIASR2R_Pos	FUSES_SW0_WORD_0_ADC0_BIASR2R_Pos

#define ADC0_BIASREFBUF_Msk	FUSES_SW0_WORD_0_ADC0_BIASREFBUF_Msk
#define ADC0_BIASREFBUF_Pos	FUSES_SW0_WORD_0_ADC0_BIASREFBUF_Pos

#define ADC1_BIASCOMP_Msk	FUSES_SW0_WORD_0_ADC1_BIASCOMP_Msk
#define ADC1_BIASCOMP_Pos	FUSES_SW0_WORD_0_ADC1_BIASCOMP_Pos

#define ADC1_BIASR2R_Msk	FUSES_SW0_WORD_0_ADC1_BIASR2R_Msk
#define ADC1_BIASR2R_Pos	FUSES_SW0_WORD_0_ADC1_BIASR2R_Pos

#define ADC1_BIASREFBUF_Msk	FUSES_SW0_WORD_0_ADC1_BIASREFBUF_Msk
#define ADC1_BIASREFBUF_Pos	FUSES_SW0_WORD_0_ADC1_BIASREFBUF_Pos

#endif /* MICROCHIP_COMMON_ADC_H_ */
