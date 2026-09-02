/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file sercom_pic32cx_bz.h
 * @brief SERCOM Register and Bit Mask Mapping for PIC32CX_BZ family.
 *
 * This file defines generic register and bit mask names for the SERCOM
 * peripheral on Microchip PIC32CX_BZ devices.These macros are intended for
 * use in the SERCOM UART/SPI G1 driver.
 *
 */

#ifndef MICROCHIP_COMMON_SERCOM_PIC32CX_BZ_H_
#define MICROCHIP_COMMON_SERCOM_PIC32CX_BZ_H_

/*
 * Both internal (INT) and external (EXT) clock modes use the same hardware
 * register addresses and bit fields; the only difference is in the naming
 * of the registers and definitions. Therefore, INT definitions are used as
 * generic types and macros for unified access in driver code.
 */
#define UART_GET_BASE_ADDR(regs, is_clock_external)                            \
  ((sercom_usart_registers_t *)((is_clock_external)                            \
                                    ? (void *)&((regs)->USART_EXT)             \
                                    : (void *)&((regs)->USART_INT)))

#define SERCOM_USART_CTRLA_MODE_USART_EXT                                      \
  SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK
#define SERCOM_USART_CTRLA_MODE_USART_INT                                      \
  SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK


/*
 * Both Master and Slave modes use the same hardware register addresses and bit
 * fields; the only difference is in the naming,of the registers and
 * definitions. SPIS and SPIM. Therefore, those definitions are used as generic
 * types and macros for unified access in driver code.
 */
#define SPI_GET_BASE_ADDR(regs, is_slave)                                      \
  ((sercom_spi_registers_t *)(((bool)is_slave) ? (void *)&((regs)->SPIS)       \
                                               : (void *)&((regs)->SPIM)))

#define SERCOM_SPI_CTRLA_DIPO_MUX0 SERCOM_SPIM_CTRLA_DIPO_PAD0
#define SERCOM_SPI_CTRLA_DOPO_MUX0 SERCOM_SPIM_CTRLA_DOPO_PAD0

#endif /* MICROCHIP_COMMON_SERCOM_PIC32CX_BZ_H_ */
