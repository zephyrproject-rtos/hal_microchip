/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file sercom_samd5xe5x.h
 * @brief Generic SERCOM USART register macros for SAMD5x/E5x family.
 *
 * This file provides macros to abstract register and bitfield access for the
 * SERCOM USART peripheral on the Microchip SAMD5x/E5x family of devices.
 * These macros are intended for use in the SERCOM UART G1 driver.
 *
 */

#ifndef MICROCHIP_COMMON_SERCOM_SAMD5XE5X_H_
#define MICROCHIP_COMMON_SERCOM_SAMD5XE5X_H_

/*SERCOM_USART_SYNCBUSY*/
#define UART_SYNCBUSY_PTR(regs, clock_external)                                \
  ((volatile const uint32_t *)((clock_external)                                \
                                   ? &((regs)->USART_EXT.SERCOM_SYNCBUSY)      \
                                   : &((regs)->USART_INT.SERCOM_SYNCBUSY)))
#define UART_SYNCBUSY_Msk(clock_external)                                      \
  ((clock_external) ? SERCOM_USART_EXT_SYNCBUSY_Msk                            \
                    : SERCOM_USART_INT_SYNCBUSY_Msk)

/*SERCOM_USART_CTRLA*/
#define UART_CTRLA_PTR(regs, clock_external)                                   \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_CTRLA)                        \
                    : &((regs)->USART_INT.SERCOM_CTRLA))
#define UART_CTRLA_FORM_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_FORM_Msk                          \
                    : SERCOM_USART_INT_CTRLA_FORM_Msk)
#define UART_CTRLA_FORM_WITH_PARITY(clock_external)                            \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY      \
                    : SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY)
#define UART_CTRLA_FORM_NO_PARITY(clock_external)                              \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY        \
                    : SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY)
#define UART_CTRLA_RXPO_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_RXPO_Msk                          \
                    : SERCOM_USART_INT_CTRLA_RXPO_Msk)
#define UART_CTRLA_TXPO_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_TXPO_Msk                          \
                    : SERCOM_USART_INT_CTRLA_TXPO_Msk)
#define UART_CTRLA_RXPO(clock_external, rxpo)                                  \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_RXPO(rxpo)                        \
                    : SERCOM_USART_INT_CTRLA_RXPO(rxpo))
#define UART_CTRLA_TXPO(clock_external, txpo)                                  \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_TXPO(txpo)                        \
                    : SERCOM_USART_INT_CTRLA_TXPO(txpo))
#define UART_CTRLA_CPOL_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_CPOL_Msk                          \
                    : SERCOM_USART_INT_CTRLA_CPOL_Msk)
#define UART_CTRLA_MODE_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_MODE_Msk                          \
                    : SERCOM_USART_INT_CTRLA_MODE_Msk)
#define UART_CTRLA_MODE_USART_EXT_CLK(clock_external)                          \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK                \
                    : SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK)
#define UART_CTRLA_MODE_USART_INT_CLK(clock_external)                          \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK                \
                    : SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK)
#define UART_CTRLA_DORD_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_DORD_Msk                          \
                    : SERCOM_USART_INT_CTRLA_DORD_Msk)
#define UART_CTRLA_SAMPR_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_SAMPR_Msk                         \
                    : SERCOM_USART_INT_CTRLA_SAMPR_Msk)
#define UART_CTRLA_ENABLE_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_ENABLE_Msk                        \
                    : SERCOM_USART_INT_CTRLA_ENABLE_Msk)
#define UART_CTRLA_RUNSTDBY_Msk(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_CTRLA_RUNSTDBY_Msk                      \
                    : SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk)

/*SERCOM_USART_CTRLB*/
#define UART_CTRLB_PTR(regs, clock_external)                                   \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_CTRLB)                        \
                    : &((regs)->USART_INT.SERCOM_CTRLB))
#define UART_CTRLB_PMODE_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_PMODE_Msk                         \
                    : SERCOM_USART_INT_CTRLB_PMODE_Msk)
#define UART_CTRLB_SBMODE_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_SBMODE_Msk                        \
                    : SERCOM_USART_INT_CTRLB_SBMODE_Msk)
#define UART_CTRLB_CHSIZE_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_CHSIZE_Msk                        \
                    : SERCOM_USART_INT_CTRLB_CHSIZE_Msk)
#define UART_CTRLB_CHSIZE_5_BIT(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT                      \
                    : SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT)
#define UART_CTRLB_CHSIZE_6_BIT(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT                      \
                    : SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT)
#define UART_CTRLB_CHSIZE_7_BIT(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT                      \
                    : SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT)
#define UART_CTRLB_CHSIZE_8_BIT(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT                      \
                    : SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT)
#define UART_CTRLB_CHSIZE_9_BIT(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT                      \
                    : SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT)
#define UART_CTRLB_RXEN_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_RXEN_Msk                          \
                    : SERCOM_USART_INT_CTRLB_RXEN_Msk)
#define UART_CTRLB_TXEN_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_CTRLB_TXEN_Msk                          \
                    : SERCOM_USART_INT_CTRLB_TXEN_Msk)

/*SERCOM_USART_BAUD*/
#define UART_BAUD_PTR(regs, clock_external)                                    \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_BAUD)                         \
                    : &((regs)->USART_INT.SERCOM_BAUD))

/*SERCOM_USART_DATA*/
#define UART_DATA_TYPE uint32_t
#define UART_DATA_PTR(regs, clock_external)                                    \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_DATA)                         \
                    : &((regs)->USART_INT.SERCOM_DATA))

/*SERCOM_USART_STATUS*/
#define UART_STATUS_PTR(regs, clock_external)                                  \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_STATUS)                       \
                    : &((regs)->USART_INT.SERCOM_STATUS))
#define UART_STATUS_BUFOVF_Msk(clock_external)                                 \
  ((clock_external) ? SERCOM_USART_EXT_STATUS_BUFOVF_Msk                       \
                    : SERCOM_USART_INT_STATUS_BUFOVF_Msk)
#define UART_STATUS_FERR_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_STATUS_FERR_Msk                         \
                    : SERCOM_USART_INT_STATUS_FERR_Msk)
#define UART_STATUS_PERR_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_STATUS_PERR_Msk                         \
                    : SERCOM_USART_INT_STATUS_PERR_Msk)
#define UART_STATUS_ISF_Msk(clock_external)                                    \
  ((clock_external) ? SERCOM_USART_EXT_STATUS_ISF_Msk                          \
                    : SERCOM_USART_INT_STATUS_ISF_Msk)
#define UART_STATUS_COLL_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_STATUS_COLL_Msk                         \
                    : SERCOM_USART_INT_STATUS_COLL_Msk)
#define UART_STATUS_ERR_ALL_Msk(clock_external)                                \
  ((clock_external)                                                            \
       ? (SERCOM_USART_EXT_STATUS_BUFOVF_Msk |                                 \
          SERCOM_USART_EXT_STATUS_FERR_Msk |                                   \
          SERCOM_USART_EXT_STATUS_PERR_Msk | SERCOM_USART_EXT_STATUS_ISF_Msk | \
          SERCOM_USART_EXT_STATUS_COLL_Msk)                                    \
       : (SERCOM_USART_INT_STATUS_BUFOVF_Msk |                                 \
          SERCOM_USART_INT_STATUS_FERR_Msk |                                   \
          SERCOM_USART_INT_STATUS_PERR_Msk | SERCOM_USART_INT_STATUS_ISF_Msk | \
          SERCOM_USART_INT_STATUS_COLL_Msk))

/*SERCOM_USART_INTENSET*/
#define UART_INTENSET_PTR(regs, clock_external)                                \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_INTENSET)                     \
                    : &((regs)->USART_INT.SERCOM_INTENSET))
#define UART_INTENSET_TXC_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_INTENSET_TXC_Msk                        \
                    : SERCOM_USART_INT_INTENSET_TXC_Msk)
#define UART_INTENSET_RXC_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_INTENSET_RXC_Msk                        \
                    : SERCOM_USART_INT_INTENSET_RXC_Msk)
#define UART_INTENSET_DRE_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_INTENSET_DRE_Msk                        \
                    : SERCOM_USART_INT_INTENSET_DRE_Msk)
#define UART_INTENSET_ERROR_Msk(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_INTENSET_ERROR_Msk                      \
                    : SERCOM_USART_INT_INTENSET_ERROR_Msk)

/*SERCOM_USART_INTENCLR*/
#define UART_INTENCLR_PTR(regs, clock_external)                                \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_INTENCLR)                     \
                    : &((regs)->USART_INT.SERCOM_INTENCLR))
#define UART_INTENCLR_TXC_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_INTENCLR_TXC_Msk                        \
                    : SERCOM_USART_INT_INTENCLR_TXC_Msk)
#define UART_INTENCLR_RXC_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_INTENCLR_RXC_Msk                        \
                    : SERCOM_USART_INT_INTENCLR_RXC_Msk)
#define UART_INTENCLR_MASK(clock_external)                                     \
  ((clock_external) ? SERCOM_USART_EXT_INTENCLR_Msk                            \
                    : SERCOM_USART_INT_INTENCLR_Msk)
#define UART_INTENCLR_DRE_Msk(clock_external)                                  \
  ((clock_external) ? SERCOM_USART_EXT_INTENCLR_DRE_Msk                        \
                    : SERCOM_USART_INT_INTENCLR_DRE_Msk)
#define UART_INTENCLR_ERROR_Msk(clock_external)                                \
  ((clock_external) ? SERCOM_USART_EXT_INTENCLR_ERROR_Msk                      \
                    : SERCOM_USART_INT_INTENCLR_ERROR_Msk)

/*SERCOM_USART_INTFLAG*/
#define UART_INTFLAG_PTR(regs, clock_external)                                 \
  ((clock_external) ? &((regs)->USART_EXT.SERCOM_INTFLAG)                      \
                    : &((regs)->USART_INT.SERCOM_INTFLAG))
#define UART_INTFLAG_RXC_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_INTFLAG_RXC_Msk                         \
                    : SERCOM_USART_INT_INTFLAG_RXC_Msk)
#define UART_INTFLAG_DRE_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_INTFLAG_DRE_Msk                         \
                    : SERCOM_USART_INT_INTFLAG_DRE_Msk)
#define UART_INTFLAG_TXC_Msk(clock_external)                                   \
  ((clock_external) ? SERCOM_USART_EXT_INTFLAG_TXC_Msk                         \
                    : SERCOM_USART_INT_INTFLAG_TXC_Msk)
#define UART_INTFLAG_CLEAR_ALL_Msk(clock_external)                             \
  ((clock_external)                                                            \
       ? (SERCOM_USART_EXT_INTFLAG_ERROR_Msk |                                 \
          SERCOM_USART_EXT_INTFLAG_RXBRK_Msk |                                 \
          SERCOM_USART_EXT_INTFLAG_CTSIC_Msk |                                 \
          SERCOM_USART_EXT_INTFLAG_RXS_Msk | SERCOM_USART_EXT_INTFLAG_TXC_Msk) \
       : (SERCOM_USART_INT_INTFLAG_ERROR_Msk |                                 \
          SERCOM_USART_INT_INTFLAG_RXBRK_Msk |                                 \
          SERCOM_USART_INT_INTFLAG_CTSIC_Msk |                                 \
          SERCOM_USART_INT_INTFLAG_RXS_Msk |                                   \
          SERCOM_USART_INT_INTFLAG_TXC_Msk))
#endif /* MICROCHIP_COMMON_SERCOM_SAMD5XE5X_H_ */
