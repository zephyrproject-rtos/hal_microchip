/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file sam_d5x_e5x.h
 *
 * @brief Common macro and register definitions shared across families
 *        to support a single driver implementation for all compatible
 *        Microchip MCU families.
 *
 * This header centralizes family-specific fuse fields, calibration
 * values, register definitions, and helper macros required by drivers
 * that are reused across multiple SoC families. Keeping these
 * definitions in one place allows the driver code to remain generic
 * and avoid scattered conditional logic.
 *
 * Any component driver (ADC, PWM, TC/TCC, SERCOM, etc.) that requires
 * family-specific register mappings can include this header.
 */

#ifndef MICROCHIP_SAM_D5X_E5X_H_
#define MICROCHIP_SAM_D5X_E5X_H_

#include "adc.h"

#endif /* MICROCHIP_SAM_D5X_E5X_H_ */
