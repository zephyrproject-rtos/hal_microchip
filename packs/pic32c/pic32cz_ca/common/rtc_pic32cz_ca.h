/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file rtc_pic32cz_ca.h
 * @brief Generic RTC register macros for PIC32CZ_CA family.
 *
 * This file defines generic register and bit mask names for the RTC
 * peripheral on Microchip PIC32CZ_CA devices.These macros are intended for
 * use in the RTC G1 driver.
 *
 */

#ifndef MICROCHIP_COMMON_RTC_PIC32CZ_CA_H_
#define MICROCHIP_COMMON_RTC_PIC32CZ_CA_H_

#define RTC_MASK0 MODE2_ALARM[0].RTC_MASK 
#define RTC_MASK1 MODE2_ALARM[1].RTC_MASK

#define RTC_ALARM0 MODE2_ALARM[0].RTC_ALARM
#define RTC_ALARM1 MODE2_ALARM[1].RTC_ALARM

#define RTC_MODE2_MASK0_Msk RTC_MODE2_MASK_Msk
#define RTC_MODE2_MASK1_Msk RTC_MODE2_MASK_Msk

#define RTC_MODE2_MASK0_SEL RTC_MODE2_MASK_SEL
#define RTC_MODE2_MASK1_SEL RTC_MODE2_MASK_SEL

#endif /* MICROCHIP_COMMON_RTC_PIC32CZ_CA_H_ */
