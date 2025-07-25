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

/*  file generated from device description file (ATDF) version 2025-05-27T09:30:00Z  */
#ifndef _SAMA7D_FLEXCOM_COMPONENT_H_
#define _SAMA7D_FLEXCOM_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR FLEXCOM                     */
/* ************************************************************************** */

/* -------- FLEX_MR : (FLEXCOM Offset: 0x00) (R/W 32) FLEXCOM Mode Register -------- */
#define FLEX_MR_RESETVALUE                    _UINT32_(0x01)                                       /*  (FLEX_MR) FLEXCOM Mode Register  Reset Value */

#define FLEX_MR_OPMODE_Pos                    _UINT32_(0)                                          /* (FLEX_MR) FLEXCOM Operating Mode Position */
#define FLEX_MR_OPMODE_Msk                    (_UINT32_(0x3) << FLEX_MR_OPMODE_Pos)                /* (FLEX_MR) FLEXCOM Operating Mode Mask */
#define FLEX_MR_OPMODE(value)                 (FLEX_MR_OPMODE_Msk & (_UINT32_(value) << FLEX_MR_OPMODE_Pos)) /* Assignment of value for OPMODE in the FLEX_MR register */
#define   FLEX_MR_OPMODE_NO_COM_Val           _UINT32_(0x0)                                        /* (FLEX_MR) No communication  */
#define   FLEX_MR_OPMODE_USART_Val            _UINT32_(0x1)                                        /* (FLEX_MR) All UART related protocols are selected (RS232, RS485, IrDA, ISO7816, LIN,) SPI/TWI related registers are not accessible and have no impact on IOs.  */
#define   FLEX_MR_OPMODE_SPI_Val              _UINT32_(0x2)                                        /* (FLEX_MR) SPI operating mode is selected. USART/TWI related registers are not accessible and have no impact on IOs.  */
#define   FLEX_MR_OPMODE_TWI_Val              _UINT32_(0x3)                                        /* (FLEX_MR) All TWI related protocols are selected (TWI, SMBus). USART/SPI related registers are not accessible and have no impact on IOs.  */
#define FLEX_MR_OPMODE_NO_COM                 (FLEX_MR_OPMODE_NO_COM_Val << FLEX_MR_OPMODE_Pos)    /* (FLEX_MR) No communication Position */
#define FLEX_MR_OPMODE_USART                  (FLEX_MR_OPMODE_USART_Val << FLEX_MR_OPMODE_Pos)     /* (FLEX_MR) All UART related protocols are selected (RS232, RS485, IrDA, ISO7816, LIN,) SPI/TWI related registers are not accessible and have no impact on IOs. Position */
#define FLEX_MR_OPMODE_SPI                    (FLEX_MR_OPMODE_SPI_Val << FLEX_MR_OPMODE_Pos)       /* (FLEX_MR) SPI operating mode is selected. USART/TWI related registers are not accessible and have no impact on IOs. Position */
#define FLEX_MR_OPMODE_TWI                    (FLEX_MR_OPMODE_TWI_Val << FLEX_MR_OPMODE_Pos)       /* (FLEX_MR) All TWI related protocols are selected (TWI, SMBus). USART/SPI related registers are not accessible and have no impact on IOs. Position */
#define FLEX_MR_Msk                           _UINT32_(0x00000003)                                 /* (FLEX_MR) Register Mask  */


/* -------- FLEX_RHR : (FLEXCOM Offset: 0x10) ( R/ 32) FLEXCOM Receive Holding Register -------- */
#define FLEX_RHR_RESETVALUE                   _UINT32_(0x00)                                       /*  (FLEX_RHR) FLEXCOM Receive Holding Register  Reset Value */

#define FLEX_RHR_RXDATA_Pos                   _UINT32_(0)                                          /* (FLEX_RHR) Receive Data Position */
#define FLEX_RHR_RXDATA_Msk                   (_UINT32_(0xFFFF) << FLEX_RHR_RXDATA_Pos)            /* (FLEX_RHR) Receive Data Mask */
#define FLEX_RHR_RXDATA(value)                (FLEX_RHR_RXDATA_Msk & (_UINT32_(value) << FLEX_RHR_RXDATA_Pos)) /* Assignment of value for RXDATA in the FLEX_RHR register */
#define FLEX_RHR_Msk                          _UINT32_(0x0000FFFF)                                 /* (FLEX_RHR) Register Mask  */


/* -------- FLEX_THR : (FLEXCOM Offset: 0x20) (R/W 32) FLEXCOM Transmit Holding Register -------- */
#define FLEX_THR_RESETVALUE                   _UINT32_(0x00)                                       /*  (FLEX_THR) FLEXCOM Transmit Holding Register  Reset Value */

#define FLEX_THR_TXDATA_Pos                   _UINT32_(0)                                          /* (FLEX_THR) Transmit Data Position */
#define FLEX_THR_TXDATA_Msk                   (_UINT32_(0xFFFF) << FLEX_THR_TXDATA_Pos)            /* (FLEX_THR) Transmit Data Mask */
#define FLEX_THR_TXDATA(value)                (FLEX_THR_TXDATA_Msk & (_UINT32_(value) << FLEX_THR_TXDATA_Pos)) /* Assignment of value for TXDATA in the FLEX_THR register */
#define FLEX_THR_Msk                          _UINT32_(0x0000FFFF)                                 /* (FLEX_THR) Register Mask  */


/* -------- FLEX_US_CR : (FLEXCOM Offset: 0x200) ( /W 32) USART Control Register -------- */
#define FLEX_US_CR_RSTRX_Pos                  _UINT32_(2)                                          /* (FLEX_US_CR) Reset Receiver Position */
#define FLEX_US_CR_RSTRX_Msk                  (_UINT32_(0x1) << FLEX_US_CR_RSTRX_Pos)              /* (FLEX_US_CR) Reset Receiver Mask */
#define FLEX_US_CR_RSTRX(value)               (FLEX_US_CR_RSTRX_Msk & (_UINT32_(value) << FLEX_US_CR_RSTRX_Pos)) /* Assignment of value for RSTRX in the FLEX_US_CR register */
#define   FLEX_US_CR_RSTRX_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RSTRX_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Resets the receiver.  */
#define FLEX_US_CR_RSTRX_0                    (FLEX_US_CR_RSTRX_0_Val << FLEX_US_CR_RSTRX_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RSTRX_1                    (FLEX_US_CR_RSTRX_1_Val << FLEX_US_CR_RSTRX_Pos)     /* (FLEX_US_CR) Resets the receiver. Position */
#define FLEX_US_CR_RSTTX_Pos                  _UINT32_(3)                                          /* (FLEX_US_CR) Reset Transmitter Position */
#define FLEX_US_CR_RSTTX_Msk                  (_UINT32_(0x1) << FLEX_US_CR_RSTTX_Pos)              /* (FLEX_US_CR) Reset Transmitter Mask */
#define FLEX_US_CR_RSTTX(value)               (FLEX_US_CR_RSTTX_Msk & (_UINT32_(value) << FLEX_US_CR_RSTTX_Pos)) /* Assignment of value for RSTTX in the FLEX_US_CR register */
#define   FLEX_US_CR_RSTTX_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RSTTX_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Resets the transmitter.  */
#define FLEX_US_CR_RSTTX_0                    (FLEX_US_CR_RSTTX_0_Val << FLEX_US_CR_RSTTX_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RSTTX_1                    (FLEX_US_CR_RSTTX_1_Val << FLEX_US_CR_RSTTX_Pos)     /* (FLEX_US_CR) Resets the transmitter. Position */
#define FLEX_US_CR_RXEN_Pos                   _UINT32_(4)                                          /* (FLEX_US_CR) Receiver Enable Position */
#define FLEX_US_CR_RXEN_Msk                   (_UINT32_(0x1) << FLEX_US_CR_RXEN_Pos)               /* (FLEX_US_CR) Receiver Enable Mask */
#define FLEX_US_CR_RXEN(value)                (FLEX_US_CR_RXEN_Msk & (_UINT32_(value) << FLEX_US_CR_RXEN_Pos)) /* Assignment of value for RXEN in the FLEX_US_CR register */
#define   FLEX_US_CR_RXEN_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RXEN_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_CR) Enables the receiver, if RXDIS is 0.  */
#define FLEX_US_CR_RXEN_0                     (FLEX_US_CR_RXEN_0_Val << FLEX_US_CR_RXEN_Pos)       /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RXEN_1                     (FLEX_US_CR_RXEN_1_Val << FLEX_US_CR_RXEN_Pos)       /* (FLEX_US_CR) Enables the receiver, if RXDIS is 0. Position */
#define FLEX_US_CR_RXDIS_Pos                  _UINT32_(5)                                          /* (FLEX_US_CR) Receiver Disable Position */
#define FLEX_US_CR_RXDIS_Msk                  (_UINT32_(0x1) << FLEX_US_CR_RXDIS_Pos)              /* (FLEX_US_CR) Receiver Disable Mask */
#define FLEX_US_CR_RXDIS(value)               (FLEX_US_CR_RXDIS_Msk & (_UINT32_(value) << FLEX_US_CR_RXDIS_Pos)) /* Assignment of value for RXDIS in the FLEX_US_CR register */
#define   FLEX_US_CR_RXDIS_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RXDIS_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Disables the receiver.  */
#define FLEX_US_CR_RXDIS_0                    (FLEX_US_CR_RXDIS_0_Val << FLEX_US_CR_RXDIS_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RXDIS_1                    (FLEX_US_CR_RXDIS_1_Val << FLEX_US_CR_RXDIS_Pos)     /* (FLEX_US_CR) Disables the receiver. Position */
#define FLEX_US_CR_TXEN_Pos                   _UINT32_(6)                                          /* (FLEX_US_CR) Transmitter Enable Position */
#define FLEX_US_CR_TXEN_Msk                   (_UINT32_(0x1) << FLEX_US_CR_TXEN_Pos)               /* (FLEX_US_CR) Transmitter Enable Mask */
#define FLEX_US_CR_TXEN(value)                (FLEX_US_CR_TXEN_Msk & (_UINT32_(value) << FLEX_US_CR_TXEN_Pos)) /* Assignment of value for TXEN in the FLEX_US_CR register */
#define   FLEX_US_CR_TXEN_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_TXEN_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_CR) Enables the transmitter if TXDIS is 0.  */
#define FLEX_US_CR_TXEN_0                     (FLEX_US_CR_TXEN_0_Val << FLEX_US_CR_TXEN_Pos)       /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_TXEN_1                     (FLEX_US_CR_TXEN_1_Val << FLEX_US_CR_TXEN_Pos)       /* (FLEX_US_CR) Enables the transmitter if TXDIS is 0. Position */
#define FLEX_US_CR_TXDIS_Pos                  _UINT32_(7)                                          /* (FLEX_US_CR) Transmitter Disable Position */
#define FLEX_US_CR_TXDIS_Msk                  (_UINT32_(0x1) << FLEX_US_CR_TXDIS_Pos)              /* (FLEX_US_CR) Transmitter Disable Mask */
#define FLEX_US_CR_TXDIS(value)               (FLEX_US_CR_TXDIS_Msk & (_UINT32_(value) << FLEX_US_CR_TXDIS_Pos)) /* Assignment of value for TXDIS in the FLEX_US_CR register */
#define   FLEX_US_CR_TXDIS_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_TXDIS_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Disables the transmitter.  */
#define FLEX_US_CR_TXDIS_0                    (FLEX_US_CR_TXDIS_0_Val << FLEX_US_CR_TXDIS_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_TXDIS_1                    (FLEX_US_CR_TXDIS_1_Val << FLEX_US_CR_TXDIS_Pos)     /* (FLEX_US_CR) Disables the transmitter. Position */
#define FLEX_US_CR_RSTSTA_Pos                 _UINT32_(8)                                          /* (FLEX_US_CR) Reset Status Bits Position */
#define FLEX_US_CR_RSTSTA_Msk                 (_UINT32_(0x1) << FLEX_US_CR_RSTSTA_Pos)             /* (FLEX_US_CR) Reset Status Bits Mask */
#define FLEX_US_CR_RSTSTA(value)              (FLEX_US_CR_RSTSTA_Msk & (_UINT32_(value) << FLEX_US_CR_RSTSTA_Pos)) /* Assignment of value for RSTSTA in the FLEX_US_CR register */
#define   FLEX_US_CR_RSTSTA_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RSTSTA_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Resets the status bits PARE, FRAME, OVRE, MANE, LINBE, LINISFE, LINIPE, LINCE, LINSNRE, LINSTE, LINHTE, LINID, LINTC, LINBK, CMP and RXBRK in FLEX_US_CSR. Also resets the status bits TXFEF, TXFFF, TXFTHF, RXFEF, RXFFF, RXFTHF, TXFPTEF, RXFPTEF in FLEX_US_FESR.  */
#define FLEX_US_CR_RSTSTA_0                   (FLEX_US_CR_RSTSTA_0_Val << FLEX_US_CR_RSTSTA_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RSTSTA_1                   (FLEX_US_CR_RSTSTA_1_Val << FLEX_US_CR_RSTSTA_Pos)   /* (FLEX_US_CR) Resets the status bits PARE, FRAME, OVRE, MANE, LINBE, LINISFE, LINIPE, LINCE, LINSNRE, LINSTE, LINHTE, LINID, LINTC, LINBK, CMP and RXBRK in FLEX_US_CSR. Also resets the status bits TXFEF, TXFFF, TXFTHF, RXFEF, RXFFF, RXFTHF, TXFPTEF, RXFPTEF in FLEX_US_FESR. Position */
#define FLEX_US_CR_STTBRK_Pos                 _UINT32_(9)                                          /* (FLEX_US_CR) Start Break Position */
#define FLEX_US_CR_STTBRK_Msk                 (_UINT32_(0x1) << FLEX_US_CR_STTBRK_Pos)             /* (FLEX_US_CR) Start Break Mask */
#define FLEX_US_CR_STTBRK(value)              (FLEX_US_CR_STTBRK_Msk & (_UINT32_(value) << FLEX_US_CR_STTBRK_Pos)) /* Assignment of value for STTBRK in the FLEX_US_CR register */
#define   FLEX_US_CR_STTBRK_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_STTBRK_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Starts transmission of a break after the characters present in FLEX_US_THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted.  */
#define FLEX_US_CR_STTBRK_0                   (FLEX_US_CR_STTBRK_0_Val << FLEX_US_CR_STTBRK_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_STTBRK_1                   (FLEX_US_CR_STTBRK_1_Val << FLEX_US_CR_STTBRK_Pos)   /* (FLEX_US_CR) Starts transmission of a break after the characters present in FLEX_US_THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted. Position */
#define FLEX_US_CR_STPBRK_Pos                 _UINT32_(10)                                         /* (FLEX_US_CR) Stop Break Position */
#define FLEX_US_CR_STPBRK_Msk                 (_UINT32_(0x1) << FLEX_US_CR_STPBRK_Pos)             /* (FLEX_US_CR) Stop Break Mask */
#define FLEX_US_CR_STPBRK(value)              (FLEX_US_CR_STPBRK_Msk & (_UINT32_(value) << FLEX_US_CR_STPBRK_Pos)) /* Assignment of value for STPBRK in the FLEX_US_CR register */
#define   FLEX_US_CR_STPBRK_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_STPBRK_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods. No effect if no break is being transmitted.  */
#define FLEX_US_CR_STPBRK_0                   (FLEX_US_CR_STPBRK_0_Val << FLEX_US_CR_STPBRK_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_STPBRK_1                   (FLEX_US_CR_STPBRK_1_Val << FLEX_US_CR_STPBRK_Pos)   /* (FLEX_US_CR) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods. No effect if no break is being transmitted. Position */
#define FLEX_US_CR_STTTO_Pos                  _UINT32_(11)                                         /* (FLEX_US_CR) Clear TIMEOUT Flag and Start Timeout After Next Character Received Position */
#define FLEX_US_CR_STTTO_Msk                  (_UINT32_(0x1) << FLEX_US_CR_STTTO_Pos)              /* (FLEX_US_CR) Clear TIMEOUT Flag and Start Timeout After Next Character Received Mask */
#define FLEX_US_CR_STTTO(value)               (FLEX_US_CR_STTTO_Msk & (_UINT32_(value) << FLEX_US_CR_STTTO_Pos)) /* Assignment of value for STTTO in the FLEX_US_CR register */
#define   FLEX_US_CR_STTTO_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_STTTO_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Starts waiting for a character before clocking the timeout counter. Immediately disables a timeout period in progress. Resets the FLEX_US_CSR.TIMEOUT status bit.  */
#define FLEX_US_CR_STTTO_0                    (FLEX_US_CR_STTTO_0_Val << FLEX_US_CR_STTTO_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_STTTO_1                    (FLEX_US_CR_STTTO_1_Val << FLEX_US_CR_STTTO_Pos)     /* (FLEX_US_CR) Starts waiting for a character before clocking the timeout counter. Immediately disables a timeout period in progress. Resets the FLEX_US_CSR.TIMEOUT status bit. Position */
#define FLEX_US_CR_SENDA_Pos                  _UINT32_(12)                                         /* (FLEX_US_CR) Send Address Position */
#define FLEX_US_CR_SENDA_Msk                  (_UINT32_(0x1) << FLEX_US_CR_SENDA_Pos)              /* (FLEX_US_CR) Send Address Mask */
#define FLEX_US_CR_SENDA(value)               (FLEX_US_CR_SENDA_Msk & (_UINT32_(value) << FLEX_US_CR_SENDA_Pos)) /* Assignment of value for SENDA in the FLEX_US_CR register */
#define   FLEX_US_CR_SENDA_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_SENDA_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) In Multidrop mode only, the next character written to FLEX_US_THR is sent with the address bit set.  */
#define FLEX_US_CR_SENDA_0                    (FLEX_US_CR_SENDA_0_Val << FLEX_US_CR_SENDA_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_SENDA_1                    (FLEX_US_CR_SENDA_1_Val << FLEX_US_CR_SENDA_Pos)     /* (FLEX_US_CR) In Multidrop mode only, the next character written to FLEX_US_THR is sent with the address bit set. Position */
#define FLEX_US_CR_RSTIT_Pos                  _UINT32_(13)                                         /* (FLEX_US_CR) Reset Iterations Position */
#define FLEX_US_CR_RSTIT_Msk                  (_UINT32_(0x1) << FLEX_US_CR_RSTIT_Pos)              /* (FLEX_US_CR) Reset Iterations Mask */
#define FLEX_US_CR_RSTIT(value)               (FLEX_US_CR_RSTIT_Msk & (_UINT32_(value) << FLEX_US_CR_RSTIT_Pos)) /* Assignment of value for RSTIT in the FLEX_US_CR register */
#define   FLEX_US_CR_RSTIT_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RSTIT_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Resets FLEX_US_CSR.ITER. No effect if the ISO7816 is not enabled.  */
#define FLEX_US_CR_RSTIT_0                    (FLEX_US_CR_RSTIT_0_Val << FLEX_US_CR_RSTIT_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RSTIT_1                    (FLEX_US_CR_RSTIT_1_Val << FLEX_US_CR_RSTIT_Pos)     /* (FLEX_US_CR) Resets FLEX_US_CSR.ITER. No effect if the ISO7816 is not enabled. Position */
#define FLEX_US_CR_RSTNACK_Pos                _UINT32_(14)                                         /* (FLEX_US_CR) Reset Non Acknowledge Position */
#define FLEX_US_CR_RSTNACK_Msk                (_UINT32_(0x1) << FLEX_US_CR_RSTNACK_Pos)            /* (FLEX_US_CR) Reset Non Acknowledge Mask */
#define FLEX_US_CR_RSTNACK(value)             (FLEX_US_CR_RSTNACK_Msk & (_UINT32_(value) << FLEX_US_CR_RSTNACK_Pos)) /* Assignment of value for RSTNACK in the FLEX_US_CR register */
#define   FLEX_US_CR_RSTNACK_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect  */
#define   FLEX_US_CR_RSTNACK_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_CR) Resets FLEX_US_CSR.NACK.  */
#define FLEX_US_CR_RSTNACK_0                  (FLEX_US_CR_RSTNACK_0_Val << FLEX_US_CR_RSTNACK_Pos) /* (FLEX_US_CR) No effect Position */
#define FLEX_US_CR_RSTNACK_1                  (FLEX_US_CR_RSTNACK_1_Val << FLEX_US_CR_RSTNACK_Pos) /* (FLEX_US_CR) Resets FLEX_US_CSR.NACK. Position */
#define FLEX_US_CR_RETTO_Pos                  _UINT32_(15)                                         /* (FLEX_US_CR) Start Timeout Immediately Position */
#define FLEX_US_CR_RETTO_Msk                  (_UINT32_(0x1) << FLEX_US_CR_RETTO_Pos)              /* (FLEX_US_CR) Start Timeout Immediately Mask */
#define FLEX_US_CR_RETTO(value)               (FLEX_US_CR_RETTO_Msk & (_UINT32_(value) << FLEX_US_CR_RETTO_Pos)) /* Assignment of value for RETTO in the FLEX_US_CR register */
#define   FLEX_US_CR_RETTO_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect  */
#define   FLEX_US_CR_RETTO_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Immediately restarts timeout period.  */
#define FLEX_US_CR_RETTO_0                    (FLEX_US_CR_RETTO_0_Val << FLEX_US_CR_RETTO_Pos)     /* (FLEX_US_CR) No effect Position */
#define FLEX_US_CR_RETTO_1                    (FLEX_US_CR_RETTO_1_Val << FLEX_US_CR_RETTO_Pos)     /* (FLEX_US_CR) Immediately restarts timeout period. Position */
#define FLEX_US_CR_RTSEN_Pos                  _UINT32_(18)                                         /* (FLEX_US_CR) Request to Send Enable Position */
#define FLEX_US_CR_RTSEN_Msk                  (_UINT32_(0x1) << FLEX_US_CR_RTSEN_Pos)              /* (FLEX_US_CR) Request to Send Enable Mask */
#define FLEX_US_CR_RTSEN(value)               (FLEX_US_CR_RTSEN_Msk & (_UINT32_(value) << FLEX_US_CR_RTSEN_Pos)) /* Assignment of value for RTSEN in the FLEX_US_CR register */
#define   FLEX_US_CR_RTSEN_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RTSEN_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CR) Drives the RTS pin to 1 if FLEX_US_MR.USART_MODE field = 2, else drives the RTS pin to 0 if FLEX_US_MR.USART_MODE field = 0.  */
#define FLEX_US_CR_RTSEN_0                    (FLEX_US_CR_RTSEN_0_Val << FLEX_US_CR_RTSEN_Pos)     /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RTSEN_1                    (FLEX_US_CR_RTSEN_1_Val << FLEX_US_CR_RTSEN_Pos)     /* (FLEX_US_CR) Drives the RTS pin to 1 if FLEX_US_MR.USART_MODE field = 2, else drives the RTS pin to 0 if FLEX_US_MR.USART_MODE field = 0. Position */
#define FLEX_US_CR_RTSDIS_Pos                 _UINT32_(19)                                         /* (FLEX_US_CR) Request to Send Disable Position */
#define FLEX_US_CR_RTSDIS_Msk                 (_UINT32_(0x1) << FLEX_US_CR_RTSDIS_Pos)             /* (FLEX_US_CR) Request to Send Disable Mask */
#define FLEX_US_CR_RTSDIS(value)              (FLEX_US_CR_RTSDIS_Msk & (_UINT32_(value) << FLEX_US_CR_RTSDIS_Pos)) /* Assignment of value for RTSDIS in the FLEX_US_CR register */
#define   FLEX_US_CR_RTSDIS_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RTSDIS_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Drives the RTS pin to 0 if FLEX_US_MR.USART_MODE field = 2, else drives the RTS pin to 1 if FLEX_US_MR.USART_MODE field = 0.  */
#define FLEX_US_CR_RTSDIS_0                   (FLEX_US_CR_RTSDIS_0_Val << FLEX_US_CR_RTSDIS_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RTSDIS_1                   (FLEX_US_CR_RTSDIS_1_Val << FLEX_US_CR_RTSDIS_Pos)   /* (FLEX_US_CR) Drives the RTS pin to 0 if FLEX_US_MR.USART_MODE field = 2, else drives the RTS pin to 1 if FLEX_US_MR.USART_MODE field = 0. Position */
#define FLEX_US_CR_LINABT_Pos                 _UINT32_(20)                                         /* (FLEX_US_CR) Abort LIN Transmission Position */
#define FLEX_US_CR_LINABT_Msk                 (_UINT32_(0x1) << FLEX_US_CR_LINABT_Pos)             /* (FLEX_US_CR) Abort LIN Transmission Mask */
#define FLEX_US_CR_LINABT(value)              (FLEX_US_CR_LINABT_Msk & (_UINT32_(value) << FLEX_US_CR_LINABT_Pos)) /* Assignment of value for LINABT in the FLEX_US_CR register */
#define   FLEX_US_CR_LINABT_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_LINABT_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Aborts the current LIN transmission.  */
#define FLEX_US_CR_LINABT_0                   (FLEX_US_CR_LINABT_0_Val << FLEX_US_CR_LINABT_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_LINABT_1                   (FLEX_US_CR_LINABT_1_Val << FLEX_US_CR_LINABT_Pos)   /* (FLEX_US_CR) Aborts the current LIN transmission. Position */
#define FLEX_US_CR_LINWKUP_Pos                _UINT32_(21)                                         /* (FLEX_US_CR) Send LIN Wake-up Signal Position */
#define FLEX_US_CR_LINWKUP_Msk                (_UINT32_(0x1) << FLEX_US_CR_LINWKUP_Pos)            /* (FLEX_US_CR) Send LIN Wake-up Signal Mask */
#define FLEX_US_CR_LINWKUP(value)             (FLEX_US_CR_LINWKUP_Msk & (_UINT32_(value) << FLEX_US_CR_LINWKUP_Pos)) /* Assignment of value for LINWKUP in the FLEX_US_CR register */
#define   FLEX_US_CR_LINWKUP_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect:  */
#define   FLEX_US_CR_LINWKUP_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_CR) Sends a wake-up signal on the LIN bus.  */
#define FLEX_US_CR_LINWKUP_0                  (FLEX_US_CR_LINWKUP_0_Val << FLEX_US_CR_LINWKUP_Pos) /* (FLEX_US_CR) No effect: Position */
#define FLEX_US_CR_LINWKUP_1                  (FLEX_US_CR_LINWKUP_1_Val << FLEX_US_CR_LINWKUP_Pos) /* (FLEX_US_CR) Sends a wake-up signal on the LIN bus. Position */
#define FLEX_US_CR_TXFCLR_Pos                 _UINT32_(24)                                         /* (FLEX_US_CR) Transmit FIFO Clear Position */
#define FLEX_US_CR_TXFCLR_Msk                 (_UINT32_(0x1) << FLEX_US_CR_TXFCLR_Pos)             /* (FLEX_US_CR) Transmit FIFO Clear Mask */
#define FLEX_US_CR_TXFCLR(value)              (FLEX_US_CR_TXFCLR_Msk & (_UINT32_(value) << FLEX_US_CR_TXFCLR_Pos)) /* Assignment of value for TXFCLR in the FLEX_US_CR register */
#define   FLEX_US_CR_TXFCLR_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_TXFCLR_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Empties the Transmit FIFO.  */
#define FLEX_US_CR_TXFCLR_0                   (FLEX_US_CR_TXFCLR_0_Val << FLEX_US_CR_TXFCLR_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_TXFCLR_1                   (FLEX_US_CR_TXFCLR_1_Val << FLEX_US_CR_TXFCLR_Pos)   /* (FLEX_US_CR) Empties the Transmit FIFO. Position */
#define FLEX_US_CR_RXFCLR_Pos                 _UINT32_(25)                                         /* (FLEX_US_CR) Receive FIFO Clear Position */
#define FLEX_US_CR_RXFCLR_Msk                 (_UINT32_(0x1) << FLEX_US_CR_RXFCLR_Pos)             /* (FLEX_US_CR) Receive FIFO Clear Mask */
#define FLEX_US_CR_RXFCLR(value)              (FLEX_US_CR_RXFCLR_Msk & (_UINT32_(value) << FLEX_US_CR_RXFCLR_Pos)) /* Assignment of value for RXFCLR in the FLEX_US_CR register */
#define   FLEX_US_CR_RXFCLR_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_RXFCLR_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Empties the Receive FIFO.  */
#define FLEX_US_CR_RXFCLR_0                   (FLEX_US_CR_RXFCLR_0_Val << FLEX_US_CR_RXFCLR_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_RXFCLR_1                   (FLEX_US_CR_RXFCLR_1_Val << FLEX_US_CR_RXFCLR_Pos)   /* (FLEX_US_CR) Empties the Receive FIFO. Position */
#define FLEX_US_CR_TXFLCLR_Pos                _UINT32_(26)                                         /* (FLEX_US_CR) Transmit FIFO Lock CLEAR Position */
#define FLEX_US_CR_TXFLCLR_Msk                (_UINT32_(0x1) << FLEX_US_CR_TXFLCLR_Pos)            /* (FLEX_US_CR) Transmit FIFO Lock CLEAR Mask */
#define FLEX_US_CR_TXFLCLR(value)             (FLEX_US_CR_TXFLCLR_Msk & (_UINT32_(value) << FLEX_US_CR_TXFLCLR_Pos)) /* Assignment of value for TXFLCLR in the FLEX_US_CR register */
#define   FLEX_US_CR_TXFLCLR_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_TXFLCLR_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_CR) Clears the Transmit FIFO Lock  */
#define FLEX_US_CR_TXFLCLR_0                  (FLEX_US_CR_TXFLCLR_0_Val << FLEX_US_CR_TXFLCLR_Pos) /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_TXFLCLR_1                  (FLEX_US_CR_TXFLCLR_1_Val << FLEX_US_CR_TXFLCLR_Pos) /* (FLEX_US_CR) Clears the Transmit FIFO Lock Position */
#define FLEX_US_CR_REQCLR_Pos                 _UINT32_(28)                                         /* (FLEX_US_CR) Request to Clear the Comparison Trigger Position */
#define FLEX_US_CR_REQCLR_Msk                 (_UINT32_(0x1) << FLEX_US_CR_REQCLR_Pos)             /* (FLEX_US_CR) Request to Clear the Comparison Trigger Mask */
#define FLEX_US_CR_REQCLR(value)              (FLEX_US_CR_REQCLR_Msk & (_UINT32_(value) << FLEX_US_CR_REQCLR_Pos)) /* Assignment of value for REQCLR in the FLEX_US_CR register */
#define   FLEX_US_CR_REQCLR_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_REQCLR_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Clears the potential clock request currently issued by USART, thus the potential system wake-up is cancelled. ; Restarts the comparison trigger to enable FLEX_US_RHR loading.  */
#define FLEX_US_CR_REQCLR_0                   (FLEX_US_CR_REQCLR_0_Val << FLEX_US_CR_REQCLR_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_REQCLR_1                   (FLEX_US_CR_REQCLR_1_Val << FLEX_US_CR_REQCLR_Pos)   /* (FLEX_US_CR) Clears the potential clock request currently issued by USART, thus the potential system wake-up is cancelled. ; Restarts the comparison trigger to enable FLEX_US_RHR loading. Position */
#define FLEX_US_CR_FIFOEN_Pos                 _UINT32_(30)                                         /* (FLEX_US_CR) FIFO Enable Position */
#define FLEX_US_CR_FIFOEN_Msk                 (_UINT32_(0x1) << FLEX_US_CR_FIFOEN_Pos)             /* (FLEX_US_CR) FIFO Enable Mask */
#define FLEX_US_CR_FIFOEN(value)              (FLEX_US_CR_FIFOEN_Msk & (_UINT32_(value) << FLEX_US_CR_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the FLEX_US_CR register */
#define   FLEX_US_CR_FIFOEN_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_FIFOEN_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CR) Enables the Transmit and Receive FIFOs.  */
#define FLEX_US_CR_FIFOEN_0                   (FLEX_US_CR_FIFOEN_0_Val << FLEX_US_CR_FIFOEN_Pos)   /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_FIFOEN_1                   (FLEX_US_CR_FIFOEN_1_Val << FLEX_US_CR_FIFOEN_Pos)   /* (FLEX_US_CR) Enables the Transmit and Receive FIFOs. Position */
#define FLEX_US_CR_FIFODIS_Pos                _UINT32_(31)                                         /* (FLEX_US_CR) FIFO Disable Position */
#define FLEX_US_CR_FIFODIS_Msk                (_UINT32_(0x1) << FLEX_US_CR_FIFODIS_Pos)            /* (FLEX_US_CR) FIFO Disable Mask */
#define FLEX_US_CR_FIFODIS(value)             (FLEX_US_CR_FIFODIS_Msk & (_UINT32_(value) << FLEX_US_CR_FIFODIS_Pos)) /* Assignment of value for FIFODIS in the FLEX_US_CR register */
#define   FLEX_US_CR_FIFODIS_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_CR) No effect.  */
#define   FLEX_US_CR_FIFODIS_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_CR) Disables the Transmit and Receive FIFOs.  */
#define FLEX_US_CR_FIFODIS_0                  (FLEX_US_CR_FIFODIS_0_Val << FLEX_US_CR_FIFODIS_Pos) /* (FLEX_US_CR) No effect. Position */
#define FLEX_US_CR_FIFODIS_1                  (FLEX_US_CR_FIFODIS_1_Val << FLEX_US_CR_FIFODIS_Pos) /* (FLEX_US_CR) Disables the Transmit and Receive FIFOs. Position */
#define FLEX_US_CR_Msk                        _UINT32_(0xD73CFFFC)                                 /* (FLEX_US_CR) Register Mask  */


/* -------- FLEX_US_MR : (FLEXCOM Offset: 0x204) (R/W 32) USART Mode Register -------- */
#define FLEX_US_MR_RESETVALUE                 _UINT32_(0xC0000000)                                 /*  (FLEX_US_MR) USART Mode Register  Reset Value */

#define FLEX_US_MR_USART_MODE_Pos             _UINT32_(0)                                          /* (FLEX_US_MR) USART Mode of Operation Position */
#define FLEX_US_MR_USART_MODE_Msk             (_UINT32_(0xF) << FLEX_US_MR_USART_MODE_Pos)         /* (FLEX_US_MR) USART Mode of Operation Mask */
#define FLEX_US_MR_USART_MODE(value)          (FLEX_US_MR_USART_MODE_Msk & (_UINT32_(value) << FLEX_US_MR_USART_MODE_Pos)) /* Assignment of value for USART_MODE in the FLEX_US_MR register */
#define   FLEX_US_MR_USART_MODE_NORMAL_Val    _UINT32_(0x0)                                        /* (FLEX_US_MR) Normal mode  */
#define   FLEX_US_MR_USART_MODE_RS485_Val     _UINT32_(0x1)                                        /* (FLEX_US_MR) RS485  */
#define   FLEX_US_MR_USART_MODE_HW_HANDSHAKING_Val _UINT32_(0x2)                                        /* (FLEX_US_MR) Hardware handshaking  */
#define   FLEX_US_MR_USART_MODE_ISO7816_T_0_Val _UINT32_(0x4)                                        /* (FLEX_US_MR) ISO7816 Protocol: T = 0  */
#define   FLEX_US_MR_USART_MODE_ISO7816_T_1_Val _UINT32_(0x6)                                        /* (FLEX_US_MR) ISO7816 Protocol: T = 1  */
#define   FLEX_US_MR_USART_MODE_IRDA_Val      _UINT32_(0x8)                                        /* (FLEX_US_MR) IrDA  */
#define   FLEX_US_MR_USART_MODE_LIN_MASTER_Val _UINT32_(0xA)                                        /* (FLEX_US_MR) LIN Host mode  */
#define   FLEX_US_MR_USART_MODE_LIN_SLAVE_Val _UINT32_(0xB)                                        /* (FLEX_US_MR) LIN Client mode  */
#define   FLEX_US_MR_USART_MODE_DATA16BIT_MASTER_Val _UINT32_(0xC)                                        /* (FLEX_US_MR) 16-bit data host  */
#define   FLEX_US_MR_USART_MODE_DATA16BIT_SLAVE_Val _UINT32_(0xD)                                        /* (FLEX_US_MR) 16-bit data client  */
#define FLEX_US_MR_USART_MODE_NORMAL          (FLEX_US_MR_USART_MODE_NORMAL_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) Normal mode Position */
#define FLEX_US_MR_USART_MODE_RS485           (FLEX_US_MR_USART_MODE_RS485_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) RS485 Position */
#define FLEX_US_MR_USART_MODE_HW_HANDSHAKING  (FLEX_US_MR_USART_MODE_HW_HANDSHAKING_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) Hardware handshaking Position */
#define FLEX_US_MR_USART_MODE_ISO7816_T_0     (FLEX_US_MR_USART_MODE_ISO7816_T_0_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) ISO7816 Protocol: T = 0 Position */
#define FLEX_US_MR_USART_MODE_ISO7816_T_1     (FLEX_US_MR_USART_MODE_ISO7816_T_1_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) ISO7816 Protocol: T = 1 Position */
#define FLEX_US_MR_USART_MODE_IRDA            (FLEX_US_MR_USART_MODE_IRDA_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) IrDA Position */
#define FLEX_US_MR_USART_MODE_LIN_MASTER      (FLEX_US_MR_USART_MODE_LIN_MASTER_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) LIN Host mode Position */
#define FLEX_US_MR_USART_MODE_LIN_SLAVE       (FLEX_US_MR_USART_MODE_LIN_SLAVE_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) LIN Client mode Position */
#define FLEX_US_MR_USART_MODE_DATA16BIT_MASTER (FLEX_US_MR_USART_MODE_DATA16BIT_MASTER_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) 16-bit data host Position */
#define FLEX_US_MR_USART_MODE_DATA16BIT_SLAVE (FLEX_US_MR_USART_MODE_DATA16BIT_SLAVE_Val << FLEX_US_MR_USART_MODE_Pos) /* (FLEX_US_MR) 16-bit data client Position */
#define FLEX_US_MR_USCLKS_Pos                 _UINT32_(4)                                          /* (FLEX_US_MR) Clock Selection Position */
#define FLEX_US_MR_USCLKS_Msk                 (_UINT32_(0x3) << FLEX_US_MR_USCLKS_Pos)             /* (FLEX_US_MR) Clock Selection Mask */
#define FLEX_US_MR_USCLKS(value)              (FLEX_US_MR_USCLKS_Msk & (_UINT32_(value) << FLEX_US_MR_USCLKS_Pos)) /* Assignment of value for USCLKS in the FLEX_US_MR register */
#define   FLEX_US_MR_USCLKS_MCK_Val           _UINT32_(0x0)                                        /* (FLEX_US_MR) Peripheral clock is selected  */
#define   FLEX_US_MR_USCLKS_GCLK_Val          _UINT32_(0x2)                                        /* (FLEX_US_MR) PMC generic clock is selected. If the SCK pin is driven (CLKO = 1), the CD field must be greater than 1.  */
#define   FLEX_US_MR_USCLKS_SCK_Val           _UINT32_(0x3)                                        /* (FLEX_US_MR) External pin SCK is selected  */
#define FLEX_US_MR_USCLKS_MCK                 (FLEX_US_MR_USCLKS_MCK_Val << FLEX_US_MR_USCLKS_Pos) /* (FLEX_US_MR) Peripheral clock is selected Position */
#define FLEX_US_MR_USCLKS_GCLK                (FLEX_US_MR_USCLKS_GCLK_Val << FLEX_US_MR_USCLKS_Pos) /* (FLEX_US_MR) PMC generic clock is selected. If the SCK pin is driven (CLKO = 1), the CD field must be greater than 1. Position */
#define FLEX_US_MR_USCLKS_SCK                 (FLEX_US_MR_USCLKS_SCK_Val << FLEX_US_MR_USCLKS_Pos) /* (FLEX_US_MR) External pin SCK is selected Position */
#define FLEX_US_MR_CHRL_Pos                   _UINT32_(6)                                          /* (FLEX_US_MR) Character Length Position */
#define FLEX_US_MR_CHRL_Msk                   (_UINT32_(0x3) << FLEX_US_MR_CHRL_Pos)               /* (FLEX_US_MR) Character Length Mask */
#define FLEX_US_MR_CHRL(value)                (FLEX_US_MR_CHRL_Msk & (_UINT32_(value) << FLEX_US_MR_CHRL_Pos)) /* Assignment of value for CHRL in the FLEX_US_MR register */
#define   FLEX_US_MR_CHRL_5_BIT_Val           _UINT32_(0x0)                                        /* (FLEX_US_MR) Character length is 5 bits  */
#define   FLEX_US_MR_CHRL_6_BIT_Val           _UINT32_(0x1)                                        /* (FLEX_US_MR) Character length is 6 bits  */
#define   FLEX_US_MR_CHRL_7_BIT_Val           _UINT32_(0x2)                                        /* (FLEX_US_MR) Character length is 7 bits  */
#define   FLEX_US_MR_CHRL_8_BIT_Val           _UINT32_(0x3)                                        /* (FLEX_US_MR) Character length is 8 bits  */
#define FLEX_US_MR_CHRL_5_BIT                 (FLEX_US_MR_CHRL_5_BIT_Val << FLEX_US_MR_CHRL_Pos)   /* (FLEX_US_MR) Character length is 5 bits Position */
#define FLEX_US_MR_CHRL_6_BIT                 (FLEX_US_MR_CHRL_6_BIT_Val << FLEX_US_MR_CHRL_Pos)   /* (FLEX_US_MR) Character length is 6 bits Position */
#define FLEX_US_MR_CHRL_7_BIT                 (FLEX_US_MR_CHRL_7_BIT_Val << FLEX_US_MR_CHRL_Pos)   /* (FLEX_US_MR) Character length is 7 bits Position */
#define FLEX_US_MR_CHRL_8_BIT                 (FLEX_US_MR_CHRL_8_BIT_Val << FLEX_US_MR_CHRL_Pos)   /* (FLEX_US_MR) Character length is 8 bits Position */
#define FLEX_US_MR_SYNC_Pos                   _UINT32_(8)                                          /* (FLEX_US_MR) Synchronous Mode Select Position */
#define FLEX_US_MR_SYNC_Msk                   (_UINT32_(0x1) << FLEX_US_MR_SYNC_Pos)               /* (FLEX_US_MR) Synchronous Mode Select Mask */
#define FLEX_US_MR_SYNC(value)                (FLEX_US_MR_SYNC_Msk & (_UINT32_(value) << FLEX_US_MR_SYNC_Pos)) /* Assignment of value for SYNC in the FLEX_US_MR register */
#define   FLEX_US_MR_SYNC_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_MR) USART operates in Asynchronous mode (UART).  */
#define   FLEX_US_MR_SYNC_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_MR) USART operates in Synchronous mode.  */
#define FLEX_US_MR_SYNC_0                     (FLEX_US_MR_SYNC_0_Val << FLEX_US_MR_SYNC_Pos)       /* (FLEX_US_MR) USART operates in Asynchronous mode (UART). Position */
#define FLEX_US_MR_SYNC_1                     (FLEX_US_MR_SYNC_1_Val << FLEX_US_MR_SYNC_Pos)       /* (FLEX_US_MR) USART operates in Synchronous mode. Position */
#define FLEX_US_MR_PAR_Pos                    _UINT32_(9)                                          /* (FLEX_US_MR) Parity Type Position */
#define FLEX_US_MR_PAR_Msk                    (_UINT32_(0x7) << FLEX_US_MR_PAR_Pos)                /* (FLEX_US_MR) Parity Type Mask */
#define FLEX_US_MR_PAR(value)                 (FLEX_US_MR_PAR_Msk & (_UINT32_(value) << FLEX_US_MR_PAR_Pos)) /* Assignment of value for PAR in the FLEX_US_MR register */
#define   FLEX_US_MR_PAR_EVEN_Val             _UINT32_(0x0)                                        /* (FLEX_US_MR) Even parity  */
#define   FLEX_US_MR_PAR_ODD_Val              _UINT32_(0x1)                                        /* (FLEX_US_MR) Odd parity  */
#define   FLEX_US_MR_PAR_SPACE_Val            _UINT32_(0x2)                                        /* (FLEX_US_MR) Parity forced to 0 (Space)  */
#define   FLEX_US_MR_PAR_MARK_Val             _UINT32_(0x3)                                        /* (FLEX_US_MR) Parity forced to 1 (Mark)  */
#define   FLEX_US_MR_PAR_NO_Val               _UINT32_(0x4)                                        /* (FLEX_US_MR) No parity  */
#define   FLEX_US_MR_PAR_MULTIDROP_Val        _UINT32_(0x6)                                        /* (FLEX_US_MR) Multidrop mode  */
#define FLEX_US_MR_PAR_EVEN                   (FLEX_US_MR_PAR_EVEN_Val << FLEX_US_MR_PAR_Pos)      /* (FLEX_US_MR) Even parity Position */
#define FLEX_US_MR_PAR_ODD                    (FLEX_US_MR_PAR_ODD_Val << FLEX_US_MR_PAR_Pos)       /* (FLEX_US_MR) Odd parity Position */
#define FLEX_US_MR_PAR_SPACE                  (FLEX_US_MR_PAR_SPACE_Val << FLEX_US_MR_PAR_Pos)     /* (FLEX_US_MR) Parity forced to 0 (Space) Position */
#define FLEX_US_MR_PAR_MARK                   (FLEX_US_MR_PAR_MARK_Val << FLEX_US_MR_PAR_Pos)      /* (FLEX_US_MR) Parity forced to 1 (Mark) Position */
#define FLEX_US_MR_PAR_NO                     (FLEX_US_MR_PAR_NO_Val << FLEX_US_MR_PAR_Pos)        /* (FLEX_US_MR) No parity Position */
#define FLEX_US_MR_PAR_MULTIDROP              (FLEX_US_MR_PAR_MULTIDROP_Val << FLEX_US_MR_PAR_Pos) /* (FLEX_US_MR) Multidrop mode Position */
#define FLEX_US_MR_NBSTOP_Pos                 _UINT32_(12)                                         /* (FLEX_US_MR) Number of Stop Bits Position */
#define FLEX_US_MR_NBSTOP_Msk                 (_UINT32_(0x3) << FLEX_US_MR_NBSTOP_Pos)             /* (FLEX_US_MR) Number of Stop Bits Mask */
#define FLEX_US_MR_NBSTOP(value)              (FLEX_US_MR_NBSTOP_Msk & (_UINT32_(value) << FLEX_US_MR_NBSTOP_Pos)) /* Assignment of value for NBSTOP in the FLEX_US_MR register */
#define   FLEX_US_MR_NBSTOP_1_BIT_Val         _UINT32_(0x0)                                        /* (FLEX_US_MR) 1 stop bit  */
#define   FLEX_US_MR_NBSTOP_1_5_BIT_Val       _UINT32_(0x1)                                        /* (FLEX_US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1)  */
#define   FLEX_US_MR_NBSTOP_2_BIT_Val         _UINT32_(0x2)                                        /* (FLEX_US_MR) 2 stop bits  */
#define FLEX_US_MR_NBSTOP_1_BIT               (FLEX_US_MR_NBSTOP_1_BIT_Val << FLEX_US_MR_NBSTOP_Pos) /* (FLEX_US_MR) 1 stop bit Position */
#define FLEX_US_MR_NBSTOP_1_5_BIT             (FLEX_US_MR_NBSTOP_1_5_BIT_Val << FLEX_US_MR_NBSTOP_Pos) /* (FLEX_US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1) Position */
#define FLEX_US_MR_NBSTOP_2_BIT               (FLEX_US_MR_NBSTOP_2_BIT_Val << FLEX_US_MR_NBSTOP_Pos) /* (FLEX_US_MR) 2 stop bits Position */
#define FLEX_US_MR_CHMODE_Pos                 _UINT32_(14)                                         /* (FLEX_US_MR) Channel Mode Position */
#define FLEX_US_MR_CHMODE_Msk                 (_UINT32_(0x3) << FLEX_US_MR_CHMODE_Pos)             /* (FLEX_US_MR) Channel Mode Mask */
#define FLEX_US_MR_CHMODE(value)              (FLEX_US_MR_CHMODE_Msk & (_UINT32_(value) << FLEX_US_MR_CHMODE_Pos)) /* Assignment of value for CHMODE in the FLEX_US_MR register */
#define   FLEX_US_MR_CHMODE_NORMAL_Val        _UINT32_(0x0)                                        /* (FLEX_US_MR) Normal mode  */
#define   FLEX_US_MR_CHMODE_AUTOMATIC_Val     _UINT32_(0x1)                                        /* (FLEX_US_MR) Automatic Echo. Receiver input is connected to the TXD pin.  */
#define   FLEX_US_MR_CHMODE_LOCAL_LOOPBACK_Val _UINT32_(0x2)                                        /* (FLEX_US_MR) Local Loopback. Transmitter output is connected to the Receiver Input.  */
#define   FLEX_US_MR_CHMODE_REMOTE_LOOPBACK_Val _UINT32_(0x3)                                        /* (FLEX_US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin.  */
#define FLEX_US_MR_CHMODE_NORMAL              (FLEX_US_MR_CHMODE_NORMAL_Val << FLEX_US_MR_CHMODE_Pos) /* (FLEX_US_MR) Normal mode Position */
#define FLEX_US_MR_CHMODE_AUTOMATIC           (FLEX_US_MR_CHMODE_AUTOMATIC_Val << FLEX_US_MR_CHMODE_Pos) /* (FLEX_US_MR) Automatic Echo. Receiver input is connected to the TXD pin. Position */
#define FLEX_US_MR_CHMODE_LOCAL_LOOPBACK      (FLEX_US_MR_CHMODE_LOCAL_LOOPBACK_Val << FLEX_US_MR_CHMODE_Pos) /* (FLEX_US_MR) Local Loopback. Transmitter output is connected to the Receiver Input. Position */
#define FLEX_US_MR_CHMODE_REMOTE_LOOPBACK     (FLEX_US_MR_CHMODE_REMOTE_LOOPBACK_Val << FLEX_US_MR_CHMODE_Pos) /* (FLEX_US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin. Position */
#define FLEX_US_MR_MSBF_Pos                   _UINT32_(16)                                         /* (FLEX_US_MR) Bit Order Position */
#define FLEX_US_MR_MSBF_Msk                   (_UINT32_(0x1) << FLEX_US_MR_MSBF_Pos)               /* (FLEX_US_MR) Bit Order Mask */
#define FLEX_US_MR_MSBF(value)                (FLEX_US_MR_MSBF_Msk & (_UINT32_(value) << FLEX_US_MR_MSBF_Pos)) /* Assignment of value for MSBF in the FLEX_US_MR register */
#define   FLEX_US_MR_MSBF_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_MR) Least significant bit is sent/received first.  */
#define   FLEX_US_MR_MSBF_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_MR) Most significant bit is sent/received first.  */
#define FLEX_US_MR_MSBF_0                     (FLEX_US_MR_MSBF_0_Val << FLEX_US_MR_MSBF_Pos)       /* (FLEX_US_MR) Least significant bit is sent/received first. Position */
#define FLEX_US_MR_MSBF_1                     (FLEX_US_MR_MSBF_1_Val << FLEX_US_MR_MSBF_Pos)       /* (FLEX_US_MR) Most significant bit is sent/received first. Position */
#define FLEX_US_MR_MODE9_Pos                  _UINT32_(17)                                         /* (FLEX_US_MR) 9-bit Character Length Position */
#define FLEX_US_MR_MODE9_Msk                  (_UINT32_(0x1) << FLEX_US_MR_MODE9_Pos)              /* (FLEX_US_MR) 9-bit Character Length Mask */
#define FLEX_US_MR_MODE9(value)               (FLEX_US_MR_MODE9_Msk & (_UINT32_(value) << FLEX_US_MR_MODE9_Pos)) /* Assignment of value for MODE9 in the FLEX_US_MR register */
#define   FLEX_US_MR_MODE9_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_MR) CHRL defines character length.  */
#define   FLEX_US_MR_MODE9_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_MR) 9-bit character length.  */
#define FLEX_US_MR_MODE9_0                    (FLEX_US_MR_MODE9_0_Val << FLEX_US_MR_MODE9_Pos)     /* (FLEX_US_MR) CHRL defines character length. Position */
#define FLEX_US_MR_MODE9_1                    (FLEX_US_MR_MODE9_1_Val << FLEX_US_MR_MODE9_Pos)     /* (FLEX_US_MR) 9-bit character length. Position */
#define FLEX_US_MR_CLKO_Pos                   _UINT32_(18)                                         /* (FLEX_US_MR) Clock Output Select Position */
#define FLEX_US_MR_CLKO_Msk                   (_UINT32_(0x1) << FLEX_US_MR_CLKO_Pos)               /* (FLEX_US_MR) Clock Output Select Mask */
#define FLEX_US_MR_CLKO(value)                (FLEX_US_MR_CLKO_Msk & (_UINT32_(value) << FLEX_US_MR_CLKO_Pos)) /* Assignment of value for CLKO in the FLEX_US_MR register */
#define   FLEX_US_MR_CLKO_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_MR) The USART does not drive the SCK pin (Synchronous Client mode or Asynchronous mode with external baud rate clock source).  */
#define   FLEX_US_MR_CLKO_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_MR) The USART drives the SCK pin if USCLKS does not select the external clock SCK (USART Synchronous Host mode).  */
#define FLEX_US_MR_CLKO_0                     (FLEX_US_MR_CLKO_0_Val << FLEX_US_MR_CLKO_Pos)       /* (FLEX_US_MR) The USART does not drive the SCK pin (Synchronous Client mode or Asynchronous mode with external baud rate clock source). Position */
#define FLEX_US_MR_CLKO_1                     (FLEX_US_MR_CLKO_1_Val << FLEX_US_MR_CLKO_Pos)       /* (FLEX_US_MR) The USART drives the SCK pin if USCLKS does not select the external clock SCK (USART Synchronous Host mode). Position */
#define FLEX_US_MR_OVER_Pos                   _UINT32_(19)                                         /* (FLEX_US_MR) Oversampling Mode Position */
#define FLEX_US_MR_OVER_Msk                   (_UINT32_(0x1) << FLEX_US_MR_OVER_Pos)               /* (FLEX_US_MR) Oversampling Mode Mask */
#define FLEX_US_MR_OVER(value)                (FLEX_US_MR_OVER_Msk & (_UINT32_(value) << FLEX_US_MR_OVER_Pos)) /* Assignment of value for OVER in the FLEX_US_MR register */
#define   FLEX_US_MR_OVER_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_MR) 16x Oversampling.  */
#define   FLEX_US_MR_OVER_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_MR) 8x Oversampling.  */
#define FLEX_US_MR_OVER_0                     (FLEX_US_MR_OVER_0_Val << FLEX_US_MR_OVER_Pos)       /* (FLEX_US_MR) 16x Oversampling. Position */
#define FLEX_US_MR_OVER_1                     (FLEX_US_MR_OVER_1_Val << FLEX_US_MR_OVER_Pos)       /* (FLEX_US_MR) 8x Oversampling. Position */
#define FLEX_US_MR_INACK_Pos                  _UINT32_(20)                                         /* (FLEX_US_MR) Inhibit Non Acknowledge Position */
#define FLEX_US_MR_INACK_Msk                  (_UINT32_(0x1) << FLEX_US_MR_INACK_Pos)              /* (FLEX_US_MR) Inhibit Non Acknowledge Mask */
#define FLEX_US_MR_INACK(value)               (FLEX_US_MR_INACK_Msk & (_UINT32_(value) << FLEX_US_MR_INACK_Pos)) /* Assignment of value for INACK in the FLEX_US_MR register */
#define   FLEX_US_MR_INACK_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_MR) The NACK is generated.  */
#define   FLEX_US_MR_INACK_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_MR) The NACK is not generated.  */
#define FLEX_US_MR_INACK_0                    (FLEX_US_MR_INACK_0_Val << FLEX_US_MR_INACK_Pos)     /* (FLEX_US_MR) The NACK is generated. Position */
#define FLEX_US_MR_INACK_1                    (FLEX_US_MR_INACK_1_Val << FLEX_US_MR_INACK_Pos)     /* (FLEX_US_MR) The NACK is not generated. Position */
#define FLEX_US_MR_DSNACK_Pos                 _UINT32_(21)                                         /* (FLEX_US_MR) Disable Successive NACK Position */
#define FLEX_US_MR_DSNACK_Msk                 (_UINT32_(0x1) << FLEX_US_MR_DSNACK_Pos)             /* (FLEX_US_MR) Disable Successive NACK Mask */
#define FLEX_US_MR_DSNACK(value)              (FLEX_US_MR_DSNACK_Msk & (_UINT32_(value) << FLEX_US_MR_DSNACK_Pos)) /* Assignment of value for DSNACK in the FLEX_US_MR register */
#define   FLEX_US_MR_DSNACK_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_MR) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set).  */
#define   FLEX_US_MR_DSNACK_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_MR) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generate a NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITER is asserted.  */
#define FLEX_US_MR_DSNACK_0                   (FLEX_US_MR_DSNACK_0_Val << FLEX_US_MR_DSNACK_Pos)   /* (FLEX_US_MR) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set). Position */
#define FLEX_US_MR_DSNACK_1                   (FLEX_US_MR_DSNACK_1_Val << FLEX_US_MR_DSNACK_Pos)   /* (FLEX_US_MR) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generate a NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITER is asserted. Position */
#define FLEX_US_MR_VAR_SYNC_Pos               _UINT32_(22)                                         /* (FLEX_US_MR) Variable Synchronization of Command/Data Sync Start Frame Delimiter Position */
#define FLEX_US_MR_VAR_SYNC_Msk               (_UINT32_(0x1) << FLEX_US_MR_VAR_SYNC_Pos)           /* (FLEX_US_MR) Variable Synchronization of Command/Data Sync Start Frame Delimiter Mask */
#define FLEX_US_MR_VAR_SYNC(value)            (FLEX_US_MR_VAR_SYNC_Msk & (_UINT32_(value) << FLEX_US_MR_VAR_SYNC_Pos)) /* Assignment of value for VAR_SYNC in the FLEX_US_MR register */
#define   FLEX_US_MR_VAR_SYNC_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_MR) User defined configuration of command or data sync field depending on MODSYNC value.  */
#define   FLEX_US_MR_VAR_SYNC_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_MR) The sync field is updated when a character is written into FLEX_US_THR.  */
#define FLEX_US_MR_VAR_SYNC_0                 (FLEX_US_MR_VAR_SYNC_0_Val << FLEX_US_MR_VAR_SYNC_Pos) /* (FLEX_US_MR) User defined configuration of command or data sync field depending on MODSYNC value. Position */
#define FLEX_US_MR_VAR_SYNC_1                 (FLEX_US_MR_VAR_SYNC_1_Val << FLEX_US_MR_VAR_SYNC_Pos) /* (FLEX_US_MR) The sync field is updated when a character is written into FLEX_US_THR. Position */
#define FLEX_US_MR_INVDATA_Pos                _UINT32_(23)                                         /* (FLEX_US_MR) Inverted Data Position */
#define FLEX_US_MR_INVDATA_Msk                (_UINT32_(0x1) << FLEX_US_MR_INVDATA_Pos)            /* (FLEX_US_MR) Inverted Data Mask */
#define FLEX_US_MR_INVDATA(value)             (FLEX_US_MR_INVDATA_Msk & (_UINT32_(value) << FLEX_US_MR_INVDATA_Pos)) /* Assignment of value for INVDATA in the FLEX_US_MR register */
#define   FLEX_US_MR_INVDATA_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_MR) The data field transmitted on TXD line is the same as the one written in FLEX_US_THR or the content read in FLEX_US_RHR is the same as RXD line. Normal mode of operation.  */
#define   FLEX_US_MR_INVDATA_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_MR) The data field transmitted on TXD line is inverted (voltage polarity only) compared to the value written in FLEX_US_THR or the content read in FLEX_US_RHR is inverted compared to what is received on RXD line (or ISO7816 IO line). Inverted mode of operation, useful for contactless card application. To be used with configuration bit MSBF.  */
#define FLEX_US_MR_INVDATA_0                  (FLEX_US_MR_INVDATA_0_Val << FLEX_US_MR_INVDATA_Pos) /* (FLEX_US_MR) The data field transmitted on TXD line is the same as the one written in FLEX_US_THR or the content read in FLEX_US_RHR is the same as RXD line. Normal mode of operation. Position */
#define FLEX_US_MR_INVDATA_1                  (FLEX_US_MR_INVDATA_1_Val << FLEX_US_MR_INVDATA_Pos) /* (FLEX_US_MR) The data field transmitted on TXD line is inverted (voltage polarity only) compared to the value written in FLEX_US_THR or the content read in FLEX_US_RHR is inverted compared to what is received on RXD line (or ISO7816 IO line). Inverted mode of operation, useful for contactless card application. To be used with configuration bit MSBF. Position */
#define FLEX_US_MR_MAX_ITERATION_Pos          _UINT32_(24)                                         /* (FLEX_US_MR) Maximum Number of Automatic Iteration Position */
#define FLEX_US_MR_MAX_ITERATION_Msk          (_UINT32_(0x7) << FLEX_US_MR_MAX_ITERATION_Pos)      /* (FLEX_US_MR) Maximum Number of Automatic Iteration Mask */
#define FLEX_US_MR_MAX_ITERATION(value)       (FLEX_US_MR_MAX_ITERATION_Msk & (_UINT32_(value) << FLEX_US_MR_MAX_ITERATION_Pos)) /* Assignment of value for MAX_ITERATION in the FLEX_US_MR register */
#define FLEX_US_MR_FILTER_Pos                 _UINT32_(28)                                         /* (FLEX_US_MR) Receive Line Filter Position */
#define FLEX_US_MR_FILTER_Msk                 (_UINT32_(0x1) << FLEX_US_MR_FILTER_Pos)             /* (FLEX_US_MR) Receive Line Filter Mask */
#define FLEX_US_MR_FILTER(value)              (FLEX_US_MR_FILTER_Msk & (_UINT32_(value) << FLEX_US_MR_FILTER_Pos)) /* Assignment of value for FILTER in the FLEX_US_MR register */
#define   FLEX_US_MR_FILTER_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_MR) The USART does not filter the receive line.  */
#define   FLEX_US_MR_FILTER_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_MR) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority).  */
#define FLEX_US_MR_FILTER_0                   (FLEX_US_MR_FILTER_0_Val << FLEX_US_MR_FILTER_Pos)   /* (FLEX_US_MR) The USART does not filter the receive line. Position */
#define FLEX_US_MR_FILTER_1                   (FLEX_US_MR_FILTER_1_Val << FLEX_US_MR_FILTER_Pos)   /* (FLEX_US_MR) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority). Position */
#define FLEX_US_MR_MAN_Pos                    _UINT32_(29)                                         /* (FLEX_US_MR) Manchester Encoder/Decoder Enable Position */
#define FLEX_US_MR_MAN_Msk                    (_UINT32_(0x1) << FLEX_US_MR_MAN_Pos)                /* (FLEX_US_MR) Manchester Encoder/Decoder Enable Mask */
#define FLEX_US_MR_MAN(value)                 (FLEX_US_MR_MAN_Msk & (_UINT32_(value) << FLEX_US_MR_MAN_Pos)) /* Assignment of value for MAN in the FLEX_US_MR register */
#define   FLEX_US_MR_MAN_0_Val                _UINT32_(0x0)                                        /* (FLEX_US_MR) Manchester encoder/decoder are disabled.  */
#define   FLEX_US_MR_MAN_1_Val                _UINT32_(0x1)                                        /* (FLEX_US_MR) Manchester encoder/decoder are enabled.  */
#define FLEX_US_MR_MAN_0                      (FLEX_US_MR_MAN_0_Val << FLEX_US_MR_MAN_Pos)         /* (FLEX_US_MR) Manchester encoder/decoder are disabled. Position */
#define FLEX_US_MR_MAN_1                      (FLEX_US_MR_MAN_1_Val << FLEX_US_MR_MAN_Pos)         /* (FLEX_US_MR) Manchester encoder/decoder are enabled. Position */
#define FLEX_US_MR_MODSYNC_Pos                _UINT32_(30)                                         /* (FLEX_US_MR) Manchester Synchronization Mode Position */
#define FLEX_US_MR_MODSYNC_Msk                (_UINT32_(0x1) << FLEX_US_MR_MODSYNC_Pos)            /* (FLEX_US_MR) Manchester Synchronization Mode Mask */
#define FLEX_US_MR_MODSYNC(value)             (FLEX_US_MR_MODSYNC_Msk & (_UINT32_(value) << FLEX_US_MR_MODSYNC_Pos)) /* Assignment of value for MODSYNC in the FLEX_US_MR register */
#define   FLEX_US_MR_MODSYNC_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_MR) The Manchester start bit is a 0 to 1 transition  */
#define   FLEX_US_MR_MODSYNC_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_MR) The Manchester start bit is a 1 to 0 transition.  */
#define FLEX_US_MR_MODSYNC_0                  (FLEX_US_MR_MODSYNC_0_Val << FLEX_US_MR_MODSYNC_Pos) /* (FLEX_US_MR) The Manchester start bit is a 0 to 1 transition Position */
#define FLEX_US_MR_MODSYNC_1                  (FLEX_US_MR_MODSYNC_1_Val << FLEX_US_MR_MODSYNC_Pos) /* (FLEX_US_MR) The Manchester start bit is a 1 to 0 transition. Position */
#define FLEX_US_MR_ONEBIT_Pos                 _UINT32_(31)                                         /* (FLEX_US_MR) Start Frame Delimiter Selector Position */
#define FLEX_US_MR_ONEBIT_Msk                 (_UINT32_(0x1) << FLEX_US_MR_ONEBIT_Pos)             /* (FLEX_US_MR) Start Frame Delimiter Selector Mask */
#define FLEX_US_MR_ONEBIT(value)              (FLEX_US_MR_ONEBIT_Msk & (_UINT32_(value) << FLEX_US_MR_ONEBIT_Pos)) /* Assignment of value for ONEBIT in the FLEX_US_MR register */
#define   FLEX_US_MR_ONEBIT_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_MR) Start frame delimiter is COMMAND or DATA SYNC.  */
#define   FLEX_US_MR_ONEBIT_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_MR) Start frame delimiter is one bit.  */
#define FLEX_US_MR_ONEBIT_0                   (FLEX_US_MR_ONEBIT_0_Val << FLEX_US_MR_ONEBIT_Pos)   /* (FLEX_US_MR) Start frame delimiter is COMMAND or DATA SYNC. Position */
#define FLEX_US_MR_ONEBIT_1                   (FLEX_US_MR_ONEBIT_1_Val << FLEX_US_MR_ONEBIT_Pos)   /* (FLEX_US_MR) Start frame delimiter is one bit. Position */
#define FLEX_US_MR_Msk                        _UINT32_(0xF7FFFFFF)                                 /* (FLEX_US_MR) Register Mask  */

#define FLEX_US_MR_MODE_Pos                   _UINT32_(17)                                         /* (FLEX_US_MR Position) 9-bit Character Length */
#define FLEX_US_MR_MODE_Msk                   (_UINT32_(0x1) << FLEX_US_MR_MODE_Pos)               /* (FLEX_US_MR Mask) MODE */
#define FLEX_US_MR_MODE(value)                (FLEX_US_MR_MODE_Msk & (_UINT32_(value) << FLEX_US_MR_MODE_Pos)) 

/* -------- FLEX_US_IER : (FLEXCOM Offset: 0x208) ( /W 32) USART Interrupt Enable Register -------- */
#define FLEX_US_IER_RXRDY_Pos                 _UINT32_(0)                                          /* (FLEX_US_IER) RXRDY Interrupt Enable Position */
#define FLEX_US_IER_RXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_IER_RXRDY_Pos)             /* (FLEX_US_IER) RXRDY Interrupt Enable Mask */
#define FLEX_US_IER_RXRDY(value)              (FLEX_US_IER_RXRDY_Msk & (_UINT32_(value) << FLEX_US_IER_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_US_IER register */
#define FLEX_US_IER_TXRDY_Pos                 _UINT32_(1)                                          /* (FLEX_US_IER) TXRDY Interrupt Enable Position */
#define FLEX_US_IER_TXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_IER_TXRDY_Pos)             /* (FLEX_US_IER) TXRDY Interrupt Enable Mask */
#define FLEX_US_IER_TXRDY(value)              (FLEX_US_IER_TXRDY_Msk & (_UINT32_(value) << FLEX_US_IER_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_US_IER register */
#define FLEX_US_IER_RXBRK_Pos                 _UINT32_(2)                                          /* (FLEX_US_IER) Receiver Break Interrupt Enable Position */
#define FLEX_US_IER_RXBRK_Msk                 (_UINT32_(0x1) << FLEX_US_IER_RXBRK_Pos)             /* (FLEX_US_IER) Receiver Break Interrupt Enable Mask */
#define FLEX_US_IER_RXBRK(value)              (FLEX_US_IER_RXBRK_Msk & (_UINT32_(value) << FLEX_US_IER_RXBRK_Pos)) /* Assignment of value for RXBRK in the FLEX_US_IER register */
#define FLEX_US_IER_OVRE_Pos                  _UINT32_(5)                                          /* (FLEX_US_IER) Overrun Error Interrupt Enable Position */
#define FLEX_US_IER_OVRE_Msk                  (_UINT32_(0x1) << FLEX_US_IER_OVRE_Pos)              /* (FLEX_US_IER) Overrun Error Interrupt Enable Mask */
#define FLEX_US_IER_OVRE(value)               (FLEX_US_IER_OVRE_Msk & (_UINT32_(value) << FLEX_US_IER_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_US_IER register */
#define FLEX_US_IER_FRAME_Pos                 _UINT32_(6)                                          /* (FLEX_US_IER) Framing Error Interrupt Enable Position */
#define FLEX_US_IER_FRAME_Msk                 (_UINT32_(0x1) << FLEX_US_IER_FRAME_Pos)             /* (FLEX_US_IER) Framing Error Interrupt Enable Mask */
#define FLEX_US_IER_FRAME(value)              (FLEX_US_IER_FRAME_Msk & (_UINT32_(value) << FLEX_US_IER_FRAME_Pos)) /* Assignment of value for FRAME in the FLEX_US_IER register */
#define FLEX_US_IER_PARE_Pos                  _UINT32_(7)                                          /* (FLEX_US_IER) Parity Error Interrupt Enable Position */
#define FLEX_US_IER_PARE_Msk                  (_UINT32_(0x1) << FLEX_US_IER_PARE_Pos)              /* (FLEX_US_IER) Parity Error Interrupt Enable Mask */
#define FLEX_US_IER_PARE(value)               (FLEX_US_IER_PARE_Msk & (_UINT32_(value) << FLEX_US_IER_PARE_Pos)) /* Assignment of value for PARE in the FLEX_US_IER register */
#define FLEX_US_IER_TIMEOUT_Pos               _UINT32_(8)                                          /* (FLEX_US_IER) Timeout Interrupt Enable Position */
#define FLEX_US_IER_TIMEOUT_Msk               (_UINT32_(0x1) << FLEX_US_IER_TIMEOUT_Pos)           /* (FLEX_US_IER) Timeout Interrupt Enable Mask */
#define FLEX_US_IER_TIMEOUT(value)            (FLEX_US_IER_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_IER_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the FLEX_US_IER register */
#define FLEX_US_IER_TXEMPTY_Pos               _UINT32_(9)                                          /* (FLEX_US_IER) TXEMPTY Interrupt Enable Position */
#define FLEX_US_IER_TXEMPTY_Msk               (_UINT32_(0x1) << FLEX_US_IER_TXEMPTY_Pos)           /* (FLEX_US_IER) TXEMPTY Interrupt Enable Mask */
#define FLEX_US_IER_TXEMPTY(value)            (FLEX_US_IER_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_IER_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_US_IER register */
#define FLEX_US_IER_ITER_Pos                  _UINT32_(10)                                         /* (FLEX_US_IER) Max number of Repetitions Reached Interrupt Enable Position */
#define FLEX_US_IER_ITER_Msk                  (_UINT32_(0x1) << FLEX_US_IER_ITER_Pos)              /* (FLEX_US_IER) Max number of Repetitions Reached Interrupt Enable Mask */
#define FLEX_US_IER_ITER(value)               (FLEX_US_IER_ITER_Msk & (_UINT32_(value) << FLEX_US_IER_ITER_Pos)) /* Assignment of value for ITER in the FLEX_US_IER register */
#define FLEX_US_IER_NACK_Pos                  _UINT32_(13)                                         /* (FLEX_US_IER) Non Acknowledge Interrupt Enable Position */
#define FLEX_US_IER_NACK_Msk                  (_UINT32_(0x1) << FLEX_US_IER_NACK_Pos)              /* (FLEX_US_IER) Non Acknowledge Interrupt Enable Mask */
#define FLEX_US_IER_NACK(value)               (FLEX_US_IER_NACK_Msk & (_UINT32_(value) << FLEX_US_IER_NACK_Pos)) /* Assignment of value for NACK in the FLEX_US_IER register */
#define FLEX_US_IER_CTSIC_Pos                 _UINT32_(19)                                         /* (FLEX_US_IER) Clear to Send Input Change Interrupt Enable Position */
#define FLEX_US_IER_CTSIC_Msk                 (_UINT32_(0x1) << FLEX_US_IER_CTSIC_Pos)             /* (FLEX_US_IER) Clear to Send Input Change Interrupt Enable Mask */
#define FLEX_US_IER_CTSIC(value)              (FLEX_US_IER_CTSIC_Msk & (_UINT32_(value) << FLEX_US_IER_CTSIC_Pos)) /* Assignment of value for CTSIC in the FLEX_US_IER register */
#define FLEX_US_IER_SECE_Pos                  _UINT32_(21)                                         /* (FLEX_US_IER) Security/Safety Error Interrupt Enable Position */
#define FLEX_US_IER_SECE_Msk                  (_UINT32_(0x1) << FLEX_US_IER_SECE_Pos)              /* (FLEX_US_IER) Security/Safety Error Interrupt Enable Mask */
#define FLEX_US_IER_SECE(value)               (FLEX_US_IER_SECE_Msk & (_UINT32_(value) << FLEX_US_IER_SECE_Pos)) /* Assignment of value for SECE in the FLEX_US_IER register */
#define FLEX_US_IER_CMP_Pos                   _UINT32_(22)                                         /* (FLEX_US_IER) Comparison Interrupt Enable Position */
#define FLEX_US_IER_CMP_Msk                   (_UINT32_(0x1) << FLEX_US_IER_CMP_Pos)               /* (FLEX_US_IER) Comparison Interrupt Enable Mask */
#define FLEX_US_IER_CMP(value)                (FLEX_US_IER_CMP_Msk & (_UINT32_(value) << FLEX_US_IER_CMP_Pos)) /* Assignment of value for CMP in the FLEX_US_IER register */
#define FLEX_US_IER_MANE_Pos                  _UINT32_(24)                                         /* (FLEX_US_IER) Manchester Error Interrupt Enable Position */
#define FLEX_US_IER_MANE_Msk                  (_UINT32_(0x1) << FLEX_US_IER_MANE_Pos)              /* (FLEX_US_IER) Manchester Error Interrupt Enable Mask */
#define FLEX_US_IER_MANE(value)               (FLEX_US_IER_MANE_Msk & (_UINT32_(value) << FLEX_US_IER_MANE_Pos)) /* Assignment of value for MANE in the FLEX_US_IER register */
#define FLEX_US_IER_Msk                       _UINT32_(0x016827E7)                                 /* (FLEX_US_IER) Register Mask  */

/* LIN mode */
#define FLEX_US_IER_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (FLEX_US_IER) RXRDY Interrupt Enable Position */
#define FLEX_US_IER_LIN_RXRDY_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_RXRDY_Pos)         /* (FLEX_US_IER) RXRDY Interrupt Enable Mask */
#define FLEX_US_IER_LIN_RXRDY(value)          (FLEX_US_IER_LIN_RXRDY_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_RXRDY_Pos))
#define FLEX_US_IER_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (FLEX_US_IER) TXRDY Interrupt Enable Position */
#define FLEX_US_IER_LIN_TXRDY_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_TXRDY_Pos)         /* (FLEX_US_IER) TXRDY Interrupt Enable Mask */
#define FLEX_US_IER_LIN_TXRDY(value)          (FLEX_US_IER_LIN_TXRDY_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_TXRDY_Pos))
#define FLEX_US_IER_LIN_OVRE_Pos              _UINT32_(5)                                          /* (FLEX_US_IER) Overrun Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_OVRE_Msk              (_UINT32_(0x1) << FLEX_US_IER_LIN_OVRE_Pos)          /* (FLEX_US_IER) Overrun Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_OVRE(value)           (FLEX_US_IER_LIN_OVRE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_OVRE_Pos))
#define FLEX_US_IER_LIN_FRAME_Pos             _UINT32_(6)                                          /* (FLEX_US_IER) Framing Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_FRAME_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_FRAME_Pos)         /* (FLEX_US_IER) Framing Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_FRAME(value)          (FLEX_US_IER_LIN_FRAME_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_FRAME_Pos))
#define FLEX_US_IER_LIN_PARE_Pos              _UINT32_(7)                                          /* (FLEX_US_IER) Parity Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_PARE_Msk              (_UINT32_(0x1) << FLEX_US_IER_LIN_PARE_Pos)          /* (FLEX_US_IER) Parity Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_PARE(value)           (FLEX_US_IER_LIN_PARE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_PARE_Pos))
#define FLEX_US_IER_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (FLEX_US_IER) Timeout Interrupt Enable Position */
#define FLEX_US_IER_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << FLEX_US_IER_LIN_TIMEOUT_Pos)       /* (FLEX_US_IER) Timeout Interrupt Enable Mask */
#define FLEX_US_IER_LIN_TIMEOUT(value)        (FLEX_US_IER_LIN_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_TIMEOUT_Pos))
#define FLEX_US_IER_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (FLEX_US_IER) TXEMPTY Interrupt Enable Position */
#define FLEX_US_IER_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << FLEX_US_IER_LIN_TXEMPTY_Pos)       /* (FLEX_US_IER) TXEMPTY Interrupt Enable Mask */
#define FLEX_US_IER_LIN_TXEMPTY(value)        (FLEX_US_IER_LIN_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_TXEMPTY_Pos))
#define FLEX_US_IER_LIN_LINBK_Pos             _UINT32_(13)                                         /* (FLEX_US_IER) LIN Break Sent or LIN Break Received Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINBK_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_LINBK_Pos)         /* (FLEX_US_IER) LIN Break Sent or LIN Break Received Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINBK(value)          (FLEX_US_IER_LIN_LINBK_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINBK_Pos))
#define FLEX_US_IER_LIN_LINID_Pos             _UINT32_(14)                                         /* (FLEX_US_IER) LIN Identifier Sent or LIN Identifier Received Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINID_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_LINID_Pos)         /* (FLEX_US_IER) LIN Identifier Sent or LIN Identifier Received Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINID(value)          (FLEX_US_IER_LIN_LINID_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINID_Pos))
#define FLEX_US_IER_LIN_LINTC_Pos             _UINT32_(15)                                         /* (FLEX_US_IER) LIN Transfer Completed Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINTC_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_LINTC_Pos)         /* (FLEX_US_IER) LIN Transfer Completed Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINTC(value)          (FLEX_US_IER_LIN_LINTC_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINTC_Pos))
#define FLEX_US_IER_LIN_SECE_Pos              _UINT32_(21)                                         /* (FLEX_US_IER) Security/Safety Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_SECE_Msk              (_UINT32_(0x1) << FLEX_US_IER_LIN_SECE_Pos)          /* (FLEX_US_IER) Security/Safety Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_SECE(value)           (FLEX_US_IER_LIN_SECE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_SECE_Pos))
#define FLEX_US_IER_LIN_LINBE_Pos             _UINT32_(25)                                         /* (FLEX_US_IER) LIN Bus Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINBE_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_LINBE_Pos)         /* (FLEX_US_IER) LIN Bus Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINBE(value)          (FLEX_US_IER_LIN_LINBE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINBE_Pos))
#define FLEX_US_IER_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (FLEX_US_IER) LIN Inconsistent Synch Field Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINISFE_Msk           (_UINT32_(0x1) << FLEX_US_IER_LIN_LINISFE_Pos)       /* (FLEX_US_IER) LIN Inconsistent Synch Field Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINISFE(value)        (FLEX_US_IER_LIN_LINISFE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINISFE_Pos))
#define FLEX_US_IER_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (FLEX_US_IER) LIN Identifier Parity Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINIPE_Msk            (_UINT32_(0x1) << FLEX_US_IER_LIN_LINIPE_Pos)        /* (FLEX_US_IER) LIN Identifier Parity Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINIPE(value)         (FLEX_US_IER_LIN_LINIPE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINIPE_Pos))
#define FLEX_US_IER_LIN_LINCE_Pos             _UINT32_(28)                                         /* (FLEX_US_IER) LIN Checksum Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINCE_Msk             (_UINT32_(0x1) << FLEX_US_IER_LIN_LINCE_Pos)         /* (FLEX_US_IER) LIN Checksum Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINCE(value)          (FLEX_US_IER_LIN_LINCE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINCE_Pos))
#define FLEX_US_IER_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (FLEX_US_IER) LIN Client Not Responding Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINSNRE_Msk           (_UINT32_(0x1) << FLEX_US_IER_LIN_LINSNRE_Pos)       /* (FLEX_US_IER) LIN Client Not Responding Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINSNRE(value)        (FLEX_US_IER_LIN_LINSNRE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINSNRE_Pos))
#define FLEX_US_IER_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (FLEX_US_IER) LIN Synch Tolerance Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINSTE_Msk            (_UINT32_(0x1) << FLEX_US_IER_LIN_LINSTE_Pos)        /* (FLEX_US_IER) LIN Synch Tolerance Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINSTE(value)         (FLEX_US_IER_LIN_LINSTE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINSTE_Pos))
#define FLEX_US_IER_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (FLEX_US_IER) LIN Header Timeout Error Interrupt Enable Position */
#define FLEX_US_IER_LIN_LINHTE_Msk            (_UINT32_(0x1) << FLEX_US_IER_LIN_LINHTE_Pos)        /* (FLEX_US_IER) LIN Header Timeout Error Interrupt Enable Mask */
#define FLEX_US_IER_LIN_LINHTE(value)         (FLEX_US_IER_LIN_LINHTE_Msk & (_UINT32_(value) << FLEX_US_IER_LIN_LINHTE_Pos))
#define FLEX_US_IER_LIN_Msk                   _UINT32_(0xFE20E3E3)                                 /* (FLEX_US_IER_LIN) Register Mask  */


/* -------- FLEX_US_IDR : (FLEXCOM Offset: 0x20C) ( /W 32) USART Interrupt Disable Register -------- */
#define FLEX_US_IDR_RXRDY_Pos                 _UINT32_(0)                                          /* (FLEX_US_IDR) RXRDY Interrupt Disable Position */
#define FLEX_US_IDR_RXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_IDR_RXRDY_Pos)             /* (FLEX_US_IDR) RXRDY Interrupt Disable Mask */
#define FLEX_US_IDR_RXRDY(value)              (FLEX_US_IDR_RXRDY_Msk & (_UINT32_(value) << FLEX_US_IDR_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_US_IDR register */
#define FLEX_US_IDR_TXRDY_Pos                 _UINT32_(1)                                          /* (FLEX_US_IDR) TXRDY Interrupt Disable Position */
#define FLEX_US_IDR_TXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_IDR_TXRDY_Pos)             /* (FLEX_US_IDR) TXRDY Interrupt Disable Mask */
#define FLEX_US_IDR_TXRDY(value)              (FLEX_US_IDR_TXRDY_Msk & (_UINT32_(value) << FLEX_US_IDR_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_US_IDR register */
#define FLEX_US_IDR_RXBRK_Pos                 _UINT32_(2)                                          /* (FLEX_US_IDR) Receiver Break Interrupt Disable Position */
#define FLEX_US_IDR_RXBRK_Msk                 (_UINT32_(0x1) << FLEX_US_IDR_RXBRK_Pos)             /* (FLEX_US_IDR) Receiver Break Interrupt Disable Mask */
#define FLEX_US_IDR_RXBRK(value)              (FLEX_US_IDR_RXBRK_Msk & (_UINT32_(value) << FLEX_US_IDR_RXBRK_Pos)) /* Assignment of value for RXBRK in the FLEX_US_IDR register */
#define FLEX_US_IDR_OVRE_Pos                  _UINT32_(5)                                          /* (FLEX_US_IDR) Overrun Error Interrupt Disable Position */
#define FLEX_US_IDR_OVRE_Msk                  (_UINT32_(0x1) << FLEX_US_IDR_OVRE_Pos)              /* (FLEX_US_IDR) Overrun Error Interrupt Disable Mask */
#define FLEX_US_IDR_OVRE(value)               (FLEX_US_IDR_OVRE_Msk & (_UINT32_(value) << FLEX_US_IDR_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_US_IDR register */
#define FLEX_US_IDR_FRAME_Pos                 _UINT32_(6)                                          /* (FLEX_US_IDR) Framing Error Interrupt Disable Position */
#define FLEX_US_IDR_FRAME_Msk                 (_UINT32_(0x1) << FLEX_US_IDR_FRAME_Pos)             /* (FLEX_US_IDR) Framing Error Interrupt Disable Mask */
#define FLEX_US_IDR_FRAME(value)              (FLEX_US_IDR_FRAME_Msk & (_UINT32_(value) << FLEX_US_IDR_FRAME_Pos)) /* Assignment of value for FRAME in the FLEX_US_IDR register */
#define FLEX_US_IDR_PARE_Pos                  _UINT32_(7)                                          /* (FLEX_US_IDR) Parity Error Interrupt Disable Position */
#define FLEX_US_IDR_PARE_Msk                  (_UINT32_(0x1) << FLEX_US_IDR_PARE_Pos)              /* (FLEX_US_IDR) Parity Error Interrupt Disable Mask */
#define FLEX_US_IDR_PARE(value)               (FLEX_US_IDR_PARE_Msk & (_UINT32_(value) << FLEX_US_IDR_PARE_Pos)) /* Assignment of value for PARE in the FLEX_US_IDR register */
#define FLEX_US_IDR_TIMEOUT_Pos               _UINT32_(8)                                          /* (FLEX_US_IDR) Timeout Interrupt Disable Position */
#define FLEX_US_IDR_TIMEOUT_Msk               (_UINT32_(0x1) << FLEX_US_IDR_TIMEOUT_Pos)           /* (FLEX_US_IDR) Timeout Interrupt Disable Mask */
#define FLEX_US_IDR_TIMEOUT(value)            (FLEX_US_IDR_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_IDR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the FLEX_US_IDR register */
#define FLEX_US_IDR_TXEMPTY_Pos               _UINT32_(9)                                          /* (FLEX_US_IDR) TXEMPTY Interrupt Disable Position */
#define FLEX_US_IDR_TXEMPTY_Msk               (_UINT32_(0x1) << FLEX_US_IDR_TXEMPTY_Pos)           /* (FLEX_US_IDR) TXEMPTY Interrupt Disable Mask */
#define FLEX_US_IDR_TXEMPTY(value)            (FLEX_US_IDR_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_IDR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_US_IDR register */
#define FLEX_US_IDR_ITER_Pos                  _UINT32_(10)                                         /* (FLEX_US_IDR) Max Number of Repetitions Reached Interrupt Disable Position */
#define FLEX_US_IDR_ITER_Msk                  (_UINT32_(0x1) << FLEX_US_IDR_ITER_Pos)              /* (FLEX_US_IDR) Max Number of Repetitions Reached Interrupt Disable Mask */
#define FLEX_US_IDR_ITER(value)               (FLEX_US_IDR_ITER_Msk & (_UINT32_(value) << FLEX_US_IDR_ITER_Pos)) /* Assignment of value for ITER in the FLEX_US_IDR register */
#define FLEX_US_IDR_NACK_Pos                  _UINT32_(13)                                         /* (FLEX_US_IDR) Non Acknowledge Interrupt Disable Position */
#define FLEX_US_IDR_NACK_Msk                  (_UINT32_(0x1) << FLEX_US_IDR_NACK_Pos)              /* (FLEX_US_IDR) Non Acknowledge Interrupt Disable Mask */
#define FLEX_US_IDR_NACK(value)               (FLEX_US_IDR_NACK_Msk & (_UINT32_(value) << FLEX_US_IDR_NACK_Pos)) /* Assignment of value for NACK in the FLEX_US_IDR register */
#define FLEX_US_IDR_CTSIC_Pos                 _UINT32_(19)                                         /* (FLEX_US_IDR) Clear to Send Input Change Interrupt Disable Position */
#define FLEX_US_IDR_CTSIC_Msk                 (_UINT32_(0x1) << FLEX_US_IDR_CTSIC_Pos)             /* (FLEX_US_IDR) Clear to Send Input Change Interrupt Disable Mask */
#define FLEX_US_IDR_CTSIC(value)              (FLEX_US_IDR_CTSIC_Msk & (_UINT32_(value) << FLEX_US_IDR_CTSIC_Pos)) /* Assignment of value for CTSIC in the FLEX_US_IDR register */
#define FLEX_US_IDR_SECE_Pos                  _UINT32_(21)                                         /* (FLEX_US_IDR) Security/Safety Error Interrupt Disable Position */
#define FLEX_US_IDR_SECE_Msk                  (_UINT32_(0x1) << FLEX_US_IDR_SECE_Pos)              /* (FLEX_US_IDR) Security/Safety Error Interrupt Disable Mask */
#define FLEX_US_IDR_SECE(value)               (FLEX_US_IDR_SECE_Msk & (_UINT32_(value) << FLEX_US_IDR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_US_IDR register */
#define FLEX_US_IDR_CMP_Pos                   _UINT32_(22)                                         /* (FLEX_US_IDR) Comparison Interrupt Disable Position */
#define FLEX_US_IDR_CMP_Msk                   (_UINT32_(0x1) << FLEX_US_IDR_CMP_Pos)               /* (FLEX_US_IDR) Comparison Interrupt Disable Mask */
#define FLEX_US_IDR_CMP(value)                (FLEX_US_IDR_CMP_Msk & (_UINT32_(value) << FLEX_US_IDR_CMP_Pos)) /* Assignment of value for CMP in the FLEX_US_IDR register */
#define FLEX_US_IDR_MANE_Pos                  _UINT32_(24)                                         /* (FLEX_US_IDR) Manchester Error Interrupt Disable Position */
#define FLEX_US_IDR_MANE_Msk                  (_UINT32_(0x1) << FLEX_US_IDR_MANE_Pos)              /* (FLEX_US_IDR) Manchester Error Interrupt Disable Mask */
#define FLEX_US_IDR_MANE(value)               (FLEX_US_IDR_MANE_Msk & (_UINT32_(value) << FLEX_US_IDR_MANE_Pos)) /* Assignment of value for MANE in the FLEX_US_IDR register */
#define FLEX_US_IDR_Msk                       _UINT32_(0x016827E7)                                 /* (FLEX_US_IDR) Register Mask  */

/* LIN mode */
#define FLEX_US_IDR_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (FLEX_US_IDR) RXRDY Interrupt Disable Position */
#define FLEX_US_IDR_LIN_RXRDY_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_RXRDY_Pos)         /* (FLEX_US_IDR) RXRDY Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_RXRDY(value)          (FLEX_US_IDR_LIN_RXRDY_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_RXRDY_Pos))
#define FLEX_US_IDR_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (FLEX_US_IDR) TXRDY Interrupt Disable Position */
#define FLEX_US_IDR_LIN_TXRDY_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_TXRDY_Pos)         /* (FLEX_US_IDR) TXRDY Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_TXRDY(value)          (FLEX_US_IDR_LIN_TXRDY_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_TXRDY_Pos))
#define FLEX_US_IDR_LIN_OVRE_Pos              _UINT32_(5)                                          /* (FLEX_US_IDR) Overrun Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_OVRE_Msk              (_UINT32_(0x1) << FLEX_US_IDR_LIN_OVRE_Pos)          /* (FLEX_US_IDR) Overrun Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_OVRE(value)           (FLEX_US_IDR_LIN_OVRE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_OVRE_Pos))
#define FLEX_US_IDR_LIN_FRAME_Pos             _UINT32_(6)                                          /* (FLEX_US_IDR) Framing Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_FRAME_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_FRAME_Pos)         /* (FLEX_US_IDR) Framing Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_FRAME(value)          (FLEX_US_IDR_LIN_FRAME_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_FRAME_Pos))
#define FLEX_US_IDR_LIN_PARE_Pos              _UINT32_(7)                                          /* (FLEX_US_IDR) Parity Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_PARE_Msk              (_UINT32_(0x1) << FLEX_US_IDR_LIN_PARE_Pos)          /* (FLEX_US_IDR) Parity Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_PARE(value)           (FLEX_US_IDR_LIN_PARE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_PARE_Pos))
#define FLEX_US_IDR_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (FLEX_US_IDR) Timeout Interrupt Disable Position */
#define FLEX_US_IDR_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << FLEX_US_IDR_LIN_TIMEOUT_Pos)       /* (FLEX_US_IDR) Timeout Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_TIMEOUT(value)        (FLEX_US_IDR_LIN_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_TIMEOUT_Pos))
#define FLEX_US_IDR_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (FLEX_US_IDR) TXEMPTY Interrupt Disable Position */
#define FLEX_US_IDR_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << FLEX_US_IDR_LIN_TXEMPTY_Pos)       /* (FLEX_US_IDR) TXEMPTY Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_TXEMPTY(value)        (FLEX_US_IDR_LIN_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_TXEMPTY_Pos))
#define FLEX_US_IDR_LIN_LINBK_Pos             _UINT32_(13)                                         /* (FLEX_US_IDR) LIN Break Sent or LIN Break Received Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINBK_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINBK_Pos)         /* (FLEX_US_IDR) LIN Break Sent or LIN Break Received Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINBK(value)          (FLEX_US_IDR_LIN_LINBK_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINBK_Pos))
#define FLEX_US_IDR_LIN_LINID_Pos             _UINT32_(14)                                         /* (FLEX_US_IDR) LIN Identifier Sent or LIN Identifier Received Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINID_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINID_Pos)         /* (FLEX_US_IDR) LIN Identifier Sent or LIN Identifier Received Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINID(value)          (FLEX_US_IDR_LIN_LINID_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINID_Pos))
#define FLEX_US_IDR_LIN_LINTC_Pos             _UINT32_(15)                                         /* (FLEX_US_IDR) LIN Transfer Completed Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINTC_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINTC_Pos)         /* (FLEX_US_IDR) LIN Transfer Completed Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINTC(value)          (FLEX_US_IDR_LIN_LINTC_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINTC_Pos))
#define FLEX_US_IDR_LIN_SECE_Pos              _UINT32_(21)                                         /* (FLEX_US_IDR) Security/Safety Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_SECE_Msk              (_UINT32_(0x1) << FLEX_US_IDR_LIN_SECE_Pos)          /* (FLEX_US_IDR) Security/Safety Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_SECE(value)           (FLEX_US_IDR_LIN_SECE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_SECE_Pos))
#define FLEX_US_IDR_LIN_LINBE_Pos             _UINT32_(25)                                         /* (FLEX_US_IDR) LIN Bus Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINBE_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINBE_Pos)         /* (FLEX_US_IDR) LIN Bus Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINBE(value)          (FLEX_US_IDR_LIN_LINBE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINBE_Pos))
#define FLEX_US_IDR_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (FLEX_US_IDR) LIN Inconsistent Synch Field Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINISFE_Msk           (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINISFE_Pos)       /* (FLEX_US_IDR) LIN Inconsistent Synch Field Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINISFE(value)        (FLEX_US_IDR_LIN_LINISFE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINISFE_Pos))
#define FLEX_US_IDR_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (FLEX_US_IDR) LIN Identifier Parity Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINIPE_Msk            (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINIPE_Pos)        /* (FLEX_US_IDR) LIN Identifier Parity Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINIPE(value)         (FLEX_US_IDR_LIN_LINIPE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINIPE_Pos))
#define FLEX_US_IDR_LIN_LINCE_Pos             _UINT32_(28)                                         /* (FLEX_US_IDR) LIN Checksum Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINCE_Msk             (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINCE_Pos)         /* (FLEX_US_IDR) LIN Checksum Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINCE(value)          (FLEX_US_IDR_LIN_LINCE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINCE_Pos))
#define FLEX_US_IDR_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (FLEX_US_IDR) LIN Client Not Responding Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINSNRE_Msk           (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINSNRE_Pos)       /* (FLEX_US_IDR) LIN Client Not Responding Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINSNRE(value)        (FLEX_US_IDR_LIN_LINSNRE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINSNRE_Pos))
#define FLEX_US_IDR_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (FLEX_US_IDR) LIN Synch Tolerance Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINSTE_Msk            (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINSTE_Pos)        /* (FLEX_US_IDR) LIN Synch Tolerance Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINSTE(value)         (FLEX_US_IDR_LIN_LINSTE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINSTE_Pos))
#define FLEX_US_IDR_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (FLEX_US_IDR) LIN Header Timeout Error Interrupt Disable Position */
#define FLEX_US_IDR_LIN_LINHTE_Msk            (_UINT32_(0x1) << FLEX_US_IDR_LIN_LINHTE_Pos)        /* (FLEX_US_IDR) LIN Header Timeout Error Interrupt Disable Mask */
#define FLEX_US_IDR_LIN_LINHTE(value)         (FLEX_US_IDR_LIN_LINHTE_Msk & (_UINT32_(value) << FLEX_US_IDR_LIN_LINHTE_Pos))
#define FLEX_US_IDR_LIN_Msk                   _UINT32_(0xFE20E3E3)                                 /* (FLEX_US_IDR_LIN) Register Mask  */


/* -------- FLEX_US_IMR : (FLEXCOM Offset: 0x210) ( R/ 32) USART Interrupt Mask Register -------- */
#define FLEX_US_IMR_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_US_IMR) USART Interrupt Mask Register  Reset Value */

#define FLEX_US_IMR_RXRDY_Pos                 _UINT32_(0)                                          /* (FLEX_US_IMR) RXRDY Interrupt Mask Position */
#define FLEX_US_IMR_RXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_IMR_RXRDY_Pos)             /* (FLEX_US_IMR) RXRDY Interrupt Mask Mask */
#define FLEX_US_IMR_RXRDY(value)              (FLEX_US_IMR_RXRDY_Msk & (_UINT32_(value) << FLEX_US_IMR_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_US_IMR register */
#define FLEX_US_IMR_TXRDY_Pos                 _UINT32_(1)                                          /* (FLEX_US_IMR) TXRDY Interrupt Mask Position */
#define FLEX_US_IMR_TXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_IMR_TXRDY_Pos)             /* (FLEX_US_IMR) TXRDY Interrupt Mask Mask */
#define FLEX_US_IMR_TXRDY(value)              (FLEX_US_IMR_TXRDY_Msk & (_UINT32_(value) << FLEX_US_IMR_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_US_IMR register */
#define FLEX_US_IMR_RXBRK_Pos                 _UINT32_(2)                                          /* (FLEX_US_IMR) Receiver Break Interrupt Mask Position */
#define FLEX_US_IMR_RXBRK_Msk                 (_UINT32_(0x1) << FLEX_US_IMR_RXBRK_Pos)             /* (FLEX_US_IMR) Receiver Break Interrupt Mask Mask */
#define FLEX_US_IMR_RXBRK(value)              (FLEX_US_IMR_RXBRK_Msk & (_UINT32_(value) << FLEX_US_IMR_RXBRK_Pos)) /* Assignment of value for RXBRK in the FLEX_US_IMR register */
#define FLEX_US_IMR_OVRE_Pos                  _UINT32_(5)                                          /* (FLEX_US_IMR) Overrun Error Interrupt Mask Position */
#define FLEX_US_IMR_OVRE_Msk                  (_UINT32_(0x1) << FLEX_US_IMR_OVRE_Pos)              /* (FLEX_US_IMR) Overrun Error Interrupt Mask Mask */
#define FLEX_US_IMR_OVRE(value)               (FLEX_US_IMR_OVRE_Msk & (_UINT32_(value) << FLEX_US_IMR_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_US_IMR register */
#define FLEX_US_IMR_FRAME_Pos                 _UINT32_(6)                                          /* (FLEX_US_IMR) Framing Error Interrupt Mask Position */
#define FLEX_US_IMR_FRAME_Msk                 (_UINT32_(0x1) << FLEX_US_IMR_FRAME_Pos)             /* (FLEX_US_IMR) Framing Error Interrupt Mask Mask */
#define FLEX_US_IMR_FRAME(value)              (FLEX_US_IMR_FRAME_Msk & (_UINT32_(value) << FLEX_US_IMR_FRAME_Pos)) /* Assignment of value for FRAME in the FLEX_US_IMR register */
#define FLEX_US_IMR_PARE_Pos                  _UINT32_(7)                                          /* (FLEX_US_IMR) Parity Error Interrupt Mask Position */
#define FLEX_US_IMR_PARE_Msk                  (_UINT32_(0x1) << FLEX_US_IMR_PARE_Pos)              /* (FLEX_US_IMR) Parity Error Interrupt Mask Mask */
#define FLEX_US_IMR_PARE(value)               (FLEX_US_IMR_PARE_Msk & (_UINT32_(value) << FLEX_US_IMR_PARE_Pos)) /* Assignment of value for PARE in the FLEX_US_IMR register */
#define FLEX_US_IMR_TIMEOUT_Pos               _UINT32_(8)                                          /* (FLEX_US_IMR) Timeout Interrupt Mask Position */
#define FLEX_US_IMR_TIMEOUT_Msk               (_UINT32_(0x1) << FLEX_US_IMR_TIMEOUT_Pos)           /* (FLEX_US_IMR) Timeout Interrupt Mask Mask */
#define FLEX_US_IMR_TIMEOUT(value)            (FLEX_US_IMR_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_IMR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the FLEX_US_IMR register */
#define FLEX_US_IMR_TXEMPTY_Pos               _UINT32_(9)                                          /* (FLEX_US_IMR) TXEMPTY Interrupt Mask Position */
#define FLEX_US_IMR_TXEMPTY_Msk               (_UINT32_(0x1) << FLEX_US_IMR_TXEMPTY_Pos)           /* (FLEX_US_IMR) TXEMPTY Interrupt Mask Mask */
#define FLEX_US_IMR_TXEMPTY(value)            (FLEX_US_IMR_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_IMR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_US_IMR register */
#define FLEX_US_IMR_ITER_Pos                  _UINT32_(10)                                         /* (FLEX_US_IMR) Max Number of Repetitions Reached Interrupt Mask Position */
#define FLEX_US_IMR_ITER_Msk                  (_UINT32_(0x1) << FLEX_US_IMR_ITER_Pos)              /* (FLEX_US_IMR) Max Number of Repetitions Reached Interrupt Mask Mask */
#define FLEX_US_IMR_ITER(value)               (FLEX_US_IMR_ITER_Msk & (_UINT32_(value) << FLEX_US_IMR_ITER_Pos)) /* Assignment of value for ITER in the FLEX_US_IMR register */
#define FLEX_US_IMR_NACK_Pos                  _UINT32_(13)                                         /* (FLEX_US_IMR) Non Acknowledge Interrupt Mask Position */
#define FLEX_US_IMR_NACK_Msk                  (_UINT32_(0x1) << FLEX_US_IMR_NACK_Pos)              /* (FLEX_US_IMR) Non Acknowledge Interrupt Mask Mask */
#define FLEX_US_IMR_NACK(value)               (FLEX_US_IMR_NACK_Msk & (_UINT32_(value) << FLEX_US_IMR_NACK_Pos)) /* Assignment of value for NACK in the FLEX_US_IMR register */
#define FLEX_US_IMR_CTSIC_Pos                 _UINT32_(19)                                         /* (FLEX_US_IMR) Clear to Send Input Change Interrupt Mask Position */
#define FLEX_US_IMR_CTSIC_Msk                 (_UINT32_(0x1) << FLEX_US_IMR_CTSIC_Pos)             /* (FLEX_US_IMR) Clear to Send Input Change Interrupt Mask Mask */
#define FLEX_US_IMR_CTSIC(value)              (FLEX_US_IMR_CTSIC_Msk & (_UINT32_(value) << FLEX_US_IMR_CTSIC_Pos)) /* Assignment of value for CTSIC in the FLEX_US_IMR register */
#define FLEX_US_IMR_SECE_Pos                  _UINT32_(21)                                         /* (FLEX_US_IMR) Security/Safety Error Interrupt Mask Position */
#define FLEX_US_IMR_SECE_Msk                  (_UINT32_(0x1) << FLEX_US_IMR_SECE_Pos)              /* (FLEX_US_IMR) Security/Safety Error Interrupt Mask Mask */
#define FLEX_US_IMR_SECE(value)               (FLEX_US_IMR_SECE_Msk & (_UINT32_(value) << FLEX_US_IMR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_US_IMR register */
#define FLEX_US_IMR_CMP_Pos                   _UINT32_(22)                                         /* (FLEX_US_IMR) Comparison Interrupt Mask Position */
#define FLEX_US_IMR_CMP_Msk                   (_UINT32_(0x1) << FLEX_US_IMR_CMP_Pos)               /* (FLEX_US_IMR) Comparison Interrupt Mask Mask */
#define FLEX_US_IMR_CMP(value)                (FLEX_US_IMR_CMP_Msk & (_UINT32_(value) << FLEX_US_IMR_CMP_Pos)) /* Assignment of value for CMP in the FLEX_US_IMR register */
#define FLEX_US_IMR_MANE_Pos                  _UINT32_(24)                                         /* (FLEX_US_IMR) Manchester Error Interrupt Mask Position */
#define FLEX_US_IMR_MANE_Msk                  (_UINT32_(0x1) << FLEX_US_IMR_MANE_Pos)              /* (FLEX_US_IMR) Manchester Error Interrupt Mask Mask */
#define FLEX_US_IMR_MANE(value)               (FLEX_US_IMR_MANE_Msk & (_UINT32_(value) << FLEX_US_IMR_MANE_Pos)) /* Assignment of value for MANE in the FLEX_US_IMR register */
#define FLEX_US_IMR_Msk                       _UINT32_(0x016827E7)                                 /* (FLEX_US_IMR) Register Mask  */

/* LIN mode */
#define FLEX_US_IMR_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (FLEX_US_IMR) RXRDY Interrupt Mask Position */
#define FLEX_US_IMR_LIN_RXRDY_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_RXRDY_Pos)         /* (FLEX_US_IMR) RXRDY Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_RXRDY(value)          (FLEX_US_IMR_LIN_RXRDY_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_RXRDY_Pos))
#define FLEX_US_IMR_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (FLEX_US_IMR) TXRDY Interrupt Mask Position */
#define FLEX_US_IMR_LIN_TXRDY_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_TXRDY_Pos)         /* (FLEX_US_IMR) TXRDY Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_TXRDY(value)          (FLEX_US_IMR_LIN_TXRDY_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_TXRDY_Pos))
#define FLEX_US_IMR_LIN_OVRE_Pos              _UINT32_(5)                                          /* (FLEX_US_IMR) Overrun Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_OVRE_Msk              (_UINT32_(0x1) << FLEX_US_IMR_LIN_OVRE_Pos)          /* (FLEX_US_IMR) Overrun Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_OVRE(value)           (FLEX_US_IMR_LIN_OVRE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_OVRE_Pos))
#define FLEX_US_IMR_LIN_FRAME_Pos             _UINT32_(6)                                          /* (FLEX_US_IMR) Framing Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_FRAME_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_FRAME_Pos)         /* (FLEX_US_IMR) Framing Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_FRAME(value)          (FLEX_US_IMR_LIN_FRAME_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_FRAME_Pos))
#define FLEX_US_IMR_LIN_PARE_Pos              _UINT32_(7)                                          /* (FLEX_US_IMR) Parity Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_PARE_Msk              (_UINT32_(0x1) << FLEX_US_IMR_LIN_PARE_Pos)          /* (FLEX_US_IMR) Parity Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_PARE(value)           (FLEX_US_IMR_LIN_PARE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_PARE_Pos))
#define FLEX_US_IMR_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (FLEX_US_IMR) Timeout Interrupt Mask Position */
#define FLEX_US_IMR_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << FLEX_US_IMR_LIN_TIMEOUT_Pos)       /* (FLEX_US_IMR) Timeout Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_TIMEOUT(value)        (FLEX_US_IMR_LIN_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_TIMEOUT_Pos))
#define FLEX_US_IMR_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (FLEX_US_IMR) TXEMPTY Interrupt Mask Position */
#define FLEX_US_IMR_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << FLEX_US_IMR_LIN_TXEMPTY_Pos)       /* (FLEX_US_IMR) TXEMPTY Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_TXEMPTY(value)        (FLEX_US_IMR_LIN_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_TXEMPTY_Pos))
#define FLEX_US_IMR_LIN_LINBK_Pos             _UINT32_(13)                                         /* (FLEX_US_IMR) LIN Break Sent or LIN Break Received Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINBK_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINBK_Pos)         /* (FLEX_US_IMR) LIN Break Sent or LIN Break Received Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINBK(value)          (FLEX_US_IMR_LIN_LINBK_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINBK_Pos))
#define FLEX_US_IMR_LIN_LINID_Pos             _UINT32_(14)                                         /* (FLEX_US_IMR) LIN Identifier Sent or LIN Identifier Received Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINID_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINID_Pos)         /* (FLEX_US_IMR) LIN Identifier Sent or LIN Identifier Received Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINID(value)          (FLEX_US_IMR_LIN_LINID_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINID_Pos))
#define FLEX_US_IMR_LIN_LINTC_Pos             _UINT32_(15)                                         /* (FLEX_US_IMR) LIN Transfer Completed Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINTC_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINTC_Pos)         /* (FLEX_US_IMR) LIN Transfer Completed Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINTC(value)          (FLEX_US_IMR_LIN_LINTC_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINTC_Pos))
#define FLEX_US_IMR_LIN_SECE_Pos              _UINT32_(21)                                         /* (FLEX_US_IMR) Security/Safety Error Interrupt mask Position */
#define FLEX_US_IMR_LIN_SECE_Msk              (_UINT32_(0x1) << FLEX_US_IMR_LIN_SECE_Pos)          /* (FLEX_US_IMR) Security/Safety Error Interrupt mask Mask */
#define FLEX_US_IMR_LIN_SECE(value)           (FLEX_US_IMR_LIN_SECE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_SECE_Pos))
#define FLEX_US_IMR_LIN_LINBE_Pos             _UINT32_(25)                                         /* (FLEX_US_IMR) LIN Bus Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINBE_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINBE_Pos)         /* (FLEX_US_IMR) LIN Bus Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINBE(value)          (FLEX_US_IMR_LIN_LINBE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINBE_Pos))
#define FLEX_US_IMR_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (FLEX_US_IMR) LIN Inconsistent Synch Field Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINISFE_Msk           (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINISFE_Pos)       /* (FLEX_US_IMR) LIN Inconsistent Synch Field Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINISFE(value)        (FLEX_US_IMR_LIN_LINISFE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINISFE_Pos))
#define FLEX_US_IMR_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (FLEX_US_IMR) LIN Identifier Parity Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINIPE_Msk            (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINIPE_Pos)        /* (FLEX_US_IMR) LIN Identifier Parity Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINIPE(value)         (FLEX_US_IMR_LIN_LINIPE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINIPE_Pos))
#define FLEX_US_IMR_LIN_LINCE_Pos             _UINT32_(28)                                         /* (FLEX_US_IMR) LIN Checksum Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINCE_Msk             (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINCE_Pos)         /* (FLEX_US_IMR) LIN Checksum Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINCE(value)          (FLEX_US_IMR_LIN_LINCE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINCE_Pos))
#define FLEX_US_IMR_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (FLEX_US_IMR) LIN Client Not Responding Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINSNRE_Msk           (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINSNRE_Pos)       /* (FLEX_US_IMR) LIN Client Not Responding Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINSNRE(value)        (FLEX_US_IMR_LIN_LINSNRE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINSNRE_Pos))
#define FLEX_US_IMR_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (FLEX_US_IMR) LIN Synch Tolerance Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINSTE_Msk            (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINSTE_Pos)        /* (FLEX_US_IMR) LIN Synch Tolerance Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINSTE(value)         (FLEX_US_IMR_LIN_LINSTE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINSTE_Pos))
#define FLEX_US_IMR_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (FLEX_US_IMR) LIN Header Timeout Error Interrupt Mask Position */
#define FLEX_US_IMR_LIN_LINHTE_Msk            (_UINT32_(0x1) << FLEX_US_IMR_LIN_LINHTE_Pos)        /* (FLEX_US_IMR) LIN Header Timeout Error Interrupt Mask Mask */
#define FLEX_US_IMR_LIN_LINHTE(value)         (FLEX_US_IMR_LIN_LINHTE_Msk & (_UINT32_(value) << FLEX_US_IMR_LIN_LINHTE_Pos))
#define FLEX_US_IMR_LIN_Msk                   _UINT32_(0xFE20E3E3)                                 /* (FLEX_US_IMR_LIN) Register Mask  */


/* -------- FLEX_US_CSR : (FLEXCOM Offset: 0x214) ( R/ 32) USART Channel Status Register -------- */
#define FLEX_US_CSR_RXRDY_Pos                 _UINT32_(0)                                          /* (FLEX_US_CSR) Receiver Ready (cleared by reading FLEX_US_RHR) Position */
#define FLEX_US_CSR_RXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_CSR_RXRDY_Pos)             /* (FLEX_US_CSR) Receiver Ready (cleared by reading FLEX_US_RHR) Mask */
#define FLEX_US_CSR_RXRDY(value)              (FLEX_US_CSR_RXRDY_Msk & (_UINT32_(value) << FLEX_US_CSR_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_US_CSR register */
#define   FLEX_US_CSR_RXRDY_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CSR) FIFO Disabled: No complete character has been received since the last read of FLEX_US_RHR or the receiver is disabled. If characters were received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled. FIFO Enabled: Receive FIFO is empty; no data to read  */
#define   FLEX_US_CSR_RXRDY_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CSR) FIFO Disabled: At least one complete character has been received and FLEX_US_RHR has not yet been read. FIFO Enabled: At least one unread data is in the Receive FIFO  */
#define FLEX_US_CSR_RXRDY_0                   (FLEX_US_CSR_RXRDY_0_Val << FLEX_US_CSR_RXRDY_Pos)   /* (FLEX_US_CSR) FIFO Disabled: No complete character has been received since the last read of FLEX_US_RHR or the receiver is disabled. If characters were received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled. FIFO Enabled: Receive FIFO is empty; no data to read Position */
#define FLEX_US_CSR_RXRDY_1                   (FLEX_US_CSR_RXRDY_1_Val << FLEX_US_CSR_RXRDY_Pos)   /* (FLEX_US_CSR) FIFO Disabled: At least one complete character has been received and FLEX_US_RHR has not yet been read. FIFO Enabled: At least one unread data is in the Receive FIFO Position */
#define FLEX_US_CSR_TXRDY_Pos                 _UINT32_(1)                                          /* (FLEX_US_CSR) Transmitter Ready (cleared by writing FLEX_US_THR) Position */
#define FLEX_US_CSR_TXRDY_Msk                 (_UINT32_(0x1) << FLEX_US_CSR_TXRDY_Pos)             /* (FLEX_US_CSR) Transmitter Ready (cleared by writing FLEX_US_THR) Mask */
#define FLEX_US_CSR_TXRDY(value)              (FLEX_US_CSR_TXRDY_Msk & (_UINT32_(value) << FLEX_US_CSR_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_US_CSR register */
#define   FLEX_US_CSR_TXRDY_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CSR) FIFO Disabled: A character in FLEX_US_THR is waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1. FIFO Enabled: Transmit FIFO is full and cannot accept more data  */
#define   FLEX_US_CSR_TXRDY_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CSR) FIFO Disabled: There is no character in FLEX_US_THR. FIFO Enabled: Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration  */
#define FLEX_US_CSR_TXRDY_0                   (FLEX_US_CSR_TXRDY_0_Val << FLEX_US_CSR_TXRDY_Pos)   /* (FLEX_US_CSR) FIFO Disabled: A character in FLEX_US_THR is waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1. FIFO Enabled: Transmit FIFO is full and cannot accept more data Position */
#define FLEX_US_CSR_TXRDY_1                   (FLEX_US_CSR_TXRDY_1_Val << FLEX_US_CSR_TXRDY_Pos)   /* (FLEX_US_CSR) FIFO Disabled: There is no character in FLEX_US_THR. FIFO Enabled: Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration Position */
#define FLEX_US_CSR_RXBRK_Pos                 _UINT32_(2)                                          /* (FLEX_US_CSR) Break Received/End of Break Position */
#define FLEX_US_CSR_RXBRK_Msk                 (_UINT32_(0x1) << FLEX_US_CSR_RXBRK_Pos)             /* (FLEX_US_CSR) Break Received/End of Break Mask */
#define FLEX_US_CSR_RXBRK(value)              (FLEX_US_CSR_RXBRK_Msk & (_UINT32_(value) << FLEX_US_CSR_RXBRK_Pos)) /* Assignment of value for RXBRK in the FLEX_US_CSR register */
#define   FLEX_US_CSR_RXBRK_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CSR) No break received or end of break detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_RXBRK_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CSR) Break received or end of break detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_RXBRK_0                   (FLEX_US_CSR_RXBRK_0_Val << FLEX_US_CSR_RXBRK_Pos)   /* (FLEX_US_CSR) No break received or end of break detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_RXBRK_1                   (FLEX_US_CSR_RXBRK_1_Val << FLEX_US_CSR_RXBRK_Pos)   /* (FLEX_US_CSR) Break received or end of break detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_OVRE_Pos                  _UINT32_(5)                                          /* (FLEX_US_CSR) Overrun Error Position */
#define FLEX_US_CSR_OVRE_Msk                  (_UINT32_(0x1) << FLEX_US_CSR_OVRE_Pos)              /* (FLEX_US_CSR) Overrun Error Mask */
#define FLEX_US_CSR_OVRE(value)               (FLEX_US_CSR_OVRE_Msk & (_UINT32_(value) << FLEX_US_CSR_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_US_CSR register */
#define   FLEX_US_CSR_OVRE_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CSR) No overrun error has occurred since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_OVRE_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_OVRE_0                    (FLEX_US_CSR_OVRE_0_Val << FLEX_US_CSR_OVRE_Pos)     /* (FLEX_US_CSR) No overrun error has occurred since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_OVRE_1                    (FLEX_US_CSR_OVRE_1_Val << FLEX_US_CSR_OVRE_Pos)     /* (FLEX_US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_FRAME_Pos                 _UINT32_(6)                                          /* (FLEX_US_CSR) Framing Error Position */
#define FLEX_US_CSR_FRAME_Msk                 (_UINT32_(0x1) << FLEX_US_CSR_FRAME_Pos)             /* (FLEX_US_CSR) Framing Error Mask */
#define FLEX_US_CSR_FRAME(value)              (FLEX_US_CSR_FRAME_Msk & (_UINT32_(value) << FLEX_US_CSR_FRAME_Pos)) /* Assignment of value for FRAME in the FLEX_US_CSR register */
#define   FLEX_US_CSR_FRAME_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CSR) No stop bit has been detected low since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_FRAME_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_FRAME_0                   (FLEX_US_CSR_FRAME_0_Val << FLEX_US_CSR_FRAME_Pos)   /* (FLEX_US_CSR) No stop bit has been detected low since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_FRAME_1                   (FLEX_US_CSR_FRAME_1_Val << FLEX_US_CSR_FRAME_Pos)   /* (FLEX_US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_PARE_Pos                  _UINT32_(7)                                          /* (FLEX_US_CSR) Parity Error Position */
#define FLEX_US_CSR_PARE_Msk                  (_UINT32_(0x1) << FLEX_US_CSR_PARE_Pos)              /* (FLEX_US_CSR) Parity Error Mask */
#define FLEX_US_CSR_PARE(value)               (FLEX_US_CSR_PARE_Msk & (_UINT32_(value) << FLEX_US_CSR_PARE_Pos)) /* Assignment of value for PARE in the FLEX_US_CSR register */
#define   FLEX_US_CSR_PARE_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CSR) No parity error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_PARE_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one parity error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_PARE_0                    (FLEX_US_CSR_PARE_0_Val << FLEX_US_CSR_PARE_Pos)     /* (FLEX_US_CSR) No parity error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_PARE_1                    (FLEX_US_CSR_PARE_1_Val << FLEX_US_CSR_PARE_Pos)     /* (FLEX_US_CSR) At least one parity error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_TIMEOUT_Pos               _UINT32_(8)                                          /* (FLEX_US_CSR) Receiver Timeout Position */
#define FLEX_US_CSR_TIMEOUT_Msk               (_UINT32_(0x1) << FLEX_US_CSR_TIMEOUT_Pos)           /* (FLEX_US_CSR) Receiver Timeout Mask */
#define FLEX_US_CSR_TIMEOUT(value)            (FLEX_US_CSR_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_CSR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the FLEX_US_CSR register */
#define   FLEX_US_CSR_TIMEOUT_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_CSR) There has not been a timeout since the last Start Timeout command (FLEX_US_CR.STTTO) or the Timeout Register is 0.  */
#define   FLEX_US_CSR_TIMEOUT_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_CSR) There has been a timeout since the last Start Timeout command (FLEX_US_CR.STTTO).  */
#define FLEX_US_CSR_TIMEOUT_0                 (FLEX_US_CSR_TIMEOUT_0_Val << FLEX_US_CSR_TIMEOUT_Pos) /* (FLEX_US_CSR) There has not been a timeout since the last Start Timeout command (FLEX_US_CR.STTTO) or the Timeout Register is 0. Position */
#define FLEX_US_CSR_TIMEOUT_1                 (FLEX_US_CSR_TIMEOUT_1_Val << FLEX_US_CSR_TIMEOUT_Pos) /* (FLEX_US_CSR) There has been a timeout since the last Start Timeout command (FLEX_US_CR.STTTO). Position */
#define FLEX_US_CSR_TXEMPTY_Pos               _UINT32_(9)                                          /* (FLEX_US_CSR) Transmitter Empty (cleared by writing FLEX_US_THR) Position */
#define FLEX_US_CSR_TXEMPTY_Msk               (_UINT32_(0x1) << FLEX_US_CSR_TXEMPTY_Pos)           /* (FLEX_US_CSR) Transmitter Empty (cleared by writing FLEX_US_THR) Mask */
#define FLEX_US_CSR_TXEMPTY(value)            (FLEX_US_CSR_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_CSR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_US_CSR register */
#define   FLEX_US_CSR_TXEMPTY_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_CSR) There are characters in either FLEX_US_THR or the Transmit Shift Register, or the transmitter is disabled.  */
#define   FLEX_US_CSR_TXEMPTY_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_CSR) There are no characters in FLEX_US_THR, nor in the Transmit Shift Register.  */
#define FLEX_US_CSR_TXEMPTY_0                 (FLEX_US_CSR_TXEMPTY_0_Val << FLEX_US_CSR_TXEMPTY_Pos) /* (FLEX_US_CSR) There are characters in either FLEX_US_THR or the Transmit Shift Register, or the transmitter is disabled. Position */
#define FLEX_US_CSR_TXEMPTY_1                 (FLEX_US_CSR_TXEMPTY_1_Val << FLEX_US_CSR_TXEMPTY_Pos) /* (FLEX_US_CSR) There are no characters in FLEX_US_THR, nor in the Transmit Shift Register. Position */
#define FLEX_US_CSR_ITER_Pos                  _UINT32_(10)                                         /* (FLEX_US_CSR) Max Number of Repetitions Reached Position */
#define FLEX_US_CSR_ITER_Msk                  (_UINT32_(0x1) << FLEX_US_CSR_ITER_Pos)              /* (FLEX_US_CSR) Max Number of Repetitions Reached Mask */
#define FLEX_US_CSR_ITER(value)               (FLEX_US_CSR_ITER_Msk & (_UINT32_(value) << FLEX_US_CSR_ITER_Pos)) /* Assignment of value for ITER in the FLEX_US_CSR register */
#define   FLEX_US_CSR_ITER_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CSR) Maximum number of repetitions has not been reached since the last RSTIT command was issued.  */
#define   FLEX_US_CSR_ITER_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CSR) Maximum number of repetitions has been reached since the last RSTIT command was issued.  */
#define FLEX_US_CSR_ITER_0                    (FLEX_US_CSR_ITER_0_Val << FLEX_US_CSR_ITER_Pos)     /* (FLEX_US_CSR) Maximum number of repetitions has not been reached since the last RSTIT command was issued. Position */
#define FLEX_US_CSR_ITER_1                    (FLEX_US_CSR_ITER_1_Val << FLEX_US_CSR_ITER_Pos)     /* (FLEX_US_CSR) Maximum number of repetitions has been reached since the last RSTIT command was issued. Position */
#define FLEX_US_CSR_NACK_Pos                  _UINT32_(13)                                         /* (FLEX_US_CSR) Non Acknowledge Interrupt Position */
#define FLEX_US_CSR_NACK_Msk                  (_UINT32_(0x1) << FLEX_US_CSR_NACK_Pos)              /* (FLEX_US_CSR) Non Acknowledge Interrupt Mask */
#define FLEX_US_CSR_NACK(value)               (FLEX_US_CSR_NACK_Msk & (_UINT32_(value) << FLEX_US_CSR_NACK_Pos)) /* Assignment of value for NACK in the FLEX_US_CSR register */
#define   FLEX_US_CSR_NACK_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CSR) Non acknowledge has not been detected since the last RSTNACK.  */
#define   FLEX_US_CSR_NACK_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one non acknowledge has been detected since the last RSTNACK.  */
#define FLEX_US_CSR_NACK_0                    (FLEX_US_CSR_NACK_0_Val << FLEX_US_CSR_NACK_Pos)     /* (FLEX_US_CSR) Non acknowledge has not been detected since the last RSTNACK. Position */
#define FLEX_US_CSR_NACK_1                    (FLEX_US_CSR_NACK_1_Val << FLEX_US_CSR_NACK_Pos)     /* (FLEX_US_CSR) At least one non acknowledge has been detected since the last RSTNACK. Position */
#define FLEX_US_CSR_CTSIC_Pos                 _UINT32_(19)                                         /* (FLEX_US_CSR) Clear to Send Input Change Flag Position */
#define FLEX_US_CSR_CTSIC_Msk                 (_UINT32_(0x1) << FLEX_US_CSR_CTSIC_Pos)             /* (FLEX_US_CSR) Clear to Send Input Change Flag Mask */
#define FLEX_US_CSR_CTSIC(value)              (FLEX_US_CSR_CTSIC_Msk & (_UINT32_(value) << FLEX_US_CSR_CTSIC_Pos)) /* Assignment of value for CTSIC in the FLEX_US_CSR register */
#define   FLEX_US_CSR_CTSIC_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_CSR) No input change has been detected on the CTS pin since the last read of FLEX_US_CSR.  */
#define   FLEX_US_CSR_CTSIC_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one input change has been detected on the CTS pin since the last read of FLEX_US_CSR.  */
#define FLEX_US_CSR_CTSIC_0                   (FLEX_US_CSR_CTSIC_0_Val << FLEX_US_CSR_CTSIC_Pos)   /* (FLEX_US_CSR) No input change has been detected on the CTS pin since the last read of FLEX_US_CSR. Position */
#define FLEX_US_CSR_CTSIC_1                   (FLEX_US_CSR_CTSIC_1_Val << FLEX_US_CSR_CTSIC_Pos)   /* (FLEX_US_CSR) At least one input change has been detected on the CTS pin since the last read of FLEX_US_CSR. Position */
#define FLEX_US_CSR_SECE_Pos                  _UINT32_(21)                                         /* (FLEX_US_CSR) Security/Safety Error (cleared on read) Position */
#define FLEX_US_CSR_SECE_Msk                  (_UINT32_(0x1) << FLEX_US_CSR_SECE_Pos)              /* (FLEX_US_CSR) Security/Safety Error (cleared on read) Mask */
#define FLEX_US_CSR_SECE(value)               (FLEX_US_CSR_SECE_Msk & (_UINT32_(value) << FLEX_US_CSR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_US_CSR register */
#define   FLEX_US_CSR_SECE_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of FLEX_US_CSR.  */
#define   FLEX_US_CSR_SECE_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CSR) An error has been detected on TXD and/or SCK pad output (FLEX_US_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_US_WPSR.WPVS=1) since the last read of FLEX_US_CSR.  */
#define FLEX_US_CSR_SECE_0                    (FLEX_US_CSR_SECE_0_Val << FLEX_US_CSR_SECE_Pos)     /* (FLEX_US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of FLEX_US_CSR. Position */
#define FLEX_US_CSR_SECE_1                    (FLEX_US_CSR_SECE_1_Val << FLEX_US_CSR_SECE_Pos)     /* (FLEX_US_CSR) An error has been detected on TXD and/or SCK pad output (FLEX_US_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_US_WPSR.WPVS=1) since the last read of FLEX_US_CSR. Position */
#define FLEX_US_CSR_CMP_Pos                   _UINT32_(22)                                         /* (FLEX_US_CSR) Comparison Status Position */
#define FLEX_US_CSR_CMP_Msk                   (_UINT32_(0x1) << FLEX_US_CSR_CMP_Pos)               /* (FLEX_US_CSR) Comparison Status Mask */
#define FLEX_US_CSR_CMP(value)                (FLEX_US_CSR_CMP_Msk & (_UINT32_(value) << FLEX_US_CSR_CMP_Pos)) /* Assignment of value for CMP in the FLEX_US_CSR register */
#define   FLEX_US_CSR_CMP_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_CSR) No received character matched the comparison criteria programmed in VAL1, VAL2 fields and CMPPAR bit in since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_CMP_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_CSR) A received character matched the comparison criteria since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_CMP_0                     (FLEX_US_CSR_CMP_0_Val << FLEX_US_CSR_CMP_Pos)       /* (FLEX_US_CSR) No received character matched the comparison criteria programmed in VAL1, VAL2 fields and CMPPAR bit in since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_CMP_1                     (FLEX_US_CSR_CMP_1_Val << FLEX_US_CSR_CMP_Pos)       /* (FLEX_US_CSR) A received character matched the comparison criteria since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_CTS_Pos                   _UINT32_(23)                                         /* (FLEX_US_CSR) Image of CTS Input Position */
#define FLEX_US_CSR_CTS_Msk                   (_UINT32_(0x1) << FLEX_US_CSR_CTS_Pos)               /* (FLEX_US_CSR) Image of CTS Input Mask */
#define FLEX_US_CSR_CTS(value)                (FLEX_US_CSR_CTS_Msk & (_UINT32_(value) << FLEX_US_CSR_CTS_Pos)) /* Assignment of value for CTS in the FLEX_US_CSR register */
#define   FLEX_US_CSR_CTS_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_CSR) CTS input is driven low.  */
#define   FLEX_US_CSR_CTS_1_Val               _UINT32_(0x1)                                        /* (FLEX_US_CSR) CTS input is driven high.  */
#define FLEX_US_CSR_CTS_0                     (FLEX_US_CSR_CTS_0_Val << FLEX_US_CSR_CTS_Pos)       /* (FLEX_US_CSR) CTS input is driven low. Position */
#define FLEX_US_CSR_CTS_1                     (FLEX_US_CSR_CTS_1_Val << FLEX_US_CSR_CTS_Pos)       /* (FLEX_US_CSR) CTS input is driven high. Position */
#define FLEX_US_CSR_MANE_Pos                  _UINT32_(24)                                         /* (FLEX_US_CSR) Manchester Error Position */
#define FLEX_US_CSR_MANE_Msk                  (_UINT32_(0x1) << FLEX_US_CSR_MANE_Pos)              /* (FLEX_US_CSR) Manchester Error Mask */
#define FLEX_US_CSR_MANE(value)               (FLEX_US_CSR_MANE_Msk & (_UINT32_(value) << FLEX_US_CSR_MANE_Pos)) /* Assignment of value for MANE in the FLEX_US_CSR register */
#define   FLEX_US_CSR_MANE_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_CSR) No Manchester error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_MANE_1_Val              _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one Manchester error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_MANE_0                    (FLEX_US_CSR_MANE_0_Val << FLEX_US_CSR_MANE_Pos)     /* (FLEX_US_CSR) No Manchester error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_MANE_1                    (FLEX_US_CSR_MANE_1_Val << FLEX_US_CSR_MANE_Pos)     /* (FLEX_US_CSR) At least one Manchester error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_Msk                       _UINT32_(0x01E827E7)                                 /* (FLEX_US_CSR) Register Mask  */

/* LIN mode */
#define FLEX_US_CSR_LIN_RXRDY_Pos             _UINT32_(0)                                          /* (FLEX_US_CSR) Receiver Ready (cleared by reading FLEX_US_RHR) Position */
#define FLEX_US_CSR_LIN_RXRDY_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_RXRDY_Pos)         /* (FLEX_US_CSR) Receiver Ready (cleared by reading FLEX_US_RHR) Mask */
#define FLEX_US_CSR_LIN_RXRDY(value)          (FLEX_US_CSR_LIN_RXRDY_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_RXRDY_Pos))
#define   FLEX_US_CSR_LIN_RXRDY_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) No complete character has been received since the last read of FLEX_US_RHR or the receiver is disabled. If characters were being received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled.  */
#define   FLEX_US_CSR_LIN_RXRDY_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one complete character has been received and FLEX_US_RHR has not yet been read.  */
#define FLEX_US_CSR_LIN_RXRDY_0               (FLEX_US_CSR_LIN_RXRDY_0_Val << FLEX_US_CSR_LIN_RXRDY_Pos) /* (FLEX_US_CSR) No complete character has been received since the last read of FLEX_US_RHR or the receiver is disabled. If characters were being received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled. Position */
#define FLEX_US_CSR_LIN_RXRDY_1               (FLEX_US_CSR_LIN_RXRDY_1_Val << FLEX_US_CSR_LIN_RXRDY_Pos) /* (FLEX_US_CSR) At least one complete character has been received and FLEX_US_RHR has not yet been read. Position */
#define FLEX_US_CSR_LIN_TXRDY_Pos             _UINT32_(1)                                          /* (FLEX_US_CSR) Transmitter Ready (cleared by writing FLEX_US_THR) Position */
#define FLEX_US_CSR_LIN_TXRDY_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_TXRDY_Pos)         /* (FLEX_US_CSR) Transmitter Ready (cleared by writing FLEX_US_THR) Mask */
#define FLEX_US_CSR_LIN_TXRDY(value)          (FLEX_US_CSR_LIN_TXRDY_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_TXRDY_Pos))
#define   FLEX_US_CSR_LIN_TXRDY_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) A character in FLEX_US_THR is waiting to be transferred to the Transmit Shift Register, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1.  */
#define   FLEX_US_CSR_LIN_TXRDY_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) There is no character in FLEX_US_THR.  */
#define FLEX_US_CSR_LIN_TXRDY_0               (FLEX_US_CSR_LIN_TXRDY_0_Val << FLEX_US_CSR_LIN_TXRDY_Pos) /* (FLEX_US_CSR) A character in FLEX_US_THR is waiting to be transferred to the Transmit Shift Register, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1. Position */
#define FLEX_US_CSR_LIN_TXRDY_1               (FLEX_US_CSR_LIN_TXRDY_1_Val << FLEX_US_CSR_LIN_TXRDY_Pos) /* (FLEX_US_CSR) There is no character in FLEX_US_THR. Position */
#define FLEX_US_CSR_LIN_OVRE_Pos              _UINT32_(5)                                          /* (FLEX_US_CSR) Overrun Error Position */
#define FLEX_US_CSR_LIN_OVRE_Msk              (_UINT32_(0x1) << FLEX_US_CSR_LIN_OVRE_Pos)          /* (FLEX_US_CSR) Overrun Error Mask */
#define FLEX_US_CSR_LIN_OVRE(value)           (FLEX_US_CSR_LIN_OVRE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_OVRE_Pos))
#define   FLEX_US_CSR_LIN_OVRE_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_CSR) No overrun error has occurred since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_OVRE_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_OVRE_0                (FLEX_US_CSR_LIN_OVRE_0_Val << FLEX_US_CSR_LIN_OVRE_Pos) /* (FLEX_US_CSR) No overrun error has occurred since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_OVRE_1                (FLEX_US_CSR_LIN_OVRE_1_Val << FLEX_US_CSR_LIN_OVRE_Pos) /* (FLEX_US_CSR) At least one overrun error has occurred since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_FRAME_Pos             _UINT32_(6)                                          /* (FLEX_US_CSR) Framing Error Position */
#define FLEX_US_CSR_LIN_FRAME_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_FRAME_Pos)         /* (FLEX_US_CSR) Framing Error Mask */
#define FLEX_US_CSR_LIN_FRAME(value)          (FLEX_US_CSR_LIN_FRAME_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_FRAME_Pos))
#define   FLEX_US_CSR_LIN_FRAME_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) No stop bit has been detected low since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_FRAME_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_FRAME_0               (FLEX_US_CSR_LIN_FRAME_0_Val << FLEX_US_CSR_LIN_FRAME_Pos) /* (FLEX_US_CSR) No stop bit has been detected low since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_FRAME_1               (FLEX_US_CSR_LIN_FRAME_1_Val << FLEX_US_CSR_LIN_FRAME_Pos) /* (FLEX_US_CSR) At least one stop bit has been detected low since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_PARE_Pos              _UINT32_(7)                                          /* (FLEX_US_CSR) Parity Error Position */
#define FLEX_US_CSR_LIN_PARE_Msk              (_UINT32_(0x1) << FLEX_US_CSR_LIN_PARE_Pos)          /* (FLEX_US_CSR) Parity Error Mask */
#define FLEX_US_CSR_LIN_PARE(value)           (FLEX_US_CSR_LIN_PARE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_PARE_Pos))
#define   FLEX_US_CSR_LIN_PARE_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_CSR) No parity error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_PARE_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_CSR) At least one parity error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_PARE_0                (FLEX_US_CSR_LIN_PARE_0_Val << FLEX_US_CSR_LIN_PARE_Pos) /* (FLEX_US_CSR) No parity error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_PARE_1                (FLEX_US_CSR_LIN_PARE_1_Val << FLEX_US_CSR_LIN_PARE_Pos) /* (FLEX_US_CSR) At least one parity error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_TIMEOUT_Pos           _UINT32_(8)                                          /* (FLEX_US_CSR) Receiver Timeout Position */
#define FLEX_US_CSR_LIN_TIMEOUT_Msk           (_UINT32_(0x1) << FLEX_US_CSR_LIN_TIMEOUT_Pos)       /* (FLEX_US_CSR) Receiver Timeout Mask */
#define FLEX_US_CSR_LIN_TIMEOUT(value)        (FLEX_US_CSR_LIN_TIMEOUT_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_TIMEOUT_Pos))
#define   FLEX_US_CSR_LIN_TIMEOUT_0_Val       _UINT32_(0x0)                                        /* (FLEX_US_CSR) There has not been a timeout since the last start timeout command (FLEX_US_CR.STTTO) or the Timeout Register is 0.  */
#define   FLEX_US_CSR_LIN_TIMEOUT_1_Val       _UINT32_(0x1)                                        /* (FLEX_US_CSR) There has been a timeout since the last start timeout command (FLEX_US_CR.STTTO).  */
#define FLEX_US_CSR_LIN_TIMEOUT_0             (FLEX_US_CSR_LIN_TIMEOUT_0_Val << FLEX_US_CSR_LIN_TIMEOUT_Pos) /* (FLEX_US_CSR) There has not been a timeout since the last start timeout command (FLEX_US_CR.STTTO) or the Timeout Register is 0. Position */
#define FLEX_US_CSR_LIN_TIMEOUT_1             (FLEX_US_CSR_LIN_TIMEOUT_1_Val << FLEX_US_CSR_LIN_TIMEOUT_Pos) /* (FLEX_US_CSR) There has been a timeout since the last start timeout command (FLEX_US_CR.STTTO). Position */
#define FLEX_US_CSR_LIN_TXEMPTY_Pos           _UINT32_(9)                                          /* (FLEX_US_CSR) Transmitter Empty (cleared by writing FLEX_US_THR) Position */
#define FLEX_US_CSR_LIN_TXEMPTY_Msk           (_UINT32_(0x1) << FLEX_US_CSR_LIN_TXEMPTY_Pos)       /* (FLEX_US_CSR) Transmitter Empty (cleared by writing FLEX_US_THR) Mask */
#define FLEX_US_CSR_LIN_TXEMPTY(value)        (FLEX_US_CSR_LIN_TXEMPTY_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_TXEMPTY_Pos))
#define   FLEX_US_CSR_LIN_TXEMPTY_0_Val       _UINT32_(0x0)                                        /* (FLEX_US_CSR) There are characters in either FLEX_US_THR or the Transmit Shift Register, or the transmitter is disabled.  */
#define   FLEX_US_CSR_LIN_TXEMPTY_1_Val       _UINT32_(0x1)                                        /* (FLEX_US_CSR) There are no characters in FLEX_US_THR, nor in the Transmit Shift Register.  */
#define FLEX_US_CSR_LIN_TXEMPTY_0             (FLEX_US_CSR_LIN_TXEMPTY_0_Val << FLEX_US_CSR_LIN_TXEMPTY_Pos) /* (FLEX_US_CSR) There are characters in either FLEX_US_THR or the Transmit Shift Register, or the transmitter is disabled. Position */
#define FLEX_US_CSR_LIN_TXEMPTY_1             (FLEX_US_CSR_LIN_TXEMPTY_1_Val << FLEX_US_CSR_LIN_TXEMPTY_Pos) /* (FLEX_US_CSR) There are no characters in FLEX_US_THR, nor in the Transmit Shift Register. Position */
#define FLEX_US_CSR_LIN_LINBK_Pos             _UINT32_(13)                                         /* (FLEX_US_CSR) LIN Break Sent or LIN Break Received Position */
#define FLEX_US_CSR_LIN_LINBK_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINBK_Pos)         /* (FLEX_US_CSR) LIN Break Sent or LIN Break Received Mask */
#define FLEX_US_CSR_LIN_LINBK(value)          (FLEX_US_CSR_LIN_LINBK_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINBK_Pos))
#define   FLEX_US_CSR_LIN_LINBK_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) Host Mode: No LIN break has been sent since the last RSTSTA command was issued. Client Mode: No LIN break has received sent since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINBK_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) Host Mode: At least one LIN break has been sent since the last RSTSTA. Client Mode: At least one LIN break has been received since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINBK_0               (FLEX_US_CSR_LIN_LINBK_0_Val << FLEX_US_CSR_LIN_LINBK_Pos) /* (FLEX_US_CSR) Host Mode: No LIN break has been sent since the last RSTSTA command was issued. Client Mode: No LIN break has received sent since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINBK_1               (FLEX_US_CSR_LIN_LINBK_1_Val << FLEX_US_CSR_LIN_LINBK_Pos) /* (FLEX_US_CSR) Host Mode: At least one LIN break has been sent since the last RSTSTA. Client Mode: At least one LIN break has been received since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINID_Pos             _UINT32_(14)                                         /* (FLEX_US_CSR) LIN Identifier Sent or LIN Identifier Received Position */
#define FLEX_US_CSR_LIN_LINID_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINID_Pos)         /* (FLEX_US_CSR) LIN Identifier Sent or LIN Identifier Received Mask */
#define FLEX_US_CSR_LIN_LINID(value)          (FLEX_US_CSR_LIN_LINID_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINID_Pos))
#define   FLEX_US_CSR_LIN_LINID_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) Host Mode: No LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: No LIN identifier has been received since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINID_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) Host Mode: At least one LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: At least one LIN identifier has been received since the last RSTSTA.  */
#define FLEX_US_CSR_LIN_LINID_0               (FLEX_US_CSR_LIN_LINID_0_Val << FLEX_US_CSR_LIN_LINID_Pos) /* (FLEX_US_CSR) Host Mode: No LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: No LIN identifier has been received since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINID_1               (FLEX_US_CSR_LIN_LINID_1_Val << FLEX_US_CSR_LIN_LINID_Pos) /* (FLEX_US_CSR) Host Mode: At least one LIN identifier has been sent since the last RSTSTA command was issued. Client Mode: At least one LIN identifier has been received since the last RSTSTA. Position */
#define FLEX_US_CSR_LIN_LINTC_Pos             _UINT32_(15)                                         /* (FLEX_US_CSR) LIN Transfer Completed Position */
#define FLEX_US_CSR_LIN_LINTC_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINTC_Pos)         /* (FLEX_US_CSR) LIN Transfer Completed Mask */
#define FLEX_US_CSR_LIN_LINTC(value)          (FLEX_US_CSR_LIN_LINTC_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINTC_Pos))
#define   FLEX_US_CSR_LIN_LINTC_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) The USART is idle or a LIN transfer is ongoing.  */
#define   FLEX_US_CSR_LIN_LINTC_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) A LIN transfer has been completed since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINTC_0               (FLEX_US_CSR_LIN_LINTC_0_Val << FLEX_US_CSR_LIN_LINTC_Pos) /* (FLEX_US_CSR) The USART is idle or a LIN transfer is ongoing. Position */
#define FLEX_US_CSR_LIN_LINTC_1               (FLEX_US_CSR_LIN_LINTC_1_Val << FLEX_US_CSR_LIN_LINTC_Pos) /* (FLEX_US_CSR) A LIN transfer has been completed since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_SECE_Pos              _UINT32_(21)                                         /* (FLEX_US_CSR) Security/Safety Error (cleared on read) Position */
#define FLEX_US_CSR_LIN_SECE_Msk              (_UINT32_(0x1) << FLEX_US_CSR_LIN_SECE_Pos)          /* (FLEX_US_CSR) Security/Safety Error (cleared on read) Mask */
#define FLEX_US_CSR_LIN_SECE(value)           (FLEX_US_CSR_LIN_SECE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_SECE_Pos))
#define   FLEX_US_CSR_LIN_SECE_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of FLEX_US_CSR.  */
#define   FLEX_US_CSR_LIN_SECE_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_CSR) An error has been detected on TXD and/or SCK pad output (FLEX_US_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_US_WPSR.WPVS=1) since the last read of FLEX_US_CSR.  */
#define FLEX_US_CSR_LIN_SECE_0                (FLEX_US_CSR_LIN_SECE_0_Val << FLEX_US_CSR_LIN_SECE_Pos) /* (FLEX_US_CSR) No error detected on TXD and/or SCK pad output and no access violation of a write-protected register since the last read of FLEX_US_CSR. Position */
#define FLEX_US_CSR_LIN_SECE_1                (FLEX_US_CSR_LIN_SECE_1_Val << FLEX_US_CSR_LIN_SECE_Pos) /* (FLEX_US_CSR) An error has been detected on TXD and/or SCK pad output (FLEX_US_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_US_WPSR.WPVS=1) since the last read of FLEX_US_CSR. Position */
#define FLEX_US_CSR_LIN_LINBLS_Pos            _UINT32_(23)                                         /* (FLEX_US_CSR) LIN Bus Line Status Position */
#define FLEX_US_CSR_LIN_LINBLS_Msk            (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINBLS_Pos)        /* (FLEX_US_CSR) LIN Bus Line Status Mask */
#define FLEX_US_CSR_LIN_LINBLS(value)         (FLEX_US_CSR_LIN_LINBLS_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINBLS_Pos))
#define   FLEX_US_CSR_LIN_LINBLS_0_Val        _UINT32_(0x0)                                        /* (FLEX_US_CSR) LIN bus line is set to 0.  */
#define   FLEX_US_CSR_LIN_LINBLS_1_Val        _UINT32_(0x1)                                        /* (FLEX_US_CSR) LIN bus line is set to 1.  */
#define FLEX_US_CSR_LIN_LINBLS_0              (FLEX_US_CSR_LIN_LINBLS_0_Val << FLEX_US_CSR_LIN_LINBLS_Pos) /* (FLEX_US_CSR) LIN bus line is set to 0. Position */
#define FLEX_US_CSR_LIN_LINBLS_1              (FLEX_US_CSR_LIN_LINBLS_1_Val << FLEX_US_CSR_LIN_LINBLS_Pos) /* (FLEX_US_CSR) LIN bus line is set to 1. Position */
#define FLEX_US_CSR_LIN_LINBE_Pos             _UINT32_(25)                                         /* (FLEX_US_CSR) LIN Bit Error Position */
#define FLEX_US_CSR_LIN_LINBE_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINBE_Pos)         /* (FLEX_US_CSR) LIN Bit Error Mask */
#define FLEX_US_CSR_LIN_LINBE(value)          (FLEX_US_CSR_LIN_LINBE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINBE_Pos))
#define   FLEX_US_CSR_LIN_LINBE_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) No bit error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINBE_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) A bit error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINBE_0               (FLEX_US_CSR_LIN_LINBE_0_Val << FLEX_US_CSR_LIN_LINBE_Pos) /* (FLEX_US_CSR) No bit error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINBE_1               (FLEX_US_CSR_LIN_LINBE_1_Val << FLEX_US_CSR_LIN_LINBE_Pos) /* (FLEX_US_CSR) A bit error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINISFE_Pos           _UINT32_(26)                                         /* (FLEX_US_CSR) LIN Inconsistent Synch Field Error Position */
#define FLEX_US_CSR_LIN_LINISFE_Msk           (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINISFE_Pos)       /* (FLEX_US_CSR) LIN Inconsistent Synch Field Error Mask */
#define FLEX_US_CSR_LIN_LINISFE(value)        (FLEX_US_CSR_LIN_LINISFE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINISFE_Pos))
#define   FLEX_US_CSR_LIN_LINISFE_0_Val       _UINT32_(0x0)                                        /* (FLEX_US_CSR) No LIN inconsistent synch field error has been detected since the last RSTSTA  */
#define   FLEX_US_CSR_LIN_LINISFE_1_Val       _UINT32_(0x1)                                        /* (FLEX_US_CSR) The USART is configured as a client node and a LIN Inconsistent synch field error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINISFE_0             (FLEX_US_CSR_LIN_LINISFE_0_Val << FLEX_US_CSR_LIN_LINISFE_Pos) /* (FLEX_US_CSR) No LIN inconsistent synch field error has been detected since the last RSTSTA Position */
#define FLEX_US_CSR_LIN_LINISFE_1             (FLEX_US_CSR_LIN_LINISFE_1_Val << FLEX_US_CSR_LIN_LINISFE_Pos) /* (FLEX_US_CSR) The USART is configured as a client node and a LIN Inconsistent synch field error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINIPE_Pos            _UINT32_(27)                                         /* (FLEX_US_CSR) LIN Identifier Parity Error Position */
#define FLEX_US_CSR_LIN_LINIPE_Msk            (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINIPE_Pos)        /* (FLEX_US_CSR) LIN Identifier Parity Error Mask */
#define FLEX_US_CSR_LIN_LINIPE(value)         (FLEX_US_CSR_LIN_LINIPE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINIPE_Pos))
#define   FLEX_US_CSR_LIN_LINIPE_0_Val        _UINT32_(0x0)                                        /* (FLEX_US_CSR) No LIN identifier parity error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINIPE_1_Val        _UINT32_(0x1)                                        /* (FLEX_US_CSR) A LIN identifier parity error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINIPE_0              (FLEX_US_CSR_LIN_LINIPE_0_Val << FLEX_US_CSR_LIN_LINIPE_Pos) /* (FLEX_US_CSR) No LIN identifier parity error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINIPE_1              (FLEX_US_CSR_LIN_LINIPE_1_Val << FLEX_US_CSR_LIN_LINIPE_Pos) /* (FLEX_US_CSR) A LIN identifier parity error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINCE_Pos             _UINT32_(28)                                         /* (FLEX_US_CSR) LIN Checksum Error Position */
#define FLEX_US_CSR_LIN_LINCE_Msk             (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINCE_Pos)         /* (FLEX_US_CSR) LIN Checksum Error Mask */
#define FLEX_US_CSR_LIN_LINCE(value)          (FLEX_US_CSR_LIN_LINCE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINCE_Pos))
#define   FLEX_US_CSR_LIN_LINCE_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_CSR) No LIN checksum error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINCE_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_CSR) A LIN checksum error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINCE_0               (FLEX_US_CSR_LIN_LINCE_0_Val << FLEX_US_CSR_LIN_LINCE_Pos) /* (FLEX_US_CSR) No LIN checksum error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINCE_1               (FLEX_US_CSR_LIN_LINCE_1_Val << FLEX_US_CSR_LIN_LINCE_Pos) /* (FLEX_US_CSR) A LIN checksum error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINSNRE_Pos           _UINT32_(29)                                         /* (FLEX_US_CSR) LIN Client Not Responding Error Position */
#define FLEX_US_CSR_LIN_LINSNRE_Msk           (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINSNRE_Pos)       /* (FLEX_US_CSR) LIN Client Not Responding Error Mask */
#define FLEX_US_CSR_LIN_LINSNRE(value)        (FLEX_US_CSR_LIN_LINSNRE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINSNRE_Pos))
#define   FLEX_US_CSR_LIN_LINSNRE_0_Val       _UINT32_(0x0)                                        /* (FLEX_US_CSR) No LIN client not responding error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINSNRE_1_Val       _UINT32_(0x1)                                        /* (FLEX_US_CSR) A LIN client not responding error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINSNRE_0             (FLEX_US_CSR_LIN_LINSNRE_0_Val << FLEX_US_CSR_LIN_LINSNRE_Pos) /* (FLEX_US_CSR) No LIN client not responding error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINSNRE_1             (FLEX_US_CSR_LIN_LINSNRE_1_Val << FLEX_US_CSR_LIN_LINSNRE_Pos) /* (FLEX_US_CSR) A LIN client not responding error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINSTE_Pos            _UINT32_(30)                                         /* (FLEX_US_CSR) LIN Synch Tolerance Error Position */
#define FLEX_US_CSR_LIN_LINSTE_Msk            (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINSTE_Pos)        /* (FLEX_US_CSR) LIN Synch Tolerance Error Mask */
#define FLEX_US_CSR_LIN_LINSTE(value)         (FLEX_US_CSR_LIN_LINSTE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINSTE_Pos))
#define   FLEX_US_CSR_LIN_LINSTE_0_Val        _UINT32_(0x0)                                        /* (FLEX_US_CSR) No LIN synch tolerance error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINSTE_1_Val        _UINT32_(0x1)                                        /* (FLEX_US_CSR) A LIN synch tolerance error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINSTE_0              (FLEX_US_CSR_LIN_LINSTE_0_Val << FLEX_US_CSR_LIN_LINSTE_Pos) /* (FLEX_US_CSR) No LIN synch tolerance error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINSTE_1              (FLEX_US_CSR_LIN_LINSTE_1_Val << FLEX_US_CSR_LIN_LINSTE_Pos) /* (FLEX_US_CSR) A LIN synch tolerance error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINHTE_Pos            _UINT32_(31)                                         /* (FLEX_US_CSR) LIN Header Timeout Error Position */
#define FLEX_US_CSR_LIN_LINHTE_Msk            (_UINT32_(0x1) << FLEX_US_CSR_LIN_LINHTE_Pos)        /* (FLEX_US_CSR) LIN Header Timeout Error Mask */
#define FLEX_US_CSR_LIN_LINHTE(value)         (FLEX_US_CSR_LIN_LINHTE_Msk & (_UINT32_(value) << FLEX_US_CSR_LIN_LINHTE_Pos))
#define   FLEX_US_CSR_LIN_LINHTE_0_Val        _UINT32_(0x0)                                        /* (FLEX_US_CSR) No LIN header timeout error has been detected since the last RSTSTA command was issued.  */
#define   FLEX_US_CSR_LIN_LINHTE_1_Val        _UINT32_(0x1)                                        /* (FLEX_US_CSR) A LIN header timeout error has been detected since the last RSTSTA command was issued.  */
#define FLEX_US_CSR_LIN_LINHTE_0              (FLEX_US_CSR_LIN_LINHTE_0_Val << FLEX_US_CSR_LIN_LINHTE_Pos) /* (FLEX_US_CSR) No LIN header timeout error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_LINHTE_1              (FLEX_US_CSR_LIN_LINHTE_1_Val << FLEX_US_CSR_LIN_LINHTE_Pos) /* (FLEX_US_CSR) A LIN header timeout error has been detected since the last RSTSTA command was issued. Position */
#define FLEX_US_CSR_LIN_Msk                   _UINT32_(0xFEA0E3E3)                                 /* (FLEX_US_CSR_LIN) Register Mask  */


/* -------- FLEX_US_RHR : (FLEXCOM Offset: 0x218) ( R/ 32) USART Receive Holding Register -------- */
#define FLEX_US_RHR_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_US_RHR) USART Receive Holding Register  Reset Value */

#define FLEX_US_RHR_RXCHR_Pos                 _UINT32_(0)                                          /* (FLEX_US_RHR) Received Character Position */
#define FLEX_US_RHR_RXCHR_Msk                 (_UINT32_(0x1FF) << FLEX_US_RHR_RXCHR_Pos)           /* (FLEX_US_RHR) Received Character Mask */
#define FLEX_US_RHR_RXCHR(value)              (FLEX_US_RHR_RXCHR_Msk & (_UINT32_(value) << FLEX_US_RHR_RXCHR_Pos)) /* Assignment of value for RXCHR in the FLEX_US_RHR register */
#define FLEX_US_RHR_RXSYNH_Pos                _UINT32_(15)                                         /* (FLEX_US_RHR) Received Sync Position */
#define FLEX_US_RHR_RXSYNH_Msk                (_UINT32_(0x1) << FLEX_US_RHR_RXSYNH_Pos)            /* (FLEX_US_RHR) Received Sync Mask */
#define FLEX_US_RHR_RXSYNH(value)             (FLEX_US_RHR_RXSYNH_Msk & (_UINT32_(value) << FLEX_US_RHR_RXSYNH_Pos)) /* Assignment of value for RXSYNH in the FLEX_US_RHR register */
#define   FLEX_US_RHR_RXSYNH_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_RHR) Last character received is a data.  */
#define   FLEX_US_RHR_RXSYNH_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_RHR) Last character received is a command.  */
#define FLEX_US_RHR_RXSYNH_0                  (FLEX_US_RHR_RXSYNH_0_Val << FLEX_US_RHR_RXSYNH_Pos) /* (FLEX_US_RHR) Last character received is a data. Position */
#define FLEX_US_RHR_RXSYNH_1                  (FLEX_US_RHR_RXSYNH_1_Val << FLEX_US_RHR_RXSYNH_Pos) /* (FLEX_US_RHR) Last character received is a command. Position */
#define FLEX_US_RHR_Msk                       _UINT32_(0x000081FF)                                 /* (FLEX_US_RHR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos _UINT32_(0)                                          /* (FLEX_US_RHR) Received Characters Position */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Msk (_UINT32_(0xFF) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos) /* (FLEX_US_RHR) Received Characters Mask */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0(value) (FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Msk & (_UINT32_(value) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR0_Pos))
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos _UINT32_(8)                                          /* (FLEX_US_RHR) Received Characters Position */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Msk (_UINT32_(0xFF) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos) /* (FLEX_US_RHR) Received Characters Mask */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1(value) (FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Msk & (_UINT32_(value) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR1_Pos))
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos _UINT32_(16)                                         /* (FLEX_US_RHR) Received Characters Position */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Msk (_UINT32_(0xFF) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos) /* (FLEX_US_RHR) Received Characters Mask */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2(value) (FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Msk & (_UINT32_(value) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR2_Pos))
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos _UINT32_(24)                                         /* (FLEX_US_RHR) Received Characters Position */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Msk (_UINT32_(0xFF) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos) /* (FLEX_US_RHR) Received Characters Mask */
#define FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3(value) (FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Msk & (_UINT32_(value) << FLEX_US_RHR_FIFO_MULTI_DATA_RXCHR3_Pos))
#define FLEX_US_RHR_FIFO_MULTI_DATA_Msk       _UINT32_(0xFFFFFFFF)                                 /* (FLEX_US_RHR_FIFO_MULTI_DATA) Register Mask  */


/* -------- FLEX_US_THR : (FLEXCOM Offset: 0x21C) ( /W 32) USART Transmit Holding Register -------- */
#define FLEX_US_THR_TXCHR_Pos                 _UINT32_(0)                                          /* (FLEX_US_THR) Character to be Transmitted Position */
#define FLEX_US_THR_TXCHR_Msk                 (_UINT32_(0x1FF) << FLEX_US_THR_TXCHR_Pos)           /* (FLEX_US_THR) Character to be Transmitted Mask */
#define FLEX_US_THR_TXCHR(value)              (FLEX_US_THR_TXCHR_Msk & (_UINT32_(value) << FLEX_US_THR_TXCHR_Pos)) /* Assignment of value for TXCHR in the FLEX_US_THR register */
#define FLEX_US_THR_TXSYNH_Pos                _UINT32_(15)                                         /* (FLEX_US_THR) Sync Field to be Transmitted Position */
#define FLEX_US_THR_TXSYNH_Msk                (_UINT32_(0x1) << FLEX_US_THR_TXSYNH_Pos)            /* (FLEX_US_THR) Sync Field to be Transmitted Mask */
#define FLEX_US_THR_TXSYNH(value)             (FLEX_US_THR_TXSYNH_Msk & (_UINT32_(value) << FLEX_US_THR_TXSYNH_Pos)) /* Assignment of value for TXSYNH in the FLEX_US_THR register */
#define   FLEX_US_THR_TXSYNH_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_THR) The next character sent is encoded as a data. Start frame delimiter is DATA SYNC.  */
#define   FLEX_US_THR_TXSYNH_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_THR) The next character sent is encoded as a command. Start frame delimiter is COMMAND SYNC.  */
#define FLEX_US_THR_TXSYNH_0                  (FLEX_US_THR_TXSYNH_0_Val << FLEX_US_THR_TXSYNH_Pos) /* (FLEX_US_THR) The next character sent is encoded as a data. Start frame delimiter is DATA SYNC. Position */
#define FLEX_US_THR_TXSYNH_1                  (FLEX_US_THR_TXSYNH_1_Val << FLEX_US_THR_TXSYNH_Pos) /* (FLEX_US_THR) The next character sent is encoded as a command. Start frame delimiter is COMMAND SYNC. Position */
#define FLEX_US_THR_Msk                       _UINT32_(0x000081FF)                                 /* (FLEX_US_THR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Pos _UINT32_(0)                                          /* (FLEX_US_THR) Character to be Transmitted Position */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Msk (_UINT32_(0xFF) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Pos) /* (FLEX_US_THR) Character to be Transmitted Mask */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0(value) (FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Msk & (_UINT32_(value) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR0_Pos))
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Pos _UINT32_(8)                                          /* (FLEX_US_THR) Character to be Transmitted Position */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Msk (_UINT32_(0xFF) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Pos) /* (FLEX_US_THR) Character to be Transmitted Mask */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1(value) (FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Msk & (_UINT32_(value) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR1_Pos))
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Pos _UINT32_(16)                                         /* (FLEX_US_THR) Character to be Transmitted Position */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Msk (_UINT32_(0xFF) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Pos) /* (FLEX_US_THR) Character to be Transmitted Mask */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2(value) (FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Msk & (_UINT32_(value) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR2_Pos))
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Pos _UINT32_(24)                                         /* (FLEX_US_THR) Character to be Transmitted Position */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Msk (_UINT32_(0xFF) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Pos) /* (FLEX_US_THR) Character to be Transmitted Mask */
#define FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3(value) (FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Msk & (_UINT32_(value) << FLEX_US_THR_FIFO_MULTI_DATA_TXCHR3_Pos))
#define FLEX_US_THR_FIFO_MULTI_DATA_Msk       _UINT32_(0xFFFFFFFF)                                 /* (FLEX_US_THR_FIFO_MULTI_DATA) Register Mask  */


/* -------- FLEX_US_BRGR : (FLEXCOM Offset: 0x220) (R/W 32) USART Baud Rate Generator Register -------- */
#define FLEX_US_BRGR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_BRGR) USART Baud Rate Generator Register  Reset Value */

#define FLEX_US_BRGR_CD_Pos                   _UINT32_(0)                                          /* (FLEX_US_BRGR) Clock Divider Position */
#define FLEX_US_BRGR_CD_Msk                   (_UINT32_(0xFFFF) << FLEX_US_BRGR_CD_Pos)            /* (FLEX_US_BRGR) Clock Divider Mask */
#define FLEX_US_BRGR_CD(value)                (FLEX_US_BRGR_CD_Msk & (_UINT32_(value) << FLEX_US_BRGR_CD_Pos)) /* Assignment of value for CD in the FLEX_US_BRGR register */
#define FLEX_US_BRGR_FP_Pos                   _UINT32_(16)                                         /* (FLEX_US_BRGR) Fractional Part Position */
#define FLEX_US_BRGR_FP_Msk                   (_UINT32_(0x7) << FLEX_US_BRGR_FP_Pos)               /* (FLEX_US_BRGR) Fractional Part Mask */
#define FLEX_US_BRGR_FP(value)                (FLEX_US_BRGR_FP_Msk & (_UINT32_(value) << FLEX_US_BRGR_FP_Pos)) /* Assignment of value for FP in the FLEX_US_BRGR register */
#define   FLEX_US_BRGR_FP_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_BRGR) Fractional divider is disabled.  */
#define FLEX_US_BRGR_FP_0                     (FLEX_US_BRGR_FP_0_Val << FLEX_US_BRGR_FP_Pos)       /* (FLEX_US_BRGR) Fractional divider is disabled. Position */
#define FLEX_US_BRGR_Msk                      _UINT32_(0x0007FFFF)                                 /* (FLEX_US_BRGR) Register Mask  */


/* -------- FLEX_US_RTOR : (FLEXCOM Offset: 0x224) (R/W 32) USART Receiver Timeout Register -------- */
#define FLEX_US_RTOR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_RTOR) USART Receiver Timeout Register  Reset Value */

#define FLEX_US_RTOR_TO_Pos                   _UINT32_(0)                                          /* (FLEX_US_RTOR) Timeout Value Position */
#define FLEX_US_RTOR_TO_Msk                   (_UINT32_(0x1FFFF) << FLEX_US_RTOR_TO_Pos)           /* (FLEX_US_RTOR) Timeout Value Mask */
#define FLEX_US_RTOR_TO(value)                (FLEX_US_RTOR_TO_Msk & (_UINT32_(value) << FLEX_US_RTOR_TO_Pos)) /* Assignment of value for TO in the FLEX_US_RTOR register */
#define   FLEX_US_RTOR_TO_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_RTOR) The receiver timeout is disabled.  */
#define FLEX_US_RTOR_TO_0                     (FLEX_US_RTOR_TO_0_Val << FLEX_US_RTOR_TO_Pos)       /* (FLEX_US_RTOR) The receiver timeout is disabled. Position */
#define FLEX_US_RTOR_Msk                      _UINT32_(0x0001FFFF)                                 /* (FLEX_US_RTOR) Register Mask  */


/* -------- FLEX_US_TTGR : (FLEXCOM Offset: 0x228) (R/W 32) USART Transmitter Timeguard Register -------- */
#define FLEX_US_TTGR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_TTGR) USART Transmitter Timeguard Register  Reset Value */

#define FLEX_US_TTGR_TG_Pos                   _UINT32_(0)                                          /* (FLEX_US_TTGR) Timeguard Value Position */
#define FLEX_US_TTGR_TG_Msk                   (_UINT32_(0xFF) << FLEX_US_TTGR_TG_Pos)              /* (FLEX_US_TTGR) Timeguard Value Mask */
#define FLEX_US_TTGR_TG(value)                (FLEX_US_TTGR_TG_Msk & (_UINT32_(value) << FLEX_US_TTGR_TG_Pos)) /* Assignment of value for TG in the FLEX_US_TTGR register */
#define   FLEX_US_TTGR_TG_0_Val               _UINT32_(0x0)                                        /* (FLEX_US_TTGR) The transmitter timeguard is disabled.  */
#define FLEX_US_TTGR_TG_0                     (FLEX_US_TTGR_TG_0_Val << FLEX_US_TTGR_TG_Pos)       /* (FLEX_US_TTGR) The transmitter timeguard is disabled. Position */
#define FLEX_US_TTGR_Msk                      _UINT32_(0x000000FF)                                 /* (FLEX_US_TTGR) Register Mask  */


/* -------- FLEX_US_FIDI : (FLEXCOM Offset: 0x240) (R/W 32) USART FI DI Ratio Register -------- */
#define FLEX_US_FIDI_RESETVALUE               _UINT32_(0x174)                                      /*  (FLEX_US_FIDI) USART FI DI Ratio Register  Reset Value */

#define FLEX_US_FIDI_FI_DI_RATIO_Pos          _UINT32_(0)                                          /* (FLEX_US_FIDI) FI Over DI Ratio Value Position */
#define FLEX_US_FIDI_FI_DI_RATIO_Msk          (_UINT32_(0xFFFF) << FLEX_US_FIDI_FI_DI_RATIO_Pos)   /* (FLEX_US_FIDI) FI Over DI Ratio Value Mask */
#define FLEX_US_FIDI_FI_DI_RATIO(value)       (FLEX_US_FIDI_FI_DI_RATIO_Msk & (_UINT32_(value) << FLEX_US_FIDI_FI_DI_RATIO_Pos)) /* Assignment of value for FI_DI_RATIO in the FLEX_US_FIDI register */
#define   FLEX_US_FIDI_FI_DI_RATIO_0_Val      _UINT32_(0x0)                                        /* (FLEX_US_FIDI) If ISO7816 mode is selected, the baud rate generator generates no signal.  */
#define FLEX_US_FIDI_FI_DI_RATIO_0            (FLEX_US_FIDI_FI_DI_RATIO_0_Val << FLEX_US_FIDI_FI_DI_RATIO_Pos) /* (FLEX_US_FIDI) If ISO7816 mode is selected, the baud rate generator generates no signal. Position */
#define FLEX_US_FIDI_Msk                      _UINT32_(0x0000FFFF)                                 /* (FLEX_US_FIDI) Register Mask  */


/* -------- FLEX_US_NER : (FLEXCOM Offset: 0x244) ( R/ 32) USART Number of Errors Register -------- */
#define FLEX_US_NER_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_US_NER) USART Number of Errors Register  Reset Value */

#define FLEX_US_NER_NB_ERRORS_Pos             _UINT32_(0)                                          /* (FLEX_US_NER) Number of Errors Position */
#define FLEX_US_NER_NB_ERRORS_Msk             (_UINT32_(0xFF) << FLEX_US_NER_NB_ERRORS_Pos)        /* (FLEX_US_NER) Number of Errors Mask */
#define FLEX_US_NER_NB_ERRORS(value)          (FLEX_US_NER_NB_ERRORS_Msk & (_UINT32_(value) << FLEX_US_NER_NB_ERRORS_Pos)) /* Assignment of value for NB_ERRORS in the FLEX_US_NER register */
#define FLEX_US_NER_Msk                       _UINT32_(0x000000FF)                                 /* (FLEX_US_NER) Register Mask  */


/* -------- FLEX_US_IF : (FLEXCOM Offset: 0x24C) (R/W 32) USART IrDA Filter Register -------- */
#define FLEX_US_IF_RESETVALUE                 _UINT32_(0x00)                                       /*  (FLEX_US_IF) USART IrDA Filter Register  Reset Value */

#define FLEX_US_IF_IRDA_FILTER_Pos            _UINT32_(0)                                          /* (FLEX_US_IF) IrDA Filter Position */
#define FLEX_US_IF_IRDA_FILTER_Msk            (_UINT32_(0xFF) << FLEX_US_IF_IRDA_FILTER_Pos)       /* (FLEX_US_IF) IrDA Filter Mask */
#define FLEX_US_IF_IRDA_FILTER(value)         (FLEX_US_IF_IRDA_FILTER_Msk & (_UINT32_(value) << FLEX_US_IF_IRDA_FILTER_Pos)) /* Assignment of value for IRDA_FILTER in the FLEX_US_IF register */
#define FLEX_US_IF_Msk                        _UINT32_(0x000000FF)                                 /* (FLEX_US_IF) Register Mask  */


/* -------- FLEX_US_MAN : (FLEXCOM Offset: 0x250) (R/W 32) USART Manchester Configuration Register -------- */
#define FLEX_US_MAN_RESETVALUE                _UINT32_(0xB0011004)                                 /*  (FLEX_US_MAN) USART Manchester Configuration Register  Reset Value */

#define FLEX_US_MAN_TX_PL_Pos                 _UINT32_(0)                                          /* (FLEX_US_MAN) Transmitter Preamble Length Position */
#define FLEX_US_MAN_TX_PL_Msk                 (_UINT32_(0xF) << FLEX_US_MAN_TX_PL_Pos)             /* (FLEX_US_MAN) Transmitter Preamble Length Mask */
#define FLEX_US_MAN_TX_PL(value)              (FLEX_US_MAN_TX_PL_Msk & (_UINT32_(value) << FLEX_US_MAN_TX_PL_Pos)) /* Assignment of value for TX_PL in the FLEX_US_MAN register */
#define   FLEX_US_MAN_TX_PL_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_MAN) The transmitter preamble pattern generation is disabled  */
#define FLEX_US_MAN_TX_PL_0                   (FLEX_US_MAN_TX_PL_0_Val << FLEX_US_MAN_TX_PL_Pos)   /* (FLEX_US_MAN) The transmitter preamble pattern generation is disabled Position */
#define FLEX_US_MAN_TX_PP_Pos                 _UINT32_(8)                                          /* (FLEX_US_MAN) Transmitter Preamble Pattern Position */
#define FLEX_US_MAN_TX_PP_Msk                 (_UINT32_(0x3) << FLEX_US_MAN_TX_PP_Pos)             /* (FLEX_US_MAN) Transmitter Preamble Pattern Mask */
#define FLEX_US_MAN_TX_PP(value)              (FLEX_US_MAN_TX_PP_Msk & (_UINT32_(value) << FLEX_US_MAN_TX_PP_Pos)) /* Assignment of value for TX_PP in the FLEX_US_MAN register */
#define   FLEX_US_MAN_TX_PP_ALL_ONE_Val       _UINT32_(0x0)                                        /* (FLEX_US_MAN) The preamble is composed of '1's  */
#define   FLEX_US_MAN_TX_PP_ALL_ZERO_Val      _UINT32_(0x1)                                        /* (FLEX_US_MAN) The preamble is composed of '0's  */
#define   FLEX_US_MAN_TX_PP_ZERO_ONE_Val      _UINT32_(0x2)                                        /* (FLEX_US_MAN) The preamble is composed of '01's  */
#define   FLEX_US_MAN_TX_PP_ONE_ZERO_Val      _UINT32_(0x3)                                        /* (FLEX_US_MAN) The preamble is composed of '10's  */
#define FLEX_US_MAN_TX_PP_ALL_ONE             (FLEX_US_MAN_TX_PP_ALL_ONE_Val << FLEX_US_MAN_TX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '1's Position */
#define FLEX_US_MAN_TX_PP_ALL_ZERO            (FLEX_US_MAN_TX_PP_ALL_ZERO_Val << FLEX_US_MAN_TX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '0's Position */
#define FLEX_US_MAN_TX_PP_ZERO_ONE            (FLEX_US_MAN_TX_PP_ZERO_ONE_Val << FLEX_US_MAN_TX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '01's Position */
#define FLEX_US_MAN_TX_PP_ONE_ZERO            (FLEX_US_MAN_TX_PP_ONE_ZERO_Val << FLEX_US_MAN_TX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '10's Position */
#define FLEX_US_MAN_TX_MPOL_Pos               _UINT32_(12)                                         /* (FLEX_US_MAN) Transmitter Manchester Polarity Position */
#define FLEX_US_MAN_TX_MPOL_Msk               (_UINT32_(0x1) << FLEX_US_MAN_TX_MPOL_Pos)           /* (FLEX_US_MAN) Transmitter Manchester Polarity Mask */
#define FLEX_US_MAN_TX_MPOL(value)            (FLEX_US_MAN_TX_MPOL_Msk & (_UINT32_(value) << FLEX_US_MAN_TX_MPOL_Pos)) /* Assignment of value for TX_MPOL in the FLEX_US_MAN register */
#define   FLEX_US_MAN_TX_MPOL_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition.  */
#define   FLEX_US_MAN_TX_MPOL_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition.  */
#define FLEX_US_MAN_TX_MPOL_0                 (FLEX_US_MAN_TX_MPOL_0_Val << FLEX_US_MAN_TX_MPOL_Pos) /* (FLEX_US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition. Position */
#define FLEX_US_MAN_TX_MPOL_1                 (FLEX_US_MAN_TX_MPOL_1_Val << FLEX_US_MAN_TX_MPOL_Pos) /* (FLEX_US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition. Position */
#define FLEX_US_MAN_RX_PL_Pos                 _UINT32_(16)                                         /* (FLEX_US_MAN) Receiver Preamble Length Position */
#define FLEX_US_MAN_RX_PL_Msk                 (_UINT32_(0xF) << FLEX_US_MAN_RX_PL_Pos)             /* (FLEX_US_MAN) Receiver Preamble Length Mask */
#define FLEX_US_MAN_RX_PL(value)              (FLEX_US_MAN_RX_PL_Msk & (_UINT32_(value) << FLEX_US_MAN_RX_PL_Pos)) /* Assignment of value for RX_PL in the FLEX_US_MAN register */
#define   FLEX_US_MAN_RX_PL_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_MAN) The receiver preamble pattern detection is disabled  */
#define FLEX_US_MAN_RX_PL_0                   (FLEX_US_MAN_RX_PL_0_Val << FLEX_US_MAN_RX_PL_Pos)   /* (FLEX_US_MAN) The receiver preamble pattern detection is disabled Position */
#define FLEX_US_MAN_RX_PP_Pos                 _UINT32_(24)                                         /* (FLEX_US_MAN) Receiver Preamble Pattern detected Position */
#define FLEX_US_MAN_RX_PP_Msk                 (_UINT32_(0x3) << FLEX_US_MAN_RX_PP_Pos)             /* (FLEX_US_MAN) Receiver Preamble Pattern detected Mask */
#define FLEX_US_MAN_RX_PP(value)              (FLEX_US_MAN_RX_PP_Msk & (_UINT32_(value) << FLEX_US_MAN_RX_PP_Pos)) /* Assignment of value for RX_PP in the FLEX_US_MAN register */
#define   FLEX_US_MAN_RX_PP_ALL_ONE_Val       _UINT32_(0x0)                                        /* (FLEX_US_MAN) The preamble is composed of '1's  */
#define   FLEX_US_MAN_RX_PP_ALL_ZERO_Val      _UINT32_(0x1)                                        /* (FLEX_US_MAN) The preamble is composed of '0's  */
#define   FLEX_US_MAN_RX_PP_ZERO_ONE_Val      _UINT32_(0x2)                                        /* (FLEX_US_MAN) The preamble is composed of '01's  */
#define   FLEX_US_MAN_RX_PP_ONE_ZERO_Val      _UINT32_(0x3)                                        /* (FLEX_US_MAN) The preamble is composed of '10's  */
#define FLEX_US_MAN_RX_PP_ALL_ONE             (FLEX_US_MAN_RX_PP_ALL_ONE_Val << FLEX_US_MAN_RX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '1's Position */
#define FLEX_US_MAN_RX_PP_ALL_ZERO            (FLEX_US_MAN_RX_PP_ALL_ZERO_Val << FLEX_US_MAN_RX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '0's Position */
#define FLEX_US_MAN_RX_PP_ZERO_ONE            (FLEX_US_MAN_RX_PP_ZERO_ONE_Val << FLEX_US_MAN_RX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '01's Position */
#define FLEX_US_MAN_RX_PP_ONE_ZERO            (FLEX_US_MAN_RX_PP_ONE_ZERO_Val << FLEX_US_MAN_RX_PP_Pos) /* (FLEX_US_MAN) The preamble is composed of '10's Position */
#define FLEX_US_MAN_RX_MPOL_Pos               _UINT32_(28)                                         /* (FLEX_US_MAN) Receiver Manchester Polarity Position */
#define FLEX_US_MAN_RX_MPOL_Msk               (_UINT32_(0x1) << FLEX_US_MAN_RX_MPOL_Pos)           /* (FLEX_US_MAN) Receiver Manchester Polarity Mask */
#define FLEX_US_MAN_RX_MPOL(value)            (FLEX_US_MAN_RX_MPOL_Msk & (_UINT32_(value) << FLEX_US_MAN_RX_MPOL_Pos)) /* Assignment of value for RX_MPOL in the FLEX_US_MAN register */
#define   FLEX_US_MAN_RX_MPOL_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition.  */
#define   FLEX_US_MAN_RX_MPOL_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition.  */
#define FLEX_US_MAN_RX_MPOL_0                 (FLEX_US_MAN_RX_MPOL_0_Val << FLEX_US_MAN_RX_MPOL_Pos) /* (FLEX_US_MAN) Logic zero is coded as a zero-to-one transition, Logic one is coded as a one-to-zero transition. Position */
#define FLEX_US_MAN_RX_MPOL_1                 (FLEX_US_MAN_RX_MPOL_1_Val << FLEX_US_MAN_RX_MPOL_Pos) /* (FLEX_US_MAN) Logic zero is coded as a one-to-zero transition, Logic one is coded as a zero-to-one transition. Position */
#define FLEX_US_MAN_ONE_Pos                   _UINT32_(29)                                         /* (FLEX_US_MAN) Must Be Set to 1 Position */
#define FLEX_US_MAN_ONE_Msk                   (_UINT32_(0x1) << FLEX_US_MAN_ONE_Pos)               /* (FLEX_US_MAN) Must Be Set to 1 Mask */
#define FLEX_US_MAN_ONE(value)                (FLEX_US_MAN_ONE_Msk & (_UINT32_(value) << FLEX_US_MAN_ONE_Pos)) /* Assignment of value for ONE in the FLEX_US_MAN register */
#define FLEX_US_MAN_DRIFT_Pos                 _UINT32_(30)                                         /* (FLEX_US_MAN) Drift Compensation Position */
#define FLEX_US_MAN_DRIFT_Msk                 (_UINT32_(0x1) << FLEX_US_MAN_DRIFT_Pos)             /* (FLEX_US_MAN) Drift Compensation Mask */
#define FLEX_US_MAN_DRIFT(value)              (FLEX_US_MAN_DRIFT_Msk & (_UINT32_(value) << FLEX_US_MAN_DRIFT_Pos)) /* Assignment of value for DRIFT in the FLEX_US_MAN register */
#define   FLEX_US_MAN_DRIFT_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_MAN) The USART cannot recover from an important clock drift  */
#define   FLEX_US_MAN_DRIFT_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_MAN) The USART can recover from clock drift. The 16X Clock mode must be enabled.  */
#define FLEX_US_MAN_DRIFT_0                   (FLEX_US_MAN_DRIFT_0_Val << FLEX_US_MAN_DRIFT_Pos)   /* (FLEX_US_MAN) The USART cannot recover from an important clock drift Position */
#define FLEX_US_MAN_DRIFT_1                   (FLEX_US_MAN_DRIFT_1_Val << FLEX_US_MAN_DRIFT_Pos)   /* (FLEX_US_MAN) The USART can recover from clock drift. The 16X Clock mode must be enabled. Position */
#define FLEX_US_MAN_RXIDLEV_Pos               _UINT32_(31)                                         /* (FLEX_US_MAN) Receiver Idle Value Position */
#define FLEX_US_MAN_RXIDLEV_Msk               (_UINT32_(0x1) << FLEX_US_MAN_RXIDLEV_Pos)           /* (FLEX_US_MAN) Receiver Idle Value Mask */
#define FLEX_US_MAN_RXIDLEV(value)            (FLEX_US_MAN_RXIDLEV_Msk & (_UINT32_(value) << FLEX_US_MAN_RXIDLEV_Pos)) /* Assignment of value for RXIDLEV in the FLEX_US_MAN register */
#define   FLEX_US_MAN_RXIDLEV_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_MAN) Receiver line idle value is 0.  */
#define   FLEX_US_MAN_RXIDLEV_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_MAN) Receiver line idle value is 1.  */
#define FLEX_US_MAN_RXIDLEV_0                 (FLEX_US_MAN_RXIDLEV_0_Val << FLEX_US_MAN_RXIDLEV_Pos) /* (FLEX_US_MAN) Receiver line idle value is 0. Position */
#define FLEX_US_MAN_RXIDLEV_1                 (FLEX_US_MAN_RXIDLEV_1_Val << FLEX_US_MAN_RXIDLEV_Pos) /* (FLEX_US_MAN) Receiver line idle value is 1. Position */
#define FLEX_US_MAN_Msk                       _UINT32_(0xF30F130F)                                 /* (FLEX_US_MAN) Register Mask  */


/* -------- FLEX_US_LINMR : (FLEXCOM Offset: 0x254) (R/W 32) USART LIN Mode Register -------- */
#define FLEX_US_LINMR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_US_LINMR) USART LIN Mode Register  Reset Value */

#define FLEX_US_LINMR_NACT_Pos                _UINT32_(0)                                          /* (FLEX_US_LINMR) LIN Node Action Position */
#define FLEX_US_LINMR_NACT_Msk                (_UINT32_(0x3) << FLEX_US_LINMR_NACT_Pos)            /* (FLEX_US_LINMR) LIN Node Action Mask */
#define FLEX_US_LINMR_NACT(value)             (FLEX_US_LINMR_NACT_Msk & (_UINT32_(value) << FLEX_US_LINMR_NACT_Pos)) /* Assignment of value for NACT in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_NACT_PUBLISH_Val      _UINT32_(0x0)                                        /* (FLEX_US_LINMR) The USART transmits the response.  */
#define   FLEX_US_LINMR_NACT_SUBSCRIBE_Val    _UINT32_(0x1)                                        /* (FLEX_US_LINMR) The USART receives the response.  */
#define   FLEX_US_LINMR_NACT_IGNORE_Val       _UINT32_(0x2)                                        /* (FLEX_US_LINMR) The USART does not transmit and does not receive the response.  */
#define FLEX_US_LINMR_NACT_PUBLISH            (FLEX_US_LINMR_NACT_PUBLISH_Val << FLEX_US_LINMR_NACT_Pos) /* (FLEX_US_LINMR) The USART transmits the response. Position */
#define FLEX_US_LINMR_NACT_SUBSCRIBE          (FLEX_US_LINMR_NACT_SUBSCRIBE_Val << FLEX_US_LINMR_NACT_Pos) /* (FLEX_US_LINMR) The USART receives the response. Position */
#define FLEX_US_LINMR_NACT_IGNORE             (FLEX_US_LINMR_NACT_IGNORE_Val << FLEX_US_LINMR_NACT_Pos) /* (FLEX_US_LINMR) The USART does not transmit and does not receive the response. Position */
#define FLEX_US_LINMR_PARDIS_Pos              _UINT32_(2)                                          /* (FLEX_US_LINMR) Parity Disable Position */
#define FLEX_US_LINMR_PARDIS_Msk              (_UINT32_(0x1) << FLEX_US_LINMR_PARDIS_Pos)          /* (FLEX_US_LINMR) Parity Disable Mask */
#define FLEX_US_LINMR_PARDIS(value)           (FLEX_US_LINMR_PARDIS_Msk & (_UINT32_(value) << FLEX_US_LINMR_PARDIS_Pos)) /* Assignment of value for PARDIS in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_PARDIS_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_LINMR) In host node configuration, the identifier parity is computed and sent automatically. In host node and client node configuration, the parity is checked automatically.  */
#define   FLEX_US_LINMR_PARDIS_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_LINMR) Whatever the node configuration is, the Identifier parity is not computed/sent and it is not checked.  */
#define FLEX_US_LINMR_PARDIS_0                (FLEX_US_LINMR_PARDIS_0_Val << FLEX_US_LINMR_PARDIS_Pos) /* (FLEX_US_LINMR) In host node configuration, the identifier parity is computed and sent automatically. In host node and client node configuration, the parity is checked automatically. Position */
#define FLEX_US_LINMR_PARDIS_1                (FLEX_US_LINMR_PARDIS_1_Val << FLEX_US_LINMR_PARDIS_Pos) /* (FLEX_US_LINMR) Whatever the node configuration is, the Identifier parity is not computed/sent and it is not checked. Position */
#define FLEX_US_LINMR_CHKDIS_Pos              _UINT32_(3)                                          /* (FLEX_US_LINMR) Checksum Disable Position */
#define FLEX_US_LINMR_CHKDIS_Msk              (_UINT32_(0x1) << FLEX_US_LINMR_CHKDIS_Pos)          /* (FLEX_US_LINMR) Checksum Disable Mask */
#define FLEX_US_LINMR_CHKDIS(value)           (FLEX_US_LINMR_CHKDIS_Msk & (_UINT32_(value) << FLEX_US_LINMR_CHKDIS_Pos)) /* Assignment of value for CHKDIS in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_CHKDIS_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_LINMR) In host node configuration, the checksum is computed and sent automatically. In client node configuration, the checksum is checked automatically.  */
#define   FLEX_US_LINMR_CHKDIS_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_LINMR) Whatever the node configuration is, the checksum is not computed/sent and it is not checked.  */
#define FLEX_US_LINMR_CHKDIS_0                (FLEX_US_LINMR_CHKDIS_0_Val << FLEX_US_LINMR_CHKDIS_Pos) /* (FLEX_US_LINMR) In host node configuration, the checksum is computed and sent automatically. In client node configuration, the checksum is checked automatically. Position */
#define FLEX_US_LINMR_CHKDIS_1                (FLEX_US_LINMR_CHKDIS_1_Val << FLEX_US_LINMR_CHKDIS_Pos) /* (FLEX_US_LINMR) Whatever the node configuration is, the checksum is not computed/sent and it is not checked. Position */
#define FLEX_US_LINMR_CHKTYP_Pos              _UINT32_(4)                                          /* (FLEX_US_LINMR) Checksum Type Position */
#define FLEX_US_LINMR_CHKTYP_Msk              (_UINT32_(0x1) << FLEX_US_LINMR_CHKTYP_Pos)          /* (FLEX_US_LINMR) Checksum Type Mask */
#define FLEX_US_LINMR_CHKTYP(value)           (FLEX_US_LINMR_CHKTYP_Msk & (_UINT32_(value) << FLEX_US_LINMR_CHKTYP_Pos)) /* Assignment of value for CHKTYP in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_CHKTYP_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_LINMR) LIN 2.0 "enhanced" checksum  */
#define   FLEX_US_LINMR_CHKTYP_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_LINMR) LIN 1.3 "classic" checksum  */
#define FLEX_US_LINMR_CHKTYP_0                (FLEX_US_LINMR_CHKTYP_0_Val << FLEX_US_LINMR_CHKTYP_Pos) /* (FLEX_US_LINMR) LIN 2.0 "enhanced" checksum Position */
#define FLEX_US_LINMR_CHKTYP_1                (FLEX_US_LINMR_CHKTYP_1_Val << FLEX_US_LINMR_CHKTYP_Pos) /* (FLEX_US_LINMR) LIN 1.3 "classic" checksum Position */
#define FLEX_US_LINMR_DLM_Pos                 _UINT32_(5)                                          /* (FLEX_US_LINMR) Data Length Mode Position */
#define FLEX_US_LINMR_DLM_Msk                 (_UINT32_(0x1) << FLEX_US_LINMR_DLM_Pos)             /* (FLEX_US_LINMR) Data Length Mode Mask */
#define FLEX_US_LINMR_DLM(value)              (FLEX_US_LINMR_DLM_Msk & (_UINT32_(value) << FLEX_US_LINMR_DLM_Pos)) /* Assignment of value for DLM in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_DLM_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_LINMR) The response data length is defined by the DLC field of this register.  */
#define   FLEX_US_LINMR_DLM_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_LINMR) The response data length is defined by the bits 5 and 6 of the identifier (FLEX_US_LINIR.IDCHR).  */
#define FLEX_US_LINMR_DLM_0                   (FLEX_US_LINMR_DLM_0_Val << FLEX_US_LINMR_DLM_Pos)   /* (FLEX_US_LINMR) The response data length is defined by the DLC field of this register. Position */
#define FLEX_US_LINMR_DLM_1                   (FLEX_US_LINMR_DLM_1_Val << FLEX_US_LINMR_DLM_Pos)   /* (FLEX_US_LINMR) The response data length is defined by the bits 5 and 6 of the identifier (FLEX_US_LINIR.IDCHR). Position */
#define FLEX_US_LINMR_FSDIS_Pos               _UINT32_(6)                                          /* (FLEX_US_LINMR) Frame Slot Mode Disable Position */
#define FLEX_US_LINMR_FSDIS_Msk               (_UINT32_(0x1) << FLEX_US_LINMR_FSDIS_Pos)           /* (FLEX_US_LINMR) Frame Slot Mode Disable Mask */
#define FLEX_US_LINMR_FSDIS(value)            (FLEX_US_LINMR_FSDIS_Msk & (_UINT32_(value) << FLEX_US_LINMR_FSDIS_Pos)) /* Assignment of value for FSDIS in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_FSDIS_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_LINMR) The Frame Slot mode is enabled.  */
#define   FLEX_US_LINMR_FSDIS_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_LINMR) The Frame Slot mode is disabled.  */
#define FLEX_US_LINMR_FSDIS_0                 (FLEX_US_LINMR_FSDIS_0_Val << FLEX_US_LINMR_FSDIS_Pos) /* (FLEX_US_LINMR) The Frame Slot mode is enabled. Position */
#define FLEX_US_LINMR_FSDIS_1                 (FLEX_US_LINMR_FSDIS_1_Val << FLEX_US_LINMR_FSDIS_Pos) /* (FLEX_US_LINMR) The Frame Slot mode is disabled. Position */
#define FLEX_US_LINMR_WKUPTYP_Pos             _UINT32_(7)                                          /* (FLEX_US_LINMR) Wake-up Signal Type Position */
#define FLEX_US_LINMR_WKUPTYP_Msk             (_UINT32_(0x1) << FLEX_US_LINMR_WKUPTYP_Pos)         /* (FLEX_US_LINMR) Wake-up Signal Type Mask */
#define FLEX_US_LINMR_WKUPTYP(value)          (FLEX_US_LINMR_WKUPTYP_Msk & (_UINT32_(value) << FLEX_US_LINMR_WKUPTYP_Pos)) /* Assignment of value for WKUPTYP in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_WKUPTYP_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 2.0 wake-up signal.  */
#define   FLEX_US_LINMR_WKUPTYP_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 1.3 wake-up signal.  */
#define FLEX_US_LINMR_WKUPTYP_0               (FLEX_US_LINMR_WKUPTYP_0_Val << FLEX_US_LINMR_WKUPTYP_Pos) /* (FLEX_US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 2.0 wake-up signal. Position */
#define FLEX_US_LINMR_WKUPTYP_1               (FLEX_US_LINMR_WKUPTYP_1_Val << FLEX_US_LINMR_WKUPTYP_Pos) /* (FLEX_US_LINMR) Setting the LINWKUP bit in the control register sends a LIN 1.3 wake-up signal. Position */
#define FLEX_US_LINMR_DLC_Pos                 _UINT32_(8)                                          /* (FLEX_US_LINMR) Data Length Control Position */
#define FLEX_US_LINMR_DLC_Msk                 (_UINT32_(0xFF) << FLEX_US_LINMR_DLC_Pos)            /* (FLEX_US_LINMR) Data Length Control Mask */
#define FLEX_US_LINMR_DLC(value)              (FLEX_US_LINMR_DLC_Msk & (_UINT32_(value) << FLEX_US_LINMR_DLC_Pos)) /* Assignment of value for DLC in the FLEX_US_LINMR register */
#define FLEX_US_LINMR_PDCM_Pos                _UINT32_(16)                                         /* (FLEX_US_LINMR) DMAC Mode Position */
#define FLEX_US_LINMR_PDCM_Msk                (_UINT32_(0x1) << FLEX_US_LINMR_PDCM_Pos)            /* (FLEX_US_LINMR) DMAC Mode Mask */
#define FLEX_US_LINMR_PDCM(value)             (FLEX_US_LINMR_PDCM_Msk & (_UINT32_(value) << FLEX_US_LINMR_PDCM_Pos)) /* Assignment of value for PDCM in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_PDCM_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_LINMR) The LIN mode register FLEX_US_LINMR is not written by the DMAC.  */
#define   FLEX_US_LINMR_PDCM_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_LINMR) The LIN mode register FLEX_US_LINMR (excepting that flag) is written by the DMAC.  */
#define FLEX_US_LINMR_PDCM_0                  (FLEX_US_LINMR_PDCM_0_Val << FLEX_US_LINMR_PDCM_Pos) /* (FLEX_US_LINMR) The LIN mode register FLEX_US_LINMR is not written by the DMAC. Position */
#define FLEX_US_LINMR_PDCM_1                  (FLEX_US_LINMR_PDCM_1_Val << FLEX_US_LINMR_PDCM_Pos) /* (FLEX_US_LINMR) The LIN mode register FLEX_US_LINMR (excepting that flag) is written by the DMAC. Position */
#define FLEX_US_LINMR_SYNCDIS_Pos             _UINT32_(17)                                         /* (FLEX_US_LINMR) Synchronization Disable Position */
#define FLEX_US_LINMR_SYNCDIS_Msk             (_UINT32_(0x1) << FLEX_US_LINMR_SYNCDIS_Pos)         /* (FLEX_US_LINMR) Synchronization Disable Mask */
#define FLEX_US_LINMR_SYNCDIS(value)          (FLEX_US_LINMR_SYNCDIS_Msk & (_UINT32_(value) << FLEX_US_LINMR_SYNCDIS_Pos)) /* Assignment of value for SYNCDIS in the FLEX_US_LINMR register */
#define   FLEX_US_LINMR_SYNCDIS_0_Val         _UINT32_(0x0)                                        /* (FLEX_US_LINMR) The synchronization procedure is performed in LIN client node configuration.  */
#define   FLEX_US_LINMR_SYNCDIS_1_Val         _UINT32_(0x1)                                        /* (FLEX_US_LINMR) The synchronization procedure is not performed in LIN client node configuration.  */
#define FLEX_US_LINMR_SYNCDIS_0               (FLEX_US_LINMR_SYNCDIS_0_Val << FLEX_US_LINMR_SYNCDIS_Pos) /* (FLEX_US_LINMR) The synchronization procedure is performed in LIN client node configuration. Position */
#define FLEX_US_LINMR_SYNCDIS_1               (FLEX_US_LINMR_SYNCDIS_1_Val << FLEX_US_LINMR_SYNCDIS_Pos) /* (FLEX_US_LINMR) The synchronization procedure is not performed in LIN client node configuration. Position */
#define FLEX_US_LINMR_Msk                     _UINT32_(0x0003FFFF)                                 /* (FLEX_US_LINMR) Register Mask  */


/* -------- FLEX_US_LINIR : (FLEXCOM Offset: 0x258) (R/W 32) USART LIN Identifier Register -------- */
#define FLEX_US_LINIR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_US_LINIR) USART LIN Identifier Register  Reset Value */

#define FLEX_US_LINIR_IDCHR_Pos               _UINT32_(0)                                          /* (FLEX_US_LINIR) Identifier Character Position */
#define FLEX_US_LINIR_IDCHR_Msk               (_UINT32_(0xFF) << FLEX_US_LINIR_IDCHR_Pos)          /* (FLEX_US_LINIR) Identifier Character Mask */
#define FLEX_US_LINIR_IDCHR(value)            (FLEX_US_LINIR_IDCHR_Msk & (_UINT32_(value) << FLEX_US_LINIR_IDCHR_Pos)) /* Assignment of value for IDCHR in the FLEX_US_LINIR register */
#define FLEX_US_LINIR_Msk                     _UINT32_(0x000000FF)                                 /* (FLEX_US_LINIR) Register Mask  */


/* -------- FLEX_US_LINBRR : (FLEXCOM Offset: 0x25C) ( R/ 32) USART LIN Baud Rate Register -------- */
#define FLEX_US_LINBRR_RESETVALUE             _UINT32_(0x00)                                       /*  (FLEX_US_LINBRR) USART LIN Baud Rate Register  Reset Value */

#define FLEX_US_LINBRR_LINCD_Pos              _UINT32_(0)                                          /* (FLEX_US_LINBRR) Clock Divider after Synchronization Position */
#define FLEX_US_LINBRR_LINCD_Msk              (_UINT32_(0xFFFF) << FLEX_US_LINBRR_LINCD_Pos)       /* (FLEX_US_LINBRR) Clock Divider after Synchronization Mask */
#define FLEX_US_LINBRR_LINCD(value)           (FLEX_US_LINBRR_LINCD_Msk & (_UINT32_(value) << FLEX_US_LINBRR_LINCD_Pos)) /* Assignment of value for LINCD in the FLEX_US_LINBRR register */
#define FLEX_US_LINBRR_LINFP_Pos              _UINT32_(16)                                         /* (FLEX_US_LINBRR) Fractional Part after Synchronization Position */
#define FLEX_US_LINBRR_LINFP_Msk              (_UINT32_(0x7) << FLEX_US_LINBRR_LINFP_Pos)          /* (FLEX_US_LINBRR) Fractional Part after Synchronization Mask */
#define FLEX_US_LINBRR_LINFP(value)           (FLEX_US_LINBRR_LINFP_Msk & (_UINT32_(value) << FLEX_US_LINBRR_LINFP_Pos)) /* Assignment of value for LINFP in the FLEX_US_LINBRR register */
#define FLEX_US_LINBRR_Msk                    _UINT32_(0x0007FFFF)                                 /* (FLEX_US_LINBRR) Register Mask  */


/* -------- FLEX_US_CMPR : (FLEXCOM Offset: 0x290) (R/W 32) USART Comparison Register -------- */
#define FLEX_US_CMPR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_CMPR) USART Comparison Register  Reset Value */

#define FLEX_US_CMPR_VAL1_Pos                 _UINT32_(0)                                          /* (FLEX_US_CMPR) First Comparison Value for Received Character Position */
#define FLEX_US_CMPR_VAL1_Msk                 (_UINT32_(0x1FF) << FLEX_US_CMPR_VAL1_Pos)           /* (FLEX_US_CMPR) First Comparison Value for Received Character Mask */
#define FLEX_US_CMPR_VAL1(value)              (FLEX_US_CMPR_VAL1_Msk & (_UINT32_(value) << FLEX_US_CMPR_VAL1_Pos)) /* Assignment of value for VAL1 in the FLEX_US_CMPR register */
#define FLEX_US_CMPR_CMPMODE_Pos              _UINT32_(12)                                         /* (FLEX_US_CMPR) Comparison Mode Position */
#define FLEX_US_CMPR_CMPMODE_Msk              (_UINT32_(0x3) << FLEX_US_CMPR_CMPMODE_Pos)          /* (FLEX_US_CMPR) Comparison Mode Mask */
#define FLEX_US_CMPR_CMPMODE(value)           (FLEX_US_CMPR_CMPMODE_Msk & (_UINT32_(value) << FLEX_US_CMPR_CMPMODE_Pos)) /* Assignment of value for CMPMODE in the FLEX_US_CMPR register */
#define   FLEX_US_CMPR_CMPMODE_FLAG_ONLY_Val  _UINT32_(0x0)                                        /* (FLEX_US_CMPR) Any character is received and comparison function drives CMP flag.  */
#define   FLEX_US_CMPR_CMPMODE_START_CONDITION_Val _UINT32_(0x1)                                        /* (FLEX_US_CMPR) Comparison condition must be met to start reception.  */
#define   FLEX_US_CMPR_CMPMODE_FILTER_Val     _UINT32_(0x2)                                        /* (FLEX_US_CMPR) Comparison must be met to receive the current data only  */
#define FLEX_US_CMPR_CMPMODE_FLAG_ONLY        (FLEX_US_CMPR_CMPMODE_FLAG_ONLY_Val << FLEX_US_CMPR_CMPMODE_Pos) /* (FLEX_US_CMPR) Any character is received and comparison function drives CMP flag. Position */
#define FLEX_US_CMPR_CMPMODE_START_CONDITION  (FLEX_US_CMPR_CMPMODE_START_CONDITION_Val << FLEX_US_CMPR_CMPMODE_Pos) /* (FLEX_US_CMPR) Comparison condition must be met to start reception. Position */
#define FLEX_US_CMPR_CMPMODE_FILTER           (FLEX_US_CMPR_CMPMODE_FILTER_Val << FLEX_US_CMPR_CMPMODE_Pos) /* (FLEX_US_CMPR) Comparison must be met to receive the current data only Position */
#define FLEX_US_CMPR_CMPPAR_Pos               _UINT32_(14)                                         /* (FLEX_US_CMPR) Compare Parity Position */
#define FLEX_US_CMPR_CMPPAR_Msk               (_UINT32_(0x1) << FLEX_US_CMPR_CMPPAR_Pos)           /* (FLEX_US_CMPR) Compare Parity Mask */
#define FLEX_US_CMPR_CMPPAR(value)            (FLEX_US_CMPR_CMPPAR_Msk & (_UINT32_(value) << FLEX_US_CMPR_CMPPAR_Pos)) /* Assignment of value for CMPPAR in the FLEX_US_CMPR register */
#define   FLEX_US_CMPR_CMPPAR_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_CMPR) The parity is not checked and a bad parity cannot prevent from waking up the system.  */
#define   FLEX_US_CMPR_CMPPAR_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_CMPR) The parity is checked and a matching condition on data can be cancelled by an error on parity bit, so no wake-up is performed.  */
#define FLEX_US_CMPR_CMPPAR_0                 (FLEX_US_CMPR_CMPPAR_0_Val << FLEX_US_CMPR_CMPPAR_Pos) /* (FLEX_US_CMPR) The parity is not checked and a bad parity cannot prevent from waking up the system. Position */
#define FLEX_US_CMPR_CMPPAR_1                 (FLEX_US_CMPR_CMPPAR_1_Val << FLEX_US_CMPR_CMPPAR_Pos) /* (FLEX_US_CMPR) The parity is checked and a matching condition on data can be cancelled by an error on parity bit, so no wake-up is performed. Position */
#define FLEX_US_CMPR_VAL2_Pos                 _UINT32_(16)                                         /* (FLEX_US_CMPR) Second Comparison Value for Received Character Position */
#define FLEX_US_CMPR_VAL2_Msk                 (_UINT32_(0x1FF) << FLEX_US_CMPR_VAL2_Pos)           /* (FLEX_US_CMPR) Second Comparison Value for Received Character Mask */
#define FLEX_US_CMPR_VAL2(value)              (FLEX_US_CMPR_VAL2_Msk & (_UINT32_(value) << FLEX_US_CMPR_VAL2_Pos)) /* Assignment of value for VAL2 in the FLEX_US_CMPR register */
#define FLEX_US_CMPR_Msk                      _UINT32_(0x01FF71FF)                                 /* (FLEX_US_CMPR) Register Mask  */


/* -------- FLEX_US_FMR : (FLEXCOM Offset: 0x2A0) (R/W 32) USART FIFO Mode Register -------- */
#define FLEX_US_FMR_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_US_FMR) USART FIFO Mode Register  Reset Value */

#define FLEX_US_FMR_TXRDYM_Pos                _UINT32_(0)                                          /* (FLEX_US_FMR) Transmitter Ready Mode Position */
#define FLEX_US_FMR_TXRDYM_Msk                (_UINT32_(0x3) << FLEX_US_FMR_TXRDYM_Pos)            /* (FLEX_US_FMR) Transmitter Ready Mode Mask */
#define FLEX_US_FMR_TXRDYM(value)             (FLEX_US_FMR_TXRDYM_Msk & (_UINT32_(value) << FLEX_US_FMR_TXRDYM_Pos)) /* Assignment of value for TXRDYM in the FLEX_US_FMR register */
#define   FLEX_US_FMR_TXRDYM_ONE_DATA_Val     _UINT32_(0x0)                                        /* (FLEX_US_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte.  */
#define   FLEX_US_FMR_TXRDYM_TWO_DATA_Val     _UINT32_(0x1)                                        /* (FLEX_US_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   FLEX_US_FMR_TXRDYM_FOUR_DATA_Val    _UINT32_(0x2)                                        /* (FLEX_US_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA (chunk size=1 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   FLEX_US_FMR_TXRDYM_EIGHT_DATA_Val   _UINT32_(0x3)                                        /* (FLEX_US_FMR) TXRDY will be at level '1' when at least eight data can be written in the Transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define FLEX_US_FMR_TXRDYM_ONE_DATA           (FLEX_US_FMR_TXRDYM_ONE_DATA_Val << FLEX_US_FMR_TXRDYM_Pos) /* (FLEX_US_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte. Position */
#define FLEX_US_FMR_TXRDYM_TWO_DATA           (FLEX_US_FMR_TXRDYM_TWO_DATA_Val << FLEX_US_FMR_TXRDYM_Pos) /* (FLEX_US_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define FLEX_US_FMR_TXRDYM_FOUR_DATA          (FLEX_US_FMR_TXRDYM_FOUR_DATA_Val << FLEX_US_FMR_TXRDYM_Pos) /* (FLEX_US_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA (chunk size=1 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define FLEX_US_FMR_TXRDYM_EIGHT_DATA         (FLEX_US_FMR_TXRDYM_EIGHT_DATA_Val << FLEX_US_FMR_TXRDYM_Pos) /* (FLEX_US_FMR) TXRDY will be at level '1' when at least eight data can be written in the Transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define FLEX_US_FMR_RXRDYM_Pos                _UINT32_(4)                                          /* (FLEX_US_FMR) Receiver Ready Mode Position */
#define FLEX_US_FMR_RXRDYM_Msk                (_UINT32_(0x3) << FLEX_US_FMR_RXRDYM_Pos)            /* (FLEX_US_FMR) Receiver Ready Mode Mask */
#define FLEX_US_FMR_RXRDYM(value)             (FLEX_US_FMR_RXRDYM_Msk & (_UINT32_(value) << FLEX_US_FMR_RXRDYM_Pos)) /* Assignment of value for RXRDYM in the FLEX_US_FMR register */
#define   FLEX_US_FMR_RXRDYM_ONE_DATA_Val     _UINT32_(0x0)                                        /* (FLEX_US_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte.  */
#define   FLEX_US_FMR_RXRDYM_TWO_DATA_Val     _UINT32_(0x1)                                        /* (FLEX_US_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA (chunk size=1 and halfword access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   FLEX_US_FMR_RXRDYM_FOUR_DATA_Val    _UINT32_(0x2)                                        /* (FLEX_US_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   FLEX_US_FMR_RXRDYM_EIGHT_DATA_Val   _UINT32_(0x3)                                        /* (FLEX_US_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define FLEX_US_FMR_RXRDYM_ONE_DATA           (FLEX_US_FMR_RXRDYM_ONE_DATA_Val << FLEX_US_FMR_RXRDYM_Pos) /* (FLEX_US_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as a byte. Position */
#define FLEX_US_FMR_RXRDYM_TWO_DATA           (FLEX_US_FMR_RXRDYM_TWO_DATA_Val << FLEX_US_FMR_RXRDYM_Pos) /* (FLEX_US_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA (chunk size=1 and halfword access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define FLEX_US_FMR_RXRDYM_FOUR_DATA          (FLEX_US_FMR_RXRDYM_FOUR_DATA_Val << FLEX_US_FMR_RXRDYM_Pos) /* (FLEX_US_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits to transfer on the line), the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define FLEX_US_FMR_RXRDYM_EIGHT_DATA         (FLEX_US_FMR_RXRDYM_EIGHT_DATA_Val << FLEX_US_FMR_RXRDYM_Pos) /* (FLEX_US_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and FLEX_US_MR.MODE9=0 (up to 8 bits transferred on the line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA (chunk size=2 and word access). If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define FLEX_US_FMR_FRTSC_Pos                 _UINT32_(7)                                          /* (FLEX_US_FMR) FIFO RTS Pin Control enable (Hardware Handshaking mode only) Position */
#define FLEX_US_FMR_FRTSC_Msk                 (_UINT32_(0x1) << FLEX_US_FMR_FRTSC_Pos)             /* (FLEX_US_FMR) FIFO RTS Pin Control enable (Hardware Handshaking mode only) Mask */
#define FLEX_US_FMR_FRTSC(value)              (FLEX_US_FMR_FRTSC_Msk & (_UINT32_(value) << FLEX_US_FMR_FRTSC_Pos)) /* Assignment of value for FRTSC in the FLEX_US_FMR register */
#define   FLEX_US_FMR_FRTSC_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_FMR) RTS pin is not controlled by Receive FIFO thresholds.  */
#define   FLEX_US_FMR_FRTSC_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_FMR) RTS pin is controlled by Receive FIFO thresholds.  */
#define FLEX_US_FMR_FRTSC_0                   (FLEX_US_FMR_FRTSC_0_Val << FLEX_US_FMR_FRTSC_Pos)   /* (FLEX_US_FMR) RTS pin is not controlled by Receive FIFO thresholds. Position */
#define FLEX_US_FMR_FRTSC_1                   (FLEX_US_FMR_FRTSC_1_Val << FLEX_US_FMR_FRTSC_Pos)   /* (FLEX_US_FMR) RTS pin is controlled by Receive FIFO thresholds. Position */
#define FLEX_US_FMR_TXFTHRES_Pos              _UINT32_(8)                                          /* (FLEX_US_FMR) Transmit FIFO Threshold Position */
#define FLEX_US_FMR_TXFTHRES_Msk              (_UINT32_(0x3F) << FLEX_US_FMR_TXFTHRES_Pos)         /* (FLEX_US_FMR) Transmit FIFO Threshold Mask */
#define FLEX_US_FMR_TXFTHRES(value)           (FLEX_US_FMR_TXFTHRES_Msk & (_UINT32_(value) << FLEX_US_FMR_TXFTHRES_Pos)) /* Assignment of value for TXFTHRES in the FLEX_US_FMR register */
#define FLEX_US_FMR_RXFTHRES_Pos              _UINT32_(16)                                         /* (FLEX_US_FMR) Receive FIFO Threshold Position */
#define FLEX_US_FMR_RXFTHRES_Msk              (_UINT32_(0x3F) << FLEX_US_FMR_RXFTHRES_Pos)         /* (FLEX_US_FMR) Receive FIFO Threshold Mask */
#define FLEX_US_FMR_RXFTHRES(value)           (FLEX_US_FMR_RXFTHRES_Msk & (_UINT32_(value) << FLEX_US_FMR_RXFTHRES_Pos)) /* Assignment of value for RXFTHRES in the FLEX_US_FMR register */
#define FLEX_US_FMR_RXFTHRES2_Pos             _UINT32_(24)                                         /* (FLEX_US_FMR) Receive FIFO Threshold 2 Position */
#define FLEX_US_FMR_RXFTHRES2_Msk             (_UINT32_(0x3F) << FLEX_US_FMR_RXFTHRES2_Pos)        /* (FLEX_US_FMR) Receive FIFO Threshold 2 Mask */
#define FLEX_US_FMR_RXFTHRES2(value)          (FLEX_US_FMR_RXFTHRES2_Msk & (_UINT32_(value) << FLEX_US_FMR_RXFTHRES2_Pos)) /* Assignment of value for RXFTHRES2 in the FLEX_US_FMR register */
#define FLEX_US_FMR_Msk                       _UINT32_(0x3F3F3FB3)                                 /* (FLEX_US_FMR) Register Mask  */


/* -------- FLEX_US_FLR : (FLEXCOM Offset: 0x2A4) ( R/ 32) USART FIFO Level Register -------- */
#define FLEX_US_FLR_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_US_FLR) USART FIFO Level Register  Reset Value */

#define FLEX_US_FLR_TXFL_Pos                  _UINT32_(0)                                          /* (FLEX_US_FLR) Transmit FIFO Level Position */
#define FLEX_US_FLR_TXFL_Msk                  (_UINT32_(0x3F) << FLEX_US_FLR_TXFL_Pos)             /* (FLEX_US_FLR) Transmit FIFO Level Mask */
#define FLEX_US_FLR_TXFL(value)               (FLEX_US_FLR_TXFL_Msk & (_UINT32_(value) << FLEX_US_FLR_TXFL_Pos)) /* Assignment of value for TXFL in the FLEX_US_FLR register */
#define   FLEX_US_FLR_TXFL_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_FLR) There is no data in the Transmit FIFO  */
#define FLEX_US_FLR_TXFL_0                    (FLEX_US_FLR_TXFL_0_Val << FLEX_US_FLR_TXFL_Pos)     /* (FLEX_US_FLR) There is no data in the Transmit FIFO Position */
#define FLEX_US_FLR_RXFL_Pos                  _UINT32_(16)                                         /* (FLEX_US_FLR) Receive FIFO Level Position */
#define FLEX_US_FLR_RXFL_Msk                  (_UINT32_(0x3F) << FLEX_US_FLR_RXFL_Pos)             /* (FLEX_US_FLR) Receive FIFO Level Mask */
#define FLEX_US_FLR_RXFL(value)               (FLEX_US_FLR_RXFL_Msk & (_UINT32_(value) << FLEX_US_FLR_RXFL_Pos)) /* Assignment of value for RXFL in the FLEX_US_FLR register */
#define   FLEX_US_FLR_RXFL_0_Val              _UINT32_(0x0)                                        /* (FLEX_US_FLR) There is no unread data in the Receive FIFO  */
#define FLEX_US_FLR_RXFL_0                    (FLEX_US_FLR_RXFL_0_Val << FLEX_US_FLR_RXFL_Pos)     /* (FLEX_US_FLR) There is no unread data in the Receive FIFO Position */
#define FLEX_US_FLR_Msk                       _UINT32_(0x003F003F)                                 /* (FLEX_US_FLR) Register Mask  */


/* -------- FLEX_US_FIER : (FLEXCOM Offset: 0x2A8) ( /W 32) USART FIFO Interrupt Enable Register -------- */
#define FLEX_US_FIER_TXFEF_Pos                _UINT32_(0)                                          /* (FLEX_US_FIER) TXFEF Interrupt Enable Position */
#define FLEX_US_FIER_TXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FIER_TXFEF_Pos)            /* (FLEX_US_FIER) TXFEF Interrupt Enable Mask */
#define FLEX_US_FIER_TXFEF(value)             (FLEX_US_FIER_TXFEF_Msk & (_UINT32_(value) << FLEX_US_FIER_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_US_FIER register */
#define FLEX_US_FIER_TXFFF_Pos                _UINT32_(1)                                          /* (FLEX_US_FIER) TXFFF Interrupt Enable Position */
#define FLEX_US_FIER_TXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FIER_TXFFF_Pos)            /* (FLEX_US_FIER) TXFFF Interrupt Enable Mask */
#define FLEX_US_FIER_TXFFF(value)             (FLEX_US_FIER_TXFFF_Msk & (_UINT32_(value) << FLEX_US_FIER_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_US_FIER register */
#define FLEX_US_FIER_TXFTHF_Pos               _UINT32_(2)                                          /* (FLEX_US_FIER) TXFTHF Interrupt Enable Position */
#define FLEX_US_FIER_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FIER_TXFTHF_Pos)           /* (FLEX_US_FIER) TXFTHF Interrupt Enable Mask */
#define FLEX_US_FIER_TXFTHF(value)            (FLEX_US_FIER_TXFTHF_Msk & (_UINT32_(value) << FLEX_US_FIER_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_US_FIER register */
#define FLEX_US_FIER_RXFEF_Pos                _UINT32_(3)                                          /* (FLEX_US_FIER) RXFEF Interrupt Enable Position */
#define FLEX_US_FIER_RXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FIER_RXFEF_Pos)            /* (FLEX_US_FIER) RXFEF Interrupt Enable Mask */
#define FLEX_US_FIER_RXFEF(value)             (FLEX_US_FIER_RXFEF_Msk & (_UINT32_(value) << FLEX_US_FIER_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_US_FIER register */
#define FLEX_US_FIER_RXFFF_Pos                _UINT32_(4)                                          /* (FLEX_US_FIER) RXFFF Interrupt Enable Position */
#define FLEX_US_FIER_RXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FIER_RXFFF_Pos)            /* (FLEX_US_FIER) RXFFF Interrupt Enable Mask */
#define FLEX_US_FIER_RXFFF(value)             (FLEX_US_FIER_RXFFF_Msk & (_UINT32_(value) << FLEX_US_FIER_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_US_FIER register */
#define FLEX_US_FIER_RXFTHF_Pos               _UINT32_(5)                                          /* (FLEX_US_FIER) RXFTHF Interrupt Enable Position */
#define FLEX_US_FIER_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FIER_RXFTHF_Pos)           /* (FLEX_US_FIER) RXFTHF Interrupt Enable Mask */
#define FLEX_US_FIER_RXFTHF(value)            (FLEX_US_FIER_RXFTHF_Msk & (_UINT32_(value) << FLEX_US_FIER_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_US_FIER register */
#define FLEX_US_FIER_TXFPTEF_Pos              _UINT32_(6)                                          /* (FLEX_US_FIER) TXFPTEF Interrupt Enable Position */
#define FLEX_US_FIER_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FIER_TXFPTEF_Pos)          /* (FLEX_US_FIER) TXFPTEF Interrupt Enable Mask */
#define FLEX_US_FIER_TXFPTEF(value)           (FLEX_US_FIER_TXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FIER_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_US_FIER register */
#define FLEX_US_FIER_RXFPTEF_Pos              _UINT32_(7)                                          /* (FLEX_US_FIER) RXFPTEF Interrupt Enable Position */
#define FLEX_US_FIER_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FIER_RXFPTEF_Pos)          /* (FLEX_US_FIER) RXFPTEF Interrupt Enable Mask */
#define FLEX_US_FIER_RXFPTEF(value)           (FLEX_US_FIER_RXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FIER_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_US_FIER register */
#define FLEX_US_FIER_RXFTHF2_Pos              _UINT32_(9)                                          /* (FLEX_US_FIER) RXFTHF2 Interrupt Enable Position */
#define FLEX_US_FIER_RXFTHF2_Msk              (_UINT32_(0x1) << FLEX_US_FIER_RXFTHF2_Pos)          /* (FLEX_US_FIER) RXFTHF2 Interrupt Enable Mask */
#define FLEX_US_FIER_RXFTHF2(value)           (FLEX_US_FIER_RXFTHF2_Msk & (_UINT32_(value) << FLEX_US_FIER_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the FLEX_US_FIER register */
#define FLEX_US_FIER_Msk                      _UINT32_(0x000002FF)                                 /* (FLEX_US_FIER) Register Mask  */


/* -------- FLEX_US_FIDR : (FLEXCOM Offset: 0x2AC) ( /W 32) USART FIFO Interrupt Disable Register -------- */
#define FLEX_US_FIDR_TXFEF_Pos                _UINT32_(0)                                          /* (FLEX_US_FIDR) TXFEF Interrupt Disable Position */
#define FLEX_US_FIDR_TXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FIDR_TXFEF_Pos)            /* (FLEX_US_FIDR) TXFEF Interrupt Disable Mask */
#define FLEX_US_FIDR_TXFEF(value)             (FLEX_US_FIDR_TXFEF_Msk & (_UINT32_(value) << FLEX_US_FIDR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_TXFFF_Pos                _UINT32_(1)                                          /* (FLEX_US_FIDR) TXFFF Interrupt Disable Position */
#define FLEX_US_FIDR_TXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FIDR_TXFFF_Pos)            /* (FLEX_US_FIDR) TXFFF Interrupt Disable Mask */
#define FLEX_US_FIDR_TXFFF(value)             (FLEX_US_FIDR_TXFFF_Msk & (_UINT32_(value) << FLEX_US_FIDR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_TXFTHF_Pos               _UINT32_(2)                                          /* (FLEX_US_FIDR) TXFTHF Interrupt Disable Position */
#define FLEX_US_FIDR_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FIDR_TXFTHF_Pos)           /* (FLEX_US_FIDR) TXFTHF Interrupt Disable Mask */
#define FLEX_US_FIDR_TXFTHF(value)            (FLEX_US_FIDR_TXFTHF_Msk & (_UINT32_(value) << FLEX_US_FIDR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_RXFEF_Pos                _UINT32_(3)                                          /* (FLEX_US_FIDR) RXFEF Interrupt Disable Position */
#define FLEX_US_FIDR_RXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FIDR_RXFEF_Pos)            /* (FLEX_US_FIDR) RXFEF Interrupt Disable Mask */
#define FLEX_US_FIDR_RXFEF(value)             (FLEX_US_FIDR_RXFEF_Msk & (_UINT32_(value) << FLEX_US_FIDR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_RXFFF_Pos                _UINT32_(4)                                          /* (FLEX_US_FIDR) RXFFF Interrupt Disable Position */
#define FLEX_US_FIDR_RXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FIDR_RXFFF_Pos)            /* (FLEX_US_FIDR) RXFFF Interrupt Disable Mask */
#define FLEX_US_FIDR_RXFFF(value)             (FLEX_US_FIDR_RXFFF_Msk & (_UINT32_(value) << FLEX_US_FIDR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_RXFTHF_Pos               _UINT32_(5)                                          /* (FLEX_US_FIDR) RXFTHF Interrupt Disable Position */
#define FLEX_US_FIDR_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FIDR_RXFTHF_Pos)           /* (FLEX_US_FIDR) RXFTHF Interrupt Disable Mask */
#define FLEX_US_FIDR_RXFTHF(value)            (FLEX_US_FIDR_RXFTHF_Msk & (_UINT32_(value) << FLEX_US_FIDR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_TXFPTEF_Pos              _UINT32_(6)                                          /* (FLEX_US_FIDR) TXFPTEF Interrupt Disable Position */
#define FLEX_US_FIDR_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FIDR_TXFPTEF_Pos)          /* (FLEX_US_FIDR) TXFPTEF Interrupt Disable Mask */
#define FLEX_US_FIDR_TXFPTEF(value)           (FLEX_US_FIDR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FIDR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_RXFPTEF_Pos              _UINT32_(7)                                          /* (FLEX_US_FIDR) RXFPTEF Interrupt Disable Position */
#define FLEX_US_FIDR_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FIDR_RXFPTEF_Pos)          /* (FLEX_US_FIDR) RXFPTEF Interrupt Disable Mask */
#define FLEX_US_FIDR_RXFPTEF(value)           (FLEX_US_FIDR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FIDR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_RXFTHF2_Pos              _UINT32_(9)                                          /* (FLEX_US_FIDR) RXFTHF2 Interrupt Disable Position */
#define FLEX_US_FIDR_RXFTHF2_Msk              (_UINT32_(0x1) << FLEX_US_FIDR_RXFTHF2_Pos)          /* (FLEX_US_FIDR) RXFTHF2 Interrupt Disable Mask */
#define FLEX_US_FIDR_RXFTHF2(value)           (FLEX_US_FIDR_RXFTHF2_Msk & (_UINT32_(value) << FLEX_US_FIDR_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the FLEX_US_FIDR register */
#define FLEX_US_FIDR_Msk                      _UINT32_(0x000002FF)                                 /* (FLEX_US_FIDR) Register Mask  */


/* -------- FLEX_US_FIMR : (FLEXCOM Offset: 0x2B0) ( R/ 32) USART FIFO Interrupt Mask Register -------- */
#define FLEX_US_FIMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_FIMR) USART FIFO Interrupt Mask Register  Reset Value */

#define FLEX_US_FIMR_TXFEF_Pos                _UINT32_(0)                                          /* (FLEX_US_FIMR) TXFEF Interrupt Mask Position */
#define FLEX_US_FIMR_TXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FIMR_TXFEF_Pos)            /* (FLEX_US_FIMR) TXFEF Interrupt Mask Mask */
#define FLEX_US_FIMR_TXFEF(value)             (FLEX_US_FIMR_TXFEF_Msk & (_UINT32_(value) << FLEX_US_FIMR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_TXFFF_Pos                _UINT32_(1)                                          /* (FLEX_US_FIMR) TXFFF Interrupt Mask Position */
#define FLEX_US_FIMR_TXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FIMR_TXFFF_Pos)            /* (FLEX_US_FIMR) TXFFF Interrupt Mask Mask */
#define FLEX_US_FIMR_TXFFF(value)             (FLEX_US_FIMR_TXFFF_Msk & (_UINT32_(value) << FLEX_US_FIMR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_TXFTHF_Pos               _UINT32_(2)                                          /* (FLEX_US_FIMR) TXFTHF Interrupt Mask Position */
#define FLEX_US_FIMR_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FIMR_TXFTHF_Pos)           /* (FLEX_US_FIMR) TXFTHF Interrupt Mask Mask */
#define FLEX_US_FIMR_TXFTHF(value)            (FLEX_US_FIMR_TXFTHF_Msk & (_UINT32_(value) << FLEX_US_FIMR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_RXFEF_Pos                _UINT32_(3)                                          /* (FLEX_US_FIMR) RXFEF Interrupt Mask Position */
#define FLEX_US_FIMR_RXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FIMR_RXFEF_Pos)            /* (FLEX_US_FIMR) RXFEF Interrupt Mask Mask */
#define FLEX_US_FIMR_RXFEF(value)             (FLEX_US_FIMR_RXFEF_Msk & (_UINT32_(value) << FLEX_US_FIMR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_RXFFF_Pos                _UINT32_(4)                                          /* (FLEX_US_FIMR) RXFFF Interrupt Mask Position */
#define FLEX_US_FIMR_RXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FIMR_RXFFF_Pos)            /* (FLEX_US_FIMR) RXFFF Interrupt Mask Mask */
#define FLEX_US_FIMR_RXFFF(value)             (FLEX_US_FIMR_RXFFF_Msk & (_UINT32_(value) << FLEX_US_FIMR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_RXFTHF_Pos               _UINT32_(5)                                          /* (FLEX_US_FIMR) RXFTHF Interrupt Mask Position */
#define FLEX_US_FIMR_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FIMR_RXFTHF_Pos)           /* (FLEX_US_FIMR) RXFTHF Interrupt Mask Mask */
#define FLEX_US_FIMR_RXFTHF(value)            (FLEX_US_FIMR_RXFTHF_Msk & (_UINT32_(value) << FLEX_US_FIMR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_TXFPTEF_Pos              _UINT32_(6)                                          /* (FLEX_US_FIMR) TXFPTEF Interrupt Mask Position */
#define FLEX_US_FIMR_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FIMR_TXFPTEF_Pos)          /* (FLEX_US_FIMR) TXFPTEF Interrupt Mask Mask */
#define FLEX_US_FIMR_TXFPTEF(value)           (FLEX_US_FIMR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FIMR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_RXFPTEF_Pos              _UINT32_(7)                                          /* (FLEX_US_FIMR) RXFPTEF Interrupt Mask Position */
#define FLEX_US_FIMR_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FIMR_RXFPTEF_Pos)          /* (FLEX_US_FIMR) RXFPTEF Interrupt Mask Mask */
#define FLEX_US_FIMR_RXFPTEF(value)           (FLEX_US_FIMR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FIMR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_RXFTHF2_Pos              _UINT32_(9)                                          /* (FLEX_US_FIMR) RXFTHF2 Interrupt Mask Position */
#define FLEX_US_FIMR_RXFTHF2_Msk              (_UINT32_(0x1) << FLEX_US_FIMR_RXFTHF2_Pos)          /* (FLEX_US_FIMR) RXFTHF2 Interrupt Mask Mask */
#define FLEX_US_FIMR_RXFTHF2(value)           (FLEX_US_FIMR_RXFTHF2_Msk & (_UINT32_(value) << FLEX_US_FIMR_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the FLEX_US_FIMR register */
#define FLEX_US_FIMR_Msk                      _UINT32_(0x000002FF)                                 /* (FLEX_US_FIMR) Register Mask  */


/* -------- FLEX_US_FESR : (FLEXCOM Offset: 0x2B4) ( R/ 32) USART FIFO Event Status Register -------- */
#define FLEX_US_FESR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_FESR) USART FIFO Event Status Register  Reset Value */

#define FLEX_US_FESR_TXFEF_Pos                _UINT32_(0)                                          /* (FLEX_US_FESR) Transmit FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_TXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FESR_TXFEF_Pos)            /* (FLEX_US_FESR) Transmit FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_TXFEF(value)             (FLEX_US_FESR_TXFEF_Msk & (_UINT32_(value) << FLEX_US_FESR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_TXFEF_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_FESR) Transmit FIFO is not empty.  */
#define   FLEX_US_FESR_TXFEF_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_FESR) Transmit FIFO has been emptied since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_TXFEF_0                  (FLEX_US_FESR_TXFEF_0_Val << FLEX_US_FESR_TXFEF_Pos) /* (FLEX_US_FESR) Transmit FIFO is not empty. Position */
#define FLEX_US_FESR_TXFEF_1                  (FLEX_US_FESR_TXFEF_1_Val << FLEX_US_FESR_TXFEF_Pos) /* (FLEX_US_FESR) Transmit FIFO has been emptied since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_TXFFF_Pos                _UINT32_(1)                                          /* (FLEX_US_FESR) Transmit FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_TXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FESR_TXFFF_Pos)            /* (FLEX_US_FESR) Transmit FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_TXFFF(value)             (FLEX_US_FESR_TXFFF_Msk & (_UINT32_(value) << FLEX_US_FESR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_TXFFF_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_FESR) Transmit FIFO is not full.  */
#define   FLEX_US_FESR_TXFFF_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_FESR) Transmit FIFO has been filled since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_TXFFF_0                  (FLEX_US_FESR_TXFFF_0_Val << FLEX_US_FESR_TXFFF_Pos) /* (FLEX_US_FESR) Transmit FIFO is not full. Position */
#define FLEX_US_FESR_TXFFF_1                  (FLEX_US_FESR_TXFFF_1_Val << FLEX_US_FESR_TXFFF_Pos) /* (FLEX_US_FESR) Transmit FIFO has been filled since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_TXFTHF_Pos               _UINT32_(2)                                          /* (FLEX_US_FESR) Transmit FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FESR_TXFTHF_Pos)           /* (FLEX_US_FESR) Transmit FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_TXFTHF(value)            (FLEX_US_FESR_TXFTHF_Msk & (_UINT32_(value) << FLEX_US_FESR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_TXFTHF_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_FESR) Number of data in Transmit FIFO is above TXFTHRES threshold.  */
#define   FLEX_US_FESR_TXFTHF_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_FESR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_TXFTHF_0                 (FLEX_US_FESR_TXFTHF_0_Val << FLEX_US_FESR_TXFTHF_Pos) /* (FLEX_US_FESR) Number of data in Transmit FIFO is above TXFTHRES threshold. Position */
#define FLEX_US_FESR_TXFTHF_1                 (FLEX_US_FESR_TXFTHF_1_Val << FLEX_US_FESR_TXFTHF_Pos) /* (FLEX_US_FESR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_RXFEF_Pos                _UINT32_(3)                                          /* (FLEX_US_FESR) Receive FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_RXFEF_Msk                (_UINT32_(0x1) << FLEX_US_FESR_RXFEF_Pos)            /* (FLEX_US_FESR) Receive FIFO Empty Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_RXFEF(value)             (FLEX_US_FESR_RXFEF_Msk & (_UINT32_(value) << FLEX_US_FESR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_RXFEF_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_FESR) Receive FIFO is not empty.  */
#define   FLEX_US_FESR_RXFEF_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_FESR) Receive FIFO has been emptied since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_RXFEF_0                  (FLEX_US_FESR_RXFEF_0_Val << FLEX_US_FESR_RXFEF_Pos) /* (FLEX_US_FESR) Receive FIFO is not empty. Position */
#define FLEX_US_FESR_RXFEF_1                  (FLEX_US_FESR_RXFEF_1_Val << FLEX_US_FESR_RXFEF_Pos) /* (FLEX_US_FESR) Receive FIFO has been emptied since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_RXFFF_Pos                _UINT32_(4)                                          /* (FLEX_US_FESR) Receive FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_RXFFF_Msk                (_UINT32_(0x1) << FLEX_US_FESR_RXFFF_Pos)            /* (FLEX_US_FESR) Receive FIFO Full Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_RXFFF(value)             (FLEX_US_FESR_RXFFF_Msk & (_UINT32_(value) << FLEX_US_FESR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_RXFFF_0_Val            _UINT32_(0x0)                                        /* (FLEX_US_FESR) Receive FIFO is not empty.  */
#define   FLEX_US_FESR_RXFFF_1_Val            _UINT32_(0x1)                                        /* (FLEX_US_FESR) Receive FIFO has been filled since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_RXFFF_0                  (FLEX_US_FESR_RXFFF_0_Val << FLEX_US_FESR_RXFFF_Pos) /* (FLEX_US_FESR) Receive FIFO is not empty. Position */
#define FLEX_US_FESR_RXFFF_1                  (FLEX_US_FESR_RXFFF_1_Val << FLEX_US_FESR_RXFFF_Pos) /* (FLEX_US_FESR) Receive FIFO has been filled since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_RXFTHF_Pos               _UINT32_(5)                                          /* (FLEX_US_FESR) Receive FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_US_FESR_RXFTHF_Pos)           /* (FLEX_US_FESR) Receive FIFO Threshold Flag (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_RXFTHF(value)            (FLEX_US_FESR_RXFTHF_Msk & (_UINT32_(value) << FLEX_US_FESR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_RXFTHF_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_FESR) Number of unread data in Receive FIFO is below RXFTHRES threshold.  */
#define   FLEX_US_FESR_RXFTHF_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_RXFTHF_0                 (FLEX_US_FESR_RXFTHF_0_Val << FLEX_US_FESR_RXFTHF_Pos) /* (FLEX_US_FESR) Number of unread data in Receive FIFO is below RXFTHRES threshold. Position */
#define FLEX_US_FESR_RXFTHF_1                 (FLEX_US_FESR_RXFTHF_1_Val << FLEX_US_FESR_RXFTHF_Pos) /* (FLEX_US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_TXFPTEF_Pos              _UINT32_(6)                                          /* (FLEX_US_FESR) Transmit FIFO Overflow Error Flag Position */
#define FLEX_US_FESR_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FESR_TXFPTEF_Pos)          /* (FLEX_US_FESR) Transmit FIFO Overflow Error Flag Mask */
#define FLEX_US_FESR_TXFPTEF(value)           (FLEX_US_FESR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FESR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_TXFPTEF_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_FESR) No Transmit FIFO overflow occurred.  */
#define   FLEX_US_FESR_TXFPTEF_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_FESR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing FLEX_SPI_CR.SWRST=1.  */
#define FLEX_US_FESR_TXFPTEF_0                (FLEX_US_FESR_TXFPTEF_0_Val << FLEX_US_FESR_TXFPTEF_Pos) /* (FLEX_US_FESR) No Transmit FIFO overflow occurred. Position */
#define FLEX_US_FESR_TXFPTEF_1                (FLEX_US_FESR_TXFPTEF_1_Val << FLEX_US_FESR_TXFPTEF_Pos) /* (FLEX_US_FESR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing FLEX_SPI_CR.SWRST=1. Position */
#define FLEX_US_FESR_RXFPTEF_Pos              _UINT32_(7)                                          /* (FLEX_US_FESR) Receive FIFO Underflow Error Flag Position */
#define FLEX_US_FESR_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_US_FESR_RXFPTEF_Pos)          /* (FLEX_US_FESR) Receive FIFO Underflow Error Flag Mask */
#define FLEX_US_FESR_RXFPTEF(value)           (FLEX_US_FESR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_US_FESR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_US_FESR register */
#define   FLEX_US_FESR_RXFPTEF_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_FESR) No Receive FIFO underflow occurred.  */
#define   FLEX_US_FESR_RXFPTEF_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_FESR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing FLEX_SPI_CR.SWRST=1.  */
#define FLEX_US_FESR_RXFPTEF_0                (FLEX_US_FESR_RXFPTEF_0_Val << FLEX_US_FESR_RXFPTEF_Pos) /* (FLEX_US_FESR) No Receive FIFO underflow occurred. Position */
#define FLEX_US_FESR_RXFPTEF_1                (FLEX_US_FESR_RXFPTEF_1_Val << FLEX_US_FESR_RXFPTEF_Pos) /* (FLEX_US_FESR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing FLEX_SPI_CR.SWRST=1. Position */
#define FLEX_US_FESR_TXFLOCK_Pos              _UINT32_(8)                                          /* (FLEX_US_FESR) Transmit FIFO Lock Position */
#define FLEX_US_FESR_TXFLOCK_Msk              (_UINT32_(0x1) << FLEX_US_FESR_TXFLOCK_Pos)          /* (FLEX_US_FESR) Transmit FIFO Lock Mask */
#define FLEX_US_FESR_TXFLOCK(value)           (FLEX_US_FESR_TXFLOCK_Msk & (_UINT32_(value) << FLEX_US_FESR_TXFLOCK_Pos)) /* Assignment of value for TXFLOCK in the FLEX_US_FESR register */
#define   FLEX_US_FESR_TXFLOCK_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_FESR) The Transmit FIFO is not locked.  */
#define   FLEX_US_FESR_TXFLOCK_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_FESR) The Transmit FIFO is locked.  */
#define FLEX_US_FESR_TXFLOCK_0                (FLEX_US_FESR_TXFLOCK_0_Val << FLEX_US_FESR_TXFLOCK_Pos) /* (FLEX_US_FESR) The Transmit FIFO is not locked. Position */
#define FLEX_US_FESR_TXFLOCK_1                (FLEX_US_FESR_TXFLOCK_1_Val << FLEX_US_FESR_TXFLOCK_Pos) /* (FLEX_US_FESR) The Transmit FIFO is locked. Position */
#define FLEX_US_FESR_RXFTHF2_Pos              _UINT32_(9)                                          /* (FLEX_US_FESR) Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) Position */
#define FLEX_US_FESR_RXFTHF2_Msk              (_UINT32_(0x1) << FLEX_US_FESR_RXFTHF2_Pos)          /* (FLEX_US_FESR) Receive FIFO Threshold Flag 2 (cleared by writing the FLEX_US_CR.RSTSTA bit) Mask */
#define FLEX_US_FESR_RXFTHF2(value)           (FLEX_US_FESR_RXFTHF2_Msk & (_UINT32_(value) << FLEX_US_FESR_RXFTHF2_Pos)) /* Assignment of value for RXFTHF2 in the FLEX_US_FESR register */
#define   FLEX_US_FESR_RXFTHF2_0_Val          _UINT32_(0x0)                                        /* (FLEX_US_FESR) Number of unread data in Receive FIFO is above RXFTHRES threshold.  */
#define   FLEX_US_FESR_RXFTHF2_1_Val          _UINT32_(0x1)                                        /* (FLEX_US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES2 threshold since the last RSTSTA command was issued.  */
#define FLEX_US_FESR_RXFTHF2_0                (FLEX_US_FESR_RXFTHF2_0_Val << FLEX_US_FESR_RXFTHF2_Pos) /* (FLEX_US_FESR) Number of unread data in Receive FIFO is above RXFTHRES threshold. Position */
#define FLEX_US_FESR_RXFTHF2_1                (FLEX_US_FESR_RXFTHF2_1_Val << FLEX_US_FESR_RXFTHF2_Pos) /* (FLEX_US_FESR) Number of unread data in Receive FIFO has reached RXFTHRES2 threshold since the last RSTSTA command was issued. Position */
#define FLEX_US_FESR_Msk                      _UINT32_(0x000003FF)                                 /* (FLEX_US_FESR) Register Mask  */


/* -------- FLEX_US_WPMR : (FLEXCOM Offset: 0x2E4) (R/W 32) USART Write Protection Mode Register -------- */
#define FLEX_US_WPMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_WPMR) USART Write Protection Mode Register  Reset Value */

#define FLEX_US_WPMR_WPEN_Pos                 _UINT32_(0)                                          /* (FLEX_US_WPMR) Write Protection Enable Position */
#define FLEX_US_WPMR_WPEN_Msk                 (_UINT32_(0x1) << FLEX_US_WPMR_WPEN_Pos)             /* (FLEX_US_WPMR) Write Protection Enable Mask */
#define FLEX_US_WPMR_WPEN(value)              (FLEX_US_WPMR_WPEN_Msk & (_UINT32_(value) << FLEX_US_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the FLEX_US_WPMR register */
#define   FLEX_US_WPMR_WPEN_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_WPMR) Disables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define   FLEX_US_WPMR_WPEN_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_WPMR) Enables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define FLEX_US_WPMR_WPEN_0                   (FLEX_US_WPMR_WPEN_0_Val << FLEX_US_WPMR_WPEN_Pos)   /* (FLEX_US_WPMR) Disables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define FLEX_US_WPMR_WPEN_1                   (FLEX_US_WPMR_WPEN_1_Val << FLEX_US_WPMR_WPEN_Pos)   /* (FLEX_US_WPMR) Enables the write protection on configuration registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define FLEX_US_WPMR_WPITEN_Pos               _UINT32_(1)                                          /* (FLEX_US_WPMR) Write Protection Interrupt Enable Position */
#define FLEX_US_WPMR_WPITEN_Msk               (_UINT32_(0x1) << FLEX_US_WPMR_WPITEN_Pos)           /* (FLEX_US_WPMR) Write Protection Interrupt Enable Mask */
#define FLEX_US_WPMR_WPITEN(value)            (FLEX_US_WPMR_WPITEN_Msk & (_UINT32_(value) << FLEX_US_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the FLEX_US_WPMR register */
#define   FLEX_US_WPMR_WPITEN_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define   FLEX_US_WPMR_WPITEN_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define FLEX_US_WPMR_WPITEN_0                 (FLEX_US_WPMR_WPITEN_0_Val << FLEX_US_WPMR_WPITEN_Pos) /* (FLEX_US_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define FLEX_US_WPMR_WPITEN_1                 (FLEX_US_WPMR_WPITEN_1_Val << FLEX_US_WPMR_WPITEN_Pos) /* (FLEX_US_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define FLEX_US_WPMR_WPCREN_Pos               _UINT32_(2)                                          /* (FLEX_US_WPMR) Write Protection Control Enable Position */
#define FLEX_US_WPMR_WPCREN_Msk               (_UINT32_(0x1) << FLEX_US_WPMR_WPCREN_Pos)           /* (FLEX_US_WPMR) Write Protection Control Enable Mask */
#define FLEX_US_WPMR_WPCREN(value)            (FLEX_US_WPMR_WPCREN_Msk & (_UINT32_(value) << FLEX_US_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the FLEX_US_WPMR register */
#define   FLEX_US_WPMR_WPCREN_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define   FLEX_US_WPMR_WPCREN_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII).  */
#define FLEX_US_WPMR_WPCREN_0                 (FLEX_US_WPMR_WPCREN_0_Val << FLEX_US_WPMR_WPCREN_Pos) /* (FLEX_US_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define FLEX_US_WPMR_WPCREN_1                 (FLEX_US_WPMR_WPCREN_1_Val << FLEX_US_WPMR_WPCREN_Pos) /* (FLEX_US_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x555341 ("USA" in ASCII). Position */
#define FLEX_US_WPMR_WPKEY_Pos                _UINT32_(8)                                          /* (FLEX_US_WPMR) Write Protection Key Position */
#define FLEX_US_WPMR_WPKEY_Msk                (_UINT32_(0xFFFFFF) << FLEX_US_WPMR_WPKEY_Pos)       /* (FLEX_US_WPMR) Write Protection Key Mask */
#define FLEX_US_WPMR_WPKEY(value)             (FLEX_US_WPMR_WPKEY_Msk & (_UINT32_(value) << FLEX_US_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the FLEX_US_WPMR register */
#define   FLEX_US_WPMR_WPKEY_PASSWD_Val       _UINT32_(0x555341)                                   /* (FLEX_US_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0.  */
#define FLEX_US_WPMR_WPKEY_PASSWD             (FLEX_US_WPMR_WPKEY_PASSWD_Val << FLEX_US_WPMR_WPKEY_Pos) /* (FLEX_US_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0. Position */
#define FLEX_US_WPMR_Msk                      _UINT32_(0xFFFFFF07)                                 /* (FLEX_US_WPMR) Register Mask  */


/* -------- FLEX_US_WPSR : (FLEXCOM Offset: 0x2E8) ( R/ 32) USART Write Protection Status Register -------- */
#define FLEX_US_WPSR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_US_WPSR) USART Write Protection Status Register  Reset Value */

#define FLEX_US_WPSR_WPVS_Pos                 _UINT32_(0)                                          /* (FLEX_US_WPSR) Write Protection Violation Status Position */
#define FLEX_US_WPSR_WPVS_Msk                 (_UINT32_(0x1) << FLEX_US_WPSR_WPVS_Pos)             /* (FLEX_US_WPSR) Write Protection Violation Status Mask */
#define FLEX_US_WPSR_WPVS(value)              (FLEX_US_WPSR_WPVS_Msk & (_UINT32_(value) << FLEX_US_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the FLEX_US_WPSR register */
#define   FLEX_US_WPSR_WPVS_0_Val             _UINT32_(0x0)                                        /* (FLEX_US_WPSR) No write protection violation has occurred since the last read of FLEX_US_WPSR.  */
#define   FLEX_US_WPSR_WPVS_1_Val             _UINT32_(0x1)                                        /* (FLEX_US_WPSR) A write protection violation has occurred since the last read of FLEX_US_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define FLEX_US_WPSR_WPVS_0                   (FLEX_US_WPSR_WPVS_0_Val << FLEX_US_WPSR_WPVS_Pos)   /* (FLEX_US_WPSR) No write protection violation has occurred since the last read of FLEX_US_WPSR. Position */
#define FLEX_US_WPSR_WPVS_1                   (FLEX_US_WPSR_WPVS_1_Val << FLEX_US_WPSR_WPVS_Pos)   /* (FLEX_US_WPSR) A write protection violation has occurred since the last read of FLEX_US_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define FLEX_US_WPSR_PADERR_Pos               _UINT32_(1)                                          /* (FLEX_US_WPSR) Output PAD Error (cleared on read) Position */
#define FLEX_US_WPSR_PADERR_Msk               (_UINT32_(0x1) << FLEX_US_WPSR_PADERR_Pos)           /* (FLEX_US_WPSR) Output PAD Error (cleared on read) Mask */
#define FLEX_US_WPSR_PADERR(value)            (FLEX_US_WPSR_PADERR_Msk & (_UINT32_(value) << FLEX_US_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the FLEX_US_WPSR register */
#define   FLEX_US_WPSR_PADERR_0_Val           _UINT32_(0x0)                                        /* (FLEX_US_WPSR) No error detected during a character transfer.  */
#define   FLEX_US_WPSR_PADERR_1_Val           _UINT32_(0x1)                                        /* (FLEX_US_WPSR) Two successive bit period with a difference between the data read at the output of the TXD pad buffer and the input driven by USART or abnormal number of SCK edges (or no clock edge) at the output of SCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc.  */
#define FLEX_US_WPSR_PADERR_0                 (FLEX_US_WPSR_PADERR_0_Val << FLEX_US_WPSR_PADERR_Pos) /* (FLEX_US_WPSR) No error detected during a character transfer. Position */
#define FLEX_US_WPSR_PADERR_1                 (FLEX_US_WPSR_PADERR_1_Val << FLEX_US_WPSR_PADERR_Pos) /* (FLEX_US_WPSR) Two successive bit period with a difference between the data read at the output of the TXD pad buffer and the input driven by USART or abnormal number of SCK edges (or no clock edge) at the output of SCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc. Position */
#define FLEX_US_WPSR_WPVSRC_Pos               _UINT32_(8)                                          /* (FLEX_US_WPSR) Write Protection Violation Source Position */
#define FLEX_US_WPSR_WPVSRC_Msk               (_UINT32_(0xFFFF) << FLEX_US_WPSR_WPVSRC_Pos)        /* (FLEX_US_WPSR) Write Protection Violation Source Mask */
#define FLEX_US_WPSR_WPVSRC(value)            (FLEX_US_WPSR_WPVSRC_Msk & (_UINT32_(value) << FLEX_US_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the FLEX_US_WPSR register */
#define FLEX_US_WPSR_Msk                      _UINT32_(0x00FFFF03)                                 /* (FLEX_US_WPSR) Register Mask  */


/* -------- FLEX_SPI_CR : (FLEXCOM Offset: 0x400) ( /W 32) SPI Control Register -------- */
#define FLEX_SPI_CR_SPIEN_Pos                 _UINT32_(0)                                          /* (FLEX_SPI_CR) SPI Enable Position */
#define FLEX_SPI_CR_SPIEN_Msk                 (_UINT32_(0x1) << FLEX_SPI_CR_SPIEN_Pos)             /* (FLEX_SPI_CR) SPI Enable Mask */
#define FLEX_SPI_CR_SPIEN(value)              (FLEX_SPI_CR_SPIEN_Msk & (_UINT32_(value) << FLEX_SPI_CR_SPIEN_Pos)) /* Assignment of value for SPIEN in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_SPIEN_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_SPIEN_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Enables the SPI to transfer and receive data.  */
#define FLEX_SPI_CR_SPIEN_0                   (FLEX_SPI_CR_SPIEN_0_Val << FLEX_SPI_CR_SPIEN_Pos)   /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_SPIEN_1                   (FLEX_SPI_CR_SPIEN_1_Val << FLEX_SPI_CR_SPIEN_Pos)   /* (FLEX_SPI_CR) Enables the SPI to transfer and receive data. Position */
#define FLEX_SPI_CR_SPIDIS_Pos                _UINT32_(1)                                          /* (FLEX_SPI_CR) SPI Disable Position */
#define FLEX_SPI_CR_SPIDIS_Msk                (_UINT32_(0x1) << FLEX_SPI_CR_SPIDIS_Pos)            /* (FLEX_SPI_CR) SPI Disable Mask */
#define FLEX_SPI_CR_SPIDIS(value)             (FLEX_SPI_CR_SPIDIS_Msk & (_UINT32_(value) << FLEX_SPI_CR_SPIDIS_Pos)) /* Assignment of value for SPIDIS in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_SPIDIS_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_SPIDIS_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Disables the SPI.  */
#define FLEX_SPI_CR_SPIDIS_0                  (FLEX_SPI_CR_SPIDIS_0_Val << FLEX_SPI_CR_SPIDIS_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_SPIDIS_1                  (FLEX_SPI_CR_SPIDIS_1_Val << FLEX_SPI_CR_SPIDIS_Pos) /* (FLEX_SPI_CR) Disables the SPI. Position */
#define FLEX_SPI_CR_SWRST_Pos                 _UINT32_(7)                                          /* (FLEX_SPI_CR) SPI Software Reset Position */
#define FLEX_SPI_CR_SWRST_Msk                 (_UINT32_(0x1) << FLEX_SPI_CR_SWRST_Pos)             /* (FLEX_SPI_CR) SPI Software Reset Mask */
#define FLEX_SPI_CR_SWRST(value)              (FLEX_SPI_CR_SWRST_Msk & (_UINT32_(value) << FLEX_SPI_CR_SWRST_Pos)) /* Assignment of value for SWRST in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_SWRST_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_SWRST_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Reset the SPI. A software-triggered hardware reset of the SPI interface is performed.  */
#define FLEX_SPI_CR_SWRST_0                   (FLEX_SPI_CR_SWRST_0_Val << FLEX_SPI_CR_SWRST_Pos)   /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_SWRST_1                   (FLEX_SPI_CR_SWRST_1_Val << FLEX_SPI_CR_SWRST_Pos)   /* (FLEX_SPI_CR) Reset the SPI. A software-triggered hardware reset of the SPI interface is performed. Position */
#define FLEX_SPI_CR_REQCLR_Pos                _UINT32_(12)                                         /* (FLEX_SPI_CR) Request to Clear the Comparison Trigger Position */
#define FLEX_SPI_CR_REQCLR_Msk                (_UINT32_(0x1) << FLEX_SPI_CR_REQCLR_Pos)            /* (FLEX_SPI_CR) Request to Clear the Comparison Trigger Mask */
#define FLEX_SPI_CR_REQCLR(value)             (FLEX_SPI_CR_REQCLR_Msk & (_UINT32_(value) << FLEX_SPI_CR_REQCLR_Pos)) /* Assignment of value for REQCLR in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_REQCLR_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_REQCLR_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Asynchronous partial wakeup enabled: Clears the potential clock request currently issued by SPI, thus the potential system wake-up is cancelled. Asynchronous partial wakeup disabled: Restarts the comparison trigger to enable FLEX_SPI_RDR loading.  */
#define FLEX_SPI_CR_REQCLR_0                  (FLEX_SPI_CR_REQCLR_0_Val << FLEX_SPI_CR_REQCLR_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_REQCLR_1                  (FLEX_SPI_CR_REQCLR_1_Val << FLEX_SPI_CR_REQCLR_Pos) /* (FLEX_SPI_CR) Asynchronous partial wakeup enabled: Clears the potential clock request currently issued by SPI, thus the potential system wake-up is cancelled. Asynchronous partial wakeup disabled: Restarts the comparison trigger to enable FLEX_SPI_RDR loading. Position */
#define FLEX_SPI_CR_TXFCLR_Pos                _UINT32_(16)                                         /* (FLEX_SPI_CR) Transmit FIFO Clear Position */
#define FLEX_SPI_CR_TXFCLR_Msk                (_UINT32_(0x1) << FLEX_SPI_CR_TXFCLR_Pos)            /* (FLEX_SPI_CR) Transmit FIFO Clear Mask */
#define FLEX_SPI_CR_TXFCLR(value)             (FLEX_SPI_CR_TXFCLR_Msk & (_UINT32_(value) << FLEX_SPI_CR_TXFCLR_Pos)) /* Assignment of value for TXFCLR in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_TXFCLR_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_TXFCLR_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Empties the Transmit FIFO.  */
#define FLEX_SPI_CR_TXFCLR_0                  (FLEX_SPI_CR_TXFCLR_0_Val << FLEX_SPI_CR_TXFCLR_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_TXFCLR_1                  (FLEX_SPI_CR_TXFCLR_1_Val << FLEX_SPI_CR_TXFCLR_Pos) /* (FLEX_SPI_CR) Empties the Transmit FIFO. Position */
#define FLEX_SPI_CR_RXFCLR_Pos                _UINT32_(17)                                         /* (FLEX_SPI_CR) Receive FIFO Clear Position */
#define FLEX_SPI_CR_RXFCLR_Msk                (_UINT32_(0x1) << FLEX_SPI_CR_RXFCLR_Pos)            /* (FLEX_SPI_CR) Receive FIFO Clear Mask */
#define FLEX_SPI_CR_RXFCLR(value)             (FLEX_SPI_CR_RXFCLR_Msk & (_UINT32_(value) << FLEX_SPI_CR_RXFCLR_Pos)) /* Assignment of value for RXFCLR in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_RXFCLR_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_RXFCLR_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Empties the Receive FIFO.  */
#define FLEX_SPI_CR_RXFCLR_0                  (FLEX_SPI_CR_RXFCLR_0_Val << FLEX_SPI_CR_RXFCLR_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_RXFCLR_1                  (FLEX_SPI_CR_RXFCLR_1_Val << FLEX_SPI_CR_RXFCLR_Pos) /* (FLEX_SPI_CR) Empties the Receive FIFO. Position */
#define FLEX_SPI_CR_LASTXFER_Pos              _UINT32_(24)                                         /* (FLEX_SPI_CR) Last Transfer Position */
#define FLEX_SPI_CR_LASTXFER_Msk              (_UINT32_(0x1) << FLEX_SPI_CR_LASTXFER_Pos)          /* (FLEX_SPI_CR) Last Transfer Mask */
#define FLEX_SPI_CR_LASTXFER(value)           (FLEX_SPI_CR_LASTXFER_Msk & (_UINT32_(value) << FLEX_SPI_CR_LASTXFER_Pos)) /* Assignment of value for LASTXFER in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_LASTXFER_0_Val          _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_LASTXFER_1_Val          _UINT32_(0x1)                                        /* (FLEX_SPI_CR) The current NPCS will be de-asserted after the character written in TD has been transferred. When CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed.  */
#define FLEX_SPI_CR_LASTXFER_0                (FLEX_SPI_CR_LASTXFER_0_Val << FLEX_SPI_CR_LASTXFER_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_LASTXFER_1                (FLEX_SPI_CR_LASTXFER_1_Val << FLEX_SPI_CR_LASTXFER_Pos) /* (FLEX_SPI_CR) The current NPCS will be de-asserted after the character written in TD has been transferred. When CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed. Position */
#define FLEX_SPI_CR_FIFOEN_Pos                _UINT32_(30)                                         /* (FLEX_SPI_CR) FIFO Enable Position */
#define FLEX_SPI_CR_FIFOEN_Msk                (_UINT32_(0x1) << FLEX_SPI_CR_FIFOEN_Pos)            /* (FLEX_SPI_CR) FIFO Enable Mask */
#define FLEX_SPI_CR_FIFOEN(value)             (FLEX_SPI_CR_FIFOEN_Msk & (_UINT32_(value) << FLEX_SPI_CR_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_FIFOEN_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_FIFOEN_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Enables the Transmit and Receive FIFOs  */
#define FLEX_SPI_CR_FIFOEN_0                  (FLEX_SPI_CR_FIFOEN_0_Val << FLEX_SPI_CR_FIFOEN_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_FIFOEN_1                  (FLEX_SPI_CR_FIFOEN_1_Val << FLEX_SPI_CR_FIFOEN_Pos) /* (FLEX_SPI_CR) Enables the Transmit and Receive FIFOs Position */
#define FLEX_SPI_CR_FIFODIS_Pos               _UINT32_(31)                                         /* (FLEX_SPI_CR) FIFO Disable Position */
#define FLEX_SPI_CR_FIFODIS_Msk               (_UINT32_(0x1) << FLEX_SPI_CR_FIFODIS_Pos)           /* (FLEX_SPI_CR) FIFO Disable Mask */
#define FLEX_SPI_CR_FIFODIS(value)            (FLEX_SPI_CR_FIFODIS_Msk & (_UINT32_(value) << FLEX_SPI_CR_FIFODIS_Pos)) /* Assignment of value for FIFODIS in the FLEX_SPI_CR register */
#define   FLEX_SPI_CR_FIFODIS_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_CR) No effect.  */
#define   FLEX_SPI_CR_FIFODIS_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_CR) Disables the Transmit and Receive FIFOs  */
#define FLEX_SPI_CR_FIFODIS_0                 (FLEX_SPI_CR_FIFODIS_0_Val << FLEX_SPI_CR_FIFODIS_Pos) /* (FLEX_SPI_CR) No effect. Position */
#define FLEX_SPI_CR_FIFODIS_1                 (FLEX_SPI_CR_FIFODIS_1_Val << FLEX_SPI_CR_FIFODIS_Pos) /* (FLEX_SPI_CR) Disables the Transmit and Receive FIFOs Position */
#define FLEX_SPI_CR_Msk                       _UINT32_(0xC1031083)                                 /* (FLEX_SPI_CR) Register Mask  */


/* -------- FLEX_SPI_MR : (FLEXCOM Offset: 0x404) (R/W 32) SPI Mode Register -------- */
#define FLEX_SPI_MR_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_SPI_MR) SPI Mode Register  Reset Value */

#define FLEX_SPI_MR_MSTR_Pos                  _UINT32_(0)                                          /* (FLEX_SPI_MR) Host/Client Mode Position */
#define FLEX_SPI_MR_MSTR_Msk                  (_UINT32_(0x1) << FLEX_SPI_MR_MSTR_Pos)              /* (FLEX_SPI_MR) Host/Client Mode Mask */
#define FLEX_SPI_MR_MSTR(value)               (FLEX_SPI_MR_MSTR_Msk & (_UINT32_(value) << FLEX_SPI_MR_MSTR_Pos)) /* Assignment of value for MSTR in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_MSTR_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_MR) SPI is in Client mode.  */
#define   FLEX_SPI_MR_MSTR_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_MR) SPI is in Host mode.  */
#define FLEX_SPI_MR_MSTR_0                    (FLEX_SPI_MR_MSTR_0_Val << FLEX_SPI_MR_MSTR_Pos)     /* (FLEX_SPI_MR) SPI is in Client mode. Position */
#define FLEX_SPI_MR_MSTR_1                    (FLEX_SPI_MR_MSTR_1_Val << FLEX_SPI_MR_MSTR_Pos)     /* (FLEX_SPI_MR) SPI is in Host mode. Position */
#define FLEX_SPI_MR_PS_Pos                    _UINT32_(1)                                          /* (FLEX_SPI_MR) Peripheral Select Position */
#define FLEX_SPI_MR_PS_Msk                    (_UINT32_(0x1) << FLEX_SPI_MR_PS_Pos)                /* (FLEX_SPI_MR) Peripheral Select Mask */
#define FLEX_SPI_MR_PS(value)                 (FLEX_SPI_MR_PS_Msk & (_UINT32_(value) << FLEX_SPI_MR_PS_Pos)) /* Assignment of value for PS in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_PS_0_Val                _UINT32_(0x0)                                        /* (FLEX_SPI_MR) Fixed Peripheral Select  */
#define   FLEX_SPI_MR_PS_1_Val                _UINT32_(0x1)                                        /* (FLEX_SPI_MR) Variable Peripheral Select  */
#define FLEX_SPI_MR_PS_0                      (FLEX_SPI_MR_PS_0_Val << FLEX_SPI_MR_PS_Pos)         /* (FLEX_SPI_MR) Fixed Peripheral Select Position */
#define FLEX_SPI_MR_PS_1                      (FLEX_SPI_MR_PS_1_Val << FLEX_SPI_MR_PS_Pos)         /* (FLEX_SPI_MR) Variable Peripheral Select Position */
#define FLEX_SPI_MR_PCSDEC_Pos                _UINT32_(2)                                          /* (FLEX_SPI_MR) Chip Select Decode Position */
#define FLEX_SPI_MR_PCSDEC_Msk                (_UINT32_(0x1) << FLEX_SPI_MR_PCSDEC_Pos)            /* (FLEX_SPI_MR) Chip Select Decode Mask */
#define FLEX_SPI_MR_PCSDEC(value)             (FLEX_SPI_MR_PCSDEC_Msk & (_UINT32_(value) << FLEX_SPI_MR_PCSDEC_Pos)) /* Assignment of value for PCSDEC in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_PCSDEC_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_MR) The chip selects are directly connected to a peripheral device.  */
#define   FLEX_SPI_MR_PCSDEC_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_MR) The four NPCS chip select lines are connected to a 4- to 16-bit decoder.  */
#define FLEX_SPI_MR_PCSDEC_0                  (FLEX_SPI_MR_PCSDEC_0_Val << FLEX_SPI_MR_PCSDEC_Pos) /* (FLEX_SPI_MR) The chip selects are directly connected to a peripheral device. Position */
#define FLEX_SPI_MR_PCSDEC_1                  (FLEX_SPI_MR_PCSDEC_1_Val << FLEX_SPI_MR_PCSDEC_Pos) /* (FLEX_SPI_MR) The four NPCS chip select lines are connected to a 4- to 16-bit decoder. Position */
#define FLEX_SPI_MR_BRSRCCLK_Pos              _UINT32_(3)                                          /* (FLEX_SPI_MR) Bit Rate Source Clock Position */
#define FLEX_SPI_MR_BRSRCCLK_Msk              (_UINT32_(0x1) << FLEX_SPI_MR_BRSRCCLK_Pos)          /* (FLEX_SPI_MR) Bit Rate Source Clock Mask */
#define FLEX_SPI_MR_BRSRCCLK(value)           (FLEX_SPI_MR_BRSRCCLK_Msk & (_UINT32_(value) << FLEX_SPI_MR_BRSRCCLK_Pos)) /* Assignment of value for BRSRCCLK in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_BRSRCCLK_PERIPH_CLK_Val _UINT32_(0x0)                                        /* (FLEX_SPI_MR) The peripheral clock is the source clock for the bit rate generation.  */
#define   FLEX_SPI_MR_BRSRCCLK_GCLK_Val       _UINT32_(0x1)                                        /* (FLEX_SPI_MR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define FLEX_SPI_MR_BRSRCCLK_PERIPH_CLK       (FLEX_SPI_MR_BRSRCCLK_PERIPH_CLK_Val << FLEX_SPI_MR_BRSRCCLK_Pos) /* (FLEX_SPI_MR) The peripheral clock is the source clock for the bit rate generation. Position */
#define FLEX_SPI_MR_BRSRCCLK_GCLK             (FLEX_SPI_MR_BRSRCCLK_GCLK_Val << FLEX_SPI_MR_BRSRCCLK_Pos) /* (FLEX_SPI_MR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position */
#define FLEX_SPI_MR_MODFDIS_Pos               _UINT32_(4)                                          /* (FLEX_SPI_MR) Mode Fault Detection Position */
#define FLEX_SPI_MR_MODFDIS_Msk               (_UINT32_(0x1) << FLEX_SPI_MR_MODFDIS_Pos)           /* (FLEX_SPI_MR) Mode Fault Detection Mask */
#define FLEX_SPI_MR_MODFDIS(value)            (FLEX_SPI_MR_MODFDIS_Msk & (_UINT32_(value) << FLEX_SPI_MR_MODFDIS_Pos)) /* Assignment of value for MODFDIS in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_MODFDIS_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_MR) Mode fault detection is enabled.  */
#define   FLEX_SPI_MR_MODFDIS_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_MR) Mode fault detection is disabled.  */
#define FLEX_SPI_MR_MODFDIS_0                 (FLEX_SPI_MR_MODFDIS_0_Val << FLEX_SPI_MR_MODFDIS_Pos) /* (FLEX_SPI_MR) Mode fault detection is enabled. Position */
#define FLEX_SPI_MR_MODFDIS_1                 (FLEX_SPI_MR_MODFDIS_1_Val << FLEX_SPI_MR_MODFDIS_Pos) /* (FLEX_SPI_MR) Mode fault detection is disabled. Position */
#define FLEX_SPI_MR_WDRBT_Pos                 _UINT32_(5)                                          /* (FLEX_SPI_MR) Wait Data Read Before Transfer Position */
#define FLEX_SPI_MR_WDRBT_Msk                 (_UINT32_(0x1) << FLEX_SPI_MR_WDRBT_Pos)             /* (FLEX_SPI_MR) Wait Data Read Before Transfer Mask */
#define FLEX_SPI_MR_WDRBT(value)              (FLEX_SPI_MR_WDRBT_Msk & (_UINT32_(value) << FLEX_SPI_MR_WDRBT_Pos)) /* Assignment of value for WDRBT in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_WDRBT_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_MR) No Effect. In Host mode, a transfer can be initiated regardless of the FLEX_SPI_RDR state.  */
#define   FLEX_SPI_MR_WDRBT_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_MR) In Host mode, a transfer can start only if FLEX_SPI_RDR is empty, i.e., does not contain any unread data. This mode prevents overrun error in reception.  */
#define FLEX_SPI_MR_WDRBT_0                   (FLEX_SPI_MR_WDRBT_0_Val << FLEX_SPI_MR_WDRBT_Pos)   /* (FLEX_SPI_MR) No Effect. In Host mode, a transfer can be initiated regardless of the FLEX_SPI_RDR state. Position */
#define FLEX_SPI_MR_WDRBT_1                   (FLEX_SPI_MR_WDRBT_1_Val << FLEX_SPI_MR_WDRBT_Pos)   /* (FLEX_SPI_MR) In Host mode, a transfer can start only if FLEX_SPI_RDR is empty, i.e., does not contain any unread data. This mode prevents overrun error in reception. Position */
#define FLEX_SPI_MR_LLB_Pos                   _UINT32_(7)                                          /* (FLEX_SPI_MR) Local Loopback Enable Position */
#define FLEX_SPI_MR_LLB_Msk                   (_UINT32_(0x1) << FLEX_SPI_MR_LLB_Pos)               /* (FLEX_SPI_MR) Local Loopback Enable Mask */
#define FLEX_SPI_MR_LLB(value)                (FLEX_SPI_MR_LLB_Msk & (_UINT32_(value) << FLEX_SPI_MR_LLB_Pos)) /* Assignment of value for LLB in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_LLB_0_Val               _UINT32_(0x0)                                        /* (FLEX_SPI_MR) Local loopback path disabled.  */
#define   FLEX_SPI_MR_LLB_1_Val               _UINT32_(0x1)                                        /* (FLEX_SPI_MR) Local loopback path enabled.  */
#define FLEX_SPI_MR_LLB_0                     (FLEX_SPI_MR_LLB_0_Val << FLEX_SPI_MR_LLB_Pos)       /* (FLEX_SPI_MR) Local loopback path disabled. Position */
#define FLEX_SPI_MR_LLB_1                     (FLEX_SPI_MR_LLB_1_Val << FLEX_SPI_MR_LLB_Pos)       /* (FLEX_SPI_MR) Local loopback path enabled. Position */
#define FLEX_SPI_MR_LSBHALF_Pos               _UINT32_(8)                                          /* (FLEX_SPI_MR) Last Bit Half Period Compatibility Position */
#define FLEX_SPI_MR_LSBHALF_Msk               (_UINT32_(0x1) << FLEX_SPI_MR_LSBHALF_Pos)           /* (FLEX_SPI_MR) Last Bit Half Period Compatibility Mask */
#define FLEX_SPI_MR_LSBHALF(value)            (FLEX_SPI_MR_LSBHALF_Msk & (_UINT32_(value) << FLEX_SPI_MR_LSBHALF_Pos)) /* Assignment of value for LSBHALF in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_LSBHALF_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_MR) Normal SPI mode of operation: all bits have a 1-bit time duration (standard SPI mode)  */
#define   FLEX_SPI_MR_LSBHALF_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_MR) Compatibility mode when connected to an SPI client having only a half bit period duration time for the last bit of the frame (non-standard SPI mode)  */
#define FLEX_SPI_MR_LSBHALF_0                 (FLEX_SPI_MR_LSBHALF_0_Val << FLEX_SPI_MR_LSBHALF_Pos) /* (FLEX_SPI_MR) Normal SPI mode of operation: all bits have a 1-bit time duration (standard SPI mode) Position */
#define FLEX_SPI_MR_LSBHALF_1                 (FLEX_SPI_MR_LSBHALF_1_Val << FLEX_SPI_MR_LSBHALF_Pos) /* (FLEX_SPI_MR) Compatibility mode when connected to an SPI client having only a half bit period duration time for the last bit of the frame (non-standard SPI mode) Position */
#define FLEX_SPI_MR_MLCE_Pos                  _UINT32_(10)                                         /* (FLEX_SPI_MR) MOSI Line Check Enable Position */
#define FLEX_SPI_MR_MLCE_Msk                  (_UINT32_(0x1) << FLEX_SPI_MR_MLCE_Pos)              /* (FLEX_SPI_MR) MOSI Line Check Enable Mask */
#define FLEX_SPI_MR_MLCE(value)               (FLEX_SPI_MR_MLCE_Msk & (_UINT32_(value) << FLEX_SPI_MR_MLCE_Pos)) /* Assignment of value for MLCE in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_MLCE_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_MR) Disables the MOSI line check.  */
#define   FLEX_SPI_MR_MLCE_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_MR) Enables the MOSI line check during a character transfer.  */
#define FLEX_SPI_MR_MLCE_0                    (FLEX_SPI_MR_MLCE_0_Val << FLEX_SPI_MR_MLCE_Pos)     /* (FLEX_SPI_MR) Disables the MOSI line check. Position */
#define FLEX_SPI_MR_MLCE_1                    (FLEX_SPI_MR_MLCE_1_Val << FLEX_SPI_MR_MLCE_Pos)     /* (FLEX_SPI_MR) Enables the MOSI line check during a character transfer. Position */
#define FLEX_SPI_MR_CMPMODE_Pos               _UINT32_(12)                                         /* (FLEX_SPI_MR) Comparison Mode Position */
#define FLEX_SPI_MR_CMPMODE_Msk               (_UINT32_(0x1) << FLEX_SPI_MR_CMPMODE_Pos)           /* (FLEX_SPI_MR) Comparison Mode Mask */
#define FLEX_SPI_MR_CMPMODE(value)            (FLEX_SPI_MR_CMPMODE_Msk & (_UINT32_(value) << FLEX_SPI_MR_CMPMODE_Pos)) /* Assignment of value for CMPMODE in the FLEX_SPI_MR register */
#define   FLEX_SPI_MR_CMPMODE_FLAG_ONLY_Val   _UINT32_(0x0)                                        /* (FLEX_SPI_MR) Any character is received and comparison function drives CMP flag.  */
#define   FLEX_SPI_MR_CMPMODE_START_CONDITION_Val _UINT32_(0x1)                                        /* (FLEX_SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set.  */
#define FLEX_SPI_MR_CMPMODE_FLAG_ONLY         (FLEX_SPI_MR_CMPMODE_FLAG_ONLY_Val << FLEX_SPI_MR_CMPMODE_Pos) /* (FLEX_SPI_MR) Any character is received and comparison function drives CMP flag. Position */
#define FLEX_SPI_MR_CMPMODE_START_CONDITION   (FLEX_SPI_MR_CMPMODE_START_CONDITION_Val << FLEX_SPI_MR_CMPMODE_Pos) /* (FLEX_SPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set. Position */
#define FLEX_SPI_MR_PCS_Pos                   _UINT32_(16)                                         /* (FLEX_SPI_MR) Peripheral Chip Select Position */
#define FLEX_SPI_MR_PCS_Msk                   (_UINT32_(0xF) << FLEX_SPI_MR_PCS_Pos)               /* (FLEX_SPI_MR) Peripheral Chip Select Mask */
#define FLEX_SPI_MR_PCS(value)                (FLEX_SPI_MR_PCS_Msk & (_UINT32_(value) << FLEX_SPI_MR_PCS_Pos)) /* Assignment of value for PCS in the FLEX_SPI_MR register */
#define FLEX_SPI_MR_DLYBCS_Pos                _UINT32_(24)                                         /* (FLEX_SPI_MR) Delay Between Chip Selects Position */
#define FLEX_SPI_MR_DLYBCS_Msk                (_UINT32_(0xFF) << FLEX_SPI_MR_DLYBCS_Pos)           /* (FLEX_SPI_MR) Delay Between Chip Selects Mask */
#define FLEX_SPI_MR_DLYBCS(value)             (FLEX_SPI_MR_DLYBCS_Msk & (_UINT32_(value) << FLEX_SPI_MR_DLYBCS_Pos)) /* Assignment of value for DLYBCS in the FLEX_SPI_MR register */
#define FLEX_SPI_MR_Msk                       _UINT32_(0xFF0F15BF)                                 /* (FLEX_SPI_MR) Register Mask  */


/* -------- FLEX_SPI_RDR : (FLEXCOM Offset: 0x408) ( R/ 32) SPI Receive Data Register -------- */
#define FLEX_SPI_RDR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_SPI_RDR) SPI Receive Data Register  Reset Value */

#define FLEX_SPI_RDR_RD_Pos                   _UINT32_(0)                                          /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_RD_Msk                   (_UINT32_(0xFFFF) << FLEX_SPI_RDR_RD_Pos)            /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_RD(value)                (FLEX_SPI_RDR_RD_Msk & (_UINT32_(value) << FLEX_SPI_RDR_RD_Pos)) /* Assignment of value for RD in the FLEX_SPI_RDR register */
#define FLEX_SPI_RDR_PCS_Pos                  _UINT32_(16)                                         /* (FLEX_SPI_RDR) Peripheral Chip Select Position */
#define FLEX_SPI_RDR_PCS_Msk                  (_UINT32_(0xF) << FLEX_SPI_RDR_PCS_Pos)              /* (FLEX_SPI_RDR) Peripheral Chip Select Mask */
#define FLEX_SPI_RDR_PCS(value)               (FLEX_SPI_RDR_PCS_Msk & (_UINT32_(value) << FLEX_SPI_RDR_PCS_Pos)) /* Assignment of value for PCS in the FLEX_SPI_RDR register */
#define FLEX_SPI_RDR_Msk                      _UINT32_(0x000FFFFF)                                 /* (FLEX_SPI_RDR) Register Mask  */

/* FIFO_MULTI_DATA_16 mode */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos _UINT32_(0)                                          /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD0_Msk (_UINT32_(0xFFFF) << FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos) /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD0(value) (FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD0_Msk & (_UINT32_(value) << FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos))
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos _UINT32_(16)                                         /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD1_Msk (_UINT32_(0xFFFF) << FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos) /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD1(value) (FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD1_Msk & (_UINT32_(value) << FLEX_SPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos))
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_16_Msk   _UINT32_(0xFFFFFFFF)                                 /* (FLEX_SPI_RDR_FIFO_MULTI_DATA_16) Register Mask  */

/* FIFO_MULTI_DATA_8 mode */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos _UINT32_(0)                                          /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD0_Msk (_UINT32_(0xFF) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos) /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD0(value) (FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD0_Msk & (_UINT32_(value) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos))
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos _UINT32_(8)                                          /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD1_Msk (_UINT32_(0xFF) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos) /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD1(value) (FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD1_Msk & (_UINT32_(value) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos))
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos _UINT32_(16)                                         /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD2_Msk (_UINT32_(0xFF) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos) /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD2(value) (FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD2_Msk & (_UINT32_(value) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos))
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos _UINT32_(24)                                         /* (FLEX_SPI_RDR) Receive Data Position */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD3_Msk (_UINT32_(0xFF) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos) /* (FLEX_SPI_RDR) Receive Data Mask */
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD3(value) (FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD3_Msk & (_UINT32_(value) << FLEX_SPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos))
#define FLEX_SPI_RDR_FIFO_MULTI_DATA_8_Msk    _UINT32_(0xFFFFFFFF)                                 /* (FLEX_SPI_RDR_FIFO_MULTI_DATA_8) Register Mask  */


/* -------- FLEX_SPI_TDR : (FLEXCOM Offset: 0x40C) ( /W 32) SPI Transmit Data Register -------- */
#define FLEX_SPI_TDR_TD_Pos                   _UINT32_(0)                                          /* (FLEX_SPI_TDR) Transmit Data Position */
#define FLEX_SPI_TDR_TD_Msk                   (_UINT32_(0xFFFF) << FLEX_SPI_TDR_TD_Pos)            /* (FLEX_SPI_TDR) Transmit Data Mask */
#define FLEX_SPI_TDR_TD(value)                (FLEX_SPI_TDR_TD_Msk & (_UINT32_(value) << FLEX_SPI_TDR_TD_Pos)) /* Assignment of value for TD in the FLEX_SPI_TDR register */
#define FLEX_SPI_TDR_PCS_Pos                  _UINT32_(16)                                         /* (FLEX_SPI_TDR) Peripheral Chip Select Position */
#define FLEX_SPI_TDR_PCS_Msk                  (_UINT32_(0xF) << FLEX_SPI_TDR_PCS_Pos)              /* (FLEX_SPI_TDR) Peripheral Chip Select Mask */
#define FLEX_SPI_TDR_PCS(value)               (FLEX_SPI_TDR_PCS_Msk & (_UINT32_(value) << FLEX_SPI_TDR_PCS_Pos)) /* Assignment of value for PCS in the FLEX_SPI_TDR register */
#define FLEX_SPI_TDR_LASTXFER_Pos             _UINT32_(24)                                         /* (FLEX_SPI_TDR) Last Transfer Position */
#define FLEX_SPI_TDR_LASTXFER_Msk             (_UINT32_(0x1) << FLEX_SPI_TDR_LASTXFER_Pos)         /* (FLEX_SPI_TDR) Last Transfer Mask */
#define FLEX_SPI_TDR_LASTXFER(value)          (FLEX_SPI_TDR_LASTXFER_Msk & (_UINT32_(value) << FLEX_SPI_TDR_LASTXFER_Pos)) /* Assignment of value for LASTXFER in the FLEX_SPI_TDR register */
#define   FLEX_SPI_TDR_LASTXFER_0_Val         _UINT32_(0x0)                                        /* (FLEX_SPI_TDR) No effect.  */
#define   FLEX_SPI_TDR_LASTXFER_1_Val         _UINT32_(0x1)                                        /* (FLEX_SPI_TDR) The current NPCS is de-asserted after the transfer of the character written in TD. When FLEX_SPI_CSRx.CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed.  */
#define FLEX_SPI_TDR_LASTXFER_0               (FLEX_SPI_TDR_LASTXFER_0_Val << FLEX_SPI_TDR_LASTXFER_Pos) /* (FLEX_SPI_TDR) No effect. Position */
#define FLEX_SPI_TDR_LASTXFER_1               (FLEX_SPI_TDR_LASTXFER_1_Val << FLEX_SPI_TDR_LASTXFER_Pos) /* (FLEX_SPI_TDR) The current NPCS is de-asserted after the transfer of the character written in TD. When FLEX_SPI_CSRx.CSAAT is set, the communication with the current serial peripheral can be closed by raising the corresponding NPCS line as soon as TD transfer is completed. Position */
#define FLEX_SPI_TDR_Msk                      _UINT32_(0x010FFFFF)                                 /* (FLEX_SPI_TDR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Pos  _UINT32_(0)                                          /* (FLEX_SPI_TDR) Transmit Data Position */
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Msk  (_UINT32_(0xFFFF) << FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Pos) /* (FLEX_SPI_TDR) Transmit Data Mask */
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0(value) (FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Msk & (_UINT32_(value) << FLEX_SPI_TDR_FIFO_MULTI_DATA_TD0_Pos))
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Pos  _UINT32_(16)                                         /* (FLEX_SPI_TDR) Transmit Data Position */
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Msk  (_UINT32_(0xFFFF) << FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Pos) /* (FLEX_SPI_TDR) Transmit Data Mask */
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1(value) (FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Msk & (_UINT32_(value) << FLEX_SPI_TDR_FIFO_MULTI_DATA_TD1_Pos))
#define FLEX_SPI_TDR_FIFO_MULTI_DATA_Msk      _UINT32_(0xFFFFFFFF)                                 /* (FLEX_SPI_TDR_FIFO_MULTI_DATA) Register Mask  */


/* -------- FLEX_SPI_SR : (FLEXCOM Offset: 0x410) ( R/ 32) SPI Status Register -------- */
#define FLEX_SPI_SR_RESETVALUE                _UINT32_(0x00)                                       /*  (FLEX_SPI_SR) SPI Status Register  Reset Value */

#define FLEX_SPI_SR_RDRF_Pos                  _UINT32_(0)                                          /* (FLEX_SPI_SR) Receive Data Register Full (cleared by reading FLEX_SPI_RDR) Position */
#define FLEX_SPI_SR_RDRF_Msk                  (_UINT32_(0x1) << FLEX_SPI_SR_RDRF_Pos)              /* (FLEX_SPI_SR) Receive Data Register Full (cleared by reading FLEX_SPI_RDR) Mask */
#define FLEX_SPI_SR_RDRF(value)               (FLEX_SPI_SR_RDRF_Msk & (_UINT32_(value) << FLEX_SPI_SR_RDRF_Pos)) /* Assignment of value for RDRF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_RDRF_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_SR) FIFO Disabled: No data has been received since the last read of FLEX_SPI_RDR. FIFO Enabled: Receive FIFO is empty; no data to read  */
#define   FLEX_SPI_SR_RDRF_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_SR) FIFO Disabled: Data has been received and the received data has been transferred from the internal shift register to FLEX_SPI_RDR since the last read of FLEX_SPI_RDR. FIFO Enabled: At least one unread data is in the Receive FIFO  */
#define FLEX_SPI_SR_RDRF_0                    (FLEX_SPI_SR_RDRF_0_Val << FLEX_SPI_SR_RDRF_Pos)     /* (FLEX_SPI_SR) FIFO Disabled: No data has been received since the last read of FLEX_SPI_RDR. FIFO Enabled: Receive FIFO is empty; no data to read Position */
#define FLEX_SPI_SR_RDRF_1                    (FLEX_SPI_SR_RDRF_1_Val << FLEX_SPI_SR_RDRF_Pos)     /* (FLEX_SPI_SR) FIFO Disabled: Data has been received and the received data has been transferred from the internal shift register to FLEX_SPI_RDR since the last read of FLEX_SPI_RDR. FIFO Enabled: At least one unread data is in the Receive FIFO Position */
#define FLEX_SPI_SR_TDRE_Pos                  _UINT32_(1)                                          /* (FLEX_SPI_SR) Transmit Data Register Empty (cleared by writing FLEX_SPI_TDR) Position */
#define FLEX_SPI_SR_TDRE_Msk                  (_UINT32_(0x1) << FLEX_SPI_SR_TDRE_Pos)              /* (FLEX_SPI_SR) Transmit Data Register Empty (cleared by writing FLEX_SPI_TDR) Mask */
#define FLEX_SPI_SR_TDRE(value)               (FLEX_SPI_SR_TDRE_Msk & (_UINT32_(value) << FLEX_SPI_SR_TDRE_Pos)) /* Assignment of value for TDRE in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_TDRE_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_SR) FIFO Disabled: Data has been written to FLEX_SPI_TDR and not yet transferred to the internal shift register. FIFO Enabled: Transmit FIFO cannot accept more data.  */
#define   FLEX_SPI_SR_TDRE_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_SR) FIFO Disabled: The last data written to FLEX_SPI_TDR has been transferred to the internal shift register. FIFO Enabled: Transmit FIFO can accept data; one or more data can be written according to TXRDYM field configuration.  */
#define FLEX_SPI_SR_TDRE_0                    (FLEX_SPI_SR_TDRE_0_Val << FLEX_SPI_SR_TDRE_Pos)     /* (FLEX_SPI_SR) FIFO Disabled: Data has been written to FLEX_SPI_TDR and not yet transferred to the internal shift register. FIFO Enabled: Transmit FIFO cannot accept more data. Position */
#define FLEX_SPI_SR_TDRE_1                    (FLEX_SPI_SR_TDRE_1_Val << FLEX_SPI_SR_TDRE_Pos)     /* (FLEX_SPI_SR) FIFO Disabled: The last data written to FLEX_SPI_TDR has been transferred to the internal shift register. FIFO Enabled: Transmit FIFO can accept data; one or more data can be written according to TXRDYM field configuration. Position */
#define FLEX_SPI_SR_MODF_Pos                  _UINT32_(2)                                          /* (FLEX_SPI_SR) Mode Fault Error (cleared on read) Position */
#define FLEX_SPI_SR_MODF_Msk                  (_UINT32_(0x1) << FLEX_SPI_SR_MODF_Pos)              /* (FLEX_SPI_SR) Mode Fault Error (cleared on read) Mask */
#define FLEX_SPI_SR_MODF(value)               (FLEX_SPI_SR_MODF_Msk & (_UINT32_(value) << FLEX_SPI_SR_MODF_Pos)) /* Assignment of value for MODF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_MODF_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No mode fault has been detected since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_MODF_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_SR) A mode fault occurred since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_MODF_0                    (FLEX_SPI_SR_MODF_0_Val << FLEX_SPI_SR_MODF_Pos)     /* (FLEX_SPI_SR) No mode fault has been detected since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_MODF_1                    (FLEX_SPI_SR_MODF_1_Val << FLEX_SPI_SR_MODF_Pos)     /* (FLEX_SPI_SR) A mode fault occurred since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_OVRES_Pos                 _UINT32_(3)                                          /* (FLEX_SPI_SR) Overrun Error Status (cleared on read) Position */
#define FLEX_SPI_SR_OVRES_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_OVRES_Pos)             /* (FLEX_SPI_SR) Overrun Error Status (cleared on read) Mask */
#define FLEX_SPI_SR_OVRES(value)              (FLEX_SPI_SR_OVRES_Msk & (_UINT32_(value) << FLEX_SPI_SR_OVRES_Pos)) /* Assignment of value for OVRES in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_OVRES_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No overrun has been detected since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_OVRES_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) An overrun has occurred since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_OVRES_0                   (FLEX_SPI_SR_OVRES_0_Val << FLEX_SPI_SR_OVRES_Pos)   /* (FLEX_SPI_SR) No overrun has been detected since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_OVRES_1                   (FLEX_SPI_SR_OVRES_1_Val << FLEX_SPI_SR_OVRES_Pos)   /* (FLEX_SPI_SR) An overrun has occurred since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_NSSR_Pos                  _UINT32_(8)                                          /* (FLEX_SPI_SR) NSS Rising (cleared on read) Position */
#define FLEX_SPI_SR_NSSR_Msk                  (_UINT32_(0x1) << FLEX_SPI_SR_NSSR_Pos)              /* (FLEX_SPI_SR) NSS Rising (cleared on read) Mask */
#define FLEX_SPI_SR_NSSR(value)               (FLEX_SPI_SR_NSSR_Msk & (_UINT32_(value) << FLEX_SPI_SR_NSSR_Pos)) /* Assignment of value for NSSR in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_NSSR_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No rising edge detected on NSS pin since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_NSSR_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_SR) A rising edge occurred on NSS pin since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_NSSR_0                    (FLEX_SPI_SR_NSSR_0_Val << FLEX_SPI_SR_NSSR_Pos)     /* (FLEX_SPI_SR) No rising edge detected on NSS pin since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_NSSR_1                    (FLEX_SPI_SR_NSSR_1_Val << FLEX_SPI_SR_NSSR_Pos)     /* (FLEX_SPI_SR) A rising edge occurred on NSS pin since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_TXEMPTY_Pos               _UINT32_(9)                                          /* (FLEX_SPI_SR) Transmission Registers Empty (cleared by writing FLEX_SPI_TDR) Position */
#define FLEX_SPI_SR_TXEMPTY_Msk               (_UINT32_(0x1) << FLEX_SPI_SR_TXEMPTY_Pos)           /* (FLEX_SPI_SR) Transmission Registers Empty (cleared by writing FLEX_SPI_TDR) Mask */
#define FLEX_SPI_SR_TXEMPTY(value)            (FLEX_SPI_SR_TXEMPTY_Msk & (_UINT32_(value) << FLEX_SPI_SR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_TXEMPTY_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_SR) As soon as data is written in FLEX_SPI_TDR.  */
#define   FLEX_SPI_SR_TXEMPTY_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_SR) FLEX_SPI_TDR and internal shift register are empty. If a transfer delay has been defined, TXEMPTY is set after the end of this delay.  */
#define FLEX_SPI_SR_TXEMPTY_0                 (FLEX_SPI_SR_TXEMPTY_0_Val << FLEX_SPI_SR_TXEMPTY_Pos) /* (FLEX_SPI_SR) As soon as data is written in FLEX_SPI_TDR. Position */
#define FLEX_SPI_SR_TXEMPTY_1                 (FLEX_SPI_SR_TXEMPTY_1_Val << FLEX_SPI_SR_TXEMPTY_Pos) /* (FLEX_SPI_SR) FLEX_SPI_TDR and internal shift register are empty. If a transfer delay has been defined, TXEMPTY is set after the end of this delay. Position */
#define FLEX_SPI_SR_UNDES_Pos                 _UINT32_(10)                                         /* (FLEX_SPI_SR) Underrun Error Status (Client mode only) (cleared on read) Position */
#define FLEX_SPI_SR_UNDES_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_UNDES_Pos)             /* (FLEX_SPI_SR) Underrun Error Status (Client mode only) (cleared on read) Mask */
#define FLEX_SPI_SR_UNDES(value)              (FLEX_SPI_SR_UNDES_Msk & (_UINT32_(value) << FLEX_SPI_SR_UNDES_Pos)) /* Assignment of value for UNDES in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_UNDES_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No underrun has been detected since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_UNDES_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) A transfer starts whereas no data has been loaded in FLEX_SPI_TDR, cleared when FLEX_SPI_SR is read.  */
#define FLEX_SPI_SR_UNDES_0                   (FLEX_SPI_SR_UNDES_0_Val << FLEX_SPI_SR_UNDES_Pos)   /* (FLEX_SPI_SR) No underrun has been detected since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_UNDES_1                   (FLEX_SPI_SR_UNDES_1_Val << FLEX_SPI_SR_UNDES_Pos)   /* (FLEX_SPI_SR) A transfer starts whereas no data has been loaded in FLEX_SPI_TDR, cleared when FLEX_SPI_SR is read. Position */
#define FLEX_SPI_SR_CMP_Pos                   _UINT32_(11)                                         /* (FLEX_SPI_SR) Comparison Status (cleared on read) Position */
#define FLEX_SPI_SR_CMP_Msk                   (_UINT32_(0x1) << FLEX_SPI_SR_CMP_Pos)               /* (FLEX_SPI_SR) Comparison Status (cleared on read) Mask */
#define FLEX_SPI_SR_CMP(value)                (FLEX_SPI_SR_CMP_Msk & (_UINT32_(value) << FLEX_SPI_SR_CMP_Pos)) /* Assignment of value for CMP in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_CMP_0_Val               _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No received character matched the comparison criteria programmed in VAL1 and VAL2 fields in FLEX_SPI_CMPR since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_CMP_1_Val               _UINT32_(0x1)                                        /* (FLEX_SPI_SR) A received character matched the comparison criteria since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_CMP_0                     (FLEX_SPI_SR_CMP_0_Val << FLEX_SPI_SR_CMP_Pos)       /* (FLEX_SPI_SR) No received character matched the comparison criteria programmed in VAL1 and VAL2 fields in FLEX_SPI_CMPR since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_CMP_1                     (FLEX_SPI_SR_CMP_1_Val << FLEX_SPI_SR_CMP_Pos)       /* (FLEX_SPI_SR) A received character matched the comparison criteria since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_SFERR_Pos                 _UINT32_(12)                                         /* (FLEX_SPI_SR) Client Mode Frame Error (cleared on read) Position */
#define FLEX_SPI_SR_SFERR_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_SFERR_Pos)             /* (FLEX_SPI_SR) Client Mode Frame Error (cleared on read) Mask */
#define FLEX_SPI_SR_SFERR(value)              (FLEX_SPI_SR_SFERR_Msk & (_UINT32_(value) << FLEX_SPI_SR_SFERR_Pos)) /* Assignment of value for SFERR in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_SFERR_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No frame error has been detected for a client access since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_SFERR_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) In Client mode, the chip select raised while the character defined in FLEX_SPI_CSR0.BITS was not complete.  */
#define FLEX_SPI_SR_SFERR_0                   (FLEX_SPI_SR_SFERR_0_Val << FLEX_SPI_SR_SFERR_Pos)   /* (FLEX_SPI_SR) No frame error has been detected for a client access since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_SFERR_1                   (FLEX_SPI_SR_SFERR_1_Val << FLEX_SPI_SR_SFERR_Pos)   /* (FLEX_SPI_SR) In Client mode, the chip select raised while the character defined in FLEX_SPI_CSR0.BITS was not complete. Position */
#define FLEX_SPI_SR_SECE_Pos                  _UINT32_(14)                                         /* (FLEX_SPI_SR) Security/Safety Error (cleared on read) Position */
#define FLEX_SPI_SR_SECE_Msk                  (_UINT32_(0x1) << FLEX_SPI_SR_SECE_Pos)              /* (FLEX_SPI_SR) Security/Safety Error (cleared on read) Mask */
#define FLEX_SPI_SR_SECE(value)               (FLEX_SPI_SR_SECE_Msk & (_UINT32_(value) << FLEX_SPI_SR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_SECE_0_Val              _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No error detected on NPCS0/MOSI and/or SPCK pad output and no access violation of a write-protected register since the last read of FLEX_SPI_SR.  */
#define   FLEX_SPI_SR_SECE_1_Val              _UINT32_(0x1)                                        /* (FLEX_SPI_SR) An error has been detected on TXD and/or SCK pad output (FLEX_SPI_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_SPI_WPSR.WPVS=1) since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_SECE_0                    (FLEX_SPI_SR_SECE_0_Val << FLEX_SPI_SR_SECE_Pos)     /* (FLEX_SPI_SR) No error detected on NPCS0/MOSI and/or SPCK pad output and no access violation of a write-protected register since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_SECE_1                    (FLEX_SPI_SR_SECE_1_Val << FLEX_SPI_SR_SECE_Pos)     /* (FLEX_SPI_SR) An error has been detected on TXD and/or SCK pad output (FLEX_SPI_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_SPI_WPSR.WPVS=1) since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_SPIENS_Pos                _UINT32_(16)                                         /* (FLEX_SPI_SR) SPI Enable Status Position */
#define FLEX_SPI_SR_SPIENS_Msk                (_UINT32_(0x1) << FLEX_SPI_SR_SPIENS_Pos)            /* (FLEX_SPI_SR) SPI Enable Status Mask */
#define FLEX_SPI_SR_SPIENS(value)             (FLEX_SPI_SR_SPIENS_Msk & (_UINT32_(value) << FLEX_SPI_SR_SPIENS_Pos)) /* Assignment of value for SPIENS in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_SPIENS_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_SR) SPI is disabled.  */
#define   FLEX_SPI_SR_SPIENS_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_SR) SPI is enabled.  */
#define FLEX_SPI_SR_SPIENS_0                  (FLEX_SPI_SR_SPIENS_0_Val << FLEX_SPI_SR_SPIENS_Pos) /* (FLEX_SPI_SR) SPI is disabled. Position */
#define FLEX_SPI_SR_SPIENS_1                  (FLEX_SPI_SR_SPIENS_1_Val << FLEX_SPI_SR_SPIENS_Pos) /* (FLEX_SPI_SR) SPI is enabled. Position */
#define FLEX_SPI_SR_TXFEF_Pos                 _UINT32_(24)                                         /* (FLEX_SPI_SR) Transmit FIFO Empty Flag (cleared on read) Position */
#define FLEX_SPI_SR_TXFEF_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_TXFEF_Pos)             /* (FLEX_SPI_SR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define FLEX_SPI_SR_TXFEF(value)              (FLEX_SPI_SR_TXFEF_Msk & (_UINT32_(value) << FLEX_SPI_SR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_TXFEF_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) Transmit FIFO is not empty.  */
#define   FLEX_SPI_SR_TXFEF_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Transmit FIFO has been emptied since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_TXFEF_0                   (FLEX_SPI_SR_TXFEF_0_Val << FLEX_SPI_SR_TXFEF_Pos)   /* (FLEX_SPI_SR) Transmit FIFO is not empty. Position */
#define FLEX_SPI_SR_TXFEF_1                   (FLEX_SPI_SR_TXFEF_1_Val << FLEX_SPI_SR_TXFEF_Pos)   /* (FLEX_SPI_SR) Transmit FIFO has been emptied since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_TXFFF_Pos                 _UINT32_(25)                                         /* (FLEX_SPI_SR) Transmit FIFO Full Flag (cleared on read) Position */
#define FLEX_SPI_SR_TXFFF_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_TXFFF_Pos)             /* (FLEX_SPI_SR) Transmit FIFO Full Flag (cleared on read) Mask */
#define FLEX_SPI_SR_TXFFF(value)              (FLEX_SPI_SR_TXFFF_Msk & (_UINT32_(value) << FLEX_SPI_SR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_TXFFF_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) Transmit FIFO is not full or TXFF flag has been cleared.  */
#define   FLEX_SPI_SR_TXFFF_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Transmit FIFO has been filled since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_TXFFF_0                   (FLEX_SPI_SR_TXFFF_0_Val << FLEX_SPI_SR_TXFFF_Pos)   /* (FLEX_SPI_SR) Transmit FIFO is not full or TXFF flag has been cleared. Position */
#define FLEX_SPI_SR_TXFFF_1                   (FLEX_SPI_SR_TXFFF_1_Val << FLEX_SPI_SR_TXFFF_Pos)   /* (FLEX_SPI_SR) Transmit FIFO has been filled since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_TXFTHF_Pos                _UINT32_(26)                                         /* (FLEX_SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define FLEX_SPI_SR_TXFTHF_Msk                (_UINT32_(0x1) << FLEX_SPI_SR_TXFTHF_Pos)            /* (FLEX_SPI_SR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define FLEX_SPI_SR_TXFTHF(value)             (FLEX_SPI_SR_TXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_SR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_TXFTHF_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_SR) Number of data in Transmit FIFO is above TXFTHRES threshold.  */
#define   FLEX_SPI_SR_TXFTHF_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of FLEX_SPI_SR.  */
#define FLEX_SPI_SR_TXFTHF_0                  (FLEX_SPI_SR_TXFTHF_0_Val << FLEX_SPI_SR_TXFTHF_Pos) /* (FLEX_SPI_SR) Number of data in Transmit FIFO is above TXFTHRES threshold. Position */
#define FLEX_SPI_SR_TXFTHF_1                  (FLEX_SPI_SR_TXFTHF_1_Val << FLEX_SPI_SR_TXFTHF_Pos) /* (FLEX_SPI_SR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of FLEX_SPI_SR. Position */
#define FLEX_SPI_SR_RXFEF_Pos                 _UINT32_(27)                                         /* (FLEX_SPI_SR) Receive FIFO Empty Flag Position */
#define FLEX_SPI_SR_RXFEF_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_RXFEF_Pos)             /* (FLEX_SPI_SR) Receive FIFO Empty Flag Mask */
#define FLEX_SPI_SR_RXFEF(value)              (FLEX_SPI_SR_RXFEF_Msk & (_UINT32_(value) << FLEX_SPI_SR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_RXFEF_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared.  */
#define   FLEX_SPI_SR_RXFEF_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Receive FIFO has been emptied (changing states from "not empty" to "empty").  */
#define FLEX_SPI_SR_RXFEF_0                   (FLEX_SPI_SR_RXFEF_0_Val << FLEX_SPI_SR_RXFEF_Pos)   /* (FLEX_SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared. Position */
#define FLEX_SPI_SR_RXFEF_1                   (FLEX_SPI_SR_RXFEF_1_Val << FLEX_SPI_SR_RXFEF_Pos)   /* (FLEX_SPI_SR) Receive FIFO has been emptied (changing states from "not empty" to "empty"). Position */
#define FLEX_SPI_SR_RXFFF_Pos                 _UINT32_(28)                                         /* (FLEX_SPI_SR) Receive FIFO Full Flag Position */
#define FLEX_SPI_SR_RXFFF_Msk                 (_UINT32_(0x1) << FLEX_SPI_SR_RXFFF_Pos)             /* (FLEX_SPI_SR) Receive FIFO Full Flag Mask */
#define FLEX_SPI_SR_RXFFF(value)              (FLEX_SPI_SR_RXFFF_Msk & (_UINT32_(value) << FLEX_SPI_SR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_RXFFF_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared.  */
#define   FLEX_SPI_SR_RXFFF_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Receive FIFO has been filled (changing states from "not full" to "full").  */
#define FLEX_SPI_SR_RXFFF_0                   (FLEX_SPI_SR_RXFFF_0_Val << FLEX_SPI_SR_RXFFF_Pos)   /* (FLEX_SPI_SR) Receive FIFO is not empty or RXFE flag has been cleared. Position */
#define FLEX_SPI_SR_RXFFF_1                   (FLEX_SPI_SR_RXFFF_1_Val << FLEX_SPI_SR_RXFFF_Pos)   /* (FLEX_SPI_SR) Receive FIFO has been filled (changing states from "not full" to "full"). Position */
#define FLEX_SPI_SR_RXFTHF_Pos                _UINT32_(29)                                         /* (FLEX_SPI_SR) Receive FIFO Threshold Flag Position */
#define FLEX_SPI_SR_RXFTHF_Msk                (_UINT32_(0x1) << FLEX_SPI_SR_RXFTHF_Pos)            /* (FLEX_SPI_SR) Receive FIFO Threshold Flag Mask */
#define FLEX_SPI_SR_RXFTHF(value)             (FLEX_SPI_SR_RXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_SR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_RXFTHF_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_SR) Number of unread data in Receive FIFO is below RXFTHRES threshold or RXFTH flag has been cleared.  */
#define   FLEX_SPI_SR_RXFTHF_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Number of unread data in Receive FIFO has reached RXFTHRES threshold (changing states from "below threshold" to "equal to or above threshold").  */
#define FLEX_SPI_SR_RXFTHF_0                  (FLEX_SPI_SR_RXFTHF_0_Val << FLEX_SPI_SR_RXFTHF_Pos) /* (FLEX_SPI_SR) Number of unread data in Receive FIFO is below RXFTHRES threshold or RXFTH flag has been cleared. Position */
#define FLEX_SPI_SR_RXFTHF_1                  (FLEX_SPI_SR_RXFTHF_1_Val << FLEX_SPI_SR_RXFTHF_Pos) /* (FLEX_SPI_SR) Number of unread data in Receive FIFO has reached RXFTHRES threshold (changing states from "below threshold" to "equal to or above threshold"). Position */
#define FLEX_SPI_SR_TXFPTEF_Pos               _UINT32_(30)                                         /* (FLEX_SPI_SR) Transmit FIFO Overflow Error Flag Position */
#define FLEX_SPI_SR_TXFPTEF_Msk               (_UINT32_(0x1) << FLEX_SPI_SR_TXFPTEF_Pos)           /* (FLEX_SPI_SR) Transmit FIFO Overflow Error Flag Mask */
#define FLEX_SPI_SR_TXFPTEF(value)            (FLEX_SPI_SR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_SR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_TXFPTEF_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No Transmit FIFO overflow occurred.  */
#define   FLEX_SPI_SR_TXFPTEF_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing FLEX_SPI_CR.SWRST=1.  */
#define FLEX_SPI_SR_TXFPTEF_0                 (FLEX_SPI_SR_TXFPTEF_0_Val << FLEX_SPI_SR_TXFPTEF_Pos) /* (FLEX_SPI_SR) No Transmit FIFO overflow occurred. Position */
#define FLEX_SPI_SR_TXFPTEF_1                 (FLEX_SPI_SR_TXFPTEF_1_Val << FLEX_SPI_SR_TXFPTEF_Pos) /* (FLEX_SPI_SR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing FLEX_SPI_CR.SWRST=1. Position */
#define FLEX_SPI_SR_RXFPTEF_Pos               _UINT32_(31)                                         /* (FLEX_SPI_SR) Receive FIFO Underflow Error Flag Position */
#define FLEX_SPI_SR_RXFPTEF_Msk               (_UINT32_(0x1) << FLEX_SPI_SR_RXFPTEF_Pos)           /* (FLEX_SPI_SR) Receive FIFO Underflow Error Flag Mask */
#define FLEX_SPI_SR_RXFPTEF(value)            (FLEX_SPI_SR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_SR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_SPI_SR register */
#define   FLEX_SPI_SR_RXFPTEF_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_SR) No Receive FIFO underflow occurred.  */
#define   FLEX_SPI_SR_RXFPTEF_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_SR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing FLEX_SPI_CR.SWRST=1.  */
#define FLEX_SPI_SR_RXFPTEF_0                 (FLEX_SPI_SR_RXFPTEF_0_Val << FLEX_SPI_SR_RXFPTEF_Pos) /* (FLEX_SPI_SR) No Receive FIFO underflow occurred. Position */
#define FLEX_SPI_SR_RXFPTEF_1                 (FLEX_SPI_SR_RXFPTEF_1_Val << FLEX_SPI_SR_RXFPTEF_Pos) /* (FLEX_SPI_SR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing FLEX_SPI_CR.SWRST=1. Position */
#define FLEX_SPI_SR_Msk                       _UINT32_(0xFF015F0F)                                 /* (FLEX_SPI_SR) Register Mask  */


/* -------- FLEX_SPI_IER : (FLEXCOM Offset: 0x414) ( /W 32) SPI Interrupt Enable Register -------- */
#define FLEX_SPI_IER_RDRF_Pos                 _UINT32_(0)                                          /* (FLEX_SPI_IER) Receive Data Register Full Interrupt Enable Position */
#define FLEX_SPI_IER_RDRF_Msk                 (_UINT32_(0x1) << FLEX_SPI_IER_RDRF_Pos)             /* (FLEX_SPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define FLEX_SPI_IER_RDRF(value)              (FLEX_SPI_IER_RDRF_Msk & (_UINT32_(value) << FLEX_SPI_IER_RDRF_Pos)) /* Assignment of value for RDRF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_TDRE_Pos                 _UINT32_(1)                                          /* (FLEX_SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Position */
#define FLEX_SPI_IER_TDRE_Msk                 (_UINT32_(0x1) << FLEX_SPI_IER_TDRE_Pos)             /* (FLEX_SPI_IER) SPI Transmit Data Register Empty Interrupt Enable Mask */
#define FLEX_SPI_IER_TDRE(value)              (FLEX_SPI_IER_TDRE_Msk & (_UINT32_(value) << FLEX_SPI_IER_TDRE_Pos)) /* Assignment of value for TDRE in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_MODF_Pos                 _UINT32_(2)                                          /* (FLEX_SPI_IER) Mode Fault Error Interrupt Enable Position */
#define FLEX_SPI_IER_MODF_Msk                 (_UINT32_(0x1) << FLEX_SPI_IER_MODF_Pos)             /* (FLEX_SPI_IER) Mode Fault Error Interrupt Enable Mask */
#define FLEX_SPI_IER_MODF(value)              (FLEX_SPI_IER_MODF_Msk & (_UINT32_(value) << FLEX_SPI_IER_MODF_Pos)) /* Assignment of value for MODF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_OVRES_Pos                _UINT32_(3)                                          /* (FLEX_SPI_IER) Overrun Error Interrupt Enable Position */
#define FLEX_SPI_IER_OVRES_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_OVRES_Pos)            /* (FLEX_SPI_IER) Overrun Error Interrupt Enable Mask */
#define FLEX_SPI_IER_OVRES(value)             (FLEX_SPI_IER_OVRES_Msk & (_UINT32_(value) << FLEX_SPI_IER_OVRES_Pos)) /* Assignment of value for OVRES in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_NSSR_Pos                 _UINT32_(8)                                          /* (FLEX_SPI_IER) NSS Rising Interrupt Enable Position */
#define FLEX_SPI_IER_NSSR_Msk                 (_UINT32_(0x1) << FLEX_SPI_IER_NSSR_Pos)             /* (FLEX_SPI_IER) NSS Rising Interrupt Enable Mask */
#define FLEX_SPI_IER_NSSR(value)              (FLEX_SPI_IER_NSSR_Msk & (_UINT32_(value) << FLEX_SPI_IER_NSSR_Pos)) /* Assignment of value for NSSR in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_TXEMPTY_Pos              _UINT32_(9)                                          /* (FLEX_SPI_IER) Transmission Registers Empty Enable Position */
#define FLEX_SPI_IER_TXEMPTY_Msk              (_UINT32_(0x1) << FLEX_SPI_IER_TXEMPTY_Pos)          /* (FLEX_SPI_IER) Transmission Registers Empty Enable Mask */
#define FLEX_SPI_IER_TXEMPTY(value)           (FLEX_SPI_IER_TXEMPTY_Msk & (_UINT32_(value) << FLEX_SPI_IER_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_UNDES_Pos                _UINT32_(10)                                         /* (FLEX_SPI_IER) Underrun Error Interrupt Enable Position */
#define FLEX_SPI_IER_UNDES_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_UNDES_Pos)            /* (FLEX_SPI_IER) Underrun Error Interrupt Enable Mask */
#define FLEX_SPI_IER_UNDES(value)             (FLEX_SPI_IER_UNDES_Msk & (_UINT32_(value) << FLEX_SPI_IER_UNDES_Pos)) /* Assignment of value for UNDES in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_CMP_Pos                  _UINT32_(11)                                         /* (FLEX_SPI_IER) Comparison Interrupt Enable Position */
#define FLEX_SPI_IER_CMP_Msk                  (_UINT32_(0x1) << FLEX_SPI_IER_CMP_Pos)              /* (FLEX_SPI_IER) Comparison Interrupt Enable Mask */
#define FLEX_SPI_IER_CMP(value)               (FLEX_SPI_IER_CMP_Msk & (_UINT32_(value) << FLEX_SPI_IER_CMP_Pos)) /* Assignment of value for CMP in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_SFERR_Pos                _UINT32_(12)                                         /* (FLEX_SPI_IER) Client Mode Frame Error Interrupt Enable Position */
#define FLEX_SPI_IER_SFERR_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_SFERR_Pos)            /* (FLEX_SPI_IER) Client Mode Frame Error Interrupt Enable Mask */
#define FLEX_SPI_IER_SFERR(value)             (FLEX_SPI_IER_SFERR_Msk & (_UINT32_(value) << FLEX_SPI_IER_SFERR_Pos)) /* Assignment of value for SFERR in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_SECE_Pos                 _UINT32_(14)                                         /* (FLEX_SPI_IER) Security/Safety Error Interrupt Enable Position */
#define FLEX_SPI_IER_SECE_Msk                 (_UINT32_(0x1) << FLEX_SPI_IER_SECE_Pos)             /* (FLEX_SPI_IER) Security/Safety Error Interrupt Enable Mask */
#define FLEX_SPI_IER_SECE(value)              (FLEX_SPI_IER_SECE_Msk & (_UINT32_(value) << FLEX_SPI_IER_SECE_Pos)) /* Assignment of value for SECE in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_TXFEF_Pos                _UINT32_(24)                                         /* (FLEX_SPI_IER) TXFEF Interrupt Enable Position */
#define FLEX_SPI_IER_TXFEF_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_TXFEF_Pos)            /* (FLEX_SPI_IER) TXFEF Interrupt Enable Mask */
#define FLEX_SPI_IER_TXFEF(value)             (FLEX_SPI_IER_TXFEF_Msk & (_UINT32_(value) << FLEX_SPI_IER_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_TXFFF_Pos                _UINT32_(25)                                         /* (FLEX_SPI_IER) TXFFF Interrupt Enable Position */
#define FLEX_SPI_IER_TXFFF_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_TXFFF_Pos)            /* (FLEX_SPI_IER) TXFFF Interrupt Enable Mask */
#define FLEX_SPI_IER_TXFFF(value)             (FLEX_SPI_IER_TXFFF_Msk & (_UINT32_(value) << FLEX_SPI_IER_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_TXFTHF_Pos               _UINT32_(26)                                         /* (FLEX_SPI_IER) TXFTHF Interrupt Enable Position */
#define FLEX_SPI_IER_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_SPI_IER_TXFTHF_Pos)           /* (FLEX_SPI_IER) TXFTHF Interrupt Enable Mask */
#define FLEX_SPI_IER_TXFTHF(value)            (FLEX_SPI_IER_TXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_IER_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_RXFEF_Pos                _UINT32_(27)                                         /* (FLEX_SPI_IER) RXFEF Interrupt Enable Position */
#define FLEX_SPI_IER_RXFEF_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_RXFEF_Pos)            /* (FLEX_SPI_IER) RXFEF Interrupt Enable Mask */
#define FLEX_SPI_IER_RXFEF(value)             (FLEX_SPI_IER_RXFEF_Msk & (_UINT32_(value) << FLEX_SPI_IER_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_RXFFF_Pos                _UINT32_(28)                                         /* (FLEX_SPI_IER) RXFFF Interrupt Enable Position */
#define FLEX_SPI_IER_RXFFF_Msk                (_UINT32_(0x1) << FLEX_SPI_IER_RXFFF_Pos)            /* (FLEX_SPI_IER) RXFFF Interrupt Enable Mask */
#define FLEX_SPI_IER_RXFFF(value)             (FLEX_SPI_IER_RXFFF_Msk & (_UINT32_(value) << FLEX_SPI_IER_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_RXFTHF_Pos               _UINT32_(29)                                         /* (FLEX_SPI_IER) RXFTHF Interrupt Enable Position */
#define FLEX_SPI_IER_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_SPI_IER_RXFTHF_Pos)           /* (FLEX_SPI_IER) RXFTHF Interrupt Enable Mask */
#define FLEX_SPI_IER_RXFTHF(value)            (FLEX_SPI_IER_RXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_IER_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_TXFPTEF_Pos              _UINT32_(30)                                         /* (FLEX_SPI_IER) TXFPTEF Interrupt Enable Position */
#define FLEX_SPI_IER_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_SPI_IER_TXFPTEF_Pos)          /* (FLEX_SPI_IER) TXFPTEF Interrupt Enable Mask */
#define FLEX_SPI_IER_TXFPTEF(value)           (FLEX_SPI_IER_TXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_IER_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_RXFPTEF_Pos              _UINT32_(31)                                         /* (FLEX_SPI_IER) RXFPTEF Interrupt Enable Position */
#define FLEX_SPI_IER_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_SPI_IER_RXFPTEF_Pos)          /* (FLEX_SPI_IER) RXFPTEF Interrupt Enable Mask */
#define FLEX_SPI_IER_RXFPTEF(value)           (FLEX_SPI_IER_RXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_IER_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_SPI_IER register */
#define FLEX_SPI_IER_Msk                      _UINT32_(0xFF005F0F)                                 /* (FLEX_SPI_IER) Register Mask  */


/* -------- FLEX_SPI_IDR : (FLEXCOM Offset: 0x418) ( /W 32) SPI Interrupt Disable Register -------- */
#define FLEX_SPI_IDR_RDRF_Pos                 _UINT32_(0)                                          /* (FLEX_SPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define FLEX_SPI_IDR_RDRF_Msk                 (_UINT32_(0x1) << FLEX_SPI_IDR_RDRF_Pos)             /* (FLEX_SPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define FLEX_SPI_IDR_RDRF(value)              (FLEX_SPI_IDR_RDRF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_RDRF_Pos)) /* Assignment of value for RDRF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_TDRE_Pos                 _UINT32_(1)                                          /* (FLEX_SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Position */
#define FLEX_SPI_IDR_TDRE_Msk                 (_UINT32_(0x1) << FLEX_SPI_IDR_TDRE_Pos)             /* (FLEX_SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable Mask */
#define FLEX_SPI_IDR_TDRE(value)              (FLEX_SPI_IDR_TDRE_Msk & (_UINT32_(value) << FLEX_SPI_IDR_TDRE_Pos)) /* Assignment of value for TDRE in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_MODF_Pos                 _UINT32_(2)                                          /* (FLEX_SPI_IDR) Mode Fault Error Interrupt Disable Position */
#define FLEX_SPI_IDR_MODF_Msk                 (_UINT32_(0x1) << FLEX_SPI_IDR_MODF_Pos)             /* (FLEX_SPI_IDR) Mode Fault Error Interrupt Disable Mask */
#define FLEX_SPI_IDR_MODF(value)              (FLEX_SPI_IDR_MODF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_MODF_Pos)) /* Assignment of value for MODF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_OVRES_Pos                _UINT32_(3)                                          /* (FLEX_SPI_IDR) Overrun Error Interrupt Disable Position */
#define FLEX_SPI_IDR_OVRES_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_OVRES_Pos)            /* (FLEX_SPI_IDR) Overrun Error Interrupt Disable Mask */
#define FLEX_SPI_IDR_OVRES(value)             (FLEX_SPI_IDR_OVRES_Msk & (_UINT32_(value) << FLEX_SPI_IDR_OVRES_Pos)) /* Assignment of value for OVRES in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_NSSR_Pos                 _UINT32_(8)                                          /* (FLEX_SPI_IDR) NSS Rising Interrupt Disable Position */
#define FLEX_SPI_IDR_NSSR_Msk                 (_UINT32_(0x1) << FLEX_SPI_IDR_NSSR_Pos)             /* (FLEX_SPI_IDR) NSS Rising Interrupt Disable Mask */
#define FLEX_SPI_IDR_NSSR(value)              (FLEX_SPI_IDR_NSSR_Msk & (_UINT32_(value) << FLEX_SPI_IDR_NSSR_Pos)) /* Assignment of value for NSSR in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_TXEMPTY_Pos              _UINT32_(9)                                          /* (FLEX_SPI_IDR) Transmission Registers Empty Disable Position */
#define FLEX_SPI_IDR_TXEMPTY_Msk              (_UINT32_(0x1) << FLEX_SPI_IDR_TXEMPTY_Pos)          /* (FLEX_SPI_IDR) Transmission Registers Empty Disable Mask */
#define FLEX_SPI_IDR_TXEMPTY(value)           (FLEX_SPI_IDR_TXEMPTY_Msk & (_UINT32_(value) << FLEX_SPI_IDR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_UNDES_Pos                _UINT32_(10)                                         /* (FLEX_SPI_IDR) Underrun Error Interrupt Disable Position */
#define FLEX_SPI_IDR_UNDES_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_UNDES_Pos)            /* (FLEX_SPI_IDR) Underrun Error Interrupt Disable Mask */
#define FLEX_SPI_IDR_UNDES(value)             (FLEX_SPI_IDR_UNDES_Msk & (_UINT32_(value) << FLEX_SPI_IDR_UNDES_Pos)) /* Assignment of value for UNDES in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_CMP_Pos                  _UINT32_(11)                                         /* (FLEX_SPI_IDR) Comparison Interrupt Disable Position */
#define FLEX_SPI_IDR_CMP_Msk                  (_UINT32_(0x1) << FLEX_SPI_IDR_CMP_Pos)              /* (FLEX_SPI_IDR) Comparison Interrupt Disable Mask */
#define FLEX_SPI_IDR_CMP(value)               (FLEX_SPI_IDR_CMP_Msk & (_UINT32_(value) << FLEX_SPI_IDR_CMP_Pos)) /* Assignment of value for CMP in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_SFERR_Pos                _UINT32_(12)                                         /* (FLEX_SPI_IDR) Client Mode Frame Error Interrupt Disable Position */
#define FLEX_SPI_IDR_SFERR_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_SFERR_Pos)            /* (FLEX_SPI_IDR) Client Mode Frame Error Interrupt Disable Mask */
#define FLEX_SPI_IDR_SFERR(value)             (FLEX_SPI_IDR_SFERR_Msk & (_UINT32_(value) << FLEX_SPI_IDR_SFERR_Pos)) /* Assignment of value for SFERR in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_SECE_Pos                 _UINT32_(14)                                         /* (FLEX_SPI_IDR) Security/Safety Error Interrupt Disable Position */
#define FLEX_SPI_IDR_SECE_Msk                 (_UINT32_(0x1) << FLEX_SPI_IDR_SECE_Pos)             /* (FLEX_SPI_IDR) Security/Safety Error Interrupt Disable Mask */
#define FLEX_SPI_IDR_SECE(value)              (FLEX_SPI_IDR_SECE_Msk & (_UINT32_(value) << FLEX_SPI_IDR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_TXFEF_Pos                _UINT32_(24)                                         /* (FLEX_SPI_IDR) TXFEF Interrupt Disable Position */
#define FLEX_SPI_IDR_TXFEF_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_TXFEF_Pos)            /* (FLEX_SPI_IDR) TXFEF Interrupt Disable Mask */
#define FLEX_SPI_IDR_TXFEF(value)             (FLEX_SPI_IDR_TXFEF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_TXFFF_Pos                _UINT32_(25)                                         /* (FLEX_SPI_IDR) TXFFF Interrupt Disable Position */
#define FLEX_SPI_IDR_TXFFF_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_TXFFF_Pos)            /* (FLEX_SPI_IDR) TXFFF Interrupt Disable Mask */
#define FLEX_SPI_IDR_TXFFF(value)             (FLEX_SPI_IDR_TXFFF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_TXFTHF_Pos               _UINT32_(26)                                         /* (FLEX_SPI_IDR) TXFTHF Interrupt Disable Position */
#define FLEX_SPI_IDR_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_SPI_IDR_TXFTHF_Pos)           /* (FLEX_SPI_IDR) TXFTHF Interrupt Disable Mask */
#define FLEX_SPI_IDR_TXFTHF(value)            (FLEX_SPI_IDR_TXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_RXFEF_Pos                _UINT32_(27)                                         /* (FLEX_SPI_IDR) RXFEF Interrupt Disable Position */
#define FLEX_SPI_IDR_RXFEF_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_RXFEF_Pos)            /* (FLEX_SPI_IDR) RXFEF Interrupt Disable Mask */
#define FLEX_SPI_IDR_RXFEF(value)             (FLEX_SPI_IDR_RXFEF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_RXFFF_Pos                _UINT32_(28)                                         /* (FLEX_SPI_IDR) RXFFF Interrupt Disable Position */
#define FLEX_SPI_IDR_RXFFF_Msk                (_UINT32_(0x1) << FLEX_SPI_IDR_RXFFF_Pos)            /* (FLEX_SPI_IDR) RXFFF Interrupt Disable Mask */
#define FLEX_SPI_IDR_RXFFF(value)             (FLEX_SPI_IDR_RXFFF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_RXFTHF_Pos               _UINT32_(29)                                         /* (FLEX_SPI_IDR) RXFTHF Interrupt Disable Position */
#define FLEX_SPI_IDR_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_SPI_IDR_RXFTHF_Pos)           /* (FLEX_SPI_IDR) RXFTHF Interrupt Disable Mask */
#define FLEX_SPI_IDR_RXFTHF(value)            (FLEX_SPI_IDR_RXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_TXFPTEF_Pos              _UINT32_(30)                                         /* (FLEX_SPI_IDR) TXFPTEF Interrupt Disable Position */
#define FLEX_SPI_IDR_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_SPI_IDR_TXFPTEF_Pos)          /* (FLEX_SPI_IDR) TXFPTEF Interrupt Disable Mask */
#define FLEX_SPI_IDR_TXFPTEF(value)           (FLEX_SPI_IDR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_RXFPTEF_Pos              _UINT32_(31)                                         /* (FLEX_SPI_IDR) RXFPTEF Interrupt Disable Position */
#define FLEX_SPI_IDR_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_SPI_IDR_RXFPTEF_Pos)          /* (FLEX_SPI_IDR) RXFPTEF Interrupt Disable Mask */
#define FLEX_SPI_IDR_RXFPTEF(value)           (FLEX_SPI_IDR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_IDR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_SPI_IDR register */
#define FLEX_SPI_IDR_Msk                      _UINT32_(0xFF005F0F)                                 /* (FLEX_SPI_IDR) Register Mask  */


/* -------- FLEX_SPI_IMR : (FLEXCOM Offset: 0x41C) ( R/ 32) SPI Interrupt Mask Register -------- */
#define FLEX_SPI_IMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_SPI_IMR) SPI Interrupt Mask Register  Reset Value */

#define FLEX_SPI_IMR_RDRF_Pos                 _UINT32_(0)                                          /* (FLEX_SPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define FLEX_SPI_IMR_RDRF_Msk                 (_UINT32_(0x1) << FLEX_SPI_IMR_RDRF_Pos)             /* (FLEX_SPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define FLEX_SPI_IMR_RDRF(value)              (FLEX_SPI_IMR_RDRF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_RDRF_Pos)) /* Assignment of value for RDRF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_TDRE_Pos                 _UINT32_(1)                                          /* (FLEX_SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Position */
#define FLEX_SPI_IMR_TDRE_Msk                 (_UINT32_(0x1) << FLEX_SPI_IMR_TDRE_Pos)             /* (FLEX_SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask Mask */
#define FLEX_SPI_IMR_TDRE(value)              (FLEX_SPI_IMR_TDRE_Msk & (_UINT32_(value) << FLEX_SPI_IMR_TDRE_Pos)) /* Assignment of value for TDRE in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_MODF_Pos                 _UINT32_(2)                                          /* (FLEX_SPI_IMR) Mode Fault Error Interrupt Mask Position */
#define FLEX_SPI_IMR_MODF_Msk                 (_UINT32_(0x1) << FLEX_SPI_IMR_MODF_Pos)             /* (FLEX_SPI_IMR) Mode Fault Error Interrupt Mask Mask */
#define FLEX_SPI_IMR_MODF(value)              (FLEX_SPI_IMR_MODF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_MODF_Pos)) /* Assignment of value for MODF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_OVRES_Pos                _UINT32_(3)                                          /* (FLEX_SPI_IMR) Overrun Error Interrupt Mask Position */
#define FLEX_SPI_IMR_OVRES_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_OVRES_Pos)            /* (FLEX_SPI_IMR) Overrun Error Interrupt Mask Mask */
#define FLEX_SPI_IMR_OVRES(value)             (FLEX_SPI_IMR_OVRES_Msk & (_UINT32_(value) << FLEX_SPI_IMR_OVRES_Pos)) /* Assignment of value for OVRES in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_NSSR_Pos                 _UINT32_(8)                                          /* (FLEX_SPI_IMR) NSS Rising Interrupt Mask Position */
#define FLEX_SPI_IMR_NSSR_Msk                 (_UINT32_(0x1) << FLEX_SPI_IMR_NSSR_Pos)             /* (FLEX_SPI_IMR) NSS Rising Interrupt Mask Mask */
#define FLEX_SPI_IMR_NSSR(value)              (FLEX_SPI_IMR_NSSR_Msk & (_UINT32_(value) << FLEX_SPI_IMR_NSSR_Pos)) /* Assignment of value for NSSR in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_TXEMPTY_Pos              _UINT32_(9)                                          /* (FLEX_SPI_IMR) Transmission Registers Empty Mask Position */
#define FLEX_SPI_IMR_TXEMPTY_Msk              (_UINT32_(0x1) << FLEX_SPI_IMR_TXEMPTY_Pos)          /* (FLEX_SPI_IMR) Transmission Registers Empty Mask Mask */
#define FLEX_SPI_IMR_TXEMPTY(value)           (FLEX_SPI_IMR_TXEMPTY_Msk & (_UINT32_(value) << FLEX_SPI_IMR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_UNDES_Pos                _UINT32_(10)                                         /* (FLEX_SPI_IMR) Underrun Error Interrupt Mask Position */
#define FLEX_SPI_IMR_UNDES_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_UNDES_Pos)            /* (FLEX_SPI_IMR) Underrun Error Interrupt Mask Mask */
#define FLEX_SPI_IMR_UNDES(value)             (FLEX_SPI_IMR_UNDES_Msk & (_UINT32_(value) << FLEX_SPI_IMR_UNDES_Pos)) /* Assignment of value for UNDES in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_CMP_Pos                  _UINT32_(11)                                         /* (FLEX_SPI_IMR) Comparison Interrupt Mask Position */
#define FLEX_SPI_IMR_CMP_Msk                  (_UINT32_(0x1) << FLEX_SPI_IMR_CMP_Pos)              /* (FLEX_SPI_IMR) Comparison Interrupt Mask Mask */
#define FLEX_SPI_IMR_CMP(value)               (FLEX_SPI_IMR_CMP_Msk & (_UINT32_(value) << FLEX_SPI_IMR_CMP_Pos)) /* Assignment of value for CMP in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_SFERR_Pos                _UINT32_(12)                                         /* (FLEX_SPI_IMR) Client Mode Frame Error Interrupt Mask Position */
#define FLEX_SPI_IMR_SFERR_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_SFERR_Pos)            /* (FLEX_SPI_IMR) Client Mode Frame Error Interrupt Mask Mask */
#define FLEX_SPI_IMR_SFERR(value)             (FLEX_SPI_IMR_SFERR_Msk & (_UINT32_(value) << FLEX_SPI_IMR_SFERR_Pos)) /* Assignment of value for SFERR in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_SECE_Pos                 _UINT32_(14)                                         /* (FLEX_SPI_IMR) Security/Safety Error Interrupt Mask Position */
#define FLEX_SPI_IMR_SECE_Msk                 (_UINT32_(0x1) << FLEX_SPI_IMR_SECE_Pos)             /* (FLEX_SPI_IMR) Security/Safety Error Interrupt Mask Mask */
#define FLEX_SPI_IMR_SECE(value)              (FLEX_SPI_IMR_SECE_Msk & (_UINT32_(value) << FLEX_SPI_IMR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_TXFEF_Pos                _UINT32_(24)                                         /* (FLEX_SPI_IMR) TXFEF Interrupt Mask Position */
#define FLEX_SPI_IMR_TXFEF_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_TXFEF_Pos)            /* (FLEX_SPI_IMR) TXFEF Interrupt Mask Mask */
#define FLEX_SPI_IMR_TXFEF(value)             (FLEX_SPI_IMR_TXFEF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_TXFFF_Pos                _UINT32_(25)                                         /* (FLEX_SPI_IMR) TXFFF Interrupt Mask Position */
#define FLEX_SPI_IMR_TXFFF_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_TXFFF_Pos)            /* (FLEX_SPI_IMR) TXFFF Interrupt Mask Mask */
#define FLEX_SPI_IMR_TXFFF(value)             (FLEX_SPI_IMR_TXFFF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_TXFTHF_Pos               _UINT32_(26)                                         /* (FLEX_SPI_IMR) TXFTHF Interrupt Mask Position */
#define FLEX_SPI_IMR_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_SPI_IMR_TXFTHF_Pos)           /* (FLEX_SPI_IMR) TXFTHF Interrupt Mask Mask */
#define FLEX_SPI_IMR_TXFTHF(value)            (FLEX_SPI_IMR_TXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_RXFEF_Pos                _UINT32_(27)                                         /* (FLEX_SPI_IMR) RXFEF Interrupt Mask Position */
#define FLEX_SPI_IMR_RXFEF_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_RXFEF_Pos)            /* (FLEX_SPI_IMR) RXFEF Interrupt Mask Mask */
#define FLEX_SPI_IMR_RXFEF(value)             (FLEX_SPI_IMR_RXFEF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_RXFFF_Pos                _UINT32_(28)                                         /* (FLEX_SPI_IMR) RXFFF Interrupt Mask Position */
#define FLEX_SPI_IMR_RXFFF_Msk                (_UINT32_(0x1) << FLEX_SPI_IMR_RXFFF_Pos)            /* (FLEX_SPI_IMR) RXFFF Interrupt Mask Mask */
#define FLEX_SPI_IMR_RXFFF(value)             (FLEX_SPI_IMR_RXFFF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_RXFTHF_Pos               _UINT32_(29)                                         /* (FLEX_SPI_IMR) RXFTHF Interrupt Mask Position */
#define FLEX_SPI_IMR_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_SPI_IMR_RXFTHF_Pos)           /* (FLEX_SPI_IMR) RXFTHF Interrupt Mask Mask */
#define FLEX_SPI_IMR_RXFTHF(value)            (FLEX_SPI_IMR_RXFTHF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_TXFPTEF_Pos              _UINT32_(30)                                         /* (FLEX_SPI_IMR) TXFPTEF Interrupt Mask Position */
#define FLEX_SPI_IMR_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_SPI_IMR_TXFPTEF_Pos)          /* (FLEX_SPI_IMR) TXFPTEF Interrupt Mask Mask */
#define FLEX_SPI_IMR_TXFPTEF(value)           (FLEX_SPI_IMR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_RXFPTEF_Pos              _UINT32_(31)                                         /* (FLEX_SPI_IMR) RXFPTEF Interrupt Mask Position */
#define FLEX_SPI_IMR_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_SPI_IMR_RXFPTEF_Pos)          /* (FLEX_SPI_IMR) RXFPTEF Interrupt Mask Mask */
#define FLEX_SPI_IMR_RXFPTEF(value)           (FLEX_SPI_IMR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_SPI_IMR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_SPI_IMR register */
#define FLEX_SPI_IMR_Msk                      _UINT32_(0xFF005F0F)                                 /* (FLEX_SPI_IMR) Register Mask  */


/* -------- FLEX_SPI_CSR : (FLEXCOM Offset: 0x430) (R/W 32) SPI Chip Select Register x -------- */
#define FLEX_SPI_CSR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_SPI_CSR) SPI Chip Select Register x  Reset Value */

#define FLEX_SPI_CSR_CPOL_Pos                 _UINT32_(0)                                          /* (FLEX_SPI_CSR) Clock Polarity Position */
#define FLEX_SPI_CSR_CPOL_Msk                 (_UINT32_(0x1) << FLEX_SPI_CSR_CPOL_Pos)             /* (FLEX_SPI_CSR) Clock Polarity Mask */
#define FLEX_SPI_CSR_CPOL(value)              (FLEX_SPI_CSR_CPOL_Msk & (_UINT32_(value) << FLEX_SPI_CSR_CPOL_Pos)) /* Assignment of value for CPOL in the FLEX_SPI_CSR register */
#define   FLEX_SPI_CSR_CPOL_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_CSR) The inactive state value of SPCK is logic level zero.  */
#define   FLEX_SPI_CSR_CPOL_1_Val             _UINT32_(0x1)                                        /* (FLEX_SPI_CSR) The inactive state value of SPCK is logic level one.  */
#define FLEX_SPI_CSR_CPOL_0                   (FLEX_SPI_CSR_CPOL_0_Val << FLEX_SPI_CSR_CPOL_Pos)   /* (FLEX_SPI_CSR) The inactive state value of SPCK is logic level zero. Position */
#define FLEX_SPI_CSR_CPOL_1                   (FLEX_SPI_CSR_CPOL_1_Val << FLEX_SPI_CSR_CPOL_Pos)   /* (FLEX_SPI_CSR) The inactive state value of SPCK is logic level one. Position */
#define FLEX_SPI_CSR_NCPHA_Pos                _UINT32_(1)                                          /* (FLEX_SPI_CSR) Clock Phase Position */
#define FLEX_SPI_CSR_NCPHA_Msk                (_UINT32_(0x1) << FLEX_SPI_CSR_NCPHA_Pos)            /* (FLEX_SPI_CSR) Clock Phase Mask */
#define FLEX_SPI_CSR_NCPHA(value)             (FLEX_SPI_CSR_NCPHA_Msk & (_UINT32_(value) << FLEX_SPI_CSR_NCPHA_Pos)) /* Assignment of value for NCPHA in the FLEX_SPI_CSR register */
#define   FLEX_SPI_CSR_NCPHA_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CSR) Data are changed on the leading edge of SPCK and captured on the following edge of SPCK.  */
#define   FLEX_SPI_CSR_NCPHA_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CSR) Data are captured on the leading edge of SPCK and changed on the following edge of SPCK.  */
#define FLEX_SPI_CSR_NCPHA_0                  (FLEX_SPI_CSR_NCPHA_0_Val << FLEX_SPI_CSR_NCPHA_Pos) /* (FLEX_SPI_CSR) Data are changed on the leading edge of SPCK and captured on the following edge of SPCK. Position */
#define FLEX_SPI_CSR_NCPHA_1                  (FLEX_SPI_CSR_NCPHA_1_Val << FLEX_SPI_CSR_NCPHA_Pos) /* (FLEX_SPI_CSR) Data are captured on the leading edge of SPCK and changed on the following edge of SPCK. Position */
#define FLEX_SPI_CSR_CSNAAT_Pos               _UINT32_(2)                                          /* (FLEX_SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Position */
#define FLEX_SPI_CSR_CSNAAT_Msk               (_UINT32_(0x1) << FLEX_SPI_CSR_CSNAAT_Pos)           /* (FLEX_SPI_CSR) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) Mask */
#define FLEX_SPI_CSR_CSNAAT(value)            (FLEX_SPI_CSR_CSNAAT_Msk & (_UINT32_(value) << FLEX_SPI_CSR_CSNAAT_Pos)) /* Assignment of value for CSNAAT in the FLEX_SPI_CSR register */
#define   FLEX_SPI_CSR_CSNAAT_0_Val           _UINT32_(0x0)                                        /* (FLEX_SPI_CSR) The Peripheral Chip Select does not rise between two transfers if the FLEX_SPI_TDR is reloaded before the end of the first transfer and if the two transfers occur on the same Chip Select.  */
#define   FLEX_SPI_CSR_CSNAAT_1_Val           _UINT32_(0x1)                                        /* (FLEX_SPI_CSR) The Peripheral Chip Select rises systematically after each transfer performed on the same client. It remains inactive after the end of transfer for a minimal duration of:  */
#define FLEX_SPI_CSR_CSNAAT_0                 (FLEX_SPI_CSR_CSNAAT_0_Val << FLEX_SPI_CSR_CSNAAT_Pos) /* (FLEX_SPI_CSR) The Peripheral Chip Select does not rise between two transfers if the FLEX_SPI_TDR is reloaded before the end of the first transfer and if the two transfers occur on the same Chip Select. Position */
#define FLEX_SPI_CSR_CSNAAT_1                 (FLEX_SPI_CSR_CSNAAT_1_Val << FLEX_SPI_CSR_CSNAAT_Pos) /* (FLEX_SPI_CSR) The Peripheral Chip Select rises systematically after each transfer performed on the same client. It remains inactive after the end of transfer for a minimal duration of: Position */
#define FLEX_SPI_CSR_CSAAT_Pos                _UINT32_(3)                                          /* (FLEX_SPI_CSR) Chip Select Active After Transfer Position */
#define FLEX_SPI_CSR_CSAAT_Msk                (_UINT32_(0x1) << FLEX_SPI_CSR_CSAAT_Pos)            /* (FLEX_SPI_CSR) Chip Select Active After Transfer Mask */
#define FLEX_SPI_CSR_CSAAT(value)             (FLEX_SPI_CSR_CSAAT_Msk & (_UINT32_(value) << FLEX_SPI_CSR_CSAAT_Pos)) /* Assignment of value for CSAAT in the FLEX_SPI_CSR register */
#define   FLEX_SPI_CSR_CSAAT_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_CSR) The Peripheral Chip Select Line rises as soon as the last transfer is achieved.  */
#define   FLEX_SPI_CSR_CSAAT_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_CSR) The Peripheral Chip Select does not rise after the last transfer is achieved. It remains active until a new transfer is requested on a different chip select.  */
#define FLEX_SPI_CSR_CSAAT_0                  (FLEX_SPI_CSR_CSAAT_0_Val << FLEX_SPI_CSR_CSAAT_Pos) /* (FLEX_SPI_CSR) The Peripheral Chip Select Line rises as soon as the last transfer is achieved. Position */
#define FLEX_SPI_CSR_CSAAT_1                  (FLEX_SPI_CSR_CSAAT_1_Val << FLEX_SPI_CSR_CSAAT_Pos) /* (FLEX_SPI_CSR) The Peripheral Chip Select does not rise after the last transfer is achieved. It remains active until a new transfer is requested on a different chip select. Position */
#define FLEX_SPI_CSR_BITS_Pos                 _UINT32_(4)                                          /* (FLEX_SPI_CSR) Bits Per Transfer Position */
#define FLEX_SPI_CSR_BITS_Msk                 (_UINT32_(0xF) << FLEX_SPI_CSR_BITS_Pos)             /* (FLEX_SPI_CSR) Bits Per Transfer Mask */
#define FLEX_SPI_CSR_BITS(value)              (FLEX_SPI_CSR_BITS_Msk & (_UINT32_(value) << FLEX_SPI_CSR_BITS_Pos)) /* Assignment of value for BITS in the FLEX_SPI_CSR register */
#define   FLEX_SPI_CSR_BITS_8_BIT_Val         _UINT32_(0x0)                                        /* (FLEX_SPI_CSR) 8 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_9_BIT_Val         _UINT32_(0x1)                                        /* (FLEX_SPI_CSR) 9 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_10_BIT_Val        _UINT32_(0x2)                                        /* (FLEX_SPI_CSR) 10 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_11_BIT_Val        _UINT32_(0x3)                                        /* (FLEX_SPI_CSR) 11 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_12_BIT_Val        _UINT32_(0x4)                                        /* (FLEX_SPI_CSR) 12 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_13_BIT_Val        _UINT32_(0x5)                                        /* (FLEX_SPI_CSR) 13 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_14_BIT_Val        _UINT32_(0x6)                                        /* (FLEX_SPI_CSR) 14 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_15_BIT_Val        _UINT32_(0x7)                                        /* (FLEX_SPI_CSR) 15 bits for transfer  */
#define   FLEX_SPI_CSR_BITS_16_BIT_Val        _UINT32_(0x8)                                        /* (FLEX_SPI_CSR) 16 bits for transfer  */
#define FLEX_SPI_CSR_BITS_8_BIT               (FLEX_SPI_CSR_BITS_8_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 8 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_9_BIT               (FLEX_SPI_CSR_BITS_9_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 9 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_10_BIT              (FLEX_SPI_CSR_BITS_10_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 10 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_11_BIT              (FLEX_SPI_CSR_BITS_11_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 11 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_12_BIT              (FLEX_SPI_CSR_BITS_12_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 12 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_13_BIT              (FLEX_SPI_CSR_BITS_13_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 13 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_14_BIT              (FLEX_SPI_CSR_BITS_14_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 14 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_15_BIT              (FLEX_SPI_CSR_BITS_15_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 15 bits for transfer Position */
#define FLEX_SPI_CSR_BITS_16_BIT              (FLEX_SPI_CSR_BITS_16_BIT_Val << FLEX_SPI_CSR_BITS_Pos) /* (FLEX_SPI_CSR) 16 bits for transfer Position */
#define FLEX_SPI_CSR_SCBR_Pos                 _UINT32_(8)                                          /* (FLEX_SPI_CSR) Serial Clock Bit Rate Position */
#define FLEX_SPI_CSR_SCBR_Msk                 (_UINT32_(0xFF) << FLEX_SPI_CSR_SCBR_Pos)            /* (FLEX_SPI_CSR) Serial Clock Bit Rate Mask */
#define FLEX_SPI_CSR_SCBR(value)              (FLEX_SPI_CSR_SCBR_Msk & (_UINT32_(value) << FLEX_SPI_CSR_SCBR_Pos)) /* Assignment of value for SCBR in the FLEX_SPI_CSR register */
#define FLEX_SPI_CSR_DLYBS_Pos                _UINT32_(16)                                         /* (FLEX_SPI_CSR) Delay Before SPCK Position */
#define FLEX_SPI_CSR_DLYBS_Msk                (_UINT32_(0xFF) << FLEX_SPI_CSR_DLYBS_Pos)           /* (FLEX_SPI_CSR) Delay Before SPCK Mask */
#define FLEX_SPI_CSR_DLYBS(value)             (FLEX_SPI_CSR_DLYBS_Msk & (_UINT32_(value) << FLEX_SPI_CSR_DLYBS_Pos)) /* Assignment of value for DLYBS in the FLEX_SPI_CSR register */
#define FLEX_SPI_CSR_DLYBCT_Pos               _UINT32_(24)                                         /* (FLEX_SPI_CSR) Delay Between Consecutive Transfers Position */
#define FLEX_SPI_CSR_DLYBCT_Msk               (_UINT32_(0xFF) << FLEX_SPI_CSR_DLYBCT_Pos)          /* (FLEX_SPI_CSR) Delay Between Consecutive Transfers Mask */
#define FLEX_SPI_CSR_DLYBCT(value)            (FLEX_SPI_CSR_DLYBCT_Msk & (_UINT32_(value) << FLEX_SPI_CSR_DLYBCT_Pos)) /* Assignment of value for DLYBCT in the FLEX_SPI_CSR register */
#define FLEX_SPI_CSR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (FLEX_SPI_CSR) Register Mask  */


/* -------- FLEX_SPI_FMR : (FLEXCOM Offset: 0x440) (R/W 32) SPI FIFO Mode Register -------- */
#define FLEX_SPI_FMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_SPI_FMR) SPI FIFO Mode Register  Reset Value */

#define FLEX_SPI_FMR_TXRDYM_Pos               _UINT32_(0)                                          /* (FLEX_SPI_FMR) Transmit Data Register Empty Mode Position */
#define FLEX_SPI_FMR_TXRDYM_Msk               (_UINT32_(0x3) << FLEX_SPI_FMR_TXRDYM_Pos)           /* (FLEX_SPI_FMR) Transmit Data Register Empty Mode Mask */
#define FLEX_SPI_FMR_TXRDYM(value)            (FLEX_SPI_FMR_TXRDYM_Msk & (_UINT32_(value) << FLEX_SPI_FMR_TXRDYM_Pos)) /* Assignment of value for TXRDYM in the FLEX_SPI_FMR register */
#define   FLEX_SPI_FMR_TXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 data (byte or halfword) must be configured in the DMA depending on FLEX_SPI_CSR0.BITS. If the transfer is performed by software, the access type (byte, halfword) must be defined depending on FLEX_SPI_CSR0.BITS.  */
#define   FLEX_SPI_FMR_TXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 2 data) must be configured in the DMA.  If the transfer is performed by software, the access type must be defined as word (2 data per access, 1 access).  */
#define   FLEX_SPI_FMR_TXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least four unread data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 2 accesses).  */
#define   FLEX_SPI_FMR_TXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least eight data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 4 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 4 accesses).  */
#define FLEX_SPI_FMR_TXRDYM_ONE_DATA          (FLEX_SPI_FMR_TXRDYM_ONE_DATA_Val << FLEX_SPI_FMR_TXRDYM_Pos) /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 data (byte or halfword) must be configured in the DMA depending on FLEX_SPI_CSR0.BITS. If the transfer is performed by software, the access type (byte, halfword) must be defined depending on FLEX_SPI_CSR0.BITS. Position */
#define FLEX_SPI_FMR_TXRDYM_TWO_DATA          (FLEX_SPI_FMR_TXRDYM_TWO_DATA_Val << FLEX_SPI_FMR_TXRDYM_Pos) /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 2 data) must be configured in the DMA.  If the transfer is performed by software, the access type must be defined as word (2 data per access, 1 access). Position */
#define FLEX_SPI_FMR_TXRDYM_FOUR_DATA         (FLEX_SPI_FMR_TXRDYM_FOUR_DATA_Val << FLEX_SPI_FMR_TXRDYM_Pos) /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least four unread data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 2 accesses). Position */
#define FLEX_SPI_FMR_TXRDYM_EIGHT_DATA        (FLEX_SPI_FMR_TXRDYM_EIGHT_DATA_Val << FLEX_SPI_FMR_TXRDYM_Pos) /* (FLEX_SPI_FMR) TDRE will be at level '1' when at least eight data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 4 words (1 word carries 2 data) must be configured in the DMA. If the transfer is performed by software, the access type must be defined as word (2 data per access, 4 accesses). Position */
#define FLEX_SPI_FMR_RXRDYM_Pos               _UINT32_(4)                                          /* (FLEX_SPI_FMR) Receive Data Register Full Mode Position */
#define FLEX_SPI_FMR_RXRDYM_Msk               (_UINT32_(0x3) << FLEX_SPI_FMR_RXRDYM_Pos)           /* (FLEX_SPI_FMR) Receive Data Register Full Mode Mask */
#define FLEX_SPI_FMR_RXRDYM(value)            (FLEX_SPI_FMR_RXRDYM_Msk & (_UINT32_(value) << FLEX_SPI_FMR_RXRDYM_Pos)) /* Assignment of value for RXRDYM in the FLEX_SPI_FMR register */
#define   FLEX_SPI_FMR_RXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 byte must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 halfword must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte or halfword depending on FLEX_SPI_CSR0.BITS.  */
#define   FLEX_SPI_FMR_RXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 word (1 word carries 2 halfwords) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as halfword (2 bytes per access, 1 access when FLEX_SPI_CSR0.BITS=0), or word (2 halfwords per access, 2 accesses when FLEX_SPI_CSR0.BITS>0).  */
#define   FLEX_SPI_FMR_RXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 word (1 halfword carries 4 bytes) must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 1 access when FLEX_SPI_CSR0.BITS=0 or 2 halfwords per access, 2 accesses when FLEX_SPI_CSR0.BITS>0).  */
#define   FLEX_SPI_FMR_RXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 2 words (1 halfword carries 4 bytes) must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 4 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 2 accesses when FLEX_SPI_CSR0.BITS=0 or 2 halfwords per access, 4 accesses when FLEX_SPI_CSR0.BITS>0).  */
#define FLEX_SPI_FMR_RXRDYM_ONE_DATA          (FLEX_SPI_FMR_RXRDYM_ONE_DATA_Val << FLEX_SPI_FMR_RXRDYM_Pos) /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 byte must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 halfword must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte or halfword depending on FLEX_SPI_CSR0.BITS. Position */
#define FLEX_SPI_FMR_RXRDYM_TWO_DATA          (FLEX_SPI_FMR_RXRDYM_TWO_DATA_Val << FLEX_SPI_FMR_RXRDYM_Pos) /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 1 word (1 word carries 2 halfwords) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as halfword (2 bytes per access, 1 access when FLEX_SPI_CSR0.BITS=0), or word (2 halfwords per access, 2 accesses when FLEX_SPI_CSR0.BITS>0). Position */
#define FLEX_SPI_FMR_RXRDYM_FOUR_DATA         (FLEX_SPI_FMR_RXRDYM_FOUR_DATA_Val << FLEX_SPI_FMR_RXRDYM_Pos) /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 1 word (1 halfword carries 4 bytes) must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 1 access when FLEX_SPI_CSR0.BITS=0 or 2 halfwords per access, 2 accesses when FLEX_SPI_CSR0.BITS>0). Position */
#define FLEX_SPI_FMR_RXRDYM_EIGHT_DATA        (FLEX_SPI_FMR_RXRDYM_EIGHT_DATA_Val << FLEX_SPI_FMR_RXRDYM_Pos) /* (FLEX_SPI_FMR) RDRF will be at level '1' when at least eight unread data are in the receive FIFO.  To minimize system bus load, when DMA is enabled to transfer data and FLEX_SPI_CSR0.BITS=0 (8 bits transferred on SPI line), the chunk of 2 words (1 halfword carries 4 bytes) must be configured in the DMA. When FLEX_SPI_CSR0.BITS>0 (9 to 16 bits transferred on SPI line), the chunk of 4 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as word (4 bytes per access, 2 accesses when FLEX_SPI_CSR0.BITS=0 or 2 halfwords per access, 4 accesses when FLEX_SPI_CSR0.BITS>0). Position */
#define FLEX_SPI_FMR_TXFTHRES_Pos             _UINT32_(16)                                         /* (FLEX_SPI_FMR) Transmit FIFO Threshold Position */
#define FLEX_SPI_FMR_TXFTHRES_Msk             (_UINT32_(0x3F) << FLEX_SPI_FMR_TXFTHRES_Pos)        /* (FLEX_SPI_FMR) Transmit FIFO Threshold Mask */
#define FLEX_SPI_FMR_TXFTHRES(value)          (FLEX_SPI_FMR_TXFTHRES_Msk & (_UINT32_(value) << FLEX_SPI_FMR_TXFTHRES_Pos)) /* Assignment of value for TXFTHRES in the FLEX_SPI_FMR register */
#define FLEX_SPI_FMR_RXFTHRES_Pos             _UINT32_(24)                                         /* (FLEX_SPI_FMR) Receive FIFO Threshold Position */
#define FLEX_SPI_FMR_RXFTHRES_Msk             (_UINT32_(0x3F) << FLEX_SPI_FMR_RXFTHRES_Pos)        /* (FLEX_SPI_FMR) Receive FIFO Threshold Mask */
#define FLEX_SPI_FMR_RXFTHRES(value)          (FLEX_SPI_FMR_RXFTHRES_Msk & (_UINT32_(value) << FLEX_SPI_FMR_RXFTHRES_Pos)) /* Assignment of value for RXFTHRES in the FLEX_SPI_FMR register */
#define FLEX_SPI_FMR_Msk                      _UINT32_(0x3F3F0033)                                 /* (FLEX_SPI_FMR) Register Mask  */


/* -------- FLEX_SPI_FLR : (FLEXCOM Offset: 0x444) ( R/ 32) SPI FIFO Level Register -------- */
#define FLEX_SPI_FLR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_SPI_FLR) SPI FIFO Level Register  Reset Value */

#define FLEX_SPI_FLR_TXFL_Pos                 _UINT32_(0)                                          /* (FLEX_SPI_FLR) Transmit FIFO Level Position */
#define FLEX_SPI_FLR_TXFL_Msk                 (_UINT32_(0x3F) << FLEX_SPI_FLR_TXFL_Pos)            /* (FLEX_SPI_FLR) Transmit FIFO Level Mask */
#define FLEX_SPI_FLR_TXFL(value)              (FLEX_SPI_FLR_TXFL_Msk & (_UINT32_(value) << FLEX_SPI_FLR_TXFL_Pos)) /* Assignment of value for TXFL in the FLEX_SPI_FLR register */
#define   FLEX_SPI_FLR_TXFL_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_FLR) There is no data in the Transmit FIFO  */
#define FLEX_SPI_FLR_TXFL_0                   (FLEX_SPI_FLR_TXFL_0_Val << FLEX_SPI_FLR_TXFL_Pos)   /* (FLEX_SPI_FLR) There is no data in the Transmit FIFO Position */
#define FLEX_SPI_FLR_RXFL_Pos                 _UINT32_(16)                                         /* (FLEX_SPI_FLR) Receive FIFO Level Position */
#define FLEX_SPI_FLR_RXFL_Msk                 (_UINT32_(0x3F) << FLEX_SPI_FLR_RXFL_Pos)            /* (FLEX_SPI_FLR) Receive FIFO Level Mask */
#define FLEX_SPI_FLR_RXFL(value)              (FLEX_SPI_FLR_RXFL_Msk & (_UINT32_(value) << FLEX_SPI_FLR_RXFL_Pos)) /* Assignment of value for RXFL in the FLEX_SPI_FLR register */
#define   FLEX_SPI_FLR_RXFL_0_Val             _UINT32_(0x0)                                        /* (FLEX_SPI_FLR) There is no unread data in the Receive FIFO  */
#define FLEX_SPI_FLR_RXFL_0                   (FLEX_SPI_FLR_RXFL_0_Val << FLEX_SPI_FLR_RXFL_Pos)   /* (FLEX_SPI_FLR) There is no unread data in the Receive FIFO Position */
#define FLEX_SPI_FLR_Msk                      _UINT32_(0x003F003F)                                 /* (FLEX_SPI_FLR) Register Mask  */


/* -------- FLEX_SPI_CMPR : (FLEXCOM Offset: 0x448) (R/W 32) SPI Comparison Register -------- */
#define FLEX_SPI_CMPR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_SPI_CMPR) SPI Comparison Register  Reset Value */

#define FLEX_SPI_CMPR_VAL1_Pos                _UINT32_(0)                                          /* (FLEX_SPI_CMPR) First Comparison Value for Received Character Position */
#define FLEX_SPI_CMPR_VAL1_Msk                (_UINT32_(0xFFFF) << FLEX_SPI_CMPR_VAL1_Pos)         /* (FLEX_SPI_CMPR) First Comparison Value for Received Character Mask */
#define FLEX_SPI_CMPR_VAL1(value)             (FLEX_SPI_CMPR_VAL1_Msk & (_UINT32_(value) << FLEX_SPI_CMPR_VAL1_Pos)) /* Assignment of value for VAL1 in the FLEX_SPI_CMPR register */
#define FLEX_SPI_CMPR_VAL2_Pos                _UINT32_(16)                                         /* (FLEX_SPI_CMPR) Second Comparison Value for Received Character Position */
#define FLEX_SPI_CMPR_VAL2_Msk                (_UINT32_(0xFFFF) << FLEX_SPI_CMPR_VAL2_Pos)         /* (FLEX_SPI_CMPR) Second Comparison Value for Received Character Mask */
#define FLEX_SPI_CMPR_VAL2(value)             (FLEX_SPI_CMPR_VAL2_Msk & (_UINT32_(value) << FLEX_SPI_CMPR_VAL2_Pos)) /* Assignment of value for VAL2 in the FLEX_SPI_CMPR register */
#define FLEX_SPI_CMPR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FLEX_SPI_CMPR) Register Mask  */


/* -------- FLEX_SPI_WPMR : (FLEXCOM Offset: 0x4E4) (R/W 32) SPI Write Protection Mode Register -------- */
#define FLEX_SPI_WPMR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_SPI_WPMR) SPI Write Protection Mode Register  Reset Value */

#define FLEX_SPI_WPMR_WPEN_Pos                _UINT32_(0)                                          /* (FLEX_SPI_WPMR) Write Protection Enable Position */
#define FLEX_SPI_WPMR_WPEN_Msk                (_UINT32_(0x1) << FLEX_SPI_WPMR_WPEN_Pos)            /* (FLEX_SPI_WPMR) Write Protection Enable Mask */
#define FLEX_SPI_WPMR_WPEN(value)             (FLEX_SPI_WPMR_WPEN_Msk & (_UINT32_(value) << FLEX_SPI_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the FLEX_SPI_WPMR register */
#define   FLEX_SPI_WPMR_WPEN_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_WPMR) Disables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII)  */
#define   FLEX_SPI_WPMR_WPEN_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_WPMR) Enables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII)  */
#define FLEX_SPI_WPMR_WPEN_0                  (FLEX_SPI_WPMR_WPEN_0_Val << FLEX_SPI_WPMR_WPEN_Pos) /* (FLEX_SPI_WPMR) Disables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII) Position */
#define FLEX_SPI_WPMR_WPEN_1                  (FLEX_SPI_WPMR_WPEN_1_Val << FLEX_SPI_WPMR_WPEN_Pos) /* (FLEX_SPI_WPMR) Enables the write protection if WPKEY corresponds to 0x535049 ("SPI" in ASCII) Position */
#define FLEX_SPI_WPMR_WPITEN_Pos              _UINT32_(1)                                          /* (FLEX_SPI_WPMR) Write Protection Interrupt Enable Position */
#define FLEX_SPI_WPMR_WPITEN_Msk              (_UINT32_(0x1) << FLEX_SPI_WPMR_WPITEN_Pos)          /* (FLEX_SPI_WPMR) Write Protection Interrupt Enable Mask */
#define FLEX_SPI_WPMR_WPITEN(value)           (FLEX_SPI_WPMR_WPITEN_Msk & (_UINT32_(value) << FLEX_SPI_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the FLEX_SPI_WPMR register */
#define   FLEX_SPI_WPMR_WPITEN_0_Val          _UINT32_(0x0)                                        /* (FLEX_SPI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define   FLEX_SPI_WPMR_WPITEN_1_Val          _UINT32_(0x1)                                        /* (FLEX_SPI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define FLEX_SPI_WPMR_WPITEN_0                (FLEX_SPI_WPMR_WPITEN_0_Val << FLEX_SPI_WPMR_WPITEN_Pos) /* (FLEX_SPI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define FLEX_SPI_WPMR_WPITEN_1                (FLEX_SPI_WPMR_WPITEN_1_Val << FLEX_SPI_WPMR_WPITEN_Pos) /* (FLEX_SPI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define FLEX_SPI_WPMR_WPCREN_Pos              _UINT32_(2)                                          /* (FLEX_SPI_WPMR) Write Protection Control Enable Position */
#define FLEX_SPI_WPMR_WPCREN_Msk              (_UINT32_(0x1) << FLEX_SPI_WPMR_WPCREN_Pos)          /* (FLEX_SPI_WPMR) Write Protection Control Enable Mask */
#define FLEX_SPI_WPMR_WPCREN(value)           (FLEX_SPI_WPMR_WPCREN_Msk & (_UINT32_(value) << FLEX_SPI_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the FLEX_SPI_WPMR register */
#define   FLEX_SPI_WPMR_WPCREN_0_Val          _UINT32_(0x0)                                        /* (FLEX_SPI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define   FLEX_SPI_WPMR_WPCREN_1_Val          _UINT32_(0x1)                                        /* (FLEX_SPI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII).  */
#define FLEX_SPI_WPMR_WPCREN_0                (FLEX_SPI_WPMR_WPCREN_0_Val << FLEX_SPI_WPMR_WPCREN_Pos) /* (FLEX_SPI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define FLEX_SPI_WPMR_WPCREN_1                (FLEX_SPI_WPMR_WPCREN_1_Val << FLEX_SPI_WPMR_WPCREN_Pos) /* (FLEX_SPI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x535049 ("SPI" in ASCII). Position */
#define FLEX_SPI_WPMR_WPKEY_Pos               _UINT32_(8)                                          /* (FLEX_SPI_WPMR) Write Protection Key Position */
#define FLEX_SPI_WPMR_WPKEY_Msk               (_UINT32_(0xFFFFFF) << FLEX_SPI_WPMR_WPKEY_Pos)      /* (FLEX_SPI_WPMR) Write Protection Key Mask */
#define FLEX_SPI_WPMR_WPKEY(value)            (FLEX_SPI_WPMR_WPKEY_Msk & (_UINT32_(value) << FLEX_SPI_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the FLEX_SPI_WPMR register */
#define   FLEX_SPI_WPMR_WPKEY_PASSWD_Val      _UINT32_(0x535049)                                   /* (FLEX_SPI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0  */
#define FLEX_SPI_WPMR_WPKEY_PASSWD            (FLEX_SPI_WPMR_WPKEY_PASSWD_Val << FLEX_SPI_WPMR_WPKEY_Pos) /* (FLEX_SPI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0 Position */
#define FLEX_SPI_WPMR_Msk                     _UINT32_(0xFFFFFF07)                                 /* (FLEX_SPI_WPMR) Register Mask  */


/* -------- FLEX_SPI_WPSR : (FLEXCOM Offset: 0x4E8) ( R/ 32) SPI Write Protection Status Register -------- */
#define FLEX_SPI_WPSR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_SPI_WPSR) SPI Write Protection Status Register  Reset Value */

#define FLEX_SPI_WPSR_WPVS_Pos                _UINT32_(0)                                          /* (FLEX_SPI_WPSR) Write Protection Violation Status Position */
#define FLEX_SPI_WPSR_WPVS_Msk                (_UINT32_(0x1) << FLEX_SPI_WPSR_WPVS_Pos)            /* (FLEX_SPI_WPSR) Write Protection Violation Status Mask */
#define FLEX_SPI_WPSR_WPVS(value)             (FLEX_SPI_WPSR_WPVS_Msk & (_UINT32_(value) << FLEX_SPI_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the FLEX_SPI_WPSR register */
#define   FLEX_SPI_WPSR_WPVS_0_Val            _UINT32_(0x0)                                        /* (FLEX_SPI_WPSR) No write protect violation has occurred since the last read of FLEX_SPI_WPSR.  */
#define   FLEX_SPI_WPSR_WPVS_1_Val            _UINT32_(0x1)                                        /* (FLEX_SPI_WPSR) A write protect violation has occurred since the last read of FLEX_SPI_WPSR. If this violation is an unauthorized  */
#define FLEX_SPI_WPSR_WPVS_0                  (FLEX_SPI_WPSR_WPVS_0_Val << FLEX_SPI_WPSR_WPVS_Pos) /* (FLEX_SPI_WPSR) No write protect violation has occurred since the last read of FLEX_SPI_WPSR. Position */
#define FLEX_SPI_WPSR_WPVS_1                  (FLEX_SPI_WPSR_WPVS_1_Val << FLEX_SPI_WPSR_WPVS_Pos) /* (FLEX_SPI_WPSR) A write protect violation has occurred since the last read of FLEX_SPI_WPSR. If this violation is an unauthorized Position */
#define FLEX_SPI_WPSR_PADERR_Pos              _UINT32_(1)                                          /* (FLEX_SPI_WPSR) Output PAD Error (cleared on read) Position */
#define FLEX_SPI_WPSR_PADERR_Msk              (_UINT32_(0x1) << FLEX_SPI_WPSR_PADERR_Pos)          /* (FLEX_SPI_WPSR) Output PAD Error (cleared on read) Mask */
#define FLEX_SPI_WPSR_PADERR(value)           (FLEX_SPI_WPSR_PADERR_Msk & (_UINT32_(value) << FLEX_SPI_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the FLEX_SPI_WPSR register */
#define   FLEX_SPI_WPSR_PADERR_0_Val          _UINT32_(0x0)                                        /* (FLEX_SPI_WPSR) No error detected during a character transfer.  */
#define   FLEX_SPI_WPSR_PADERR_1_Val          _UINT32_(0x1)                                        /* (FLEX_SPI_WPSR) Two successive bit period with a difference between the data read at the output of the MOSI or NPCS0 pad buffers and the corresponding inputs driven by SPI or abnormal number of SPCK edges (or no clock edge) at the output of SPCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc.  */
#define FLEX_SPI_WPSR_PADERR_0                (FLEX_SPI_WPSR_PADERR_0_Val << FLEX_SPI_WPSR_PADERR_Pos) /* (FLEX_SPI_WPSR) No error detected during a character transfer. Position */
#define FLEX_SPI_WPSR_PADERR_1                (FLEX_SPI_WPSR_PADERR_1_Val << FLEX_SPI_WPSR_PADERR_Pos) /* (FLEX_SPI_WPSR) Two successive bit period with a difference between the data read at the output of the MOSI or NPCS0 pad buffers and the corresponding inputs driven by SPI or abnormal number of SPCK edges (or no clock edge) at the output of SPCK pad buffer in synchronous mode. This may be due to erroneous IO multiplexing configuration, external short circuits, etc. Position */
#define FLEX_SPI_WPSR_WPVSRC_Pos              _UINT32_(8)                                          /* (FLEX_SPI_WPSR) Write Protection Violation Source Position */
#define FLEX_SPI_WPSR_WPVSRC_Msk              (_UINT32_(0xFF) << FLEX_SPI_WPSR_WPVSRC_Pos)         /* (FLEX_SPI_WPSR) Write Protection Violation Source Mask */
#define FLEX_SPI_WPSR_WPVSRC(value)           (FLEX_SPI_WPSR_WPVSRC_Msk & (_UINT32_(value) << FLEX_SPI_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the FLEX_SPI_WPSR register */
#define FLEX_SPI_WPSR_Msk                     _UINT32_(0x0000FF03)                                 /* (FLEX_SPI_WPSR) Register Mask  */


/* -------- FLEX_TWI_CR : (FLEXCOM Offset: 0x600) ( /W 32) TWI Control Register -------- */
#define FLEX_TWI_CR_START_Pos                 _UINT32_(0)                                          /* (FLEX_TWI_CR) Send a START Condition Position */
#define FLEX_TWI_CR_START_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_START_Pos)             /* (FLEX_TWI_CR) Send a START Condition Mask */
#define FLEX_TWI_CR_START(value)              (FLEX_TWI_CR_START_Msk & (_UINT32_(value) << FLEX_TWI_CR_START_Pos)) /* Assignment of value for START in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_START_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_START_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (FLEX_TWI_MMR).  */
#define FLEX_TWI_CR_START_0                   (FLEX_TWI_CR_START_0_Val << FLEX_TWI_CR_START_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_START_1                   (FLEX_TWI_CR_START_1_Val << FLEX_TWI_CR_START_Pos)   /* (FLEX_TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (FLEX_TWI_MMR). Position */
#define FLEX_TWI_CR_STOP_Pos                  _UINT32_(1)                                          /* (FLEX_TWI_CR) Send a STOP Condition Position */
#define FLEX_TWI_CR_STOP_Msk                  (_UINT32_(0x1) << FLEX_TWI_CR_STOP_Pos)              /* (FLEX_TWI_CR) Send a STOP Condition Mask */
#define FLEX_TWI_CR_STOP(value)               (FLEX_TWI_CR_STOP_Msk & (_UINT32_(value) << FLEX_TWI_CR_STOP_Pos)) /* Assignment of value for STOP in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_STOP_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_STOP_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode.  */
#define FLEX_TWI_CR_STOP_0                    (FLEX_TWI_CR_STOP_0_Val << FLEX_TWI_CR_STOP_Pos)     /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_STOP_1                    (FLEX_TWI_CR_STOP_1_Val << FLEX_TWI_CR_STOP_Pos)     /* (FLEX_TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode. Position */
#define FLEX_TWI_CR_MSEN_Pos                  _UINT32_(2)                                          /* (FLEX_TWI_CR) TWI Host Mode Enabled Position */
#define FLEX_TWI_CR_MSEN_Msk                  (_UINT32_(0x1) << FLEX_TWI_CR_MSEN_Pos)              /* (FLEX_TWI_CR) TWI Host Mode Enabled Mask */
#define FLEX_TWI_CR_MSEN(value)               (FLEX_TWI_CR_MSEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_MSEN_Pos)) /* Assignment of value for MSEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_MSEN_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_MSEN_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Enables Host mode (MSDIS must be written to 0).  */
#define FLEX_TWI_CR_MSEN_0                    (FLEX_TWI_CR_MSEN_0_Val << FLEX_TWI_CR_MSEN_Pos)     /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_MSEN_1                    (FLEX_TWI_CR_MSEN_1_Val << FLEX_TWI_CR_MSEN_Pos)     /* (FLEX_TWI_CR) Enables Host mode (MSDIS must be written to 0). Position */
#define FLEX_TWI_CR_MSDIS_Pos                 _UINT32_(3)                                          /* (FLEX_TWI_CR) TWI Host Mode Disabled Position */
#define FLEX_TWI_CR_MSDIS_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_MSDIS_Pos)             /* (FLEX_TWI_CR) TWI Host Mode Disabled Mask */
#define FLEX_TWI_CR_MSDIS(value)              (FLEX_TWI_CR_MSDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_MSDIS_Pos)) /* Assignment of value for MSDIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_MSDIS_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_MSDIS_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling.  */
#define FLEX_TWI_CR_MSDIS_0                   (FLEX_TWI_CR_MSDIS_0_Val << FLEX_TWI_CR_MSDIS_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_MSDIS_1                   (FLEX_TWI_CR_MSDIS_1_Val << FLEX_TWI_CR_MSDIS_Pos)   /* (FLEX_TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling. Position */
#define FLEX_TWI_CR_SVEN_Pos                  _UINT32_(4)                                          /* (FLEX_TWI_CR) TWI Client Mode Enabled Position */
#define FLEX_TWI_CR_SVEN_Msk                  (_UINT32_(0x1) << FLEX_TWI_CR_SVEN_Pos)              /* (FLEX_TWI_CR) TWI Client Mode Enabled Mask */
#define FLEX_TWI_CR_SVEN(value)               (FLEX_TWI_CR_SVEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_SVEN_Pos)) /* Assignment of value for SVEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SVEN_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SVEN_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Enables Client mode (SVDIS must be written to 0).  */
#define FLEX_TWI_CR_SVEN_0                    (FLEX_TWI_CR_SVEN_0_Val << FLEX_TWI_CR_SVEN_Pos)     /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SVEN_1                    (FLEX_TWI_CR_SVEN_1_Val << FLEX_TWI_CR_SVEN_Pos)     /* (FLEX_TWI_CR) Enables Client mode (SVDIS must be written to 0). Position */
#define FLEX_TWI_CR_SVDIS_Pos                 _UINT32_(5)                                          /* (FLEX_TWI_CR) TWI Client Mode Disabled Position */
#define FLEX_TWI_CR_SVDIS_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_SVDIS_Pos)             /* (FLEX_TWI_CR) TWI Client Mode Disabled Mask */
#define FLEX_TWI_CR_SVDIS(value)              (FLEX_TWI_CR_SVDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_SVDIS_Pos)) /* Assignment of value for SVDIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SVDIS_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SVDIS_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling.  */
#define FLEX_TWI_CR_SVDIS_0                   (FLEX_TWI_CR_SVDIS_0_Val << FLEX_TWI_CR_SVDIS_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SVDIS_1                   (FLEX_TWI_CR_SVDIS_1_Val << FLEX_TWI_CR_SVDIS_Pos)   /* (FLEX_TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling. Position */
#define FLEX_TWI_CR_QUICK_Pos                 _UINT32_(6)                                          /* (FLEX_TWI_CR) SMBus Quick Command Position */
#define FLEX_TWI_CR_QUICK_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_QUICK_Pos)             /* (FLEX_TWI_CR) SMBus Quick Command Mask */
#define FLEX_TWI_CR_QUICK(value)              (FLEX_TWI_CR_QUICK_Msk & (_UINT32_(value) << FLEX_TWI_CR_QUICK_Pos)) /* Assignment of value for QUICK in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_QUICK_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_QUICK_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent.  */
#define FLEX_TWI_CR_QUICK_0                   (FLEX_TWI_CR_QUICK_0_Val << FLEX_TWI_CR_QUICK_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_QUICK_1                   (FLEX_TWI_CR_QUICK_1_Val << FLEX_TWI_CR_QUICK_Pos)   /* (FLEX_TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent. Position */
#define FLEX_TWI_CR_SWRST_Pos                 _UINT32_(7)                                          /* (FLEX_TWI_CR) Software Reset Position */
#define FLEX_TWI_CR_SWRST_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_SWRST_Pos)             /* (FLEX_TWI_CR) Software Reset Mask */
#define FLEX_TWI_CR_SWRST(value)              (FLEX_TWI_CR_SWRST_Msk & (_UINT32_(value) << FLEX_TWI_CR_SWRST_Pos)) /* Assignment of value for SWRST in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SWRST_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SWRST_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Equivalent to a system reset.  */
#define FLEX_TWI_CR_SWRST_0                   (FLEX_TWI_CR_SWRST_0_Val << FLEX_TWI_CR_SWRST_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SWRST_1                   (FLEX_TWI_CR_SWRST_1_Val << FLEX_TWI_CR_SWRST_Pos)   /* (FLEX_TWI_CR) Equivalent to a system reset. Position */
#define FLEX_TWI_CR_HSEN_Pos                  _UINT32_(8)                                          /* (FLEX_TWI_CR) TWI High-Speed Mode Enabled Position */
#define FLEX_TWI_CR_HSEN_Msk                  (_UINT32_(0x1) << FLEX_TWI_CR_HSEN_Pos)              /* (FLEX_TWI_CR) TWI High-Speed Mode Enabled Mask */
#define FLEX_TWI_CR_HSEN(value)               (FLEX_TWI_CR_HSEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_HSEN_Pos)) /* Assignment of value for HSEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_HSEN_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_HSEN_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_CR) High-speed mode enabled.  */
#define FLEX_TWI_CR_HSEN_0                    (FLEX_TWI_CR_HSEN_0_Val << FLEX_TWI_CR_HSEN_Pos)     /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_HSEN_1                    (FLEX_TWI_CR_HSEN_1_Val << FLEX_TWI_CR_HSEN_Pos)     /* (FLEX_TWI_CR) High-speed mode enabled. Position */
#define FLEX_TWI_CR_HSDIS_Pos                 _UINT32_(9)                                          /* (FLEX_TWI_CR) TWI High-Speed Mode Disabled Position */
#define FLEX_TWI_CR_HSDIS_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_HSDIS_Pos)             /* (FLEX_TWI_CR) TWI High-Speed Mode Disabled Mask */
#define FLEX_TWI_CR_HSDIS(value)              (FLEX_TWI_CR_HSDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_HSDIS_Pos)) /* Assignment of value for HSDIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_HSDIS_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_HSDIS_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) High-speed mode disabled.  */
#define FLEX_TWI_CR_HSDIS_0                   (FLEX_TWI_CR_HSDIS_0_Val << FLEX_TWI_CR_HSDIS_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_HSDIS_1                   (FLEX_TWI_CR_HSDIS_1_Val << FLEX_TWI_CR_HSDIS_Pos)   /* (FLEX_TWI_CR) High-speed mode disabled. Position */
#define FLEX_TWI_CR_SMBEN_Pos                 _UINT32_(10)                                         /* (FLEX_TWI_CR) SMBus Mode Enabled Position */
#define FLEX_TWI_CR_SMBEN_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_SMBEN_Pos)             /* (FLEX_TWI_CR) SMBus Mode Enabled Mask */
#define FLEX_TWI_CR_SMBEN(value)              (FLEX_TWI_CR_SMBEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_SMBEN_Pos)) /* Assignment of value for SMBEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SMBEN_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SMBEN_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) If SMBDIS = 0, SMBus mode enabled.  */
#define FLEX_TWI_CR_SMBEN_0                   (FLEX_TWI_CR_SMBEN_0_Val << FLEX_TWI_CR_SMBEN_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SMBEN_1                   (FLEX_TWI_CR_SMBEN_1_Val << FLEX_TWI_CR_SMBEN_Pos)   /* (FLEX_TWI_CR) If SMBDIS = 0, SMBus mode enabled. Position */
#define FLEX_TWI_CR_SMBDIS_Pos                _UINT32_(11)                                         /* (FLEX_TWI_CR) SMBus Mode Disabled Position */
#define FLEX_TWI_CR_SMBDIS_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_SMBDIS_Pos)            /* (FLEX_TWI_CR) SMBus Mode Disabled Mask */
#define FLEX_TWI_CR_SMBDIS(value)             (FLEX_TWI_CR_SMBDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_SMBDIS_Pos)) /* Assignment of value for SMBDIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SMBDIS_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SMBDIS_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SMBus mode disabled.  */
#define FLEX_TWI_CR_SMBDIS_0                  (FLEX_TWI_CR_SMBDIS_0_Val << FLEX_TWI_CR_SMBDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SMBDIS_1                  (FLEX_TWI_CR_SMBDIS_1_Val << FLEX_TWI_CR_SMBDIS_Pos) /* (FLEX_TWI_CR) SMBus mode disabled. Position */
#define FLEX_TWI_CR_PECEN_Pos                 _UINT32_(12)                                         /* (FLEX_TWI_CR) Packet Error Checking Enable Position */
#define FLEX_TWI_CR_PECEN_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_PECEN_Pos)             /* (FLEX_TWI_CR) Packet Error Checking Enable Mask */
#define FLEX_TWI_CR_PECEN(value)              (FLEX_TWI_CR_PECEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_PECEN_Pos)) /* Assignment of value for PECEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_PECEN_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_PECEN_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check enabled.  */
#define FLEX_TWI_CR_PECEN_0                   (FLEX_TWI_CR_PECEN_0_Val << FLEX_TWI_CR_PECEN_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_PECEN_1                   (FLEX_TWI_CR_PECEN_1_Val << FLEX_TWI_CR_PECEN_Pos)   /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check enabled. Position */
#define FLEX_TWI_CR_PECDIS_Pos                _UINT32_(13)                                         /* (FLEX_TWI_CR) Packet Error Checking Disable Position */
#define FLEX_TWI_CR_PECDIS_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_PECDIS_Pos)            /* (FLEX_TWI_CR) Packet Error Checking Disable Mask */
#define FLEX_TWI_CR_PECDIS(value)             (FLEX_TWI_CR_PECDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_PECDIS_Pos)) /* Assignment of value for PECDIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_PECDIS_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_PECDIS_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check disabled.  */
#define FLEX_TWI_CR_PECDIS_0                  (FLEX_TWI_CR_PECDIS_0_Val << FLEX_TWI_CR_PECDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_PECDIS_1                  (FLEX_TWI_CR_PECDIS_1_Val << FLEX_TWI_CR_PECDIS_Pos) /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check disabled. Position */
#define FLEX_TWI_CR_PECRQ_Pos                 _UINT32_(14)                                         /* (FLEX_TWI_CR) PEC Request Position */
#define FLEX_TWI_CR_PECRQ_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_PECRQ_Pos)             /* (FLEX_TWI_CR) PEC Request Mask */
#define FLEX_TWI_CR_PECRQ(value)              (FLEX_TWI_CR_PECRQ_Msk & (_UINT32_(value) << FLEX_TWI_CR_PECRQ_Pos)) /* Assignment of value for PECRQ in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_PECRQ_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_PECRQ_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) A PEC check or transmission is requested.  */
#define FLEX_TWI_CR_PECRQ_0                   (FLEX_TWI_CR_PECRQ_0_Val << FLEX_TWI_CR_PECRQ_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_PECRQ_1                   (FLEX_TWI_CR_PECRQ_1_Val << FLEX_TWI_CR_PECRQ_Pos)   /* (FLEX_TWI_CR) A PEC check or transmission is requested. Position */
#define FLEX_TWI_CR_CLEAR_Pos                 _UINT32_(15)                                         /* (FLEX_TWI_CR) Bus CLEAR Command Position */
#define FLEX_TWI_CR_CLEAR_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_CLEAR_Pos)             /* (FLEX_TWI_CR) Bus CLEAR Command Mask */
#define FLEX_TWI_CR_CLEAR(value)              (FLEX_TWI_CR_CLEAR_Msk & (_UINT32_(value) << FLEX_TWI_CR_CLEAR_Pos)) /* Assignment of value for CLEAR in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_CLEAR_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_CLEAR_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) When Host mode is enabled and TWD (SDA)=1, send a Bus Clear Command.  */
#define FLEX_TWI_CR_CLEAR_0                   (FLEX_TWI_CR_CLEAR_0_Val << FLEX_TWI_CR_CLEAR_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_CLEAR_1                   (FLEX_TWI_CR_CLEAR_1_Val << FLEX_TWI_CR_CLEAR_Pos)   /* (FLEX_TWI_CR) When Host mode is enabled and TWD (SDA)=1, send a Bus Clear Command. Position */
#define FLEX_TWI_CR_ACMEN_Pos                 _UINT32_(16)                                         /* (FLEX_TWI_CR) Alternative Command Mode Enable Position */
#define FLEX_TWI_CR_ACMEN_Msk                 (_UINT32_(0x1) << FLEX_TWI_CR_ACMEN_Pos)             /* (FLEX_TWI_CR) Alternative Command Mode Enable Mask */
#define FLEX_TWI_CR_ACMEN(value)              (FLEX_TWI_CR_ACMEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_ACMEN_Pos)) /* Assignment of value for ACMEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_ACMEN_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_ACMEN_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Alternative Command mode enabled.  */
#define FLEX_TWI_CR_ACMEN_0                   (FLEX_TWI_CR_ACMEN_0_Val << FLEX_TWI_CR_ACMEN_Pos)   /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_ACMEN_1                   (FLEX_TWI_CR_ACMEN_1_Val << FLEX_TWI_CR_ACMEN_Pos)   /* (FLEX_TWI_CR) Alternative Command mode enabled. Position */
#define FLEX_TWI_CR_ACMDIS_Pos                _UINT32_(17)                                         /* (FLEX_TWI_CR) Alternative Command Mode Disable Position */
#define FLEX_TWI_CR_ACMDIS_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_ACMDIS_Pos)            /* (FLEX_TWI_CR) Alternative Command Mode Disable Mask */
#define FLEX_TWI_CR_ACMDIS(value)             (FLEX_TWI_CR_ACMDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_ACMDIS_Pos)) /* Assignment of value for ACMDIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_ACMDIS_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_ACMDIS_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Alternative Command mode disabled.  */
#define FLEX_TWI_CR_ACMDIS_0                  (FLEX_TWI_CR_ACMDIS_0_Val << FLEX_TWI_CR_ACMDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_ACMDIS_1                  (FLEX_TWI_CR_ACMDIS_1_Val << FLEX_TWI_CR_ACMDIS_Pos) /* (FLEX_TWI_CR) Alternative Command mode disabled. Position */
#define FLEX_TWI_CR_SCLRBD_Pos                _UINT32_(18)                                         /* (FLEX_TWI_CR) SCL Rise Boost Disable Position */
#define FLEX_TWI_CR_SCLRBD_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_SCLRBD_Pos)            /* (FLEX_TWI_CR) SCL Rise Boost Disable Mask */
#define FLEX_TWI_CR_SCLRBD(value)             (FLEX_TWI_CR_SCLRBD_Msk & (_UINT32_(value) << FLEX_TWI_CR_SCLRBD_Pos)) /* Assignment of value for SCLRBD in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SCLRBD_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SCLRBD_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SCL rise time boost is disabled. See Section 10.3.12.2 "SCL Rising Time Control" for details.  */
#define FLEX_TWI_CR_SCLRBD_0                  (FLEX_TWI_CR_SCLRBD_0_Val << FLEX_TWI_CR_SCLRBD_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SCLRBD_1                  (FLEX_TWI_CR_SCLRBD_1_Val << FLEX_TWI_CR_SCLRBD_Pos) /* (FLEX_TWI_CR) SCL rise time boost is disabled. See Section 10.3.12.2 "SCL Rising Time Control" for details. Position */
#define FLEX_TWI_CR_SCLRBE_Pos                _UINT32_(19)                                         /* (FLEX_TWI_CR) SCL Rise Boost Enable Position */
#define FLEX_TWI_CR_SCLRBE_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_SCLRBE_Pos)            /* (FLEX_TWI_CR) SCL Rise Boost Enable Mask */
#define FLEX_TWI_CR_SCLRBE(value)             (FLEX_TWI_CR_SCLRBE_Msk & (_UINT32_(value) << FLEX_TWI_CR_SCLRBE_Pos)) /* Assignment of value for SCLRBE in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_SCLRBE_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_SCLRBE_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SCL rise time is boosted in High-Speed mode. Duration of the boost is configured with FLEX_TWI_MMR.SCLRBL. See Section 10.3.12.2 "SCL Rising Time Control" for details.  */
#define FLEX_TWI_CR_SCLRBE_0                  (FLEX_TWI_CR_SCLRBE_0_Val << FLEX_TWI_CR_SCLRBE_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_SCLRBE_1                  (FLEX_TWI_CR_SCLRBE_1_Val << FLEX_TWI_CR_SCLRBE_Pos) /* (FLEX_TWI_CR) SCL rise time is boosted in High-Speed mode. Duration of the boost is configured with FLEX_TWI_MMR.SCLRBL. See Section 10.3.12.2 "SCL Rising Time Control" for details. Position */
#define FLEX_TWI_CR_THRCLR_Pos                _UINT32_(24)                                         /* (FLEX_TWI_CR) Transmit Holding Register Clear Position */
#define FLEX_TWI_CR_THRCLR_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_THRCLR_Pos)            /* (FLEX_TWI_CR) Transmit Holding Register Clear Mask */
#define FLEX_TWI_CR_THRCLR(value)             (FLEX_TWI_CR_THRCLR_Msk & (_UINT32_(value) << FLEX_TWI_CR_THRCLR_Pos)) /* Assignment of value for THRCLR in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_THRCLR_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_THRCLR_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Clear the Transmit Holding Register and set TXRDY, TXCOMP flags.  */
#define FLEX_TWI_CR_THRCLR_0                  (FLEX_TWI_CR_THRCLR_0_Val << FLEX_TWI_CR_THRCLR_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_THRCLR_1                  (FLEX_TWI_CR_THRCLR_1_Val << FLEX_TWI_CR_THRCLR_Pos) /* (FLEX_TWI_CR) Clear the Transmit Holding Register and set TXRDY, TXCOMP flags. Position */
#define FLEX_TWI_CR_LOCKCLR_Pos               _UINT32_(26)                                         /* (FLEX_TWI_CR) Lock Clear Position */
#define FLEX_TWI_CR_LOCKCLR_Msk               (_UINT32_(0x1) << FLEX_TWI_CR_LOCKCLR_Pos)           /* (FLEX_TWI_CR) Lock Clear Mask */
#define FLEX_TWI_CR_LOCKCLR(value)            (FLEX_TWI_CR_LOCKCLR_Msk & (_UINT32_(value) << FLEX_TWI_CR_LOCKCLR_Pos)) /* Assignment of value for LOCKCLR in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_LOCKCLR_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_LOCKCLR_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Clear the TWI FSM lock.  */
#define FLEX_TWI_CR_LOCKCLR_0                 (FLEX_TWI_CR_LOCKCLR_0_Val << FLEX_TWI_CR_LOCKCLR_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_LOCKCLR_1                 (FLEX_TWI_CR_LOCKCLR_1_Val << FLEX_TWI_CR_LOCKCLR_Pos) /* (FLEX_TWI_CR) Clear the TWI FSM lock. Position */
#define FLEX_TWI_CR_FIFOEN_Pos                _UINT32_(28)                                         /* (FLEX_TWI_CR) FIFO Enable Position */
#define FLEX_TWI_CR_FIFOEN_Msk                (_UINT32_(0x1) << FLEX_TWI_CR_FIFOEN_Pos)            /* (FLEX_TWI_CR) FIFO Enable Mask */
#define FLEX_TWI_CR_FIFOEN(value)             (FLEX_TWI_CR_FIFOEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_FIFOEN_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFOEN_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Enable the Transmit and Receive FIFOs  */
#define FLEX_TWI_CR_FIFOEN_0                  (FLEX_TWI_CR_FIFOEN_0_Val << FLEX_TWI_CR_FIFOEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFOEN_1                  (FLEX_TWI_CR_FIFOEN_1_Val << FLEX_TWI_CR_FIFOEN_Pos) /* (FLEX_TWI_CR) Enable the Transmit and Receive FIFOs Position */
#define FLEX_TWI_CR_FIFODIS_Pos               _UINT32_(29)                                         /* (FLEX_TWI_CR) FIFO Disable Position */
#define FLEX_TWI_CR_FIFODIS_Msk               (_UINT32_(0x1) << FLEX_TWI_CR_FIFODIS_Pos)           /* (FLEX_TWI_CR) FIFO Disable Mask */
#define FLEX_TWI_CR_FIFODIS(value)            (FLEX_TWI_CR_FIFODIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFODIS_Pos)) /* Assignment of value for FIFODIS in the FLEX_TWI_CR register */
#define   FLEX_TWI_CR_FIFODIS_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFODIS_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Disable the Transmit and Receive FIFOs  */
#define FLEX_TWI_CR_FIFODIS_0                 (FLEX_TWI_CR_FIFODIS_0_Val << FLEX_TWI_CR_FIFODIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFODIS_1                 (FLEX_TWI_CR_FIFODIS_1_Val << FLEX_TWI_CR_FIFODIS_Pos) /* (FLEX_TWI_CR) Disable the Transmit and Receive FIFOs Position */
#define FLEX_TWI_CR_Msk                       _UINT32_(0x350FFFFF)                                 /* (FLEX_TWI_CR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEX_TWI_CR_FIFO_ENABLED_START_Pos    _UINT32_(0)                                          /* (FLEX_TWI_CR) Send a START Condition Position */
#define FLEX_TWI_CR_FIFO_ENABLED_START_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_START_Pos) /* (FLEX_TWI_CR) Send a START Condition Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_START(value) (FLEX_TWI_CR_FIFO_ENABLED_START_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_START_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_START_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_START_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (FLEX_TWI_MMR).  */
#define FLEX_TWI_CR_FIFO_ENABLED_START_0      (FLEX_TWI_CR_FIFO_ENABLED_START_0_Val << FLEX_TWI_CR_FIFO_ENABLED_START_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_START_1      (FLEX_TWI_CR_FIFO_ENABLED_START_1_Val << FLEX_TWI_CR_FIFO_ENABLED_START_Pos) /* (FLEX_TWI_CR) A frame beginning with a START bit is transmitted according to the features defined in the TWI Host Mode Register (FLEX_TWI_MMR). Position */
#define FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos     _UINT32_(1)                                          /* (FLEX_TWI_CR) Send a STOP Condition Position */
#define FLEX_TWI_CR_FIFO_ENABLED_STOP_Msk     (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos) /* (FLEX_TWI_CR) Send a STOP Condition Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_STOP(value)  (FLEX_TWI_CR_FIFO_ENABLED_STOP_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_STOP_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_STOP_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode.  */
#define FLEX_TWI_CR_FIFO_ENABLED_STOP_0       (FLEX_TWI_CR_FIFO_ENABLED_STOP_0_Val << FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_STOP_1       (FLEX_TWI_CR_FIFO_ENABLED_STOP_1_Val << FLEX_TWI_CR_FIFO_ENABLED_STOP_Pos) /* (FLEX_TWI_CR) STOP condition is sent just after completing the current byte transmission in Host Read mode. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos     _UINT32_(2)                                          /* (FLEX_TWI_CR) TWI Host Mode Enabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_MSEN_Msk     (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos) /* (FLEX_TWI_CR) TWI Host Mode Enabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_MSEN(value)  (FLEX_TWI_CR_FIFO_ENABLED_MSEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_MSEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_MSEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Enables Host mode (MSDIS must be written to 0).  */
#define FLEX_TWI_CR_FIFO_ENABLED_MSEN_0       (FLEX_TWI_CR_FIFO_ENABLED_MSEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_MSEN_1       (FLEX_TWI_CR_FIFO_ENABLED_MSEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_MSEN_Pos) /* (FLEX_TWI_CR) Enables Host mode (MSDIS must be written to 0). Position */
#define FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos    _UINT32_(3)                                          /* (FLEX_TWI_CR) TWI Host Mode Disabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos) /* (FLEX_TWI_CR) TWI Host Mode Disabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_MSDIS(value) (FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_MSDIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_MSDIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling.  */
#define FLEX_TWI_CR_FIFO_ENABLED_MSDIS_0      (FLEX_TWI_CR_FIFO_ENABLED_MSDIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_MSDIS_1      (FLEX_TWI_CR_FIFO_ENABLED_MSDIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_MSDIS_Pos) /* (FLEX_TWI_CR) Host mode is disabled, all pending data is transmitted. The shifter and holding characters (if it contains data) are transmitted in case of write operation. In read operation, the character being transferred must be completely received before disabling. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos     _UINT32_(4)                                          /* (FLEX_TWI_CR) TWI Client Mode Enabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SVEN_Msk     (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos) /* (FLEX_TWI_CR) TWI Client Mode Enabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_SVEN(value)  (FLEX_TWI_CR_FIFO_ENABLED_SVEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_SVEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_SVEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Enables Client mode (SVDIS must be written to 0).  */
#define FLEX_TWI_CR_FIFO_ENABLED_SVEN_0       (FLEX_TWI_CR_FIFO_ENABLED_SVEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SVEN_1       (FLEX_TWI_CR_FIFO_ENABLED_SVEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_SVEN_Pos) /* (FLEX_TWI_CR) Enables Client mode (SVDIS must be written to 0). Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos    _UINT32_(5)                                          /* (FLEX_TWI_CR) TWI Client Mode Disabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos) /* (FLEX_TWI_CR) TWI Client Mode Disabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_SVDIS(value) (FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_SVDIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_SVDIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling.  */
#define FLEX_TWI_CR_FIFO_ENABLED_SVDIS_0      (FLEX_TWI_CR_FIFO_ENABLED_SVDIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SVDIS_1      (FLEX_TWI_CR_FIFO_ENABLED_SVDIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_SVDIS_Pos) /* (FLEX_TWI_CR) Client mode is disabled. The shifter and holding characters (if it contains data) are transmitted in case of read operation. In write operation, the character being transferred must be completely received before disabling. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos    _UINT32_(6)                                          /* (FLEX_TWI_CR) SMBus Quick Command Position */
#define FLEX_TWI_CR_FIFO_ENABLED_QUICK_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos) /* (FLEX_TWI_CR) SMBus Quick Command Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_QUICK(value) (FLEX_TWI_CR_FIFO_ENABLED_QUICK_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_QUICK_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_QUICK_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent.  */
#define FLEX_TWI_CR_FIFO_ENABLED_QUICK_0      (FLEX_TWI_CR_FIFO_ENABLED_QUICK_0_Val << FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_QUICK_1      (FLEX_TWI_CR_FIFO_ENABLED_QUICK_1_Val << FLEX_TWI_CR_FIFO_ENABLED_QUICK_Pos) /* (FLEX_TWI_CR) If Host mode is enabled, a SMBus Quick Command is sent. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos    _UINT32_(7)                                          /* (FLEX_TWI_CR) Software Reset Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SWRST_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos) /* (FLEX_TWI_CR) Software Reset Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_SWRST(value) (FLEX_TWI_CR_FIFO_ENABLED_SWRST_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_SWRST_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_SWRST_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Equivalent to a system reset.  */
#define FLEX_TWI_CR_FIFO_ENABLED_SWRST_0      (FLEX_TWI_CR_FIFO_ENABLED_SWRST_0_Val << FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SWRST_1      (FLEX_TWI_CR_FIFO_ENABLED_SWRST_1_Val << FLEX_TWI_CR_FIFO_ENABLED_SWRST_Pos) /* (FLEX_TWI_CR) Equivalent to a system reset. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos     _UINT32_(8)                                          /* (FLEX_TWI_CR) TWI High-Speed Mode Enabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_HSEN_Msk     (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos) /* (FLEX_TWI_CR) TWI High-Speed Mode Enabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_HSEN(value)  (FLEX_TWI_CR_FIFO_ENABLED_HSEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_HSEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_HSEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) High-speed mode enabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_HSEN_0       (FLEX_TWI_CR_FIFO_ENABLED_HSEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_HSEN_1       (FLEX_TWI_CR_FIFO_ENABLED_HSEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_HSEN_Pos) /* (FLEX_TWI_CR) High-speed mode enabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos    _UINT32_(9)                                          /* (FLEX_TWI_CR) TWI High-Speed Mode Disabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos) /* (FLEX_TWI_CR) TWI High-Speed Mode Disabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_HSDIS(value) (FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_HSDIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_HSDIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) High-speed mode disabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_HSDIS_0      (FLEX_TWI_CR_FIFO_ENABLED_HSDIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_HSDIS_1      (FLEX_TWI_CR_FIFO_ENABLED_HSDIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_HSDIS_Pos) /* (FLEX_TWI_CR) High-speed mode disabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos    _UINT32_(10)                                         /* (FLEX_TWI_CR) SMBus Mode Enabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos) /* (FLEX_TWI_CR) SMBus Mode Enabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBEN(value) (FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_SMBEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_SMBEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) If SMBDIS = 0, SMBus mode enabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBEN_0      (FLEX_TWI_CR_FIFO_ENABLED_SMBEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBEN_1      (FLEX_TWI_CR_FIFO_ENABLED_SMBEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_SMBEN_Pos) /* (FLEX_TWI_CR) If SMBDIS = 0, SMBus mode enabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos   _UINT32_(11)                                         /* (FLEX_TWI_CR) SMBus Mode Disabled Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Msk   (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos) /* (FLEX_TWI_CR) SMBus Mode Disabled Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBDIS(value) (FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SMBus mode disabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_0     (FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_1     (FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_SMBDIS_Pos) /* (FLEX_TWI_CR) SMBus mode disabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos    _UINT32_(12)                                         /* (FLEX_TWI_CR) Packet Error Checking Enable Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECEN_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos) /* (FLEX_TWI_CR) Packet Error Checking Enable Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_PECEN(value) (FLEX_TWI_CR_FIFO_ENABLED_PECEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_PECEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_PECEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check enabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_PECEN_0      (FLEX_TWI_CR_FIFO_ENABLED_PECEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECEN_1      (FLEX_TWI_CR_FIFO_ENABLED_PECEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_PECEN_Pos) /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check enabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos   _UINT32_(13)                                         /* (FLEX_TWI_CR) Packet Error Checking Disable Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Msk   (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos) /* (FLEX_TWI_CR) Packet Error Checking Disable Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_PECDIS(value) (FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_PECDIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_PECDIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check disabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_PECDIS_0     (FLEX_TWI_CR_FIFO_ENABLED_PECDIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECDIS_1     (FLEX_TWI_CR_FIFO_ENABLED_PECDIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_PECDIS_Pos) /* (FLEX_TWI_CR) SMBus PEC (CRC) generation and check disabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos    _UINT32_(14)                                         /* (FLEX_TWI_CR) PEC Request Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos) /* (FLEX_TWI_CR) PEC Request Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_PECRQ(value) (FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_PECRQ_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_PECRQ_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) A PEC check or transmission is requested.  */
#define FLEX_TWI_CR_FIFO_ENABLED_PECRQ_0      (FLEX_TWI_CR_FIFO_ENABLED_PECRQ_0_Val << FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_PECRQ_1      (FLEX_TWI_CR_FIFO_ENABLED_PECRQ_1_Val << FLEX_TWI_CR_FIFO_ENABLED_PECRQ_Pos) /* (FLEX_TWI_CR) A PEC check or transmission is requested. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos    _UINT32_(15)                                         /* (FLEX_TWI_CR) Bus CLEAR Command Position */
#define FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos) /* (FLEX_TWI_CR) Bus CLEAR Command Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_CLEAR(value) (FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_CLEAR_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_CLEAR_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) If Host mode is enabled, send a bus clear command.  */
#define FLEX_TWI_CR_FIFO_ENABLED_CLEAR_0      (FLEX_TWI_CR_FIFO_ENABLED_CLEAR_0_Val << FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_CLEAR_1      (FLEX_TWI_CR_FIFO_ENABLED_CLEAR_1_Val << FLEX_TWI_CR_FIFO_ENABLED_CLEAR_Pos) /* (FLEX_TWI_CR) If Host mode is enabled, send a bus clear command. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos    _UINT32_(16)                                         /* (FLEX_TWI_CR) Alternative Command Mode Enable Position */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Msk    (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos) /* (FLEX_TWI_CR) Alternative Command Mode Enable Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMEN(value) (FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_ACMEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_ACMEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Alternative Command mode enabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMEN_0      (FLEX_TWI_CR_FIFO_ENABLED_ACMEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMEN_1      (FLEX_TWI_CR_FIFO_ENABLED_ACMEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_ACMEN_Pos) /* (FLEX_TWI_CR) Alternative Command mode enabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos   _UINT32_(17)                                         /* (FLEX_TWI_CR) Alternative Command Mode Disable Position */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Msk   (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos) /* (FLEX_TWI_CR) Alternative Command Mode Disable Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMDIS(value) (FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Alternative Command mode disabled.  */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_0     (FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_1     (FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_ACMDIS_Pos) /* (FLEX_TWI_CR) Alternative Command mode disabled. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos   _UINT32_(24)                                         /* (FLEX_TWI_CR) Transmit FIFO Clear Position */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Msk   (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos) /* (FLEX_TWI_CR) Transmit FIFO Clear Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFCLR(value) (FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Empties the Transmit FIFO.  */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_0     (FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_0_Val << FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_1     (FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_1_Val << FLEX_TWI_CR_FIFO_ENABLED_TXFCLR_Pos) /* (FLEX_TWI_CR) Empties the Transmit FIFO. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos   _UINT32_(25)                                         /* (FLEX_TWI_CR) Receive FIFO Clear Position */
#define FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Msk   (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos) /* (FLEX_TWI_CR) Receive FIFO Clear Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_RXFCLR(value) (FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Empties the Receive FIFO.  */
#define FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_0     (FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_0_Val << FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_1     (FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_1_Val << FLEX_TWI_CR_FIFO_ENABLED_RXFCLR_Pos) /* (FLEX_TWI_CR) Empties the Receive FIFO. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos  _UINT32_(26)                                         /* (FLEX_TWI_CR) Transmit FIFO Lock CLEAR Position */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Msk  (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos) /* (FLEX_TWI_CR) Transmit FIFO Lock CLEAR Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR(value) (FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Clears the Transmit FIFO Lock.  */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_0    (FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_0_Val << FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_1    (FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_1_Val << FLEX_TWI_CR_FIFO_ENABLED_TXFLCLR_Pos) /* (FLEX_TWI_CR) Clears the Transmit FIFO Lock. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos   _UINT32_(28)                                         /* (FLEX_TWI_CR) FIFO Enable Position */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Msk   (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos) /* (FLEX_TWI_CR) FIFO Enable Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFOEN(value) (FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Enable the Transmit and Receive FIFOs.  */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_0     (FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_0_Val << FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_1     (FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_1_Val << FLEX_TWI_CR_FIFO_ENABLED_FIFOEN_Pos) /* (FLEX_TWI_CR) Enable the Transmit and Receive FIFOs. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos  _UINT32_(29)                                         /* (FLEX_TWI_CR) FIFO Disable Position */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Msk  (_UINT32_(0x1) << FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos) /* (FLEX_TWI_CR) FIFO Disable Mask */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFODIS(value) (FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Msk & (_UINT32_(value) << FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos))
#define   FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CR) No effect.  */
#define   FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_CR) Disable the Transmit and Receive FIFOs.  */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_0    (FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_0_Val << FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos) /* (FLEX_TWI_CR) No effect. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_1    (FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_1_Val << FLEX_TWI_CR_FIFO_ENABLED_FIFODIS_Pos) /* (FLEX_TWI_CR) Disable the Transmit and Receive FIFOs. Position */
#define FLEX_TWI_CR_FIFO_ENABLED_Msk          _UINT32_(0x3703FFFF)                                 /* (FLEX_TWI_CR_FIFO_ENABLED) Register Mask  */


/* -------- FLEX_TWI_MMR : (FLEXCOM Offset: 0x604) (R/W 32) TWI Host Mode Register -------- */
#define FLEX_TWI_MMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_MMR) TWI Host Mode Register  Reset Value */

#define FLEX_TWI_MMR_IADRSZ_Pos               _UINT32_(8)                                          /* (FLEX_TWI_MMR) Internal Device Address Size Position */
#define FLEX_TWI_MMR_IADRSZ_Msk               (_UINT32_(0x3) << FLEX_TWI_MMR_IADRSZ_Pos)           /* (FLEX_TWI_MMR) Internal Device Address Size Mask */
#define FLEX_TWI_MMR_IADRSZ(value)            (FLEX_TWI_MMR_IADRSZ_Msk & (_UINT32_(value) << FLEX_TWI_MMR_IADRSZ_Pos)) /* Assignment of value for IADRSZ in the FLEX_TWI_MMR register */
#define   FLEX_TWI_MMR_IADRSZ_NONE_Val        _UINT32_(0x0)                                        /* (FLEX_TWI_MMR) No internal device address  */
#define   FLEX_TWI_MMR_IADRSZ_1_BYTE_Val      _UINT32_(0x1)                                        /* (FLEX_TWI_MMR) One-byte internal device address  */
#define   FLEX_TWI_MMR_IADRSZ_2_BYTE_Val      _UINT32_(0x2)                                        /* (FLEX_TWI_MMR) Two-byte internal device address  */
#define   FLEX_TWI_MMR_IADRSZ_3_BYTE_Val      _UINT32_(0x3)                                        /* (FLEX_TWI_MMR) Three-byte internal device address  */
#define FLEX_TWI_MMR_IADRSZ_NONE              (FLEX_TWI_MMR_IADRSZ_NONE_Val << FLEX_TWI_MMR_IADRSZ_Pos) /* (FLEX_TWI_MMR) No internal device address Position */
#define FLEX_TWI_MMR_IADRSZ_1_BYTE            (FLEX_TWI_MMR_IADRSZ_1_BYTE_Val << FLEX_TWI_MMR_IADRSZ_Pos) /* (FLEX_TWI_MMR) One-byte internal device address Position */
#define FLEX_TWI_MMR_IADRSZ_2_BYTE            (FLEX_TWI_MMR_IADRSZ_2_BYTE_Val << FLEX_TWI_MMR_IADRSZ_Pos) /* (FLEX_TWI_MMR) Two-byte internal device address Position */
#define FLEX_TWI_MMR_IADRSZ_3_BYTE            (FLEX_TWI_MMR_IADRSZ_3_BYTE_Val << FLEX_TWI_MMR_IADRSZ_Pos) /* (FLEX_TWI_MMR) Three-byte internal device address Position */
#define FLEX_TWI_MMR_MREAD_Pos                _UINT32_(12)                                         /* (FLEX_TWI_MMR) Host Read Direction Position */
#define FLEX_TWI_MMR_MREAD_Msk                (_UINT32_(0x1) << FLEX_TWI_MMR_MREAD_Pos)            /* (FLEX_TWI_MMR) Host Read Direction Mask */
#define FLEX_TWI_MMR_MREAD(value)             (FLEX_TWI_MMR_MREAD_Msk & (_UINT32_(value) << FLEX_TWI_MMR_MREAD_Pos)) /* Assignment of value for MREAD in the FLEX_TWI_MMR register */
#define   FLEX_TWI_MMR_MREAD_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_MMR) Host write direction.  */
#define   FLEX_TWI_MMR_MREAD_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_MMR) Host read direction.  */
#define FLEX_TWI_MMR_MREAD_0                  (FLEX_TWI_MMR_MREAD_0_Val << FLEX_TWI_MMR_MREAD_Pos) /* (FLEX_TWI_MMR) Host write direction. Position */
#define FLEX_TWI_MMR_MREAD_1                  (FLEX_TWI_MMR_MREAD_1_Val << FLEX_TWI_MMR_MREAD_Pos) /* (FLEX_TWI_MMR) Host read direction. Position */
#define FLEX_TWI_MMR_SCLRBL_Pos               _UINT32_(13)                                         /* (FLEX_TWI_MMR) SCL Rise Boost Level Position */
#define FLEX_TWI_MMR_SCLRBL_Msk               (_UINT32_(0x3) << FLEX_TWI_MMR_SCLRBL_Pos)           /* (FLEX_TWI_MMR) SCL Rise Boost Level Mask */
#define FLEX_TWI_MMR_SCLRBL(value)            (FLEX_TWI_MMR_SCLRBL_Msk & (_UINT32_(value) << FLEX_TWI_MMR_SCLRBL_Pos)) /* Assignment of value for SCLRBL in the FLEX_TWI_MMR register */
#define FLEX_TWI_MMR_DADR_Pos                 _UINT32_(16)                                         /* (FLEX_TWI_MMR) Device Address Position */
#define FLEX_TWI_MMR_DADR_Msk                 (_UINT32_(0x7F) << FLEX_TWI_MMR_DADR_Pos)            /* (FLEX_TWI_MMR) Device Address Mask */
#define FLEX_TWI_MMR_DADR(value)              (FLEX_TWI_MMR_DADR_Msk & (_UINT32_(value) << FLEX_TWI_MMR_DADR_Pos)) /* Assignment of value for DADR in the FLEX_TWI_MMR register */
#define FLEX_TWI_MMR_NOAP_Pos                 _UINT32_(24)                                         /* (FLEX_TWI_MMR) No Auto-Stop On NACK Error Position */
#define FLEX_TWI_MMR_NOAP_Msk                 (_UINT32_(0x1) << FLEX_TWI_MMR_NOAP_Pos)             /* (FLEX_TWI_MMR) No Auto-Stop On NACK Error Mask */
#define FLEX_TWI_MMR_NOAP(value)              (FLEX_TWI_MMR_NOAP_Msk & (_UINT32_(value) << FLEX_TWI_MMR_NOAP_Pos)) /* Assignment of value for NOAP in the FLEX_TWI_MMR register */
#define   FLEX_TWI_MMR_NOAP_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_MMR) A stop condition is sent automatically upon Not-Acknowledge error detection.  */
#define   FLEX_TWI_MMR_NOAP_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_MMR) No automatic action is performed upon Not-Acknowledge error detection.  */
#define FLEX_TWI_MMR_NOAP_0                   (FLEX_TWI_MMR_NOAP_0_Val << FLEX_TWI_MMR_NOAP_Pos)   /* (FLEX_TWI_MMR) A stop condition is sent automatically upon Not-Acknowledge error detection. Position */
#define FLEX_TWI_MMR_NOAP_1                   (FLEX_TWI_MMR_NOAP_1_Val << FLEX_TWI_MMR_NOAP_Pos)   /* (FLEX_TWI_MMR) No automatic action is performed upon Not-Acknowledge error detection. Position */
#define FLEX_TWI_MMR_Msk                      _UINT32_(0x017F7300)                                 /* (FLEX_TWI_MMR) Register Mask  */


/* -------- FLEX_TWI_SMR : (FLEXCOM Offset: 0x608) (R/W 32) TWI Client Mode Register -------- */
#define FLEX_TWI_SMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_SMR) TWI Client Mode Register  Reset Value */

#define FLEX_TWI_SMR_NACKEN_Pos               _UINT32_(0)                                          /* (FLEX_TWI_SMR) Client Receiver Data Phase NACK Enable Position */
#define FLEX_TWI_SMR_NACKEN_Msk               (_UINT32_(0x1) << FLEX_TWI_SMR_NACKEN_Pos)           /* (FLEX_TWI_SMR) Client Receiver Data Phase NACK Enable Mask */
#define FLEX_TWI_SMR_NACKEN(value)            (FLEX_TWI_SMR_NACKEN_Msk & (_UINT32_(value) << FLEX_TWI_SMR_NACKEN_Pos)) /* Assignment of value for NACKEN in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_NACKEN_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Normal value to be returned in the ACK cycle of the data phase in Client Receiver mode.  */
#define   FLEX_TWI_SMR_NACKEN_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) NACK value to be returned in the ACK cycle of the data phase in Client Receiver mode.  */
#define FLEX_TWI_SMR_NACKEN_0                 (FLEX_TWI_SMR_NACKEN_0_Val << FLEX_TWI_SMR_NACKEN_Pos) /* (FLEX_TWI_SMR) Normal value to be returned in the ACK cycle of the data phase in Client Receiver mode. Position */
#define FLEX_TWI_SMR_NACKEN_1                 (FLEX_TWI_SMR_NACKEN_1_Val << FLEX_TWI_SMR_NACKEN_Pos) /* (FLEX_TWI_SMR) NACK value to be returned in the ACK cycle of the data phase in Client Receiver mode. Position */
#define FLEX_TWI_SMR_SMDA_Pos                 _UINT32_(2)                                          /* (FLEX_TWI_SMR) SMBus Default Address Position */
#define FLEX_TWI_SMR_SMDA_Msk                 (_UINT32_(0x1) << FLEX_TWI_SMR_SMDA_Pos)             /* (FLEX_TWI_SMR) SMBus Default Address Mask */
#define FLEX_TWI_SMR_SMDA(value)              (FLEX_TWI_SMR_SMDA_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SMDA_Pos)) /* Assignment of value for SMDA in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SMDA_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Acknowledge of the SMBus Default Address disabled.  */
#define   FLEX_TWI_SMR_SMDA_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Acknowledge of the SMBus Default Address enabled.  */
#define FLEX_TWI_SMR_SMDA_0                   (FLEX_TWI_SMR_SMDA_0_Val << FLEX_TWI_SMR_SMDA_Pos)   /* (FLEX_TWI_SMR) Acknowledge of the SMBus Default Address disabled. Position */
#define FLEX_TWI_SMR_SMDA_1                   (FLEX_TWI_SMR_SMDA_1_Val << FLEX_TWI_SMR_SMDA_Pos)   /* (FLEX_TWI_SMR) Acknowledge of the SMBus Default Address enabled. Position */
#define FLEX_TWI_SMR_SMHH_Pos                 _UINT32_(3)                                          /* (FLEX_TWI_SMR) SMBus Host Header Position */
#define FLEX_TWI_SMR_SMHH_Msk                 (_UINT32_(0x1) << FLEX_TWI_SMR_SMHH_Pos)             /* (FLEX_TWI_SMR) SMBus Host Header Mask */
#define FLEX_TWI_SMR_SMHH(value)              (FLEX_TWI_SMR_SMHH_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SMHH_Pos)) /* Assignment of value for SMHH in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SMHH_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Acknowledge of the SMBus Host Header disabled.  */
#define   FLEX_TWI_SMR_SMHH_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Acknowledge of the SMBus Host Header enabled.  */
#define FLEX_TWI_SMR_SMHH_0                   (FLEX_TWI_SMR_SMHH_0_Val << FLEX_TWI_SMR_SMHH_Pos)   /* (FLEX_TWI_SMR) Acknowledge of the SMBus Host Header disabled. Position */
#define FLEX_TWI_SMR_SMHH_1                   (FLEX_TWI_SMR_SMHH_1_Val << FLEX_TWI_SMR_SMHH_Pos)   /* (FLEX_TWI_SMR) Acknowledge of the SMBus Host Header enabled. Position */
#define FLEX_TWI_SMR_SADAT_Pos                _UINT32_(4)                                          /* (FLEX_TWI_SMR) Client Address Treated as Data Position */
#define FLEX_TWI_SMR_SADAT_Msk                (_UINT32_(0x1) << FLEX_TWI_SMR_SADAT_Pos)            /* (FLEX_TWI_SMR) Client Address Treated as Data Mask */
#define FLEX_TWI_SMR_SADAT(value)             (FLEX_TWI_SMR_SADAT_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SADAT_Pos)) /* Assignment of value for SADAT in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SADAT_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Client address is handled normally (will not trig RXRDY flag and will not fill FLEX_TWI_RHR upon reception).  */
#define   FLEX_TWI_SMR_SADAT_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Client address is handled as data field, RXRDY will be set and FLEX_TWI_RHR filled upon client address reception.  */
#define FLEX_TWI_SMR_SADAT_0                  (FLEX_TWI_SMR_SADAT_0_Val << FLEX_TWI_SMR_SADAT_Pos) /* (FLEX_TWI_SMR) Client address is handled normally (will not trig RXRDY flag and will not fill FLEX_TWI_RHR upon reception). Position */
#define FLEX_TWI_SMR_SADAT_1                  (FLEX_TWI_SMR_SADAT_1_Val << FLEX_TWI_SMR_SADAT_Pos) /* (FLEX_TWI_SMR) Client address is handled as data field, RXRDY will be set and FLEX_TWI_RHR filled upon client address reception. Position */
#define FLEX_TWI_SMR_BSEL_Pos                 _UINT32_(5)                                          /* (FLEX_TWI_SMR) TWI Bus Selection Position */
#define FLEX_TWI_SMR_BSEL_Msk                 (_UINT32_(0x1) << FLEX_TWI_SMR_BSEL_Pos)             /* (FLEX_TWI_SMR) TWI Bus Selection Mask */
#define FLEX_TWI_SMR_BSEL(value)              (FLEX_TWI_SMR_BSEL_Msk & (_UINT32_(value) << FLEX_TWI_SMR_BSEL_Pos)) /* Assignment of value for BSEL in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_BSEL_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) TWI analyzes the TWCK and TWD pins from its TWI bus.  */
#define FLEX_TWI_SMR_BSEL_0                   (FLEX_TWI_SMR_BSEL_0_Val << FLEX_TWI_SMR_BSEL_Pos)   /* (FLEX_TWI_SMR) TWI analyzes the TWCK and TWD pins from its TWI bus. Position */
#define FLEX_TWI_SMR_SCLWSDIS_Pos             _UINT32_(6)                                          /* (FLEX_TWI_SMR) Clock Wait State Disable Position */
#define FLEX_TWI_SMR_SCLWSDIS_Msk             (_UINT32_(0x1) << FLEX_TWI_SMR_SCLWSDIS_Pos)         /* (FLEX_TWI_SMR) Clock Wait State Disable Mask */
#define FLEX_TWI_SMR_SCLWSDIS(value)          (FLEX_TWI_SMR_SCLWSDIS_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SCLWSDIS_Pos)) /* Assignment of value for SCLWSDIS in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SCLWSDIS_0_Val         _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) No effect.  */
#define   FLEX_TWI_SMR_SCLWSDIS_1_Val         _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Clock stretching disabled in Client mode, OVRE and UNRE will indicate overrun and underrun.  */
#define FLEX_TWI_SMR_SCLWSDIS_0               (FLEX_TWI_SMR_SCLWSDIS_0_Val << FLEX_TWI_SMR_SCLWSDIS_Pos) /* (FLEX_TWI_SMR) No effect. Position */
#define FLEX_TWI_SMR_SCLWSDIS_1               (FLEX_TWI_SMR_SCLWSDIS_1_Val << FLEX_TWI_SMR_SCLWSDIS_Pos) /* (FLEX_TWI_SMR) Clock stretching disabled in Client mode, OVRE and UNRE will indicate overrun and underrun. Position */
#define FLEX_TWI_SMR_SNIFF_Pos                _UINT32_(7)                                          /* (FLEX_TWI_SMR) Client Sniffer Mode Position */
#define FLEX_TWI_SMR_SNIFF_Msk                (_UINT32_(0x1) << FLEX_TWI_SMR_SNIFF_Pos)            /* (FLEX_TWI_SMR) Client Sniffer Mode Mask */
#define FLEX_TWI_SMR_SNIFF(value)             (FLEX_TWI_SMR_SNIFF_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SNIFF_Pos)) /* Assignment of value for SNIFF in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SNIFF_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Client Sniffer mode is disabled.  */
#define   FLEX_TWI_SMR_SNIFF_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Client Sniffer mode is enabled.  */
#define FLEX_TWI_SMR_SNIFF_0                  (FLEX_TWI_SMR_SNIFF_0_Val << FLEX_TWI_SMR_SNIFF_Pos) /* (FLEX_TWI_SMR) Client Sniffer mode is disabled. Position */
#define FLEX_TWI_SMR_SNIFF_1                  (FLEX_TWI_SMR_SNIFF_1_Val << FLEX_TWI_SMR_SNIFF_Pos) /* (FLEX_TWI_SMR) Client Sniffer mode is enabled. Position */
#define FLEX_TWI_SMR_MASK_Pos                 _UINT32_(8)                                          /* (FLEX_TWI_SMR) Client Address Mask Position */
#define FLEX_TWI_SMR_MASK_Msk                 (_UINT32_(0x7F) << FLEX_TWI_SMR_MASK_Pos)            /* (FLEX_TWI_SMR) Client Address Mask Mask */
#define FLEX_TWI_SMR_MASK(value)              (FLEX_TWI_SMR_MASK_Msk & (_UINT32_(value) << FLEX_TWI_SMR_MASK_Pos)) /* Assignment of value for MASK in the FLEX_TWI_SMR register */
#define FLEX_TWI_SMR_SADR_Pos                 _UINT32_(16)                                         /* (FLEX_TWI_SMR) Client Address Position */
#define FLEX_TWI_SMR_SADR_Msk                 (_UINT32_(0x7F) << FLEX_TWI_SMR_SADR_Pos)            /* (FLEX_TWI_SMR) Client Address Mask */
#define FLEX_TWI_SMR_SADR(value)              (FLEX_TWI_SMR_SADR_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SADR_Pos)) /* Assignment of value for SADR in the FLEX_TWI_SMR register */
#define FLEX_TWI_SMR_SADR1EN_Pos              _UINT32_(28)                                         /* (FLEX_TWI_SMR) Client Address 1 Enable Position */
#define FLEX_TWI_SMR_SADR1EN_Msk              (_UINT32_(0x1) << FLEX_TWI_SMR_SADR1EN_Pos)          /* (FLEX_TWI_SMR) Client Address 1 Enable Mask */
#define FLEX_TWI_SMR_SADR1EN(value)           (FLEX_TWI_SMR_SADR1EN_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SADR1EN_Pos)) /* Assignment of value for SADR1EN in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SADR1EN_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Client address 1 matching is disabled.  */
#define   FLEX_TWI_SMR_SADR1EN_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Client address 1 matching is enabled.  */
#define FLEX_TWI_SMR_SADR1EN_0                (FLEX_TWI_SMR_SADR1EN_0_Val << FLEX_TWI_SMR_SADR1EN_Pos) /* (FLEX_TWI_SMR) Client address 1 matching is disabled. Position */
#define FLEX_TWI_SMR_SADR1EN_1                (FLEX_TWI_SMR_SADR1EN_1_Val << FLEX_TWI_SMR_SADR1EN_Pos) /* (FLEX_TWI_SMR) Client address 1 matching is enabled. Position */
#define FLEX_TWI_SMR_SADR2EN_Pos              _UINT32_(29)                                         /* (FLEX_TWI_SMR) Client Address 2 Enable Position */
#define FLEX_TWI_SMR_SADR2EN_Msk              (_UINT32_(0x1) << FLEX_TWI_SMR_SADR2EN_Pos)          /* (FLEX_TWI_SMR) Client Address 2 Enable Mask */
#define FLEX_TWI_SMR_SADR2EN(value)           (FLEX_TWI_SMR_SADR2EN_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SADR2EN_Pos)) /* Assignment of value for SADR2EN in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SADR2EN_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Client address 2 matching is disabled.  */
#define   FLEX_TWI_SMR_SADR2EN_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Client address 2 matching is enabled.  */
#define FLEX_TWI_SMR_SADR2EN_0                (FLEX_TWI_SMR_SADR2EN_0_Val << FLEX_TWI_SMR_SADR2EN_Pos) /* (FLEX_TWI_SMR) Client address 2 matching is disabled. Position */
#define FLEX_TWI_SMR_SADR2EN_1                (FLEX_TWI_SMR_SADR2EN_1_Val << FLEX_TWI_SMR_SADR2EN_Pos) /* (FLEX_TWI_SMR) Client address 2 matching is enabled. Position */
#define FLEX_TWI_SMR_SADR3EN_Pos              _UINT32_(30)                                         /* (FLEX_TWI_SMR) Client Address 3 Enable Position */
#define FLEX_TWI_SMR_SADR3EN_Msk              (_UINT32_(0x1) << FLEX_TWI_SMR_SADR3EN_Pos)          /* (FLEX_TWI_SMR) Client Address 3 Enable Mask */
#define FLEX_TWI_SMR_SADR3EN(value)           (FLEX_TWI_SMR_SADR3EN_Msk & (_UINT32_(value) << FLEX_TWI_SMR_SADR3EN_Pos)) /* Assignment of value for SADR3EN in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_SADR3EN_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Client address 3 matching is disabled.  */
#define   FLEX_TWI_SMR_SADR3EN_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Client address 3 matching is enabled.  */
#define FLEX_TWI_SMR_SADR3EN_0                (FLEX_TWI_SMR_SADR3EN_0_Val << FLEX_TWI_SMR_SADR3EN_Pos) /* (FLEX_TWI_SMR) Client address 3 matching is disabled. Position */
#define FLEX_TWI_SMR_SADR3EN_1                (FLEX_TWI_SMR_SADR3EN_1_Val << FLEX_TWI_SMR_SADR3EN_Pos) /* (FLEX_TWI_SMR) Client address 3 matching is enabled. Position */
#define FLEX_TWI_SMR_DATAMEN_Pos              _UINT32_(31)                                         /* (FLEX_TWI_SMR) Data Matching Enable Position */
#define FLEX_TWI_SMR_DATAMEN_Msk              (_UINT32_(0x1) << FLEX_TWI_SMR_DATAMEN_Pos)          /* (FLEX_TWI_SMR) Data Matching Enable Mask */
#define FLEX_TWI_SMR_DATAMEN(value)           (FLEX_TWI_SMR_DATAMEN_Msk & (_UINT32_(value) << FLEX_TWI_SMR_DATAMEN_Pos)) /* Assignment of value for DATAMEN in the FLEX_TWI_SMR register */
#define   FLEX_TWI_SMR_DATAMEN_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_SMR) Data matching on first received data is disabled.  */
#define   FLEX_TWI_SMR_DATAMEN_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_SMR) Data matching on first received data is enabled.  */
#define FLEX_TWI_SMR_DATAMEN_0                (FLEX_TWI_SMR_DATAMEN_0_Val << FLEX_TWI_SMR_DATAMEN_Pos) /* (FLEX_TWI_SMR) Data matching on first received data is disabled. Position */
#define FLEX_TWI_SMR_DATAMEN_1                (FLEX_TWI_SMR_DATAMEN_1_Val << FLEX_TWI_SMR_DATAMEN_Pos) /* (FLEX_TWI_SMR) Data matching on first received data is enabled. Position */
#define FLEX_TWI_SMR_Msk                      _UINT32_(0xF07F7FFD)                                 /* (FLEX_TWI_SMR) Register Mask  */


/* -------- FLEX_TWI_IADR : (FLEXCOM Offset: 0x60C) (R/W 32) TWI Internal Address Register -------- */
#define FLEX_TWI_IADR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_TWI_IADR) TWI Internal Address Register  Reset Value */

#define FLEX_TWI_IADR_IADR_Pos                _UINT32_(0)                                          /* (FLEX_TWI_IADR) Internal Address Position */
#define FLEX_TWI_IADR_IADR_Msk                (_UINT32_(0xFFFFFF) << FLEX_TWI_IADR_IADR_Pos)       /* (FLEX_TWI_IADR) Internal Address Mask */
#define FLEX_TWI_IADR_IADR(value)             (FLEX_TWI_IADR_IADR_Msk & (_UINT32_(value) << FLEX_TWI_IADR_IADR_Pos)) /* Assignment of value for IADR in the FLEX_TWI_IADR register */
#define FLEX_TWI_IADR_Msk                     _UINT32_(0x00FFFFFF)                                 /* (FLEX_TWI_IADR) Register Mask  */


/* -------- FLEX_TWI_CWGR : (FLEXCOM Offset: 0x610) (R/W 32) TWI Clock Waveform Generator Register -------- */
#define FLEX_TWI_CWGR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_TWI_CWGR) TWI Clock Waveform Generator Register  Reset Value */

#define FLEX_TWI_CWGR_CLDIV_Pos               _UINT32_(0)                                          /* (FLEX_TWI_CWGR) Clock Low Divider Position */
#define FLEX_TWI_CWGR_CLDIV_Msk               (_UINT32_(0xFF) << FLEX_TWI_CWGR_CLDIV_Pos)          /* (FLEX_TWI_CWGR) Clock Low Divider Mask */
#define FLEX_TWI_CWGR_CLDIV(value)            (FLEX_TWI_CWGR_CLDIV_Msk & (_UINT32_(value) << FLEX_TWI_CWGR_CLDIV_Pos)) /* Assignment of value for CLDIV in the FLEX_TWI_CWGR register */
#define FLEX_TWI_CWGR_CHDIV_Pos               _UINT32_(8)                                          /* (FLEX_TWI_CWGR) Clock High Divider Position */
#define FLEX_TWI_CWGR_CHDIV_Msk               (_UINT32_(0xFF) << FLEX_TWI_CWGR_CHDIV_Pos)          /* (FLEX_TWI_CWGR) Clock High Divider Mask */
#define FLEX_TWI_CWGR_CHDIV(value)            (FLEX_TWI_CWGR_CHDIV_Msk & (_UINT32_(value) << FLEX_TWI_CWGR_CHDIV_Pos)) /* Assignment of value for CHDIV in the FLEX_TWI_CWGR register */
#define FLEX_TWI_CWGR_CKDIV_Pos               _UINT32_(16)                                         /* (FLEX_TWI_CWGR) Clock Divider Position */
#define FLEX_TWI_CWGR_CKDIV_Msk               (_UINT32_(0x7) << FLEX_TWI_CWGR_CKDIV_Pos)           /* (FLEX_TWI_CWGR) Clock Divider Mask */
#define FLEX_TWI_CWGR_CKDIV(value)            (FLEX_TWI_CWGR_CKDIV_Msk & (_UINT32_(value) << FLEX_TWI_CWGR_CKDIV_Pos)) /* Assignment of value for CKDIV in the FLEX_TWI_CWGR register */
#define FLEX_TWI_CWGR_BRSRCCLK_Pos            _UINT32_(20)                                         /* (FLEX_TWI_CWGR) Bit Rate Source Clock Position */
#define FLEX_TWI_CWGR_BRSRCCLK_Msk            (_UINT32_(0x1) << FLEX_TWI_CWGR_BRSRCCLK_Pos)        /* (FLEX_TWI_CWGR) Bit Rate Source Clock Mask */
#define FLEX_TWI_CWGR_BRSRCCLK(value)         (FLEX_TWI_CWGR_BRSRCCLK_Msk & (_UINT32_(value) << FLEX_TWI_CWGR_BRSRCCLK_Pos)) /* Assignment of value for BRSRCCLK in the FLEX_TWI_CWGR register */
#define   FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val _UINT32_(0x0)                                        /* (FLEX_TWI_CWGR) The peripheral clock is the source clock for the bit rate generation.  */
#define   FLEX_TWI_CWGR_BRSRCCLK_GCLK_Val     _UINT32_(0x1)                                        /* (FLEX_TWI_CWGR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK     (FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val << FLEX_TWI_CWGR_BRSRCCLK_Pos) /* (FLEX_TWI_CWGR) The peripheral clock is the source clock for the bit rate generation. Position */
#define FLEX_TWI_CWGR_BRSRCCLK_GCLK           (FLEX_TWI_CWGR_BRSRCCLK_GCLK_Val << FLEX_TWI_CWGR_BRSRCCLK_Pos) /* (FLEX_TWI_CWGR) GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position */
#define FLEX_TWI_CWGR_HOLD_Pos                _UINT32_(24)                                         /* (FLEX_TWI_CWGR) TWD Hold Time Versus TWCK Falling Position */
#define FLEX_TWI_CWGR_HOLD_Msk                (_UINT32_(0x3F) << FLEX_TWI_CWGR_HOLD_Pos)           /* (FLEX_TWI_CWGR) TWD Hold Time Versus TWCK Falling Mask */
#define FLEX_TWI_CWGR_HOLD(value)             (FLEX_TWI_CWGR_HOLD_Msk & (_UINT32_(value) << FLEX_TWI_CWGR_HOLD_Pos)) /* Assignment of value for HOLD in the FLEX_TWI_CWGR register */
#define FLEX_TWI_CWGR_Msk                     _UINT32_(0x3F17FFFF)                                 /* (FLEX_TWI_CWGR) Register Mask  */


/* -------- FLEX_TWI_SR : (FLEXCOM Offset: 0x620) ( R/ 32) TWI Status Register -------- */
#define FLEX_TWI_SR_RESETVALUE                _UINT32_(0x3000009)                                  /*  (FLEX_TWI_SR) TWI Status Register  Reset Value */

#define FLEX_TWI_SR_TXCOMP_Pos                _UINT32_(0)                                          /* (FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Position */
#define FLEX_TWI_SR_TXCOMP_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_TXCOMP_Pos)            /* (FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Mask */
#define FLEX_TWI_SR_TXCOMP(value)             (FLEX_TWI_SR_TXCOMP_Msk & (_UINT32_(value) << FLEX_TWI_SR_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_TXCOMP_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) NACK used in Host mode: During the length of the current frame. NACK used in Client Read mode: As soon as a Start is detected.  */
#define   FLEX_TWI_SR_TXCOMP_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) NACK used in Host mode: When both the holding register and the internal shifter are empty and STOP condition has been sent. NACK used in Client Read mode: After a Stop or a Repeated Start + an address different from SADR is detected.  */
#define FLEX_TWI_SR_TXCOMP_0                  (FLEX_TWI_SR_TXCOMP_0_Val << FLEX_TWI_SR_TXCOMP_Pos) /* (FLEX_TWI_SR) NACK used in Host mode: During the length of the current frame. NACK used in Client Read mode: As soon as a Start is detected. Position */
#define FLEX_TWI_SR_TXCOMP_1                  (FLEX_TWI_SR_TXCOMP_1_Val << FLEX_TWI_SR_TXCOMP_Pos) /* (FLEX_TWI_SR) NACK used in Host mode: When both the holding register and the internal shifter are empty and STOP condition has been sent. NACK used in Client Read mode: After a Stop or a Repeated Start + an address different from SADR is detected. Position */
#define FLEX_TWI_SR_RXRDY_Pos                 _UINT32_(1)                                          /* (FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Position */
#define FLEX_TWI_SR_RXRDY_Msk                 (_UINT32_(0x1) << FLEX_TWI_SR_RXRDY_Pos)             /* (FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Mask */
#define FLEX_TWI_SR_RXRDY(value)              (FLEX_TWI_SR_RXRDY_Msk & (_UINT32_(value) << FLEX_TWI_SR_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_RXRDY_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SR) Receive FIFO is empty; no data to read  */
#define   FLEX_TWI_SR_RXRDY_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SR) At least one unread data is in the Receive FIFO  */
#define FLEX_TWI_SR_RXRDY_0                   (FLEX_TWI_SR_RXRDY_0_Val << FLEX_TWI_SR_RXRDY_Pos)   /* (FLEX_TWI_SR) Receive FIFO is empty; no data to read Position */
#define FLEX_TWI_SR_RXRDY_1                   (FLEX_TWI_SR_RXRDY_1_Val << FLEX_TWI_SR_RXRDY_Pos)   /* (FLEX_TWI_SR) At least one unread data is in the Receive FIFO Position */
#define FLEX_TWI_SR_TXRDY_Pos                 _UINT32_(2)                                          /* (FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Position */
#define FLEX_TWI_SR_TXRDY_Msk                 (_UINT32_(0x1) << FLEX_TWI_SR_TXRDY_Pos)             /* (FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Mask */
#define FLEX_TWI_SR_TXRDY(value)              (FLEX_TWI_SR_TXRDY_Msk & (_UINT32_(value) << FLEX_TWI_SR_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_TXRDY_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SR) TXRDY used in Host mode:The transmit holding register has not been transferred into the internal shifter. Set to 0 when writing into FLEX_TWI_THR. TXRDY used in Client mode:As soon as data is written in FLEX_TWI_THR, until this data has been transmitted and acknowledged (ACK or NACK).  */
#define   FLEX_TWI_SR_TXRDY_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SR) TXRDY used in Host mode:As soon as a data byte is transferred from FLEX_TWI_THR to internal shifter or if a NACK error is detected, TXRDY is set at the same time as TXCOMP and NACK. TXRDY is also set when MSEN is set (enables TWI). TXRDY used in Client mode:Indicates that FLEX_TWI_THR is empty and that data has been transmitted and acknowledged.  */
#define FLEX_TWI_SR_TXRDY_0                   (FLEX_TWI_SR_TXRDY_0_Val << FLEX_TWI_SR_TXRDY_Pos)   /* (FLEX_TWI_SR) TXRDY used in Host mode:The transmit holding register has not been transferred into the internal shifter. Set to 0 when writing into FLEX_TWI_THR. TXRDY used in Client mode:As soon as data is written in FLEX_TWI_THR, until this data has been transmitted and acknowledged (ACK or NACK). Position */
#define FLEX_TWI_SR_TXRDY_1                   (FLEX_TWI_SR_TXRDY_1_Val << FLEX_TWI_SR_TXRDY_Pos)   /* (FLEX_TWI_SR) TXRDY used in Host mode:As soon as a data byte is transferred from FLEX_TWI_THR to internal shifter or if a NACK error is detected, TXRDY is set at the same time as TXCOMP and NACK. TXRDY is also set when MSEN is set (enables TWI). TXRDY used in Client mode:Indicates that FLEX_TWI_THR is empty and that data has been transmitted and acknowledged. Position */
#define FLEX_TWI_SR_SVREAD_Pos                _UINT32_(3)                                          /* (FLEX_TWI_SR) Client Read Position */
#define FLEX_TWI_SR_SVREAD_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_SVREAD_Pos)            /* (FLEX_TWI_SR) Client Read Mask */
#define FLEX_TWI_SR_SVREAD(value)             (FLEX_TWI_SR_SVREAD_Msk & (_UINT32_(value) << FLEX_TWI_SR_SVREAD_Pos)) /* Assignment of value for SVREAD in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SVREAD_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) Indicates that a write access is performed by a host.  */
#define   FLEX_TWI_SR_SVREAD_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Indicates that a read access is performed by a host.  */
#define FLEX_TWI_SR_SVREAD_0                  (FLEX_TWI_SR_SVREAD_0_Val << FLEX_TWI_SR_SVREAD_Pos) /* (FLEX_TWI_SR) Indicates that a write access is performed by a host. Position */
#define FLEX_TWI_SR_SVREAD_1                  (FLEX_TWI_SR_SVREAD_1_Val << FLEX_TWI_SR_SVREAD_Pos) /* (FLEX_TWI_SR) Indicates that a read access is performed by a host. Position */
#define FLEX_TWI_SR_SVACC_Pos                 _UINT32_(4)                                          /* (FLEX_TWI_SR) Client Access Position */
#define FLEX_TWI_SR_SVACC_Msk                 (_UINT32_(0x1) << FLEX_TWI_SR_SVACC_Pos)             /* (FLEX_TWI_SR) Client Access Mask */
#define FLEX_TWI_SR_SVACC(value)              (FLEX_TWI_SR_SVACC_Msk & (_UINT32_(value) << FLEX_TWI_SR_SVACC_Pos)) /* Assignment of value for SVACC in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SVACC_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected.  */
#define   FLEX_TWI_SR_SVACC_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected.  */
#define FLEX_TWI_SR_SVACC_0                   (FLEX_TWI_SR_SVACC_0_Val << FLEX_TWI_SR_SVACC_Pos)   /* (FLEX_TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected. Position */
#define FLEX_TWI_SR_SVACC_1                   (FLEX_TWI_SR_SVACC_1_Val << FLEX_TWI_SR_SVACC_Pos)   /* (FLEX_TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected. Position */
#define FLEX_TWI_SR_GACC_Pos                  _UINT32_(5)                                          /* (FLEX_TWI_SR) General Call Access (cleared on read) Position */
#define FLEX_TWI_SR_GACC_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_GACC_Pos)              /* (FLEX_TWI_SR) General Call Access (cleared on read) Mask */
#define FLEX_TWI_SR_GACC(value)               (FLEX_TWI_SR_GACC_Msk & (_UINT32_(value) << FLEX_TWI_SR_GACC_Pos)) /* Assignment of value for GACC in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_GACC_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No general call has been detected.  */
#define   FLEX_TWI_SR_GACC_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes.  */
#define FLEX_TWI_SR_GACC_0                    (FLEX_TWI_SR_GACC_0_Val << FLEX_TWI_SR_GACC_Pos)     /* (FLEX_TWI_SR) No general call has been detected. Position */
#define FLEX_TWI_SR_GACC_1                    (FLEX_TWI_SR_GACC_1_Val << FLEX_TWI_SR_GACC_Pos)     /* (FLEX_TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes. Position */
#define FLEX_TWI_SR_OVRE_Pos                  _UINT32_(6)                                          /* (FLEX_TWI_SR) Overrun Error (cleared on read) Position */
#define FLEX_TWI_SR_OVRE_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_OVRE_Pos)              /* (FLEX_TWI_SR) Overrun Error (cleared on read) Mask */
#define FLEX_TWI_SR_OVRE(value)               (FLEX_TWI_SR_OVRE_Msk & (_UINT32_(value) << FLEX_TWI_SR_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_OVRE_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) FLEX_TWI_RHR has not been loaded while RXRDY was set.  */
#define   FLEX_TWI_SR_OVRE_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) FLEX_TWI_RHR has been loaded while RXRDY was set. Reset by read in FLEX_TWI_SR when TXCOMP is set.  */
#define FLEX_TWI_SR_OVRE_0                    (FLEX_TWI_SR_OVRE_0_Val << FLEX_TWI_SR_OVRE_Pos)     /* (FLEX_TWI_SR) FLEX_TWI_RHR has not been loaded while RXRDY was set. Position */
#define FLEX_TWI_SR_OVRE_1                    (FLEX_TWI_SR_OVRE_1_Val << FLEX_TWI_SR_OVRE_Pos)     /* (FLEX_TWI_SR) FLEX_TWI_RHR has been loaded while RXRDY was set. Reset by read in FLEX_TWI_SR when TXCOMP is set. Position */
#define FLEX_TWI_SR_UNRE_Pos                  _UINT32_(7)                                          /* (FLEX_TWI_SR) Underrun Error (cleared on read) Position */
#define FLEX_TWI_SR_UNRE_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_UNRE_Pos)              /* (FLEX_TWI_SR) Underrun Error (cleared on read) Mask */
#define FLEX_TWI_SR_UNRE(value)               (FLEX_TWI_SR_UNRE_Msk & (_UINT32_(value) << FLEX_TWI_SR_UNRE_Pos)) /* Assignment of value for UNRE in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_UNRE_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) FLEX_TWI_THR has been filled on time.  */
#define   FLEX_TWI_SR_UNRE_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) FLEX_TWI_THR has not been filled on time.  */
#define FLEX_TWI_SR_UNRE_0                    (FLEX_TWI_SR_UNRE_0_Val << FLEX_TWI_SR_UNRE_Pos)     /* (FLEX_TWI_SR) FLEX_TWI_THR has been filled on time. Position */
#define FLEX_TWI_SR_UNRE_1                    (FLEX_TWI_SR_UNRE_1_Val << FLEX_TWI_SR_UNRE_Pos)     /* (FLEX_TWI_SR) FLEX_TWI_THR has not been filled on time. Position */
#define FLEX_TWI_SR_NACK_Pos                  _UINT32_(8)                                          /* (FLEX_TWI_SR) Not Acknowledged (cleared on read) Position */
#define FLEX_TWI_SR_NACK_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_NACK_Pos)              /* (FLEX_TWI_SR) Not Acknowledged (cleared on read) Mask */
#define FLEX_TWI_SR_NACK(value)               (FLEX_TWI_SR_NACK_Msk & (_UINT32_(value) << FLEX_TWI_SR_NACK_Pos)) /* Assignment of value for NACK in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_NACK_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host.  */
#define   FLEX_TWI_SR_NACK_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set, the user must not fill FLEX_TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or reinitiate it.  */
#define FLEX_TWI_SR_NACK_0                    (FLEX_TWI_SR_NACK_0_Val << FLEX_TWI_SR_NACK_Pos)     /* (FLEX_TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host. Position */
#define FLEX_TWI_SR_NACK_1                    (FLEX_TWI_SR_NACK_1_Val << FLEX_TWI_SR_NACK_Pos)     /* (FLEX_TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set, the user must not fill FLEX_TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or reinitiate it. Position */
#define FLEX_TWI_SR_ARBLST_Pos                _UINT32_(9)                                          /* (FLEX_TWI_SR) Arbitration Lost (cleared on read) Position */
#define FLEX_TWI_SR_ARBLST_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_ARBLST_Pos)            /* (FLEX_TWI_SR) Arbitration Lost (cleared on read) Mask */
#define FLEX_TWI_SR_ARBLST(value)             (FLEX_TWI_SR_ARBLST_Msk & (_UINT32_(value) << FLEX_TWI_SR_ARBLST_Pos)) /* Assignment of value for ARBLST in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_ARBLST_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) Arbitration won.  */
#define   FLEX_TWI_SR_ARBLST_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time.  */
#define FLEX_TWI_SR_ARBLST_0                  (FLEX_TWI_SR_ARBLST_0_Val << FLEX_TWI_SR_ARBLST_Pos) /* (FLEX_TWI_SR) Arbitration won. Position */
#define FLEX_TWI_SR_ARBLST_1                  (FLEX_TWI_SR_ARBLST_1_Val << FLEX_TWI_SR_ARBLST_Pos) /* (FLEX_TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time. Position */
#define FLEX_TWI_SR_SCLWS_Pos                 _UINT32_(10)                                         /* (FLEX_TWI_SR) Clock Wait State Position */
#define FLEX_TWI_SR_SCLWS_Msk                 (_UINT32_(0x1) << FLEX_TWI_SR_SCLWS_Pos)             /* (FLEX_TWI_SR) Clock Wait State Mask */
#define FLEX_TWI_SR_SCLWS(value)              (FLEX_TWI_SR_SCLWS_Msk & (_UINT32_(value) << FLEX_TWI_SR_SCLWS_Pos)) /* Assignment of value for SCLWS in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SCLWS_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SR) The clock is not stretched.  */
#define   FLEX_TWI_SR_SCLWS_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SR) The clock is stretched. FLEX_TWI_THR / FLEX_TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character.  */
#define FLEX_TWI_SR_SCLWS_0                   (FLEX_TWI_SR_SCLWS_0_Val << FLEX_TWI_SR_SCLWS_Pos)   /* (FLEX_TWI_SR) The clock is not stretched. Position */
#define FLEX_TWI_SR_SCLWS_1                   (FLEX_TWI_SR_SCLWS_1_Val << FLEX_TWI_SR_SCLWS_Pos)   /* (FLEX_TWI_SR) The clock is stretched. FLEX_TWI_THR / FLEX_TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character. Position */
#define FLEX_TWI_SR_EOSACC_Pos                _UINT32_(11)                                         /* (FLEX_TWI_SR) End Of Client Access (cleared on read) Position */
#define FLEX_TWI_SR_EOSACC_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_EOSACC_Pos)            /* (FLEX_TWI_SR) End Of Client Access (cleared on read) Mask */
#define FLEX_TWI_SR_EOSACC(value)             (FLEX_TWI_SR_EOSACC_Msk & (_UINT32_(value) << FLEX_TWI_SR_EOSACC_Pos)) /* Assignment of value for EOSACC in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_EOSACC_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) A client access is being performed.  */
#define   FLEX_TWI_SR_EOSACC_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset.  */
#define FLEX_TWI_SR_EOSACC_0                  (FLEX_TWI_SR_EOSACC_0_Val << FLEX_TWI_SR_EOSACC_Pos) /* (FLEX_TWI_SR) A client access is being performed. Position */
#define FLEX_TWI_SR_EOSACC_1                  (FLEX_TWI_SR_EOSACC_1_Val << FLEX_TWI_SR_EOSACC_Pos) /* (FLEX_TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset. Position */
#define FLEX_TWI_SR_MCACK_Pos                 _UINT32_(16)                                         /* (FLEX_TWI_SR) Host Code Acknowledge (cleared on read) Position */
#define FLEX_TWI_SR_MCACK_Msk                 (_UINT32_(0x1) << FLEX_TWI_SR_MCACK_Pos)             /* (FLEX_TWI_SR) Host Code Acknowledge (cleared on read) Mask */
#define FLEX_TWI_SR_MCACK(value)              (FLEX_TWI_SR_MCACK_Msk & (_UINT32_(value) << FLEX_TWI_SR_MCACK_Pos)) /* Assignment of value for MCACK in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_MCACK_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No host code has been received.  */
#define   FLEX_TWI_SR_MCACK_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A host code has been received.  */
#define FLEX_TWI_SR_MCACK_0                   (FLEX_TWI_SR_MCACK_0_Val << FLEX_TWI_SR_MCACK_Pos)   /* (FLEX_TWI_SR) No host code has been received. Position */
#define FLEX_TWI_SR_MCACK_1                   (FLEX_TWI_SR_MCACK_1_Val << FLEX_TWI_SR_MCACK_Pos)   /* (FLEX_TWI_SR) A host code has been received. Position */
#define FLEX_TWI_SR_TOUT_Pos                  _UINT32_(18)                                         /* (FLEX_TWI_SR) Timeout Error (cleared on read) Position */
#define FLEX_TWI_SR_TOUT_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_TOUT_Pos)              /* (FLEX_TWI_SR) Timeout Error (cleared on read) Mask */
#define FLEX_TWI_SR_TOUT(value)               (FLEX_TWI_SR_TOUT_Msk & (_UINT32_(value) << FLEX_TWI_SR_TOUT_Pos)) /* Assignment of value for TOUT in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_TOUT_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus timeout occurred.  */
#define   FLEX_TWI_SR_TOUT_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) SMBus timeout occurred.  */
#define FLEX_TWI_SR_TOUT_0                    (FLEX_TWI_SR_TOUT_0_Val << FLEX_TWI_SR_TOUT_Pos)     /* (FLEX_TWI_SR) No SMBus timeout occurred. Position */
#define FLEX_TWI_SR_TOUT_1                    (FLEX_TWI_SR_TOUT_1_Val << FLEX_TWI_SR_TOUT_Pos)     /* (FLEX_TWI_SR) SMBus timeout occurred. Position */
#define FLEX_TWI_SR_PECERR_Pos                _UINT32_(19)                                         /* (FLEX_TWI_SR) PEC Error (cleared on read) Position */
#define FLEX_TWI_SR_PECERR_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_PECERR_Pos)            /* (FLEX_TWI_SR) PEC Error (cleared on read) Mask */
#define FLEX_TWI_SR_PECERR(value)             (FLEX_TWI_SR_PECERR_Msk & (_UINT32_(value) << FLEX_TWI_SR_PECERR_Pos)) /* Assignment of value for PECERR in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_PECERR_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus PEC error occurred.  */
#define   FLEX_TWI_SR_PECERR_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A SMBus PEC error occurred.  */
#define FLEX_TWI_SR_PECERR_0                  (FLEX_TWI_SR_PECERR_0_Val << FLEX_TWI_SR_PECERR_Pos) /* (FLEX_TWI_SR) No SMBus PEC error occurred. Position */
#define FLEX_TWI_SR_PECERR_1                  (FLEX_TWI_SR_PECERR_1_Val << FLEX_TWI_SR_PECERR_Pos) /* (FLEX_TWI_SR) A SMBus PEC error occurred. Position */
#define FLEX_TWI_SR_SMBDAM_Pos                _UINT32_(20)                                         /* (FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define FLEX_TWI_SR_SMBDAM_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_SMBDAM_Pos)            /* (FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define FLEX_TWI_SR_SMBDAM(value)             (FLEX_TWI_SR_SMBDAM_Msk & (_UINT32_(value) << FLEX_TWI_SR_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SMBDAM_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus Default Address received.  */
#define   FLEX_TWI_SR_SMBDAM_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A SMBus Default Address was received.  */
#define FLEX_TWI_SR_SMBDAM_0                  (FLEX_TWI_SR_SMBDAM_0_Val << FLEX_TWI_SR_SMBDAM_Pos) /* (FLEX_TWI_SR) No SMBus Default Address received. Position */
#define FLEX_TWI_SR_SMBDAM_1                  (FLEX_TWI_SR_SMBDAM_1_Val << FLEX_TWI_SR_SMBDAM_Pos) /* (FLEX_TWI_SR) A SMBus Default Address was received. Position */
#define FLEX_TWI_SR_SMBHHM_Pos                _UINT32_(21)                                         /* (FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define FLEX_TWI_SR_SMBHHM_Msk                (_UINT32_(0x1) << FLEX_TWI_SR_SMBHHM_Pos)            /* (FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define FLEX_TWI_SR_SMBHHM(value)             (FLEX_TWI_SR_SMBHHM_Msk & (_UINT32_(value) << FLEX_TWI_SR_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SMBHHM_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus Host Header Address received.  */
#define   FLEX_TWI_SR_SMBHHM_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A SMBus Host Header Address was received.  */
#define FLEX_TWI_SR_SMBHHM_0                  (FLEX_TWI_SR_SMBHHM_0_Val << FLEX_TWI_SR_SMBHHM_Pos) /* (FLEX_TWI_SR) No SMBus Host Header Address received. Position */
#define FLEX_TWI_SR_SMBHHM_1                  (FLEX_TWI_SR_SMBHHM_1_Val << FLEX_TWI_SR_SMBHHM_Pos) /* (FLEX_TWI_SR) A SMBus Host Header Address was received. Position */
#define FLEX_TWI_SR_LOCK_Pos                  _UINT32_(23)                                         /* (FLEX_TWI_SR) TWI Lock Due to Frame Errors Position */
#define FLEX_TWI_SR_LOCK_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_LOCK_Pos)              /* (FLEX_TWI_SR) TWI Lock Due to Frame Errors Mask */
#define FLEX_TWI_SR_LOCK(value)               (FLEX_TWI_SR_LOCK_Msk & (_UINT32_(value) << FLEX_TWI_SR_LOCK_Pos)) /* Assignment of value for LOCK in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_LOCK_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) The TWI is not locked.  */
#define   FLEX_TWI_SR_LOCK_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) The TWI is locked due to frame errors (see Section 10.3.14 "Handling Errors in Alternative Command" and Section 10.6 "TWI FIFOs").  */
#define FLEX_TWI_SR_LOCK_0                    (FLEX_TWI_SR_LOCK_0_Val << FLEX_TWI_SR_LOCK_Pos)     /* (FLEX_TWI_SR) The TWI is not locked. Position */
#define FLEX_TWI_SR_LOCK_1                    (FLEX_TWI_SR_LOCK_1_Val << FLEX_TWI_SR_LOCK_Pos)     /* (FLEX_TWI_SR) The TWI is locked due to frame errors (see Section 10.3.14 "Handling Errors in Alternative Command" and Section 10.6 "TWI FIFOs"). Position */
#define FLEX_TWI_SR_SCL_Pos                   _UINT32_(24)                                         /* (FLEX_TWI_SR) SCL Line Value Position */
#define FLEX_TWI_SR_SCL_Msk                   (_UINT32_(0x1) << FLEX_TWI_SR_SCL_Pos)               /* (FLEX_TWI_SR) SCL Line Value Mask */
#define FLEX_TWI_SR_SCL(value)                (FLEX_TWI_SR_SCL_Msk & (_UINT32_(value) << FLEX_TWI_SR_SCL_Pos)) /* Assignment of value for SCL in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SCL_0_Val               _UINT32_(0x0)                                        /* (FLEX_TWI_SR) SCL line sampled value is '0'.  */
#define   FLEX_TWI_SR_SCL_1_Val               _UINT32_(0x1)                                        /* (FLEX_TWI_SR) SCL line sampled value is '1.'  */
#define FLEX_TWI_SR_SCL_0                     (FLEX_TWI_SR_SCL_0_Val << FLEX_TWI_SR_SCL_Pos)       /* (FLEX_TWI_SR) SCL line sampled value is '0'. Position */
#define FLEX_TWI_SR_SCL_1                     (FLEX_TWI_SR_SCL_1_Val << FLEX_TWI_SR_SCL_Pos)       /* (FLEX_TWI_SR) SCL line sampled value is '1.' Position */
#define FLEX_TWI_SR_SDA_Pos                   _UINT32_(25)                                         /* (FLEX_TWI_SR) SDA Line Value Position */
#define FLEX_TWI_SR_SDA_Msk                   (_UINT32_(0x1) << FLEX_TWI_SR_SDA_Pos)               /* (FLEX_TWI_SR) SDA Line Value Mask */
#define FLEX_TWI_SR_SDA(value)                (FLEX_TWI_SR_SDA_Msk & (_UINT32_(value) << FLEX_TWI_SR_SDA_Pos)) /* Assignment of value for SDA in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SDA_0_Val               _UINT32_(0x0)                                        /* (FLEX_TWI_SR) SDA line sampled value is '0'.  */
#define   FLEX_TWI_SR_SDA_1_Val               _UINT32_(0x1)                                        /* (FLEX_TWI_SR) SDA line sampled value is '1'.  */
#define FLEX_TWI_SR_SDA_0                     (FLEX_TWI_SR_SDA_0_Val << FLEX_TWI_SR_SDA_Pos)       /* (FLEX_TWI_SR) SDA line sampled value is '0'. Position */
#define FLEX_TWI_SR_SDA_1                     (FLEX_TWI_SR_SDA_1_Val << FLEX_TWI_SR_SDA_Pos)       /* (FLEX_TWI_SR) SDA line sampled value is '1'. Position */
#define FLEX_TWI_SR_SR_Pos                    _UINT32_(26)                                         /* (FLEX_TWI_SR) Start Repeated Position */
#define FLEX_TWI_SR_SR_Msk                    (_UINT32_(0x1) << FLEX_TWI_SR_SR_Pos)                /* (FLEX_TWI_SR) Start Repeated Mask */
#define FLEX_TWI_SR_SR(value)                 (FLEX_TWI_SR_SR_Msk & (_UINT32_(value) << FLEX_TWI_SR_SR_Pos)) /* Assignment of value for SR in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SR_0_Val                _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No repeated start has been detected since last FLEX_TWI_SR read.  */
#define   FLEX_TWI_SR_SR_1_Val                _UINT32_(0x1)                                        /* (FLEX_TWI_SR) At least one repeated start has been detected since last FLEX_TWI_SR read.  */
#define FLEX_TWI_SR_SR_0                      (FLEX_TWI_SR_SR_0_Val << FLEX_TWI_SR_SR_Pos)         /* (FLEX_TWI_SR) No repeated start has been detected since last FLEX_TWI_SR read. Position */
#define FLEX_TWI_SR_SR_1                      (FLEX_TWI_SR_SR_1_Val << FLEX_TWI_SR_SR_Pos)         /* (FLEX_TWI_SR) At least one repeated start has been detected since last FLEX_TWI_SR read. Position */
#define FLEX_TWI_SR_SECE_Pos                  _UINT32_(28)                                         /* (FLEX_TWI_SR) Security/Safety Error (cleared on read) Position */
#define FLEX_TWI_SR_SECE_Msk                  (_UINT32_(0x1) << FLEX_TWI_SR_SECE_Pos)              /* (FLEX_TWI_SR) Security/Safety Error (cleared on read) Mask */
#define FLEX_TWI_SR_SECE(value)               (FLEX_TWI_SR_SECE_Msk & (_UINT32_(value) << FLEX_TWI_SR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_TWI_SR register */
#define   FLEX_TWI_SR_SECE_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of FLEX_TWI_SR.  */
#define   FLEX_TWI_SR_SECE_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_SR) An error has been detected on TWD and/or TWCK pad output (FLEX_TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_TWI_WPSR.WPVS=1) since the last read of FLEX_TWI_SR.  */
#define FLEX_TWI_SR_SECE_0                    (FLEX_TWI_SR_SECE_0_Val << FLEX_TWI_SR_SECE_Pos)     /* (FLEX_TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of FLEX_TWI_SR. Position */
#define FLEX_TWI_SR_SECE_1                    (FLEX_TWI_SR_SECE_1_Val << FLEX_TWI_SR_SECE_Pos)     /* (FLEX_TWI_SR) An error has been detected on TWD and/or TWCK pad output (FLEX_TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_TWI_WPSR.WPVS=1) since the last read of FLEX_TWI_SR. Position */
#define FLEX_TWI_SR_Msk                       _UINT32_(0x17BD0FFF)                                 /* (FLEX_TWI_SR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos   _UINT32_(0)                                          /* (FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos) /* (FLEX_TWI_SR) Transmission Completed (cleared by writing FLEX_TWI_THR) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_TXCOMP(value) (FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) TXCOMP used in Host mode:During the length of the current frame. TXCOMP used in Client mode:As soon as a Start is detected.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) TXCOMP used in Host mode:When both holding register and internal shifter are empty and STOP condition has been sent. TXCOMP used in Client mode:After a Stop or a Repeated Start + an address different from SADR is detected.  */
#define FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_0     (FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_0_Val << FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos) /* (FLEX_TWI_SR) TXCOMP used in Host mode:During the length of the current frame. TXCOMP used in Client mode:As soon as a Start is detected. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_1     (FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_1_Val << FLEX_TWI_SR_FIFO_ENABLED_TXCOMP_Pos) /* (FLEX_TWI_SR) TXCOMP used in Host mode:When both holding register and internal shifter are empty and STOP condition has been sent. TXCOMP used in Client mode:After a Stop or a Repeated Start + an address different from SADR is detected. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos    _UINT32_(1)                                          /* (FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Msk    (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos) /* (FLEX_TWI_SR) Receive Holding Register Ready (cleared when reading FLEX_TWI_RHR) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_RXRDY(value) (FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_RXRDY_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No character has been received since the last FLEX_TWI_RHR read operation.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_RXRDY_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A byte has been received in FLEX_TWI_RHR since the last read.  */
#define FLEX_TWI_SR_FIFO_ENABLED_RXRDY_0      (FLEX_TWI_SR_FIFO_ENABLED_RXRDY_0_Val << FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos) /* (FLEX_TWI_SR) No character has been received since the last FLEX_TWI_RHR read operation. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_RXRDY_1      (FLEX_TWI_SR_FIFO_ENABLED_RXRDY_1_Val << FLEX_TWI_SR_FIFO_ENABLED_RXRDY_Pos) /* (FLEX_TWI_SR) A byte has been received in FLEX_TWI_RHR since the last read. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos    _UINT32_(2)                                          /* (FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Msk    (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos) /* (FLEX_TWI_SR) Transmit Holding Register Ready (cleared by writing FLEX_TWI_THR) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_TXRDY(value) (FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_TXRDY_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) Transmit FIFO is full and cannot accept more data.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_TXRDY_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration.  */
#define FLEX_TWI_SR_FIFO_ENABLED_TXRDY_0      (FLEX_TWI_SR_FIFO_ENABLED_TXRDY_0_Val << FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos) /* (FLEX_TWI_SR) Transmit FIFO is full and cannot accept more data. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXRDY_1      (FLEX_TWI_SR_FIFO_ENABLED_TXRDY_1_Val << FLEX_TWI_SR_FIFO_ENABLED_TXRDY_Pos) /* (FLEX_TWI_SR) Transmit FIFO is not full; one or more data can be written according to TXRDYM field configuration. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos   _UINT32_(3)                                          /* (FLEX_TWI_SR) Client Read Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos) /* (FLEX_TWI_SR) Client Read Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SVREAD(value) (FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SVREAD_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) Indicates that a write access is performed by a host.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SVREAD_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Indicates that a read access is performed by a host.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SVREAD_0     (FLEX_TWI_SR_FIFO_ENABLED_SVREAD_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos) /* (FLEX_TWI_SR) Indicates that a write access is performed by a host. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SVREAD_1     (FLEX_TWI_SR_FIFO_ENABLED_SVREAD_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SVREAD_Pos) /* (FLEX_TWI_SR) Indicates that a read access is performed by a host. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos    _UINT32_(4)                                          /* (FLEX_TWI_SR) Client Access Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SVACC_Msk    (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos) /* (FLEX_TWI_SR) Client Access Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SVACC(value) (FLEX_TWI_SR_FIFO_ENABLED_SVACC_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SVACC_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SVACC_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SVACC_0      (FLEX_TWI_SR_FIFO_ENABLED_SVACC_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos) /* (FLEX_TWI_SR) TWI is not addressed. SVACC is automatically cleared after a NACK or a STOP condition is detected. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SVACC_1      (FLEX_TWI_SR_FIFO_ENABLED_SVACC_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SVACC_Pos) /* (FLEX_TWI_SR) Indicates that the address decoding sequence has matched (a host has sent SADR). SVACC remains high until a NACK or a STOP condition is detected. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos     _UINT32_(5)                                          /* (FLEX_TWI_SR) General Call Access (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_GACC_Msk     (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos) /* (FLEX_TWI_SR) General Call Access (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_GACC(value)  (FLEX_TWI_SR_FIFO_ENABLED_GACC_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_GACC_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No general call has been detected.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_GACC_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes.  */
#define FLEX_TWI_SR_FIFO_ENABLED_GACC_0       (FLEX_TWI_SR_FIFO_ENABLED_GACC_0_Val << FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos) /* (FLEX_TWI_SR) No general call has been detected. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_GACC_1       (FLEX_TWI_SR_FIFO_ENABLED_GACC_1_Val << FLEX_TWI_SR_FIFO_ENABLED_GACC_Pos) /* (FLEX_TWI_SR) A general call has been detected. After the detection of general call, if need be, the user may acknowledge this access and decode the following bytes and respond according to the value of the bytes. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos     _UINT32_(6)                                          /* (FLEX_TWI_SR) Overrun Error (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_OVRE_Msk     (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos) /* (FLEX_TWI_SR) Overrun Error (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_OVRE(value)  (FLEX_TWI_SR_FIFO_ENABLED_OVRE_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_OVRE_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) FLEX_TWI_RHR has not been loaded while RXRDY was set.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_OVRE_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) FLEX_TWI_RHR has been loaded while RXRDY was set. Reset by read in FLEX_TWI_SR when TXCOMP is set.  */
#define FLEX_TWI_SR_FIFO_ENABLED_OVRE_0       (FLEX_TWI_SR_FIFO_ENABLED_OVRE_0_Val << FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos) /* (FLEX_TWI_SR) FLEX_TWI_RHR has not been loaded while RXRDY was set. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_OVRE_1       (FLEX_TWI_SR_FIFO_ENABLED_OVRE_1_Val << FLEX_TWI_SR_FIFO_ENABLED_OVRE_Pos) /* (FLEX_TWI_SR) FLEX_TWI_RHR has been loaded while RXRDY was set. Reset by read in FLEX_TWI_SR when TXCOMP is set. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos     _UINT32_(7)                                          /* (FLEX_TWI_SR) Underrun Error (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_UNRE_Msk     (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos) /* (FLEX_TWI_SR) Underrun Error (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_UNRE(value)  (FLEX_TWI_SR_FIFO_ENABLED_UNRE_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_UNRE_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) FLEX_TWI_THR has been filled on time.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_UNRE_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) FLEX_TWI_THR has not been filled on time.  */
#define FLEX_TWI_SR_FIFO_ENABLED_UNRE_0       (FLEX_TWI_SR_FIFO_ENABLED_UNRE_0_Val << FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos) /* (FLEX_TWI_SR) FLEX_TWI_THR has been filled on time. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_UNRE_1       (FLEX_TWI_SR_FIFO_ENABLED_UNRE_1_Val << FLEX_TWI_SR_FIFO_ENABLED_UNRE_Pos) /* (FLEX_TWI_SR) FLEX_TWI_THR has not been filled on time. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos     _UINT32_(8)                                          /* (FLEX_TWI_SR) Not Acknowledged (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_NACK_Msk     (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos) /* (FLEX_TWI_SR) Not Acknowledged (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_NACK(value)  (FLEX_TWI_SR_FIFO_ENABLED_NACK_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_NACK_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_NACK_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set the user must not fill FLEX_TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or re initiate it.  */
#define FLEX_TWI_SR_FIFO_ENABLED_NACK_0       (FLEX_TWI_SR_FIFO_ENABLED_NACK_0_Val << FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos) /* (FLEX_TWI_SR) NACK used in Host mode: Each data byte has been correctly received by the far-end side TWI client component. NACK used in Client Read mode: Each data byte has been correctly received by the host. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_NACK_1       (FLEX_TWI_SR_FIFO_ENABLED_NACK_1_Val << FLEX_TWI_SR_FIFO_ENABLED_NACK_Pos) /* (FLEX_TWI_SR) NACK used in Host mode: A data or address byte has not been acknowledged by the client component. Set at the same time as TXCOMP. NACK used in Client Read mode: In Read mode, a data byte has not been acknowledged by the host. When NACK is set the user must not fill FLEX_TWI_THR even if TXRDY is set, because it means that the host will stop the data transfer or re initiate it. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos   _UINT32_(9)                                          /* (FLEX_TWI_SR) Arbitration Lost (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos) /* (FLEX_TWI_SR) Arbitration Lost (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_ARBLST(value) (FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_ARBLST_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) Arbitration won.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_ARBLST_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time.  */
#define FLEX_TWI_SR_FIFO_ENABLED_ARBLST_0     (FLEX_TWI_SR_FIFO_ENABLED_ARBLST_0_Val << FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos) /* (FLEX_TWI_SR) Arbitration won. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_ARBLST_1     (FLEX_TWI_SR_FIFO_ENABLED_ARBLST_1_Val << FLEX_TWI_SR_FIFO_ENABLED_ARBLST_Pos) /* (FLEX_TWI_SR) Arbitration lost. Another host of the TWI bus has won the multi-host arbitration. TXCOMP is set at the same time. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos    _UINT32_(10)                                         /* (FLEX_TWI_SR) Clock Wait State Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Msk    (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos) /* (FLEX_TWI_SR) Clock Wait State Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SCLWS(value) (FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SCLWS_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) The clock is not stretched.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SCLWS_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) The clock is stretched. FLEX_TWI_THR / FLEX_TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SCLWS_0      (FLEX_TWI_SR_FIFO_ENABLED_SCLWS_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos) /* (FLEX_TWI_SR) The clock is not stretched. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SCLWS_1      (FLEX_TWI_SR_FIFO_ENABLED_SCLWS_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SCLWS_Pos) /* (FLEX_TWI_SR) The clock is stretched. FLEX_TWI_THR / FLEX_TWI_RHR buffer is not filled / emptied before the transmission / reception of a new character. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos   _UINT32_(11)                                         /* (FLEX_TWI_SR) End Of Client Access (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos) /* (FLEX_TWI_SR) End Of Client Access (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_EOSACC(value) (FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_EOSACC_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) A client access is being performed.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_EOSACC_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset.  */
#define FLEX_TWI_SR_FIFO_ENABLED_EOSACC_0     (FLEX_TWI_SR_FIFO_ENABLED_EOSACC_0_Val << FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos) /* (FLEX_TWI_SR) A client access is being performed. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_EOSACC_1     (FLEX_TWI_SR_FIFO_ENABLED_EOSACC_1_Val << FLEX_TWI_SR_FIFO_ENABLED_EOSACC_Pos) /* (FLEX_TWI_SR) Client Access is finished. End Of Client Access is automatically set as soon as SVACC is reset. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos    _UINT32_(16)                                         /* (FLEX_TWI_SR) Host Code Acknowledge (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_MCACK_Msk    (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos) /* (FLEX_TWI_SR) Host Code Acknowledge (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_MCACK(value) (FLEX_TWI_SR_FIFO_ENABLED_MCACK_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_MCACK_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No host code has been received.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_MCACK_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A host code has been received.  */
#define FLEX_TWI_SR_FIFO_ENABLED_MCACK_0      (FLEX_TWI_SR_FIFO_ENABLED_MCACK_0_Val << FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos) /* (FLEX_TWI_SR) No host code has been received. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_MCACK_1      (FLEX_TWI_SR_FIFO_ENABLED_MCACK_1_Val << FLEX_TWI_SR_FIFO_ENABLED_MCACK_Pos) /* (FLEX_TWI_SR) A host code has been received. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos     _UINT32_(18)                                         /* (FLEX_TWI_SR) Timeout Error (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TOUT_Msk     (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos) /* (FLEX_TWI_SR) Timeout Error (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_TOUT(value)  (FLEX_TWI_SR_FIFO_ENABLED_TOUT_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_TOUT_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus timeout occurred.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_TOUT_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) SMBus timeout occurred.  */
#define FLEX_TWI_SR_FIFO_ENABLED_TOUT_0       (FLEX_TWI_SR_FIFO_ENABLED_TOUT_0_Val << FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos) /* (FLEX_TWI_SR) No SMBus timeout occurred. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TOUT_1       (FLEX_TWI_SR_FIFO_ENABLED_TOUT_1_Val << FLEX_TWI_SR_FIFO_ENABLED_TOUT_Pos) /* (FLEX_TWI_SR) SMBus timeout occurred. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos   _UINT32_(19)                                         /* (FLEX_TWI_SR) PEC Error (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_PECERR_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos) /* (FLEX_TWI_SR) PEC Error (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_PECERR(value) (FLEX_TWI_SR_FIFO_ENABLED_PECERR_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_PECERR_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus PEC error occurred.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_PECERR_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A SMBus PEC error occurred.  */
#define FLEX_TWI_SR_FIFO_ENABLED_PECERR_0     (FLEX_TWI_SR_FIFO_ENABLED_PECERR_0_Val << FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos) /* (FLEX_TWI_SR) No SMBus PEC error occurred. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_PECERR_1     (FLEX_TWI_SR_FIFO_ENABLED_PECERR_1_Val << FLEX_TWI_SR_FIFO_ENABLED_PECERR_Pos) /* (FLEX_TWI_SR) A SMBus PEC error occurred. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos   _UINT32_(20)                                         /* (FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos) /* (FLEX_TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBDAM(value) (FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus Default Address received.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A SMBus Default Address was received.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_0     (FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos) /* (FLEX_TWI_SR) No SMBus Default Address received. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_1     (FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SMBDAM_Pos) /* (FLEX_TWI_SR) A SMBus Default Address was received. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos   _UINT32_(21)                                         /* (FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Msk   (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos) /* (FLEX_TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBHHM(value) (FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No SMBus Host Header Address received.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) A SMBus Host Header Address was received.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_0     (FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos) /* (FLEX_TWI_SR) No SMBus Host Header Address received. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_1     (FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SMBHHM_Pos) /* (FLEX_TWI_SR) A SMBus Host Header Address was received. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos  _UINT32_(23)                                         /* (FLEX_TWI_SR) Transmit FIFO Lock Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Msk  (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos) /* (FLEX_TWI_SR) Transmit FIFO Lock Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK(value) (FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) The Transmit FIFO is not locked.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) The Transmit FIFO is locked.  */
#define FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_0    (FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_0_Val << FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos) /* (FLEX_TWI_SR) The Transmit FIFO is not locked. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_1    (FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_1_Val << FLEX_TWI_SR_FIFO_ENABLED_TXFLOCK_Pos) /* (FLEX_TWI_SR) The Transmit FIFO is locked. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos      _UINT32_(24)                                         /* (FLEX_TWI_SR) SCL Line Value Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SCL_Msk      (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos)  /* (FLEX_TWI_SR) SCL Line Value Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SCL(value)   (FLEX_TWI_SR_FIFO_ENABLED_SCL_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SCL_0_Val  _UINT32_(0x0)                                        /* (FLEX_TWI_SR) SCL line sampled value is '0'.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SCL_1_Val  _UINT32_(0x1)                                        /* (FLEX_TWI_SR) SCL line sampled value is '1.'  */
#define FLEX_TWI_SR_FIFO_ENABLED_SCL_0        (FLEX_TWI_SR_FIFO_ENABLED_SCL_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos) /* (FLEX_TWI_SR) SCL line sampled value is '0'. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SCL_1        (FLEX_TWI_SR_FIFO_ENABLED_SCL_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SCL_Pos) /* (FLEX_TWI_SR) SCL line sampled value is '1.' Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos      _UINT32_(25)                                         /* (FLEX_TWI_SR) SDA Line Value Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SDA_Msk      (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos)  /* (FLEX_TWI_SR) SDA Line Value Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SDA(value)   (FLEX_TWI_SR_FIFO_ENABLED_SDA_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SDA_0_Val  _UINT32_(0x0)                                        /* (FLEX_TWI_SR) SDA line sampled value is '0'.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SDA_1_Val  _UINT32_(0x1)                                        /* (FLEX_TWI_SR) SDA line sampled value is '1'.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SDA_0        (FLEX_TWI_SR_FIFO_ENABLED_SDA_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos) /* (FLEX_TWI_SR) SDA line sampled value is '0'. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SDA_1        (FLEX_TWI_SR_FIFO_ENABLED_SDA_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SDA_Pos) /* (FLEX_TWI_SR) SDA line sampled value is '1'. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SR_Pos       _UINT32_(26)                                         /* (FLEX_TWI_SR) Start Repeated Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SR_Msk       (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SR_Pos)   /* (FLEX_TWI_SR) Start Repeated Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SR(value)    (FLEX_TWI_SR_FIFO_ENABLED_SR_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SR_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SR_0_Val   _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No repeated start has been detected since last FLEX_TWI_SR read.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SR_1_Val   _UINT32_(0x1)                                        /* (FLEX_TWI_SR) At least one repeated start has been detected since last FLEX_TWI_SR read.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SR_0         (FLEX_TWI_SR_FIFO_ENABLED_SR_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SR_Pos) /* (FLEX_TWI_SR) No repeated start has been detected since last FLEX_TWI_SR read. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SR_1         (FLEX_TWI_SR_FIFO_ENABLED_SR_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SR_Pos) /* (FLEX_TWI_SR) At least one repeated start has been detected since last FLEX_TWI_SR read. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SECE_Pos     _UINT32_(28)                                         /* (FLEX_TWI_SR) Security/Safety Error (cleared on read) Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SECE_Msk     (_UINT32_(0x1) << FLEX_TWI_SR_FIFO_ENABLED_SECE_Pos) /* (FLEX_TWI_SR) Security/Safety Error (cleared on read) Mask */
#define FLEX_TWI_SR_FIFO_ENABLED_SECE(value)  (FLEX_TWI_SR_FIFO_ENABLED_SECE_Msk & (_UINT32_(value) << FLEX_TWI_SR_FIFO_ENABLED_SECE_Pos))
#define   FLEX_TWI_SR_FIFO_ENABLED_SECE_0_Val _UINT32_(0x0)                                        /* (FLEX_TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of FLEX_TWI_SR.  */
#define   FLEX_TWI_SR_FIFO_ENABLED_SECE_1_Val _UINT32_(0x1)                                        /* (FLEX_TWI_SR) An error has been detected on TWD and/or TWCK pad output (FLEX_TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_TWI_WPSR.WPVS=1) since the last read of FLEX_TWI_SR.  */
#define FLEX_TWI_SR_FIFO_ENABLED_SECE_0       (FLEX_TWI_SR_FIFO_ENABLED_SECE_0_Val << FLEX_TWI_SR_FIFO_ENABLED_SECE_Pos) /* (FLEX_TWI_SR) No error detected on TWD and/or TWCK pad output and no access violation of a write-protected register since the last read of FLEX_TWI_SR. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_SECE_1       (FLEX_TWI_SR_FIFO_ENABLED_SECE_1_Val << FLEX_TWI_SR_FIFO_ENABLED_SECE_Pos) /* (FLEX_TWI_SR) An error has been detected on TWD and/or TWCK pad output (FLEX_TWI_WPSR.PADERR=1) and/or a violation of a write-protected register (FLEX_TWI_WPSR.WPVS=1) since the last read of FLEX_TWI_SR. Position */
#define FLEX_TWI_SR_FIFO_ENABLED_Msk          _UINT32_(0x17BD0FFF)                                 /* (FLEX_TWI_SR_FIFO_ENABLED) Register Mask  */


/* -------- FLEX_TWI_IER : (FLEXCOM Offset: 0x624) ( /W 32) TWI Interrupt Enable Register -------- */
#define FLEX_TWI_IER_TXCOMP_Pos               _UINT32_(0)                                          /* (FLEX_TWI_IER) Transmission Completed Interrupt Enable Position */
#define FLEX_TWI_IER_TXCOMP_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_TXCOMP_Pos)           /* (FLEX_TWI_IER) Transmission Completed Interrupt Enable Mask */
#define FLEX_TWI_IER_TXCOMP(value)            (FLEX_TWI_IER_TXCOMP_Msk & (_UINT32_(value) << FLEX_TWI_IER_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_RXRDY_Pos                _UINT32_(1)                                          /* (FLEX_TWI_IER) Receive Holding Register Ready Interrupt Enable Position */
#define FLEX_TWI_IER_RXRDY_Msk                (_UINT32_(0x1) << FLEX_TWI_IER_RXRDY_Pos)            /* (FLEX_TWI_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define FLEX_TWI_IER_RXRDY(value)             (FLEX_TWI_IER_RXRDY_Msk & (_UINT32_(value) << FLEX_TWI_IER_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_TXRDY_Pos                _UINT32_(2)                                          /* (FLEX_TWI_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define FLEX_TWI_IER_TXRDY_Msk                (_UINT32_(0x1) << FLEX_TWI_IER_TXRDY_Pos)            /* (FLEX_TWI_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define FLEX_TWI_IER_TXRDY(value)             (FLEX_TWI_IER_TXRDY_Msk & (_UINT32_(value) << FLEX_TWI_IER_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_SVACC_Pos                _UINT32_(4)                                          /* (FLEX_TWI_IER) Client Access Interrupt Enable Position */
#define FLEX_TWI_IER_SVACC_Msk                (_UINT32_(0x1) << FLEX_TWI_IER_SVACC_Pos)            /* (FLEX_TWI_IER) Client Access Interrupt Enable Mask */
#define FLEX_TWI_IER_SVACC(value)             (FLEX_TWI_IER_SVACC_Msk & (_UINT32_(value) << FLEX_TWI_IER_SVACC_Pos)) /* Assignment of value for SVACC in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_GACC_Pos                 _UINT32_(5)                                          /* (FLEX_TWI_IER) General Call Access Interrupt Enable Position */
#define FLEX_TWI_IER_GACC_Msk                 (_UINT32_(0x1) << FLEX_TWI_IER_GACC_Pos)             /* (FLEX_TWI_IER) General Call Access Interrupt Enable Mask */
#define FLEX_TWI_IER_GACC(value)              (FLEX_TWI_IER_GACC_Msk & (_UINT32_(value) << FLEX_TWI_IER_GACC_Pos)) /* Assignment of value for GACC in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_OVRE_Pos                 _UINT32_(6)                                          /* (FLEX_TWI_IER) Overrun Error Interrupt Enable Position */
#define FLEX_TWI_IER_OVRE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IER_OVRE_Pos)             /* (FLEX_TWI_IER) Overrun Error Interrupt Enable Mask */
#define FLEX_TWI_IER_OVRE(value)              (FLEX_TWI_IER_OVRE_Msk & (_UINT32_(value) << FLEX_TWI_IER_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_UNRE_Pos                 _UINT32_(7)                                          /* (FLEX_TWI_IER) Underrun Error Interrupt Enable Position */
#define FLEX_TWI_IER_UNRE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IER_UNRE_Pos)             /* (FLEX_TWI_IER) Underrun Error Interrupt Enable Mask */
#define FLEX_TWI_IER_UNRE(value)              (FLEX_TWI_IER_UNRE_Msk & (_UINT32_(value) << FLEX_TWI_IER_UNRE_Pos)) /* Assignment of value for UNRE in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_NACK_Pos                 _UINT32_(8)                                          /* (FLEX_TWI_IER) Not Acknowledge Interrupt Enable Position */
#define FLEX_TWI_IER_NACK_Msk                 (_UINT32_(0x1) << FLEX_TWI_IER_NACK_Pos)             /* (FLEX_TWI_IER) Not Acknowledge Interrupt Enable Mask */
#define FLEX_TWI_IER_NACK(value)              (FLEX_TWI_IER_NACK_Msk & (_UINT32_(value) << FLEX_TWI_IER_NACK_Pos)) /* Assignment of value for NACK in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_ARBLST_Pos               _UINT32_(9)                                          /* (FLEX_TWI_IER) Arbitration Lost Interrupt Enable Position */
#define FLEX_TWI_IER_ARBLST_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_ARBLST_Pos)           /* (FLEX_TWI_IER) Arbitration Lost Interrupt Enable Mask */
#define FLEX_TWI_IER_ARBLST(value)            (FLEX_TWI_IER_ARBLST_Msk & (_UINT32_(value) << FLEX_TWI_IER_ARBLST_Pos)) /* Assignment of value for ARBLST in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_SCL_WS_Pos               _UINT32_(10)                                         /* (FLEX_TWI_IER) Clock Wait State Interrupt Enable Position */
#define FLEX_TWI_IER_SCL_WS_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_SCL_WS_Pos)           /* (FLEX_TWI_IER) Clock Wait State Interrupt Enable Mask */
#define FLEX_TWI_IER_SCL_WS(value)            (FLEX_TWI_IER_SCL_WS_Msk & (_UINT32_(value) << FLEX_TWI_IER_SCL_WS_Pos)) /* Assignment of value for SCL_WS in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_EOSACC_Pos               _UINT32_(11)                                         /* (FLEX_TWI_IER) End Of Client Access Interrupt Enable Position */
#define FLEX_TWI_IER_EOSACC_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_EOSACC_Pos)           /* (FLEX_TWI_IER) End Of Client Access Interrupt Enable Mask */
#define FLEX_TWI_IER_EOSACC(value)            (FLEX_TWI_IER_EOSACC_Msk & (_UINT32_(value) << FLEX_TWI_IER_EOSACC_Pos)) /* Assignment of value for EOSACC in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_ENDRX_Pos                _UINT32_(12)                                         /* (FLEX_TWI_IER) End of Receive Buffer Interrupt Enable Position */
#define FLEX_TWI_IER_ENDRX_Msk                (_UINT32_(0x1) << FLEX_TWI_IER_ENDRX_Pos)            /* (FLEX_TWI_IER) End of Receive Buffer Interrupt Enable Mask */
#define FLEX_TWI_IER_ENDRX(value)             (FLEX_TWI_IER_ENDRX_Msk & (_UINT32_(value) << FLEX_TWI_IER_ENDRX_Pos)) /* Assignment of value for ENDRX in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_ENDTX_Pos                _UINT32_(13)                                         /* (FLEX_TWI_IER) End of Transmit Buffer Interrupt Enable Position */
#define FLEX_TWI_IER_ENDTX_Msk                (_UINT32_(0x1) << FLEX_TWI_IER_ENDTX_Pos)            /* (FLEX_TWI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define FLEX_TWI_IER_ENDTX(value)             (FLEX_TWI_IER_ENDTX_Msk & (_UINT32_(value) << FLEX_TWI_IER_ENDTX_Pos)) /* Assignment of value for ENDTX in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_RXBUFF_Pos               _UINT32_(14)                                         /* (FLEX_TWI_IER) Receive Buffer Full Interrupt Enable Position */
#define FLEX_TWI_IER_RXBUFF_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_RXBUFF_Pos)           /* (FLEX_TWI_IER) Receive Buffer Full Interrupt Enable Mask */
#define FLEX_TWI_IER_RXBUFF(value)            (FLEX_TWI_IER_RXBUFF_Msk & (_UINT32_(value) << FLEX_TWI_IER_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_TXBUFE_Pos               _UINT32_(15)                                         /* (FLEX_TWI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define FLEX_TWI_IER_TXBUFE_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_TXBUFE_Pos)           /* (FLEX_TWI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define FLEX_TWI_IER_TXBUFE(value)            (FLEX_TWI_IER_TXBUFE_Msk & (_UINT32_(value) << FLEX_TWI_IER_TXBUFE_Pos)) /* Assignment of value for TXBUFE in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_MCACK_Pos                _UINT32_(16)                                         /* (FLEX_TWI_IER) Host Code Acknowledge Interrupt Enable Position */
#define FLEX_TWI_IER_MCACK_Msk                (_UINT32_(0x1) << FLEX_TWI_IER_MCACK_Pos)            /* (FLEX_TWI_IER) Host Code Acknowledge Interrupt Enable Mask */
#define FLEX_TWI_IER_MCACK(value)             (FLEX_TWI_IER_MCACK_Msk & (_UINT32_(value) << FLEX_TWI_IER_MCACK_Pos)) /* Assignment of value for MCACK in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_TOUT_Pos                 _UINT32_(18)                                         /* (FLEX_TWI_IER) Timeout Error Interrupt Enable Position */
#define FLEX_TWI_IER_TOUT_Msk                 (_UINT32_(0x1) << FLEX_TWI_IER_TOUT_Pos)             /* (FLEX_TWI_IER) Timeout Error Interrupt Enable Mask */
#define FLEX_TWI_IER_TOUT(value)              (FLEX_TWI_IER_TOUT_Msk & (_UINT32_(value) << FLEX_TWI_IER_TOUT_Pos)) /* Assignment of value for TOUT in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_PECERR_Pos               _UINT32_(19)                                         /* (FLEX_TWI_IER) PEC Error Interrupt Enable Position */
#define FLEX_TWI_IER_PECERR_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_PECERR_Pos)           /* (FLEX_TWI_IER) PEC Error Interrupt Enable Mask */
#define FLEX_TWI_IER_PECERR(value)            (FLEX_TWI_IER_PECERR_Msk & (_UINT32_(value) << FLEX_TWI_IER_PECERR_Pos)) /* Assignment of value for PECERR in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_SMBDAM_Pos               _UINT32_(20)                                         /* (FLEX_TWI_IER) SMBus Default Address Match Interrupt Enable Position */
#define FLEX_TWI_IER_SMBDAM_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_SMBDAM_Pos)           /* (FLEX_TWI_IER) SMBus Default Address Match Interrupt Enable Mask */
#define FLEX_TWI_IER_SMBDAM(value)            (FLEX_TWI_IER_SMBDAM_Msk & (_UINT32_(value) << FLEX_TWI_IER_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_SMBHHM_Pos               _UINT32_(21)                                         /* (FLEX_TWI_IER) SMBus Host Header Address Match Interrupt Enable Position */
#define FLEX_TWI_IER_SMBHHM_Msk               (_UINT32_(0x1) << FLEX_TWI_IER_SMBHHM_Pos)           /* (FLEX_TWI_IER) SMBus Host Header Address Match Interrupt Enable Mask */
#define FLEX_TWI_IER_SMBHHM(value)            (FLEX_TWI_IER_SMBHHM_Msk & (_UINT32_(value) << FLEX_TWI_IER_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_SECE_Pos                 _UINT32_(28)                                         /* (FLEX_TWI_IER) Security/Safety Error Interrupt Enable Position */
#define FLEX_TWI_IER_SECE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IER_SECE_Pos)             /* (FLEX_TWI_IER) Security/Safety Error Interrupt Enable Mask */
#define FLEX_TWI_IER_SECE(value)              (FLEX_TWI_IER_SECE_Msk & (_UINT32_(value) << FLEX_TWI_IER_SECE_Pos)) /* Assignment of value for SECE in the FLEX_TWI_IER register */
#define FLEX_TWI_IER_Msk                      _UINT32_(0x103DFFF7)                                 /* (FLEX_TWI_IER) Register Mask  */


/* -------- FLEX_TWI_IDR : (FLEXCOM Offset: 0x628) ( /W 32) TWI Interrupt Disable Register -------- */
#define FLEX_TWI_IDR_TXCOMP_Pos               _UINT32_(0)                                          /* (FLEX_TWI_IDR) Transmission Completed Interrupt Disable Position */
#define FLEX_TWI_IDR_TXCOMP_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_TXCOMP_Pos)           /* (FLEX_TWI_IDR) Transmission Completed Interrupt Disable Mask */
#define FLEX_TWI_IDR_TXCOMP(value)            (FLEX_TWI_IDR_TXCOMP_Msk & (_UINT32_(value) << FLEX_TWI_IDR_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_RXRDY_Pos                _UINT32_(1)                                          /* (FLEX_TWI_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define FLEX_TWI_IDR_RXRDY_Msk                (_UINT32_(0x1) << FLEX_TWI_IDR_RXRDY_Pos)            /* (FLEX_TWI_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define FLEX_TWI_IDR_RXRDY(value)             (FLEX_TWI_IDR_RXRDY_Msk & (_UINT32_(value) << FLEX_TWI_IDR_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_TXRDY_Pos                _UINT32_(2)                                          /* (FLEX_TWI_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define FLEX_TWI_IDR_TXRDY_Msk                (_UINT32_(0x1) << FLEX_TWI_IDR_TXRDY_Pos)            /* (FLEX_TWI_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define FLEX_TWI_IDR_TXRDY(value)             (FLEX_TWI_IDR_TXRDY_Msk & (_UINT32_(value) << FLEX_TWI_IDR_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_SVACC_Pos                _UINT32_(4)                                          /* (FLEX_TWI_IDR) Client Access Interrupt Disable Position */
#define FLEX_TWI_IDR_SVACC_Msk                (_UINT32_(0x1) << FLEX_TWI_IDR_SVACC_Pos)            /* (FLEX_TWI_IDR) Client Access Interrupt Disable Mask */
#define FLEX_TWI_IDR_SVACC(value)             (FLEX_TWI_IDR_SVACC_Msk & (_UINT32_(value) << FLEX_TWI_IDR_SVACC_Pos)) /* Assignment of value for SVACC in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_GACC_Pos                 _UINT32_(5)                                          /* (FLEX_TWI_IDR) General Call Access Interrupt Disable Position */
#define FLEX_TWI_IDR_GACC_Msk                 (_UINT32_(0x1) << FLEX_TWI_IDR_GACC_Pos)             /* (FLEX_TWI_IDR) General Call Access Interrupt Disable Mask */
#define FLEX_TWI_IDR_GACC(value)              (FLEX_TWI_IDR_GACC_Msk & (_UINT32_(value) << FLEX_TWI_IDR_GACC_Pos)) /* Assignment of value for GACC in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_OVRE_Pos                 _UINT32_(6)                                          /* (FLEX_TWI_IDR) Overrun Error Interrupt Disable Position */
#define FLEX_TWI_IDR_OVRE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IDR_OVRE_Pos)             /* (FLEX_TWI_IDR) Overrun Error Interrupt Disable Mask */
#define FLEX_TWI_IDR_OVRE(value)              (FLEX_TWI_IDR_OVRE_Msk & (_UINT32_(value) << FLEX_TWI_IDR_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_UNRE_Pos                 _UINT32_(7)                                          /* (FLEX_TWI_IDR) Underrun Error Interrupt Disable Position */
#define FLEX_TWI_IDR_UNRE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IDR_UNRE_Pos)             /* (FLEX_TWI_IDR) Underrun Error Interrupt Disable Mask */
#define FLEX_TWI_IDR_UNRE(value)              (FLEX_TWI_IDR_UNRE_Msk & (_UINT32_(value) << FLEX_TWI_IDR_UNRE_Pos)) /* Assignment of value for UNRE in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_NACK_Pos                 _UINT32_(8)                                          /* (FLEX_TWI_IDR) Not Acknowledge Interrupt Disable Position */
#define FLEX_TWI_IDR_NACK_Msk                 (_UINT32_(0x1) << FLEX_TWI_IDR_NACK_Pos)             /* (FLEX_TWI_IDR) Not Acknowledge Interrupt Disable Mask */
#define FLEX_TWI_IDR_NACK(value)              (FLEX_TWI_IDR_NACK_Msk & (_UINT32_(value) << FLEX_TWI_IDR_NACK_Pos)) /* Assignment of value for NACK in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_ARBLST_Pos               _UINT32_(9)                                          /* (FLEX_TWI_IDR) Arbitration Lost Interrupt Disable Position */
#define FLEX_TWI_IDR_ARBLST_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_ARBLST_Pos)           /* (FLEX_TWI_IDR) Arbitration Lost Interrupt Disable Mask */
#define FLEX_TWI_IDR_ARBLST(value)            (FLEX_TWI_IDR_ARBLST_Msk & (_UINT32_(value) << FLEX_TWI_IDR_ARBLST_Pos)) /* Assignment of value for ARBLST in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_SCL_WS_Pos               _UINT32_(10)                                         /* (FLEX_TWI_IDR) Clock Wait State Interrupt Disable Position */
#define FLEX_TWI_IDR_SCL_WS_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_SCL_WS_Pos)           /* (FLEX_TWI_IDR) Clock Wait State Interrupt Disable Mask */
#define FLEX_TWI_IDR_SCL_WS(value)            (FLEX_TWI_IDR_SCL_WS_Msk & (_UINT32_(value) << FLEX_TWI_IDR_SCL_WS_Pos)) /* Assignment of value for SCL_WS in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_EOSACC_Pos               _UINT32_(11)                                         /* (FLEX_TWI_IDR) End Of Client Access Interrupt Disable Position */
#define FLEX_TWI_IDR_EOSACC_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_EOSACC_Pos)           /* (FLEX_TWI_IDR) End Of Client Access Interrupt Disable Mask */
#define FLEX_TWI_IDR_EOSACC(value)            (FLEX_TWI_IDR_EOSACC_Msk & (_UINT32_(value) << FLEX_TWI_IDR_EOSACC_Pos)) /* Assignment of value for EOSACC in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_ENDRX_Pos                _UINT32_(12)                                         /* (FLEX_TWI_IDR) End of Receive Buffer Interrupt Disable Position */
#define FLEX_TWI_IDR_ENDRX_Msk                (_UINT32_(0x1) << FLEX_TWI_IDR_ENDRX_Pos)            /* (FLEX_TWI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define FLEX_TWI_IDR_ENDRX(value)             (FLEX_TWI_IDR_ENDRX_Msk & (_UINT32_(value) << FLEX_TWI_IDR_ENDRX_Pos)) /* Assignment of value for ENDRX in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_ENDTX_Pos                _UINT32_(13)                                         /* (FLEX_TWI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define FLEX_TWI_IDR_ENDTX_Msk                (_UINT32_(0x1) << FLEX_TWI_IDR_ENDTX_Pos)            /* (FLEX_TWI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define FLEX_TWI_IDR_ENDTX(value)             (FLEX_TWI_IDR_ENDTX_Msk & (_UINT32_(value) << FLEX_TWI_IDR_ENDTX_Pos)) /* Assignment of value for ENDTX in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_RXBUFF_Pos               _UINT32_(14)                                         /* (FLEX_TWI_IDR) Receive Buffer Full Interrupt Disable Position */
#define FLEX_TWI_IDR_RXBUFF_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_RXBUFF_Pos)           /* (FLEX_TWI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define FLEX_TWI_IDR_RXBUFF(value)            (FLEX_TWI_IDR_RXBUFF_Msk & (_UINT32_(value) << FLEX_TWI_IDR_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_TXBUFE_Pos               _UINT32_(15)                                         /* (FLEX_TWI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define FLEX_TWI_IDR_TXBUFE_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_TXBUFE_Pos)           /* (FLEX_TWI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define FLEX_TWI_IDR_TXBUFE(value)            (FLEX_TWI_IDR_TXBUFE_Msk & (_UINT32_(value) << FLEX_TWI_IDR_TXBUFE_Pos)) /* Assignment of value for TXBUFE in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_MCACK_Pos                _UINT32_(16)                                         /* (FLEX_TWI_IDR) Host Code Acknowledge Interrupt Disable Position */
#define FLEX_TWI_IDR_MCACK_Msk                (_UINT32_(0x1) << FLEX_TWI_IDR_MCACK_Pos)            /* (FLEX_TWI_IDR) Host Code Acknowledge Interrupt Disable Mask */
#define FLEX_TWI_IDR_MCACK(value)             (FLEX_TWI_IDR_MCACK_Msk & (_UINT32_(value) << FLEX_TWI_IDR_MCACK_Pos)) /* Assignment of value for MCACK in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_TOUT_Pos                 _UINT32_(18)                                         /* (FLEX_TWI_IDR) Timeout Error Interrupt Disable Position */
#define FLEX_TWI_IDR_TOUT_Msk                 (_UINT32_(0x1) << FLEX_TWI_IDR_TOUT_Pos)             /* (FLEX_TWI_IDR) Timeout Error Interrupt Disable Mask */
#define FLEX_TWI_IDR_TOUT(value)              (FLEX_TWI_IDR_TOUT_Msk & (_UINT32_(value) << FLEX_TWI_IDR_TOUT_Pos)) /* Assignment of value for TOUT in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_PECERR_Pos               _UINT32_(19)                                         /* (FLEX_TWI_IDR) PEC Error Interrupt Disable Position */
#define FLEX_TWI_IDR_PECERR_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_PECERR_Pos)           /* (FLEX_TWI_IDR) PEC Error Interrupt Disable Mask */
#define FLEX_TWI_IDR_PECERR(value)            (FLEX_TWI_IDR_PECERR_Msk & (_UINT32_(value) << FLEX_TWI_IDR_PECERR_Pos)) /* Assignment of value for PECERR in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_SMBDAM_Pos               _UINT32_(20)                                         /* (FLEX_TWI_IDR) SMBus Default Address Match Interrupt Disable Position */
#define FLEX_TWI_IDR_SMBDAM_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_SMBDAM_Pos)           /* (FLEX_TWI_IDR) SMBus Default Address Match Interrupt Disable Mask */
#define FLEX_TWI_IDR_SMBDAM(value)            (FLEX_TWI_IDR_SMBDAM_Msk & (_UINT32_(value) << FLEX_TWI_IDR_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_SMBHHM_Pos               _UINT32_(21)                                         /* (FLEX_TWI_IDR) SMBus Host Header Address Match Interrupt Disable Position */
#define FLEX_TWI_IDR_SMBHHM_Msk               (_UINT32_(0x1) << FLEX_TWI_IDR_SMBHHM_Pos)           /* (FLEX_TWI_IDR) SMBus Host Header Address Match Interrupt Disable Mask */
#define FLEX_TWI_IDR_SMBHHM(value)            (FLEX_TWI_IDR_SMBHHM_Msk & (_UINT32_(value) << FLEX_TWI_IDR_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_SECE_Pos                 _UINT32_(28)                                         /* (FLEX_TWI_IDR) Security/Safety Error Interrupt Disable Position */
#define FLEX_TWI_IDR_SECE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IDR_SECE_Pos)             /* (FLEX_TWI_IDR) Security/Safety Error Interrupt Disable Mask */
#define FLEX_TWI_IDR_SECE(value)              (FLEX_TWI_IDR_SECE_Msk & (_UINT32_(value) << FLEX_TWI_IDR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_TWI_IDR register */
#define FLEX_TWI_IDR_Msk                      _UINT32_(0x103DFFF7)                                 /* (FLEX_TWI_IDR) Register Mask  */


/* -------- FLEX_TWI_IMR : (FLEXCOM Offset: 0x62C) ( R/ 32) TWI Interrupt Mask Register -------- */
#define FLEX_TWI_IMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_IMR) TWI Interrupt Mask Register  Reset Value */

#define FLEX_TWI_IMR_TXCOMP_Pos               _UINT32_(0)                                          /* (FLEX_TWI_IMR) Transmission Completed Interrupt Mask Position */
#define FLEX_TWI_IMR_TXCOMP_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_TXCOMP_Pos)           /* (FLEX_TWI_IMR) Transmission Completed Interrupt Mask Mask */
#define FLEX_TWI_IMR_TXCOMP(value)            (FLEX_TWI_IMR_TXCOMP_Msk & (_UINT32_(value) << FLEX_TWI_IMR_TXCOMP_Pos)) /* Assignment of value for TXCOMP in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_RXRDY_Pos                _UINT32_(1)                                          /* (FLEX_TWI_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define FLEX_TWI_IMR_RXRDY_Msk                (_UINT32_(0x1) << FLEX_TWI_IMR_RXRDY_Pos)            /* (FLEX_TWI_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define FLEX_TWI_IMR_RXRDY(value)             (FLEX_TWI_IMR_RXRDY_Msk & (_UINT32_(value) << FLEX_TWI_IMR_RXRDY_Pos)) /* Assignment of value for RXRDY in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_TXRDY_Pos                _UINT32_(2)                                          /* (FLEX_TWI_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define FLEX_TWI_IMR_TXRDY_Msk                (_UINT32_(0x1) << FLEX_TWI_IMR_TXRDY_Pos)            /* (FLEX_TWI_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define FLEX_TWI_IMR_TXRDY(value)             (FLEX_TWI_IMR_TXRDY_Msk & (_UINT32_(value) << FLEX_TWI_IMR_TXRDY_Pos)) /* Assignment of value for TXRDY in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_SVACC_Pos                _UINT32_(4)                                          /* (FLEX_TWI_IMR) Client Access Interrupt Mask Position */
#define FLEX_TWI_IMR_SVACC_Msk                (_UINT32_(0x1) << FLEX_TWI_IMR_SVACC_Pos)            /* (FLEX_TWI_IMR) Client Access Interrupt Mask Mask */
#define FLEX_TWI_IMR_SVACC(value)             (FLEX_TWI_IMR_SVACC_Msk & (_UINT32_(value) << FLEX_TWI_IMR_SVACC_Pos)) /* Assignment of value for SVACC in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_GACC_Pos                 _UINT32_(5)                                          /* (FLEX_TWI_IMR) General Call Access Interrupt Mask Position */
#define FLEX_TWI_IMR_GACC_Msk                 (_UINT32_(0x1) << FLEX_TWI_IMR_GACC_Pos)             /* (FLEX_TWI_IMR) General Call Access Interrupt Mask Mask */
#define FLEX_TWI_IMR_GACC(value)              (FLEX_TWI_IMR_GACC_Msk & (_UINT32_(value) << FLEX_TWI_IMR_GACC_Pos)) /* Assignment of value for GACC in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_OVRE_Pos                 _UINT32_(6)                                          /* (FLEX_TWI_IMR) Overrun Error Interrupt Mask Position */
#define FLEX_TWI_IMR_OVRE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IMR_OVRE_Pos)             /* (FLEX_TWI_IMR) Overrun Error Interrupt Mask Mask */
#define FLEX_TWI_IMR_OVRE(value)              (FLEX_TWI_IMR_OVRE_Msk & (_UINT32_(value) << FLEX_TWI_IMR_OVRE_Pos)) /* Assignment of value for OVRE in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_UNRE_Pos                 _UINT32_(7)                                          /* (FLEX_TWI_IMR) Underrun Error Interrupt Mask Position */
#define FLEX_TWI_IMR_UNRE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IMR_UNRE_Pos)             /* (FLEX_TWI_IMR) Underrun Error Interrupt Mask Mask */
#define FLEX_TWI_IMR_UNRE(value)              (FLEX_TWI_IMR_UNRE_Msk & (_UINT32_(value) << FLEX_TWI_IMR_UNRE_Pos)) /* Assignment of value for UNRE in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_NACK_Pos                 _UINT32_(8)                                          /* (FLEX_TWI_IMR) Not Acknowledge Interrupt Mask Position */
#define FLEX_TWI_IMR_NACK_Msk                 (_UINT32_(0x1) << FLEX_TWI_IMR_NACK_Pos)             /* (FLEX_TWI_IMR) Not Acknowledge Interrupt Mask Mask */
#define FLEX_TWI_IMR_NACK(value)              (FLEX_TWI_IMR_NACK_Msk & (_UINT32_(value) << FLEX_TWI_IMR_NACK_Pos)) /* Assignment of value for NACK in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_ARBLST_Pos               _UINT32_(9)                                          /* (FLEX_TWI_IMR) Arbitration Lost Interrupt Mask Position */
#define FLEX_TWI_IMR_ARBLST_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_ARBLST_Pos)           /* (FLEX_TWI_IMR) Arbitration Lost Interrupt Mask Mask */
#define FLEX_TWI_IMR_ARBLST(value)            (FLEX_TWI_IMR_ARBLST_Msk & (_UINT32_(value) << FLEX_TWI_IMR_ARBLST_Pos)) /* Assignment of value for ARBLST in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_SCL_WS_Pos               _UINT32_(10)                                         /* (FLEX_TWI_IMR) Clock Wait State Interrupt Mask Position */
#define FLEX_TWI_IMR_SCL_WS_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_SCL_WS_Pos)           /* (FLEX_TWI_IMR) Clock Wait State Interrupt Mask Mask */
#define FLEX_TWI_IMR_SCL_WS(value)            (FLEX_TWI_IMR_SCL_WS_Msk & (_UINT32_(value) << FLEX_TWI_IMR_SCL_WS_Pos)) /* Assignment of value for SCL_WS in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_EOSACC_Pos               _UINT32_(11)                                         /* (FLEX_TWI_IMR) End Of Client Access Interrupt Mask Position */
#define FLEX_TWI_IMR_EOSACC_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_EOSACC_Pos)           /* (FLEX_TWI_IMR) End Of Client Access Interrupt Mask Mask */
#define FLEX_TWI_IMR_EOSACC(value)            (FLEX_TWI_IMR_EOSACC_Msk & (_UINT32_(value) << FLEX_TWI_IMR_EOSACC_Pos)) /* Assignment of value for EOSACC in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_ENDRX_Pos                _UINT32_(12)                                         /* (FLEX_TWI_IMR) End of Receive Buffer Interrupt Mask Position */
#define FLEX_TWI_IMR_ENDRX_Msk                (_UINT32_(0x1) << FLEX_TWI_IMR_ENDRX_Pos)            /* (FLEX_TWI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define FLEX_TWI_IMR_ENDRX(value)             (FLEX_TWI_IMR_ENDRX_Msk & (_UINT32_(value) << FLEX_TWI_IMR_ENDRX_Pos)) /* Assignment of value for ENDRX in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_ENDTX_Pos                _UINT32_(13)                                         /* (FLEX_TWI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define FLEX_TWI_IMR_ENDTX_Msk                (_UINT32_(0x1) << FLEX_TWI_IMR_ENDTX_Pos)            /* (FLEX_TWI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define FLEX_TWI_IMR_ENDTX(value)             (FLEX_TWI_IMR_ENDTX_Msk & (_UINT32_(value) << FLEX_TWI_IMR_ENDTX_Pos)) /* Assignment of value for ENDTX in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_RXBUFF_Pos               _UINT32_(14)                                         /* (FLEX_TWI_IMR) Receive Buffer Full Interrupt Mask Position */
#define FLEX_TWI_IMR_RXBUFF_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_RXBUFF_Pos)           /* (FLEX_TWI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define FLEX_TWI_IMR_RXBUFF(value)            (FLEX_TWI_IMR_RXBUFF_Msk & (_UINT32_(value) << FLEX_TWI_IMR_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_TXBUFE_Pos               _UINT32_(15)                                         /* (FLEX_TWI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define FLEX_TWI_IMR_TXBUFE_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_TXBUFE_Pos)           /* (FLEX_TWI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define FLEX_TWI_IMR_TXBUFE(value)            (FLEX_TWI_IMR_TXBUFE_Msk & (_UINT32_(value) << FLEX_TWI_IMR_TXBUFE_Pos)) /* Assignment of value for TXBUFE in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_MCACK_Pos                _UINT32_(16)                                         /* (FLEX_TWI_IMR) Host Code Acknowledge Interrupt Mask Position */
#define FLEX_TWI_IMR_MCACK_Msk                (_UINT32_(0x1) << FLEX_TWI_IMR_MCACK_Pos)            /* (FLEX_TWI_IMR) Host Code Acknowledge Interrupt Mask Mask */
#define FLEX_TWI_IMR_MCACK(value)             (FLEX_TWI_IMR_MCACK_Msk & (_UINT32_(value) << FLEX_TWI_IMR_MCACK_Pos)) /* Assignment of value for MCACK in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_TOUT_Pos                 _UINT32_(18)                                         /* (FLEX_TWI_IMR) Timeout Error Interrupt Mask Position */
#define FLEX_TWI_IMR_TOUT_Msk                 (_UINT32_(0x1) << FLEX_TWI_IMR_TOUT_Pos)             /* (FLEX_TWI_IMR) Timeout Error Interrupt Mask Mask */
#define FLEX_TWI_IMR_TOUT(value)              (FLEX_TWI_IMR_TOUT_Msk & (_UINT32_(value) << FLEX_TWI_IMR_TOUT_Pos)) /* Assignment of value for TOUT in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_PECERR_Pos               _UINT32_(19)                                         /* (FLEX_TWI_IMR) PEC Error Interrupt Mask Position */
#define FLEX_TWI_IMR_PECERR_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_PECERR_Pos)           /* (FLEX_TWI_IMR) PEC Error Interrupt Mask Mask */
#define FLEX_TWI_IMR_PECERR(value)            (FLEX_TWI_IMR_PECERR_Msk & (_UINT32_(value) << FLEX_TWI_IMR_PECERR_Pos)) /* Assignment of value for PECERR in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_SMBDAM_Pos               _UINT32_(20)                                         /* (FLEX_TWI_IMR) SMBus Default Address Match Interrupt Mask Position */
#define FLEX_TWI_IMR_SMBDAM_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_SMBDAM_Pos)           /* (FLEX_TWI_IMR) SMBus Default Address Match Interrupt Mask Mask */
#define FLEX_TWI_IMR_SMBDAM(value)            (FLEX_TWI_IMR_SMBDAM_Msk & (_UINT32_(value) << FLEX_TWI_IMR_SMBDAM_Pos)) /* Assignment of value for SMBDAM in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_SMBHHM_Pos               _UINT32_(21)                                         /* (FLEX_TWI_IMR) SMBus Host Header Address Match Interrupt Mask Position */
#define FLEX_TWI_IMR_SMBHHM_Msk               (_UINT32_(0x1) << FLEX_TWI_IMR_SMBHHM_Pos)           /* (FLEX_TWI_IMR) SMBus Host Header Address Match Interrupt Mask Mask */
#define FLEX_TWI_IMR_SMBHHM(value)            (FLEX_TWI_IMR_SMBHHM_Msk & (_UINT32_(value) << FLEX_TWI_IMR_SMBHHM_Pos)) /* Assignment of value for SMBHHM in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_SECE_Pos                 _UINT32_(28)                                         /* (FLEX_TWI_IMR) Security/Safety Error Interrupt Mask Position */
#define FLEX_TWI_IMR_SECE_Msk                 (_UINT32_(0x1) << FLEX_TWI_IMR_SECE_Pos)             /* (FLEX_TWI_IMR) Security/Safety Error Interrupt Mask Mask */
#define FLEX_TWI_IMR_SECE(value)              (FLEX_TWI_IMR_SECE_Msk & (_UINT32_(value) << FLEX_TWI_IMR_SECE_Pos)) /* Assignment of value for SECE in the FLEX_TWI_IMR register */
#define FLEX_TWI_IMR_Msk                      _UINT32_(0x103DFFF7)                                 /* (FLEX_TWI_IMR) Register Mask  */


/* -------- FLEX_TWI_RHR : (FLEXCOM Offset: 0x630) ( R/ 32) TWI Receive Holding Register -------- */
#define FLEX_TWI_RHR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_RHR) TWI Receive Holding Register  Reset Value */

#define FLEX_TWI_RHR_RXDATA_Pos               _UINT32_(0)                                          /* (FLEX_TWI_RHR) Host or Client Receive Holding Data Position */
#define FLEX_TWI_RHR_RXDATA_Msk               (_UINT32_(0xFF) << FLEX_TWI_RHR_RXDATA_Pos)          /* (FLEX_TWI_RHR) Host or Client Receive Holding Data Mask */
#define FLEX_TWI_RHR_RXDATA(value)            (FLEX_TWI_RHR_RXDATA_Msk & (_UINT32_(value) << FLEX_TWI_RHR_RXDATA_Pos)) /* Assignment of value for RXDATA in the FLEX_TWI_RHR register */
#define FLEX_TWI_RHR_SSTATE_Pos               _UINT32_(8)                                          /* (FLEX_TWI_RHR) Start State (Client Sniffer Mode only) Position */
#define FLEX_TWI_RHR_SSTATE_Msk               (_UINT32_(0x3) << FLEX_TWI_RHR_SSTATE_Pos)           /* (FLEX_TWI_RHR) Start State (Client Sniffer Mode only) Mask */
#define FLEX_TWI_RHR_SSTATE(value)            (FLEX_TWI_RHR_SSTATE_Msk & (_UINT32_(value) << FLEX_TWI_RHR_SSTATE_Pos)) /* Assignment of value for SSTATE in the FLEX_TWI_RHR register */
#define   FLEX_TWI_RHR_SSTATE_NOSTART_Val     _UINT32_(0x0)                                        /* (FLEX_TWI_RHR) No START detected with the logged data  */
#define   FLEX_TWI_RHR_SSTATE_START_Val       _UINT32_(0x1)                                        /* (FLEX_TWI_RHR) START (S) detected with the logged data  */
#define   FLEX_TWI_RHR_SSTATE_RSTART_Val      _UINT32_(0x2)                                        /* (FLEX_TWI_RHR) Repeated START (Sr) detected with the logged data  */
#define   FLEX_TWI_RHR_SSTATE_UNDEF_Val       _UINT32_(0x3)                                        /* (FLEX_TWI_RHR) Not defined  */
#define FLEX_TWI_RHR_SSTATE_NOSTART           (FLEX_TWI_RHR_SSTATE_NOSTART_Val << FLEX_TWI_RHR_SSTATE_Pos) /* (FLEX_TWI_RHR) No START detected with the logged data Position */
#define FLEX_TWI_RHR_SSTATE_START             (FLEX_TWI_RHR_SSTATE_START_Val << FLEX_TWI_RHR_SSTATE_Pos) /* (FLEX_TWI_RHR) START (S) detected with the logged data Position */
#define FLEX_TWI_RHR_SSTATE_RSTART            (FLEX_TWI_RHR_SSTATE_RSTART_Val << FLEX_TWI_RHR_SSTATE_Pos) /* (FLEX_TWI_RHR) Repeated START (Sr) detected with the logged data Position */
#define FLEX_TWI_RHR_SSTATE_UNDEF             (FLEX_TWI_RHR_SSTATE_UNDEF_Val << FLEX_TWI_RHR_SSTATE_Pos) /* (FLEX_TWI_RHR) Not defined Position */
#define FLEX_TWI_RHR_PSTATE_Pos               _UINT32_(10)                                         /* (FLEX_TWI_RHR) Stop State (Client Sniffer Mode only) Position */
#define FLEX_TWI_RHR_PSTATE_Msk               (_UINT32_(0x1) << FLEX_TWI_RHR_PSTATE_Pos)           /* (FLEX_TWI_RHR) Stop State (Client Sniffer Mode only) Mask */
#define FLEX_TWI_RHR_PSTATE(value)            (FLEX_TWI_RHR_PSTATE_Msk & (_UINT32_(value) << FLEX_TWI_RHR_PSTATE_Pos)) /* Assignment of value for PSTATE in the FLEX_TWI_RHR register */
#define   FLEX_TWI_RHR_PSTATE_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_RHR) No STOP (P) detected after previous logged data.  */
#define   FLEX_TWI_RHR_PSTATE_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_RHR) Stop detected (P) after previous logged data.  */
#define FLEX_TWI_RHR_PSTATE_0                 (FLEX_TWI_RHR_PSTATE_0_Val << FLEX_TWI_RHR_PSTATE_Pos) /* (FLEX_TWI_RHR) No STOP (P) detected after previous logged data. Position */
#define FLEX_TWI_RHR_PSTATE_1                 (FLEX_TWI_RHR_PSTATE_1_Val << FLEX_TWI_RHR_PSTATE_Pos) /* (FLEX_TWI_RHR) Stop detected (P) after previous logged data. Position */
#define FLEX_TWI_RHR_ASTATE_Pos               _UINT32_(11)                                         /* (FLEX_TWI_RHR) Acknowledge State (Client Sniffer Mode only) Position */
#define FLEX_TWI_RHR_ASTATE_Msk               (_UINT32_(0x3) << FLEX_TWI_RHR_ASTATE_Pos)           /* (FLEX_TWI_RHR) Acknowledge State (Client Sniffer Mode only) Mask */
#define FLEX_TWI_RHR_ASTATE(value)            (FLEX_TWI_RHR_ASTATE_Msk & (_UINT32_(value) << FLEX_TWI_RHR_ASTATE_Pos)) /* Assignment of value for ASTATE in the FLEX_TWI_RHR register */
#define   FLEX_TWI_RHR_ASTATE_NONE_Val        _UINT32_(0x0)                                        /* (FLEX_TWI_RHR) No Acknowledge or Nacknowledge detected after previously logged data  */
#define   FLEX_TWI_RHR_ASTATE_ACK_Val         _UINT32_(0x1)                                        /* (FLEX_TWI_RHR) Acknowledge (A) detected after previously logged data  */
#define   FLEX_TWI_RHR_ASTATE_NACK_Val        _UINT32_(0x2)                                        /* (FLEX_TWI_RHR) Nacknowledge (NA) detected after previously logged data  */
#define   FLEX_TWI_RHR_ASTATE_UNDEF_Val       _UINT32_(0x3)                                        /* (FLEX_TWI_RHR) Not defined  */
#define FLEX_TWI_RHR_ASTATE_NONE              (FLEX_TWI_RHR_ASTATE_NONE_Val << FLEX_TWI_RHR_ASTATE_Pos) /* (FLEX_TWI_RHR) No Acknowledge or Nacknowledge detected after previously logged data Position */
#define FLEX_TWI_RHR_ASTATE_ACK               (FLEX_TWI_RHR_ASTATE_ACK_Val << FLEX_TWI_RHR_ASTATE_Pos) /* (FLEX_TWI_RHR) Acknowledge (A) detected after previously logged data Position */
#define FLEX_TWI_RHR_ASTATE_NACK              (FLEX_TWI_RHR_ASTATE_NACK_Val << FLEX_TWI_RHR_ASTATE_Pos) /* (FLEX_TWI_RHR) Nacknowledge (NA) detected after previously logged data Position */
#define FLEX_TWI_RHR_ASTATE_UNDEF             (FLEX_TWI_RHR_ASTATE_UNDEF_Val << FLEX_TWI_RHR_ASTATE_Pos) /* (FLEX_TWI_RHR) Not defined Position */
#define FLEX_TWI_RHR_Msk                      _UINT32_(0x00001FFF)                                 /* (FLEX_TWI_RHR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Pos _UINT32_(0)                                          /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 0 Position */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Msk (_UINT32_(0xFF) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Pos) /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 0 Mask */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0(value) (FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Msk & (_UINT32_(value) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA0_Pos))
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Pos _UINT32_(8)                                          /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 1 Position */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Msk (_UINT32_(0xFF) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Pos) /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 1 Mask */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1(value) (FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Msk & (_UINT32_(value) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA1_Pos))
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Pos _UINT32_(16)                                         /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 2 Position */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Msk (_UINT32_(0xFF) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Pos) /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 2 Mask */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2(value) (FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Msk & (_UINT32_(value) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA2_Pos))
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Pos _UINT32_(24)                                         /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 3 Position */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Msk (_UINT32_(0xFF) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Pos) /* (FLEX_TWI_RHR) Host or Client Receive Holding Data 3 Mask */
#define FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3(value) (FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Msk & (_UINT32_(value) << FLEX_TWI_RHR_FIFO_ENABLED_RXDATA3_Pos))
#define FLEX_TWI_RHR_FIFO_ENABLED_Msk         _UINT32_(0xFFFFFFFF)                                 /* (FLEX_TWI_RHR_FIFO_ENABLED) Register Mask  */


/* -------- FLEX_TWI_THR : (FLEXCOM Offset: 0x634) ( /W 32) TWI Transmit Holding Register -------- */
#define FLEX_TWI_THR_TXDATA_Pos               _UINT32_(0)                                          /* (FLEX_TWI_THR) Host or Client Transmit Holding Data Position */
#define FLEX_TWI_THR_TXDATA_Msk               (_UINT32_(0xFF) << FLEX_TWI_THR_TXDATA_Pos)          /* (FLEX_TWI_THR) Host or Client Transmit Holding Data Mask */
#define FLEX_TWI_THR_TXDATA(value)            (FLEX_TWI_THR_TXDATA_Msk & (_UINT32_(value) << FLEX_TWI_THR_TXDATA_Pos)) /* Assignment of value for TXDATA in the FLEX_TWI_THR register */
#define FLEX_TWI_THR_Msk                      _UINT32_(0x000000FF)                                 /* (FLEX_TWI_THR) Register Mask  */

/* FIFO_ENABLED mode */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Pos _UINT32_(0)                                          /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 0 Position */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Msk (_UINT32_(0xFF) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Pos) /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 0 Mask */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA0(value) (FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Msk & (_UINT32_(value) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA0_Pos))
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Pos _UINT32_(8)                                          /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 1 Position */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Msk (_UINT32_(0xFF) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Pos) /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 1 Mask */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA1(value) (FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Msk & (_UINT32_(value) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA1_Pos))
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Pos _UINT32_(16)                                         /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 2 Position */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Msk (_UINT32_(0xFF) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Pos) /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 2 Mask */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA2(value) (FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Msk & (_UINT32_(value) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA2_Pos))
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Pos _UINT32_(24)                                         /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 3 Position */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Msk (_UINT32_(0xFF) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Pos) /* (FLEX_TWI_THR) Host or Client Transmit Holding Data 3 Mask */
#define FLEX_TWI_THR_FIFO_ENABLED_TXDATA3(value) (FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Msk & (_UINT32_(value) << FLEX_TWI_THR_FIFO_ENABLED_TXDATA3_Pos))
#define FLEX_TWI_THR_FIFO_ENABLED_Msk         _UINT32_(0xFFFFFFFF)                                 /* (FLEX_TWI_THR_FIFO_ENABLED) Register Mask  */


/* -------- FLEX_TWI_SMBTR : (FLEXCOM Offset: 0x638) (R/W 32) TWI SMBus Timing Register -------- */
#define FLEX_TWI_SMBTR_RESETVALUE             _UINT32_(0x00)                                       /*  (FLEX_TWI_SMBTR) TWI SMBus Timing Register  Reset Value */

#define FLEX_TWI_SMBTR_PRESC_Pos              _UINT32_(0)                                          /* (FLEX_TWI_SMBTR) SMBus Clock Prescaler Position */
#define FLEX_TWI_SMBTR_PRESC_Msk              (_UINT32_(0xF) << FLEX_TWI_SMBTR_PRESC_Pos)          /* (FLEX_TWI_SMBTR) SMBus Clock Prescaler Mask */
#define FLEX_TWI_SMBTR_PRESC(value)           (FLEX_TWI_SMBTR_PRESC_Msk & (_UINT32_(value) << FLEX_TWI_SMBTR_PRESC_Pos)) /* Assignment of value for PRESC in the FLEX_TWI_SMBTR register */
#define FLEX_TWI_SMBTR_TLOWS_Pos              _UINT32_(8)                                          /* (FLEX_TWI_SMBTR) Client Clock Stretch Maximum Cycles Position */
#define FLEX_TWI_SMBTR_TLOWS_Msk              (_UINT32_(0xFF) << FLEX_TWI_SMBTR_TLOWS_Pos)         /* (FLEX_TWI_SMBTR) Client Clock Stretch Maximum Cycles Mask */
#define FLEX_TWI_SMBTR_TLOWS(value)           (FLEX_TWI_SMBTR_TLOWS_Msk & (_UINT32_(value) << FLEX_TWI_SMBTR_TLOWS_Pos)) /* Assignment of value for TLOWS in the FLEX_TWI_SMBTR register */
#define   FLEX_TWI_SMBTR_TLOWS_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_SMBTR) TLOW:SEXT timeout check disabled.  */
#define FLEX_TWI_SMBTR_TLOWS_0                (FLEX_TWI_SMBTR_TLOWS_0_Val << FLEX_TWI_SMBTR_TLOWS_Pos) /* (FLEX_TWI_SMBTR) TLOW:SEXT timeout check disabled. Position */
#define FLEX_TWI_SMBTR_TLOWM_Pos              _UINT32_(16)                                         /* (FLEX_TWI_SMBTR) Host Clock Stretch Maximum Cycles Position */
#define FLEX_TWI_SMBTR_TLOWM_Msk              (_UINT32_(0xFF) << FLEX_TWI_SMBTR_TLOWM_Pos)         /* (FLEX_TWI_SMBTR) Host Clock Stretch Maximum Cycles Mask */
#define FLEX_TWI_SMBTR_TLOWM(value)           (FLEX_TWI_SMBTR_TLOWM_Msk & (_UINT32_(value) << FLEX_TWI_SMBTR_TLOWM_Pos)) /* Assignment of value for TLOWM in the FLEX_TWI_SMBTR register */
#define   FLEX_TWI_SMBTR_TLOWM_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_SMBTR) TLOW:MEXT timeout check disabled.  */
#define FLEX_TWI_SMBTR_TLOWM_0                (FLEX_TWI_SMBTR_TLOWM_0_Val << FLEX_TWI_SMBTR_TLOWM_Pos) /* (FLEX_TWI_SMBTR) TLOW:MEXT timeout check disabled. Position */
#define FLEX_TWI_SMBTR_THMAX_Pos              _UINT32_(24)                                         /* (FLEX_TWI_SMBTR) Clock High Maximum Cycles Position */
#define FLEX_TWI_SMBTR_THMAX_Msk              (_UINT32_(0xFF) << FLEX_TWI_SMBTR_THMAX_Pos)         /* (FLEX_TWI_SMBTR) Clock High Maximum Cycles Mask */
#define FLEX_TWI_SMBTR_THMAX(value)           (FLEX_TWI_SMBTR_THMAX_Msk & (_UINT32_(value) << FLEX_TWI_SMBTR_THMAX_Pos)) /* Assignment of value for THMAX in the FLEX_TWI_SMBTR register */
#define FLEX_TWI_SMBTR_Msk                    _UINT32_(0xFFFFFF0F)                                 /* (FLEX_TWI_SMBTR) Register Mask  */


/* -------- FLEX_TWI_HSR : (FLEXCOM Offset: 0x63C) (R/W 32) TWI High Speed Register -------- */
#define FLEX_TWI_HSR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_HSR) TWI High Speed Register  Reset Value */

#define FLEX_TWI_HSR_MCODE_Pos                _UINT32_(0)                                          /* (FLEX_TWI_HSR) TWI High Speed Host Code Position */
#define FLEX_TWI_HSR_MCODE_Msk                (_UINT32_(0xFF) << FLEX_TWI_HSR_MCODE_Pos)           /* (FLEX_TWI_HSR) TWI High Speed Host Code Mask */
#define FLEX_TWI_HSR_MCODE(value)             (FLEX_TWI_HSR_MCODE_Msk & (_UINT32_(value) << FLEX_TWI_HSR_MCODE_Pos)) /* Assignment of value for MCODE in the FLEX_TWI_HSR register */
#define FLEX_TWI_HSR_Msk                      _UINT32_(0x000000FF)                                 /* (FLEX_TWI_HSR) Register Mask  */


/* -------- FLEX_TWI_ACR : (FLEXCOM Offset: 0x640) (R/W 32) TWI Alternative Command Register -------- */
#define FLEX_TWI_ACR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_ACR) TWI Alternative Command Register  Reset Value */

#define FLEX_TWI_ACR_DATAL_Pos                _UINT32_(0)                                          /* (FLEX_TWI_ACR) Data Length Position */
#define FLEX_TWI_ACR_DATAL_Msk                (_UINT32_(0xFF) << FLEX_TWI_ACR_DATAL_Pos)           /* (FLEX_TWI_ACR) Data Length Mask */
#define FLEX_TWI_ACR_DATAL(value)             (FLEX_TWI_ACR_DATAL_Msk & (_UINT32_(value) << FLEX_TWI_ACR_DATAL_Pos)) /* Assignment of value for DATAL in the FLEX_TWI_ACR register */
#define   FLEX_TWI_ACR_DATAL_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)").  */
#define FLEX_TWI_ACR_DATAL_0                  (FLEX_TWI_ACR_DATAL_0_Val << FLEX_TWI_ACR_DATAL_Pos) /* (FLEX_TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)"). Position */
#define FLEX_TWI_ACR_DIR_Pos                  _UINT32_(8)                                          /* (FLEX_TWI_ACR) Transfer Direction Position */
#define FLEX_TWI_ACR_DIR_Msk                  (_UINT32_(0x1) << FLEX_TWI_ACR_DIR_Pos)              /* (FLEX_TWI_ACR) Transfer Direction Mask */
#define FLEX_TWI_ACR_DIR(value)               (FLEX_TWI_ACR_DIR_Msk & (_UINT32_(value) << FLEX_TWI_ACR_DIR_Pos)) /* Assignment of value for DIR in the FLEX_TWI_ACR register */
#define   FLEX_TWI_ACR_DIR_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_ACR) Write direction.  */
#define   FLEX_TWI_ACR_DIR_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_ACR) Read direction.  */
#define FLEX_TWI_ACR_DIR_0                    (FLEX_TWI_ACR_DIR_0_Val << FLEX_TWI_ACR_DIR_Pos)     /* (FLEX_TWI_ACR) Write direction. Position */
#define FLEX_TWI_ACR_DIR_1                    (FLEX_TWI_ACR_DIR_1_Val << FLEX_TWI_ACR_DIR_Pos)     /* (FLEX_TWI_ACR) Read direction. Position */
#define FLEX_TWI_ACR_PEC_Pos                  _UINT32_(9)                                          /* (FLEX_TWI_ACR) PEC Request (SMBus Mode only) Position */
#define FLEX_TWI_ACR_PEC_Msk                  (_UINT32_(0x1) << FLEX_TWI_ACR_PEC_Pos)              /* (FLEX_TWI_ACR) PEC Request (SMBus Mode only) Mask */
#define FLEX_TWI_ACR_PEC(value)               (FLEX_TWI_ACR_PEC_Msk & (_UINT32_(value) << FLEX_TWI_ACR_PEC_Pos)) /* Assignment of value for PEC in the FLEX_TWI_ACR register */
#define   FLEX_TWI_ACR_PEC_0_Val              _UINT32_(0x0)                                        /* (FLEX_TWI_ACR) The transfer does not use a PEC byte.  */
#define   FLEX_TWI_ACR_PEC_1_Val              _UINT32_(0x1)                                        /* (FLEX_TWI_ACR) The transfer uses a PEC byte.  */
#define FLEX_TWI_ACR_PEC_0                    (FLEX_TWI_ACR_PEC_0_Val << FLEX_TWI_ACR_PEC_Pos)     /* (FLEX_TWI_ACR) The transfer does not use a PEC byte. Position */
#define FLEX_TWI_ACR_PEC_1                    (FLEX_TWI_ACR_PEC_1_Val << FLEX_TWI_ACR_PEC_Pos)     /* (FLEX_TWI_ACR) The transfer uses a PEC byte. Position */
#define FLEX_TWI_ACR_NDATAL_Pos               _UINT32_(16)                                         /* (FLEX_TWI_ACR) Next Data Length Position */
#define FLEX_TWI_ACR_NDATAL_Msk               (_UINT32_(0xFF) << FLEX_TWI_ACR_NDATAL_Pos)          /* (FLEX_TWI_ACR) Next Data Length Mask */
#define FLEX_TWI_ACR_NDATAL(value)            (FLEX_TWI_ACR_NDATAL_Msk & (_UINT32_(value) << FLEX_TWI_ACR_NDATAL_Pos)) /* Assignment of value for NDATAL in the FLEX_TWI_ACR register */
#define   FLEX_TWI_ACR_NDATAL_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)").  */
#define FLEX_TWI_ACR_NDATAL_0                 (FLEX_TWI_ACR_NDATAL_0_Val << FLEX_TWI_ACR_NDATAL_Pos) /* (FLEX_TWI_ACR) No data to send (see Section 10.3.11 "SMBus Quick Command (Host Mode Only)"). Position */
#define FLEX_TWI_ACR_NDIR_Pos                 _UINT32_(24)                                         /* (FLEX_TWI_ACR) Next Transfer Direction Position */
#define FLEX_TWI_ACR_NDIR_Msk                 (_UINT32_(0x1) << FLEX_TWI_ACR_NDIR_Pos)             /* (FLEX_TWI_ACR) Next Transfer Direction Mask */
#define FLEX_TWI_ACR_NDIR(value)              (FLEX_TWI_ACR_NDIR_Msk & (_UINT32_(value) << FLEX_TWI_ACR_NDIR_Pos)) /* Assignment of value for NDIR in the FLEX_TWI_ACR register */
#define   FLEX_TWI_ACR_NDIR_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_ACR) Write direction.  */
#define   FLEX_TWI_ACR_NDIR_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_ACR) Read direction.  */
#define FLEX_TWI_ACR_NDIR_0                   (FLEX_TWI_ACR_NDIR_0_Val << FLEX_TWI_ACR_NDIR_Pos)   /* (FLEX_TWI_ACR) Write direction. Position */
#define FLEX_TWI_ACR_NDIR_1                   (FLEX_TWI_ACR_NDIR_1_Val << FLEX_TWI_ACR_NDIR_Pos)   /* (FLEX_TWI_ACR) Read direction. Position */
#define FLEX_TWI_ACR_NPEC_Pos                 _UINT32_(25)                                         /* (FLEX_TWI_ACR) Next PEC Request (SMBus Mode only) Position */
#define FLEX_TWI_ACR_NPEC_Msk                 (_UINT32_(0x1) << FLEX_TWI_ACR_NPEC_Pos)             /* (FLEX_TWI_ACR) Next PEC Request (SMBus Mode only) Mask */
#define FLEX_TWI_ACR_NPEC(value)              (FLEX_TWI_ACR_NPEC_Msk & (_UINT32_(value) << FLEX_TWI_ACR_NPEC_Pos)) /* Assignment of value for NPEC in the FLEX_TWI_ACR register */
#define   FLEX_TWI_ACR_NPEC_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_ACR) The next transfer does not use a PEC byte.  */
#define   FLEX_TWI_ACR_NPEC_1_Val             _UINT32_(0x1)                                        /* (FLEX_TWI_ACR) The next transfer uses a PEC byte.  */
#define FLEX_TWI_ACR_NPEC_0                   (FLEX_TWI_ACR_NPEC_0_Val << FLEX_TWI_ACR_NPEC_Pos)   /* (FLEX_TWI_ACR) The next transfer does not use a PEC byte. Position */
#define FLEX_TWI_ACR_NPEC_1                   (FLEX_TWI_ACR_NPEC_1_Val << FLEX_TWI_ACR_NPEC_Pos)   /* (FLEX_TWI_ACR) The next transfer uses a PEC byte. Position */
#define FLEX_TWI_ACR_Msk                      _UINT32_(0x03FF03FF)                                 /* (FLEX_TWI_ACR) Register Mask  */


/* -------- FLEX_TWI_FILTR : (FLEXCOM Offset: 0x644) (R/W 32) TWI Filter Register -------- */
#define FLEX_TWI_FILTR_RESETVALUE             _UINT32_(0x00)                                       /*  (FLEX_TWI_FILTR) TWI Filter Register  Reset Value */

#define FLEX_TWI_FILTR_FILT_Pos               _UINT32_(0)                                          /* (FLEX_TWI_FILTR) RX Digital Filter Position */
#define FLEX_TWI_FILTR_FILT_Msk               (_UINT32_(0x1) << FLEX_TWI_FILTR_FILT_Pos)           /* (FLEX_TWI_FILTR) RX Digital Filter Mask */
#define FLEX_TWI_FILTR_FILT(value)            (FLEX_TWI_FILTR_FILT_Msk & (_UINT32_(value) << FLEX_TWI_FILTR_FILT_Pos)) /* Assignment of value for FILT in the FLEX_TWI_FILTR register */
#define   FLEX_TWI_FILTR_FILT_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_FILTR) No filtering applied on TWI inputs.  */
#define   FLEX_TWI_FILTR_FILT_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_FILTR) TWI input filtering is active. (Only in Standard and Fast modes)  */
#define FLEX_TWI_FILTR_FILT_0                 (FLEX_TWI_FILTR_FILT_0_Val << FLEX_TWI_FILTR_FILT_Pos) /* (FLEX_TWI_FILTR) No filtering applied on TWI inputs. Position */
#define FLEX_TWI_FILTR_FILT_1                 (FLEX_TWI_FILTR_FILT_1_Val << FLEX_TWI_FILTR_FILT_Pos) /* (FLEX_TWI_FILTR) TWI input filtering is active. (Only in Standard and Fast modes) Position */
#define FLEX_TWI_FILTR_PADFEN_Pos             _UINT32_(1)                                          /* (FLEX_TWI_FILTR) PAD Filter Enable Position */
#define FLEX_TWI_FILTR_PADFEN_Msk             (_UINT32_(0x1) << FLEX_TWI_FILTR_PADFEN_Pos)         /* (FLEX_TWI_FILTR) PAD Filter Enable Mask */
#define FLEX_TWI_FILTR_PADFEN(value)          (FLEX_TWI_FILTR_PADFEN_Msk & (_UINT32_(value) << FLEX_TWI_FILTR_PADFEN_Pos)) /* Assignment of value for PADFEN in the FLEX_TWI_FILTR register */
#define   FLEX_TWI_FILTR_PADFEN_0_Val         _UINT32_(0x0)                                        /* (FLEX_TWI_FILTR) PAD analog filter is disabled.  */
#define   FLEX_TWI_FILTR_PADFEN_1_Val         _UINT32_(0x1)                                        /* (FLEX_TWI_FILTR) PAD analog filter is enabled. (The analog filter must be enabled if High-speed mode is enabled.)  */
#define FLEX_TWI_FILTR_PADFEN_0               (FLEX_TWI_FILTR_PADFEN_0_Val << FLEX_TWI_FILTR_PADFEN_Pos) /* (FLEX_TWI_FILTR) PAD analog filter is disabled. Position */
#define FLEX_TWI_FILTR_PADFEN_1               (FLEX_TWI_FILTR_PADFEN_1_Val << FLEX_TWI_FILTR_PADFEN_Pos) /* (FLEX_TWI_FILTR) PAD analog filter is enabled. (The analog filter must be enabled if High-speed mode is enabled.) Position */
#define FLEX_TWI_FILTR_THRES_Pos              _UINT32_(8)                                          /* (FLEX_TWI_FILTR) Digital Filter Threshold Position */
#define FLEX_TWI_FILTR_THRES_Msk              (_UINT32_(0x7) << FLEX_TWI_FILTR_THRES_Pos)          /* (FLEX_TWI_FILTR) Digital Filter Threshold Mask */
#define FLEX_TWI_FILTR_THRES(value)           (FLEX_TWI_FILTR_THRES_Msk & (_UINT32_(value) << FLEX_TWI_FILTR_THRES_Pos)) /* Assignment of value for THRES in the FLEX_TWI_FILTR register */
#define   FLEX_TWI_FILTR_THRES_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_FILTR) No filtering applied on TWI inputs.  */
#define FLEX_TWI_FILTR_THRES_0                (FLEX_TWI_FILTR_THRES_0_Val << FLEX_TWI_FILTR_THRES_Pos) /* (FLEX_TWI_FILTR) No filtering applied on TWI inputs. Position */
#define FLEX_TWI_FILTR_Msk                    _UINT32_(0x00000703)                                 /* (FLEX_TWI_FILTR) Register Mask  */


/* -------- FLEX_TWI_HSCWGR : (FLEXCOM Offset: 0x648) (R/W 32) TWI High Speed Clock Waveform Generator Register -------- */
#define FLEX_TWI_HSCWGR_RESETVALUE            _UINT32_(0x00)                                       /*  (FLEX_TWI_HSCWGR) TWI High Speed Clock Waveform Generator Register  Reset Value */

#define FLEX_TWI_HSCWGR_HSCLDIV_Pos           _UINT32_(0)                                          /* (FLEX_TWI_HSCWGR) High Speed Clock Low Divider Position */
#define FLEX_TWI_HSCWGR_HSCLDIV_Msk           (_UINT32_(0xFF) << FLEX_TWI_HSCWGR_HSCLDIV_Pos)      /* (FLEX_TWI_HSCWGR) High Speed Clock Low Divider Mask */
#define FLEX_TWI_HSCWGR_HSCLDIV(value)        (FLEX_TWI_HSCWGR_HSCLDIV_Msk & (_UINT32_(value) << FLEX_TWI_HSCWGR_HSCLDIV_Pos)) /* Assignment of value for HSCLDIV in the FLEX_TWI_HSCWGR register */
#define FLEX_TWI_HSCWGR_HSCHDIV_Pos           _UINT32_(8)                                          /* (FLEX_TWI_HSCWGR) High Speed Clock High Divider Position */
#define FLEX_TWI_HSCWGR_HSCHDIV_Msk           (_UINT32_(0xFF) << FLEX_TWI_HSCWGR_HSCHDIV_Pos)      /* (FLEX_TWI_HSCWGR) High Speed Clock High Divider Mask */
#define FLEX_TWI_HSCWGR_HSCHDIV(value)        (FLEX_TWI_HSCWGR_HSCHDIV_Msk & (_UINT32_(value) << FLEX_TWI_HSCWGR_HSCHDIV_Pos)) /* Assignment of value for HSCHDIV in the FLEX_TWI_HSCWGR register */
#define FLEX_TWI_HSCWGR_HSCKDIV_Pos           _UINT32_(16)                                         /* (FLEX_TWI_HSCWGR) High Speed Clock Divider Position */
#define FLEX_TWI_HSCWGR_HSCKDIV_Msk           (_UINT32_(0x7) << FLEX_TWI_HSCWGR_HSCKDIV_Pos)       /* (FLEX_TWI_HSCWGR) High Speed Clock Divider Mask */
#define FLEX_TWI_HSCWGR_HSCKDIV(value)        (FLEX_TWI_HSCWGR_HSCKDIV_Msk & (_UINT32_(value) << FLEX_TWI_HSCWGR_HSCKDIV_Pos)) /* Assignment of value for HSCKDIV in the FLEX_TWI_HSCWGR register */
#define FLEX_TWI_HSCWGR_Msk                   _UINT32_(0x0007FFFF)                                 /* (FLEX_TWI_HSCWGR) Register Mask  */


/* -------- FLEX_TWI_SWMR : (FLEXCOM Offset: 0x64C) (R/W 32) TWI Matching Register -------- */
#define FLEX_TWI_SWMR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_TWI_SWMR) TWI Matching Register  Reset Value */

#define FLEX_TWI_SWMR_SADR1_Pos               _UINT32_(0)                                          /* (FLEX_TWI_SWMR) Client Address 1 Position */
#define FLEX_TWI_SWMR_SADR1_Msk               (_UINT32_(0x7F) << FLEX_TWI_SWMR_SADR1_Pos)          /* (FLEX_TWI_SWMR) Client Address 1 Mask */
#define FLEX_TWI_SWMR_SADR1(value)            (FLEX_TWI_SWMR_SADR1_Msk & (_UINT32_(value) << FLEX_TWI_SWMR_SADR1_Pos)) /* Assignment of value for SADR1 in the FLEX_TWI_SWMR register */
#define FLEX_TWI_SWMR_SADR2_Pos               _UINT32_(8)                                          /* (FLEX_TWI_SWMR) Client Address 2 Position */
#define FLEX_TWI_SWMR_SADR2_Msk               (_UINT32_(0x7F) << FLEX_TWI_SWMR_SADR2_Pos)          /* (FLEX_TWI_SWMR) Client Address 2 Mask */
#define FLEX_TWI_SWMR_SADR2(value)            (FLEX_TWI_SWMR_SADR2_Msk & (_UINT32_(value) << FLEX_TWI_SWMR_SADR2_Pos)) /* Assignment of value for SADR2 in the FLEX_TWI_SWMR register */
#define FLEX_TWI_SWMR_SADR3_Pos               _UINT32_(16)                                         /* (FLEX_TWI_SWMR) Client Address 3 Position */
#define FLEX_TWI_SWMR_SADR3_Msk               (_UINT32_(0x7F) << FLEX_TWI_SWMR_SADR3_Pos)          /* (FLEX_TWI_SWMR) Client Address 3 Mask */
#define FLEX_TWI_SWMR_SADR3(value)            (FLEX_TWI_SWMR_SADR3_Msk & (_UINT32_(value) << FLEX_TWI_SWMR_SADR3_Pos)) /* Assignment of value for SADR3 in the FLEX_TWI_SWMR register */
#define FLEX_TWI_SWMR_DATAM_Pos               _UINT32_(24)                                         /* (FLEX_TWI_SWMR) Data Match Position */
#define FLEX_TWI_SWMR_DATAM_Msk               (_UINT32_(0xFF) << FLEX_TWI_SWMR_DATAM_Pos)          /* (FLEX_TWI_SWMR) Data Match Mask */
#define FLEX_TWI_SWMR_DATAM(value)            (FLEX_TWI_SWMR_DATAM_Msk & (_UINT32_(value) << FLEX_TWI_SWMR_DATAM_Pos)) /* Assignment of value for DATAM in the FLEX_TWI_SWMR register */
#define FLEX_TWI_SWMR_Msk                     _UINT32_(0xFF7F7F7F)                                 /* (FLEX_TWI_SWMR) Register Mask  */


/* -------- FLEX_TWI_FMR : (FLEXCOM Offset: 0x650) (R/W 32) TWI FIFO Mode Register -------- */
#define FLEX_TWI_FMR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_FMR) TWI FIFO Mode Register  Reset Value */

#define FLEX_TWI_FMR_TXRDYM_Pos               _UINT32_(0)                                          /* (FLEX_TWI_FMR) Transmitter Ready Mode Position */
#define FLEX_TWI_FMR_TXRDYM_Msk               (_UINT32_(0x3) << FLEX_TWI_FMR_TXRDYM_Pos)           /* (FLEX_TWI_FMR) Transmitter Ready Mode Mask */
#define FLEX_TWI_FMR_TXRDYM(value)            (FLEX_TWI_FMR_TXRDYM_Msk & (_UINT32_(value) << FLEX_TWI_FMR_TXRDYM_Pos)) /* Assignment of value for TXRDYM in the FLEX_TWI_FMR register */
#define   FLEX_TWI_FMR_TXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as byte.  */
#define   FLEX_TWI_FMR_TXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   FLEX_TWI_FMR_TXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   FLEX_TWI_FMR_TXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least eight data can be written in the transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define FLEX_TWI_FMR_TXRDYM_ONE_DATA          (FLEX_TWI_FMR_TXRDYM_ONE_DATA_Val << FLEX_TWI_FMR_TXRDYM_Pos) /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least one data can be written in the transmit FIFO. When DMA is enabled to transfer data, the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type must be defined as byte. Position */
#define FLEX_TWI_FMR_TXRDYM_TWO_DATA          (FLEX_TWI_FMR_TXRDYM_TWO_DATA_Val << FLEX_TWI_FMR_TXRDYM_Pos) /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least two data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define FLEX_TWI_FMR_TXRDYM_FOUR_DATA         (FLEX_TWI_FMR_TXRDYM_FOUR_DATA_Val << FLEX_TWI_FMR_TXRDYM_Pos) /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least four data can be written in the transmit FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define FLEX_TWI_FMR_TXRDYM_EIGHT_DATA        (FLEX_TWI_FMR_TXRDYM_EIGHT_DATA_Val << FLEX_TWI_FMR_TXRDYM_Pos) /* (FLEX_TWI_FMR) TXRDY will be at level '1' when at least eight data can be written in the transmit FIFO.  To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define FLEX_TWI_FMR_RXRDYM_Pos               _UINT32_(4)                                          /* (FLEX_TWI_FMR) Receiver Ready Mode Position */
#define FLEX_TWI_FMR_RXRDYM_Msk               (_UINT32_(0x3) << FLEX_TWI_FMR_RXRDYM_Pos)           /* (FLEX_TWI_FMR) Receiver Ready Mode Mask */
#define FLEX_TWI_FMR_RXRDYM(value)            (FLEX_TWI_FMR_RXRDYM_Msk & (_UINT32_(value) << FLEX_TWI_FMR_RXRDYM_Pos)) /* Assignment of value for RXRDYM in the FLEX_TWI_FMR register */
#define   FLEX_TWI_FMR_RXRDYM_ONE_DATA_Val    _UINT32_(0x0)                                        /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type (byte, halfword) must be defined accordingly.  */
#define   FLEX_TWI_FMR_RXRDYM_TWO_DATA_Val    _UINT32_(0x1)                                        /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access).  */
#define   FLEX_TWI_FMR_RXRDYM_FOUR_DATA_Val   _UINT32_(0x2)                                        /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access).  */
#define   FLEX_TWI_FMR_RXRDYM_EIGHT_DATA_Val  _UINT32_(0x3)                                        /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses).  */
#define FLEX_TWI_FMR_RXRDYM_ONE_DATA          (FLEX_TWI_FMR_RXRDYM_ONE_DATA_Val << FLEX_TWI_FMR_RXRDYM_Pos) /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least one unread data is in the receive FIFO. When DMA is enabled to transfer data the chunk of 1 byte must be configured in the DMA. If the transfer is performed by software, the access type (byte, halfword) must be defined accordingly. Position */
#define FLEX_TWI_FMR_RXRDYM_TWO_DATA          (FLEX_TWI_FMR_RXRDYM_TWO_DATA_Val << FLEX_TWI_FMR_RXRDYM_Pos) /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least two unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 halfword (1 halfword carries 2 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 2 accesses) or halfword (2 bytes per access, 1 single access). Position */
#define FLEX_TWI_FMR_RXRDYM_FOUR_DATA         (FLEX_TWI_FMR_RXRDYM_FOUR_DATA_Val << FLEX_TWI_FMR_RXRDYM_Pos) /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least four unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 1 word (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 4 accesses), halfword (2 bytes per access, 2 accesses) or word (4 bytes per access, 1 single access). Position */
#define FLEX_TWI_FMR_RXRDYM_EIGHT_DATA        (FLEX_TWI_FMR_RXRDYM_EIGHT_DATA_Val << FLEX_TWI_FMR_RXRDYM_Pos) /* (FLEX_TWI_FMR) RXRDY will be at level '1' when at least eight unread data are in the receive FIFO. To minimize system bus load, when DMA is enabled to transfer data, the chunk of 2 words (1 word carries 4 bytes) must be configured in the DMA. If the transfer is performed by software, the access type can be defined as byte (1 byte per access, 8 accesses), halfword (2 bytes per access, 4 accesses) or word (4 bytes per access, 2 accesses). Position */
#define FLEX_TWI_FMR_TXFTHRES_Pos             _UINT32_(16)                                         /* (FLEX_TWI_FMR) Transmit FIFO Threshold Position */
#define FLEX_TWI_FMR_TXFTHRES_Msk             (_UINT32_(0x3F) << FLEX_TWI_FMR_TXFTHRES_Pos)        /* (FLEX_TWI_FMR) Transmit FIFO Threshold Mask */
#define FLEX_TWI_FMR_TXFTHRES(value)          (FLEX_TWI_FMR_TXFTHRES_Msk & (_UINT32_(value) << FLEX_TWI_FMR_TXFTHRES_Pos)) /* Assignment of value for TXFTHRES in the FLEX_TWI_FMR register */
#define FLEX_TWI_FMR_RXFTHRES_Pos             _UINT32_(24)                                         /* (FLEX_TWI_FMR) Receive FIFO Threshold Position */
#define FLEX_TWI_FMR_RXFTHRES_Msk             (_UINT32_(0x3F) << FLEX_TWI_FMR_RXFTHRES_Pos)        /* (FLEX_TWI_FMR) Receive FIFO Threshold Mask */
#define FLEX_TWI_FMR_RXFTHRES(value)          (FLEX_TWI_FMR_RXFTHRES_Msk & (_UINT32_(value) << FLEX_TWI_FMR_RXFTHRES_Pos)) /* Assignment of value for RXFTHRES in the FLEX_TWI_FMR register */
#define FLEX_TWI_FMR_Msk                      _UINT32_(0x3F3F0033)                                 /* (FLEX_TWI_FMR) Register Mask  */


/* -------- FLEX_TWI_FLR : (FLEXCOM Offset: 0x654) ( R/ 32) TWI FIFO Level Register -------- */
#define FLEX_TWI_FLR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_FLR) TWI FIFO Level Register  Reset Value */

#define FLEX_TWI_FLR_TXFL_Pos                 _UINT32_(0)                                          /* (FLEX_TWI_FLR) Transmit FIFO Level Position */
#define FLEX_TWI_FLR_TXFL_Msk                 (_UINT32_(0x3F) << FLEX_TWI_FLR_TXFL_Pos)            /* (FLEX_TWI_FLR) Transmit FIFO Level Mask */
#define FLEX_TWI_FLR_TXFL(value)              (FLEX_TWI_FLR_TXFL_Msk & (_UINT32_(value) << FLEX_TWI_FLR_TXFL_Pos)) /* Assignment of value for TXFL in the FLEX_TWI_FLR register */
#define   FLEX_TWI_FLR_TXFL_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_FLR) There is no data in the Transmit FIFO  */
#define FLEX_TWI_FLR_TXFL_0                   (FLEX_TWI_FLR_TXFL_0_Val << FLEX_TWI_FLR_TXFL_Pos)   /* (FLEX_TWI_FLR) There is no data in the Transmit FIFO Position */
#define FLEX_TWI_FLR_RXFL_Pos                 _UINT32_(16)                                         /* (FLEX_TWI_FLR) Receive FIFO Level Position */
#define FLEX_TWI_FLR_RXFL_Msk                 (_UINT32_(0x3F) << FLEX_TWI_FLR_RXFL_Pos)            /* (FLEX_TWI_FLR) Receive FIFO Level Mask */
#define FLEX_TWI_FLR_RXFL(value)              (FLEX_TWI_FLR_RXFL_Msk & (_UINT32_(value) << FLEX_TWI_FLR_RXFL_Pos)) /* Assignment of value for RXFL in the FLEX_TWI_FLR register */
#define   FLEX_TWI_FLR_RXFL_0_Val             _UINT32_(0x0)                                        /* (FLEX_TWI_FLR) There is no unread data in the Receive FIFO  */
#define FLEX_TWI_FLR_RXFL_0                   (FLEX_TWI_FLR_RXFL_0_Val << FLEX_TWI_FLR_RXFL_Pos)   /* (FLEX_TWI_FLR) There is no unread data in the Receive FIFO Position */
#define FLEX_TWI_FLR_Msk                      _UINT32_(0x003F003F)                                 /* (FLEX_TWI_FLR) Register Mask  */


/* -------- FLEX_TWI_FSR : (FLEXCOM Offset: 0x660) ( R/ 32) TWI FIFO Status Register -------- */
#define FLEX_TWI_FSR_RESETVALUE               _UINT32_(0x00)                                       /*  (FLEX_TWI_FSR) TWI FIFO Status Register  Reset Value */

#define FLEX_TWI_FSR_TXFEF_Pos                _UINT32_(0)                                          /* (FLEX_TWI_FSR) Transmit FIFO Empty Flag (cleared on read) Position */
#define FLEX_TWI_FSR_TXFEF_Msk                (_UINT32_(0x1) << FLEX_TWI_FSR_TXFEF_Pos)            /* (FLEX_TWI_FSR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define FLEX_TWI_FSR_TXFEF(value)             (FLEX_TWI_FSR_TXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_TXFEF_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) Transmit FIFO is not empty.  */
#define   FLEX_TWI_FSR_TXFEF_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Transmit FIFO has been emptied since the last read of FLEX_TWI_FSR.  */
#define FLEX_TWI_FSR_TXFEF_0                  (FLEX_TWI_FSR_TXFEF_0_Val << FLEX_TWI_FSR_TXFEF_Pos) /* (FLEX_TWI_FSR) Transmit FIFO is not empty. Position */
#define FLEX_TWI_FSR_TXFEF_1                  (FLEX_TWI_FSR_TXFEF_1_Val << FLEX_TWI_FSR_TXFEF_Pos) /* (FLEX_TWI_FSR) Transmit FIFO has been emptied since the last read of FLEX_TWI_FSR. Position */
#define FLEX_TWI_FSR_TXFFF_Pos                _UINT32_(1)                                          /* (FLEX_TWI_FSR) Transmit FIFO Full Flag (cleared on read) Position */
#define FLEX_TWI_FSR_TXFFF_Msk                (_UINT32_(0x1) << FLEX_TWI_FSR_TXFFF_Pos)            /* (FLEX_TWI_FSR) Transmit FIFO Full Flag (cleared on read) Mask */
#define FLEX_TWI_FSR_TXFFF(value)             (FLEX_TWI_FSR_TXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_TXFFF_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) Transmit FIFO is not full.  */
#define   FLEX_TWI_FSR_TXFFF_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Transmit FIFO has been filled since the last read of FLEX_TWI_FSR.  */
#define FLEX_TWI_FSR_TXFFF_0                  (FLEX_TWI_FSR_TXFFF_0_Val << FLEX_TWI_FSR_TXFFF_Pos) /* (FLEX_TWI_FSR) Transmit FIFO is not full. Position */
#define FLEX_TWI_FSR_TXFFF_1                  (FLEX_TWI_FSR_TXFFF_1_Val << FLEX_TWI_FSR_TXFFF_Pos) /* (FLEX_TWI_FSR) Transmit FIFO has been filled since the last read of FLEX_TWI_FSR. Position */
#define FLEX_TWI_FSR_TXFTHF_Pos               _UINT32_(2)                                          /* (FLEX_TWI_FSR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define FLEX_TWI_FSR_TXFTHF_Msk               (_UINT32_(0x1) << FLEX_TWI_FSR_TXFTHF_Pos)           /* (FLEX_TWI_FSR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define FLEX_TWI_FSR_TXFTHF(value)            (FLEX_TWI_FSR_TXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_TXFTHF_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) Number of data in Transmit FIFO is above TXFTHRES threshold.  */
#define   FLEX_TWI_FSR_TXFTHF_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of FLEX_TWI_FSR.  */
#define FLEX_TWI_FSR_TXFTHF_0                 (FLEX_TWI_FSR_TXFTHF_0_Val << FLEX_TWI_FSR_TXFTHF_Pos) /* (FLEX_TWI_FSR) Number of data in Transmit FIFO is above TXFTHRES threshold. Position */
#define FLEX_TWI_FSR_TXFTHF_1                 (FLEX_TWI_FSR_TXFTHF_1_Val << FLEX_TWI_FSR_TXFTHF_Pos) /* (FLEX_TWI_FSR) Number of data in Transmit FIFO has reached TXFTHRES threshold since the last read of FLEX_TWI_FSR. Position */
#define FLEX_TWI_FSR_RXFEF_Pos                _UINT32_(3)                                          /* (FLEX_TWI_FSR) Receive FIFO Empty Flag Position */
#define FLEX_TWI_FSR_RXFEF_Msk                (_UINT32_(0x1) << FLEX_TWI_FSR_RXFEF_Pos)            /* (FLEX_TWI_FSR) Receive FIFO Empty Flag Mask */
#define FLEX_TWI_FSR_RXFEF(value)             (FLEX_TWI_FSR_RXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_RXFEF_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) Receive FIFO is not empty.  */
#define   FLEX_TWI_FSR_RXFEF_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Receive FIFO has been emptied since the last read of FLEX_TWI_FSR.  */
#define FLEX_TWI_FSR_RXFEF_0                  (FLEX_TWI_FSR_RXFEF_0_Val << FLEX_TWI_FSR_RXFEF_Pos) /* (FLEX_TWI_FSR) Receive FIFO is not empty. Position */
#define FLEX_TWI_FSR_RXFEF_1                  (FLEX_TWI_FSR_RXFEF_1_Val << FLEX_TWI_FSR_RXFEF_Pos) /* (FLEX_TWI_FSR) Receive FIFO has been emptied since the last read of FLEX_TWI_FSR. Position */
#define FLEX_TWI_FSR_RXFFF_Pos                _UINT32_(4)                                          /* (FLEX_TWI_FSR) Receive FIFO Full Flag Position */
#define FLEX_TWI_FSR_RXFFF_Msk                (_UINT32_(0x1) << FLEX_TWI_FSR_RXFFF_Pos)            /* (FLEX_TWI_FSR) Receive FIFO Full Flag Mask */
#define FLEX_TWI_FSR_RXFFF(value)             (FLEX_TWI_FSR_RXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_RXFFF_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) Receive FIFO is not empty.  */
#define   FLEX_TWI_FSR_RXFFF_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Receive FIFO has been filled since the last read of FLEX_TWI_FSR.  */
#define FLEX_TWI_FSR_RXFFF_0                  (FLEX_TWI_FSR_RXFFF_0_Val << FLEX_TWI_FSR_RXFFF_Pos) /* (FLEX_TWI_FSR) Receive FIFO is not empty. Position */
#define FLEX_TWI_FSR_RXFFF_1                  (FLEX_TWI_FSR_RXFFF_1_Val << FLEX_TWI_FSR_RXFFF_Pos) /* (FLEX_TWI_FSR) Receive FIFO has been filled since the last read of FLEX_TWI_FSR. Position */
#define FLEX_TWI_FSR_RXFTHF_Pos               _UINT32_(5)                                          /* (FLEX_TWI_FSR) Receive FIFO Threshold Flag Position */
#define FLEX_TWI_FSR_RXFTHF_Msk               (_UINT32_(0x1) << FLEX_TWI_FSR_RXFTHF_Pos)           /* (FLEX_TWI_FSR) Receive FIFO Threshold Flag Mask */
#define FLEX_TWI_FSR_RXFTHF(value)            (FLEX_TWI_FSR_RXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_RXFTHF_0_Val           _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) Number of unread data in Receive FIFO is below RXFTHRES threshold.  */
#define   FLEX_TWI_FSR_RXFTHF_1_Val           _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last read of FLEX_TWI_FSR.  */
#define FLEX_TWI_FSR_RXFTHF_0                 (FLEX_TWI_FSR_RXFTHF_0_Val << FLEX_TWI_FSR_RXFTHF_Pos) /* (FLEX_TWI_FSR) Number of unread data in Receive FIFO is below RXFTHRES threshold. Position */
#define FLEX_TWI_FSR_RXFTHF_1                 (FLEX_TWI_FSR_RXFTHF_1_Val << FLEX_TWI_FSR_RXFTHF_Pos) /* (FLEX_TWI_FSR) Number of unread data in Receive FIFO has reached RXFTHRES threshold since the last read of FLEX_TWI_FSR. Position */
#define FLEX_TWI_FSR_TXFPTEF_Pos              _UINT32_(6)                                          /* (FLEX_TWI_FSR) Transmit FIFO Overflow Error Flag Position */
#define FLEX_TWI_FSR_TXFPTEF_Msk              (_UINT32_(0x1) << FLEX_TWI_FSR_TXFPTEF_Pos)          /* (FLEX_TWI_FSR) Transmit FIFO Overflow Error Flag Mask */
#define FLEX_TWI_FSR_TXFPTEF(value)           (FLEX_TWI_FSR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_TXFPTEF_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) No Transmit FIFO overflow occurred.  */
#define   FLEX_TWI_FSR_TXFPTEF_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing FLEX_SPI_CR.SWRST=1.  */
#define FLEX_TWI_FSR_TXFPTEF_0                (FLEX_TWI_FSR_TXFPTEF_0_Val << FLEX_TWI_FSR_TXFPTEF_Pos) /* (FLEX_TWI_FSR) No Transmit FIFO overflow occurred. Position */
#define FLEX_TWI_FSR_TXFPTEF_1                (FLEX_TWI_FSR_TXFPTEF_1_Val << FLEX_TWI_FSR_TXFPTEF_Pos) /* (FLEX_TWI_FSR) Transmit FIFO overflow error occurred due to an incorrect software access (written data exceeding available space). Transceiver must be reset by writing FLEX_SPI_CR.SWRST=1. Position */
#define FLEX_TWI_FSR_RXFPTEF_Pos              _UINT32_(7)                                          /* (FLEX_TWI_FSR) Receive FIFO Underflow Error Flag Position */
#define FLEX_TWI_FSR_RXFPTEF_Msk              (_UINT32_(0x1) << FLEX_TWI_FSR_RXFPTEF_Pos)          /* (FLEX_TWI_FSR) Receive FIFO Underflow Error Flag Mask */
#define FLEX_TWI_FSR_RXFPTEF(value)           (FLEX_TWI_FSR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FSR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_TWI_FSR register */
#define   FLEX_TWI_FSR_RXFPTEF_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_FSR) No Receive FIFO underflow occurred.  */
#define   FLEX_TWI_FSR_RXFPTEF_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_FSR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing FLEX_SPI_CR.SWRST=1.  */
#define FLEX_TWI_FSR_RXFPTEF_0                (FLEX_TWI_FSR_RXFPTEF_0_Val << FLEX_TWI_FSR_RXFPTEF_Pos) /* (FLEX_TWI_FSR) No Receive FIFO underflow occurred. Position */
#define FLEX_TWI_FSR_RXFPTEF_1                (FLEX_TWI_FSR_RXFPTEF_1_Val << FLEX_TWI_FSR_RXFPTEF_Pos) /* (FLEX_TWI_FSR) Receive FIFO underflow error occurred due to an incorrect software access (read data exceeding available data in FIFO). Receiver must be reset by writing FLEX_SPI_CR.SWRST=1. Position */
#define FLEX_TWI_FSR_Msk                      _UINT32_(0x000000FF)                                 /* (FLEX_TWI_FSR) Register Mask  */


/* -------- FLEX_TWI_FIER : (FLEXCOM Offset: 0x664) ( /W 32) TWI FIFO Interrupt Enable Register -------- */
#define FLEX_TWI_FIER_TXFEF_Pos               _UINT32_(0)                                          /* (FLEX_TWI_FIER) TXFEF Interrupt Enable Position */
#define FLEX_TWI_FIER_TXFEF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIER_TXFEF_Pos)           /* (FLEX_TWI_FIER) TXFEF Interrupt Enable Mask */
#define FLEX_TWI_FIER_TXFEF(value)            (FLEX_TWI_FIER_TXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_TXFFF_Pos               _UINT32_(1)                                          /* (FLEX_TWI_FIER) TXFFF Interrupt Enable Position */
#define FLEX_TWI_FIER_TXFFF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIER_TXFFF_Pos)           /* (FLEX_TWI_FIER) TXFFF Interrupt Enable Mask */
#define FLEX_TWI_FIER_TXFFF(value)            (FLEX_TWI_FIER_TXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_TXFTHF_Pos              _UINT32_(2)                                          /* (FLEX_TWI_FIER) TXFTHF Interrupt Enable Position */
#define FLEX_TWI_FIER_TXFTHF_Msk              (_UINT32_(0x1) << FLEX_TWI_FIER_TXFTHF_Pos)          /* (FLEX_TWI_FIER) TXFTHF Interrupt Enable Mask */
#define FLEX_TWI_FIER_TXFTHF(value)           (FLEX_TWI_FIER_TXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_RXFEF_Pos               _UINT32_(3)                                          /* (FLEX_TWI_FIER) RXFEF Interrupt Enable Position */
#define FLEX_TWI_FIER_RXFEF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIER_RXFEF_Pos)           /* (FLEX_TWI_FIER) RXFEF Interrupt Enable Mask */
#define FLEX_TWI_FIER_RXFEF(value)            (FLEX_TWI_FIER_RXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_RXFFF_Pos               _UINT32_(4)                                          /* (FLEX_TWI_FIER) RXFFF Interrupt Enable Position */
#define FLEX_TWI_FIER_RXFFF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIER_RXFFF_Pos)           /* (FLEX_TWI_FIER) RXFFF Interrupt Enable Mask */
#define FLEX_TWI_FIER_RXFFF(value)            (FLEX_TWI_FIER_RXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_RXFTHF_Pos              _UINT32_(5)                                          /* (FLEX_TWI_FIER) RXFTHF Interrupt Enable Position */
#define FLEX_TWI_FIER_RXFTHF_Msk              (_UINT32_(0x1) << FLEX_TWI_FIER_RXFTHF_Pos)          /* (FLEX_TWI_FIER) RXFTHF Interrupt Enable Mask */
#define FLEX_TWI_FIER_RXFTHF(value)           (FLEX_TWI_FIER_RXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_TXFPTEF_Pos             _UINT32_(6)                                          /* (FLEX_TWI_FIER) TXFPTEF Interrupt Enable Position */
#define FLEX_TWI_FIER_TXFPTEF_Msk             (_UINT32_(0x1) << FLEX_TWI_FIER_TXFPTEF_Pos)         /* (FLEX_TWI_FIER) TXFPTEF Interrupt Enable Mask */
#define FLEX_TWI_FIER_TXFPTEF(value)          (FLEX_TWI_FIER_TXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_RXFPTEF_Pos             _UINT32_(7)                                          /* (FLEX_TWI_FIER) RXFPTEF Interrupt Enable Position */
#define FLEX_TWI_FIER_RXFPTEF_Msk             (_UINT32_(0x1) << FLEX_TWI_FIER_RXFPTEF_Pos)         /* (FLEX_TWI_FIER) RXFPTEF Interrupt Enable Mask */
#define FLEX_TWI_FIER_RXFPTEF(value)          (FLEX_TWI_FIER_RXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FIER_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_TWI_FIER register */
#define FLEX_TWI_FIER_Msk                     _UINT32_(0x000000FF)                                 /* (FLEX_TWI_FIER) Register Mask  */


/* -------- FLEX_TWI_FIDR : (FLEXCOM Offset: 0x668) ( /W 32) TWI FIFO Interrupt Disable Register -------- */
#define FLEX_TWI_FIDR_TXFEF_Pos               _UINT32_(0)                                          /* (FLEX_TWI_FIDR) TXFEF Interrupt Disable Position */
#define FLEX_TWI_FIDR_TXFEF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIDR_TXFEF_Pos)           /* (FLEX_TWI_FIDR) TXFEF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_TXFEF(value)            (FLEX_TWI_FIDR_TXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_TXFFF_Pos               _UINT32_(1)                                          /* (FLEX_TWI_FIDR) TXFFF Interrupt Disable Position */
#define FLEX_TWI_FIDR_TXFFF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIDR_TXFFF_Pos)           /* (FLEX_TWI_FIDR) TXFFF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_TXFFF(value)            (FLEX_TWI_FIDR_TXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_TXFTHF_Pos              _UINT32_(2)                                          /* (FLEX_TWI_FIDR) TXFTHF Interrupt Disable Position */
#define FLEX_TWI_FIDR_TXFTHF_Msk              (_UINT32_(0x1) << FLEX_TWI_FIDR_TXFTHF_Pos)          /* (FLEX_TWI_FIDR) TXFTHF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_TXFTHF(value)           (FLEX_TWI_FIDR_TXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_RXFEF_Pos               _UINT32_(3)                                          /* (FLEX_TWI_FIDR) RXFEF Interrupt Disable Position */
#define FLEX_TWI_FIDR_RXFEF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIDR_RXFEF_Pos)           /* (FLEX_TWI_FIDR) RXFEF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_RXFEF(value)            (FLEX_TWI_FIDR_RXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_RXFFF_Pos               _UINT32_(4)                                          /* (FLEX_TWI_FIDR) RXFFF Interrupt Disable Position */
#define FLEX_TWI_FIDR_RXFFF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIDR_RXFFF_Pos)           /* (FLEX_TWI_FIDR) RXFFF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_RXFFF(value)            (FLEX_TWI_FIDR_RXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_RXFTHF_Pos              _UINT32_(5)                                          /* (FLEX_TWI_FIDR) RXFTHF Interrupt Disable Position */
#define FLEX_TWI_FIDR_RXFTHF_Msk              (_UINT32_(0x1) << FLEX_TWI_FIDR_RXFTHF_Pos)          /* (FLEX_TWI_FIDR) RXFTHF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_RXFTHF(value)           (FLEX_TWI_FIDR_RXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_TXFPTEF_Pos             _UINT32_(6)                                          /* (FLEX_TWI_FIDR) TXFPTEF Interrupt Disable Position */
#define FLEX_TWI_FIDR_TXFPTEF_Msk             (_UINT32_(0x1) << FLEX_TWI_FIDR_TXFPTEF_Pos)         /* (FLEX_TWI_FIDR) TXFPTEF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_TXFPTEF(value)          (FLEX_TWI_FIDR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_RXFPTEF_Pos             _UINT32_(7)                                          /* (FLEX_TWI_FIDR) RXFPTEF Interrupt Disable Position */
#define FLEX_TWI_FIDR_RXFPTEF_Msk             (_UINT32_(0x1) << FLEX_TWI_FIDR_RXFPTEF_Pos)         /* (FLEX_TWI_FIDR) RXFPTEF Interrupt Disable Mask */
#define FLEX_TWI_FIDR_RXFPTEF(value)          (FLEX_TWI_FIDR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FIDR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_TWI_FIDR register */
#define FLEX_TWI_FIDR_Msk                     _UINT32_(0x000000FF)                                 /* (FLEX_TWI_FIDR) Register Mask  */


/* -------- FLEX_TWI_FIMR : (FLEXCOM Offset: 0x66C) ( R/ 32) TWI FIFO Interrupt Mask Register -------- */
#define FLEX_TWI_FIMR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_TWI_FIMR) TWI FIFO Interrupt Mask Register  Reset Value */

#define FLEX_TWI_FIMR_TXFEF_Pos               _UINT32_(0)                                          /* (FLEX_TWI_FIMR) TXFEF Interrupt Mask Position */
#define FLEX_TWI_FIMR_TXFEF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIMR_TXFEF_Pos)           /* (FLEX_TWI_FIMR) TXFEF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_TXFEF(value)            (FLEX_TWI_FIMR_TXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_TXFEF_Pos)) /* Assignment of value for TXFEF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_TXFFF_Pos               _UINT32_(1)                                          /* (FLEX_TWI_FIMR) TXFFF Interrupt Mask Position */
#define FLEX_TWI_FIMR_TXFFF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIMR_TXFFF_Pos)           /* (FLEX_TWI_FIMR) TXFFF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_TXFFF(value)            (FLEX_TWI_FIMR_TXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_TXFFF_Pos)) /* Assignment of value for TXFFF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_TXFTHF_Pos              _UINT32_(2)                                          /* (FLEX_TWI_FIMR) TXFTHF Interrupt Mask Position */
#define FLEX_TWI_FIMR_TXFTHF_Msk              (_UINT32_(0x1) << FLEX_TWI_FIMR_TXFTHF_Pos)          /* (FLEX_TWI_FIMR) TXFTHF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_TXFTHF(value)           (FLEX_TWI_FIMR_TXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_TXFTHF_Pos)) /* Assignment of value for TXFTHF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_RXFEF_Pos               _UINT32_(3)                                          /* (FLEX_TWI_FIMR) RXFEF Interrupt Mask Position */
#define FLEX_TWI_FIMR_RXFEF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIMR_RXFEF_Pos)           /* (FLEX_TWI_FIMR) RXFEF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_RXFEF(value)            (FLEX_TWI_FIMR_RXFEF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_RXFEF_Pos)) /* Assignment of value for RXFEF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_RXFFF_Pos               _UINT32_(4)                                          /* (FLEX_TWI_FIMR) RXFFF Interrupt Mask Position */
#define FLEX_TWI_FIMR_RXFFF_Msk               (_UINT32_(0x1) << FLEX_TWI_FIMR_RXFFF_Pos)           /* (FLEX_TWI_FIMR) RXFFF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_RXFFF(value)            (FLEX_TWI_FIMR_RXFFF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_RXFFF_Pos)) /* Assignment of value for RXFFF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_RXFTHF_Pos              _UINT32_(5)                                          /* (FLEX_TWI_FIMR) RXFTHF Interrupt Mask Position */
#define FLEX_TWI_FIMR_RXFTHF_Msk              (_UINT32_(0x1) << FLEX_TWI_FIMR_RXFTHF_Pos)          /* (FLEX_TWI_FIMR) RXFTHF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_RXFTHF(value)           (FLEX_TWI_FIMR_RXFTHF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_RXFTHF_Pos)) /* Assignment of value for RXFTHF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_TXFPTEF_Pos             _UINT32_(6)                                          /* (FLEX_TWI_FIMR) TXFPTEF Interrupt Mask Position */
#define FLEX_TWI_FIMR_TXFPTEF_Msk             (_UINT32_(0x1) << FLEX_TWI_FIMR_TXFPTEF_Pos)         /* (FLEX_TWI_FIMR) TXFPTEF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_TXFPTEF(value)          (FLEX_TWI_FIMR_TXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_TXFPTEF_Pos)) /* Assignment of value for TXFPTEF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_RXFPTEF_Pos             _UINT32_(7)                                          /* (FLEX_TWI_FIMR) RXFPTEF Interrupt Mask Position */
#define FLEX_TWI_FIMR_RXFPTEF_Msk             (_UINT32_(0x1) << FLEX_TWI_FIMR_RXFPTEF_Pos)         /* (FLEX_TWI_FIMR) RXFPTEF Interrupt Mask Mask */
#define FLEX_TWI_FIMR_RXFPTEF(value)          (FLEX_TWI_FIMR_RXFPTEF_Msk & (_UINT32_(value) << FLEX_TWI_FIMR_RXFPTEF_Pos)) /* Assignment of value for RXFPTEF in the FLEX_TWI_FIMR register */
#define FLEX_TWI_FIMR_Msk                     _UINT32_(0x000000FF)                                 /* (FLEX_TWI_FIMR) Register Mask  */


/* -------- FLEX_TWI_WPMR : (FLEXCOM Offset: 0x6E4) (R/W 32) TWI Write Protection Mode Register -------- */
#define FLEX_TWI_WPMR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_TWI_WPMR) TWI Write Protection Mode Register  Reset Value */

#define FLEX_TWI_WPMR_WPEN_Pos                _UINT32_(0)                                          /* (FLEX_TWI_WPMR) Write Protection Enable Position */
#define FLEX_TWI_WPMR_WPEN_Msk                (_UINT32_(0x1) << FLEX_TWI_WPMR_WPEN_Pos)            /* (FLEX_TWI_WPMR) Write Protection Enable Mask */
#define FLEX_TWI_WPMR_WPEN(value)             (FLEX_TWI_WPMR_WPEN_Msk & (_UINT32_(value) << FLEX_TWI_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the FLEX_TWI_WPMR register */
#define   FLEX_TWI_WPMR_WPEN_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_WPMR) Disables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define   FLEX_TWI_WPMR_WPEN_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_WPMR) Enables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define FLEX_TWI_WPMR_WPEN_0                  (FLEX_TWI_WPMR_WPEN_0_Val << FLEX_TWI_WPMR_WPEN_Pos) /* (FLEX_TWI_WPMR) Disables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define FLEX_TWI_WPMR_WPEN_1                  (FLEX_TWI_WPMR_WPEN_1_Val << FLEX_TWI_WPMR_WPEN_Pos) /* (FLEX_TWI_WPMR) Enables the write protection if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define FLEX_TWI_WPMR_WPITEN_Pos              _UINT32_(1)                                          /* (FLEX_TWI_WPMR) Write Protection Interrupt Enable Position */
#define FLEX_TWI_WPMR_WPITEN_Msk              (_UINT32_(0x1) << FLEX_TWI_WPMR_WPITEN_Pos)          /* (FLEX_TWI_WPMR) Write Protection Interrupt Enable Mask */
#define FLEX_TWI_WPMR_WPITEN(value)           (FLEX_TWI_WPMR_WPITEN_Msk & (_UINT32_(value) << FLEX_TWI_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the FLEX_TWI_WPMR register */
#define   FLEX_TWI_WPMR_WPITEN_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define   FLEX_TWI_WPMR_WPITEN_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define FLEX_TWI_WPMR_WPITEN_0                (FLEX_TWI_WPMR_WPITEN_0_Val << FLEX_TWI_WPMR_WPITEN_Pos) /* (FLEX_TWI_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define FLEX_TWI_WPMR_WPITEN_1                (FLEX_TWI_WPMR_WPITEN_1_Val << FLEX_TWI_WPMR_WPITEN_Pos) /* (FLEX_TWI_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define FLEX_TWI_WPMR_WPCREN_Pos              _UINT32_(2)                                          /* (FLEX_TWI_WPMR) Write Protection Control Enable Position */
#define FLEX_TWI_WPMR_WPCREN_Msk              (_UINT32_(0x1) << FLEX_TWI_WPMR_WPCREN_Pos)          /* (FLEX_TWI_WPMR) Write Protection Control Enable Mask */
#define FLEX_TWI_WPMR_WPCREN(value)           (FLEX_TWI_WPMR_WPCREN_Msk & (_UINT32_(value) << FLEX_TWI_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the FLEX_TWI_WPMR register */
#define   FLEX_TWI_WPMR_WPCREN_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define   FLEX_TWI_WPMR_WPCREN_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII).  */
#define FLEX_TWI_WPMR_WPCREN_0                (FLEX_TWI_WPMR_WPCREN_0_Val << FLEX_TWI_WPMR_WPCREN_Pos) /* (FLEX_TWI_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define FLEX_TWI_WPMR_WPCREN_1                (FLEX_TWI_WPMR_WPCREN_1_Val << FLEX_TWI_WPMR_WPCREN_Pos) /* (FLEX_TWI_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x545749 ("TWI" in ASCII). Position */
#define FLEX_TWI_WPMR_WPKEY_Pos               _UINT32_(8)                                          /* (FLEX_TWI_WPMR) Write Protection Key Position */
#define FLEX_TWI_WPMR_WPKEY_Msk               (_UINT32_(0xFFFFFF) << FLEX_TWI_WPMR_WPKEY_Pos)      /* (FLEX_TWI_WPMR) Write Protection Key Mask */
#define FLEX_TWI_WPMR_WPKEY(value)            (FLEX_TWI_WPMR_WPKEY_Msk & (_UINT32_(value) << FLEX_TWI_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the FLEX_TWI_WPMR register */
#define   FLEX_TWI_WPMR_WPKEY_PASSWD_Val      _UINT32_(0x545749)                                   /* (FLEX_TWI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0  */
#define FLEX_TWI_WPMR_WPKEY_PASSWD            (FLEX_TWI_WPMR_WPKEY_PASSWD_Val << FLEX_TWI_WPMR_WPKEY_Pos) /* (FLEX_TWI_WPMR) Writing any other value in this field aborts the write operation of bits WPEN, WPITEN and WPCREN. Always reads as 0 Position */
#define FLEX_TWI_WPMR_Msk                     _UINT32_(0xFFFFFF07)                                 /* (FLEX_TWI_WPMR) Register Mask  */


/* -------- FLEX_TWI_WPSR : (FLEXCOM Offset: 0x6E8) ( R/ 32) TWI Write Protection Status Register -------- */
#define FLEX_TWI_WPSR_RESETVALUE              _UINT32_(0x00)                                       /*  (FLEX_TWI_WPSR) TWI Write Protection Status Register  Reset Value */

#define FLEX_TWI_WPSR_WPVS_Pos                _UINT32_(0)                                          /* (FLEX_TWI_WPSR) Write Protect Violation Status (cleared on read) Position */
#define FLEX_TWI_WPSR_WPVS_Msk                (_UINT32_(0x1) << FLEX_TWI_WPSR_WPVS_Pos)            /* (FLEX_TWI_WPSR) Write Protect Violation Status (cleared on read) Mask */
#define FLEX_TWI_WPSR_WPVS(value)             (FLEX_TWI_WPSR_WPVS_Msk & (_UINT32_(value) << FLEX_TWI_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the FLEX_TWI_WPSR register */
#define   FLEX_TWI_WPSR_WPVS_0_Val            _UINT32_(0x0)                                        /* (FLEX_TWI_WPSR) No Write Protection Violation has occurred since the last read of FLEX_TWI_WPSR.  */
#define   FLEX_TWI_WPSR_WPVS_1_Val            _UINT32_(0x1)                                        /* (FLEX_TWI_WPSR) A Write Protection Violation has occurred since the last read of FLEX_TWI_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define FLEX_TWI_WPSR_WPVS_0                  (FLEX_TWI_WPSR_WPVS_0_Val << FLEX_TWI_WPSR_WPVS_Pos) /* (FLEX_TWI_WPSR) No Write Protection Violation has occurred since the last read of FLEX_TWI_WPSR. Position */
#define FLEX_TWI_WPSR_WPVS_1                  (FLEX_TWI_WPSR_WPVS_1_Val << FLEX_TWI_WPSR_WPVS_Pos) /* (FLEX_TWI_WPSR) A Write Protection Violation has occurred since the last read of FLEX_TWI_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define FLEX_TWI_WPSR_PADERR_Pos              _UINT32_(1)                                          /* (FLEX_TWI_WPSR) Output PAD Error (cleared on read) Position */
#define FLEX_TWI_WPSR_PADERR_Msk              (_UINT32_(0x1) << FLEX_TWI_WPSR_PADERR_Pos)          /* (FLEX_TWI_WPSR) Output PAD Error (cleared on read) Mask */
#define FLEX_TWI_WPSR_PADERR(value)           (FLEX_TWI_WPSR_PADERR_Msk & (_UINT32_(value) << FLEX_TWI_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the FLEX_TWI_WPSR register */
#define   FLEX_TWI_WPSR_PADERR_0_Val          _UINT32_(0x0)                                        /* (FLEX_TWI_WPSR) No error detected during a character transfer in host mode. Cleared in client mode.  */
#define   FLEX_TWI_WPSR_PADERR_1_Val          _UINT32_(0x1)                                        /* (FLEX_TWI_WPSR) Stuck-at 1 detected on TWCK output pad for more than 1 period or 2 successive erroneous bit value on TWD (transmitting a 1 and reading 0 at the end of the bit period) detected. This may be due to erroneous IO multiplexing configuration, external short circuits, etc.  */
#define FLEX_TWI_WPSR_PADERR_0                (FLEX_TWI_WPSR_PADERR_0_Val << FLEX_TWI_WPSR_PADERR_Pos) /* (FLEX_TWI_WPSR) No error detected during a character transfer in host mode. Cleared in client mode. Position */
#define FLEX_TWI_WPSR_PADERR_1                (FLEX_TWI_WPSR_PADERR_1_Val << FLEX_TWI_WPSR_PADERR_Pos) /* (FLEX_TWI_WPSR) Stuck-at 1 detected on TWCK output pad for more than 1 period or 2 successive erroneous bit value on TWD (transmitting a 1 and reading 0 at the end of the bit period) detected. This may be due to erroneous IO multiplexing configuration, external short circuits, etc. Position */
#define FLEX_TWI_WPSR_WPVSRC_Pos              _UINT32_(8)                                          /* (FLEX_TWI_WPSR) Write Protection Violation Source Position */
#define FLEX_TWI_WPSR_WPVSRC_Msk              (_UINT32_(0xFFFFFF) << FLEX_TWI_WPSR_WPVSRC_Pos)     /* (FLEX_TWI_WPSR) Write Protection Violation Source Mask */
#define FLEX_TWI_WPSR_WPVSRC(value)           (FLEX_TWI_WPSR_WPVSRC_Msk & (_UINT32_(value) << FLEX_TWI_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the FLEX_TWI_WPSR register */
#define FLEX_TWI_WPSR_Msk                     _UINT32_(0xFFFFFF03)                                 /* (FLEX_TWI_WPSR) Register Mask  */


/* FLEXCOM register offsets definitions */
#define FLEX_MR_REG_OFST               _UINT32_(0x00)      /* (FLEX_MR) FLEXCOM Mode Register Offset */
#define FLEX_RHR_REG_OFST              _UINT32_(0x10)      /* (FLEX_RHR) FLEXCOM Receive Holding Register Offset */
#define FLEX_THR_REG_OFST              _UINT32_(0x20)      /* (FLEX_THR) FLEXCOM Transmit Holding Register Offset */
#define FLEX_US_CR_REG_OFST            _UINT32_(0x200)     /* (FLEX_US_CR) USART Control Register Offset */
#define FLEX_US_MR_REG_OFST            _UINT32_(0x204)     /* (FLEX_US_MR) USART Mode Register Offset */
#define FLEX_US_IER_REG_OFST           _UINT32_(0x208)     /* (FLEX_US_IER) USART Interrupt Enable Register Offset */
#define FLEX_US_IDR_REG_OFST           _UINT32_(0x20C)     /* (FLEX_US_IDR) USART Interrupt Disable Register Offset */
#define FLEX_US_IMR_REG_OFST           _UINT32_(0x210)     /* (FLEX_US_IMR) USART Interrupt Mask Register Offset */
#define FLEX_US_CSR_REG_OFST           _UINT32_(0x214)     /* (FLEX_US_CSR) USART Channel Status Register Offset */
#define FLEX_US_RHR_REG_OFST           _UINT32_(0x218)     /* (FLEX_US_RHR) USART Receive Holding Register Offset */
#define FLEX_US_THR_REG_OFST           _UINT32_(0x21C)     /* (FLEX_US_THR) USART Transmit Holding Register Offset */
#define FLEX_US_BRGR_REG_OFST          _UINT32_(0x220)     /* (FLEX_US_BRGR) USART Baud Rate Generator Register Offset */
#define FLEX_US_RTOR_REG_OFST          _UINT32_(0x224)     /* (FLEX_US_RTOR) USART Receiver Timeout Register Offset */
#define FLEX_US_TTGR_REG_OFST          _UINT32_(0x228)     /* (FLEX_US_TTGR) USART Transmitter Timeguard Register Offset */
#define FLEX_US_FIDI_REG_OFST          _UINT32_(0x240)     /* (FLEX_US_FIDI) USART FI DI Ratio Register Offset */
#define FLEX_US_NER_REG_OFST           _UINT32_(0x244)     /* (FLEX_US_NER) USART Number of Errors Register Offset */
#define FLEX_US_IF_REG_OFST            _UINT32_(0x24C)     /* (FLEX_US_IF) USART IrDA Filter Register Offset */
#define FLEX_US_MAN_REG_OFST           _UINT32_(0x250)     /* (FLEX_US_MAN) USART Manchester Configuration Register Offset */
#define FLEX_US_LINMR_REG_OFST         _UINT32_(0x254)     /* (FLEX_US_LINMR) USART LIN Mode Register Offset */
#define FLEX_US_LINIR_REG_OFST         _UINT32_(0x258)     /* (FLEX_US_LINIR) USART LIN Identifier Register Offset */
#define FLEX_US_LINBRR_REG_OFST        _UINT32_(0x25C)     /* (FLEX_US_LINBRR) USART LIN Baud Rate Register Offset */
#define FLEX_US_CMPR_REG_OFST          _UINT32_(0x290)     /* (FLEX_US_CMPR) USART Comparison Register Offset */
#define FLEX_US_FMR_REG_OFST           _UINT32_(0x2A0)     /* (FLEX_US_FMR) USART FIFO Mode Register Offset */
#define FLEX_US_FLR_REG_OFST           _UINT32_(0x2A4)     /* (FLEX_US_FLR) USART FIFO Level Register Offset */
#define FLEX_US_FIER_REG_OFST          _UINT32_(0x2A8)     /* (FLEX_US_FIER) USART FIFO Interrupt Enable Register Offset */
#define FLEX_US_FIDR_REG_OFST          _UINT32_(0x2AC)     /* (FLEX_US_FIDR) USART FIFO Interrupt Disable Register Offset */
#define FLEX_US_FIMR_REG_OFST          _UINT32_(0x2B0)     /* (FLEX_US_FIMR) USART FIFO Interrupt Mask Register Offset */
#define FLEX_US_FESR_REG_OFST          _UINT32_(0x2B4)     /* (FLEX_US_FESR) USART FIFO Event Status Register Offset */
#define FLEX_US_WPMR_REG_OFST          _UINT32_(0x2E4)     /* (FLEX_US_WPMR) USART Write Protection Mode Register Offset */
#define FLEX_US_WPSR_REG_OFST          _UINT32_(0x2E8)     /* (FLEX_US_WPSR) USART Write Protection Status Register Offset */
#define FLEX_SPI_CR_REG_OFST           _UINT32_(0x400)     /* (FLEX_SPI_CR) SPI Control Register Offset */
#define FLEX_SPI_MR_REG_OFST           _UINT32_(0x404)     /* (FLEX_SPI_MR) SPI Mode Register Offset */
#define FLEX_SPI_RDR_REG_OFST          _UINT32_(0x408)     /* (FLEX_SPI_RDR) SPI Receive Data Register Offset */
#define FLEX_SPI_TDR_REG_OFST          _UINT32_(0x40C)     /* (FLEX_SPI_TDR) SPI Transmit Data Register Offset */
#define FLEX_SPI_SR_REG_OFST           _UINT32_(0x410)     /* (FLEX_SPI_SR) SPI Status Register Offset */
#define FLEX_SPI_IER_REG_OFST          _UINT32_(0x414)     /* (FLEX_SPI_IER) SPI Interrupt Enable Register Offset */
#define FLEX_SPI_IDR_REG_OFST          _UINT32_(0x418)     /* (FLEX_SPI_IDR) SPI Interrupt Disable Register Offset */
#define FLEX_SPI_IMR_REG_OFST          _UINT32_(0x41C)     /* (FLEX_SPI_IMR) SPI Interrupt Mask Register Offset */
#define FLEX_SPI_CSR_REG_OFST          _UINT32_(0x430)     /* (FLEX_SPI_CSR) SPI Chip Select Register x Offset */
#define FLEX_SPI_CSR0_REG_OFST         _UINT32_(0x430)     /* (FLEX_SPI_CSR0) SPI Chip Select Register x Offset */
#define FLEX_SPI_CSR1_REG_OFST         _UINT32_(0x434)     /* (FLEX_SPI_CSR1) SPI Chip Select Register x Offset */
#define FLEX_SPI_CSR2_REG_OFST         _UINT32_(0x438)     /* (FLEX_SPI_CSR2) SPI Chip Select Register x Offset */
#define FLEX_SPI_CSR3_REG_OFST         _UINT32_(0x43C)     /* (FLEX_SPI_CSR3) SPI Chip Select Register x Offset */
#define FLEX_SPI_FMR_REG_OFST          _UINT32_(0x440)     /* (FLEX_SPI_FMR) SPI FIFO Mode Register Offset */
#define FLEX_SPI_FLR_REG_OFST          _UINT32_(0x444)     /* (FLEX_SPI_FLR) SPI FIFO Level Register Offset */
#define FLEX_SPI_CMPR_REG_OFST         _UINT32_(0x448)     /* (FLEX_SPI_CMPR) SPI Comparison Register Offset */
#define FLEX_SPI_WPMR_REG_OFST         _UINT32_(0x4E4)     /* (FLEX_SPI_WPMR) SPI Write Protection Mode Register Offset */
#define FLEX_SPI_WPSR_REG_OFST         _UINT32_(0x4E8)     /* (FLEX_SPI_WPSR) SPI Write Protection Status Register Offset */
#define FLEX_TWI_CR_REG_OFST           _UINT32_(0x600)     /* (FLEX_TWI_CR) TWI Control Register Offset */
#define FLEX_TWI_MMR_REG_OFST          _UINT32_(0x604)     /* (FLEX_TWI_MMR) TWI Host Mode Register Offset */
#define FLEX_TWI_SMR_REG_OFST          _UINT32_(0x608)     /* (FLEX_TWI_SMR) TWI Client Mode Register Offset */
#define FLEX_TWI_IADR_REG_OFST         _UINT32_(0x60C)     /* (FLEX_TWI_IADR) TWI Internal Address Register Offset */
#define FLEX_TWI_CWGR_REG_OFST         _UINT32_(0x610)     /* (FLEX_TWI_CWGR) TWI Clock Waveform Generator Register Offset */
#define FLEX_TWI_SR_REG_OFST           _UINT32_(0x620)     /* (FLEX_TWI_SR) TWI Status Register Offset */
#define FLEX_TWI_IER_REG_OFST          _UINT32_(0x624)     /* (FLEX_TWI_IER) TWI Interrupt Enable Register Offset */
#define FLEX_TWI_IDR_REG_OFST          _UINT32_(0x628)     /* (FLEX_TWI_IDR) TWI Interrupt Disable Register Offset */
#define FLEX_TWI_IMR_REG_OFST          _UINT32_(0x62C)     /* (FLEX_TWI_IMR) TWI Interrupt Mask Register Offset */
#define FLEX_TWI_RHR_REG_OFST          _UINT32_(0x630)     /* (FLEX_TWI_RHR) TWI Receive Holding Register Offset */
#define FLEX_TWI_THR_REG_OFST          _UINT32_(0x634)     /* (FLEX_TWI_THR) TWI Transmit Holding Register Offset */
#define FLEX_TWI_SMBTR_REG_OFST        _UINT32_(0x638)     /* (FLEX_TWI_SMBTR) TWI SMBus Timing Register Offset */
#define FLEX_TWI_HSR_REG_OFST          _UINT32_(0x63C)     /* (FLEX_TWI_HSR) TWI High Speed Register Offset */
#define FLEX_TWI_ACR_REG_OFST          _UINT32_(0x640)     /* (FLEX_TWI_ACR) TWI Alternative Command Register Offset */
#define FLEX_TWI_FILTR_REG_OFST        _UINT32_(0x644)     /* (FLEX_TWI_FILTR) TWI Filter Register Offset */
#define FLEX_TWI_HSCWGR_REG_OFST       _UINT32_(0x648)     /* (FLEX_TWI_HSCWGR) TWI High Speed Clock Waveform Generator Register Offset */
#define FLEX_TWI_SWMR_REG_OFST         _UINT32_(0x64C)     /* (FLEX_TWI_SWMR) TWI Matching Register Offset */
#define FLEX_TWI_FMR_REG_OFST          _UINT32_(0x650)     /* (FLEX_TWI_FMR) TWI FIFO Mode Register Offset */
#define FLEX_TWI_FLR_REG_OFST          _UINT32_(0x654)     /* (FLEX_TWI_FLR) TWI FIFO Level Register Offset */
#define FLEX_TWI_FSR_REG_OFST          _UINT32_(0x660)     /* (FLEX_TWI_FSR) TWI FIFO Status Register Offset */
#define FLEX_TWI_FIER_REG_OFST         _UINT32_(0x664)     /* (FLEX_TWI_FIER) TWI FIFO Interrupt Enable Register Offset */
#define FLEX_TWI_FIDR_REG_OFST         _UINT32_(0x668)     /* (FLEX_TWI_FIDR) TWI FIFO Interrupt Disable Register Offset */
#define FLEX_TWI_FIMR_REG_OFST         _UINT32_(0x66C)     /* (FLEX_TWI_FIMR) TWI FIFO Interrupt Mask Register Offset */
#define FLEX_TWI_WPMR_REG_OFST         _UINT32_(0x6E4)     /* (FLEX_TWI_WPMR) TWI Write Protection Mode Register Offset */
#define FLEX_TWI_WPSR_REG_OFST         _UINT32_(0x6E8)     /* (FLEX_TWI_WPSR) TWI Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* FLEXCOM register API structure */
typedef struct
{  /* Flexible Serial Communication */
  __IO  uint32_t                       FLEX_MR;            /* Offset: 0x00 (R/W  32) FLEXCOM Mode Register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       FLEX_RHR;           /* Offset: 0x10 (R/   32) FLEXCOM Receive Holding Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       FLEX_THR;           /* Offset: 0x20 (R/W  32) FLEXCOM Transmit Holding Register */
  __I   uint8_t                        Reserved3[0x1DC];
  __O   uint32_t                       FLEX_US_CR;         /* Offset: 0x200 ( /W  32) USART Control Register */
  __IO  uint32_t                       FLEX_US_MR;         /* Offset: 0x204 (R/W  32) USART Mode Register */
  __O   uint32_t                       FLEX_US_IER;        /* Offset: 0x208 ( /W  32) USART Interrupt Enable Register */
  __O   uint32_t                       FLEX_US_IDR;        /* Offset: 0x20C ( /W  32) USART Interrupt Disable Register */
  __I   uint32_t                       FLEX_US_IMR;        /* Offset: 0x210 (R/   32) USART Interrupt Mask Register */
  __I   uint32_t                       FLEX_US_CSR;        /* Offset: 0x214 (R/   32) USART Channel Status Register */
  __I   uint32_t                       FLEX_US_RHR;        /* Offset: 0x218 (R/   32) USART Receive Holding Register */
  __O   uint32_t                       FLEX_US_THR;        /* Offset: 0x21C ( /W  32) USART Transmit Holding Register */
  __IO  uint32_t                       FLEX_US_BRGR;       /* Offset: 0x220 (R/W  32) USART Baud Rate Generator Register */
  __IO  uint32_t                       FLEX_US_RTOR;       /* Offset: 0x224 (R/W  32) USART Receiver Timeout Register */
  __IO  uint32_t                       FLEX_US_TTGR;       /* Offset: 0x228 (R/W  32) USART Transmitter Timeguard Register */
  __I   uint8_t                        Reserved4[0x14];
  __IO  uint32_t                       FLEX_US_FIDI;       /* Offset: 0x240 (R/W  32) USART FI DI Ratio Register */
  __I   uint32_t                       FLEX_US_NER;        /* Offset: 0x244 (R/   32) USART Number of Errors Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       FLEX_US_IF;         /* Offset: 0x24C (R/W  32) USART IrDA Filter Register */
  __IO  uint32_t                       FLEX_US_MAN;        /* Offset: 0x250 (R/W  32) USART Manchester Configuration Register */
  __IO  uint32_t                       FLEX_US_LINMR;      /* Offset: 0x254 (R/W  32) USART LIN Mode Register */
  __IO  uint32_t                       FLEX_US_LINIR;      /* Offset: 0x258 (R/W  32) USART LIN Identifier Register */
  __I   uint32_t                       FLEX_US_LINBRR;     /* Offset: 0x25C (R/   32) USART LIN Baud Rate Register */
  __I   uint8_t                        Reserved6[0x30];
  __IO  uint32_t                       FLEX_US_CMPR;       /* Offset: 0x290 (R/W  32) USART Comparison Register */
  __I   uint8_t                        Reserved7[0x0C];
  __IO  uint32_t                       FLEX_US_FMR;        /* Offset: 0x2A0 (R/W  32) USART FIFO Mode Register */
  __I   uint32_t                       FLEX_US_FLR;        /* Offset: 0x2A4 (R/   32) USART FIFO Level Register */
  __O   uint32_t                       FLEX_US_FIER;       /* Offset: 0x2A8 ( /W  32) USART FIFO Interrupt Enable Register */
  __O   uint32_t                       FLEX_US_FIDR;       /* Offset: 0x2AC ( /W  32) USART FIFO Interrupt Disable Register */
  __I   uint32_t                       FLEX_US_FIMR;       /* Offset: 0x2B0 (R/   32) USART FIFO Interrupt Mask Register */
  __I   uint32_t                       FLEX_US_FESR;       /* Offset: 0x2B4 (R/   32) USART FIFO Event Status Register */
  __I   uint8_t                        Reserved8[0x2C];
  __IO  uint32_t                       FLEX_US_WPMR;       /* Offset: 0x2E4 (R/W  32) USART Write Protection Mode Register */
  __I   uint32_t                       FLEX_US_WPSR;       /* Offset: 0x2E8 (R/   32) USART Write Protection Status Register */
  __I   uint8_t                        Reserved9[0x114];
  __O   uint32_t                       FLEX_SPI_CR;        /* Offset: 0x400 ( /W  32) SPI Control Register */
  __IO  uint32_t                       FLEX_SPI_MR;        /* Offset: 0x404 (R/W  32) SPI Mode Register */
  __I   uint32_t                       FLEX_SPI_RDR;       /* Offset: 0x408 (R/   32) SPI Receive Data Register */
  __O   uint32_t                       FLEX_SPI_TDR;       /* Offset: 0x40C ( /W  32) SPI Transmit Data Register */
  __I   uint32_t                       FLEX_SPI_SR;        /* Offset: 0x410 (R/   32) SPI Status Register */
  __O   uint32_t                       FLEX_SPI_IER;       /* Offset: 0x414 ( /W  32) SPI Interrupt Enable Register */
  __O   uint32_t                       FLEX_SPI_IDR;       /* Offset: 0x418 ( /W  32) SPI Interrupt Disable Register */
  __I   uint32_t                       FLEX_SPI_IMR;       /* Offset: 0x41C (R/   32) SPI Interrupt Mask Register */
  __I   uint8_t                        Reserved10[0x10];
  __IO  uint32_t                       FLEX_SPI_CSR[4];    /* Offset: 0x430 (R/W  32) SPI Chip Select Register x */
  __IO  uint32_t                       FLEX_SPI_FMR;       /* Offset: 0x440 (R/W  32) SPI FIFO Mode Register */
  __I   uint32_t                       FLEX_SPI_FLR;       /* Offset: 0x444 (R/   32) SPI FIFO Level Register */
  __IO  uint32_t                       FLEX_SPI_CMPR;      /* Offset: 0x448 (R/W  32) SPI Comparison Register */
  __I   uint8_t                        Reserved11[0x98];
  __IO  uint32_t                       FLEX_SPI_WPMR;      /* Offset: 0x4E4 (R/W  32) SPI Write Protection Mode Register */
  __I   uint32_t                       FLEX_SPI_WPSR;      /* Offset: 0x4E8 (R/   32) SPI Write Protection Status Register */
  __I   uint8_t                        Reserved12[0x114];
  __O   uint32_t                       FLEX_TWI_CR;        /* Offset: 0x600 ( /W  32) TWI Control Register */
  __IO  uint32_t                       FLEX_TWI_MMR;       /* Offset: 0x604 (R/W  32) TWI Host Mode Register */
  __IO  uint32_t                       FLEX_TWI_SMR;       /* Offset: 0x608 (R/W  32) TWI Client Mode Register */
  __IO  uint32_t                       FLEX_TWI_IADR;      /* Offset: 0x60C (R/W  32) TWI Internal Address Register */
  __IO  uint32_t                       FLEX_TWI_CWGR;      /* Offset: 0x610 (R/W  32) TWI Clock Waveform Generator Register */
  __I   uint8_t                        Reserved13[0x0C];
  __I   uint32_t                       FLEX_TWI_SR;        /* Offset: 0x620 (R/   32) TWI Status Register */
  __O   uint32_t                       FLEX_TWI_IER;       /* Offset: 0x624 ( /W  32) TWI Interrupt Enable Register */
  __O   uint32_t                       FLEX_TWI_IDR;       /* Offset: 0x628 ( /W  32) TWI Interrupt Disable Register */
  __I   uint32_t                       FLEX_TWI_IMR;       /* Offset: 0x62C (R/   32) TWI Interrupt Mask Register */
  __I   uint32_t                       FLEX_TWI_RHR;       /* Offset: 0x630 (R/   32) TWI Receive Holding Register */
  __O   uint32_t                       FLEX_TWI_THR;       /* Offset: 0x634 ( /W  32) TWI Transmit Holding Register */
  __IO  uint32_t                       FLEX_TWI_SMBTR;     /* Offset: 0x638 (R/W  32) TWI SMBus Timing Register */
  __IO  uint32_t                       FLEX_TWI_HSR;       /* Offset: 0x63C (R/W  32) TWI High Speed Register */
  __IO  uint32_t                       FLEX_TWI_ACR;       /* Offset: 0x640 (R/W  32) TWI Alternative Command Register */
  __IO  uint32_t                       FLEX_TWI_FILTR;     /* Offset: 0x644 (R/W  32) TWI Filter Register */
  __IO  uint32_t                       FLEX_TWI_HSCWGR;    /* Offset: 0x648 (R/W  32) TWI High Speed Clock Waveform Generator Register */
  __IO  uint32_t                       FLEX_TWI_SWMR;      /* Offset: 0x64C (R/W  32) TWI Matching Register */
  __IO  uint32_t                       FLEX_TWI_FMR;       /* Offset: 0x650 (R/W  32) TWI FIFO Mode Register */
  __I   uint32_t                       FLEX_TWI_FLR;       /* Offset: 0x654 (R/   32) TWI FIFO Level Register */
  __I   uint8_t                        Reserved14[0x08];
  __I   uint32_t                       FLEX_TWI_FSR;       /* Offset: 0x660 (R/   32) TWI FIFO Status Register */
  __O   uint32_t                       FLEX_TWI_FIER;      /* Offset: 0x664 ( /W  32) TWI FIFO Interrupt Enable Register */
  __O   uint32_t                       FLEX_TWI_FIDR;      /* Offset: 0x668 ( /W  32) TWI FIFO Interrupt Disable Register */
  __I   uint32_t                       FLEX_TWI_FIMR;      /* Offset: 0x66C (R/   32) TWI FIFO Interrupt Mask Register */
  __I   uint8_t                        Reserved15[0x74];
  __IO  uint32_t                       FLEX_TWI_WPMR;      /* Offset: 0x6E4 (R/W  32) TWI Write Protection Mode Register */
  __I   uint32_t                       FLEX_TWI_WPSR;      /* Offset: 0x6E8 (R/   32) TWI Write Protection Status Register */
} flexcom_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#include "flexcom_usart_spi_twi.h"

#endif /* _SAMA7D_FLEXCOM_COMPONENT_H_ */
