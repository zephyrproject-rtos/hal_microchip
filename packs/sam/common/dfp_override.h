/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file dfp_override.h
 * @brief Top-level include for Microchip DFP (MPU) macro overrides.
 *
 * This header provides a central place to include macro overrides headers
 * for the Microchip MPU. Use it to include headers that map device-specific
 * register and bitfield names to generic names for any required peripheral.
 *
 */

#ifndef MICROCHIP_SAM_DFP_OVERRIDE_H_
#define MICROCHIP_SAM_DFP_OVERRIDE_H_

#ifdef CONFIG_ETH_SAM_GMAC
#include "override_gmac.h"
#endif /* CONFIG_ETH_SAM_GMAC */

#endif /* MICROCHIP_SAM_DFP_OVERRIDE_H_ */
