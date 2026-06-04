/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file sercom_pic32cm_sg_gc.h
 * @brief Generic SERCOM USART register macros for PIC32CM_SG_GC family.
 *
 * This file provides macros to abstract register and bitfield access for the
 * SERCOM USART peripheral on the Microchip PIC32CM_SG_GC family of devices.
 * These macros are intended for use in the SERCOM UART G1 driver.
 *
 */

#ifndef MICROCHIP_COMMON_SERCOM_PIC32CM_SG_GC_H_
#define MICROCHIP_COMMON_SERCOM_PIC32CM_SG_GC_H_

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

/*SERCOM_USART_CTRLA*/
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_WITH_PARITY                        \
  SERCOM_USART_CTRLA_FORM_USARTP
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_NO_PARITY                          \
  SERCOM_USART_CTRLA_FORM_USARTP
#define SERCOM_USART_CTRLA_MODE_USART_EXT SERCOM_USART_CTRLA_MODE_EXTCLK
#define SERCOM_USART_CTRLA_MODE_USART_INT SERCOM_USART_CTRLA_MODE_INTCLK

/*SERCOM_USART_CTRLB*/
#define SERCOM_USART_CTRLB_CHSIZE_5_BIT SERCOM_USART_CTRLB_CHSIZE_5BITS
#define SERCOM_USART_CTRLB_CHSIZE_6_BIT SERCOM_USART_CTRLB_CHSIZE_6BITS
#define SERCOM_USART_CTRLB_CHSIZE_7_BIT SERCOM_USART_CTRLB_CHSIZE_7BITS
#define SERCOM_USART_CTRLB_CHSIZE_8_BIT SERCOM_USART_CTRLB_CHSIZE_8BITS
#define SERCOM_USART_CTRLB_CHSIZE_9_BIT SERCOM_USART_CTRLB_CHSIZE_9BITS

#endif /* MICROCHIP_COMMON_SERCOM_PIC32CM_SG_GC_H_ */
