/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file sercom_pic32cm_pl.h
 * @brief Generic SERCOM USART register macros for PIC32CM_PL family.
 *
 * This file provides macros to abstract register and bitfield access for the
 * SERCOM USART peripheral on the Microchip PIC32CM_PL family of devices.
 * These macros are intended for use in the SERCOM UART G1 driver.
 *
 */

#ifndef MICROCHIP_COMMON_SERCOM_PIC32CM_PL10_H_
#define MICROCHIP_COMMON_SERCOM_PIC32CM_PL10_H_

/**
 * @brief Get the base address of the USART register block.
 *
 * This macro returns the base address of the USART registers for the given
 * SERCOM instance. The @p is_clock_external parameter is included for
 * compatibility with unified driver code, but is not used for this device
 * family.
 *
 * @param regs Pointer to the SERCOM register structure.
 * @param is_clock_external Boolean indicating if the clock is external (not
 * used).
 * @return Pointer to the USART register block.
 */
#define UART_GET_BASE_ADDR(regs, is_clock_external) (&((regs)->USART))

#endif /* MICROCHIP_COMMON_SERCOM_PIC32CM_PL10_H_ */
