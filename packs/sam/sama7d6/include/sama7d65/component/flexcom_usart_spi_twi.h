/*
 * Component description for FLEXCOM
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*      file modified from flexcom.h       */
#ifndef _SAMA7D65_FLEXCOM_COMPONENT_US_SPI_TWI_H_
#define _SAMA7D65_FLEXCOM_COMPONENT_US_SPI_TWI_H_

/* -------- US_CR : (FLEXCOM Offset: 0x200) ( /W 32) USART Control Register -------- */
#define US_CR_RSTRX_Pos                  _UINT32_(2)                                          /* (US_CR) Reset Receiver Position */
#define US_CR_RSTRX_Msk                  (_UINT32_(0x1) << US_CR_RSTRX_Pos)              /* (US_CR) Reset Receiver Mask */
#define US_CR_RSTRX(value)               (US_CR_RSTRX_Msk & (_UINT32_(value) << US_CR_RSTRX_Pos)) /* Assignment of value for RSTRX in the US_CR register */
#define   US_CR_RSTRX_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RSTRX_1_Val              _UINT32_(0x1)                                        /* (US_CR) Resets the receiver.  */
#define US_CR_RSTRX_0                    (US_CR_RSTRX_0_Val << US_CR_RSTRX_Pos)     /* (US_CR) No effect. Position */
#define US_CR_RSTRX_1                    (US_CR_RSTRX_1_Val << US_CR_RSTRX_Pos)     /* (US_CR) Resets the receiver. Position */
#define US_CR_RSTTX_Pos                  _UINT32_(3)                                          /* (US_CR) Reset Transmitter Position */
#define US_CR_RSTTX_Msk                  (_UINT32_(0x1) << US_CR_RSTTX_Pos)              /* (US_CR) Reset Transmitter Mask */
#define US_CR_RSTTX(value)               (US_CR_RSTTX_Msk & (_UINT32_(value) << US_CR_RSTTX_Pos)) /* Assignment of value for RSTTX in the US_CR register */
#define   US_CR_RSTTX_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RSTTX_1_Val              _UINT32_(0x1)                                        /* (US_CR) Resets the transmitter.  */
#define US_CR_RSTTX_0                    (US_CR_RSTTX_0_Val << US_CR_RSTTX_Pos)     /* (US_CR) No effect. Position */
#define US_CR_RSTTX_1                    (US_CR_RSTTX_1_Val << US_CR_RSTTX_Pos)     /* (US_CR) Resets the transmitter. Position */
#define US_CR_RXEN_Pos                   _UINT32_(4)                                          /* (US_CR) Receiver Enable Position */
#define US_CR_RXEN_Msk                   (_UINT32_(0x1) << US_CR_RXEN_Pos)               /* (US_CR) Receiver Enable Mask */
#define US_CR_RXEN(value)                (US_CR_RXEN_Msk & (_UINT32_(value) << US_CR_RXEN_Pos)) /* Assignment of value for RXEN in the US_CR register */
#define   US_CR_RXEN_0_Val               _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RXEN_1_Val               _UINT32_(0x1)                                        /* (US_CR) Enables the receiver, if RXDIS is 0.  */
#define US_CR_RXEN_0                     (US_CR_RXEN_0_Val << US_CR_RXEN_Pos)       /* (US_CR) No effect. Position */
#define US_CR_RXEN_1                     (US_CR_RXEN_1_Val << US_CR_RXEN_Pos)       /* (US_CR) Enables the receiver, if RXDIS is 0. Position */
#define US_CR_RXDIS_Pos                  _UINT32_(5)                                          /* (US_CR) Receiver Disable Position */
#define US_CR_RXDIS_Msk                  (_UINT32_(0x1) << US_CR_RXDIS_Pos)              /* (US_CR) Receiver Disable Mask */
#define US_CR_RXDIS(value)               (US_CR_RXDIS_Msk & (_UINT32_(value) << US_CR_RXDIS_Pos)) /* Assignment of value for RXDIS in the US_CR register */
#define   US_CR_RXDIS_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RXDIS_1_Val              _UINT32_(0x1)                                        /* (US_CR) Disables the receiver.  */
#define US_CR_RXDIS_0                    (US_CR_RXDIS_0_Val << US_CR_RXDIS_Pos)     /* (US_CR) No effect. Position */
#define US_CR_RXDIS_1                    (US_CR_RXDIS_1_Val << US_CR_RXDIS_Pos)     /* (US_CR) Disables the receiver. Position */
#define US_CR_TXEN_Pos                   _UINT32_(6)                                          /* (US_CR) Transmitter Enable Position */
#define US_CR_TXEN_Msk                   (_UINT32_(0x1) << US_CR_TXEN_Pos)               /* (US_CR) Transmitter Enable Mask */
#define US_CR_TXEN(value)                (US_CR_TXEN_Msk & (_UINT32_(value) << US_CR_TXEN_Pos)) /* Assignment of value for TXEN in the US_CR register */
#define   US_CR_TXEN_0_Val               _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_TXEN_1_Val               _UINT32_(0x1)                                        /* (US_CR) Enables the transmitter if TXDIS is 0.  */
#define US_CR_TXEN_0                     (US_CR_TXEN_0_Val << US_CR_TXEN_Pos)       /* (US_CR) No effect. Position */
#define US_CR_TXEN_1                     (US_CR_TXEN_1_Val << US_CR_TXEN_Pos)       /* (US_CR) Enables the transmitter if TXDIS is 0. Position */
#define US_CR_TXDIS_Pos                  _UINT32_(7)                                          /* (US_CR) Transmitter Disable Position */
#define US_CR_TXDIS_Msk                  (_UINT32_(0x1) << US_CR_TXDIS_Pos)              /* (US_CR) Transmitter Disable Mask */
#define US_CR_TXDIS(value)               (US_CR_TXDIS_Msk & (_UINT32_(value) << US_CR_TXDIS_Pos)) /* Assignment of value for TXDIS in the US_CR register */
#define   US_CR_TXDIS_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_TXDIS_1_Val              _UINT32_(0x1)                                        /* (US_CR) Disables the transmitter.  */
#define US_CR_TXDIS_0                    (US_CR_TXDIS_0_Val << US_CR_TXDIS_Pos)     /* (US_CR) No effect. Position */
#define US_CR_TXDIS_1                    (US_CR_TXDIS_1_Val << US_CR_TXDIS_Pos)     /* (US_CR) Disables the transmitter. Position */
#define US_CR_RSTSTA_Pos                 _UINT32_(8)                                          /* (US_CR) Reset Status Bits Position */
#define US_CR_RSTSTA_Msk                 (_UINT32_(0x1) << US_CR_RSTSTA_Pos)             /* (US_CR) Reset Status Bits Mask */
#define US_CR_RSTSTA(value)              (US_CR_RSTSTA_Msk & (_UINT32_(value) << US_CR_RSTSTA_Pos)) /* Assignment of value for RSTSTA in the US_CR register */
#define   US_CR_RSTSTA_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RSTSTA_1_Val             _UINT32_(0x1)                                        /* (US_CR) Resets the status bits PARE, FRAME, OVRE, MANE, LINBE, LINISFE, LINIPE, LINCE, LINSNRE, LINSTE, LINHTE, LINID, LINTC, LINBK, CMP and RXBRK in US_CSR. Also resets the status bits TXFEF, TXFFF, TXFTHF, RXFEF, RXFFF, RXFTHF, TXFPTEF, RXFPTEF in US_FESR.  */
#define US_CR_RSTSTA_0                   (US_CR_RSTSTA_0_Val << US_CR_RSTSTA_Pos)   /* (US_CR) No effect. Position */
#define US_CR_RSTSTA_1                   (US_CR_RSTSTA_1_Val << US_CR_RSTSTA_Pos)   /* (US_CR) Resets the status bits PARE, FRAME, OVRE, MANE, LINBE, LINISFE, LINIPE, LINCE, LINSNRE, LINSTE, LINHTE, LINID, LINTC, LINBK, CMP and RXBRK in US_CSR. Also resets the status bits TXFEF, TXFFF, TXFTHF, RXFEF, RXFFF, RXFTHF, TXFPTEF, RXFPTEF in US_FESR. Position */
#define US_CR_STTBRK_Pos                 _UINT32_(9)                                          /* (US_CR) Start Break Position */
#define US_CR_STTBRK_Msk                 (_UINT32_(0x1) << US_CR_STTBRK_Pos)             /* (US_CR) Start Break Mask */
#define US_CR_STTBRK(value)              (US_CR_STTBRK_Msk & (_UINT32_(value) << US_CR_STTBRK_Pos)) /* Assignment of value for STTBRK in the US_CR register */
#define   US_CR_STTBRK_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_STTBRK_1_Val             _UINT32_(0x1)                                        /* (US_CR) Starts transmission of a break after the characters present in US_THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted.  */
#define US_CR_STTBRK_0                   (US_CR_STTBRK_0_Val << US_CR_STTBRK_Pos)   /* (US_CR) No effect. Position */
#define US_CR_STTBRK_1                   (US_CR_STTBRK_1_Val << US_CR_STTBRK_Pos)   /* (US_CR) Starts transmission of a break after the characters present in US_THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted. Position */
#define US_CR_STPBRK_Pos                 _UINT32_(10)                                         /* (US_CR) Stop Break Position */
#define US_CR_STPBRK_Msk                 (_UINT32_(0x1) << US_CR_STPBRK_Pos)             /* (US_CR) Stop Break Mask */
#define US_CR_STPBRK(value)              (US_CR_STPBRK_Msk & (_UINT32_(value) << US_CR_STPBRK_Pos)) /* Assignment of value for STPBRK in the US_CR register */
#define   US_CR_STPBRK_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_STPBRK_1_Val             _UINT32_(0x1)                                        /* (US_CR) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods. No effect if no break is being transmitted.  */
#define US_CR_STPBRK_0                   (US_CR_STPBRK_0_Val << US_CR_STPBRK_Pos)   /* (US_CR) No effect. Position */
#define US_CR_STPBRK_1                   (US_CR_STPBRK_1_Val << US_CR_STPBRK_Pos)   /* (US_CR) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods. No effect if no break is being transmitted. Position */
#define US_CR_STTTO_Pos                  _UINT32_(11)                                         /* (US_CR) Clear TIMEOUT Flag and Start Timeout After Next Character Received Position */
#define US_CR_STTTO_Msk                  (_UINT32_(0x1) << US_CR_STTTO_Pos)              /* (US_CR) Clear TIMEOUT Flag and Start Timeout After Next Character Received Mask */
#define US_CR_STTTO(value)               (US_CR_STTTO_Msk & (_UINT32_(value) << US_CR_STTTO_Pos)) /* Assignment of value for STTTO in the US_CR register */
#define   US_CR_STTTO_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_STTTO_1_Val              _UINT32_(0x1)                                        /* (US_CR) Starts waiting for a character before clocking the timeout counter. Immediately disables a timeout period in progress. Resets the US_CSR.TIMEOUT status bit.  */
#define US_CR_STTTO_0                    (US_CR_STTTO_0_Val << US_CR_STTTO_Pos)     /* (US_CR) No effect. Position */
#define US_CR_STTTO_1                    (US_CR_STTTO_1_Val << US_CR_STTTO_Pos)     /* (US_CR) Starts waiting for a character before clocking the timeout counter. Immediately disables a timeout period in progress. Resets the US_CSR.TIMEOUT status bit. Position */
#define US_CR_SENDA_Pos                  _UINT32_(12)                                         /* (US_CR) Send Address Position */
#define US_CR_SENDA_Msk                  (_UINT32_(0x1) << US_CR_SENDA_Pos)              /* (US_CR) Send Address Mask */
#define US_CR_SENDA(value)               (US_CR_SENDA_Msk & (_UINT32_(value) << US_CR_SENDA_Pos)) /* Assignment of value for SENDA in the US_CR register */
#define   US_CR_SENDA_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_SENDA_1_Val              _UINT32_(0x1)                                        /* (US_CR) In Multidrop mode only, the next character written to US_THR is sent with the address bit set.  */
#define US_CR_SENDA_0                    (US_CR_SENDA_0_Val << US_CR_SENDA_Pos)     /* (US_CR) No effect. Position */
#define US_CR_SENDA_1                    (US_CR_SENDA_1_Val << US_CR_SENDA_Pos)     /* (US_CR) In Multidrop mode only, the next character written to US_THR is sent with the address bit set. Position */
#define US_CR_RSTIT_Pos                  _UINT32_(13)                                         /* (US_CR) Reset Iterations Position */
#define US_CR_RSTIT_Msk                  (_UINT32_(0x1) << US_CR_RSTIT_Pos)              /* (US_CR) Reset Iterations Mask */
#define US_CR_RSTIT(value)               (US_CR_RSTIT_Msk & (_UINT32_(value) << US_CR_RSTIT_Pos)) /* Assignment of value for RSTIT in the US_CR register */
#define   US_CR_RSTIT_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RSTIT_1_Val              _UINT32_(0x1)                                        /* (US_CR) Resets US_CSR.ITER. No effect if the ISO7816 is not enabled.  */
#define US_CR_RSTIT_0                    (US_CR_RSTIT_0_Val << US_CR_RSTIT_Pos)     /* (US_CR) No effect. Position */
#define US_CR_RSTIT_1                    (US_CR_RSTIT_1_Val << US_CR_RSTIT_Pos)     /* (US_CR) Resets US_CSR.ITER. No effect if the ISO7816 is not enabled. Position */
#define US_CR_RSTNACK_Pos                _UINT32_(14)                                         /* (US_CR) Reset Non Acknowledge Position */
#define US_CR_RSTNACK_Msk                (_UINT32_(0x1) << US_CR_RSTNACK_Pos)            /* (US_CR) Reset Non Acknowledge Mask */
#define US_CR_RSTNACK(value)             (US_CR_RSTNACK_Msk & (_UINT32_(value) << US_CR_RSTNACK_Pos)) /* Assignment of value for RSTNACK in the US_CR register */
#define   US_CR_RSTNACK_0_Val            _UINT32_(0x0)                                        /* (US_CR) No effect  */
#define   US_CR_RSTNACK_1_Val            _UINT32_(0x1)                                        /* (US_CR) Resets US_CSR.NACK.  */
#define US_CR_RSTNACK_0                  (US_CR_RSTNACK_0_Val << US_CR_RSTNACK_Pos) /* (US_CR) No effect Position */
#define US_CR_RSTNACK_1                  (US_CR_RSTNACK_1_Val << US_CR_RSTNACK_Pos) /* (US_CR) Resets US_CSR.NACK. Position */
#define US_CR_RETTO_Pos                  _UINT32_(15)                                         /* (US_CR) Start Timeout Immediately Position */
#define US_CR_RETTO_Msk                  (_UINT32_(0x1) << US_CR_RETTO_Pos)              /* (US_CR) Start Timeout Immediately Mask */
#define US_CR_RETTO(value)               (US_CR_RETTO_Msk & (_UINT32_(value) << US_CR_RETTO_Pos)) /* Assignment of value for RETTO in the US_CR register */
#define   US_CR_RETTO_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect  */
#define   US_CR_RETTO_1_Val              _UINT32_(0x1)                                        /* (US_CR) Immediately restarts timeout period.  */
#define US_CR_RETTO_0                    (US_CR_RETTO_0_Val << US_CR_RETTO_Pos)     /* (US_CR) No effect Position */
#define US_CR_RETTO_1                    (US_CR_RETTO_1_Val << US_CR_RETTO_Pos)     /* (US_CR) Immediately restarts timeout period. Position */
#define US_CR_RTSEN_Pos                  _UINT32_(18)                                         /* (US_CR) Request to Send Enable Position */
#define US_CR_RTSEN_Msk                  (_UINT32_(0x1) << US_CR_RTSEN_Pos)              /* (US_CR) Request to Send Enable Mask */
#define US_CR_RTSEN(value)               (US_CR_RTSEN_Msk & (_UINT32_(value) << US_CR_RTSEN_Pos)) /* Assignment of value for RTSEN in the US_CR register */
#define   US_CR_RTSEN_0_Val              _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RTSEN_1_Val              _UINT32_(0x1)                                        /* (US_CR) Drives the RTS pin to 1 if US_MR.USART_MODE field = 2, else drives the RTS pin to 0 if US_MR.USART_MODE field = 0.  */
#define US_CR_RTSEN_0                    (US_CR_RTSEN_0_Val << US_CR_RTSEN_Pos)     /* (US_CR) No effect. Position */
#define US_CR_RTSEN_1                    (US_CR_RTSEN_1_Val << US_CR_RTSEN_Pos)     /* (US_CR) Drives the RTS pin to 1 if US_MR.USART_MODE field = 2, else drives the RTS pin to 0 if US_MR.USART_MODE field = 0. Position */
#define US_CR_RTSDIS_Pos                 _UINT32_(19)                                         /* (US_CR) Request to Send Disable Position */
#define US_CR_RTSDIS_Msk                 (_UINT32_(0x1) << US_CR_RTSDIS_Pos)             /* (US_CR) Request to Send Disable Mask */
#define US_CR_RTSDIS(value)              (US_CR_RTSDIS_Msk & (_UINT32_(value) << US_CR_RTSDIS_Pos)) /* Assignment of value for RTSDIS in the US_CR register */
#define   US_CR_RTSDIS_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RTSDIS_1_Val             _UINT32_(0x1)                                        /* (US_CR) Drives the RTS pin to 0 if US_MR.USART_MODE field = 2, else drives the RTS pin to 1 if US_MR.USART_MODE field = 0.  */
#define US_CR_RTSDIS_0                   (US_CR_RTSDIS_0_Val << US_CR_RTSDIS_Pos)   /* (US_CR) No effect. Position */
#define US_CR_RTSDIS_1                   (US_CR_RTSDIS_1_Val << US_CR_RTSDIS_Pos)   /* (US_CR) Drives the RTS pin to 0 if US_MR.USART_MODE field = 2, else drives the RTS pin to 1 if US_MR.USART_MODE field = 0. Position */
#define US_CR_LINABT_Pos                 _UINT32_(20)                                         /* (US_CR) Abort LIN Transmission Position */
#define US_CR_LINABT_Msk                 (_UINT32_(0x1) << US_CR_LINABT_Pos)             /* (US_CR) Abort LIN Transmission Mask */
#define US_CR_LINABT(value)              (US_CR_LINABT_Msk & (_UINT32_(value) << US_CR_LINABT_Pos)) /* Assignment of value for LINABT in the US_CR register */
#define   US_CR_LINABT_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_LINABT_1_Val             _UINT32_(0x1)                                        /* (US_CR) Aborts the current LIN transmission.  */
#define US_CR_LINABT_0                   (US_CR_LINABT_0_Val << US_CR_LINABT_Pos)   /* (US_CR) No effect. Position */
#define US_CR_LINABT_1                   (US_CR_LINABT_1_Val << US_CR_LINABT_Pos)   /* (US_CR) Aborts the current LIN transmission. Position */
#define US_CR_LINWKUP_Pos                _UINT32_(21)                                         /* (US_CR) Send LIN Wake-up Signal Position */
#define US_CR_LINWKUP_Msk                (_UINT32_(0x1) << US_CR_LINWKUP_Pos)            /* (US_CR) Send LIN Wake-up Signal Mask */
#define US_CR_LINWKUP(value)             (US_CR_LINWKUP_Msk & (_UINT32_(value) << US_CR_LINWKUP_Pos)) /* Assignment of value for LINWKUP in the US_CR register */
#define   US_CR_LINWKUP_0_Val            _UINT32_(0x0)                                        /* (US_CR) No effect:  */
#define   US_CR_LINWKUP_1_Val            _UINT32_(0x1)                                        /* (US_CR) Sends a wake-up signal on the LIN bus.  */
#define US_CR_LINWKUP_0                  (US_CR_LINWKUP_0_Val << US_CR_LINWKUP_Pos) /* (US_CR) No effect: Position */
#define US_CR_LINWKUP_1                  (US_CR_LINWKUP_1_Val << US_CR_LINWKUP_Pos) /* (US_CR) Sends a wake-up signal on the LIN bus. Position */
#define US_CR_TXFCLR_Pos                 _UINT32_(24)                                         /* (US_CR) Transmit FIFO Clear Position */
#define US_CR_TXFCLR_Msk                 (_UINT32_(0x1) << US_CR_TXFCLR_Pos)             /* (US_CR) Transmit FIFO Clear Mask */
#define US_CR_TXFCLR(value)              (US_CR_TXFCLR_Msk & (_UINT32_(value) << US_CR_TXFCLR_Pos)) /* Assignment of value for TXFCLR in the US_CR register */
#define   US_CR_TXFCLR_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_TXFCLR_1_Val             _UINT32_(0x1)                                        /* (US_CR) Empties the Transmit FIFO.  */
#define US_CR_TXFCLR_0                   (US_CR_TXFCLR_0_Val << US_CR_TXFCLR_Pos)   /* (US_CR) No effect. Position */
#define US_CR_TXFCLR_1                   (US_CR_TXFCLR_1_Val << US_CR_TXFCLR_Pos)   /* (US_CR) Empties the Transmit FIFO. Position */
#define US_CR_RXFCLR_Pos                 _UINT32_(25)                                         /* (US_CR) Receive FIFO Clear Position */
#define US_CR_RXFCLR_Msk                 (_UINT32_(0x1) << US_CR_RXFCLR_Pos)             /* (US_CR) Receive FIFO Clear Mask */
#define US_CR_RXFCLR(value)              (US_CR_RXFCLR_Msk & (_UINT32_(value) << US_CR_RXFCLR_Pos)) /* Assignment of value for RXFCLR in the US_CR register */
#define   US_CR_RXFCLR_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_RXFCLR_1_Val             _UINT32_(0x1)                                        /* (US_CR) Empties the Receive FIFO.  */
#define US_CR_RXFCLR_0                   (US_CR_RXFCLR_0_Val << US_CR_RXFCLR_Pos)   /* (US_CR) No effect. Position */
#define US_CR_RXFCLR_1                   (US_CR_RXFCLR_1_Val << US_CR_RXFCLR_Pos)   /* (US_CR) Empties the Receive FIFO. Position */
#define US_CR_TXFLCLR_Pos                _UINT32_(26)                                         /* (US_CR) Transmit FIFO Lock CLEAR Position */
#define US_CR_TXFLCLR_Msk                (_UINT32_(0x1) << US_CR_TXFLCLR_Pos)            /* (US_CR) Transmit FIFO Lock CLEAR Mask */
#define US_CR_TXFLCLR(value)             (US_CR_TXFLCLR_Msk & (_UINT32_(value) << US_CR_TXFLCLR_Pos)) /* Assignment of value for TXFLCLR in the US_CR register */
#define   US_CR_TXFLCLR_0_Val            _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_TXFLCLR_1_Val            _UINT32_(0x1)                                        /* (US_CR) Clears the Transmit FIFO Lock  */
#define US_CR_TXFLCLR_0                  (US_CR_TXFLCLR_0_Val << US_CR_TXFLCLR_Pos) /* (US_CR) No effect. Position */
#define US_CR_TXFLCLR_1                  (US_CR_TXFLCLR_1_Val << US_CR_TXFLCLR_Pos) /* (US_CR) Clears the Transmit FIFO Lock Position */
#define US_CR_REQCLR_Pos                 _UINT32_(28)                                         /* (US_CR) Request to Clear the Comparison Trigger Position */
#define US_CR_REQCLR_Msk                 (_UINT32_(0x1) << US_CR_REQCLR_Pos)             /* (US_CR) Request to Clear the Comparison Trigger Mask */
#define US_CR_REQCLR(value)              (US_CR_REQCLR_Msk & (_UINT32_(value) << US_CR_REQCLR_Pos)) /* Assignment of value for REQCLR in the US_CR register */
#define   US_CR_REQCLR_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_REQCLR_1_Val             _UINT32_(0x1)                                        /* (US_CR) Clears the potential clock request currently issued by USART, thus the potential system wake-up is cancelled.  */
#define US_CR_REQCLR_0                   (US_CR_REQCLR_0_Val << US_CR_REQCLR_Pos)   /* (US_CR) No effect. Position */
#define US_CR_REQCLR_1                   (US_CR_REQCLR_1_Val << US_CR_REQCLR_Pos)   /* (US_CR) Clears the potential clock request currently issued by USART, thus the potential system wake-up is cancelled. Position */
#define US_CR_FIFOEN_Pos                 _UINT32_(30)                                         /* (US_CR) FIFO Enable Position */
#define US_CR_FIFOEN_Msk                 (_UINT32_(0x1) << US_CR_FIFOEN_Pos)             /* (US_CR) FIFO Enable Mask */
#define US_CR_FIFOEN(value)              (US_CR_FIFOEN_Msk & (_UINT32_(value) << US_CR_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the US_CR register */
#define   US_CR_FIFOEN_0_Val             _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_FIFOEN_1_Val             _UINT32_(0x1)                                        /* (US_CR) Enables the Transmit and Receive FIFOs.  */
#define US_CR_FIFOEN_0                   (US_CR_FIFOEN_0_Val << US_CR_FIFOEN_Pos)   /* (US_CR) No effect. Position */
#define US_CR_FIFOEN_1                   (US_CR_FIFOEN_1_Val << US_CR_FIFOEN_Pos)   /* (US_CR) Enables the Transmit and Receive FIFOs. Position */
#define US_CR_FIFODIS_Pos                _UINT32_(31)                                         /* (US_CR) FIFO Disable Position */
#define US_CR_FIFODIS_Msk                (_UINT32_(0x1) << US_CR_FIFODIS_Pos)            /* (US_CR) FIFO Disable Mask */
#define US_CR_FIFODIS(value)             (US_CR_FIFODIS_Msk & (_UINT32_(value) << US_CR_FIFODIS_Pos)) /* Assignment of value for FIFODIS in the US_CR register */
#define   US_CR_FIFODIS_0_Val            _UINT32_(0x0)                                        /* (US_CR) No effect.  */
#define   US_CR_FIFODIS_1_Val            _UINT32_(0x1)                                        /* (US_CR) Disables the Transmit and Receive FIFOs.  */
#define US_CR_FIFODIS_0                  (US_CR_FIFODIS_0_Val << US_CR_FIFODIS_Pos) /* (US_CR) No effect. Position */
#define US_CR_FIFODIS_1                  (US_CR_FIFODIS_1_Val << US_CR_FIFODIS_Pos) /* (US_CR) Disables the Transmit and Receive FIFOs. Position */
#define US_CR_Msk                        _UINT32_(0xD73CFFFC)                                 /* (US_CR) Register Mask  */


/* -------- US_MR : (FLEXCOM Offset: 0x204) (R/W 32) USART Mode Register -------- */
#define US_MR_RESETVALUE                 _UINT32_(0xC0000000)                                 /*  (US_MR) USART Mode Register  Reset Value */

#define US_MR_USART_MODE_Pos             _UINT32_(0)                                          /* (US_MR) USART Mode of Operation Position */
#define US_MR_USART_MODE_Msk             (_UINT32_(0xF) << US_MR_USART_MODE_Pos)         /* (US_MR) USART Mode of Operation Mask */
#define US_MR_USART_MODE(value)          (US_MR_USART_MODE_Msk & (_UINT32_(value) << US_MR_USART_MODE_Pos)) /* Assignment of value for USART_MODE in the US_MR register */
#define   US_MR_USART_MODE_NORMAL_Val    _UINT32_(0x0)                                        /* (US_MR) Normal mode  */
#define   US_MR_USART_MODE_RS485_Val     _UINT32_(0x1)                                        /* (US_MR) RS485  */
#define   US_MR_USART_MODE_HW_HANDSHAKING_Val _UINT32_(0x2)                                        /* (US_MR) Hardware handshaking  */
#define   US_MR_USART_MODE_ISO7816_T_0_Val _UINT32_(0x4)                                        /* (US_MR) ISO7816 Protocol: T = 0  */
#define   US_MR_USART_MODE_ISO7816_T_1_Val _UINT32_(0x6)                                        /* (US_MR) ISO7816 Protocol: T = 1  */
#define   US_MR_USART_MODE_IRDA_Val      _UINT32_(0x8)                                        /* (US_MR) IrDA  */
#define   US_MR_USART_MODE_LIN_MASTER_Val _UINT32_(0xA)                                        /* (US_MR) LIN Host mode  */
#define   US_MR_USART_MODE_LIN_SLAVE_Val _UINT32_(0xB)                                        /* (US_MR) LIN Client mode  */
#define   US_MR_USART_MODE_DATA16BIT_MASTER_Val _UINT32_(0xC)                                        /* (US_MR) 16-bit data host  */
#define   US_MR_USART_MODE_DATA16BIT_SLAVE_Val _UINT32_(0xD)                                        /* (US_MR) 16-bit data client  */
#define US_MR_USART_MODE_NORMAL          (US_MR_USART_MODE_NORMAL_Val << US_MR_USART_MODE_Pos) /* (US_MR) Normal mode Position */
#define US_MR_USART_MODE_RS485           (US_MR_USART_MODE_RS485_Val << US_MR_USART_MODE_Pos) /* (US_MR) RS485 Position */
#define US_MR_USART_MODE_HW_HANDSHAKING  (US_MR_USART_MODE_HW_HANDSHAKING_Val << US_MR_USART_MODE_Pos) /* (US_MR) Hardware handshaking Position */
#define US_MR_USART_MODE_ISO7816_T_0     (US_MR_USART_MODE_ISO7816_T_0_Val << US_MR_USART_MODE_Pos) /* (US_MR) ISO7816 Protocol: T = 0 Position */
#define US_MR_USART_MODE_ISO7816_T_1     (US_MR_USART_MODE_ISO7816_T_1_Val << US_MR_USART_MODE_Pos) /* (US_MR) ISO7816 Protocol: T = 1 Position */
#define US_MR_USART_MODE_IRDA            (US_MR_USART_MODE_IRDA_Val << US_MR_USART_MODE_Pos) /* (US_MR) IrDA Position */
#define US_MR_USART_MODE_LIN_MASTER      (US_MR_USART_MODE_LIN_MASTER_Val << US_MR_USART_MODE_Pos) /* (US_MR) LIN Host mode Position */
#define US_MR_USART_MODE_LIN_SLAVE       (US_MR_USART_MODE_LIN_SLAVE_Val << US_MR_USART_MODE_Pos) /* (US_MR) LIN Client mode Position */
#define US_MR_USART_MODE_DATA16BIT_MASTER (US_MR_USART_MODE_DATA16BIT_MASTER_Val << US_MR_USART_MODE_Pos) /* (US_MR) 16-bit data host Position */
#define US_MR_USART_MODE_DATA16BIT_SLAVE (US_MR_USART_MODE_DATA16BIT_SLAVE_Val << US_MR_USART_MODE_Pos) /* (US_MR) 16-bit data client Position */
#define US_MR_USCLKS_Pos                 _UINT32_(4)                                          /* (US_MR) Clock Selection Position */
#define US_MR_USCLKS_Msk                 (_UINT32_(0x3) << US_MR_USCLKS_Pos)             /* (US_MR) Clock Selection Mask */
#define US_MR_USCLKS(value)              (US_MR_USCLKS_Msk & (_UINT32_(value) << US_MR_USCLKS_Pos)) /* Assignment of value for USCLKS in the US_MR register */
#define   US_MR_USCLKS_MCK_Val           _UINT32_(0x0)                                        /* (US_MR) Peripheral clock is selected  */
#define   US_MR_USCLKS_GCLK_Val          _UINT32_(0x2)                                        /* (US_MR) PMC generic clock is selected. If the SCK pin is driven (CLKO = 1), the CD field must be greater than 1.  */
#define   US_MR_USCLKS_SCK_Val           _UINT32_(0x3)                                        /* (US_MR) External pin SCK is selected  */
#define US_MR_USCLKS_MCK                 (US_MR_USCLKS_MCK_Val << US_MR_USCLKS_Pos) /* (US_MR) Peripheral clock is selected Position */
#define US_MR_USCLKS_GCLK                (US_MR_USCLKS_GCLK_Val << US_MR_USCLKS_Pos) /* (US_MR) PMC generic clock is selected. If the SCK pin is driven (CLKO = 1), the CD field must be greater than 1. Position */
#define US_MR_USCLKS_SCK                 (US_MR_USCLKS_SCK_Val << US_MR_USCLKS_Pos) /* (US_MR) External pin SCK is selected Position */
#define US_MR_CHRL_Pos                   _UINT32_(6)                                          /* (US_MR) Character Length Position */
#define US_MR_CHRL_Msk                   (_UINT32_(0x3) << US_MR_CHRL_Pos)               /* (US_MR) Character Length Mask */
#define US_MR_CHRL(value)                (US_MR_CHRL_Msk & (_UINT32_(value) << US_MR_CHRL_Pos)) /* Assignment of value for CHRL in the US_MR register */
#define   US_MR_CHRL_5_BIT_Val           _UINT32_(0x0)                                        /* (US_MR) Character length is 5 bits  */
#define   US_MR_CHRL_6_BIT_Val           _UINT32_(0x1)                                        /* (US_MR) Character length is 6 bits  */
#define   US_MR_CHRL_7_BIT_Val           _UINT32_(0x2)                                        /* (US_MR) Character length is 7 bits  */
#define   US_MR_CHRL_8_BIT_Val           _UINT32_(0x3)                                        /* (US_MR) Character length is 8 bits  */
#define US_MR_CHRL_5_BIT                 (US_MR_CHRL_5_BIT_Val << US_MR_CHRL_Pos)   /* (US_MR) Character length is 5 bits Position */
#define US_MR_CHRL_6_BIT                 (US_MR_CHRL_6_BIT_Val << US_MR_CHRL_Pos)   /* (US_MR) Character length is 6 bits Position */
#define US_MR_CHRL_7_BIT                 (US_MR_CHRL_7_BIT_Val << US_MR_CHRL_Pos)   /* (US_MR) Character length is 7 bits Position */
#define US_MR_CHRL_8_BIT                 (US_MR_CHRL_8_BIT_Val << US_MR_CHRL_Pos)   /* (US_MR) Character length is 8 bits Position */
#define US_MR_SYNC_Pos                   _UINT32_(8)                                          /* (US_MR) Synchronous Mode Select Position */
#define US_MR_SYNC_Msk                   (_UINT32_(0x1) << US_MR_SYNC_Pos)               /* (US_MR) Synchronous Mode Select Mask */
#define US_MR_SYNC(value)                (US_MR_SYNC_Msk & (_UINT32_(value) << US_MR_SYNC_Pos)) /* Assignment of value for SYNC in the US_MR register */
#define   US_MR_SYNC_0_Val               _UINT32_(0x0)                                        /* (US_MR) USART operates in Asynchronous mode (UART).  */
#define   US_MR_SYNC_1_Val               _UINT32_(0x1)                                        /* (US_MR) USART operates in Synchronous mode.  */
#define US_MR_SYNC_0                     (US_MR_SYNC_0_Val << US_MR_SYNC_Pos)       /* (US_MR) USART operates in Asynchronous mode (UART). Position */
#define US_MR_SYNC_1                     (US_MR_SYNC_1_Val << US_MR_SYNC_Pos)       /* (US_MR) USART operates in Synchronous mode. Position */
#define US_MR_PAR_Pos                    _UINT32_(9)                                          /* (US_MR) Parity Type Position */
#define US_MR_PAR_Msk                    (_UINT32_(0x7) << US_MR_PAR_Pos)                /* (US_MR) Parity Type Mask */
#define US_MR_PAR(value)                 (US_MR_PAR_Msk & (_UINT32_(value) << US_MR_PAR_Pos)) /* Assignment of value for PAR in the US_MR register */
#define   US_MR_PAR_EVEN_Val             _UINT32_(0x0)                                        /* (US_MR) Even parity  */
#define   US_MR_PAR_ODD_Val              _UINT32_(0x1)                                        /* (US_MR) Odd parity  */
#define   US_MR_PAR_SPACE_Val            _UINT32_(0x2)                                        /* (US_MR) Parity forced to 0 (Space)  */
#define   US_MR_PAR_MARK_Val             _UINT32_(0x3)                                        /* (US_MR) Parity forced to 1 (Mark)  */
#define   US_MR_PAR_NO_Val               _UINT32_(0x4)                                        /* (US_MR) No parity  */
#define   US_MR_PAR_MULTIDROP_Val        _UINT32_(0x6)                                        /* (US_MR) Multidrop mode  */
#define US_MR_PAR_EVEN                   (US_MR_PAR_EVEN_Val << US_MR_PAR_Pos)      /* (US_MR) Even parity Position */
#define US_MR_PAR_ODD                    (US_MR_PAR_ODD_Val << US_MR_PAR_Pos)       /* (US_MR) Odd parity Position */
#define US_MR_PAR_SPACE                  (US_MR_PAR_SPACE_Val << US_MR_PAR_Pos)     /* (US_MR) Parity forced to 0 (Space) Position */
#define US_MR_PAR_MARK                   (US_MR_PAR_MARK_Val << US_MR_PAR_Pos)      /* (US_MR) Parity forced to 1 (Mark) Position */
#define US_MR_PAR_NO                     (US_MR_PAR_NO_Val << US_MR_PAR_Pos)        /* (US_MR) No parity Position */
#define US_MR_PAR_MULTIDROP              (US_MR_PAR_MULTIDROP_Val << US_MR_PAR_Pos) /* (US_MR) Multidrop mode Position */
#define US_MR_NBSTOP_Pos                 _UINT32_(12)                                         /* (US_MR) Number of Stop Bits Position */
#define US_MR_NBSTOP_Msk                 (_UINT32_(0x3) << US_MR_NBSTOP_Pos)             /* (US_MR) Number of Stop Bits Mask */
#define US_MR_NBSTOP(value)              (US_MR_NBSTOP_Msk & (_UINT32_(value) << US_MR_NBSTOP_Pos)) /* Assignment of value for NBSTOP in the US_MR register */
#define   US_MR_NBSTOP_1_BIT_Val         _UINT32_(0x0)                                        /* (US_MR) 1 stop bit  */
#define   US_MR_NBSTOP_1_5_BIT_Val       _UINT32_(0x1)                                        /* (US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1)  */
#define   US_MR_NBSTOP_2_BIT_Val         _UINT32_(0x2)                                        /* (US_MR) 2 stop bits  */
#define US_MR_NBSTOP_1_BIT               (US_MR_NBSTOP_1_BIT_Val << US_MR_NBSTOP_Pos) /* (US_MR) 1 stop bit Position */
#define US_MR_NBSTOP_1_5_BIT             (US_MR_NBSTOP_1_5_BIT_Val << US_MR_NBSTOP_Pos) /* (US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1) Position */
#define US_MR_NBSTOP_2_BIT               (US_MR_NBSTOP_2_BIT_Val << US_MR_NBSTOP_Pos) /* (US_MR) 2 stop bits Position */
#define US_MR_CHMODE_Pos                 _UINT32_(14)                                         /* (US_MR) Channel Mode Position */
#define US_MR_CHMODE_Msk                 (_UINT32_(0x3) << US_MR_CHMODE_Pos)             /* (US_MR) Channel Mode Mask */
#define US_MR_CHMODE(value)              (US_MR_CHMODE_Msk & (_UINT32_(value) << US_MR_CHMODE_Pos)) /* Assignment of value for CHMODE in the US_MR register */
#define   US_MR_CHMODE_NORMAL_Val        _UINT32_(0x0)                                        /* (US_MR) Normal mode  */
#define   US_MR_CHMODE_AUTOMATIC_Val     _UINT32_(0x1)                                        /* (US_MR) Automatic Echo. Receiver input is connected to the TXD pin.  */
#define   US_MR_CHMODE_LOCAL_LOOPBACK_Val _UINT32_(0x2)                                        /* (US_MR) Local Loopback. Transmitter output is connected to the Receiver Input.  */
#define   US_MR_CHMODE_REMOTE_LOOPBACK_Val _UINT32_(0x3)                                        /* (US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin.  */
#define US_MR_CHMODE_NORMAL              (US_MR_CHMODE_NORMAL_Val << US_MR_CHMODE_Pos) /* (US_MR) Normal mode Position */
#define US_MR_CHMODE_AUTOMATIC           (US_MR_CHMODE_AUTOMATIC_Val << US_MR_CHMODE_Pos) /* (US_MR) Automatic Echo. Receiver input is connected to the TXD pin. Position */
#define US_MR_CHMODE_LOCAL_LOOPBACK      (US_MR_CHMODE_LOCAL_LOOPBACK_Val << US_MR_CHMODE_Pos) /* (US_MR) Local Loopback. Transmitter output is connected to the Receiver Input. Position */
#define US_MR_CHMODE_REMOTE_LOOPBACK     (US_MR_CHMODE_REMOTE_LOOPBACK_Val << US_MR_CHMODE_Pos) /* (US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin. Position */
#define US_MR_MSBF_Pos                   _UINT32_(16)                                         /* (US_MR) Bit Order Position */
#define US_MR_MSBF_Msk                   (_UINT32_(0x1) << US_MR_MSBF_Pos)               /* (US_MR) Bit Order Mask */
#define US_MR_MSBF(value)                (US_MR_MSBF_Msk & (_UINT32_(value) << US_MR_MSBF_Pos)) /* Assignment of value for MSBF in the US_MR register */
#define   US_MR_MSBF_0_Val               _UINT32_(0x0)                                        /* (US_MR) Least significant bit is sent/received first.  */
#define   US_MR_MSBF_1_Val               _UINT32_(0x1)                                        /* (US_MR) Most significant bit is sent/received first.  */
#define US_MR_MSBF_0                     (US_MR_MSBF_0_Val << US_MR_MSBF_Pos)       /* (US_MR) Least significant bit is sent/received first. Position */
#define US_MR_MSBF_1                     (US_MR_MSBF_1_Val << US_MR_MSBF_Pos)       /* (US_MR) Most significant bit is sent/received first. Position */
#define US_MR_MODE9_Pos                  _UINT32_(17)                                         /* (US_MR) 9-bit Character Length Position */
#define US_MR_MODE9_Msk                  (_UINT32_(0x1) << US_MR_MODE9_Pos)              /* (US_MR) 9-bit Character Length Mask */
#define US_MR_MODE9(value)               (US_MR_MODE9_Msk & (_UINT32_(value) << US_MR_MODE9_Pos)) /* Assignment of value for MODE9 in the US_MR register */
#define   US_MR_MODE9_0_Val              _UINT32_(0x0)                                        /* (US_MR) CHRL defines character length.  */
#define   US_MR_MODE9_1_Val              _UINT32_(0x1)                                        /* (US_MR) 9-bit character length.  */
#define US_MR_MODE9_0                    (US_MR_MODE9_0_Val << US_MR_MODE9_Pos)     /* (US_MR) CHRL defines character length. Position */
#define US_MR_MODE9_1                    (US_MR_MODE9_1_Val << US_MR_MODE9_Pos)     /* (US_MR) 9-bit character length. Position */
#define US_MR_CLKO_Pos                   _UINT32_(18)                                         /* (US_MR) Clock Output Select Position */
#define US_MR_CLKO_Msk                   (_UINT32_(0x1) << US_MR_CLKO_Pos)               /* (US_MR) Clock Output Select Mask */
#define US_MR_CLKO(value)                (US_MR_CLKO_Msk & (_UINT32_(value) << US_MR_CLKO_Pos)) /* Assignment of value for CLKO in the US_MR register */
#define   US_MR_CLKO_0_Val               _UINT32_(0x0)                                        /* (US_MR) The USART does not drive the SCK pin (Synchronous Client mode or Asynchronous mode with external baud rate clock source).  */
#define   US_MR_CLKO_1_Val               _UINT32_(0x1)                                        /* (US_MR) The USART drives the SCK pin if USCLKS does not select the external clock SCK (USART Synchronous Host mode).  */
#define US_MR_CLKO_0                     (US_MR_CLKO_0_Val << US_MR_CLKO_Pos)       /* (US_MR) The USART does not drive the SCK pin (Synchronous Client mode or Asynchronous mode with external baud rate clock source). Position */
#define US_MR_CLKO_1                     (US_MR_CLKO_1_Val << US_MR_CLKO_Pos)       /* (US_MR) The USART drives the SCK pin if USCLKS does not select the external clock SCK (USART Synchronous Host mode). Position */
#define US_MR_OVER_Pos                   _UINT32_(19)                                         /* (US_MR) Oversampling Mode Position */
#define US_MR_OVER_Msk                   (_UINT32_(0x1) << US_MR_OVER_Pos)               /* (US_MR) Oversampling Mode Mask */
#define US_MR_OVER(value)                (US_MR_OVER_Msk & (_UINT32_(value) << US_MR_OVER_Pos)) /* Assignment of value for OVER in the US_MR register */
#define   US_MR_OVER_0_Val               _UINT32_(0x0)                                        /* (US_MR) 16x Oversampling.  */
#define   US_MR_OVER_1_Val               _UINT32_(0x1)                                        /* (US_MR) 8x Oversampling.  */
#define US_MR_OVER_0                     (US_MR_OVER_0_Val << US_MR_OVER_Pos)       /* (US_MR) 16x Oversampling. Position */
#define US_MR_OVER_1                     (US_MR_OVER_1_Val << US_MR_OVER_Pos)       /* (US_MR) 8x Oversampling. Position */
#define US_MR_INACK_Pos                  _UINT32_(20)                                         /* (US_MR) Inhibit Non Acknowledge Position */
#define US_MR_INACK_Msk                  (_UINT32_(0x1) << US_MR_INACK_Pos)              /* (US_MR) Inhibit Non Acknowledge Mask */
#define US_MR_INACK(value)               (US_MR_INACK_Msk & (_UINT32_(value) << US_MR_INACK_Pos)) /* Assignment of value for INACK in the US_MR register */
#define   US_MR_INACK_0_Val              _UINT32_(0x0)                                        /* (US_MR) The NACK is generated.  */
#define   US_MR_INACK_1_Val              _UINT32_(0x1)                                        /* (US_MR) The NACK is not generated.  */
#define US_MR_INACK_0                    (US_MR_INACK_0_Val << US_MR_INACK_Pos)     /* (US_MR) The NACK is generated. Position */
#define US_MR_INACK_1                    (US_MR_INACK_1_Val << US_MR_INACK_Pos)     /* (US_MR) The NACK is not generated. Position */
#define US_MR_DSNACK_Pos                 _UINT32_(21)                                         /* (US_MR) Disable Successive NACK Position */
#define US_MR_DSNACK_Msk                 (_UINT32_(0x1) << US_MR_DSNACK_Pos)             /* (US_MR) Disable Successive NACK Mask */
#define US_MR_DSNACK(value)              (US_MR_DSNACK_Msk & (_UINT32_(value) << US_MR_DSNACK_Pos)) /* Assignment of value for DSNACK in the US_MR register */
#define   US_MR_DSNACK_0_Val             _UINT32_(0x0)                                        /* (US_MR) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set).  */
#define   US_MR_DSNACK_1_Val             _UINT32_(0x1)                                        /* (US_MR) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generate a NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITER is asserted.  */
#define US_MR_DSNACK_0                   (US_MR_DSNACK_0_Val << US_MR_DSNACK_Pos)   /* (US_MR) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set). Position */
#define US_MR_DSNACK_1                   (US_MR_DSNACK_1_Val << US_MR_DSNACK_Pos)   /* (US_MR) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generate a NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITER is asserted. Position */
#define US_MR_VAR_SYNC_Pos               _UINT32_(22)                                         /* (US_MR) Variable Synchronization of Command/Data Sync Start Frame Delimiter Position */
#define US_MR_VAR_SYNC_Msk               (_UINT32_(0x1) << US_MR_VAR_SYNC_Pos)           /* (US_MR) Variable Synchronization of Command/Data Sync Start Frame Delimiter Mask */
#define US_MR_VAR_SYNC(value)            (US_MR_VAR_SYNC_Msk & (_UINT32_(value) << US_MR_VAR_SYNC_Pos)) /* Assignment of value for VAR_SYNC in the US_MR register */
#define   US_MR_VAR_SYNC_0_Val           _UINT32_(0x0)                                        /* (US_MR) User defined configuration of command or data sync field depending on MODSYNC value.  */
#define   US_MR_VAR_SYNC_1_Val           _UINT32_(0x1)                                        /* (US_MR) The sync field is updated when a character is written into US_THR.  */
#define US_MR_VAR_SYNC_0                 (US_MR_VAR_SYNC_0_Val << US_MR_VAR_SYNC_Pos) /* (US_MR) User defined configuration of command or data sync field depending on MODSYNC value. Position */
#define US_MR_VAR_SYNC_1                 (US_MR_VAR_SYNC_1_Val << US_MR_VAR_SYNC_Pos) /* (US_MR) The sync field is updated when a character is written into US_THR. Position */
#define US_MR_INVDATA_Pos                _UINT32_(23)                                         /* (US_MR) Inverted Data Position */
#define US_MR_INVDATA_Msk                (_UINT32_(0x1) << US_MR_INVDATA_Pos)            /* (US_MR) Inverted Data Mask */
#define US_MR_INVDATA(value)             (US_MR_INVDATA_Msk & (_UINT32_(value) << US_MR_INVDATA_Pos)) /* Assignment of value for INVDATA in the US_MR register */
#define   US_MR_INVDATA_0_Val            _UINT32_(0x0)                                        /* (US_MR) The data field transmitted on TXD line is the same as the one written in US_THR or the content read in US_RHR is the same as RXD line. Normal mode of operation.  */
#define   US_MR_INVDATA_1_Val            _UINT32_(0x1)                                        /* (US_MR) The data field transmitted on TXD line is inverted (voltage polarity only) compared to the value written in US_THR or the content read in US_RHR is inverted compared to what is received on RXD line (or ISO7816 IO line). Inverted mode of operation, useful for contactless card application. To be used with configuration bit MSBF.  */
#define US_MR_INVDATA_0                  (US_MR_INVDATA_0_Val << US_MR_INVDATA_Pos) /* (US_MR) The data field transmitted on TXD line is the same as the one written in US_THR or the content read in US_RHR is the same as RXD line. Normal mode of operation. Position */
#define US_MR_INVDATA_1                  (US_MR_INVDATA_1_Val << US_MR_INVDATA_Pos) /* (US_MR) The data field transmitted on TXD line is inverted (voltage polarity only) compared to the value written in US_THR or the content read in US_RHR is inverted compared to what is received on RXD line (or ISO7816 IO line). Inverted mode of operation, useful for contactless card application. To be used with configuration bit MSBF. Position */
#define US_MR_MAX_ITERATION_Pos          _UINT32_(24)                                         /* (US_MR) Maximum Number of Automatic Iteration Position */
#define US_MR_MAX_ITERATION_Msk          (_UINT32_(0x7) << US_MR_MAX_ITERATION_Pos)      /* (US_MR) Maximum Number of Automatic Iteration Mask */
#define US_MR_MAX_ITERATION(value)       (US_MR_MAX_ITERATION_Msk & (_UINT32_(value) << US_MR_MAX_ITERATION_Pos)) /* Assignment of value for MAX_ITERATION in the US_MR register */
#define US_MR_FILTER_Pos                 _UINT32_(28)                                         /* (US_MR) Receive Line Filter Position */
#define US_MR_FILTER_Msk                 (_UINT32_(0x1) << US_MR_FILTER_Pos)             /* (US_MR) Receive Line Filter Mask */
#define US_MR_FILTER(value)              (US_MR_FILTER_Msk & (_UINT32_(value) << US_MR_FILTER_Pos)) /* Assignment of value for FILTER in the US_MR register */
#define   US_MR_FILTER_0_Val             _UINT32_(0x0)                                        /* (US_MR) The USART does not filter the receive line.  */
#define   US_MR_FILTER_1_Val             _UINT32_(0x1)                                        /* (US_MR) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority).  */
#define US_MR_FILTER_0                   (US_MR_FILTER_0_Val << US_MR_FILTER_Pos)   /* (US_MR) The USART does not filter the receive line. Position */
#define US_MR_FILTER_1                   (US_MR_FILTER_1_Val << US_MR_FILTER_Pos)   /* (US_MR) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority). Position */
#define US_MR_MAN_Pos                    _UINT32_(29)                                         /* (US_MR) Manchester Encoder/Decoder Enable Position */
#define US_MR_MAN_Msk                    (_UINT32_(0x1) << US_MR_MAN_Pos)                /* (US_MR) Manchester Encoder/Decoder Enable Mask */
#define US_MR_MAN(value)                 (US_MR_MAN_Msk & (_UINT32_(value) << US_MR_MAN_Pos)) /* Assignment of value for MAN in the US_MR register */
#define   US_MR_MAN_0_Val                _UINT32_(0x0)                                        /* (US_MR) Manchester encoder/decoder are disabled.  */
#define   US_MR_MAN_1_Val                _UINT32_(0x1)                                        /* (US_MR) Manchester encoder/decoder are enabled.  */
#define US_MR_MAN_0                      (US_MR_MAN_0_Val << US_MR_MAN_Pos)         /* (US_MR) Manchester encoder/decoder are disabled. Position */
#define US_MR_MAN_1                      (US_MR_MAN_1_Val << US_MR_MAN_Pos)         /* (US_MR) Manchester encoder/decoder are enabled. Position */
#define US_MR_MODSYNC_Pos                _UINT32_(30)                                         /* (US_MR) Manchester Synchronization Mode Position */
#define US_MR_MODSYNC_Msk                (_UINT32_(0x1) << US_MR_MODSYNC_Pos)            /* (US_MR) Manchester Synchronization Mode Mask */
#define US_MR_MODSYNC(value)             (US_MR_MODSYNC_Msk & (_UINT32_(value) << US_MR_MODSYNC_Pos)) /* Assignment of value for MODSYNC in the US_MR register */
#define   US_MR_MODSYNC_0_Val            _UINT32_(0x0)                                        /* (US_MR) The Manchester start bit is a 0 to 1 transition  */
#define   US_MR_MODSYNC_1_Val            _UINT32_(0x1)                                        /* (US_MR) The Manchester start bit is a 1 to 0 transition.  */
#define US_MR_MODSYNC_0                  (US_MR_MODSYNC_0_Val << US_MR_MODSYNC_Pos) /* (US_MR) The Manchester start bit is a 0 to 1 transition Position */
#define US_MR_MODSYNC_1                  (US_MR_MODSYNC_1_Val << US_MR_MODSYNC_Pos) /* (US_MR) The Manchester start bit is a 1 to 0 transition. Position */
#define US_MR_ONEBIT_Pos                 _UINT32_(31)                                         /* (US_MR) Start Frame Delimiter Selector Position */
#define US_MR_ONEBIT_Msk                 (_UINT32_(0x1) << US_MR_ONEBIT_Pos)             /* (US_MR) Start Frame Delimiter Selector Mask */
#define US_MR_ONEBIT(value)              (US_MR_ONEBIT_Msk & (_UINT32_(value) << US_MR_ONEBIT_Pos)) /* Assignment of value for ONEBIT in the US_MR register */
#define   US_MR_ONEBIT_0_Val             _UINT32_(0x0)                                        /* (US_MR) Start frame delimiter is COMMAND or DATA SYNC.  */
#define   US_MR_ONEBIT_1_Val             _UINT32_(0x1)                                        /* (US_MR) Start frame delimiter is one bit.  */
#define US_MR_ONEBIT_0                   (US_MR_ONEBIT_0_Val << US_MR_ONEBIT_Pos)   /* (US_MR) Start frame delimiter is COMMAND or DATA SYNC. Position */
#define US_MR_ONEBIT_1                   (US_MR_ONEBIT_1_Val << US_MR_ONEBIT_Pos)   /* (US_MR) Start frame delimiter is one bit. Position */
#define US_MR_Msk                        _UINT32_(0xF7FFFFFF)                                 /* (US_MR) Register Mask  */

#define US_MR_MODE_Pos                   _UINT32_(17)                                         /* (US_MR Position) 9-bit Character Length */
#define US_MR_MODE_Msk                   (_UINT32_(0x1) << US_MR_MODE_Pos)               /* (US_MR Mask) MODE */
#define US_MR_MODE(value)                (US_MR_MODE_Msk & (_UINT32_(value) << US_MR_MODE_Pos)) 

/* -------- US_IER : (FLEXCOM Offset: 0x208) ( /W 32) USART Interrupt Enable Register -------- */
#define US_IER_RXRDY_Pos                 _UINT32_(0)                                          /* (US_IER) RXRDY Interrupt Enable Position */
#define US_IER_RXRDY_Msk                 (_UINT32_(0x1) << US_IER_RXRDY_Pos)             /* (US_IER) RXRDY Interrupt Enable Mask */
#define US_IER_RXRDY                     (US_IER_RXRDY_Msk)
#define US_IER_TXRDY_Pos                 _UINT32_(1)                                          /* (US_IER) TXRDY Interrupt Enable Position */
#define US_IER_TXRDY_Msk                 (_UINT32_(0x1) << US_IER_TXRDY_Pos)             /* (US_IER) TXRDY Interrupt Enable Mask */
#define US_IER_TXRDY                     (US_IER_TXRDY_Msk)
#define US_IER_RXBRK_Pos                 _UINT32_(2)                                          /* (US_IER) Receiver Break Interrupt Enable Position */
#define US_IER_RXBRK_Msk                 (_UINT32_(0x1) << US_IER_RXBRK_Pos)             /* (US_IER) Receiver Break Interrupt Enable Mask */
#define US_IER_RXBRK(value)              (US_IER_RXBRK_Msk & (_UINT32_(value) << US_IER_RXBRK_Pos)) /* Assignment of value for RXBRK in the US_IER register */
#define US_IER_OVRE_Pos                  _UINT32_(5)                                          /* (US_IER) Overrun Error Interrupt Enable Position */
#define US_IER_OVRE_Msk                  (_UINT32_(0x1) << US_IER_OVRE_Pos)              /* (US_IER) Overrun Error Interrupt Enable Mask */
#define US_IER_OVRE                      (US_IER_OVRE_Msk)
#define US_IER_FRAME_Pos                 _UINT32_(6)                                          /* (US_IER) Framing Error Interrupt Enable Position */
#define US_IER_FRAME_Msk                 (_UINT32_(0x1) << US_IER_FRAME_Pos)             /* (US_IER) Framing Error Interrupt Enable Mask */
#define US_IER_FRAME                     (US_IER_FRAME_Msk)
#define US_IER_PARE_Pos                  _UINT32_(7)                                          /* (US_IER) Parity Error Interrupt Enable Position */
#define US_IER_PARE_Msk                  (_UINT32_(0x1) << US_IER_PARE_Pos)              /* (US_IER) Parity Error Interrupt Enable Mask */
#define US_IER_PARE                      (US_IER_PARE_Msk)
#define US_IER_TIMEOUT_Pos               _UINT32_(8)                                          /* (US_IER) Timeout Interrupt Enable Position */
#define US_IER_TIMEOUT_Msk               (_UINT32_(0x1) << US_IER_TIMEOUT_Pos)           /* (US_IER) Timeout Interrupt Enable Mask */
#define US_IER_TIMEOUT(value)            (US_IER_TIMEOUT_Msk & (_UINT32_(value) << US_IER_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the US_IER register */
#define US_IER_TXEMPTY_Pos               _UINT32_(9)                                          /* (US_IER) TXEMPTY Interrupt Enable Position */
#define US_IER_TXEMPTY_Msk               (_UINT32_(0x1) << US_IER_TXEMPTY_Pos)           /* (US_IER) TXEMPTY Interrupt Enable Mask */
#define US_IER_TXEMPTY(value)            (US_IER_TXEMPTY_Msk & (_UINT32_(value) << US_IER_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the US_IER register */
#define US_IER_ITER_Pos                  _UINT32_(10)                                         /* (US_IER) Max number of Repetitions Reached Interrupt Enable Position */
#define US_IER_ITER_Msk                  (_UINT32_(0x1) << US_IER_ITER_Pos)              /* (US_IER) Max number of Repetitions Reached Interrupt Enable Mask */
#define US_IER_ITER(value)               (US_IER_ITER_Msk & (_UINT32_(value) << US_IER_ITER_Pos)) /* Assignment of value for ITER in the US_IER register */
#define US_IER_NACK_Pos                  _UINT32_(13)                                         /* (US_IER) Non Acknowledge Interrupt Enable Position */
#define US_IER_NACK_Msk                  (_UINT32_(0x1) << US_IER_NACK_Pos)              /* (US_IER) Non Acknowledge Interrupt Enable Mask */
#define US_IER_NACK(value)               (US_IER_NACK_Msk & (_UINT32_(value) << US_IER_NACK_Pos)) /* Assignment of value for NACK in the US_IER register */
#define US_IER_CTSIC_Pos                 _UINT32_(19)                                         /* (US_IER) Clear to Send Input Change Interrupt Enable Position */
#define US_IER_CTSIC_Msk                 (_UINT32_(0x1) << US_IER_CTSIC_Pos)             /* (US_IER) Clear to Send Input Change Interrupt Enable Mask */
#define US_IER_CTSIC(value)              (US_IER_CTSIC_Msk & (_UINT32_(value) << US_IER_CTSIC_Pos)) /* Assignment of value for CTSIC in the US_IER register */
#define US_IER_CMP_Pos                   _UINT32_(22)                                         /* (US_IER) Comparison Interrupt Enable Position */
#define US_IER_CMP_Msk                   (_UINT32_(0x1) << US_IER_CMP_Pos)               /* (US_IER) Comparison Interrupt Enable Mask */
#define US_IER_CMP(value)                (US_IER_CMP_Msk & (_UINT32_(value) << US_IER_CMP_Pos)) /* Assignment of value for CMP in the US_IER register */
#define US_IER_MANE_Pos                  _UINT32_(24)                                         /* (US_IER) Manchester Error Interrupt Enable Position */
#define US_IER_MANE_Msk                  (_UINT32_(0x1) << US_IER_MANE_Pos)              /* (US_IER) Manchester Error Interrupt Enable Mask */
#define US_IER_MANE(value)               (US_IER_MANE_Msk & (_UINT32_(value) << US_IER_MANE_Pos)) /* Assignment of value for MANE in the US_IER register */
#define US_IER_Msk                       _UINT32_(0x014827E7)                                 /* (US_IER) Register Mask  */

/* LIN mode */
#define US_IER_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (US_IER) RXRDY Interrupt Enable Position */
#define US_IER_LIN_RXRDY_Msk             (_UINT32_(0x1) << US_IER_LIN_RXRDY_Pos)         /* (US_IER) RXRDY Interrupt Enable Mask */
#define US_IER_LIN_RXRDY(value)          (US_IER_LIN_RXRDY_Msk & (_UINT32_(value) << US_IER_LIN_RXRDY_Pos))
#define US_IER_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (US_IER) TXRDY Interrupt Enable Position */
#define US_IER_LIN_TXRDY_Msk             (_UINT32_(0x1) << US_IER_LIN_TXRDY_Pos)         /* (US_IER) TXRDY Interrupt Enable Mask */
#define US_IER_LIN_TXRDY(value)          (US_IER_LIN_TXRDY_Msk & (_UINT32_(value) << US_IER_LIN_TXRDY_Pos))
#define US_IER_LIN_OVRE_Pos              _UINT32_(5)                                          /* (US_IER) Overrun Error Interrupt Enable Position */
#define US_IER_LIN_OVRE_Msk              (_UINT32_(0x1) << US_IER_LIN_OVRE_Pos)          /* (US_IER) Overrun Error Interrupt Enable Mask */
#define US_IER_LIN_OVRE(value)           (US_IER_LIN_OVRE_Msk & (_UINT32_(value) << US_IER_LIN_OVRE_Pos))
#define US_IER_LIN_FRAME_Pos             _UINT32_(6)                                          /* (US_IER) Framing Error Interrupt Enable Position */
#define US_IER_LIN_FRAME_Msk             (_UINT32_(0x1) << US_IER_LIN_FRAME_Pos)         /* (US_IER) Framing Error Interrupt Enable Mask */
#define US_IER_LIN_FRAME(value)          (US_IER_LIN_FRAME_Msk & (_UINT32_(value) << US_IER_LIN_FRAME_Pos))
#define US_IER_LIN_PARE_Pos              _UINT32_(7)                                          /* (US_IER) Parity Error Interrupt Enable Position */
#define US_IER_LIN_PARE_Msk              (_UINT32_(0x1) << US_IER_LIN_PARE_Pos)          /* (US_IER) Parity Error Interrupt Enable Mask */
#define US_IER_LIN_PARE(value)           (US_IER_LIN_PARE_Msk & (_UINT32_(value) << US_IER_LIN_PARE_Pos))
#define US_IER_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (US_IER) Timeout Interrupt Enable Position */
#define US_IER_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << US_IER_LIN_TIMEOUT_Pos)       /* (US_IER) Timeout Interrupt Enable Mask */
#define US_IER_LIN_TIMEOUT(value)        (US_IER_LIN_TIMEOUT_Msk & (_UINT32_(value) << US_IER_LIN_TIMEOUT_Pos))
#define US_IER_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (US_IER) TXEMPTY Interrupt Enable Position */
#define US_IER_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << US_IER_LIN_TXEMPTY_Pos)       /* (US_IER) TXEMPTY Interrupt Enable Mask */
#define US_IER_LIN_TXEMPTY(value)        (US_IER_LIN_TXEMPTY_Msk & (_UINT32_(value) << US_IER_LIN_TXEMPTY_Pos))
#define US_IER_LIN_LINBK_Pos             _UINT32_(13)                                         /* (US_IER) LIN Break Sent or LIN Break Received Interrupt Enable Position */
#define US_IER_LIN_LINBK_Msk             (_UINT32_(0x1) << US_IER_LIN_LINBK_Pos)         /* (US_IER) LIN Break Sent or LIN Break Received Interrupt Enable Mask */
#define US_IER_LIN_LINBK(value)          (US_IER_LIN_LINBK_Msk & (_UINT32_(value) << US_IER_LIN_LINBK_Pos))
#define US_IER_LIN_LINID_Pos             _UINT32_(14)                                         /* (US_IER) LIN Identifier Sent or LIN Identifier Received Interrupt Enable Position */
#define US_IER_LIN_LINID_Msk             (_UINT32_(0x1) << US_IER_LIN_LINID_Pos)         /* (US_IER) LIN Identifier Sent or LIN Identifier Received Interrupt Enable Mask */
#define US_IER_LIN_LINID(value)          (US_IER_LIN_LINID_Msk & (_UINT32_(value) << US_IER_LIN_LINID_Pos))
#define US_IER_LIN_LINTC_Pos             _UINT32_(15)                                         /* (US_IER) LIN Transfer Completed Interrupt Enable Position */
#define US_IER_LIN_LINTC_Msk             (_UINT32_(0x1) << US_IER_LIN_LINTC_Pos)         /* (US_IER) LIN Transfer Completed Interrupt Enable Mask */
#define US_IER_LIN_LINTC(value)          (US_IER_LIN_LINTC_Msk & (_UINT32_(value) << US_IER_LIN_LINTC_Pos))
#define US_IER_LIN_SECE_Pos              _UINT32_(21)                                         /* (US_IER) Security/Safety Error Interrupt Enable Position */
#define US_IER_LIN_SECE_Msk              (_UINT32_(0x1) << US_IER_LIN_SECE_Pos)          /* (US_IER) Security/Safety Error Interrupt Enable Mask */
#define US_IER_LIN_SECE(value)           (US_IER_LIN_SECE_Msk & (_UINT32_(value) << US_IER_LIN_SECE_Pos))
#define US_IER_LIN_LINBE_Pos             _UINT32_(25)                                         /* (US_IER) LIN Bus Error Interrupt Enable Position */
#define US_IER_LIN_LINBE_Msk             (_UINT32_(0x1) << US_IER_LIN_LINBE_Pos)         /* (US_IER) LIN Bus Error Interrupt Enable Mask */
#define US_IER_LIN_LINBE(value)          (US_IER_LIN_LINBE_Msk & (_UINT32_(value) << US_IER_LIN_LINBE_Pos))
#define US_IER_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (US_IER) LIN Inconsistent Synch Field Error Interrupt Enable Position */
#define US_IER_LIN_LINISFE_Msk           (_UINT32_(0x1) << US_IER_LIN_LINISFE_Pos)       /* (US_IER) LIN Inconsistent Synch Field Error Interrupt Enable Mask */
#define US_IER_LIN_LINISFE(value)        (US_IER_LIN_LINISFE_Msk & (_UINT32_(value) << US_IER_LIN_LINISFE_Pos))
#define US_IER_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (US_IER) LIN Identifier Parity Interrupt Enable Position */
#define US_IER_LIN_LINIPE_Msk            (_UINT32_(0x1) << US_IER_LIN_LINIPE_Pos)        /* (US_IER) LIN Identifier Parity Interrupt Enable Mask */
#define US_IER_LIN_LINIPE(value)         (US_IER_LIN_LINIPE_Msk & (_UINT32_(value) << US_IER_LIN_LINIPE_Pos))
#define US_IER_LIN_LINCE_Pos             _UINT32_(28)                                         /* (US_IER) LIN Checksum Error Interrupt Enable Position */
#define US_IER_LIN_LINCE_Msk             (_UINT32_(0x1) << US_IER_LIN_LINCE_Pos)         /* (US_IER) LIN Checksum Error Interrupt Enable Mask */
#define US_IER_LIN_LINCE(value)          (US_IER_LIN_LINCE_Msk & (_UINT32_(value) << US_IER_LIN_LINCE_Pos))
#define US_IER_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (US_IER) LIN Client Not Responding Error Interrupt Enable Position */
#define US_IER_LIN_LINSNRE_Msk           (_UINT32_(0x1) << US_IER_LIN_LINSNRE_Pos)       /* (US_IER) LIN Client Not Responding Error Interrupt Enable Mask */
#define US_IER_LIN_LINSNRE(value)        (US_IER_LIN_LINSNRE_Msk & (_UINT32_(value) << US_IER_LIN_LINSNRE_Pos))
#define US_IER_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (US_IER) LIN Synch Tolerance Error Interrupt Enable Position */
#define US_IER_LIN_LINSTE_Msk            (_UINT32_(0x1) << US_IER_LIN_LINSTE_Pos)        /* (US_IER) LIN Synch Tolerance Error Interrupt Enable Mask */
#define US_IER_LIN_LINSTE(value)         (US_IER_LIN_LINSTE_Msk & (_UINT32_(value) << US_IER_LIN_LINSTE_Pos))
#define US_IER_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (US_IER) LIN Header Timeout Error Interrupt Enable Position */
#define US_IER_LIN_LINHTE_Msk            (_UINT32_(0x1) << US_IER_LIN_LINHTE_Pos)        /* (US_IER) LIN Header Timeout Error Interrupt Enable Mask */
#define US_IER_LIN_LINHTE(value)         (US_IER_LIN_LINHTE_Msk & (_UINT32_(value) << US_IER_LIN_LINHTE_Pos))
#define US_IER_LIN_Msk                   _UINT32_(0xFE20E3E3)                                 /* (US_IER_LIN) Register Mask  */


/* -------- US_IDR : (FLEXCOM Offset: 0x20C) ( /W 32) USART Interrupt Disable Register -------- */
#define US_IDR_RXRDY_Pos                 _UINT32_(0)                                          /* (US_IDR) RXRDY Interrupt Disable Position */
#define US_IDR_RXRDY_Msk                 (_UINT32_(0x1) << US_IDR_RXRDY_Pos)             /* (US_IDR) RXRDY Interrupt Disable Mask */
#define US_IDR_RXRDY                     (US_IDR_RXRDY_Msk)
#define US_IDR_TXRDY_Pos                 _UINT32_(1)                                          /* (US_IDR) TXRDY Interrupt Disable Position */
#define US_IDR_TXRDY_Msk                 (_UINT32_(0x1) << US_IDR_TXRDY_Pos)             /* (US_IDR) TXRDY Interrupt Disable Mask */
#define US_IDR_TXRDY                     (US_IDR_TXRDY_Msk)
#define US_IDR_RXBRK_Pos                 _UINT32_(2)                                          /* (US_IDR) Receiver Break Interrupt Disable Position */
#define US_IDR_RXBRK_Msk                 (_UINT32_(0x1) << US_IDR_RXBRK_Pos)             /* (US_IDR) Receiver Break Interrupt Disable Mask */
#define US_IDR_RXBRK(value)              (US_IDR_RXBRK_Msk & (_UINT32_(value) << US_IDR_RXBRK_Pos)) /* Assignment of value for RXBRK in the US_IDR register */
#define US_IDR_OVRE_Pos                  _UINT32_(5)                                          /* (US_IDR) Overrun Error Interrupt Disable Position */
#define US_IDR_OVRE_Msk                  (_UINT32_(0x1) << US_IDR_OVRE_Pos)              /* (US_IDR) Overrun Error Interrupt Disable Mask */
#define US_IDR_OVRE                      (US_IDR_OVRE_Msk)
#define US_IDR_FRAME_Pos                 _UINT32_(6)                                          /* (US_IDR) Framing Error Interrupt Disable Position */
#define US_IDR_FRAME_Msk                 (_UINT32_(0x1) << US_IDR_FRAME_Pos)             /* (US_IDR) Framing Error Interrupt Disable Mask */
#define US_IDR_FRAME                     (US_IDR_FRAME_Msk)
#define US_IDR_PARE_Pos                  _UINT32_(7)                                          /* (US_IDR) Parity Error Interrupt Disable Position */
#define US_IDR_PARE_Msk                  (_UINT32_(0x1) << US_IDR_PARE_Pos)              /* (US_IDR) Parity Error Interrupt Disable Mask */
#define US_IDR_PARE                      (US_IDR_PARE_Msk)
#define US_IDR_TIMEOUT_Pos               _UINT32_(8)                                          /* (US_IDR) Timeout Interrupt Disable Position */
#define US_IDR_TIMEOUT_Msk               (_UINT32_(0x1) << US_IDR_TIMEOUT_Pos)           /* (US_IDR) Timeout Interrupt Disable Mask */
#define US_IDR_TIMEOUT(value)            (US_IDR_TIMEOUT_Msk & (_UINT32_(value) << US_IDR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the US_IDR register */
#define US_IDR_TXEMPTY_Pos               _UINT32_(9)                                          /* (US_IDR) TXEMPTY Interrupt Disable Position */
#define US_IDR_TXEMPTY_Msk               (_UINT32_(0x1) << US_IDR_TXEMPTY_Pos)           /* (US_IDR) TXEMPTY Interrupt Disable Mask */
#define US_IDR_TXEMPTY(value)            (US_IDR_TXEMPTY_Msk & (_UINT32_(value) << US_IDR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the US_IDR register */
#define US_IDR_ITER_Pos                  _UINT32_(10)                                         /* (US_IDR) Max Number of Repetitions Reached Interrupt Disable Position */
#define US_IDR_ITER_Msk                  (_UINT32_(0x1) << US_IDR_ITER_Pos)              /* (US_IDR) Max Number of Repetitions Reached Interrupt Disable Mask */
#define US_IDR_ITER(value)               (US_IDR_ITER_Msk & (_UINT32_(value) << US_IDR_ITER_Pos)) /* Assignment of value for ITER in the US_IDR register */
#define US_IDR_NACK_Pos                  _UINT32_(13)                                         /* (US_IDR) Non Acknowledge Interrupt Disable Position */
#define US_IDR_NACK_Msk                  (_UINT32_(0x1) << US_IDR_NACK_Pos)              /* (US_IDR) Non Acknowledge Interrupt Disable Mask */
#define US_IDR_NACK(value)               (US_IDR_NACK_Msk & (_UINT32_(value) << US_IDR_NACK_Pos)) /* Assignment of value for NACK in the US_IDR register */
#define US_IDR_CTSIC_Pos                 _UINT32_(19)                                         /* (US_IDR) Clear to Send Input Change Interrupt Disable Position */
#define US_IDR_CTSIC_Msk                 (_UINT32_(0x1) << US_IDR_CTSIC_Pos)             /* (US_IDR) Clear to Send Input Change Interrupt Disable Mask */
#define US_IDR_CTSIC(value)              (US_IDR_CTSIC_Msk & (_UINT32_(value) << US_IDR_CTSIC_Pos)) /* Assignment of value for CTSIC in the US_IDR register */
#define US_IDR_SECE_Pos                  _UINT32_(21)                                         /* (US_IDR) Security/Safety Error Interrupt Disable Position */
#define US_IDR_SECE_Msk                  (_UINT32_(0x1) << US_IDR_SECE_Pos)              /* (US_IDR) Security/Safety Error Interrupt Disable Mask */
#define US_IDR_SECE(value)               (US_IDR_SECE_Msk & (_UINT32_(value) << US_IDR_SECE_Pos)) /* Assignment of value for SECE in the US_IDR register */
#define US_IDR_CMP_Pos                   _UINT32_(22)                                         /* (US_IDR) Comparison Interrupt Disable Position */
#define US_IDR_CMP_Msk                   (_UINT32_(0x1) << US_IDR_CMP_Pos)               /* (US_IDR) Comparison Interrupt Disable Mask */
#define US_IDR_CMP(value)                (US_IDR_CMP_Msk & (_UINT32_(value) << US_IDR_CMP_Pos)) /* Assignment of value for CMP in the US_IDR register */
#define US_IDR_MANE_Pos                  _UINT32_(24)                                         /* (US_IDR) Manchester Error Interrupt Disable Position */
#define US_IDR_MANE_Msk                  (_UINT32_(0x1) << US_IDR_MANE_Pos)              /* (US_IDR) Manchester Error Interrupt Disable Mask */
#define US_IDR_MANE(value)               (US_IDR_MANE_Msk & (_UINT32_(value) << US_IDR_MANE_Pos)) /* Assignment of value for MANE in the US_IDR register */
#define US_IDR_Msk                       _UINT32_(0x016827E7)                                 /* (US_IDR) Register Mask  */

/* LIN mode */
#define US_IDR_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (US_IDR) RXRDY Interrupt Disable Position */
#define US_IDR_LIN_RXRDY_Msk             (_UINT32_(0x1) << US_IDR_LIN_RXRDY_Pos)         /* (US_IDR) RXRDY Interrupt Disable Mask */
#define US_IDR_LIN_RXRDY(value)          (US_IDR_LIN_RXRDY_Msk & (_UINT32_(value) << US_IDR_LIN_RXRDY_Pos))
#define US_IDR_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (US_IDR) TXRDY Interrupt Disable Position */
#define US_IDR_LIN_TXRDY_Msk             (_UINT32_(0x1) << US_IDR_LIN_TXRDY_Pos)         /* (US_IDR) TXRDY Interrupt Disable Mask */
#define US_IDR_LIN_TXRDY(value)          (US_IDR_LIN_TXRDY_Msk & (_UINT32_(value) << US_IDR_LIN_TXRDY_Pos))
#define US_IDR_LIN_OVRE_Pos              _UINT32_(5)                                          /* (US_IDR) Overrun Error Interrupt Disable Position */
#define US_IDR_LIN_OVRE_Msk              (_UINT32_(0x1) << US_IDR_LIN_OVRE_Pos)          /* (US_IDR) Overrun Error Interrupt Disable Mask */
#define US_IDR_LIN_OVRE(value)           (US_IDR_LIN_OVRE_Msk & (_UINT32_(value) << US_IDR_LIN_OVRE_Pos))
#define US_IDR_LIN_FRAME_Pos             _UINT32_(6)                                          /* (US_IDR) Framing Error Interrupt Disable Position */
#define US_IDR_LIN_FRAME_Msk             (_UINT32_(0x1) << US_IDR_LIN_FRAME_Pos)         /* (US_IDR) Framing Error Interrupt Disable Mask */
#define US_IDR_LIN_FRAME(value)          (US_IDR_LIN_FRAME_Msk & (_UINT32_(value) << US_IDR_LIN_FRAME_Pos))
#define US_IDR_LIN_PARE_Pos              _UINT32_(7)                                          /* (US_IDR) Parity Error Interrupt Disable Position */
#define US_IDR_LIN_PARE_Msk              (_UINT32_(0x1) << US_IDR_LIN_PARE_Pos)          /* (US_IDR) Parity Error Interrupt Disable Mask */
#define US_IDR_LIN_PARE(value)           (US_IDR_LIN_PARE_Msk & (_UINT32_(value) << US_IDR_LIN_PARE_Pos))
#define US_IDR_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (US_IDR) Timeout Interrupt Disable Position */
#define US_IDR_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << US_IDR_LIN_TIMEOUT_Pos)       /* (US_IDR) Timeout Interrupt Disable Mask */
#define US_IDR_LIN_TIMEOUT(value)        (US_IDR_LIN_TIMEOUT_Msk & (_UINT32_(value) << US_IDR_LIN_TIMEOUT_Pos))
#define US_IDR_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (US_IDR) TXEMPTY Interrupt Disable Position */
#define US_IDR_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << US_IDR_LIN_TXEMPTY_Pos)       /* (US_IDR) TXEMPTY Interrupt Disable Mask */
#define US_IDR_LIN_TXEMPTY(value)        (US_IDR_LIN_TXEMPTY_Msk & (_UINT32_(value) << US_IDR_LIN_TXEMPTY_Pos))
#define US_IDR_LIN_LINBK_Pos             _UINT32_(13)                                         /* (US_IDR) LIN Break Sent or LIN Break Received Interrupt Disable Position */
#define US_IDR_LIN_LINBK_Msk             (_UINT32_(0x1) << US_IDR_LIN_LINBK_Pos)         /* (US_IDR) LIN Break Sent or LIN Break Received Interrupt Disable Mask */
#define US_IDR_LIN_LINBK(value)          (US_IDR_LIN_LINBK_Msk & (_UINT32_(value) << US_IDR_LIN_LINBK_Pos))
#define US_IDR_LIN_LINID_Pos             _UINT32_(14)                                         /* (US_IDR) LIN Identifier Sent or LIN Identifier Received Interrupt Disable Position */
#define US_IDR_LIN_LINID_Msk             (_UINT32_(0x1) << US_IDR_LIN_LINID_Pos)         /* (US_IDR) LIN Identifier Sent or LIN Identifier Received Interrupt Disable Mask */
#define US_IDR_LIN_LINID(value)          (US_IDR_LIN_LINID_Msk & (_UINT32_(value) << US_IDR_LIN_LINID_Pos))
#define US_IDR_LIN_LINTC_Pos             _UINT32_(15)                                         /* (US_IDR) LIN Transfer Completed Interrupt Disable Position */
#define US_IDR_LIN_LINTC_Msk             (_UINT32_(0x1) << US_IDR_LIN_LINTC_Pos)         /* (US_IDR) LIN Transfer Completed Interrupt Disable Mask */
#define US_IDR_LIN_LINTC(value)          (US_IDR_LIN_LINTC_Msk & (_UINT32_(value) << US_IDR_LIN_LINTC_Pos))
#define US_IDR_LIN_SECE_Pos              _UINT32_(21)                                         /* (US_IDR) Security/Safety Error Interrupt Disable Position */
#define US_IDR_LIN_SECE_Msk              (_UINT32_(0x1) << US_IDR_LIN_SECE_Pos)          /* (US_IDR) Security/Safety Error Interrupt Disable Mask */
#define US_IDR_LIN_SECE(value)           (US_IDR_LIN_SECE_Msk & (_UINT32_(value) << US_IDR_LIN_SECE_Pos))
#define US_IDR_LIN_LINBE_Pos             _UINT32_(25)                                         /* (US_IDR) LIN Bus Error Interrupt Disable Position */
#define US_IDR_LIN_LINBE_Msk             (_UINT32_(0x1) << US_IDR_LIN_LINBE_Pos)         /* (US_IDR) LIN Bus Error Interrupt Disable Mask */
#define US_IDR_LIN_LINBE(value)          (US_IDR_LIN_LINBE_Msk & (_UINT32_(value) << US_IDR_LIN_LINBE_Pos))
#define US_IDR_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (US_IDR) LIN Inconsistent Synch Field Error Interrupt Disable Position */
#define US_IDR_LIN_LINISFE_Msk           (_UINT32_(0x1) << US_IDR_LIN_LINISFE_Pos)       /* (US_IDR) LIN Inconsistent Synch Field Error Interrupt Disable Mask */
#define US_IDR_LIN_LINISFE(value)        (US_IDR_LIN_LINISFE_Msk & (_UINT32_(value) << US_IDR_LIN_LINISFE_Pos))
#define US_IDR_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (US_IDR) LIN Identifier Parity Interrupt Disable Position */
#define US_IDR_LIN_LINIPE_Msk            (_UINT32_(0x1) << US_IDR_LIN_LINIPE_Pos)        /* (US_IDR) LIN Identifier Parity Interrupt Disable Mask */
#define US_IDR_LIN_LINIPE(value)         (US_IDR_LIN_LINIPE_Msk & (_UINT32_(value) << US_IDR_LIN_LINIPE_Pos))
#define US_IDR_LIN_LINCE_Pos             _UINT32_(28)                                         /* (US_IDR) LIN Checksum Error Interrupt Disable Position */
#define US_IDR_LIN_LINCE_Msk             (_UINT32_(0x1) << US_IDR_LIN_LINCE_Pos)         /* (US_IDR) LIN Checksum Error Interrupt Disable Mask */
#define US_IDR_LIN_LINCE(value)          (US_IDR_LIN_LINCE_Msk & (_UINT32_(value) << US_IDR_LIN_LINCE_Pos))
#define US_IDR_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (US_IDR) LIN Client Not Responding Error Interrupt Disable Position */
#define US_IDR_LIN_LINSNRE_Msk           (_UINT32_(0x1) << US_IDR_LIN_LINSNRE_Pos)       /* (US_IDR) LIN Client Not Responding Error Interrupt Disable Mask */
#define US_IDR_LIN_LINSNRE(value)        (US_IDR_LIN_LINSNRE_Msk & (_UINT32_(value) << US_IDR_LIN_LINSNRE_Pos))
#define US_IDR_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (US_IDR) LIN Synch Tolerance Error Interrupt Disable Position */
#define US_IDR_LIN_LINSTE_Msk            (_UINT32_(0x1) << US_IDR_LIN_LINSTE_Pos)        /* (US_IDR) LIN Synch Tolerance Error Interrupt Disable Mask */
#define US_IDR_LIN_LINSTE(value)         (US_IDR_LIN_LINSTE_Msk & (_UINT32_(value) << US_IDR_LIN_LINSTE_Pos))
#define US_IDR_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (US_IDR) LIN Header Timeout Error Interrupt Disable Position */
#define US_IDR_LIN_LINHTE_Msk            (_UINT32_(0x1) << US_IDR_LIN_LINHTE_Pos)        /* (US_IDR) LIN Header Timeout Error Interrupt Disable Mask */
#define US_IDR_LIN_LINHTE(value)         (US_IDR_LIN_LINHTE_Msk & (_UINT32_(value) << US_IDR_LIN_LINHTE_Pos))
#define US_IDR_LIN_Msk                   _UINT32_(0xFE20E3E3)                                 /* (US_IDR_LIN) Register Mask  */


/* -------- US_IMR : (FLEXCOM Offset: 0x210) ( R/ 32) USART Interrupt Mask Register -------- */
#define US_IMR_RESETVALUE                _UINT32_(0x00)                                       /*  (US_IMR) USART Interrupt Mask Register  Reset Value */

#define US_IMR_RXRDY_Pos                 _UINT32_(0)                                          /* (US_IMR) RXRDY Interrupt Mask Position */
#define US_IMR_RXRDY_Msk                 (_UINT32_(0x1) << US_IMR_RXRDY_Pos)             /* (US_IMR) RXRDY Interrupt Mask Mask */
#define US_IMR_RXRDY                     (US_IMR_RXRDY_Msk)
#define US_IMR_TXRDY_Pos                 _UINT32_(1)                                          /* (US_IMR) TXRDY Interrupt Mask Position */
#define US_IMR_TXRDY_Msk                 (_UINT32_(0x1) << US_IMR_TXRDY_Pos)             /* (US_IMR) TXRDY Interrupt Mask Mask */
#define US_IMR_TXRDY                     (US_IMR_TXRDY_Msk)
#define US_IMR_RXBRK_Pos                 _UINT32_(2)                                          /* (US_IMR) Receiver Break Interrupt Mask Position */
#define US_IMR_RXBRK_Msk                 (_UINT32_(0x1) << US_IMR_RXBRK_Pos)             /* (US_IMR) Receiver Break Interrupt Mask Mask */
#define US_IMR_RXBRK(value)              (US_IMR_RXBRK_Msk & (_UINT32_(value) << US_IMR_RXBRK_Pos)) /* Assignment of value for RXBRK in the US_IMR register */
#define US_IMR_OVRE_Pos                  _UINT32_(5)                                          /* (US_IMR) Overrun Error Interrupt Mask Position */
#define US_IMR_OVRE_Msk                  (_UINT32_(0x1) << US_IMR_OVRE_Pos)              /* (US_IMR) Overrun Error Interrupt Mask Mask */
#define US_IMR_OVRE(value)               (US_IMR_OVRE_Msk & (_UINT32_(value) << US_IMR_OVRE_Pos)) /* Assignment of value for OVRE in the US_IMR register */
#define US_IMR_FRAME_Pos                 _UINT32_(6)                                          /* (US_IMR) Framing Error Interrupt Mask Position */
#define US_IMR_FRAME_Msk                 (_UINT32_(0x1) << US_IMR_FRAME_Pos)             /* (US_IMR) Framing Error Interrupt Mask Mask */
#define US_IMR_FRAME(value)              (US_IMR_FRAME_Msk & (_UINT32_(value) << US_IMR_FRAME_Pos)) /* Assignment of value for FRAME in the US_IMR register */
#define US_IMR_PARE_Pos                  _UINT32_(7)                                          /* (US_IMR) Parity Error Interrupt Mask Position */
#define US_IMR_PARE_Msk                  (_UINT32_(0x1) << US_IMR_PARE_Pos)              /* (US_IMR) Parity Error Interrupt Mask Mask */
#define US_IMR_PARE(value)               (US_IMR_PARE_Msk & (_UINT32_(value) << US_IMR_PARE_Pos)) /* Assignment of value for PARE in the US_IMR register */
#define US_IMR_TIMEOUT_Pos               _UINT32_(8)                                          /* (US_IMR) Timeout Interrupt Mask Position */
#define US_IMR_TIMEOUT_Msk               (_UINT32_(0x1) << US_IMR_TIMEOUT_Pos)           /* (US_IMR) Timeout Interrupt Mask Mask */
#define US_IMR_TIMEOUT(value)            (US_IMR_TIMEOUT_Msk & (_UINT32_(value) << US_IMR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the US_IMR register */
#define US_IMR_TXEMPTY_Pos               _UINT32_(9)                                          /* (US_IMR) TXEMPTY Interrupt Mask Position */
#define US_IMR_TXEMPTY_Msk               (_UINT32_(0x1) << US_IMR_TXEMPTY_Pos)           /* (US_IMR) TXEMPTY Interrupt Mask Mask */
#define US_IMR_TXEMPTY(value)            (US_IMR_TXEMPTY_Msk & (_UINT32_(value) << US_IMR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the US_IMR register */
#define US_IMR_ITER_Pos                  _UINT32_(10)                                         /* (US_IMR) Max Number of Repetitions Reached Interrupt Mask Position */
#define US_IMR_ITER_Msk                  (_UINT32_(0x1) << US_IMR_ITER_Pos)              /* (US_IMR) Max Number of Repetitions Reached Interrupt Mask Mask */
#define US_IMR_ITER(value)               (US_IMR_ITER_Msk & (_UINT32_(value) << US_IMR_ITER_Pos)) /* Assignment of value for ITER in the US_IMR register */
#define US_IMR_NACK_Pos                  _UINT32_(13)                                         /* (US_IMR) Non Acknowledge Interrupt Mask Position */
#define US_IMR_NACK_Msk                  (_UINT32_(0x1) << US_IMR_NACK_Pos)              /* (US_IMR) Non Acknowledge Interrupt Mask Mask */
#define US_IMR_NACK(value)               (US_IMR_NACK_Msk & (_UINT32_(value) << US_IMR_NACK_Pos)) /* Assignment of value for NACK in the US_IMR register */
#define US_IMR_CTSIC_Pos                 _UINT32_(19)                                         /* (US_IMR) Clear to Send Input Change Interrupt Mask Position */
#define US_IMR_CTSIC_Msk                 (_UINT32_(0x1) << US_IMR_CTSIC_Pos)             /* (US_IMR) Clear to Send Input Change Interrupt Mask Mask */
#define US_IMR_CTSIC(value)              (US_IMR_CTSIC_Msk & (_UINT32_(value) << US_IMR_CTSIC_Pos)) /* Assignment of value for CTSIC in the US_IMR register */
#define US_IMR_SECE_Pos                  _UINT32_(21)                                         /* (US_IMR) Security/Safety Error Interrupt Mask Position */
#define US_IMR_SECE_Msk                  (_UINT32_(0x1) << US_IMR_SECE_Pos)              /* (US_IMR) Security/Safety Error Interrupt Mask Mask */
#define US_IMR_SECE(value)               (US_IMR_SECE_Msk & (_UINT32_(value) << US_IMR_SECE_Pos)) /* Assignment of value for SECE in the US_IMR register */
#define US_IMR_CMP_Pos                   _UINT32_(22)                                         /* (US_IMR) Comparison Interrupt Mask Position */
#define US_IMR_CMP_Msk                   (_UINT32_(0x1) << US_IMR_CMP_Pos)               /* (US_IMR) Comparison Interrupt Mask Mask */
#define US_IMR_CMP(value)                (US_IMR_CMP_Msk & (_UINT32_(value) << US_IMR_CMP_Pos)) /* Assignment of value for CMP in the US_IMR register */
#define US_IMR_MANE_Pos                  _UINT32_(24)                                         /* (US_IMR) Manchester Error Interrupt Mask Position */
#define US_IMR_MANE_Msk                  (_UINT32_(0x1) << US_IMR_MANE_Pos)              /* (US_IMR) Manchester Error Interrupt Mask Mask */
#define US_IMR_MANE(value)               (US_IMR_MANE_Msk & (_UINT32_(value) << US_IMR_MANE_Pos)) /* Assignment of value for MANE in the US_IMR register */
#define US_IMR_Msk                       _UINT32_(0x016827E7)                                 /* (US_IMR) Register Mask  */

/* LIN mode */
#define US_IMR_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (US_IMR) RXRDY Interrupt Mask Position */
#define US_IMR_LIN_RXRDY_Msk             (_UINT32_(0x1) << US_IMR_LIN_RXRDY_Pos)         /* (US_IMR) RXRDY Interrupt Mask Mask */
#define US_IMR_LIN_RXRDY(value)          (US_IMR_LIN_RXRDY_Msk & (_UINT32_(value) << US_IMR_LIN_RXRDY_Pos))
#define US_IMR_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (US_IMR) TXRDY Interrupt Mask Position */
#define US_IMR_LIN_TXRDY_Msk             (_UINT32_(0x1) << US_IMR_LIN_TXRDY_Pos)         /* (US_IMR) TXRDY Interrupt Mask Mask */
#define US_IMR_LIN_TXRDY(value)          (US_IMR_LIN_TXRDY_Msk & (_UINT32_(value) << US_IMR_LIN_TXRDY_Pos))
#define US_IMR_LIN_OVRE_Pos              _UINT32_(5)                                          /* (US_IMR) Overrun Error Interrupt Mask Position */
#define US_IMR_LIN_OVRE_Msk              (_UINT32_(0x1) << US_IMR_LIN_OVRE_Pos)          /* (US_IMR) Overrun Error Interrupt Mask Mask */
#define US_IMR_LIN_OVRE(value)           (US_IMR_LIN_OVRE_Msk & (_UINT32_(value) << US_IMR_LIN_OVRE_Pos))
#define US_IMR_LIN_FRAME_Pos             _UINT32_(6)                                          /* (US_IMR) Framing Error Interrupt Mask Position */
#define US_IMR_LIN_FRAME_Msk             (_UINT32_(0x1) << US_IMR_LIN_FRAME_Pos)         /* (US_IMR) Framing Error Interrupt Mask Mask */
#define US_IMR_LIN_FRAME(value)          (US_IMR_LIN_FRAME_Msk & (_UINT32_(value) << US_IMR_LIN_FRAME_Pos))
#define US_IMR_LIN_PARE_Pos              _UINT32_(7)                                          /* (US_IMR) Parity Error Interrupt Mask Position */
#define US_IMR_LIN_PARE_Msk              (_UINT32_(0x1) << US_IMR_LIN_PARE_Pos)          /* (US_IMR) Parity Error Interrupt Mask Mask */
#define US_IMR_LIN_PARE(value)           (US_IMR_LIN_PARE_Msk & (_UINT32_(value) << US_IMR_LIN_PARE_Pos))
#define US_IMR_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (US_IMR) Timeout Interrupt Mask Position */
#define US_IMR_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << US_IMR_LIN_TIMEOUT_Pos)       /* (US_IMR) Timeout Interrupt Mask Mask */
#define US_IMR_LIN_TIMEOUT(value)        (US_IMR_LIN_TIMEOUT_Msk & (_UINT32_(value) << US_IMR_LIN_TIMEOUT_Pos))
#define US_IMR_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (US_IMR) TXEMPTY Interrupt Mask Position */
#define US_IMR_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << US_IMR_LIN_TXEMPTY_Pos)       /* (US_IMR) TXEMPTY Interrupt Mask Mask */
#define US_IMR_LIN_TXEMPTY(value)        (US_IMR_LIN_TXEMPTY_Msk & (_UINT32_(value) << US_IMR_LIN_TXEMPTY_Pos))
#define US_IMR_LIN_LINBK_Pos             _UINT32_(13)                                         /* (US_IMR) LIN Break Sent or LIN Break Received Interrupt Mask Position */
#define US_IMR_LIN_LINBK_Msk             (_UINT32_(0x1) << US_IMR_LIN_LINBK_Pos)         /* (US_IMR) LIN Break Sent or LIN Break Received Interrupt Mask Mask */
#define US_IMR_LIN_LINBK(value)          (US_IMR_LIN_LINBK_Msk & (_UINT32_(value) << US_IMR_LIN_LINBK_Pos))
#define US_IMR_LIN_LINID_Pos             _UINT32_(14)                                         /* (US_IMR) LIN Identifier Sent or LIN Identifier Received Interrupt Mask Position */
#define US_IMR_LIN_LINID_Msk             (_UINT32_(0x1) << US_IMR_LIN_LINID_Pos)         /* (US_IMR) LIN Identifier Sent or LIN Identifier Received Interrupt Mask Mask */
#define US_IMR_LIN_LINID(value)          (US_IMR_LIN_LINID_Msk & (_UINT32_(value) << US_IMR_LIN_LINID_Pos))
#define US_IMR_LIN_LINTC_Pos             _UINT32_(15)                                         /* (US_IMR) LIN Transfer Completed Interrupt Mask Position */
#define US_IMR_LIN_LINTC_Msk             (_UINT32_(0x1) << US_IMR_LIN_LINTC_Pos)         /* (US_IMR) LIN Transfer Completed Interrupt Mask Mask */
#define US_IMR_LIN_LINTC(value)          (US_IMR_LIN_LINTC_Msk & (_UINT32_(value) << US_IMR_LIN_LINTC_Pos))
#define US_IMR_LIN_SECE_Pos              _UINT32_(21)                                         /* (US_IMR) Security/Safety Error Interrupt mask Position */
#define US_IMR_LIN_SECE_Msk              (_UINT32_(0x1) << US_IMR_LIN_SECE_Pos)          /* (US_IMR) Security/Safety Error Interrupt mask Mask */
#define US_IMR_LIN_SECE(value)           (US_IMR_LIN_SECE_Msk & (_UINT32_(value) << US_IMR_LIN_SECE_Pos))
#define US_IMR_LIN_LINBE_Pos             _UINT32_(25)                                         /* (US_IMR) LIN Bus Error Interrupt Mask Position */
#define US_IMR_LIN_LINBE_Msk             (_UINT32_(0x1) << US_IMR_LIN_LINBE_Pos)         /* (US_IMR) LIN Bus Error Interrupt Mask Mask */
#define US_IMR_LIN_LINBE(value)          (US_IMR_LIN_LINBE_Msk & (_UINT32_(value) << US_IMR_LIN_LINBE_Pos))
#define US_IMR_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (US_IMR) LIN Inconsistent Synch Field Error Interrupt Mask Position */
#define US_IMR_LIN_LINISFE_Msk           (_UINT32_(0x1) << US_IMR_LIN_LINISFE_Pos)       /* (US_IMR) LIN Inconsistent Synch Field Error Interrupt Mask Mask */
#define US_IMR_LIN_LINISFE(value)        (US_IMR_LIN_LINISFE_Msk & (_UINT32_(value) << US_IMR_LIN_LINISFE_Pos))
#define US_IMR_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (US_IMR) LIN Identifier Parity Interrupt Mask Position */
#define US_IMR_LIN_LINIPE_Msk            (_UINT32_(0x1) << US_IMR_LIN_LINIPE_Pos)        /* (US_IMR) LIN Identifier Parity Interrupt Mask Mask */
#define US_IMR_LIN_LINIPE(value)         (US_IMR_LIN_LINIPE_Msk & (_UINT32_(value) << US_IMR_LIN_LINIPE_Pos))
#define US_IMR_LIN_LINCE_Pos             _UINT32_(28)                                         /* (US_IMR) LIN Checksum Error Interrupt Mask Position */
#define US_IMR_LIN_LINCE_Msk             (_UINT32_(0x1) << US_IMR_LIN_LINCE_Pos)         /* (US_IMR) LIN Checksum Error Interrupt Mask Mask */
#define US_IMR_LIN_LINCE(value)          (US_IMR_LIN_LINCE_Msk & (_UINT32_(value) << US_IMR_LIN_LINCE_Pos))
#define US_IMR_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (US_IMR) LIN Client Not Responding Error Interrupt Mask Position */
#define US_IMR_LIN_LINSNRE_Msk           (_UINT32_(0x1) << US_IMR_LIN_LINSNRE_Pos)       /* (US_IMR) LIN Client Not Responding Error Interrupt Mask Mask */
#define US_IMR_LIN_LINSNRE(value)        (US_IMR_LIN_LINSNRE_Msk & (_UINT32_(value) << US_IMR_LIN_LINSNRE_Pos))
#define US_IMR_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (US_IMR) LIN Synch Tolerance Error Interrupt Mask Position */
#define US_IMR_LIN_LINSTE_Msk            (_UINT32_(0x1) << US_IMR_LIN_LINSTE_Pos)        /* (US_IMR) LIN Synch Tolerance Error Interrupt Mask Mask */
#define US_IMR_LIN_LINSTE(value)         (US_IMR_LIN_LINSTE_Msk & (_UINT32_(value) << US_IMR_LIN_LINSTE_Pos))
#define US_IMR_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (US_IMR) LIN Header Timeout Error Interrupt Mask Position */
#define US_IMR_LIN_LINHTE_Msk            (_UINT32_(0x1) << US_IMR_LIN_LINHTE_Pos)        /* (US_IMR) LIN Header Timeout Error Interrupt Mask Mask */
#define US_IMR_LIN_LINHTE(value)         (US_IMR_LIN_LINHTE_Msk & (_UINT32_(value) << US_IMR_LIN_LINHTE_Pos))
#define US_IMR_LIN_Msk                   _UINT32_(0xFE20E3E3)                                 /* (US_IMR_LIN) Register Mask  */


/* -------- US_CSR : (FLEXCOM Offset: 0x214) ( R/ 32) USART Channel Status Register -------- */
#define US_CSR_RXRDY_Pos                 _UINT32_(0)                                          /* (US_CSR) Receiver Ready (cleared by reading US_RHR) Position */
#define US_CSR_RXRDY_Msk                 (_UINT32_(0x1) << US_CSR_RXRDY_Pos)             /* (US_CSR) Receiver Ready (cleared by reading US_RHR) Mask */
#define US_CSR_RXRDY(value)              (US_CSR_RXRDY_Msk & (_UINT32_(value) << US_CSR_RXRDY_Pos)) /* Assignment of value for RXRDY in the US_CSR register */
#define   US_CSR_RXRDY_0_Val             _UINT32_(0x0)                                        /* (US_CSR) FIFO Disabled: No complete character has been received since the last read of US_RHR or the receiver is disabled. If characters were received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled. FIFO Enabled: Receive FIFO is empty; no data to read  */
#define   US_CSR_RXRDY_1_Val             _UINT32_(0x1)                                        /* (US_CSR) FIFO Disabled: At least one complete character has been received and US_RHR has not yet been read. FIFO Enabled: At least one unread data is in the Receive FIFO  */
#define US_CSR_RXRDY_0                   (US_CSR_RXRDY_0_Val << US_CSR_RXRDY_Pos)   /* (US_CSR) FIFO Disabled: No complete character has been received since the last read of US_RHR or the receiver is disabled. If characters were received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled. FIFO Enabled: Receive FIFO is empty; no data to read Position */
#define US_CSR_RXRDY_1                   (US_CSR_RXRDY_1_Val << US_CSR_RXRDY_Pos)   /* (US_CSR) FIFO Disabled: At least one complete character has been received and US_RHR has not yet been read. FIFO Enabled: At least one unread data is in the Receive FIFO Position */
#define US_CSR_TXRDY_Pos                 _UINT32_(1)                                          /* (US_CSR) Transmitter Ready (cleared by writing US_THR) Position */
#define US_CSR_TXRDY_Msk                 (_UINT32_(0x1) << US_CSR_TXRDY_Pos)             /* (US_CSR) Transmitter Ready (cleared by writing US_THR) Mask */
#define US_CSR_TXRDY                     (US_CSR_TXRDY_Msk)
#define   US_CSR_TXRDY_0_Val             _UINT32_(0x0)                                        /* (US_CSR) FIFO Disabled: A character in US_THR is waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1. FIFO Enabled: Transmit FIFO is full and cannot accept more data  */
#define   US_CSR_TXRDY_1_Val             _UINT32_(0x1)                                        /* (US_CSR) FIFO Disabled: There is no character in US_THR. FIFO Enabled: Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration  */
#define US_CSR_TXRDY_0                   (US_CSR_TXRDY_0_Val << US_CSR_TXRDY_Pos)   /* (US_CSR) FIFO Disabled: A character in US_THR is waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1. FIFO Enabled: Transmit FIFO is full and cannot accept more data Position */
#define US_CSR_TXRDY_1                   (US_CSR_TXRDY_1_Val << US_CSR_TXRDY_Pos)   /* (US_CSR) FIFO Disabled: There is no character in US_THR. FIFO Enabled: Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration Position */
#define US_CSR_RXBRK_Pos                 _UINT32_(2)                                          /* (US_CSR) Break Received/End of Break Position */
#define US_CSR_RXBRK_Msk                 (_UINT32_(0x1) << US_CSR_RXBRK_Pos)             /* (US_CSR) Break Received/End of Break Mask */
#define US_CSR_RXBRK(value)              (US_CSR_RXBRK_Msk & (_UINT32_(value) << US_CSR_RXBRK_Pos)) /* Assignment of value for RXBRK in the US_CSR register */
#define   US_CSR_RXBRK_0_Val             _UINT32_(0x0)                                        /* (US_CSR) No break received or end of break detected since the last RSTSTA command was issued.  */
#define   US_CSR_RXBRK_1_Val             _UINT32_(0x1)                                        /* (US_CSR) Break received or end of break detected since the last RSTSTA command was issued.  */
#define US_CSR_RXBRK_0                   (US_CSR_RXBRK_0_Val << US_CSR_RXBRK_Pos)   /* (US_CSR) No break received or end of break detected since the last RSTSTA command was issued. Position */
#define US_CSR_RXBRK_1                   (US_CSR_RXBRK_1_Val << US_CSR_RXBRK_Pos)   /* (US_CSR) Break received or end of break detected since the last RSTSTA command was issued. Position */
#define US_CSR_OVRE_Pos                  _UINT32_(5)                                          /* (US_CSR) Overrun Error Position */
#define US_CSR_OVRE_Msk                  (_UINT32_(0x1) << US_CSR_OVRE_Pos)              /* (US_CSR) Overrun Error Mask */
#define US_CSR_OVRE(value)               (US_CSR_OVRE_Msk & (_UINT32_(value) << US_CSR_OVRE_Pos)) /* Assignment of value for OVRE in the US_CSR register */
#define   US_CSR_OVRE_0_Val              _UINT32_(0x0)                                        /* (US_CSR) No overrun error has occurred since the last RSTSTA command was issued.  */
#define   US_CSR_OVRE_1_Val              _UINT32_(0x1)                                        /* (US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued.  */
#define US_CSR_OVRE_0                    (US_CSR_OVRE_0_Val << US_CSR_OVRE_Pos)     /* (US_CSR) No overrun error has occurred since the last RSTSTA command was issued. Position */
#define US_CSR_OVRE_1                    (US_CSR_OVRE_1_Val << US_CSR_OVRE_Pos)     /* (US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued. Position */
#define US_CSR_FRAME_Pos                 _UINT32_(6)                                          /* (US_CSR) Framing Error Position */
#define US_CSR_FRAME_Msk                 (_UINT32_(0x1) << US_CSR_FRAME_Pos)             /* (US_CSR) Framing Error Mask */
#define US_CSR_FRAME(value)              (US_CSR_FRAME_Msk & (_UINT32_(value) << US_CSR_FRAME_Pos)) /* Assignment of value for FRAME in the US_CSR register */
#define   US_CSR_FRAME_0_Val             _UINT32_(0x0)                                        /* (US_CSR) No stop bit has been detected low since the last RSTSTA command was issued.  */
#define   US_CSR_FRAME_1_Val             _UINT32_(0x1)                                        /* (US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued.  */
#define US_CSR_FRAME_0                   (US_CSR_FRAME_0_Val << US_CSR_FRAME_Pos)   /* (US_CSR) No stop bit has been detected low since the last RSTSTA command was issued. Position */
#define US_CSR_FRAME_1                   (US_CSR_FRAME_1_Val << US_CSR_FRAME_Pos)   /* (US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued. Position */
#define US_CSR_PARE_Pos                  _UINT32_(7)                                          /* (US_CSR) Parity Error Position */
#define US_CSR_PARE_Msk                  (_UINT32_(0x1) << US_CSR_PARE_Pos)              /* (US_CSR) Parity Error Mask */
#define US_CSR_PARE(value)               (US_CSR_PARE_Msk & (_UINT32_(value) << US_CSR_PARE_Pos)) /* Assignment of value for PARE in the US_CSR register */
#define   US_CSR_PARE_0_Val              _UINT32_(0x0)                                        /* (US_CSR) No parity error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_PARE_1_Val              _UINT32_(0x1)                                        /* (US_CSR) At least one parity error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_PARE_0                    (US_CSR_PARE_0_Val << US_CSR_PARE_Pos)     /* (US_CSR) No parity error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_PARE_1                    (US_CSR_PARE_1_Val << US_CSR_PARE_Pos)     /* (US_CSR) At least one parity error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_TIMEOUT_Pos               _UINT32_(8)                                          /* (US_CSR) Receiver Timeout Position */
#define US_CSR_TIMEOUT_Msk               (_UINT32_(0x1) << US_CSR_TIMEOUT_Pos)           /* (US_CSR) Receiver Timeout Mask */
#define US_CSR_TIMEOUT(value)            (US_CSR_TIMEOUT_Msk & (_UINT32_(value) << US_CSR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the US_CSR register */
#define   US_CSR_TIMEOUT_0_Val           _UINT32_(0x0)                                        /* (US_CSR) There has not been a timeout since the last Start Timeout command (US_CR.STTTO) or the Timeout Register is 0.  */
#define   US_CSR_TIMEOUT_1_Val           _UINT32_(0x1)                                        /* (US_CSR) There has been a timeout since the last Start Timeout command (US_CR.STTTO).  */
#define US_CSR_TIMEOUT_0                 (US_CSR_TIMEOUT_0_Val << US_CSR_TIMEOUT_Pos) /* (US_CSR) There has not been a timeout since the last Start Timeout command (US_CR.STTTO) or the Timeout Register is 0. Position */
#define US_CSR_TIMEOUT_1                 (US_CSR_TIMEOUT_1_Val << US_CSR_TIMEOUT_Pos) /* (US_CSR) There has been a timeout since the last Start Timeout command (US_CR.STTTO). Position */
#define US_CSR_TXEMPTY_Pos               _UINT32_(9)                                          /* (US_CSR) Transmitter Empty (cleared by writing US_THR) Position */
#define US_CSR_TXEMPTY_Msk               (_UINT32_(0x1) << US_CSR_TXEMPTY_Pos)           /* (US_CSR) Transmitter Empty (cleared by writing US_THR) Mask */
#define US_CSR_TXEMPTY                   (US_CSR_TXEMPTY_Msk)
#define   US_CSR_TXEMPTY_0_Val           _UINT32_(0x0)                                        /* (US_CSR) There are characters in either US_THR or the Transmit Shift Register, or the transmitter is disabled.  */
#define   US_CSR_TXEMPTY_1_Val           _UINT32_(0x1)                                        /* (US_CSR) There are no characters in US_THR, nor in the Transmit Shift Register.  */
#define US_CSR_TXEMPTY_0                 (US_CSR_TXEMPTY_0_Val << US_CSR_TXEMPTY_Pos) /* (US_CSR) There are characters in either US_THR or the Transmit Shift Register, or the transmitter is disabled. Position */
#define US_CSR_TXEMPTY_1                 (US_CSR_TXEMPTY_1_Val << US_CSR_TXEMPTY_Pos) /* (US_CSR) There are no characters in US_THR, nor in the Transmit Shift Register. Position */
#define US_CSR_ITER_Pos                  _UINT32_(10)                                         /* (US_CSR) Max Number of Repetitions Reached Position */
#define US_CSR_ITER_Msk                  (_UINT32_(0x1) << US_CSR_ITER_Pos)              /* (US_CSR) Max Number of Repetitions Reached Mask */
#define US_CSR_ITER(value)               (US_CSR_ITER_Msk & (_UINT32_(value) << US_CSR_ITER_Pos)) /* Assignment of value for ITER in the US_CSR register */
#define   US_CSR_ITER_0_Val              _UINT32_(0x0)                                        /* (US_CSR) Maximum number of repetitions has not been reached since the last RSTIT command was issued.  */
#define   US_CSR_ITER_1_Val              _UINT32_(0x1)                                        /* (US_CSR) Maximum number of repetitions has been reached since the last RSTIT command was issued.  */
#define US_CSR_ITER_0                    (US_CSR_ITER_0_Val << US_CSR_ITER_Pos)     /* (US_CSR) Maximum number of repetitions has not been reached since the last RSTIT command was issued. Position */
#define US_CSR_ITER_1                    (US_CSR_ITER_1_Val << US_CSR_ITER_Pos)     /* (US_CSR) Maximum number of repetitions has been reached since the last RSTIT command was issued. Position */
#define US_CSR_NACK_Pos                  _UINT32_(13)                                         /* (US_CSR) Non Acknowledge Interrupt Position */
#define US_CSR_NACK_Msk                  (_UINT32_(0x1) << US_CSR_NACK_Pos)              /* (US_CSR) Non Acknowledge Interrupt Mask */
#define US_CSR_NACK(value)               (US_CSR_NACK_Msk & (_UINT32_(value) << US_CSR_NACK_Pos)) /* Assignment of value for NACK in the US_CSR register */
#define   US_CSR_NACK_0_Val              _UINT32_(0x0)                                        /* (US_CSR) Non acknowledge has not been detected since the last RSTNACK.  */
#define   US_CSR_NACK_1_Val              _UINT32_(0x1)                                        /* (US_CSR) At least one non acknowledge has been detected since the last RSTNACK.  */
#define US_CSR_NACK_0                    (US_CSR_NACK_0_Val << US_CSR_NACK_Pos)     /* (US_CSR) Non acknowledge has not been detected since the last RSTNACK. Position */
#define US_CSR_NACK_1                    (US_CSR_NACK_1_Val << US_CSR_NACK_Pos)     /* (US_CSR) At least one non acknowledge has been detected since the last RSTNACK. Position */
#define US_CSR_CTSIC_Pos                 _UINT32_(19)                                         /* (US_CSR) Clear to Send Input Change Flag Position */
#define US_CSR_CTSIC_Msk                 (_UINT32_(0x1) << US_CSR_CTSIC_Pos)             /* (US_CSR) Clear to Send Input Change Flag Mask */
#define US_CSR_CTSIC(value)              (US_CSR_CTSIC_Msk & (_UINT32_(value) << US_CSR_CTSIC_Pos)) /* Assignment of value for CTSIC in the US_CSR register */
#define   US_CSR_CTSIC_0_Val             _UINT32_(0x0)                                        /* (US_CSR) No input change has been detected on the CTS pin since the last read of US_CSR.  */
#define   US_CSR_CTSIC_1_Val             _UINT32_(0x1)                                        /* (US_CSR) At least one input change has been detected on the CTS pin since the last read of US_CSR.  */
#define US_CSR_CTSIC_0                   (US_CSR_CTSIC_0_Val << US_CSR_CTSIC_Pos)   /* (US_CSR) No input change has been detected on the CTS pin since the last read of US_CSR. Position */
#define US_CSR_CTSIC_1                   (US_CSR_CTSIC_1_Val << US_CSR_CTSIC_Pos)   /* (US_CSR) At least one input change has been detected on the CTS pin since the last read of US_CSR. Position */
#define US_CSR_SECE_Pos                  _UINT32_(21)                                         /* (US_CSR) Security/Safety Error (cleared on read) Position */
#define US_CSR_SECE_Msk                  (_UINT32_(0x1) << US_CSR_SECE_Pos)              /* (US_CSR) Security/Safety Error (cleared on read) Mask */
#define US_CSR_SECE(value)               (US_CSR_SECE_Msk & (_UINT32_(value) << US_CSR_SECE_Pos)) /* Assignment of value for SECE in the US_CSR register */
#define   US_CSR_SECE_0_Val              _UINT32_(0x0)                                        /* (US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of US_CSR.  */
#define   US_CSR_SECE_1_Val              _UINT32_(0x1)                                        /* (US_CSR) An error has been detected on TXD and/or SCK pad output (US_WPSR.PADERR=1) and/or a violation of a write-protected register (US_WPSR.WPVS=1) since the last read of US_CSR.  */
#define US_CSR_SECE_0                    (US_CSR_SECE_0_Val << US_CSR_SECE_Pos)     /* (US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of US_CSR. Position */
#define US_CSR_SECE_1                    (US_CSR_SECE_1_Val << US_CSR_SECE_Pos)     /* (US_CSR) An error has been detected on TXD and/or SCK pad output (US_WPSR.PADERR=1) and/or a violation of a write-protected register (US_WPSR.WPVS=1) since the last read of US_CSR. Position */
#define US_CSR_CMP_Pos                   _UINT32_(22)                                         /* (US_CSR) Comparison Status Position */
#define US_CSR_CMP_Msk                   (_UINT32_(0x1) << US_CSR_CMP_Pos)               /* (US_CSR) Comparison Status Mask */
#define US_CSR_CMP(value)                (US_CSR_CMP_Msk & (_UINT32_(value) << US_CSR_CMP_Pos)) /* Assignment of value for CMP in the US_CSR register */
#define   US_CSR_CMP_0_Val               _UINT32_(0x0)                                        /* (US_CSR) No received character matched the comparison criteria programmed in VAL1, VAL2 fields and CMPPAR bit in since the last RSTSTA command was issued.  */
#define   US_CSR_CMP_1_Val               _UINT32_(0x1)                                        /* (US_CSR) A received character matched the comparison criteria since the last RSTSTA command was issued.  */
#define US_CSR_CMP_0                     (US_CSR_CMP_0_Val << US_CSR_CMP_Pos)       /* (US_CSR) No received character matched the comparison criteria programmed in VAL1, VAL2 fields and CMPPAR bit in since the last RSTSTA command was issued. Position */
#define US_CSR_CMP_1                     (US_CSR_CMP_1_Val << US_CSR_CMP_Pos)       /* (US_CSR) A received character matched the comparison criteria since the last RSTSTA command was issued. Position */
#define US_CSR_CTS_Pos                   _UINT32_(23)                                         /* (US_CSR) Image of CTS Input Position */
#define US_CSR_CTS_Msk                   (_UINT32_(0x1) << US_CSR_CTS_Pos)               /* (US_CSR) Image of CTS Input Mask */
#define US_CSR_CTS(value)                (US_CSR_CTS_Msk & (_UINT32_(value) << US_CSR_CTS_Pos)) /* Assignment of value for CTS in the US_CSR register */
#define   US_CSR_CTS_0_Val               _UINT32_(0x0)                                        /* (US_CSR) CTS input is driven low.  */
#define   US_CSR_CTS_1_Val               _UINT32_(0x1)                                        /* (US_CSR) CTS input is driven high.  */
#define US_CSR_CTS_0                     (US_CSR_CTS_0_Val << US_CSR_CTS_Pos)       /* (US_CSR) CTS input is driven low. Position */
#define US_CSR_CTS_1                     (US_CSR_CTS_1_Val << US_CSR_CTS_Pos)       /* (US_CSR) CTS input is driven high. Position */
#define US_CSR_MANE_Pos                  _UINT32_(24)                                         /* (US_CSR) Manchester Error Position */
#define US_CSR_MANE_Msk                  (_UINT32_(0x1) << US_CSR_MANE_Pos)              /* (US_CSR) Manchester Error Mask */
#define US_CSR_MANE(value)               (US_CSR_MANE_Msk & (_UINT32_(value) << US_CSR_MANE_Pos)) /* Assignment of value for MANE in the US_CSR register */
#define   US_CSR_MANE_0_Val              _UINT32_(0x0)                                        /* (US_CSR) No Manchester error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_MANE_1_Val              _UINT32_(0x1)                                        /* (US_CSR) At least one Manchester error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_MANE_0                    (US_CSR_MANE_0_Val << US_CSR_MANE_Pos)     /* (US_CSR) No Manchester error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_MANE_1                    (US_CSR_MANE_1_Val << US_CSR_MANE_Pos)     /* (US_CSR) At least one Manchester error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_Msk                       _UINT32_(0x01E827E7)                                 /* (US_CSR) Register Mask  */

/* LIN mode */
#define US_CSR_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (US_CSR) Receiver Ready (cleared by reading US_RHR) Position */
#define US_CSR_LIN_RXRDY_Msk             (_UINT32_(0x1) << US_CSR_LIN_RXRDY_Pos)         /* (US_CSR) Receiver Ready (cleared by reading US_RHR) Mask */
#define US_CSR_LIN_RXRDY(value)          (US_CSR_LIN_RXRDY_Msk & (_UINT32_(value) << US_CSR_LIN_RXRDY_Pos))
#define   US_CSR_LIN_RXRDY_0_Val         _UINT32_(0x0)                                        /* (US_CSR) No complete character has been received since the last read of US_RHR or the receiver is disabled. If characters were being received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled.  */
#define   US_CSR_LIN_RXRDY_1_Val         _UINT32_(0x1)                                        /* (US_CSR) At least one complete character has been received and US_RHR has not yet been read.  */
#define US_CSR_LIN_RXRDY_0               (US_CSR_LIN_RXRDY_0_Val << US_CSR_LIN_RXRDY_Pos) /* (US_CSR) No complete character has been received since the last read of US_RHR or the receiver is disabled. If characters were being received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled. Position */
#define US_CSR_LIN_RXRDY_1               (US_CSR_LIN_RXRDY_1_Val << US_CSR_LIN_RXRDY_Pos) /* (US_CSR) At least one complete character has been received and US_RHR has not yet been read. Position */
#define US_CSR_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (US_CSR) Transmitter Ready (cleared by writing US_THR) Position */
#define US_CSR_LIN_TXRDY_Msk             (_UINT32_(0x1) << US_CSR_LIN_TXRDY_Pos)         /* (US_CSR) Transmitter Ready (cleared by writing US_THR) Mask */
#define US_CSR_LIN_TXRDY(value)          (US_CSR_LIN_TXRDY_Msk & (_UINT32_(value) << US_CSR_LIN_TXRDY_Pos))
#define   US_CSR_LIN_TXRDY_0_Val         _UINT32_(0x0)                                        /* (US_CSR) A character in US_THR is waiting to be transferred to the Transmit Shift Register, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1.  */
#define   US_CSR_LIN_TXRDY_1_Val         _UINT32_(0x1)                                        /* (US_CSR) There is no character in US_THR.  */
#define US_CSR_LIN_TXRDY_0               (US_CSR_LIN_TXRDY_0_Val << US_CSR_LIN_TXRDY_Pos) /* (US_CSR) A character in US_THR is waiting to be transferred to the Transmit Shift Register, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1. Position */
#define US_CSR_LIN_TXRDY_1               (US_CSR_LIN_TXRDY_1_Val << US_CSR_LIN_TXRDY_Pos) /* (US_CSR) There is no character in US_THR. Position */
#define US_CSR_LIN_OVRE_Pos              _UINT32_(5)                                          /* (US_CSR) Overrun Error Position */
#define US_CSR_LIN_OVRE_Msk              (_UINT32_(0x1) << US_CSR_LIN_OVRE_Pos)          /* (US_CSR) Overrun Error Mask */
#define US_CSR_LIN_OVRE(value)           (US_CSR_LIN_OVRE_Msk & (_UINT32_(value) << US_CSR_LIN_OVRE_Pos))
#define   US_CSR_LIN_OVRE_0_Val          _UINT32_(0x0)                                        /* (US_CSR) No overrun error has occurred since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_OVRE_1_Val          _UINT32_(0x1)                                        /* (US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued.  */
#define US_CSR_LIN_OVRE_0                (US_CSR_LIN_OVRE_0_Val << US_CSR_LIN_OVRE_Pos) /* (US_CSR) No overrun error has occurred since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_OVRE_1                (US_CSR_LIN_OVRE_1_Val << US_CSR_LIN_OVRE_Pos) /* (US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_FRAME_Pos             _UINT32_(6)                                          /* (US_CSR) Framing Error Position */
#define US_CSR_LIN_FRAME_Msk             (_UINT32_(0x1) << US_CSR_LIN_FRAME_Pos)         /* (US_CSR) Framing Error Mask */
#define US_CSR_LIN_FRAME(value)          (US_CSR_LIN_FRAME_Msk & (_UINT32_(value) << US_CSR_LIN_FRAME_Pos))
#define   US_CSR_LIN_FRAME_0_Val         _UINT32_(0x0)                                        /* (US_CSR) No stop bit has been detected low since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_FRAME_1_Val         _UINT32_(0x1)                                        /* (US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued.  */
#define US_CSR_LIN_FRAME_0               (US_CSR_LIN_FRAME_0_Val << US_CSR_LIN_FRAME_Pos) /* (US_CSR) No stop bit has been detected low since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_FRAME_1               (US_CSR_LIN_FRAME_1_Val << US_CSR_LIN_FRAME_Pos) /* (US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_PARE_Pos              _UINT32_(7)                                          /* (US_CSR) Parity Error Position */
#define US_CSR_LIN_PARE_Msk              (_UINT32_(0x1) << US_CSR_LIN_PARE_Pos)          /* (US_CSR) Parity Error Mask */
#define US_CSR_LIN_PARE(value)           (US_CSR_LIN_PARE_Msk & (_UINT32_(value) << US_CSR_LIN_PARE_Pos))
#define   US_CSR_LIN_PARE_0_Val          _UINT32_(0x0)                                        /* (US_CSR) No parity error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_PARE_1_Val          _UINT32_(0x1)                                        /* (US_CSR) At least one parity error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_PARE_0                (US_CSR_LIN_PARE_0_Val << US_CSR_LIN_PARE_Pos) /* (US_CSR) No parity error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_PARE_1                (US_CSR_LIN_PARE_1_Val << US_CSR_LIN_PARE_Pos) /* (US_CSR) At least one parity error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (US_CSR) Receiver Timeout Position */
#define US_CSR_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << US_CSR_LIN_TIMEOUT_Pos)       /* (US_CSR) Receiver Timeout Mask */
#define US_CSR_LIN_TIMEOUT(value)        (US_CSR_LIN_TIMEOUT_Msk & (_UINT32_(value) << US_CSR_LIN_TIMEOUT_Pos))
#define   US_CSR_LIN_TIMEOUT_0_Val       _UINT32_(0x0)                                        /* (US_CSR) There has not been a timeout since the last start timeout command (US_CR.STTTO) or the Timeout Register is 0.  */
#define   US_CSR_LIN_TIMEOUT_1_Val       _UINT32_(0x1)                                        /* (US_CSR) There has been a timeout since the last start timeout command (US_CR.STTTO).  */
#define US_CSR_LIN_TIMEOUT_0             (US_CSR_LIN_TIMEOUT_0_Val << US_CSR_LIN_TIMEOUT_Pos) /* (US_CSR) There has not been a timeout since the last start timeout command (US_CR.STTTO) or the Timeout Register is 0. Position */
#define US_CSR_LIN_TIMEOUT_1             (US_CSR_LIN_TIMEOUT_1_Val << US_CSR_LIN_TIMEOUT_Pos) /* (US_CSR) There has been a timeout since the last start timeout command (US_CR.STTTO). Position */
#define US_CSR_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (US_CSR) Transmitter Empty (cleared by writing US_THR) Position */
#define US_CSR_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << US_CSR_LIN_TXEMPTY_Pos)       /* (US_CSR) Transmitter Empty (cleared by writing US_THR) Mask */
#define US_CSR_LIN_TXEMPTY(value)        (US_CSR_LIN_TXEMPTY_Msk & (_UINT32_(value) << US_CSR_LIN_TXEMPTY_Pos))
#define   US_CSR_LIN_TXEMPTY_0_Val       _UINT32_(0x0)                                        /* (US_CSR) There are characters in either US_THR or the Transmit Shift Register, or the transmitter is disabled.  */
#define   US_CSR_LIN_TXEMPTY_1_Val       _UINT32_(0x1)                                        /* (US_CSR) There are no characters in US_THR, nor in the Transmit Shift Register.  */
#define US_CSR_LIN_TXEMPTY_0             (US_CSR_LIN_TXEMPTY_0_Val << US_CSR_LIN_TXEMPTY_Pos) /* (US_CSR) There are characters in either US_THR or the Transmit Shift Register, or the transmitter is disabled. Position */
#define US_CSR_LIN_TXEMPTY_1             (US_CSR_LIN_TXEMPTY_1_Val << US_CSR_LIN_TXEMPTY_Pos) /* (US_CSR) There are no characters in US_THR, nor in the Transmit Shift Register. Position */
#define US_CSR_LIN_LINBK_Pos             _UINT32_(13)                                         /* (US_CSR) LIN Break Sent or LIN Break Received Position */
#define US_CSR_LIN_LINBK_Msk             (_UINT32_(0x1) << US_CSR_LIN_LINBK_Pos)         /* (US_CSR) LIN Break Sent or LIN Break Received Mask */
#define US_CSR_LIN_LINBK(value)          (US_CSR_LIN_LINBK_Msk & (_UINT32_(value) << US_CSR_LIN_LINBK_Pos))
#define   US_CSR_LIN_LINBK_0_Val         _UINT32_(0x0)                                        /* (US_CSR) Host Mode: No LIN break has been sent since the last RSTSTA command was issued. Client Mode: No LIN break has received sent since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINBK_1_Val         _UINT32_(0x1)                                        /* (US_CSR) Host Mode: At least one LIN break has been sent since the last RSTSTA. Client Mode: At least one LIN break has been received since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINBK_0               (US_CSR_LIN_LINBK_0_Val << US_CSR_LIN_LINBK_Pos) /* (US_CSR) Host Mode: No LIN break has been sent since the last RSTSTA command was issued. Client Mode: No LIN break has received sent since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINBK_1               (US_CSR_LIN_LINBK_1_Val << US_CSR_LIN_LINBK_Pos) /* (US_CSR) Host Mode: At least one LIN break has been sent since the last RSTSTA. Client Mode: At least one LIN break has been received since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINID_Pos             _UINT32_(14)                                         /* (US_CSR) LIN Identifier Sent or LIN Identifier Received Position */
#define US_CSR_LIN_LINID_Msk             (_UINT32_(0x1) << US_CSR_LIN_LINID_Pos)         /* (US_CSR) LIN Identifier Sent or LIN Identifier Received Mask */
#define US_CSR_LIN_LINID(value)          (US_CSR_LIN_LINID_Msk & (_UINT32_(value) << US_CSR_LIN_LINID_Pos))
#define   US_CSR_LIN_LINID_0_Val         _UINT32_(0x0)                                        /* (US_CSR) Host Mode: No LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: No LIN identifier has been received since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINID_1_Val         _UINT32_(0x1)                                        /* (US_CSR) Host Mode: At least one LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: At least one LIN identifier has been received since the last RSTSTA.  */
#define US_CSR_LIN_LINID_0               (US_CSR_LIN_LINID_0_Val << US_CSR_LIN_LINID_Pos) /* (US_CSR) Host Mode: No LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: No LIN identifier has been received since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINID_1               (US_CSR_LIN_LINID_1_Val << US_CSR_LIN_LINID_Pos) /* (US_CSR) Host Mode: At least one LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: At least one LIN identifier has been received since the last RSTSTA. Position */
#define US_CSR_LIN_LINTC_Pos             _UINT32_(15)                                         /* (US_CSR) LIN Transfer Completed Position */
#define US_CSR_LIN_LINTC_Msk             (_UINT32_(0x1) << US_CSR_LIN_LINTC_Pos)         /* (US_CSR) LIN Transfer Completed Mask */
#define US_CSR_LIN_LINTC(value)          (US_CSR_LIN_LINTC_Msk & (_UINT32_(value) << US_CSR_LIN_LINTC_Pos))
#define   US_CSR_LIN_LINTC_0_Val         _UINT32_(0x0)                                        /* (US_CSR) The USART is idle or a LIN transfer is ongoing.  */
#define   US_CSR_LIN_LINTC_1_Val         _UINT32_(0x1)                                        /* (US_CSR) A LIN transfer has been completed since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINTC_0               (US_CSR_LIN_LINTC_0_Val << US_CSR_LIN_LINTC_Pos) /* (US_CSR) The USART is idle or a LIN transfer is ongoing. Position */
#define US_CSR_LIN_LINTC_1               (US_CSR_LIN_LINTC_1_Val << US_CSR_LIN_LINTC_Pos) /* (US_CSR) A LIN transfer has been completed since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_SECE_Pos              _UINT32_(21)                                         /* (US_CSR) Security/Safety Error (cleared on read) Position */
#define US_CSR_LIN_SECE_Msk              (_UINT32_(0x1) << US_CSR_LIN_SECE_Pos)          /* (US_CSR) Security/Safety Error (cleared on read) Mask */
#define US_CSR_LIN_SECE(value)           (US_CSR_LIN_SECE_Msk & (_UINT32_(value) << US_CSR_LIN_SECE_Pos))
#define   US_CSR_LIN_SECE_0_Val          _UINT32_(0x0)                                        /* (US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of US_CSR.  */
#define   US_CSR_LIN_SECE_1_Val          _UINT32_(0x1)                                        /* (US_CSR) An error has been detected on TXD and/or SCK pad output (US_WPSR.PADERR=1) and/or a violation of a write-protected register (US_WPSR.WPVS=1) since the last read of US_CSR.  */
#define US_CSR_LIN_SECE_0                (US_CSR_LIN_SECE_0_Val << US_CSR_LIN_SECE_Pos) /* (US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of US_CSR. Position */
#define US_CSR_LIN_SECE_1                (US_CSR_LIN_SECE_1_Val << US_CSR_LIN_SECE_Pos) /* (US_CSR) An error has been detected on TXD and/or SCK pad output (US_WPSR.PADERR=1) and/or a violation of a write-protected register (US_WPSR.WPVS=1) since the last read of US_CSR. Position */
#define US_CSR_LIN_LINBLS_Pos            _UINT32_(23)                                         /* (US_CSR) LIN Bus Line Status Position */
#define US_CSR_LIN_LINBLS_Msk            (_UINT32_(0x1) << US_CSR_LIN_LINBLS_Pos)        /* (US_CSR) LIN Bus Line Status Mask */
#define US_CSR_LIN_LINBLS(value)         (US_CSR_LIN_LINBLS_Msk & (_UINT32_(value) << US_CSR_LIN_LINBLS_Pos))
#define   US_CSR_LIN_LINBLS_0_Val        _UINT32_(0x0)                                        /* (US_CSR) LIN bus line is set to 0.  */
#define   US_CSR_LIN_LINBLS_1_Val        _UINT32_(0x1)                                        /* (US_CSR) LIN bus line is set to 1.  */
#define US_CSR_LIN_LINBLS_0              (US_CSR_LIN_LINBLS_0_Val << US_CSR_LIN_LINBLS_Pos) /* (US_CSR) LIN bus line is set to 0. Position */
#define US_CSR_LIN_LINBLS_1              (US_CSR_LIN_LINBLS_1_Val << US_CSR_LIN_LINBLS_Pos) /* (US_CSR) LIN bus line is set to 1. Position */
#define US_CSR_LIN_LINBE_Pos             _UINT32_(25)                                         /* (US_CSR) LIN Bit Error Position */
#define US_CSR_LIN_LINBE_Msk             (_UINT32_(0x1) << US_CSR_LIN_LINBE_Pos)         /* (US_CSR) LIN Bit Error Mask */
#define US_CSR_LIN_LINBE(value)          (US_CSR_LIN_LINBE_Msk & (_UINT32_(value) << US_CSR_LIN_LINBE_Pos))
#define   US_CSR_LIN_LINBE_0_Val         _UINT32_(0x0)                                        /* (US_CSR) No bit error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINBE_1_Val         _UINT32_(0x1)                                        /* (US_CSR) A bit error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINBE_0               (US_CSR_LIN_LINBE_0_Val << US_CSR_LIN_LINBE_Pos) /* (US_CSR) No bit error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINBE_1               (US_CSR_LIN_LINBE_1_Val << US_CSR_LIN_LINBE_Pos) /* (US_CSR) A bit error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (US_CSR) LIN Inconsistent Synch Field Error Position */
#define US_CSR_LIN_LINISFE_Msk           (_UINT32_(0x1) << US_CSR_LIN_LINISFE_Pos)       /* (US_CSR) LIN Inconsistent Synch Field Error Mask */
#define US_CSR_LIN_LINISFE(value)        (US_CSR_LIN_LINISFE_Msk & (_UINT32_(value) << US_CSR_LIN_LINISFE_Pos))
#define   US_CSR_LIN_LINISFE_0_Val       _UINT32_(0x0)                                        /* (US_CSR) No LIN inconsistent synch field error has been detected since the last RSTSTA  */
#define   US_CSR_LIN_LINISFE_1_Val       _UINT32_(0x1)                                        /* (US_CSR) The USART is configured as a client node and a LIN Inconsistent synch field error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINISFE_0             (US_CSR_LIN_LINISFE_0_Val << US_CSR_LIN_LINISFE_Pos) /* (US_CSR) No LIN inconsistent synch field error has been detected since the last RSTSTA Position */
#define US_CSR_LIN_LINISFE_1             (US_CSR_LIN_LINISFE_1_Val << US_CSR_LIN_LINISFE_Pos) /* (US_CSR) The USART is configured as a client node and a LIN Inconsistent synch field error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (US_CSR) LIN Identifier Parity Error Position */
#define US_CSR_LIN_LINIPE_Msk            (_UINT32_(0x1) << US_CSR_LIN_LINIPE_Pos)        /* (US_CSR) LIN Identifier Parity Error Mask */
#define US_CSR_LIN_LINIPE(value)         (US_CSR_LIN_LINIPE_Msk & (_UINT32_(value) << US_CSR_LIN_LINIPE_Pos))
#define   US_CSR_LIN_LINIPE_0_Val        _UINT32_(0x0)                                        /* (US_CSR) No LIN identifier parity error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINIPE_1_Val        _UINT32_(0x1)                                        /* (US_CSR) A LIN identifier parity error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINIPE_0              (US_CSR_LIN_LINIPE_0_Val << US_CSR_LIN_LINIPE_Pos) /* (US_CSR) No LIN identifier parity error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINIPE_1              (US_CSR_LIN_LINIPE_1_Val << US_CSR_LIN_LINIPE_Pos) /* (US_CSR) A LIN identifier parity error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINCE_Pos             _UINT32_(28)                                         /* (US_CSR) LIN Checksum Error Position */
#define US_CSR_LIN_LINCE_Msk             (_UINT32_(0x1) << US_CSR_LIN_LINCE_Pos)         /* (US_CSR) LIN Checksum Error Mask */
#define US_CSR_LIN_LINCE(value)          (US_CSR_LIN_LINCE_Msk & (_UINT32_(value) << US_CSR_LIN_LINCE_Pos))
#define   US_CSR_LIN_LINCE_0_Val         _UINT32_(0x0)                                        /* (US_CSR) No LIN checksum error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINCE_1_Val         _UINT32_(0x1)                                        /* (US_CSR) A LIN checksum error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINCE_0               (US_CSR_LIN_LINCE_0_Val << US_CSR_LIN_LINCE_Pos) /* (US_CSR) No LIN checksum error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINCE_1               (US_CSR_LIN_LINCE_1_Val << US_CSR_LIN_LINCE_Pos) /* (US_CSR) A LIN checksum error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (US_CSR) LIN Client Not Responding Error Position */
#define US_CSR_LIN_LINSNRE_Msk           (_UINT32_(0x1) << US_CSR_LIN_LINSNRE_Pos)       /* (US_CSR) LIN Client Not Responding Error Mask */
#define US_CSR_LIN_LINSNRE(value)        (US_CSR_LIN_LINSNRE_Msk & (_UINT32_(value) << US_CSR_LIN_LINSNRE_Pos))
#define   US_CSR_LIN_LINSNRE_0_Val       _UINT32_(0x0)                                        /* (US_CSR) No LIN client not responding error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINSNRE_1_Val       _UINT32_(0x1)                                        /* (US_CSR) A LIN client not responding error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINSNRE_0             (US_CSR_LIN_LINSNRE_0_Val << US_CSR_LIN_LINSNRE_Pos) /* (US_CSR) No LIN client not responding error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINSNRE_1             (US_CSR_LIN_LINSNRE_1_Val << US_CSR_LIN_LINSNRE_Pos) /* (US_CSR) A LIN client not responding error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (US_CSR) LIN Synch Tolerance Error Position */
#define US_CSR_LIN_LINSTE_Msk            (_UINT32_(0x1) << US_CSR_LIN_LINSTE_Pos)        /* (US_CSR) LIN Synch Tolerance Error Mask */
#define US_CSR_LIN_LINSTE(value)         (US_CSR_LIN_LINSTE_Msk & (_UINT32_(value) << US_CSR_LIN_LINSTE_Pos))
#define   US_CSR_LIN_LINSTE_0_Val        _UINT32_(0x0)                                        /* (US_CSR) No LIN synch tolerance error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINSTE_1_Val        _UINT32_(0x1)                                        /* (US_CSR) A LIN synch tolerance error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINSTE_0              (US_CSR_LIN_LINSTE_0_Val << US_CSR_LIN_LINSTE_Pos) /* (US_CSR) No LIN synch tolerance error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINSTE_1              (US_CSR_LIN_LINSTE_1_Val << US_CSR_LIN_LINSTE_Pos) /* (US_CSR) A LIN synch tolerance error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (US_CSR) LIN Header Timeout Error Position */
#define US_CSR_LIN_LINHTE_Msk            (_UINT32_(0x1) << US_CSR_LIN_LINHTE_Pos)        /* (US_CSR) LIN Header Timeout Error Mask */
#define US_CSR_LIN_LINHTE(value)         (US_CSR_LIN_LINHTE_Msk & (_UINT32_(value) << US_CSR_LIN_LINHTE_Pos))
#define   US_CSR_LIN_LINHTE_0_Val        _UINT32_(0x0)                                        /* (US_CSR) No LIN header timeout error has been detected since the last RSTSTA command was issued.  */
#define   US_CSR_LIN_LINHTE_1_Val        _UINT32_(0x1)                                        /* (US_CSR) A LIN header timeout error has been detected since the last RSTSTA command was issued.  */
#define US_CSR_LIN_LINHTE_0              (US_CSR_LIN_LINHTE_0_Val << US_CSR_LIN_LINHTE_Pos) /* (US_CSR) No LIN header timeout error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_LINHTE_1              (US_CSR_LIN_LINHTE_1_Val << US_CSR_LIN_LINHTE_Pos) /* (US_CSR) A LIN header timeout error has been detected since the last RSTSTA command was issued. Position */
#define US_CSR_LIN_Msk                   _UINT32_(0xFEA0E3E3)                                 /* (US_CSR_LIN) Register Mask  */


/* -------- US_RHR : (FLEXCOM Offset: 0x218) ( R/ 32) USART Receive Holding Register -------- */
#define US_RHR_RESETVALUE                _UINT32_(0x00)                                       /*  (US_RHR) USART Receive Holding Register  Reset Value */

#define US_RHR_RXCHR_Pos                 _UINT32_(0)                                          /* (US_RHR) Received Character Position */
#define US_RHR_RXCHR_Msk                 (_UINT32_(0x1FF) << US_RHR_RXCHR_Pos)           /* (US_RHR) Received Character Mask */
#define US_RHR_RXCHR(value)              (US_RHR_RXCHR_Msk & (_UINT32_(value) << US_RHR_RXCHR_Pos)) /* Assignment of value for RXCHR in the US_RHR register */
#define US_RHR_RXSYNH_Pos                _UINT32_(15)                                         /* (US_RHR) Received Sync Position */
#define US_RHR_RXSYNH_Msk                (_UINT32_(0x1) << US_RHR_RXSYNH_Pos)            /* (US_RHR) Received Sync Mask */
#define US_RHR_RXSYNH(value)             (US_RHR_RXSYNH_Msk & (_UINT32_(value) << US_RHR_RXSYNH_Pos)) /* Assignment of value for RXSYNH in the US_RHR register */
#define   US_RHR_RXSYNH_0_Val            _UINT32_(0x0)                                        /* (US_RHR) Last character received is a data.  */
#define   US_RHR_RXSYNH_1_Val            _UINT32_(0x1)                                        /* (US_RHR) Last character received is a command.  */
#define US_RHR_RXSYNH_0                  (US_RHR_RXSYNH_0_Val << US_RHR_RXSYNH_Pos) /* (US_RHR) Last character received is a data. Position */
#define US_RHR_RXSYNH_1                  (US_RHR_RXSYNH_1_Val << US_RHR_RXSYNH_Pos) /* (US_RHR) Last character received is a command. Position */
#define US_RHR_Msk                       _UINT32_(0x000081FF)                                 /* (US_RHR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos _UINT32_(0)                                          /* (US_RHR) Received Characters Position */
#define US_RHR_FIFO_MULTI_DATA_RXCHR0_Msk (_UINT32_(0xFF) << US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos) /* (US_RHR) Received Characters Mask */
#define US_RHR_FIFO_MULTI_DATA_RXCHR0(value) (US_RHR_FIFO_MULTI_DATA_RXCHR0_Msk & (_UINT32_(value) << US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos))
#define US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos _UINT32_(8)                                          /* (US_RHR) Received Characters Position */
#define US_RHR_FIFO_MULTI_DATA_RXCHR1_Msk (_UINT32_(0xFF) << US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos) /* (US_RHR) Received Characters Mask */
#define US_RHR_FIFO_MULTI_DATA_RXCHR1(value) (US_RHR_FIFO_MULTI_DATA_RXCHR1_Msk & (_UINT32_(value) << US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos))
#define US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos _UINT32_(16)                                         /* (US_RHR) Received Characters Position */
#define US_RHR_FIFO_MULTI_DATA_RXCHR2_Msk (_UINT32_(0xFF) << US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos) /* (US_RHR) Received Characters Mask */
#define US_RHR_FIFO_MULTI_DATA_RXCHR2(value) (US_RHR_FIFO_MULTI_DATA_RXCHR2_Msk & (_UINT32_(value) << US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos))
#define US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos _UINT32_(24)                                         /* (US_RHR) Received Characters Position */
#define US_RHR_FIFO_MULTI_DATA_RXCHR3_Msk (_UINT32_(0xFF) << US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos) /* (US_RHR) Received Characters Mask */
#define US_RHR_FIFO_MULTI_DATA_RXCHR3(value) (US_RHR_FIFO_MULTI_DATA_RXCHR3_Msk & (_UINT32_(value) << US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos))
#define US_RHR_FIFO_MULTI_DATA_Msk       _UINT32_(0xFFFFFFFF)                                 /* (US_RHR_FIFO_MULTI_DATA) Register Mask  */


/* -------- US_THR : (FLEXCOM Offset: 0x21C) ( /W 32) USART Transmit Holding Register -------- */
#define US_THR_TXCHR_Pos                 _UINT32_(0)                                          /* (US_THR) Character to be Transmitted Position */
#define US_THR_TXCHR_Msk                 (_UINT32_(0x1FF) << US_THR_TXCHR_Pos)           /* (US_THR) Character to be Transmitted Mask */
#define US_THR_TXCHR(value)              (US_THR_TXCHR_Msk & (_UINT32_(value) << US_THR_TXCHR_Pos)) /* Assignment of value for TXCHR in the US_THR register */
#define US_THR_TXSYNH_Pos                _UINT32_(15)                                         /* (US_THR) Sync Field to be Transmitted Position */
#define US_THR_TXSYNH_Msk                (_UINT32_(0x1) << US_THR_TXSYNH_Pos)            /* (US_THR) Sync Field to be Transmitted Mask */
#define US_THR_TXSYNH(value)             (US_THR_TXSYNH_Msk & (_UINT32_(value) << US_THR_TXSYNH_Pos)) /* Assignment of value for TXSYNH in the US_THR register */
#define   US_THR_TXSYNH_0_Val            _UINT32_(0x0)                                        /* (US_THR) The next character sent is encoded as a data. Start frame delimiter is DATA SYNC.  */
#define   US_THR_TXSYNH_1_Val            _UINT32_(0x1)                                        /* (US_THR) The next character sent is encoded as a command. Start frame delimiter is COMMAND SYNC.  */
#define US_THR_TXSYNH_0                  (US_THR_TXSYNH_0_Val << US_THR_TXSYNH_Pos) /* (US_THR) The next character sent is encoded as a data. Start frame delimiter is DATA SYNC. Position */
#define US_THR_TXSYNH_1                  (US_THR_TXSYNH_1_Val << US_THR_TXSYNH_Pos) /* (US_THR) The next character sent is encoded as a command. Start frame delimiter is COMMAND SYNC. Position */
#define US_THR_Msk                       _UINT32_(0x000081FF)                                 /* (US_THR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define US_THR_FIFO_MULTI_DATA_TXCHR0_Pos _UINT32_(0)                                          /* (US_THR) Character to be Transmitted Position */
#define US_THR_FIFO_MULTI_DATA_TXCHR0_Msk (_UINT32_(0xFF) << US_THR_FIFO_MULTI_DATA_TXCHR0_Pos) /* (US_THR) Character to be Transmitted Mask */
#define US_THR_FIFO_MULTI_DATA_TXCHR0(value) (US_THR_FIFO_MULTI_DATA_TXCHR0_Msk & (_UINT32_(value) << US_THR_FIFO_MULTI_DATA_TXCHR0_Pos))
#define US_THR_FIFO_MULTI_DATA_TXCHR1_Pos _UINT32_(8)                                          /* (US_THR) Character to be Transmitted Position */
#define US_THR_FIFO_MULTI_DATA_TXCHR1_Msk (_UINT32_(0xFF) << US_THR_FIFO_MULTI_DATA_TXCHR1_Pos) /* (US_THR) Character to be Transmitted Mask */
#define US_THR_FIFO_MULTI_DATA_TXCHR1(value) (US_THR_FIFO_MULTI_DATA_TXCHR1_Msk & (_UINT32_(value) << US_THR_FIFO_MULTI_DATA_TXCHR1_Pos))
#define US_THR_FIFO_MULTI_DATA_TXCHR2_Pos _UINT32_(16)                                         /* (US_THR) Character to be Transmitted Position */
#define US_THR_FIFO_MULTI_DATA_TXCHR2_Msk (_UINT32_(0xFF) << US_THR_FIFO_MULTI_DATA_TXCHR2_Pos) /* (US_THR) Character to be Transmitted Mask */
#define US_THR_FIFO_MULTI_DATA_TXCHR2(value) (US_THR_FIFO_MULTI_DATA_TXCHR2_Msk & (_UINT32_(value) << US_THR_FIFO_MULTI_DATA_TXCHR2_Pos))
#define US_THR_FIFO_MULTI_DATA_TXCHR3_Pos _UINT32_(24)                                         /* (US_THR) Character to be Transmitted Position */
#define US_THR_FIFO_MULTI_DATA_TXCHR3_Msk (_UINT32_(0xFF) << US_THR_FIFO_MULTI_DATA_TXCHR3_Pos) /* (US_THR) Character to be Transmitted Mask */
#define US_THR_FIFO_MULTI_DATA_TXCHR3(value) (US_THR_FIFO_MULTI_DATA_TXCHR3_Msk & (_UINT32_(value) << US_THR_FIFO_MULTI_DATA_TXCHR3_Pos))
#define US_THR_FIFO_MULTI_DATA_Msk       _UINT32_(0xFFFFFFFF)                                 /* (US_THR_FIFO_MULTI_DATA) Register Mask  */


/* -------- US_BRGR : (FLEXCOM Offset: 0x220) (R/W 32) USART Baud Rate Generator Register -------- */
#define US_BRGR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_BRGR) USART Baud Rate Generator Register  Reset Value */

#define US_BRGR_CD_Pos                   _UINT32_(0)                                          /* (US_BRGR) Clock Divider Position */
#define US_BRGR_CD_Msk                   (_UINT32_(0xFFFF) << US_BRGR_CD_Pos)            /* (US_BRGR) Clock Divider Mask */
#define US_BRGR_CD(value)                (US_BRGR_CD_Msk & (_UINT32_(value) << US_BRGR_CD_Pos)) /* Assignment of value for CD in the US_BRGR register */
#define US_BRGR_FP_Pos                   _UINT32_(16)                                         /* (US_BRGR) Fractional Part Position */
#define US_BRGR_FP_Msk                   (_UINT32_(0x7) << US_BRGR_FP_Pos)               /* (US_BRGR) Fractional Part Mask */
#define US_BRGR_FP(value)                (US_BRGR_FP_Msk & (_UINT32_(value) << US_BRGR_FP_Pos)) /* Assignment of value for FP in the US_BRGR register */
#define   US_BRGR_FP_0_Val               _UINT32_(0x0)                                        /* (US_BRGR) Fractional divider is disabled.  */
#define US_BRGR_FP_0                     (US_BRGR_FP_0_Val << US_BRGR_FP_Pos)       /* (US_BRGR) Fractional divider is disabled. Position */
#define US_BRGR_Msk                      _UINT32_(0x0007FFFF)                                 /* (US_BRGR) Register Mask  */


/* -------- US_RTOR : (FLEXCOM Offset: 0x224) (R/W 32) USART Receiver Timeout Register -------- */
#define US_RTOR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_RTOR) USART Receiver Timeout Register  Reset Value */

#define US_RTOR_TO_Pos                   _UINT32_(0)                                          /* (US_RTOR) Timeout Value Position */
#define US_RTOR_TO_Msk                   (_UINT32_(0x1FFFF) << US_RTOR_TO_Pos)           /* (US_RTOR) Timeout Value Mask */
#define US_RTOR_TO(value)                (US_RTOR_TO_Msk & (_UINT32_(value) << US_RTOR_TO_Pos)) /* Assignment of value for TO in the US_RTOR register */
#define   US_RTOR_TO_0_Val               _UINT32_(0x0)                                        /* (US_RTOR) The receiver timeout is disabled.  */
#define US_RTOR_TO_0                     (US_RTOR_TO_0_Val << US_RTOR_TO_Pos)       /* (US_RTOR) The receiver timeout is disabled. Position */
#define US_RTOR_Msk                      _UINT32_(0x0001FFFF)                                 /* (US_RTOR) Register Mask  */


/* -------- US_TTGR : (FLEXCOM Offset: 0x228) (R/W 32) USART Transmitter Timeguard Register -------- */
#define US_TTGR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_TTGR) USART Transmitter Timeguard Register  Reset Value */

#define US_TTGR_TG_Pos                   _UINT32_(0)                                          /* (US_TTGR) Timeguard Value Position */
#define US_TTGR_TG_Msk                   (_UINT32_(0xFF) << US_TTGR_TG_Pos)              /* (US_TTGR) Timeguard Value Mask */
#define US_TTGR_TG(value)                (US_TTGR_TG_Msk & (_UINT32_(value) << US_TTGR_TG_Pos)) /* Assignment of value for TG in the US_TTGR register */
#define   US_TTGR_TG_0_Val               _UINT32_(0x0)                                        /* (US_TTGR) The transmitter timeguard is disabled.  */
#define US_TTGR_TG_0                     (US_TTGR_TG_0_Val << US_TTGR_TG_Pos)       /* (US_TTGR) The transmitter timeguard is disabled. Position */
#define US_TTGR_Msk                      _UINT32_(0x000000FF)                                 /* (US_TTGR) Register Mask  */


/* -------- US_FIDI : (FLEXCOM Offset: 0x240) (R/W 32) USART FI DI Ratio Register -------- */
#define US_FIDI_RESETVALUE               _UINT32_(0x174)                                      /*  (US_FIDI) USART FI DI Ratio Register  Reset Value */

#define US_FIDI_FI_DI_RATIO_Pos          _UINT32_(0)                                          /* (US_FIDI) FI Over DI Ratio Value Position */
#define US_FIDI_FI_DI_RATIO_Msk          (_UINT32_(0xFFFF) << US_FIDI_FI_DI_RATIO_Pos)   /* (US_FIDI) FI Over DI Ratio Value Mask */
#define US_FIDI_FI_DI_RATIO(value)       (US_FIDI_FI_DI_RATIO_Msk & (_UINT32_(value) << US_FIDI_FI_DI_RATIO_Pos)) /* Assignment of value for FI_DI_RATIO in the US_FIDI register */
#define   US_FIDI_FI_DI_RATIO_0_Val      _UINT32_(0x0)                                        /* (US_FIDI) If ISO7816 mode is selected, the baud rate generator generates no signal.  */
#define US_FIDI_FI_DI_RATIO_0            (US_FIDI_FI_DI_RATIO_0_Val << US_FIDI_FI_DI_RATIO_Pos) /* (US_FIDI) If ISO7816 mode is selected, the baud rate generator generates no signal. Position */
#define US_FIDI_Msk                      _UINT32_(0x0000FFFF)                                 /* (US_FIDI) Register Mask  */


/* -------- US_NER : (FLEXCOM Offset: 0x244) ( R/ 32) USART Number of Errors Register -------- */
#define US_NER_RESETVALUE                _UINT32_(0x00)                                       /*  (US_NER) USART Number of Errors Register  Reset Value */

#define US_NER_NB_ERRORS_Pos             _UINT32_(0)                                          /* (US_NER) Number of Errors Position */
#define US_NER_NB_ERRORS_Msk             (_UINT32_(0xFF) << US_NER_NB_ERRORS_Pos)        /* (US_NER) Number of Errors Mask */
#define US_NER_NB_ERRORS(value)          (US_NER_NB_ERRORS_Msk & (_UINT32_(value) << US_NER_NB_ERRORS_Pos)) /* Assignment of value for NB_ERRORS in the US_NER register */
#define US_NER_Msk                       _UINT32_(0x000000FF)                                 /* (US_NER) Register Mask  */


/* -------- US_IF : (FLEXCOM Offset: 0x24C) (R/W 32) USART IrDA Filter Register -------- */
#define US_IF_RESETVALUE                 _UINT32_(0x00)                                       /*  (US_IF) USART IrDA Filter Register  Reset Value */

#define US_IF_IRDA_FILTER_Pos            _UINT32_(0)                                          /* (US_IF) IrDA Filter Position */
#define US_IF_IRDA_FILTER_Msk            (_UINT32_(0xFF) << US_IF_IRDA_FILTER_Pos)       /* (US_IF) IrDA Filter Mask */
#define US_IF_IRDA_FILTER(value)         (US_IF_IRDA_FILTER_Msk & (_UINT32_(value) << US_IF_IRDA_FILTER_Pos)) /* Assignment of value for IRDA_FILTER in the US_IF register */
#define US_IF_Msk                        _UINT32_(0x000000FF)                                 /* (US_IF) Register Mask  */


/* -------- US_MAN : (FLEXCOM Offset: 0x250) (R/W 32) USART Manchester Configuration Register -------- */
#define US_MAN_RESETVALUE                _UINT32_(0xB0011004)                                 /*  (US_MAN) USART Manchester Configuration Register  Reset Value */

#define US_MAN_TX_PL_Pos                 _UINT32_(0)                                          /* (US_MAN) Transmitter Preamble Length Position */
#define US_MAN_TX_PL_Msk                 (_UINT32_(0xF) << US_MAN_TX_PL_Pos)             /* (US_MAN) Transmitter Preamble Length Mask */
#define US_MAN_TX_PL(value)              (US_MAN_TX_PL_Msk & (_UINT32_(value) << US_MAN_TX_PL_Pos)) /* Assignment of value for TX_PL in the US_MAN register */
#define   US_MAN_TX_PL_0_Val             _UINT32_(0x0)                                        /* (US_MAN) The transmitter preamble pattern generation is disabled  */
#define US_MAN_TX_PL_0                   (US_MAN_TX_PL_0_Val << US_MAN_TX_PL_Pos)   /* (US_MAN) The transmitter preamble pattern generation is disabled Position */
#define US_MAN_TX_PP_Pos                 _UINT32_(8)                                          /* (US_MAN) Transmitter Preamble Pattern Position */
#define US_MAN_TX_PP_Msk                 (_UINT32_(0x3) << US_MAN_TX_PP_Pos)             /* (US_MAN) Transmitter Preamble Pattern Mask */
#define US_MAN_TX_PP(value)              (US_MAN_TX_PP_Msk & (_UINT32_(value) << US_MAN_TX_PP_Pos)) /* Assignment of value for TX_PP in the US_MAN register */
#define   US_MAN_TX_PP_ALL_ONE_Val       _UINT32_(0x0)                                        /* (US_MAN) The preamble is composed of '1's  */
#define   US_MAN_TX_PP_ALL_ZERO_Val      _UINT32_(0x1)                                        /* (US_MAN) The preamble is composed of '0's  */
#define   US_MAN_TX_PP_ZERO_ONE_Val      _UINT32_(0x2)                                        /* (US_MAN) The preamble is composed of '01's  */
#define   US_MAN_TX_PP_ONE_ZERO_Val      _UINT32_(0x3)                                        /* (US_MAN) The preamble is composed of '10's  */
#define US_MAN_TX_PP_ALL_ONE             (US_MAN_TX_PP_ALL_ONE_Val << US_MAN_TX_PP_Pos) /* (US_MAN) The preamble is composed of '1's Position */
#define US_MAN_TX_PP_ALL_ZERO            (US_MAN_TX_PP_ALL_ZERO_Val << US_MAN_TX_PP_Pos) /* (US_MAN) The preamble is composed of '0's Position */
#define US_MAN_TX_PP_ZERO_ONE            (US_MAN_TX_PP_ZERO_ONE_Val << US_MAN_TX_PP_Pos) /* (US_MAN) The preamble is composed of '01's Position */
#define US_MAN_TX_PP_ONE_ZERO            (US_MAN_TX_PP_ONE_ZERO_Val << US_MAN_TX_PP_Pos) /* (US_MAN) The preamble is composed of '10's Position */
#define US_MAN_TX_MPOL_Pos               _UINT32_(12)                                         /* (US_MAN) Transmitter Manchester Polarity Position */
#define US_MAN_TX_MPOL_Msk               (_UINT32_(0x1) << US_MAN_TX_MPOL_Pos)           /* (US_MAN) Transmitter Manchester Polarity Mask */
#define US_MAN_TX_MPOL(value)            (US_MAN_TX_MPOL_Msk & (_UINT32_(value) << US_MAN_TX_MPOL_Pos)) /* Assignment of value for TX_MPOL in the US_MAN register */
#define   US_MAN_TX_MPOL_0_Val           _UINT32_(0x0)                                        /* (US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition.  */
#define   US_MAN_TX_MPOL_1_Val           _UINT32_(0x1)                                        /* (US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition.  */
#define US_MAN_TX_MPOL_0                 (US_MAN_TX_MPOL_0_Val << US_MAN_TX_MPOL_Pos) /* (US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition. Position */
#define US_MAN_TX_MPOL_1                 (US_MAN_TX_MPOL_1_Val << US_MAN_TX_MPOL_Pos) /* (US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition. Position */
#define US_MAN_RX_PL_Pos                 _UINT32_(16)                                         /* (US_MAN) Receiver Preamble Length Position */
#define US_MAN_RX_PL_Msk                 (_UINT32_(0xF) << US_MAN_RX_PL_Pos)             /* (US_MAN) Receiver Preamble Length Mask */
#define US_MAN_RX_PL(value)              (US_MAN_RX_PL_Msk & (_UINT32_(value) << US_MAN_RX_PL_Pos)) /* Assignment of value for RX_PL in the US_MAN register */
#define   US_MAN_RX_PL_0_Val             _UINT32_(0x0)                                        /* (US_MAN) The receiver preamble pattern detection is disabled  */
#define US_MAN_RX_PL_0                   (US_MAN_RX_PL_0_Val << US_MAN_RX_PL_Pos)   /* (US_MAN) The receiver preamble pattern detection is disabled Position */
#define US_MAN_RX_PP_Pos                 _UINT32_(24)                                         /* (US_MAN) Receiver Preamble Pattern detected Position */
#define US_MAN_RX_PP_Msk                 (_UINT32_(0x3) << US_MAN_RX_PP_Pos)             /* (US_MAN) Receiver Preamble Pattern detected Mask */
#define US_MAN_RX_PP(value)              (US_MAN_RX_PP_Msk & (_UINT32_(value) << US_MAN_RX_PP_Pos)) /* Assignment of value for RX_PP in the US_MAN register */
#define   US_MAN_RX_PP_ALL_ONE_Val       _UINT32_(0x0)                                        /* (US_MAN) The preamble is composed of '1's  */
#define   US_MAN_RX_PP_ALL_ZERO_Val      _UINT32_(0x1)                                        /* (US_MAN) The preamble is composed of '0's  */
#define   US_MAN_RX_PP_ZERO_ONE_Val      _UINT32_(0x2)                                        /* (US_MAN) The preamble is composed of '01's  */
#define   US_MAN_RX_PP_ONE_ZERO_Val      _UINT32_(0x3)                                        /* (US_MAN) The preamble is composed of '10's  */
#define US_MAN_RX_PP_ALL_ONE             (US_MAN_RX_PP_ALL_ONE_Val << US_MAN_RX_PP_Pos) /* (US_MAN) The preamble is composed of '1's Position */
#define US_MAN_RX_PP_ALL_ZERO            (US_MAN_RX_PP_ALL_ZERO_Val << US_MAN_RX_PP_Pos) /* (US_MAN) The preamble is composed of '0's Position */
#define US_MAN_RX_PP_ZERO_ONE            (US_MAN_RX_PP_ZERO_ONE_Val << US_MAN_RX_PP_Pos) /* (US_MAN) The preamble is composed of '01's Position */
#define US_MAN_RX_PP_ONE_ZERO            (US_MAN_RX_PP_ONE_ZERO_Val << US_MAN_RX_PP_Pos) /* (US_MAN) The preamble is composed of '10's Position */
#define US_MAN_RX_MPOL_Pos               _UINT32_(28)                                         /* (US_MAN) Receiver Manchester Polarity Position */
#define US_MAN_RX_MPOL_Msk               (_UINT32_(0x1) << US_MAN_RX_MPOL_Pos)           /* (US_MAN) Receiver Manchester Polarity Mask */
#define US_MAN_RX_MPOL(value)            (US_MAN_RX_MPOL_Msk & (_UINT32_(value) << US_MAN_RX_MPOL_Pos)) /* Assignment of value for RX_MPOL in the US_MAN register */
#define   US_MAN_RX_MPOL_0_Val           _UINT32_(0x0)                                        /* (US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition.  */
#define   US_MAN_RX_MPOL_1_Val           _UINT32_(0x1)                                        /* (US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition.  */
#define US_MAN_RX_MPOL_0                 (US_MAN_RX_MPOL_0_Val << US_MAN_RX_MPOL_Pos) /* (US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition. Position */
#define US_MAN_RX_MPOL_1                 (US_MAN_RX_MPOL_1_Val << US_MAN_RX_MPOL_Pos) /* (US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition. Position */
#define US_MAN_ONE_Pos                   _UINT32_(29)                                         /* (US_MAN) Must Be Set to 1 Position */
#define US_MAN_ONE_Msk                   (_UINT32_(0x1) << US_MAN_ONE_Pos)               /* (US_MAN) Must Be Set to 1 Mask */
#define US_MAN_ONE(value)                (US_MAN_ONE_Msk & (_UINT32_(value) << US_MAN_ONE_Pos)) /* Assignment of value for ONE in the US_MAN register */
#define US_MAN_DRIFT_Pos                 _UINT32_(30)                                         /* (US_MAN) Drift Compensation Position */
#define US_MAN_DRIFT_Msk                 (_UINT32_(0x1) << US_MAN_DRIFT_Pos)             /* (US_MAN) Drift Compensation Mask */
#define US_MAN_DRIFT(value)              (US_MAN_DRIFT_Msk & (_UINT32_(value) << US_MAN_DRIFT_Pos)) /* Assignment of value for DRIFT in the US_MAN register */
#define   US_MAN_DRIFT_0_Val             _UINT32_(0x0)                                        /* (US_MAN) The USART cannot recover from an important clock drift  */
#define   US_MAN_DRIFT_1_Val             _UINT32_(0x1)                                        /* (US_MAN) The USART can recover from clock drift. The 16X Clock mode must be enabled.  */
#define US_MAN_DRIFT_0                   (US_MAN_DRIFT_0_Val << US_MAN_DRIFT_Pos)   /* (US_MAN) The USART cannot recover from an important clock drift Position */
#define US_MAN_DRIFT_1                   (US_MAN_DRIFT_1_Val << US_MAN_DRIFT_Pos)   /* (US_MAN) The USART can recover from clock drift. The 16X Clock mode must be enabled. Position */
#define US_MAN_RXIDLEV_Pos               _UINT32_(31)                                         /* (US_MAN) Receiver Idle Value Position */
#define US_MAN_RXIDLEV_Msk               (_UINT32_(0x1) << US_MAN_RXIDLEV_Pos)           /* (US_MAN) Receiver Idle Value Mask */
#define US_MAN_RXIDLEV(value)            (US_MAN_RXIDLEV_Msk & (_UINT32_(value) << US_MAN_RXIDLEV_Pos)) /* Assignment of value for RXIDLEV in the US_MAN register */
#define   US_MAN_RXIDLEV_0_Val           _UINT32_(0x0)                                        /* (US_MAN) Receiver line idle value is 0.  */
#define   US_MAN_RXIDLEV_1_Val           _UINT32_(0x1)                                        /* (US_MAN) Receiver line idle value is 1.  */
#define US_MAN_RXIDLEV_0                 (US_MAN_RXIDLEV_0_Val << US_MAN_RXIDLEV_Pos) /* (US_MAN) Receiver line idle value is 0. Position */
#define US_MAN_RXIDLEV_1                 (US_MAN_RXIDLEV_1_Val << US_MAN_RXIDLEV_Pos) /* (US_MAN) Receiver line idle value is 1. Position */
#define US_MAN_Msk                       _UINT32_(0xF30F130F)                                 /* (US_MAN) Register Mask  */


/* -------- US_LINMR : (FLEXCOM Offset: 0x254) (R/W 32) USART LIN Mode Register -------- */
#define US_LINMR_RESETVALUE              _UINT32_(0x00)                                       /*  (US_LINMR) USART LIN Mode Register  Reset Value */

#define US_LINMR_NACT_Pos                _UINT32_(0)                                          /* (US_LINMR) LIN Node Action Position */
#define US_LINMR_NACT_Msk                (_UINT32_(0x3) << US_LINMR_NACT_Pos)            /* (US_LINMR) LIN Node Action Mask */
#define US_LINMR_NACT(value)             (US_LINMR_NACT_Msk & (_UINT32_(value) << US_LINMR_NACT_Pos)) /* Assignment of value for NACT in the US_LINMR register */
#define   US_LINMR_NACT_PUBLISH_Val      _UINT32_(0x0)                                        /* (US_LINMR) The USART transmits the response.  */
#define   US_LINMR_NACT_SUBSCRIBE_Val    _UINT32_(0x1)                                        /* (US_LINMR) The USART receives the response.  */
#define   US_LINMR_NACT_IGNORE_Val       _UINT32_(0x2)                                        /* (US_LINMR) The USART does not transmit and does not receive the response.  */
#define US_LINMR_NACT_PUBLISH            (US_LINMR_NACT_PUBLISH_Val << US_LINMR_NACT_Pos) /* (US_LINMR) The USART transmits the response. Position */
#define US_LINMR_NACT_SUBSCRIBE          (US_LINMR_NACT_SUBSCRIBE_Val << US_LINMR_NACT_Pos) /* (US_LINMR) The USART receives the response. Position */
#define US_LINMR_NACT_IGNORE             (US_LINMR_NACT_IGNORE_Val << US_LINMR_NACT_Pos) /* (US_LINMR) The USART does not transmit and does not receive the response. Position */
#define US_LINMR_PARDIS_Pos              _UINT32_(2)                                          /* (US_LINMR) Parity Disable Position */
#define US_LINMR_PARDIS_Msk              (_UINT32_(0x1) << US_LINMR_PARDIS_Pos)          /* (US_LINMR) Parity Disable Mask */
#define US_LINMR_PARDIS(value)           (US_LINMR_PARDIS_Msk & (_UINT32_(value) << US_LINMR_PARDIS_Pos)) /* Assignment of value for PARDIS in the US_LINMR register */
#define   US_LINMR_PARDIS_0_Val          _UINT32_(0x0)                                        /* (US_LINMR) In host node configuration, the identifier parity is computed and sent automatically. In host node and client node configuration, the parity is checked automatically.  */
#define   US_LINMR_PARDIS_1_Val          _UINT32_(0x1)                                        /* (US_LINMR) Whatever the node configuration is, the Identifier parity is not computed/sent and it is not checked.  */
#define US_LINMR_PARDIS_0                (US_LINMR_PARDIS_0_Val << US_LINMR_PARDIS_Pos) /* (US_LINMR) In host node configuration, the identifier parity is computed and sent automatically. In host node and client node configuration, the parity is checked automatically. Position */
#define US_LINMR_PARDIS_1                (US_LINMR_PARDIS_1_Val << US_LINMR_PARDIS_Pos) /* (US_LINMR) Whatever the node configuration is, the Identifier parity is not computed/sent and it is not checked. Position */
#define US_LINMR_CHKDIS_Pos              _UINT32_(3)                                          /* (US_LINMR) Checksum Disable Position */
#define US_LINMR_CHKDIS_Msk              (_UINT32_(0x1) << US_LINMR_CHKDIS_Pos)          /* (US_LINMR) Checksum Disable Mask */
#define US_LINMR_CHKDIS(value)           (US_LINMR_CHKDIS_Msk & (_UINT32_(value) << US_LINMR_CHKDIS_Pos)) /* Assignment of value for CHKDIS in the US_LINMR register */
#define   US_LINMR_CHKDIS_0_Val          _UINT32_(0x0)                                        /* (US_LINMR) In host node configuration, the checksum is computed and sent automatically. In client node configuration, the checksum is checked automatically.  */
#define   US_LINMR_CHKDIS_1_Val          _UINT32_(0x1)                                        /* (US_LINMR) Whatever the node configuration is, the checksum is not computed/sent and it is not checked.  */
#define US_LINMR_CHKDIS_0                (US_LINMR_CHKDIS_0_Val << US_LINMR_CHKDIS_Pos) /* (US_LINMR) In host node configuration, the checksum is computed and sent automatically. In client node configuration, the checksum is checked automatically. Position */
#define US_LINMR_CHKDIS_1                (US_LINMR_CHKDIS_1_Val << US_LINMR_CHKDIS_Pos) /* (US_LINMR) Whatever the node configuration is, the checksum is not computed/sent and it is not checked. Position */
#define US_LINMR_CHKTYP_Pos              _UINT32_(4)                                          /* (US_LINMR) Checksum Type Position */
#define US_LINMR_CHKTYP_Msk              (_UINT32_(0x1) << US_LINMR_CHKTYP_Pos)          /* (US_LINMR) Checksum Type Mask */
#define US_LINMR_CHKTYP(value)           (US_LINMR_CHKTYP_Msk & (_UINT32_(value) << US_LINMR_CHKTYP_Pos)) /* Assignment of value for CHKTYP in the US_LINMR register */
#define   US_LINMR_CHKTYP_0_Val          _UINT32_(0x0)                                        /* (US_LINMR) LIN 2.0 "enhanced" checksum  */
#define   US_LINMR_CHKTYP_1_Val          _UINT32_(0x1)                                        /* (US_LINMR) LIN 1.3 "classic" checksum  */
#define US_LINMR_CHKTYP_0                (US_LINMR_CHKTYP_0_Val << US_LINMR_CHKTYP_Pos) /* (US_LINMR) LIN 2.0 "enhanced" checksum Position */
#define US_LINMR_CHKTYP_1                (US_LINMR_CHKTYP_1_Val << US_LINMR_CHKTYP_Pos) /* (US_LINMR) LIN 1.3 "classic" checksum Position */
#define US_LINMR_DLM_Pos                 _UINT32_(5)                                          /* (US_LINMR) Data Length Mode Position */
#define US_LINMR_DLM_Msk                 (_UINT32_(0x1) << US_LINMR_DLM_Pos)             /* (US_LINMR) Data Length Mode Mask */
#define US_LINMR_DLM(value)              (US_LINMR_DLM_Msk & (_UINT32_(value) << US_LINMR_DLM_Pos)) /* Assignment of value for DLM in the US_LINMR register */
#define   US_LINMR_DLM_0_Val             _UINT32_(0x0)                                        /* (US_LINMR) The response data length is defined by the DLC field of this register.  */
#define   US_LINMR_DLM_1_Val             _UINT32_(0x1)                                        /* (US_LINMR) The response data length is defined by the bits 5 and 6 of the identifier (US_LINIR.IDCHR).  */
#define US_LINMR_DLM_0                   (US_LINMR_DLM_0_Val << US_LINMR_DLM_Pos)   /* (US_LINMR) The response data length is defined by the DLC field of this register. Position */
#define US_LINMR_DLM_1                   (US_LINMR_DLM_1_Val << US_LINMR_DLM_Pos)   /* (US_LINMR) The response data length is defined by the bits 5 and 6 of the identifier (US_LINIR.IDCHR). Position */
#define US_LINMR_FSDIS_Pos               _UINT32_(6)                                          /* (US_LINMR) Frame Slot Mode Disable Position */
#define US_LINMR_FSDIS_Msk               (_UINT32_(0x1) << US_LINMR_FSDIS_Pos)           /* (US_LINMR) Frame Slot Mode Disable Mask */
#define US_LINMR_FSDIS(value)            (US_LINMR_FSDIS_Msk & (_UINT32_(value) << US_LINMR_FSDIS_Pos)) /* Assignment of value for FSDIS in the US_LINMR register */
#define   US_LINMR_FSDIS_0_Val           _UINT32_(0x0)                                        /* (US_LINMR) The Frame Slot mode is enabled.  */
#define   US_LINMR_FSDIS_1_Val           _UINT32_(0x1)                                        /* (US_LINMR) The Frame Slot mode is disabled.  */
#define US_LINMR_FSDIS_0                 (US_LINMR_FSDIS_0_Val << US_LINMR_FSDIS_Pos) /* (US_LINMR) The Frame Slot mode is enabled. Position */
#define US_LINMR_FSDIS_1                 (US_LINMR_FSDIS_1_Val << US_LINMR_FSDIS_Pos) /* (US_LINMR) The Frame Slot mode is disabled. Position */
#define US_LINMR_WKUPTYP_Pos             _UINT32_(7)                                          /* (US_LINMR) Wake-up Signal Type Position */
#define US_LINMR_WKUPTYP_Msk             (_UINT32_(0x1) << US_LINMR_WKUPTYP_Pos)         /* (US_LINMR) Wake-up Signal Type Mask */
#define US_LINMR_WKUPTYP(value)          (US_LINMR_WKUPTYP_Msk & (_UINT32_(value) << US_LINMR_WKUPTYP_Pos)) /* Assignment of value for WKUPTYP in the US_LINMR register */
#define   US_LINMR_WKUPTYP_0_Val         _UINT32_(0x0)                                        /* (US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 2.0 wake-up signal.  */
#define   US_LINMR_WKUPTYP_1_Val         _UINT32_(0x1)                                        /* (US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 1.3 wake-up signal.  */
#define US_LINMR_WKUPTYP_0               (US_LINMR_WKUPTYP_0_Val << US_LINMR_WKUPTYP_Pos) /* (US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 2.0 wake-up signal. Position */
#define US_LINMR_WKUPTYP_1               (US_LINMR_WKUPTYP_1_Val << US_LINMR_WKUPTYP_Pos) /* (US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 1.3 wake-up signal. Position */
#define US_LINMR_DLC_Pos                 _UINT32_(8)                                          /* (US_LINMR) Data Length Control Position */
#define US_LINMR_DLC_Msk                 (_UINT32_(0xFF) << US_LINMR_DLC_Pos)            /* (US_LINMR) Data Length Control Mask */
#define US_LINMR_DLC(value)              (US_LINMR_DLC_Msk & (_UINT32_(value) << US_LINMR_DLC_Pos)) /* Assignment of value for DLC in the US_LINMR register */
#define US_LINMR_PDCM_Pos                _UINT32_(16)                                         /* (US_LINMR) DMAC Mode Position */
#define US_LINMR_PDCM_Msk                (_UINT32_(0x1) << US_LINMR_PDCM_Pos)            /* (US_LINMR) DMAC Mode Mask */
#define US_LINMR_PDCM(value)             (US_LINMR_PDCM_Msk & (_UINT32_(value) << US_LINMR_PDCM_Pos)) /* Assignment of value for PDCM in the US_LINMR register */
#define   US_LINMR_PDCM_0_Val            _UINT32_(0x0)                                        /* (US_LINMR) The LIN mode register US_LINMR is not written by the DMAC.  */
#define   US_LINMR_PDCM_1_Val            _UINT32_(0x1)                                        /* (US_LINMR) The LIN mode register US_LINMR (excepting that flag) is written by the DMAC.  */
#define US_LINMR_PDCM_0                  (US_LINMR_PDCM_0_Val << US_LINMR_PDCM_Pos) /* (US_LINMR) The LIN mode register US_LINMR is not written by the DMAC. Position */
#define US_LINMR_PDCM_1                  (US_LINMR_PDCM_1_Val << US_LINMR_PDCM_Pos) /* (US_LINMR) The LIN mode register US_LINMR (excepting that flag) is written by the DMAC. Position */
#define US_LINMR_SYNCDIS_Pos             _UINT32_(17)                                         /* (US_LINMR) Synchronization Disable Position */
#define US_LINMR_SYNCDIS_Msk             (_UINT32_(0x1) << US_LINMR_SYNCDIS_Pos)         /* (US_LINMR) Synchronization Disable Mask */
#define US_LINMR_SYNCDIS(value)          (US_LINMR_SYNCDIS_Msk & (_UINT32_(value) << US_LINMR_SYNCDIS_Pos)) /* Assignment of value for SYNCDIS in the US_LINMR register */
#define   US_LINMR_SYNCDIS_0_Val         _UINT32_(0x0)                                        /* (US_LINMR) The synchronization procedure is performed in LIN client node configuration.  */
#define   US_LINMR_SYNCDIS_1_Val         _UINT32_(0x1)                                        /* (US_LINMR) The synchronization procedure is not performed in LIN client node configuration.  */
#define US_LINMR_SYNCDIS_0               (US_LINMR_SYNCDIS_0_Val << US_LINMR_SYNCDIS_Pos) /* (US_LINMR) The synchronization procedure is performed in LIN client node configuration. Position */
#define US_LINMR_SYNCDIS_1               (US_LINMR_SYNCDIS_1_Val << US_LINMR_SYNCDIS_Pos) /* (US_LINMR) The synchronization procedure is not performed in LIN client node configuration. Position */
#define US_LINMR_Msk                     _UINT32_(0x0003FFFF)                                 /* (US_LINMR) Register Mask  */


/* -------- US_LINIR : (FLEXCOM Offset: 0x258) (R/W 32) USART LIN Identifier Register -------- */
#define US_LINIR_RESETVALUE              _UINT32_(0x00)                                       /*  (US_LINIR) USART LIN Identifier Register  Reset Value */

#define US_LINIR_IDCHR_Pos               _UINT32_(0)                                          /* (US_LINIR) Identifier Character Position */
#define US_LINIR_IDCHR_Msk               (_UINT32_(0xFF) << US_LINIR_IDCHR_Pos)          /* (US_LINIR) Identifier Character Mask */
#define US_LINIR_IDCHR(value)            (US_LINIR_IDCHR_Msk & (_UINT32_(value) << US_LINIR_IDCHR_Pos)) /* Assignment of value for IDCHR in the US_LINIR register */
#define US_LINIR_Msk                     _UINT32_(0x000000FF)                                 /* (US_LINIR) Register Mask  */


/* -------- US_LINBRR : (FLEXCOM Offset: 0x25C) ( R/ 32) USART LIN Baud Rate Register -------- */
#define US_LINBRR_RESETVALUE             _UINT32_(0x00)                                       /*  (US_LINBRR) USART LIN Baud Rate Register  Reset Value */

#define US_LINBRR_LINCD_Pos              _UINT32_(0)                                          /* (US_LINBRR) Clock Divider after Synchronization Position */
#define US_LINBRR_LINCD_Msk              (_UINT32_(0xFFFF) << US_LINBRR_LINCD_Pos)       /* (US_LINBRR) Clock Divider after Synchronization Mask */
#define US_LINBRR_LINCD(value)           (US_LINBRR_LINCD_Msk & (_UINT32_(value) << US_LINBRR_LINCD_Pos)) /* Assignment of value for LINCD in the US_LINBRR register */
#define US_LINBRR_LINFP_Pos              _UINT32_(16)                                         /* (US_LINBRR) Fractional Part after Synchronization Position */
#define US_LINBRR_LINFP_Msk              (_UINT32_(0x7) << US_LINBRR_LINFP_Pos)          /* (US_LINBRR) Fractional Part after Synchronization Mask */
#define US_LINBRR_LINFP(value)           (US_LINBRR_LINFP_Msk & (_UINT32_(value) << US_LINBRR_LINFP_Pos)) /* Assignment of value for LINFP in the US_LINBRR register */
#define US_LINBRR_Msk                    _UINT32_(0x0007FFFF)                                 /* (US_LINBRR) Register Mask  */


/* -------- US_CMPR : (FLEXCOM Offset: 0x290) (R/W 32) USART Comparison Register -------- */
#define US_CMPR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_CMPR) USART Comparison Register  Reset Value */

#define US_CMPR_VAL1_Pos                 _UINT32_(0)                                          /* (US_CMPR) First Comparison Value for Received Character Position */
#define US_CMPR_VAL1_Msk                 (_UINT32_(0x1FF) << US_CMPR_VAL1_Pos)           /* (US_CMPR) First Comparison Value for Received Character Mask */
#define US_CMPR_VAL1(value)              (US_CMPR_VAL1_Msk & (_UINT32_(value) << US_CMPR_VAL1_Pos)) /* Assignment of value for VAL1 in the US_CMPR register */
#define US_CMPR_CMPMODE_Pos              _UINT32_(12)                                         /* (US_CMPR) Comparison Mode Position */
#define US_CMPR_CMPMODE_Msk              (_UINT32_(0x3) << US_CMPR_CMPMODE_Pos)          /* (US_CMPR) Comparison Mode Mask */
#define US_CMPR_CMPMODE(value)           (US_CMPR_CMPMODE_Msk & (_UINT32_(value) << US_CMPR_CMPMODE_Pos)) /* Assignment of value for CMPMODE in the US_CMPR register */
#define   US_CMPR_CMPMODE_FLAG_ONLY_Val  _UINT32_(0x0)                                        /* (US_CMPR) Any character is received and comparison function drives CMP flag.  */
#define   US_CMPR_CMPMODE_START_CONDITION_Val _UINT32_(0x1)                                        /* (US_CMPR) Comparison condition must be met to start reception.  */
#define   US_CMPR_CMPMODE_FILTER_Val     _UINT32_(0x2)                                        /* (US_CMPR) Comparison must be met to receive the current data only  */
#define US_CMPR_CMPMODE_FLAG_ONLY        (US_CMPR_CMPMODE_FLAG_ONLY_Val << US_CMPR_CMPMODE_Pos) /* (US_CMPR) Any character is received and comparison function drives CMP flag. Position */
#define US_CMPR_CMPMODE_START_CONDITION  (US_CMPR_CMPMODE_START_CONDITION_Val << US_CMPR_CMPMODE_Pos) /* (US_CMPR) Comparison condition must be met to start reception. Position */
#define US_CMPR_CMPMODE_FILTER           (US_CMPR_CMPMODE_FILTER_Val << US_CMPR_CMPMODE_Pos) /* (US_CMPR) Comparison must be met to receive the current data only Position */
#define US_CMPR_CMPPAR_Pos               _UINT32_(14)                                         /* (US_CMPR) Compare Parity Position */
#define US_CMPR_CMPPAR_Msk               (_UINT32_(0x1) << US_CMPR_CMPPAR_Pos)           /* (US_CMPR) Compare Parity Mask */
#define US_CMPR_CMPPAR(value)            (US_CMPR_CMPPAR_Msk & (_UINT32_(value) << US_CMPR_CMPPAR_Pos)) /* Assignment of value for CMPPAR in the US_CMPR register */
#define   US_CMPR_CMPPAR_0_Val           _UINT32_(0x0)                                        /* (US_CMPR) The parity is not checked and a bad parity cannot prevent from waking up the system.  */
#define   US_CMPR_CMPPAR_1_Val           _UINT32_(0x1)                                        /* (US_CMPR) The parity is checked and a matching condition on data can be cancelled by an error on parity bit, so no wake-up is performed.  */
#define US_CMPR_CMPPAR_0                 (US_CMPR_CMPPAR_0_Val << US_CMPR_CMPPAR_Pos) /* (US_CMPR) The parity is not checked and a bad parity cannot prevent from waking up the system. Position */
#define US_CMPR_CMPPAR_1                 (US_CMPR_CMPPAR_1_Val << US_CMPR_CMPPAR_Pos) /* (US_CMPR) The parity is checked and a matching condition on data can be cancelled by an error on parity bit, so no wake-up is performed. Position */
#define US_CMPR_VAL2_Pos                 _UINT32_(16)                                         /* (US_CMPR) Second Comparison Value for Received Character Position */
#define US_CMPR_VAL2_Msk                 (_UINT32_(0x1FF) << US_CMPR_VAL2_Pos)           /* (US_CMPR) Second Comparison Value for Received Character Mask */
#define US_CMPR_VAL2(value)              (US_CMPR_VAL2_Msk & (_UINT32_(value) << US_CMPR_VAL2_Pos)) /* Assignment of value for VAL2 in the US_CMPR register */
#define US_CMPR_Msk                      _UINT32_(0x01FF71FF)                                 /* (US_CMPR) Register Mask  */


/* -------- US_FMR : (FLEXCOM Offset: 0x2A0) (R/W 32) USART FIFO Mode Register -------- */
#define US_FMR_RESETVALUE                _UINT32_(0x00)                                       /*  (US_FMR) USART FIFO Mode Register  Reset Value */

#define US_FMR_TXRDYM_Pos                _UINT32_(0)                                          /* (US_FMR) Transmitter Ready Mode Position */
#define US_FMR_TXRDYM_Msk                (_UINT32_(0x3) << US_FMR_TXRDYM_Pos)            /* (US_FMR) Transmitter Ready Mode Mask */
#define US_FMR_TXRDYM(value)             (US_FMR_TXRDYM_Msk & (_UINT32_(value) << US_FMR_TXRDYM_Pos)) /* Assignment of value for TXRDYM in the US_FMR register */
#define   US_FMR_TXRDYM_ONE_DATA_Val     _UINT32_(0x0)                                        /* (US_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte.  */
#define   US_FMR_TXRDYM_TWO_DATA_Val     _UINT32_(0x1)                                        /* (US_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   US_FMR_TXRDYM_FOUR_DATA_Val    _UINT32_(0x2)                                        /* (US_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA (chunk size=1 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   US_FMR_TXRDYM_EIGHT_DATA_Val   _UINT32_(0x3)                                        /* (US_FMR) TXRDY will be at level '1' when at least eight data can be written in the Transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define US_FMR_TXRDYM_ONE_DATA           (US_FMR_TXRDYM_ONE_DATA_Val << US_FMR_TXRDYM_Pos) /* (US_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte. Position */
#define US_FMR_TXRDYM_TWO_DATA           (US_FMR_TXRDYM_TWO_DATA_Val << US_FMR_TXRDYM_Pos) /* (US_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define US_FMR_TXRDYM_FOUR_DATA          (US_FMR_TXRDYM_FOUR_DATA_Val << US_FMR_TXRDYM_Pos) /* (US_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA (chunk size=1 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define US_FMR_TXRDYM_EIGHT_DATA         (US_FMR_TXRDYM_EIGHT_DATA_Val << US_FMR_TXRDYM_Pos) /* (US_FMR) TXRDY will be at level '1' when at least eight data can be written in the Transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define US_FMR_RXRDYM_Pos                _UINT32_(4)                                          /* (US_FMR) Receiver Ready Mode Position */
#define US_FMR_RXRDYM_Msk                (_UINT32_(0x3) << US_FMR_RXRDYM_Pos)            /* (US_FMR) Receiver Ready Mode Mask */
#define US_FMR_RXRDYM(value)             (US_FMR_RXRDYM_Msk & (_UINT32_(value) << US_FMR_RXRDYM_Pos)) /* Assignment of value for RXRDYM in the US_FMR register */
#define   US_FMR_RXRDYM_ONE_DATA_Val     _UINT32_(0x0)                                        /* (US_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte.  */
#define   US_FMR_RXRDYM_TWO_DATA_Val     _UINT32_(0x1)                                        /* (US_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA (chunk size=1 and halfword access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   US_FMR_RXRDYM_FOUR_DATA_Val    _UINT32_(0x2)                                        /* (US_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   US_FMR_RXRDYM_EIGHT_DATA_Val   _UINT32_(0x3)                                        /* (US_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define US_FMR_RXRDYM_ONE_DATA           (US_FMR_RXRDYM_ONE_DATA_Val << US_FMR_RXRDYM_Pos) /* (US_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte. Position */
#define US_FMR_RXRDYM_TWO_DATA           (US_FMR_RXRDYM_TWO_DATA_Val << US_FMR_RXRDYM_Pos) /* (US_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA (chunk size=1 and halfword access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define US_FMR_RXRDYM_FOUR_DATA          (US_FMR_RXRDYM_FOUR_DATA_Val << US_FMR_RXRDYM_Pos) /* (US_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define US_FMR_RXRDYM_EIGHT_DATA         (US_FMR_RXRDYM_EIGHT_DATA_Val << US_FMR_RXRDYM_Pos) /* (US_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define US_FMR_FRTSC_Pos                 _UINT32_(7)                                          /* (US_FMR) FIFO RTS Pin Control enable (Hardware Handshaking mode only) Position */
#define US_FMR_FRTSC_Msk                 (_UINT32_(0x1) << US_FMR_FRTSC_Pos)             /* (US_FMR) FIFO RTS Pin Control enable (Hardware Handshaking mode only) Mask */
#define US_FMR_FRTSC(value)              (US_FMR_FRTSC_Msk & (_UINT32_(value) << US_FMR_FRTSC_Pos)) /* Assignment of value for FRTSC in the US_FMR register */
#define   US_FMR_FRTSC_0_Val             _UINT32_(0x0)                                        /* (US_FMR) RTS pin is not controlled by Receive FIFO thresholds.  */
#define   US_FMR_FRTSC_1_Val             _UINT32_(0x1)                                        /* (US_FMR) RTS pin is controlled by Receive FIFO thresholds.  */
#define US_FMR_FRTSC_0                   (US_FMR_FRTSC_0_Val << US_FMR_FRTSC_Pos)   /* (US_FMR) RTS pin is not controlled by Receive FIFO thresholds. Position */
#define US_FMR_FRTSC_1                   (US_FMR_FRTSC_1_Val << US_FMR_FRTSC_Pos)   /* (US_FMR) RTS pin is controlled by Receive FIFO thresholds. Position */
#define US_FMR_TXFTHRES_Pos              _UINT32_(8)                                          /* (US_FMR) Transmit FIFO Threshold Position */
#define US_FMR_TXFTHRES_Msk              (_UINT32_(0x3F) << US_FMR_TXFTHRES_Pos)         /* (US_FMR) Transmit FIFO Threshold Mask */
#define US_FMR_TXFTHRES(value)           (US_FMR_TXFTHRES_Msk & (_UINT32_(value) << US_FMR_TXFTHRES_Pos)) /* Assignment of value for TXFTHRES in the US_FMR register */
#define US_FMR_RXFTHRES_Pos              _UINT32_(16)                                         /* (US_FMR) Receive FIFO Threshold Position */
#define US_FMR_RXFTHRES_Msk              (_UINT32_(0x3F) << US_FMR_RXFTHRES_Pos)         /* (US_FMR) Receive FIFO Threshold Mask */
#define US_FMR_RXFTHRES(value)           (US_FMR_RXFTHRES_Msk & (_UINT32_(value) << US_FMR_RXFTHRES_Pos)) /* Assignment of value for RXFTHRES in the US_FMR register */
#define US_FMR_RXFTHRES2_Pos             _UINT32_(24)                                         /* (US_FMR) Receive FIFO Threshold 2 Position */
#define US_FMR_RXFTHRES2_Msk             (_UINT32_(0x3F) << US_FMR_RXFTHRES2_Pos)        /* (US_FMR) Receive FIFO Threshold 2 Mask */
#define US_FMR_RXFTHRES2(value)          (US_FMR_RXFTHRES2_Msk & (_UINT32_(value) << US_FMR_RXFTHRES2_Pos)) /* Assignment of value for RXFTHRES2 in the US_FMR register */
#define US_FMR_Msk                       _UINT32_(0x3F3F3FB3)                                 /* (US_FMR) Register Mask  */


/* -------- US_FLR : (FLEXCOM Offset: 0x2A4) ( R/ 32) USART FIFO Level Register -------- */
#define US_FLR_RESETVALUE                _UINT32_(0x00)                                       /*  (US_FLR) USART FIFO Level Register  Reset Value */

#define US_FLR_TXFL_Pos                  _UINT32_(0)                                          /* (US_FLR) Transmit FIFO Level Position */
#define US_FLR_TXFL_Msk                  (_UINT32_(0x3F) << US_FLR_TXFL_Pos)             /* (US_FLR) Transmit FIFO Level Mask */
#define US_FLR_TXFL(value)               (US_FLR_TXFL_Msk & (_UINT32_(value) << US_FLR_TXFL_Pos)) /* Assignment of value for TXFL in the US_FLR register */
#define   US_FLR_TXFL_0_Val              _UINT32_(0x0)                                        /* (US_FLR) There is no data in the Transmit FIFO  */
#define US_FLR_TXFL_0                    (US_FLR_TXFL_0_Val << US_FLR_TXFL_Pos)     /* (US_FLR) There is no data in the Transmit FIFO Position */
#define US_FLR_RXFL_Pos                  _UINT32_(16)                                         /* (US_FLR) Receive FIFO Level Position */
#define US_FLR_RXFL_Msk                  (_UINT32_(0x3F) << US_FLR_RXFL_Pos)             /* (US_FLR) Receive FIFO Level Mask */
#define US_FLR_RXFL(value)               (US_FLR_RXFL_Msk & (_UINT32_(value) << US_FLR_RXFL_Pos)) /* Assignment of value for RXFL in the US_FLR register */
#define   US_FLR_RXFL_0_Val              _UINT32_(0x0)                                        /* (US_FLR) There is no unread data in the Receive FIFO  */
#define US_FLR_RXFL_0                    (US_FLR_RXFL_0_Val << US_FLR_RXFL_Pos)     /* (US_FLR) There is no unread data in the Receive FIFO Position */
#define US_FLR_Msk                       _UINT32_(0x003F003F)                                 /* (US_FLR) Register Mask  */


/* -------- US_FIER : (FLEXCOM Offset: 0x2A8) ( /W 32) USART FIFO Interrupt Enable Register -------- */
#define US_FIER_TXFEF_Pos                _UINT32_(0)                                          /* (US_FIER) TXFEF Interrupt Enable Position */
#define US_FIER_TXFEF_Msk                (_UINT32_(0x1) << US_FIER_TXFEF_Pos)            /* (US_FIER) TXFEF Interrupt Enable Mask */
#define US_FIER_TXFEF(value)             (US_FIER_TXFEF_Msk & (_UINT32_(value) << US_FIER_TXFEF_Pos)) /* Assignment of value for TXFEF in the US_FIER register */
#define US_FIER_TXFFF_Pos                _UINT32_(1)                                          /* (US_FIER) TXFFF Interrupt Enable Position */
#define US_FIER_TXFFF_Msk                (_UINT32_(0x1) << US_FIER_TXFFF_Pos)            /* (US_FIER) TXFFF Interrupt Enable Mask */
#define US_FIER_TXFFF(value)             (US_FIER_TXFFF_Msk & (_UINT32_(value) << US_FIER_TXFFF_Pos)) /* Assignment of value for TXFFF in the US_FIER register */
#define US_FIER_TXFTHF_Pos               _UINT32_(2)                                          /* (US_FIER) TXFTHF Interrupt Enable Position */
#define US_FIER_TXFTHF_Msk               (_UINT32_(0x1) << US_FIER_TXFTHF_Pos)           /* (US_FIER) TXFTHF Interrupt Enable Mask */
#define US_FIER_TXFTHF(value)            (US_FIER_TXFTHF_Msk & (_UINT32_(value) << US_FIER_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the US_FIER register */
#define US_FIER_RXFEF_Pos                _UINT32_(3)                                          /* (US_FIER) RXFEF Interrupt Enable Position */
#define US_FIER_RXFEF_Msk                (_UINT32_(0x1) << US_FIER_RXFEF_Pos)            /* (US_FIER) RXFEF Interrupt Enable Mask */
#define US_FIER_RXFEF(value)             (US_FIER_RXFEF_Msk & (_UINT32_(value) << US_FIER_RXFEF_Pos)) /* Assignment of value for RXFEF in the US_FIER register */
#define US_FIER_RXFFF_Pos                _UINT32_(4)                                          /* (US_FIER) RXFFF Interrupt Enable Position */
#define US_FIER_RXFFF_Msk                (_UINT32_(0x1) << US_FIER_RXFFF_Pos)            /* (US_FIER) RXFFF Interrupt Enable Mask */
#define US_FIER_RXFFF(value)             (US_FIER_RXFFF_Msk & (_UINT32_(value) << US_FIER_RXFFF_Pos)) /* Assignment of value for RXFFF in the US_FIER register */
#define US_FIER_RXFTHF_Pos               _UINT32_(5)                                          /* (US_FIER) RXFTHF Interrupt Enable Position */
#define US_FIER_RXFTHF_Msk               (_UINT32_(0x1) << US_FIER_RXFTHF_Pos)           /* (US_FIER) RXFTHF Interrupt Enable Mask */
#define US_FIER_RXFTHF(value)            (US_FIER_RXFTHF_Msk & (_UINT32_(value) << US_FIER_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the US_FIER register */
#define US_FIER_TXFPTEF_Pos              _UINT32_(6)                                          /* (US_FIER) TXFPTEF Interrupt Enable Position */
#define US_FIER_TXFPTEF_Msk              (_UINT32_(0x1) << US_FIER_TXFPTEF_Pos)          /* (US_FIER) TXFPTEF Interrupt Enable Mask */
#define US_FIER_TXFPTEF(value)           (US_FIER_TXFPTEF_Msk & (_UINT32_(value) << US_FIER_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the US_FIER register */
#define US_FIER_RXFPTEF_Pos              _UINT32_(7)                                          /* (US_FIER) RXFPTEF Interrupt Enable Position */
#define US_FIER_RXFPTEF_Msk              (_UINT32_(0x1) << US_FIER_RXFPTEF_Pos)          /* (US_FIER) RXFPTEF Interrupt Enable Mask */
#define US_FIER_RXFPTEF(value)           (US_FIER_RXFPTEF_Msk & (_UINT32_(value) << US_FIER_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the US_FIER register */
#define US_FIER_RXFTHF2_Pos              _UINT32_(9)                                          /* (US_FIER) RXFTHF2 Interrupt Enable Position */
#define US_FIER_RXFTHF2_Msk              (_UINT32_(0x1) << US_FIER_RXFTHF2_Pos)          /* (US_FIER) RXFTHF2 Interrupt Enable Mask */
#define US_FIER_RXFTHF2(value)           (US_FIER_RXFTHF2_Msk & (_UINT32_(value) << US_FIER_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the US_FIER register */
#define US_FIER_Msk                      _UINT32_(0x000002FF)                                 /* (US_FIER) Register Mask  */


/* -------- US_FIDR : (FLEXCOM Offset: 0x2AC) ( /W 32) USART FIFO Interrupt Disable Register -------- */
#define US_FIDR_TXFEF_Pos                _UINT32_(0)                                          /* (US_FIDR) TXFEF Interrupt Disable Position */
#define US_FIDR_TXFEF_Msk                (_UINT32_(0x1) << US_FIDR_TXFEF_Pos)            /* (US_FIDR) TXFEF Interrupt Disable Mask */
#define US_FIDR_TXFEF(value)             (US_FIDR_TXFEF_Msk & (_UINT32_(value) << US_FIDR_TXFEF_Pos)) /* Assignment of value for TXFEF in the US_FIDR register */
#define US_FIDR_TXFFF_Pos                _UINT32_(1)                                          /* (US_FIDR) TXFFF Interrupt Disable Position */
#define US_FIDR_TXFFF_Msk                (_UINT32_(0x1) << US_FIDR_TXFFF_Pos)            /* (US_FIDR) TXFFF Interrupt Disable Mask */
#define US_FIDR_TXFFF(value)             (US_FIDR_TXFFF_Msk & (_UINT32_(value) << US_FIDR_TXFFF_Pos)) /* Assignment of value for TXFFF in the US_FIDR register */
#define US_FIDR_TXFTHF_Pos               _UINT32_(2)                                          /* (US_FIDR) TXFTHF Interrupt Disable Position */
#define US_FIDR_TXFTHF_Msk               (_UINT32_(0x1) << US_FIDR_TXFTHF_Pos)           /* (US_FIDR) TXFTHF Interrupt Disable Mask */
#define US_FIDR_TXFTHF(value)            (US_FIDR_TXFTHF_Msk & (_UINT32_(value) << US_FIDR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the US_FIDR register */
#define US_FIDR_RXFEF_Pos                _UINT32_(3)                                          /* (US_FIDR) RXFEF Interrupt Disable Position */
#define US_FIDR_RXFEF_Msk                (_UINT32_(0x1) << US_FIDR_RXFEF_Pos)            /* (US_FIDR) RXFEF Interrupt Disable Mask */
#define US_FIDR_RXFEF(value)             (US_FIDR_RXFEF_Msk & (_UINT32_(value) << US_FIDR_RXFEF_Pos)) /* Assignment of value for RXFEF in the US_FIDR register */
#define US_FIDR_RXFFF_Pos                _UINT32_(4)                                          /* (US_FIDR) RXFFF Interrupt Disable Position */
#define US_FIDR_RXFFF_Msk                (_UINT32_(0x1) << US_FIDR_RXFFF_Pos)            /* (US_FIDR) RXFFF Interrupt Disable Mask */
#define US_FIDR_RXFFF(value)             (US_FIDR_RXFFF_Msk & (_UINT32_(value) << US_FIDR_RXFFF_Pos)) /* Assignment of value for RXFFF in the US_FIDR register */
#define US_FIDR_RXFTHF_Pos               _UINT32_(5)                                          /* (US_FIDR) RXFTHF Interrupt Disable Position */
#define US_FIDR_RXFTHF_Msk               (_UINT32_(0x1) << US_FIDR_RXFTHF_Pos)           /* (US_FIDR) RXFTHF Interrupt Disable Mask */
#define US_FIDR_RXFTHF(value)            (US_FIDR_RXFTHF_Msk & (_UINT32_(value) << US_FIDR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the US_FIDR register */
#define US_FIDR_TXFPTEF_Pos              _UINT32_(6)                                          /* (US_FIDR) TXFPTEF Interrupt Disable Position */
#define US_FIDR_TXFPTEF_Msk              (_UINT32_(0x1) << US_FIDR_TXFPTEF_Pos)          /* (US_FIDR) TXFPTEF Interrupt Disable Mask */
#define US_FIDR_TXFPTEF(value)           (US_FIDR_TXFPTEF_Msk & (_UINT32_(value) << US_FIDR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the US_FIDR register */
#define US_FIDR_RXFPTEF_Pos              _UINT32_(7)                                          /* (US_FIDR) RXFPTEF Interrupt Disable Position */
#define US_FIDR_RXFPTEF_Msk              (_UINT32_(0x1) << US_FIDR_RXFPTEF_Pos)          /* (US_FIDR) RXFPTEF Interrupt Disable Mask */
#define US_FIDR_RXFPTEF(value)           (US_FIDR_RXFPTEF_Msk & (_UINT32_(value) << US_FIDR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the US_FIDR register */
#define US_FIDR_RXFTHF2_Pos              _UINT32_(9)                                          /* (US_FIDR) RXFTHF2 Interrupt Disable Position */
#define US_FIDR_RXFTHF2_Msk              (_UINT32_(0x1) << US_FIDR_RXFTHF2_Pos)          /* (US_FIDR) RXFTHF2 Interrupt Disable Mask */
#define US_FIDR_RXFTHF2(value)           (US_FIDR_RXFTHF2_Msk & (_UINT32_(value) << US_FIDR_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the US_FIDR register */
#define US_FIDR_Msk                      _UINT32_(0x000002FF)                                 /* (US_FIDR) Register Mask  */


/* -------- US_FIMR : (FLEXCOM Offset: 0x2B0) ( R/ 32) USART FIFO Interrupt Mask Register -------- */
#define US_FIMR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_FIMR) USART FIFO Interrupt Mask Register  Reset Value */

#define US_FIMR_TXFEF_Pos                _UINT32_(0)                                          /* (US_FIMR) TXFEF Interrupt Mask Position */
#define US_FIMR_TXFEF_Msk                (_UINT32_(0x1) << US_FIMR_TXFEF_Pos)            /* (US_FIMR) TXFEF Interrupt Mask Mask */
#define US_FIMR_TXFEF(value)             (US_FIMR_TXFEF_Msk & (_UINT32_(value) << US_FIMR_TXFEF_Pos)) /* Assignment of value for TXFEF in the US_FIMR register */
#define US_FIMR_TXFFF_Pos                _UINT32_(1)                                          /* (US_FIMR) TXFFF Interrupt Mask Position */
#define US_FIMR_TXFFF_Msk                (_UINT32_(0x1) << US_FIMR_TXFFF_Pos)            /* (US_FIMR) TXFFF Interrupt Mask Mask */
#define US_FIMR_TXFFF(value)             (US_FIMR_TXFFF_Msk & (_UINT32_(value) << US_FIMR_TXFFF_Pos)) /* Assignment of value for TXFFF in the US_FIMR register */
#define US_FIMR_TXFTHF_Pos               _UINT32_(2)                                          /* (US_FIMR) TXFTHF Interrupt Mask Position */
#define US_FIMR_TXFTHF_Msk               (_UINT32_(0x1) << US_FIMR_TXFTHF_Pos)           /* (US_FIMR) TXFTHF Interrupt Mask Mask */
#define US_FIMR_TXFTHF(value)            (US_FIMR_TXFTHF_Msk & (_UINT32_(value) << US_FIMR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the US_FIMR register */
#define US_FIMR_RXFEF_Pos                _UINT32_(3)                                          /* (US_FIMR) RXFEF Interrupt Mask Position */
#define US_FIMR_RXFEF_Msk                (_UINT32_(0x1) << US_FIMR_RXFEF_Pos)            /* (US_FIMR) RXFEF Interrupt Mask Mask */
#define US_FIMR_RXFEF(value)             (US_FIMR_RXFEF_Msk & (_UINT32_(value) << US_FIMR_RXFEF_Pos)) /* Assignment of value for RXFEF in the US_FIMR register */
#define US_FIMR_RXFFF_Pos                _UINT32_(4)                                          /* (US_FIMR) RXFFF Interrupt Mask Position */
#define US_FIMR_RXFFF_Msk                (_UINT32_(0x1) << US_FIMR_RXFFF_Pos)            /* (US_FIMR) RXFFF Interrupt Mask Mask */
#define US_FIMR_RXFFF(value)             (US_FIMR_RXFFF_Msk & (_UINT32_(value) << US_FIMR_RXFFF_Pos)) /* Assignment of value for RXFFF in the US_FIMR register */
#define US_FIMR_RXFTHF_Pos               _UINT32_(5)                                          /* (US_FIMR) RXFTHF Interrupt Mask Position */
#define US_FIMR_RXFTHF_Msk               (_UINT32_(0x1) << US_FIMR_RXFTHF_Pos)           /* (US_FIMR) RXFTHF Interrupt Mask Mask */
#define US_FIMR_RXFTHF(value)            (US_FIMR_RXFTHF_Msk & (_UINT32_(value) << US_FIMR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the US_FIMR register */
#define US_FIMR_TXFPTEF_Pos              _UINT32_(6)                                          /* (US_FIMR) TXFPTEF Interrupt Mask Position */
#define US_FIMR_TXFPTEF_Msk              (_UINT32_(0x1) << US_FIMR_TXFPTEF_Pos)          /* (US_FIMR) TXFPTEF Interrupt Mask Mask */
#define US_FIMR_TXFPTEF(value)           (US_FIMR_TXFPTEF_Msk & (_UINT32_(value) << US_FIMR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the US_FIMR register */
#define US_FIMR_RXFPTEF_Pos              _UINT32_(7)                                          /* (US_FIMR) RXFPTEF Interrupt Mask Position */
#define US_FIMR_RXFPTEF_Msk              (_UINT32_(0x1) << US_FIMR_RXFPTEF_Pos)          /* (US_FIMR) RXFPTEF Interrupt Mask Mask */
#define US_FIMR_RXFPTEF(value)           (US_FIMR_RXFPTEF_Msk & (_UINT32_(value) << US_FIMR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the US_FIMR register */
#define US_FIMR_RXFTHF2_Pos              _UINT32_(9)                                          /* (US_FIMR) RXFTHF2 Interrupt Mask Position */
#define US_FIMR_RXFTHF2_Msk              (_UINT32_(0x1) << US_FIMR_RXFTHF2_Pos)          /* (US_FIMR) RXFTHF2 Interrupt Mask Mask */
#define US_FIMR_RXFTHF2(value)           (US_FIMR_RXFTHF2_Msk & (_UINT32_(value) << US_FIMR_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the US_FIMR register */
#define US_FIMR_Msk                      _UINT32_(0x000002FF)                                 /* (US_FIMR) Register Mask  */


/* -------- US_FESR : (FLEXCOM Offset: 0x2B4) ( R/ 32) USART FIFO Event Status Register -------- */
#define US_FESR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_FESR) USART FIFO Event Status Register  Reset Value */

#define US_FESR_TXFEF_Pos                _UINT32_(0)                                          /* (US_FESR) Transmit FIFO Empty Flag (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_TXFEF_Msk                (_UINT32_(0x1) << US_FESR_TXFEF_Pos)            /* (US_FESR) Transmit FIFO Empty Flag (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_TXFEF(value)             (US_FESR_TXFEF_Msk & (_UINT32_(value) << US_FESR_TXFEF_Pos)) /* Assignment of value for TXFEF in the US_FESR register */
#define   US_FESR_TXFEF_0_Val            _UINT32_(0x0)                                        /* (US_FESR) Transmit FIFO is not empty.  */
#define   US_FESR_TXFEF_1_Val            _UINT32_(0x1)                                        /* (US_FESR) Transmit FIFO has been emptied since the last RSTSTA command was issued.  */
#define US_FESR_TXFEF_0                  (US_FESR_TXFEF_0_Val << US_FESR_TXFEF_Pos) /* (US_FESR) Transmit FIFO is not empty. Position */
#define US_FESR_TXFEF_1                  (US_FESR_TXFEF_1_Val << US_FESR_TXFEF_Pos) /* (US_FESR) Transmit FIFO has been emptied since the last RSTSTA command was issued. Position */
#define US_FESR_TXFFF_Pos                _UINT32_(1)                                          /* (US_FESR) Transmit FIFO Full Flag (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_TXFFF_Msk                (_UINT32_(0x1) << US_FESR_TXFFF_Pos)            /* (US_FESR) Transmit FIFO Full Flag (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_TXFFF(value)             (US_FESR_TXFFF_Msk & (_UINT32_(value) << US_FESR_TXFFF_Pos)) /* Assignment of value for TXFFF in the US_FESR register */
#define   US_FESR_TXFFF_0_Val            _UINT32_(0x0)                                        /* (US_FESR) Transmit FIFO is not full.  */
#define   US_FESR_TXFFF_1_Val            _UINT32_(0x1)                                        /* (US_FESR) Transmit FIFO has been filled since the last RSTSTA command was issued.  */
#define US_FESR_TXFFF_0                  (US_FESR_TXFFF_0_Val << US_FESR_TXFFF_Pos) /* (US_FESR) Transmit FIFO is not full. Position */
#define US_FESR_TXFFF_1                  (US_FESR_TXFFF_1_Val << US_FESR_TXFFF_Pos) /* (US_FESR) Transmit FIFO has been filled since the last RSTSTA command was issued. Position */
#define US_FESR_TXFTHF_Pos               _UINT32_(2)                                          /* (US_FESR) Transmit FIFO Threshold Flag (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_TXFTHF_Msk               (_UINT32_(0x1) << US_FESR_TXFTHF_Pos)           /* (US_FESR) Transmit FIFO Threshold Flag (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_TXFTHF(value)            (US_FESR_TXFTHF_Msk & (_UINT32_(value) << US_FESR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the US_FESR register */
#define   US_FESR_TXFTHF_0_Val           _UINT32_(0x0)                                        /* (US_FESR) Number of data in Transmit FIFO is above TXFTHRES threshold.  */
#define   US_FESR_TXFTHF_1_Val           _UINT32_(0x1)                                        /* (US_FESR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last RSTSTA command was issued.  */
#define US_FESR_TXFTHF_0                 (US_FESR_TXFTHF_0_Val << US_FESR_TXFTHF_Pos) /* (US_FESR) Number of data in Transmit FIFO is above TXFTHRES threshold. Position */
#define US_FESR_TXFTHF_1                 (US_FESR_TXFTHF_1_Val << US_FESR_TXFTHF_Pos) /* (US_FESR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last RSTSTA command was issued. Position */
#define US_FESR_RXFEF_Pos                _UINT32_(3)                                          /* (US_FESR) Receive FIFO Empty Flag (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_RXFEF_Msk                (_UINT32_(0x1) << US_FESR_RXFEF_Pos)            /* (US_FESR) Receive FIFO Empty Flag (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_RXFEF(value)             (US_FESR_RXFEF_Msk & (_UINT32_(value) << US_FESR_RXFEF_Pos)) /* Assignment of value for RXFEF in the US_FESR register */
#define   US_FESR_RXFEF_0_Val            _UINT32_(0x0)                                        /* (US_FESR) Receive FIFO is not empty.  */
#define   US_FESR_RXFEF_1_Val            _UINT32_(0x1)                                        /* (US_FESR) Receive FIFO has been emptied since the last RSTSTA command was issued.  */
#define US_FESR_RXFEF_0                  (US_FESR_RXFEF_0_Val << US_FESR_RXFEF_Pos) /* (US_FESR) Receive FIFO is not empty. Position */
#define US_FESR_RXFEF_1                  (US_FESR_RXFEF_1_Val << US_FESR_RXFEF_Pos) /* (US_FESR) Receive FIFO has been emptied since the last RSTSTA command was issued. Position */
#define US_FESR_RXFFF_Pos                _UINT32_(4)                                          /* (US_FESR) Receive FIFO Full Flag (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_RXFFF_Msk                (_UINT32_(0x1) << US_FESR_RXFFF_Pos)            /* (US_FESR) Receive FIFO Full Flag (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_RXFFF(value)             (US_FESR_RXFFF_Msk & (_UINT32_(value) << US_FESR_RXFFF_Pos)) /* Assignment of value for RXFFF in the US_FESR register */
#define   US_FESR_RXFFF_0_Val            _UINT32_(0x0)                                        /* (US_FESR) Receive FIFO is not empty.  */
#define   US_FESR_RXFFF_1_Val            _UINT32_(0x1)                                        /* (US_FESR) Receive FIFO has been filled since the last RSTSTA command was issued.  */
#define US_FESR_RXFFF_0                  (US_FESR_RXFFF_0_Val << US_FESR_RXFFF_Pos) /* (US_FESR) Receive FIFO is not empty. Position */
#define US_FESR_RXFFF_1                  (US_FESR_RXFFF_1_Val << US_FESR_RXFFF_Pos) /* (US_FESR) Receive FIFO has been filled since the last RSTSTA command was issued. Position */
#define US_FESR_RXFTHF_Pos               _UINT32_(5)                                          /* (US_FESR) Receive FIFO Threshold Flag (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_RXFTHF_Msk               (_UINT32_(0x1) << US_FESR_RXFTHF_Pos)           /* (US_FESR) Receive FIFO Threshold Flag (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_RXFTHF(value)            (US_FESR_RXFTHF_Msk & (_UINT32_(value) << US_FESR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the US_FESR register */
#define   US_FESR_RXFTHF_0_Val           _UINT32_(0x0)                                        /* (US_FESR) Number of unread data in Receive FIFO is below RXFTHRES threshold.  */
#define   US_FESR_RXFTHF_1_Val           _UINT32_(0x1)                                        /* (US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last RSTSTA command was issued.  */
#define US_FESR_RXFTHF_0                 (US_FESR_RXFTHF_0_Val << US_FESR_RXFTHF_Pos) /* (US_FESR) Number of unread data in Receive FIFO is below RXFTHRES threshold. Position */
#define US_FESR_RXFTHF_1                 (US_FESR_RXFTHF_1_Val << US_FESR_RXFTHF_Pos) /* (US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last RSTSTA command was issued. Position */
#define US_FESR_TXFPTEF_Pos              _UINT32_(6)                                          /* (US_FESR) Transmit FIFO Overflow Error Flag Position */
#define US_FESR_TXFPTEF_Msk              (_UINT32_(0x1) << US_FESR_TXFPTEF_Pos)          /* (US_FESR) Transmit FIFO Overflow Error Flag Mask */
#define US_FESR_TXFPTEF(value)           (US_FESR_TXFPTEF_Msk & (_UINT32_(value) << US_FESR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the US_FESR register */
#define   US_FESR_TXFPTEF_0_Val          _UINT32_(0x0)                                        /* (US_FESR) No Transmit FIFO overflow occurred.  */
#define   US_FESR_TXFPTEF_1_Val          _UINT32_(0x1)                                        /* (US_FESR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing SPI_CR.SWRST=1.  */
#define US_FESR_TXFPTEF_0                (US_FESR_TXFPTEF_0_Val << US_FESR_TXFPTEF_Pos) /* (US_FESR) No Transmit FIFO overflow occurred. Position */
#define US_FESR_TXFPTEF_1                (US_FESR_TXFPTEF_1_Val << US_FESR_TXFPTEF_Pos) /* (US_FESR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing SPI_CR.SWRST=1. Position */
#define US_FESR_RXFPTEF_Pos              _UINT32_(7)                                          /* (US_FESR) Receive FIFO Underflow Error Flag Position */
#define US_FESR_RXFPTEF_Msk              (_UINT32_(0x1) << US_FESR_RXFPTEF_Pos)          /* (US_FESR) Receive FIFO Underflow Error Flag Mask */
#define US_FESR_RXFPTEF(value)           (US_FESR_RXFPTEF_Msk & (_UINT32_(value) << US_FESR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the US_FESR register */
#define   US_FESR_RXFPTEF_0_Val          _UINT32_(0x0)                                        /* (US_FESR) No Receive FIFO underflow occurred.  */
#define   US_FESR_RXFPTEF_1_Val          _UINT32_(0x1)                                        /* (US_FESR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing SPI_CR.SWRST=1.  */
#define US_FESR_RXFPTEF_0                (US_FESR_RXFPTEF_0_Val << US_FESR_RXFPTEF_Pos) /* (US_FESR) No Receive FIFO underflow occurred. Position */
#define US_FESR_RXFPTEF_1                (US_FESR_RXFPTEF_1_Val << US_FESR_RXFPTEF_Pos) /* (US_FESR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing SPI_CR.SWRST=1. Position */
#define US_FESR_TXFLOCK_Pos              _UINT32_(8)                                          /* (US_FESR) Transmit FIFO Lock Position */
#define US_FESR_TXFLOCK_Msk              (_UINT32_(0x1) << US_FESR_TXFLOCK_Pos)          /* (US_FESR) Transmit FIFO Lock Mask */
#define US_FESR_TXFLOCK(value)           (US_FESR_TXFLOCK_Msk & (_UINT32_(value) << US_FESR_TXFLOCK_Pos)) /* Assignment of value for TXFLOCK in the US_FESR register */
#define   US_FESR_TXFLOCK_0_Val          _UINT32_(0x0)                                        /* (US_FESR) The Transmit FIFO is not locked.  */
#define   US_FESR_TXFLOCK_1_Val          _UINT32_(0x1)                                        /* (US_FESR) The Transmit FIFO is locked.  */
#define US_FESR_TXFLOCK_0                (US_FESR_TXFLOCK_0_Val << US_FESR_TXFLOCK_Pos) /* (US_FESR) The Transmit FIFO is not locked. Position */
#define US_FESR_TXFLOCK_1                (US_FESR_TXFLOCK_1_Val << US_FESR_TXFLOCK_Pos) /* (US_FESR) The Transmit FIFO is locked. Position */
#define US_FESR_RXFTHF2_Pos              _UINT32_(9)                                          /* (US_FESR) Receive FIFO Threshold Flag 2 (cleared by writing the US_CR.RSTSTA bit) Position */
#define US_FESR_RXFTHF2_Msk              (_UINT32_(0x1) << US_FESR_RXFTHF2_Pos)          /* (US_FESR) Receive FIFO Threshold Flag 2 (cleared by writing the US_CR.RSTSTA bit) Mask */
#define US_FESR_RXFTHF2(value)           (US_FESR_RXFTHF2_Msk & (_UINT32_(value) << US_FESR_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the US_FESR register */
#define   US_FESR_RXFTHF2_0_Val          _UINT32_(0x0)                                        /* (US_FESR) Number of unread data in Receive FIFO is above RXFTHRES threshold.  */
#define   US_FESR_RXFTHF2_1_Val          _UINT32_(0x1)                                        /* (US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES2 threshold since the last RSTSTA command was issued.  */
#define US_FESR_RXFTHF2_0                (US_FESR_RXFTHF2_0_Val << US_FESR_RXFTHF2_Pos) /* (US_FESR) Number of unread data in Receive FIFO is above RXFTHRES threshold. Position */
#define US_FESR_RXFTHF2_1                (US_FESR_RXFTHF2_1_Val << US_FESR_RXFTHF2_Pos) /* (US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES2 threshold since the last RSTSTA command was issued. Position */
#define US_FESR_Msk                      _UINT32_(0x000003FF)                                 /* (US_FESR) Register Mask  */


/* -------- US_WPMR : (FLEXCOM Offset: 0x2E4) (R/W 32) USART Write Protection Mode Register -------- */
#define US_WPMR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_WPMR) USART Write Protection Mode Register  Reset Value */

#define US_WPMR_WPEN_Pos                 _UINT32_(0)                                          /* (US_WPMR) Write Protection Enable Position */
#define US_WPMR_WPEN_Msk                 (_UINT32_(0x1) << US_WPMR_WPEN_Pos)             /* (US_WPMR) Write Protection Enable Mask */
#define US_WPMR_WPEN(value)              (US_WPMR_WPEN_Msk & (_UINT32_(value) << US_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the US_WPMR register */
#define   US_WPMR_WPEN_0_Val             _UINT32_(0x0)                                        /* (US_WPMR) Disables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define   US_WPMR_WPEN_1_Val             _UINT32_(0x1)                                        /* (US_WPMR) Enables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define US_WPMR_WPEN_0                   (US_WPMR_WPEN_0_Val << US_WPMR_WPEN_Pos)   /* (US_WPMR) Disables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define US_WPMR_WPEN_1                   (US_WPMR_WPEN_1_Val << US_WPMR_WPEN_Pos)   /* (US_WPMR) Enables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define US_WPMR_WPITEN_Pos               _UINT32_(1)                                          /* (US_WPMR) Write Protection Interrupt Enable Position */
#define US_WPMR_WPITEN_Msk               (_UINT32_(0x1) << US_WPMR_WPITEN_Pos)           /* (US_WPMR) Write Protection Interrupt Enable Mask */
#define US_WPMR_WPITEN(value)            (US_WPMR_WPITEN_Msk & (_UINT32_(value) << US_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the US_WPMR register */
#define   US_WPMR_WPITEN_0_Val           _UINT32_(0x0)                                        /* (US_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define   US_WPMR_WPITEN_1_Val           _UINT32_(0x1)                                        /* (US_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define US_WPMR_WPITEN_0                 (US_WPMR_WPITEN_0_Val << US_WPMR_WPITEN_Pos) /* (US_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define US_WPMR_WPITEN_1                 (US_WPMR_WPITEN_1_Val << US_WPMR_WPITEN_Pos) /* (US_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define US_WPMR_WPCREN_Pos               _UINT32_(2)                                          /* (US_WPMR) Write Protection Control Enable Position */
#define US_WPMR_WPCREN_Msk               (_UINT32_(0x1) << US_WPMR_WPCREN_Pos)           /* (US_WPMR) Write Protection Control Enable Mask */
#define US_WPMR_WPCREN(value)            (US_WPMR_WPCREN_Msk & (_UINT32_(value) << US_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the US_WPMR register */
#define   US_WPMR_WPCREN_0_Val           _UINT32_(0x0)                                        /* (US_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define   US_WPMR_WPCREN_1_Val           _UINT32_(0x1)                                        /* (US_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define US_WPMR_WPCREN_0                 (US_WPMR_WPCREN_0_Val << US_WPMR_WPCREN_Pos) /* (US_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define US_WPMR_WPCREN_1                 (US_WPMR_WPCREN_1_Val << US_WPMR_WPCREN_Pos) /* (US_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define US_WPMR_WPKEY_Pos                _UINT32_(8)                                          /* (US_WPMR) Write Protection Key Position */
#define US_WPMR_WPKEY_Msk                (_UINT32_(0xFFFFFF) << US_WPMR_WPKEY_Pos)       /* (US_WPMR) Write Protection Key Mask */
#define US_WPMR_WPKEY(value)             (US_WPMR_WPKEY_Msk & (_UINT32_(value) << US_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the US_WPMR register */
#define   US_WPMR_WPKEY_PASSWD_Val       _UINT32_(0x555341)                                   /* (US_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0.  */
#define US_WPMR_WPKEY_PASSWD             (US_WPMR_WPKEY_PASSWD_Val << US_WPMR_WPKEY_Pos) /* (US_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0. Position */
#define US_WPMR_Msk                      _UINT32_(0xFFFFFF07)                                 /* (US_WPMR) Register Mask  */


/* -------- US_WPSR : (FLEXCOM Offset: 0x2E8) ( R/ 32) USART Write Protection Status Register -------- */
#define US_WPSR_RESETVALUE               _UINT32_(0x00)                                       /*  (US_WPSR) USART Write Protection Status Register  Reset Value */

#define US_WPSR_WPVS_Pos                 _UINT32_(0)                                          /* (US_WPSR) Write Protection Violation Status Position */
#define US_WPSR_WPVS_Msk                 (_UINT32_(0x1) << US_WPSR_WPVS_Pos)             /* (US_WPSR) Write Protection Violation Status Mask */
#define US_WPSR_WPVS(value)              (US_WPSR_WPVS_Msk & (_UINT32_(value) << US_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the US_WPSR register */
#define   US_WPSR_WPVS_0_Val             _UINT32_(0x0)                                        /* (US_WPSR) No write protection violation has occurred since the last read of US_WPSR.  */
#define   US_WPSR_WPVS_1_Val             _UINT32_(0x1)                                        /* (US_WPSR) A write protection violation has occurred since the last read of US_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define US_WPSR_WPVS_0                   (US_WPSR_WPVS_0_Val << US_WPSR_WPVS_Pos)   /* (US_WPSR) No write protection violation has occurred since the last read of US_WPSR. Position */
#define US_WPSR_WPVS_1                   (US_WPSR_WPVS_1_Val << US_WPSR_WPVS_Pos)   /* (US_WPSR) A write protection violation has occurred since the last read of US_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define US_WPSR_PADERR_Pos               _UINT32_(1)                                          /* (US_WPSR) Output PAD Error (cleared on read) Position */
#define US_WPSR_PADERR_Msk               (_UINT32_(0x1) << US_WPSR_PADERR_Pos)           /* (US_WPSR) Output PAD Error (cleared on read) Mask */
#define US_WPSR_PADERR(value)            (US_WPSR_PADERR_Msk & (_UINT32_(value) << US_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the US_WPSR register */
#define   US_WPSR_PADERR_0_Val           _UINT32_(0x0)                                        /* (US_WPSR) No error detected during a character transfer.  */
#define   US_WPSR_PADERR_1_Val           _UINT32_(0x1)                                        /* (US_WPSR) Two successive bit period with a difference between the data read at the output of the TXD pad buffer and the input driven by USART or abnormal number of SCK edges (or no clock edge) at the output of SCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc.  */
#define US_WPSR_PADERR_0                 (US_WPSR_PADERR_0_Val << US_WPSR_PADERR_Pos) /* (US_WPSR) No error detected during a character transfer. Position */
#define US_WPSR_PADERR_1                 (US_WPSR_PADERR_1_Val << US_WPSR_PADERR_Pos) /* (US_WPSR) Two successive bit period with a difference between the data read at the output of the TXD pad buffer and the input driven by USART or abnormal number of SCK edges (or no clock edge) at the output of SCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc. Position */
#define US_WPSR_WPVSRC_Pos               _UINT32_(8)                                          /* (US_WPSR) Write Protection Violation Source Position */
#define US_WPSR_WPVSRC_Msk               (_UINT32_(0xFFFF) << US_WPSR_WPVSRC_Pos)        /* (US_WPSR) Write Protection Violation Source Mask */
#define US_WPSR_WPVSRC(value)            (US_WPSR_WPVSRC_Msk & (_UINT32_(value) << US_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the US_WPSR register */
#define US_WPSR_Msk                      _UINT32_(0x00FFFF03)                                 /* (US_WPSR) Register Mask  */


/* -------- SPI_CR : (FLEXCOM Offset: 0x400) ( /W 32) SPI Control Register -------- */
#define SPI_CR_SPIEN_Pos                 _UINT32_(0)                                          /* (SPI_CR) SPI Enable Position */
#define SPI_CR_SPIEN_Msk                 (_UINT32_(0x1) << SPI_CR_SPIEN_Pos)             /* (SPI_CR) SPI Enable Mask */
#define SPI_CR_SPIEN(value)              (SPI_CR_SPIEN_Msk & (_UINT32_(value) << SPI_CR_SPIEN_Pos)) /* Assignment of value for SPIEN in the SPI_CR register */
#define   SPI_CR_SPIEN_0_Val             _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_SPIEN_1_Val             _UINT32_(0x1)                                        /* (SPI_CR) Enables the SPI to transfer and receive data.  */
#define SPI_CR_SPIEN_0                   (SPI_CR_SPIEN_0_Val << SPI_CR_SPIEN_Pos)   /* (SPI_CR) No effect. Position */
#define SPI_CR_SPIEN_1                   (SPI_CR_SPIEN_1_Val << SPI_CR_SPIEN_Pos)   /* (SPI_CR) Enables the SPI to transfer and receive data. Position */
#define SPI_CR_SPIDIS_Pos                _UINT32_(1)                                          /* (SPI_CR) SPI Disable Position */
#define SPI_CR_SPIDIS_Msk                (_UINT32_(0x1) << SPI_CR_SPIDIS_Pos)            /* (SPI_CR) SPI Disable Mask */
#define SPI_CR_SPIDIS(value)             (SPI_CR_SPIDIS_Msk & (_UINT32_(value) << SPI_CR_SPIDIS_Pos)) /* Assignment of value for SPIDIS in the SPI_CR register */
#define   SPI_CR_SPIDIS_0_Val            _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_SPIDIS_1_Val            _UINT32_(0x1)                                        /* (SPI_CR) Disables the SPI.  */
#define SPI_CR_SPIDIS_0                  (SPI_CR_SPIDIS_0_Val << SPI_CR_SPIDIS_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_SPIDIS_1                  (SPI_CR_SPIDIS_1_Val << SPI_CR_SPIDIS_Pos) /* (SPI_CR) Disables the SPI. Position */
#define SPI_CR_SWRST_Pos                 _UINT32_(7)                                          /* (SPI_CR) SPI Software Reset Position */
#define SPI_CR_SWRST_Msk                 (_UINT32_(0x1) << SPI_CR_SWRST_Pos)             /* (SPI_CR) SPI Software Reset Mask */
#define SPI_CR_SWRST(value)              (SPI_CR_SWRST_Msk & (_UINT32_(value) << SPI_CR_SWRST_Pos)) /* Assignment of value for SWRST in the SPI_CR register */
#define   SPI_CR_SWRST_0_Val             _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_SWRST_1_Val             _UINT32_(0x1)                                        /* (SPI_CR) Reset the SPI. A software-triggered hardware reset of the SPI interface is performed.  */
#define SPI_CR_SWRST_0                   (SPI_CR_SWRST_0_Val << SPI_CR_SWRST_Pos)   /* (SPI_CR) No effect. Position */
#define SPI_CR_SWRST_1                   (SPI_CR_SWRST_1_Val << SPI_CR_SWRST_Pos)   /* (SPI_CR) Reset the SPI. A software-triggered hardware reset of the SPI interface is performed. Position */
#define SPI_CR_REQCLR_Pos                _UINT32_(12)                                         /* (SPI_CR) Request to Clear the Comparison Trigger Position */
#define SPI_CR_REQCLR_Msk                (_UINT32_(0x1) << SPI_CR_REQCLR_Pos)            /* (SPI_CR) Request to Clear the Comparison Trigger Mask */
#define SPI_CR_REQCLR(value)             (SPI_CR_REQCLR_Msk & (_UINT32_(value) << SPI_CR_REQCLR_Pos)) /* Assignment of value for REQCLR in the SPI_CR register */
#define   SPI_CR_REQCLR_0_Val            _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_REQCLR_1_Val            _UINT32_(0x1)                                        /* (SPI_CR) Asynchronous partial wakeup enabled: Clears the potential clock request currently issued by SPI, thus the potential system wake-up is cancelled. Asynchronous partial wakeup disabled: Restarts the comparison trigger to enable SPI_RDR loading.  */
#define SPI_CR_REQCLR_0                  (SPI_CR_REQCLR_0_Val << SPI_CR_REQCLR_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_REQCLR_1                  (SPI_CR_REQCLR_1_Val << SPI_CR_REQCLR_Pos) /* (SPI_CR) Asynchronous partial wakeup enabled: Clears the potential clock request currently issued by SPI, thus the potential system wake-up is cancelled. Asynchronous partial wakeup disabled: Restarts the comparison trigger to enable SPI_RDR loading. Position */
#define SPI_CR_TXFCLR_Pos                _UINT32_(16)                                         /* (SPI_CR) Transmit FIFO Clear Position */
#define SPI_CR_TXFCLR_Msk                (_UINT32_(0x1) << SPI_CR_TXFCLR_Pos)            /* (SPI_CR) Transmit FIFO Clear Mask */
#define SPI_CR_TXFCLR(value)             (SPI_CR_TXFCLR_Msk & (_UINT32_(value) << SPI_CR_TXFCLR_Pos)) /* Assignment of value for TXFCLR in the SPI_CR register */
#define   SPI_CR_TXFCLR_0_Val            _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_TXFCLR_1_Val            _UINT32_(0x1)                                        /* (SPI_CR) Empties the Transmit FIFO.  */
#define SPI_CR_TXFCLR_0                  (SPI_CR_TXFCLR_0_Val << SPI_CR_TXFCLR_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_TXFCLR_1                  (SPI_CR_TXFCLR_1_Val << SPI_CR_TXFCLR_Pos) /* (SPI_CR) Empties the Transmit FIFO. Position */
#define SPI_CR_RXFCLR_Pos                _UINT32_(17)                                         /* (SPI_CR) Receive FIFO Clear Position */
#define SPI_CR_RXFCLR_Msk                (_UINT32_(0x1) << SPI_CR_RXFCLR_Pos)            /* (SPI_CR) Receive FIFO Clear Mask */
#define SPI_CR_RXFCLR(value)             (SPI_CR_RXFCLR_Msk & (_UINT32_(value) << SPI_CR_RXFCLR_Pos)) /* Assignment of value for RXFCLR in the SPI_CR register */
#define   SPI_CR_RXFCLR_0_Val            _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_RXFCLR_1_Val            _UINT32_(0x1)                                        /* (SPI_CR) Empties the Receive FIFO.  */
#define SPI_CR_RXFCLR_0                  (SPI_CR_RXFCLR_0_Val << SPI_CR_RXFCLR_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_RXFCLR_1                  (SPI_CR_RXFCLR_1_Val << SPI_CR_RXFCLR_Pos) /* (SPI_CR) Empties the Receive FIFO. Position */
#define SPI_CR_LASTXFER_Pos              _UINT32_(24)                                         /* (SPI_CR) Last Transfer Position */
#define SPI_CR_LASTXFER_Msk              (_UINT32_(0x1) << SPI_CR_LASTXFER_Pos)          /* (SPI_CR) Last Transfer Mask */
#define SPI_CR_LASTXFER(value)           (SPI_CR_LASTXFER_Msk & (_UINT32_(value) << SPI_CR_LASTXFER_Pos)) /* Assignment of value for LASTXFER in the SPI_CR register */
#define   SPI_CR_LASTXFER_0_Val          _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_LASTXFER_1_Val          _UINT32_(0x1)                                        /* (SPI_CR) The current NPCS will be de-asserted after the character written in TD has been transferred. When CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed.  */
#define SPI_CR_LASTXFER_0                (SPI_CR_LASTXFER_0_Val << SPI_CR_LASTXFER_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_LASTXFER_1                (SPI_CR_LASTXFER_1_Val << SPI_CR_LASTXFER_Pos) /* (SPI_CR) The current NPCS will be de-asserted after the character written in TD has been transferred. When CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed. Position */
#define SPI_CR_FIFOEN_Pos                _UINT32_(30)                                         /* (SPI_CR) FIFO Enable Position */
#define SPI_CR_FIFOEN_Msk                (_UINT32_(0x1) << SPI_CR_FIFOEN_Pos)            /* (SPI_CR) FIFO Enable Mask */
#define SPI_CR_FIFOEN(value)             (SPI_CR_FIFOEN_Msk & (_UINT32_(value) << SPI_CR_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the SPI_CR register */
#define   SPI_CR_FIFOEN_0_Val            _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_FIFOEN_1_Val            _UINT32_(0x1)                                        /* (SPI_CR) Enables the Transmit and Receive FIFOs  */
#define SPI_CR_FIFOEN_0                  (SPI_CR_FIFOEN_0_Val << SPI_CR_FIFOEN_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_FIFOEN_1                  (SPI_CR_FIFOEN_1_Val << SPI_CR_FIFOEN_Pos) /* (SPI_CR) Enables the Transmit and Receive FIFOs Position */
#define SPI_CR_FIFODIS_Pos               _UINT32_(31)                                         /* (SPI_CR) FIFO Disable Position */
#define SPI_CR_FIFODIS_Msk               (_UINT32_(0x1) << SPI_CR_FIFODIS_Pos)           /* (SPI_CR) FIFO Disable Mask */
#define SPI_CR_FIFODIS(value)            (SPI_CR_FIFODIS_Msk & (_UINT32_(value) << SPI_CR_FIFODIS_Pos)) /* Assignment of value for FIFODIS in the SPI_CR register */
#define   SPI_CR_FIFODIS_0_Val           _UINT32_(0x0)                                        /* (SPI_CR) No effect.  */
#define   SPI_CR_FIFODIS_1_Val           _UINT32_(0x1)                                        /* (SPI_CR) Disables the Transmit and Receive FIFOs  */
#define SPI_CR_FIFODIS_0                 (SPI_CR_FIFODIS_0_Val << SPI_CR_FIFODIS_Pos) /* (SPI_CR) No effect. Position */
#define SPI_CR_FIFODIS_1                 (SPI_CR_FIFODIS_1_Val << SPI_CR_FIFODIS_Pos) /* (SPI_CR) Disables the Transmit and Receive FIFOs Position */
#define SPI_CR_Msk                       _UINT32_(0xC1031083)                                 /* (SPI_CR) Register Mask  */


/* -------- SPI_MR : (FLEXCOM Offset: 0x404) (R/W 32) SPI Mode Register -------- */
#define SPI_MR_RESETVALUE                _UINT32_(0x00)                                       /*  (SPI_MR) SPI Mode Register  Reset Value */

#define SPI_MR_MSTR_Pos                  _UINT32_(0)                                          /* (SPI_MR) Host/Client Mode Position */
#define SPI_MR_MSTR_Msk                  (_UINT32_(0x1) << SPI_MR_MSTR_Pos)              /* (SPI_MR) Host/Client Mode Mask */
#define SPI_MR_MSTR(value)               (SPI_MR_MSTR_Msk & (_UINT32_(value) << SPI_MR_MSTR_Pos)) /* Assignment of value for MSTR in the SPI_MR register */
#define   SPI_MR_MSTR_0_Val              _UINT32_(0x0)                                        /* (SPI_MR) SPI is in Client mode.  */
#define   SPI_MR_MSTR_1_Val              _UINT32_(0x1)                                        /* (SPI_MR) SPI is in Host mode.  */
#define SPI_MR_MSTR_0                    (SPI_MR_MSTR_0_Val << SPI_MR_MSTR_Pos)     /* (SPI_MR) SPI is in Client mode. Position */
#define SPI_MR_MSTR_1                    (SPI_MR_MSTR_1_Val << SPI_MR_MSTR_Pos)     /* (SPI_MR) SPI is in Host mode. Position */
#define SPI_MR_PS_Pos                    _UINT32_(1)                                          /* (SPI_MR) Peripheral Select Position */
#define SPI_MR_PS_Msk                    (_UINT32_(0x1) << SPI_MR_PS_Pos)                /* (SPI_MR) Peripheral Select Mask */
#define SPI_MR_PS(value)                 (SPI_MR_PS_Msk & (_UINT32_(value) << SPI_MR_PS_Pos)) /* Assignment of value for PS in the SPI_MR register */
#define   SPI_MR_PS_0_Val                _UINT32_(0x0)                                        /* (SPI_MR) Fixed Peripheral Select  */
#define   SPI_MR_PS_1_Val                _UINT32_(0x1)                                        /* (SPI_MR) Variable Peripheral Select  */
#define SPI_MR_PS_0                      (SPI_MR_PS_0_Val << SPI_MR_PS_Pos)         /* (SPI_MR) Fixed Peripheral Select Position */
#define SPI_MR_PS_1                      (SPI_MR_PS_1_Val << SPI_MR_PS_Pos)         /* (SPI_MR) Variable Peripheral Select Position */
#define SPI_MR_PCSDEC_Pos                _UINT32_(2)                                          /* (SPI_MR) Chip Select Decode Position */
#define SPI_MR_PCSDEC_Msk                (_UINT32_(0x1) << SPI_MR_PCSDEC_Pos)            /* (SPI_MR) Chip Select Decode Mask */
#define SPI_MR_PCSDEC(value)             (SPI_MR_PCSDEC_Msk & (_UINT32_(value) << SPI_MR_PCSDEC_Pos)) /* Assignment of value for PCSDEC in the SPI_MR register */
#define   SPI_MR_PCSDEC_0_Val            _UINT32_(0x0)                                        /* (SPI_MR) The chip selects are directly connected to a peripheral device.  */
#define   SPI_MR_PCSDEC_1_Val            _UINT32_(0x1)                                        /* (SPI_MR) The four NPCS chip select lines are connected to a 4- to 16-bit decoder.  */
#define SPI_MR_PCSDEC_0                  (SPI_MR_PCSDEC_0_Val << SPI_MR_PCSDEC_Pos) /* (SPI_MR) The chip selects are directly connected to a peripheral device. Position */
#define SPI_MR_PCSDEC_1                  (SPI_MR_PCSDEC_1_Val << SPI_MR_PCSDEC_Pos) /* (SPI_MR) The four NPCS chip select lines are connected to a 4- to 16-bit decoder. Position */
#define SPI_MR_BRSRCCLK_Pos              _UINT32_(3)                                          /* (SPI_MR) Bit Rate Source Clock Position */
#define SPI_MR_BRSRCCLK_Msk              (_UINT32_(0x1) << SPI_MR_BRSRCCLK_Pos)          /* (SPI_MR) Bit Rate Source Clock Mask */
#define SPI_MR_BRSRCCLK(value)           (SPI_MR_BRSRCCLK_Msk & (_UINT32_(value) << SPI_MR_BRSRCCLK_Pos)) /* Assignment of value for BRSRCCLK in the SPI_MR register */
#define   SPI_MR_BRSRCCLK_PERIPH_CLK_Val _UINT32_(0x0)                                        /* (SPI_MR) The peripheral clock is the source clock for the bit rate generation.  */
#define   SPI_MR_BRSRCCLK_GCLK_Val       _UINT32_(0x1)                                        /* (SPI_MR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define SPI_MR_BRSRCCLK_PERIPH_CLK       (SPI_MR_BRSRCCLK_PERIPH_CLK_Val << SPI_MR_BRSRCCLK_Pos) /* (SPI_MR) The peripheral clock is the source clock for the bit rate generation. Position */
#define SPI_MR_BRSRCCLK_GCLK             (SPI_MR_BRSRCCLK_GCLK_Val << SPI_MR_BRSRCCLK_Pos) /* (SPI_MR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position */
#define SPI_MR_MODFDIS_Pos               _UINT32_(4)                                          /* (SPI_MR) Mode Fault Detection Position */
#define SPI_MR_MODFDIS_Msk               (_UINT32_(0x1) << SPI_MR_MODFDIS_Pos)           /* (SPI_MR) Mode Fault Detection Mask */
#define SPI_MR_MODFDIS(value)            (SPI_MR_MODFDIS_Msk & (_UINT32_(value) << SPI_MR_MODFDIS_Pos)) /* Assignment of value for MODFDIS in the SPI_MR register */
#define   SPI_MR_MODFDIS_0_Val           _UINT32_(0x0)                                        /* (SPI_MR) Mode fault detection is enabled.  */
#define   SPI_MR_MODFDIS_1_Val           _UINT32_(0x1)                                        /* (SPI_MR) Mode fault detection is disabled.  */
#define SPI_MR_MODFDIS_0                 (SPI_MR_MODFDIS_0_Val << SPI_MR_MODFDIS_Pos) /* (SPI_MR) Mode fault detection is enabled. Position */
#define SPI_MR_MODFDIS_1                 (SPI_MR_MODFDIS_1_Val << SPI_MR_MODFDIS_Pos) /* (SPI_MR) Mode fault detection is disabled. Position */
#define SPI_MR_WDRBT_Pos                 _UINT32_(5)                                          /* (SPI_MR) Wait Data Read Before Transfer Position */
#define SPI_MR_WDRBT_Msk                 (_UINT32_(0x1) << SPI_MR_WDRBT_Pos)             /* (SPI_MR) Wait Data Read Before Transfer Mask */
#define SPI_MR_WDRBT(value)              (SPI_MR_WDRBT_Msk & (_UINT32_(value) << SPI_MR_WDRBT_Pos)) /* Assignment of value for WDRBT in the SPI_MR register */
#define   SPI_MR_WDRBT_0_Val             _UINT32_(0x0)                                        /* (SPI_MR) No Effect. In Host mode, a transfer can be initiated regardless of the SPI_RDR state.  */
#define   SPI_MR_WDRBT_1_Val             _UINT32_(0x1)                                        /* (SPI_MR) In Host mode, a transfer can start only if SPI_RDR is empty, i.e., does not contain any unread data. This mode prevents overrun error in reception.  */
#define SPI_MR_WDRBT_0                   (SPI_MR_WDRBT_0_Val << SPI_MR_WDRBT_Pos)   /* (SPI_MR) No Effect. In Host mode, a transfer can be initiated regardless of the SPI_RDR state. Position */
#define SPI_MR_WDRBT_1                   (SPI_MR_WDRBT_1_Val << SPI_MR_WDRBT_Pos)   /* (SPI_MR) In Host mode, a transfer can start only if SPI_RDR is empty, i.e., does not contain any unread data. This mode prevents overrun error in reception. Position */
#define SPI_MR_LLB_Pos                   _UINT32_(7)                                          /* (SPI_MR) Local Loopback Enable Position */
#define SPI_MR_LLB_Msk                   (_UINT32_(0x1) << SPI_MR_LLB_Pos)               /* (SPI_MR) Local Loopback Enable Mask */
#define SPI_MR_LLB(value)                (SPI_MR_LLB_Msk & (_UINT32_(value) << SPI_MR_LLB_Pos)) /* Assignment of value for LLB in the SPI_MR register */
#define   SPI_MR_LLB_0_Val               _UINT32_(0x0)                                        /* (SPI_MR) Local loopback path disabled.  */
#define   SPI_MR_LLB_1_Val               _UINT32_(0x1)                                        /* (SPI_MR) Local loopback path enabled.  */
#define SPI_MR_LLB_0                     (SPI_MR_LLB_0_Val << SPI_MR_LLB_Pos)       /* (SPI_MR) Local loopback path disabled. Position */
#define SPI_MR_LLB_1                     (SPI_MR_LLB_1_Val << SPI_MR_LLB_Pos)       /* (SPI_MR) Local loopback path enabled. Position */
#define SPI_MR_LSBHALF_Pos               _UINT32_(8)                                          /* (SPI_MR) Last Bit Half Period Compatibility Position */
#define SPI_MR_LSBHALF_Msk               (_UINT32_(0x1) << SPI_MR_LSBHALF_Pos)           /* (SPI_MR) Last Bit Half Period Compatibility Mask */
#define SPI_MR_LSBHALF(value)            (SPI_MR_LSBHALF_Msk & (_UINT32_(value) << SPI_MR_LSBHALF_Pos)) /* Assignment of value for LSBHALF in the SPI_MR register */
#define   SPI_MR_LSBHALF_0_Val           _UINT32_(0x0)                                        /* (SPI_MR) Normal SPI mode of operation: all bits have a 1-bit time duration (standard SPI mode)  */
#define   SPI_MR_LSBHALF_1_Val           _UINT32_(0x1)                                        /* (SPI_MR) Compatibility mode when connected to an SPI client having only a half bit period duration time for the last bit of the frame (non-standard SPI mode)  */
#define SPI_MR_LSBHALF_0                 (SPI_MR_LSBHALF_0_Val << SPI_MR_LSBHALF_Pos) /* (SPI_MR) Normal SPI mode of operation: all bits have a 1-bit time duration (standard SPI mode) Position */
#define SPI_MR_LSBHALF_1                 (SPI_MR_LSBHALF_1_Val << SPI_MR_LSBHALF_Pos) /* (SPI_MR) Compatibility mode when connected to an SPI client having only a half bit period duration time for the last bit of the frame (non-standard SPI mode) Position */
#define SPI_MR_MLCE_Pos                  _UINT32_(10)                                         /* (SPI_MR) MOSI Line Check Enable Position */
#define SPI_MR_MLCE_Msk                  (_UINT32_(0x1) << SPI_MR_MLCE_Pos)              /* (SPI_MR) MOSI Line Check Enable Mask */
#define SPI_MR_MLCE(value)               (SPI_MR_MLCE_Msk & (_UINT32_(value) << SPI_MR_MLCE_Pos)) /* Assignment of value for MLCE in the SPI_MR register */
#define   SPI_MR_MLCE_0_Val              _UINT32_(0x0)                                        /* (SPI_MR) Disables the MOSI line check.  */
#define   SPI_MR_MLCE_1_Val              _UINT32_(0x1)                                        /* (SPI_MR) Enables the MOSI line check during a character transfer.  */
#define SPI_MR_MLCE_0                    (SPI_MR_MLCE_0_Val << SPI_MR_MLCE_Pos)     /* (SPI_MR) Disables the MOSI line check. Position */
#define SPI_MR_MLCE_1                    (SPI_MR_MLCE_1_Val << SPI_MR_MLCE_Pos)     /* (SPI_MR) Enables the MOSI line check during a character transfer. Position */
#define SPI_MR_CMPMODE_Pos               _UINT32_(12)                                         /* (SPI_MR) Comparison Mode Position */
#define SPI_MR_CMPMODE_Msk               (_UINT32_(0x1) << SPI_MR_CMPMODE_Pos)           /* (SPI_MR) Comparison Mode Mask */
#define SPI_MR_CMPMODE(value)            (SPI_MR_CMPMODE_Msk & (_UINT32_(value) << SPI_MR_CMPMODE_Pos)) /* Assignment of value for CMPMODE in the SPI_MR register */
#define   SPI_MR_CMPMODE_FLAG_ONLY_Val   _UINT32_(0x0)                                        /* (SPI_MR) Any character is received and comparison function drives CMP flag.  */
#define   SPI_MR_CMPMODE_START_CONDITION_Val _UINT32_(0x1)                                        /* (SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set.  */
#define SPI_MR_CMPMODE_FLAG_ONLY         (SPI_MR_CMPMODE_FLAG_ONLY_Val << SPI_MR_CMPMODE_Pos) /* (SPI_MR) Any character is received and comparison function drives CMP flag. Position */
#define SPI_MR_CMPMODE_START_CONDITION   (SPI_MR_CMPMODE_START_CONDITION_Val << SPI_MR_CMPMODE_Pos) /* (SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set. Position */
#define SPI_MR_PCS_Pos                   _UINT32_(16)                                         /* (SPI_MR) Peripheral Chip Select Position */
#define SPI_MR_PCS_Msk                   (_UINT32_(0xF) << SPI_MR_PCS_Pos)               /* (SPI_MR) Peripheral Chip Select Mask */
#define SPI_MR_PCS(value)                (SPI_MR_PCS_Msk & (_UINT32_(value) << SPI_MR_PCS_Pos)) /* Assignment of value for PCS in the SPI_MR register */
#define SPI_MR_DLYBCS_Pos                _UINT32_(24)                                         /* (SPI_MR) Delay Between Chip Selects Position */
#define SPI_MR_DLYBCS_Msk                (_UINT32_(0xFF) << SPI_MR_DLYBCS_Pos)           /* (SPI_MR) Delay Between Chip Selects Mask */
#define SPI_MR_DLYBCS(value)             (SPI_MR_DLYBCS_Msk & (_UINT32_(value) << SPI_MR_DLYBCS_Pos)) /* Assignment of value for DLYBCS in the SPI_MR register */
#define SPI_MR_Msk                       _UINT32_(0xFF0F15BF)                                 /* (SPI_MR) Register Mask  */


/* -------- SPI_RDR : (FLEXCOM Offset: 0x408) ( R/ 32) SPI Receive Data Register -------- */
#define SPI_RDR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPI_RDR) SPI Receive Data Register  Reset Value */

#define SPI_RDR_RD_Pos                   _UINT32_(0)                                          /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_RD_Msk                   (_UINT32_(0xFFFF) << SPI_RDR_RD_Pos)            /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_RD(value)                (SPI_RDR_RD_Msk & (_UINT32_(value) << SPI_RDR_RD_Pos)) /* Assignment of value for RD in the SPI_RDR register */
#define SPI_RDR_PCS_Pos                  _UINT32_(16)                                         /* (SPI_RDR) Peripheral Chip Select Position */
#define SPI_RDR_PCS_Msk                  (_UINT32_(0xF) << SPI_RDR_PCS_Pos)              /* (SPI_RDR) Peripheral Chip Select Mask */
#define SPI_RDR_PCS(value)               (SPI_RDR_PCS_Msk & (_UINT32_(value) << SPI_RDR_PCS_Pos)) /* Assignment of value for PCS in the SPI_RDR register */
#define SPI_RDR_Msk                      _UINT32_(0x000FFFFF)                                 /* (SPI_RDR) Register Mask  */

/* FIFO_MULTI_DATA_16 mode */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos _UINT32_(0)                                          /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD0_Msk (_UINT32_(0xFFFF) << SPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos) /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD0(value) (SPI_RDR_FIFO_MULTI_DATA_16_RD0_Msk & (_UINT32_(value) << SPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos _UINT32_(16)                                         /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD1_Msk (_UINT32_(0xFFFF) << SPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos) /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_16_RD1(value) (SPI_RDR_FIFO_MULTI_DATA_16_RD1_Msk & (_UINT32_(value) << SPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_16_Msk   _UINT32_(0xFFFFFFFF)                                 /* (SPI_RDR_FIFO_MULTI_DATA_16) Register Mask  */

/* FIFO_MULTI_DATA_8 mode */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos _UINT32_(0)                                          /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD0_Msk (_UINT32_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos) /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD0(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD0_Msk & (_UINT32_(value) << SPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos _UINT32_(8)                                          /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD1_Msk (_UINT32_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos) /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD1(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD1_Msk & (_UINT32_(value) << SPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos _UINT32_(16)                                         /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD2_Msk (_UINT32_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos) /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD2(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD2_Msk & (_UINT32_(value) << SPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos _UINT32_(24)                                         /* (SPI_RDR) Receive Data Position */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD3_Msk (_UINT32_(0xFF) << SPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos) /* (SPI_RDR) Receive Data Mask */
#define SPI_RDR_FIFO_MULTI_DATA_8_RD3(value) (SPI_RDR_FIFO_MULTI_DATA_8_RD3_Msk & (_UINT32_(value) << SPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos))
#define SPI_RDR_FIFO_MULTI_DATA_8_Msk    _UINT32_(0xFFFFFFFF)                                 /* (SPI_RDR_FIFO_MULTI_DATA_8) Register Mask  */


/* -------- SPI_TDR : (FLEXCOM Offset: 0x40C) ( /W 32) SPI Transmit Data Register -------- */
#define SPI_TDR_TD_Pos                   _UINT32_(0)                                          /* (SPI_TDR) Transmit Data Position */
#define SPI_TDR_TD_Msk                   (_UINT32_(0xFFFF) << SPI_TDR_TD_Pos)            /* (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_TD(value)                (SPI_TDR_TD_Msk & (_UINT32_(value) << SPI_TDR_TD_Pos)) /* Assignment of value for TD in the SPI_TDR register */
#define SPI_TDR_PCS_Pos                  _UINT32_(16)                                         /* (SPI_TDR) Peripheral Chip Select Position */
#define SPI_TDR_PCS_Msk                  (_UINT32_(0xF) << SPI_TDR_PCS_Pos)              /* (SPI_TDR) Peripheral Chip Select Mask */
#define SPI_TDR_PCS(value)               (SPI_TDR_PCS_Msk & (_UINT32_(value) << SPI_TDR_PCS_Pos)) /* Assignment of value for PCS in the SPI_TDR register */
#define SPI_TDR_LASTXFER_Pos             _UINT32_(24)                                         /* (SPI_TDR) Last Transfer Position */
#define SPI_TDR_LASTXFER_Msk             (_UINT32_(0x1) << SPI_TDR_LASTXFER_Pos)         /* (SPI_TDR) Last Transfer Mask */
#define SPI_TDR_LASTXFER(value)          (SPI_TDR_LASTXFER_Msk & (_UINT32_(value) << SPI_TDR_LASTXFER_Pos)) /* Assignment of value for LASTXFER in the SPI_TDR register */
#define   SPI_TDR_LASTXFER_0_Val         _UINT32_(0x0)                                        /* (SPI_TDR) No effect.  */
#define   SPI_TDR_LASTXFER_1_Val         _UINT32_(0x1)                                        /* (SPI_TDR) The current NPCS is de-asserted after the transfer of the character written in TD. When SPI_CSRx.CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed.  */
#define SPI_TDR_LASTXFER_0               (SPI_TDR_LASTXFER_0_Val << SPI_TDR_LASTXFER_Pos) /* (SPI_TDR) No effect. Position */
#define SPI_TDR_LASTXFER_1               (SPI_TDR_LASTXFER_1_Val << SPI_TDR_LASTXFER_Pos) /* (SPI_TDR) The current NPCS is de-asserted after the transfer of the character written in TD. When SPI_CSRx.CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed. Position */
#define SPI_TDR_Msk                      _UINT32_(0x010FFFFF)                                 /* (SPI_TDR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define SPI_TDR_FIFO_MULTI_DATA_TD0_Pos  _UINT32_(0)                                          /* (SPI_TDR) Transmit Data Position */
#define SPI_TDR_FIFO_MULTI_DATA_TD0_Msk  (_UINT32_(0xFFFF) << SPI_TDR_FIFO_MULTI_DATA_TD0_Pos) /* (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_FIFO_MULTI_DATA_TD0(value) (SPI_TDR_FIFO_MULTI_DATA_TD0_Msk & (_UINT32_(value) << SPI_TDR_FIFO_MULTI_DATA_TD0_Pos))
#define SPI_TDR_FIFO_MULTI_DATA_TD1_Pos  _UINT32_(16)                                         /* (SPI_TDR) Transmit Data Position */
#define SPI_TDR_FIFO_MULTI_DATA_TD1_Msk  (_UINT32_(0xFFFF) << SPI_TDR_FIFO_MULTI_DATA_TD1_Pos) /* (SPI_TDR) Transmit Data Mask */
#define SPI_TDR_FIFO_MULTI_DATA_TD1(value) (SPI_TDR_FIFO_MULTI_DATA_TD1_Msk & (_UINT32_(value) << SPI_TDR_FIFO_MULTI_DATA_TD1_Pos))
#define SPI_TDR_FIFO_MULTI_DATA_Msk      _UINT32_(0xFFFFFFFF)                                 /* (SPI_TDR_FIFO_MULTI_DATA) Register Mask  */


/* -------- SPI_SR : (FLEXCOM Offset: 0x410) ( R/ 32) SPI Status Register -------- */
#define SPI_SR_RESETVALUE                _UINT32_(0x00)                                       /*  (SPI_SR) SPI Status Register  Reset Value */

#define SPI_SR_RDRF_Pos                  _UINT32_(0)                                          /* (SPI_SR) Receive Data Register Full (cleared by reading SPI_RDR) Position */
#define SPI_SR_RDRF_Msk                  (_UINT32_(0x1) << SPI_SR_RDRF_Pos)              /* (SPI_SR) Receive Data Register Full (cleared by reading SPI_RDR) Mask */
#define SPI_SR_RDRF(value)               (SPI_SR_RDRF_Msk & (_UINT32_(value) << SPI_SR_RDRF_Pos)) /* Assignment of value for RDRF in the SPI_SR register */
#define   SPI_SR_RDRF_0_Val              _UINT32_(0x0)                                        /* (SPI_SR) FIFO Disabled: No data has been received since the last read of SPI_RDR. FIFO Enabled: Receive FIFO is empty; no data to read  */
#define   SPI_SR_RDRF_1_Val              _UINT32_(0x1)                                        /* (SPI_SR) FIFO Disabled: Data has been received and the received data has been transferred from the internal shift register to SPI_RDR since the last read of SPI_RDR. FIFO Enabled: At least one unread data is in the Receive FIFO  */
#define SPI_SR_RDRF_0                    (SPI_SR_RDRF_0_Val << SPI_SR_RDRF_Pos)     /* (SPI_SR) FIFO Disabled: No data has been received since the last read of SPI_RDR. FIFO Enabled: Receive FIFO is empty; no data to read Position */
#define SPI_SR_RDRF_1                    (SPI_SR_RDRF_1_Val << SPI_SR_RDRF_Pos)     /* (SPI_SR) FIFO Disabled: Data has been received and the received data has been transferred from the internal shift register to SPI_RDR since the last read of SPI_RDR. FIFO Enabled: At least one unread data is in the Receive FIFO Position */
#define SPI_SR_TDRE_Pos                  _UINT32_(1)                                          /* (SPI_SR) Transmit Data Register Empty (cleared by writing SPI_TDR) Position */
#define SPI_SR_TDRE_Msk                  (_UINT32_(0x1) << SPI_SR_TDRE_Pos)              /* (SPI_SR) Transmit Data Register Empty (cleared by writing SPI_TDR) Mask */
#define SPI_SR_TDRE(value)               (SPI_SR_TDRE_Msk & (_UINT32_(value) << SPI_SR_TDRE_Pos)) /* Assignment of value for TDRE in the SPI_SR register */
#define   SPI_SR_TDRE_0_Val              _UINT32_(0x0)                                        /* (SPI_SR) FIFO Disabled: Data has been written to SPI_TDR and not yet transferred to the internal shift register. FIFO Enabled: Transmit FIFO cannot accept more data.  */
#define   SPI_SR_TDRE_1_Val              _UINT32_(0x1)                                        /* (SPI_SR) FIFO Disabled: The last data written to SPI_TDR has been transferred to the internal shift register. FIFO Enabled: Transmit FIFO can accept data; one or more data can be written according to TXRDYM field configuration.  */
#define SPI_SR_TDRE_0                    (SPI_SR_TDRE_0_Val << SPI_SR_TDRE_Pos)     /* (SPI_SR) FIFO Disabled: Data has been written to SPI_TDR and not yet transferred to the internal shift register. FIFO Enabled: Transmit FIFO cannot accept more data. Position */
#define SPI_SR_TDRE_1                    (SPI_SR_TDRE_1_Val << SPI_SR_TDRE_Pos)     /* (SPI_SR) FIFO Disabled: The last data written to SPI_TDR has been transferred to the internal shift register. FIFO Enabled: Transmit FIFO can accept data; one or more data can be written according to TXRDYM field configuration. Position */
#define SPI_SR_MODF_Pos                  _UINT32_(2)                                          /* (SPI_SR) Mode Fault Error (cleared on read) Position */
#define SPI_SR_MODF_Msk                  (_UINT32_(0x1) << SPI_SR_MODF_Pos)              /* (SPI_SR) Mode Fault Error (cleared on read) Mask */
#define SPI_SR_MODF(value)               (SPI_SR_MODF_Msk & (_UINT32_(value) << SPI_SR_MODF_Pos)) /* Assignment of value for MODF in the SPI_SR register */
#define   SPI_SR_MODF_0_Val              _UINT32_(0x0)                                        /* (SPI_SR) No mode fault has been detected since the last read of SPI_SR.  */
#define   SPI_SR_MODF_1_Val              _UINT32_(0x1)                                        /* (SPI_SR) A mode fault occurred since the last read of SPI_SR.  */
#define SPI_SR_MODF_0                    (SPI_SR_MODF_0_Val << SPI_SR_MODF_Pos)     /* (SPI_SR) No mode fault has been detected since the last read of SPI_SR. Position */
#define SPI_SR_MODF_1                    (SPI_SR_MODF_1_Val << SPI_SR_MODF_Pos)     /* (SPI_SR) A mode fault occurred since the last read of SPI_SR. Position */
#define SPI_SR_OVRES_Pos                 _UINT32_(3)                                          /* (SPI_SR) Overrun Error Status (cleared on read) Position */
#define SPI_SR_OVRES_Msk                 (_UINT32_(0x1) << SPI_SR_OVRES_Pos)             /* (SPI_SR) Overrun Error Status (cleared on read) Mask */
#define SPI_SR_OVRES(value)              (SPI_SR_OVRES_Msk & (_UINT32_(value) << SPI_SR_OVRES_Pos)) /* Assignment of value for OVRES in the SPI_SR register */
#define   SPI_SR_OVRES_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) No overrun has been detected since the last read of SPI_SR.  */
#define   SPI_SR_OVRES_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) An overrun has occurred since the last read of SPI_SR.  */
#define SPI_SR_OVRES_0                   (SPI_SR_OVRES_0_Val << SPI_SR_OVRES_Pos)   /* (SPI_SR) No overrun has been detected since the last read of SPI_SR. Position */
#define SPI_SR_OVRES_1                   (SPI_SR_OVRES_1_Val << SPI_SR_OVRES_Pos)   /* (SPI_SR) An overrun has occurred since the last read of SPI_SR. Position */
#define SPI_SR_NSSR_Pos                  _UINT32_(8)                                          /* (SPI_SR) NSS Rising (cleared on read) Position */
#define SPI_SR_NSSR_Msk                  (_UINT32_(0x1) << SPI_SR_NSSR_Pos)              /* (SPI_SR) NSS Rising (cleared on read) Mask */
#define SPI_SR_NSSR(value)               (SPI_SR_NSSR_Msk & (_UINT32_(value) << SPI_SR_NSSR_Pos)) /* Assignment of value for NSSR in the SPI_SR register */
#define   SPI_SR_NSSR_0_Val              _UINT32_(0x0)                                        /* (SPI_SR) No rising edge detected on NSS pin since the last read of SPI_SR.  */
#define   SPI_SR_NSSR_1_Val              _UINT32_(0x1)                                        /* (SPI_SR) A rising edge occurred on NSS pin since the last read of SPI_SR.  */
#define SPI_SR_NSSR_0                    (SPI_SR_NSSR_0_Val << SPI_SR_NSSR_Pos)     /* (SPI_SR) No rising edge detected on NSS pin since the last read of SPI_SR. Position */
#define SPI_SR_NSSR_1                    (SPI_SR_NSSR_1_Val << SPI_SR_NSSR_Pos)     /* (SPI_SR) A rising edge occurred on NSS pin since the last read of SPI_SR. Position */
#define SPI_SR_TXEMPTY_Pos               _UINT32_(9)                                          /* (SPI_SR) Transmission Registers Empty (cleared by writing SPI_TDR) Position */
#define SPI_SR_TXEMPTY_Msk               (_UINT32_(0x1) << SPI_SR_TXEMPTY_Pos)           /* (SPI_SR) Transmission Registers Empty (cleared by writing SPI_TDR) Mask */
#define SPI_SR_TXEMPTY(value)            (SPI_SR_TXEMPTY_Msk & (_UINT32_(value) << SPI_SR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPI_SR register */
#define   SPI_SR_TXEMPTY_0_Val           _UINT32_(0x0)                                        /* (SPI_SR) As soon as data is written in SPI_TDR.  */
#define   SPI_SR_TXEMPTY_1_Val           _UINT32_(0x1)                                        /* (SPI_SR) SPI_TDR and internal shift register are empty. If a transfer delay has been defined, TXEMPTY is set after the end of this delay.  */
#define SPI_SR_TXEMPTY_0                 (SPI_SR_TXEMPTY_0_Val << SPI_SR_TXEMPTY_Pos) /* (SPI_SR) As soon as data is written in SPI_TDR. Position */
#define SPI_SR_TXEMPTY_1                 (SPI_SR_TXEMPTY_1_Val << SPI_SR_TXEMPTY_Pos) /* (SPI_SR) SPI_TDR and internal shift register are empty. If a transfer delay has been defined, TXEMPTY is set after the end of this delay. Position */
#define SPI_SR_UNDES_Pos                 _UINT32_(10)                                         /* (SPI_SR) Underrun Error Status (Client mode only) (cleared on read) Position */
#define SPI_SR_UNDES_Msk                 (_UINT32_(0x1) << SPI_SR_UNDES_Pos)             /* (SPI_SR) Underrun Error Status (Client mode only) (cleared on read) Mask */
#define SPI_SR_UNDES(value)              (SPI_SR_UNDES_Msk & (_UINT32_(value) << SPI_SR_UNDES_Pos)) /* Assignment of value for UNDES in the SPI_SR register */
#define   SPI_SR_UNDES_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) No underrun has been detected since the last read of SPI_SR.  */
#define   SPI_SR_UNDES_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) A transfer starts whereas no data has been loaded in SPI_TDR, cleared when SPI_SR is read.  */
#define SPI_SR_UNDES_0                   (SPI_SR_UNDES_0_Val << SPI_SR_UNDES_Pos)   /* (SPI_SR) No underrun has been detected since the last read of SPI_SR. Position */
#define SPI_SR_UNDES_1                   (SPI_SR_UNDES_1_Val << SPI_SR_UNDES_Pos)   /* (SPI_SR) A transfer starts whereas no data has been loaded in SPI_TDR, cleared when SPI_SR is read. Position */
#define SPI_SR_CMP_Pos                   _UINT32_(11)                                         /* (SPI_SR) Comparison Status (cleared on read) Position */
#define SPI_SR_CMP_Msk                   (_UINT32_(0x1) << SPI_SR_CMP_Pos)               /* (SPI_SR) Comparison Status (cleared on read) Mask */
#define SPI_SR_CMP(value)                (SPI_SR_CMP_Msk & (_UINT32_(value) << SPI_SR_CMP_Pos)) /* Assignment of value for CMP in the SPI_SR register */
#define   SPI_SR_CMP_0_Val               _UINT32_(0x0)                                        /* (SPI_SR) No received character matched the comparison criteria programmed in VAL1 and VAL2 fields in SPI_CMPR since the last read of SPI_SR.  */
#define   SPI_SR_CMP_1_Val               _UINT32_(0x1)                                        /* (SPI_SR) A received character matched the comparison criteria since the last read of SPI_SR.  */
#define SPI_SR_CMP_0                     (SPI_SR_CMP_0_Val << SPI_SR_CMP_Pos)       /* (SPI_SR) No received character matched the comparison criteria programmed in VAL1 and VAL2 fields in SPI_CMPR since the last read of SPI_SR. Position */
#define SPI_SR_CMP_1                     (SPI_SR_CMP_1_Val << SPI_SR_CMP_Pos)       /* (SPI_SR) A received character matched the comparison criteria since the last read of SPI_SR. Position */
#define SPI_SR_SFERR_Pos                 _UINT32_(12)                                         /* (SPI_SR) Client Mode Frame Error (cleared on read) Position */
#define SPI_SR_SFERR_Msk                 (_UINT32_(0x1) << SPI_SR_SFERR_Pos)             /* (SPI_SR) Client Mode Frame Error (cleared on read) Mask */
#define SPI_SR_SFERR(value)              (SPI_SR_SFERR_Msk & (_UINT32_(value) << SPI_SR_SFERR_Pos)) /* Assignment of value for SFERR in the SPI_SR register */
#define   SPI_SR_SFERR_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) No frame error has been detected for a client access since the last read of SPI_SR.  */
#define   SPI_SR_SFERR_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) In Client mode, the chip select raised while the character defined in SPI_CSR0.BITS was not complete.  */
#define SPI_SR_SFERR_0                   (SPI_SR_SFERR_0_Val << SPI_SR_SFERR_Pos)   /* (SPI_SR) No frame error has been detected for a client access since the last read of SPI_SR. Position */
#define SPI_SR_SFERR_1                   (SPI_SR_SFERR_1_Val << SPI_SR_SFERR_Pos)   /* (SPI_SR) In Client mode, the chip select raised while the character defined in SPI_CSR0.BITS was not complete. Position */
#define SPI_SR_SECE_Pos                  _UINT32_(14)                                         /* (SPI_SR) Security/Safety Error (cleared on read) Position */
#define SPI_SR_SECE_Msk                  (_UINT32_(0x1) << SPI_SR_SECE_Pos)              /* (SPI_SR) Security/Safety Error (cleared on read) Mask */
#define SPI_SR_SECE(value)               (SPI_SR_SECE_Msk & (_UINT32_(value) << SPI_SR_SECE_Pos)) /* Assignment of value for SECE in the SPI_SR register */
#define   SPI_SR_SECE_0_Val              _UINT32_(0x0)                                        /* (SPI_SR) No error detected on NPCS0/MOSI and/or SPCK pad output and no access violation of a write-protected register since the last read of SPI_SR.  */
#define   SPI_SR_SECE_1_Val              _UINT32_(0x1)                                        /* (SPI_SR) An error has been detected on TXD and/or SCK pad output (SPI_WPSR.PADERR=1) and/or a violation of a write-protected register (SPI_WPSR.WPVS=1) since the last read of SPI_SR.  */
#define SPI_SR_SECE_0                    (SPI_SR_SECE_0_Val << SPI_SR_SECE_Pos)     /* (SPI_SR) No error detected on NPCS0/MOSI and/or SPCK pad output and no access violation of a write-protected register since the last read of SPI_SR. Position */
#define SPI_SR_SECE_1                    (SPI_SR_SECE_1_Val << SPI_SR_SECE_Pos)     /* (SPI_SR) An error has been detected on TXD and/or SCK pad output (SPI_WPSR.PADERR=1) and/or a violation of a write-protected register (SPI_WPSR.WPVS=1) since the last read of SPI_SR. Position */
#define SPI_SR_SPIENS_Pos                _UINT32_(16)                                         /* (SPI_SR) SPI Enable Status Position */
#define SPI_SR_SPIENS_Msk                (_UINT32_(0x1) << SPI_SR_SPIENS_Pos)            /* (SPI_SR) SPI Enable Status Mask */
#define SPI_SR_SPIENS(value)             (SPI_SR_SPIENS_Msk & (_UINT32_(value) << SPI_SR_SPIENS_Pos)) /* Assignment of value for SPIENS in the SPI_SR register */
#define   SPI_SR_SPIENS_0_Val            _UINT32_(0x0)                                        /* (SPI_SR) SPI is disabled.  */
#define   SPI_SR_SPIENS_1_Val            _UINT32_(0x1)                                        /* (SPI_SR) SPI is enabled.  */
#define SPI_SR_SPIENS_0                  (SPI_SR_SPIENS_0_Val << SPI_SR_SPIENS_Pos) /* (SPI_SR) SPI is disabled. Position */
#define SPI_SR_SPIENS_1                  (SPI_SR_SPIENS_1_Val << SPI_SR_SPIENS_Pos) /* (SPI_SR) SPI is enabled. Position */
#define SPI_SR_TXFEF_Pos                 _UINT32_(24)                                         /* (SPI_SR) Transmit FIFO Empty Flag (cleared on read) Position */
#define SPI_SR_TXFEF_Msk                 (_UINT32_(0x1) << SPI_SR_TXFEF_Pos)             /* (SPI_SR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define SPI_SR_TXFEF(value)              (SPI_SR_TXFEF_Msk & (_UINT32_(value) << SPI_SR_TXFEF_Pos)) /* Assignment of value for TXFEF in the SPI_SR register */
#define   SPI_SR_TXFEF_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) Transmit FIFO is not empty.  */
#define   SPI_SR_TXFEF_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) Transmit FIFO has been emptied since the last read of SPI_SR.  */
#define SPI_SR_TXFEF_0                   (SPI_SR_TXFEF_0_Val << SPI_SR_TXFEF_Pos)   /* (SPI_SR) Transmit FIFO is not empty. Position */
#define SPI_SR_TXFEF_1                   (SPI_SR_TXFEF_1_Val << SPI_SR_TXFEF_Pos)   /* (SPI_SR) Transmit FIFO has been emptied since the last read of SPI_SR. Position */
#define SPI_SR_TXFFF_Pos                 _UINT32_(25)                                         /* (SPI_SR) Transmit FIFO Full Flag (cleared on read) Position */
#define SPI_SR_TXFFF_Msk                 (_UINT32_(0x1) << SPI_SR_TXFFF_Pos)             /* (SPI_SR) Transmit FIFO Full Flag (cleared on read) Mask */
#define SPI_SR_TXFFF(value)              (SPI_SR_TXFFF_Msk & (_UINT32_(value) << SPI_SR_TXFFF_Pos)) /* Assignment of value for TXFFF in the SPI_SR register */
#define   SPI_SR_TXFFF_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) Transmit FIFO is not full or TXFF flag has been cleared.  */
#define   SPI_SR_TXFFF_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) Transmit FIFO has been filled since the last read of SPI_SR.  */
#define SPI_SR_TXFFF_0                   (SPI_SR_TXFFF_0_Val << SPI_SR_TXFFF_Pos)   /* (SPI_SR) Transmit FIFO is not full or TXFF flag has been cleared. Position */
#define SPI_SR_TXFFF_1                   (SPI_SR_TXFFF_1_Val << SPI_SR_TXFFF_Pos)   /* (SPI_SR) Transmit FIFO has been filled since the last read of SPI_SR. Position */
#define SPI_SR_TXFTHF_Pos                _UINT32_(26)                                         /* (SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define SPI_SR_TXFTHF_Msk                (_UINT32_(0x1) << SPI_SR_TXFTHF_Pos)            /* (SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define SPI_SR_TXFTHF(value)             (SPI_SR_TXFTHF_Msk & (_UINT32_(value) << SPI_SR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the SPI_SR register */
#define   SPI_SR_TXFTHF_0_Val            _UINT32_(0x0)                                        /* (SPI_SR) Number of data in Transmit FIFO is above TXFTHRES threshold.  */
#define   SPI_SR_TXFTHF_1_Val            _UINT32_(0x1)                                        /* (SPI_SR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of SPI_SR.  */
#define SPI_SR_TXFTHF_0                  (SPI_SR_TXFTHF_0_Val << SPI_SR_TXFTHF_Pos) /* (SPI_SR) Number of data in Transmit FIFO is above TXFTHRES threshold. Position */
#define SPI_SR_TXFTHF_1                  (SPI_SR_TXFTHF_1_Val << SPI_SR_TXFTHF_Pos) /* (SPI_SR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of SPI_SR. Position */
#define SPI_SR_RXFEF_Pos                 _UINT32_(27)                                         /* (SPI_SR) Receive FIFO Empty Flag Position */
#define SPI_SR_RXFEF_Msk                 (_UINT32_(0x1) << SPI_SR_RXFEF_Pos)             /* (SPI_SR) Receive FIFO Empty Flag Mask */
#define SPI_SR_RXFEF(value)              (SPI_SR_RXFEF_Msk & (_UINT32_(value) << SPI_SR_RXFEF_Pos)) /* Assignment of value for RXFEF in the SPI_SR register */
#define   SPI_SR_RXFEF_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared.  */
#define   SPI_SR_RXFEF_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) Receive FIFO has been emptied (changing states from "not empty" to "empty").  */
#define SPI_SR_RXFEF_0                   (SPI_SR_RXFEF_0_Val << SPI_SR_RXFEF_Pos)   /* (SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared. Position */
#define SPI_SR_RXFEF_1                   (SPI_SR_RXFEF_1_Val << SPI_SR_RXFEF_Pos)   /* (SPI_SR) Receive FIFO has been emptied (changing states from "not empty" to "empty"). Position */
#define SPI_SR_RXFFF_Pos                 _UINT32_(28)                                         /* (SPI_SR) Receive FIFO Full Flag Position */
#define SPI_SR_RXFFF_Msk                 (_UINT32_(0x1) << SPI_SR_RXFFF_Pos)             /* (SPI_SR) Receive FIFO Full Flag Mask */
#define SPI_SR_RXFFF(value)              (SPI_SR_RXFFF_Msk & (_UINT32_(value) << SPI_SR_RXFFF_Pos)) /* Assignment of value for RXFFF in the SPI_SR register */
#define   SPI_SR_RXFFF_0_Val             _UINT32_(0x0)                                        /* (SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared.  */
#define   SPI_SR_RXFFF_1_Val             _UINT32_(0x1)                                        /* (SPI_SR) Receive FIFO has been filled (changing states from "not full" to "full").  */
#define SPI_SR_RXFFF_0                   (SPI_SR_RXFFF_0_Val << SPI_SR_RXFFF_Pos)   /* (SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared. Position */
#define SPI_SR_RXFFF_1                   (SPI_SR_RXFFF_1_Val << SPI_SR_RXFFF_Pos)   /* (SPI_SR) Receive FIFO has been filled (changing states from "not full" to "full"). Position */
#define SPI_SR_RXFTHF_Pos                _UINT32_(29)                                         /* (SPI_SR) Receive FIFO Threshold Flag Position */
#define SPI_SR_RXFTHF_Msk                (_UINT32_(0x1) << SPI_SR_RXFTHF_Pos)            /* (SPI_SR) Receive FIFO Threshold Flag Mask */
#define SPI_SR_RXFTHF(value)             (SPI_SR_RXFTHF_Msk & (_UINT32_(value) << SPI_SR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the SPI_SR register */
#define   SPI_SR_RXFTHF_0_Val            _UINT32_(0x0)                                        /* (SPI_SR) Number of unread data in Receive FIFO is below RXFTHRES threshold or RXFTH flag has been cleared.  */
#define   SPI_SR_RXFTHF_1_Val            _UINT32_(0x1)                                        /* (SPI_SR) Number of unread data in Receive FIFO has reached RXFTHRES threshold (changing states from "below threshold" to "equal to or above threshold").  */
#define SPI_SR_RXFTHF_0                  (SPI_SR_RXFTHF_0_Val << SPI_SR_RXFTHF_Pos) /* (SPI_SR) Number of unread data in Receive FIFO is below RXFTHRES threshold or RXFTH flag has been cleared. Position */
#define SPI_SR_RXFTHF_1                  (SPI_SR_RXFTHF_1_Val << SPI_SR_RXFTHF_Pos) /* (SPI_SR) Number of unread data in Receive FIFO has reached RXFTHRES threshold (changing states from "below threshold" to "equal to or above threshold"). Position */
#define SPI_SR_TXFPTEF_Pos               _UINT32_(30)                                         /* (SPI_SR) Transmit FIFO Overflow Error Flag Position */
#define SPI_SR_TXFPTEF_Msk               (_UINT32_(0x1) << SPI_SR_TXFPTEF_Pos)           /* (SPI_SR) Transmit FIFO Overflow Error Flag Mask */
#define SPI_SR_TXFPTEF(value)            (SPI_SR_TXFPTEF_Msk & (_UINT32_(value) << SPI_SR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the SPI_SR register */
#define   SPI_SR_TXFPTEF_0_Val           _UINT32_(0x0)                                        /* (SPI_SR) No Transmit FIFO overflow occurred.  */
#define   SPI_SR_TXFPTEF_1_Val           _UINT32_(0x1)                                        /* (SPI_SR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing SPI_CR.SWRST=1.  */
#define SPI_SR_TXFPTEF_0                 (SPI_SR_TXFPTEF_0_Val << SPI_SR_TXFPTEF_Pos) /* (SPI_SR) No Transmit FIFO overflow occurred. Position */
#define SPI_SR_TXFPTEF_1                 (SPI_SR_TXFPTEF_1_Val << SPI_SR_TXFPTEF_Pos) /* (SPI_SR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing SPI_CR.SWRST=1. Position */
#define SPI_SR_RXFPTEF_Pos               _UINT32_(31)                                         /* (SPI_SR) Receive FIFO Underflow Error Flag Position */
#define SPI_SR_RXFPTEF_Msk               (_UINT32_(0x1) << SPI_SR_RXFPTEF_Pos)           /* (SPI_SR) Receive FIFO Underflow Error Flag Mask */
#define SPI_SR_RXFPTEF(value)            (SPI_SR_RXFPTEF_Msk & (_UINT32_(value) << SPI_SR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the SPI_SR register */
#define   SPI_SR_RXFPTEF_0_Val           _UINT32_(0x0)                                        /* (SPI_SR) No Receive FIFO underflow occurred.  */
#define   SPI_SR_RXFPTEF_1_Val           _UINT32_(0x1)                                        /* (SPI_SR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing SPI_CR.SWRST=1.  */
#define SPI_SR_RXFPTEF_0                 (SPI_SR_RXFPTEF_0_Val << SPI_SR_RXFPTEF_Pos) /* (SPI_SR) No Receive FIFO underflow occurred. Position */
#define SPI_SR_RXFPTEF_1                 (SPI_SR_RXFPTEF_1_Val << SPI_SR_RXFPTEF_Pos) /* (SPI_SR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing SPI_CR.SWRST=1. Position */
#define SPI_SR_Msk                       _UINT32_(0xFF015F0F)                                 /* (SPI_SR) Register Mask  */


/* -------- SPI_IER : (FLEXCOM Offset: 0x414) ( /W 32) SPI Interrupt Enable Register -------- */
#define SPI_IER_RDRF_Pos                 _UINT32_(0)                                          /* (SPI_IER) Receive Data Register Full Interrupt Enable Position */
#define SPI_IER_RDRF_Msk                 (_UINT32_(0x1) << SPI_IER_RDRF_Pos)             /* (SPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define SPI_IER_RDRF(value)              (SPI_IER_RDRF_Msk & (_UINT32_(value) << SPI_IER_RDRF_Pos)) /* Assignment of value for RDRF in the SPI_IER register */
#define SPI_IER_TDRE_Pos                 _UINT32_(1)                                          /* (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Position */
#define SPI_IER_TDRE_Msk                 (_UINT32_(0x1) << SPI_IER_TDRE_Pos)             /* (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Mask */
#define SPI_IER_TDRE(value)              (SPI_IER_TDRE_Msk & (_UINT32_(value) << SPI_IER_TDRE_Pos)) /* Assignment of value for TDRE in the SPI_IER register */
#define SPI_IER_MODF_Pos                 _UINT32_(2)                                          /* (SPI_IER) Mode Fault Error Interrupt Enable Position */
#define SPI_IER_MODF_Msk                 (_UINT32_(0x1) << SPI_IER_MODF_Pos)             /* (SPI_IER) Mode Fault Error Interrupt Enable Mask */
#define SPI_IER_MODF(value)              (SPI_IER_MODF_Msk & (_UINT32_(value) << SPI_IER_MODF_Pos)) /* Assignment of value for MODF in the SPI_IER register */
#define SPI_IER_OVRES_Pos                _UINT32_(3)                                          /* (SPI_IER) Overrun Error Interrupt Enable Position */
#define SPI_IER_OVRES_Msk                (_UINT32_(0x1) << SPI_IER_OVRES_Pos)            /* (SPI_IER) Overrun Error Interrupt Enable Mask */
#define SPI_IER_OVRES(value)             (SPI_IER_OVRES_Msk & (_UINT32_(value) << SPI_IER_OVRES_Pos)) /* Assignment of value for OVRES in the SPI_IER register */
#define SPI_IER_NSSR_Pos                 _UINT32_(8)                                          /* (SPI_IER) NSS Rising Interrupt Enable Position */
#define SPI_IER_NSSR_Msk                 (_UINT32_(0x1) << SPI_IER_NSSR_Pos)             /* (SPI_IER) NSS Rising Interrupt Enable Mask */
#define SPI_IER_NSSR(value)              (SPI_IER_NSSR_Msk & (_UINT32_(value) << SPI_IER_NSSR_Pos)) /* Assignment of value for NSSR in the SPI_IER register */
#define SPI_IER_TXEMPTY_Pos              _UINT32_(9)                                          /* (SPI_IER) Transmission Registers Empty Enable Position */
#define SPI_IER_TXEMPTY_Msk              (_UINT32_(0x1) << SPI_IER_TXEMPTY_Pos)          /* (SPI_IER) Transmission Registers Empty Enable Mask */
#define SPI_IER_TXEMPTY(value)           (SPI_IER_TXEMPTY_Msk & (_UINT32_(value) << SPI_IER_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPI_IER register */
#define SPI_IER_UNDES_Pos                _UINT32_(10)                                         /* (SPI_IER) Underrun Error Interrupt Enable Position */
#define SPI_IER_UNDES_Msk                (_UINT32_(0x1) << SPI_IER_UNDES_Pos)            /* (SPI_IER) Underrun Error Interrupt Enable Mask */
#define SPI_IER_UNDES(value)             (SPI_IER_UNDES_Msk & (_UINT32_(value) << SPI_IER_UNDES_Pos)) /* Assignment of value for UNDES in the SPI_IER register */
#define SPI_IER_CMP_Pos                  _UINT32_(11)                                         /* (SPI_IER) Comparison Interrupt Enable Position */
#define SPI_IER_CMP_Msk                  (_UINT32_(0x1) << SPI_IER_CMP_Pos)              /* (SPI_IER) Comparison Interrupt Enable Mask */
#define SPI_IER_CMP(value)               (SPI_IER_CMP_Msk & (_UINT32_(value) << SPI_IER_CMP_Pos)) /* Assignment of value for CMP in the SPI_IER register */
#define SPI_IER_SFERR_Pos                _UINT32_(12)                                         /* (SPI_IER) Client Mode Frame Error Interrupt Enable Position */
#define SPI_IER_SFERR_Msk                (_UINT32_(0x1) << SPI_IER_SFERR_Pos)            /* (SPI_IER) Client Mode Frame Error Interrupt Enable Mask */
#define SPI_IER_SFERR(value)             (SPI_IER_SFERR_Msk & (_UINT32_(value) << SPI_IER_SFERR_Pos)) /* Assignment of value for SFERR in the SPI_IER register */
#define SPI_IER_SECE_Pos                 _UINT32_(14)                                         /* (SPI_IER) Security/Safety Error Interrupt Enable Position */
#define SPI_IER_SECE_Msk                 (_UINT32_(0x1) << SPI_IER_SECE_Pos)             /* (SPI_IER) Security/Safety Error Interrupt Enable Mask */
#define SPI_IER_SECE(value)              (SPI_IER_SECE_Msk & (_UINT32_(value) << SPI_IER_SECE_Pos)) /* Assignment of value for SECE in the SPI_IER register */
#define SPI_IER_TXFEF_Pos                _UINT32_(24)                                         /* (SPI_IER) TXFEF Interrupt Enable Position */
#define SPI_IER_TXFEF_Msk                (_UINT32_(0x1) << SPI_IER_TXFEF_Pos)            /* (SPI_IER) TXFEF Interrupt Enable Mask */
#define SPI_IER_TXFEF(value)             (SPI_IER_TXFEF_Msk & (_UINT32_(value) << SPI_IER_TXFEF_Pos)) /* Assignment of value for TXFEF in the SPI_IER register */
#define SPI_IER_TXFFF_Pos                _UINT32_(25)                                         /* (SPI_IER) TXFFF Interrupt Enable Position */
#define SPI_IER_TXFFF_Msk                (_UINT32_(0x1) << SPI_IER_TXFFF_Pos)            /* (SPI_IER) TXFFF Interrupt Enable Mask */
#define SPI_IER_TXFFF(value)             (SPI_IER_TXFFF_Msk & (_UINT32_(value) << SPI_IER_TXFFF_Pos)) /* Assignment of value for TXFFF in the SPI_IER register */
#define SPI_IER_TXFTHF_Pos               _UINT32_(26)                                         /* (SPI_IER) TXFTHF Interrupt Enable Position */
#define SPI_IER_TXFTHF_Msk               (_UINT32_(0x1) << SPI_IER_TXFTHF_Pos)           /* (SPI_IER) TXFTHF Interrupt Enable Mask */
#define SPI_IER_TXFTHF(value)            (SPI_IER_TXFTHF_Msk & (_UINT32_(value) << SPI_IER_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the SPI_IER register */
#define SPI_IER_RXFEF_Pos                _UINT32_(27)                                         /* (SPI_IER) RXFEF Interrupt Enable Position */
#define SPI_IER_RXFEF_Msk                (_UINT32_(0x1) << SPI_IER_RXFEF_Pos)            /* (SPI_IER) RXFEF Interrupt Enable Mask */
#define SPI_IER_RXFEF(value)             (SPI_IER_RXFEF_Msk & (_UINT32_(value) << SPI_IER_RXFEF_Pos)) /* Assignment of value for RXFEF in the SPI_IER register */
#define SPI_IER_RXFFF_Pos                _UINT32_(28)                                         /* (SPI_IER) RXFFF Interrupt Enable Position */
#define SPI_IER_RXFFF_Msk                (_UINT32_(0x1) << SPI_IER_RXFFF_Pos)            /* (SPI_IER) RXFFF Interrupt Enable Mask */
#define SPI_IER_RXFFF(value)             (SPI_IER_RXFFF_Msk & (_UINT32_(value) << SPI_IER_RXFFF_Pos)) /* Assignment of value for RXFFF in the SPI_IER register */
#define SPI_IER_RXFTHF_Pos               _UINT32_(29)                                         /* (SPI_IER) RXFTHF Interrupt Enable Position */
#define SPI_IER_RXFTHF_Msk               (_UINT32_(0x1) << SPI_IER_RXFTHF_Pos)           /* (SPI_IER) RXFTHF Interrupt Enable Mask */
#define SPI_IER_RXFTHF(value)            (SPI_IER_RXFTHF_Msk & (_UINT32_(value) << SPI_IER_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the SPI_IER register */
#define SPI_IER_TXFPTEF_Pos              _UINT32_(30)                                         /* (SPI_IER) TXFPTEF Interrupt Enable Position */
#define SPI_IER_TXFPTEF_Msk              (_UINT32_(0x1) << SPI_IER_TXFPTEF_Pos)          /* (SPI_IER) TXFPTEF Interrupt Enable Mask */
#define SPI_IER_TXFPTEF(value)           (SPI_IER_TXFPTEF_Msk & (_UINT32_(value) << SPI_IER_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the SPI_IER register */
#define SPI_IER_RXFPTEF_Pos              _UINT32_(31)                                         /* (SPI_IER) RXFPTEF Interrupt Enable Position */
#define SPI_IER_RXFPTEF_Msk              (_UINT32_(0x1) << SPI_IER_RXFPTEF_Pos)          /* (SPI_IER) RXFPTEF Interrupt Enable Mask */
#define SPI_IER_RXFPTEF(value)           (SPI_IER_RXFPTEF_Msk & (_UINT32_(value) << SPI_IER_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the SPI_IER register */
#define SPI_IER_Msk                      _UINT32_(0xFF005F0F)                                 /* (SPI_IER) Register Mask  */


/* -------- SPI_IDR : (FLEXCOM Offset: 0x418) ( /W 32) SPI Interrupt Disable Register -------- */
#define SPI_IDR_RDRF_Pos                 _UINT32_(0)                                          /* (SPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define SPI_IDR_RDRF_Msk                 (_UINT32_(0x1) << SPI_IDR_RDRF_Pos)             /* (SPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define SPI_IDR_RDRF(value)              (SPI_IDR_RDRF_Msk & (_UINT32_(value) << SPI_IDR_RDRF_Pos)) /* Assignment of value for RDRF in the SPI_IDR register */
#define SPI_IDR_TDRE_Pos                 _UINT32_(1)                                          /* (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Position */
#define SPI_IDR_TDRE_Msk                 (_UINT32_(0x1) << SPI_IDR_TDRE_Pos)             /* (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Mask */
#define SPI_IDR_TDRE(value)              (SPI_IDR_TDRE_Msk & (_UINT32_(value) << SPI_IDR_TDRE_Pos)) /* Assignment of value for TDRE in the SPI_IDR register */
#define SPI_IDR_MODF_Pos                 _UINT32_(2)                                          /* (SPI_IDR) Mode Fault Error Interrupt Disable Position */
#define SPI_IDR_MODF_Msk                 (_UINT32_(0x1) << SPI_IDR_MODF_Pos)             /* (SPI_IDR) Mode Fault Error Interrupt Disable Mask */
#define SPI_IDR_MODF(value)              (SPI_IDR_MODF_Msk & (_UINT32_(value) << SPI_IDR_MODF_Pos)) /* Assignment of value for MODF in the SPI_IDR register */
#define SPI_IDR_OVRES_Pos                _UINT32_(3)                                          /* (SPI_IDR) Overrun Error Interrupt Disable Position */
#define SPI_IDR_OVRES_Msk                (_UINT32_(0x1) << SPI_IDR_OVRES_Pos)            /* (SPI_IDR) Overrun Error Interrupt Disable Mask */
#define SPI_IDR_OVRES(value)             (SPI_IDR_OVRES_Msk & (_UINT32_(value) << SPI_IDR_OVRES_Pos)) /* Assignment of value for OVRES in the SPI_IDR register */
#define SPI_IDR_NSSR_Pos                 _UINT32_(8)                                          /* (SPI_IDR) NSS Rising Interrupt Disable Position */
#define SPI_IDR_NSSR_Msk                 (_UINT32_(0x1) << SPI_IDR_NSSR_Pos)             /* (SPI_IDR) NSS Rising Interrupt Disable Mask */
#define SPI_IDR_NSSR(value)              (SPI_IDR_NSSR_Msk & (_UINT32_(value) << SPI_IDR_NSSR_Pos)) /* Assignment of value for NSSR in the SPI_IDR register */
#define SPI_IDR_TXEMPTY_Pos              _UINT32_(9)                                          /* (SPI_IDR) Transmission Registers Empty Disable Position */
#define SPI_IDR_TXEMPTY_Msk              (_UINT32_(0x1) << SPI_IDR_TXEMPTY_Pos)          /* (SPI_IDR) Transmission Registers Empty Disable Mask */
#define SPI_IDR_TXEMPTY(value)           (SPI_IDR_TXEMPTY_Msk & (_UINT32_(value) << SPI_IDR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPI_IDR register */
#define SPI_IDR_UNDES_Pos                _UINT32_(10)                                         /* (SPI_IDR) Underrun Error Interrupt Disable Position */
#define SPI_IDR_UNDES_Msk                (_UINT32_(0x1) << SPI_IDR_UNDES_Pos)            /* (SPI_IDR) Underrun Error Interrupt Disable Mask */
#define SPI_IDR_UNDES(value)             (SPI_IDR_UNDES_Msk & (_UINT32_(value) << SPI_IDR_UNDES_Pos)) /* Assignment of value for UNDES in the SPI_IDR register */
#define SPI_IDR_CMP_Pos                  _UINT32_(11)                                         /* (SPI_IDR) Comparison Interrupt Disable Position */
#define SPI_IDR_CMP_Msk                  (_UINT32_(0x1) << SPI_IDR_CMP_Pos)              /* (SPI_IDR) Comparison Interrupt Disable Mask */
#define SPI_IDR_CMP(value)               (SPI_IDR_CMP_Msk & (_UINT32_(value) << SPI_IDR_CMP_Pos)) /* Assignment of value for CMP in the SPI_IDR register */
#define SPI_IDR_SFERR_Pos                _UINT32_(12)                                         /* (SPI_IDR) Client Mode Frame Error Interrupt Disable Position */
#define SPI_IDR_SFERR_Msk                (_UINT32_(0x1) << SPI_IDR_SFERR_Pos)            /* (SPI_IDR) Client Mode Frame Error Interrupt Disable Mask */
#define SPI_IDR_SFERR(value)             (SPI_IDR_SFERR_Msk & (_UINT32_(value) << SPI_IDR_SFERR_Pos)) /* Assignment of value for SFERR in the SPI_IDR register */
#define SPI_IDR_SECE_Pos                 _UINT32_(14)                                         /* (SPI_IDR) Security/Safety Error Interrupt Disable Position */
#define SPI_IDR_SECE_Msk                 (_UINT32_(0x1) << SPI_IDR_SECE_Pos)             /* (SPI_IDR) Security/Safety Error Interrupt Disable Mask */
#define SPI_IDR_SECE(value)              (SPI_IDR_SECE_Msk & (_UINT32_(value) << SPI_IDR_SECE_Pos)) /* Assignment of value for SECE in the SPI_IDR register */
#define SPI_IDR_TXFEF_Pos                _UINT32_(24)                                         /* (SPI_IDR) TXFEF Interrupt Disable Position */
#define SPI_IDR_TXFEF_Msk                (_UINT32_(0x1) << SPI_IDR_TXFEF_Pos)            /* (SPI_IDR) TXFEF Interrupt Disable Mask */
#define SPI_IDR_TXFEF(value)             (SPI_IDR_TXFEF_Msk & (_UINT32_(value) << SPI_IDR_TXFEF_Pos)) /* Assignment of value for TXFEF in the SPI_IDR register */
#define SPI_IDR_TXFFF_Pos                _UINT32_(25)                                         /* (SPI_IDR) TXFFF Interrupt Disable Position */
#define SPI_IDR_TXFFF_Msk                (_UINT32_(0x1) << SPI_IDR_TXFFF_Pos)            /* (SPI_IDR) TXFFF Interrupt Disable Mask */
#define SPI_IDR_TXFFF(value)             (SPI_IDR_TXFFF_Msk & (_UINT32_(value) << SPI_IDR_TXFFF_Pos)) /* Assignment of value for TXFFF in the SPI_IDR register */
#define SPI_IDR_TXFTHF_Pos               _UINT32_(26)                                         /* (SPI_IDR) TXFTHF Interrupt Disable Position */
#define SPI_IDR_TXFTHF_Msk               (_UINT32_(0x1) << SPI_IDR_TXFTHF_Pos)           /* (SPI_IDR) TXFTHF Interrupt Disable Mask */
#define SPI_IDR_TXFTHF(value)            (SPI_IDR_TXFTHF_Msk & (_UINT32_(value) << SPI_IDR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the SPI_IDR register */
#define SPI_IDR_RXFEF_Pos                _UINT32_(27)                                         /* (SPI_IDR) RXFEF Interrupt Disable Position */
#define SPI_IDR_RXFEF_Msk                (_UINT32_(0x1) << SPI_IDR_RXFEF_Pos)            /* (SPI_IDR) RXFEF Interrupt Disable Mask */
#define SPI_IDR_RXFEF(value)             (SPI_IDR_RXFEF_Msk & (_UINT32_(value) << SPI_IDR_RXFEF_Pos)) /* Assignment of value for RXFEF in the SPI_IDR register */
#define SPI_IDR_RXFFF_Pos                _UINT32_(28)                                         /* (SPI_IDR) RXFFF Interrupt Disable Position */
#define SPI_IDR_RXFFF_Msk                (_UINT32_(0x1) << SPI_IDR_RXFFF_Pos)            /* (SPI_IDR) RXFFF Interrupt Disable Mask */
#define SPI_IDR_RXFFF(value)             (SPI_IDR_RXFFF_Msk & (_UINT32_(value) << SPI_IDR_RXFFF_Pos)) /* Assignment of value for RXFFF in the SPI_IDR register */
#define SPI_IDR_RXFTHF_Pos               _UINT32_(29)                                         /* (SPI_IDR) RXFTHF Interrupt Disable Position */
#define SPI_IDR_RXFTHF_Msk               (_UINT32_(0x1) << SPI_IDR_RXFTHF_Pos)           /* (SPI_IDR) RXFTHF Interrupt Disable Mask */
#define SPI_IDR_RXFTHF(value)            (SPI_IDR_RXFTHF_Msk & (_UINT32_(value) << SPI_IDR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the SPI_IDR register */
#define SPI_IDR_TXFPTEF_Pos              _UINT32_(30)                                         /* (SPI_IDR) TXFPTEF Interrupt Disable Position */
#define SPI_IDR_TXFPTEF_Msk              (_UINT32_(0x1) << SPI_IDR_TXFPTEF_Pos)          /* (SPI_IDR) TXFPTEF Interrupt Disable Mask */
#define SPI_IDR_TXFPTEF(value)           (SPI_IDR_TXFPTEF_Msk & (_UINT32_(value) << SPI_IDR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the SPI_IDR register */
#define SPI_IDR_RXFPTEF_Pos              _UINT32_(31)                                         /* (SPI_IDR) RXFPTEF Interrupt Disable Position */
#define SPI_IDR_RXFPTEF_Msk              (_UINT32_(0x1) << SPI_IDR_RXFPTEF_Pos)          /* (SPI_IDR) RXFPTEF Interrupt Disable Mask */
#define SPI_IDR_RXFPTEF(value)           (SPI_IDR_RXFPTEF_Msk & (_UINT32_(value) << SPI_IDR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the SPI_IDR register */
#define SPI_IDR_Msk                      _UINT32_(0xFF005F0F)                                 /* (SPI_IDR) Register Mask  */


/* -------- SPI_IMR : (FLEXCOM Offset: 0x41C) ( R/ 32) SPI Interrupt Mask Register -------- */
#define SPI_IMR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPI_IMR) SPI Interrupt Mask Register  Reset Value */

#define SPI_IMR_RDRF_Pos                 _UINT32_(0)                                          /* (SPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define SPI_IMR_RDRF_Msk                 (_UINT32_(0x1) << SPI_IMR_RDRF_Pos)             /* (SPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define SPI_IMR_RDRF(value)              (SPI_IMR_RDRF_Msk & (_UINT32_(value) << SPI_IMR_RDRF_Pos)) /* Assignment of value for RDRF in the SPI_IMR register */
#define SPI_IMR_TDRE_Pos                 _UINT32_(1)                                          /* (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Position */
#define SPI_IMR_TDRE_Msk                 (_UINT32_(0x1) << SPI_IMR_TDRE_Pos)             /* (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Mask */
#define SPI_IMR_TDRE(value)              (SPI_IMR_TDRE_Msk & (_UINT32_(value) << SPI_IMR_TDRE_Pos)) /* Assignment of value for TDRE in the SPI_IMR register */
#define SPI_IMR_MODF_Pos                 _UINT32_(2)                                          /* (SPI_IMR) Mode Fault Error Interrupt Mask Position */
#define SPI_IMR_MODF_Msk                 (_UINT32_(0x1) << SPI_IMR_MODF_Pos)             /* (SPI_IMR) Mode Fault Error Interrupt Mask Mask */
#define SPI_IMR_MODF(value)              (SPI_IMR_MODF_Msk & (_UINT32_(value) << SPI_IMR_MODF_Pos)) /* Assignment of value for MODF in the SPI_IMR register */
#define SPI_IMR_OVRES_Pos                _UINT32_(3)                                          /* (SPI_IMR) Overrun Error Interrupt Mask Position */
#define SPI_IMR_OVRES_Msk                (_UINT32_(0x1) << SPI_IMR_OVRES_Pos)            /* (SPI_IMR) Overrun Error Interrupt Mask Mask */
#define SPI_IMR_OVRES(value)             (SPI_IMR_OVRES_Msk & (_UINT32_(value) << SPI_IMR_OVRES_Pos)) /* Assignment of value for OVRES in the SPI_IMR register */
#define SPI_IMR_NSSR_Pos                 _UINT32_(8)                                          /* (SPI_IMR) NSS Rising Interrupt Mask Position */
#define SPI_IMR_NSSR_Msk                 (_UINT32_(0x1) << SPI_IMR_NSSR_Pos)             /* (SPI_IMR) NSS Rising Interrupt Mask Mask */
#define SPI_IMR_NSSR(value)              (SPI_IMR_NSSR_Msk & (_UINT32_(value) << SPI_IMR_NSSR_Pos)) /* Assignment of value for NSSR in the SPI_IMR register */
#define SPI_IMR_TXEMPTY_Pos              _UINT32_(9)                                          /* (SPI_IMR) Transmission Registers Empty Mask Position */
#define SPI_IMR_TXEMPTY_Msk              (_UINT32_(0x1) << SPI_IMR_TXEMPTY_Pos)          /* (SPI_IMR) Transmission Registers Empty Mask Mask */
#define SPI_IMR_TXEMPTY(value)           (SPI_IMR_TXEMPTY_Msk & (_UINT32_(value) << SPI_IMR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPI_IMR register */
#define SPI_IMR_UNDES_Pos                _UINT32_(10)                                         /* (SPI_IMR) Underrun Error Interrupt Mask Position */
#define SPI_IMR_UNDES_Msk                (_UINT32_(0x1) << SPI_IMR_UNDES_Pos)            /* (SPI_IMR) Underrun Error Interrupt Mask Mask */
#define SPI_IMR_UNDES(value)             (SPI_IMR_UNDES_Msk & (_UINT32_(value) << SPI_IMR_UNDES_Pos)) /* Assignment of value for UNDES in the SPI_IMR register */
#define SPI_IMR_CMP_Pos                  _UINT32_(11)                                         /* (SPI_IMR) Comparison Interrupt Mask Position */
#define SPI_IMR_CMP_Msk                  (_UINT32_(0x1) << SPI_IMR_CMP_Pos)              /* (SPI_IMR) Comparison Interrupt Mask Mask */
#define SPI_IMR_CMP(value)               (SPI_IMR_CMP_Msk & (_UINT32_(value) << SPI_IMR_CMP_Pos)) /* Assignment of value for CMP in the SPI_IMR register */
#define SPI_IMR_SFERR_Pos                _UINT32_(12)                                         /* (SPI_IMR) Client Mode Frame Error Interrupt Mask Position */
#define SPI_IMR_SFERR_Msk                (_UINT32_(0x1) << SPI_IMR_SFERR_Pos)            /* (SPI_IMR) Client Mode Frame Error Interrupt Mask Mask */
#define SPI_IMR_SFERR(value)             (SPI_IMR_SFERR_Msk & (_UINT32_(value) << SPI_IMR_SFERR_Pos)) /* Assignment of value for SFERR in the SPI_IMR register */
#define SPI_IMR_SECE_Pos                 _UINT32_(14)                                         /* (SPI_IMR) Security/Safety Error Interrupt Mask Position */
#define SPI_IMR_SECE_Msk                 (_UINT32_(0x1) << SPI_IMR_SECE_Pos)             /* (SPI_IMR) Security/Safety Error Interrupt Mask Mask */
#define SPI_IMR_SECE(value)              (SPI_IMR_SECE_Msk & (_UINT32_(value) << SPI_IMR_SECE_Pos)) /* Assignment of value for SECE in the SPI_IMR register */
#define SPI_IMR_TXFEF_Pos                _UINT32_(24)                                         /* (SPI_IMR) TXFEF Interrupt Mask Position */
#define SPI_IMR_TXFEF_Msk                (_UINT32_(0x1) << SPI_IMR_TXFEF_Pos)            /* (SPI_IMR) TXFEF Interrupt Mask Mask */
#define SPI_IMR_TXFEF(value)             (SPI_IMR_TXFEF_Msk & (_UINT32_(value) << SPI_IMR_TXFEF_Pos)) /* Assignment of value for TXFEF in the SPI_IMR register */
#define SPI_IMR_TXFFF_Pos                _UINT32_(25)                                         /* (SPI_IMR) TXFFF Interrupt Mask Position */
#define SPI_IMR_TXFFF_Msk                (_UINT32_(0x1) << SPI_IMR_TXFFF_Pos)            /* (SPI_IMR) TXFFF Interrupt Mask Mask */
#define SPI_IMR_TXFFF(value)             (SPI_IMR_TXFFF_Msk & (_UINT32_(value) << SPI_IMR_TXFFF_Pos)) /* Assignment of value for TXFFF in the SPI_IMR register */
#define SPI_IMR_TXFTHF_Pos               _UINT32_(26)                                         /* (SPI_IMR) TXFTHF Interrupt Mask Position */
#define SPI_IMR_TXFTHF_Msk               (_UINT32_(0x1) << SPI_IMR_TXFTHF_Pos)           /* (SPI_IMR) TXFTHF Interrupt Mask Mask */
#define SPI_IMR_TXFTHF(value)            (SPI_IMR_TXFTHF_Msk & (_UINT32_(value) << SPI_IMR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the SPI_IMR register */
#define SPI_IMR_RXFEF_Pos                _UINT32_(27)                                         /* (SPI_IMR) RXFEF Interrupt Mask Position */
#define SPI_IMR_RXFEF_Msk                (_UINT32_(0x1) << SPI_IMR_RXFEF_Pos)            /* (SPI_IMR) RXFEF Interrupt Mask Mask */
#define SPI_IMR_RXFEF(value)             (SPI_IMR_RXFEF_Msk & (_UINT32_(value) << SPI_IMR_RXFEF_Pos)) /* Assignment of value for RXFEF in the SPI_IMR register */
#define SPI_IMR_RXFFF_Pos                _UINT32_(28)                                         /* (SPI_IMR) RXFFF Interrupt Mask Position */
#define SPI_IMR_RXFFF_Msk                (_UINT32_(0x1) << SPI_IMR_RXFFF_Pos)            /* (SPI_IMR) RXFFF Interrupt Mask Mask */
#define SPI_IMR_RXFFF(value)             (SPI_IMR_RXFFF_Msk & (_UINT32_(value) << SPI_IMR_RXFFF_Pos)) /* Assignment of value for RXFFF in the SPI_IMR register */
#define SPI_IMR_RXFTHF_Pos               _UINT32_(29)                                         /* (SPI_IMR) RXFTHF Interrupt Mask Position */
#define SPI_IMR_RXFTHF_Msk               (_UINT32_(0x1) << SPI_IMR_RXFTHF_Pos)           /* (SPI_IMR) RXFTHF Interrupt Mask Mask */
#define SPI_IMR_RXFTHF(value)            (SPI_IMR_RXFTHF_Msk & (_UINT32_(value) << SPI_IMR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the SPI_IMR register */
#define SPI_IMR_TXFPTEF_Pos              _UINT32_(30)                                         /* (SPI_IMR) TXFPTEF Interrupt Mask Position */
#define SPI_IMR_TXFPTEF_Msk              (_UINT32_(0x1) << SPI_IMR_TXFPTEF_Pos)          /* (SPI_IMR) TXFPTEF Interrupt Mask Mask */
#define SPI_IMR_TXFPTEF(value)           (SPI_IMR_TXFPTEF_Msk & (_UINT32_(value) << SPI_IMR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the SPI_IMR register */
#define SPI_IMR_RXFPTEF_Pos              _UINT32_(31)                                         /* (SPI_IMR) RXFPTEF Interrupt Mask Position */
#define SPI_IMR_RXFPTEF_Msk              (_UINT32_(0x1) << SPI_IMR_RXFPTEF_Pos)          /* (SPI_IMR) RXFPTEF Interrupt Mask Mask */
#define SPI_IMR_RXFPTEF(value)           (SPI_IMR_RXFPTEF_Msk & (_UINT32_(value) << SPI_IMR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the SPI_IMR register */
#define SPI_IMR_Msk                      _UINT32_(0xFF005F0F)                                 /* (SPI_IMR) Register Mask  */


/* -------- SPI_CSR : (FLEXCOM Offset: 0x430) (R/W 32) SPI Chip Select Register x -------- */
#define SPI_CSR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPI_CSR) SPI Chip Select Register x  Reset Value */

#define SPI_CSR_CPOL_Pos                 _UINT32_(0)                                          /* (SPI_CSR) Clock Polarity Position */
#define SPI_CSR_CPOL_Msk                 (_UINT32_(0x1) << SPI_CSR_CPOL_Pos)             /* (SPI_CSR) Clock Polarity Mask */
#define SPI_CSR_CPOL(value)              (SPI_CSR_CPOL_Msk & (_UINT32_(value) << SPI_CSR_CPOL_Pos)) /* Assignment of value for CPOL in the SPI_CSR register */
#define   SPI_CSR_CPOL_0_Val             _UINT32_(0x0)                                        /* (SPI_CSR) The inactive state value of SPCK is logic level zero.  */
#define   SPI_CSR_CPOL_1_Val             _UINT32_(0x1)                                        /* (SPI_CSR) The inactive state value of SPCK is logic level one.  */
#define SPI_CSR_CPOL_0                   (SPI_CSR_CPOL_0_Val << SPI_CSR_CPOL_Pos)   /* (SPI_CSR) The inactive state value of SPCK is logic level zero. Position */
#define SPI_CSR_CPOL_1                   (SPI_CSR_CPOL_1_Val << SPI_CSR_CPOL_Pos)   /* (SPI_CSR) The inactive state value of SPCK is logic level one. Position */
#define SPI_CSR_NCPHA_Pos                _UINT32_(1)                                          /* (SPI_CSR) Clock Phase Position */
#define SPI_CSR_NCPHA_Msk                (_UINT32_(0x1) << SPI_CSR_NCPHA_Pos)            /* (SPI_CSR) Clock Phase Mask */
#define SPI_CSR_NCPHA(value)             (SPI_CSR_NCPHA_Msk & (_UINT32_(value) << SPI_CSR_NCPHA_Pos)) /* Assignment of value for NCPHA in the SPI_CSR register */
#define   SPI_CSR_NCPHA_0_Val            _UINT32_(0x0)                                        /* (SPI_CSR) Data are changed on the leading edge of SPCK and captured on the following edge of SPCK.  */
#define   SPI_CSR_NCPHA_1_Val            _UINT32_(0x1)                                        /* (SPI_CSR) Data are captured on the leading edge of SPCK and changed on the following edge of SPCK.  */
#define SPI_CSR_NCPHA_0                  (SPI_CSR_NCPHA_0_Val << SPI_CSR_NCPHA_Pos) /* (SPI_CSR) Data are changed on the leading edge of SPCK and captured on the following edge of SPCK. Position */
#define SPI_CSR_NCPHA_1                  (SPI_CSR_NCPHA_1_Val << SPI_CSR_NCPHA_Pos) /* (SPI_CSR) Data are captured on the leading edge of SPCK and changed on the following edge of SPCK. Position */
#define SPI_CSR_CSNAAT_Pos               _UINT32_(2)                                          /* (SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Position */
#define SPI_CSR_CSNAAT_Msk               (_UINT32_(0x1) << SPI_CSR_CSNAAT_Pos)           /* (SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Mask */
#define SPI_CSR_CSNAAT(value)            (SPI_CSR_CSNAAT_Msk & (_UINT32_(value) << SPI_CSR_CSNAAT_Pos)) /* Assignment of value for CSNAAT in the SPI_CSR register */
#define   SPI_CSR_CSNAAT_0_Val           _UINT32_(0x0)                                        /* (SPI_CSR) The Peripheral Chip Select does not rise between two transfers if the SPI_TDR is reloaded before the end of the first transfer and if the two transfers occur on the same Chip Select.  */
#define   SPI_CSR_CSNAAT_1_Val           _UINT32_(0x1)                                        /* (SPI_CSR) The Peripheral Chip Select rises systematically after each transfer performed on the same client. It remains inactive after the end of transfer for a minimal duration of:  */
#define SPI_CSR_CSNAAT_0                 (SPI_CSR_CSNAAT_0_Val << SPI_CSR_CSNAAT_Pos) /* (SPI_CSR) The Peripheral Chip Select does not rise between two transfers if the SPI_TDR is reloaded before the end of the first transfer and if the two transfers occur on the same Chip Select. Position */
#define SPI_CSR_CSNAAT_1                 (SPI_CSR_CSNAAT_1_Val << SPI_CSR_CSNAAT_Pos) /* (SPI_CSR) The Peripheral Chip Select rises systematically after each transfer performed on the same client. It remains inactive after the end of transfer for a minimal duration of: Position */
#define SPI_CSR_CSAAT_Pos                _UINT32_(3)                                          /* (SPI_CSR) Chip Select Active After Transfer Position */
#define SPI_CSR_CSAAT_Msk                (_UINT32_(0x1) << SPI_CSR_CSAAT_Pos)            /* (SPI_CSR) Chip Select Active After Transfer Mask */
#define SPI_CSR_CSAAT(value)             (SPI_CSR_CSAAT_Msk & (_UINT32_(value) << SPI_CSR_CSAAT_Pos)) /* Assignment of value for CSAAT in the SPI_CSR register */
#define   SPI_CSR_CSAAT_0_Val            _UINT32_(0x0)                                        /* (SPI_CSR) The Peripheral Chip Select Line rises as soon as the last transfer is achieved.  */
#define   SPI_CSR_CSAAT_1_Val            _UINT32_(0x1)                                        /* (SPI_CSR) The Peripheral Chip Select does not rise after the last transfer is achieved. It remains active until a new transfer is requested on a different chip select.  */
#define SPI_CSR_CSAAT_0                  (SPI_CSR_CSAAT_0_Val << SPI_CSR_CSAAT_Pos) /* (SPI_CSR) The Peripheral Chip Select Line rises as soon as the last transfer is achieved. Position */
#define SPI_CSR_CSAAT_1                  (SPI_CSR_CSAAT_1_Val << SPI_CSR_CSAAT_Pos) /* (SPI_CSR) The Peripheral Chip Select does not rise after the last transfer is achieved. It remains active until a new transfer is requested on a different chip select. Position */
#define SPI_CSR_BITS_Pos                 _UINT32_(4)                                          /* (SPI_CSR) Bits Per Transfer Position */
#define SPI_CSR_BITS_Msk                 (_UINT32_(0xF) << SPI_CSR_BITS_Pos)             /* (SPI_CSR) Bits Per Transfer Mask */
#define SPI_CSR_BITS(value)              (SPI_CSR_BITS_Msk & (_UINT32_(value) << SPI_CSR_BITS_Pos)) /* Assignment of value for BITS in the SPI_CSR register */
#define   SPI_CSR_BITS_8_BIT_Val         _UINT32_(0x0)                                        /* (SPI_CSR) 8 bits for transfer  */
#define   SPI_CSR_BITS_9_BIT_Val         _UINT32_(0x1)                                        /* (SPI_CSR) 9 bits for transfer  */
#define   SPI_CSR_BITS_10_BIT_Val        _UINT32_(0x2)                                        /* (SPI_CSR) 10 bits for transfer  */
#define   SPI_CSR_BITS_11_BIT_Val        _UINT32_(0x3)                                        /* (SPI_CSR) 11 bits for transfer  */
#define   SPI_CSR_BITS_12_BIT_Val        _UINT32_(0x4)                                        /* (SPI_CSR) 12 bits for transfer  */
#define   SPI_CSR_BITS_13_BIT_Val        _UINT32_(0x5)                                        /* (SPI_CSR) 13 bits for transfer  */
#define   SPI_CSR_BITS_14_BIT_Val        _UINT32_(0x6)                                        /* (SPI_CSR) 14 bits for transfer  */
#define   SPI_CSR_BITS_15_BIT_Val        _UINT32_(0x7)                                        /* (SPI_CSR) 15 bits for transfer  */
#define   SPI_CSR_BITS_16_BIT_Val        _UINT32_(0x8)                                        /* (SPI_CSR) 16 bits for transfer  */
#define SPI_CSR_BITS_8_BIT               (SPI_CSR_BITS_8_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 8 bits for transfer Position */
#define SPI_CSR_BITS_9_BIT               (SPI_CSR_BITS_9_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 9 bits for transfer Position */
#define SPI_CSR_BITS_10_BIT              (SPI_CSR_BITS_10_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 10 bits for transfer Position */
#define SPI_CSR_BITS_11_BIT              (SPI_CSR_BITS_11_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 11 bits for transfer Position */
#define SPI_CSR_BITS_12_BIT              (SPI_CSR_BITS_12_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 12 bits for transfer Position */
#define SPI_CSR_BITS_13_BIT              (SPI_CSR_BITS_13_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 13 bits for transfer Position */
#define SPI_CSR_BITS_14_BIT              (SPI_CSR_BITS_14_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 14 bits for transfer Position */
#define SPI_CSR_BITS_15_BIT              (SPI_CSR_BITS_15_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 15 bits for transfer Position */
#define SPI_CSR_BITS_16_BIT              (SPI_CSR_BITS_16_BIT_Val << SPI_CSR_BITS_Pos) /* (SPI_CSR) 16 bits for transfer Position */
#define SPI_CSR_SCBR_Pos                 _UINT32_(8)                                          /* (SPI_CSR) Serial Clock Bit Rate Position */
#define SPI_CSR_SCBR_Msk                 (_UINT32_(0xFF) << SPI_CSR_SCBR_Pos)            /* (SPI_CSR) Serial Clock Bit Rate Mask */
#define SPI_CSR_SCBR(value)              (SPI_CSR_SCBR_Msk & (_UINT32_(value) << SPI_CSR_SCBR_Pos)) /* Assignment of value for SCBR in the SPI_CSR register */
#define SPI_CSR_DLYBS_Pos                _UINT32_(16)                                         /* (SPI_CSR) Delay Before SPCK Position */
#define SPI_CSR_DLYBS_Msk                (_UINT32_(0xFF) << SPI_CSR_DLYBS_Pos)           /* (SPI_CSR) Delay Before SPCK Mask */
#define SPI_CSR_DLYBS(value)             (SPI_CSR_DLYBS_Msk & (_UINT32_(value) << SPI_CSR_DLYBS_Pos)) /* Assignment of value for DLYBS in the SPI_CSR register */
#define SPI_CSR_DLYBCT_Pos               _UINT32_(24)                                         /* (SPI_CSR) Delay Between Consecutive Transfers Position */
#define SPI_CSR_DLYBCT_Msk               (_UINT32_(0xFF) << SPI_CSR_DLYBCT_Pos)          /* (SPI_CSR) Delay Between Consecutive Transfers Mask */
#define SPI_CSR_DLYBCT(value)            (SPI_CSR_DLYBCT_Msk & (_UINT32_(value) << SPI_CSR_DLYBCT_Pos)) /* Assignment of value for DLYBCT in the SPI_CSR register */
#define SPI_CSR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SPI_CSR) Register Mask  */


/* -------- SPI_FMR : (FLEXCOM Offset: 0x440) (R/W 32) SPI FIFO Mode Register -------- */
#define SPI_FMR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPI_FMR) SPI FIFO Mode Register  Reset Value */

#define SPI_FMR_TXRDYM_Pos               _UINT32_(0)                                          /* (SPI_FMR) Transmit Data Register Empty Mode Position */
#define SPI_FMR_TXRDYM_Msk               (_UINT32_(0x3) << SPI_FMR_TXRDYM_Pos)           /* (SPI_FMR) Transmit Data Register Empty Mode Mask */
#define SPI_FMR_TXRDYM(value)            (SPI_FMR_TXRDYM_Msk & (_UINT32_(value) << SPI_FMR_TXRDYM_Pos)) /* Assignment of value for TXRDYM in the SPI_FMR register */
#define   SPI_FMR_TXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (SPI_FMR) TDRE will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 data (byte or halfword) must be configured in the DMA depending on SPI_CSR0.BITS. If the transfer is performed by software, the access type (byte, halfword) must be defined depending on SPI_CSR0.BITS.  */
#define   SPI_FMR_TXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (SPI_FMR) TDRE will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 2 data) must be configured in the DMA.  If the transfer is performed by software, the access type must be defined as word (2 data per access, 1 access).  */
#define   SPI_FMR_TXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (SPI_FMR) TDRE will be at level '1' when at least four unread data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 2 accesses).  */
#define   SPI_FMR_TXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (SPI_FMR) TDRE will be at level '1' when at least eight data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 4 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 4 accesses).  */
#define SPI_FMR_TXRDYM_ONE_DATA          (SPI_FMR_TXRDYM_ONE_DATA_Val << SPI_FMR_TXRDYM_Pos) /* (SPI_FMR) TDRE will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 data (byte or halfword) must be configured in the DMA depending on SPI_CSR0.BITS. If the transfer is performed by software, the access type (byte, halfword) must be defined depending on SPI_CSR0.BITS. Position */
#define SPI_FMR_TXRDYM_TWO_DATA          (SPI_FMR_TXRDYM_TWO_DATA_Val << SPI_FMR_TXRDYM_Pos) /* (SPI_FMR) TDRE will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 2 data) must be configured in the DMA.  If the transfer is performed by software, the access type must be defined as word (2 data per access, 1 access). Position */
#define SPI_FMR_TXRDYM_FOUR_DATA         (SPI_FMR_TXRDYM_FOUR_DATA_Val << SPI_FMR_TXRDYM_Pos) /* (SPI_FMR) TDRE will be at level '1' when at least four unread data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 2 accesses). Position */
#define SPI_FMR_TXRDYM_EIGHT_DATA        (SPI_FMR_TXRDYM_EIGHT_DATA_Val << SPI_FMR_TXRDYM_Pos) /* (SPI_FMR) TDRE will be at level '1' when at least eight data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 4 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 4 accesses). Position */
#define SPI_FMR_RXRDYM_Pos               _UINT32_(4)                                          /* (SPI_FMR) Receive Data Register Full Mode Position */
#define SPI_FMR_RXRDYM_Msk               (_UINT32_(0x3) << SPI_FMR_RXRDYM_Pos)           /* (SPI_FMR) Receive Data Register Full Mode Mask */
#define SPI_FMR_RXRDYM(value)            (SPI_FMR_RXRDYM_Msk & (_UINT32_(value) << SPI_FMR_RXRDYM_Pos)) /* Assignment of value for RXRDYM in the SPI_FMR register */
#define   SPI_FMR_RXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (SPI_FMR) RDRF will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 byte must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 halfword must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte or halfword depending on SPI_CSR0.BITS.  */
#define   SPI_FMR_RXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (SPI_FMR) RDRF will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 word (1 word carries 2 halfwords) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as halfword (2 bytes per access, 1 access when SPI_CSR0.BITS=0), or word (2 halfwords per access, 2 accesses when SPI_CSR0.BITS>0).  */
#define   SPI_FMR_RXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (SPI_FMR) RDRF will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 word (1 halfword carries 4 bytes) must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 1 access when SPI_CSR0.BITS=0 or 2 halfwords per access, 2 accesses when SPI_CSR0.BITS>0).  */
#define   SPI_FMR_RXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (SPI_FMR) RDRF will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 2 words (1 halfword carries 4 bytes) must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 4 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 2 accesses when SPI_CSR0.BITS=0 or 2 halfwords per access, 4 accesses when SPI_CSR0.BITS>0).  */
#define SPI_FMR_RXRDYM_ONE_DATA          (SPI_FMR_RXRDYM_ONE_DATA_Val << SPI_FMR_RXRDYM_Pos) /* (SPI_FMR) RDRF will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 byte must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 halfword must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte or halfword depending on SPI_CSR0.BITS. Position */
#define SPI_FMR_RXRDYM_TWO_DATA          (SPI_FMR_RXRDYM_TWO_DATA_Val << SPI_FMR_RXRDYM_Pos) /* (SPI_FMR) RDRF will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 word (1 word carries 2 halfwords) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as halfword (2 bytes per access, 1 access when SPI_CSR0.BITS=0), or word (2 halfwords per access, 2 accesses when SPI_CSR0.BITS>0). Position */
#define SPI_FMR_RXRDYM_FOUR_DATA         (SPI_FMR_RXRDYM_FOUR_DATA_Val << SPI_FMR_RXRDYM_Pos) /* (SPI_FMR) RDRF will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 word (1 halfword carries 4 bytes) must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 1 access when SPI_CSR0.BITS=0 or 2 halfwords per access, 2 accesses when SPI_CSR0.BITS>0). Position */
#define SPI_FMR_RXRDYM_EIGHT_DATA        (SPI_FMR_RXRDYM_EIGHT_DATA_Val << SPI_FMR_RXRDYM_Pos) /* (SPI_FMR) RDRF will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 2 words (1 halfword carries 4 bytes) must be configured in the DMA. When SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 4 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 2 accesses when SPI_CSR0.BITS=0 or 2 halfwords per access, 4 accesses when SPI_CSR0.BITS>0). Position */
#define SPI_FMR_TXFTHRES_Pos             _UINT32_(16)                                         /* (SPI_FMR) Transmit FIFO Threshold Position */
#define SPI_FMR_TXFTHRES_Msk             (_UINT32_(0x3F) << SPI_FMR_TXFTHRES_Pos)        /* (SPI_FMR) Transmit FIFO Threshold Mask */
#define SPI_FMR_TXFTHRES(value)          (SPI_FMR_TXFTHRES_Msk & (_UINT32_(value) << SPI_FMR_TXFTHRES_Pos)) /* Assignment of value for TXFTHRES in the SPI_FMR register */
#define SPI_FMR_RXFTHRES_Pos             _UINT32_(24)                                         /* (SPI_FMR) Receive FIFO Threshold Position */
#define SPI_FMR_RXFTHRES_Msk             (_UINT32_(0x3F) << SPI_FMR_RXFTHRES_Pos)        /* (SPI_FMR) Receive FIFO Threshold Mask */
#define SPI_FMR_RXFTHRES(value)          (SPI_FMR_RXFTHRES_Msk & (_UINT32_(value) << SPI_FMR_RXFTHRES_Pos)) /* Assignment of value for RXFTHRES in the SPI_FMR register */
#define SPI_FMR_Msk                      _UINT32_(0x3F3F0033)                                 /* (SPI_FMR) Register Mask  */


/* -------- SPI_FLR : (FLEXCOM Offset: 0x444) ( R/ 32) SPI FIFO Level Register -------- */
#define SPI_FLR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPI_FLR) SPI FIFO Level Register  Reset Value */

#define SPI_FLR_TXFL_Pos                 _UINT32_(0)                                          /* (SPI_FLR) Transmit FIFO Level Position */
#define SPI_FLR_TXFL_Msk                 (_UINT32_(0x3F) << SPI_FLR_TXFL_Pos)            /* (SPI_FLR) Transmit FIFO Level Mask */
#define SPI_FLR_TXFL(value)              (SPI_FLR_TXFL_Msk & (_UINT32_(value) << SPI_FLR_TXFL_Pos)) /* Assignment of value for TXFL in the SPI_FLR register */
#define   SPI_FLR_TXFL_0_Val             _UINT32_(0x0)                                        /* (SPI_FLR) There is no data in the Transmit FIFO  */
#define SPI_FLR_TXFL_0                   (SPI_FLR_TXFL_0_Val << SPI_FLR_TXFL_Pos)   /* (SPI_FLR) There is no data in the Transmit FIFO Position */
#define SPI_FLR_RXFL_Pos                 _UINT32_(16)                                         /* (SPI_FLR) Receive FIFO Level Position */
#define SPI_FLR_RXFL_Msk                 (_UINT32_(0x3F) << SPI_FLR_RXFL_Pos)            /* (SPI_FLR) Receive FIFO Level Mask */
#define SPI_FLR_RXFL(value)              (SPI_FLR_RXFL_Msk & (_UINT32_(value) << SPI_FLR_RXFL_Pos)) /* Assignment of value for RXFL in the SPI_FLR register */
#define   SPI_FLR_RXFL_0_Val             _UINT32_(0x0)                                        /* (SPI_FLR) There is no unread data in the Receive FIFO  */
#define SPI_FLR_RXFL_0                   (SPI_FLR_RXFL_0_Val << SPI_FLR_RXFL_Pos)   /* (SPI_FLR) There is no unread data in the Receive FIFO Position */
#define SPI_FLR_Msk                      _UINT32_(0x003F003F)                                 /* (SPI_FLR) Register Mask  */


/* -------- SPI_CMPR : (FLEXCOM Offset: 0x448) (R/W 32) SPI Comparison Register -------- */
#define SPI_CMPR_RESETVALUE              _UINT32_(0x00)                                       /*  (SPI_CMPR) SPI Comparison Register  Reset Value */

#define SPI_CMPR_VAL1_Pos                _UINT32_(0)                                          /* (SPI_CMPR) First Comparison Value for Received Character Position */
#define SPI_CMPR_VAL1_Msk                (_UINT32_(0xFFFF) << SPI_CMPR_VAL1_Pos)         /* (SPI_CMPR) First Comparison Value for Received Character Mask */
#define SPI_CMPR_VAL1(value)             (SPI_CMPR_VAL1_Msk & (_UINT32_(value) << SPI_CMPR_VAL1_Pos)) /* Assignment of value for VAL1 in the SPI_CMPR register */
#define SPI_CMPR_VAL2_Pos                _UINT32_(16)                                         /* (SPI_CMPR) Second Comparison Value for Received Character Position */
#define SPI_CMPR_VAL2_Msk                (_UINT32_(0xFFFF) << SPI_CMPR_VAL2_Pos)         /* (SPI_CMPR) Second Comparison Value for Received Character Mask */
#define SPI_CMPR_VAL2(value)             (SPI_CMPR_VAL2_Msk & (_UINT32_(value) << SPI_CMPR_VAL2_Pos)) /* Assignment of value for VAL2 in the SPI_CMPR register */
#define SPI_CMPR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SPI_CMPR) Register Mask  */


/* -------- SPI_WPMR : (FLEXCOM Offset: 0x4E4) (R/W 32) SPI Write Protection Mode Register -------- */
#define SPI_WPMR_RESETVALUE              _UINT32_(0x00)                                       /*  (SPI_WPMR) SPI Write Protection Mode Register  Reset Value */

#define SPI_WPMR_WPEN_Pos                _UINT32_(0)                                          /* (SPI_WPMR) Write Protection Enable Position */
#define SPI_WPMR_WPEN_Msk                (_UINT32_(0x1) << SPI_WPMR_WPEN_Pos)            /* (SPI_WPMR) Write Protection Enable Mask */
#define SPI_WPMR_WPEN(value)             (SPI_WPMR_WPEN_Msk & (_UINT32_(value) << SPI_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the SPI_WPMR register */
#define   SPI_WPMR_WPEN_0_Val            _UINT32_(0x0)                                        /* (SPI_WPMR) Disables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII)  */
#define   SPI_WPMR_WPEN_1_Val            _UINT32_(0x1)                                        /* (SPI_WPMR) Enables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII)  */
#define SPI_WPMR_WPEN_0                  (SPI_WPMR_WPEN_0_Val << SPI_WPMR_WPEN_Pos) /* (SPI_WPMR) Disables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII) Position */
#define SPI_WPMR_WPEN_1                  (SPI_WPMR_WPEN_1_Val << SPI_WPMR_WPEN_Pos) /* (SPI_WPMR) Enables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII) Position */
#define SPI_WPMR_WPITEN_Pos              _UINT32_(1)                                          /* (SPI_WPMR) Write Protection Interrupt Enable Position */
#define SPI_WPMR_WPITEN_Msk              (_UINT32_(0x1) << SPI_WPMR_WPITEN_Pos)          /* (SPI_WPMR) Write Protection Interrupt Enable Mask */
#define SPI_WPMR_WPITEN(value)           (SPI_WPMR_WPITEN_Msk & (_UINT32_(value) << SPI_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the SPI_WPMR register */
#define   SPI_WPMR_WPITEN_0_Val          _UINT32_(0x0)                                        /* (SPI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define   SPI_WPMR_WPITEN_1_Val          _UINT32_(0x1)                                        /* (SPI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define SPI_WPMR_WPITEN_0                (SPI_WPMR_WPITEN_0_Val << SPI_WPMR_WPITEN_Pos) /* (SPI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define SPI_WPMR_WPITEN_1                (SPI_WPMR_WPITEN_1_Val << SPI_WPMR_WPITEN_Pos) /* (SPI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define SPI_WPMR_WPCREN_Pos              _UINT32_(2)                                          /* (SPI_WPMR) Write Protection Control Enable Position */
#define SPI_WPMR_WPCREN_Msk              (_UINT32_(0x1) << SPI_WPMR_WPCREN_Pos)          /* (SPI_WPMR) Write Protection Control Enable Mask */
#define SPI_WPMR_WPCREN(value)           (SPI_WPMR_WPCREN_Msk & (_UINT32_(value) << SPI_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the SPI_WPMR register */
#define   SPI_WPMR_WPCREN_0_Val          _UINT32_(0x0)                                        /* (SPI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define   SPI_WPMR_WPCREN_1_Val          _UINT32_(0x1)                                        /* (SPI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define SPI_WPMR_WPCREN_0                (SPI_WPMR_WPCREN_0_Val << SPI_WPMR_WPCREN_Pos) /* (SPI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define SPI_WPMR_WPCREN_1                (SPI_WPMR_WPCREN_1_Val << SPI_WPMR_WPCREN_Pos) /* (SPI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define SPI_WPMR_WPKEY_Pos               _UINT32_(8)                                          /* (SPI_WPMR) Write Protection Key Position */
#define SPI_WPMR_WPKEY_Msk               (_UINT32_(0xFFFFFF) << SPI_WPMR_WPKEY_Pos)      /* (SPI_WPMR) Write Protection Key Mask */
#define SPI_WPMR_WPKEY(value)            (SPI_WPMR_WPKEY_Msk & (_UINT32_(value) << SPI_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the SPI_WPMR register */
#define   SPI_WPMR_WPKEY_PASSWD_Val      _UINT32_(0x535049)                                   /* (SPI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0  */
#define SPI_WPMR_WPKEY_PASSWD            (SPI_WPMR_WPKEY_PASSWD_Val << SPI_WPMR_WPKEY_Pos) /* (SPI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0 Position */
#define SPI_WPMR_Msk                     _UINT32_(0xFFFFFF07)                                 /* (SPI_WPMR) Register Mask  */


/* -------- SPI_WPSR : (FLEXCOM Offset: 0x4E8) ( R/ 32) SPI Write Protection Status Register -------- */
#define SPI_WPSR_RESETVALUE              _UINT32_(0x00)                                       /*  (SPI_WPSR) SPI Write Protection Status Register  Reset Value */

#define SPI_WPSR_WPVS_Pos                _UINT32_(0)                                          /* (SPI_WPSR) Write Protection Violation Status Position */
#define SPI_WPSR_WPVS_Msk                (_UINT32_(0x1) << SPI_WPSR_WPVS_Pos)            /* (SPI_WPSR) Write Protection Violation Status Mask */
#define SPI_WPSR_WPVS(value)             (SPI_WPSR_WPVS_Msk & (_UINT32_(value) << SPI_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the SPI_WPSR register */
#define   SPI_WPSR_WPVS_0_Val            _UINT32_(0x0)                                        /* (SPI_WPSR) No write protect violation has occurred since the last read of SPI_WPSR.  */
#define   SPI_WPSR_WPVS_1_Val            _UINT32_(0x1)                                        /* (SPI_WPSR) A write protect violation has occurred since the last read of SPI_WPSR. If this violation is an unauthorized  */
#define SPI_WPSR_WPVS_0                  (SPI_WPSR_WPVS_0_Val << SPI_WPSR_WPVS_Pos) /* (SPI_WPSR) No write protect violation has occurred since the last read of SPI_WPSR. Position */
#define SPI_WPSR_WPVS_1                  (SPI_WPSR_WPVS_1_Val << SPI_WPSR_WPVS_Pos) /* (SPI_WPSR) A write protect violation has occurred since the last read of SPI_WPSR. If this violation is an unauthorized Position */
#define SPI_WPSR_PADERR_Pos              _UINT32_(1)                                          /* (SPI_WPSR) Output PAD Error (cleared on read) Position */
#define SPI_WPSR_PADERR_Msk              (_UINT32_(0x1) << SPI_WPSR_PADERR_Pos)          /* (SPI_WPSR) Output PAD Error (cleared on read) Mask */
#define SPI_WPSR_PADERR(value)           (SPI_WPSR_PADERR_Msk & (_UINT32_(value) << SPI_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the SPI_WPSR register */
#define   SPI_WPSR_PADERR_0_Val          _UINT32_(0x0)                                        /* (SPI_WPSR) No error detected during a character transfer.  */
#define   SPI_WPSR_PADERR_1_Val          _UINT32_(0x1)                                        /* (SPI_WPSR) Two successive bit period with a difference between the data read at the output of the MOSI or NPCS0 pad buffers and the corresponding inputs driven by SPI or abnormal number of SPCK edges (or no clock edge) at the output of SPCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc.  */
#define SPI_WPSR_PADERR_0                (SPI_WPSR_PADERR_0_Val << SPI_WPSR_PADERR_Pos) /* (SPI_WPSR) No error detected during a character transfer. Position */
#define SPI_WPSR_PADERR_1                (SPI_WPSR_PADERR_1_Val << SPI_WPSR_PADERR_Pos) /* (SPI_WPSR) Two successive bit period with a difference between the data read at the output of the MOSI or NPCS0 pad buffers and the corresponding inputs driven by SPI or abnormal number of SPCK edges (or no clock edge) at the output of SPCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc. Position */
#define SPI_WPSR_WPVSRC_Pos              _UINT32_(8)                                          /* (SPI_WPSR) Write Protection Violation Source Position */
#define SPI_WPSR_WPVSRC_Msk              (_UINT32_(0xFF) << SPI_WPSR_WPVSRC_Pos)         /* (SPI_WPSR) Write Protection Violation Source Mask */
#define SPI_WPSR_WPVSRC(value)           (SPI_WPSR_WPVSRC_Msk & (_UINT32_(value) << SPI_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the SPI_WPSR register */
#define SPI_WPSR_Msk                     _UINT32_(0x0000FF03)                                 /* (SPI_WPSR) Register Mask  */


/* -------- TWI_CR : (FLEXCOM Offset: 0x600) ( /W 32) TWI Control Register -------- */
#define TWI_CR_START_Pos                 _UINT32_(0)                                          /* (TWI_CR) Send a START Condition Position */
#define TWI_CR_START_Msk                 (_UINT32_(0x1) << TWI_CR_START_Pos)             /* (TWI_CR) Send a START Condition Mask */
#define TWI_CR_START(value)              (TWI_CR_START_Msk & (_UINT32_(value) << TWI_CR_START_Pos)) /* Assignment of value for START in the TWI_CR register */
#define   TWI_CR_START_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_START_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (TWI_MMR).  */
#define TWI_CR_START_0                   (TWI_CR_START_0_Val << TWI_CR_START_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_START_1                   (TWI_CR_START_1_Val << TWI_CR_START_Pos)   /* (TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (TWI_MMR). Position */
#define TWI_CR_STOP_Pos                  _UINT32_(1)                                          /* (TWI_CR) Send a STOP Condition Position */
#define TWI_CR_STOP_Msk                  (_UINT32_(0x1) << TWI_CR_STOP_Pos)              /* (TWI_CR) Send a STOP Condition Mask */
#define TWI_CR_STOP(value)               (TWI_CR_STOP_Msk & (_UINT32_(value) << TWI_CR_STOP_Pos)) /* Assignment of value for STOP in the TWI_CR register */
#define   TWI_CR_STOP_0_Val              _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_STOP_1_Val              _UINT32_(0x1)                                        /* (TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode.  */
#define TWI_CR_STOP_0                    (TWI_CR_STOP_0_Val << TWI_CR_STOP_Pos)     /* (TWI_CR) No effect. Position */
#define TWI_CR_STOP_1                    (TWI_CR_STOP_1_Val << TWI_CR_STOP_Pos)     /* (TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode. Position */
#define TWI_CR_MSEN_Pos                  _UINT32_(2)                                          /* (TWI_CR) TWI Host Mode Enabled Position */
#define TWI_CR_MSEN_Msk                  (_UINT32_(0x1) << TWI_CR_MSEN_Pos)              /* (TWI_CR) TWI Host Mode Enabled Mask */
#define TWI_CR_MSEN(value)               (TWI_CR_MSEN_Msk & (_UINT32_(value) << TWI_CR_MSEN_Pos)) /* Assignment of value for MSEN in the TWI_CR register */
#define   TWI_CR_MSEN_0_Val              _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_MSEN_1_Val              _UINT32_(0x1)                                        /* (TWI_CR) Enables Host mode (MSDIS must be written to 0).  */
#define TWI_CR_MSEN_0                    (TWI_CR_MSEN_0_Val << TWI_CR_MSEN_Pos)     /* (TWI_CR) No effect. Position */
#define TWI_CR_MSEN_1                    (TWI_CR_MSEN_1_Val << TWI_CR_MSEN_Pos)     /* (TWI_CR) Enables Host mode (MSDIS must be written to 0). Position */
#define TWI_CR_MSDIS_Pos                 _UINT32_(3)                                          /* (TWI_CR) TWI Host Mode Disabled Position */
#define TWI_CR_MSDIS_Msk                 (_UINT32_(0x1) << TWI_CR_MSDIS_Pos)             /* (TWI_CR) TWI Host Mode Disabled Mask */
#define TWI_CR_MSDIS(value)              (TWI_CR_MSDIS_Msk & (_UINT32_(value) << TWI_CR_MSDIS_Pos)) /* Assignment of value for MSDIS in the TWI_CR register */
#define   TWI_CR_MSDIS_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_MSDIS_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling.  */
#define TWI_CR_MSDIS_0                   (TWI_CR_MSDIS_0_Val << TWI_CR_MSDIS_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_MSDIS_1                   (TWI_CR_MSDIS_1_Val << TWI_CR_MSDIS_Pos)   /* (TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling. Position */
#define TWI_CR_SVEN_Pos                  _UINT32_(4)                                          /* (TWI_CR) TWI Client Mode Enabled Position */
#define TWI_CR_SVEN_Msk                  (_UINT32_(0x1) << TWI_CR_SVEN_Pos)              /* (TWI_CR) TWI Client Mode Enabled Mask */
#define TWI_CR_SVEN(value)               (TWI_CR_SVEN_Msk & (_UINT32_(value) << TWI_CR_SVEN_Pos)) /* Assignment of value for SVEN in the TWI_CR register */
#define   TWI_CR_SVEN_0_Val              _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SVEN_1_Val              _UINT32_(0x1)                                        /* (TWI_CR) Enables Client mode (SVDIS must be written to 0).  */
#define TWI_CR_SVEN_0                    (TWI_CR_SVEN_0_Val << TWI_CR_SVEN_Pos)     /* (TWI_CR) No effect. Position */
#define TWI_CR_SVEN_1                    (TWI_CR_SVEN_1_Val << TWI_CR_SVEN_Pos)     /* (TWI_CR) Enables Client mode (SVDIS must be written to 0). Position */
#define TWI_CR_SVDIS_Pos                 _UINT32_(5)                                          /* (TWI_CR) TWI Client Mode Disabled Position */
#define TWI_CR_SVDIS_Msk                 (_UINT32_(0x1) << TWI_CR_SVDIS_Pos)             /* (TWI_CR) TWI Client Mode Disabled Mask */
#define TWI_CR_SVDIS(value)              (TWI_CR_SVDIS_Msk & (_UINT32_(value) << TWI_CR_SVDIS_Pos)) /* Assignment of value for SVDIS in the TWI_CR register */
#define   TWI_CR_SVDIS_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SVDIS_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling.  */
#define TWI_CR_SVDIS_0                   (TWI_CR_SVDIS_0_Val << TWI_CR_SVDIS_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_SVDIS_1                   (TWI_CR_SVDIS_1_Val << TWI_CR_SVDIS_Pos)   /* (TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling. Position */
#define TWI_CR_QUICK_Pos                 _UINT32_(6)                                          /* (TWI_CR) SMBus Quick Command Position */
#define TWI_CR_QUICK_Msk                 (_UINT32_(0x1) << TWI_CR_QUICK_Pos)             /* (TWI_CR) SMBus Quick Command Mask */
#define TWI_CR_QUICK(value)              (TWI_CR_QUICK_Msk & (_UINT32_(value) << TWI_CR_QUICK_Pos)) /* Assignment of value for QUICK in the TWI_CR register */
#define   TWI_CR_QUICK_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_QUICK_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent.  */
#define TWI_CR_QUICK_0                   (TWI_CR_QUICK_0_Val << TWI_CR_QUICK_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_QUICK_1                   (TWI_CR_QUICK_1_Val << TWI_CR_QUICK_Pos)   /* (TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent. Position */
#define TWI_CR_SWRST_Pos                 _UINT32_(7)                                          /* (TWI_CR) Software Reset Position */
#define TWI_CR_SWRST_Msk                 (_UINT32_(0x1) << TWI_CR_SWRST_Pos)             /* (TWI_CR) Software Reset Mask */
#define TWI_CR_SWRST(value)              (TWI_CR_SWRST_Msk & (_UINT32_(value) << TWI_CR_SWRST_Pos)) /* Assignment of value for SWRST in the TWI_CR register */
#define   TWI_CR_SWRST_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SWRST_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) Equivalent to a system reset.  */
#define TWI_CR_SWRST_0                   (TWI_CR_SWRST_0_Val << TWI_CR_SWRST_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_SWRST_1                   (TWI_CR_SWRST_1_Val << TWI_CR_SWRST_Pos)   /* (TWI_CR) Equivalent to a system reset. Position */
#define TWI_CR_HSEN_Pos                  _UINT32_(8)                                          /* (TWI_CR) TWI High-Speed Mode Enabled Position */
#define TWI_CR_HSEN_Msk                  (_UINT32_(0x1) << TWI_CR_HSEN_Pos)              /* (TWI_CR) TWI High-Speed Mode Enabled Mask */
#define TWI_CR_HSEN(value)               (TWI_CR_HSEN_Msk & (_UINT32_(value) << TWI_CR_HSEN_Pos)) /* Assignment of value for HSEN in the TWI_CR register */
#define   TWI_CR_HSEN_0_Val              _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_HSEN_1_Val              _UINT32_(0x1)                                        /* (TWI_CR) High-speed mode enabled.  */
#define TWI_CR_HSEN_0                    (TWI_CR_HSEN_0_Val << TWI_CR_HSEN_Pos)     /* (TWI_CR) No effect. Position */
#define TWI_CR_HSEN_1                    (TWI_CR_HSEN_1_Val << TWI_CR_HSEN_Pos)     /* (TWI_CR) High-speed mode enabled. Position */
#define TWI_CR_HSDIS_Pos                 _UINT32_(9)                                          /* (TWI_CR) TWI High-Speed Mode Disabled Position */
#define TWI_CR_HSDIS_Msk                 (_UINT32_(0x1) << TWI_CR_HSDIS_Pos)             /* (TWI_CR) TWI High-Speed Mode Disabled Mask */
#define TWI_CR_HSDIS(value)              (TWI_CR_HSDIS_Msk & (_UINT32_(value) << TWI_CR_HSDIS_Pos)) /* Assignment of value for HSDIS in the TWI_CR register */
#define   TWI_CR_HSDIS_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_HSDIS_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) High-speed mode disabled.  */
#define TWI_CR_HSDIS_0                   (TWI_CR_HSDIS_0_Val << TWI_CR_HSDIS_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_HSDIS_1                   (TWI_CR_HSDIS_1_Val << TWI_CR_HSDIS_Pos)   /* (TWI_CR) High-speed mode disabled. Position */
#define TWI_CR_SMBEN_Pos                 _UINT32_(10)                                         /* (TWI_CR) SMBus Mode Enabled Position */
#define TWI_CR_SMBEN_Msk                 (_UINT32_(0x1) << TWI_CR_SMBEN_Pos)             /* (TWI_CR) SMBus Mode Enabled Mask */
#define TWI_CR_SMBEN(value)              (TWI_CR_SMBEN_Msk & (_UINT32_(value) << TWI_CR_SMBEN_Pos)) /* Assignment of value for SMBEN in the TWI_CR register */
#define   TWI_CR_SMBEN_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SMBEN_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) If SMBDIS = 0, SMBus mode enabled.  */
#define TWI_CR_SMBEN_0                   (TWI_CR_SMBEN_0_Val << TWI_CR_SMBEN_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_SMBEN_1                   (TWI_CR_SMBEN_1_Val << TWI_CR_SMBEN_Pos)   /* (TWI_CR) If SMBDIS = 0, SMBus mode enabled. Position */
#define TWI_CR_SMBDIS_Pos                _UINT32_(11)                                         /* (TWI_CR) SMBus Mode Disabled Position */
#define TWI_CR_SMBDIS_Msk                (_UINT32_(0x1) << TWI_CR_SMBDIS_Pos)            /* (TWI_CR) SMBus Mode Disabled Mask */
#define TWI_CR_SMBDIS(value)             (TWI_CR_SMBDIS_Msk & (_UINT32_(value) << TWI_CR_SMBDIS_Pos)) /* Assignment of value for SMBDIS in the TWI_CR register */
#define   TWI_CR_SMBDIS_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SMBDIS_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) SMBus mode disabled.  */
#define TWI_CR_SMBDIS_0                  (TWI_CR_SMBDIS_0_Val << TWI_CR_SMBDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_SMBDIS_1                  (TWI_CR_SMBDIS_1_Val << TWI_CR_SMBDIS_Pos) /* (TWI_CR) SMBus mode disabled. Position */
#define TWI_CR_PECEN_Pos                 _UINT32_(12)                                         /* (TWI_CR) Packet Error Checking Enable Position */
#define TWI_CR_PECEN_Msk                 (_UINT32_(0x1) << TWI_CR_PECEN_Pos)             /* (TWI_CR) Packet Error Checking Enable Mask */
#define TWI_CR_PECEN(value)              (TWI_CR_PECEN_Msk & (_UINT32_(value) << TWI_CR_PECEN_Pos)) /* Assignment of value for PECEN in the TWI_CR register */
#define   TWI_CR_PECEN_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_PECEN_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) SMBus PEC (CRC) generation and check enabled.  */
#define TWI_CR_PECEN_0                   (TWI_CR_PECEN_0_Val << TWI_CR_PECEN_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_PECEN_1                   (TWI_CR_PECEN_1_Val << TWI_CR_PECEN_Pos)   /* (TWI_CR) SMBus PEC (CRC) generation and check enabled. Position */
#define TWI_CR_PECDIS_Pos                _UINT32_(13)                                         /* (TWI_CR) Packet Error Checking Disable Position */
#define TWI_CR_PECDIS_Msk                (_UINT32_(0x1) << TWI_CR_PECDIS_Pos)            /* (TWI_CR) Packet Error Checking Disable Mask */
#define TWI_CR_PECDIS(value)             (TWI_CR_PECDIS_Msk & (_UINT32_(value) << TWI_CR_PECDIS_Pos)) /* Assignment of value for PECDIS in the TWI_CR register */
#define   TWI_CR_PECDIS_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_PECDIS_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) SMBus PEC (CRC) generation and check disabled.  */
#define TWI_CR_PECDIS_0                  (TWI_CR_PECDIS_0_Val << TWI_CR_PECDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_PECDIS_1                  (TWI_CR_PECDIS_1_Val << TWI_CR_PECDIS_Pos) /* (TWI_CR) SMBus PEC (CRC) generation and check disabled. Position */
#define TWI_CR_PECRQ_Pos                 _UINT32_(14)                                         /* (TWI_CR) PEC Request Position */
#define TWI_CR_PECRQ_Msk                 (_UINT32_(0x1) << TWI_CR_PECRQ_Pos)             /* (TWI_CR) PEC Request Mask */
#define TWI_CR_PECRQ(value)              (TWI_CR_PECRQ_Msk & (_UINT32_(value) << TWI_CR_PECRQ_Pos)) /* Assignment of value for PECRQ in the TWI_CR register */
#define   TWI_CR_PECRQ_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_PECRQ_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) A PEC check or transmission is requested.  */
#define TWI_CR_PECRQ_0                   (TWI_CR_PECRQ_0_Val << TWI_CR_PECRQ_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_PECRQ_1                   (TWI_CR_PECRQ_1_Val << TWI_CR_PECRQ_Pos)   /* (TWI_CR) A PEC check or transmission is requested. Position */
#define TWI_CR_CLEAR_Pos                 _UINT32_(15)                                         /* (TWI_CR) Bus CLEAR Command Position */
#define TWI_CR_CLEAR_Msk                 (_UINT32_(0x1) << TWI_CR_CLEAR_Pos)             /* (TWI_CR) Bus CLEAR Command Mask */
#define TWI_CR_CLEAR(value)              (TWI_CR_CLEAR_Msk & (_UINT32_(value) << TWI_CR_CLEAR_Pos)) /* Assignment of value for CLEAR in the TWI_CR register */
#define   TWI_CR_CLEAR_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_CLEAR_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) When Host mode is enabled and TWD (SDA)=1, send a Bus Clear Command.  */
#define TWI_CR_CLEAR_0                   (TWI_CR_CLEAR_0_Val << TWI_CR_CLEAR_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_CLEAR_1                   (TWI_CR_CLEAR_1_Val << TWI_CR_CLEAR_Pos)   /* (TWI_CR) When Host mode is enabled and TWD (SDA)=1, send a Bus Clear Command. Position */
#define TWI_CR_ACMEN_Pos                 _UINT32_(16)                                         /* (TWI_CR) Alternative Command Mode Enable Position */
#define TWI_CR_ACMEN_Msk                 (_UINT32_(0x1) << TWI_CR_ACMEN_Pos)             /* (TWI_CR) Alternative Command Mode Enable Mask */
#define TWI_CR_ACMEN(value)              (TWI_CR_ACMEN_Msk & (_UINT32_(value) << TWI_CR_ACMEN_Pos)) /* Assignment of value for ACMEN in the TWI_CR register */
#define   TWI_CR_ACMEN_0_Val             _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_ACMEN_1_Val             _UINT32_(0x1)                                        /* (TWI_CR) Alternative Command mode enabled.  */
#define TWI_CR_ACMEN_0                   (TWI_CR_ACMEN_0_Val << TWI_CR_ACMEN_Pos)   /* (TWI_CR) No effect. Position */
#define TWI_CR_ACMEN_1                   (TWI_CR_ACMEN_1_Val << TWI_CR_ACMEN_Pos)   /* (TWI_CR) Alternative Command mode enabled. Position */
#define TWI_CR_ACMDIS_Pos                _UINT32_(17)                                         /* (TWI_CR) Alternative Command Mode Disable Position */
#define TWI_CR_ACMDIS_Msk                (_UINT32_(0x1) << TWI_CR_ACMDIS_Pos)            /* (TWI_CR) Alternative Command Mode Disable Mask */
#define TWI_CR_ACMDIS(value)             (TWI_CR_ACMDIS_Msk & (_UINT32_(value) << TWI_CR_ACMDIS_Pos)) /* Assignment of value for ACMDIS in the TWI_CR register */
#define   TWI_CR_ACMDIS_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_ACMDIS_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) Alternative Command mode disabled.  */
#define TWI_CR_ACMDIS_0                  (TWI_CR_ACMDIS_0_Val << TWI_CR_ACMDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_ACMDIS_1                  (TWI_CR_ACMDIS_1_Val << TWI_CR_ACMDIS_Pos) /* (TWI_CR) Alternative Command mode disabled. Position */
#define TWI_CR_SCLRBD_Pos                _UINT32_(18)                                         /* (TWI_CR) SCL Rise Boost Disable Position */
#define TWI_CR_SCLRBD_Msk                (_UINT32_(0x1) << TWI_CR_SCLRBD_Pos)            /* (TWI_CR) SCL Rise Boost Disable Mask */
#define TWI_CR_SCLRBD(value)             (TWI_CR_SCLRBD_Msk & (_UINT32_(value) << TWI_CR_SCLRBD_Pos)) /* Assignment of value for SCLRBD in the TWI_CR register */
#define   TWI_CR_SCLRBD_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SCLRBD_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) SCL rise time boost is disabled. See Section 10.3.12.2 "SCL Rising Time Control" for details.  */
#define TWI_CR_SCLRBD_0                  (TWI_CR_SCLRBD_0_Val << TWI_CR_SCLRBD_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_SCLRBD_1                  (TWI_CR_SCLRBD_1_Val << TWI_CR_SCLRBD_Pos) /* (TWI_CR) SCL rise time boost is disabled. See Section 10.3.12.2 "SCL Rising Time Control" for details. Position */
#define TWI_CR_SCLRBE_Pos                _UINT32_(19)                                         /* (TWI_CR) SCL Rise Boost Enable Position */
#define TWI_CR_SCLRBE_Msk                (_UINT32_(0x1) << TWI_CR_SCLRBE_Pos)            /* (TWI_CR) SCL Rise Boost Enable Mask */
#define TWI_CR_SCLRBE(value)             (TWI_CR_SCLRBE_Msk & (_UINT32_(value) << TWI_CR_SCLRBE_Pos)) /* Assignment of value for SCLRBE in the TWI_CR register */
#define   TWI_CR_SCLRBE_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_SCLRBE_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) SCL rise time is boosted in High-Speed mode. Duration of the boost is configured with TWI_MMR.SCLRBL. See Section 10.3.12.2 "SCL Rising Time Control" for details.  */
#define TWI_CR_SCLRBE_0                  (TWI_CR_SCLRBE_0_Val << TWI_CR_SCLRBE_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_SCLRBE_1                  (TWI_CR_SCLRBE_1_Val << TWI_CR_SCLRBE_Pos) /* (TWI_CR) SCL rise time is boosted in High-Speed mode. Duration of the boost is configured with TWI_MMR.SCLRBL. See Section 10.3.12.2 "SCL Rising Time Control" for details. Position */
#define TWI_CR_THRCLR_Pos                _UINT32_(24)                                         /* (TWI_CR) Transmit Holding Register Clear Position */
#define TWI_CR_THRCLR_Msk                (_UINT32_(0x1) << TWI_CR_THRCLR_Pos)            /* (TWI_CR) Transmit Holding Register Clear Mask */
#define TWI_CR_THRCLR(value)             (TWI_CR_THRCLR_Msk & (_UINT32_(value) << TWI_CR_THRCLR_Pos)) /* Assignment of value for THRCLR in the TWI_CR register */
#define   TWI_CR_THRCLR_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_THRCLR_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) Clear the Transmit Holding Register and set TXRDY, TXCOMP flags.  */
#define TWI_CR_THRCLR_0                  (TWI_CR_THRCLR_0_Val << TWI_CR_THRCLR_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_THRCLR_1                  (TWI_CR_THRCLR_1_Val << TWI_CR_THRCLR_Pos) /* (TWI_CR) Clear the Transmit Holding Register and set TXRDY, TXCOMP flags. Position */
#define TWI_CR_LOCKCLR_Pos               _UINT32_(26)                                         /* (TWI_CR) Lock Clear Position */
#define TWI_CR_LOCKCLR_Msk               (_UINT32_(0x1) << TWI_CR_LOCKCLR_Pos)           /* (TWI_CR) Lock Clear Mask */
#define TWI_CR_LOCKCLR(value)            (TWI_CR_LOCKCLR_Msk & (_UINT32_(value) << TWI_CR_LOCKCLR_Pos)) /* Assignment of value for LOCKCLR in the TWI_CR register */
#define   TWI_CR_LOCKCLR_0_Val           _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_LOCKCLR_1_Val           _UINT32_(0x1)                                        /* (TWI_CR) Clear the TWI FSM lock.  */
#define TWI_CR_LOCKCLR_0                 (TWI_CR_LOCKCLR_0_Val << TWI_CR_LOCKCLR_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_LOCKCLR_1                 (TWI_CR_LOCKCLR_1_Val << TWI_CR_LOCKCLR_Pos) /* (TWI_CR) Clear the TWI FSM lock. Position */
#define TWI_CR_FIFOEN_Pos                _UINT32_(28)                                         /* (TWI_CR) FIFO Enable Position */
#define TWI_CR_FIFOEN_Msk                (_UINT32_(0x1) << TWI_CR_FIFOEN_Pos)            /* (TWI_CR) FIFO Enable Mask */
#define TWI_CR_FIFOEN(value)             (TWI_CR_FIFOEN_Msk & (_UINT32_(value) << TWI_CR_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the TWI_CR register */
#define   TWI_CR_FIFOEN_0_Val            _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFOEN_1_Val            _UINT32_(0x1)                                        /* (TWI_CR) Enable the Transmit and Receive FIFOs  */
#define TWI_CR_FIFOEN_0                  (TWI_CR_FIFOEN_0_Val << TWI_CR_FIFOEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFOEN_1                  (TWI_CR_FIFOEN_1_Val << TWI_CR_FIFOEN_Pos) /* (TWI_CR) Enable the Transmit and Receive FIFOs Position */
#define TWI_CR_FIFODIS_Pos               _UINT32_(29)                                         /* (TWI_CR) FIFO Disable Position */
#define TWI_CR_FIFODIS_Msk               (_UINT32_(0x1) << TWI_CR_FIFODIS_Pos)           /* (TWI_CR) FIFO Disable Mask */
#define TWI_CR_FIFODIS(value)            (TWI_CR_FIFODIS_Msk & (_UINT32_(value) << TWI_CR_FIFODIS_Pos)) /* Assignment of value for FIFODIS in the TWI_CR register */
#define   TWI_CR_FIFODIS_0_Val           _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFODIS_1_Val           _UINT32_(0x1)                                        /* (TWI_CR) Disable the Transmit and Receive FIFOs  */
#define TWI_CR_FIFODIS_0                 (TWI_CR_FIFODIS_0_Val << TWI_CR_FIFODIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFODIS_1                 (TWI_CR_FIFODIS_1_Val << TWI_CR_FIFODIS_Pos) /* (TWI_CR) Disable the Transmit and Receive FIFOs Position */
#define TWI_CR_Msk                       _UINT32_(0x350FFFFF)                                 /* (TWI_CR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWI_CR_FIFO_ENABLED_START_Pos    _UINT32_(0)                                          /* (TWI_CR) Send a START Condition Position */
#define TWI_CR_FIFO_ENABLED_START_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_START_Pos) /* (TWI_CR) Send a START Condition Mask */
#define TWI_CR_FIFO_ENABLED_START(value) (TWI_CR_FIFO_ENABLED_START_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_START_Pos))
#define   TWI_CR_FIFO_ENABLED_START_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_START_1_Val _UINT32_(0x1)                                        /* (TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (TWI_MMR).  */
#define TWI_CR_FIFO_ENABLED_START_0      (TWI_CR_FIFO_ENABLED_START_0_Val << TWI_CR_FIFO_ENABLED_START_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_START_1      (TWI_CR_FIFO_ENABLED_START_1_Val << TWI_CR_FIFO_ENABLED_START_Pos) /* (TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (TWI_MMR). Position */
#define TWI_CR_FIFO_ENABLED_STOP_Pos     _UINT32_(1)                                          /* (TWI_CR) Send a STOP Condition Position */
#define TWI_CR_FIFO_ENABLED_STOP_Msk     (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_STOP_Pos) /* (TWI_CR) Send a STOP Condition Mask */
#define TWI_CR_FIFO_ENABLED_STOP(value)  (TWI_CR_FIFO_ENABLED_STOP_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_STOP_Pos))
#define   TWI_CR_FIFO_ENABLED_STOP_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_STOP_1_Val _UINT32_(0x1)                                        /* (TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode.  */
#define TWI_CR_FIFO_ENABLED_STOP_0       (TWI_CR_FIFO_ENABLED_STOP_0_Val << TWI_CR_FIFO_ENABLED_STOP_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_STOP_1       (TWI_CR_FIFO_ENABLED_STOP_1_Val << TWI_CR_FIFO_ENABLED_STOP_Pos) /* (TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode. Position */
#define TWI_CR_FIFO_ENABLED_MSEN_Pos     _UINT32_(2)                                          /* (TWI_CR) TWI Host Mode Enabled Position */
#define TWI_CR_FIFO_ENABLED_MSEN_Msk     (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_MSEN_Pos) /* (TWI_CR) TWI Host Mode Enabled Mask */
#define TWI_CR_FIFO_ENABLED_MSEN(value)  (TWI_CR_FIFO_ENABLED_MSEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_MSEN_Pos))
#define   TWI_CR_FIFO_ENABLED_MSEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_MSEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Enables Host mode (MSDIS must be written to 0).  */
#define TWI_CR_FIFO_ENABLED_MSEN_0       (TWI_CR_FIFO_ENABLED_MSEN_0_Val << TWI_CR_FIFO_ENABLED_MSEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_MSEN_1       (TWI_CR_FIFO_ENABLED_MSEN_1_Val << TWI_CR_FIFO_ENABLED_MSEN_Pos) /* (TWI_CR) Enables Host mode (MSDIS must be written to 0). Position */
#define TWI_CR_FIFO_ENABLED_MSDIS_Pos    _UINT32_(3)                                          /* (TWI_CR) TWI Host Mode Disabled Position */
#define TWI_CR_FIFO_ENABLED_MSDIS_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_MSDIS_Pos) /* (TWI_CR) TWI Host Mode Disabled Mask */
#define TWI_CR_FIFO_ENABLED_MSDIS(value) (TWI_CR_FIFO_ENABLED_MSDIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_MSDIS_Pos))
#define   TWI_CR_FIFO_ENABLED_MSDIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_MSDIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling.  */
#define TWI_CR_FIFO_ENABLED_MSDIS_0      (TWI_CR_FIFO_ENABLED_MSDIS_0_Val << TWI_CR_FIFO_ENABLED_MSDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_MSDIS_1      (TWI_CR_FIFO_ENABLED_MSDIS_1_Val << TWI_CR_FIFO_ENABLED_MSDIS_Pos) /* (TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling. Position */
#define TWI_CR_FIFO_ENABLED_SVEN_Pos     _UINT32_(4)                                          /* (TWI_CR) TWI Client Mode Enabled Position */
#define TWI_CR_FIFO_ENABLED_SVEN_Msk     (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_SVEN_Pos) /* (TWI_CR) TWI Client Mode Enabled Mask */
#define TWI_CR_FIFO_ENABLED_SVEN(value)  (TWI_CR_FIFO_ENABLED_SVEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_SVEN_Pos))
#define   TWI_CR_FIFO_ENABLED_SVEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_SVEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Enables Client mode (SVDIS must be written to 0).  */
#define TWI_CR_FIFO_ENABLED_SVEN_0       (TWI_CR_FIFO_ENABLED_SVEN_0_Val << TWI_CR_FIFO_ENABLED_SVEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_SVEN_1       (TWI_CR_FIFO_ENABLED_SVEN_1_Val << TWI_CR_FIFO_ENABLED_SVEN_Pos) /* (TWI_CR) Enables Client mode (SVDIS must be written to 0). Position */
#define TWI_CR_FIFO_ENABLED_SVDIS_Pos    _UINT32_(5)                                          /* (TWI_CR) TWI Client Mode Disabled Position */
#define TWI_CR_FIFO_ENABLED_SVDIS_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_SVDIS_Pos) /* (TWI_CR) TWI Client Mode Disabled Mask */
#define TWI_CR_FIFO_ENABLED_SVDIS(value) (TWI_CR_FIFO_ENABLED_SVDIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_SVDIS_Pos))
#define   TWI_CR_FIFO_ENABLED_SVDIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_SVDIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling.  */
#define TWI_CR_FIFO_ENABLED_SVDIS_0      (TWI_CR_FIFO_ENABLED_SVDIS_0_Val << TWI_CR_FIFO_ENABLED_SVDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_SVDIS_1      (TWI_CR_FIFO_ENABLED_SVDIS_1_Val << TWI_CR_FIFO_ENABLED_SVDIS_Pos) /* (TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling. Position */
#define TWI_CR_FIFO_ENABLED_QUICK_Pos    _UINT32_(6)                                          /* (TWI_CR) SMBus Quick Command Position */
#define TWI_CR_FIFO_ENABLED_QUICK_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_QUICK_Pos) /* (TWI_CR) SMBus Quick Command Mask */
#define TWI_CR_FIFO_ENABLED_QUICK(value) (TWI_CR_FIFO_ENABLED_QUICK_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_QUICK_Pos))
#define   TWI_CR_FIFO_ENABLED_QUICK_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_QUICK_1_Val _UINT32_(0x1)                                        /* (TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent.  */
#define TWI_CR_FIFO_ENABLED_QUICK_0      (TWI_CR_FIFO_ENABLED_QUICK_0_Val << TWI_CR_FIFO_ENABLED_QUICK_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_QUICK_1      (TWI_CR_FIFO_ENABLED_QUICK_1_Val << TWI_CR_FIFO_ENABLED_QUICK_Pos) /* (TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent. Position */
#define TWI_CR_FIFO_ENABLED_SWRST_Pos    _UINT32_(7)                                          /* (TWI_CR) Software Reset Position */
#define TWI_CR_FIFO_ENABLED_SWRST_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_SWRST_Pos) /* (TWI_CR) Software Reset Mask */
#define TWI_CR_FIFO_ENABLED_SWRST(value) (TWI_CR_FIFO_ENABLED_SWRST_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_SWRST_Pos))
#define   TWI_CR_FIFO_ENABLED_SWRST_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_SWRST_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Equivalent to a system reset.  */
#define TWI_CR_FIFO_ENABLED_SWRST_0      (TWI_CR_FIFO_ENABLED_SWRST_0_Val << TWI_CR_FIFO_ENABLED_SWRST_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_SWRST_1      (TWI_CR_FIFO_ENABLED_SWRST_1_Val << TWI_CR_FIFO_ENABLED_SWRST_Pos) /* (TWI_CR) Equivalent to a system reset. Position */
#define TWI_CR_FIFO_ENABLED_HSEN_Pos     _UINT32_(8)                                          /* (TWI_CR) TWI High-Speed Mode Enabled Position */
#define TWI_CR_FIFO_ENABLED_HSEN_Msk     (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_HSEN_Pos) /* (TWI_CR) TWI High-Speed Mode Enabled Mask */
#define TWI_CR_FIFO_ENABLED_HSEN(value)  (TWI_CR_FIFO_ENABLED_HSEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_HSEN_Pos))
#define   TWI_CR_FIFO_ENABLED_HSEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_HSEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) High-speed mode enabled.  */
#define TWI_CR_FIFO_ENABLED_HSEN_0       (TWI_CR_FIFO_ENABLED_HSEN_0_Val << TWI_CR_FIFO_ENABLED_HSEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_HSEN_1       (TWI_CR_FIFO_ENABLED_HSEN_1_Val << TWI_CR_FIFO_ENABLED_HSEN_Pos) /* (TWI_CR) High-speed mode enabled. Position */
#define TWI_CR_FIFO_ENABLED_HSDIS_Pos    _UINT32_(9)                                          /* (TWI_CR) TWI High-Speed Mode Disabled Position */
#define TWI_CR_FIFO_ENABLED_HSDIS_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_HSDIS_Pos) /* (TWI_CR) TWI High-Speed Mode Disabled Mask */
#define TWI_CR_FIFO_ENABLED_HSDIS(value) (TWI_CR_FIFO_ENABLED_HSDIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_HSDIS_Pos))
#define   TWI_CR_FIFO_ENABLED_HSDIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_HSDIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) High-speed mode disabled.  */
#define TWI_CR_FIFO_ENABLED_HSDIS_0      (TWI_CR_FIFO_ENABLED_HSDIS_0_Val << TWI_CR_FIFO_ENABLED_HSDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_HSDIS_1      (TWI_CR_FIFO_ENABLED_HSDIS_1_Val << TWI_CR_FIFO_ENABLED_HSDIS_Pos) /* (TWI_CR) High-speed mode disabled. Position */
#define TWI_CR_FIFO_ENABLED_SMBEN_Pos    _UINT32_(10)                                         /* (TWI_CR) SMBus Mode Enabled Position */
#define TWI_CR_FIFO_ENABLED_SMBEN_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_SMBEN_Pos) /* (TWI_CR) SMBus Mode Enabled Mask */
#define TWI_CR_FIFO_ENABLED_SMBEN(value) (TWI_CR_FIFO_ENABLED_SMBEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_SMBEN_Pos))
#define   TWI_CR_FIFO_ENABLED_SMBEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_SMBEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) If SMBDIS = 0, SMBus mode enabled.  */
#define TWI_CR_FIFO_ENABLED_SMBEN_0      (TWI_CR_FIFO_ENABLED_SMBEN_0_Val << TWI_CR_FIFO_ENABLED_SMBEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_SMBEN_1      (TWI_CR_FIFO_ENABLED_SMBEN_1_Val << TWI_CR_FIFO_ENABLED_SMBEN_Pos) /* (TWI_CR) If SMBDIS = 0, SMBus mode enabled. Position */
#define TWI_CR_FIFO_ENABLED_SMBDIS_Pos   _UINT32_(11)                                         /* (TWI_CR) SMBus Mode Disabled Position */
#define TWI_CR_FIFO_ENABLED_SMBDIS_Msk   (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_SMBDIS_Pos) /* (TWI_CR) SMBus Mode Disabled Mask */
#define TWI_CR_FIFO_ENABLED_SMBDIS(value) (TWI_CR_FIFO_ENABLED_SMBDIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_SMBDIS_Pos))
#define   TWI_CR_FIFO_ENABLED_SMBDIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_SMBDIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) SMBus mode disabled.  */
#define TWI_CR_FIFO_ENABLED_SMBDIS_0     (TWI_CR_FIFO_ENABLED_SMBDIS_0_Val << TWI_CR_FIFO_ENABLED_SMBDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_SMBDIS_1     (TWI_CR_FIFO_ENABLED_SMBDIS_1_Val << TWI_CR_FIFO_ENABLED_SMBDIS_Pos) /* (TWI_CR) SMBus mode disabled. Position */
#define TWI_CR_FIFO_ENABLED_PECEN_Pos    _UINT32_(12)                                         /* (TWI_CR) Packet Error Checking Enable Position */
#define TWI_CR_FIFO_ENABLED_PECEN_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_PECEN_Pos) /* (TWI_CR) Packet Error Checking Enable Mask */
#define TWI_CR_FIFO_ENABLED_PECEN(value) (TWI_CR_FIFO_ENABLED_PECEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_PECEN_Pos))
#define   TWI_CR_FIFO_ENABLED_PECEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_PECEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) SMBus PEC (CRC) generation and check enabled.  */
#define TWI_CR_FIFO_ENABLED_PECEN_0      (TWI_CR_FIFO_ENABLED_PECEN_0_Val << TWI_CR_FIFO_ENABLED_PECEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_PECEN_1      (TWI_CR_FIFO_ENABLED_PECEN_1_Val << TWI_CR_FIFO_ENABLED_PECEN_Pos) /* (TWI_CR) SMBus PEC (CRC) generation and check enabled. Position */
#define TWI_CR_FIFO_ENABLED_PECDIS_Pos   _UINT32_(13)                                         /* (TWI_CR) Packet Error Checking Disable Position */
#define TWI_CR_FIFO_ENABLED_PECDIS_Msk   (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_PECDIS_Pos) /* (TWI_CR) Packet Error Checking Disable Mask */
#define TWI_CR_FIFO_ENABLED_PECDIS(value) (TWI_CR_FIFO_ENABLED_PECDIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_PECDIS_Pos))
#define   TWI_CR_FIFO_ENABLED_PECDIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_PECDIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) SMBus PEC (CRC) generation and check disabled.  */
#define TWI_CR_FIFO_ENABLED_PECDIS_0     (TWI_CR_FIFO_ENABLED_PECDIS_0_Val << TWI_CR_FIFO_ENABLED_PECDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_PECDIS_1     (TWI_CR_FIFO_ENABLED_PECDIS_1_Val << TWI_CR_FIFO_ENABLED_PECDIS_Pos) /* (TWI_CR) SMBus PEC (CRC) generation and check disabled. Position */
#define TWI_CR_FIFO_ENABLED_PECRQ_Pos    _UINT32_(14)                                         /* (TWI_CR) PEC Request Position */
#define TWI_CR_FIFO_ENABLED_PECRQ_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_PECRQ_Pos) /* (TWI_CR) PEC Request Mask */
#define TWI_CR_FIFO_ENABLED_PECRQ(value) (TWI_CR_FIFO_ENABLED_PECRQ_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_PECRQ_Pos))
#define   TWI_CR_FIFO_ENABLED_PECRQ_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_PECRQ_1_Val _UINT32_(0x1)                                        /* (TWI_CR) A PEC check or transmission is requested.  */
#define TWI_CR_FIFO_ENABLED_PECRQ_0      (TWI_CR_FIFO_ENABLED_PECRQ_0_Val << TWI_CR_FIFO_ENABLED_PECRQ_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_PECRQ_1      (TWI_CR_FIFO_ENABLED_PECRQ_1_Val << TWI_CR_FIFO_ENABLED_PECRQ_Pos) /* (TWI_CR) A PEC check or transmission is requested. Position */
#define TWI_CR_FIFO_ENABLED_CLEAR_Pos    _UINT32_(15)                                         /* (TWI_CR) Bus CLEAR Command Position */
#define TWI_CR_FIFO_ENABLED_CLEAR_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_CLEAR_Pos) /* (TWI_CR) Bus CLEAR Command Mask */
#define TWI_CR_FIFO_ENABLED_CLEAR(value) (TWI_CR_FIFO_ENABLED_CLEAR_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_CLEAR_Pos))
#define   TWI_CR_FIFO_ENABLED_CLEAR_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_CLEAR_1_Val _UINT32_(0x1)                                        /* (TWI_CR) If Host mode is enabled, send a bus clear command.  */
#define TWI_CR_FIFO_ENABLED_CLEAR_0      (TWI_CR_FIFO_ENABLED_CLEAR_0_Val << TWI_CR_FIFO_ENABLED_CLEAR_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_CLEAR_1      (TWI_CR_FIFO_ENABLED_CLEAR_1_Val << TWI_CR_FIFO_ENABLED_CLEAR_Pos) /* (TWI_CR) If Host mode is enabled, send a bus clear command. Position */
#define TWI_CR_FIFO_ENABLED_ACMEN_Pos    _UINT32_(16)                                         /* (TWI_CR) Alternative Command Mode Enable Position */
#define TWI_CR_FIFO_ENABLED_ACMEN_Msk    (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_ACMEN_Pos) /* (TWI_CR) Alternative Command Mode Enable Mask */
#define TWI_CR_FIFO_ENABLED_ACMEN(value) (TWI_CR_FIFO_ENABLED_ACMEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_ACMEN_Pos))
#define   TWI_CR_FIFO_ENABLED_ACMEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_ACMEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Alternative Command mode enabled.  */
#define TWI_CR_FIFO_ENABLED_ACMEN_0      (TWI_CR_FIFO_ENABLED_ACMEN_0_Val << TWI_CR_FIFO_ENABLED_ACMEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_ACMEN_1      (TWI_CR_FIFO_ENABLED_ACMEN_1_Val << TWI_CR_FIFO_ENABLED_ACMEN_Pos) /* (TWI_CR) Alternative Command mode enabled. Position */
#define TWI_CR_FIFO_ENABLED_ACMDIS_Pos   _UINT32_(17)                                         /* (TWI_CR) Alternative Command Mode Disable Position */
#define TWI_CR_FIFO_ENABLED_ACMDIS_Msk   (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_ACMDIS_Pos) /* (TWI_CR) Alternative Command Mode Disable Mask */
#define TWI_CR_FIFO_ENABLED_ACMDIS(value) (TWI_CR_FIFO_ENABLED_ACMDIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_ACMDIS_Pos))
#define   TWI_CR_FIFO_ENABLED_ACMDIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_ACMDIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Alternative Command mode disabled.  */
#define TWI_CR_FIFO_ENABLED_ACMDIS_0     (TWI_CR_FIFO_ENABLED_ACMDIS_0_Val << TWI_CR_FIFO_ENABLED_ACMDIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_ACMDIS_1     (TWI_CR_FIFO_ENABLED_ACMDIS_1_Val << TWI_CR_FIFO_ENABLED_ACMDIS_Pos) /* (TWI_CR) Alternative Command mode disabled. Position */
#define TWI_CR_FIFO_ENABLED_TXFCLR_Pos   _UINT32_(24)                                         /* (TWI_CR) Transmit FIFO Clear Position */
#define TWI_CR_FIFO_ENABLED_TXFCLR_Msk   (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_TXFCLR_Pos) /* (TWI_CR) Transmit FIFO Clear Mask */
#define TWI_CR_FIFO_ENABLED_TXFCLR(value) (TWI_CR_FIFO_ENABLED_TXFCLR_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_TXFCLR_Pos))
#define   TWI_CR_FIFO_ENABLED_TXFCLR_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_TXFCLR_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Empties the Transmit FIFO.  */
#define TWI_CR_FIFO_ENABLED_TXFCLR_0     (TWI_CR_FIFO_ENABLED_TXFCLR_0_Val << TWI_CR_FIFO_ENABLED_TXFCLR_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_TXFCLR_1     (TWI_CR_FIFO_ENABLED_TXFCLR_1_Val << TWI_CR_FIFO_ENABLED_TXFCLR_Pos) /* (TWI_CR) Empties the Transmit FIFO. Position */
#define TWI_CR_FIFO_ENABLED_RXFCLR_Pos   _UINT32_(25)                                         /* (TWI_CR) Receive FIFO Clear Position */
#define TWI_CR_FIFO_ENABLED_RXFCLR_Msk   (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_RXFCLR_Pos) /* (TWI_CR) Receive FIFO Clear Mask */
#define TWI_CR_FIFO_ENABLED_RXFCLR(value) (TWI_CR_FIFO_ENABLED_RXFCLR_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_RXFCLR_Pos))
#define   TWI_CR_FIFO_ENABLED_RXFCLR_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_RXFCLR_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Empties the Receive FIFO.  */
#define TWI_CR_FIFO_ENABLED_RXFCLR_0     (TWI_CR_FIFO_ENABLED_RXFCLR_0_Val << TWI_CR_FIFO_ENABLED_RXFCLR_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_RXFCLR_1     (TWI_CR_FIFO_ENABLED_RXFCLR_1_Val << TWI_CR_FIFO_ENABLED_RXFCLR_Pos) /* (TWI_CR) Empties the Receive FIFO. Position */
#define TWI_CR_FIFO_ENABLED_TXFLCLR_Pos  _UINT32_(26)                                         /* (TWI_CR) Transmit FIFO Lock CLEAR Position */
#define TWI_CR_FIFO_ENABLED_TXFLCLR_Msk  (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_TXFLCLR_Pos) /* (TWI_CR) Transmit FIFO Lock CLEAR Mask */
#define TWI_CR_FIFO_ENABLED_TXFLCLR(value) (TWI_CR_FIFO_ENABLED_TXFLCLR_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_TXFLCLR_Pos))
#define   TWI_CR_FIFO_ENABLED_TXFLCLR_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_TXFLCLR_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Clears the Transmit FIFO Lock.  */
#define TWI_CR_FIFO_ENABLED_TXFLCLR_0    (TWI_CR_FIFO_ENABLED_TXFLCLR_0_Val << TWI_CR_FIFO_ENABLED_TXFLCLR_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_TXFLCLR_1    (TWI_CR_FIFO_ENABLED_TXFLCLR_1_Val << TWI_CR_FIFO_ENABLED_TXFLCLR_Pos) /* (TWI_CR) Clears the Transmit FIFO Lock. Position */
#define TWI_CR_FIFO_ENABLED_FIFOEN_Pos   _UINT32_(28)                                         /* (TWI_CR) FIFO Enable Position */
#define TWI_CR_FIFO_ENABLED_FIFOEN_Msk   (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_FIFOEN_Pos) /* (TWI_CR) FIFO Enable Mask */
#define TWI_CR_FIFO_ENABLED_FIFOEN(value) (TWI_CR_FIFO_ENABLED_FIFOEN_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_FIFOEN_Pos))
#define   TWI_CR_FIFO_ENABLED_FIFOEN_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_FIFOEN_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Enable the Transmit and Receive FIFOs.  */
#define TWI_CR_FIFO_ENABLED_FIFOEN_0     (TWI_CR_FIFO_ENABLED_FIFOEN_0_Val << TWI_CR_FIFO_ENABLED_FIFOEN_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_FIFOEN_1     (TWI_CR_FIFO_ENABLED_FIFOEN_1_Val << TWI_CR_FIFO_ENABLED_FIFOEN_Pos) /* (TWI_CR) Enable the Transmit and Receive FIFOs. Position */
#define TWI_CR_FIFO_ENABLED_FIFODIS_Pos  _UINT32_(29)                                         /* (TWI_CR) FIFO Disable Position */
#define TWI_CR_FIFO_ENABLED_FIFODIS_Msk  (_UINT32_(0x1) << TWI_CR_FIFO_ENABLED_FIFODIS_Pos) /* (TWI_CR) FIFO Disable Mask */
#define TWI_CR_FIFO_ENABLED_FIFODIS(value) (TWI_CR_FIFO_ENABLED_FIFODIS_Msk & (_UINT32_(value) << TWI_CR_FIFO_ENABLED_FIFODIS_Pos))
#define   TWI_CR_FIFO_ENABLED_FIFODIS_0_Val _UINT32_(0x0)                                        /* (TWI_CR) No effect.  */
#define   TWI_CR_FIFO_ENABLED_FIFODIS_1_Val _UINT32_(0x1)                                        /* (TWI_CR) Disable the Transmit and Receive FIFOs.  */
#define TWI_CR_FIFO_ENABLED_FIFODIS_0    (TWI_CR_FIFO_ENABLED_FIFODIS_0_Val << TWI_CR_FIFO_ENABLED_FIFODIS_Pos) /* (TWI_CR) No effect. Position */
#define TWI_CR_FIFO_ENABLED_FIFODIS_1    (TWI_CR_FIFO_ENABLED_FIFODIS_1_Val << TWI_CR_FIFO_ENABLED_FIFODIS_Pos) /* (TWI_CR) Disable the Transmit and Receive FIFOs. Position */
#define TWI_CR_FIFO_ENABLED_Msk          _UINT32_(0x3703FFFF)                                 /* (TWI_CR_FIFO_ENABLED) Register Mask  */


/* -------- TWI_MMR : (FLEXCOM Offset: 0x604) (R/W 32) TWI Host Mode Register -------- */
#define TWI_MMR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_MMR) TWI Host Mode Register  Reset Value */

#define TWI_MMR_IADRSZ_Pos               _UINT32_(8)                                          /* (TWI_MMR) Internal Device Address Size Position */
#define TWI_MMR_IADRSZ_Msk               (_UINT32_(0x3) << TWI_MMR_IADRSZ_Pos)           /* (TWI_MMR) Internal Device Address Size Mask */
#define TWI_MMR_IADRSZ(value)            (TWI_MMR_IADRSZ_Msk & (_UINT32_(value) << TWI_MMR_IADRSZ_Pos)) /* Assignment of value for IADRSZ in the TWI_MMR register */
#define   TWI_MMR_IADRSZ_NONE_Val        _UINT32_(0x0)                                        /* (TWI_MMR) No internal device address  */
#define   TWI_MMR_IADRSZ_1_BYTE_Val      _UINT32_(0x1)                                        /* (TWI_MMR) One-byte internal device address  */
#define   TWI_MMR_IADRSZ_2_BYTE_Val      _UINT32_(0x2)                                        /* (TWI_MMR) Two-byte internal device address  */
#define   TWI_MMR_IADRSZ_3_BYTE_Val      _UINT32_(0x3)                                        /* (TWI_MMR) Three-byte internal device address  */
#define TWI_MMR_IADRSZ_NONE              (TWI_MMR_IADRSZ_NONE_Val << TWI_MMR_IADRSZ_Pos) /* (TWI_MMR) No internal device address Position */
#define TWI_MMR_IADRSZ_1_BYTE            (TWI_MMR_IADRSZ_1_BYTE_Val << TWI_MMR_IADRSZ_Pos) /* (TWI_MMR) One-byte internal device address Position */
#define TWI_MMR_IADRSZ_2_BYTE            (TWI_MMR_IADRSZ_2_BYTE_Val << TWI_MMR_IADRSZ_Pos) /* (TWI_MMR) Two-byte internal device address Position */
#define TWI_MMR_IADRSZ_3_BYTE            (TWI_MMR_IADRSZ_3_BYTE_Val << TWI_MMR_IADRSZ_Pos) /* (TWI_MMR) Three-byte internal device address Position */
#define TWI_MMR_MREAD_Pos                _UINT32_(12)                                         /* (TWI_MMR) Host Read Direction Position */
#define TWI_MMR_MREAD_Msk                (_UINT32_(0x1) << TWI_MMR_MREAD_Pos)            /* (TWI_MMR) Host Read Direction Mask */
#define TWI_MMR_MREAD(value)             (TWI_MMR_MREAD_Msk & (_UINT32_(value) << TWI_MMR_MREAD_Pos)) /* Assignment of value for MREAD in the TWI_MMR register */
#define   TWI_MMR_MREAD_0_Val            _UINT32_(0x0)                                        /* (TWI_MMR) Host write direction.  */
#define   TWI_MMR_MREAD_1_Val            _UINT32_(0x1)                                        /* (TWI_MMR) Host read direction.  */
#define TWI_MMR_MREAD_0                  (TWI_MMR_MREAD_0_Val << TWI_MMR_MREAD_Pos) /* (TWI_MMR) Host write direction. Position */
#define TWI_MMR_MREAD_1                  (TWI_MMR_MREAD_1_Val << TWI_MMR_MREAD_Pos) /* (TWI_MMR) Host read direction. Position */
#define TWI_MMR_SCLRBL_Pos               _UINT32_(13)                                         /* (TWI_MMR) SCL Rise Boost Level Position */
#define TWI_MMR_SCLRBL_Msk               (_UINT32_(0x3) << TWI_MMR_SCLRBL_Pos)           /* (TWI_MMR) SCL Rise Boost Level Mask */
#define TWI_MMR_SCLRBL(value)            (TWI_MMR_SCLRBL_Msk & (_UINT32_(value) << TWI_MMR_SCLRBL_Pos)) /* Assignment of value for SCLRBL in the TWI_MMR register */
#define TWI_MMR_DADR_Pos                 _UINT32_(16)                                         /* (TWI_MMR) Device Address Position */
#define TWI_MMR_DADR_Msk                 (_UINT32_(0x7F) << TWI_MMR_DADR_Pos)            /* (TWI_MMR) Device Address Mask */
#define TWI_MMR_DADR(value)              (TWI_MMR_DADR_Msk & (_UINT32_(value) << TWI_MMR_DADR_Pos)) /* Assignment of value for DADR in the TWI_MMR register */
#define TWI_MMR_NOAP_Pos                 _UINT32_(24)                                         /* (TWI_MMR) No Auto-Stop On NACK Error Position */
#define TWI_MMR_NOAP_Msk                 (_UINT32_(0x1) << TWI_MMR_NOAP_Pos)             /* (TWI_MMR) No Auto-Stop On NACK Error Mask */
#define TWI_MMR_NOAP(value)              (TWI_MMR_NOAP_Msk & (_UINT32_(value) << TWI_MMR_NOAP_Pos)) /* Assignment of value for NOAP in the TWI_MMR register */
#define   TWI_MMR_NOAP_0_Val             _UINT32_(0x0)                                        /* (TWI_MMR) A stop condition is sent automatically upon Not-Acknowledge error detection.  */
#define   TWI_MMR_NOAP_1_Val             _UINT32_(0x1)                                        /* (TWI_MMR) No automatic action is performed upon Not-Acknowledge error detection.  */
#define TWI_MMR_NOAP_0                   (TWI_MMR_NOAP_0_Val << TWI_MMR_NOAP_Pos)   /* (TWI_MMR) A stop condition is sent automatically upon Not-Acknowledge error detection. Position */
#define TWI_MMR_NOAP_1                   (TWI_MMR_NOAP_1_Val << TWI_MMR_NOAP_Pos)   /* (TWI_MMR) No automatic action is performed upon Not-Acknowledge error detection. Position */
#define TWI_MMR_Msk                      _UINT32_(0x017F7300)                                 /* (TWI_MMR) Register Mask  */


/* -------- TWI_SMR : (FLEXCOM Offset: 0x608) (R/W 32) TWI Client Mode Register -------- */
#define TWI_SMR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_SMR) TWI Client Mode Register  Reset Value */

#define TWI_SMR_NACKEN_Pos               _UINT32_(0)                                          /* (TWI_SMR) Client Receiver Data Phase NACK Enable Position */
#define TWI_SMR_NACKEN_Msk               (_UINT32_(0x1) << TWI_SMR_NACKEN_Pos)           /* (TWI_SMR) Client Receiver Data Phase NACK Enable Mask */
#define TWI_SMR_NACKEN(value)            (TWI_SMR_NACKEN_Msk & (_UINT32_(value) << TWI_SMR_NACKEN_Pos)) /* Assignment of value for NACKEN in the TWI_SMR register */
#define   TWI_SMR_NACKEN_0_Val           _UINT32_(0x0)                                        /* (TWI_SMR) Normal value to be returned in the ACK cycle of the data phase in Client Receiver mode.  */
#define   TWI_SMR_NACKEN_1_Val           _UINT32_(0x1)                                        /* (TWI_SMR) NACK value to be returned in the ACK cycle of the data phase in Client Receiver mode.  */
#define TWI_SMR_NACKEN_0                 (TWI_SMR_NACKEN_0_Val << TWI_SMR_NACKEN_Pos) /* (TWI_SMR) Normal value to be returned in the ACK cycle of the data phase in Client Receiver mode. Position */
#define TWI_SMR_NACKEN_1                 (TWI_SMR_NACKEN_1_Val << TWI_SMR_NACKEN_Pos) /* (TWI_SMR) NACK value to be returned in the ACK cycle of the data phase in Client Receiver mode. Position */
#define TWI_SMR_SMDA_Pos                 _UINT32_(2)                                          /* (TWI_SMR) SMBus Default Address Position */
#define TWI_SMR_SMDA_Msk                 (_UINT32_(0x1) << TWI_SMR_SMDA_Pos)             /* (TWI_SMR) SMBus Default Address Mask */
#define TWI_SMR_SMDA(value)              (TWI_SMR_SMDA_Msk & (_UINT32_(value) << TWI_SMR_SMDA_Pos)) /* Assignment of value for SMDA in the TWI_SMR register */
#define   TWI_SMR_SMDA_0_Val             _UINT32_(0x0)                                        /* (TWI_SMR) Acknowledge of the SMBus Default Address disabled.  */
#define   TWI_SMR_SMDA_1_Val             _UINT32_(0x1)                                        /* (TWI_SMR) Acknowledge of the SMBus Default Address enabled.  */
#define TWI_SMR_SMDA_0                   (TWI_SMR_SMDA_0_Val << TWI_SMR_SMDA_Pos)   /* (TWI_SMR) Acknowledge of the SMBus Default Address disabled. Position */
#define TWI_SMR_SMDA_1                   (TWI_SMR_SMDA_1_Val << TWI_SMR_SMDA_Pos)   /* (TWI_SMR) Acknowledge of the SMBus Default Address enabled. Position */
#define TWI_SMR_SMHH_Pos                 _UINT32_(3)                                          /* (TWI_SMR) SMBus Host Header Position */
#define TWI_SMR_SMHH_Msk                 (_UINT32_(0x1) << TWI_SMR_SMHH_Pos)             /* (TWI_SMR) SMBus Host Header Mask */
#define TWI_SMR_SMHH(value)              (TWI_SMR_SMHH_Msk & (_UINT32_(value) << TWI_SMR_SMHH_Pos)) /* Assignment of value for SMHH in the TWI_SMR register */
#define   TWI_SMR_SMHH_0_Val             _UINT32_(0x0)                                        /* (TWI_SMR) Acknowledge of the SMBus Host Header disabled.  */
#define   TWI_SMR_SMHH_1_Val             _UINT32_(0x1)                                        /* (TWI_SMR) Acknowledge of the SMBus Host Header enabled.  */
#define TWI_SMR_SMHH_0                   (TWI_SMR_SMHH_0_Val << TWI_SMR_SMHH_Pos)   /* (TWI_SMR) Acknowledge of the SMBus Host Header disabled. Position */
#define TWI_SMR_SMHH_1                   (TWI_SMR_SMHH_1_Val << TWI_SMR_SMHH_Pos)   /* (TWI_SMR) Acknowledge of the SMBus Host Header enabled. Position */
#define TWI_SMR_SADAT_Pos                _UINT32_(4)                                          /* (TWI_SMR) Client Address Treated as Data Position */
#define TWI_SMR_SADAT_Msk                (_UINT32_(0x1) << TWI_SMR_SADAT_Pos)            /* (TWI_SMR) Client Address Treated as Data Mask */
#define TWI_SMR_SADAT(value)             (TWI_SMR_SADAT_Msk & (_UINT32_(value) << TWI_SMR_SADAT_Pos)) /* Assignment of value for SADAT in the TWI_SMR register */
#define   TWI_SMR_SADAT_0_Val            _UINT32_(0x0)                                        /* (TWI_SMR) Client address is handled normally (will not trig RXRDY flag and will not fill TWI_RHR upon reception).  */
#define   TWI_SMR_SADAT_1_Val            _UINT32_(0x1)                                        /* (TWI_SMR) Client address is handled as data field, RXRDY will be set and TWI_RHR filled upon client address reception.  */
#define TWI_SMR_SADAT_0                  (TWI_SMR_SADAT_0_Val << TWI_SMR_SADAT_Pos) /* (TWI_SMR) Client address is handled normally (will not trig RXRDY flag and will not fill TWI_RHR upon reception). Position */
#define TWI_SMR_SADAT_1                  (TWI_SMR_SADAT_1_Val << TWI_SMR_SADAT_Pos) /* (TWI_SMR) Client address is handled as data field, RXRDY will be set and TWI_RHR filled upon client address reception. Position */
#define TWI_SMR_BSEL_Pos                 _UINT32_(5)                                          /* (TWI_SMR) TWI Bus Selection Position */
#define TWI_SMR_BSEL_Msk                 (_UINT32_(0x1) << TWI_SMR_BSEL_Pos)             /* (TWI_SMR) TWI Bus Selection Mask */
#define TWI_SMR_BSEL(value)              (TWI_SMR_BSEL_Msk & (_UINT32_(value) << TWI_SMR_BSEL_Pos)) /* Assignment of value for BSEL in the TWI_SMR register */
#define   TWI_SMR_BSEL_0_Val             _UINT32_(0x0)                                        /* (TWI_SMR) TWI analyzes the TWCK and TWD pins from its TWI bus.  */
#define TWI_SMR_BSEL_0                   (TWI_SMR_BSEL_0_Val << TWI_SMR_BSEL_Pos)   /* (TWI_SMR) TWI analyzes the TWCK and TWD pins from its TWI bus. Position */
#define TWI_SMR_SCLWSDIS_Pos             _UINT32_(6)                                          /* (TWI_SMR) Clock Wait State Disable Position */
#define TWI_SMR_SCLWSDIS_Msk             (_UINT32_(0x1) << TWI_SMR_SCLWSDIS_Pos)         /* (TWI_SMR) Clock Wait State Disable Mask */
#define TWI_SMR_SCLWSDIS(value)          (TWI_SMR_SCLWSDIS_Msk & (_UINT32_(value) << TWI_SMR_SCLWSDIS_Pos)) /* Assignment of value for SCLWSDIS in the TWI_SMR register */
#define   TWI_SMR_SCLWSDIS_0_Val         _UINT32_(0x0)                                        /* (TWI_SMR) No effect.  */
#define   TWI_SMR_SCLWSDIS_1_Val         _UINT32_(0x1)                                        /* (TWI_SMR) Clock stretching disabled in Client mode, OVRE and UNRE will indicate overrun and underrun.  */
#define TWI_SMR_SCLWSDIS_0               (TWI_SMR_SCLWSDIS_0_Val << TWI_SMR_SCLWSDIS_Pos) /* (TWI_SMR) No effect. Position */
#define TWI_SMR_SCLWSDIS_1               (TWI_SMR_SCLWSDIS_1_Val << TWI_SMR_SCLWSDIS_Pos) /* (TWI_SMR) Clock stretching disabled in Client mode, OVRE and UNRE will indicate overrun and underrun. Position */
#define TWI_SMR_SNIFF_Pos                _UINT32_(7)                                          /* (TWI_SMR) Client Sniffer Mode Position */
#define TWI_SMR_SNIFF_Msk                (_UINT32_(0x1) << TWI_SMR_SNIFF_Pos)            /* (TWI_SMR) Client Sniffer Mode Mask */
#define TWI_SMR_SNIFF(value)             (TWI_SMR_SNIFF_Msk & (_UINT32_(value) << TWI_SMR_SNIFF_Pos)) /* Assignment of value for SNIFF in the TWI_SMR register */
#define   TWI_SMR_SNIFF_0_Val            _UINT32_(0x0)                                        /* (TWI_SMR) Client Sniffer mode is disabled.  */
#define   TWI_SMR_SNIFF_1_Val            _UINT32_(0x1)                                        /* (TWI_SMR) Client Sniffer mode is enabled.  */
#define TWI_SMR_SNIFF_0                  (TWI_SMR_SNIFF_0_Val << TWI_SMR_SNIFF_Pos) /* (TWI_SMR) Client Sniffer mode is disabled. Position */
#define TWI_SMR_SNIFF_1                  (TWI_SMR_SNIFF_1_Val << TWI_SMR_SNIFF_Pos) /* (TWI_SMR) Client Sniffer mode is enabled. Position */
#define TWI_SMR_MASK_Pos                 _UINT32_(8)                                          /* (TWI_SMR) Client Address Mask Position */
#define TWI_SMR_MASK_Msk                 (_UINT32_(0x7F) << TWI_SMR_MASK_Pos)            /* (TWI_SMR) Client Address Mask Mask */
#define TWI_SMR_MASK(value)              (TWI_SMR_MASK_Msk & (_UINT32_(value) << TWI_SMR_MASK_Pos)) /* Assignment of value for MASK in the TWI_SMR register */
#define TWI_SMR_SADR_Pos                 _UINT32_(16)                                         /* (TWI_SMR) Client Address Position */
#define TWI_SMR_SADR_Msk                 (_UINT32_(0x7F) << TWI_SMR_SADR_Pos)            /* (TWI_SMR) Client Address Mask */
#define TWI_SMR_SADR(value)              (TWI_SMR_SADR_Msk & (_UINT32_(value) << TWI_SMR_SADR_Pos)) /* Assignment of value for SADR in the TWI_SMR register */
#define TWI_SMR_SADR1EN_Pos              _UINT32_(28)                                         /* (TWI_SMR) Client Address 1 Enable Position */
#define TWI_SMR_SADR1EN_Msk              (_UINT32_(0x1) << TWI_SMR_SADR1EN_Pos)          /* (TWI_SMR) Client Address 1 Enable Mask */
#define TWI_SMR_SADR1EN(value)           (TWI_SMR_SADR1EN_Msk & (_UINT32_(value) << TWI_SMR_SADR1EN_Pos)) /* Assignment of value for SADR1EN in the TWI_SMR register */
#define   TWI_SMR_SADR1EN_0_Val          _UINT32_(0x0)                                        /* (TWI_SMR) Client address 1 matching is disabled.  */
#define   TWI_SMR_SADR1EN_1_Val          _UINT32_(0x1)                                        /* (TWI_SMR) Client address 1 matching is enabled.  */
#define TWI_SMR_SADR1EN_0                (TWI_SMR_SADR1EN_0_Val << TWI_SMR_SADR1EN_Pos) /* (TWI_SMR) Client address 1 matching is disabled. Position */
#define TWI_SMR_SADR1EN_1                (TWI_SMR_SADR1EN_1_Val << TWI_SMR_SADR1EN_Pos) /* (TWI_SMR) Client address 1 matching is enabled. Position */
#define TWI_SMR_SADR2EN_Pos              _UINT32_(29)                                         /* (TWI_SMR) Client Address 2 Enable Position */
#define TWI_SMR_SADR2EN_Msk              (_UINT32_(0x1) << TWI_SMR_SADR2EN_Pos)          /* (TWI_SMR) Client Address 2 Enable Mask */
#define TWI_SMR_SADR2EN(value)           (TWI_SMR_SADR2EN_Msk & (_UINT32_(value) << TWI_SMR_SADR2EN_Pos)) /* Assignment of value for SADR2EN in the TWI_SMR register */
#define   TWI_SMR_SADR2EN_0_Val          _UINT32_(0x0)                                        /* (TWI_SMR) Client address 2 matching is disabled.  */
#define   TWI_SMR_SADR2EN_1_Val          _UINT32_(0x1)                                        /* (TWI_SMR) Client address 2 matching is enabled.  */
#define TWI_SMR_SADR2EN_0                (TWI_SMR_SADR2EN_0_Val << TWI_SMR_SADR2EN_Pos) /* (TWI_SMR) Client address 2 matching is disabled. Position */
#define TWI_SMR_SADR2EN_1                (TWI_SMR_SADR2EN_1_Val << TWI_SMR_SADR2EN_Pos) /* (TWI_SMR) Client address 2 matching is enabled. Position */
#define TWI_SMR_SADR3EN_Pos              _UINT32_(30)                                         /* (TWI_SMR) Client Address 3 Enable Position */
#define TWI_SMR_SADR3EN_Msk              (_UINT32_(0x1) << TWI_SMR_SADR3EN_Pos)          /* (TWI_SMR) Client Address 3 Enable Mask */
#define TWI_SMR_SADR3EN(value)           (TWI_SMR_SADR3EN_Msk & (_UINT32_(value) << TWI_SMR_SADR3EN_Pos)) /* Assignment of value for SADR3EN in the TWI_SMR register */
#define   TWI_SMR_SADR3EN_0_Val          _UINT32_(0x0)                                        /* (TWI_SMR) Client address 3 matching is disabled.  */
#define   TWI_SMR_SADR3EN_1_Val          _UINT32_(0x1)                                        /* (TWI_SMR) Client address 3 matching is enabled.  */
#define TWI_SMR_SADR3EN_0                (TWI_SMR_SADR3EN_0_Val << TWI_SMR_SADR3EN_Pos) /* (TWI_SMR) Client address 3 matching is disabled. Position */
#define TWI_SMR_SADR3EN_1                (TWI_SMR_SADR3EN_1_Val << TWI_SMR_SADR3EN_Pos) /* (TWI_SMR) Client address 3 matching is enabled. Position */
#define TWI_SMR_DATAMEN_Pos              _UINT32_(31)                                         /* (TWI_SMR) Data Matching Enable Position */
#define TWI_SMR_DATAMEN_Msk              (_UINT32_(0x1) << TWI_SMR_DATAMEN_Pos)          /* (TWI_SMR) Data Matching Enable Mask */
#define TWI_SMR_DATAMEN(value)           (TWI_SMR_DATAMEN_Msk & (_UINT32_(value) << TWI_SMR_DATAMEN_Pos)) /* Assignment of value for DATAMEN in the TWI_SMR register */
#define   TWI_SMR_DATAMEN_0_Val          _UINT32_(0x0)                                        /* (TWI_SMR) Data matching on first received data is disabled.  */
#define   TWI_SMR_DATAMEN_1_Val          _UINT32_(0x1)                                        /* (TWI_SMR) Data matching on first received data is enabled.  */
#define TWI_SMR_DATAMEN_0                (TWI_SMR_DATAMEN_0_Val << TWI_SMR_DATAMEN_Pos) /* (TWI_SMR) Data matching on first received data is disabled. Position */
#define TWI_SMR_DATAMEN_1                (TWI_SMR_DATAMEN_1_Val << TWI_SMR_DATAMEN_Pos) /* (TWI_SMR) Data matching on first received data is enabled. Position */
#define TWI_SMR_Msk                      _UINT32_(0xF07F7FFD)                                 /* (TWI_SMR) Register Mask  */


/* -------- TWI_IADR : (FLEXCOM Offset: 0x60C) (R/W 32) TWI Internal Address Register -------- */
#define TWI_IADR_RESETVALUE              _UINT32_(0x00)                                       /*  (TWI_IADR) TWI Internal Address Register  Reset Value */

#define TWI_IADR_IADR_Pos                _UINT32_(0)                                          /* (TWI_IADR) Internal Address Position */
#define TWI_IADR_IADR_Msk                (_UINT32_(0xFFFFFF) << TWI_IADR_IADR_Pos)       /* (TWI_IADR) Internal Address Mask */
#define TWI_IADR_IADR(value)             (TWI_IADR_IADR_Msk & (_UINT32_(value) << TWI_IADR_IADR_Pos)) /* Assignment of value for IADR in the TWI_IADR register */
#define TWI_IADR_Msk                     _UINT32_(0x00FFFFFF)                                 /* (TWI_IADR) Register Mask  */


/* -------- TWI_CWGR : (FLEXCOM Offset: 0x610) (R/W 32) TWI Clock Waveform Generator Register -------- */
#define TWI_CWGR_RESETVALUE              _UINT32_(0x00)                                       /*  (TWI_CWGR) TWI Clock Waveform Generator Register  Reset Value */

#define TWI_CWGR_CLDIV_Pos               _UINT32_(0)                                          /* (TWI_CWGR) Clock Low Divider Position */
#define TWI_CWGR_CLDIV_Msk               (_UINT32_(0xFF) << TWI_CWGR_CLDIV_Pos)          /* (TWI_CWGR) Clock Low Divider Mask */
#define TWI_CWGR_CLDIV(value)            (TWI_CWGR_CLDIV_Msk & (_UINT32_(value) << TWI_CWGR_CLDIV_Pos)) /* Assignment of value for CLDIV in the TWI_CWGR register */
#define TWI_CWGR_CHDIV_Pos               _UINT32_(8)                                          /* (TWI_CWGR) Clock High Divider Position */
#define TWI_CWGR_CHDIV_Msk               (_UINT32_(0xFF) << TWI_CWGR_CHDIV_Pos)          /* (TWI_CWGR) Clock High Divider Mask */
#define TWI_CWGR_CHDIV(value)            (TWI_CWGR_CHDIV_Msk & (_UINT32_(value) << TWI_CWGR_CHDIV_Pos)) /* Assignment of value for CHDIV in the TWI_CWGR register */
#define TWI_CWGR_CKDIV_Pos               _UINT32_(16)                                         /* (TWI_CWGR) Clock Divider Position */
#define TWI_CWGR_CKDIV_Msk               (_UINT32_(0x7) << TWI_CWGR_CKDIV_Pos)           /* (TWI_CWGR) Clock Divider Mask */
#define TWI_CWGR_CKDIV(value)            (TWI_CWGR_CKDIV_Msk & (_UINT32_(value) << TWI_CWGR_CKDIV_Pos)) /* Assignment of value for CKDIV in the TWI_CWGR register */
#define TWI_CWGR_BRSRCCLK_Pos            _UINT32_(20)                                         /* (TWI_CWGR) Bit Rate Source Clock Position */
#define TWI_CWGR_BRSRCCLK_Msk            (_UINT32_(0x1) << TWI_CWGR_BRSRCCLK_Pos)        /* (TWI_CWGR) Bit Rate Source Clock Mask */
#define TWI_CWGR_BRSRCCLK(value)         (TWI_CWGR_BRSRCCLK_Msk & (_UINT32_(value) << TWI_CWGR_BRSRCCLK_Pos)) /* Assignment of value for BRSRCCLK in the TWI_CWGR register */
#define   TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val _UINT32_(0x0)                                        /* (TWI_CWGR) The peripheral clock is the source clock for the bit rate generation.  */
#define   TWI_CWGR_BRSRCCLK_GCLK_Val     _UINT32_(0x1)                                        /* (TWI_CWGR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define TWI_CWGR_BRSRCCLK_PERIPH_CLK     (TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val << TWI_CWGR_BRSRCCLK_Pos) /* (TWI_CWGR) The peripheral clock is the source clock for the bit rate generation. Position */
#define TWI_CWGR_BRSRCCLK_GCLK           (TWI_CWGR_BRSRCCLK_GCLK_Val << TWI_CWGR_BRSRCCLK_Pos) /* (TWI_CWGR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position */
#define TWI_CWGR_HOLD_Pos                _UINT32_(24)                                         /* (TWI_CWGR) TWD Hold Time Versus TWCK Falling Position */
#define TWI_CWGR_HOLD_Msk                (_UINT32_(0x3F) << TWI_CWGR_HOLD_Pos)           /* (TWI_CWGR) TWD Hold Time Versus TWCK Falling Mask */
#define TWI_CWGR_HOLD(value)             (TWI_CWGR_HOLD_Msk & (_UINT32_(value) << TWI_CWGR_HOLD_Pos)) /* Assignment of value for HOLD in the TWI_CWGR register */
#define TWI_CWGR_Msk                     _UINT32_(0x3F17FFFF)                                 /* (TWI_CWGR) Register Mask  */


/* -------- TWI_SR : (FLEXCOM Offset: 0x620) ( R/ 32) TWI Status Register -------- */
#define TWI_SR_RESETVALUE                _UINT32_(0x3000009)                                  /*  (TWI_SR) TWI Status Register  Reset Value */

#define TWI_SR_TXCOMP_Pos                _UINT32_(0)                                          /* (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Position */
#define TWI_SR_TXCOMP_Msk                (_UINT32_(0x1) << TWI_SR_TXCOMP_Pos)            /* (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXCOMP(value)             (TWI_SR_TXCOMP_Msk & (_UINT32_(value) << TWI_SR_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the TWI_SR register */
#define   TWI_SR_TXCOMP_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) NACK used in Host mode: During the length of the current frame. NACK used in Client Read mode: As soon as a Start is detected.  */
#define   TWI_SR_TXCOMP_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) NACK used in Host mode: When both the holding register and the internal shifter are empty and STOP condition has been sent. NACK used in Client Read mode: After a Stop or a Repeated Start + an address different from SADR is detected.  */
#define TWI_SR_TXCOMP_0                  (TWI_SR_TXCOMP_0_Val << TWI_SR_TXCOMP_Pos) /* (TWI_SR) NACK used in Host mode: During the length of the current frame. NACK used in Client Read mode: As soon as a Start is detected. Position */
#define TWI_SR_TXCOMP_1                  (TWI_SR_TXCOMP_1_Val << TWI_SR_TXCOMP_Pos) /* (TWI_SR) NACK used in Host mode: When both the holding register and the internal shifter are empty and STOP condition has been sent. NACK used in Client Read mode: After a Stop or a Repeated Start + an address different from SADR is detected. Position */
#define TWI_SR_RXRDY_Pos                 _UINT32_(1)                                          /* (TWI_SR) Receive Holding Register Ready (cleared when reading TWI_RHR) Position */
#define TWI_SR_RXRDY_Msk                 (_UINT32_(0x1) << TWI_SR_RXRDY_Pos)             /* (TWI_SR) Receive Holding Register Ready (cleared when reading TWI_RHR) Mask */
#define TWI_SR_RXRDY(value)              (TWI_SR_RXRDY_Msk & (_UINT32_(value) << TWI_SR_RXRDY_Pos)) /* Assignment of value for RXRDY in the TWI_SR register */
#define   TWI_SR_RXRDY_0_Val             _UINT32_(0x0)                                        /* (TWI_SR) Receive FIFO is empty; no data to read  */
#define   TWI_SR_RXRDY_1_Val             _UINT32_(0x1)                                        /* (TWI_SR) At least one unread data is in the Receive FIFO  */
#define TWI_SR_RXRDY_0                   (TWI_SR_RXRDY_0_Val << TWI_SR_RXRDY_Pos)   /* (TWI_SR) Receive FIFO is empty; no data to read Position */
#define TWI_SR_RXRDY_1                   (TWI_SR_RXRDY_1_Val << TWI_SR_RXRDY_Pos)   /* (TWI_SR) At least one unread data is in the Receive FIFO Position */
#define TWI_SR_TXRDY_Pos                 _UINT32_(2)                                          /* (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Position */
#define TWI_SR_TXRDY_Msk                 (_UINT32_(0x1) << TWI_SR_TXRDY_Pos)             /* (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXRDY(value)              (TWI_SR_TXRDY_Msk & (_UINT32_(value) << TWI_SR_TXRDY_Pos)) /* Assignment of value for TXRDY in the TWI_SR register */
#define   TWI_SR_TXRDY_0_Val             _UINT32_(0x0)                                        /* (TWI_SR) TXRDY used in Host mode:The transmit holding register has not been transferred into the internal shifter. Set to 0 when writing into TWI_THR. TXRDY used in Client mode:As soon as data is written in TWI_THR, until this data has been transmitted and acknowledged (ACK or NACK).  */
#define   TWI_SR_TXRDY_1_Val             _UINT32_(0x1)                                        /* (TWI_SR) TXRDY used in Host mode:As soon as a data byte is transferred from TWI_THR to internal shifter or if a NACK error is detected, TXRDY is set at the same time as TXCOMP and NACK. TXRDY is also set when MSEN is set (enables TWI). TXRDY used in Client mode:Indicates that TWI_THR is empty and that data has been transmitted and acknowledged.  */
#define TWI_SR_TXRDY_0                   (TWI_SR_TXRDY_0_Val << TWI_SR_TXRDY_Pos)   /* (TWI_SR) TXRDY used in Host mode:The transmit holding register has not been transferred into the internal shifter. Set to 0 when writing into TWI_THR. TXRDY used in Client mode:As soon as data is written in TWI_THR, until this data has been transmitted and acknowledged (ACK or NACK). Position */
#define TWI_SR_TXRDY_1                   (TWI_SR_TXRDY_1_Val << TWI_SR_TXRDY_Pos)   /* (TWI_SR) TXRDY used in Host mode:As soon as a data byte is transferred from TWI_THR to internal shifter or if a NACK error is detected, TXRDY is set at the same time as TXCOMP and NACK. TXRDY is also set when MSEN is set (enables TWI). TXRDY used in Client mode:Indicates that TWI_THR is empty and that data has been transmitted and acknowledged. Position */
#define TWI_SR_SVREAD_Pos                _UINT32_(3)                                          /* (TWI_SR) Client Read Position */
#define TWI_SR_SVREAD_Msk                (_UINT32_(0x1) << TWI_SR_SVREAD_Pos)            /* (TWI_SR) Client Read Mask */
#define TWI_SR_SVREAD(value)             (TWI_SR_SVREAD_Msk & (_UINT32_(value) << TWI_SR_SVREAD_Pos)) /* Assignment of value for SVREAD in the TWI_SR register */
#define   TWI_SR_SVREAD_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) Indicates that a write access is performed by a host.  */
#define   TWI_SR_SVREAD_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) Indicates that a read access is performed by a host.  */
#define TWI_SR_SVREAD_0                  (TWI_SR_SVREAD_0_Val << TWI_SR_SVREAD_Pos) /* (TWI_SR) Indicates that a write access is performed by a host. Position */
#define TWI_SR_SVREAD_1                  (TWI_SR_SVREAD_1_Val << TWI_SR_SVREAD_Pos) /* (TWI_SR) Indicates that a read access is performed by a host. Position */
#define TWI_SR_SVACC_Pos                 _UINT32_(4)                                          /* (TWI_SR) Client Access Position */
#define TWI_SR_SVACC_Msk                 (_UINT32_(0x1) << TWI_SR_SVACC_Pos)             /* (TWI_SR) Client Access Mask */
#define TWI_SR_SVACC(value)              (TWI_SR_SVACC_Msk & (_UINT32_(value) << TWI_SR_SVACC_Pos)) /* Assignment of value for SVACC in the TWI_SR register */
#define   TWI_SR_SVACC_0_Val             _UINT32_(0x0)                                        /* (TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected.  */
#define   TWI_SR_SVACC_1_Val             _UINT32_(0x1)                                        /* (TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected.  */
#define TWI_SR_SVACC_0                   (TWI_SR_SVACC_0_Val << TWI_SR_SVACC_Pos)   /* (TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected. Position */
#define TWI_SR_SVACC_1                   (TWI_SR_SVACC_1_Val << TWI_SR_SVACC_Pos)   /* (TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected. Position */
#define TWI_SR_GACC_Pos                  _UINT32_(5)                                          /* (TWI_SR) General Call Access (cleared on read) Position */
#define TWI_SR_GACC_Msk                  (_UINT32_(0x1) << TWI_SR_GACC_Pos)              /* (TWI_SR) General Call Access (cleared on read) Mask */
#define TWI_SR_GACC(value)               (TWI_SR_GACC_Msk & (_UINT32_(value) << TWI_SR_GACC_Pos)) /* Assignment of value for GACC in the TWI_SR register */
#define   TWI_SR_GACC_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) No general call has been detected.  */
#define   TWI_SR_GACC_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes.  */
#define TWI_SR_GACC_0                    (TWI_SR_GACC_0_Val << TWI_SR_GACC_Pos)     /* (TWI_SR) No general call has been detected. Position */
#define TWI_SR_GACC_1                    (TWI_SR_GACC_1_Val << TWI_SR_GACC_Pos)     /* (TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes. Position */
#define TWI_SR_OVRE_Pos                  _UINT32_(6)                                          /* (TWI_SR) Overrun Error (cleared on read) Position */
#define TWI_SR_OVRE_Msk                  (_UINT32_(0x1) << TWI_SR_OVRE_Pos)              /* (TWI_SR) Overrun Error (cleared on read) Mask */
#define TWI_SR_OVRE(value)               (TWI_SR_OVRE_Msk & (_UINT32_(value) << TWI_SR_OVRE_Pos)) /* Assignment of value for OVRE in the TWI_SR register */
#define   TWI_SR_OVRE_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) TWI_RHR has not been loaded while RXRDY was set.  */
#define   TWI_SR_OVRE_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) TWI_RHR has been loaded while RXRDY was set. Reset by read in TWI_SR when TXCOMP is set.  */
#define TWI_SR_OVRE_0                    (TWI_SR_OVRE_0_Val << TWI_SR_OVRE_Pos)     /* (TWI_SR) TWI_RHR has not been loaded while RXRDY was set. Position */
#define TWI_SR_OVRE_1                    (TWI_SR_OVRE_1_Val << TWI_SR_OVRE_Pos)     /* (TWI_SR) TWI_RHR has been loaded while RXRDY was set. Reset by read in TWI_SR when TXCOMP is set. Position */
#define TWI_SR_UNRE_Pos                  _UINT32_(7)                                          /* (TWI_SR) Underrun Error (cleared on read) Position */
#define TWI_SR_UNRE_Msk                  (_UINT32_(0x1) << TWI_SR_UNRE_Pos)              /* (TWI_SR) Underrun Error (cleared on read) Mask */
#define TWI_SR_UNRE(value)               (TWI_SR_UNRE_Msk & (_UINT32_(value) << TWI_SR_UNRE_Pos)) /* Assignment of value for UNRE in the TWI_SR register */
#define   TWI_SR_UNRE_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) TWI_THR has been filled on time.  */
#define   TWI_SR_UNRE_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) TWI_THR has not been filled on time.  */
#define TWI_SR_UNRE_0                    (TWI_SR_UNRE_0_Val << TWI_SR_UNRE_Pos)     /* (TWI_SR) TWI_THR has been filled on time. Position */
#define TWI_SR_UNRE_1                    (TWI_SR_UNRE_1_Val << TWI_SR_UNRE_Pos)     /* (TWI_SR) TWI_THR has not been filled on time. Position */
#define TWI_SR_NACK_Pos                  _UINT32_(8)                                          /* (TWI_SR) Not Acknowledged (cleared on read) Position */
#define TWI_SR_NACK_Msk                  (_UINT32_(0x1) << TWI_SR_NACK_Pos)              /* (TWI_SR) Not Acknowledged (cleared on read) Mask */
#define TWI_SR_NACK(value)               (TWI_SR_NACK_Msk & (_UINT32_(value) << TWI_SR_NACK_Pos)) /* Assignment of value for NACK in the TWI_SR register */
#define   TWI_SR_NACK_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host.  */
#define   TWI_SR_NACK_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set, the user must not fill TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or reinitiate it.  */
#define TWI_SR_NACK_0                    (TWI_SR_NACK_0_Val << TWI_SR_NACK_Pos)     /* (TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host. Position */
#define TWI_SR_NACK_1                    (TWI_SR_NACK_1_Val << TWI_SR_NACK_Pos)     /* (TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set, the user must not fill TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or reinitiate it. Position */
#define TWI_SR_ARBLST_Pos                _UINT32_(9)                                          /* (TWI_SR) Arbitration Lost (cleared on read) Position */
#define TWI_SR_ARBLST_Msk                (_UINT32_(0x1) << TWI_SR_ARBLST_Pos)            /* (TWI_SR) Arbitration Lost (cleared on read) Mask */
#define TWI_SR_ARBLST(value)             (TWI_SR_ARBLST_Msk & (_UINT32_(value) << TWI_SR_ARBLST_Pos)) /* Assignment of value for ARBLST in the TWI_SR register */
#define   TWI_SR_ARBLST_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) Arbitration won.  */
#define   TWI_SR_ARBLST_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time.  */
#define TWI_SR_ARBLST_0                  (TWI_SR_ARBLST_0_Val << TWI_SR_ARBLST_Pos) /* (TWI_SR) Arbitration won. Position */
#define TWI_SR_ARBLST_1                  (TWI_SR_ARBLST_1_Val << TWI_SR_ARBLST_Pos) /* (TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time. Position */
#define TWI_SR_SCLWS_Pos                 _UINT32_(10)                                         /* (TWI_SR) Clock Wait State Position */
#define TWI_SR_SCLWS_Msk                 (_UINT32_(0x1) << TWI_SR_SCLWS_Pos)             /* (TWI_SR) Clock Wait State Mask */
#define TWI_SR_SCLWS(value)              (TWI_SR_SCLWS_Msk & (_UINT32_(value) << TWI_SR_SCLWS_Pos)) /* Assignment of value for SCLWS in the TWI_SR register */
#define   TWI_SR_SCLWS_0_Val             _UINT32_(0x0)                                        /* (TWI_SR) The clock is not stretched.  */
#define   TWI_SR_SCLWS_1_Val             _UINT32_(0x1)                                        /* (TWI_SR) The clock is stretched. TWI_THR / TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character.  */
#define TWI_SR_SCLWS_0                   (TWI_SR_SCLWS_0_Val << TWI_SR_SCLWS_Pos)   /* (TWI_SR) The clock is not stretched. Position */
#define TWI_SR_SCLWS_1                   (TWI_SR_SCLWS_1_Val << TWI_SR_SCLWS_Pos)   /* (TWI_SR) The clock is stretched. TWI_THR / TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character. Position */
#define TWI_SR_EOSACC_Pos                _UINT32_(11)                                         /* (TWI_SR) End Of Client Access (cleared on read) Position */
#define TWI_SR_EOSACC_Msk                (_UINT32_(0x1) << TWI_SR_EOSACC_Pos)            /* (TWI_SR) End Of Client Access (cleared on read) Mask */
#define TWI_SR_EOSACC(value)             (TWI_SR_EOSACC_Msk & (_UINT32_(value) << TWI_SR_EOSACC_Pos)) /* Assignment of value for EOSACC in the TWI_SR register */
#define   TWI_SR_EOSACC_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) A client access is being performed.  */
#define   TWI_SR_EOSACC_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset.  */
#define TWI_SR_EOSACC_0                  (TWI_SR_EOSACC_0_Val << TWI_SR_EOSACC_Pos) /* (TWI_SR) A client access is being performed. Position */
#define TWI_SR_EOSACC_1                  (TWI_SR_EOSACC_1_Val << TWI_SR_EOSACC_Pos) /* (TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset. Position */
#define TWI_SR_MCACK_Pos                 _UINT32_(16)                                         /* (TWI_SR) Host Code Acknowledge (cleared on read) Position */
#define TWI_SR_MCACK_Msk                 (_UINT32_(0x1) << TWI_SR_MCACK_Pos)             /* (TWI_SR) Host Code Acknowledge (cleared on read) Mask */
#define TWI_SR_MCACK(value)              (TWI_SR_MCACK_Msk & (_UINT32_(value) << TWI_SR_MCACK_Pos)) /* Assignment of value for MCACK in the TWI_SR register */
#define   TWI_SR_MCACK_0_Val             _UINT32_(0x0)                                        /* (TWI_SR) No host code has been received.  */
#define   TWI_SR_MCACK_1_Val             _UINT32_(0x1)                                        /* (TWI_SR) A host code has been received.  */
#define TWI_SR_MCACK_0                   (TWI_SR_MCACK_0_Val << TWI_SR_MCACK_Pos)   /* (TWI_SR) No host code has been received. Position */
#define TWI_SR_MCACK_1                   (TWI_SR_MCACK_1_Val << TWI_SR_MCACK_Pos)   /* (TWI_SR) A host code has been received. Position */
#define TWI_SR_TOUT_Pos                  _UINT32_(18)                                         /* (TWI_SR) Timeout Error (cleared on read) Position */
#define TWI_SR_TOUT_Msk                  (_UINT32_(0x1) << TWI_SR_TOUT_Pos)              /* (TWI_SR) Timeout Error (cleared on read) Mask */
#define TWI_SR_TOUT(value)               (TWI_SR_TOUT_Msk & (_UINT32_(value) << TWI_SR_TOUT_Pos)) /* Assignment of value for TOUT in the TWI_SR register */
#define   TWI_SR_TOUT_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) No SMBus timeout occurred.  */
#define   TWI_SR_TOUT_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) SMBus timeout occurred.  */
#define TWI_SR_TOUT_0                    (TWI_SR_TOUT_0_Val << TWI_SR_TOUT_Pos)     /* (TWI_SR) No SMBus timeout occurred. Position */
#define TWI_SR_TOUT_1                    (TWI_SR_TOUT_1_Val << TWI_SR_TOUT_Pos)     /* (TWI_SR) SMBus timeout occurred. Position */
#define TWI_SR_PECERR_Pos                _UINT32_(19)                                         /* (TWI_SR) PEC Error (cleared on read) Position */
#define TWI_SR_PECERR_Msk                (_UINT32_(0x1) << TWI_SR_PECERR_Pos)            /* (TWI_SR) PEC Error (cleared on read) Mask */
#define TWI_SR_PECERR(value)             (TWI_SR_PECERR_Msk & (_UINT32_(value) << TWI_SR_PECERR_Pos)) /* Assignment of value for PECERR in the TWI_SR register */
#define   TWI_SR_PECERR_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) No SMBus PEC error occurred.  */
#define   TWI_SR_PECERR_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) A SMBus PEC error occurred.  */
#define TWI_SR_PECERR_0                  (TWI_SR_PECERR_0_Val << TWI_SR_PECERR_Pos) /* (TWI_SR) No SMBus PEC error occurred. Position */
#define TWI_SR_PECERR_1                  (TWI_SR_PECERR_1_Val << TWI_SR_PECERR_Pos) /* (TWI_SR) A SMBus PEC error occurred. Position */
#define TWI_SR_SMBDAM_Pos                _UINT32_(20)                                         /* (TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define TWI_SR_SMBDAM_Msk                (_UINT32_(0x1) << TWI_SR_SMBDAM_Pos)            /* (TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWI_SR_SMBDAM(value)             (TWI_SR_SMBDAM_Msk & (_UINT32_(value) << TWI_SR_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the TWI_SR register */
#define   TWI_SR_SMBDAM_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) No SMBus Default Address received.  */
#define   TWI_SR_SMBDAM_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) A SMBus Default Address was received.  */
#define TWI_SR_SMBDAM_0                  (TWI_SR_SMBDAM_0_Val << TWI_SR_SMBDAM_Pos) /* (TWI_SR) No SMBus Default Address received. Position */
#define TWI_SR_SMBDAM_1                  (TWI_SR_SMBDAM_1_Val << TWI_SR_SMBDAM_Pos) /* (TWI_SR) A SMBus Default Address was received. Position */
#define TWI_SR_SMBHHM_Pos                _UINT32_(21)                                         /* (TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWI_SR_SMBHHM_Msk                (_UINT32_(0x1) << TWI_SR_SMBHHM_Pos)            /* (TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWI_SR_SMBHHM(value)             (TWI_SR_SMBHHM_Msk & (_UINT32_(value) << TWI_SR_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the TWI_SR register */
#define   TWI_SR_SMBHHM_0_Val            _UINT32_(0x0)                                        /* (TWI_SR) No SMBus Host Header Address received.  */
#define   TWI_SR_SMBHHM_1_Val            _UINT32_(0x1)                                        /* (TWI_SR) A SMBus Host Header Address was received.  */
#define TWI_SR_SMBHHM_0                  (TWI_SR_SMBHHM_0_Val << TWI_SR_SMBHHM_Pos) /* (TWI_SR) No SMBus Host Header Address received. Position */
#define TWI_SR_SMBHHM_1                  (TWI_SR_SMBHHM_1_Val << TWI_SR_SMBHHM_Pos) /* (TWI_SR) A SMBus Host Header Address was received. Position */
#define TWI_SR_LOCK_Pos                  _UINT32_(23)                                         /* (TWI_SR) TWI Lock Due to Frame Errors Position */
#define TWI_SR_LOCK_Msk                  (_UINT32_(0x1) << TWI_SR_LOCK_Pos)              /* (TWI_SR) TWI Lock Due to Frame Errors Mask */
#define TWI_SR_LOCK(value)               (TWI_SR_LOCK_Msk & (_UINT32_(value) << TWI_SR_LOCK_Pos)) /* Assignment of value for LOCK in the TWI_SR register */
#define   TWI_SR_LOCK_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) The TWI is not locked.  */
#define   TWI_SR_LOCK_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) The TWI is locked due to frame errors (see Section 10.3.14 "Handling Errors in Alternative Command" and Section 10.6 "TWI FIFOs").  */
#define TWI_SR_LOCK_0                    (TWI_SR_LOCK_0_Val << TWI_SR_LOCK_Pos)     /* (TWI_SR) The TWI is not locked. Position */
#define TWI_SR_LOCK_1                    (TWI_SR_LOCK_1_Val << TWI_SR_LOCK_Pos)     /* (TWI_SR) The TWI is locked due to frame errors (see Section 10.3.14 "Handling Errors in Alternative Command" and Section 10.6 "TWI FIFOs"). Position */
#define TWI_SR_SCL_Pos                   _UINT32_(24)                                         /* (TWI_SR) SCL Line Value Position */
#define TWI_SR_SCL_Msk                   (_UINT32_(0x1) << TWI_SR_SCL_Pos)               /* (TWI_SR) SCL Line Value Mask */
#define TWI_SR_SCL(value)                (TWI_SR_SCL_Msk & (_UINT32_(value) << TWI_SR_SCL_Pos)) /* Assignment of value for SCL in the TWI_SR register */
#define   TWI_SR_SCL_0_Val               _UINT32_(0x0)                                        /* (TWI_SR) SCL line sampled value is '0'.  */
#define   TWI_SR_SCL_1_Val               _UINT32_(0x1)                                        /* (TWI_SR) SCL line sampled value is '1.'  */
#define TWI_SR_SCL_0                     (TWI_SR_SCL_0_Val << TWI_SR_SCL_Pos)       /* (TWI_SR) SCL line sampled value is '0'. Position */
#define TWI_SR_SCL_1                     (TWI_SR_SCL_1_Val << TWI_SR_SCL_Pos)       /* (TWI_SR) SCL line sampled value is '1.' Position */
#define TWI_SR_SDA_Pos                   _UINT32_(25)                                         /* (TWI_SR) SDA Line Value Position */
#define TWI_SR_SDA_Msk                   (_UINT32_(0x1) << TWI_SR_SDA_Pos)               /* (TWI_SR) SDA Line Value Mask */
#define TWI_SR_SDA(value)                (TWI_SR_SDA_Msk & (_UINT32_(value) << TWI_SR_SDA_Pos)) /* Assignment of value for SDA in the TWI_SR register */
#define   TWI_SR_SDA_0_Val               _UINT32_(0x0)                                        /* (TWI_SR) SDA line sampled value is '0'.  */
#define   TWI_SR_SDA_1_Val               _UINT32_(0x1)                                        /* (TWI_SR) SDA line sampled value is '1'.  */
#define TWI_SR_SDA_0                     (TWI_SR_SDA_0_Val << TWI_SR_SDA_Pos)       /* (TWI_SR) SDA line sampled value is '0'. Position */
#define TWI_SR_SDA_1                     (TWI_SR_SDA_1_Val << TWI_SR_SDA_Pos)       /* (TWI_SR) SDA line sampled value is '1'. Position */
#define TWI_SR_SR_Pos                    _UINT32_(26)                                         /* (TWI_SR) Start Repeated Position */
#define TWI_SR_SR_Msk                    (_UINT32_(0x1) << TWI_SR_SR_Pos)                /* (TWI_SR) Start Repeated Mask */
#define TWI_SR_SR(value)                 (TWI_SR_SR_Msk & (_UINT32_(value) << TWI_SR_SR_Pos)) /* Assignment of value for SR in the TWI_SR register */
#define   TWI_SR_SR_0_Val                _UINT32_(0x0)                                        /* (TWI_SR) No repeated start has been detected since last TWI_SR read.  */
#define   TWI_SR_SR_1_Val                _UINT32_(0x1)                                        /* (TWI_SR) At least one repeated start has been detected since last TWI_SR read.  */
#define TWI_SR_SR_0                      (TWI_SR_SR_0_Val << TWI_SR_SR_Pos)         /* (TWI_SR) No repeated start has been detected since last TWI_SR read. Position */
#define TWI_SR_SR_1                      (TWI_SR_SR_1_Val << TWI_SR_SR_Pos)         /* (TWI_SR) At least one repeated start has been detected since last TWI_SR read. Position */
#define TWI_SR_SECE_Pos                  _UINT32_(28)                                         /* (TWI_SR) Security/Safety Error (cleared on read) Position */
#define TWI_SR_SECE_Msk                  (_UINT32_(0x1) << TWI_SR_SECE_Pos)              /* (TWI_SR) Security/Safety Error (cleared on read) Mask */
#define TWI_SR_SECE(value)               (TWI_SR_SECE_Msk & (_UINT32_(value) << TWI_SR_SECE_Pos)) /* Assignment of value for SECE in the TWI_SR register */
#define   TWI_SR_SECE_0_Val              _UINT32_(0x0)                                        /* (TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of TWI_SR.  */
#define   TWI_SR_SECE_1_Val              _UINT32_(0x1)                                        /* (TWI_SR) An error has been detected on TWD and/or TWCK pad output (TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (TWI_WPSR.WPVS=1) since the last read of TWI_SR.  */
#define TWI_SR_SECE_0                    (TWI_SR_SECE_0_Val << TWI_SR_SECE_Pos)     /* (TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of TWI_SR. Position */
#define TWI_SR_SECE_1                    (TWI_SR_SECE_1_Val << TWI_SR_SECE_Pos)     /* (TWI_SR) An error has been detected on TWD and/or TWCK pad output (TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (TWI_WPSR.WPVS=1) since the last read of TWI_SR. Position */
#define TWI_SR_Msk                       _UINT32_(0x17BD0FFF)                                 /* (TWI_SR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWI_SR_FIFO_ENABLED_TXCOMP_Pos   _UINT32_(0)                                          /* (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Position */
#define TWI_SR_FIFO_ENABLED_TXCOMP_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_TXCOMP_Pos) /* (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Mask */
#define TWI_SR_FIFO_ENABLED_TXCOMP(value) (TWI_SR_FIFO_ENABLED_TXCOMP_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_TXCOMP_Pos))
#define   TWI_SR_FIFO_ENABLED_TXCOMP_0_Val _UINT32_(0x0)                                        /* (TWI_SR) TXCOMP used in Host mode:During the length of the current frame. TXCOMP used in Client mode:As soon as a Start is detected.  */
#define   TWI_SR_FIFO_ENABLED_TXCOMP_1_Val _UINT32_(0x1)                                        /* (TWI_SR) TXCOMP used in Host mode:When both holding register and internal shifter are empty and STOP condition has been sent. TXCOMP used in Client mode:After a Stop or a Repeated Start + an address different from SADR is detected.  */
#define TWI_SR_FIFO_ENABLED_TXCOMP_0     (TWI_SR_FIFO_ENABLED_TXCOMP_0_Val << TWI_SR_FIFO_ENABLED_TXCOMP_Pos) /* (TWI_SR) TXCOMP used in Host mode:During the length of the current frame. TXCOMP used in Client mode:As soon as a Start is detected. Position */
#define TWI_SR_FIFO_ENABLED_TXCOMP_1     (TWI_SR_FIFO_ENABLED_TXCOMP_1_Val << TWI_SR_FIFO_ENABLED_TXCOMP_Pos) /* (TWI_SR) TXCOMP used in Host mode:When both holding register and internal shifter are empty and STOP condition has been sent. TXCOMP used in Client mode:After a Stop or a Repeated Start + an address different from SADR is detected. Position */
#define TWI_SR_FIFO_ENABLED_RXRDY_Pos    _UINT32_(1)                                          /* (TWI_SR) Receive Holding Register Ready (cleared when reading TWI_RHR) Position */
#define TWI_SR_FIFO_ENABLED_RXRDY_Msk    (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_RXRDY_Pos) /* (TWI_SR) Receive Holding Register Ready (cleared when reading TWI_RHR) Mask */
#define TWI_SR_FIFO_ENABLED_RXRDY(value) (TWI_SR_FIFO_ENABLED_RXRDY_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_RXRDY_Pos))
#define   TWI_SR_FIFO_ENABLED_RXRDY_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No character has been received since the last TWI_RHR read operation.  */
#define   TWI_SR_FIFO_ENABLED_RXRDY_1_Val _UINT32_(0x1)                                        /* (TWI_SR) A byte has been received in TWI_RHR since the last read.  */
#define TWI_SR_FIFO_ENABLED_RXRDY_0      (TWI_SR_FIFO_ENABLED_RXRDY_0_Val << TWI_SR_FIFO_ENABLED_RXRDY_Pos) /* (TWI_SR) No character has been received since the last TWI_RHR read operation. Position */
#define TWI_SR_FIFO_ENABLED_RXRDY_1      (TWI_SR_FIFO_ENABLED_RXRDY_1_Val << TWI_SR_FIFO_ENABLED_RXRDY_Pos) /* (TWI_SR) A byte has been received in TWI_RHR since the last read. Position */
#define TWI_SR_FIFO_ENABLED_TXRDY_Pos    _UINT32_(2)                                          /* (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Position */
#define TWI_SR_FIFO_ENABLED_TXRDY_Msk    (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_TXRDY_Pos) /* (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Mask */
#define TWI_SR_FIFO_ENABLED_TXRDY(value) (TWI_SR_FIFO_ENABLED_TXRDY_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_TXRDY_Pos))
#define   TWI_SR_FIFO_ENABLED_TXRDY_0_Val _UINT32_(0x0)                                        /* (TWI_SR) Transmit FIFO is full and cannot accept more data.  */
#define   TWI_SR_FIFO_ENABLED_TXRDY_1_Val _UINT32_(0x1)                                        /* (TWI_SR) Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration.  */
#define TWI_SR_FIFO_ENABLED_TXRDY_0      (TWI_SR_FIFO_ENABLED_TXRDY_0_Val << TWI_SR_FIFO_ENABLED_TXRDY_Pos) /* (TWI_SR) Transmit FIFO is full and cannot accept more data. Position */
#define TWI_SR_FIFO_ENABLED_TXRDY_1      (TWI_SR_FIFO_ENABLED_TXRDY_1_Val << TWI_SR_FIFO_ENABLED_TXRDY_Pos) /* (TWI_SR) Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration. Position */
#define TWI_SR_FIFO_ENABLED_SVREAD_Pos   _UINT32_(3)                                          /* (TWI_SR) Client Read Position */
#define TWI_SR_FIFO_ENABLED_SVREAD_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SVREAD_Pos) /* (TWI_SR) Client Read Mask */
#define TWI_SR_FIFO_ENABLED_SVREAD(value) (TWI_SR_FIFO_ENABLED_SVREAD_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SVREAD_Pos))
#define   TWI_SR_FIFO_ENABLED_SVREAD_0_Val _UINT32_(0x0)                                        /* (TWI_SR) Indicates that a write access is performed by a host.  */
#define   TWI_SR_FIFO_ENABLED_SVREAD_1_Val _UINT32_(0x1)                                        /* (TWI_SR) Indicates that a read access is performed by a host.  */
#define TWI_SR_FIFO_ENABLED_SVREAD_0     (TWI_SR_FIFO_ENABLED_SVREAD_0_Val << TWI_SR_FIFO_ENABLED_SVREAD_Pos) /* (TWI_SR) Indicates that a write access is performed by a host. Position */
#define TWI_SR_FIFO_ENABLED_SVREAD_1     (TWI_SR_FIFO_ENABLED_SVREAD_1_Val << TWI_SR_FIFO_ENABLED_SVREAD_Pos) /* (TWI_SR) Indicates that a read access is performed by a host. Position */
#define TWI_SR_FIFO_ENABLED_SVACC_Pos    _UINT32_(4)                                          /* (TWI_SR) Client Access Position */
#define TWI_SR_FIFO_ENABLED_SVACC_Msk    (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SVACC_Pos) /* (TWI_SR) Client Access Mask */
#define TWI_SR_FIFO_ENABLED_SVACC(value) (TWI_SR_FIFO_ENABLED_SVACC_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SVACC_Pos))
#define   TWI_SR_FIFO_ENABLED_SVACC_0_Val _UINT32_(0x0)                                        /* (TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected.  */
#define   TWI_SR_FIFO_ENABLED_SVACC_1_Val _UINT32_(0x1)                                        /* (TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected.  */
#define TWI_SR_FIFO_ENABLED_SVACC_0      (TWI_SR_FIFO_ENABLED_SVACC_0_Val << TWI_SR_FIFO_ENABLED_SVACC_Pos) /* (TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected. Position */
#define TWI_SR_FIFO_ENABLED_SVACC_1      (TWI_SR_FIFO_ENABLED_SVACC_1_Val << TWI_SR_FIFO_ENABLED_SVACC_Pos) /* (TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected. Position */
#define TWI_SR_FIFO_ENABLED_GACC_Pos     _UINT32_(5)                                          /* (TWI_SR) General Call Access (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_GACC_Msk     (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_GACC_Pos) /* (TWI_SR) General Call Access (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_GACC(value)  (TWI_SR_FIFO_ENABLED_GACC_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_GACC_Pos))
#define   TWI_SR_FIFO_ENABLED_GACC_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No general call has been detected.  */
#define   TWI_SR_FIFO_ENABLED_GACC_1_Val _UINT32_(0x1)                                        /* (TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes.  */
#define TWI_SR_FIFO_ENABLED_GACC_0       (TWI_SR_FIFO_ENABLED_GACC_0_Val << TWI_SR_FIFO_ENABLED_GACC_Pos) /* (TWI_SR) No general call has been detected. Position */
#define TWI_SR_FIFO_ENABLED_GACC_1       (TWI_SR_FIFO_ENABLED_GACC_1_Val << TWI_SR_FIFO_ENABLED_GACC_Pos) /* (TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes. Position */
#define TWI_SR_FIFO_ENABLED_OVRE_Pos     _UINT32_(6)                                          /* (TWI_SR) Overrun Error (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_OVRE_Msk     (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_OVRE_Pos) /* (TWI_SR) Overrun Error (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_OVRE(value)  (TWI_SR_FIFO_ENABLED_OVRE_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_OVRE_Pos))
#define   TWI_SR_FIFO_ENABLED_OVRE_0_Val _UINT32_(0x0)                                        /* (TWI_SR) TWI_RHR has not been loaded while RXRDY was set.  */
#define   TWI_SR_FIFO_ENABLED_OVRE_1_Val _UINT32_(0x1)                                        /* (TWI_SR) TWI_RHR has been loaded while RXRDY was set. Reset by read in TWI_SR when TXCOMP is set.  */
#define TWI_SR_FIFO_ENABLED_OVRE_0       (TWI_SR_FIFO_ENABLED_OVRE_0_Val << TWI_SR_FIFO_ENABLED_OVRE_Pos) /* (TWI_SR) TWI_RHR has not been loaded while RXRDY was set. Position */
#define TWI_SR_FIFO_ENABLED_OVRE_1       (TWI_SR_FIFO_ENABLED_OVRE_1_Val << TWI_SR_FIFO_ENABLED_OVRE_Pos) /* (TWI_SR) TWI_RHR has been loaded while RXRDY was set. Reset by read in TWI_SR when TXCOMP is set. Position */
#define TWI_SR_FIFO_ENABLED_UNRE_Pos     _UINT32_(7)                                          /* (TWI_SR) Underrun Error (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_UNRE_Msk     (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_UNRE_Pos) /* (TWI_SR) Underrun Error (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_UNRE(value)  (TWI_SR_FIFO_ENABLED_UNRE_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_UNRE_Pos))
#define   TWI_SR_FIFO_ENABLED_UNRE_0_Val _UINT32_(0x0)                                        /* (TWI_SR) TWI_THR has been filled on time.  */
#define   TWI_SR_FIFO_ENABLED_UNRE_1_Val _UINT32_(0x1)                                        /* (TWI_SR) TWI_THR has not been filled on time.  */
#define TWI_SR_FIFO_ENABLED_UNRE_0       (TWI_SR_FIFO_ENABLED_UNRE_0_Val << TWI_SR_FIFO_ENABLED_UNRE_Pos) /* (TWI_SR) TWI_THR has been filled on time. Position */
#define TWI_SR_FIFO_ENABLED_UNRE_1       (TWI_SR_FIFO_ENABLED_UNRE_1_Val << TWI_SR_FIFO_ENABLED_UNRE_Pos) /* (TWI_SR) TWI_THR has not been filled on time. Position */
#define TWI_SR_FIFO_ENABLED_NACK_Pos     _UINT32_(8)                                          /* (TWI_SR) Not Acknowledged (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_NACK_Msk     (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_NACK_Pos) /* (TWI_SR) Not Acknowledged (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_NACK(value)  (TWI_SR_FIFO_ENABLED_NACK_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_NACK_Pos))
#define   TWI_SR_FIFO_ENABLED_NACK_0_Val _UINT32_(0x0)                                        /* (TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host.  */
#define   TWI_SR_FIFO_ENABLED_NACK_1_Val _UINT32_(0x1)                                        /* (TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set the user must not fill TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or re initiate it.  */
#define TWI_SR_FIFO_ENABLED_NACK_0       (TWI_SR_FIFO_ENABLED_NACK_0_Val << TWI_SR_FIFO_ENABLED_NACK_Pos) /* (TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host. Position */
#define TWI_SR_FIFO_ENABLED_NACK_1       (TWI_SR_FIFO_ENABLED_NACK_1_Val << TWI_SR_FIFO_ENABLED_NACK_Pos) /* (TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set the user must not fill TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or re initiate it. Position */
#define TWI_SR_FIFO_ENABLED_ARBLST_Pos   _UINT32_(9)                                          /* (TWI_SR) Arbitration Lost (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_ARBLST_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_ARBLST_Pos) /* (TWI_SR) Arbitration Lost (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_ARBLST(value) (TWI_SR_FIFO_ENABLED_ARBLST_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_ARBLST_Pos))
#define   TWI_SR_FIFO_ENABLED_ARBLST_0_Val _UINT32_(0x0)                                        /* (TWI_SR) Arbitration won.  */
#define   TWI_SR_FIFO_ENABLED_ARBLST_1_Val _UINT32_(0x1)                                        /* (TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time.  */
#define TWI_SR_FIFO_ENABLED_ARBLST_0     (TWI_SR_FIFO_ENABLED_ARBLST_0_Val << TWI_SR_FIFO_ENABLED_ARBLST_Pos) /* (TWI_SR) Arbitration won. Position */
#define TWI_SR_FIFO_ENABLED_ARBLST_1     (TWI_SR_FIFO_ENABLED_ARBLST_1_Val << TWI_SR_FIFO_ENABLED_ARBLST_Pos) /* (TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time. Position */
#define TWI_SR_FIFO_ENABLED_SCLWS_Pos    _UINT32_(10)                                         /* (TWI_SR) Clock Wait State Position */
#define TWI_SR_FIFO_ENABLED_SCLWS_Msk    (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SCLWS_Pos) /* (TWI_SR) Clock Wait State Mask */
#define TWI_SR_FIFO_ENABLED_SCLWS(value) (TWI_SR_FIFO_ENABLED_SCLWS_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SCLWS_Pos))
#define   TWI_SR_FIFO_ENABLED_SCLWS_0_Val _UINT32_(0x0)                                        /* (TWI_SR) The clock is not stretched.  */
#define   TWI_SR_FIFO_ENABLED_SCLWS_1_Val _UINT32_(0x1)                                        /* (TWI_SR) The clock is stretched. TWI_THR / TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character.  */
#define TWI_SR_FIFO_ENABLED_SCLWS_0      (TWI_SR_FIFO_ENABLED_SCLWS_0_Val << TWI_SR_FIFO_ENABLED_SCLWS_Pos) /* (TWI_SR) The clock is not stretched. Position */
#define TWI_SR_FIFO_ENABLED_SCLWS_1      (TWI_SR_FIFO_ENABLED_SCLWS_1_Val << TWI_SR_FIFO_ENABLED_SCLWS_Pos) /* (TWI_SR) The clock is stretched. TWI_THR / TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character. Position */
#define TWI_SR_FIFO_ENABLED_EOSACC_Pos   _UINT32_(11)                                         /* (TWI_SR) End Of Client Access (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_EOSACC_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_EOSACC_Pos) /* (TWI_SR) End Of Client Access (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_EOSACC(value) (TWI_SR_FIFO_ENABLED_EOSACC_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_EOSACC_Pos))
#define   TWI_SR_FIFO_ENABLED_EOSACC_0_Val _UINT32_(0x0)                                        /* (TWI_SR) A client access is being performed.  */
#define   TWI_SR_FIFO_ENABLED_EOSACC_1_Val _UINT32_(0x1)                                        /* (TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset.  */
#define TWI_SR_FIFO_ENABLED_EOSACC_0     (TWI_SR_FIFO_ENABLED_EOSACC_0_Val << TWI_SR_FIFO_ENABLED_EOSACC_Pos) /* (TWI_SR) A client access is being performed. Position */
#define TWI_SR_FIFO_ENABLED_EOSACC_1     (TWI_SR_FIFO_ENABLED_EOSACC_1_Val << TWI_SR_FIFO_ENABLED_EOSACC_Pos) /* (TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset. Position */
#define TWI_SR_FIFO_ENABLED_MCACK_Pos    _UINT32_(16)                                         /* (TWI_SR) Host Code Acknowledge (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_MCACK_Msk    (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_MCACK_Pos) /* (TWI_SR) Host Code Acknowledge (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_MCACK(value) (TWI_SR_FIFO_ENABLED_MCACK_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_MCACK_Pos))
#define   TWI_SR_FIFO_ENABLED_MCACK_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No host code has been received.  */
#define   TWI_SR_FIFO_ENABLED_MCACK_1_Val _UINT32_(0x1)                                        /* (TWI_SR) A host code has been received.  */
#define TWI_SR_FIFO_ENABLED_MCACK_0      (TWI_SR_FIFO_ENABLED_MCACK_0_Val << TWI_SR_FIFO_ENABLED_MCACK_Pos) /* (TWI_SR) No host code has been received. Position */
#define TWI_SR_FIFO_ENABLED_MCACK_1      (TWI_SR_FIFO_ENABLED_MCACK_1_Val << TWI_SR_FIFO_ENABLED_MCACK_Pos) /* (TWI_SR) A host code has been received. Position */
#define TWI_SR_FIFO_ENABLED_TOUT_Pos     _UINT32_(18)                                         /* (TWI_SR) Timeout Error (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_TOUT_Msk     (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_TOUT_Pos) /* (TWI_SR) Timeout Error (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_TOUT(value)  (TWI_SR_FIFO_ENABLED_TOUT_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_TOUT_Pos))
#define   TWI_SR_FIFO_ENABLED_TOUT_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No SMBus timeout occurred.  */
#define   TWI_SR_FIFO_ENABLED_TOUT_1_Val _UINT32_(0x1)                                        /* (TWI_SR) SMBus timeout occurred.  */
#define TWI_SR_FIFO_ENABLED_TOUT_0       (TWI_SR_FIFO_ENABLED_TOUT_0_Val << TWI_SR_FIFO_ENABLED_TOUT_Pos) /* (TWI_SR) No SMBus timeout occurred. Position */
#define TWI_SR_FIFO_ENABLED_TOUT_1       (TWI_SR_FIFO_ENABLED_TOUT_1_Val << TWI_SR_FIFO_ENABLED_TOUT_Pos) /* (TWI_SR) SMBus timeout occurred. Position */
#define TWI_SR_FIFO_ENABLED_PECERR_Pos   _UINT32_(19)                                         /* (TWI_SR) PEC Error (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_PECERR_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_PECERR_Pos) /* (TWI_SR) PEC Error (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_PECERR(value) (TWI_SR_FIFO_ENABLED_PECERR_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_PECERR_Pos))
#define   TWI_SR_FIFO_ENABLED_PECERR_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No SMBus PEC error occurred.  */
#define   TWI_SR_FIFO_ENABLED_PECERR_1_Val _UINT32_(0x1)                                        /* (TWI_SR) A SMBus PEC error occurred.  */
#define TWI_SR_FIFO_ENABLED_PECERR_0     (TWI_SR_FIFO_ENABLED_PECERR_0_Val << TWI_SR_FIFO_ENABLED_PECERR_Pos) /* (TWI_SR) No SMBus PEC error occurred. Position */
#define TWI_SR_FIFO_ENABLED_PECERR_1     (TWI_SR_FIFO_ENABLED_PECERR_1_Val << TWI_SR_FIFO_ENABLED_PECERR_Pos) /* (TWI_SR) A SMBus PEC error occurred. Position */
#define TWI_SR_FIFO_ENABLED_SMBDAM_Pos   _UINT32_(20)                                         /* (TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_SMBDAM_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SMBDAM_Pos) /* (TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_SMBDAM(value) (TWI_SR_FIFO_ENABLED_SMBDAM_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SMBDAM_Pos))
#define   TWI_SR_FIFO_ENABLED_SMBDAM_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No SMBus Default Address received.  */
#define   TWI_SR_FIFO_ENABLED_SMBDAM_1_Val _UINT32_(0x1)                                        /* (TWI_SR) A SMBus Default Address was received.  */
#define TWI_SR_FIFO_ENABLED_SMBDAM_0     (TWI_SR_FIFO_ENABLED_SMBDAM_0_Val << TWI_SR_FIFO_ENABLED_SMBDAM_Pos) /* (TWI_SR) No SMBus Default Address received. Position */
#define TWI_SR_FIFO_ENABLED_SMBDAM_1     (TWI_SR_FIFO_ENABLED_SMBDAM_1_Val << TWI_SR_FIFO_ENABLED_SMBDAM_Pos) /* (TWI_SR) A SMBus Default Address was received. Position */
#define TWI_SR_FIFO_ENABLED_SMBHHM_Pos   _UINT32_(21)                                         /* (TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_SMBHHM_Msk   (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SMBHHM_Pos) /* (TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_SMBHHM(value) (TWI_SR_FIFO_ENABLED_SMBHHM_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SMBHHM_Pos))
#define   TWI_SR_FIFO_ENABLED_SMBHHM_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No SMBus Host Header Address received.  */
#define   TWI_SR_FIFO_ENABLED_SMBHHM_1_Val _UINT32_(0x1)                                        /* (TWI_SR) A SMBus Host Header Address was received.  */
#define TWI_SR_FIFO_ENABLED_SMBHHM_0     (TWI_SR_FIFO_ENABLED_SMBHHM_0_Val << TWI_SR_FIFO_ENABLED_SMBHHM_Pos) /* (TWI_SR) No SMBus Host Header Address received. Position */
#define TWI_SR_FIFO_ENABLED_SMBHHM_1     (TWI_SR_FIFO_ENABLED_SMBHHM_1_Val << TWI_SR_FIFO_ENABLED_SMBHHM_Pos) /* (TWI_SR) A SMBus Host Header Address was received. Position */
#define TWI_SR_FIFO_ENABLED_TXFLOCK_Pos  _UINT32_(23)                                         /* (TWI_SR) Transmit FIFO Lock Position */
#define TWI_SR_FIFO_ENABLED_TXFLOCK_Msk  (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_TXFLOCK_Pos) /* (TWI_SR) Transmit FIFO Lock Mask */
#define TWI_SR_FIFO_ENABLED_TXFLOCK(value) (TWI_SR_FIFO_ENABLED_TXFLOCK_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_TXFLOCK_Pos))
#define   TWI_SR_FIFO_ENABLED_TXFLOCK_0_Val _UINT32_(0x0)                                        /* (TWI_SR) The Transmit FIFO is not locked.  */
#define   TWI_SR_FIFO_ENABLED_TXFLOCK_1_Val _UINT32_(0x1)                                        /* (TWI_SR) The Transmit FIFO is locked.  */
#define TWI_SR_FIFO_ENABLED_TXFLOCK_0    (TWI_SR_FIFO_ENABLED_TXFLOCK_0_Val << TWI_SR_FIFO_ENABLED_TXFLOCK_Pos) /* (TWI_SR) The Transmit FIFO is not locked. Position */
#define TWI_SR_FIFO_ENABLED_TXFLOCK_1    (TWI_SR_FIFO_ENABLED_TXFLOCK_1_Val << TWI_SR_FIFO_ENABLED_TXFLOCK_Pos) /* (TWI_SR) The Transmit FIFO is locked. Position */
#define TWI_SR_FIFO_ENABLED_SCL_Pos      _UINT32_(24)                                         /* (TWI_SR) SCL Line Value Position */
#define TWI_SR_FIFO_ENABLED_SCL_Msk      (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SCL_Pos)  /* (TWI_SR) SCL Line Value Mask */
#define TWI_SR_FIFO_ENABLED_SCL(value)   (TWI_SR_FIFO_ENABLED_SCL_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SCL_Pos))
#define   TWI_SR_FIFO_ENABLED_SCL_0_Val  _UINT32_(0x0)                                        /* (TWI_SR) SCL line sampled value is '0'.  */
#define   TWI_SR_FIFO_ENABLED_SCL_1_Val  _UINT32_(0x1)                                        /* (TWI_SR) SCL line sampled value is '1.'  */
#define TWI_SR_FIFO_ENABLED_SCL_0        (TWI_SR_FIFO_ENABLED_SCL_0_Val << TWI_SR_FIFO_ENABLED_SCL_Pos) /* (TWI_SR) SCL line sampled value is '0'. Position */
#define TWI_SR_FIFO_ENABLED_SCL_1        (TWI_SR_FIFO_ENABLED_SCL_1_Val << TWI_SR_FIFO_ENABLED_SCL_Pos) /* (TWI_SR) SCL line sampled value is '1.' Position */
#define TWI_SR_FIFO_ENABLED_SDA_Pos      _UINT32_(25)                                         /* (TWI_SR) SDA Line Value Position */
#define TWI_SR_FIFO_ENABLED_SDA_Msk      (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SDA_Pos)  /* (TWI_SR) SDA Line Value Mask */
#define TWI_SR_FIFO_ENABLED_SDA(value)   (TWI_SR_FIFO_ENABLED_SDA_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SDA_Pos))
#define   TWI_SR_FIFO_ENABLED_SDA_0_Val  _UINT32_(0x0)                                        /* (TWI_SR) SDA line sampled value is '0'.  */
#define   TWI_SR_FIFO_ENABLED_SDA_1_Val  _UINT32_(0x1)                                        /* (TWI_SR) SDA line sampled value is '1'.  */
#define TWI_SR_FIFO_ENABLED_SDA_0        (TWI_SR_FIFO_ENABLED_SDA_0_Val << TWI_SR_FIFO_ENABLED_SDA_Pos) /* (TWI_SR) SDA line sampled value is '0'. Position */
#define TWI_SR_FIFO_ENABLED_SDA_1        (TWI_SR_FIFO_ENABLED_SDA_1_Val << TWI_SR_FIFO_ENABLED_SDA_Pos) /* (TWI_SR) SDA line sampled value is '1'. Position */
#define TWI_SR_FIFO_ENABLED_SR_Pos       _UINT32_(26)                                         /* (TWI_SR) Start Repeated Position */
#define TWI_SR_FIFO_ENABLED_SR_Msk       (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SR_Pos)   /* (TWI_SR) Start Repeated Mask */
#define TWI_SR_FIFO_ENABLED_SR(value)    (TWI_SR_FIFO_ENABLED_SR_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SR_Pos))
#define   TWI_SR_FIFO_ENABLED_SR_0_Val   _UINT32_(0x0)                                        /* (TWI_SR) No repeated start has been detected since last TWI_SR read.  */
#define   TWI_SR_FIFO_ENABLED_SR_1_Val   _UINT32_(0x1)                                        /* (TWI_SR) At least one repeated start has been detected since last TWI_SR read.  */
#define TWI_SR_FIFO_ENABLED_SR_0         (TWI_SR_FIFO_ENABLED_SR_0_Val << TWI_SR_FIFO_ENABLED_SR_Pos) /* (TWI_SR) No repeated start has been detected since last TWI_SR read. Position */
#define TWI_SR_FIFO_ENABLED_SR_1         (TWI_SR_FIFO_ENABLED_SR_1_Val << TWI_SR_FIFO_ENABLED_SR_Pos) /* (TWI_SR) At least one repeated start has been detected since last TWI_SR read. Position */
#define TWI_SR_FIFO_ENABLED_SECE_Pos     _UINT32_(28)                                         /* (TWI_SR) Security/Safety Error (cleared on read) Position */
#define TWI_SR_FIFO_ENABLED_SECE_Msk     (_UINT32_(0x1) << TWI_SR_FIFO_ENABLED_SECE_Pos) /* (TWI_SR) Security/Safety Error (cleared on read) Mask */
#define TWI_SR_FIFO_ENABLED_SECE(value)  (TWI_SR_FIFO_ENABLED_SECE_Msk & (_UINT32_(value) << TWI_SR_FIFO_ENABLED_SECE_Pos))
#define   TWI_SR_FIFO_ENABLED_SECE_0_Val _UINT32_(0x0)                                        /* (TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of TWI_SR.  */
#define   TWI_SR_FIFO_ENABLED_SECE_1_Val _UINT32_(0x1)                                        /* (TWI_SR) An error has been detected on TWD and/or TWCK pad output (TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (TWI_WPSR.WPVS=1) since the last read of TWI_SR.  */
#define TWI_SR_FIFO_ENABLED_SECE_0       (TWI_SR_FIFO_ENABLED_SECE_0_Val << TWI_SR_FIFO_ENABLED_SECE_Pos) /* (TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of TWI_SR. Position */
#define TWI_SR_FIFO_ENABLED_SECE_1       (TWI_SR_FIFO_ENABLED_SECE_1_Val << TWI_SR_FIFO_ENABLED_SECE_Pos) /* (TWI_SR) An error has been detected on TWD and/or TWCK pad output (TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (TWI_WPSR.WPVS=1) since the last read of TWI_SR. Position */
#define TWI_SR_FIFO_ENABLED_Msk          _UINT32_(0x17BD0FFF)                                 /* (TWI_SR_FIFO_ENABLED) Register Mask  */


/* -------- TWI_IER : (FLEXCOM Offset: 0x624) ( /W 32) TWI Interrupt Enable Register -------- */
#define TWI_IER_TXCOMP_Pos               _UINT32_(0)                                          /* (TWI_IER) Transmission Completed Interrupt Enable Position */
#define TWI_IER_TXCOMP_Msk               (_UINT32_(0x1) << TWI_IER_TXCOMP_Pos)           /* (TWI_IER) Transmission Completed Interrupt Enable Mask */
#define TWI_IER_TXCOMP(value)            (TWI_IER_TXCOMP_Msk & (_UINT32_(value) << TWI_IER_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the TWI_IER register */
#define TWI_IER_RXRDY_Pos                _UINT32_(1)                                          /* (TWI_IER) Receive Holding Register Ready Interrupt Enable Position */
#define TWI_IER_RXRDY_Msk                (_UINT32_(0x1) << TWI_IER_RXRDY_Pos)            /* (TWI_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_RXRDY(value)             (TWI_IER_RXRDY_Msk & (_UINT32_(value) << TWI_IER_RXRDY_Pos)) /* Assignment of value for RXRDY in the TWI_IER register */
#define TWI_IER_TXRDY_Pos                _UINT32_(2)                                          /* (TWI_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define TWI_IER_TXRDY_Msk                (_UINT32_(0x1) << TWI_IER_TXRDY_Pos)            /* (TWI_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_TXRDY(value)             (TWI_IER_TXRDY_Msk & (_UINT32_(value) << TWI_IER_TXRDY_Pos)) /* Assignment of value for TXRDY in the TWI_IER register */
#define TWI_IER_SVACC_Pos                _UINT32_(4)                                          /* (TWI_IER) Client Access Interrupt Enable Position */
#define TWI_IER_SVACC_Msk                (_UINT32_(0x1) << TWI_IER_SVACC_Pos)            /* (TWI_IER) Client Access Interrupt Enable Mask */
#define TWI_IER_SVACC(value)             (TWI_IER_SVACC_Msk & (_UINT32_(value) << TWI_IER_SVACC_Pos)) /* Assignment of value for SVACC in the TWI_IER register */
#define TWI_IER_GACC_Pos                 _UINT32_(5)                                          /* (TWI_IER) General Call Access Interrupt Enable Position */
#define TWI_IER_GACC_Msk                 (_UINT32_(0x1) << TWI_IER_GACC_Pos)             /* (TWI_IER) General Call Access Interrupt Enable Mask */
#define TWI_IER_GACC(value)              (TWI_IER_GACC_Msk & (_UINT32_(value) << TWI_IER_GACC_Pos)) /* Assignment of value for GACC in the TWI_IER register */
#define TWI_IER_OVRE_Pos                 _UINT32_(6)                                          /* (TWI_IER) Overrun Error Interrupt Enable Position */
#define TWI_IER_OVRE_Msk                 (_UINT32_(0x1) << TWI_IER_OVRE_Pos)             /* (TWI_IER) Overrun Error Interrupt Enable Mask */
#define TWI_IER_OVRE(value)              (TWI_IER_OVRE_Msk & (_UINT32_(value) << TWI_IER_OVRE_Pos)) /* Assignment of value for OVRE in the TWI_IER register */
#define TWI_IER_UNRE_Pos                 _UINT32_(7)                                          /* (TWI_IER) Underrun Error Interrupt Enable Position */
#define TWI_IER_UNRE_Msk                 (_UINT32_(0x1) << TWI_IER_UNRE_Pos)             /* (TWI_IER) Underrun Error Interrupt Enable Mask */
#define TWI_IER_UNRE(value)              (TWI_IER_UNRE_Msk & (_UINT32_(value) << TWI_IER_UNRE_Pos)) /* Assignment of value for UNRE in the TWI_IER register */
#define TWI_IER_NACK_Pos                 _UINT32_(8)                                          /* (TWI_IER) Not Acknowledge Interrupt Enable Position */
#define TWI_IER_NACK_Msk                 (_UINT32_(0x1) << TWI_IER_NACK_Pos)             /* (TWI_IER) Not Acknowledge Interrupt Enable Mask */
#define TWI_IER_NACK(value)              (TWI_IER_NACK_Msk & (_UINT32_(value) << TWI_IER_NACK_Pos)) /* Assignment of value for NACK in the TWI_IER register */
#define TWI_IER_ARBLST_Pos               _UINT32_(9)                                          /* (TWI_IER) Arbitration Lost Interrupt Enable Position */
#define TWI_IER_ARBLST_Msk               (_UINT32_(0x1) << TWI_IER_ARBLST_Pos)           /* (TWI_IER) Arbitration Lost Interrupt Enable Mask */
#define TWI_IER_ARBLST(value)            (TWI_IER_ARBLST_Msk & (_UINT32_(value) << TWI_IER_ARBLST_Pos)) /* Assignment of value for ARBLST in the TWI_IER register */
#define TWI_IER_SCL_WS_Pos               _UINT32_(10)                                         /* (TWI_IER) Clock Wait State Interrupt Enable Position */
#define TWI_IER_SCL_WS_Msk               (_UINT32_(0x1) << TWI_IER_SCL_WS_Pos)           /* (TWI_IER) Clock Wait State Interrupt Enable Mask */
#define TWI_IER_SCL_WS(value)            (TWI_IER_SCL_WS_Msk & (_UINT32_(value) << TWI_IER_SCL_WS_Pos)) /* Assignment of value for SCL_WS in the TWI_IER register */
#define TWI_IER_EOSACC_Pos               _UINT32_(11)                                         /* (TWI_IER) End Of Client Access Interrupt Enable Position */
#define TWI_IER_EOSACC_Msk               (_UINT32_(0x1) << TWI_IER_EOSACC_Pos)           /* (TWI_IER) End Of Client Access Interrupt Enable Mask */
#define TWI_IER_EOSACC(value)            (TWI_IER_EOSACC_Msk & (_UINT32_(value) << TWI_IER_EOSACC_Pos)) /* Assignment of value for EOSACC in the TWI_IER register */
#define TWI_IER_ENDRX_Pos                _UINT32_(12)                                         /* (TWI_IER) End of Receive Buffer Interrupt Enable Position */
#define TWI_IER_ENDRX_Msk                (_UINT32_(0x1) << TWI_IER_ENDRX_Pos)            /* (TWI_IER) End of Receive Buffer Interrupt Enable Mask */
#define TWI_IER_ENDRX(value)             (TWI_IER_ENDRX_Msk & (_UINT32_(value) << TWI_IER_ENDRX_Pos)) /* Assignment of value for ENDRX in the TWI_IER register */
#define TWI_IER_ENDTX_Pos                _UINT32_(13)                                         /* (TWI_IER) End of Transmit Buffer Interrupt Enable Position */
#define TWI_IER_ENDTX_Msk                (_UINT32_(0x1) << TWI_IER_ENDTX_Pos)            /* (TWI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define TWI_IER_ENDTX(value)             (TWI_IER_ENDTX_Msk & (_UINT32_(value) << TWI_IER_ENDTX_Pos)) /* Assignment of value for ENDTX in the TWI_IER register */
#define TWI_IER_RXBUFF_Pos               _UINT32_(14)                                         /* (TWI_IER) Receive Buffer Full Interrupt Enable Position */
#define TWI_IER_RXBUFF_Msk               (_UINT32_(0x1) << TWI_IER_RXBUFF_Pos)           /* (TWI_IER) Receive Buffer Full Interrupt Enable Mask */
#define TWI_IER_RXBUFF(value)            (TWI_IER_RXBUFF_Msk & (_UINT32_(value) << TWI_IER_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the TWI_IER register */
#define TWI_IER_TXBUFE_Pos               _UINT32_(15)                                         /* (TWI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define TWI_IER_TXBUFE_Msk               (_UINT32_(0x1) << TWI_IER_TXBUFE_Pos)           /* (TWI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define TWI_IER_TXBUFE(value)            (TWI_IER_TXBUFE_Msk & (_UINT32_(value) << TWI_IER_TXBUFE_Pos)) /* Assignment of value for TXBUFE in the TWI_IER register */
#define TWI_IER_MCACK_Pos                _UINT32_(16)                                         /* (TWI_IER) Host Code Acknowledge Interrupt Enable Position */
#define TWI_IER_MCACK_Msk                (_UINT32_(0x1) << TWI_IER_MCACK_Pos)            /* (TWI_IER) Host Code Acknowledge Interrupt Enable Mask */
#define TWI_IER_MCACK(value)             (TWI_IER_MCACK_Msk & (_UINT32_(value) << TWI_IER_MCACK_Pos)) /* Assignment of value for MCACK in the TWI_IER register */
#define TWI_IER_TOUT_Pos                 _UINT32_(18)                                         /* (TWI_IER) Timeout Error Interrupt Enable Position */
#define TWI_IER_TOUT_Msk                 (_UINT32_(0x1) << TWI_IER_TOUT_Pos)             /* (TWI_IER) Timeout Error Interrupt Enable Mask */
#define TWI_IER_TOUT(value)              (TWI_IER_TOUT_Msk & (_UINT32_(value) << TWI_IER_TOUT_Pos)) /* Assignment of value for TOUT in the TWI_IER register */
#define TWI_IER_PECERR_Pos               _UINT32_(19)                                         /* (TWI_IER) PEC Error Interrupt Enable Position */
#define TWI_IER_PECERR_Msk               (_UINT32_(0x1) << TWI_IER_PECERR_Pos)           /* (TWI_IER) PEC Error Interrupt Enable Mask */
#define TWI_IER_PECERR(value)            (TWI_IER_PECERR_Msk & (_UINT32_(value) << TWI_IER_PECERR_Pos)) /* Assignment of value for PECERR in the TWI_IER register */
#define TWI_IER_SMBDAM_Pos               _UINT32_(20)                                         /* (TWI_IER) SMBus Default Address Match Interrupt Enable Position */
#define TWI_IER_SMBDAM_Msk               (_UINT32_(0x1) << TWI_IER_SMBDAM_Pos)           /* (TWI_IER) SMBus Default Address Match Interrupt Enable Mask */
#define TWI_IER_SMBDAM(value)            (TWI_IER_SMBDAM_Msk & (_UINT32_(value) << TWI_IER_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the TWI_IER register */
#define TWI_IER_SMBHHM_Pos               _UINT32_(21)                                         /* (TWI_IER) SMBus Host Header Address Match Interrupt Enable Position */
#define TWI_IER_SMBHHM_Msk               (_UINT32_(0x1) << TWI_IER_SMBHHM_Pos)           /* (TWI_IER) SMBus Host Header Address Match Interrupt Enable Mask */
#define TWI_IER_SMBHHM(value)            (TWI_IER_SMBHHM_Msk & (_UINT32_(value) << TWI_IER_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the TWI_IER register */
#define TWI_IER_SECE_Pos                 _UINT32_(28)                                         /* (TWI_IER) Security/Safety Error Interrupt Enable Position */
#define TWI_IER_SECE_Msk                 (_UINT32_(0x1) << TWI_IER_SECE_Pos)             /* (TWI_IER) Security/Safety Error Interrupt Enable Mask */
#define TWI_IER_SECE(value)              (TWI_IER_SECE_Msk & (_UINT32_(value) << TWI_IER_SECE_Pos)) /* Assignment of value for SECE in the TWI_IER register */
#define TWI_IER_Msk                      _UINT32_(0x103DFFF7)                                 /* (TWI_IER) Register Mask  */


/* -------- TWI_IDR : (FLEXCOM Offset: 0x628) ( /W 32) TWI Interrupt Disable Register -------- */
#define TWI_IDR_TXCOMP_Pos               _UINT32_(0)                                          /* (TWI_IDR) Transmission Completed Interrupt Disable Position */
#define TWI_IDR_TXCOMP_Msk               (_UINT32_(0x1) << TWI_IDR_TXCOMP_Pos)           /* (TWI_IDR) Transmission Completed Interrupt Disable Mask */
#define TWI_IDR_TXCOMP(value)            (TWI_IDR_TXCOMP_Msk & (_UINT32_(value) << TWI_IDR_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the TWI_IDR register */
#define TWI_IDR_RXRDY_Pos                _UINT32_(1)                                          /* (TWI_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_RXRDY_Msk                (_UINT32_(0x1) << TWI_IDR_RXRDY_Pos)            /* (TWI_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_RXRDY(value)             (TWI_IDR_RXRDY_Msk & (_UINT32_(value) << TWI_IDR_RXRDY_Pos)) /* Assignment of value for RXRDY in the TWI_IDR register */
#define TWI_IDR_TXRDY_Pos                _UINT32_(2)                                          /* (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_TXRDY_Msk                (_UINT32_(0x1) << TWI_IDR_TXRDY_Pos)            /* (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_TXRDY(value)             (TWI_IDR_TXRDY_Msk & (_UINT32_(value) << TWI_IDR_TXRDY_Pos)) /* Assignment of value for TXRDY in the TWI_IDR register */
#define TWI_IDR_SVACC_Pos                _UINT32_(4)                                          /* (TWI_IDR) Client Access Interrupt Disable Position */
#define TWI_IDR_SVACC_Msk                (_UINT32_(0x1) << TWI_IDR_SVACC_Pos)            /* (TWI_IDR) Client Access Interrupt Disable Mask */
#define TWI_IDR_SVACC(value)             (TWI_IDR_SVACC_Msk & (_UINT32_(value) << TWI_IDR_SVACC_Pos)) /* Assignment of value for SVACC in the TWI_IDR register */
#define TWI_IDR_GACC_Pos                 _UINT32_(5)                                          /* (TWI_IDR) General Call Access Interrupt Disable Position */
#define TWI_IDR_GACC_Msk                 (_UINT32_(0x1) << TWI_IDR_GACC_Pos)             /* (TWI_IDR) General Call Access Interrupt Disable Mask */
#define TWI_IDR_GACC(value)              (TWI_IDR_GACC_Msk & (_UINT32_(value) << TWI_IDR_GACC_Pos)) /* Assignment of value for GACC in the TWI_IDR register */
#define TWI_IDR_OVRE_Pos                 _UINT32_(6)                                          /* (TWI_IDR) Overrun Error Interrupt Disable Position */
#define TWI_IDR_OVRE_Msk                 (_UINT32_(0x1) << TWI_IDR_OVRE_Pos)             /* (TWI_IDR) Overrun Error Interrupt Disable Mask */
#define TWI_IDR_OVRE(value)              (TWI_IDR_OVRE_Msk & (_UINT32_(value) << TWI_IDR_OVRE_Pos)) /* Assignment of value for OVRE in the TWI_IDR register */
#define TWI_IDR_UNRE_Pos                 _UINT32_(7)                                          /* (TWI_IDR) Underrun Error Interrupt Disable Position */
#define TWI_IDR_UNRE_Msk                 (_UINT32_(0x1) << TWI_IDR_UNRE_Pos)             /* (TWI_IDR) Underrun Error Interrupt Disable Mask */
#define TWI_IDR_UNRE(value)              (TWI_IDR_UNRE_Msk & (_UINT32_(value) << TWI_IDR_UNRE_Pos)) /* Assignment of value for UNRE in the TWI_IDR register */
#define TWI_IDR_NACK_Pos                 _UINT32_(8)                                          /* (TWI_IDR) Not Acknowledge Interrupt Disable Position */
#define TWI_IDR_NACK_Msk                 (_UINT32_(0x1) << TWI_IDR_NACK_Pos)             /* (TWI_IDR) Not Acknowledge Interrupt Disable Mask */
#define TWI_IDR_NACK(value)              (TWI_IDR_NACK_Msk & (_UINT32_(value) << TWI_IDR_NACK_Pos)) /* Assignment of value for NACK in the TWI_IDR register */
#define TWI_IDR_ARBLST_Pos               _UINT32_(9)                                          /* (TWI_IDR) Arbitration Lost Interrupt Disable Position */
#define TWI_IDR_ARBLST_Msk               (_UINT32_(0x1) << TWI_IDR_ARBLST_Pos)           /* (TWI_IDR) Arbitration Lost Interrupt Disable Mask */
#define TWI_IDR_ARBLST(value)            (TWI_IDR_ARBLST_Msk & (_UINT32_(value) << TWI_IDR_ARBLST_Pos)) /* Assignment of value for ARBLST in the TWI_IDR register */
#define TWI_IDR_SCL_WS_Pos               _UINT32_(10)                                         /* (TWI_IDR) Clock Wait State Interrupt Disable Position */
#define TWI_IDR_SCL_WS_Msk               (_UINT32_(0x1) << TWI_IDR_SCL_WS_Pos)           /* (TWI_IDR) Clock Wait State Interrupt Disable Mask */
#define TWI_IDR_SCL_WS(value)            (TWI_IDR_SCL_WS_Msk & (_UINT32_(value) << TWI_IDR_SCL_WS_Pos)) /* Assignment of value for SCL_WS in the TWI_IDR register */
#define TWI_IDR_EOSACC_Pos               _UINT32_(11)                                         /* (TWI_IDR) End Of Client Access Interrupt Disable Position */
#define TWI_IDR_EOSACC_Msk               (_UINT32_(0x1) << TWI_IDR_EOSACC_Pos)           /* (TWI_IDR) End Of Client Access Interrupt Disable Mask */
#define TWI_IDR_EOSACC(value)            (TWI_IDR_EOSACC_Msk & (_UINT32_(value) << TWI_IDR_EOSACC_Pos)) /* Assignment of value for EOSACC in the TWI_IDR register */
#define TWI_IDR_ENDRX_Pos                _UINT32_(12)                                         /* (TWI_IDR) End of Receive Buffer Interrupt Disable Position */
#define TWI_IDR_ENDRX_Msk                (_UINT32_(0x1) << TWI_IDR_ENDRX_Pos)            /* (TWI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDRX(value)             (TWI_IDR_ENDRX_Msk & (_UINT32_(value) << TWI_IDR_ENDRX_Pos)) /* Assignment of value for ENDRX in the TWI_IDR register */
#define TWI_IDR_ENDTX_Pos                _UINT32_(13)                                         /* (TWI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define TWI_IDR_ENDTX_Msk                (_UINT32_(0x1) << TWI_IDR_ENDTX_Pos)            /* (TWI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDTX(value)             (TWI_IDR_ENDTX_Msk & (_UINT32_(value) << TWI_IDR_ENDTX_Pos)) /* Assignment of value for ENDTX in the TWI_IDR register */
#define TWI_IDR_RXBUFF_Pos               _UINT32_(14)                                         /* (TWI_IDR) Receive Buffer Full Interrupt Disable Position */
#define TWI_IDR_RXBUFF_Msk               (_UINT32_(0x1) << TWI_IDR_RXBUFF_Pos)           /* (TWI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define TWI_IDR_RXBUFF(value)            (TWI_IDR_RXBUFF_Msk & (_UINT32_(value) << TWI_IDR_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the TWI_IDR register */
#define TWI_IDR_TXBUFE_Pos               _UINT32_(15)                                         /* (TWI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define TWI_IDR_TXBUFE_Msk               (_UINT32_(0x1) << TWI_IDR_TXBUFE_Pos)           /* (TWI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define TWI_IDR_TXBUFE(value)            (TWI_IDR_TXBUFE_Msk & (_UINT32_(value) << TWI_IDR_TXBUFE_Pos)) /* Assignment of value for TXBUFE in the TWI_IDR register */
#define TWI_IDR_MCACK_Pos                _UINT32_(16)                                         /* (TWI_IDR) Host Code Acknowledge Interrupt Disable Position */
#define TWI_IDR_MCACK_Msk                (_UINT32_(0x1) << TWI_IDR_MCACK_Pos)            /* (TWI_IDR) Host Code Acknowledge Interrupt Disable Mask */
#define TWI_IDR_MCACK(value)             (TWI_IDR_MCACK_Msk & (_UINT32_(value) << TWI_IDR_MCACK_Pos)) /* Assignment of value for MCACK in the TWI_IDR register */
#define TWI_IDR_TOUT_Pos                 _UINT32_(18)                                         /* (TWI_IDR) Timeout Error Interrupt Disable Position */
#define TWI_IDR_TOUT_Msk                 (_UINT32_(0x1) << TWI_IDR_TOUT_Pos)             /* (TWI_IDR) Timeout Error Interrupt Disable Mask */
#define TWI_IDR_TOUT(value)              (TWI_IDR_TOUT_Msk & (_UINT32_(value) << TWI_IDR_TOUT_Pos)) /* Assignment of value for TOUT in the TWI_IDR register */
#define TWI_IDR_PECERR_Pos               _UINT32_(19)                                         /* (TWI_IDR) PEC Error Interrupt Disable Position */
#define TWI_IDR_PECERR_Msk               (_UINT32_(0x1) << TWI_IDR_PECERR_Pos)           /* (TWI_IDR) PEC Error Interrupt Disable Mask */
#define TWI_IDR_PECERR(value)            (TWI_IDR_PECERR_Msk & (_UINT32_(value) << TWI_IDR_PECERR_Pos)) /* Assignment of value for PECERR in the TWI_IDR register */
#define TWI_IDR_SMBDAM_Pos               _UINT32_(20)                                         /* (TWI_IDR) SMBus Default Address Match Interrupt Disable Position */
#define TWI_IDR_SMBDAM_Msk               (_UINT32_(0x1) << TWI_IDR_SMBDAM_Pos)           /* (TWI_IDR) SMBus Default Address Match Interrupt Disable Mask */
#define TWI_IDR_SMBDAM(value)            (TWI_IDR_SMBDAM_Msk & (_UINT32_(value) << TWI_IDR_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the TWI_IDR register */
#define TWI_IDR_SMBHHM_Pos               _UINT32_(21)                                         /* (TWI_IDR) SMBus Host Header Address Match Interrupt Disable Position */
#define TWI_IDR_SMBHHM_Msk               (_UINT32_(0x1) << TWI_IDR_SMBHHM_Pos)           /* (TWI_IDR) SMBus Host Header Address Match Interrupt Disable Mask */
#define TWI_IDR_SMBHHM(value)            (TWI_IDR_SMBHHM_Msk & (_UINT32_(value) << TWI_IDR_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the TWI_IDR register */
#define TWI_IDR_SECE_Pos                 _UINT32_(28)                                         /* (TWI_IDR) Security/Safety Error Interrupt Disable Position */
#define TWI_IDR_SECE_Msk                 (_UINT32_(0x1) << TWI_IDR_SECE_Pos)             /* (TWI_IDR) Security/Safety Error Interrupt Disable Mask */
#define TWI_IDR_SECE(value)              (TWI_IDR_SECE_Msk & (_UINT32_(value) << TWI_IDR_SECE_Pos)) /* Assignment of value for SECE in the TWI_IDR register */
#define TWI_IDR_Msk                      _UINT32_(0x103DFFF7)                                 /* (TWI_IDR) Register Mask  */


/* -------- TWI_IMR : (FLEXCOM Offset: 0x62C) ( R/ 32) TWI Interrupt Mask Register -------- */
#define TWI_IMR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_IMR) TWI Interrupt Mask Register  Reset Value */

#define TWI_IMR_TXCOMP_Pos               _UINT32_(0)                                          /* (TWI_IMR) Transmission Completed Interrupt Mask Position */
#define TWI_IMR_TXCOMP_Msk               (_UINT32_(0x1) << TWI_IMR_TXCOMP_Pos)           /* (TWI_IMR) Transmission Completed Interrupt Mask Mask */
#define TWI_IMR_TXCOMP(value)            (TWI_IMR_TXCOMP_Msk & (_UINT32_(value) << TWI_IMR_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the TWI_IMR register */
#define TWI_IMR_RXRDY_Pos                _UINT32_(1)                                          /* (TWI_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_RXRDY_Msk                (_UINT32_(0x1) << TWI_IMR_RXRDY_Pos)            /* (TWI_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_RXRDY(value)             (TWI_IMR_RXRDY_Msk & (_UINT32_(value) << TWI_IMR_RXRDY_Pos)) /* Assignment of value for RXRDY in the TWI_IMR register */
#define TWI_IMR_TXRDY_Pos                _UINT32_(2)                                          /* (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_TXRDY_Msk                (_UINT32_(0x1) << TWI_IMR_TXRDY_Pos)            /* (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_TXRDY(value)             (TWI_IMR_TXRDY_Msk & (_UINT32_(value) << TWI_IMR_TXRDY_Pos)) /* Assignment of value for TXRDY in the TWI_IMR register */
#define TWI_IMR_SVACC_Pos                _UINT32_(4)                                          /* (TWI_IMR) Client Access Interrupt Mask Position */
#define TWI_IMR_SVACC_Msk                (_UINT32_(0x1) << TWI_IMR_SVACC_Pos)            /* (TWI_IMR) Client Access Interrupt Mask Mask */
#define TWI_IMR_SVACC(value)             (TWI_IMR_SVACC_Msk & (_UINT32_(value) << TWI_IMR_SVACC_Pos)) /* Assignment of value for SVACC in the TWI_IMR register */
#define TWI_IMR_GACC_Pos                 _UINT32_(5)                                          /* (TWI_IMR) General Call Access Interrupt Mask Position */
#define TWI_IMR_GACC_Msk                 (_UINT32_(0x1) << TWI_IMR_GACC_Pos)             /* (TWI_IMR) General Call Access Interrupt Mask Mask */
#define TWI_IMR_GACC(value)              (TWI_IMR_GACC_Msk & (_UINT32_(value) << TWI_IMR_GACC_Pos)) /* Assignment of value for GACC in the TWI_IMR register */
#define TWI_IMR_OVRE_Pos                 _UINT32_(6)                                          /* (TWI_IMR) Overrun Error Interrupt Mask Position */
#define TWI_IMR_OVRE_Msk                 (_UINT32_(0x1) << TWI_IMR_OVRE_Pos)             /* (TWI_IMR) Overrun Error Interrupt Mask Mask */
#define TWI_IMR_OVRE(value)              (TWI_IMR_OVRE_Msk & (_UINT32_(value) << TWI_IMR_OVRE_Pos)) /* Assignment of value for OVRE in the TWI_IMR register */
#define TWI_IMR_UNRE_Pos                 _UINT32_(7)                                          /* (TWI_IMR) Underrun Error Interrupt Mask Position */
#define TWI_IMR_UNRE_Msk                 (_UINT32_(0x1) << TWI_IMR_UNRE_Pos)             /* (TWI_IMR) Underrun Error Interrupt Mask Mask */
#define TWI_IMR_UNRE(value)              (TWI_IMR_UNRE_Msk & (_UINT32_(value) << TWI_IMR_UNRE_Pos)) /* Assignment of value for UNRE in the TWI_IMR register */
#define TWI_IMR_NACK_Pos                 _UINT32_(8)                                          /* (TWI_IMR) Not Acknowledge Interrupt Mask Position */
#define TWI_IMR_NACK_Msk                 (_UINT32_(0x1) << TWI_IMR_NACK_Pos)             /* (TWI_IMR) Not Acknowledge Interrupt Mask Mask */
#define TWI_IMR_NACK(value)              (TWI_IMR_NACK_Msk & (_UINT32_(value) << TWI_IMR_NACK_Pos)) /* Assignment of value for NACK in the TWI_IMR register */
#define TWI_IMR_ARBLST_Pos               _UINT32_(9)                                          /* (TWI_IMR) Arbitration Lost Interrupt Mask Position */
#define TWI_IMR_ARBLST_Msk               (_UINT32_(0x1) << TWI_IMR_ARBLST_Pos)           /* (TWI_IMR) Arbitration Lost Interrupt Mask Mask */
#define TWI_IMR_ARBLST(value)            (TWI_IMR_ARBLST_Msk & (_UINT32_(value) << TWI_IMR_ARBLST_Pos)) /* Assignment of value for ARBLST in the TWI_IMR register */
#define TWI_IMR_SCL_WS_Pos               _UINT32_(10)                                         /* (TWI_IMR) Clock Wait State Interrupt Mask Position */
#define TWI_IMR_SCL_WS_Msk               (_UINT32_(0x1) << TWI_IMR_SCL_WS_Pos)           /* (TWI_IMR) Clock Wait State Interrupt Mask Mask */
#define TWI_IMR_SCL_WS(value)            (TWI_IMR_SCL_WS_Msk & (_UINT32_(value) << TWI_IMR_SCL_WS_Pos)) /* Assignment of value for SCL_WS in the TWI_IMR register */
#define TWI_IMR_EOSACC_Pos               _UINT32_(11)                                         /* (TWI_IMR) End Of Client Access Interrupt Mask Position */
#define TWI_IMR_EOSACC_Msk               (_UINT32_(0x1) << TWI_IMR_EOSACC_Pos)           /* (TWI_IMR) End Of Client Access Interrupt Mask Mask */
#define TWI_IMR_EOSACC(value)            (TWI_IMR_EOSACC_Msk & (_UINT32_(value) << TWI_IMR_EOSACC_Pos)) /* Assignment of value for EOSACC in the TWI_IMR register */
#define TWI_IMR_ENDRX_Pos                _UINT32_(12)                                         /* (TWI_IMR) End of Receive Buffer Interrupt Mask Position */
#define TWI_IMR_ENDRX_Msk                (_UINT32_(0x1) << TWI_IMR_ENDRX_Pos)            /* (TWI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDRX(value)             (TWI_IMR_ENDRX_Msk & (_UINT32_(value) << TWI_IMR_ENDRX_Pos)) /* Assignment of value for ENDRX in the TWI_IMR register */
#define TWI_IMR_ENDTX_Pos                _UINT32_(13)                                         /* (TWI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define TWI_IMR_ENDTX_Msk                (_UINT32_(0x1) << TWI_IMR_ENDTX_Pos)            /* (TWI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDTX(value)             (TWI_IMR_ENDTX_Msk & (_UINT32_(value) << TWI_IMR_ENDTX_Pos)) /* Assignment of value for ENDTX in the TWI_IMR register */
#define TWI_IMR_RXBUFF_Pos               _UINT32_(14)                                         /* (TWI_IMR) Receive Buffer Full Interrupt Mask Position */
#define TWI_IMR_RXBUFF_Msk               (_UINT32_(0x1) << TWI_IMR_RXBUFF_Pos)           /* (TWI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define TWI_IMR_RXBUFF(value)            (TWI_IMR_RXBUFF_Msk & (_UINT32_(value) << TWI_IMR_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the TWI_IMR register */
#define TWI_IMR_TXBUFE_Pos               _UINT32_(15)                                         /* (TWI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define TWI_IMR_TXBUFE_Msk               (_UINT32_(0x1) << TWI_IMR_TXBUFE_Pos)           /* (TWI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define TWI_IMR_TXBUFE(value)            (TWI_IMR_TXBUFE_Msk & (_UINT32_(value) << TWI_IMR_TXBUFE_Pos)) /* Assignment of value for TXBUFE in the TWI_IMR register */
#define TWI_IMR_MCACK_Pos                _UINT32_(16)                                         /* (TWI_IMR) Host Code Acknowledge Interrupt Mask Position */
#define TWI_IMR_MCACK_Msk                (_UINT32_(0x1) << TWI_IMR_MCACK_Pos)            /* (TWI_IMR) Host Code Acknowledge Interrupt Mask Mask */
#define TWI_IMR_MCACK(value)             (TWI_IMR_MCACK_Msk & (_UINT32_(value) << TWI_IMR_MCACK_Pos)) /* Assignment of value for MCACK in the TWI_IMR register */
#define TWI_IMR_TOUT_Pos                 _UINT32_(18)                                         /* (TWI_IMR) Timeout Error Interrupt Mask Position */
#define TWI_IMR_TOUT_Msk                 (_UINT32_(0x1) << TWI_IMR_TOUT_Pos)             /* (TWI_IMR) Timeout Error Interrupt Mask Mask */
#define TWI_IMR_TOUT(value)              (TWI_IMR_TOUT_Msk & (_UINT32_(value) << TWI_IMR_TOUT_Pos)) /* Assignment of value for TOUT in the TWI_IMR register */
#define TWI_IMR_PECERR_Pos               _UINT32_(19)                                         /* (TWI_IMR) PEC Error Interrupt Mask Position */
#define TWI_IMR_PECERR_Msk               (_UINT32_(0x1) << TWI_IMR_PECERR_Pos)           /* (TWI_IMR) PEC Error Interrupt Mask Mask */
#define TWI_IMR_PECERR(value)            (TWI_IMR_PECERR_Msk & (_UINT32_(value) << TWI_IMR_PECERR_Pos)) /* Assignment of value for PECERR in the TWI_IMR register */
#define TWI_IMR_SMBDAM_Pos               _UINT32_(20)                                         /* (TWI_IMR) SMBus Default Address Match Interrupt Mask Position */
#define TWI_IMR_SMBDAM_Msk               (_UINT32_(0x1) << TWI_IMR_SMBDAM_Pos)           /* (TWI_IMR) SMBus Default Address Match Interrupt Mask Mask */
#define TWI_IMR_SMBDAM(value)            (TWI_IMR_SMBDAM_Msk & (_UINT32_(value) << TWI_IMR_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the TWI_IMR register */
#define TWI_IMR_SMBHHM_Pos               _UINT32_(21)                                         /* (TWI_IMR) SMBus Host Header Address Match Interrupt Mask Position */
#define TWI_IMR_SMBHHM_Msk               (_UINT32_(0x1) << TWI_IMR_SMBHHM_Pos)           /* (TWI_IMR) SMBus Host Header Address Match Interrupt Mask Mask */
#define TWI_IMR_SMBHHM(value)            (TWI_IMR_SMBHHM_Msk & (_UINT32_(value) << TWI_IMR_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the TWI_IMR register */
#define TWI_IMR_SECE_Pos                 _UINT32_(28)                                         /* (TWI_IMR) Security/Safety Error Interrupt Mask Position */
#define TWI_IMR_SECE_Msk                 (_UINT32_(0x1) << TWI_IMR_SECE_Pos)             /* (TWI_IMR) Security/Safety Error Interrupt Mask Mask */
#define TWI_IMR_SECE(value)              (TWI_IMR_SECE_Msk & (_UINT32_(value) << TWI_IMR_SECE_Pos)) /* Assignment of value for SECE in the TWI_IMR register */
#define TWI_IMR_Msk                      _UINT32_(0x103DFFF7)                                 /* (TWI_IMR) Register Mask  */


/* -------- TWI_RHR : (FLEXCOM Offset: 0x630) ( R/ 32) TWI Receive Holding Register -------- */
#define TWI_RHR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_RHR) TWI Receive Holding Register  Reset Value */

#define TWI_RHR_RXDATA_Pos               _UINT32_(0)                                          /* (TWI_RHR) Host or Client Receive Holding Data Position */
#define TWI_RHR_RXDATA_Msk               (_UINT32_(0xFF) << TWI_RHR_RXDATA_Pos)          /* (TWI_RHR) Host or Client Receive Holding Data Mask */
#define TWI_RHR_RXDATA(value)            (TWI_RHR_RXDATA_Msk & (_UINT32_(value) << TWI_RHR_RXDATA_Pos)) /* Assignment of value for RXDATA in the TWI_RHR register */
#define TWI_RHR_SSTATE_Pos               _UINT32_(8)                                          /* (TWI_RHR) Start State (Client Sniffer Mode only) Position */
#define TWI_RHR_SSTATE_Msk               (_UINT32_(0x3) << TWI_RHR_SSTATE_Pos)           /* (TWI_RHR) Start State (Client Sniffer Mode only) Mask */
#define TWI_RHR_SSTATE(value)            (TWI_RHR_SSTATE_Msk & (_UINT32_(value) << TWI_RHR_SSTATE_Pos)) /* Assignment of value for SSTATE in the TWI_RHR register */
#define   TWI_RHR_SSTATE_NOSTART_Val     _UINT32_(0x0)                                        /* (TWI_RHR) No START detected with the logged data  */
#define   TWI_RHR_SSTATE_START_Val       _UINT32_(0x1)                                        /* (TWI_RHR) START (S) detected with the logged data  */
#define   TWI_RHR_SSTATE_RSTART_Val      _UINT32_(0x2)                                        /* (TWI_RHR) Repeated START (Sr) detected with the logged data  */
#define   TWI_RHR_SSTATE_UNDEF_Val       _UINT32_(0x3)                                        /* (TWI_RHR) Not defined  */
#define TWI_RHR_SSTATE_NOSTART           (TWI_RHR_SSTATE_NOSTART_Val << TWI_RHR_SSTATE_Pos) /* (TWI_RHR) No START detected with the logged data Position */
#define TWI_RHR_SSTATE_START             (TWI_RHR_SSTATE_START_Val << TWI_RHR_SSTATE_Pos) /* (TWI_RHR) START (S) detected with the logged data Position */
#define TWI_RHR_SSTATE_RSTART            (TWI_RHR_SSTATE_RSTART_Val << TWI_RHR_SSTATE_Pos) /* (TWI_RHR) Repeated START (Sr) detected with the logged data Position */
#define TWI_RHR_SSTATE_UNDEF             (TWI_RHR_SSTATE_UNDEF_Val << TWI_RHR_SSTATE_Pos) /* (TWI_RHR) Not defined Position */
#define TWI_RHR_PSTATE_Pos               _UINT32_(10)                                         /* (TWI_RHR) Stop State (Client Sniffer Mode only) Position */
#define TWI_RHR_PSTATE_Msk               (_UINT32_(0x1) << TWI_RHR_PSTATE_Pos)           /* (TWI_RHR) Stop State (Client Sniffer Mode only) Mask */
#define TWI_RHR_PSTATE(value)            (TWI_RHR_PSTATE_Msk & (_UINT32_(value) << TWI_RHR_PSTATE_Pos)) /* Assignment of value for PSTATE in the TWI_RHR register */
#define   TWI_RHR_PSTATE_0_Val           _UINT32_(0x0)                                        /* (TWI_RHR) No STOP (P) detected after previous logged data.  */
#define   TWI_RHR_PSTATE_1_Val           _UINT32_(0x1)                                        /* (TWI_RHR) Stop detected (P) after previous logged data.  */
#define TWI_RHR_PSTATE_0                 (TWI_RHR_PSTATE_0_Val << TWI_RHR_PSTATE_Pos) /* (TWI_RHR) No STOP (P) detected after previous logged data. Position */
#define TWI_RHR_PSTATE_1                 (TWI_RHR_PSTATE_1_Val << TWI_RHR_PSTATE_Pos) /* (TWI_RHR) Stop detected (P) after previous logged data. Position */
#define TWI_RHR_ASTATE_Pos               _UINT32_(11)                                         /* (TWI_RHR) Acknowledge State (Client Sniffer Mode only) Position */
#define TWI_RHR_ASTATE_Msk               (_UINT32_(0x3) << TWI_RHR_ASTATE_Pos)           /* (TWI_RHR) Acknowledge State (Client Sniffer Mode only) Mask */
#define TWI_RHR_ASTATE(value)            (TWI_RHR_ASTATE_Msk & (_UINT32_(value) << TWI_RHR_ASTATE_Pos)) /* Assignment of value for ASTATE in the TWI_RHR register */
#define   TWI_RHR_ASTATE_NONE_Val        _UINT32_(0x0)                                        /* (TWI_RHR) No Acknowledge or Nacknowledge detected after previously logged data  */
#define   TWI_RHR_ASTATE_ACK_Val         _UINT32_(0x1)                                        /* (TWI_RHR) Acknowledge (A) detected after previously logged data  */
#define   TWI_RHR_ASTATE_NACK_Val        _UINT32_(0x2)                                        /* (TWI_RHR) Nacknowledge (NA) detected after previously logged data  */
#define   TWI_RHR_ASTATE_UNDEF_Val       _UINT32_(0x3)                                        /* (TWI_RHR) Not defined  */
#define TWI_RHR_ASTATE_NONE              (TWI_RHR_ASTATE_NONE_Val << TWI_RHR_ASTATE_Pos) /* (TWI_RHR) No Acknowledge or Nacknowledge detected after previously logged data Position */
#define TWI_RHR_ASTATE_ACK               (TWI_RHR_ASTATE_ACK_Val << TWI_RHR_ASTATE_Pos) /* (TWI_RHR) Acknowledge (A) detected after previously logged data Position */
#define TWI_RHR_ASTATE_NACK              (TWI_RHR_ASTATE_NACK_Val << TWI_RHR_ASTATE_Pos) /* (TWI_RHR) Nacknowledge (NA) detected after previously logged data Position */
#define TWI_RHR_ASTATE_UNDEF             (TWI_RHR_ASTATE_UNDEF_Val << TWI_RHR_ASTATE_Pos) /* (TWI_RHR) Not defined Position */
#define TWI_RHR_Msk                      _UINT32_(0x00001FFF)                                 /* (TWI_RHR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWI_RHR_FIFO_ENABLED_RXDATA0_Pos _UINT32_(0)                                          /* (TWI_RHR) Host or Client Receive Holding Data 0 Position */
#define TWI_RHR_FIFO_ENABLED_RXDATA0_Msk (_UINT32_(0xFF) << TWI_RHR_FIFO_ENABLED_RXDATA0_Pos) /* (TWI_RHR) Host or Client Receive Holding Data 0 Mask */
#define TWI_RHR_FIFO_ENABLED_RXDATA0(value) (TWI_RHR_FIFO_ENABLED_RXDATA0_Msk & (_UINT32_(value) << TWI_RHR_FIFO_ENABLED_RXDATA0_Pos))
#define TWI_RHR_FIFO_ENABLED_RXDATA1_Pos _UINT32_(8)                                          /* (TWI_RHR) Host or Client Receive Holding Data 1 Position */
#define TWI_RHR_FIFO_ENABLED_RXDATA1_Msk (_UINT32_(0xFF) << TWI_RHR_FIFO_ENABLED_RXDATA1_Pos) /* (TWI_RHR) Host or Client Receive Holding Data 1 Mask */
#define TWI_RHR_FIFO_ENABLED_RXDATA1(value) (TWI_RHR_FIFO_ENABLED_RXDATA1_Msk & (_UINT32_(value) << TWI_RHR_FIFO_ENABLED_RXDATA1_Pos))
#define TWI_RHR_FIFO_ENABLED_RXDATA2_Pos _UINT32_(16)                                         /* (TWI_RHR) Host or Client Receive Holding Data 2 Position */
#define TWI_RHR_FIFO_ENABLED_RXDATA2_Msk (_UINT32_(0xFF) << TWI_RHR_FIFO_ENABLED_RXDATA2_Pos) /* (TWI_RHR) Host or Client Receive Holding Data 2 Mask */
#define TWI_RHR_FIFO_ENABLED_RXDATA2(value) (TWI_RHR_FIFO_ENABLED_RXDATA2_Msk & (_UINT32_(value) << TWI_RHR_FIFO_ENABLED_RXDATA2_Pos))
#define TWI_RHR_FIFO_ENABLED_RXDATA3_Pos _UINT32_(24)                                         /* (TWI_RHR) Host or Client Receive Holding Data 3 Position */
#define TWI_RHR_FIFO_ENABLED_RXDATA3_Msk (_UINT32_(0xFF) << TWI_RHR_FIFO_ENABLED_RXDATA3_Pos) /* (TWI_RHR) Host or Client Receive Holding Data 3 Mask */
#define TWI_RHR_FIFO_ENABLED_RXDATA3(value) (TWI_RHR_FIFO_ENABLED_RXDATA3_Msk & (_UINT32_(value) << TWI_RHR_FIFO_ENABLED_RXDATA3_Pos))
#define TWI_RHR_FIFO_ENABLED_Msk         _UINT32_(0xFFFFFFFF)                                 /* (TWI_RHR_FIFO_ENABLED) Register Mask  */


/* -------- TWI_THR : (FLEXCOM Offset: 0x634) ( /W 32) TWI Transmit Holding Register -------- */
#define TWI_THR_TXDATA_Pos               _UINT32_(0)                                          /* (TWI_THR) Host or Client Transmit Holding Data Position */
#define TWI_THR_TXDATA_Msk               (_UINT32_(0xFF) << TWI_THR_TXDATA_Pos)          /* (TWI_THR) Host or Client Transmit Holding Data Mask */
#define TWI_THR_TXDATA(value)            (TWI_THR_TXDATA_Msk & (_UINT32_(value) << TWI_THR_TXDATA_Pos)) /* Assignment of value for TXDATA in the TWI_THR register */
#define TWI_THR_Msk                      _UINT32_(0x000000FF)                                 /* (TWI_THR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWI_THR_FIFO_ENABLED_TXDATA0_Pos _UINT32_(0)                                          /* (TWI_THR) Host or Client Transmit Holding Data 0 Position */
#define TWI_THR_FIFO_ENABLED_TXDATA0_Msk (_UINT32_(0xFF) << TWI_THR_FIFO_ENABLED_TXDATA0_Pos) /* (TWI_THR) Host or Client Transmit Holding Data 0 Mask */
#define TWI_THR_FIFO_ENABLED_TXDATA0(value) (TWI_THR_FIFO_ENABLED_TXDATA0_Msk & (_UINT32_(value) << TWI_THR_FIFO_ENABLED_TXDATA0_Pos))
#define TWI_THR_FIFO_ENABLED_TXDATA1_Pos _UINT32_(8)                                          /* (TWI_THR) Host or Client Transmit Holding Data 1 Position */
#define TWI_THR_FIFO_ENABLED_TXDATA1_Msk (_UINT32_(0xFF) << TWI_THR_FIFO_ENABLED_TXDATA1_Pos) /* (TWI_THR) Host or Client Transmit Holding Data 1 Mask */
#define TWI_THR_FIFO_ENABLED_TXDATA1(value) (TWI_THR_FIFO_ENABLED_TXDATA1_Msk & (_UINT32_(value) << TWI_THR_FIFO_ENABLED_TXDATA1_Pos))
#define TWI_THR_FIFO_ENABLED_TXDATA2_Pos _UINT32_(16)                                         /* (TWI_THR) Host or Client Transmit Holding Data 2 Position */
#define TWI_THR_FIFO_ENABLED_TXDATA2_Msk (_UINT32_(0xFF) << TWI_THR_FIFO_ENABLED_TXDATA2_Pos) /* (TWI_THR) Host or Client Transmit Holding Data 2 Mask */
#define TWI_THR_FIFO_ENABLED_TXDATA2(value) (TWI_THR_FIFO_ENABLED_TXDATA2_Msk & (_UINT32_(value) << TWI_THR_FIFO_ENABLED_TXDATA2_Pos))
#define TWI_THR_FIFO_ENABLED_TXDATA3_Pos _UINT32_(24)                                         /* (TWI_THR) Host or Client Transmit Holding Data 3 Position */
#define TWI_THR_FIFO_ENABLED_TXDATA3_Msk (_UINT32_(0xFF) << TWI_THR_FIFO_ENABLED_TXDATA3_Pos) /* (TWI_THR) Host or Client Transmit Holding Data 3 Mask */
#define TWI_THR_FIFO_ENABLED_TXDATA3(value) (TWI_THR_FIFO_ENABLED_TXDATA3_Msk & (_UINT32_(value) << TWI_THR_FIFO_ENABLED_TXDATA3_Pos))
#define TWI_THR_FIFO_ENABLED_Msk         _UINT32_(0xFFFFFFFF)                                 /* (TWI_THR_FIFO_ENABLED) Register Mask  */


/* -------- TWI_SMBTR : (FLEXCOM Offset: 0x638) (R/W 32) TWI SMBus Timing Register -------- */
#define TWI_SMBTR_RESETVALUE             _UINT32_(0x00)                                       /*  (TWI_SMBTR) TWI SMBus Timing Register  Reset Value */

#define TWI_SMBTR_PRESC_Pos              _UINT32_(0)                                          /* (TWI_SMBTR) SMBus Clock Prescaler Position */
#define TWI_SMBTR_PRESC_Msk              (_UINT32_(0xF) << TWI_SMBTR_PRESC_Pos)          /* (TWI_SMBTR) SMBus Clock Prescaler Mask */
#define TWI_SMBTR_PRESC(value)           (TWI_SMBTR_PRESC_Msk & (_UINT32_(value) << TWI_SMBTR_PRESC_Pos)) /* Assignment of value for PRESC in the TWI_SMBTR register */
#define TWI_SMBTR_TLOWS_Pos              _UINT32_(8)                                          /* (TWI_SMBTR) Client Clock Stretch Maximum Cycles Position */
#define TWI_SMBTR_TLOWS_Msk              (_UINT32_(0xFF) << TWI_SMBTR_TLOWS_Pos)         /* (TWI_SMBTR) Client Clock Stretch Maximum Cycles Mask */
#define TWI_SMBTR_TLOWS(value)           (TWI_SMBTR_TLOWS_Msk & (_UINT32_(value) << TWI_SMBTR_TLOWS_Pos)) /* Assignment of value for TLOWS in the TWI_SMBTR register */
#define   TWI_SMBTR_TLOWS_0_Val          _UINT32_(0x0)                                        /* (TWI_SMBTR) TLOW:SEXT timeout check disabled.  */
#define TWI_SMBTR_TLOWS_0                (TWI_SMBTR_TLOWS_0_Val << TWI_SMBTR_TLOWS_Pos) /* (TWI_SMBTR) TLOW:SEXT timeout check disabled. Position */
#define TWI_SMBTR_TLOWM_Pos              _UINT32_(16)                                         /* (TWI_SMBTR) Host Clock Stretch Maximum Cycles Position */
#define TWI_SMBTR_TLOWM_Msk              (_UINT32_(0xFF) << TWI_SMBTR_TLOWM_Pos)         /* (TWI_SMBTR) Host Clock Stretch Maximum Cycles Mask */
#define TWI_SMBTR_TLOWM(value)           (TWI_SMBTR_TLOWM_Msk & (_UINT32_(value) << TWI_SMBTR_TLOWM_Pos)) /* Assignment of value for TLOWM in the TWI_SMBTR register */
#define   TWI_SMBTR_TLOWM_0_Val          _UINT32_(0x0)                                        /* (TWI_SMBTR) TLOW:MEXT timeout check disabled.  */
#define TWI_SMBTR_TLOWM_0                (TWI_SMBTR_TLOWM_0_Val << TWI_SMBTR_TLOWM_Pos) /* (TWI_SMBTR) TLOW:MEXT timeout check disabled. Position */
#define TWI_SMBTR_THMAX_Pos              _UINT32_(24)                                         /* (TWI_SMBTR) Clock High Maximum Cycles Position */
#define TWI_SMBTR_THMAX_Msk              (_UINT32_(0xFF) << TWI_SMBTR_THMAX_Pos)         /* (TWI_SMBTR) Clock High Maximum Cycles Mask */
#define TWI_SMBTR_THMAX(value)           (TWI_SMBTR_THMAX_Msk & (_UINT32_(value) << TWI_SMBTR_THMAX_Pos)) /* Assignment of value for THMAX in the TWI_SMBTR register */
#define TWI_SMBTR_Msk                    _UINT32_(0xFFFFFF0F)                                 /* (TWI_SMBTR) Register Mask  */


/* -------- TWI_HSR : (FLEXCOM Offset: 0x63C) (R/W 32) TWI High Speed Register -------- */
#define TWI_HSR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_HSR) TWI High Speed Register  Reset Value */

#define TWI_HSR_MCODE_Pos                _UINT32_(0)                                          /* (TWI_HSR) TWI High Speed Host Code Position */
#define TWI_HSR_MCODE_Msk                (_UINT32_(0xFF) << TWI_HSR_MCODE_Pos)           /* (TWI_HSR) TWI High Speed Host Code Mask */
#define TWI_HSR_MCODE(value)             (TWI_HSR_MCODE_Msk & (_UINT32_(value) << TWI_HSR_MCODE_Pos)) /* Assignment of value for MCODE in the TWI_HSR register */
#define TWI_HSR_Msk                      _UINT32_(0x000000FF)                                 /* (TWI_HSR) Register Mask  */


/* -------- TWI_ACR : (FLEXCOM Offset: 0x640) (R/W 32) TWI Alternative Command Register -------- */
#define TWI_ACR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_ACR) TWI Alternative Command Register  Reset Value */

#define TWI_ACR_DATAL_Pos                _UINT32_(0)                                          /* (TWI_ACR) Data Length Position */
#define TWI_ACR_DATAL_Msk                (_UINT32_(0xFF) << TWI_ACR_DATAL_Pos)           /* (TWI_ACR) Data Length Mask */
#define TWI_ACR_DATAL(value)             (TWI_ACR_DATAL_Msk & (_UINT32_(value) << TWI_ACR_DATAL_Pos)) /* Assignment of value for DATAL in the TWI_ACR register */
#define   TWI_ACR_DATAL_0_Val            _UINT32_(0x0)                                        /* (TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)").  */
#define TWI_ACR_DATAL_0                  (TWI_ACR_DATAL_0_Val << TWI_ACR_DATAL_Pos) /* (TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)"). Position */
#define TWI_ACR_DIR_Pos                  _UINT32_(8)                                          /* (TWI_ACR) Transfer Direction Position */
#define TWI_ACR_DIR_Msk                  (_UINT32_(0x1) << TWI_ACR_DIR_Pos)              /* (TWI_ACR) Transfer Direction Mask */
#define TWI_ACR_DIR(value)               (TWI_ACR_DIR_Msk & (_UINT32_(value) << TWI_ACR_DIR_Pos)) /* Assignment of value for DIR in the TWI_ACR register */
#define   TWI_ACR_DIR_0_Val              _UINT32_(0x0)                                        /* (TWI_ACR) Write direction.  */
#define   TWI_ACR_DIR_1_Val              _UINT32_(0x1)                                        /* (TWI_ACR) Read direction.  */
#define TWI_ACR_DIR_0                    (TWI_ACR_DIR_0_Val << TWI_ACR_DIR_Pos)     /* (TWI_ACR) Write direction. Position */
#define TWI_ACR_DIR_1                    (TWI_ACR_DIR_1_Val << TWI_ACR_DIR_Pos)     /* (TWI_ACR) Read direction. Position */
#define TWI_ACR_PEC_Pos                  _UINT32_(9)                                          /* (TWI_ACR) PEC Request (SMBus Mode only) Position */
#define TWI_ACR_PEC_Msk                  (_UINT32_(0x1) << TWI_ACR_PEC_Pos)              /* (TWI_ACR) PEC Request (SMBus Mode only) Mask */
#define TWI_ACR_PEC(value)               (TWI_ACR_PEC_Msk & (_UINT32_(value) << TWI_ACR_PEC_Pos)) /* Assignment of value for PEC in the TWI_ACR register */
#define   TWI_ACR_PEC_0_Val              _UINT32_(0x0)                                        /* (TWI_ACR) The transfer does not use a PEC byte.  */
#define   TWI_ACR_PEC_1_Val              _UINT32_(0x1)                                        /* (TWI_ACR) The transfer uses a PEC byte.  */
#define TWI_ACR_PEC_0                    (TWI_ACR_PEC_0_Val << TWI_ACR_PEC_Pos)     /* (TWI_ACR) The transfer does not use a PEC byte. Position */
#define TWI_ACR_PEC_1                    (TWI_ACR_PEC_1_Val << TWI_ACR_PEC_Pos)     /* (TWI_ACR) The transfer uses a PEC byte. Position */
#define TWI_ACR_NDATAL_Pos               _UINT32_(16)                                         /* (TWI_ACR) Next Data Length Position */
#define TWI_ACR_NDATAL_Msk               (_UINT32_(0xFF) << TWI_ACR_NDATAL_Pos)          /* (TWI_ACR) Next Data Length Mask */
#define TWI_ACR_NDATAL(value)            (TWI_ACR_NDATAL_Msk & (_UINT32_(value) << TWI_ACR_NDATAL_Pos)) /* Assignment of value for NDATAL in the TWI_ACR register */
#define   TWI_ACR_NDATAL_0_Val           _UINT32_(0x0)                                        /* (TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)").  */
#define TWI_ACR_NDATAL_0                 (TWI_ACR_NDATAL_0_Val << TWI_ACR_NDATAL_Pos) /* (TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)"). Position */
#define TWI_ACR_NDIR_Pos                 _UINT32_(24)                                         /* (TWI_ACR) Next Transfer Direction Position */
#define TWI_ACR_NDIR_Msk                 (_UINT32_(0x1) << TWI_ACR_NDIR_Pos)             /* (TWI_ACR) Next Transfer Direction Mask */
#define TWI_ACR_NDIR(value)              (TWI_ACR_NDIR_Msk & (_UINT32_(value) << TWI_ACR_NDIR_Pos)) /* Assignment of value for NDIR in the TWI_ACR register */
#define   TWI_ACR_NDIR_0_Val             _UINT32_(0x0)                                        /* (TWI_ACR) Write direction.  */
#define   TWI_ACR_NDIR_1_Val             _UINT32_(0x1)                                        /* (TWI_ACR) Read direction.  */
#define TWI_ACR_NDIR_0                   (TWI_ACR_NDIR_0_Val << TWI_ACR_NDIR_Pos)   /* (TWI_ACR) Write direction. Position */
#define TWI_ACR_NDIR_1                   (TWI_ACR_NDIR_1_Val << TWI_ACR_NDIR_Pos)   /* (TWI_ACR) Read direction. Position */
#define TWI_ACR_NPEC_Pos                 _UINT32_(25)                                         /* (TWI_ACR) Next PEC Request (SMBus Mode only) Position */
#define TWI_ACR_NPEC_Msk                 (_UINT32_(0x1) << TWI_ACR_NPEC_Pos)             /* (TWI_ACR) Next PEC Request (SMBus Mode only) Mask */
#define TWI_ACR_NPEC(value)              (TWI_ACR_NPEC_Msk & (_UINT32_(value) << TWI_ACR_NPEC_Pos)) /* Assignment of value for NPEC in the TWI_ACR register */
#define   TWI_ACR_NPEC_0_Val             _UINT32_(0x0)                                        /* (TWI_ACR) The next transfer does not use a PEC byte.  */
#define   TWI_ACR_NPEC_1_Val             _UINT32_(0x1)                                        /* (TWI_ACR) The next transfer uses a PEC byte.  */
#define TWI_ACR_NPEC_0                   (TWI_ACR_NPEC_0_Val << TWI_ACR_NPEC_Pos)   /* (TWI_ACR) The next transfer does not use a PEC byte. Position */
#define TWI_ACR_NPEC_1                   (TWI_ACR_NPEC_1_Val << TWI_ACR_NPEC_Pos)   /* (TWI_ACR) The next transfer uses a PEC byte. Position */
#define TWI_ACR_Msk                      _UINT32_(0x03FF03FF)                                 /* (TWI_ACR) Register Mask  */


/* -------- TWI_FILTR : (FLEXCOM Offset: 0x644) (R/W 32) TWI Filter Register -------- */
#define TWI_FILTR_RESETVALUE             _UINT32_(0x00)                                       /*  (TWI_FILTR) TWI Filter Register  Reset Value */

#define TWI_FILTR_FILT_Pos               _UINT32_(0)                                          /* (TWI_FILTR) RX Digital Filter Position */
#define TWI_FILTR_FILT_Msk               (_UINT32_(0x1) << TWI_FILTR_FILT_Pos)           /* (TWI_FILTR) RX Digital Filter Mask */
#define TWI_FILTR_FILT(value)            (TWI_FILTR_FILT_Msk & (_UINT32_(value) << TWI_FILTR_FILT_Pos)) /* Assignment of value for FILT in the TWI_FILTR register */
#define   TWI_FILTR_FILT_0_Val           _UINT32_(0x0)                                        /* (TWI_FILTR) No filtering applied on TWI inputs.  */
#define   TWI_FILTR_FILT_1_Val           _UINT32_(0x1)                                        /* (TWI_FILTR) TWI input filtering is active. (Only in Standard and Fast modes)  */
#define TWI_FILTR_FILT_0                 (TWI_FILTR_FILT_0_Val << TWI_FILTR_FILT_Pos) /* (TWI_FILTR) No filtering applied on TWI inputs. Position */
#define TWI_FILTR_FILT_1                 (TWI_FILTR_FILT_1_Val << TWI_FILTR_FILT_Pos) /* (TWI_FILTR) TWI input filtering is active. (Only in Standard and Fast modes) Position */
#define TWI_FILTR_PADFEN_Pos             _UINT32_(1)                                          /* (TWI_FILTR) PAD Filter Enable Position */
#define TWI_FILTR_PADFEN_Msk             (_UINT32_(0x1) << TWI_FILTR_PADFEN_Pos)         /* (TWI_FILTR) PAD Filter Enable Mask */
#define TWI_FILTR_PADFEN(value)          (TWI_FILTR_PADFEN_Msk & (_UINT32_(value) << TWI_FILTR_PADFEN_Pos)) /* Assignment of value for PADFEN in the TWI_FILTR register */
#define   TWI_FILTR_PADFEN_0_Val         _UINT32_(0x0)                                        /* (TWI_FILTR) PAD analog filter is disabled.  */
#define   TWI_FILTR_PADFEN_1_Val         _UINT32_(0x1)                                        /* (TWI_FILTR) PAD analog filter is enabled. (The analog filter must be enabled if High-speed mode is enabled.)  */
#define TWI_FILTR_PADFEN_0               (TWI_FILTR_PADFEN_0_Val << TWI_FILTR_PADFEN_Pos) /* (TWI_FILTR) PAD analog filter is disabled. Position */
#define TWI_FILTR_PADFEN_1               (TWI_FILTR_PADFEN_1_Val << TWI_FILTR_PADFEN_Pos) /* (TWI_FILTR) PAD analog filter is enabled. (The analog filter must be enabled if High-speed mode is enabled.) Position */
#define TWI_FILTR_THRES_Pos              _UINT32_(8)                                          /* (TWI_FILTR) Digital Filter Threshold Position */
#define TWI_FILTR_THRES_Msk              (_UINT32_(0x7) << TWI_FILTR_THRES_Pos)          /* (TWI_FILTR) Digital Filter Threshold Mask */
#define TWI_FILTR_THRES(value)           (TWI_FILTR_THRES_Msk & (_UINT32_(value) << TWI_FILTR_THRES_Pos)) /* Assignment of value for THRES in the TWI_FILTR register */
#define   TWI_FILTR_THRES_0_Val          _UINT32_(0x0)                                        /* (TWI_FILTR) No filtering applied on TWI inputs.  */
#define TWI_FILTR_THRES_0                (TWI_FILTR_THRES_0_Val << TWI_FILTR_THRES_Pos) /* (TWI_FILTR) No filtering applied on TWI inputs. Position */
#define TWI_FILTR_Msk                    _UINT32_(0x00000703)                                 /* (TWI_FILTR) Register Mask  */


/* -------- TWI_HSCWGR : (FLEXCOM Offset: 0x648) (R/W 32) TWI High Speed Clock Waveform Generator Register -------- */
#define TWI_HSCWGR_RESETVALUE            _UINT32_(0x00)                                       /*  (TWI_HSCWGR) TWI High Speed Clock Waveform Generator Register  Reset Value */

#define TWI_HSCWGR_HSCLDIV_Pos           _UINT32_(0)                                          /* (TWI_HSCWGR) High Speed Clock Low Divider Position */
#define TWI_HSCWGR_HSCLDIV_Msk           (_UINT32_(0xFF) << TWI_HSCWGR_HSCLDIV_Pos)      /* (TWI_HSCWGR) High Speed Clock Low Divider Mask */
#define TWI_HSCWGR_HSCLDIV(value)        (TWI_HSCWGR_HSCLDIV_Msk & (_UINT32_(value) << TWI_HSCWGR_HSCLDIV_Pos)) /* Assignment of value for HSCLDIV in the TWI_HSCWGR register */
#define TWI_HSCWGR_HSCHDIV_Pos           _UINT32_(8)                                          /* (TWI_HSCWGR) High Speed Clock High Divider Position */
#define TWI_HSCWGR_HSCHDIV_Msk           (_UINT32_(0xFF) << TWI_HSCWGR_HSCHDIV_Pos)      /* (TWI_HSCWGR) High Speed Clock High Divider Mask */
#define TWI_HSCWGR_HSCHDIV(value)        (TWI_HSCWGR_HSCHDIV_Msk & (_UINT32_(value) << TWI_HSCWGR_HSCHDIV_Pos)) /* Assignment of value for HSCHDIV in the TWI_HSCWGR register */
#define TWI_HSCWGR_HSCKDIV_Pos           _UINT32_(16)                                         /* (TWI_HSCWGR) High Speed Clock Divider Position */
#define TWI_HSCWGR_HSCKDIV_Msk           (_UINT32_(0x7) << TWI_HSCWGR_HSCKDIV_Pos)       /* (TWI_HSCWGR) High Speed Clock Divider Mask */
#define TWI_HSCWGR_HSCKDIV(value)        (TWI_HSCWGR_HSCKDIV_Msk & (_UINT32_(value) << TWI_HSCWGR_HSCKDIV_Pos)) /* Assignment of value for HSCKDIV in the TWI_HSCWGR register */
#define TWI_HSCWGR_Msk                   _UINT32_(0x0007FFFF)                                 /* (TWI_HSCWGR) Register Mask  */


/* -------- TWI_SWMR : (FLEXCOM Offset: 0x64C) (R/W 32) TWI Matching Register -------- */
#define TWI_SWMR_RESETVALUE              _UINT32_(0x00)                                       /*  (TWI_SWMR) TWI Matching Register  Reset Value */

#define TWI_SWMR_SADR1_Pos               _UINT32_(0)                                          /* (TWI_SWMR) Client Address 1 Position */
#define TWI_SWMR_SADR1_Msk               (_UINT32_(0x7F) << TWI_SWMR_SADR1_Pos)          /* (TWI_SWMR) Client Address 1 Mask */
#define TWI_SWMR_SADR1(value)            (TWI_SWMR_SADR1_Msk & (_UINT32_(value) << TWI_SWMR_SADR1_Pos)) /* Assignment of value for SADR1 in the TWI_SWMR register */
#define TWI_SWMR_SADR2_Pos               _UINT32_(8)                                          /* (TWI_SWMR) Client Address 2 Position */
#define TWI_SWMR_SADR2_Msk               (_UINT32_(0x7F) << TWI_SWMR_SADR2_Pos)          /* (TWI_SWMR) Client Address 2 Mask */
#define TWI_SWMR_SADR2(value)            (TWI_SWMR_SADR2_Msk & (_UINT32_(value) << TWI_SWMR_SADR2_Pos)) /* Assignment of value for SADR2 in the TWI_SWMR register */
#define TWI_SWMR_SADR3_Pos               _UINT32_(16)                                         /* (TWI_SWMR) Client Address 3 Position */
#define TWI_SWMR_SADR3_Msk               (_UINT32_(0x7F) << TWI_SWMR_SADR3_Pos)          /* (TWI_SWMR) Client Address 3 Mask */
#define TWI_SWMR_SADR3(value)            (TWI_SWMR_SADR3_Msk & (_UINT32_(value) << TWI_SWMR_SADR3_Pos)) /* Assignment of value for SADR3 in the TWI_SWMR register */
#define TWI_SWMR_DATAM_Pos               _UINT32_(24)                                         /* (TWI_SWMR) Data Match Position */
#define TWI_SWMR_DATAM_Msk               (_UINT32_(0xFF) << TWI_SWMR_DATAM_Pos)          /* (TWI_SWMR) Data Match Mask */
#define TWI_SWMR_DATAM(value)            (TWI_SWMR_DATAM_Msk & (_UINT32_(value) << TWI_SWMR_DATAM_Pos)) /* Assignment of value for DATAM in the TWI_SWMR register */
#define TWI_SWMR_Msk                     _UINT32_(0xFF7F7F7F)                                 /* (TWI_SWMR) Register Mask  */


/* -------- TWI_FMR : (FLEXCOM Offset: 0x650) (R/W 32) TWI FIFO Mode Register -------- */
#define TWI_FMR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_FMR) TWI FIFO Mode Register  Reset Value */

#define TWI_FMR_TXRDYM_Pos               _UINT32_(0)                                          /* (TWI_FMR) Transmitter Ready Mode Position */
#define TWI_FMR_TXRDYM_Msk               (_UINT32_(0x3) << TWI_FMR_TXRDYM_Pos)           /* (TWI_FMR) Transmitter Ready Mode Mask */
#define TWI_FMR_TXRDYM(value)            (TWI_FMR_TXRDYM_Msk & (_UINT32_(value) << TWI_FMR_TXRDYM_Pos)) /* Assignment of value for TXRDYM in the TWI_FMR register */
#define   TWI_FMR_TXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (TWI_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as byte.  */
#define   TWI_FMR_TXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (TWI_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   TWI_FMR_TXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (TWI_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   TWI_FMR_TXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (TWI_FMR) TXRDY will be at level '1' when at least eight data can be written in the transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define TWI_FMR_TXRDYM_ONE_DATA          (TWI_FMR_TXRDYM_ONE_DATA_Val << TWI_FMR_TXRDYM_Pos) /* (TWI_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as byte. Position */
#define TWI_FMR_TXRDYM_TWO_DATA          (TWI_FMR_TXRDYM_TWO_DATA_Val << TWI_FMR_TXRDYM_Pos) /* (TWI_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define TWI_FMR_TXRDYM_FOUR_DATA         (TWI_FMR_TXRDYM_FOUR_DATA_Val << TWI_FMR_TXRDYM_Pos) /* (TWI_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define TWI_FMR_TXRDYM_EIGHT_DATA        (TWI_FMR_TXRDYM_EIGHT_DATA_Val << TWI_FMR_TXRDYM_Pos) /* (TWI_FMR) TXRDY will be at level '1' when at least eight data can be written in the transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define TWI_FMR_RXRDYM_Pos               _UINT32_(4)                                          /* (TWI_FMR) Receiver Ready Mode Position */
#define TWI_FMR_RXRDYM_Msk               (_UINT32_(0x3) << TWI_FMR_RXRDYM_Pos)           /* (TWI_FMR) Receiver Ready Mode Mask */
#define TWI_FMR_RXRDYM(value)            (TWI_FMR_RXRDYM_Msk & (_UINT32_(value) << TWI_FMR_RXRDYM_Pos)) /* Assignment of value for RXRDYM in the TWI_FMR register */
#define   TWI_FMR_RXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (TWI_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type (byte, halfword) must be defined accordingly.  */
#define   TWI_FMR_RXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (TWI_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   TWI_FMR_RXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (TWI_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   TWI_FMR_RXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (TWI_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define TWI_FMR_RXRDYM_ONE_DATA          (TWI_FMR_RXRDYM_ONE_DATA_Val << TWI_FMR_RXRDYM_Pos) /* (TWI_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type (byte, halfword) must be defined accordingly. Position */
#define TWI_FMR_RXRDYM_TWO_DATA          (TWI_FMR_RXRDYM_TWO_DATA_Val << TWI_FMR_RXRDYM_Pos) /* (TWI_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define TWI_FMR_RXRDYM_FOUR_DATA         (TWI_FMR_RXRDYM_FOUR_DATA_Val << TWI_FMR_RXRDYM_Pos) /* (TWI_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define TWI_FMR_RXRDYM_EIGHT_DATA        (TWI_FMR_RXRDYM_EIGHT_DATA_Val << TWI_FMR_RXRDYM_Pos) /* (TWI_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define TWI_FMR_TXFTHRES_Pos             _UINT32_(16)                                         /* (TWI_FMR) Transmit FIFO Threshold Position */
#define TWI_FMR_TXFTHRES_Msk             (_UINT32_(0x3F) << TWI_FMR_TXFTHRES_Pos)        /* (TWI_FMR) Transmit FIFO Threshold Mask */
#define TWI_FMR_TXFTHRES(value)          (TWI_FMR_TXFTHRES_Msk & (_UINT32_(value) << TWI_FMR_TXFTHRES_Pos)) /* Assignment of value for TXFTHRES in the TWI_FMR register */
#define TWI_FMR_RXFTHRES_Pos             _UINT32_(24)                                         /* (TWI_FMR) Receive FIFO Threshold Position */
#define TWI_FMR_RXFTHRES_Msk             (_UINT32_(0x3F) << TWI_FMR_RXFTHRES_Pos)        /* (TWI_FMR) Receive FIFO Threshold Mask */
#define TWI_FMR_RXFTHRES(value)          (TWI_FMR_RXFTHRES_Msk & (_UINT32_(value) << TWI_FMR_RXFTHRES_Pos)) /* Assignment of value for RXFTHRES in the TWI_FMR register */
#define TWI_FMR_Msk                      _UINT32_(0x3F3F0033)                                 /* (TWI_FMR) Register Mask  */


/* -------- TWI_FLR : (FLEXCOM Offset: 0x654) ( R/ 32) TWI FIFO Level Register -------- */
#define TWI_FLR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_FLR) TWI FIFO Level Register  Reset Value */

#define TWI_FLR_TXFL_Pos                 _UINT32_(0)                                          /* (TWI_FLR) Transmit FIFO Level Position */
#define TWI_FLR_TXFL_Msk                 (_UINT32_(0x3F) << TWI_FLR_TXFL_Pos)            /* (TWI_FLR) Transmit FIFO Level Mask */
#define TWI_FLR_TXFL(value)              (TWI_FLR_TXFL_Msk & (_UINT32_(value) << TWI_FLR_TXFL_Pos)) /* Assignment of value for TXFL in the TWI_FLR register */
#define   TWI_FLR_TXFL_0_Val             _UINT32_(0x0)                                        /* (TWI_FLR) There is no data in the Transmit FIFO  */
#define TWI_FLR_TXFL_0                   (TWI_FLR_TXFL_0_Val << TWI_FLR_TXFL_Pos)   /* (TWI_FLR) There is no data in the Transmit FIFO Position */
#define TWI_FLR_RXFL_Pos                 _UINT32_(16)                                         /* (TWI_FLR) Receive FIFO Level Position */
#define TWI_FLR_RXFL_Msk                 (_UINT32_(0x3F) << TWI_FLR_RXFL_Pos)            /* (TWI_FLR) Receive FIFO Level Mask */
#define TWI_FLR_RXFL(value)              (TWI_FLR_RXFL_Msk & (_UINT32_(value) << TWI_FLR_RXFL_Pos)) /* Assignment of value for RXFL in the TWI_FLR register */
#define   TWI_FLR_RXFL_0_Val             _UINT32_(0x0)                                        /* (TWI_FLR) There is no unread data in the Receive FIFO  */
#define TWI_FLR_RXFL_0                   (TWI_FLR_RXFL_0_Val << TWI_FLR_RXFL_Pos)   /* (TWI_FLR) There is no unread data in the Receive FIFO Position */
#define TWI_FLR_Msk                      _UINT32_(0x003F003F)                                 /* (TWI_FLR) Register Mask  */


/* -------- TWI_FSR : (FLEXCOM Offset: 0x660) ( R/ 32) TWI FIFO Status Register -------- */
#define TWI_FSR_RESETVALUE               _UINT32_(0x00)                                       /*  (TWI_FSR) TWI FIFO Status Register  Reset Value */

#define TWI_FSR_TXFEF_Pos                _UINT32_(0)                                          /* (TWI_FSR) Transmit FIFO Empty Flag (cleared on read) Position */
#define TWI_FSR_TXFEF_Msk                (_UINT32_(0x1) << TWI_FSR_TXFEF_Pos)            /* (TWI_FSR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define TWI_FSR_TXFEF(value)             (TWI_FSR_TXFEF_Msk & (_UINT32_(value) << TWI_FSR_TXFEF_Pos)) /* Assignment of value for TXFEF in the TWI_FSR register */
#define   TWI_FSR_TXFEF_0_Val            _UINT32_(0x0)                                        /* (TWI_FSR) Transmit FIFO is not empty.  */
#define   TWI_FSR_TXFEF_1_Val            _UINT32_(0x1)                                        /* (TWI_FSR) Transmit FIFO has been emptied since the last read of TWI_FSR.  */
#define TWI_FSR_TXFEF_0                  (TWI_FSR_TXFEF_0_Val << TWI_FSR_TXFEF_Pos) /* (TWI_FSR) Transmit FIFO is not empty. Position */
#define TWI_FSR_TXFEF_1                  (TWI_FSR_TXFEF_1_Val << TWI_FSR_TXFEF_Pos) /* (TWI_FSR) Transmit FIFO has been emptied since the last read of TWI_FSR. Position */
#define TWI_FSR_TXFFF_Pos                _UINT32_(1)                                          /* (TWI_FSR) Transmit FIFO Full Flag (cleared on read) Position */
#define TWI_FSR_TXFFF_Msk                (_UINT32_(0x1) << TWI_FSR_TXFFF_Pos)            /* (TWI_FSR) Transmit FIFO Full Flag (cleared on read) Mask */
#define TWI_FSR_TXFFF(value)             (TWI_FSR_TXFFF_Msk & (_UINT32_(value) << TWI_FSR_TXFFF_Pos)) /* Assignment of value for TXFFF in the TWI_FSR register */
#define   TWI_FSR_TXFFF_0_Val            _UINT32_(0x0)                                        /* (TWI_FSR) Transmit FIFO is not full.  */
#define   TWI_FSR_TXFFF_1_Val            _UINT32_(0x1)                                        /* (TWI_FSR) Transmit FIFO has been filled since the last read of TWI_FSR.  */
#define TWI_FSR_TXFFF_0                  (TWI_FSR_TXFFF_0_Val << TWI_FSR_TXFFF_Pos) /* (TWI_FSR) Transmit FIFO is not full. Position */
#define TWI_FSR_TXFFF_1                  (TWI_FSR_TXFFF_1_Val << TWI_FSR_TXFFF_Pos) /* (TWI_FSR) Transmit FIFO has been filled since the last read of TWI_FSR. Position */
#define TWI_FSR_TXFTHF_Pos               _UINT32_(2)                                          /* (TWI_FSR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define TWI_FSR_TXFTHF_Msk               (_UINT32_(0x1) << TWI_FSR_TXFTHF_Pos)           /* (TWI_FSR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define TWI_FSR_TXFTHF(value)            (TWI_FSR_TXFTHF_Msk & (_UINT32_(value) << TWI_FSR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the TWI_FSR register */
#define   TWI_FSR_TXFTHF_0_Val           _UINT32_(0x0)                                        /* (TWI_FSR) Number of data in Transmit FIFO is above TXFTHRES threshold.  */
#define   TWI_FSR_TXFTHF_1_Val           _UINT32_(0x1)                                        /* (TWI_FSR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of TWI_FSR.  */
#define TWI_FSR_TXFTHF_0                 (TWI_FSR_TXFTHF_0_Val << TWI_FSR_TXFTHF_Pos) /* (TWI_FSR) Number of data in Transmit FIFO is above TXFTHRES threshold. Position */
#define TWI_FSR_TXFTHF_1                 (TWI_FSR_TXFTHF_1_Val << TWI_FSR_TXFTHF_Pos) /* (TWI_FSR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of TWI_FSR. Position */
#define TWI_FSR_RXFEF_Pos                _UINT32_(3)                                          /* (TWI_FSR) Receive FIFO Empty Flag Position */
#define TWI_FSR_RXFEF_Msk                (_UINT32_(0x1) << TWI_FSR_RXFEF_Pos)            /* (TWI_FSR) Receive FIFO Empty Flag Mask */
#define TWI_FSR_RXFEF(value)             (TWI_FSR_RXFEF_Msk & (_UINT32_(value) << TWI_FSR_RXFEF_Pos)) /* Assignment of value for RXFEF in the TWI_FSR register */
#define   TWI_FSR_RXFEF_0_Val            _UINT32_(0x0)                                        /* (TWI_FSR) Receive FIFO is not empty.  */
#define   TWI_FSR_RXFEF_1_Val            _UINT32_(0x1)                                        /* (TWI_FSR) Receive FIFO has been emptied since the last read of TWI_FSR.  */
#define TWI_FSR_RXFEF_0                  (TWI_FSR_RXFEF_0_Val << TWI_FSR_RXFEF_Pos) /* (TWI_FSR) Receive FIFO is not empty. Position */
#define TWI_FSR_RXFEF_1                  (TWI_FSR_RXFEF_1_Val << TWI_FSR_RXFEF_Pos) /* (TWI_FSR) Receive FIFO has been emptied since the last read of TWI_FSR. Position */
#define TWI_FSR_RXFFF_Pos                _UINT32_(4)                                          /* (TWI_FSR) Receive FIFO Full Flag Position */
#define TWI_FSR_RXFFF_Msk                (_UINT32_(0x1) << TWI_FSR_RXFFF_Pos)            /* (TWI_FSR) Receive FIFO Full Flag Mask */
#define TWI_FSR_RXFFF(value)             (TWI_FSR_RXFFF_Msk & (_UINT32_(value) << TWI_FSR_RXFFF_Pos)) /* Assignment of value for RXFFF in the TWI_FSR register */
#define   TWI_FSR_RXFFF_0_Val            _UINT32_(0x0)                                        /* (TWI_FSR) Receive FIFO is not empty.  */
#define   TWI_FSR_RXFFF_1_Val            _UINT32_(0x1)                                        /* (TWI_FSR) Receive FIFO has been filled since the last read of TWI_FSR.  */
#define TWI_FSR_RXFFF_0                  (TWI_FSR_RXFFF_0_Val << TWI_FSR_RXFFF_Pos) /* (TWI_FSR) Receive FIFO is not empty. Position */
#define TWI_FSR_RXFFF_1                  (TWI_FSR_RXFFF_1_Val << TWI_FSR_RXFFF_Pos) /* (TWI_FSR) Receive FIFO has been filled since the last read of TWI_FSR. Position */
#define TWI_FSR_RXFTHF_Pos               _UINT32_(5)                                          /* (TWI_FSR) Receive FIFO Threshold Flag Position */
#define TWI_FSR_RXFTHF_Msk               (_UINT32_(0x1) << TWI_FSR_RXFTHF_Pos)           /* (TWI_FSR) Receive FIFO Threshold Flag Mask */
#define TWI_FSR_RXFTHF(value)            (TWI_FSR_RXFTHF_Msk & (_UINT32_(value) << TWI_FSR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the TWI_FSR register */
#define   TWI_FSR_RXFTHF_0_Val           _UINT32_(0x0)                                        /* (TWI_FSR) Number of unread data in Receive FIFO is below RXFTHRES threshold.  */
#define   TWI_FSR_RXFTHF_1_Val           _UINT32_(0x1)                                        /* (TWI_FSR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last read of TWI_FSR.  */
#define TWI_FSR_RXFTHF_0                 (TWI_FSR_RXFTHF_0_Val << TWI_FSR_RXFTHF_Pos) /* (TWI_FSR) Number of unread data in Receive FIFO is below RXFTHRES threshold. Position */
#define TWI_FSR_RXFTHF_1                 (TWI_FSR_RXFTHF_1_Val << TWI_FSR_RXFTHF_Pos) /* (TWI_FSR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last read of TWI_FSR. Position */
#define TWI_FSR_TXFPTEF_Pos              _UINT32_(6)                                          /* (TWI_FSR) Transmit FIFO Overflow Error Flag Position */
#define TWI_FSR_TXFPTEF_Msk              (_UINT32_(0x1) << TWI_FSR_TXFPTEF_Pos)          /* (TWI_FSR) Transmit FIFO Overflow Error Flag Mask */
#define TWI_FSR_TXFPTEF(value)           (TWI_FSR_TXFPTEF_Msk & (_UINT32_(value) << TWI_FSR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the TWI_FSR register */
#define   TWI_FSR_TXFPTEF_0_Val          _UINT32_(0x0)                                        /* (TWI_FSR) No Transmit FIFO overflow occurred.  */
#define   TWI_FSR_TXFPTEF_1_Val          _UINT32_(0x1)                                        /* (TWI_FSR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing SPI_CR.SWRST=1.  */
#define TWI_FSR_TXFPTEF_0                (TWI_FSR_TXFPTEF_0_Val << TWI_FSR_TXFPTEF_Pos) /* (TWI_FSR) No Transmit FIFO overflow occurred. Position */
#define TWI_FSR_TXFPTEF_1                (TWI_FSR_TXFPTEF_1_Val << TWI_FSR_TXFPTEF_Pos) /* (TWI_FSR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing SPI_CR.SWRST=1. Position */
#define TWI_FSR_RXFPTEF_Pos              _UINT32_(7)                                          /* (TWI_FSR) Receive FIFO Underflow Error Flag Position */
#define TWI_FSR_RXFPTEF_Msk              (_UINT32_(0x1) << TWI_FSR_RXFPTEF_Pos)          /* (TWI_FSR) Receive FIFO Underflow Error Flag Mask */
#define TWI_FSR_RXFPTEF(value)           (TWI_FSR_RXFPTEF_Msk & (_UINT32_(value) << TWI_FSR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the TWI_FSR register */
#define   TWI_FSR_RXFPTEF_0_Val          _UINT32_(0x0)                                        /* (TWI_FSR) No Receive FIFO underflow occurred.  */
#define   TWI_FSR_RXFPTEF_1_Val          _UINT32_(0x1)                                        /* (TWI_FSR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing SPI_CR.SWRST=1.  */
#define TWI_FSR_RXFPTEF_0                (TWI_FSR_RXFPTEF_0_Val << TWI_FSR_RXFPTEF_Pos) /* (TWI_FSR) No Receive FIFO underflow occurred. Position */
#define TWI_FSR_RXFPTEF_1                (TWI_FSR_RXFPTEF_1_Val << TWI_FSR_RXFPTEF_Pos) /* (TWI_FSR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing SPI_CR.SWRST=1. Position */
#define TWI_FSR_Msk                      _UINT32_(0x000000FF)                                 /* (TWI_FSR) Register Mask  */


/* -------- TWI_FIER : (FLEXCOM Offset: 0x664) ( /W 32) TWI FIFO Interrupt Enable Register -------- */
#define TWI_FIER_TXFEF_Pos               _UINT32_(0)                                          /* (TWI_FIER) TXFEF Interrupt Enable Position */
#define TWI_FIER_TXFEF_Msk               (_UINT32_(0x1) << TWI_FIER_TXFEF_Pos)           /* (TWI_FIER) TXFEF Interrupt Enable Mask */
#define TWI_FIER_TXFEF(value)            (TWI_FIER_TXFEF_Msk & (_UINT32_(value) << TWI_FIER_TXFEF_Pos)) /* Assignment of value for TXFEF in the TWI_FIER register */
#define TWI_FIER_TXFFF_Pos               _UINT32_(1)                                          /* (TWI_FIER) TXFFF Interrupt Enable Position */
#define TWI_FIER_TXFFF_Msk               (_UINT32_(0x1) << TWI_FIER_TXFFF_Pos)           /* (TWI_FIER) TXFFF Interrupt Enable Mask */
#define TWI_FIER_TXFFF(value)            (TWI_FIER_TXFFF_Msk & (_UINT32_(value) << TWI_FIER_TXFFF_Pos)) /* Assignment of value for TXFFF in the TWI_FIER register */
#define TWI_FIER_TXFTHF_Pos              _UINT32_(2)                                          /* (TWI_FIER) TXFTHF Interrupt Enable Position */
#define TWI_FIER_TXFTHF_Msk              (_UINT32_(0x1) << TWI_FIER_TXFTHF_Pos)          /* (TWI_FIER) TXFTHF Interrupt Enable Mask */
#define TWI_FIER_TXFTHF(value)           (TWI_FIER_TXFTHF_Msk & (_UINT32_(value) << TWI_FIER_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the TWI_FIER register */
#define TWI_FIER_RXFEF_Pos               _UINT32_(3)                                          /* (TWI_FIER) RXFEF Interrupt Enable Position */
#define TWI_FIER_RXFEF_Msk               (_UINT32_(0x1) << TWI_FIER_RXFEF_Pos)           /* (TWI_FIER) RXFEF Interrupt Enable Mask */
#define TWI_FIER_RXFEF(value)            (TWI_FIER_RXFEF_Msk & (_UINT32_(value) << TWI_FIER_RXFEF_Pos)) /* Assignment of value for RXFEF in the TWI_FIER register */
#define TWI_FIER_RXFFF_Pos               _UINT32_(4)                                          /* (TWI_FIER) RXFFF Interrupt Enable Position */
#define TWI_FIER_RXFFF_Msk               (_UINT32_(0x1) << TWI_FIER_RXFFF_Pos)           /* (TWI_FIER) RXFFF Interrupt Enable Mask */
#define TWI_FIER_RXFFF(value)            (TWI_FIER_RXFFF_Msk & (_UINT32_(value) << TWI_FIER_RXFFF_Pos)) /* Assignment of value for RXFFF in the TWI_FIER register */
#define TWI_FIER_RXFTHF_Pos              _UINT32_(5)                                          /* (TWI_FIER) RXFTHF Interrupt Enable Position */
#define TWI_FIER_RXFTHF_Msk              (_UINT32_(0x1) << TWI_FIER_RXFTHF_Pos)          /* (TWI_FIER) RXFTHF Interrupt Enable Mask */
#define TWI_FIER_RXFTHF(value)           (TWI_FIER_RXFTHF_Msk & (_UINT32_(value) << TWI_FIER_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the TWI_FIER register */
#define TWI_FIER_TXFPTEF_Pos             _UINT32_(6)                                          /* (TWI_FIER) TXFPTEF Interrupt Enable Position */
#define TWI_FIER_TXFPTEF_Msk             (_UINT32_(0x1) << TWI_FIER_TXFPTEF_Pos)         /* (TWI_FIER) TXFPTEF Interrupt Enable Mask */
#define TWI_FIER_TXFPTEF(value)          (TWI_FIER_TXFPTEF_Msk & (_UINT32_(value) << TWI_FIER_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the TWI_FIER register */
#define TWI_FIER_RXFPTEF_Pos             _UINT32_(7)                                          /* (TWI_FIER) RXFPTEF Interrupt Enable Position */
#define TWI_FIER_RXFPTEF_Msk             (_UINT32_(0x1) << TWI_FIER_RXFPTEF_Pos)         /* (TWI_FIER) RXFPTEF Interrupt Enable Mask */
#define TWI_FIER_RXFPTEF(value)          (TWI_FIER_RXFPTEF_Msk & (_UINT32_(value) << TWI_FIER_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the TWI_FIER register */
#define TWI_FIER_Msk                     _UINT32_(0x000000FF)                                 /* (TWI_FIER) Register Mask  */


/* -------- TWI_FIDR : (FLEXCOM Offset: 0x668) ( /W 32) TWI FIFO Interrupt Disable Register -------- */
#define TWI_FIDR_TXFEF_Pos               _UINT32_(0)                                          /* (TWI_FIDR) TXFEF Interrupt Disable Position */
#define TWI_FIDR_TXFEF_Msk               (_UINT32_(0x1) << TWI_FIDR_TXFEF_Pos)           /* (TWI_FIDR) TXFEF Interrupt Disable Mask */
#define TWI_FIDR_TXFEF(value)            (TWI_FIDR_TXFEF_Msk & (_UINT32_(value) << TWI_FIDR_TXFEF_Pos)) /* Assignment of value for TXFEF in the TWI_FIDR register */
#define TWI_FIDR_TXFFF_Pos               _UINT32_(1)                                          /* (TWI_FIDR) TXFFF Interrupt Disable Position */
#define TWI_FIDR_TXFFF_Msk               (_UINT32_(0x1) << TWI_FIDR_TXFFF_Pos)           /* (TWI_FIDR) TXFFF Interrupt Disable Mask */
#define TWI_FIDR_TXFFF(value)            (TWI_FIDR_TXFFF_Msk & (_UINT32_(value) << TWI_FIDR_TXFFF_Pos)) /* Assignment of value for TXFFF in the TWI_FIDR register */
#define TWI_FIDR_TXFTHF_Pos              _UINT32_(2)                                          /* (TWI_FIDR) TXFTHF Interrupt Disable Position */
#define TWI_FIDR_TXFTHF_Msk              (_UINT32_(0x1) << TWI_FIDR_TXFTHF_Pos)          /* (TWI_FIDR) TXFTHF Interrupt Disable Mask */
#define TWI_FIDR_TXFTHF(value)           (TWI_FIDR_TXFTHF_Msk & (_UINT32_(value) << TWI_FIDR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the TWI_FIDR register */
#define TWI_FIDR_RXFEF_Pos               _UINT32_(3)                                          /* (TWI_FIDR) RXFEF Interrupt Disable Position */
#define TWI_FIDR_RXFEF_Msk               (_UINT32_(0x1) << TWI_FIDR_RXFEF_Pos)           /* (TWI_FIDR) RXFEF Interrupt Disable Mask */
#define TWI_FIDR_RXFEF(value)            (TWI_FIDR_RXFEF_Msk & (_UINT32_(value) << TWI_FIDR_RXFEF_Pos)) /* Assignment of value for RXFEF in the TWI_FIDR register */
#define TWI_FIDR_RXFFF_Pos               _UINT32_(4)                                          /* (TWI_FIDR) RXFFF Interrupt Disable Position */
#define TWI_FIDR_RXFFF_Msk               (_UINT32_(0x1) << TWI_FIDR_RXFFF_Pos)           /* (TWI_FIDR) RXFFF Interrupt Disable Mask */
#define TWI_FIDR_RXFFF(value)            (TWI_FIDR_RXFFF_Msk & (_UINT32_(value) << TWI_FIDR_RXFFF_Pos)) /* Assignment of value for RXFFF in the TWI_FIDR register */
#define TWI_FIDR_RXFTHF_Pos              _UINT32_(5)                                          /* (TWI_FIDR) RXFTHF Interrupt Disable Position */
#define TWI_FIDR_RXFTHF_Msk              (_UINT32_(0x1) << TWI_FIDR_RXFTHF_Pos)          /* (TWI_FIDR) RXFTHF Interrupt Disable Mask */
#define TWI_FIDR_RXFTHF(value)           (TWI_FIDR_RXFTHF_Msk & (_UINT32_(value) << TWI_FIDR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the TWI_FIDR register */
#define TWI_FIDR_TXFPTEF_Pos             _UINT32_(6)                                          /* (TWI_FIDR) TXFPTEF Interrupt Disable Position */
#define TWI_FIDR_TXFPTEF_Msk             (_UINT32_(0x1) << TWI_FIDR_TXFPTEF_Pos)         /* (TWI_FIDR) TXFPTEF Interrupt Disable Mask */
#define TWI_FIDR_TXFPTEF(value)          (TWI_FIDR_TXFPTEF_Msk & (_UINT32_(value) << TWI_FIDR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the TWI_FIDR register */
#define TWI_FIDR_RXFPTEF_Pos             _UINT32_(7)                                          /* (TWI_FIDR) RXFPTEF Interrupt Disable Position */
#define TWI_FIDR_RXFPTEF_Msk             (_UINT32_(0x1) << TWI_FIDR_RXFPTEF_Pos)         /* (TWI_FIDR) RXFPTEF Interrupt Disable Mask */
#define TWI_FIDR_RXFPTEF(value)          (TWI_FIDR_RXFPTEF_Msk & (_UINT32_(value) << TWI_FIDR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the TWI_FIDR register */
#define TWI_FIDR_Msk                     _UINT32_(0x000000FF)                                 /* (TWI_FIDR) Register Mask  */


/* -------- TWI_FIMR : (FLEXCOM Offset: 0x66C) ( R/ 32) TWI FIFO Interrupt Mask Register -------- */
#define TWI_FIMR_RESETVALUE              _UINT32_(0x00)                                       /*  (TWI_FIMR) TWI FIFO Interrupt Mask Register  Reset Value */

#define TWI_FIMR_TXFEF_Pos               _UINT32_(0)                                          /* (TWI_FIMR) TXFEF Interrupt Mask Position */
#define TWI_FIMR_TXFEF_Msk               (_UINT32_(0x1) << TWI_FIMR_TXFEF_Pos)           /* (TWI_FIMR) TXFEF Interrupt Mask Mask */
#define TWI_FIMR_TXFEF(value)            (TWI_FIMR_TXFEF_Msk & (_UINT32_(value) << TWI_FIMR_TXFEF_Pos)) /* Assignment of value for TXFEF in the TWI_FIMR register */
#define TWI_FIMR_TXFFF_Pos               _UINT32_(1)                                          /* (TWI_FIMR) TXFFF Interrupt Mask Position */
#define TWI_FIMR_TXFFF_Msk               (_UINT32_(0x1) << TWI_FIMR_TXFFF_Pos)           /* (TWI_FIMR) TXFFF Interrupt Mask Mask */
#define TWI_FIMR_TXFFF(value)            (TWI_FIMR_TXFFF_Msk & (_UINT32_(value) << TWI_FIMR_TXFFF_Pos)) /* Assignment of value for TXFFF in the TWI_FIMR register */
#define TWI_FIMR_TXFTHF_Pos              _UINT32_(2)                                          /* (TWI_FIMR) TXFTHF Interrupt Mask Position */
#define TWI_FIMR_TXFTHF_Msk              (_UINT32_(0x1) << TWI_FIMR_TXFTHF_Pos)          /* (TWI_FIMR) TXFTHF Interrupt Mask Mask */
#define TWI_FIMR_TXFTHF(value)           (TWI_FIMR_TXFTHF_Msk & (_UINT32_(value) << TWI_FIMR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the TWI_FIMR register */
#define TWI_FIMR_RXFEF_Pos               _UINT32_(3)                                          /* (TWI_FIMR) RXFEF Interrupt Mask Position */
#define TWI_FIMR_RXFEF_Msk               (_UINT32_(0x1) << TWI_FIMR_RXFEF_Pos)           /* (TWI_FIMR) RXFEF Interrupt Mask Mask */
#define TWI_FIMR_RXFEF(value)            (TWI_FIMR_RXFEF_Msk & (_UINT32_(value) << TWI_FIMR_RXFEF_Pos)) /* Assignment of value for RXFEF in the TWI_FIMR register */
#define TWI_FIMR_RXFFF_Pos               _UINT32_(4)                                          /* (TWI_FIMR) RXFFF Interrupt Mask Position */
#define TWI_FIMR_RXFFF_Msk               (_UINT32_(0x1) << TWI_FIMR_RXFFF_Pos)           /* (TWI_FIMR) RXFFF Interrupt Mask Mask */
#define TWI_FIMR_RXFFF(value)            (TWI_FIMR_RXFFF_Msk & (_UINT32_(value) << TWI_FIMR_RXFFF_Pos)) /* Assignment of value for RXFFF in the TWI_FIMR register */
#define TWI_FIMR_RXFTHF_Pos              _UINT32_(5)                                          /* (TWI_FIMR) RXFTHF Interrupt Mask Position */
#define TWI_FIMR_RXFTHF_Msk              (_UINT32_(0x1) << TWI_FIMR_RXFTHF_Pos)          /* (TWI_FIMR) RXFTHF Interrupt Mask Mask */
#define TWI_FIMR_RXFTHF(value)           (TWI_FIMR_RXFTHF_Msk & (_UINT32_(value) << TWI_FIMR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the TWI_FIMR register */
#define TWI_FIMR_TXFPTEF_Pos             _UINT32_(6)                                          /* (TWI_FIMR) TXFPTEF Interrupt Mask Position */
#define TWI_FIMR_TXFPTEF_Msk             (_UINT32_(0x1) << TWI_FIMR_TXFPTEF_Pos)         /* (TWI_FIMR) TXFPTEF Interrupt Mask Mask */
#define TWI_FIMR_TXFPTEF(value)          (TWI_FIMR_TXFPTEF_Msk & (_UINT32_(value) << TWI_FIMR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the TWI_FIMR register */
#define TWI_FIMR_RXFPTEF_Pos             _UINT32_(7)                                          /* (TWI_FIMR) RXFPTEF Interrupt Mask Position */
#define TWI_FIMR_RXFPTEF_Msk             (_UINT32_(0x1) << TWI_FIMR_RXFPTEF_Pos)         /* (TWI_FIMR) RXFPTEF Interrupt Mask Mask */
#define TWI_FIMR_RXFPTEF(value)          (TWI_FIMR_RXFPTEF_Msk & (_UINT32_(value) << TWI_FIMR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the TWI_FIMR register */
#define TWI_FIMR_Msk                     _UINT32_(0x000000FF)                                 /* (TWI_FIMR) Register Mask  */


/* -------- TWI_WPMR : (FLEXCOM Offset: 0x6E4) (R/W 32) TWI Write Protection Mode Register -------- */
#define TWI_WPMR_RESETVALUE              _UINT32_(0x00)                                       /*  (TWI_WPMR) TWI Write Protection Mode Register  Reset Value */

#define TWI_WPMR_WPEN_Pos                _UINT32_(0)                                          /* (TWI_WPMR) Write Protection Enable Position */
#define TWI_WPMR_WPEN_Msk                (_UINT32_(0x1) << TWI_WPMR_WPEN_Pos)            /* (TWI_WPMR) Write Protection Enable Mask */
#define TWI_WPMR_WPEN(value)             (TWI_WPMR_WPEN_Msk & (_UINT32_(value) << TWI_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the TWI_WPMR register */
#define   TWI_WPMR_WPEN_0_Val            _UINT32_(0x0)                                        /* (TWI_WPMR) Disables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define   TWI_WPMR_WPEN_1_Val            _UINT32_(0x1)                                        /* (TWI_WPMR) Enables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define TWI_WPMR_WPEN_0                  (TWI_WPMR_WPEN_0_Val << TWI_WPMR_WPEN_Pos) /* (TWI_WPMR) Disables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define TWI_WPMR_WPEN_1                  (TWI_WPMR_WPEN_1_Val << TWI_WPMR_WPEN_Pos) /* (TWI_WPMR) Enables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define TWI_WPMR_WPITEN_Pos              _UINT32_(1)                                          /* (TWI_WPMR) Write Protection Interrupt Enable Position */
#define TWI_WPMR_WPITEN_Msk              (_UINT32_(0x1) << TWI_WPMR_WPITEN_Pos)          /* (TWI_WPMR) Write Protection Interrupt Enable Mask */
#define TWI_WPMR_WPITEN(value)           (TWI_WPMR_WPITEN_Msk & (_UINT32_(value) << TWI_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the TWI_WPMR register */
#define   TWI_WPMR_WPITEN_0_Val          _UINT32_(0x0)                                        /* (TWI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define   TWI_WPMR_WPITEN_1_Val          _UINT32_(0x1)                                        /* (TWI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define TWI_WPMR_WPITEN_0                (TWI_WPMR_WPITEN_0_Val << TWI_WPMR_WPITEN_Pos) /* (TWI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define TWI_WPMR_WPITEN_1                (TWI_WPMR_WPITEN_1_Val << TWI_WPMR_WPITEN_Pos) /* (TWI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define TWI_WPMR_WPCREN_Pos              _UINT32_(2)                                          /* (TWI_WPMR) Write Protection Control Enable Position */
#define TWI_WPMR_WPCREN_Msk              (_UINT32_(0x1) << TWI_WPMR_WPCREN_Pos)          /* (TWI_WPMR) Write Protection Control Enable Mask */
#define TWI_WPMR_WPCREN(value)           (TWI_WPMR_WPCREN_Msk & (_UINT32_(value) << TWI_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the TWI_WPMR register */
#define   TWI_WPMR_WPCREN_0_Val          _UINT32_(0x0)                                        /* (TWI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define   TWI_WPMR_WPCREN_1_Val          _UINT32_(0x1)                                        /* (TWI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define TWI_WPMR_WPCREN_0                (TWI_WPMR_WPCREN_0_Val << TWI_WPMR_WPCREN_Pos) /* (TWI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define TWI_WPMR_WPCREN_1                (TWI_WPMR_WPCREN_1_Val << TWI_WPMR_WPCREN_Pos) /* (TWI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define TWI_WPMR_WPKEY_Pos               _UINT32_(8)                                          /* (TWI_WPMR) Write Protection Key Position */
#define TWI_WPMR_WPKEY_Msk               (_UINT32_(0xFFFFFF) << TWI_WPMR_WPKEY_Pos)      /* (TWI_WPMR) Write Protection Key Mask */
#define TWI_WPMR_WPKEY(value)            (TWI_WPMR_WPKEY_Msk & (_UINT32_(value) << TWI_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the TWI_WPMR register */
#define   TWI_WPMR_WPKEY_PASSWD_Val      _UINT32_(0x545749)                                   /* (TWI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0  */
#define TWI_WPMR_WPKEY_PASSWD            (TWI_WPMR_WPKEY_PASSWD_Val << TWI_WPMR_WPKEY_Pos) /* (TWI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0 Position */
#define TWI_WPMR_Msk                     _UINT32_(0xFFFFFF07)                                 /* (TWI_WPMR) Register Mask  */


/* -------- TWI_WPSR : (FLEXCOM Offset: 0x6E8) ( R/ 32) TWI Write Protection Status Register -------- */
#define TWI_WPSR_RESETVALUE              _UINT32_(0x00)                                       /*  (TWI_WPSR) TWI Write Protection Status Register  Reset Value */

#define TWI_WPSR_WPVS_Pos                _UINT32_(0)                                          /* (TWI_WPSR) Write Protect Violation Status (cleared on read) Position */
#define TWI_WPSR_WPVS_Msk                (_UINT32_(0x1) << TWI_WPSR_WPVS_Pos)            /* (TWI_WPSR) Write Protect Violation Status (cleared on read) Mask */
#define TWI_WPSR_WPVS(value)             (TWI_WPSR_WPVS_Msk & (_UINT32_(value) << TWI_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the TWI_WPSR register */
#define   TWI_WPSR_WPVS_0_Val            _UINT32_(0x0)                                        /* (TWI_WPSR) No Write Protection Violation has occurred since the last read of TWI_WPSR.  */
#define   TWI_WPSR_WPVS_1_Val            _UINT32_(0x1)                                        /* (TWI_WPSR) A Write Protection Violation has occurred since the last read of TWI_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define TWI_WPSR_WPVS_0                  (TWI_WPSR_WPVS_0_Val << TWI_WPSR_WPVS_Pos) /* (TWI_WPSR) No Write Protection Violation has occurred since the last read of TWI_WPSR. Position */
#define TWI_WPSR_WPVS_1                  (TWI_WPSR_WPVS_1_Val << TWI_WPSR_WPVS_Pos) /* (TWI_WPSR) A Write Protection Violation has occurred since the last read of TWI_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define TWI_WPSR_PADERR_Pos              _UINT32_(1)                                          /* (TWI_WPSR) Output PAD Error (cleared on read) Position */
#define TWI_WPSR_PADERR_Msk              (_UINT32_(0x1) << TWI_WPSR_PADERR_Pos)          /* (TWI_WPSR) Output PAD Error (cleared on read) Mask */
#define TWI_WPSR_PADERR(value)           (TWI_WPSR_PADERR_Msk & (_UINT32_(value) << TWI_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the TWI_WPSR register */
#define   TWI_WPSR_PADERR_0_Val          _UINT32_(0x0)                                        /* (TWI_WPSR) No error detected during a character transfer in host mode. Cleared in client mode.  */
#define   TWI_WPSR_PADERR_1_Val          _UINT32_(0x1)                                        /* (TWI_WPSR) Stuck-at 1 detected on TWCK output pad for more than 1 period or 2 successive erroneous bit value on TWD (transmitting a 1 and reading 0 at the end of the bit period) detected. This may be due to erroneous IO multiplexing configuration, external short circuits, etc.  */
#define TWI_WPSR_PADERR_0                (TWI_WPSR_PADERR_0_Val << TWI_WPSR_PADERR_Pos) /* (TWI_WPSR) No error detected during a character transfer in host mode. Cleared in client mode. Position */
#define TWI_WPSR_PADERR_1                (TWI_WPSR_PADERR_1_Val << TWI_WPSR_PADERR_Pos) /* (TWI_WPSR) Stuck-at 1 detected on TWCK output pad for more than 1 period or 2 successive erroneous bit value on TWD (transmitting a 1 and reading 0 at the end of the bit period) detected. This may be due to erroneous IO multiplexing configuration, external short circuits, etc. Position */
#define TWI_WPSR_WPVSRC_Pos              _UINT32_(8)                                          /* (TWI_WPSR) Write Protection Violation Source Position */
#define TWI_WPSR_WPVSRC_Msk              (_UINT32_(0xFFFFFF) << TWI_WPSR_WPVSRC_Pos)     /* (TWI_WPSR) Write Protection Violation Source Mask */
#define TWI_WPSR_WPVSRC(value)           (TWI_WPSR_WPVSRC_Msk & (_UINT32_(value) << TWI_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the TWI_WPSR register */
#define TWI_WPSR_Msk                     _UINT32_(0xFFFFFF03)                                 /* (TWI_WPSR) Register Mask  */


/* FLEXCOM register offsets definitions */
#define MR_REG_OFST               _UINT32_(0x00)      /* (MR) FLEXCOM Mode Register Offset */
#define RHR_REG_OFST              _UINT32_(0x10)      /* (RHR) FLEXCOM Receive Holding Register Offset */
#define THR_REG_OFST              _UINT32_(0x20)      /* (THR) FLEXCOM Transmit Holding Register Offset */
#define US_CR_REG_OFST            _UINT32_(0x200)     /* (US_CR) USART Control Register Offset */
#define US_MR_REG_OFST            _UINT32_(0x204)     /* (US_MR) USART Mode Register Offset */
#define US_IER_REG_OFST           _UINT32_(0x208)     /* (US_IER) USART Interrupt Enable Register Offset */
#define US_IDR_REG_OFST           _UINT32_(0x20C)     /* (US_IDR) USART Interrupt Disable Register Offset */
#define US_IMR_REG_OFST           _UINT32_(0x210)     /* (US_IMR) USART Interrupt Mask Register Offset */
#define US_CSR_REG_OFST           _UINT32_(0x214)     /* (US_CSR) USART Channel Status Register Offset */
#define US_RHR_REG_OFST           _UINT32_(0x218)     /* (US_RHR) USART Receive Holding Register Offset */
#define US_THR_REG_OFST           _UINT32_(0x21C)     /* (US_THR) USART Transmit Holding Register Offset */
#define US_BRGR_REG_OFST          _UINT32_(0x220)     /* (US_BRGR) USART Baud Rate Generator Register Offset */
#define US_RTOR_REG_OFST          _UINT32_(0x224)     /* (US_RTOR) USART Receiver Timeout Register Offset */
#define US_TTGR_REG_OFST          _UINT32_(0x228)     /* (US_TTGR) USART Transmitter Timeguard Register Offset */
#define US_FIDI_REG_OFST          _UINT32_(0x240)     /* (US_FIDI) USART FI DI Ratio Register Offset */
#define US_NER_REG_OFST           _UINT32_(0x244)     /* (US_NER) USART Number of Errors Register Offset */
#define US_IF_REG_OFST            _UINT32_(0x24C)     /* (US_IF) USART IrDA Filter Register Offset */
#define US_MAN_REG_OFST           _UINT32_(0x250)     /* (US_MAN) USART Manchester Configuration Register Offset */
#define US_LINMR_REG_OFST         _UINT32_(0x254)     /* (US_LINMR) USART LIN Mode Register Offset */
#define US_LINIR_REG_OFST         _UINT32_(0x258)     /* (US_LINIR) USART LIN Identifier Register Offset */
#define US_LINBRR_REG_OFST        _UINT32_(0x25C)     /* (US_LINBRR) USART LIN Baud Rate Register Offset */
#define US_CMPR_REG_OFST          _UINT32_(0x290)     /* (US_CMPR) USART Comparison Register Offset */
#define US_FMR_REG_OFST           _UINT32_(0x2A0)     /* (US_FMR) USART FIFO Mode Register Offset */
#define US_FLR_REG_OFST           _UINT32_(0x2A4)     /* (US_FLR) USART FIFO Level Register Offset */
#define US_FIER_REG_OFST          _UINT32_(0x2A8)     /* (US_FIER) USART FIFO Interrupt Enable Register Offset */
#define US_FIDR_REG_OFST          _UINT32_(0x2AC)     /* (US_FIDR) USART FIFO Interrupt Disable Register Offset */
#define US_FIMR_REG_OFST          _UINT32_(0x2B0)     /* (US_FIMR) USART FIFO Interrupt Mask Register Offset */
#define US_FESR_REG_OFST          _UINT32_(0x2B4)     /* (US_FESR) USART FIFO Event Status Register Offset */
#define US_WPMR_REG_OFST          _UINT32_(0x2E4)     /* (US_WPMR) USART Write Protection Mode Register Offset */
#define US_WPSR_REG_OFST          _UINT32_(0x2E8)     /* (US_WPSR) USART Write Protection Status Register Offset */
#define SPI_CR_REG_OFST           _UINT32_(0x400)     /* (SPI_CR) SPI Control Register Offset */
#define SPI_MR_REG_OFST           _UINT32_(0x404)     /* (SPI_MR) SPI Mode Register Offset */
#define SPI_RDR_REG_OFST          _UINT32_(0x408)     /* (SPI_RDR) SPI Receive Data Register Offset */
#define SPI_TDR_REG_OFST          _UINT32_(0x40C)     /* (SPI_TDR) SPI Transmit Data Register Offset */
#define SPI_SR_REG_OFST           _UINT32_(0x410)     /* (SPI_SR) SPI Status Register Offset */
#define SPI_IER_REG_OFST          _UINT32_(0x414)     /* (SPI_IER) SPI Interrupt Enable Register Offset */
#define SPI_IDR_REG_OFST          _UINT32_(0x418)     /* (SPI_IDR) SPI Interrupt Disable Register Offset */
#define SPI_IMR_REG_OFST          _UINT32_(0x41C)     /* (SPI_IMR) SPI Interrupt Mask Register Offset */
#define SPI_CSR_REG_OFST          _UINT32_(0x430)     /* (SPI_CSR) SPI Chip Select Register x Offset */
#define SPI_CSR0_REG_OFST         _UINT32_(0x430)     /* (SPI_CSR0) SPI Chip Select Register x Offset */
#define SPI_CSR1_REG_OFST         _UINT32_(0x434)     /* (SPI_CSR1) SPI Chip Select Register x Offset */
#define SPI_CSR2_REG_OFST         _UINT32_(0x438)     /* (SPI_CSR2) SPI Chip Select Register x Offset */
#define SPI_CSR3_REG_OFST         _UINT32_(0x43C)     /* (SPI_CSR3) SPI Chip Select Register x Offset */
#define SPI_FMR_REG_OFST          _UINT32_(0x440)     /* (SPI_FMR) SPI FIFO Mode Register Offset */
#define SPI_FLR_REG_OFST          _UINT32_(0x444)     /* (SPI_FLR) SPI FIFO Level Register Offset */
#define SPI_CMPR_REG_OFST         _UINT32_(0x448)     /* (SPI_CMPR) SPI Comparison Register Offset */
#define SPI_WPMR_REG_OFST         _UINT32_(0x4E4)     /* (SPI_WPMR) SPI Write Protection Mode Register Offset */
#define SPI_WPSR_REG_OFST         _UINT32_(0x4E8)     /* (SPI_WPSR) SPI Write Protection Status Register Offset */
#define TWI_CR_REG_OFST           _UINT32_(0x600)     /* (TWI_CR) TWI Control Register Offset */
#define TWI_MMR_REG_OFST          _UINT32_(0x604)     /* (TWI_MMR) TWI Host Mode Register Offset */
#define TWI_SMR_REG_OFST          _UINT32_(0x608)     /* (TWI_SMR) TWI Client Mode Register Offset */
#define TWI_IADR_REG_OFST         _UINT32_(0x60C)     /* (TWI_IADR) TWI Internal Address Register Offset */
#define TWI_CWGR_REG_OFST         _UINT32_(0x610)     /* (TWI_CWGR) TWI Clock Waveform Generator Register Offset */
#define TWI_SR_REG_OFST           _UINT32_(0x620)     /* (TWI_SR) TWI Status Register Offset */
#define TWI_IER_REG_OFST          _UINT32_(0x624)     /* (TWI_IER) TWI Interrupt Enable Register Offset */
#define TWI_IDR_REG_OFST          _UINT32_(0x628)     /* (TWI_IDR) TWI Interrupt Disable Register Offset */
#define TWI_IMR_REG_OFST          _UINT32_(0x62C)     /* (TWI_IMR) TWI Interrupt Mask Register Offset */
#define TWI_RHR_REG_OFST          _UINT32_(0x630)     /* (TWI_RHR) TWI Receive Holding Register Offset */
#define TWI_THR_REG_OFST          _UINT32_(0x634)     /* (TWI_THR) TWI Transmit Holding Register Offset */
#define TWI_SMBTR_REG_OFST        _UINT32_(0x638)     /* (TWI_SMBTR) TWI SMBus Timing Register Offset */
#define TWI_HSR_REG_OFST          _UINT32_(0x63C)     /* (TWI_HSR) TWI High Speed Register Offset */
#define TWI_ACR_REG_OFST          _UINT32_(0x640)     /* (TWI_ACR) TWI Alternative Command Register Offset */
#define TWI_FILTR_REG_OFST        _UINT32_(0x644)     /* (TWI_FILTR) TWI Filter Register Offset */
#define TWI_HSCWGR_REG_OFST       _UINT32_(0x648)     /* (TWI_HSCWGR) TWI High Speed Clock Waveform Generator Register Offset */
#define TWI_SWMR_REG_OFST         _UINT32_(0x64C)     /* (TWI_SWMR) TWI Matching Register Offset */
#define TWI_FMR_REG_OFST          _UINT32_(0x650)     /* (TWI_FMR) TWI FIFO Mode Register Offset */
#define TWI_FLR_REG_OFST          _UINT32_(0x654)     /* (TWI_FLR) TWI FIFO Level Register Offset */
#define TWI_FSR_REG_OFST          _UINT32_(0x660)     /* (TWI_FSR) TWI FIFO Status Register Offset */
#define TWI_FIER_REG_OFST         _UINT32_(0x664)     /* (TWI_FIER) TWI FIFO Interrupt Enable Register Offset */
#define TWI_FIDR_REG_OFST         _UINT32_(0x668)     /* (TWI_FIDR) TWI FIFO Interrupt Disable Register Offset */
#define TWI_FIMR_REG_OFST         _UINT32_(0x66C)     /* (TWI_FIMR) TWI FIFO Interrupt Mask Register Offset */
#define TWI_WPMR_REG_OFST         _UINT32_(0x6E4)     /* (TWI_WPMR) TWI Write Protection Mode Register Offset */
#define TWI_WPSR_REG_OFST         _UINT32_(0x6E8)     /* (TWI_WPSR) TWI Write Protection Status Register Offset */

/* The definitions used in Zephyr source for register fields which have 1-bit width have
 * different format with the ones in headers from SAMA7G5_DFP.
 * Redefine them so that the current source code could be re-used with minimum changes.
 */
#undef TWI_CR_START
#define TWI_CR_START TWI_CR_START_Msk
#undef TWI_CR_STOP
#define TWI_CR_STOP TWI_CR_STOP_Msk
#undef TWI_CR_MSEN
#define TWI_CR_MSEN TWI_CR_MSEN_Msk
#undef TWI_CR_MSDIS
#define TWI_CR_MSDIS TWI_CR_MSDIS_Msk
#undef TWI_CR_SVEN
#define TWI_CR_SVEN TWI_CR_SVEN_Msk
#undef TWI_CR_SVDIS
#define TWI_CR_SVDIS TWI_CR_SVDIS_Msk
#undef TWI_CR_QUICK
#define TWI_CR_QUICK TWI_CR_QUICK_Msk
#undef TWI_CR_SWRST
#define TWI_CR_SWRST TWI_CR_SWRST_Msk
#undef TWI_CR_HSEN
#define TWI_CR_HSEN TWI_CR_HSEN_Msk
#undef TWI_CR_HSDIS
#define TWI_CR_HSDIS TWI_CR_HSDIS_Msk
#undef TWI_CR_SMBEN
#define TWI_CR_SMBEN TWI_CR_SMBEN_Msk
#undef TWI_CR_SMBDIS
#define TWI_CR_SMBDIS TWI_CR_SMBDIS_Msk
#undef TWI_CR_PECEN
#define TWI_CR_PECEN TWI_CR_PECEN_Msk
#undef TWI_CR_PECDIS
#define TWI_CR_PECDIS TWI_CR_PECDIS_Msk
#undef TWI_CR_PECRQ
#define TWI_CR_PECRQ TWI_CR_PECRQ_Msk
#undef TWI_CR_CLEAR
#define TWI_CR_CLEAR TWI_CR_CLEAR_Msk
#undef TWI_CR_ACMEN
#define TWI_CR_ACMEN TWI_CR_ACMEN_Msk
#undef TWI_CR_ACMDIS
#define TWI_CR_ACMDIS TWI_CR_ACMDIS_Msk
#undef TWI_CR_SCLRBD
#define TWI_CR_SCLRBD TWI_CR_SCLRBD_Msk
#undef TWI_CR_SCLRBE
#define TWI_CR_SCLRBE TWI_CR_SCLRBE_Msk
#undef TWI_CR_THRCLR
#define TWI_CR_THRCLR TWI_CR_THRCLR_Msk
#undef TWI_CR_LOCKCLR
#define TWI_CR_LOCKCLR TWI_CR_LOCKCLR_Msk
#undef TWI_CR_FIFOEN
#define TWI_CR_FIFOEN TWI_CR_FIFOEN_Msk
#undef TWI_CR_FIFODIS
#define TWI_CR_FIFODIS TWI_CR_FIFODIS_Msk
#undef TWI_CR_FIFO_ENABLED_CLEAR
#define TWI_CR_FIFO_ENABLED_CLEAR TWI_CR_FIFO_ENABLED_CLEAR_Msk
#undef TWI_CR_FIFO_ENABLED_TXFCLR
#define TWI_CR_FIFO_ENABLED_TXFCLR TWI_CR_FIFO_ENABLED_TXFCLR_Msk
#undef TWI_CR_FIFO_ENABLED_RXFCLR
#define TWI_CR_FIFO_ENABLED_RXFCLR TWI_CR_FIFO_ENABLED_RXFCLR_Msk
#undef TWI_CR_FIFO_ENABLED_TXFLCLR
#define TWI_CR_FIFO_ENABLED_TXFLCLR TWI_CR_FIFO_ENABLED_TXFLCLR_Msk
#undef TWI_CR_FIFO_ENABLED_FIFOEN
#define TWI_CR_FIFO_ENABLED_FIFOEN TWI_CR_FIFO_ENABLED_FIFOEN_Msk
#undef TWI_CR_FIFO_ENABLED_FIFODIS
#define TWI_CR_FIFO_ENABLED_FIFODIS TWI_CR_FIFO_ENABLED_FIFODIS_Msk
#undef TWI_MMR_MREAD
#define TWI_MMR_MREAD TWI_MMR_MREAD_Msk
#undef TWI_MMR_NOAP
#define TWI_MMR_NOAP TWI_MMR_NOAP_Msk
#undef TWI_SMR_NACKEN
#define TWI_SMR_NACKEN TWI_SMR_NACKEN_Msk
#undef TWI_SMR_SMDA
#define TWI_SMR_SMDA TWI_SMR_SMDA_Msk
#undef TWI_SMR_SMHH
#define TWI_SMR_SMHH TWI_SMR_SMHH_Msk
#undef TWI_SMR_SADAT
#define TWI_SMR_SADAT TWI_SMR_SADAT_Msk
#undef TWI_SMR_BSEL
#define TWI_SMR_BSEL TWI_SMR_BSEL_Msk
#undef TWI_SMR_SCLWSDIS
#define TWI_SMR_SCLWSDIS TWI_SMR_SCLWSDIS_Msk
#undef TWI_SMR_SNIFF
#define TWI_SMR_SNIFF TWI_SMR_SNIFF_Msk
#undef TWI_SMR_SADR1EN
#define TWI_SMR_SADR1EN TWI_SMR_SADR1EN_Msk
#undef TWI_SMR_SADR2EN
#define TWI_SMR_SADR2EN TWI_SMR_SADR2EN_Msk
#undef TWI_SMR_SADR3EN
#define TWI_SMR_SADR3EN TWI_SMR_SADR3EN_Msk
#undef TWI_SMR_DATAMEN
#define TWI_SMR_DATAMEN TWI_SMR_DATAMEN_Msk
#undef TWI_CWGR_BRSRCCLK
#define TWI_CWGR_BRSRCCLK TWI_CWGR_BRSRCCLK_Msk
#undef TWI_SR_TXCOMP
#define TWI_SR_TXCOMP TWI_SR_TXCOMP_Msk
#undef TWI_SR_RXRDY
#define TWI_SR_RXRDY TWI_SR_RXRDY_Msk
#undef TWI_SR_TXRDY
#define TWI_SR_TXRDY TWI_SR_TXRDY_Msk
#undef TWI_SR_SVREAD
#define TWI_SR_SVREAD TWI_SR_SVREAD_Msk
#undef TWI_SR_SVACC
#define TWI_SR_SVACC TWI_SR_SVACC_Msk
#undef TWI_SR_GACC
#define TWI_SR_GACC TWI_SR_GACC_Msk
#undef TWI_SR_OVRE
#define TWI_SR_OVRE TWI_SR_OVRE_Msk
#undef TWI_SR_UNRE
#define TWI_SR_UNRE TWI_SR_UNRE_Msk
#undef TWI_SR_NACK
#define TWI_SR_NACK TWI_SR_NACK_Msk
#undef TWI_SR_ARBLST
#define TWI_SR_ARBLST TWI_SR_ARBLST_Msk
#undef TWI_SR_SCLWS
#define TWI_SR_SCLWS TWI_SR_SCLWS_Msk
#undef TWI_SR_EOSACC
#define TWI_SR_EOSACC TWI_SR_EOSACC_Msk
#undef TWI_SR_MCACK
#define TWI_SR_MCACK TWI_SR_MCACK_Msk
#undef TWI_SR_TOUT
#define TWI_SR_TOUT TWI_SR_TOUT_Msk
#undef TWI_SR_PECERR
#define TWI_SR_PECERR TWI_SR_PECERR_Msk
#undef TWI_SR_SMBDAM
#define TWI_SR_SMBDAM TWI_SR_SMBDAM_Msk
#undef TWI_SR_SMBHHM
#define TWI_SR_SMBHHM TWI_SR_SMBHHM_Msk
#undef TWI_SR_LOCK
#define TWI_SR_LOCK TWI_SR_LOCK_Msk
#undef TWI_SR_SCL
#define TWI_SR_SCL TWI_SR_SCL_Msk
#undef TWI_SR_SDA
#define TWI_SR_SDA TWI_SR_SDA_Msk
#undef TWI_SR_SR
#define TWI_SR_SR TWI_SR_SR_Msk
#undef TWI_SR_FIFO_ENABLED_TXCOMP
#define TWI_SR_FIFO_ENABLED_TXCOMP TWI_SR_FIFO_ENABLED_TXCOMP_Msk
#undef TWI_SR_FIFO_ENABLED_RXRDY
#define TWI_SR_FIFO_ENABLED_RXRDY TWI_SR_FIFO_ENABLED_RXRDY_Msk
#undef TWI_SR_FIFO_ENABLED_TXRDY
#define TWI_SR_FIFO_ENABLED_TXRDY TWI_SR_FIFO_ENABLED_TXRDY_Msk
#undef TWI_SR_FIFO_ENABLED_NACK
#define TWI_SR_FIFO_ENABLED_NACK TWI_SR_FIFO_ENABLED_NACK_Msk
#undef TWI_SR_FIFO_ENABLED_TXFLOCK
#define TWI_SR_FIFO_ENABLED_TXFLOCK TWI_SR_FIFO_ENABLED_TXFLOCK_Msk
#undef TWI_IER_TXCOMP
#define TWI_IER_TXCOMP TWI_IER_TXCOMP_Msk
#undef TWI_IER_RXRDY
#define TWI_IER_RXRDY TWI_IER_RXRDY_Msk
#undef TWI_IER_TXRDY
#define TWI_IER_TXRDY TWI_IER_TXRDY_Msk
#undef TWI_IER_SVACC
#define TWI_IER_SVACC TWI_IER_SVACC_Msk
#undef TWI_IER_GACC
#define TWI_IER_GACC TWI_IER_GACC_Msk
#undef TWI_IER_OVRE
#define TWI_IER_OVRE TWI_IER_OVRE_Msk
#undef TWI_IER_UNRE
#define TWI_IER_UNRE TWI_IER_UNRE_Msk
#undef TWI_IER_NACK
#define TWI_IER_NACK TWI_IER_NACK_Msk
#undef TWI_IER_ARBLST
#define TWI_IER_ARBLST TWI_IER_ARBLST_Msk
#undef TWI_IER_SCL_WS
#define TWI_IER_SCL_WS TWI_IER_SCL_WS_Msk
#undef TWI_IER_EOSACC
#define TWI_IER_EOSACC TWI_IER_EOSACC_Msk
#undef TWI_IER_ENDRX
#define TWI_IER_ENDRX TWI_IER_ENDRX_Msk
#undef TWI_IER_ENDTX
#define TWI_IER_ENDTX TWI_IER_ENDTX_Msk
#undef TWI_IER_RXBUFF
#define TWI_IER_RXBUFF TWI_IER_RXBUFF_Msk
#undef TWI_IER_TXBUFE
#define TWI_IER_TXBUFE TWI_IER_TXBUFE_Msk
#undef TWI_IER_MCACK
#define TWI_IER_MCACK TWI_IER_MCACK_Msk
#undef TWI_IER_TOUT
#define TWI_IER_TOUT TWI_IER_TOUT_Msk
#undef TWI_IER_PECERR
#define TWI_IER_PECERR TWI_IER_PECERR_Msk
#undef TWI_IER_SMBDAM
#define TWI_IER_SMBDAM TWI_IER_SMBDAM_Msk
#undef TWI_IER_SMBHHM
#define TWI_IER_SMBHHM TWI_IER_SMBHHM_Msk
#undef TWI_IDR_TXCOMP
#define TWI_IDR_TXCOMP TWI_IDR_TXCOMP_Msk
#undef TWI_IDR_RXRDY
#define TWI_IDR_RXRDY TWI_IDR_RXRDY_Msk
#undef TWI_IDR_TXRDY
#define TWI_IDR_TXRDY TWI_IDR_TXRDY_Msk
#undef TWI_IDR_SVACC
#define TWI_IDR_SVACC TWI_IDR_SVACC_Msk
#undef TWI_IDR_GACC
#define TWI_IDR_GACC TWI_IDR_GACC_Msk
#undef TWI_IDR_OVRE
#define TWI_IDR_OVRE TWI_IDR_OVRE_Msk
#undef TWI_IDR_UNRE
#define TWI_IDR_UNRE TWI_IDR_UNRE_Msk
#undef TWI_IDR_NACK
#define TWI_IDR_NACK TWI_IDR_NACK_Msk
#undef TWI_IDR_ARBLST
#define TWI_IDR_ARBLST TWI_IDR_ARBLST_Msk
#undef TWI_IDR_SCL_WS
#define TWI_IDR_SCL_WS TWI_IDR_SCL_WS_Msk
#undef TWI_IDR_EOSACC
#define TWI_IDR_EOSACC TWI_IDR_EOSACC_Msk
#undef TWI_IDR_ENDRX
#define TWI_IDR_ENDRX TWI_IDR_ENDRX_Msk
#undef TWI_IDR_ENDTX
#define TWI_IDR_ENDTX TWI_IDR_ENDTX_Msk
#undef TWI_IDR_RXBUFF
#define TWI_IDR_RXBUFF TWI_IDR_RXBUFF_Msk
#undef TWI_IDR_TXBUFE
#define TWI_IDR_TXBUFE TWI_IDR_TXBUFE_Msk
#undef TWI_IDR_MCACK
#define TWI_IDR_MCACK TWI_IDR_MCACK_Msk
#undef TWI_IDR_TOUT
#define TWI_IDR_TOUT TWI_IDR_TOUT_Msk
#undef TWI_IDR_PECERR
#define TWI_IDR_PECERR TWI_IDR_PECERR_Msk
#undef TWI_IDR_SMBDAM
#define TWI_IDR_SMBDAM TWI_IDR_SMBDAM_Msk
#undef TWI_IDR_SMBHHM
#define TWI_IDR_SMBHHM TWI_IDR_SMBHHM_Msk
#undef TWI_IMR_TXCOMP
#define TWI_IMR_TXCOMP TWI_IMR_TXCOMP_Msk
#undef TWI_IMR_RXRDY
#define TWI_IMR_RXRDY TWI_IMR_RXRDY_Msk
#undef TWI_IMR_TXRDY
#define TWI_IMR_TXRDY TWI_IMR_TXRDY_Msk
#undef TWI_IMR_SVACC
#define TWI_IMR_SVACC TWI_IMR_SVACC_Msk
#undef TWI_IMR_GACC
#define TWI_IMR_GACC TWI_IMR_GACC_Msk
#undef TWI_IMR_OVRE
#define TWI_IMR_OVRE TWI_IMR_OVRE_Msk
#undef TWI_IMR_UNRE
#define TWI_IMR_UNRE TWI_IMR_UNRE_Msk
#undef TWI_IMR_NACK
#define TWI_IMR_NACK TWI_IMR_NACK_Msk
#undef TWI_IMR_ARBLST
#define TWI_IMR_ARBLST TWI_IMR_ARBLST_Msk
#undef TWI_IMR_SCL_WS
#define TWI_IMR_SCL_WS TWI_IMR_SCL_WS_Msk
#undef TWI_IMR_EOSACC
#define TWI_IMR_EOSACC TWI_IMR_EOSACC_Msk
#undef TWI_IMR_ENDRX
#define TWI_IMR_ENDRX TWI_IMR_ENDRX_Msk
#undef TWI_IMR_ENDTX
#define TWI_IMR_ENDTX TWI_IMR_ENDTX_Msk
#undef TWI_IMR_RXBUFF
#define TWI_IMR_RXBUFF TWI_IMR_RXBUFF_Msk
#undef TWI_IMR_TXBUFE
#define TWI_IMR_TXBUFE TWI_IMR_TXBUFE_Msk
#undef TWI_IMR_MCACK
#define TWI_IMR_MCACK TWI_IMR_MCACK_Msk
#undef TWI_IMR_TOUT
#define TWI_IMR_TOUT TWI_IMR_TOUT_Msk
#undef TWI_IMR_PECERR
#define TWI_IMR_PECERR TWI_IMR_PECERR_Msk
#undef TWI_IMR_SMBDAM
#define TWI_IMR_SMBDAM TWI_IMR_SMBDAM_Msk
#undef TWI_IMR_SMBHHM
#define TWI_IMR_SMBHHM TWI_IMR_SMBHHM_Msk
#undef TWI_RHR_PSTATE
#define TWI_RHR_PSTATE TWI_RHR_PSTATE_Msk
#undef TWI_ACR_DIR
#define TWI_ACR_DIR TWI_ACR_DIR_Msk
#undef TWI_ACR_PEC
#define TWI_ACR_PEC TWI_ACR_PEC_Msk
#undef TWI_ACR_NDIR
#define TWI_ACR_NDIR TWI_ACR_NDIR_Msk
#undef TWI_ACR_NPEC
#define TWI_ACR_NPEC TWI_ACR_NPEC_Msk
#undef TWI_FILTR_FILT
#define TWI_FILTR_FILT TWI_FILTR_FILT_Msk
#undef TWI_FILTR_PADFEN
#define TWI_FILTR_PADFEN TWI_FILTR_PADFEN_Msk
#undef TWI_FSR_TXFEF
#define TWI_FSR_TXFEF TWI_FSR_TXFEF_Msk
#undef TWI_FSR_TXFFF
#define TWI_FSR_TXFFF TWI_FSR_TXFFF_Msk
#undef TWI_FSR_TXFTHF
#define TWI_FSR_TXFTHF TWI_FSR_TXFTHF_Msk
#undef TWI_FSR_RXFEF
#define TWI_FSR_RXFEF TWI_FSR_RXFEF_Msk
#undef TWI_FSR_RXFFF
#define TWI_FSR_RXFFF TWI_FSR_RXFFF_Msk
#undef TWI_FSR_RXFTHF
#define TWI_FSR_RXFTHF TWI_FSR_RXFTHF_Msk
#undef TWI_FSR_TXFPTEF
#define TWI_FSR_TXFPTEF TWI_FSR_TXFPTEF_Msk
#undef TWI_FSR_RXFPTEF
#define TWI_FSR_RXFPTEF TWI_FSR_RXFPTEF_Msk
#undef TWI_FIER_TXFEF
#define TWI_FIER_TXFEF TWI_FIER_TXFEF_Msk
#undef TWI_FIER_TXFFF
#define TWI_FIER_TXFFF TWI_FIER_TXFFF_Msk
#undef TWI_FIER_TXFTHF
#define TWI_FIER_TXFTHF TWI_FIER_TXFTHF_Msk
#undef TWI_FIER_RXFEF
#define TWI_FIER_RXFEF TWI_FIER_RXFEF_Msk
#undef TWI_FIER_RXFFF
#define TWI_FIER_RXFFF TWI_FIER_RXFFF_Msk
#undef TWI_FIER_RXFTHF
#define TWI_FIER_RXFTHF TWI_FIER_RXFTHF_Msk
#undef TWI_FIER_TXFPTEF
#define TWI_FIER_TXFPTEF TWI_FIER_TXFPTEF_Msk
#undef TWI_FIER_RXFPTEF
#define TWI_FIER_RXFPTEF TWI_FIER_RXFPTEF_Msk
#undef TWI_FIDR_TXFEF
#define TWI_FIDR_TXFEF TWI_FIDR_TXFEF_Msk
#undef TWI_FIDR_TXFFF
#define TWI_FIDR_TXFFF TWI_FIDR_TXFFF_Msk
#undef TWI_FIDR_TXFTHF
#define TWI_FIDR_TXFTHF TWI_FIDR_TXFTHF_Msk
#undef TWI_FIDR_RXFEF
#define TWI_FIDR_RXFEF TWI_FIDR_RXFEF_Msk
#undef TWI_FIDR_RXFFF
#define TWI_FIDR_RXFFF TWI_FIDR_RXFFF_Msk
#undef TWI_FIDR_RXFTHF
#define TWI_FIDR_RXFTHF TWI_FIDR_RXFTHF_Msk
#undef TWI_FIDR_TXFPTEF
#define TWI_FIDR_TXFPTEF TWI_FIDR_TXFPTEF_Msk
#undef TWI_FIDR_RXFPTEF
#define TWI_FIDR_RXFPTEF TWI_FIDR_RXFPTEF_Msk
#undef TWI_FIMR_TXFEF
#define TWI_FIMR_TXFEF TWI_FIMR_TXFEF_Msk
#undef TWI_FIMR_TXFFF
#define TWI_FIMR_TXFFF TWI_FIMR_TXFFF_Msk
#undef TWI_FIMR_TXFTHF
#define TWI_FIMR_TXFTHF TWI_FIMR_TXFTHF_Msk
#undef TWI_FIMR_RXFEF
#define TWI_FIMR_RXFEF TWI_FIMR_RXFEF_Msk
#undef TWI_FIMR_RXFFF
#define TWI_FIMR_RXFFF TWI_FIMR_RXFFF_Msk
#undef TWI_FIMR_RXFTHF
#define TWI_FIMR_RXFTHF TWI_FIMR_RXFTHF_Msk
#undef TWI_FIMR_TXFPTEF
#define TWI_FIMR_TXFPTEF TWI_FIMR_TXFPTEF_Msk
#undef TWI_FIMR_RXFPTEF
#define TWI_FIMR_RXFPTEF TWI_FIMR_RXFPTEF_Msk
#undef TWI_WPMR_WPEN
#define TWI_WPMR_WPEN TWI_WPMR_WPEN_Msk
#undef TWI_WPMR_WPITEN
#define TWI_WPMR_WPITEN TWI_WPMR_WPITEN_Msk
#undef TWI_WPMR_WPCREN
#define TWI_WPMR_WPCREN TWI_WPMR_WPCREN_Msk
#undef TWI_WPSR_WPVS
#define TWI_WPSR_WPVS TWI_WPSR_WPVS_Msk

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct
{  /* Flexible Serial Communication - USART */
  __O   uint32_t                       US_CR;         /* Offset: 0x200 ( /W  32) USART Control Register */
  __IO  uint32_t                       US_MR;         /* Offset: 0x204 (R/W  32) USART Mode Register */
  __O   uint32_t                       US_IER;        /* Offset: 0x208 ( /W  32) USART Interrupt Enable Register */
  __O   uint32_t                       US_IDR;        /* Offset: 0x20C ( /W  32) USART Interrupt Disable Register */
  __I   uint32_t                       US_IMR;        /* Offset: 0x210 (R/   32) USART Interrupt Mask Register */
  __I   uint32_t                       US_CSR;        /* Offset: 0x214 (R/   32) USART Channel Status Register */
  __I   uint32_t                       US_RHR;        /* Offset: 0x218 (R/   32) USART Receive Holding Register */
  __O   uint32_t                       US_THR;        /* Offset: 0x21C ( /W  32) USART Transmit Holding Register */
  __IO  uint32_t                       US_BRGR;       /* Offset: 0x220 (R/W  32) USART Baud Rate Generator Register */
  __IO  uint32_t                       US_RTOR;       /* Offset: 0x224 (R/W  32) USART Receiver Timeout Register */
  __IO  uint32_t                       US_TTGR;       /* Offset: 0x228 (R/W  32) USART Transmitter Timeguard Register */
  __I   uint8_t                        Reserved4[0x14];
  __IO  uint32_t                       US_FIDI;       /* Offset: 0x240 (R/W  32) USART FI DI Ratio Register */
  __I   uint32_t                       US_NER;        /* Offset: 0x244 (R/   32) USART Number of Errors Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       US_IF;         /* Offset: 0x24C (R/W  32) USART IrDA Filter Register */
  __IO  uint32_t                       US_MAN;        /* Offset: 0x250 (R/W  32) USART Manchester Configuration Register */
  __IO  uint32_t                       US_LINMR;      /* Offset: 0x254 (R/W  32) USART LIN Mode Register */
  __IO  uint32_t                       US_LINIR;      /* Offset: 0x258 (R/W  32) USART LIN Identifier Register */
  __I   uint32_t                       US_LINBRR;     /* Offset: 0x25C (R/   32) USART LIN Baud Rate Register */
  __I   uint8_t                        Reserved6[0x30];
  __IO  uint32_t                       US_CMPR;       /* Offset: 0x290 (R/W  32) USART Comparison Register */
  __I   uint8_t                        Reserved7[0x0C];
  __IO  uint32_t                       US_FMR;        /* Offset: 0x2A0 (R/W  32) USART FIFO Mode Register */
  __I   uint32_t                       US_FLR;        /* Offset: 0x2A4 (R/   32) USART FIFO Level Register */
  __O   uint32_t                       US_FIER;       /* Offset: 0x2A8 ( /W  32) USART FIFO Interrupt Enable Register */
  __O   uint32_t                       US_FIDR;       /* Offset: 0x2AC ( /W  32) USART FIFO Interrupt Disable Register */
  __I   uint32_t                       US_FIMR;       /* Offset: 0x2B0 (R/   32) USART FIFO Interrupt Mask Register */
  __I   uint32_t                       US_FESR;       /* Offset: 0x2B4 (R/   32) USART FIFO Event Status Register */
  __I   uint8_t                        Reserved8[0x2C];
  __IO  uint32_t                       US_WPMR;       /* Offset: 0x2E4 (R/W  32) USART Write Protection Mode Register */
  __I   uint32_t                       US_WPSR;       /* Offset: 0x2E8 (R/   32) USART Write Protection Status Register */
  __I   uint8_t                        Reserved9[0x114];
} Usart;

typedef struct
{  /* Flexible Serial Communication - SPI */
  __O   uint32_t                       SPI_CR;        /* Offset: 0x400 ( /W  32) SPI Control Register */
  __IO  uint32_t                       SPI_MR;        /* Offset: 0x404 (R/W  32) SPI Mode Register */
  __I   uint32_t                       SPI_RDR;       /* Offset: 0x408 (R/   32) SPI Receive Data Register */
  __O   uint32_t                       SPI_TDR;       /* Offset: 0x40C ( /W  32) SPI Transmit Data Register */
  __I   uint32_t                       SPI_SR;        /* Offset: 0x410 (R/   32) SPI Status Register */
  __O   uint32_t                       SPI_IER;       /* Offset: 0x414 ( /W  32) SPI Interrupt Enable Register */
  __O   uint32_t                       SPI_IDR;       /* Offset: 0x418 ( /W  32) SPI Interrupt Disable Register */
  __I   uint32_t                       SPI_IMR;       /* Offset: 0x41C (R/   32) SPI Interrupt Mask Register */
  __I   uint8_t                        Reserved10[0x10];
  __IO  uint32_t                       SPI_CSR[4];    /* Offset: 0x430 (R/W  32) SPI Chip Select Register x */
  __IO  uint32_t                       SPI_FMR;       /* Offset: 0x440 (R/W  32) SPI FIFO Mode Register */
  __I   uint32_t                       SPI_FLR;       /* Offset: 0x444 (R/   32) SPI FIFO Level Register */
  __IO  uint32_t                       SPI_CMPR;      /* Offset: 0x448 (R/W  32) SPI Comparison Register */
  __I   uint8_t                        Reserved11[0x98];
  __IO  uint32_t                       SPI_WPMR;      /* Offset: 0x4E4 (R/W  32) SPI Write Protection Mode Register */
  __I   uint32_t                       SPI_WPSR;      /* Offset: 0x4E8 (R/   32) SPI Write Protection Status Register */
  __I   uint8_t                        Reserved12[0x114];
} Spi;

typedef struct
{  /* Flexible Serial Communication - TWI */
  __O   uint32_t                       TWI_CR;        /* Offset: 0x600 ( /W  32) TWI Control Register */
  __IO  uint32_t                       TWI_MMR;       /* Offset: 0x604 (R/W  32) TWI Host Mode Register */
  __IO  uint32_t                       TWI_SMR;       /* Offset: 0x608 (R/W  32) TWI Client Mode Register */
  __IO  uint32_t                       TWI_IADR;      /* Offset: 0x60C (R/W  32) TWI Internal Address Register */
  __IO  uint32_t                       TWI_CWGR;      /* Offset: 0x610 (R/W  32) TWI Clock Waveform Generator Register */
  __I   uint8_t                        Reserved13[0x0C];
  __I   uint32_t                       TWI_SR;        /* Offset: 0x620 (R/   32) TWI Status Register */
  __O   uint32_t                       TWI_IER;       /* Offset: 0x624 ( /W  32) TWI Interrupt Enable Register */
  __O   uint32_t                       TWI_IDR;       /* Offset: 0x628 ( /W  32) TWI Interrupt Disable Register */
  __I   uint32_t                       TWI_IMR;       /* Offset: 0x62C (R/   32) TWI Interrupt Mask Register */
  __I   uint32_t                       TWI_RHR;       /* Offset: 0x630 (R/   32) TWI Receive Holding Register */
  __O   uint32_t                       TWI_THR;       /* Offset: 0x634 ( /W  32) TWI Transmit Holding Register */
  __IO  uint32_t                       TWI_SMBTR;     /* Offset: 0x638 (R/W  32) TWI SMBus Timing Register */
  __IO  uint32_t                       TWI_HSR;       /* Offset: 0x63C (R/W  32) TWI High Speed Register */
  __IO  uint32_t                       TWI_ACR;       /* Offset: 0x640 (R/W  32) TWI Alternative Command Register */
  __IO  uint32_t                       TWI_FILTR;     /* Offset: 0x644 (R/W  32) TWI Filter Register */
  __IO  uint32_t                       TWI_HSCWGR;    /* Offset: 0x648 (R/W  32) TWI High Speed Clock Waveform Generator Register */
  __IO  uint32_t                       TWI_SWMR;      /* Offset: 0x64C (R/W  32) TWI Matching Register */
  __IO  uint32_t                       TWI_FMR;       /* Offset: 0x650 (R/W  32) TWI FIFO Mode Register */
  __I   uint32_t                       TWI_FLR;       /* Offset: 0x654 (R/   32) TWI FIFO Level Register */
  __I   uint8_t                        Reserved14[0x08];
  __I   uint32_t                       TWI_FSR;       /* Offset: 0x660 (R/   32) TWI FIFO Status Register */
  __O   uint32_t                       TWI_FIER;      /* Offset: 0x664 ( /W  32) TWI FIFO Interrupt Enable Register */
  __O   uint32_t                       TWI_FIDR;      /* Offset: 0x668 ( /W  32) TWI FIFO Interrupt Disable Register */
  __I   uint32_t                       TWI_FIMR;      /* Offset: 0x66C (R/   32) TWI FIFO Interrupt Mask Register */
  __I   uint8_t                        Reserved15[0x74];
  __IO  uint32_t                       TWI_WPMR;      /* Offset: 0x6E4 (R/W  32) TWI Write Protection Mode Register */
  __I   uint32_t                       TWI_WPSR;      /* Offset: 0x6E8 (R/   32) TWI Write Protection Status Register */
} Twi;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#undef  US_CR_RSTTX
#define US_CR_RSTTX     US_CR_RSTTX_Msk
#undef  US_CR_RSTRX
#define US_CR_RSTRX     US_CR_RSTRX_Msk
#undef  US_CR_RSTSTA
#define US_CR_RSTSTA    US_CR_RSTSTA_Msk
#undef  US_CR_RXDIS
#define US_CR_RXDIS     US_CR_RXDIS_Msk
#undef  US_CR_RXEN
#define US_CR_RXEN      US_CR_RXEN_Msk
#undef  US_CR_TXDIS
#define US_CR_TXDIS     US_CR_TXDIS_Msk
#undef  US_CR_TXEN
#define US_CR_TXEN      US_CR_TXEN_Msk
#undef  US_CSR_FRAME
#define US_CSR_FRAME    US_CSR_FRAME_Msk
#undef  US_CSR_OVRE
#define US_CSR_OVRE     US_CSR_OVRE_Msk
#undef  US_CSR_PARE
#define US_CSR_PARE     US_CSR_PARE_Msk
#undef  US_CSR_RXRDY
#define US_CSR_RXRDY    US_CSR_RXRDY_Msk
#undef  US_CSR_TXRDY
#define US_CSR_TXRDY    US_CSR_TXRDY_Msk

#endif /* _SAMA7D65_FLEXCOM_COMPONENT_US_SPI_TWI_H_ */
