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

/*
 * The PIC32CM PL pack omits the standard 11-bit ADDR_ADDR macros used by the
 * SERCOM I2C G1 driver. It only defines SEVENBIT_ADDR_Msk (0x7F), which is
 * insufficient: the driver writes (addr << 1 | R/W) into the ADDR field, so
 * any address >= 0x40 sets bit 7 of the shifted value and a 0x7F mask would
 * strip it. The hardware ADDR field is 11 bits wide on all SERCOM-G1 variants
 * per the PIC32CM PL family datasheet (section 34.11.10).
 */
#define SERCOM_I2CM_ADDR_ADDR_Pos    0
#define SERCOM_I2CM_ADDR_ADDR_Msk    (0x7FFul << SERCOM_I2CM_ADDR_ADDR_Pos)
#define SERCOM_I2CM_ADDR_ADDR(value) \
	(SERCOM_I2CM_ADDR_ADDR_Msk & ((value) << SERCOM_I2CM_ADDR_ADDR_Pos))
#define SERCOM_I2CS_ADDR_ADDR_Pos    0
#define SERCOM_I2CS_ADDR_ADDR_Msk    (0x7FFul << SERCOM_I2CS_ADDR_ADDR_Pos)
#define SERCOM_I2CS_ADDR_ADDR(value) \
	(SERCOM_I2CS_ADDR_ADDR_Msk & ((value) << SERCOM_I2CS_ADDR_ADDR_Pos))

#endif /* MICROCHIP_COMMON_SERCOM_PIC32CM_PL10_H_ */
