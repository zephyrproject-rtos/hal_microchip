/*
 * Component description for CAN
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

/*  file generated from device description file (ATDF) version 2023-03-17T09:50:08Z  */
#ifndef _SAME54_CAN_COMPONENT_H_
#define _SAME54_CAN_COMPONENT_H_

#include "core_cm4.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR CAN                       */
/* ************************************************************************** */

/* -------- CAN_RXBE_0 : (CAN Offset: 0x00) (R/W 32) Rx Buffer Element 0 -------- */
#define CAN_RXBE_0_ID_Pos                     _UINT32_(0)                                          /* (CAN_RXBE_0) Identifier Position */
#define CAN_RXBE_0_ID_Msk                     (_UINT32_(0x1FFFFFFF) << CAN_RXBE_0_ID_Pos)          /* (CAN_RXBE_0) Identifier Mask */
#define CAN_RXBE_0_ID(value)                  (CAN_RXBE_0_ID_Msk & (_UINT32_(value) << CAN_RXBE_0_ID_Pos)) /* Assignment of value for ID in the CAN_RXBE_0 register */
#define CAN_RXBE_0_RTR_Pos                    _UINT32_(29)                                         /* (CAN_RXBE_0) Remote Transmission Request Position */
#define CAN_RXBE_0_RTR_Msk                    (_UINT32_(0x1) << CAN_RXBE_0_RTR_Pos)                /* (CAN_RXBE_0) Remote Transmission Request Mask */
#define CAN_RXBE_0_RTR(value)                 (CAN_RXBE_0_RTR_Msk & (_UINT32_(value) << CAN_RXBE_0_RTR_Pos)) /* Assignment of value for RTR in the CAN_RXBE_0 register */
#define CAN_RXBE_0_XTD_Pos                    _UINT32_(30)                                         /* (CAN_RXBE_0) Extended Identifier Position */
#define CAN_RXBE_0_XTD_Msk                    (_UINT32_(0x1) << CAN_RXBE_0_XTD_Pos)                /* (CAN_RXBE_0) Extended Identifier Mask */
#define CAN_RXBE_0_XTD(value)                 (CAN_RXBE_0_XTD_Msk & (_UINT32_(value) << CAN_RXBE_0_XTD_Pos)) /* Assignment of value for XTD in the CAN_RXBE_0 register */
#define CAN_RXBE_0_ESI_Pos                    _UINT32_(31)                                         /* (CAN_RXBE_0) Error State Indicator Position */
#define CAN_RXBE_0_ESI_Msk                    (_UINT32_(0x1) << CAN_RXBE_0_ESI_Pos)                /* (CAN_RXBE_0) Error State Indicator Mask */
#define CAN_RXBE_0_ESI(value)                 (CAN_RXBE_0_ESI_Msk & (_UINT32_(value) << CAN_RXBE_0_ESI_Pos)) /* Assignment of value for ESI in the CAN_RXBE_0 register */
#define CAN_RXBE_0_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (CAN_RXBE_0) Register Mask  */


/* -------- CAN_RXBE_1 : (CAN Offset: 0x04) (R/W 32) Rx Buffer Element 1 -------- */
#define CAN_RXBE_1_RXTS_Pos                   _UINT32_(0)                                          /* (CAN_RXBE_1) Rx Timestamp Position */
#define CAN_RXBE_1_RXTS_Msk                   (_UINT32_(0xFFFF) << CAN_RXBE_1_RXTS_Pos)            /* (CAN_RXBE_1) Rx Timestamp Mask */
#define CAN_RXBE_1_RXTS(value)                (CAN_RXBE_1_RXTS_Msk & (_UINT32_(value) << CAN_RXBE_1_RXTS_Pos)) /* Assignment of value for RXTS in the CAN_RXBE_1 register */
#define CAN_RXBE_1_DLC_Pos                    _UINT32_(16)                                         /* (CAN_RXBE_1) Data Length Code Position */
#define CAN_RXBE_1_DLC_Msk                    (_UINT32_(0xF) << CAN_RXBE_1_DLC_Pos)                /* (CAN_RXBE_1) Data Length Code Mask */
#define CAN_RXBE_1_DLC(value)                 (CAN_RXBE_1_DLC_Msk & (_UINT32_(value) << CAN_RXBE_1_DLC_Pos)) /* Assignment of value for DLC in the CAN_RXBE_1 register */
#define CAN_RXBE_1_BRS_Pos                    _UINT32_(20)                                         /* (CAN_RXBE_1) Bit Rate Switch Position */
#define CAN_RXBE_1_BRS_Msk                    (_UINT32_(0x1) << CAN_RXBE_1_BRS_Pos)                /* (CAN_RXBE_1) Bit Rate Switch Mask */
#define CAN_RXBE_1_BRS(value)                 (CAN_RXBE_1_BRS_Msk & (_UINT32_(value) << CAN_RXBE_1_BRS_Pos)) /* Assignment of value for BRS in the CAN_RXBE_1 register */
#define CAN_RXBE_1_FDF_Pos                    _UINT32_(21)                                         /* (CAN_RXBE_1) FD Format Position */
#define CAN_RXBE_1_FDF_Msk                    (_UINT32_(0x1) << CAN_RXBE_1_FDF_Pos)                /* (CAN_RXBE_1) FD Format Mask */
#define CAN_RXBE_1_FDF(value)                 (CAN_RXBE_1_FDF_Msk & (_UINT32_(value) << CAN_RXBE_1_FDF_Pos)) /* Assignment of value for FDF in the CAN_RXBE_1 register */
#define CAN_RXBE_1_FIDX_Pos                   _UINT32_(24)                                         /* (CAN_RXBE_1) Filter Index Position */
#define CAN_RXBE_1_FIDX_Msk                   (_UINT32_(0x7F) << CAN_RXBE_1_FIDX_Pos)              /* (CAN_RXBE_1) Filter Index Mask */
#define CAN_RXBE_1_FIDX(value)                (CAN_RXBE_1_FIDX_Msk & (_UINT32_(value) << CAN_RXBE_1_FIDX_Pos)) /* Assignment of value for FIDX in the CAN_RXBE_1 register */
#define CAN_RXBE_1_ANMF_Pos                   _UINT32_(31)                                         /* (CAN_RXBE_1) Accepted Non-matching Frame Position */
#define CAN_RXBE_1_ANMF_Msk                   (_UINT32_(0x1) << CAN_RXBE_1_ANMF_Pos)               /* (CAN_RXBE_1) Accepted Non-matching Frame Mask */
#define CAN_RXBE_1_ANMF(value)                (CAN_RXBE_1_ANMF_Msk & (_UINT32_(value) << CAN_RXBE_1_ANMF_Pos)) /* Assignment of value for ANMF in the CAN_RXBE_1 register */
#define CAN_RXBE_1_Msk                        _UINT32_(0xFF3FFFFF)                                 /* (CAN_RXBE_1) Register Mask  */


/* -------- CAN_RXBE_DATA : (CAN Offset: 0x08) (R/W 32) Rx Buffer Element Data -------- */
#define CAN_RXBE_DATA_DB0_Pos                 _UINT32_(0)                                          /* (CAN_RXBE_DATA) Data Byte 0 Position */
#define CAN_RXBE_DATA_DB0_Msk                 (_UINT32_(0xFF) << CAN_RXBE_DATA_DB0_Pos)            /* (CAN_RXBE_DATA) Data Byte 0 Mask */
#define CAN_RXBE_DATA_DB0(value)              (CAN_RXBE_DATA_DB0_Msk & (_UINT32_(value) << CAN_RXBE_DATA_DB0_Pos)) /* Assignment of value for DB0 in the CAN_RXBE_DATA register */
#define CAN_RXBE_DATA_DB1_Pos                 _UINT32_(8)                                          /* (CAN_RXBE_DATA) Data Byte 1 Position */
#define CAN_RXBE_DATA_DB1_Msk                 (_UINT32_(0xFF) << CAN_RXBE_DATA_DB1_Pos)            /* (CAN_RXBE_DATA) Data Byte 1 Mask */
#define CAN_RXBE_DATA_DB1(value)              (CAN_RXBE_DATA_DB1_Msk & (_UINT32_(value) << CAN_RXBE_DATA_DB1_Pos)) /* Assignment of value for DB1 in the CAN_RXBE_DATA register */
#define CAN_RXBE_DATA_DB2_Pos                 _UINT32_(16)                                         /* (CAN_RXBE_DATA) Data Byte 2 Position */
#define CAN_RXBE_DATA_DB2_Msk                 (_UINT32_(0xFF) << CAN_RXBE_DATA_DB2_Pos)            /* (CAN_RXBE_DATA) Data Byte 2 Mask */
#define CAN_RXBE_DATA_DB2(value)              (CAN_RXBE_DATA_DB2_Msk & (_UINT32_(value) << CAN_RXBE_DATA_DB2_Pos)) /* Assignment of value for DB2 in the CAN_RXBE_DATA register */
#define CAN_RXBE_DATA_DB3_Pos                 _UINT32_(24)                                         /* (CAN_RXBE_DATA) Data Byte 3 Position */
#define CAN_RXBE_DATA_DB3_Msk                 (_UINT32_(0xFF) << CAN_RXBE_DATA_DB3_Pos)            /* (CAN_RXBE_DATA) Data Byte 3 Mask */
#define CAN_RXBE_DATA_DB3(value)              (CAN_RXBE_DATA_DB3_Msk & (_UINT32_(value) << CAN_RXBE_DATA_DB3_Pos)) /* Assignment of value for DB3 in the CAN_RXBE_DATA register */
#define CAN_RXBE_DATA_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (CAN_RXBE_DATA) Register Mask  */


/* -------- CAN_RXF0E_0 : (CAN Offset: 0x00) (R/W 32) Rx FIFO 0 Element 0 -------- */
#define CAN_RXF0E_0_ID_Pos                    _UINT32_(0)                                          /* (CAN_RXF0E_0) Identifier Position */
#define CAN_RXF0E_0_ID_Msk                    (_UINT32_(0x1FFFFFFF) << CAN_RXF0E_0_ID_Pos)         /* (CAN_RXF0E_0) Identifier Mask */
#define CAN_RXF0E_0_ID(value)                 (CAN_RXF0E_0_ID_Msk & (_UINT32_(value) << CAN_RXF0E_0_ID_Pos)) /* Assignment of value for ID in the CAN_RXF0E_0 register */
#define CAN_RXF0E_0_RTR_Pos                   _UINT32_(29)                                         /* (CAN_RXF0E_0) Remote Transmission Request Position */
#define CAN_RXF0E_0_RTR_Msk                   (_UINT32_(0x1) << CAN_RXF0E_0_RTR_Pos)               /* (CAN_RXF0E_0) Remote Transmission Request Mask */
#define CAN_RXF0E_0_RTR(value)                (CAN_RXF0E_0_RTR_Msk & (_UINT32_(value) << CAN_RXF0E_0_RTR_Pos)) /* Assignment of value for RTR in the CAN_RXF0E_0 register */
#define CAN_RXF0E_0_XTD_Pos                   _UINT32_(30)                                         /* (CAN_RXF0E_0) Extended Identifier Position */
#define CAN_RXF0E_0_XTD_Msk                   (_UINT32_(0x1) << CAN_RXF0E_0_XTD_Pos)               /* (CAN_RXF0E_0) Extended Identifier Mask */
#define CAN_RXF0E_0_XTD(value)                (CAN_RXF0E_0_XTD_Msk & (_UINT32_(value) << CAN_RXF0E_0_XTD_Pos)) /* Assignment of value for XTD in the CAN_RXF0E_0 register */
#define CAN_RXF0E_0_ESI_Pos                   _UINT32_(31)                                         /* (CAN_RXF0E_0) Error State Indicator Position */
#define CAN_RXF0E_0_ESI_Msk                   (_UINT32_(0x1) << CAN_RXF0E_0_ESI_Pos)               /* (CAN_RXF0E_0) Error State Indicator Mask */
#define CAN_RXF0E_0_ESI(value)                (CAN_RXF0E_0_ESI_Msk & (_UINT32_(value) << CAN_RXF0E_0_ESI_Pos)) /* Assignment of value for ESI in the CAN_RXF0E_0 register */
#define CAN_RXF0E_0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CAN_RXF0E_0) Register Mask  */


/* -------- CAN_RXF0E_1 : (CAN Offset: 0x04) (R/W 32) Rx FIFO 0 Element 1 -------- */
#define CAN_RXF0E_1_RXTS_Pos                  _UINT32_(0)                                          /* (CAN_RXF0E_1) Rx Timestamp Position */
#define CAN_RXF0E_1_RXTS_Msk                  (_UINT32_(0xFFFF) << CAN_RXF0E_1_RXTS_Pos)           /* (CAN_RXF0E_1) Rx Timestamp Mask */
#define CAN_RXF0E_1_RXTS(value)               (CAN_RXF0E_1_RXTS_Msk & (_UINT32_(value) << CAN_RXF0E_1_RXTS_Pos)) /* Assignment of value for RXTS in the CAN_RXF0E_1 register */
#define CAN_RXF0E_1_DLC_Pos                   _UINT32_(16)                                         /* (CAN_RXF0E_1) Data Length Code Position */
#define CAN_RXF0E_1_DLC_Msk                   (_UINT32_(0xF) << CAN_RXF0E_1_DLC_Pos)               /* (CAN_RXF0E_1) Data Length Code Mask */
#define CAN_RXF0E_1_DLC(value)                (CAN_RXF0E_1_DLC_Msk & (_UINT32_(value) << CAN_RXF0E_1_DLC_Pos)) /* Assignment of value for DLC in the CAN_RXF0E_1 register */
#define CAN_RXF0E_1_BRS_Pos                   _UINT32_(20)                                         /* (CAN_RXF0E_1) Bit Rate Switch Position */
#define CAN_RXF0E_1_BRS_Msk                   (_UINT32_(0x1) << CAN_RXF0E_1_BRS_Pos)               /* (CAN_RXF0E_1) Bit Rate Switch Mask */
#define CAN_RXF0E_1_BRS(value)                (CAN_RXF0E_1_BRS_Msk & (_UINT32_(value) << CAN_RXF0E_1_BRS_Pos)) /* Assignment of value for BRS in the CAN_RXF0E_1 register */
#define CAN_RXF0E_1_FDF_Pos                   _UINT32_(21)                                         /* (CAN_RXF0E_1) FD Format Position */
#define CAN_RXF0E_1_FDF_Msk                   (_UINT32_(0x1) << CAN_RXF0E_1_FDF_Pos)               /* (CAN_RXF0E_1) FD Format Mask */
#define CAN_RXF0E_1_FDF(value)                (CAN_RXF0E_1_FDF_Msk & (_UINT32_(value) << CAN_RXF0E_1_FDF_Pos)) /* Assignment of value for FDF in the CAN_RXF0E_1 register */
#define CAN_RXF0E_1_FIDX_Pos                  _UINT32_(24)                                         /* (CAN_RXF0E_1) Filter Index Position */
#define CAN_RXF0E_1_FIDX_Msk                  (_UINT32_(0x7F) << CAN_RXF0E_1_FIDX_Pos)             /* (CAN_RXF0E_1) Filter Index Mask */
#define CAN_RXF0E_1_FIDX(value)               (CAN_RXF0E_1_FIDX_Msk & (_UINT32_(value) << CAN_RXF0E_1_FIDX_Pos)) /* Assignment of value for FIDX in the CAN_RXF0E_1 register */
#define CAN_RXF0E_1_ANMF_Pos                  _UINT32_(31)                                         /* (CAN_RXF0E_1) Accepted Non-matching Frame Position */
#define CAN_RXF0E_1_ANMF_Msk                  (_UINT32_(0x1) << CAN_RXF0E_1_ANMF_Pos)              /* (CAN_RXF0E_1) Accepted Non-matching Frame Mask */
#define CAN_RXF0E_1_ANMF(value)               (CAN_RXF0E_1_ANMF_Msk & (_UINT32_(value) << CAN_RXF0E_1_ANMF_Pos)) /* Assignment of value for ANMF in the CAN_RXF0E_1 register */
#define CAN_RXF0E_1_Msk                       _UINT32_(0xFF3FFFFF)                                 /* (CAN_RXF0E_1) Register Mask  */


/* -------- CAN_RXF0E_DATA : (CAN Offset: 0x08) (R/W 32) Rx FIFO 0 Element Data -------- */
#define CAN_RXF0E_DATA_DB0_Pos                _UINT32_(0)                                          /* (CAN_RXF0E_DATA) Data Byte 0 Position */
#define CAN_RXF0E_DATA_DB0_Msk                (_UINT32_(0xFF) << CAN_RXF0E_DATA_DB0_Pos)           /* (CAN_RXF0E_DATA) Data Byte 0 Mask */
#define CAN_RXF0E_DATA_DB0(value)             (CAN_RXF0E_DATA_DB0_Msk & (_UINT32_(value) << CAN_RXF0E_DATA_DB0_Pos)) /* Assignment of value for DB0 in the CAN_RXF0E_DATA register */
#define CAN_RXF0E_DATA_DB1_Pos                _UINT32_(8)                                          /* (CAN_RXF0E_DATA) Data Byte 1 Position */
#define CAN_RXF0E_DATA_DB1_Msk                (_UINT32_(0xFF) << CAN_RXF0E_DATA_DB1_Pos)           /* (CAN_RXF0E_DATA) Data Byte 1 Mask */
#define CAN_RXF0E_DATA_DB1(value)             (CAN_RXF0E_DATA_DB1_Msk & (_UINT32_(value) << CAN_RXF0E_DATA_DB1_Pos)) /* Assignment of value for DB1 in the CAN_RXF0E_DATA register */
#define CAN_RXF0E_DATA_DB2_Pos                _UINT32_(16)                                         /* (CAN_RXF0E_DATA) Data Byte 2 Position */
#define CAN_RXF0E_DATA_DB2_Msk                (_UINT32_(0xFF) << CAN_RXF0E_DATA_DB2_Pos)           /* (CAN_RXF0E_DATA) Data Byte 2 Mask */
#define CAN_RXF0E_DATA_DB2(value)             (CAN_RXF0E_DATA_DB2_Msk & (_UINT32_(value) << CAN_RXF0E_DATA_DB2_Pos)) /* Assignment of value for DB2 in the CAN_RXF0E_DATA register */
#define CAN_RXF0E_DATA_DB3_Pos                _UINT32_(24)                                         /* (CAN_RXF0E_DATA) Data Byte 3 Position */
#define CAN_RXF0E_DATA_DB3_Msk                (_UINT32_(0xFF) << CAN_RXF0E_DATA_DB3_Pos)           /* (CAN_RXF0E_DATA) Data Byte 3 Mask */
#define CAN_RXF0E_DATA_DB3(value)             (CAN_RXF0E_DATA_DB3_Msk & (_UINT32_(value) << CAN_RXF0E_DATA_DB3_Pos)) /* Assignment of value for DB3 in the CAN_RXF0E_DATA register */
#define CAN_RXF0E_DATA_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (CAN_RXF0E_DATA) Register Mask  */


/* -------- CAN_RXF1E_0 : (CAN Offset: 0x00) (R/W 32) Rx FIFO 1 Element 0 -------- */
#define CAN_RXF1E_0_ID_Pos                    _UINT32_(0)                                          /* (CAN_RXF1E_0) Identifier Position */
#define CAN_RXF1E_0_ID_Msk                    (_UINT32_(0x1FFFFFFF) << CAN_RXF1E_0_ID_Pos)         /* (CAN_RXF1E_0) Identifier Mask */
#define CAN_RXF1E_0_ID(value)                 (CAN_RXF1E_0_ID_Msk & (_UINT32_(value) << CAN_RXF1E_0_ID_Pos)) /* Assignment of value for ID in the CAN_RXF1E_0 register */
#define CAN_RXF1E_0_RTR_Pos                   _UINT32_(29)                                         /* (CAN_RXF1E_0) Remote Transmission Request Position */
#define CAN_RXF1E_0_RTR_Msk                   (_UINT32_(0x1) << CAN_RXF1E_0_RTR_Pos)               /* (CAN_RXF1E_0) Remote Transmission Request Mask */
#define CAN_RXF1E_0_RTR(value)                (CAN_RXF1E_0_RTR_Msk & (_UINT32_(value) << CAN_RXF1E_0_RTR_Pos)) /* Assignment of value for RTR in the CAN_RXF1E_0 register */
#define CAN_RXF1E_0_XTD_Pos                   _UINT32_(30)                                         /* (CAN_RXF1E_0) Extended Identifier Position */
#define CAN_RXF1E_0_XTD_Msk                   (_UINT32_(0x1) << CAN_RXF1E_0_XTD_Pos)               /* (CAN_RXF1E_0) Extended Identifier Mask */
#define CAN_RXF1E_0_XTD(value)                (CAN_RXF1E_0_XTD_Msk & (_UINT32_(value) << CAN_RXF1E_0_XTD_Pos)) /* Assignment of value for XTD in the CAN_RXF1E_0 register */
#define CAN_RXF1E_0_ESI_Pos                   _UINT32_(31)                                         /* (CAN_RXF1E_0) Error State Indicator Position */
#define CAN_RXF1E_0_ESI_Msk                   (_UINT32_(0x1) << CAN_RXF1E_0_ESI_Pos)               /* (CAN_RXF1E_0) Error State Indicator Mask */
#define CAN_RXF1E_0_ESI(value)                (CAN_RXF1E_0_ESI_Msk & (_UINT32_(value) << CAN_RXF1E_0_ESI_Pos)) /* Assignment of value for ESI in the CAN_RXF1E_0 register */
#define CAN_RXF1E_0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CAN_RXF1E_0) Register Mask  */


/* -------- CAN_RXF1E_1 : (CAN Offset: 0x04) (R/W 32) Rx FIFO 1 Element 1 -------- */
#define CAN_RXF1E_1_RXTS_Pos                  _UINT32_(0)                                          /* (CAN_RXF1E_1) Rx Timestamp Position */
#define CAN_RXF1E_1_RXTS_Msk                  (_UINT32_(0xFFFF) << CAN_RXF1E_1_RXTS_Pos)           /* (CAN_RXF1E_1) Rx Timestamp Mask */
#define CAN_RXF1E_1_RXTS(value)               (CAN_RXF1E_1_RXTS_Msk & (_UINT32_(value) << CAN_RXF1E_1_RXTS_Pos)) /* Assignment of value for RXTS in the CAN_RXF1E_1 register */
#define CAN_RXF1E_1_DLC_Pos                   _UINT32_(16)                                         /* (CAN_RXF1E_1) Data Length Code Position */
#define CAN_RXF1E_1_DLC_Msk                   (_UINT32_(0xF) << CAN_RXF1E_1_DLC_Pos)               /* (CAN_RXF1E_1) Data Length Code Mask */
#define CAN_RXF1E_1_DLC(value)                (CAN_RXF1E_1_DLC_Msk & (_UINT32_(value) << CAN_RXF1E_1_DLC_Pos)) /* Assignment of value for DLC in the CAN_RXF1E_1 register */
#define CAN_RXF1E_1_BRS_Pos                   _UINT32_(20)                                         /* (CAN_RXF1E_1) Bit Rate Switch Position */
#define CAN_RXF1E_1_BRS_Msk                   (_UINT32_(0x1) << CAN_RXF1E_1_BRS_Pos)               /* (CAN_RXF1E_1) Bit Rate Switch Mask */
#define CAN_RXF1E_1_BRS(value)                (CAN_RXF1E_1_BRS_Msk & (_UINT32_(value) << CAN_RXF1E_1_BRS_Pos)) /* Assignment of value for BRS in the CAN_RXF1E_1 register */
#define CAN_RXF1E_1_FDF_Pos                   _UINT32_(21)                                         /* (CAN_RXF1E_1) FD Format Position */
#define CAN_RXF1E_1_FDF_Msk                   (_UINT32_(0x1) << CAN_RXF1E_1_FDF_Pos)               /* (CAN_RXF1E_1) FD Format Mask */
#define CAN_RXF1E_1_FDF(value)                (CAN_RXF1E_1_FDF_Msk & (_UINT32_(value) << CAN_RXF1E_1_FDF_Pos)) /* Assignment of value for FDF in the CAN_RXF1E_1 register */
#define CAN_RXF1E_1_FIDX_Pos                  _UINT32_(24)                                         /* (CAN_RXF1E_1) Filter Index Position */
#define CAN_RXF1E_1_FIDX_Msk                  (_UINT32_(0x7F) << CAN_RXF1E_1_FIDX_Pos)             /* (CAN_RXF1E_1) Filter Index Mask */
#define CAN_RXF1E_1_FIDX(value)               (CAN_RXF1E_1_FIDX_Msk & (_UINT32_(value) << CAN_RXF1E_1_FIDX_Pos)) /* Assignment of value for FIDX in the CAN_RXF1E_1 register */
#define CAN_RXF1E_1_ANMF_Pos                  _UINT32_(31)                                         /* (CAN_RXF1E_1) Accepted Non-matching Frame Position */
#define CAN_RXF1E_1_ANMF_Msk                  (_UINT32_(0x1) << CAN_RXF1E_1_ANMF_Pos)              /* (CAN_RXF1E_1) Accepted Non-matching Frame Mask */
#define CAN_RXF1E_1_ANMF(value)               (CAN_RXF1E_1_ANMF_Msk & (_UINT32_(value) << CAN_RXF1E_1_ANMF_Pos)) /* Assignment of value for ANMF in the CAN_RXF1E_1 register */
#define CAN_RXF1E_1_Msk                       _UINT32_(0xFF3FFFFF)                                 /* (CAN_RXF1E_1) Register Mask  */


/* -------- CAN_RXF1E_DATA : (CAN Offset: 0x08) (R/W 32) Rx FIFO 1 Element Data -------- */
#define CAN_RXF1E_DATA_DB0_Pos                _UINT32_(0)                                          /* (CAN_RXF1E_DATA) Data Byte 0 Position */
#define CAN_RXF1E_DATA_DB0_Msk                (_UINT32_(0xFF) << CAN_RXF1E_DATA_DB0_Pos)           /* (CAN_RXF1E_DATA) Data Byte 0 Mask */
#define CAN_RXF1E_DATA_DB0(value)             (CAN_RXF1E_DATA_DB0_Msk & (_UINT32_(value) << CAN_RXF1E_DATA_DB0_Pos)) /* Assignment of value for DB0 in the CAN_RXF1E_DATA register */
#define CAN_RXF1E_DATA_DB1_Pos                _UINT32_(8)                                          /* (CAN_RXF1E_DATA) Data Byte 1 Position */
#define CAN_RXF1E_DATA_DB1_Msk                (_UINT32_(0xFF) << CAN_RXF1E_DATA_DB1_Pos)           /* (CAN_RXF1E_DATA) Data Byte 1 Mask */
#define CAN_RXF1E_DATA_DB1(value)             (CAN_RXF1E_DATA_DB1_Msk & (_UINT32_(value) << CAN_RXF1E_DATA_DB1_Pos)) /* Assignment of value for DB1 in the CAN_RXF1E_DATA register */
#define CAN_RXF1E_DATA_DB2_Pos                _UINT32_(16)                                         /* (CAN_RXF1E_DATA) Data Byte 2 Position */
#define CAN_RXF1E_DATA_DB2_Msk                (_UINT32_(0xFF) << CAN_RXF1E_DATA_DB2_Pos)           /* (CAN_RXF1E_DATA) Data Byte 2 Mask */
#define CAN_RXF1E_DATA_DB2(value)             (CAN_RXF1E_DATA_DB2_Msk & (_UINT32_(value) << CAN_RXF1E_DATA_DB2_Pos)) /* Assignment of value for DB2 in the CAN_RXF1E_DATA register */
#define CAN_RXF1E_DATA_DB3_Pos                _UINT32_(24)                                         /* (CAN_RXF1E_DATA) Data Byte 3 Position */
#define CAN_RXF1E_DATA_DB3_Msk                (_UINT32_(0xFF) << CAN_RXF1E_DATA_DB3_Pos)           /* (CAN_RXF1E_DATA) Data Byte 3 Mask */
#define CAN_RXF1E_DATA_DB3(value)             (CAN_RXF1E_DATA_DB3_Msk & (_UINT32_(value) << CAN_RXF1E_DATA_DB3_Pos)) /* Assignment of value for DB3 in the CAN_RXF1E_DATA register */
#define CAN_RXF1E_DATA_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (CAN_RXF1E_DATA) Register Mask  */


/* -------- CAN_TXBE_0 : (CAN Offset: 0x00) (R/W 32) Tx Buffer Element 0 -------- */
#define CAN_TXBE_0_ID_Pos                     _UINT32_(0)                                          /* (CAN_TXBE_0) Identifier Position */
#define CAN_TXBE_0_ID_Msk                     (_UINT32_(0x1FFFFFFF) << CAN_TXBE_0_ID_Pos)          /* (CAN_TXBE_0) Identifier Mask */
#define CAN_TXBE_0_ID(value)                  (CAN_TXBE_0_ID_Msk & (_UINT32_(value) << CAN_TXBE_0_ID_Pos)) /* Assignment of value for ID in the CAN_TXBE_0 register */
#define CAN_TXBE_0_RTR_Pos                    _UINT32_(29)                                         /* (CAN_TXBE_0) Remote Transmission Request Position */
#define CAN_TXBE_0_RTR_Msk                    (_UINT32_(0x1) << CAN_TXBE_0_RTR_Pos)                /* (CAN_TXBE_0) Remote Transmission Request Mask */
#define CAN_TXBE_0_RTR(value)                 (CAN_TXBE_0_RTR_Msk & (_UINT32_(value) << CAN_TXBE_0_RTR_Pos)) /* Assignment of value for RTR in the CAN_TXBE_0 register */
#define CAN_TXBE_0_XTD_Pos                    _UINT32_(30)                                         /* (CAN_TXBE_0) Extended Identifier Position */
#define CAN_TXBE_0_XTD_Msk                    (_UINT32_(0x1) << CAN_TXBE_0_XTD_Pos)                /* (CAN_TXBE_0) Extended Identifier Mask */
#define CAN_TXBE_0_XTD(value)                 (CAN_TXBE_0_XTD_Msk & (_UINT32_(value) << CAN_TXBE_0_XTD_Pos)) /* Assignment of value for XTD in the CAN_TXBE_0 register */
#define CAN_TXBE_0_ESI_Pos                    _UINT32_(31)                                         /* (CAN_TXBE_0) Error State Indicator Position */
#define CAN_TXBE_0_ESI_Msk                    (_UINT32_(0x1) << CAN_TXBE_0_ESI_Pos)                /* (CAN_TXBE_0) Error State Indicator Mask */
#define CAN_TXBE_0_ESI(value)                 (CAN_TXBE_0_ESI_Msk & (_UINT32_(value) << CAN_TXBE_0_ESI_Pos)) /* Assignment of value for ESI in the CAN_TXBE_0 register */
#define CAN_TXBE_0_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBE_0) Register Mask  */


/* -------- CAN_TXBE_1 : (CAN Offset: 0x04) (R/W 32) Tx Buffer Element 1 -------- */
#define CAN_TXBE_1_DLC_Pos                    _UINT32_(16)                                         /* (CAN_TXBE_1) Data Length Code Position */
#define CAN_TXBE_1_DLC_Msk                    (_UINT32_(0xF) << CAN_TXBE_1_DLC_Pos)                /* (CAN_TXBE_1) Data Length Code Mask */
#define CAN_TXBE_1_DLC(value)                 (CAN_TXBE_1_DLC_Msk & (_UINT32_(value) << CAN_TXBE_1_DLC_Pos)) /* Assignment of value for DLC in the CAN_TXBE_1 register */
#define CAN_TXBE_1_BRS_Pos                    _UINT32_(20)                                         /* (CAN_TXBE_1) Bit Rate Switch Position */
#define CAN_TXBE_1_BRS_Msk                    (_UINT32_(0x1) << CAN_TXBE_1_BRS_Pos)                /* (CAN_TXBE_1) Bit Rate Switch Mask */
#define CAN_TXBE_1_BRS(value)                 (CAN_TXBE_1_BRS_Msk & (_UINT32_(value) << CAN_TXBE_1_BRS_Pos)) /* Assignment of value for BRS in the CAN_TXBE_1 register */
#define CAN_TXBE_1_FDF_Pos                    _UINT32_(21)                                         /* (CAN_TXBE_1) FD Format Position */
#define CAN_TXBE_1_FDF_Msk                    (_UINT32_(0x1) << CAN_TXBE_1_FDF_Pos)                /* (CAN_TXBE_1) FD Format Mask */
#define CAN_TXBE_1_FDF(value)                 (CAN_TXBE_1_FDF_Msk & (_UINT32_(value) << CAN_TXBE_1_FDF_Pos)) /* Assignment of value for FDF in the CAN_TXBE_1 register */
#define CAN_TXBE_1_EFC_Pos                    _UINT32_(23)                                         /* (CAN_TXBE_1) Event FIFO Control Position */
#define CAN_TXBE_1_EFC_Msk                    (_UINT32_(0x1) << CAN_TXBE_1_EFC_Pos)                /* (CAN_TXBE_1) Event FIFO Control Mask */
#define CAN_TXBE_1_EFC(value)                 (CAN_TXBE_1_EFC_Msk & (_UINT32_(value) << CAN_TXBE_1_EFC_Pos)) /* Assignment of value for EFC in the CAN_TXBE_1 register */
#define CAN_TXBE_1_MM_Pos                     _UINT32_(24)                                         /* (CAN_TXBE_1) Message Marker Position */
#define CAN_TXBE_1_MM_Msk                     (_UINT32_(0xFF) << CAN_TXBE_1_MM_Pos)                /* (CAN_TXBE_1) Message Marker Mask */
#define CAN_TXBE_1_MM(value)                  (CAN_TXBE_1_MM_Msk & (_UINT32_(value) << CAN_TXBE_1_MM_Pos)) /* Assignment of value for MM in the CAN_TXBE_1 register */
#define CAN_TXBE_1_Msk                        _UINT32_(0xFFBF0000)                                 /* (CAN_TXBE_1) Register Mask  */


/* -------- CAN_TXBE_DATA : (CAN Offset: 0x08) (R/W 32) Tx Buffer Element Data -------- */
#define CAN_TXBE_DATA_DB0_Pos                 _UINT32_(0)                                          /* (CAN_TXBE_DATA) Data Byte 0 Position */
#define CAN_TXBE_DATA_DB0_Msk                 (_UINT32_(0xFF) << CAN_TXBE_DATA_DB0_Pos)            /* (CAN_TXBE_DATA) Data Byte 0 Mask */
#define CAN_TXBE_DATA_DB0(value)              (CAN_TXBE_DATA_DB0_Msk & (_UINT32_(value) << CAN_TXBE_DATA_DB0_Pos)) /* Assignment of value for DB0 in the CAN_TXBE_DATA register */
#define CAN_TXBE_DATA_DB1_Pos                 _UINT32_(8)                                          /* (CAN_TXBE_DATA) Data Byte 1 Position */
#define CAN_TXBE_DATA_DB1_Msk                 (_UINT32_(0xFF) << CAN_TXBE_DATA_DB1_Pos)            /* (CAN_TXBE_DATA) Data Byte 1 Mask */
#define CAN_TXBE_DATA_DB1(value)              (CAN_TXBE_DATA_DB1_Msk & (_UINT32_(value) << CAN_TXBE_DATA_DB1_Pos)) /* Assignment of value for DB1 in the CAN_TXBE_DATA register */
#define CAN_TXBE_DATA_DB2_Pos                 _UINT32_(16)                                         /* (CAN_TXBE_DATA) Data Byte 2 Position */
#define CAN_TXBE_DATA_DB2_Msk                 (_UINT32_(0xFF) << CAN_TXBE_DATA_DB2_Pos)            /* (CAN_TXBE_DATA) Data Byte 2 Mask */
#define CAN_TXBE_DATA_DB2(value)              (CAN_TXBE_DATA_DB2_Msk & (_UINT32_(value) << CAN_TXBE_DATA_DB2_Pos)) /* Assignment of value for DB2 in the CAN_TXBE_DATA register */
#define CAN_TXBE_DATA_DB3_Pos                 _UINT32_(24)                                         /* (CAN_TXBE_DATA) Data Byte 3 Position */
#define CAN_TXBE_DATA_DB3_Msk                 (_UINT32_(0xFF) << CAN_TXBE_DATA_DB3_Pos)            /* (CAN_TXBE_DATA) Data Byte 3 Mask */
#define CAN_TXBE_DATA_DB3(value)              (CAN_TXBE_DATA_DB3_Msk & (_UINT32_(value) << CAN_TXBE_DATA_DB3_Pos)) /* Assignment of value for DB3 in the CAN_TXBE_DATA register */
#define CAN_TXBE_DATA_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBE_DATA) Register Mask  */


/* -------- CAN_TXEFE_0 : (CAN Offset: 0x00) (R/W 32) Tx Event FIFO Element 0 -------- */
#define CAN_TXEFE_0_ID_Pos                    _UINT32_(0)                                          /* (CAN_TXEFE_0) Identifier Position */
#define CAN_TXEFE_0_ID_Msk                    (_UINT32_(0x1FFFFFFF) << CAN_TXEFE_0_ID_Pos)         /* (CAN_TXEFE_0) Identifier Mask */
#define CAN_TXEFE_0_ID(value)                 (CAN_TXEFE_0_ID_Msk & (_UINT32_(value) << CAN_TXEFE_0_ID_Pos)) /* Assignment of value for ID in the CAN_TXEFE_0 register */
#define CAN_TXEFE_0_RTR_Pos                   _UINT32_(29)                                         /* (CAN_TXEFE_0) Remote Transmission Request Position */
#define CAN_TXEFE_0_RTR_Msk                   (_UINT32_(0x1) << CAN_TXEFE_0_RTR_Pos)               /* (CAN_TXEFE_0) Remote Transmission Request Mask */
#define CAN_TXEFE_0_RTR(value)                (CAN_TXEFE_0_RTR_Msk & (_UINT32_(value) << CAN_TXEFE_0_RTR_Pos)) /* Assignment of value for RTR in the CAN_TXEFE_0 register */
#define CAN_TXEFE_0_XTD_Pos                   _UINT32_(30)                                         /* (CAN_TXEFE_0) Extended Identifier Position */
#define CAN_TXEFE_0_XTD_Msk                   (_UINT32_(0x1) << CAN_TXEFE_0_XTD_Pos)               /* (CAN_TXEFE_0) Extended Identifier Mask */
#define CAN_TXEFE_0_XTD(value)                (CAN_TXEFE_0_XTD_Msk & (_UINT32_(value) << CAN_TXEFE_0_XTD_Pos)) /* Assignment of value for XTD in the CAN_TXEFE_0 register */
#define CAN_TXEFE_0_ESI_Pos                   _UINT32_(31)                                         /* (CAN_TXEFE_0) Error State Indicator Position */
#define CAN_TXEFE_0_ESI_Msk                   (_UINT32_(0x1) << CAN_TXEFE_0_ESI_Pos)               /* (CAN_TXEFE_0) Error State Indicator Mask */
#define CAN_TXEFE_0_ESI(value)                (CAN_TXEFE_0_ESI_Msk & (_UINT32_(value) << CAN_TXEFE_0_ESI_Pos)) /* Assignment of value for ESI in the CAN_TXEFE_0 register */
#define CAN_TXEFE_0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXEFE_0) Register Mask  */


/* -------- CAN_TXEFE_1 : (CAN Offset: 0x04) (R/W 32) Tx Event FIFO Element 1 -------- */
#define CAN_TXEFE_1_TXTS_Pos                  _UINT32_(0)                                          /* (CAN_TXEFE_1) Tx Timestamp Position */
#define CAN_TXEFE_1_TXTS_Msk                  (_UINT32_(0xFFFF) << CAN_TXEFE_1_TXTS_Pos)           /* (CAN_TXEFE_1) Tx Timestamp Mask */
#define CAN_TXEFE_1_TXTS(value)               (CAN_TXEFE_1_TXTS_Msk & (_UINT32_(value) << CAN_TXEFE_1_TXTS_Pos)) /* Assignment of value for TXTS in the CAN_TXEFE_1 register */
#define CAN_TXEFE_1_DLC_Pos                   _UINT32_(16)                                         /* (CAN_TXEFE_1) Data Length Code Position */
#define CAN_TXEFE_1_DLC_Msk                   (_UINT32_(0xF) << CAN_TXEFE_1_DLC_Pos)               /* (CAN_TXEFE_1) Data Length Code Mask */
#define CAN_TXEFE_1_DLC(value)                (CAN_TXEFE_1_DLC_Msk & (_UINT32_(value) << CAN_TXEFE_1_DLC_Pos)) /* Assignment of value for DLC in the CAN_TXEFE_1 register */
#define CAN_TXEFE_1_BRS_Pos                   _UINT32_(20)                                         /* (CAN_TXEFE_1) Bit Rate Switch Position */
#define CAN_TXEFE_1_BRS_Msk                   (_UINT32_(0x1) << CAN_TXEFE_1_BRS_Pos)               /* (CAN_TXEFE_1) Bit Rate Switch Mask */
#define CAN_TXEFE_1_BRS(value)                (CAN_TXEFE_1_BRS_Msk & (_UINT32_(value) << CAN_TXEFE_1_BRS_Pos)) /* Assignment of value for BRS in the CAN_TXEFE_1 register */
#define CAN_TXEFE_1_FDF_Pos                   _UINT32_(21)                                         /* (CAN_TXEFE_1) FD Format Position */
#define CAN_TXEFE_1_FDF_Msk                   (_UINT32_(0x1) << CAN_TXEFE_1_FDF_Pos)               /* (CAN_TXEFE_1) FD Format Mask */
#define CAN_TXEFE_1_FDF(value)                (CAN_TXEFE_1_FDF_Msk & (_UINT32_(value) << CAN_TXEFE_1_FDF_Pos)) /* Assignment of value for FDF in the CAN_TXEFE_1 register */
#define CAN_TXEFE_1_ET_Pos                    _UINT32_(22)                                         /* (CAN_TXEFE_1) Event Type Position */
#define CAN_TXEFE_1_ET_Msk                    (_UINT32_(0x3) << CAN_TXEFE_1_ET_Pos)                /* (CAN_TXEFE_1) Event Type Mask */
#define CAN_TXEFE_1_ET(value)                 (CAN_TXEFE_1_ET_Msk & (_UINT32_(value) << CAN_TXEFE_1_ET_Pos)) /* Assignment of value for ET in the CAN_TXEFE_1 register */
#define   CAN_TXEFE_1_ET_TXE_Val              _UINT32_(0x1)                                        /* (CAN_TXEFE_1) Tx event  */
#define   CAN_TXEFE_1_ET_TXC_Val              _UINT32_(0x2)                                        /* (CAN_TXEFE_1) Transmission in spite of cancellation  */
#define CAN_TXEFE_1_ET_TXE                    (CAN_TXEFE_1_ET_TXE_Val << CAN_TXEFE_1_ET_Pos)       /* (CAN_TXEFE_1) Tx event Position */
#define CAN_TXEFE_1_ET_TXC                    (CAN_TXEFE_1_ET_TXC_Val << CAN_TXEFE_1_ET_Pos)       /* (CAN_TXEFE_1) Transmission in spite of cancellation Position */
#define CAN_TXEFE_1_MM_Pos                    _UINT32_(24)                                         /* (CAN_TXEFE_1) Message Marker Position */
#define CAN_TXEFE_1_MM_Msk                    (_UINT32_(0xFF) << CAN_TXEFE_1_MM_Pos)               /* (CAN_TXEFE_1) Message Marker Mask */
#define CAN_TXEFE_1_MM(value)                 (CAN_TXEFE_1_MM_Msk & (_UINT32_(value) << CAN_TXEFE_1_MM_Pos)) /* Assignment of value for MM in the CAN_TXEFE_1 register */
#define CAN_TXEFE_1_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXEFE_1) Register Mask  */


/* -------- CAN_SIDFE_0 : (CAN Offset: 0x00) (R/W 32) Standard Message ID Filter Element 0 -------- */
#define CAN_SIDFE_0_SFID2_Pos                 _UINT32_(0)                                          /* (CAN_SIDFE_0) Standard Filter ID 2 Position */
#define CAN_SIDFE_0_SFID2_Msk                 (_UINT32_(0x7FF) << CAN_SIDFE_0_SFID2_Pos)           /* (CAN_SIDFE_0) Standard Filter ID 2 Mask */
#define CAN_SIDFE_0_SFID2(value)              (CAN_SIDFE_0_SFID2_Msk & (_UINT32_(value) << CAN_SIDFE_0_SFID2_Pos)) /* Assignment of value for SFID2 in the CAN_SIDFE_0 register */
#define CAN_SIDFE_0_SFID1_Pos                 _UINT32_(16)                                         /* (CAN_SIDFE_0) Standard Filter ID 1 Position */
#define CAN_SIDFE_0_SFID1_Msk                 (_UINT32_(0x7FF) << CAN_SIDFE_0_SFID1_Pos)           /* (CAN_SIDFE_0) Standard Filter ID 1 Mask */
#define CAN_SIDFE_0_SFID1(value)              (CAN_SIDFE_0_SFID1_Msk & (_UINT32_(value) << CAN_SIDFE_0_SFID1_Pos)) /* Assignment of value for SFID1 in the CAN_SIDFE_0 register */
#define CAN_SIDFE_0_SFEC_Pos                  _UINT32_(27)                                         /* (CAN_SIDFE_0) Standard Filter Element Configuration Position */
#define CAN_SIDFE_0_SFEC_Msk                  (_UINT32_(0x7) << CAN_SIDFE_0_SFEC_Pos)              /* (CAN_SIDFE_0) Standard Filter Element Configuration Mask */
#define CAN_SIDFE_0_SFEC(value)               (CAN_SIDFE_0_SFEC_Msk & (_UINT32_(value) << CAN_SIDFE_0_SFEC_Pos)) /* Assignment of value for SFEC in the CAN_SIDFE_0 register */
#define   CAN_SIDFE_0_SFEC_DISABLE_Val        _UINT32_(0x0)                                        /* (CAN_SIDFE_0) Disable filter element  */
#define   CAN_SIDFE_0_SFEC_STF0M_Val          _UINT32_(0x1)                                        /* (CAN_SIDFE_0) Store in Rx FIFO 0 if filter match  */
#define   CAN_SIDFE_0_SFEC_STF1M_Val          _UINT32_(0x2)                                        /* (CAN_SIDFE_0) Store in Rx FIFO 1 if filter match  */
#define   CAN_SIDFE_0_SFEC_REJECT_Val         _UINT32_(0x3)                                        /* (CAN_SIDFE_0) Reject ID if filter match  */
#define   CAN_SIDFE_0_SFEC_PRIORITY_Val       _UINT32_(0x4)                                        /* (CAN_SIDFE_0) Set priority if filter match  */
#define   CAN_SIDFE_0_SFEC_PRIF0M_Val         _UINT32_(0x5)                                        /* (CAN_SIDFE_0) Set priority and store in FIFO 0 if filter match  */
#define   CAN_SIDFE_0_SFEC_PRIF1M_Val         _UINT32_(0x6)                                        /* (CAN_SIDFE_0) Set priority and store in FIFO 1 if filter match  */
#define   CAN_SIDFE_0_SFEC_STRXBUF_Val        _UINT32_(0x7)                                        /* (CAN_SIDFE_0) Store into Rx Buffer  */
#define CAN_SIDFE_0_SFEC_DISABLE              (CAN_SIDFE_0_SFEC_DISABLE_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Disable filter element Position */
#define CAN_SIDFE_0_SFEC_STF0M                (CAN_SIDFE_0_SFEC_STF0M_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Store in Rx FIFO 0 if filter match Position */
#define CAN_SIDFE_0_SFEC_STF1M                (CAN_SIDFE_0_SFEC_STF1M_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Store in Rx FIFO 1 if filter match Position */
#define CAN_SIDFE_0_SFEC_REJECT               (CAN_SIDFE_0_SFEC_REJECT_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Reject ID if filter match Position */
#define CAN_SIDFE_0_SFEC_PRIORITY             (CAN_SIDFE_0_SFEC_PRIORITY_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Set priority if filter match Position */
#define CAN_SIDFE_0_SFEC_PRIF0M               (CAN_SIDFE_0_SFEC_PRIF0M_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Set priority and store in FIFO 0 if filter match Position */
#define CAN_SIDFE_0_SFEC_PRIF1M               (CAN_SIDFE_0_SFEC_PRIF1M_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Set priority and store in FIFO 1 if filter match Position */
#define CAN_SIDFE_0_SFEC_STRXBUF              (CAN_SIDFE_0_SFEC_STRXBUF_Val << CAN_SIDFE_0_SFEC_Pos) /* (CAN_SIDFE_0) Store into Rx Buffer Position */
#define CAN_SIDFE_0_SFT_Pos                   _UINT32_(30)                                         /* (CAN_SIDFE_0) Standard Filter Type Position */
#define CAN_SIDFE_0_SFT_Msk                   (_UINT32_(0x3) << CAN_SIDFE_0_SFT_Pos)               /* (CAN_SIDFE_0) Standard Filter Type Mask */
#define CAN_SIDFE_0_SFT(value)                (CAN_SIDFE_0_SFT_Msk & (_UINT32_(value) << CAN_SIDFE_0_SFT_Pos)) /* Assignment of value for SFT in the CAN_SIDFE_0 register */
#define   CAN_SIDFE_0_SFT_RANGE_Val           _UINT32_(0x0)                                        /* (CAN_SIDFE_0) Range filter from SFID1 to SFID2  */
#define   CAN_SIDFE_0_SFT_DUAL_Val            _UINT32_(0x1)                                        /* (CAN_SIDFE_0) Dual ID filter for SFID1 or SFID2  */
#define   CAN_SIDFE_0_SFT_CLASSIC_Val         _UINT32_(0x2)                                        /* (CAN_SIDFE_0) Classic filter  */
#define CAN_SIDFE_0_SFT_RANGE                 (CAN_SIDFE_0_SFT_RANGE_Val << CAN_SIDFE_0_SFT_Pos)   /* (CAN_SIDFE_0) Range filter from SFID1 to SFID2 Position */
#define CAN_SIDFE_0_SFT_DUAL                  (CAN_SIDFE_0_SFT_DUAL_Val << CAN_SIDFE_0_SFT_Pos)    /* (CAN_SIDFE_0) Dual ID filter for SFID1 or SFID2 Position */
#define CAN_SIDFE_0_SFT_CLASSIC               (CAN_SIDFE_0_SFT_CLASSIC_Val << CAN_SIDFE_0_SFT_Pos) /* (CAN_SIDFE_0) Classic filter Position */
#define CAN_SIDFE_0_Msk                       _UINT32_(0xFFFF07FF)                                 /* (CAN_SIDFE_0) Register Mask  */


/* -------- CAN_XIDFE_0 : (CAN Offset: 0x00) (R/W 32) Extended Message ID Filter Element 0 -------- */
#define CAN_XIDFE_0_EFID1_Pos                 _UINT32_(0)                                          /* (CAN_XIDFE_0) Extended Filter ID 1 Position */
#define CAN_XIDFE_0_EFID1_Msk                 (_UINT32_(0x1FFFFFFF) << CAN_XIDFE_0_EFID1_Pos)      /* (CAN_XIDFE_0) Extended Filter ID 1 Mask */
#define CAN_XIDFE_0_EFID1(value)              (CAN_XIDFE_0_EFID1_Msk & (_UINT32_(value) << CAN_XIDFE_0_EFID1_Pos)) /* Assignment of value for EFID1 in the CAN_XIDFE_0 register */
#define CAN_XIDFE_0_EFEC_Pos                  _UINT32_(29)                                         /* (CAN_XIDFE_0) Extended Filter Element Configuration Position */
#define CAN_XIDFE_0_EFEC_Msk                  (_UINT32_(0x7) << CAN_XIDFE_0_EFEC_Pos)              /* (CAN_XIDFE_0) Extended Filter Element Configuration Mask */
#define CAN_XIDFE_0_EFEC(value)               (CAN_XIDFE_0_EFEC_Msk & (_UINT32_(value) << CAN_XIDFE_0_EFEC_Pos)) /* Assignment of value for EFEC in the CAN_XIDFE_0 register */
#define   CAN_XIDFE_0_EFEC_DISABLE_Val        _UINT32_(0x0)                                        /* (CAN_XIDFE_0) Disable filter element  */
#define   CAN_XIDFE_0_EFEC_STF0M_Val          _UINT32_(0x1)                                        /* (CAN_XIDFE_0) Store in Rx FIFO 0 if filter match  */
#define   CAN_XIDFE_0_EFEC_STF1M_Val          _UINT32_(0x2)                                        /* (CAN_XIDFE_0) Store in Rx FIFO 1 if filter match  */
#define   CAN_XIDFE_0_EFEC_REJECT_Val         _UINT32_(0x3)                                        /* (CAN_XIDFE_0) Reject ID if filter match  */
#define   CAN_XIDFE_0_EFEC_PRIORITY_Val       _UINT32_(0x4)                                        /* (CAN_XIDFE_0) Set priority if filter match  */
#define   CAN_XIDFE_0_EFEC_PRIF0M_Val         _UINT32_(0x5)                                        /* (CAN_XIDFE_0) Set priority and store in FIFO 0 if filter match  */
#define   CAN_XIDFE_0_EFEC_PRIF1M_Val         _UINT32_(0x6)                                        /* (CAN_XIDFE_0) Set priority and store in FIFO 1 if filter match  */
#define   CAN_XIDFE_0_EFEC_STRXBUF_Val        _UINT32_(0x7)                                        /* (CAN_XIDFE_0) Store into Rx Buffer  */
#define CAN_XIDFE_0_EFEC_DISABLE              (CAN_XIDFE_0_EFEC_DISABLE_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Disable filter element Position */
#define CAN_XIDFE_0_EFEC_STF0M                (CAN_XIDFE_0_EFEC_STF0M_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Store in Rx FIFO 0 if filter match Position */
#define CAN_XIDFE_0_EFEC_STF1M                (CAN_XIDFE_0_EFEC_STF1M_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Store in Rx FIFO 1 if filter match Position */
#define CAN_XIDFE_0_EFEC_REJECT               (CAN_XIDFE_0_EFEC_REJECT_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Reject ID if filter match Position */
#define CAN_XIDFE_0_EFEC_PRIORITY             (CAN_XIDFE_0_EFEC_PRIORITY_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Set priority if filter match Position */
#define CAN_XIDFE_0_EFEC_PRIF0M               (CAN_XIDFE_0_EFEC_PRIF0M_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Set priority and store in FIFO 0 if filter match Position */
#define CAN_XIDFE_0_EFEC_PRIF1M               (CAN_XIDFE_0_EFEC_PRIF1M_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Set priority and store in FIFO 1 if filter match Position */
#define CAN_XIDFE_0_EFEC_STRXBUF              (CAN_XIDFE_0_EFEC_STRXBUF_Val << CAN_XIDFE_0_EFEC_Pos) /* (CAN_XIDFE_0) Store into Rx Buffer Position */
#define CAN_XIDFE_0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CAN_XIDFE_0) Register Mask  */


/* -------- CAN_XIDFE_1 : (CAN Offset: 0x04) (R/W 32) Extended Message ID Filter Element 1 -------- */
#define CAN_XIDFE_1_EFID2_Pos                 _UINT32_(0)                                          /* (CAN_XIDFE_1) Extended Filter ID 2 Position */
#define CAN_XIDFE_1_EFID2_Msk                 (_UINT32_(0x1FFFFFFF) << CAN_XIDFE_1_EFID2_Pos)      /* (CAN_XIDFE_1) Extended Filter ID 2 Mask */
#define CAN_XIDFE_1_EFID2(value)              (CAN_XIDFE_1_EFID2_Msk & (_UINT32_(value) << CAN_XIDFE_1_EFID2_Pos)) /* Assignment of value for EFID2 in the CAN_XIDFE_1 register */
#define CAN_XIDFE_1_EFT_Pos                   _UINT32_(30)                                         /* (CAN_XIDFE_1) Extended Filter Type Position */
#define CAN_XIDFE_1_EFT_Msk                   (_UINT32_(0x3) << CAN_XIDFE_1_EFT_Pos)               /* (CAN_XIDFE_1) Extended Filter Type Mask */
#define CAN_XIDFE_1_EFT(value)                (CAN_XIDFE_1_EFT_Msk & (_UINT32_(value) << CAN_XIDFE_1_EFT_Pos)) /* Assignment of value for EFT in the CAN_XIDFE_1 register */
#define   CAN_XIDFE_1_EFT_RANGEM_Val          _UINT32_(0x0)                                        /* (CAN_XIDFE_1) Range filter from EFID1 to EFID2  */
#define   CAN_XIDFE_1_EFT_DUAL_Val            _UINT32_(0x1)                                        /* (CAN_XIDFE_1) Dual ID filter for EFID1 or EFID2  */
#define   CAN_XIDFE_1_EFT_CLASSIC_Val         _UINT32_(0x2)                                        /* (CAN_XIDFE_1) Classic filter  */
#define   CAN_XIDFE_1_EFT_RANGE_Val           _UINT32_(0x3)                                        /* (CAN_XIDFE_1) Range filter from EFID1 to EFID2 with no XIDAM mask  */
#define CAN_XIDFE_1_EFT_RANGEM                (CAN_XIDFE_1_EFT_RANGEM_Val << CAN_XIDFE_1_EFT_Pos)  /* (CAN_XIDFE_1) Range filter from EFID1 to EFID2 Position */
#define CAN_XIDFE_1_EFT_DUAL                  (CAN_XIDFE_1_EFT_DUAL_Val << CAN_XIDFE_1_EFT_Pos)    /* (CAN_XIDFE_1) Dual ID filter for EFID1 or EFID2 Position */
#define CAN_XIDFE_1_EFT_CLASSIC               (CAN_XIDFE_1_EFT_CLASSIC_Val << CAN_XIDFE_1_EFT_Pos) /* (CAN_XIDFE_1) Classic filter Position */
#define CAN_XIDFE_1_EFT_RANGE                 (CAN_XIDFE_1_EFT_RANGE_Val << CAN_XIDFE_1_EFT_Pos)   /* (CAN_XIDFE_1) Range filter from EFID1 to EFID2 with no XIDAM mask Position */
#define CAN_XIDFE_1_Msk                       _UINT32_(0xDFFFFFFF)                                 /* (CAN_XIDFE_1) Register Mask  */


/* -------- CAN_CREL : (CAN Offset: 0x00) ( R/ 32) Core Release -------- */
#define CAN_CREL_RESETVALUE                   _UINT32_(0x32100000)                                 /*  (CAN_CREL) Core Release  Reset Value */

#define CAN_CREL_SUBSTEP_Pos                  _UINT32_(20)                                         /* (CAN_CREL) Sub-step of Core Release Position */
#define CAN_CREL_SUBSTEP_Msk                  (_UINT32_(0xF) << CAN_CREL_SUBSTEP_Pos)              /* (CAN_CREL) Sub-step of Core Release Mask */
#define CAN_CREL_SUBSTEP(value)               (CAN_CREL_SUBSTEP_Msk & (_UINT32_(value) << CAN_CREL_SUBSTEP_Pos)) /* Assignment of value for SUBSTEP in the CAN_CREL register */
#define CAN_CREL_STEP_Pos                     _UINT32_(24)                                         /* (CAN_CREL) Step of Core Release Position */
#define CAN_CREL_STEP_Msk                     (_UINT32_(0xF) << CAN_CREL_STEP_Pos)                 /* (CAN_CREL) Step of Core Release Mask */
#define CAN_CREL_STEP(value)                  (CAN_CREL_STEP_Msk & (_UINT32_(value) << CAN_CREL_STEP_Pos)) /* Assignment of value for STEP in the CAN_CREL register */
#define CAN_CREL_REL_Pos                      _UINT32_(28)                                         /* (CAN_CREL) Core Release Position */
#define CAN_CREL_REL_Msk                      (_UINT32_(0xF) << CAN_CREL_REL_Pos)                  /* (CAN_CREL) Core Release Mask */
#define CAN_CREL_REL(value)                   (CAN_CREL_REL_Msk & (_UINT32_(value) << CAN_CREL_REL_Pos)) /* Assignment of value for REL in the CAN_CREL register */
#define CAN_CREL_Msk                          _UINT32_(0xFFF00000)                                 /* (CAN_CREL) Register Mask  */


/* -------- CAN_ENDN : (CAN Offset: 0x04) ( R/ 32) Endian -------- */
#define CAN_ENDN_RESETVALUE                   _UINT32_(0x87654321)                                 /*  (CAN_ENDN) Endian  Reset Value */

#define CAN_ENDN_ETV_Pos                      _UINT32_(0)                                          /* (CAN_ENDN) Endianness Test Value Position */
#define CAN_ENDN_ETV_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_ENDN_ETV_Pos)           /* (CAN_ENDN) Endianness Test Value Mask */
#define CAN_ENDN_ETV(value)                   (CAN_ENDN_ETV_Msk & (_UINT32_(value) << CAN_ENDN_ETV_Pos)) /* Assignment of value for ETV in the CAN_ENDN register */
#define CAN_ENDN_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CAN_ENDN) Register Mask  */


/* -------- CAN_MRCFG : (CAN Offset: 0x08) (R/W 32) Message RAM Configuration -------- */
#define CAN_MRCFG_RESETVALUE                  _UINT32_(0x02)                                       /*  (CAN_MRCFG) Message RAM Configuration  Reset Value */

#define CAN_MRCFG_QOS_Pos                     _UINT32_(0)                                          /* (CAN_MRCFG) Quality of Service Position */
#define CAN_MRCFG_QOS_Msk                     (_UINT32_(0x3) << CAN_MRCFG_QOS_Pos)                 /* (CAN_MRCFG) Quality of Service Mask */
#define CAN_MRCFG_QOS(value)                  (CAN_MRCFG_QOS_Msk & (_UINT32_(value) << CAN_MRCFG_QOS_Pos)) /* Assignment of value for QOS in the CAN_MRCFG register */
#define   CAN_MRCFG_QOS_DISABLE_Val           _UINT32_(0x0)                                        /* (CAN_MRCFG) Background (no sensitive operation)  */
#define   CAN_MRCFG_QOS_LOW_Val               _UINT32_(0x1)                                        /* (CAN_MRCFG) Sensitive Bandwidth  */
#define   CAN_MRCFG_QOS_MEDIUM_Val            _UINT32_(0x2)                                        /* (CAN_MRCFG) Sensitive Latency  */
#define   CAN_MRCFG_QOS_HIGH_Val              _UINT32_(0x3)                                        /* (CAN_MRCFG) Critical Latency  */
#define CAN_MRCFG_QOS_DISABLE                 (CAN_MRCFG_QOS_DISABLE_Val << CAN_MRCFG_QOS_Pos)     /* (CAN_MRCFG) Background (no sensitive operation) Position */
#define CAN_MRCFG_QOS_LOW                     (CAN_MRCFG_QOS_LOW_Val << CAN_MRCFG_QOS_Pos)         /* (CAN_MRCFG) Sensitive Bandwidth Position */
#define CAN_MRCFG_QOS_MEDIUM                  (CAN_MRCFG_QOS_MEDIUM_Val << CAN_MRCFG_QOS_Pos)      /* (CAN_MRCFG) Sensitive Latency Position */
#define CAN_MRCFG_QOS_HIGH                    (CAN_MRCFG_QOS_HIGH_Val << CAN_MRCFG_QOS_Pos)        /* (CAN_MRCFG) Critical Latency Position */
#define CAN_MRCFG_Msk                         _UINT32_(0x00000003)                                 /* (CAN_MRCFG) Register Mask  */


/* -------- CAN_DBTP : (CAN Offset: 0x0C) (R/W 32) Fast Bit Timing and Prescaler -------- */
#define CAN_DBTP_RESETVALUE                   _UINT32_(0xA33)                                      /*  (CAN_DBTP) Fast Bit Timing and Prescaler  Reset Value */

#define CAN_DBTP_DSJW_Pos                     _UINT32_(0)                                          /* (CAN_DBTP) Data (Re)Synchronization Jump Width Position */
#define CAN_DBTP_DSJW_Msk                     (_UINT32_(0xF) << CAN_DBTP_DSJW_Pos)                 /* (CAN_DBTP) Data (Re)Synchronization Jump Width Mask */
#define CAN_DBTP_DSJW(value)                  (CAN_DBTP_DSJW_Msk & (_UINT32_(value) << CAN_DBTP_DSJW_Pos)) /* Assignment of value for DSJW in the CAN_DBTP register */
#define CAN_DBTP_DTSEG2_Pos                   _UINT32_(4)                                          /* (CAN_DBTP) Data time segment after sample point Position */
#define CAN_DBTP_DTSEG2_Msk                   (_UINT32_(0xF) << CAN_DBTP_DTSEG2_Pos)               /* (CAN_DBTP) Data time segment after sample point Mask */
#define CAN_DBTP_DTSEG2(value)                (CAN_DBTP_DTSEG2_Msk & (_UINT32_(value) << CAN_DBTP_DTSEG2_Pos)) /* Assignment of value for DTSEG2 in the CAN_DBTP register */
#define CAN_DBTP_DTSEG1_Pos                   _UINT32_(8)                                          /* (CAN_DBTP) Data time segment before sample point Position */
#define CAN_DBTP_DTSEG1_Msk                   (_UINT32_(0x1F) << CAN_DBTP_DTSEG1_Pos)              /* (CAN_DBTP) Data time segment before sample point Mask */
#define CAN_DBTP_DTSEG1(value)                (CAN_DBTP_DTSEG1_Msk & (_UINT32_(value) << CAN_DBTP_DTSEG1_Pos)) /* Assignment of value for DTSEG1 in the CAN_DBTP register */
#define CAN_DBTP_DBRP_Pos                     _UINT32_(16)                                         /* (CAN_DBTP) Data Baud Rate Prescaler Position */
#define CAN_DBTP_DBRP_Msk                     (_UINT32_(0x1F) << CAN_DBTP_DBRP_Pos)                /* (CAN_DBTP) Data Baud Rate Prescaler Mask */
#define CAN_DBTP_DBRP(value)                  (CAN_DBTP_DBRP_Msk & (_UINT32_(value) << CAN_DBTP_DBRP_Pos)) /* Assignment of value for DBRP in the CAN_DBTP register */
#define CAN_DBTP_TDC_Pos                      _UINT32_(23)                                         /* (CAN_DBTP) Tranceiver Delay Compensation Position */
#define CAN_DBTP_TDC_Msk                      (_UINT32_(0x1) << CAN_DBTP_TDC_Pos)                  /* (CAN_DBTP) Tranceiver Delay Compensation Mask */
#define CAN_DBTP_TDC(value)                   (CAN_DBTP_TDC_Msk & (_UINT32_(value) << CAN_DBTP_TDC_Pos)) /* Assignment of value for TDC in the CAN_DBTP register */
#define CAN_DBTP_Msk                          _UINT32_(0x009F1FFF)                                 /* (CAN_DBTP) Register Mask  */


/* -------- CAN_TEST : (CAN Offset: 0x10) (R/W 32) Test -------- */
#define CAN_TEST_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_TEST) Test  Reset Value */

#define CAN_TEST_LBCK_Pos                     _UINT32_(4)                                          /* (CAN_TEST) Loop Back Mode Position */
#define CAN_TEST_LBCK_Msk                     (_UINT32_(0x1) << CAN_TEST_LBCK_Pos)                 /* (CAN_TEST) Loop Back Mode Mask */
#define CAN_TEST_LBCK(value)                  (CAN_TEST_LBCK_Msk & (_UINT32_(value) << CAN_TEST_LBCK_Pos)) /* Assignment of value for LBCK in the CAN_TEST register */
#define CAN_TEST_TX_Pos                       _UINT32_(5)                                          /* (CAN_TEST) Control of Transmit Pin Position */
#define CAN_TEST_TX_Msk                       (_UINT32_(0x3) << CAN_TEST_TX_Pos)                   /* (CAN_TEST) Control of Transmit Pin Mask */
#define CAN_TEST_TX(value)                    (CAN_TEST_TX_Msk & (_UINT32_(value) << CAN_TEST_TX_Pos)) /* Assignment of value for TX in the CAN_TEST register */
#define   CAN_TEST_TX_CORE_Val                _UINT32_(0x0)                                        /* (CAN_TEST) TX controlled by CAN core  */
#define   CAN_TEST_TX_SAMPLE_Val              _UINT32_(0x1)                                        /* (CAN_TEST) TX monitoring sample point  */
#define   CAN_TEST_TX_DOMINANT_Val            _UINT32_(0x2)                                        /* (CAN_TEST) Dominant (0) level at pin CAN_TX  */
#define   CAN_TEST_TX_RECESSIVE_Val           _UINT32_(0x3)                                        /* (CAN_TEST) Recessive (1) level at pin CAN_TX  */
#define CAN_TEST_TX_CORE                      (CAN_TEST_TX_CORE_Val << CAN_TEST_TX_Pos)            /* (CAN_TEST) TX controlled by CAN core Position */
#define CAN_TEST_TX_SAMPLE                    (CAN_TEST_TX_SAMPLE_Val << CAN_TEST_TX_Pos)          /* (CAN_TEST) TX monitoring sample point Position */
#define CAN_TEST_TX_DOMINANT                  (CAN_TEST_TX_DOMINANT_Val << CAN_TEST_TX_Pos)        /* (CAN_TEST) Dominant (0) level at pin CAN_TX Position */
#define CAN_TEST_TX_RECESSIVE                 (CAN_TEST_TX_RECESSIVE_Val << CAN_TEST_TX_Pos)       /* (CAN_TEST) Recessive (1) level at pin CAN_TX Position */
#define CAN_TEST_RX_Pos                       _UINT32_(7)                                          /* (CAN_TEST) Receive Pin Position */
#define CAN_TEST_RX_Msk                       (_UINT32_(0x1) << CAN_TEST_RX_Pos)                   /* (CAN_TEST) Receive Pin Mask */
#define CAN_TEST_RX(value)                    (CAN_TEST_RX_Msk & (_UINT32_(value) << CAN_TEST_RX_Pos)) /* Assignment of value for RX in the CAN_TEST register */
#define CAN_TEST_Msk                          _UINT32_(0x000000F0)                                 /* (CAN_TEST) Register Mask  */


/* -------- CAN_RWD : (CAN Offset: 0x14) (R/W 32) RAM Watchdog -------- */
#define CAN_RWD_RESETVALUE                    _UINT32_(0x00)                                       /*  (CAN_RWD) RAM Watchdog  Reset Value */

#define CAN_RWD_WDC_Pos                       _UINT32_(0)                                          /* (CAN_RWD) Watchdog Configuration Position */
#define CAN_RWD_WDC_Msk                       (_UINT32_(0xFF) << CAN_RWD_WDC_Pos)                  /* (CAN_RWD) Watchdog Configuration Mask */
#define CAN_RWD_WDC(value)                    (CAN_RWD_WDC_Msk & (_UINT32_(value) << CAN_RWD_WDC_Pos)) /* Assignment of value for WDC in the CAN_RWD register */
#define CAN_RWD_WDV_Pos                       _UINT32_(8)                                          /* (CAN_RWD) Watchdog Value Position */
#define CAN_RWD_WDV_Msk                       (_UINT32_(0xFF) << CAN_RWD_WDV_Pos)                  /* (CAN_RWD) Watchdog Value Mask */
#define CAN_RWD_WDV(value)                    (CAN_RWD_WDV_Msk & (_UINT32_(value) << CAN_RWD_WDV_Pos)) /* Assignment of value for WDV in the CAN_RWD register */
#define CAN_RWD_Msk                           _UINT32_(0x0000FFFF)                                 /* (CAN_RWD) Register Mask  */


/* -------- CAN_CCCR : (CAN Offset: 0x18) (R/W 32) CC Control -------- */
#define CAN_CCCR_RESETVALUE                   _UINT32_(0x01)                                       /*  (CAN_CCCR) CC Control  Reset Value */

#define CAN_CCCR_INIT_Pos                     _UINT32_(0)                                          /* (CAN_CCCR) Initialization Position */
#define CAN_CCCR_INIT_Msk                     (_UINT32_(0x1) << CAN_CCCR_INIT_Pos)                 /* (CAN_CCCR) Initialization Mask */
#define CAN_CCCR_INIT(value)                  (CAN_CCCR_INIT_Msk & (_UINT32_(value) << CAN_CCCR_INIT_Pos)) /* Assignment of value for INIT in the CAN_CCCR register */
#define CAN_CCCR_CCE_Pos                      _UINT32_(1)                                          /* (CAN_CCCR) Configuration Change Enable Position */
#define CAN_CCCR_CCE_Msk                      (_UINT32_(0x1) << CAN_CCCR_CCE_Pos)                  /* (CAN_CCCR) Configuration Change Enable Mask */
#define CAN_CCCR_CCE(value)                   (CAN_CCCR_CCE_Msk & (_UINT32_(value) << CAN_CCCR_CCE_Pos)) /* Assignment of value for CCE in the CAN_CCCR register */
#define CAN_CCCR_ASM_Pos                      _UINT32_(2)                                          /* (CAN_CCCR) ASM Restricted Operation Mode Position */
#define CAN_CCCR_ASM_Msk                      (_UINT32_(0x1) << CAN_CCCR_ASM_Pos)                  /* (CAN_CCCR) ASM Restricted Operation Mode Mask */
#define CAN_CCCR_ASM(value)                   (CAN_CCCR_ASM_Msk & (_UINT32_(value) << CAN_CCCR_ASM_Pos)) /* Assignment of value for ASM in the CAN_CCCR register */
#define CAN_CCCR_CSA_Pos                      _UINT32_(3)                                          /* (CAN_CCCR) Clock Stop Acknowledge Position */
#define CAN_CCCR_CSA_Msk                      (_UINT32_(0x1) << CAN_CCCR_CSA_Pos)                  /* (CAN_CCCR) Clock Stop Acknowledge Mask */
#define CAN_CCCR_CSA(value)                   (CAN_CCCR_CSA_Msk & (_UINT32_(value) << CAN_CCCR_CSA_Pos)) /* Assignment of value for CSA in the CAN_CCCR register */
#define CAN_CCCR_CSR_Pos                      _UINT32_(4)                                          /* (CAN_CCCR) Clock Stop Request Position */
#define CAN_CCCR_CSR_Msk                      (_UINT32_(0x1) << CAN_CCCR_CSR_Pos)                  /* (CAN_CCCR) Clock Stop Request Mask */
#define CAN_CCCR_CSR(value)                   (CAN_CCCR_CSR_Msk & (_UINT32_(value) << CAN_CCCR_CSR_Pos)) /* Assignment of value for CSR in the CAN_CCCR register */
#define CAN_CCCR_MON_Pos                      _UINT32_(5)                                          /* (CAN_CCCR) Bus Monitoring Mode Position */
#define CAN_CCCR_MON_Msk                      (_UINT32_(0x1) << CAN_CCCR_MON_Pos)                  /* (CAN_CCCR) Bus Monitoring Mode Mask */
#define CAN_CCCR_MON(value)                   (CAN_CCCR_MON_Msk & (_UINT32_(value) << CAN_CCCR_MON_Pos)) /* Assignment of value for MON in the CAN_CCCR register */
#define CAN_CCCR_DAR_Pos                      _UINT32_(6)                                          /* (CAN_CCCR) Disable Automatic Retransmission Position */
#define CAN_CCCR_DAR_Msk                      (_UINT32_(0x1) << CAN_CCCR_DAR_Pos)                  /* (CAN_CCCR) Disable Automatic Retransmission Mask */
#define CAN_CCCR_DAR(value)                   (CAN_CCCR_DAR_Msk & (_UINT32_(value) << CAN_CCCR_DAR_Pos)) /* Assignment of value for DAR in the CAN_CCCR register */
#define CAN_CCCR_TEST_Pos                     _UINT32_(7)                                          /* (CAN_CCCR) Test Mode Enable Position */
#define CAN_CCCR_TEST_Msk                     (_UINT32_(0x1) << CAN_CCCR_TEST_Pos)                 /* (CAN_CCCR) Test Mode Enable Mask */
#define CAN_CCCR_TEST(value)                  (CAN_CCCR_TEST_Msk & (_UINT32_(value) << CAN_CCCR_TEST_Pos)) /* Assignment of value for TEST in the CAN_CCCR register */
#define CAN_CCCR_FDOE_Pos                     _UINT32_(8)                                          /* (CAN_CCCR) FD Operation Enable Position */
#define CAN_CCCR_FDOE_Msk                     (_UINT32_(0x1) << CAN_CCCR_FDOE_Pos)                 /* (CAN_CCCR) FD Operation Enable Mask */
#define CAN_CCCR_FDOE(value)                  (CAN_CCCR_FDOE_Msk & (_UINT32_(value) << CAN_CCCR_FDOE_Pos)) /* Assignment of value for FDOE in the CAN_CCCR register */
#define CAN_CCCR_BRSE_Pos                     _UINT32_(9)                                          /* (CAN_CCCR) Bit Rate Switch Enable Position */
#define CAN_CCCR_BRSE_Msk                     (_UINT32_(0x1) << CAN_CCCR_BRSE_Pos)                 /* (CAN_CCCR) Bit Rate Switch Enable Mask */
#define CAN_CCCR_BRSE(value)                  (CAN_CCCR_BRSE_Msk & (_UINT32_(value) << CAN_CCCR_BRSE_Pos)) /* Assignment of value for BRSE in the CAN_CCCR register */
#define CAN_CCCR_PXHD_Pos                     _UINT32_(12)                                         /* (CAN_CCCR) Protocol Exception Handling Disable Position */
#define CAN_CCCR_PXHD_Msk                     (_UINT32_(0x1) << CAN_CCCR_PXHD_Pos)                 /* (CAN_CCCR) Protocol Exception Handling Disable Mask */
#define CAN_CCCR_PXHD(value)                  (CAN_CCCR_PXHD_Msk & (_UINT32_(value) << CAN_CCCR_PXHD_Pos)) /* Assignment of value for PXHD in the CAN_CCCR register */
#define CAN_CCCR_EFBI_Pos                     _UINT32_(13)                                         /* (CAN_CCCR) Edge Filtering during Bus Integration Position */
#define CAN_CCCR_EFBI_Msk                     (_UINT32_(0x1) << CAN_CCCR_EFBI_Pos)                 /* (CAN_CCCR) Edge Filtering during Bus Integration Mask */
#define CAN_CCCR_EFBI(value)                  (CAN_CCCR_EFBI_Msk & (_UINT32_(value) << CAN_CCCR_EFBI_Pos)) /* Assignment of value for EFBI in the CAN_CCCR register */
#define CAN_CCCR_TXP_Pos                      _UINT32_(14)                                         /* (CAN_CCCR) Transmit Pause Position */
#define CAN_CCCR_TXP_Msk                      (_UINT32_(0x1) << CAN_CCCR_TXP_Pos)                  /* (CAN_CCCR) Transmit Pause Mask */
#define CAN_CCCR_TXP(value)                   (CAN_CCCR_TXP_Msk & (_UINT32_(value) << CAN_CCCR_TXP_Pos)) /* Assignment of value for TXP in the CAN_CCCR register */
#define CAN_CCCR_Msk                          _UINT32_(0x000073FF)                                 /* (CAN_CCCR) Register Mask  */


/* -------- CAN_NBTP : (CAN Offset: 0x1C) (R/W 32) Nominal Bit Timing and Prescaler -------- */
#define CAN_NBTP_RESETVALUE                   _UINT32_(0x6000A03)                                  /*  (CAN_NBTP) Nominal Bit Timing and Prescaler  Reset Value */

#define CAN_NBTP_NTSEG2_Pos                   _UINT32_(0)                                          /* (CAN_NBTP) Nominal Time segment after sample point Position */
#define CAN_NBTP_NTSEG2_Msk                   (_UINT32_(0x7F) << CAN_NBTP_NTSEG2_Pos)              /* (CAN_NBTP) Nominal Time segment after sample point Mask */
#define CAN_NBTP_NTSEG2(value)                (CAN_NBTP_NTSEG2_Msk & (_UINT32_(value) << CAN_NBTP_NTSEG2_Pos)) /* Assignment of value for NTSEG2 in the CAN_NBTP register */
#define CAN_NBTP_NTSEG1_Pos                   _UINT32_(8)                                          /* (CAN_NBTP) Nominal Time segment before sample point Position */
#define CAN_NBTP_NTSEG1_Msk                   (_UINT32_(0xFF) << CAN_NBTP_NTSEG1_Pos)              /* (CAN_NBTP) Nominal Time segment before sample point Mask */
#define CAN_NBTP_NTSEG1(value)                (CAN_NBTP_NTSEG1_Msk & (_UINT32_(value) << CAN_NBTP_NTSEG1_Pos)) /* Assignment of value for NTSEG1 in the CAN_NBTP register */
#define CAN_NBTP_NBRP_Pos                     _UINT32_(16)                                         /* (CAN_NBTP) Nominal Baud Rate Prescaler Position */
#define CAN_NBTP_NBRP_Msk                     (_UINT32_(0x1FF) << CAN_NBTP_NBRP_Pos)               /* (CAN_NBTP) Nominal Baud Rate Prescaler Mask */
#define CAN_NBTP_NBRP(value)                  (CAN_NBTP_NBRP_Msk & (_UINT32_(value) << CAN_NBTP_NBRP_Pos)) /* Assignment of value for NBRP in the CAN_NBTP register */
#define CAN_NBTP_NSJW_Pos                     _UINT32_(25)                                         /* (CAN_NBTP) Nominal (Re)Synchronization Jump Width Position */
#define CAN_NBTP_NSJW_Msk                     (_UINT32_(0x7F) << CAN_NBTP_NSJW_Pos)                /* (CAN_NBTP) Nominal (Re)Synchronization Jump Width Mask */
#define CAN_NBTP_NSJW(value)                  (CAN_NBTP_NSJW_Msk & (_UINT32_(value) << CAN_NBTP_NSJW_Pos)) /* Assignment of value for NSJW in the CAN_NBTP register */
#define CAN_NBTP_Msk                          _UINT32_(0xFFFFFF7F)                                 /* (CAN_NBTP) Register Mask  */


/* -------- CAN_TSCC : (CAN Offset: 0x20) (R/W 32) Timestamp Counter Configuration -------- */
#define CAN_TSCC_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_TSCC) Timestamp Counter Configuration  Reset Value */

#define CAN_TSCC_TSS_Pos                      _UINT32_(0)                                          /* (CAN_TSCC) Timestamp Select Position */
#define CAN_TSCC_TSS_Msk                      (_UINT32_(0x3) << CAN_TSCC_TSS_Pos)                  /* (CAN_TSCC) Timestamp Select Mask */
#define CAN_TSCC_TSS(value)                   (CAN_TSCC_TSS_Msk & (_UINT32_(value) << CAN_TSCC_TSS_Pos)) /* Assignment of value for TSS in the CAN_TSCC register */
#define   CAN_TSCC_TSS_ZERO_Val               _UINT32_(0x0)                                        /* (CAN_TSCC) Timestamp counter value always 0x0000  */
#define   CAN_TSCC_TSS_INC_Val                _UINT32_(0x1)                                        /* (CAN_TSCC) Timestamp counter value incremented by TCP  */
#define CAN_TSCC_TSS_ZERO                     (CAN_TSCC_TSS_ZERO_Val << CAN_TSCC_TSS_Pos)          /* (CAN_TSCC) Timestamp counter value always 0x0000 Position */
#define CAN_TSCC_TSS_INC                      (CAN_TSCC_TSS_INC_Val << CAN_TSCC_TSS_Pos)           /* (CAN_TSCC) Timestamp counter value incremented by TCP Position */
#define CAN_TSCC_TCP_Pos                      _UINT32_(16)                                         /* (CAN_TSCC) Timestamp Counter Prescaler Position */
#define CAN_TSCC_TCP_Msk                      (_UINT32_(0xF) << CAN_TSCC_TCP_Pos)                  /* (CAN_TSCC) Timestamp Counter Prescaler Mask */
#define CAN_TSCC_TCP(value)                   (CAN_TSCC_TCP_Msk & (_UINT32_(value) << CAN_TSCC_TCP_Pos)) /* Assignment of value for TCP in the CAN_TSCC register */
#define CAN_TSCC_Msk                          _UINT32_(0x000F0003)                                 /* (CAN_TSCC) Register Mask  */


/* -------- CAN_TSCV : (CAN Offset: 0x24) ( R/ 32) Timestamp Counter Value -------- */
#define CAN_TSCV_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_TSCV) Timestamp Counter Value  Reset Value */

#define CAN_TSCV_TSC_Pos                      _UINT32_(0)                                          /* (CAN_TSCV) Timestamp Counter Position */
#define CAN_TSCV_TSC_Msk                      (_UINT32_(0xFFFF) << CAN_TSCV_TSC_Pos)               /* (CAN_TSCV) Timestamp Counter Mask */
#define CAN_TSCV_TSC(value)                   (CAN_TSCV_TSC_Msk & (_UINT32_(value) << CAN_TSCV_TSC_Pos)) /* Assignment of value for TSC in the CAN_TSCV register */
#define CAN_TSCV_Msk                          _UINT32_(0x0000FFFF)                                 /* (CAN_TSCV) Register Mask  */


/* -------- CAN_TOCC : (CAN Offset: 0x28) (R/W 32) Timeout Counter Configuration -------- */
#define CAN_TOCC_RESETVALUE                   _UINT32_(0xFFFF0000)                                 /*  (CAN_TOCC) Timeout Counter Configuration  Reset Value */

#define CAN_TOCC_ETOC_Pos                     _UINT32_(0)                                          /* (CAN_TOCC) Enable Timeout Counter Position */
#define CAN_TOCC_ETOC_Msk                     (_UINT32_(0x1) << CAN_TOCC_ETOC_Pos)                 /* (CAN_TOCC) Enable Timeout Counter Mask */
#define CAN_TOCC_ETOC(value)                  (CAN_TOCC_ETOC_Msk & (_UINT32_(value) << CAN_TOCC_ETOC_Pos)) /* Assignment of value for ETOC in the CAN_TOCC register */
#define CAN_TOCC_TOS_Pos                      _UINT32_(1)                                          /* (CAN_TOCC) Timeout Select Position */
#define CAN_TOCC_TOS_Msk                      (_UINT32_(0x3) << CAN_TOCC_TOS_Pos)                  /* (CAN_TOCC) Timeout Select Mask */
#define CAN_TOCC_TOS(value)                   (CAN_TOCC_TOS_Msk & (_UINT32_(value) << CAN_TOCC_TOS_Pos)) /* Assignment of value for TOS in the CAN_TOCC register */
#define   CAN_TOCC_TOS_CONT_Val               _UINT32_(0x0)                                        /* (CAN_TOCC) Continuout operation  */
#define   CAN_TOCC_TOS_TXEF_Val               _UINT32_(0x1)                                        /* (CAN_TOCC) Timeout controlled by TX Event FIFO  */
#define   CAN_TOCC_TOS_RXF0_Val               _UINT32_(0x2)                                        /* (CAN_TOCC) Timeout controlled by Rx FIFO 0  */
#define   CAN_TOCC_TOS_RXF1_Val               _UINT32_(0x3)                                        /* (CAN_TOCC) Timeout controlled by Rx FIFO 1  */
#define CAN_TOCC_TOS_CONT                     (CAN_TOCC_TOS_CONT_Val << CAN_TOCC_TOS_Pos)          /* (CAN_TOCC) Continuout operation Position */
#define CAN_TOCC_TOS_TXEF                     (CAN_TOCC_TOS_TXEF_Val << CAN_TOCC_TOS_Pos)          /* (CAN_TOCC) Timeout controlled by TX Event FIFO Position */
#define CAN_TOCC_TOS_RXF0                     (CAN_TOCC_TOS_RXF0_Val << CAN_TOCC_TOS_Pos)          /* (CAN_TOCC) Timeout controlled by Rx FIFO 0 Position */
#define CAN_TOCC_TOS_RXF1                     (CAN_TOCC_TOS_RXF1_Val << CAN_TOCC_TOS_Pos)          /* (CAN_TOCC) Timeout controlled by Rx FIFO 1 Position */
#define CAN_TOCC_TOP_Pos                      _UINT32_(16)                                         /* (CAN_TOCC) Timeout Period Position */
#define CAN_TOCC_TOP_Msk                      (_UINT32_(0xFFFF) << CAN_TOCC_TOP_Pos)               /* (CAN_TOCC) Timeout Period Mask */
#define CAN_TOCC_TOP(value)                   (CAN_TOCC_TOP_Msk & (_UINT32_(value) << CAN_TOCC_TOP_Pos)) /* Assignment of value for TOP in the CAN_TOCC register */
#define CAN_TOCC_Msk                          _UINT32_(0xFFFF0007)                                 /* (CAN_TOCC) Register Mask  */


/* -------- CAN_TOCV : (CAN Offset: 0x2C) (R/W 32) Timeout Counter Value -------- */
#define CAN_TOCV_RESETVALUE                   _UINT32_(0xFFFF)                                     /*  (CAN_TOCV) Timeout Counter Value  Reset Value */

#define CAN_TOCV_TOC_Pos                      _UINT32_(0)                                          /* (CAN_TOCV) Timeout Counter Position */
#define CAN_TOCV_TOC_Msk                      (_UINT32_(0xFFFF) << CAN_TOCV_TOC_Pos)               /* (CAN_TOCV) Timeout Counter Mask */
#define CAN_TOCV_TOC(value)                   (CAN_TOCV_TOC_Msk & (_UINT32_(value) << CAN_TOCV_TOC_Pos)) /* Assignment of value for TOC in the CAN_TOCV register */
#define CAN_TOCV_Msk                          _UINT32_(0x0000FFFF)                                 /* (CAN_TOCV) Register Mask  */


/* -------- CAN_ECR : (CAN Offset: 0x40) ( R/ 32) Error Counter -------- */
#define CAN_ECR_RESETVALUE                    _UINT32_(0x00)                                       /*  (CAN_ECR) Error Counter  Reset Value */

#define CAN_ECR_TEC_Pos                       _UINT32_(0)                                          /* (CAN_ECR) Transmit Error Counter Position */
#define CAN_ECR_TEC_Msk                       (_UINT32_(0xFF) << CAN_ECR_TEC_Pos)                  /* (CAN_ECR) Transmit Error Counter Mask */
#define CAN_ECR_TEC(value)                    (CAN_ECR_TEC_Msk & (_UINT32_(value) << CAN_ECR_TEC_Pos)) /* Assignment of value for TEC in the CAN_ECR register */
#define CAN_ECR_REC_Pos                       _UINT32_(8)                                          /* (CAN_ECR) Receive Error Counter Position */
#define CAN_ECR_REC_Msk                       (_UINT32_(0x7F) << CAN_ECR_REC_Pos)                  /* (CAN_ECR) Receive Error Counter Mask */
#define CAN_ECR_REC(value)                    (CAN_ECR_REC_Msk & (_UINT32_(value) << CAN_ECR_REC_Pos)) /* Assignment of value for REC in the CAN_ECR register */
#define CAN_ECR_RP_Pos                        _UINT32_(15)                                         /* (CAN_ECR) Receive Error Passive Position */
#define CAN_ECR_RP_Msk                        (_UINT32_(0x1) << CAN_ECR_RP_Pos)                    /* (CAN_ECR) Receive Error Passive Mask */
#define CAN_ECR_RP(value)                     (CAN_ECR_RP_Msk & (_UINT32_(value) << CAN_ECR_RP_Pos)) /* Assignment of value for RP in the CAN_ECR register */
#define CAN_ECR_CEL_Pos                       _UINT32_(16)                                         /* (CAN_ECR) CAN Error Logging Position */
#define CAN_ECR_CEL_Msk                       (_UINT32_(0xFF) << CAN_ECR_CEL_Pos)                  /* (CAN_ECR) CAN Error Logging Mask */
#define CAN_ECR_CEL(value)                    (CAN_ECR_CEL_Msk & (_UINT32_(value) << CAN_ECR_CEL_Pos)) /* Assignment of value for CEL in the CAN_ECR register */
#define CAN_ECR_Msk                           _UINT32_(0x00FFFFFF)                                 /* (CAN_ECR) Register Mask  */


/* -------- CAN_PSR : (CAN Offset: 0x44) ( R/ 32) Protocol Status -------- */
#define CAN_PSR_RESETVALUE                    _UINT32_(0x707)                                      /*  (CAN_PSR) Protocol Status  Reset Value */

#define CAN_PSR_LEC_Pos                       _UINT32_(0)                                          /* (CAN_PSR) Last Error Code Position */
#define CAN_PSR_LEC_Msk                       (_UINT32_(0x7) << CAN_PSR_LEC_Pos)                   /* (CAN_PSR) Last Error Code Mask */
#define CAN_PSR_LEC(value)                    (CAN_PSR_LEC_Msk & (_UINT32_(value) << CAN_PSR_LEC_Pos)) /* Assignment of value for LEC in the CAN_PSR register */
#define   CAN_PSR_LEC_NONE_Val                _UINT32_(0x0)                                        /* (CAN_PSR) No Error  */
#define   CAN_PSR_LEC_STUFF_Val               _UINT32_(0x1)                                        /* (CAN_PSR) Stuff Error  */
#define   CAN_PSR_LEC_FORM_Val                _UINT32_(0x2)                                        /* (CAN_PSR) Form Error  */
#define   CAN_PSR_LEC_ACK_Val                 _UINT32_(0x3)                                        /* (CAN_PSR) Ack Error  */
#define   CAN_PSR_LEC_BIT1_Val                _UINT32_(0x4)                                        /* (CAN_PSR) Bit1 Error  */
#define   CAN_PSR_LEC_BIT0_Val                _UINT32_(0x5)                                        /* (CAN_PSR) Bit0 Error  */
#define   CAN_PSR_LEC_CRC_Val                 _UINT32_(0x6)                                        /* (CAN_PSR) CRC Error  */
#define   CAN_PSR_LEC_NC_Val                  _UINT32_(0x7)                                        /* (CAN_PSR) No Change  */
#define CAN_PSR_LEC_NONE                      (CAN_PSR_LEC_NONE_Val << CAN_PSR_LEC_Pos)            /* (CAN_PSR) No Error Position */
#define CAN_PSR_LEC_STUFF                     (CAN_PSR_LEC_STUFF_Val << CAN_PSR_LEC_Pos)           /* (CAN_PSR) Stuff Error Position */
#define CAN_PSR_LEC_FORM                      (CAN_PSR_LEC_FORM_Val << CAN_PSR_LEC_Pos)            /* (CAN_PSR) Form Error Position */
#define CAN_PSR_LEC_ACK                       (CAN_PSR_LEC_ACK_Val << CAN_PSR_LEC_Pos)             /* (CAN_PSR) Ack Error Position */
#define CAN_PSR_LEC_BIT1                      (CAN_PSR_LEC_BIT1_Val << CAN_PSR_LEC_Pos)            /* (CAN_PSR) Bit1 Error Position */
#define CAN_PSR_LEC_BIT0                      (CAN_PSR_LEC_BIT0_Val << CAN_PSR_LEC_Pos)            /* (CAN_PSR) Bit0 Error Position */
#define CAN_PSR_LEC_CRC                       (CAN_PSR_LEC_CRC_Val << CAN_PSR_LEC_Pos)             /* (CAN_PSR) CRC Error Position */
#define CAN_PSR_LEC_NC                        (CAN_PSR_LEC_NC_Val << CAN_PSR_LEC_Pos)              /* (CAN_PSR) No Change Position */
#define CAN_PSR_ACT_Pos                       _UINT32_(3)                                          /* (CAN_PSR) Activity Position */
#define CAN_PSR_ACT_Msk                       (_UINT32_(0x3) << CAN_PSR_ACT_Pos)                   /* (CAN_PSR) Activity Mask */
#define CAN_PSR_ACT(value)                    (CAN_PSR_ACT_Msk & (_UINT32_(value) << CAN_PSR_ACT_Pos)) /* Assignment of value for ACT in the CAN_PSR register */
#define   CAN_PSR_ACT_SYNC_Val                _UINT32_(0x0)                                        /* (CAN_PSR) Node is synchronizing on CAN communication  */
#define   CAN_PSR_ACT_IDLE_Val                _UINT32_(0x1)                                        /* (CAN_PSR) Node is neither receiver nor transmitter  */
#define   CAN_PSR_ACT_RX_Val                  _UINT32_(0x2)                                        /* (CAN_PSR) Node is operating as receiver  */
#define   CAN_PSR_ACT_TX_Val                  _UINT32_(0x3)                                        /* (CAN_PSR) Node is operating as transmitter  */
#define CAN_PSR_ACT_SYNC                      (CAN_PSR_ACT_SYNC_Val << CAN_PSR_ACT_Pos)            /* (CAN_PSR) Node is synchronizing on CAN communication Position */
#define CAN_PSR_ACT_IDLE                      (CAN_PSR_ACT_IDLE_Val << CAN_PSR_ACT_Pos)            /* (CAN_PSR) Node is neither receiver nor transmitter Position */
#define CAN_PSR_ACT_RX                        (CAN_PSR_ACT_RX_Val << CAN_PSR_ACT_Pos)              /* (CAN_PSR) Node is operating as receiver Position */
#define CAN_PSR_ACT_TX                        (CAN_PSR_ACT_TX_Val << CAN_PSR_ACT_Pos)              /* (CAN_PSR) Node is operating as transmitter Position */
#define CAN_PSR_EP_Pos                        _UINT32_(5)                                          /* (CAN_PSR) Error Passive Position */
#define CAN_PSR_EP_Msk                        (_UINT32_(0x1) << CAN_PSR_EP_Pos)                    /* (CAN_PSR) Error Passive Mask */
#define CAN_PSR_EP(value)                     (CAN_PSR_EP_Msk & (_UINT32_(value) << CAN_PSR_EP_Pos)) /* Assignment of value for EP in the CAN_PSR register */
#define CAN_PSR_EW_Pos                        _UINT32_(6)                                          /* (CAN_PSR) Warning Status Position */
#define CAN_PSR_EW_Msk                        (_UINT32_(0x1) << CAN_PSR_EW_Pos)                    /* (CAN_PSR) Warning Status Mask */
#define CAN_PSR_EW(value)                     (CAN_PSR_EW_Msk & (_UINT32_(value) << CAN_PSR_EW_Pos)) /* Assignment of value for EW in the CAN_PSR register */
#define CAN_PSR_BO_Pos                        _UINT32_(7)                                          /* (CAN_PSR) Bus_Off Status Position */
#define CAN_PSR_BO_Msk                        (_UINT32_(0x1) << CAN_PSR_BO_Pos)                    /* (CAN_PSR) Bus_Off Status Mask */
#define CAN_PSR_BO(value)                     (CAN_PSR_BO_Msk & (_UINT32_(value) << CAN_PSR_BO_Pos)) /* Assignment of value for BO in the CAN_PSR register */
#define CAN_PSR_DLEC_Pos                      _UINT32_(8)                                          /* (CAN_PSR) Data Phase Last Error Code Position */
#define CAN_PSR_DLEC_Msk                      (_UINT32_(0x7) << CAN_PSR_DLEC_Pos)                  /* (CAN_PSR) Data Phase Last Error Code Mask */
#define CAN_PSR_DLEC(value)                   (CAN_PSR_DLEC_Msk & (_UINT32_(value) << CAN_PSR_DLEC_Pos)) /* Assignment of value for DLEC in the CAN_PSR register */
#define   CAN_PSR_DLEC_NONE_Val               _UINT32_(0x0)                                        /* (CAN_PSR) No Error  */
#define   CAN_PSR_DLEC_STUFF_Val              _UINT32_(0x1)                                        /* (CAN_PSR) Stuff Error  */
#define   CAN_PSR_DLEC_FORM_Val               _UINT32_(0x2)                                        /* (CAN_PSR) Form Error  */
#define   CAN_PSR_DLEC_ACK_Val                _UINT32_(0x3)                                        /* (CAN_PSR) Ack Error  */
#define   CAN_PSR_DLEC_BIT1_Val               _UINT32_(0x4)                                        /* (CAN_PSR) Bit1 Error  */
#define   CAN_PSR_DLEC_BIT0_Val               _UINT32_(0x5)                                        /* (CAN_PSR) Bit0 Error  */
#define   CAN_PSR_DLEC_CRC_Val                _UINT32_(0x6)                                        /* (CAN_PSR) CRC Error  */
#define   CAN_PSR_DLEC_NC_Val                 _UINT32_(0x7)                                        /* (CAN_PSR) No Change  */
#define CAN_PSR_DLEC_NONE                     (CAN_PSR_DLEC_NONE_Val << CAN_PSR_DLEC_Pos)          /* (CAN_PSR) No Error Position */
#define CAN_PSR_DLEC_STUFF                    (CAN_PSR_DLEC_STUFF_Val << CAN_PSR_DLEC_Pos)         /* (CAN_PSR) Stuff Error Position */
#define CAN_PSR_DLEC_FORM                     (CAN_PSR_DLEC_FORM_Val << CAN_PSR_DLEC_Pos)          /* (CAN_PSR) Form Error Position */
#define CAN_PSR_DLEC_ACK                      (CAN_PSR_DLEC_ACK_Val << CAN_PSR_DLEC_Pos)           /* (CAN_PSR) Ack Error Position */
#define CAN_PSR_DLEC_BIT1                     (CAN_PSR_DLEC_BIT1_Val << CAN_PSR_DLEC_Pos)          /* (CAN_PSR) Bit1 Error Position */
#define CAN_PSR_DLEC_BIT0                     (CAN_PSR_DLEC_BIT0_Val << CAN_PSR_DLEC_Pos)          /* (CAN_PSR) Bit0 Error Position */
#define CAN_PSR_DLEC_CRC                      (CAN_PSR_DLEC_CRC_Val << CAN_PSR_DLEC_Pos)           /* (CAN_PSR) CRC Error Position */
#define CAN_PSR_DLEC_NC                       (CAN_PSR_DLEC_NC_Val << CAN_PSR_DLEC_Pos)            /* (CAN_PSR) No Change Position */
#define CAN_PSR_RESI_Pos                      _UINT32_(11)                                         /* (CAN_PSR) ESI flag of last received CAN FD Message Position */
#define CAN_PSR_RESI_Msk                      (_UINT32_(0x1) << CAN_PSR_RESI_Pos)                  /* (CAN_PSR) ESI flag of last received CAN FD Message Mask */
#define CAN_PSR_RESI(value)                   (CAN_PSR_RESI_Msk & (_UINT32_(value) << CAN_PSR_RESI_Pos)) /* Assignment of value for RESI in the CAN_PSR register */
#define CAN_PSR_RBRS_Pos                      _UINT32_(12)                                         /* (CAN_PSR) BRS flag of last received CAN FD Message Position */
#define CAN_PSR_RBRS_Msk                      (_UINT32_(0x1) << CAN_PSR_RBRS_Pos)                  /* (CAN_PSR) BRS flag of last received CAN FD Message Mask */
#define CAN_PSR_RBRS(value)                   (CAN_PSR_RBRS_Msk & (_UINT32_(value) << CAN_PSR_RBRS_Pos)) /* Assignment of value for RBRS in the CAN_PSR register */
#define CAN_PSR_RFDF_Pos                      _UINT32_(13)                                         /* (CAN_PSR) Received a CAN FD Message Position */
#define CAN_PSR_RFDF_Msk                      (_UINT32_(0x1) << CAN_PSR_RFDF_Pos)                  /* (CAN_PSR) Received a CAN FD Message Mask */
#define CAN_PSR_RFDF(value)                   (CAN_PSR_RFDF_Msk & (_UINT32_(value) << CAN_PSR_RFDF_Pos)) /* Assignment of value for RFDF in the CAN_PSR register */
#define CAN_PSR_PXE_Pos                       _UINT32_(14)                                         /* (CAN_PSR) Protocol Exception Event Position */
#define CAN_PSR_PXE_Msk                       (_UINT32_(0x1) << CAN_PSR_PXE_Pos)                   /* (CAN_PSR) Protocol Exception Event Mask */
#define CAN_PSR_PXE(value)                    (CAN_PSR_PXE_Msk & (_UINT32_(value) << CAN_PSR_PXE_Pos)) /* Assignment of value for PXE in the CAN_PSR register */
#define CAN_PSR_TDCV_Pos                      _UINT32_(16)                                         /* (CAN_PSR) Transmitter Delay Compensation Value Position */
#define CAN_PSR_TDCV_Msk                      (_UINT32_(0x7F) << CAN_PSR_TDCV_Pos)                 /* (CAN_PSR) Transmitter Delay Compensation Value Mask */
#define CAN_PSR_TDCV(value)                   (CAN_PSR_TDCV_Msk & (_UINT32_(value) << CAN_PSR_TDCV_Pos)) /* Assignment of value for TDCV in the CAN_PSR register */
#define CAN_PSR_Msk                           _UINT32_(0x007F7FFF)                                 /* (CAN_PSR) Register Mask  */


/* -------- CAN_TDCR : (CAN Offset: 0x48) (R/W 32) Extended ID Filter Configuration -------- */
#define CAN_TDCR_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_TDCR) Extended ID Filter Configuration  Reset Value */

#define CAN_TDCR_TDCF_Pos                     _UINT32_(0)                                          /* (CAN_TDCR) Transmitter Delay Compensation Filter Length Position */
#define CAN_TDCR_TDCF_Msk                     (_UINT32_(0x7F) << CAN_TDCR_TDCF_Pos)                /* (CAN_TDCR) Transmitter Delay Compensation Filter Length Mask */
#define CAN_TDCR_TDCF(value)                  (CAN_TDCR_TDCF_Msk & (_UINT32_(value) << CAN_TDCR_TDCF_Pos)) /* Assignment of value for TDCF in the CAN_TDCR register */
#define CAN_TDCR_TDCO_Pos                     _UINT32_(8)                                          /* (CAN_TDCR) Transmitter Delay Compensation Offset Position */
#define CAN_TDCR_TDCO_Msk                     (_UINT32_(0x7F) << CAN_TDCR_TDCO_Pos)                /* (CAN_TDCR) Transmitter Delay Compensation Offset Mask */
#define CAN_TDCR_TDCO(value)                  (CAN_TDCR_TDCO_Msk & (_UINT32_(value) << CAN_TDCR_TDCO_Pos)) /* Assignment of value for TDCO in the CAN_TDCR register */
#define CAN_TDCR_Msk                          _UINT32_(0x00007F7F)                                 /* (CAN_TDCR) Register Mask  */


/* -------- CAN_IR : (CAN Offset: 0x50) (R/W 32) Interrupt -------- */
#define CAN_IR_RESETVALUE                     _UINT32_(0x00)                                       /*  (CAN_IR) Interrupt  Reset Value */

#define CAN_IR_RF0N_Pos                       _UINT32_(0)                                          /* (CAN_IR) Rx FIFO 0 New Message Position */
#define CAN_IR_RF0N_Msk                       (_UINT32_(0x1) << CAN_IR_RF0N_Pos)                   /* (CAN_IR) Rx FIFO 0 New Message Mask */
#define CAN_IR_RF0N(value)                    (CAN_IR_RF0N_Msk & (_UINT32_(value) << CAN_IR_RF0N_Pos)) /* Assignment of value for RF0N in the CAN_IR register */
#define CAN_IR_RF0W_Pos                       _UINT32_(1)                                          /* (CAN_IR) Rx FIFO 0 Watermark Reached Position */
#define CAN_IR_RF0W_Msk                       (_UINT32_(0x1) << CAN_IR_RF0W_Pos)                   /* (CAN_IR) Rx FIFO 0 Watermark Reached Mask */
#define CAN_IR_RF0W(value)                    (CAN_IR_RF0W_Msk & (_UINT32_(value) << CAN_IR_RF0W_Pos)) /* Assignment of value for RF0W in the CAN_IR register */
#define CAN_IR_RF0F_Pos                       _UINT32_(2)                                          /* (CAN_IR) Rx FIFO 0 Full Position */
#define CAN_IR_RF0F_Msk                       (_UINT32_(0x1) << CAN_IR_RF0F_Pos)                   /* (CAN_IR) Rx FIFO 0 Full Mask */
#define CAN_IR_RF0F(value)                    (CAN_IR_RF0F_Msk & (_UINT32_(value) << CAN_IR_RF0F_Pos)) /* Assignment of value for RF0F in the CAN_IR register */
#define CAN_IR_RF0L_Pos                       _UINT32_(3)                                          /* (CAN_IR) Rx FIFO 0 Message Lost Position */
#define CAN_IR_RF0L_Msk                       (_UINT32_(0x1) << CAN_IR_RF0L_Pos)                   /* (CAN_IR) Rx FIFO 0 Message Lost Mask */
#define CAN_IR_RF0L(value)                    (CAN_IR_RF0L_Msk & (_UINT32_(value) << CAN_IR_RF0L_Pos)) /* Assignment of value for RF0L in the CAN_IR register */
#define CAN_IR_RF1N_Pos                       _UINT32_(4)                                          /* (CAN_IR) Rx FIFO 1 New Message Position */
#define CAN_IR_RF1N_Msk                       (_UINT32_(0x1) << CAN_IR_RF1N_Pos)                   /* (CAN_IR) Rx FIFO 1 New Message Mask */
#define CAN_IR_RF1N(value)                    (CAN_IR_RF1N_Msk & (_UINT32_(value) << CAN_IR_RF1N_Pos)) /* Assignment of value for RF1N in the CAN_IR register */
#define CAN_IR_RF1W_Pos                       _UINT32_(5)                                          /* (CAN_IR) Rx FIFO 1 Watermark Reached Position */
#define CAN_IR_RF1W_Msk                       (_UINT32_(0x1) << CAN_IR_RF1W_Pos)                   /* (CAN_IR) Rx FIFO 1 Watermark Reached Mask */
#define CAN_IR_RF1W(value)                    (CAN_IR_RF1W_Msk & (_UINT32_(value) << CAN_IR_RF1W_Pos)) /* Assignment of value for RF1W in the CAN_IR register */
#define CAN_IR_RF1F_Pos                       _UINT32_(6)                                          /* (CAN_IR) Rx FIFO 1 FIFO Full Position */
#define CAN_IR_RF1F_Msk                       (_UINT32_(0x1) << CAN_IR_RF1F_Pos)                   /* (CAN_IR) Rx FIFO 1 FIFO Full Mask */
#define CAN_IR_RF1F(value)                    (CAN_IR_RF1F_Msk & (_UINT32_(value) << CAN_IR_RF1F_Pos)) /* Assignment of value for RF1F in the CAN_IR register */
#define CAN_IR_RF1L_Pos                       _UINT32_(7)                                          /* (CAN_IR) Rx FIFO 1 Message Lost Position */
#define CAN_IR_RF1L_Msk                       (_UINT32_(0x1) << CAN_IR_RF1L_Pos)                   /* (CAN_IR) Rx FIFO 1 Message Lost Mask */
#define CAN_IR_RF1L(value)                    (CAN_IR_RF1L_Msk & (_UINT32_(value) << CAN_IR_RF1L_Pos)) /* Assignment of value for RF1L in the CAN_IR register */
#define CAN_IR_HPM_Pos                        _UINT32_(8)                                          /* (CAN_IR) High Priority Message Position */
#define CAN_IR_HPM_Msk                        (_UINT32_(0x1) << CAN_IR_HPM_Pos)                    /* (CAN_IR) High Priority Message Mask */
#define CAN_IR_HPM(value)                     (CAN_IR_HPM_Msk & (_UINT32_(value) << CAN_IR_HPM_Pos)) /* Assignment of value for HPM in the CAN_IR register */
#define CAN_IR_TC_Pos                         _UINT32_(9)                                          /* (CAN_IR) Timestamp Completed Position */
#define CAN_IR_TC_Msk                         (_UINT32_(0x1) << CAN_IR_TC_Pos)                     /* (CAN_IR) Timestamp Completed Mask */
#define CAN_IR_TC(value)                      (CAN_IR_TC_Msk & (_UINT32_(value) << CAN_IR_TC_Pos)) /* Assignment of value for TC in the CAN_IR register */
#define CAN_IR_TCF_Pos                        _UINT32_(10)                                         /* (CAN_IR) Transmission Cancellation Finished Position */
#define CAN_IR_TCF_Msk                        (_UINT32_(0x1) << CAN_IR_TCF_Pos)                    /* (CAN_IR) Transmission Cancellation Finished Mask */
#define CAN_IR_TCF(value)                     (CAN_IR_TCF_Msk & (_UINT32_(value) << CAN_IR_TCF_Pos)) /* Assignment of value for TCF in the CAN_IR register */
#define CAN_IR_TFE_Pos                        _UINT32_(11)                                         /* (CAN_IR) Tx FIFO Empty Position */
#define CAN_IR_TFE_Msk                        (_UINT32_(0x1) << CAN_IR_TFE_Pos)                    /* (CAN_IR) Tx FIFO Empty Mask */
#define CAN_IR_TFE(value)                     (CAN_IR_TFE_Msk & (_UINT32_(value) << CAN_IR_TFE_Pos)) /* Assignment of value for TFE in the CAN_IR register */
#define CAN_IR_TEFN_Pos                       _UINT32_(12)                                         /* (CAN_IR) Tx Event FIFO New Entry Position */
#define CAN_IR_TEFN_Msk                       (_UINT32_(0x1) << CAN_IR_TEFN_Pos)                   /* (CAN_IR) Tx Event FIFO New Entry Mask */
#define CAN_IR_TEFN(value)                    (CAN_IR_TEFN_Msk & (_UINT32_(value) << CAN_IR_TEFN_Pos)) /* Assignment of value for TEFN in the CAN_IR register */
#define CAN_IR_TEFW_Pos                       _UINT32_(13)                                         /* (CAN_IR) Tx Event FIFO Watermark Reached Position */
#define CAN_IR_TEFW_Msk                       (_UINT32_(0x1) << CAN_IR_TEFW_Pos)                   /* (CAN_IR) Tx Event FIFO Watermark Reached Mask */
#define CAN_IR_TEFW(value)                    (CAN_IR_TEFW_Msk & (_UINT32_(value) << CAN_IR_TEFW_Pos)) /* Assignment of value for TEFW in the CAN_IR register */
#define CAN_IR_TEFF_Pos                       _UINT32_(14)                                         /* (CAN_IR) Tx Event FIFO Full Position */
#define CAN_IR_TEFF_Msk                       (_UINT32_(0x1) << CAN_IR_TEFF_Pos)                   /* (CAN_IR) Tx Event FIFO Full Mask */
#define CAN_IR_TEFF(value)                    (CAN_IR_TEFF_Msk & (_UINT32_(value) << CAN_IR_TEFF_Pos)) /* Assignment of value for TEFF in the CAN_IR register */
#define CAN_IR_TEFL_Pos                       _UINT32_(15)                                         /* (CAN_IR) Tx Event FIFO Element Lost Position */
#define CAN_IR_TEFL_Msk                       (_UINT32_(0x1) << CAN_IR_TEFL_Pos)                   /* (CAN_IR) Tx Event FIFO Element Lost Mask */
#define CAN_IR_TEFL(value)                    (CAN_IR_TEFL_Msk & (_UINT32_(value) << CAN_IR_TEFL_Pos)) /* Assignment of value for TEFL in the CAN_IR register */
#define CAN_IR_TSW_Pos                        _UINT32_(16)                                         /* (CAN_IR) Timestamp Wraparound Position */
#define CAN_IR_TSW_Msk                        (_UINT32_(0x1) << CAN_IR_TSW_Pos)                    /* (CAN_IR) Timestamp Wraparound Mask */
#define CAN_IR_TSW(value)                     (CAN_IR_TSW_Msk & (_UINT32_(value) << CAN_IR_TSW_Pos)) /* Assignment of value for TSW in the CAN_IR register */
#define CAN_IR_MRAF_Pos                       _UINT32_(17)                                         /* (CAN_IR) Message RAM Access Failure Position */
#define CAN_IR_MRAF_Msk                       (_UINT32_(0x1) << CAN_IR_MRAF_Pos)                   /* (CAN_IR) Message RAM Access Failure Mask */
#define CAN_IR_MRAF(value)                    (CAN_IR_MRAF_Msk & (_UINT32_(value) << CAN_IR_MRAF_Pos)) /* Assignment of value for MRAF in the CAN_IR register */
#define CAN_IR_TOO_Pos                        _UINT32_(18)                                         /* (CAN_IR) Timeout Occurred Position */
#define CAN_IR_TOO_Msk                        (_UINT32_(0x1) << CAN_IR_TOO_Pos)                    /* (CAN_IR) Timeout Occurred Mask */
#define CAN_IR_TOO(value)                     (CAN_IR_TOO_Msk & (_UINT32_(value) << CAN_IR_TOO_Pos)) /* Assignment of value for TOO in the CAN_IR register */
#define CAN_IR_DRX_Pos                        _UINT32_(19)                                         /* (CAN_IR) Message stored to Dedicated Rx Buffer Position */
#define CAN_IR_DRX_Msk                        (_UINT32_(0x1) << CAN_IR_DRX_Pos)                    /* (CAN_IR) Message stored to Dedicated Rx Buffer Mask */
#define CAN_IR_DRX(value)                     (CAN_IR_DRX_Msk & (_UINT32_(value) << CAN_IR_DRX_Pos)) /* Assignment of value for DRX in the CAN_IR register */
#define CAN_IR_BEC_Pos                        _UINT32_(20)                                         /* (CAN_IR) Bit Error Corrected Position */
#define CAN_IR_BEC_Msk                        (_UINT32_(0x1) << CAN_IR_BEC_Pos)                    /* (CAN_IR) Bit Error Corrected Mask */
#define CAN_IR_BEC(value)                     (CAN_IR_BEC_Msk & (_UINT32_(value) << CAN_IR_BEC_Pos)) /* Assignment of value for BEC in the CAN_IR register */
#define CAN_IR_BEU_Pos                        _UINT32_(21)                                         /* (CAN_IR) Bit Error Uncorrected Position */
#define CAN_IR_BEU_Msk                        (_UINT32_(0x1) << CAN_IR_BEU_Pos)                    /* (CAN_IR) Bit Error Uncorrected Mask */
#define CAN_IR_BEU(value)                     (CAN_IR_BEU_Msk & (_UINT32_(value) << CAN_IR_BEU_Pos)) /* Assignment of value for BEU in the CAN_IR register */
#define CAN_IR_ELO_Pos                        _UINT32_(22)                                         /* (CAN_IR) Error Logging Overflow Position */
#define CAN_IR_ELO_Msk                        (_UINT32_(0x1) << CAN_IR_ELO_Pos)                    /* (CAN_IR) Error Logging Overflow Mask */
#define CAN_IR_ELO(value)                     (CAN_IR_ELO_Msk & (_UINT32_(value) << CAN_IR_ELO_Pos)) /* Assignment of value for ELO in the CAN_IR register */
#define CAN_IR_EP_Pos                         _UINT32_(23)                                         /* (CAN_IR) Error Passive Position */
#define CAN_IR_EP_Msk                         (_UINT32_(0x1) << CAN_IR_EP_Pos)                     /* (CAN_IR) Error Passive Mask */
#define CAN_IR_EP(value)                      (CAN_IR_EP_Msk & (_UINT32_(value) << CAN_IR_EP_Pos)) /* Assignment of value for EP in the CAN_IR register */
#define CAN_IR_EW_Pos                         _UINT32_(24)                                         /* (CAN_IR) Warning Status Position */
#define CAN_IR_EW_Msk                         (_UINT32_(0x1) << CAN_IR_EW_Pos)                     /* (CAN_IR) Warning Status Mask */
#define CAN_IR_EW(value)                      (CAN_IR_EW_Msk & (_UINT32_(value) << CAN_IR_EW_Pos)) /* Assignment of value for EW in the CAN_IR register */
#define CAN_IR_BO_Pos                         _UINT32_(25)                                         /* (CAN_IR) Bus_Off Status Position */
#define CAN_IR_BO_Msk                         (_UINT32_(0x1) << CAN_IR_BO_Pos)                     /* (CAN_IR) Bus_Off Status Mask */
#define CAN_IR_BO(value)                      (CAN_IR_BO_Msk & (_UINT32_(value) << CAN_IR_BO_Pos)) /* Assignment of value for BO in the CAN_IR register */
#define CAN_IR_WDI_Pos                        _UINT32_(26)                                         /* (CAN_IR) Watchdog Interrupt Position */
#define CAN_IR_WDI_Msk                        (_UINT32_(0x1) << CAN_IR_WDI_Pos)                    /* (CAN_IR) Watchdog Interrupt Mask */
#define CAN_IR_WDI(value)                     (CAN_IR_WDI_Msk & (_UINT32_(value) << CAN_IR_WDI_Pos)) /* Assignment of value for WDI in the CAN_IR register */
#define CAN_IR_PEA_Pos                        _UINT32_(27)                                         /* (CAN_IR) Protocol Error in Arbitration Phase Position */
#define CAN_IR_PEA_Msk                        (_UINT32_(0x1) << CAN_IR_PEA_Pos)                    /* (CAN_IR) Protocol Error in Arbitration Phase Mask */
#define CAN_IR_PEA(value)                     (CAN_IR_PEA_Msk & (_UINT32_(value) << CAN_IR_PEA_Pos)) /* Assignment of value for PEA in the CAN_IR register */
#define CAN_IR_PED_Pos                        _UINT32_(28)                                         /* (CAN_IR) Protocol Error in Data Phase Position */
#define CAN_IR_PED_Msk                        (_UINT32_(0x1) << CAN_IR_PED_Pos)                    /* (CAN_IR) Protocol Error in Data Phase Mask */
#define CAN_IR_PED(value)                     (CAN_IR_PED_Msk & (_UINT32_(value) << CAN_IR_PED_Pos)) /* Assignment of value for PED in the CAN_IR register */
#define CAN_IR_ARA_Pos                        _UINT32_(29)                                         /* (CAN_IR) Access to Reserved Address Position */
#define CAN_IR_ARA_Msk                        (_UINT32_(0x1) << CAN_IR_ARA_Pos)                    /* (CAN_IR) Access to Reserved Address Mask */
#define CAN_IR_ARA(value)                     (CAN_IR_ARA_Msk & (_UINT32_(value) << CAN_IR_ARA_Pos)) /* Assignment of value for ARA in the CAN_IR register */
#define CAN_IR_Msk                            _UINT32_(0x3FFFFFFF)                                 /* (CAN_IR) Register Mask  */


/* -------- CAN_IE : (CAN Offset: 0x54) (R/W 32) Interrupt Enable -------- */
#define CAN_IE_RESETVALUE                     _UINT32_(0x00)                                       /*  (CAN_IE) Interrupt Enable  Reset Value */

#define CAN_IE_RF0NE_Pos                      _UINT32_(0)                                          /* (CAN_IE) Rx FIFO 0 New Message Interrupt Enable Position */
#define CAN_IE_RF0NE_Msk                      (_UINT32_(0x1) << CAN_IE_RF0NE_Pos)                  /* (CAN_IE) Rx FIFO 0 New Message Interrupt Enable Mask */
#define CAN_IE_RF0NE(value)                   (CAN_IE_RF0NE_Msk & (_UINT32_(value) << CAN_IE_RF0NE_Pos)) /* Assignment of value for RF0NE in the CAN_IE register */
#define CAN_IE_RF0WE_Pos                      _UINT32_(1)                                          /* (CAN_IE) Rx FIFO 0 Watermark Reached Interrupt Enable Position */
#define CAN_IE_RF0WE_Msk                      (_UINT32_(0x1) << CAN_IE_RF0WE_Pos)                  /* (CAN_IE) Rx FIFO 0 Watermark Reached Interrupt Enable Mask */
#define CAN_IE_RF0WE(value)                   (CAN_IE_RF0WE_Msk & (_UINT32_(value) << CAN_IE_RF0WE_Pos)) /* Assignment of value for RF0WE in the CAN_IE register */
#define CAN_IE_RF0FE_Pos                      _UINT32_(2)                                          /* (CAN_IE) Rx FIFO 0 Full Interrupt Enable Position */
#define CAN_IE_RF0FE_Msk                      (_UINT32_(0x1) << CAN_IE_RF0FE_Pos)                  /* (CAN_IE) Rx FIFO 0 Full Interrupt Enable Mask */
#define CAN_IE_RF0FE(value)                   (CAN_IE_RF0FE_Msk & (_UINT32_(value) << CAN_IE_RF0FE_Pos)) /* Assignment of value for RF0FE in the CAN_IE register */
#define CAN_IE_RF0LE_Pos                      _UINT32_(3)                                          /* (CAN_IE) Rx FIFO 0 Message Lost Interrupt Enable Position */
#define CAN_IE_RF0LE_Msk                      (_UINT32_(0x1) << CAN_IE_RF0LE_Pos)                  /* (CAN_IE) Rx FIFO 0 Message Lost Interrupt Enable Mask */
#define CAN_IE_RF0LE(value)                   (CAN_IE_RF0LE_Msk & (_UINT32_(value) << CAN_IE_RF0LE_Pos)) /* Assignment of value for RF0LE in the CAN_IE register */
#define CAN_IE_RF1NE_Pos                      _UINT32_(4)                                          /* (CAN_IE) Rx FIFO 1 New Message Interrupt Enable Position */
#define CAN_IE_RF1NE_Msk                      (_UINT32_(0x1) << CAN_IE_RF1NE_Pos)                  /* (CAN_IE) Rx FIFO 1 New Message Interrupt Enable Mask */
#define CAN_IE_RF1NE(value)                   (CAN_IE_RF1NE_Msk & (_UINT32_(value) << CAN_IE_RF1NE_Pos)) /* Assignment of value for RF1NE in the CAN_IE register */
#define CAN_IE_RF1WE_Pos                      _UINT32_(5)                                          /* (CAN_IE) Rx FIFO 1 Watermark Reached Interrupt Enable Position */
#define CAN_IE_RF1WE_Msk                      (_UINT32_(0x1) << CAN_IE_RF1WE_Pos)                  /* (CAN_IE) Rx FIFO 1 Watermark Reached Interrupt Enable Mask */
#define CAN_IE_RF1WE(value)                   (CAN_IE_RF1WE_Msk & (_UINT32_(value) << CAN_IE_RF1WE_Pos)) /* Assignment of value for RF1WE in the CAN_IE register */
#define CAN_IE_RF1FE_Pos                      _UINT32_(6)                                          /* (CAN_IE) Rx FIFO 1 FIFO Full Interrupt Enable Position */
#define CAN_IE_RF1FE_Msk                      (_UINT32_(0x1) << CAN_IE_RF1FE_Pos)                  /* (CAN_IE) Rx FIFO 1 FIFO Full Interrupt Enable Mask */
#define CAN_IE_RF1FE(value)                   (CAN_IE_RF1FE_Msk & (_UINT32_(value) << CAN_IE_RF1FE_Pos)) /* Assignment of value for RF1FE in the CAN_IE register */
#define CAN_IE_RF1LE_Pos                      _UINT32_(7)                                          /* (CAN_IE) Rx FIFO 1 Message Lost Interrupt Enable Position */
#define CAN_IE_RF1LE_Msk                      (_UINT32_(0x1) << CAN_IE_RF1LE_Pos)                  /* (CAN_IE) Rx FIFO 1 Message Lost Interrupt Enable Mask */
#define CAN_IE_RF1LE(value)                   (CAN_IE_RF1LE_Msk & (_UINT32_(value) << CAN_IE_RF1LE_Pos)) /* Assignment of value for RF1LE in the CAN_IE register */
#define CAN_IE_HPME_Pos                       _UINT32_(8)                                          /* (CAN_IE) High Priority Message Interrupt Enable Position */
#define CAN_IE_HPME_Msk                       (_UINT32_(0x1) << CAN_IE_HPME_Pos)                   /* (CAN_IE) High Priority Message Interrupt Enable Mask */
#define CAN_IE_HPME(value)                    (CAN_IE_HPME_Msk & (_UINT32_(value) << CAN_IE_HPME_Pos)) /* Assignment of value for HPME in the CAN_IE register */
#define CAN_IE_TCE_Pos                        _UINT32_(9)                                          /* (CAN_IE) Timestamp Completed Interrupt Enable Position */
#define CAN_IE_TCE_Msk                        (_UINT32_(0x1) << CAN_IE_TCE_Pos)                    /* (CAN_IE) Timestamp Completed Interrupt Enable Mask */
#define CAN_IE_TCE(value)                     (CAN_IE_TCE_Msk & (_UINT32_(value) << CAN_IE_TCE_Pos)) /* Assignment of value for TCE in the CAN_IE register */
#define CAN_IE_TCFE_Pos                       _UINT32_(10)                                         /* (CAN_IE) Transmission Cancellation Finished Interrupt Enable Position */
#define CAN_IE_TCFE_Msk                       (_UINT32_(0x1) << CAN_IE_TCFE_Pos)                   /* (CAN_IE) Transmission Cancellation Finished Interrupt Enable Mask */
#define CAN_IE_TCFE(value)                    (CAN_IE_TCFE_Msk & (_UINT32_(value) << CAN_IE_TCFE_Pos)) /* Assignment of value for TCFE in the CAN_IE register */
#define CAN_IE_TFEE_Pos                       _UINT32_(11)                                         /* (CAN_IE) Tx FIFO Empty Interrupt Enable Position */
#define CAN_IE_TFEE_Msk                       (_UINT32_(0x1) << CAN_IE_TFEE_Pos)                   /* (CAN_IE) Tx FIFO Empty Interrupt Enable Mask */
#define CAN_IE_TFEE(value)                    (CAN_IE_TFEE_Msk & (_UINT32_(value) << CAN_IE_TFEE_Pos)) /* Assignment of value for TFEE in the CAN_IE register */
#define CAN_IE_TEFNE_Pos                      _UINT32_(12)                                         /* (CAN_IE) Tx Event FIFO New Entry Interrupt Enable Position */
#define CAN_IE_TEFNE_Msk                      (_UINT32_(0x1) << CAN_IE_TEFNE_Pos)                  /* (CAN_IE) Tx Event FIFO New Entry Interrupt Enable Mask */
#define CAN_IE_TEFNE(value)                   (CAN_IE_TEFNE_Msk & (_UINT32_(value) << CAN_IE_TEFNE_Pos)) /* Assignment of value for TEFNE in the CAN_IE register */
#define CAN_IE_TEFWE_Pos                      _UINT32_(13)                                         /* (CAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Position */
#define CAN_IE_TEFWE_Msk                      (_UINT32_(0x1) << CAN_IE_TEFWE_Pos)                  /* (CAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Mask */
#define CAN_IE_TEFWE(value)                   (CAN_IE_TEFWE_Msk & (_UINT32_(value) << CAN_IE_TEFWE_Pos)) /* Assignment of value for TEFWE in the CAN_IE register */
#define CAN_IE_TEFFE_Pos                      _UINT32_(14)                                         /* (CAN_IE) Tx Event FIFO Full Interrupt Enable Position */
#define CAN_IE_TEFFE_Msk                      (_UINT32_(0x1) << CAN_IE_TEFFE_Pos)                  /* (CAN_IE) Tx Event FIFO Full Interrupt Enable Mask */
#define CAN_IE_TEFFE(value)                   (CAN_IE_TEFFE_Msk & (_UINT32_(value) << CAN_IE_TEFFE_Pos)) /* Assignment of value for TEFFE in the CAN_IE register */
#define CAN_IE_TEFLE_Pos                      _UINT32_(15)                                         /* (CAN_IE) Tx Event FIFO Element Lost Interrupt Enable Position */
#define CAN_IE_TEFLE_Msk                      (_UINT32_(0x1) << CAN_IE_TEFLE_Pos)                  /* (CAN_IE) Tx Event FIFO Element Lost Interrupt Enable Mask */
#define CAN_IE_TEFLE(value)                   (CAN_IE_TEFLE_Msk & (_UINT32_(value) << CAN_IE_TEFLE_Pos)) /* Assignment of value for TEFLE in the CAN_IE register */
#define CAN_IE_TSWE_Pos                       _UINT32_(16)                                         /* (CAN_IE) Timestamp Wraparound Interrupt Enable Position */
#define CAN_IE_TSWE_Msk                       (_UINT32_(0x1) << CAN_IE_TSWE_Pos)                   /* (CAN_IE) Timestamp Wraparound Interrupt Enable Mask */
#define CAN_IE_TSWE(value)                    (CAN_IE_TSWE_Msk & (_UINT32_(value) << CAN_IE_TSWE_Pos)) /* Assignment of value for TSWE in the CAN_IE register */
#define CAN_IE_MRAFE_Pos                      _UINT32_(17)                                         /* (CAN_IE) Message RAM Access Failure Interrupt Enable Position */
#define CAN_IE_MRAFE_Msk                      (_UINT32_(0x1) << CAN_IE_MRAFE_Pos)                  /* (CAN_IE) Message RAM Access Failure Interrupt Enable Mask */
#define CAN_IE_MRAFE(value)                   (CAN_IE_MRAFE_Msk & (_UINT32_(value) << CAN_IE_MRAFE_Pos)) /* Assignment of value for MRAFE in the CAN_IE register */
#define CAN_IE_TOOE_Pos                       _UINT32_(18)                                         /* (CAN_IE) Timeout Occurred Interrupt Enable Position */
#define CAN_IE_TOOE_Msk                       (_UINT32_(0x1) << CAN_IE_TOOE_Pos)                   /* (CAN_IE) Timeout Occurred Interrupt Enable Mask */
#define CAN_IE_TOOE(value)                    (CAN_IE_TOOE_Msk & (_UINT32_(value) << CAN_IE_TOOE_Pos)) /* Assignment of value for TOOE in the CAN_IE register */
#define CAN_IE_DRXE_Pos                       _UINT32_(19)                                         /* (CAN_IE) Message stored to Dedicated Rx Buffer Interrupt Enable Position */
#define CAN_IE_DRXE_Msk                       (_UINT32_(0x1) << CAN_IE_DRXE_Pos)                   /* (CAN_IE) Message stored to Dedicated Rx Buffer Interrupt Enable Mask */
#define CAN_IE_DRXE(value)                    (CAN_IE_DRXE_Msk & (_UINT32_(value) << CAN_IE_DRXE_Pos)) /* Assignment of value for DRXE in the CAN_IE register */
#define CAN_IE_BECE_Pos                       _UINT32_(20)                                         /* (CAN_IE) Bit Error Corrected Interrupt Enable Position */
#define CAN_IE_BECE_Msk                       (_UINT32_(0x1) << CAN_IE_BECE_Pos)                   /* (CAN_IE) Bit Error Corrected Interrupt Enable Mask */
#define CAN_IE_BECE(value)                    (CAN_IE_BECE_Msk & (_UINT32_(value) << CAN_IE_BECE_Pos)) /* Assignment of value for BECE in the CAN_IE register */
#define CAN_IE_BEUE_Pos                       _UINT32_(21)                                         /* (CAN_IE) Bit Error Uncorrected Interrupt Enable Position */
#define CAN_IE_BEUE_Msk                       (_UINT32_(0x1) << CAN_IE_BEUE_Pos)                   /* (CAN_IE) Bit Error Uncorrected Interrupt Enable Mask */
#define CAN_IE_BEUE(value)                    (CAN_IE_BEUE_Msk & (_UINT32_(value) << CAN_IE_BEUE_Pos)) /* Assignment of value for BEUE in the CAN_IE register */
#define CAN_IE_ELOE_Pos                       _UINT32_(22)                                         /* (CAN_IE) Error Logging Overflow Interrupt Enable Position */
#define CAN_IE_ELOE_Msk                       (_UINT32_(0x1) << CAN_IE_ELOE_Pos)                   /* (CAN_IE) Error Logging Overflow Interrupt Enable Mask */
#define CAN_IE_ELOE(value)                    (CAN_IE_ELOE_Msk & (_UINT32_(value) << CAN_IE_ELOE_Pos)) /* Assignment of value for ELOE in the CAN_IE register */
#define CAN_IE_EPE_Pos                        _UINT32_(23)                                         /* (CAN_IE) Error Passive Interrupt Enable Position */
#define CAN_IE_EPE_Msk                        (_UINT32_(0x1) << CAN_IE_EPE_Pos)                    /* (CAN_IE) Error Passive Interrupt Enable Mask */
#define CAN_IE_EPE(value)                     (CAN_IE_EPE_Msk & (_UINT32_(value) << CAN_IE_EPE_Pos)) /* Assignment of value for EPE in the CAN_IE register */
#define CAN_IE_EWE_Pos                        _UINT32_(24)                                         /* (CAN_IE) Warning Status Interrupt Enable Position */
#define CAN_IE_EWE_Msk                        (_UINT32_(0x1) << CAN_IE_EWE_Pos)                    /* (CAN_IE) Warning Status Interrupt Enable Mask */
#define CAN_IE_EWE(value)                     (CAN_IE_EWE_Msk & (_UINT32_(value) << CAN_IE_EWE_Pos)) /* Assignment of value for EWE in the CAN_IE register */
#define CAN_IE_BOE_Pos                        _UINT32_(25)                                         /* (CAN_IE) Bus_Off Status Interrupt Enable Position */
#define CAN_IE_BOE_Msk                        (_UINT32_(0x1) << CAN_IE_BOE_Pos)                    /* (CAN_IE) Bus_Off Status Interrupt Enable Mask */
#define CAN_IE_BOE(value)                     (CAN_IE_BOE_Msk & (_UINT32_(value) << CAN_IE_BOE_Pos)) /* Assignment of value for BOE in the CAN_IE register */
#define CAN_IE_WDIE_Pos                       _UINT32_(26)                                         /* (CAN_IE) Watchdog Interrupt Interrupt Enable Position */
#define CAN_IE_WDIE_Msk                       (_UINT32_(0x1) << CAN_IE_WDIE_Pos)                   /* (CAN_IE) Watchdog Interrupt Interrupt Enable Mask */
#define CAN_IE_WDIE(value)                    (CAN_IE_WDIE_Msk & (_UINT32_(value) << CAN_IE_WDIE_Pos)) /* Assignment of value for WDIE in the CAN_IE register */
#define CAN_IE_PEAE_Pos                       _UINT32_(27)                                         /* (CAN_IE) Protocol Error in Arbitration Phase Enable Position */
#define CAN_IE_PEAE_Msk                       (_UINT32_(0x1) << CAN_IE_PEAE_Pos)                   /* (CAN_IE) Protocol Error in Arbitration Phase Enable Mask */
#define CAN_IE_PEAE(value)                    (CAN_IE_PEAE_Msk & (_UINT32_(value) << CAN_IE_PEAE_Pos)) /* Assignment of value for PEAE in the CAN_IE register */
#define CAN_IE_PEDE_Pos                       _UINT32_(28)                                         /* (CAN_IE) Protocol Error in Data Phase Enable Position */
#define CAN_IE_PEDE_Msk                       (_UINT32_(0x1) << CAN_IE_PEDE_Pos)                   /* (CAN_IE) Protocol Error in Data Phase Enable Mask */
#define CAN_IE_PEDE(value)                    (CAN_IE_PEDE_Msk & (_UINT32_(value) << CAN_IE_PEDE_Pos)) /* Assignment of value for PEDE in the CAN_IE register */
#define CAN_IE_ARAE_Pos                       _UINT32_(29)                                         /* (CAN_IE) Access to Reserved Address Enable Position */
#define CAN_IE_ARAE_Msk                       (_UINT32_(0x1) << CAN_IE_ARAE_Pos)                   /* (CAN_IE) Access to Reserved Address Enable Mask */
#define CAN_IE_ARAE(value)                    (CAN_IE_ARAE_Msk & (_UINT32_(value) << CAN_IE_ARAE_Pos)) /* Assignment of value for ARAE in the CAN_IE register */
#define CAN_IE_Msk                            _UINT32_(0x3FFFFFFF)                                 /* (CAN_IE) Register Mask  */


/* -------- CAN_ILS : (CAN Offset: 0x58) (R/W 32) Interrupt Line Select -------- */
#define CAN_ILS_RESETVALUE                    _UINT32_(0x00)                                       /*  (CAN_ILS) Interrupt Line Select  Reset Value */

#define CAN_ILS_RF0NL_Pos                     _UINT32_(0)                                          /* (CAN_ILS) Rx FIFO 0 New Message Interrupt Line Position */
#define CAN_ILS_RF0NL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF0NL_Pos)                 /* (CAN_ILS) Rx FIFO 0 New Message Interrupt Line Mask */
#define CAN_ILS_RF0NL(value)                  (CAN_ILS_RF0NL_Msk & (_UINT32_(value) << CAN_ILS_RF0NL_Pos)) /* Assignment of value for RF0NL in the CAN_ILS register */
#define CAN_ILS_RF0WL_Pos                     _UINT32_(1)                                          /* (CAN_ILS) Rx FIFO 0 Watermark Reached Interrupt Line Position */
#define CAN_ILS_RF0WL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF0WL_Pos)                 /* (CAN_ILS) Rx FIFO 0 Watermark Reached Interrupt Line Mask */
#define CAN_ILS_RF0WL(value)                  (CAN_ILS_RF0WL_Msk & (_UINT32_(value) << CAN_ILS_RF0WL_Pos)) /* Assignment of value for RF0WL in the CAN_ILS register */
#define CAN_ILS_RF0FL_Pos                     _UINT32_(2)                                          /* (CAN_ILS) Rx FIFO 0 Full Interrupt Line Position */
#define CAN_ILS_RF0FL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF0FL_Pos)                 /* (CAN_ILS) Rx FIFO 0 Full Interrupt Line Mask */
#define CAN_ILS_RF0FL(value)                  (CAN_ILS_RF0FL_Msk & (_UINT32_(value) << CAN_ILS_RF0FL_Pos)) /* Assignment of value for RF0FL in the CAN_ILS register */
#define CAN_ILS_RF0LL_Pos                     _UINT32_(3)                                          /* (CAN_ILS) Rx FIFO 0 Message Lost Interrupt Line Position */
#define CAN_ILS_RF0LL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF0LL_Pos)                 /* (CAN_ILS) Rx FIFO 0 Message Lost Interrupt Line Mask */
#define CAN_ILS_RF0LL(value)                  (CAN_ILS_RF0LL_Msk & (_UINT32_(value) << CAN_ILS_RF0LL_Pos)) /* Assignment of value for RF0LL in the CAN_ILS register */
#define CAN_ILS_RF1NL_Pos                     _UINT32_(4)                                          /* (CAN_ILS) Rx FIFO 1 New Message Interrupt Line Position */
#define CAN_ILS_RF1NL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF1NL_Pos)                 /* (CAN_ILS) Rx FIFO 1 New Message Interrupt Line Mask */
#define CAN_ILS_RF1NL(value)                  (CAN_ILS_RF1NL_Msk & (_UINT32_(value) << CAN_ILS_RF1NL_Pos)) /* Assignment of value for RF1NL in the CAN_ILS register */
#define CAN_ILS_RF1WL_Pos                     _UINT32_(5)                                          /* (CAN_ILS) Rx FIFO 1 Watermark Reached Interrupt Line Position */
#define CAN_ILS_RF1WL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF1WL_Pos)                 /* (CAN_ILS) Rx FIFO 1 Watermark Reached Interrupt Line Mask */
#define CAN_ILS_RF1WL(value)                  (CAN_ILS_RF1WL_Msk & (_UINT32_(value) << CAN_ILS_RF1WL_Pos)) /* Assignment of value for RF1WL in the CAN_ILS register */
#define CAN_ILS_RF1FL_Pos                     _UINT32_(6)                                          /* (CAN_ILS) Rx FIFO 1 FIFO Full Interrupt Line Position */
#define CAN_ILS_RF1FL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF1FL_Pos)                 /* (CAN_ILS) Rx FIFO 1 FIFO Full Interrupt Line Mask */
#define CAN_ILS_RF1FL(value)                  (CAN_ILS_RF1FL_Msk & (_UINT32_(value) << CAN_ILS_RF1FL_Pos)) /* Assignment of value for RF1FL in the CAN_ILS register */
#define CAN_ILS_RF1LL_Pos                     _UINT32_(7)                                          /* (CAN_ILS) Rx FIFO 1 Message Lost Interrupt Line Position */
#define CAN_ILS_RF1LL_Msk                     (_UINT32_(0x1) << CAN_ILS_RF1LL_Pos)                 /* (CAN_ILS) Rx FIFO 1 Message Lost Interrupt Line Mask */
#define CAN_ILS_RF1LL(value)                  (CAN_ILS_RF1LL_Msk & (_UINT32_(value) << CAN_ILS_RF1LL_Pos)) /* Assignment of value for RF1LL in the CAN_ILS register */
#define CAN_ILS_HPML_Pos                      _UINT32_(8)                                          /* (CAN_ILS) High Priority Message Interrupt Line Position */
#define CAN_ILS_HPML_Msk                      (_UINT32_(0x1) << CAN_ILS_HPML_Pos)                  /* (CAN_ILS) High Priority Message Interrupt Line Mask */
#define CAN_ILS_HPML(value)                   (CAN_ILS_HPML_Msk & (_UINT32_(value) << CAN_ILS_HPML_Pos)) /* Assignment of value for HPML in the CAN_ILS register */
#define CAN_ILS_TCL_Pos                       _UINT32_(9)                                          /* (CAN_ILS) Timestamp Completed Interrupt Line Position */
#define CAN_ILS_TCL_Msk                       (_UINT32_(0x1) << CAN_ILS_TCL_Pos)                   /* (CAN_ILS) Timestamp Completed Interrupt Line Mask */
#define CAN_ILS_TCL(value)                    (CAN_ILS_TCL_Msk & (_UINT32_(value) << CAN_ILS_TCL_Pos)) /* Assignment of value for TCL in the CAN_ILS register */
#define CAN_ILS_TCFL_Pos                      _UINT32_(10)                                         /* (CAN_ILS) Transmission Cancellation Finished Interrupt Line Position */
#define CAN_ILS_TCFL_Msk                      (_UINT32_(0x1) << CAN_ILS_TCFL_Pos)                  /* (CAN_ILS) Transmission Cancellation Finished Interrupt Line Mask */
#define CAN_ILS_TCFL(value)                   (CAN_ILS_TCFL_Msk & (_UINT32_(value) << CAN_ILS_TCFL_Pos)) /* Assignment of value for TCFL in the CAN_ILS register */
#define CAN_ILS_TFEL_Pos                      _UINT32_(11)                                         /* (CAN_ILS) Tx FIFO Empty Interrupt Line Position */
#define CAN_ILS_TFEL_Msk                      (_UINT32_(0x1) << CAN_ILS_TFEL_Pos)                  /* (CAN_ILS) Tx FIFO Empty Interrupt Line Mask */
#define CAN_ILS_TFEL(value)                   (CAN_ILS_TFEL_Msk & (_UINT32_(value) << CAN_ILS_TFEL_Pos)) /* Assignment of value for TFEL in the CAN_ILS register */
#define CAN_ILS_TEFNL_Pos                     _UINT32_(12)                                         /* (CAN_ILS) Tx Event FIFO New Entry Interrupt Line Position */
#define CAN_ILS_TEFNL_Msk                     (_UINT32_(0x1) << CAN_ILS_TEFNL_Pos)                 /* (CAN_ILS) Tx Event FIFO New Entry Interrupt Line Mask */
#define CAN_ILS_TEFNL(value)                  (CAN_ILS_TEFNL_Msk & (_UINT32_(value) << CAN_ILS_TEFNL_Pos)) /* Assignment of value for TEFNL in the CAN_ILS register */
#define CAN_ILS_TEFWL_Pos                     _UINT32_(13)                                         /* (CAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Position */
#define CAN_ILS_TEFWL_Msk                     (_UINT32_(0x1) << CAN_ILS_TEFWL_Pos)                 /* (CAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Mask */
#define CAN_ILS_TEFWL(value)                  (CAN_ILS_TEFWL_Msk & (_UINT32_(value) << CAN_ILS_TEFWL_Pos)) /* Assignment of value for TEFWL in the CAN_ILS register */
#define CAN_ILS_TEFFL_Pos                     _UINT32_(14)                                         /* (CAN_ILS) Tx Event FIFO Full Interrupt Line Position */
#define CAN_ILS_TEFFL_Msk                     (_UINT32_(0x1) << CAN_ILS_TEFFL_Pos)                 /* (CAN_ILS) Tx Event FIFO Full Interrupt Line Mask */
#define CAN_ILS_TEFFL(value)                  (CAN_ILS_TEFFL_Msk & (_UINT32_(value) << CAN_ILS_TEFFL_Pos)) /* Assignment of value for TEFFL in the CAN_ILS register */
#define CAN_ILS_TEFLL_Pos                     _UINT32_(15)                                         /* (CAN_ILS) Tx Event FIFO Element Lost Interrupt Line Position */
#define CAN_ILS_TEFLL_Msk                     (_UINT32_(0x1) << CAN_ILS_TEFLL_Pos)                 /* (CAN_ILS) Tx Event FIFO Element Lost Interrupt Line Mask */
#define CAN_ILS_TEFLL(value)                  (CAN_ILS_TEFLL_Msk & (_UINT32_(value) << CAN_ILS_TEFLL_Pos)) /* Assignment of value for TEFLL in the CAN_ILS register */
#define CAN_ILS_TSWL_Pos                      _UINT32_(16)                                         /* (CAN_ILS) Timestamp Wraparound Interrupt Line Position */
#define CAN_ILS_TSWL_Msk                      (_UINT32_(0x1) << CAN_ILS_TSWL_Pos)                  /* (CAN_ILS) Timestamp Wraparound Interrupt Line Mask */
#define CAN_ILS_TSWL(value)                   (CAN_ILS_TSWL_Msk & (_UINT32_(value) << CAN_ILS_TSWL_Pos)) /* Assignment of value for TSWL in the CAN_ILS register */
#define CAN_ILS_MRAFL_Pos                     _UINT32_(17)                                         /* (CAN_ILS) Message RAM Access Failure Interrupt Line Position */
#define CAN_ILS_MRAFL_Msk                     (_UINT32_(0x1) << CAN_ILS_MRAFL_Pos)                 /* (CAN_ILS) Message RAM Access Failure Interrupt Line Mask */
#define CAN_ILS_MRAFL(value)                  (CAN_ILS_MRAFL_Msk & (_UINT32_(value) << CAN_ILS_MRAFL_Pos)) /* Assignment of value for MRAFL in the CAN_ILS register */
#define CAN_ILS_TOOL_Pos                      _UINT32_(18)                                         /* (CAN_ILS) Timeout Occurred Interrupt Line Position */
#define CAN_ILS_TOOL_Msk                      (_UINT32_(0x1) << CAN_ILS_TOOL_Pos)                  /* (CAN_ILS) Timeout Occurred Interrupt Line Mask */
#define CAN_ILS_TOOL(value)                   (CAN_ILS_TOOL_Msk & (_UINT32_(value) << CAN_ILS_TOOL_Pos)) /* Assignment of value for TOOL in the CAN_ILS register */
#define CAN_ILS_DRXL_Pos                      _UINT32_(19)                                         /* (CAN_ILS) Message stored to Dedicated Rx Buffer Interrupt Line Position */
#define CAN_ILS_DRXL_Msk                      (_UINT32_(0x1) << CAN_ILS_DRXL_Pos)                  /* (CAN_ILS) Message stored to Dedicated Rx Buffer Interrupt Line Mask */
#define CAN_ILS_DRXL(value)                   (CAN_ILS_DRXL_Msk & (_UINT32_(value) << CAN_ILS_DRXL_Pos)) /* Assignment of value for DRXL in the CAN_ILS register */
#define CAN_ILS_BECL_Pos                      _UINT32_(20)                                         /* (CAN_ILS) Bit Error Corrected Interrupt Line Position */
#define CAN_ILS_BECL_Msk                      (_UINT32_(0x1) << CAN_ILS_BECL_Pos)                  /* (CAN_ILS) Bit Error Corrected Interrupt Line Mask */
#define CAN_ILS_BECL(value)                   (CAN_ILS_BECL_Msk & (_UINT32_(value) << CAN_ILS_BECL_Pos)) /* Assignment of value for BECL in the CAN_ILS register */
#define CAN_ILS_BEUL_Pos                      _UINT32_(21)                                         /* (CAN_ILS) Bit Error Uncorrected Interrupt Line Position */
#define CAN_ILS_BEUL_Msk                      (_UINT32_(0x1) << CAN_ILS_BEUL_Pos)                  /* (CAN_ILS) Bit Error Uncorrected Interrupt Line Mask */
#define CAN_ILS_BEUL(value)                   (CAN_ILS_BEUL_Msk & (_UINT32_(value) << CAN_ILS_BEUL_Pos)) /* Assignment of value for BEUL in the CAN_ILS register */
#define CAN_ILS_ELOL_Pos                      _UINT32_(22)                                         /* (CAN_ILS) Error Logging Overflow Interrupt Line Position */
#define CAN_ILS_ELOL_Msk                      (_UINT32_(0x1) << CAN_ILS_ELOL_Pos)                  /* (CAN_ILS) Error Logging Overflow Interrupt Line Mask */
#define CAN_ILS_ELOL(value)                   (CAN_ILS_ELOL_Msk & (_UINT32_(value) << CAN_ILS_ELOL_Pos)) /* Assignment of value for ELOL in the CAN_ILS register */
#define CAN_ILS_EPL_Pos                       _UINT32_(23)                                         /* (CAN_ILS) Error Passive Interrupt Line Position */
#define CAN_ILS_EPL_Msk                       (_UINT32_(0x1) << CAN_ILS_EPL_Pos)                   /* (CAN_ILS) Error Passive Interrupt Line Mask */
#define CAN_ILS_EPL(value)                    (CAN_ILS_EPL_Msk & (_UINT32_(value) << CAN_ILS_EPL_Pos)) /* Assignment of value for EPL in the CAN_ILS register */
#define CAN_ILS_EWL_Pos                       _UINT32_(24)                                         /* (CAN_ILS) Warning Status Interrupt Line Position */
#define CAN_ILS_EWL_Msk                       (_UINT32_(0x1) << CAN_ILS_EWL_Pos)                   /* (CAN_ILS) Warning Status Interrupt Line Mask */
#define CAN_ILS_EWL(value)                    (CAN_ILS_EWL_Msk & (_UINT32_(value) << CAN_ILS_EWL_Pos)) /* Assignment of value for EWL in the CAN_ILS register */
#define CAN_ILS_BOL_Pos                       _UINT32_(25)                                         /* (CAN_ILS) Bus_Off Status Interrupt Line Position */
#define CAN_ILS_BOL_Msk                       (_UINT32_(0x1) << CAN_ILS_BOL_Pos)                   /* (CAN_ILS) Bus_Off Status Interrupt Line Mask */
#define CAN_ILS_BOL(value)                    (CAN_ILS_BOL_Msk & (_UINT32_(value) << CAN_ILS_BOL_Pos)) /* Assignment of value for BOL in the CAN_ILS register */
#define CAN_ILS_WDIL_Pos                      _UINT32_(26)                                         /* (CAN_ILS) Watchdog Interrupt Interrupt Line Position */
#define CAN_ILS_WDIL_Msk                      (_UINT32_(0x1) << CAN_ILS_WDIL_Pos)                  /* (CAN_ILS) Watchdog Interrupt Interrupt Line Mask */
#define CAN_ILS_WDIL(value)                   (CAN_ILS_WDIL_Msk & (_UINT32_(value) << CAN_ILS_WDIL_Pos)) /* Assignment of value for WDIL in the CAN_ILS register */
#define CAN_ILS_PEAL_Pos                      _UINT32_(27)                                         /* (CAN_ILS) Protocol Error in Arbitration Phase Line Position */
#define CAN_ILS_PEAL_Msk                      (_UINT32_(0x1) << CAN_ILS_PEAL_Pos)                  /* (CAN_ILS) Protocol Error in Arbitration Phase Line Mask */
#define CAN_ILS_PEAL(value)                   (CAN_ILS_PEAL_Msk & (_UINT32_(value) << CAN_ILS_PEAL_Pos)) /* Assignment of value for PEAL in the CAN_ILS register */
#define CAN_ILS_PEDL_Pos                      _UINT32_(28)                                         /* (CAN_ILS) Protocol Error in Data Phase Line Position */
#define CAN_ILS_PEDL_Msk                      (_UINT32_(0x1) << CAN_ILS_PEDL_Pos)                  /* (CAN_ILS) Protocol Error in Data Phase Line Mask */
#define CAN_ILS_PEDL(value)                   (CAN_ILS_PEDL_Msk & (_UINT32_(value) << CAN_ILS_PEDL_Pos)) /* Assignment of value for PEDL in the CAN_ILS register */
#define CAN_ILS_ARAL_Pos                      _UINT32_(29)                                         /* (CAN_ILS) Access to Reserved Address Line Position */
#define CAN_ILS_ARAL_Msk                      (_UINT32_(0x1) << CAN_ILS_ARAL_Pos)                  /* (CAN_ILS) Access to Reserved Address Line Mask */
#define CAN_ILS_ARAL(value)                   (CAN_ILS_ARAL_Msk & (_UINT32_(value) << CAN_ILS_ARAL_Pos)) /* Assignment of value for ARAL in the CAN_ILS register */
#define CAN_ILS_Msk                           _UINT32_(0x3FFFFFFF)                                 /* (CAN_ILS) Register Mask  */


/* -------- CAN_ILE : (CAN Offset: 0x5C) (R/W 32) Interrupt Line Enable -------- */
#define CAN_ILE_RESETVALUE                    _UINT32_(0x00)                                       /*  (CAN_ILE) Interrupt Line Enable  Reset Value */

#define CAN_ILE_EINT0_Pos                     _UINT32_(0)                                          /* (CAN_ILE) Enable Interrupt Line 0 Position */
#define CAN_ILE_EINT0_Msk                     (_UINT32_(0x1) << CAN_ILE_EINT0_Pos)                 /* (CAN_ILE) Enable Interrupt Line 0 Mask */
#define CAN_ILE_EINT0(value)                  (CAN_ILE_EINT0_Msk & (_UINT32_(value) << CAN_ILE_EINT0_Pos)) /* Assignment of value for EINT0 in the CAN_ILE register */
#define CAN_ILE_EINT1_Pos                     _UINT32_(1)                                          /* (CAN_ILE) Enable Interrupt Line 1 Position */
#define CAN_ILE_EINT1_Msk                     (_UINT32_(0x1) << CAN_ILE_EINT1_Pos)                 /* (CAN_ILE) Enable Interrupt Line 1 Mask */
#define CAN_ILE_EINT1(value)                  (CAN_ILE_EINT1_Msk & (_UINT32_(value) << CAN_ILE_EINT1_Pos)) /* Assignment of value for EINT1 in the CAN_ILE register */
#define CAN_ILE_Msk                           _UINT32_(0x00000003)                                 /* (CAN_ILE) Register Mask  */

#define CAN_ILE_EINT_Pos                      _UINT32_(0)                                          /* (CAN_ILE Position) Enable Interrupt Line x */
#define CAN_ILE_EINT_Msk                      (_UINT32_(0x3) << CAN_ILE_EINT_Pos)                  /* (CAN_ILE Mask) EINT */
#define CAN_ILE_EINT(value)                   (CAN_ILE_EINT_Msk & (_UINT32_(value) << CAN_ILE_EINT_Pos)) 

/* -------- CAN_GFC : (CAN Offset: 0x80) (R/W 32) Global Filter Configuration -------- */
#define CAN_GFC_RESETVALUE                    _UINT32_(0x00)                                       /*  (CAN_GFC) Global Filter Configuration  Reset Value */

#define CAN_GFC_RRFE_Pos                      _UINT32_(0)                                          /* (CAN_GFC) Reject Remote Frames Extended Position */
#define CAN_GFC_RRFE_Msk                      (_UINT32_(0x1) << CAN_GFC_RRFE_Pos)                  /* (CAN_GFC) Reject Remote Frames Extended Mask */
#define CAN_GFC_RRFE(value)                   (CAN_GFC_RRFE_Msk & (_UINT32_(value) << CAN_GFC_RRFE_Pos)) /* Assignment of value for RRFE in the CAN_GFC register */
#define CAN_GFC_RRFS_Pos                      _UINT32_(1)                                          /* (CAN_GFC) Reject Remote Frames Standard Position */
#define CAN_GFC_RRFS_Msk                      (_UINT32_(0x1) << CAN_GFC_RRFS_Pos)                  /* (CAN_GFC) Reject Remote Frames Standard Mask */
#define CAN_GFC_RRFS(value)                   (CAN_GFC_RRFS_Msk & (_UINT32_(value) << CAN_GFC_RRFS_Pos)) /* Assignment of value for RRFS in the CAN_GFC register */
#define CAN_GFC_ANFE_Pos                      _UINT32_(2)                                          /* (CAN_GFC) Accept Non-matching Frames Extended Position */
#define CAN_GFC_ANFE_Msk                      (_UINT32_(0x3) << CAN_GFC_ANFE_Pos)                  /* (CAN_GFC) Accept Non-matching Frames Extended Mask */
#define CAN_GFC_ANFE(value)                   (CAN_GFC_ANFE_Msk & (_UINT32_(value) << CAN_GFC_ANFE_Pos)) /* Assignment of value for ANFE in the CAN_GFC register */
#define   CAN_GFC_ANFE_RXF0_Val               _UINT32_(0x0)                                        /* (CAN_GFC) Accept in Rx FIFO 0  */
#define   CAN_GFC_ANFE_RXF1_Val               _UINT32_(0x1)                                        /* (CAN_GFC) Accept in Rx FIFO 1  */
#define   CAN_GFC_ANFE_REJECT_Val             _UINT32_(0x2)                                        /* (CAN_GFC) Reject  */
#define CAN_GFC_ANFE_RXF0                     (CAN_GFC_ANFE_RXF0_Val << CAN_GFC_ANFE_Pos)          /* (CAN_GFC) Accept in Rx FIFO 0 Position */
#define CAN_GFC_ANFE_RXF1                     (CAN_GFC_ANFE_RXF1_Val << CAN_GFC_ANFE_Pos)          /* (CAN_GFC) Accept in Rx FIFO 1 Position */
#define CAN_GFC_ANFE_REJECT                   (CAN_GFC_ANFE_REJECT_Val << CAN_GFC_ANFE_Pos)        /* (CAN_GFC) Reject Position */
#define CAN_GFC_ANFS_Pos                      _UINT32_(4)                                          /* (CAN_GFC) Accept Non-matching Frames Standard Position */
#define CAN_GFC_ANFS_Msk                      (_UINT32_(0x3) << CAN_GFC_ANFS_Pos)                  /* (CAN_GFC) Accept Non-matching Frames Standard Mask */
#define CAN_GFC_ANFS(value)                   (CAN_GFC_ANFS_Msk & (_UINT32_(value) << CAN_GFC_ANFS_Pos)) /* Assignment of value for ANFS in the CAN_GFC register */
#define   CAN_GFC_ANFS_RXF0_Val               _UINT32_(0x0)                                        /* (CAN_GFC) Accept in Rx FIFO 0  */
#define   CAN_GFC_ANFS_RXF1_Val               _UINT32_(0x1)                                        /* (CAN_GFC) Accept in Rx FIFO 1  */
#define   CAN_GFC_ANFS_REJECT_Val             _UINT32_(0x2)                                        /* (CAN_GFC) Reject  */
#define CAN_GFC_ANFS_RXF0                     (CAN_GFC_ANFS_RXF0_Val << CAN_GFC_ANFS_Pos)          /* (CAN_GFC) Accept in Rx FIFO 0 Position */
#define CAN_GFC_ANFS_RXF1                     (CAN_GFC_ANFS_RXF1_Val << CAN_GFC_ANFS_Pos)          /* (CAN_GFC) Accept in Rx FIFO 1 Position */
#define CAN_GFC_ANFS_REJECT                   (CAN_GFC_ANFS_REJECT_Val << CAN_GFC_ANFS_Pos)        /* (CAN_GFC) Reject Position */
#define CAN_GFC_Msk                           _UINT32_(0x0000003F)                                 /* (CAN_GFC) Register Mask  */


/* -------- CAN_SIDFC : (CAN Offset: 0x84) (R/W 32) Standard ID Filter Configuration -------- */
#define CAN_SIDFC_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_SIDFC) Standard ID Filter Configuration  Reset Value */

#define CAN_SIDFC_FLSSA_Pos                   _UINT32_(0)                                          /* (CAN_SIDFC) Filter List Standard Start Address Position */
#define CAN_SIDFC_FLSSA_Msk                   (_UINT32_(0xFFFF) << CAN_SIDFC_FLSSA_Pos)            /* (CAN_SIDFC) Filter List Standard Start Address Mask */
#define CAN_SIDFC_FLSSA(value)                (CAN_SIDFC_FLSSA_Msk & (_UINT32_(value) << CAN_SIDFC_FLSSA_Pos)) /* Assignment of value for FLSSA in the CAN_SIDFC register */
#define CAN_SIDFC_LSS_Pos                     _UINT32_(16)                                         /* (CAN_SIDFC) List Size Standard Position */
#define CAN_SIDFC_LSS_Msk                     (_UINT32_(0xFF) << CAN_SIDFC_LSS_Pos)                /* (CAN_SIDFC) List Size Standard Mask */
#define CAN_SIDFC_LSS(value)                  (CAN_SIDFC_LSS_Msk & (_UINT32_(value) << CAN_SIDFC_LSS_Pos)) /* Assignment of value for LSS in the CAN_SIDFC register */
#define CAN_SIDFC_Msk                         _UINT32_(0x00FFFFFF)                                 /* (CAN_SIDFC) Register Mask  */


/* -------- CAN_XIDFC : (CAN Offset: 0x88) (R/W 32) Extended ID Filter Configuration -------- */
#define CAN_XIDFC_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_XIDFC) Extended ID Filter Configuration  Reset Value */

#define CAN_XIDFC_FLESA_Pos                   _UINT32_(0)                                          /* (CAN_XIDFC) Filter List Extended Start Address Position */
#define CAN_XIDFC_FLESA_Msk                   (_UINT32_(0xFFFF) << CAN_XIDFC_FLESA_Pos)            /* (CAN_XIDFC) Filter List Extended Start Address Mask */
#define CAN_XIDFC_FLESA(value)                (CAN_XIDFC_FLESA_Msk & (_UINT32_(value) << CAN_XIDFC_FLESA_Pos)) /* Assignment of value for FLESA in the CAN_XIDFC register */
#define CAN_XIDFC_LSE_Pos                     _UINT32_(16)                                         /* (CAN_XIDFC) List Size Extended Position */
#define CAN_XIDFC_LSE_Msk                     (_UINT32_(0x7F) << CAN_XIDFC_LSE_Pos)                /* (CAN_XIDFC) List Size Extended Mask */
#define CAN_XIDFC_LSE(value)                  (CAN_XIDFC_LSE_Msk & (_UINT32_(value) << CAN_XIDFC_LSE_Pos)) /* Assignment of value for LSE in the CAN_XIDFC register */
#define CAN_XIDFC_Msk                         _UINT32_(0x007FFFFF)                                 /* (CAN_XIDFC) Register Mask  */


/* -------- CAN_XIDAM : (CAN Offset: 0x90) (R/W 32) Extended ID AND Mask -------- */
#define CAN_XIDAM_RESETVALUE                  _UINT32_(0x1FFFFFFF)                                 /*  (CAN_XIDAM) Extended ID AND Mask  Reset Value */

#define CAN_XIDAM_EIDM_Pos                    _UINT32_(0)                                          /* (CAN_XIDAM) Extended ID Mask Position */
#define CAN_XIDAM_EIDM_Msk                    (_UINT32_(0x1FFFFFFF) << CAN_XIDAM_EIDM_Pos)         /* (CAN_XIDAM) Extended ID Mask Mask */
#define CAN_XIDAM_EIDM(value)                 (CAN_XIDAM_EIDM_Msk & (_UINT32_(value) << CAN_XIDAM_EIDM_Pos)) /* Assignment of value for EIDM in the CAN_XIDAM register */
#define CAN_XIDAM_Msk                         _UINT32_(0x1FFFFFFF)                                 /* (CAN_XIDAM) Register Mask  */


/* -------- CAN_HPMS : (CAN Offset: 0x94) ( R/ 32) High Priority Message Status -------- */
#define CAN_HPMS_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_HPMS) High Priority Message Status  Reset Value */

#define CAN_HPMS_BIDX_Pos                     _UINT32_(0)                                          /* (CAN_HPMS) Buffer Index Position */
#define CAN_HPMS_BIDX_Msk                     (_UINT32_(0x3F) << CAN_HPMS_BIDX_Pos)                /* (CAN_HPMS) Buffer Index Mask */
#define CAN_HPMS_BIDX(value)                  (CAN_HPMS_BIDX_Msk & (_UINT32_(value) << CAN_HPMS_BIDX_Pos)) /* Assignment of value for BIDX in the CAN_HPMS register */
#define CAN_HPMS_MSI_Pos                      _UINT32_(6)                                          /* (CAN_HPMS) Message Storage Indicator Position */
#define CAN_HPMS_MSI_Msk                      (_UINT32_(0x3) << CAN_HPMS_MSI_Pos)                  /* (CAN_HPMS) Message Storage Indicator Mask */
#define CAN_HPMS_MSI(value)                   (CAN_HPMS_MSI_Msk & (_UINT32_(value) << CAN_HPMS_MSI_Pos)) /* Assignment of value for MSI in the CAN_HPMS register */
#define   CAN_HPMS_MSI_NONE_Val               _UINT32_(0x0)                                        /* (CAN_HPMS) No FIFO selected  */
#define   CAN_HPMS_MSI_LOST_Val               _UINT32_(0x1)                                        /* (CAN_HPMS) FIFO message lost  */
#define   CAN_HPMS_MSI_FIFO0_Val              _UINT32_(0x2)                                        /* (CAN_HPMS) Message stored in FIFO 0  */
#define   CAN_HPMS_MSI_FIFO1_Val              _UINT32_(0x3)                                        /* (CAN_HPMS) Message stored in FIFO 1  */
#define CAN_HPMS_MSI_NONE                     (CAN_HPMS_MSI_NONE_Val << CAN_HPMS_MSI_Pos)          /* (CAN_HPMS) No FIFO selected Position */
#define CAN_HPMS_MSI_LOST                     (CAN_HPMS_MSI_LOST_Val << CAN_HPMS_MSI_Pos)          /* (CAN_HPMS) FIFO message lost Position */
#define CAN_HPMS_MSI_FIFO0                    (CAN_HPMS_MSI_FIFO0_Val << CAN_HPMS_MSI_Pos)         /* (CAN_HPMS) Message stored in FIFO 0 Position */
#define CAN_HPMS_MSI_FIFO1                    (CAN_HPMS_MSI_FIFO1_Val << CAN_HPMS_MSI_Pos)         /* (CAN_HPMS) Message stored in FIFO 1 Position */
#define CAN_HPMS_FIDX_Pos                     _UINT32_(8)                                          /* (CAN_HPMS) Filter Index Position */
#define CAN_HPMS_FIDX_Msk                     (_UINT32_(0x7F) << CAN_HPMS_FIDX_Pos)                /* (CAN_HPMS) Filter Index Mask */
#define CAN_HPMS_FIDX(value)                  (CAN_HPMS_FIDX_Msk & (_UINT32_(value) << CAN_HPMS_FIDX_Pos)) /* Assignment of value for FIDX in the CAN_HPMS register */
#define CAN_HPMS_FLST_Pos                     _UINT32_(15)                                         /* (CAN_HPMS) Filter List Position */
#define CAN_HPMS_FLST_Msk                     (_UINT32_(0x1) << CAN_HPMS_FLST_Pos)                 /* (CAN_HPMS) Filter List Mask */
#define CAN_HPMS_FLST(value)                  (CAN_HPMS_FLST_Msk & (_UINT32_(value) << CAN_HPMS_FLST_Pos)) /* Assignment of value for FLST in the CAN_HPMS register */
#define CAN_HPMS_Msk                          _UINT32_(0x0000FFFF)                                 /* (CAN_HPMS) Register Mask  */


/* -------- CAN_NDAT1 : (CAN Offset: 0x98) (R/W 32) New Data 1 -------- */
#define CAN_NDAT1_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_NDAT1) New Data 1  Reset Value */

#define CAN_NDAT1_ND0_Pos                     _UINT32_(0)                                          /* (CAN_NDAT1) New Data 0 Position */
#define CAN_NDAT1_ND0_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND0_Pos)                 /* (CAN_NDAT1) New Data 0 Mask */
#define CAN_NDAT1_ND0(value)                  (CAN_NDAT1_ND0_Msk & (_UINT32_(value) << CAN_NDAT1_ND0_Pos)) /* Assignment of value for ND0 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND1_Pos                     _UINT32_(1)                                          /* (CAN_NDAT1) New Data 1 Position */
#define CAN_NDAT1_ND1_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND1_Pos)                 /* (CAN_NDAT1) New Data 1 Mask */
#define CAN_NDAT1_ND1(value)                  (CAN_NDAT1_ND1_Msk & (_UINT32_(value) << CAN_NDAT1_ND1_Pos)) /* Assignment of value for ND1 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND2_Pos                     _UINT32_(2)                                          /* (CAN_NDAT1) New Data 2 Position */
#define CAN_NDAT1_ND2_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND2_Pos)                 /* (CAN_NDAT1) New Data 2 Mask */
#define CAN_NDAT1_ND2(value)                  (CAN_NDAT1_ND2_Msk & (_UINT32_(value) << CAN_NDAT1_ND2_Pos)) /* Assignment of value for ND2 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND3_Pos                     _UINT32_(3)                                          /* (CAN_NDAT1) New Data 3 Position */
#define CAN_NDAT1_ND3_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND3_Pos)                 /* (CAN_NDAT1) New Data 3 Mask */
#define CAN_NDAT1_ND3(value)                  (CAN_NDAT1_ND3_Msk & (_UINT32_(value) << CAN_NDAT1_ND3_Pos)) /* Assignment of value for ND3 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND4_Pos                     _UINT32_(4)                                          /* (CAN_NDAT1) New Data 4 Position */
#define CAN_NDAT1_ND4_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND4_Pos)                 /* (CAN_NDAT1) New Data 4 Mask */
#define CAN_NDAT1_ND4(value)                  (CAN_NDAT1_ND4_Msk & (_UINT32_(value) << CAN_NDAT1_ND4_Pos)) /* Assignment of value for ND4 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND5_Pos                     _UINT32_(5)                                          /* (CAN_NDAT1) New Data 5 Position */
#define CAN_NDAT1_ND5_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND5_Pos)                 /* (CAN_NDAT1) New Data 5 Mask */
#define CAN_NDAT1_ND5(value)                  (CAN_NDAT1_ND5_Msk & (_UINT32_(value) << CAN_NDAT1_ND5_Pos)) /* Assignment of value for ND5 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND6_Pos                     _UINT32_(6)                                          /* (CAN_NDAT1) New Data 6 Position */
#define CAN_NDAT1_ND6_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND6_Pos)                 /* (CAN_NDAT1) New Data 6 Mask */
#define CAN_NDAT1_ND6(value)                  (CAN_NDAT1_ND6_Msk & (_UINT32_(value) << CAN_NDAT1_ND6_Pos)) /* Assignment of value for ND6 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND7_Pos                     _UINT32_(7)                                          /* (CAN_NDAT1) New Data 7 Position */
#define CAN_NDAT1_ND7_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND7_Pos)                 /* (CAN_NDAT1) New Data 7 Mask */
#define CAN_NDAT1_ND7(value)                  (CAN_NDAT1_ND7_Msk & (_UINT32_(value) << CAN_NDAT1_ND7_Pos)) /* Assignment of value for ND7 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND8_Pos                     _UINT32_(8)                                          /* (CAN_NDAT1) New Data 8 Position */
#define CAN_NDAT1_ND8_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND8_Pos)                 /* (CAN_NDAT1) New Data 8 Mask */
#define CAN_NDAT1_ND8(value)                  (CAN_NDAT1_ND8_Msk & (_UINT32_(value) << CAN_NDAT1_ND8_Pos)) /* Assignment of value for ND8 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND9_Pos                     _UINT32_(9)                                          /* (CAN_NDAT1) New Data 9 Position */
#define CAN_NDAT1_ND9_Msk                     (_UINT32_(0x1) << CAN_NDAT1_ND9_Pos)                 /* (CAN_NDAT1) New Data 9 Mask */
#define CAN_NDAT1_ND9(value)                  (CAN_NDAT1_ND9_Msk & (_UINT32_(value) << CAN_NDAT1_ND9_Pos)) /* Assignment of value for ND9 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND10_Pos                    _UINT32_(10)                                         /* (CAN_NDAT1) New Data 10 Position */
#define CAN_NDAT1_ND10_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND10_Pos)                /* (CAN_NDAT1) New Data 10 Mask */
#define CAN_NDAT1_ND10(value)                 (CAN_NDAT1_ND10_Msk & (_UINT32_(value) << CAN_NDAT1_ND10_Pos)) /* Assignment of value for ND10 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND11_Pos                    _UINT32_(11)                                         /* (CAN_NDAT1) New Data 11 Position */
#define CAN_NDAT1_ND11_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND11_Pos)                /* (CAN_NDAT1) New Data 11 Mask */
#define CAN_NDAT1_ND11(value)                 (CAN_NDAT1_ND11_Msk & (_UINT32_(value) << CAN_NDAT1_ND11_Pos)) /* Assignment of value for ND11 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND12_Pos                    _UINT32_(12)                                         /* (CAN_NDAT1) New Data 12 Position */
#define CAN_NDAT1_ND12_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND12_Pos)                /* (CAN_NDAT1) New Data 12 Mask */
#define CAN_NDAT1_ND12(value)                 (CAN_NDAT1_ND12_Msk & (_UINT32_(value) << CAN_NDAT1_ND12_Pos)) /* Assignment of value for ND12 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND13_Pos                    _UINT32_(13)                                         /* (CAN_NDAT1) New Data 13 Position */
#define CAN_NDAT1_ND13_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND13_Pos)                /* (CAN_NDAT1) New Data 13 Mask */
#define CAN_NDAT1_ND13(value)                 (CAN_NDAT1_ND13_Msk & (_UINT32_(value) << CAN_NDAT1_ND13_Pos)) /* Assignment of value for ND13 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND14_Pos                    _UINT32_(14)                                         /* (CAN_NDAT1) New Data 14 Position */
#define CAN_NDAT1_ND14_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND14_Pos)                /* (CAN_NDAT1) New Data 14 Mask */
#define CAN_NDAT1_ND14(value)                 (CAN_NDAT1_ND14_Msk & (_UINT32_(value) << CAN_NDAT1_ND14_Pos)) /* Assignment of value for ND14 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND15_Pos                    _UINT32_(15)                                         /* (CAN_NDAT1) New Data 15 Position */
#define CAN_NDAT1_ND15_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND15_Pos)                /* (CAN_NDAT1) New Data 15 Mask */
#define CAN_NDAT1_ND15(value)                 (CAN_NDAT1_ND15_Msk & (_UINT32_(value) << CAN_NDAT1_ND15_Pos)) /* Assignment of value for ND15 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND16_Pos                    _UINT32_(16)                                         /* (CAN_NDAT1) New Data 16 Position */
#define CAN_NDAT1_ND16_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND16_Pos)                /* (CAN_NDAT1) New Data 16 Mask */
#define CAN_NDAT1_ND16(value)                 (CAN_NDAT1_ND16_Msk & (_UINT32_(value) << CAN_NDAT1_ND16_Pos)) /* Assignment of value for ND16 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND17_Pos                    _UINT32_(17)                                         /* (CAN_NDAT1) New Data 17 Position */
#define CAN_NDAT1_ND17_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND17_Pos)                /* (CAN_NDAT1) New Data 17 Mask */
#define CAN_NDAT1_ND17(value)                 (CAN_NDAT1_ND17_Msk & (_UINT32_(value) << CAN_NDAT1_ND17_Pos)) /* Assignment of value for ND17 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND18_Pos                    _UINT32_(18)                                         /* (CAN_NDAT1) New Data 18 Position */
#define CAN_NDAT1_ND18_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND18_Pos)                /* (CAN_NDAT1) New Data 18 Mask */
#define CAN_NDAT1_ND18(value)                 (CAN_NDAT1_ND18_Msk & (_UINT32_(value) << CAN_NDAT1_ND18_Pos)) /* Assignment of value for ND18 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND19_Pos                    _UINT32_(19)                                         /* (CAN_NDAT1) New Data 19 Position */
#define CAN_NDAT1_ND19_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND19_Pos)                /* (CAN_NDAT1) New Data 19 Mask */
#define CAN_NDAT1_ND19(value)                 (CAN_NDAT1_ND19_Msk & (_UINT32_(value) << CAN_NDAT1_ND19_Pos)) /* Assignment of value for ND19 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND20_Pos                    _UINT32_(20)                                         /* (CAN_NDAT1) New Data 20 Position */
#define CAN_NDAT1_ND20_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND20_Pos)                /* (CAN_NDAT1) New Data 20 Mask */
#define CAN_NDAT1_ND20(value)                 (CAN_NDAT1_ND20_Msk & (_UINT32_(value) << CAN_NDAT1_ND20_Pos)) /* Assignment of value for ND20 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND21_Pos                    _UINT32_(21)                                         /* (CAN_NDAT1) New Data 21 Position */
#define CAN_NDAT1_ND21_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND21_Pos)                /* (CAN_NDAT1) New Data 21 Mask */
#define CAN_NDAT1_ND21(value)                 (CAN_NDAT1_ND21_Msk & (_UINT32_(value) << CAN_NDAT1_ND21_Pos)) /* Assignment of value for ND21 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND22_Pos                    _UINT32_(22)                                         /* (CAN_NDAT1) New Data 22 Position */
#define CAN_NDAT1_ND22_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND22_Pos)                /* (CAN_NDAT1) New Data 22 Mask */
#define CAN_NDAT1_ND22(value)                 (CAN_NDAT1_ND22_Msk & (_UINT32_(value) << CAN_NDAT1_ND22_Pos)) /* Assignment of value for ND22 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND23_Pos                    _UINT32_(23)                                         /* (CAN_NDAT1) New Data 23 Position */
#define CAN_NDAT1_ND23_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND23_Pos)                /* (CAN_NDAT1) New Data 23 Mask */
#define CAN_NDAT1_ND23(value)                 (CAN_NDAT1_ND23_Msk & (_UINT32_(value) << CAN_NDAT1_ND23_Pos)) /* Assignment of value for ND23 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND24_Pos                    _UINT32_(24)                                         /* (CAN_NDAT1) New Data 24 Position */
#define CAN_NDAT1_ND24_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND24_Pos)                /* (CAN_NDAT1) New Data 24 Mask */
#define CAN_NDAT1_ND24(value)                 (CAN_NDAT1_ND24_Msk & (_UINT32_(value) << CAN_NDAT1_ND24_Pos)) /* Assignment of value for ND24 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND25_Pos                    _UINT32_(25)                                         /* (CAN_NDAT1) New Data 25 Position */
#define CAN_NDAT1_ND25_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND25_Pos)                /* (CAN_NDAT1) New Data 25 Mask */
#define CAN_NDAT1_ND25(value)                 (CAN_NDAT1_ND25_Msk & (_UINT32_(value) << CAN_NDAT1_ND25_Pos)) /* Assignment of value for ND25 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND26_Pos                    _UINT32_(26)                                         /* (CAN_NDAT1) New Data 26 Position */
#define CAN_NDAT1_ND26_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND26_Pos)                /* (CAN_NDAT1) New Data 26 Mask */
#define CAN_NDAT1_ND26(value)                 (CAN_NDAT1_ND26_Msk & (_UINT32_(value) << CAN_NDAT1_ND26_Pos)) /* Assignment of value for ND26 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND27_Pos                    _UINT32_(27)                                         /* (CAN_NDAT1) New Data 27 Position */
#define CAN_NDAT1_ND27_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND27_Pos)                /* (CAN_NDAT1) New Data 27 Mask */
#define CAN_NDAT1_ND27(value)                 (CAN_NDAT1_ND27_Msk & (_UINT32_(value) << CAN_NDAT1_ND27_Pos)) /* Assignment of value for ND27 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND28_Pos                    _UINT32_(28)                                         /* (CAN_NDAT1) New Data 28 Position */
#define CAN_NDAT1_ND28_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND28_Pos)                /* (CAN_NDAT1) New Data 28 Mask */
#define CAN_NDAT1_ND28(value)                 (CAN_NDAT1_ND28_Msk & (_UINT32_(value) << CAN_NDAT1_ND28_Pos)) /* Assignment of value for ND28 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND29_Pos                    _UINT32_(29)                                         /* (CAN_NDAT1) New Data 29 Position */
#define CAN_NDAT1_ND29_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND29_Pos)                /* (CAN_NDAT1) New Data 29 Mask */
#define CAN_NDAT1_ND29(value)                 (CAN_NDAT1_ND29_Msk & (_UINT32_(value) << CAN_NDAT1_ND29_Pos)) /* Assignment of value for ND29 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND30_Pos                    _UINT32_(30)                                         /* (CAN_NDAT1) New Data 30 Position */
#define CAN_NDAT1_ND30_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND30_Pos)                /* (CAN_NDAT1) New Data 30 Mask */
#define CAN_NDAT1_ND30(value)                 (CAN_NDAT1_ND30_Msk & (_UINT32_(value) << CAN_NDAT1_ND30_Pos)) /* Assignment of value for ND30 in the CAN_NDAT1 register */
#define CAN_NDAT1_ND31_Pos                    _UINT32_(31)                                         /* (CAN_NDAT1) New Data 31 Position */
#define CAN_NDAT1_ND31_Msk                    (_UINT32_(0x1) << CAN_NDAT1_ND31_Pos)                /* (CAN_NDAT1) New Data 31 Mask */
#define CAN_NDAT1_ND31(value)                 (CAN_NDAT1_ND31_Msk & (_UINT32_(value) << CAN_NDAT1_ND31_Pos)) /* Assignment of value for ND31 in the CAN_NDAT1 register */
#define CAN_NDAT1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_NDAT1) Register Mask  */

#define CAN_NDAT1_ND_Pos                      _UINT32_(0)                                          /* (CAN_NDAT1 Position) New Data 3x */
#define CAN_NDAT1_ND_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_NDAT1_ND_Pos)           /* (CAN_NDAT1 Mask) ND */
#define CAN_NDAT1_ND(value)                   (CAN_NDAT1_ND_Msk & (_UINT32_(value) << CAN_NDAT1_ND_Pos)) 

/* -------- CAN_NDAT2 : (CAN Offset: 0x9C) (R/W 32) New Data 2 -------- */
#define CAN_NDAT2_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_NDAT2) New Data 2  Reset Value */

#define CAN_NDAT2_ND32_Pos                    _UINT32_(0)                                          /* (CAN_NDAT2) New Data 32 Position */
#define CAN_NDAT2_ND32_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND32_Pos)                /* (CAN_NDAT2) New Data 32 Mask */
#define CAN_NDAT2_ND32(value)                 (CAN_NDAT2_ND32_Msk & (_UINT32_(value) << CAN_NDAT2_ND32_Pos)) /* Assignment of value for ND32 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND33_Pos                    _UINT32_(1)                                          /* (CAN_NDAT2) New Data 33 Position */
#define CAN_NDAT2_ND33_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND33_Pos)                /* (CAN_NDAT2) New Data 33 Mask */
#define CAN_NDAT2_ND33(value)                 (CAN_NDAT2_ND33_Msk & (_UINT32_(value) << CAN_NDAT2_ND33_Pos)) /* Assignment of value for ND33 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND34_Pos                    _UINT32_(2)                                          /* (CAN_NDAT2) New Data 34 Position */
#define CAN_NDAT2_ND34_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND34_Pos)                /* (CAN_NDAT2) New Data 34 Mask */
#define CAN_NDAT2_ND34(value)                 (CAN_NDAT2_ND34_Msk & (_UINT32_(value) << CAN_NDAT2_ND34_Pos)) /* Assignment of value for ND34 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND35_Pos                    _UINT32_(3)                                          /* (CAN_NDAT2) New Data 35 Position */
#define CAN_NDAT2_ND35_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND35_Pos)                /* (CAN_NDAT2) New Data 35 Mask */
#define CAN_NDAT2_ND35(value)                 (CAN_NDAT2_ND35_Msk & (_UINT32_(value) << CAN_NDAT2_ND35_Pos)) /* Assignment of value for ND35 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND36_Pos                    _UINT32_(4)                                          /* (CAN_NDAT2) New Data 36 Position */
#define CAN_NDAT2_ND36_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND36_Pos)                /* (CAN_NDAT2) New Data 36 Mask */
#define CAN_NDAT2_ND36(value)                 (CAN_NDAT2_ND36_Msk & (_UINT32_(value) << CAN_NDAT2_ND36_Pos)) /* Assignment of value for ND36 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND37_Pos                    _UINT32_(5)                                          /* (CAN_NDAT2) New Data 37 Position */
#define CAN_NDAT2_ND37_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND37_Pos)                /* (CAN_NDAT2) New Data 37 Mask */
#define CAN_NDAT2_ND37(value)                 (CAN_NDAT2_ND37_Msk & (_UINT32_(value) << CAN_NDAT2_ND37_Pos)) /* Assignment of value for ND37 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND38_Pos                    _UINT32_(6)                                          /* (CAN_NDAT2) New Data 38 Position */
#define CAN_NDAT2_ND38_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND38_Pos)                /* (CAN_NDAT2) New Data 38 Mask */
#define CAN_NDAT2_ND38(value)                 (CAN_NDAT2_ND38_Msk & (_UINT32_(value) << CAN_NDAT2_ND38_Pos)) /* Assignment of value for ND38 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND39_Pos                    _UINT32_(7)                                          /* (CAN_NDAT2) New Data 39 Position */
#define CAN_NDAT2_ND39_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND39_Pos)                /* (CAN_NDAT2) New Data 39 Mask */
#define CAN_NDAT2_ND39(value)                 (CAN_NDAT2_ND39_Msk & (_UINT32_(value) << CAN_NDAT2_ND39_Pos)) /* Assignment of value for ND39 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND40_Pos                    _UINT32_(8)                                          /* (CAN_NDAT2) New Data 40 Position */
#define CAN_NDAT2_ND40_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND40_Pos)                /* (CAN_NDAT2) New Data 40 Mask */
#define CAN_NDAT2_ND40(value)                 (CAN_NDAT2_ND40_Msk & (_UINT32_(value) << CAN_NDAT2_ND40_Pos)) /* Assignment of value for ND40 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND41_Pos                    _UINT32_(9)                                          /* (CAN_NDAT2) New Data 41 Position */
#define CAN_NDAT2_ND41_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND41_Pos)                /* (CAN_NDAT2) New Data 41 Mask */
#define CAN_NDAT2_ND41(value)                 (CAN_NDAT2_ND41_Msk & (_UINT32_(value) << CAN_NDAT2_ND41_Pos)) /* Assignment of value for ND41 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND42_Pos                    _UINT32_(10)                                         /* (CAN_NDAT2) New Data 42 Position */
#define CAN_NDAT2_ND42_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND42_Pos)                /* (CAN_NDAT2) New Data 42 Mask */
#define CAN_NDAT2_ND42(value)                 (CAN_NDAT2_ND42_Msk & (_UINT32_(value) << CAN_NDAT2_ND42_Pos)) /* Assignment of value for ND42 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND43_Pos                    _UINT32_(11)                                         /* (CAN_NDAT2) New Data 43 Position */
#define CAN_NDAT2_ND43_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND43_Pos)                /* (CAN_NDAT2) New Data 43 Mask */
#define CAN_NDAT2_ND43(value)                 (CAN_NDAT2_ND43_Msk & (_UINT32_(value) << CAN_NDAT2_ND43_Pos)) /* Assignment of value for ND43 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND44_Pos                    _UINT32_(12)                                         /* (CAN_NDAT2) New Data 44 Position */
#define CAN_NDAT2_ND44_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND44_Pos)                /* (CAN_NDAT2) New Data 44 Mask */
#define CAN_NDAT2_ND44(value)                 (CAN_NDAT2_ND44_Msk & (_UINT32_(value) << CAN_NDAT2_ND44_Pos)) /* Assignment of value for ND44 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND45_Pos                    _UINT32_(13)                                         /* (CAN_NDAT2) New Data 45 Position */
#define CAN_NDAT2_ND45_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND45_Pos)                /* (CAN_NDAT2) New Data 45 Mask */
#define CAN_NDAT2_ND45(value)                 (CAN_NDAT2_ND45_Msk & (_UINT32_(value) << CAN_NDAT2_ND45_Pos)) /* Assignment of value for ND45 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND46_Pos                    _UINT32_(14)                                         /* (CAN_NDAT2) New Data 46 Position */
#define CAN_NDAT2_ND46_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND46_Pos)                /* (CAN_NDAT2) New Data 46 Mask */
#define CAN_NDAT2_ND46(value)                 (CAN_NDAT2_ND46_Msk & (_UINT32_(value) << CAN_NDAT2_ND46_Pos)) /* Assignment of value for ND46 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND47_Pos                    _UINT32_(15)                                         /* (CAN_NDAT2) New Data 47 Position */
#define CAN_NDAT2_ND47_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND47_Pos)                /* (CAN_NDAT2) New Data 47 Mask */
#define CAN_NDAT2_ND47(value)                 (CAN_NDAT2_ND47_Msk & (_UINT32_(value) << CAN_NDAT2_ND47_Pos)) /* Assignment of value for ND47 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND48_Pos                    _UINT32_(16)                                         /* (CAN_NDAT2) New Data 48 Position */
#define CAN_NDAT2_ND48_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND48_Pos)                /* (CAN_NDAT2) New Data 48 Mask */
#define CAN_NDAT2_ND48(value)                 (CAN_NDAT2_ND48_Msk & (_UINT32_(value) << CAN_NDAT2_ND48_Pos)) /* Assignment of value for ND48 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND49_Pos                    _UINT32_(17)                                         /* (CAN_NDAT2) New Data 49 Position */
#define CAN_NDAT2_ND49_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND49_Pos)                /* (CAN_NDAT2) New Data 49 Mask */
#define CAN_NDAT2_ND49(value)                 (CAN_NDAT2_ND49_Msk & (_UINT32_(value) << CAN_NDAT2_ND49_Pos)) /* Assignment of value for ND49 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND50_Pos                    _UINT32_(18)                                         /* (CAN_NDAT2) New Data 50 Position */
#define CAN_NDAT2_ND50_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND50_Pos)                /* (CAN_NDAT2) New Data 50 Mask */
#define CAN_NDAT2_ND50(value)                 (CAN_NDAT2_ND50_Msk & (_UINT32_(value) << CAN_NDAT2_ND50_Pos)) /* Assignment of value for ND50 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND51_Pos                    _UINT32_(19)                                         /* (CAN_NDAT2) New Data 51 Position */
#define CAN_NDAT2_ND51_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND51_Pos)                /* (CAN_NDAT2) New Data 51 Mask */
#define CAN_NDAT2_ND51(value)                 (CAN_NDAT2_ND51_Msk & (_UINT32_(value) << CAN_NDAT2_ND51_Pos)) /* Assignment of value for ND51 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND52_Pos                    _UINT32_(20)                                         /* (CAN_NDAT2) New Data 52 Position */
#define CAN_NDAT2_ND52_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND52_Pos)                /* (CAN_NDAT2) New Data 52 Mask */
#define CAN_NDAT2_ND52(value)                 (CAN_NDAT2_ND52_Msk & (_UINT32_(value) << CAN_NDAT2_ND52_Pos)) /* Assignment of value for ND52 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND53_Pos                    _UINT32_(21)                                         /* (CAN_NDAT2) New Data 53 Position */
#define CAN_NDAT2_ND53_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND53_Pos)                /* (CAN_NDAT2) New Data 53 Mask */
#define CAN_NDAT2_ND53(value)                 (CAN_NDAT2_ND53_Msk & (_UINT32_(value) << CAN_NDAT2_ND53_Pos)) /* Assignment of value for ND53 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND54_Pos                    _UINT32_(22)                                         /* (CAN_NDAT2) New Data 54 Position */
#define CAN_NDAT2_ND54_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND54_Pos)                /* (CAN_NDAT2) New Data 54 Mask */
#define CAN_NDAT2_ND54(value)                 (CAN_NDAT2_ND54_Msk & (_UINT32_(value) << CAN_NDAT2_ND54_Pos)) /* Assignment of value for ND54 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND55_Pos                    _UINT32_(23)                                         /* (CAN_NDAT2) New Data 55 Position */
#define CAN_NDAT2_ND55_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND55_Pos)                /* (CAN_NDAT2) New Data 55 Mask */
#define CAN_NDAT2_ND55(value)                 (CAN_NDAT2_ND55_Msk & (_UINT32_(value) << CAN_NDAT2_ND55_Pos)) /* Assignment of value for ND55 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND56_Pos                    _UINT32_(24)                                         /* (CAN_NDAT2) New Data 56 Position */
#define CAN_NDAT2_ND56_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND56_Pos)                /* (CAN_NDAT2) New Data 56 Mask */
#define CAN_NDAT2_ND56(value)                 (CAN_NDAT2_ND56_Msk & (_UINT32_(value) << CAN_NDAT2_ND56_Pos)) /* Assignment of value for ND56 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND57_Pos                    _UINT32_(25)                                         /* (CAN_NDAT2) New Data 57 Position */
#define CAN_NDAT2_ND57_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND57_Pos)                /* (CAN_NDAT2) New Data 57 Mask */
#define CAN_NDAT2_ND57(value)                 (CAN_NDAT2_ND57_Msk & (_UINT32_(value) << CAN_NDAT2_ND57_Pos)) /* Assignment of value for ND57 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND58_Pos                    _UINT32_(26)                                         /* (CAN_NDAT2) New Data 58 Position */
#define CAN_NDAT2_ND58_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND58_Pos)                /* (CAN_NDAT2) New Data 58 Mask */
#define CAN_NDAT2_ND58(value)                 (CAN_NDAT2_ND58_Msk & (_UINT32_(value) << CAN_NDAT2_ND58_Pos)) /* Assignment of value for ND58 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND59_Pos                    _UINT32_(27)                                         /* (CAN_NDAT2) New Data 59 Position */
#define CAN_NDAT2_ND59_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND59_Pos)                /* (CAN_NDAT2) New Data 59 Mask */
#define CAN_NDAT2_ND59(value)                 (CAN_NDAT2_ND59_Msk & (_UINT32_(value) << CAN_NDAT2_ND59_Pos)) /* Assignment of value for ND59 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND60_Pos                    _UINT32_(28)                                         /* (CAN_NDAT2) New Data 60 Position */
#define CAN_NDAT2_ND60_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND60_Pos)                /* (CAN_NDAT2) New Data 60 Mask */
#define CAN_NDAT2_ND60(value)                 (CAN_NDAT2_ND60_Msk & (_UINT32_(value) << CAN_NDAT2_ND60_Pos)) /* Assignment of value for ND60 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND61_Pos                    _UINT32_(29)                                         /* (CAN_NDAT2) New Data 61 Position */
#define CAN_NDAT2_ND61_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND61_Pos)                /* (CAN_NDAT2) New Data 61 Mask */
#define CAN_NDAT2_ND61(value)                 (CAN_NDAT2_ND61_Msk & (_UINT32_(value) << CAN_NDAT2_ND61_Pos)) /* Assignment of value for ND61 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND62_Pos                    _UINT32_(30)                                         /* (CAN_NDAT2) New Data 62 Position */
#define CAN_NDAT2_ND62_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND62_Pos)                /* (CAN_NDAT2) New Data 62 Mask */
#define CAN_NDAT2_ND62(value)                 (CAN_NDAT2_ND62_Msk & (_UINT32_(value) << CAN_NDAT2_ND62_Pos)) /* Assignment of value for ND62 in the CAN_NDAT2 register */
#define CAN_NDAT2_ND63_Pos                    _UINT32_(31)                                         /* (CAN_NDAT2) New Data 63 Position */
#define CAN_NDAT2_ND63_Msk                    (_UINT32_(0x1) << CAN_NDAT2_ND63_Pos)                /* (CAN_NDAT2) New Data 63 Mask */
#define CAN_NDAT2_ND63(value)                 (CAN_NDAT2_ND63_Msk & (_UINT32_(value) << CAN_NDAT2_ND63_Pos)) /* Assignment of value for ND63 in the CAN_NDAT2 register */
#define CAN_NDAT2_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_NDAT2) Register Mask  */

#define CAN_NDAT2_ND_Pos                      _UINT32_(0)                                          /* (CAN_NDAT2 Position) New Data 63 */
#define CAN_NDAT2_ND_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_NDAT2_ND_Pos)           /* (CAN_NDAT2 Mask) ND */
#define CAN_NDAT2_ND(value)                   (CAN_NDAT2_ND_Msk & (_UINT32_(value) << CAN_NDAT2_ND_Pos)) 

/* -------- CAN_RXF0C : (CAN Offset: 0xA0) (R/W 32) Rx FIFO 0 Configuration -------- */
#define CAN_RXF0C_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXF0C) Rx FIFO 0 Configuration  Reset Value */

#define CAN_RXF0C_F0SA_Pos                    _UINT32_(0)                                          /* (CAN_RXF0C) Rx FIFO 0 Start Address Position */
#define CAN_RXF0C_F0SA_Msk                    (_UINT32_(0xFFFF) << CAN_RXF0C_F0SA_Pos)             /* (CAN_RXF0C) Rx FIFO 0 Start Address Mask */
#define CAN_RXF0C_F0SA(value)                 (CAN_RXF0C_F0SA_Msk & (_UINT32_(value) << CAN_RXF0C_F0SA_Pos)) /* Assignment of value for F0SA in the CAN_RXF0C register */
#define CAN_RXF0C_F0S_Pos                     _UINT32_(16)                                         /* (CAN_RXF0C) Rx FIFO 0 Size Position */
#define CAN_RXF0C_F0S_Msk                     (_UINT32_(0x7F) << CAN_RXF0C_F0S_Pos)                /* (CAN_RXF0C) Rx FIFO 0 Size Mask */
#define CAN_RXF0C_F0S(value)                  (CAN_RXF0C_F0S_Msk & (_UINT32_(value) << CAN_RXF0C_F0S_Pos)) /* Assignment of value for F0S in the CAN_RXF0C register */
#define CAN_RXF0C_F0WM_Pos                    _UINT32_(24)                                         /* (CAN_RXF0C) Rx FIFO 0 Watermark Position */
#define CAN_RXF0C_F0WM_Msk                    (_UINT32_(0x7F) << CAN_RXF0C_F0WM_Pos)               /* (CAN_RXF0C) Rx FIFO 0 Watermark Mask */
#define CAN_RXF0C_F0WM(value)                 (CAN_RXF0C_F0WM_Msk & (_UINT32_(value) << CAN_RXF0C_F0WM_Pos)) /* Assignment of value for F0WM in the CAN_RXF0C register */
#define CAN_RXF0C_F0OM_Pos                    _UINT32_(31)                                         /* (CAN_RXF0C) FIFO 0 Operation Mode Position */
#define CAN_RXF0C_F0OM_Msk                    (_UINT32_(0x1) << CAN_RXF0C_F0OM_Pos)                /* (CAN_RXF0C) FIFO 0 Operation Mode Mask */
#define CAN_RXF0C_F0OM(value)                 (CAN_RXF0C_F0OM_Msk & (_UINT32_(value) << CAN_RXF0C_F0OM_Pos)) /* Assignment of value for F0OM in the CAN_RXF0C register */
#define CAN_RXF0C_Msk                         _UINT32_(0xFF7FFFFF)                                 /* (CAN_RXF0C) Register Mask  */


/* -------- CAN_RXF0S : (CAN Offset: 0xA4) ( R/ 32) Rx FIFO 0 Status -------- */
#define CAN_RXF0S_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXF0S) Rx FIFO 0 Status  Reset Value */

#define CAN_RXF0S_F0FL_Pos                    _UINT32_(0)                                          /* (CAN_RXF0S) Rx FIFO 0 Fill Level Position */
#define CAN_RXF0S_F0FL_Msk                    (_UINT32_(0x7F) << CAN_RXF0S_F0FL_Pos)               /* (CAN_RXF0S) Rx FIFO 0 Fill Level Mask */
#define CAN_RXF0S_F0FL(value)                 (CAN_RXF0S_F0FL_Msk & (_UINT32_(value) << CAN_RXF0S_F0FL_Pos)) /* Assignment of value for F0FL in the CAN_RXF0S register */
#define CAN_RXF0S_F0GI_Pos                    _UINT32_(8)                                          /* (CAN_RXF0S) Rx FIFO 0 Get Index Position */
#define CAN_RXF0S_F0GI_Msk                    (_UINT32_(0x3F) << CAN_RXF0S_F0GI_Pos)               /* (CAN_RXF0S) Rx FIFO 0 Get Index Mask */
#define CAN_RXF0S_F0GI(value)                 (CAN_RXF0S_F0GI_Msk & (_UINT32_(value) << CAN_RXF0S_F0GI_Pos)) /* Assignment of value for F0GI in the CAN_RXF0S register */
#define CAN_RXF0S_F0PI_Pos                    _UINT32_(16)                                         /* (CAN_RXF0S) Rx FIFO 0 Put Index Position */
#define CAN_RXF0S_F0PI_Msk                    (_UINT32_(0x3F) << CAN_RXF0S_F0PI_Pos)               /* (CAN_RXF0S) Rx FIFO 0 Put Index Mask */
#define CAN_RXF0S_F0PI(value)                 (CAN_RXF0S_F0PI_Msk & (_UINT32_(value) << CAN_RXF0S_F0PI_Pos)) /* Assignment of value for F0PI in the CAN_RXF0S register */
#define CAN_RXF0S_F0F_Pos                     _UINT32_(24)                                         /* (CAN_RXF0S) Rx FIFO 0 Full Position */
#define CAN_RXF0S_F0F_Msk                     (_UINT32_(0x1) << CAN_RXF0S_F0F_Pos)                 /* (CAN_RXF0S) Rx FIFO 0 Full Mask */
#define CAN_RXF0S_F0F(value)                  (CAN_RXF0S_F0F_Msk & (_UINT32_(value) << CAN_RXF0S_F0F_Pos)) /* Assignment of value for F0F in the CAN_RXF0S register */
#define CAN_RXF0S_RF0L_Pos                    _UINT32_(25)                                         /* (CAN_RXF0S) Rx FIFO 0 Message Lost Position */
#define CAN_RXF0S_RF0L_Msk                    (_UINT32_(0x1) << CAN_RXF0S_RF0L_Pos)                /* (CAN_RXF0S) Rx FIFO 0 Message Lost Mask */
#define CAN_RXF0S_RF0L(value)                 (CAN_RXF0S_RF0L_Msk & (_UINT32_(value) << CAN_RXF0S_RF0L_Pos)) /* Assignment of value for RF0L in the CAN_RXF0S register */
#define CAN_RXF0S_Msk                         _UINT32_(0x033F3F7F)                                 /* (CAN_RXF0S) Register Mask  */


/* -------- CAN_RXF0A : (CAN Offset: 0xA8) (R/W 32) Rx FIFO 0 Acknowledge -------- */
#define CAN_RXF0A_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXF0A) Rx FIFO 0 Acknowledge  Reset Value */

#define CAN_RXF0A_F0AI_Pos                    _UINT32_(0)                                          /* (CAN_RXF0A) Rx FIFO 0 Acknowledge Index Position */
#define CAN_RXF0A_F0AI_Msk                    (_UINT32_(0x3F) << CAN_RXF0A_F0AI_Pos)               /* (CAN_RXF0A) Rx FIFO 0 Acknowledge Index Mask */
#define CAN_RXF0A_F0AI(value)                 (CAN_RXF0A_F0AI_Msk & (_UINT32_(value) << CAN_RXF0A_F0AI_Pos)) /* Assignment of value for F0AI in the CAN_RXF0A register */
#define CAN_RXF0A_Msk                         _UINT32_(0x0000003F)                                 /* (CAN_RXF0A) Register Mask  */


/* -------- CAN_RXBC : (CAN Offset: 0xAC) (R/W 32) Rx Buffer Configuration -------- */
#define CAN_RXBC_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_RXBC) Rx Buffer Configuration  Reset Value */

#define CAN_RXBC_RBSA_Pos                     _UINT32_(0)                                          /* (CAN_RXBC) Rx Buffer Start Address Position */
#define CAN_RXBC_RBSA_Msk                     (_UINT32_(0xFFFF) << CAN_RXBC_RBSA_Pos)              /* (CAN_RXBC) Rx Buffer Start Address Mask */
#define CAN_RXBC_RBSA(value)                  (CAN_RXBC_RBSA_Msk & (_UINT32_(value) << CAN_RXBC_RBSA_Pos)) /* Assignment of value for RBSA in the CAN_RXBC register */
#define CAN_RXBC_Msk                          _UINT32_(0x0000FFFF)                                 /* (CAN_RXBC) Register Mask  */


/* -------- CAN_RXF1C : (CAN Offset: 0xB0) (R/W 32) Rx FIFO 1 Configuration -------- */
#define CAN_RXF1C_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXF1C) Rx FIFO 1 Configuration  Reset Value */

#define CAN_RXF1C_F1SA_Pos                    _UINT32_(0)                                          /* (CAN_RXF1C) Rx FIFO 1 Start Address Position */
#define CAN_RXF1C_F1SA_Msk                    (_UINT32_(0xFFFF) << CAN_RXF1C_F1SA_Pos)             /* (CAN_RXF1C) Rx FIFO 1 Start Address Mask */
#define CAN_RXF1C_F1SA(value)                 (CAN_RXF1C_F1SA_Msk & (_UINT32_(value) << CAN_RXF1C_F1SA_Pos)) /* Assignment of value for F1SA in the CAN_RXF1C register */
#define CAN_RXF1C_F1S_Pos                     _UINT32_(16)                                         /* (CAN_RXF1C) Rx FIFO 1 Size Position */
#define CAN_RXF1C_F1S_Msk                     (_UINT32_(0x7F) << CAN_RXF1C_F1S_Pos)                /* (CAN_RXF1C) Rx FIFO 1 Size Mask */
#define CAN_RXF1C_F1S(value)                  (CAN_RXF1C_F1S_Msk & (_UINT32_(value) << CAN_RXF1C_F1S_Pos)) /* Assignment of value for F1S in the CAN_RXF1C register */
#define CAN_RXF1C_F1WM_Pos                    _UINT32_(24)                                         /* (CAN_RXF1C) Rx FIFO 1 Watermark Position */
#define CAN_RXF1C_F1WM_Msk                    (_UINT32_(0x7F) << CAN_RXF1C_F1WM_Pos)               /* (CAN_RXF1C) Rx FIFO 1 Watermark Mask */
#define CAN_RXF1C_F1WM(value)                 (CAN_RXF1C_F1WM_Msk & (_UINT32_(value) << CAN_RXF1C_F1WM_Pos)) /* Assignment of value for F1WM in the CAN_RXF1C register */
#define CAN_RXF1C_F1OM_Pos                    _UINT32_(31)                                         /* (CAN_RXF1C) FIFO 1 Operation Mode Position */
#define CAN_RXF1C_F1OM_Msk                    (_UINT32_(0x1) << CAN_RXF1C_F1OM_Pos)                /* (CAN_RXF1C) FIFO 1 Operation Mode Mask */
#define CAN_RXF1C_F1OM(value)                 (CAN_RXF1C_F1OM_Msk & (_UINT32_(value) << CAN_RXF1C_F1OM_Pos)) /* Assignment of value for F1OM in the CAN_RXF1C register */
#define CAN_RXF1C_Msk                         _UINT32_(0xFF7FFFFF)                                 /* (CAN_RXF1C) Register Mask  */


/* -------- CAN_RXF1S : (CAN Offset: 0xB4) ( R/ 32) Rx FIFO 1 Status -------- */
#define CAN_RXF1S_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXF1S) Rx FIFO 1 Status  Reset Value */

#define CAN_RXF1S_F1FL_Pos                    _UINT32_(0)                                          /* (CAN_RXF1S) Rx FIFO 1 Fill Level Position */
#define CAN_RXF1S_F1FL_Msk                    (_UINT32_(0x7F) << CAN_RXF1S_F1FL_Pos)               /* (CAN_RXF1S) Rx FIFO 1 Fill Level Mask */
#define CAN_RXF1S_F1FL(value)                 (CAN_RXF1S_F1FL_Msk & (_UINT32_(value) << CAN_RXF1S_F1FL_Pos)) /* Assignment of value for F1FL in the CAN_RXF1S register */
#define CAN_RXF1S_F1GI_Pos                    _UINT32_(8)                                          /* (CAN_RXF1S) Rx FIFO 1 Get Index Position */
#define CAN_RXF1S_F1GI_Msk                    (_UINT32_(0x3F) << CAN_RXF1S_F1GI_Pos)               /* (CAN_RXF1S) Rx FIFO 1 Get Index Mask */
#define CAN_RXF1S_F1GI(value)                 (CAN_RXF1S_F1GI_Msk & (_UINT32_(value) << CAN_RXF1S_F1GI_Pos)) /* Assignment of value for F1GI in the CAN_RXF1S register */
#define CAN_RXF1S_F1PI_Pos                    _UINT32_(16)                                         /* (CAN_RXF1S) Rx FIFO 1 Put Index Position */
#define CAN_RXF1S_F1PI_Msk                    (_UINT32_(0x3F) << CAN_RXF1S_F1PI_Pos)               /* (CAN_RXF1S) Rx FIFO 1 Put Index Mask */
#define CAN_RXF1S_F1PI(value)                 (CAN_RXF1S_F1PI_Msk & (_UINT32_(value) << CAN_RXF1S_F1PI_Pos)) /* Assignment of value for F1PI in the CAN_RXF1S register */
#define CAN_RXF1S_F1F_Pos                     _UINT32_(24)                                         /* (CAN_RXF1S) Rx FIFO 1 Full Position */
#define CAN_RXF1S_F1F_Msk                     (_UINT32_(0x1) << CAN_RXF1S_F1F_Pos)                 /* (CAN_RXF1S) Rx FIFO 1 Full Mask */
#define CAN_RXF1S_F1F(value)                  (CAN_RXF1S_F1F_Msk & (_UINT32_(value) << CAN_RXF1S_F1F_Pos)) /* Assignment of value for F1F in the CAN_RXF1S register */
#define CAN_RXF1S_RF1L_Pos                    _UINT32_(25)                                         /* (CAN_RXF1S) Rx FIFO 1 Message Lost Position */
#define CAN_RXF1S_RF1L_Msk                    (_UINT32_(0x1) << CAN_RXF1S_RF1L_Pos)                /* (CAN_RXF1S) Rx FIFO 1 Message Lost Mask */
#define CAN_RXF1S_RF1L(value)                 (CAN_RXF1S_RF1L_Msk & (_UINT32_(value) << CAN_RXF1S_RF1L_Pos)) /* Assignment of value for RF1L in the CAN_RXF1S register */
#define CAN_RXF1S_DMS_Pos                     _UINT32_(30)                                         /* (CAN_RXF1S) Debug Message Status Position */
#define CAN_RXF1S_DMS_Msk                     (_UINT32_(0x3) << CAN_RXF1S_DMS_Pos)                 /* (CAN_RXF1S) Debug Message Status Mask */
#define CAN_RXF1S_DMS(value)                  (CAN_RXF1S_DMS_Msk & (_UINT32_(value) << CAN_RXF1S_DMS_Pos)) /* Assignment of value for DMS in the CAN_RXF1S register */
#define   CAN_RXF1S_DMS_IDLE_Val              _UINT32_(0x0)                                        /* (CAN_RXF1S) Idle state  */
#define   CAN_RXF1S_DMS_DBGA_Val              _UINT32_(0x1)                                        /* (CAN_RXF1S) Debug message A received  */
#define   CAN_RXF1S_DMS_DBGB_Val              _UINT32_(0x2)                                        /* (CAN_RXF1S) Debug message A/B received  */
#define   CAN_RXF1S_DMS_DBGC_Val              _UINT32_(0x3)                                        /* (CAN_RXF1S) Debug message A/B/C received, DMA request set  */
#define CAN_RXF1S_DMS_IDLE                    (CAN_RXF1S_DMS_IDLE_Val << CAN_RXF1S_DMS_Pos)        /* (CAN_RXF1S) Idle state Position */
#define CAN_RXF1S_DMS_DBGA                    (CAN_RXF1S_DMS_DBGA_Val << CAN_RXF1S_DMS_Pos)        /* (CAN_RXF1S) Debug message A received Position */
#define CAN_RXF1S_DMS_DBGB                    (CAN_RXF1S_DMS_DBGB_Val << CAN_RXF1S_DMS_Pos)        /* (CAN_RXF1S) Debug message A/B received Position */
#define CAN_RXF1S_DMS_DBGC                    (CAN_RXF1S_DMS_DBGC_Val << CAN_RXF1S_DMS_Pos)        /* (CAN_RXF1S) Debug message A/B/C received, DMA request set Position */
#define CAN_RXF1S_Msk                         _UINT32_(0xC33F3F7F)                                 /* (CAN_RXF1S) Register Mask  */


/* -------- CAN_RXF1A : (CAN Offset: 0xB8) (R/W 32) Rx FIFO 1 Acknowledge -------- */
#define CAN_RXF1A_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXF1A) Rx FIFO 1 Acknowledge  Reset Value */

#define CAN_RXF1A_F1AI_Pos                    _UINT32_(0)                                          /* (CAN_RXF1A) Rx FIFO 1 Acknowledge Index Position */
#define CAN_RXF1A_F1AI_Msk                    (_UINT32_(0x3F) << CAN_RXF1A_F1AI_Pos)               /* (CAN_RXF1A) Rx FIFO 1 Acknowledge Index Mask */
#define CAN_RXF1A_F1AI(value)                 (CAN_RXF1A_F1AI_Msk & (_UINT32_(value) << CAN_RXF1A_F1AI_Pos)) /* Assignment of value for F1AI in the CAN_RXF1A register */
#define CAN_RXF1A_Msk                         _UINT32_(0x0000003F)                                 /* (CAN_RXF1A) Register Mask  */


/* -------- CAN_RXESC : (CAN Offset: 0xBC) (R/W 32) Rx Buffer / FIFO Element Size Configuration -------- */
#define CAN_RXESC_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_RXESC) Rx Buffer / FIFO Element Size Configuration  Reset Value */

#define CAN_RXESC_F0DS_Pos                    _UINT32_(0)                                          /* (CAN_RXESC) Rx FIFO 0 Data Field Size Position */
#define CAN_RXESC_F0DS_Msk                    (_UINT32_(0x7) << CAN_RXESC_F0DS_Pos)                /* (CAN_RXESC) Rx FIFO 0 Data Field Size Mask */
#define CAN_RXESC_F0DS(value)                 (CAN_RXESC_F0DS_Msk & (_UINT32_(value) << CAN_RXESC_F0DS_Pos)) /* Assignment of value for F0DS in the CAN_RXESC register */
#define   CAN_RXESC_F0DS_DATA8_Val            _UINT32_(0x0)                                        /* (CAN_RXESC) 8 byte data field  */
#define   CAN_RXESC_F0DS_DATA12_Val           _UINT32_(0x1)                                        /* (CAN_RXESC) 12 byte data field  */
#define   CAN_RXESC_F0DS_DATA16_Val           _UINT32_(0x2)                                        /* (CAN_RXESC) 16 byte data field  */
#define   CAN_RXESC_F0DS_DATA20_Val           _UINT32_(0x3)                                        /* (CAN_RXESC) 20 byte data field  */
#define   CAN_RXESC_F0DS_DATA24_Val           _UINT32_(0x4)                                        /* (CAN_RXESC) 24 byte data field  */
#define   CAN_RXESC_F0DS_DATA32_Val           _UINT32_(0x5)                                        /* (CAN_RXESC) 32 byte data field  */
#define   CAN_RXESC_F0DS_DATA48_Val           _UINT32_(0x6)                                        /* (CAN_RXESC) 48 byte data field  */
#define   CAN_RXESC_F0DS_DATA64_Val           _UINT32_(0x7)                                        /* (CAN_RXESC) 64 byte data field  */
#define CAN_RXESC_F0DS_DATA8                  (CAN_RXESC_F0DS_DATA8_Val << CAN_RXESC_F0DS_Pos)     /* (CAN_RXESC) 8 byte data field Position */
#define CAN_RXESC_F0DS_DATA12                 (CAN_RXESC_F0DS_DATA12_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 12 byte data field Position */
#define CAN_RXESC_F0DS_DATA16                 (CAN_RXESC_F0DS_DATA16_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 16 byte data field Position */
#define CAN_RXESC_F0DS_DATA20                 (CAN_RXESC_F0DS_DATA20_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 20 byte data field Position */
#define CAN_RXESC_F0DS_DATA24                 (CAN_RXESC_F0DS_DATA24_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 24 byte data field Position */
#define CAN_RXESC_F0DS_DATA32                 (CAN_RXESC_F0DS_DATA32_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 32 byte data field Position */
#define CAN_RXESC_F0DS_DATA48                 (CAN_RXESC_F0DS_DATA48_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 48 byte data field Position */
#define CAN_RXESC_F0DS_DATA64                 (CAN_RXESC_F0DS_DATA64_Val << CAN_RXESC_F0DS_Pos)    /* (CAN_RXESC) 64 byte data field Position */
#define CAN_RXESC_F1DS_Pos                    _UINT32_(4)                                          /* (CAN_RXESC) Rx FIFO 1 Data Field Size Position */
#define CAN_RXESC_F1DS_Msk                    (_UINT32_(0x7) << CAN_RXESC_F1DS_Pos)                /* (CAN_RXESC) Rx FIFO 1 Data Field Size Mask */
#define CAN_RXESC_F1DS(value)                 (CAN_RXESC_F1DS_Msk & (_UINT32_(value) << CAN_RXESC_F1DS_Pos)) /* Assignment of value for F1DS in the CAN_RXESC register */
#define   CAN_RXESC_F1DS_DATA8_Val            _UINT32_(0x0)                                        /* (CAN_RXESC) 8 byte data field  */
#define   CAN_RXESC_F1DS_DATA12_Val           _UINT32_(0x1)                                        /* (CAN_RXESC) 12 byte data field  */
#define   CAN_RXESC_F1DS_DATA16_Val           _UINT32_(0x2)                                        /* (CAN_RXESC) 16 byte data field  */
#define   CAN_RXESC_F1DS_DATA20_Val           _UINT32_(0x3)                                        /* (CAN_RXESC) 20 byte data field  */
#define   CAN_RXESC_F1DS_DATA24_Val           _UINT32_(0x4)                                        /* (CAN_RXESC) 24 byte data field  */
#define   CAN_RXESC_F1DS_DATA32_Val           _UINT32_(0x5)                                        /* (CAN_RXESC) 32 byte data field  */
#define   CAN_RXESC_F1DS_DATA48_Val           _UINT32_(0x6)                                        /* (CAN_RXESC) 48 byte data field  */
#define   CAN_RXESC_F1DS_DATA64_Val           _UINT32_(0x7)                                        /* (CAN_RXESC) 64 byte data field  */
#define CAN_RXESC_F1DS_DATA8                  (CAN_RXESC_F1DS_DATA8_Val << CAN_RXESC_F1DS_Pos)     /* (CAN_RXESC) 8 byte data field Position */
#define CAN_RXESC_F1DS_DATA12                 (CAN_RXESC_F1DS_DATA12_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 12 byte data field Position */
#define CAN_RXESC_F1DS_DATA16                 (CAN_RXESC_F1DS_DATA16_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 16 byte data field Position */
#define CAN_RXESC_F1DS_DATA20                 (CAN_RXESC_F1DS_DATA20_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 20 byte data field Position */
#define CAN_RXESC_F1DS_DATA24                 (CAN_RXESC_F1DS_DATA24_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 24 byte data field Position */
#define CAN_RXESC_F1DS_DATA32                 (CAN_RXESC_F1DS_DATA32_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 32 byte data field Position */
#define CAN_RXESC_F1DS_DATA48                 (CAN_RXESC_F1DS_DATA48_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 48 byte data field Position */
#define CAN_RXESC_F1DS_DATA64                 (CAN_RXESC_F1DS_DATA64_Val << CAN_RXESC_F1DS_Pos)    /* (CAN_RXESC) 64 byte data field Position */
#define CAN_RXESC_RBDS_Pos                    _UINT32_(8)                                          /* (CAN_RXESC) Rx Buffer Data Field Size Position */
#define CAN_RXESC_RBDS_Msk                    (_UINT32_(0x7) << CAN_RXESC_RBDS_Pos)                /* (CAN_RXESC) Rx Buffer Data Field Size Mask */
#define CAN_RXESC_RBDS(value)                 (CAN_RXESC_RBDS_Msk & (_UINT32_(value) << CAN_RXESC_RBDS_Pos)) /* Assignment of value for RBDS in the CAN_RXESC register */
#define   CAN_RXESC_RBDS_DATA8_Val            _UINT32_(0x0)                                        /* (CAN_RXESC) 8 byte data field  */
#define   CAN_RXESC_RBDS_DATA12_Val           _UINT32_(0x1)                                        /* (CAN_RXESC) 12 byte data field  */
#define   CAN_RXESC_RBDS_DATA16_Val           _UINT32_(0x2)                                        /* (CAN_RXESC) 16 byte data field  */
#define   CAN_RXESC_RBDS_DATA20_Val           _UINT32_(0x3)                                        /* (CAN_RXESC) 20 byte data field  */
#define   CAN_RXESC_RBDS_DATA24_Val           _UINT32_(0x4)                                        /* (CAN_RXESC) 24 byte data field  */
#define   CAN_RXESC_RBDS_DATA32_Val           _UINT32_(0x5)                                        /* (CAN_RXESC) 32 byte data field  */
#define   CAN_RXESC_RBDS_DATA48_Val           _UINT32_(0x6)                                        /* (CAN_RXESC) 48 byte data field  */
#define   CAN_RXESC_RBDS_DATA64_Val           _UINT32_(0x7)                                        /* (CAN_RXESC) 64 byte data field  */
#define CAN_RXESC_RBDS_DATA8                  (CAN_RXESC_RBDS_DATA8_Val << CAN_RXESC_RBDS_Pos)     /* (CAN_RXESC) 8 byte data field Position */
#define CAN_RXESC_RBDS_DATA12                 (CAN_RXESC_RBDS_DATA12_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 12 byte data field Position */
#define CAN_RXESC_RBDS_DATA16                 (CAN_RXESC_RBDS_DATA16_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 16 byte data field Position */
#define CAN_RXESC_RBDS_DATA20                 (CAN_RXESC_RBDS_DATA20_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 20 byte data field Position */
#define CAN_RXESC_RBDS_DATA24                 (CAN_RXESC_RBDS_DATA24_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 24 byte data field Position */
#define CAN_RXESC_RBDS_DATA32                 (CAN_RXESC_RBDS_DATA32_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 32 byte data field Position */
#define CAN_RXESC_RBDS_DATA48                 (CAN_RXESC_RBDS_DATA48_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 48 byte data field Position */
#define CAN_RXESC_RBDS_DATA64                 (CAN_RXESC_RBDS_DATA64_Val << CAN_RXESC_RBDS_Pos)    /* (CAN_RXESC) 64 byte data field Position */
#define CAN_RXESC_Msk                         _UINT32_(0x00000777)                                 /* (CAN_RXESC) Register Mask  */


/* -------- CAN_TXBC : (CAN Offset: 0xC0) (R/W 32) Tx Buffer Configuration -------- */
#define CAN_TXBC_RESETVALUE                   _UINT32_(0x00)                                       /*  (CAN_TXBC) Tx Buffer Configuration  Reset Value */

#define CAN_TXBC_TBSA_Pos                     _UINT32_(0)                                          /* (CAN_TXBC) Tx Buffers Start Address Position */
#define CAN_TXBC_TBSA_Msk                     (_UINT32_(0xFFFF) << CAN_TXBC_TBSA_Pos)              /* (CAN_TXBC) Tx Buffers Start Address Mask */
#define CAN_TXBC_TBSA(value)                  (CAN_TXBC_TBSA_Msk & (_UINT32_(value) << CAN_TXBC_TBSA_Pos)) /* Assignment of value for TBSA in the CAN_TXBC register */
#define CAN_TXBC_NDTB_Pos                     _UINT32_(16)                                         /* (CAN_TXBC) Number of Dedicated Transmit Buffers Position */
#define CAN_TXBC_NDTB_Msk                     (_UINT32_(0x3F) << CAN_TXBC_NDTB_Pos)                /* (CAN_TXBC) Number of Dedicated Transmit Buffers Mask */
#define CAN_TXBC_NDTB(value)                  (CAN_TXBC_NDTB_Msk & (_UINT32_(value) << CAN_TXBC_NDTB_Pos)) /* Assignment of value for NDTB in the CAN_TXBC register */
#define CAN_TXBC_TFQS_Pos                     _UINT32_(24)                                         /* (CAN_TXBC) Transmit FIFO/Queue Size Position */
#define CAN_TXBC_TFQS_Msk                     (_UINT32_(0x3F) << CAN_TXBC_TFQS_Pos)                /* (CAN_TXBC) Transmit FIFO/Queue Size Mask */
#define CAN_TXBC_TFQS(value)                  (CAN_TXBC_TFQS_Msk & (_UINT32_(value) << CAN_TXBC_TFQS_Pos)) /* Assignment of value for TFQS in the CAN_TXBC register */
#define CAN_TXBC_TFQM_Pos                     _UINT32_(30)                                         /* (CAN_TXBC) Tx FIFO/Queue Mode Position */
#define CAN_TXBC_TFQM_Msk                     (_UINT32_(0x1) << CAN_TXBC_TFQM_Pos)                 /* (CAN_TXBC) Tx FIFO/Queue Mode Mask */
#define CAN_TXBC_TFQM(value)                  (CAN_TXBC_TFQM_Msk & (_UINT32_(value) << CAN_TXBC_TFQM_Pos)) /* Assignment of value for TFQM in the CAN_TXBC register */
#define CAN_TXBC_Msk                          _UINT32_(0x7F3FFFFF)                                 /* (CAN_TXBC) Register Mask  */


/* -------- CAN_TXFQS : (CAN Offset: 0xC4) ( R/ 32) Tx FIFO / Queue Status -------- */
#define CAN_TXFQS_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXFQS) Tx FIFO / Queue Status  Reset Value */

#define CAN_TXFQS_TFFL_Pos                    _UINT32_(0)                                          /* (CAN_TXFQS) Tx FIFO Free Level Position */
#define CAN_TXFQS_TFFL_Msk                    (_UINT32_(0x3F) << CAN_TXFQS_TFFL_Pos)               /* (CAN_TXFQS) Tx FIFO Free Level Mask */
#define CAN_TXFQS_TFFL(value)                 (CAN_TXFQS_TFFL_Msk & (_UINT32_(value) << CAN_TXFQS_TFFL_Pos)) /* Assignment of value for TFFL in the CAN_TXFQS register */
#define CAN_TXFQS_TFGI_Pos                    _UINT32_(8)                                          /* (CAN_TXFQS) Tx FIFO Get Index Position */
#define CAN_TXFQS_TFGI_Msk                    (_UINT32_(0x1F) << CAN_TXFQS_TFGI_Pos)               /* (CAN_TXFQS) Tx FIFO Get Index Mask */
#define CAN_TXFQS_TFGI(value)                 (CAN_TXFQS_TFGI_Msk & (_UINT32_(value) << CAN_TXFQS_TFGI_Pos)) /* Assignment of value for TFGI in the CAN_TXFQS register */
#define CAN_TXFQS_TFQPI_Pos                   _UINT32_(16)                                         /* (CAN_TXFQS) Tx FIFO/Queue Put Index Position */
#define CAN_TXFQS_TFQPI_Msk                   (_UINT32_(0x1F) << CAN_TXFQS_TFQPI_Pos)              /* (CAN_TXFQS) Tx FIFO/Queue Put Index Mask */
#define CAN_TXFQS_TFQPI(value)                (CAN_TXFQS_TFQPI_Msk & (_UINT32_(value) << CAN_TXFQS_TFQPI_Pos)) /* Assignment of value for TFQPI in the CAN_TXFQS register */
#define CAN_TXFQS_TFQF_Pos                    _UINT32_(21)                                         /* (CAN_TXFQS) Tx FIFO/Queue Full Position */
#define CAN_TXFQS_TFQF_Msk                    (_UINT32_(0x1) << CAN_TXFQS_TFQF_Pos)                /* (CAN_TXFQS) Tx FIFO/Queue Full Mask */
#define CAN_TXFQS_TFQF(value)                 (CAN_TXFQS_TFQF_Msk & (_UINT32_(value) << CAN_TXFQS_TFQF_Pos)) /* Assignment of value for TFQF in the CAN_TXFQS register */
#define CAN_TXFQS_Msk                         _UINT32_(0x003F1F3F)                                 /* (CAN_TXFQS) Register Mask  */


/* -------- CAN_TXESC : (CAN Offset: 0xC8) (R/W 32) Tx Buffer Element Size Configuration -------- */
#define CAN_TXESC_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXESC) Tx Buffer Element Size Configuration  Reset Value */

#define CAN_TXESC_TBDS_Pos                    _UINT32_(0)                                          /* (CAN_TXESC) Tx Buffer Data Field Size Position */
#define CAN_TXESC_TBDS_Msk                    (_UINT32_(0x7) << CAN_TXESC_TBDS_Pos)                /* (CAN_TXESC) Tx Buffer Data Field Size Mask */
#define CAN_TXESC_TBDS(value)                 (CAN_TXESC_TBDS_Msk & (_UINT32_(value) << CAN_TXESC_TBDS_Pos)) /* Assignment of value for TBDS in the CAN_TXESC register */
#define   CAN_TXESC_TBDS_DATA8_Val            _UINT32_(0x0)                                        /* (CAN_TXESC) 8 byte data field  */
#define   CAN_TXESC_TBDS_DATA12_Val           _UINT32_(0x1)                                        /* (CAN_TXESC) 12 byte data field  */
#define   CAN_TXESC_TBDS_DATA16_Val           _UINT32_(0x2)                                        /* (CAN_TXESC) 16 byte data field  */
#define   CAN_TXESC_TBDS_DATA20_Val           _UINT32_(0x3)                                        /* (CAN_TXESC) 20 byte data field  */
#define   CAN_TXESC_TBDS_DATA24_Val           _UINT32_(0x4)                                        /* (CAN_TXESC) 24 byte data field  */
#define   CAN_TXESC_TBDS_DATA32_Val           _UINT32_(0x5)                                        /* (CAN_TXESC) 32 byte data field  */
#define   CAN_TXESC_TBDS_DATA48_Val           _UINT32_(0x6)                                        /* (CAN_TXESC) 48 byte data field  */
#define   CAN_TXESC_TBDS_DATA64_Val           _UINT32_(0x7)                                        /* (CAN_TXESC) 64 byte data field  */
#define CAN_TXESC_TBDS_DATA8                  (CAN_TXESC_TBDS_DATA8_Val << CAN_TXESC_TBDS_Pos)     /* (CAN_TXESC) 8 byte data field Position */
#define CAN_TXESC_TBDS_DATA12                 (CAN_TXESC_TBDS_DATA12_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 12 byte data field Position */
#define CAN_TXESC_TBDS_DATA16                 (CAN_TXESC_TBDS_DATA16_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 16 byte data field Position */
#define CAN_TXESC_TBDS_DATA20                 (CAN_TXESC_TBDS_DATA20_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 20 byte data field Position */
#define CAN_TXESC_TBDS_DATA24                 (CAN_TXESC_TBDS_DATA24_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 24 byte data field Position */
#define CAN_TXESC_TBDS_DATA32                 (CAN_TXESC_TBDS_DATA32_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 32 byte data field Position */
#define CAN_TXESC_TBDS_DATA48                 (CAN_TXESC_TBDS_DATA48_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 48 byte data field Position */
#define CAN_TXESC_TBDS_DATA64                 (CAN_TXESC_TBDS_DATA64_Val << CAN_TXESC_TBDS_Pos)    /* (CAN_TXESC) 64 byte data field Position */
#define CAN_TXESC_Msk                         _UINT32_(0x00000007)                                 /* (CAN_TXESC) Register Mask  */


/* -------- CAN_TXBRP : (CAN Offset: 0xCC) ( R/ 32) Tx Buffer Request Pending -------- */
#define CAN_TXBRP_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXBRP) Tx Buffer Request Pending  Reset Value */

#define CAN_TXBRP_TRP0_Pos                    _UINT32_(0)                                          /* (CAN_TXBRP) Transmission Request Pending 0 Position */
#define CAN_TXBRP_TRP0_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP0_Pos)                /* (CAN_TXBRP) Transmission Request Pending 0 Mask */
#define CAN_TXBRP_TRP0(value)                 (CAN_TXBRP_TRP0_Msk & (_UINT32_(value) << CAN_TXBRP_TRP0_Pos)) /* Assignment of value for TRP0 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP1_Pos                    _UINT32_(1)                                          /* (CAN_TXBRP) Transmission Request Pending 1 Position */
#define CAN_TXBRP_TRP1_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP1_Pos)                /* (CAN_TXBRP) Transmission Request Pending 1 Mask */
#define CAN_TXBRP_TRP1(value)                 (CAN_TXBRP_TRP1_Msk & (_UINT32_(value) << CAN_TXBRP_TRP1_Pos)) /* Assignment of value for TRP1 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP2_Pos                    _UINT32_(2)                                          /* (CAN_TXBRP) Transmission Request Pending 2 Position */
#define CAN_TXBRP_TRP2_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP2_Pos)                /* (CAN_TXBRP) Transmission Request Pending 2 Mask */
#define CAN_TXBRP_TRP2(value)                 (CAN_TXBRP_TRP2_Msk & (_UINT32_(value) << CAN_TXBRP_TRP2_Pos)) /* Assignment of value for TRP2 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP3_Pos                    _UINT32_(3)                                          /* (CAN_TXBRP) Transmission Request Pending 3 Position */
#define CAN_TXBRP_TRP3_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP3_Pos)                /* (CAN_TXBRP) Transmission Request Pending 3 Mask */
#define CAN_TXBRP_TRP3(value)                 (CAN_TXBRP_TRP3_Msk & (_UINT32_(value) << CAN_TXBRP_TRP3_Pos)) /* Assignment of value for TRP3 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP4_Pos                    _UINT32_(4)                                          /* (CAN_TXBRP) Transmission Request Pending 4 Position */
#define CAN_TXBRP_TRP4_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP4_Pos)                /* (CAN_TXBRP) Transmission Request Pending 4 Mask */
#define CAN_TXBRP_TRP4(value)                 (CAN_TXBRP_TRP4_Msk & (_UINT32_(value) << CAN_TXBRP_TRP4_Pos)) /* Assignment of value for TRP4 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP5_Pos                    _UINT32_(5)                                          /* (CAN_TXBRP) Transmission Request Pending 5 Position */
#define CAN_TXBRP_TRP5_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP5_Pos)                /* (CAN_TXBRP) Transmission Request Pending 5 Mask */
#define CAN_TXBRP_TRP5(value)                 (CAN_TXBRP_TRP5_Msk & (_UINT32_(value) << CAN_TXBRP_TRP5_Pos)) /* Assignment of value for TRP5 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP6_Pos                    _UINT32_(6)                                          /* (CAN_TXBRP) Transmission Request Pending 6 Position */
#define CAN_TXBRP_TRP6_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP6_Pos)                /* (CAN_TXBRP) Transmission Request Pending 6 Mask */
#define CAN_TXBRP_TRP6(value)                 (CAN_TXBRP_TRP6_Msk & (_UINT32_(value) << CAN_TXBRP_TRP6_Pos)) /* Assignment of value for TRP6 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP7_Pos                    _UINT32_(7)                                          /* (CAN_TXBRP) Transmission Request Pending 7 Position */
#define CAN_TXBRP_TRP7_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP7_Pos)                /* (CAN_TXBRP) Transmission Request Pending 7 Mask */
#define CAN_TXBRP_TRP7(value)                 (CAN_TXBRP_TRP7_Msk & (_UINT32_(value) << CAN_TXBRP_TRP7_Pos)) /* Assignment of value for TRP7 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP8_Pos                    _UINT32_(8)                                          /* (CAN_TXBRP) Transmission Request Pending 8 Position */
#define CAN_TXBRP_TRP8_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP8_Pos)                /* (CAN_TXBRP) Transmission Request Pending 8 Mask */
#define CAN_TXBRP_TRP8(value)                 (CAN_TXBRP_TRP8_Msk & (_UINT32_(value) << CAN_TXBRP_TRP8_Pos)) /* Assignment of value for TRP8 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP9_Pos                    _UINT32_(9)                                          /* (CAN_TXBRP) Transmission Request Pending 9 Position */
#define CAN_TXBRP_TRP9_Msk                    (_UINT32_(0x1) << CAN_TXBRP_TRP9_Pos)                /* (CAN_TXBRP) Transmission Request Pending 9 Mask */
#define CAN_TXBRP_TRP9(value)                 (CAN_TXBRP_TRP9_Msk & (_UINT32_(value) << CAN_TXBRP_TRP9_Pos)) /* Assignment of value for TRP9 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP10_Pos                   _UINT32_(10)                                         /* (CAN_TXBRP) Transmission Request Pending 10 Position */
#define CAN_TXBRP_TRP10_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP10_Pos)               /* (CAN_TXBRP) Transmission Request Pending 10 Mask */
#define CAN_TXBRP_TRP10(value)                (CAN_TXBRP_TRP10_Msk & (_UINT32_(value) << CAN_TXBRP_TRP10_Pos)) /* Assignment of value for TRP10 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP11_Pos                   _UINT32_(11)                                         /* (CAN_TXBRP) Transmission Request Pending 11 Position */
#define CAN_TXBRP_TRP11_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP11_Pos)               /* (CAN_TXBRP) Transmission Request Pending 11 Mask */
#define CAN_TXBRP_TRP11(value)                (CAN_TXBRP_TRP11_Msk & (_UINT32_(value) << CAN_TXBRP_TRP11_Pos)) /* Assignment of value for TRP11 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP12_Pos                   _UINT32_(12)                                         /* (CAN_TXBRP) Transmission Request Pending 12 Position */
#define CAN_TXBRP_TRP12_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP12_Pos)               /* (CAN_TXBRP) Transmission Request Pending 12 Mask */
#define CAN_TXBRP_TRP12(value)                (CAN_TXBRP_TRP12_Msk & (_UINT32_(value) << CAN_TXBRP_TRP12_Pos)) /* Assignment of value for TRP12 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP13_Pos                   _UINT32_(13)                                         /* (CAN_TXBRP) Transmission Request Pending 13 Position */
#define CAN_TXBRP_TRP13_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP13_Pos)               /* (CAN_TXBRP) Transmission Request Pending 13 Mask */
#define CAN_TXBRP_TRP13(value)                (CAN_TXBRP_TRP13_Msk & (_UINT32_(value) << CAN_TXBRP_TRP13_Pos)) /* Assignment of value for TRP13 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP14_Pos                   _UINT32_(14)                                         /* (CAN_TXBRP) Transmission Request Pending 14 Position */
#define CAN_TXBRP_TRP14_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP14_Pos)               /* (CAN_TXBRP) Transmission Request Pending 14 Mask */
#define CAN_TXBRP_TRP14(value)                (CAN_TXBRP_TRP14_Msk & (_UINT32_(value) << CAN_TXBRP_TRP14_Pos)) /* Assignment of value for TRP14 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP15_Pos                   _UINT32_(15)                                         /* (CAN_TXBRP) Transmission Request Pending 15 Position */
#define CAN_TXBRP_TRP15_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP15_Pos)               /* (CAN_TXBRP) Transmission Request Pending 15 Mask */
#define CAN_TXBRP_TRP15(value)                (CAN_TXBRP_TRP15_Msk & (_UINT32_(value) << CAN_TXBRP_TRP15_Pos)) /* Assignment of value for TRP15 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP16_Pos                   _UINT32_(16)                                         /* (CAN_TXBRP) Transmission Request Pending 16 Position */
#define CAN_TXBRP_TRP16_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP16_Pos)               /* (CAN_TXBRP) Transmission Request Pending 16 Mask */
#define CAN_TXBRP_TRP16(value)                (CAN_TXBRP_TRP16_Msk & (_UINT32_(value) << CAN_TXBRP_TRP16_Pos)) /* Assignment of value for TRP16 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP17_Pos                   _UINT32_(17)                                         /* (CAN_TXBRP) Transmission Request Pending 17 Position */
#define CAN_TXBRP_TRP17_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP17_Pos)               /* (CAN_TXBRP) Transmission Request Pending 17 Mask */
#define CAN_TXBRP_TRP17(value)                (CAN_TXBRP_TRP17_Msk & (_UINT32_(value) << CAN_TXBRP_TRP17_Pos)) /* Assignment of value for TRP17 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP18_Pos                   _UINT32_(18)                                         /* (CAN_TXBRP) Transmission Request Pending 18 Position */
#define CAN_TXBRP_TRP18_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP18_Pos)               /* (CAN_TXBRP) Transmission Request Pending 18 Mask */
#define CAN_TXBRP_TRP18(value)                (CAN_TXBRP_TRP18_Msk & (_UINT32_(value) << CAN_TXBRP_TRP18_Pos)) /* Assignment of value for TRP18 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP19_Pos                   _UINT32_(19)                                         /* (CAN_TXBRP) Transmission Request Pending 19 Position */
#define CAN_TXBRP_TRP19_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP19_Pos)               /* (CAN_TXBRP) Transmission Request Pending 19 Mask */
#define CAN_TXBRP_TRP19(value)                (CAN_TXBRP_TRP19_Msk & (_UINT32_(value) << CAN_TXBRP_TRP19_Pos)) /* Assignment of value for TRP19 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP20_Pos                   _UINT32_(20)                                         /* (CAN_TXBRP) Transmission Request Pending 20 Position */
#define CAN_TXBRP_TRP20_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP20_Pos)               /* (CAN_TXBRP) Transmission Request Pending 20 Mask */
#define CAN_TXBRP_TRP20(value)                (CAN_TXBRP_TRP20_Msk & (_UINT32_(value) << CAN_TXBRP_TRP20_Pos)) /* Assignment of value for TRP20 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP21_Pos                   _UINT32_(21)                                         /* (CAN_TXBRP) Transmission Request Pending 21 Position */
#define CAN_TXBRP_TRP21_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP21_Pos)               /* (CAN_TXBRP) Transmission Request Pending 21 Mask */
#define CAN_TXBRP_TRP21(value)                (CAN_TXBRP_TRP21_Msk & (_UINT32_(value) << CAN_TXBRP_TRP21_Pos)) /* Assignment of value for TRP21 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP22_Pos                   _UINT32_(22)                                         /* (CAN_TXBRP) Transmission Request Pending 22 Position */
#define CAN_TXBRP_TRP22_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP22_Pos)               /* (CAN_TXBRP) Transmission Request Pending 22 Mask */
#define CAN_TXBRP_TRP22(value)                (CAN_TXBRP_TRP22_Msk & (_UINT32_(value) << CAN_TXBRP_TRP22_Pos)) /* Assignment of value for TRP22 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP23_Pos                   _UINT32_(23)                                         /* (CAN_TXBRP) Transmission Request Pending 23 Position */
#define CAN_TXBRP_TRP23_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP23_Pos)               /* (CAN_TXBRP) Transmission Request Pending 23 Mask */
#define CAN_TXBRP_TRP23(value)                (CAN_TXBRP_TRP23_Msk & (_UINT32_(value) << CAN_TXBRP_TRP23_Pos)) /* Assignment of value for TRP23 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP24_Pos                   _UINT32_(24)                                         /* (CAN_TXBRP) Transmission Request Pending 24 Position */
#define CAN_TXBRP_TRP24_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP24_Pos)               /* (CAN_TXBRP) Transmission Request Pending 24 Mask */
#define CAN_TXBRP_TRP24(value)                (CAN_TXBRP_TRP24_Msk & (_UINT32_(value) << CAN_TXBRP_TRP24_Pos)) /* Assignment of value for TRP24 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP25_Pos                   _UINT32_(25)                                         /* (CAN_TXBRP) Transmission Request Pending 25 Position */
#define CAN_TXBRP_TRP25_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP25_Pos)               /* (CAN_TXBRP) Transmission Request Pending 25 Mask */
#define CAN_TXBRP_TRP25(value)                (CAN_TXBRP_TRP25_Msk & (_UINT32_(value) << CAN_TXBRP_TRP25_Pos)) /* Assignment of value for TRP25 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP26_Pos                   _UINT32_(26)                                         /* (CAN_TXBRP) Transmission Request Pending 26 Position */
#define CAN_TXBRP_TRP26_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP26_Pos)               /* (CAN_TXBRP) Transmission Request Pending 26 Mask */
#define CAN_TXBRP_TRP26(value)                (CAN_TXBRP_TRP26_Msk & (_UINT32_(value) << CAN_TXBRP_TRP26_Pos)) /* Assignment of value for TRP26 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP27_Pos                   _UINT32_(27)                                         /* (CAN_TXBRP) Transmission Request Pending 27 Position */
#define CAN_TXBRP_TRP27_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP27_Pos)               /* (CAN_TXBRP) Transmission Request Pending 27 Mask */
#define CAN_TXBRP_TRP27(value)                (CAN_TXBRP_TRP27_Msk & (_UINT32_(value) << CAN_TXBRP_TRP27_Pos)) /* Assignment of value for TRP27 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP28_Pos                   _UINT32_(28)                                         /* (CAN_TXBRP) Transmission Request Pending 28 Position */
#define CAN_TXBRP_TRP28_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP28_Pos)               /* (CAN_TXBRP) Transmission Request Pending 28 Mask */
#define CAN_TXBRP_TRP28(value)                (CAN_TXBRP_TRP28_Msk & (_UINT32_(value) << CAN_TXBRP_TRP28_Pos)) /* Assignment of value for TRP28 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP29_Pos                   _UINT32_(29)                                         /* (CAN_TXBRP) Transmission Request Pending 29 Position */
#define CAN_TXBRP_TRP29_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP29_Pos)               /* (CAN_TXBRP) Transmission Request Pending 29 Mask */
#define CAN_TXBRP_TRP29(value)                (CAN_TXBRP_TRP29_Msk & (_UINT32_(value) << CAN_TXBRP_TRP29_Pos)) /* Assignment of value for TRP29 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP30_Pos                   _UINT32_(30)                                         /* (CAN_TXBRP) Transmission Request Pending 30 Position */
#define CAN_TXBRP_TRP30_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP30_Pos)               /* (CAN_TXBRP) Transmission Request Pending 30 Mask */
#define CAN_TXBRP_TRP30(value)                (CAN_TXBRP_TRP30_Msk & (_UINT32_(value) << CAN_TXBRP_TRP30_Pos)) /* Assignment of value for TRP30 in the CAN_TXBRP register */
#define CAN_TXBRP_TRP31_Pos                   _UINT32_(31)                                         /* (CAN_TXBRP) Transmission Request Pending 31 Position */
#define CAN_TXBRP_TRP31_Msk                   (_UINT32_(0x1) << CAN_TXBRP_TRP31_Pos)               /* (CAN_TXBRP) Transmission Request Pending 31 Mask */
#define CAN_TXBRP_TRP31(value)                (CAN_TXBRP_TRP31_Msk & (_UINT32_(value) << CAN_TXBRP_TRP31_Pos)) /* Assignment of value for TRP31 in the CAN_TXBRP register */
#define CAN_TXBRP_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBRP) Register Mask  */

#define CAN_TXBRP_TRP_Pos                     _UINT32_(0)                                          /* (CAN_TXBRP Position) Transmission Request Pending 3x */
#define CAN_TXBRP_TRP_Msk                     (_UINT32_(0xFFFFFFFF) << CAN_TXBRP_TRP_Pos)          /* (CAN_TXBRP Mask) TRP */
#define CAN_TXBRP_TRP(value)                  (CAN_TXBRP_TRP_Msk & (_UINT32_(value) << CAN_TXBRP_TRP_Pos)) 

/* -------- CAN_TXBAR : (CAN Offset: 0xD0) (R/W 32) Tx Buffer Add Request -------- */
#define CAN_TXBAR_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXBAR) Tx Buffer Add Request  Reset Value */

#define CAN_TXBAR_AR0_Pos                     _UINT32_(0)                                          /* (CAN_TXBAR) Add Request 0 Position */
#define CAN_TXBAR_AR0_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR0_Pos)                 /* (CAN_TXBAR) Add Request 0 Mask */
#define CAN_TXBAR_AR0(value)                  (CAN_TXBAR_AR0_Msk & (_UINT32_(value) << CAN_TXBAR_AR0_Pos)) /* Assignment of value for AR0 in the CAN_TXBAR register */
#define CAN_TXBAR_AR1_Pos                     _UINT32_(1)                                          /* (CAN_TXBAR) Add Request 1 Position */
#define CAN_TXBAR_AR1_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR1_Pos)                 /* (CAN_TXBAR) Add Request 1 Mask */
#define CAN_TXBAR_AR1(value)                  (CAN_TXBAR_AR1_Msk & (_UINT32_(value) << CAN_TXBAR_AR1_Pos)) /* Assignment of value for AR1 in the CAN_TXBAR register */
#define CAN_TXBAR_AR2_Pos                     _UINT32_(2)                                          /* (CAN_TXBAR) Add Request 2 Position */
#define CAN_TXBAR_AR2_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR2_Pos)                 /* (CAN_TXBAR) Add Request 2 Mask */
#define CAN_TXBAR_AR2(value)                  (CAN_TXBAR_AR2_Msk & (_UINT32_(value) << CAN_TXBAR_AR2_Pos)) /* Assignment of value for AR2 in the CAN_TXBAR register */
#define CAN_TXBAR_AR3_Pos                     _UINT32_(3)                                          /* (CAN_TXBAR) Add Request 3 Position */
#define CAN_TXBAR_AR3_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR3_Pos)                 /* (CAN_TXBAR) Add Request 3 Mask */
#define CAN_TXBAR_AR3(value)                  (CAN_TXBAR_AR3_Msk & (_UINT32_(value) << CAN_TXBAR_AR3_Pos)) /* Assignment of value for AR3 in the CAN_TXBAR register */
#define CAN_TXBAR_AR4_Pos                     _UINT32_(4)                                          /* (CAN_TXBAR) Add Request 4 Position */
#define CAN_TXBAR_AR4_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR4_Pos)                 /* (CAN_TXBAR) Add Request 4 Mask */
#define CAN_TXBAR_AR4(value)                  (CAN_TXBAR_AR4_Msk & (_UINT32_(value) << CAN_TXBAR_AR4_Pos)) /* Assignment of value for AR4 in the CAN_TXBAR register */
#define CAN_TXBAR_AR5_Pos                     _UINT32_(5)                                          /* (CAN_TXBAR) Add Request 5 Position */
#define CAN_TXBAR_AR5_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR5_Pos)                 /* (CAN_TXBAR) Add Request 5 Mask */
#define CAN_TXBAR_AR5(value)                  (CAN_TXBAR_AR5_Msk & (_UINT32_(value) << CAN_TXBAR_AR5_Pos)) /* Assignment of value for AR5 in the CAN_TXBAR register */
#define CAN_TXBAR_AR6_Pos                     _UINT32_(6)                                          /* (CAN_TXBAR) Add Request 6 Position */
#define CAN_TXBAR_AR6_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR6_Pos)                 /* (CAN_TXBAR) Add Request 6 Mask */
#define CAN_TXBAR_AR6(value)                  (CAN_TXBAR_AR6_Msk & (_UINT32_(value) << CAN_TXBAR_AR6_Pos)) /* Assignment of value for AR6 in the CAN_TXBAR register */
#define CAN_TXBAR_AR7_Pos                     _UINT32_(7)                                          /* (CAN_TXBAR) Add Request 7 Position */
#define CAN_TXBAR_AR7_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR7_Pos)                 /* (CAN_TXBAR) Add Request 7 Mask */
#define CAN_TXBAR_AR7(value)                  (CAN_TXBAR_AR7_Msk & (_UINT32_(value) << CAN_TXBAR_AR7_Pos)) /* Assignment of value for AR7 in the CAN_TXBAR register */
#define CAN_TXBAR_AR8_Pos                     _UINT32_(8)                                          /* (CAN_TXBAR) Add Request 8 Position */
#define CAN_TXBAR_AR8_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR8_Pos)                 /* (CAN_TXBAR) Add Request 8 Mask */
#define CAN_TXBAR_AR8(value)                  (CAN_TXBAR_AR8_Msk & (_UINT32_(value) << CAN_TXBAR_AR8_Pos)) /* Assignment of value for AR8 in the CAN_TXBAR register */
#define CAN_TXBAR_AR9_Pos                     _UINT32_(9)                                          /* (CAN_TXBAR) Add Request 9 Position */
#define CAN_TXBAR_AR9_Msk                     (_UINT32_(0x1) << CAN_TXBAR_AR9_Pos)                 /* (CAN_TXBAR) Add Request 9 Mask */
#define CAN_TXBAR_AR9(value)                  (CAN_TXBAR_AR9_Msk & (_UINT32_(value) << CAN_TXBAR_AR9_Pos)) /* Assignment of value for AR9 in the CAN_TXBAR register */
#define CAN_TXBAR_AR10_Pos                    _UINT32_(10)                                         /* (CAN_TXBAR) Add Request 10 Position */
#define CAN_TXBAR_AR10_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR10_Pos)                /* (CAN_TXBAR) Add Request 10 Mask */
#define CAN_TXBAR_AR10(value)                 (CAN_TXBAR_AR10_Msk & (_UINT32_(value) << CAN_TXBAR_AR10_Pos)) /* Assignment of value for AR10 in the CAN_TXBAR register */
#define CAN_TXBAR_AR11_Pos                    _UINT32_(11)                                         /* (CAN_TXBAR) Add Request 11 Position */
#define CAN_TXBAR_AR11_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR11_Pos)                /* (CAN_TXBAR) Add Request 11 Mask */
#define CAN_TXBAR_AR11(value)                 (CAN_TXBAR_AR11_Msk & (_UINT32_(value) << CAN_TXBAR_AR11_Pos)) /* Assignment of value for AR11 in the CAN_TXBAR register */
#define CAN_TXBAR_AR12_Pos                    _UINT32_(12)                                         /* (CAN_TXBAR) Add Request 12 Position */
#define CAN_TXBAR_AR12_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR12_Pos)                /* (CAN_TXBAR) Add Request 12 Mask */
#define CAN_TXBAR_AR12(value)                 (CAN_TXBAR_AR12_Msk & (_UINT32_(value) << CAN_TXBAR_AR12_Pos)) /* Assignment of value for AR12 in the CAN_TXBAR register */
#define CAN_TXBAR_AR13_Pos                    _UINT32_(13)                                         /* (CAN_TXBAR) Add Request 13 Position */
#define CAN_TXBAR_AR13_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR13_Pos)                /* (CAN_TXBAR) Add Request 13 Mask */
#define CAN_TXBAR_AR13(value)                 (CAN_TXBAR_AR13_Msk & (_UINT32_(value) << CAN_TXBAR_AR13_Pos)) /* Assignment of value for AR13 in the CAN_TXBAR register */
#define CAN_TXBAR_AR14_Pos                    _UINT32_(14)                                         /* (CAN_TXBAR) Add Request 14 Position */
#define CAN_TXBAR_AR14_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR14_Pos)                /* (CAN_TXBAR) Add Request 14 Mask */
#define CAN_TXBAR_AR14(value)                 (CAN_TXBAR_AR14_Msk & (_UINT32_(value) << CAN_TXBAR_AR14_Pos)) /* Assignment of value for AR14 in the CAN_TXBAR register */
#define CAN_TXBAR_AR15_Pos                    _UINT32_(15)                                         /* (CAN_TXBAR) Add Request 15 Position */
#define CAN_TXBAR_AR15_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR15_Pos)                /* (CAN_TXBAR) Add Request 15 Mask */
#define CAN_TXBAR_AR15(value)                 (CAN_TXBAR_AR15_Msk & (_UINT32_(value) << CAN_TXBAR_AR15_Pos)) /* Assignment of value for AR15 in the CAN_TXBAR register */
#define CAN_TXBAR_AR16_Pos                    _UINT32_(16)                                         /* (CAN_TXBAR) Add Request 16 Position */
#define CAN_TXBAR_AR16_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR16_Pos)                /* (CAN_TXBAR) Add Request 16 Mask */
#define CAN_TXBAR_AR16(value)                 (CAN_TXBAR_AR16_Msk & (_UINT32_(value) << CAN_TXBAR_AR16_Pos)) /* Assignment of value for AR16 in the CAN_TXBAR register */
#define CAN_TXBAR_AR17_Pos                    _UINT32_(17)                                         /* (CAN_TXBAR) Add Request 17 Position */
#define CAN_TXBAR_AR17_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR17_Pos)                /* (CAN_TXBAR) Add Request 17 Mask */
#define CAN_TXBAR_AR17(value)                 (CAN_TXBAR_AR17_Msk & (_UINT32_(value) << CAN_TXBAR_AR17_Pos)) /* Assignment of value for AR17 in the CAN_TXBAR register */
#define CAN_TXBAR_AR18_Pos                    _UINT32_(18)                                         /* (CAN_TXBAR) Add Request 18 Position */
#define CAN_TXBAR_AR18_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR18_Pos)                /* (CAN_TXBAR) Add Request 18 Mask */
#define CAN_TXBAR_AR18(value)                 (CAN_TXBAR_AR18_Msk & (_UINT32_(value) << CAN_TXBAR_AR18_Pos)) /* Assignment of value for AR18 in the CAN_TXBAR register */
#define CAN_TXBAR_AR19_Pos                    _UINT32_(19)                                         /* (CAN_TXBAR) Add Request 19 Position */
#define CAN_TXBAR_AR19_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR19_Pos)                /* (CAN_TXBAR) Add Request 19 Mask */
#define CAN_TXBAR_AR19(value)                 (CAN_TXBAR_AR19_Msk & (_UINT32_(value) << CAN_TXBAR_AR19_Pos)) /* Assignment of value for AR19 in the CAN_TXBAR register */
#define CAN_TXBAR_AR20_Pos                    _UINT32_(20)                                         /* (CAN_TXBAR) Add Request 20 Position */
#define CAN_TXBAR_AR20_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR20_Pos)                /* (CAN_TXBAR) Add Request 20 Mask */
#define CAN_TXBAR_AR20(value)                 (CAN_TXBAR_AR20_Msk & (_UINT32_(value) << CAN_TXBAR_AR20_Pos)) /* Assignment of value for AR20 in the CAN_TXBAR register */
#define CAN_TXBAR_AR21_Pos                    _UINT32_(21)                                         /* (CAN_TXBAR) Add Request 21 Position */
#define CAN_TXBAR_AR21_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR21_Pos)                /* (CAN_TXBAR) Add Request 21 Mask */
#define CAN_TXBAR_AR21(value)                 (CAN_TXBAR_AR21_Msk & (_UINT32_(value) << CAN_TXBAR_AR21_Pos)) /* Assignment of value for AR21 in the CAN_TXBAR register */
#define CAN_TXBAR_AR22_Pos                    _UINT32_(22)                                         /* (CAN_TXBAR) Add Request 22 Position */
#define CAN_TXBAR_AR22_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR22_Pos)                /* (CAN_TXBAR) Add Request 22 Mask */
#define CAN_TXBAR_AR22(value)                 (CAN_TXBAR_AR22_Msk & (_UINT32_(value) << CAN_TXBAR_AR22_Pos)) /* Assignment of value for AR22 in the CAN_TXBAR register */
#define CAN_TXBAR_AR23_Pos                    _UINT32_(23)                                         /* (CAN_TXBAR) Add Request 23 Position */
#define CAN_TXBAR_AR23_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR23_Pos)                /* (CAN_TXBAR) Add Request 23 Mask */
#define CAN_TXBAR_AR23(value)                 (CAN_TXBAR_AR23_Msk & (_UINT32_(value) << CAN_TXBAR_AR23_Pos)) /* Assignment of value for AR23 in the CAN_TXBAR register */
#define CAN_TXBAR_AR24_Pos                    _UINT32_(24)                                         /* (CAN_TXBAR) Add Request 24 Position */
#define CAN_TXBAR_AR24_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR24_Pos)                /* (CAN_TXBAR) Add Request 24 Mask */
#define CAN_TXBAR_AR24(value)                 (CAN_TXBAR_AR24_Msk & (_UINT32_(value) << CAN_TXBAR_AR24_Pos)) /* Assignment of value for AR24 in the CAN_TXBAR register */
#define CAN_TXBAR_AR25_Pos                    _UINT32_(25)                                         /* (CAN_TXBAR) Add Request 25 Position */
#define CAN_TXBAR_AR25_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR25_Pos)                /* (CAN_TXBAR) Add Request 25 Mask */
#define CAN_TXBAR_AR25(value)                 (CAN_TXBAR_AR25_Msk & (_UINT32_(value) << CAN_TXBAR_AR25_Pos)) /* Assignment of value for AR25 in the CAN_TXBAR register */
#define CAN_TXBAR_AR26_Pos                    _UINT32_(26)                                         /* (CAN_TXBAR) Add Request 26 Position */
#define CAN_TXBAR_AR26_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR26_Pos)                /* (CAN_TXBAR) Add Request 26 Mask */
#define CAN_TXBAR_AR26(value)                 (CAN_TXBAR_AR26_Msk & (_UINT32_(value) << CAN_TXBAR_AR26_Pos)) /* Assignment of value for AR26 in the CAN_TXBAR register */
#define CAN_TXBAR_AR27_Pos                    _UINT32_(27)                                         /* (CAN_TXBAR) Add Request 27 Position */
#define CAN_TXBAR_AR27_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR27_Pos)                /* (CAN_TXBAR) Add Request 27 Mask */
#define CAN_TXBAR_AR27(value)                 (CAN_TXBAR_AR27_Msk & (_UINT32_(value) << CAN_TXBAR_AR27_Pos)) /* Assignment of value for AR27 in the CAN_TXBAR register */
#define CAN_TXBAR_AR28_Pos                    _UINT32_(28)                                         /* (CAN_TXBAR) Add Request 28 Position */
#define CAN_TXBAR_AR28_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR28_Pos)                /* (CAN_TXBAR) Add Request 28 Mask */
#define CAN_TXBAR_AR28(value)                 (CAN_TXBAR_AR28_Msk & (_UINT32_(value) << CAN_TXBAR_AR28_Pos)) /* Assignment of value for AR28 in the CAN_TXBAR register */
#define CAN_TXBAR_AR29_Pos                    _UINT32_(29)                                         /* (CAN_TXBAR) Add Request 29 Position */
#define CAN_TXBAR_AR29_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR29_Pos)                /* (CAN_TXBAR) Add Request 29 Mask */
#define CAN_TXBAR_AR29(value)                 (CAN_TXBAR_AR29_Msk & (_UINT32_(value) << CAN_TXBAR_AR29_Pos)) /* Assignment of value for AR29 in the CAN_TXBAR register */
#define CAN_TXBAR_AR30_Pos                    _UINT32_(30)                                         /* (CAN_TXBAR) Add Request 30 Position */
#define CAN_TXBAR_AR30_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR30_Pos)                /* (CAN_TXBAR) Add Request 30 Mask */
#define CAN_TXBAR_AR30(value)                 (CAN_TXBAR_AR30_Msk & (_UINT32_(value) << CAN_TXBAR_AR30_Pos)) /* Assignment of value for AR30 in the CAN_TXBAR register */
#define CAN_TXBAR_AR31_Pos                    _UINT32_(31)                                         /* (CAN_TXBAR) Add Request 31 Position */
#define CAN_TXBAR_AR31_Msk                    (_UINT32_(0x1) << CAN_TXBAR_AR31_Pos)                /* (CAN_TXBAR) Add Request 31 Mask */
#define CAN_TXBAR_AR31(value)                 (CAN_TXBAR_AR31_Msk & (_UINT32_(value) << CAN_TXBAR_AR31_Pos)) /* Assignment of value for AR31 in the CAN_TXBAR register */
#define CAN_TXBAR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBAR) Register Mask  */

#define CAN_TXBAR_AR_Pos                      _UINT32_(0)                                          /* (CAN_TXBAR Position) Add Request 3x */
#define CAN_TXBAR_AR_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_TXBAR_AR_Pos)           /* (CAN_TXBAR Mask) AR */
#define CAN_TXBAR_AR(value)                   (CAN_TXBAR_AR_Msk & (_UINT32_(value) << CAN_TXBAR_AR_Pos)) 

/* -------- CAN_TXBCR : (CAN Offset: 0xD4) (R/W 32) Tx Buffer Cancellation Request -------- */
#define CAN_TXBCR_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXBCR) Tx Buffer Cancellation Request  Reset Value */

#define CAN_TXBCR_CR0_Pos                     _UINT32_(0)                                          /* (CAN_TXBCR) Cancellation Request 0 Position */
#define CAN_TXBCR_CR0_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR0_Pos)                 /* (CAN_TXBCR) Cancellation Request 0 Mask */
#define CAN_TXBCR_CR0(value)                  (CAN_TXBCR_CR0_Msk & (_UINT32_(value) << CAN_TXBCR_CR0_Pos)) /* Assignment of value for CR0 in the CAN_TXBCR register */
#define CAN_TXBCR_CR1_Pos                     _UINT32_(1)                                          /* (CAN_TXBCR) Cancellation Request 1 Position */
#define CAN_TXBCR_CR1_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR1_Pos)                 /* (CAN_TXBCR) Cancellation Request 1 Mask */
#define CAN_TXBCR_CR1(value)                  (CAN_TXBCR_CR1_Msk & (_UINT32_(value) << CAN_TXBCR_CR1_Pos)) /* Assignment of value for CR1 in the CAN_TXBCR register */
#define CAN_TXBCR_CR2_Pos                     _UINT32_(2)                                          /* (CAN_TXBCR) Cancellation Request 2 Position */
#define CAN_TXBCR_CR2_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR2_Pos)                 /* (CAN_TXBCR) Cancellation Request 2 Mask */
#define CAN_TXBCR_CR2(value)                  (CAN_TXBCR_CR2_Msk & (_UINT32_(value) << CAN_TXBCR_CR2_Pos)) /* Assignment of value for CR2 in the CAN_TXBCR register */
#define CAN_TXBCR_CR3_Pos                     _UINT32_(3)                                          /* (CAN_TXBCR) Cancellation Request 3 Position */
#define CAN_TXBCR_CR3_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR3_Pos)                 /* (CAN_TXBCR) Cancellation Request 3 Mask */
#define CAN_TXBCR_CR3(value)                  (CAN_TXBCR_CR3_Msk & (_UINT32_(value) << CAN_TXBCR_CR3_Pos)) /* Assignment of value for CR3 in the CAN_TXBCR register */
#define CAN_TXBCR_CR4_Pos                     _UINT32_(4)                                          /* (CAN_TXBCR) Cancellation Request 4 Position */
#define CAN_TXBCR_CR4_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR4_Pos)                 /* (CAN_TXBCR) Cancellation Request 4 Mask */
#define CAN_TXBCR_CR4(value)                  (CAN_TXBCR_CR4_Msk & (_UINT32_(value) << CAN_TXBCR_CR4_Pos)) /* Assignment of value for CR4 in the CAN_TXBCR register */
#define CAN_TXBCR_CR5_Pos                     _UINT32_(5)                                          /* (CAN_TXBCR) Cancellation Request 5 Position */
#define CAN_TXBCR_CR5_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR5_Pos)                 /* (CAN_TXBCR) Cancellation Request 5 Mask */
#define CAN_TXBCR_CR5(value)                  (CAN_TXBCR_CR5_Msk & (_UINT32_(value) << CAN_TXBCR_CR5_Pos)) /* Assignment of value for CR5 in the CAN_TXBCR register */
#define CAN_TXBCR_CR6_Pos                     _UINT32_(6)                                          /* (CAN_TXBCR) Cancellation Request 6 Position */
#define CAN_TXBCR_CR6_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR6_Pos)                 /* (CAN_TXBCR) Cancellation Request 6 Mask */
#define CAN_TXBCR_CR6(value)                  (CAN_TXBCR_CR6_Msk & (_UINT32_(value) << CAN_TXBCR_CR6_Pos)) /* Assignment of value for CR6 in the CAN_TXBCR register */
#define CAN_TXBCR_CR7_Pos                     _UINT32_(7)                                          /* (CAN_TXBCR) Cancellation Request 7 Position */
#define CAN_TXBCR_CR7_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR7_Pos)                 /* (CAN_TXBCR) Cancellation Request 7 Mask */
#define CAN_TXBCR_CR7(value)                  (CAN_TXBCR_CR7_Msk & (_UINT32_(value) << CAN_TXBCR_CR7_Pos)) /* Assignment of value for CR7 in the CAN_TXBCR register */
#define CAN_TXBCR_CR8_Pos                     _UINT32_(8)                                          /* (CAN_TXBCR) Cancellation Request 8 Position */
#define CAN_TXBCR_CR8_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR8_Pos)                 /* (CAN_TXBCR) Cancellation Request 8 Mask */
#define CAN_TXBCR_CR8(value)                  (CAN_TXBCR_CR8_Msk & (_UINT32_(value) << CAN_TXBCR_CR8_Pos)) /* Assignment of value for CR8 in the CAN_TXBCR register */
#define CAN_TXBCR_CR9_Pos                     _UINT32_(9)                                          /* (CAN_TXBCR) Cancellation Request 9 Position */
#define CAN_TXBCR_CR9_Msk                     (_UINT32_(0x1) << CAN_TXBCR_CR9_Pos)                 /* (CAN_TXBCR) Cancellation Request 9 Mask */
#define CAN_TXBCR_CR9(value)                  (CAN_TXBCR_CR9_Msk & (_UINT32_(value) << CAN_TXBCR_CR9_Pos)) /* Assignment of value for CR9 in the CAN_TXBCR register */
#define CAN_TXBCR_CR10_Pos                    _UINT32_(10)                                         /* (CAN_TXBCR) Cancellation Request 10 Position */
#define CAN_TXBCR_CR10_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR10_Pos)                /* (CAN_TXBCR) Cancellation Request 10 Mask */
#define CAN_TXBCR_CR10(value)                 (CAN_TXBCR_CR10_Msk & (_UINT32_(value) << CAN_TXBCR_CR10_Pos)) /* Assignment of value for CR10 in the CAN_TXBCR register */
#define CAN_TXBCR_CR11_Pos                    _UINT32_(11)                                         /* (CAN_TXBCR) Cancellation Request 11 Position */
#define CAN_TXBCR_CR11_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR11_Pos)                /* (CAN_TXBCR) Cancellation Request 11 Mask */
#define CAN_TXBCR_CR11(value)                 (CAN_TXBCR_CR11_Msk & (_UINT32_(value) << CAN_TXBCR_CR11_Pos)) /* Assignment of value for CR11 in the CAN_TXBCR register */
#define CAN_TXBCR_CR12_Pos                    _UINT32_(12)                                         /* (CAN_TXBCR) Cancellation Request 12 Position */
#define CAN_TXBCR_CR12_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR12_Pos)                /* (CAN_TXBCR) Cancellation Request 12 Mask */
#define CAN_TXBCR_CR12(value)                 (CAN_TXBCR_CR12_Msk & (_UINT32_(value) << CAN_TXBCR_CR12_Pos)) /* Assignment of value for CR12 in the CAN_TXBCR register */
#define CAN_TXBCR_CR13_Pos                    _UINT32_(13)                                         /* (CAN_TXBCR) Cancellation Request 13 Position */
#define CAN_TXBCR_CR13_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR13_Pos)                /* (CAN_TXBCR) Cancellation Request 13 Mask */
#define CAN_TXBCR_CR13(value)                 (CAN_TXBCR_CR13_Msk & (_UINT32_(value) << CAN_TXBCR_CR13_Pos)) /* Assignment of value for CR13 in the CAN_TXBCR register */
#define CAN_TXBCR_CR14_Pos                    _UINT32_(14)                                         /* (CAN_TXBCR) Cancellation Request 14 Position */
#define CAN_TXBCR_CR14_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR14_Pos)                /* (CAN_TXBCR) Cancellation Request 14 Mask */
#define CAN_TXBCR_CR14(value)                 (CAN_TXBCR_CR14_Msk & (_UINT32_(value) << CAN_TXBCR_CR14_Pos)) /* Assignment of value for CR14 in the CAN_TXBCR register */
#define CAN_TXBCR_CR15_Pos                    _UINT32_(15)                                         /* (CAN_TXBCR) Cancellation Request 15 Position */
#define CAN_TXBCR_CR15_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR15_Pos)                /* (CAN_TXBCR) Cancellation Request 15 Mask */
#define CAN_TXBCR_CR15(value)                 (CAN_TXBCR_CR15_Msk & (_UINT32_(value) << CAN_TXBCR_CR15_Pos)) /* Assignment of value for CR15 in the CAN_TXBCR register */
#define CAN_TXBCR_CR16_Pos                    _UINT32_(16)                                         /* (CAN_TXBCR) Cancellation Request 16 Position */
#define CAN_TXBCR_CR16_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR16_Pos)                /* (CAN_TXBCR) Cancellation Request 16 Mask */
#define CAN_TXBCR_CR16(value)                 (CAN_TXBCR_CR16_Msk & (_UINT32_(value) << CAN_TXBCR_CR16_Pos)) /* Assignment of value for CR16 in the CAN_TXBCR register */
#define CAN_TXBCR_CR17_Pos                    _UINT32_(17)                                         /* (CAN_TXBCR) Cancellation Request 17 Position */
#define CAN_TXBCR_CR17_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR17_Pos)                /* (CAN_TXBCR) Cancellation Request 17 Mask */
#define CAN_TXBCR_CR17(value)                 (CAN_TXBCR_CR17_Msk & (_UINT32_(value) << CAN_TXBCR_CR17_Pos)) /* Assignment of value for CR17 in the CAN_TXBCR register */
#define CAN_TXBCR_CR18_Pos                    _UINT32_(18)                                         /* (CAN_TXBCR) Cancellation Request 18 Position */
#define CAN_TXBCR_CR18_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR18_Pos)                /* (CAN_TXBCR) Cancellation Request 18 Mask */
#define CAN_TXBCR_CR18(value)                 (CAN_TXBCR_CR18_Msk & (_UINT32_(value) << CAN_TXBCR_CR18_Pos)) /* Assignment of value for CR18 in the CAN_TXBCR register */
#define CAN_TXBCR_CR19_Pos                    _UINT32_(19)                                         /* (CAN_TXBCR) Cancellation Request 19 Position */
#define CAN_TXBCR_CR19_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR19_Pos)                /* (CAN_TXBCR) Cancellation Request 19 Mask */
#define CAN_TXBCR_CR19(value)                 (CAN_TXBCR_CR19_Msk & (_UINT32_(value) << CAN_TXBCR_CR19_Pos)) /* Assignment of value for CR19 in the CAN_TXBCR register */
#define CAN_TXBCR_CR20_Pos                    _UINT32_(20)                                         /* (CAN_TXBCR) Cancellation Request 20 Position */
#define CAN_TXBCR_CR20_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR20_Pos)                /* (CAN_TXBCR) Cancellation Request 20 Mask */
#define CAN_TXBCR_CR20(value)                 (CAN_TXBCR_CR20_Msk & (_UINT32_(value) << CAN_TXBCR_CR20_Pos)) /* Assignment of value for CR20 in the CAN_TXBCR register */
#define CAN_TXBCR_CR21_Pos                    _UINT32_(21)                                         /* (CAN_TXBCR) Cancellation Request 21 Position */
#define CAN_TXBCR_CR21_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR21_Pos)                /* (CAN_TXBCR) Cancellation Request 21 Mask */
#define CAN_TXBCR_CR21(value)                 (CAN_TXBCR_CR21_Msk & (_UINT32_(value) << CAN_TXBCR_CR21_Pos)) /* Assignment of value for CR21 in the CAN_TXBCR register */
#define CAN_TXBCR_CR22_Pos                    _UINT32_(22)                                         /* (CAN_TXBCR) Cancellation Request 22 Position */
#define CAN_TXBCR_CR22_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR22_Pos)                /* (CAN_TXBCR) Cancellation Request 22 Mask */
#define CAN_TXBCR_CR22(value)                 (CAN_TXBCR_CR22_Msk & (_UINT32_(value) << CAN_TXBCR_CR22_Pos)) /* Assignment of value for CR22 in the CAN_TXBCR register */
#define CAN_TXBCR_CR23_Pos                    _UINT32_(23)                                         /* (CAN_TXBCR) Cancellation Request 23 Position */
#define CAN_TXBCR_CR23_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR23_Pos)                /* (CAN_TXBCR) Cancellation Request 23 Mask */
#define CAN_TXBCR_CR23(value)                 (CAN_TXBCR_CR23_Msk & (_UINT32_(value) << CAN_TXBCR_CR23_Pos)) /* Assignment of value for CR23 in the CAN_TXBCR register */
#define CAN_TXBCR_CR24_Pos                    _UINT32_(24)                                         /* (CAN_TXBCR) Cancellation Request 24 Position */
#define CAN_TXBCR_CR24_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR24_Pos)                /* (CAN_TXBCR) Cancellation Request 24 Mask */
#define CAN_TXBCR_CR24(value)                 (CAN_TXBCR_CR24_Msk & (_UINT32_(value) << CAN_TXBCR_CR24_Pos)) /* Assignment of value for CR24 in the CAN_TXBCR register */
#define CAN_TXBCR_CR25_Pos                    _UINT32_(25)                                         /* (CAN_TXBCR) Cancellation Request 25 Position */
#define CAN_TXBCR_CR25_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR25_Pos)                /* (CAN_TXBCR) Cancellation Request 25 Mask */
#define CAN_TXBCR_CR25(value)                 (CAN_TXBCR_CR25_Msk & (_UINT32_(value) << CAN_TXBCR_CR25_Pos)) /* Assignment of value for CR25 in the CAN_TXBCR register */
#define CAN_TXBCR_CR26_Pos                    _UINT32_(26)                                         /* (CAN_TXBCR) Cancellation Request 26 Position */
#define CAN_TXBCR_CR26_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR26_Pos)                /* (CAN_TXBCR) Cancellation Request 26 Mask */
#define CAN_TXBCR_CR26(value)                 (CAN_TXBCR_CR26_Msk & (_UINT32_(value) << CAN_TXBCR_CR26_Pos)) /* Assignment of value for CR26 in the CAN_TXBCR register */
#define CAN_TXBCR_CR27_Pos                    _UINT32_(27)                                         /* (CAN_TXBCR) Cancellation Request 27 Position */
#define CAN_TXBCR_CR27_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR27_Pos)                /* (CAN_TXBCR) Cancellation Request 27 Mask */
#define CAN_TXBCR_CR27(value)                 (CAN_TXBCR_CR27_Msk & (_UINT32_(value) << CAN_TXBCR_CR27_Pos)) /* Assignment of value for CR27 in the CAN_TXBCR register */
#define CAN_TXBCR_CR28_Pos                    _UINT32_(28)                                         /* (CAN_TXBCR) Cancellation Request 28 Position */
#define CAN_TXBCR_CR28_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR28_Pos)                /* (CAN_TXBCR) Cancellation Request 28 Mask */
#define CAN_TXBCR_CR28(value)                 (CAN_TXBCR_CR28_Msk & (_UINT32_(value) << CAN_TXBCR_CR28_Pos)) /* Assignment of value for CR28 in the CAN_TXBCR register */
#define CAN_TXBCR_CR29_Pos                    _UINT32_(29)                                         /* (CAN_TXBCR) Cancellation Request 29 Position */
#define CAN_TXBCR_CR29_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR29_Pos)                /* (CAN_TXBCR) Cancellation Request 29 Mask */
#define CAN_TXBCR_CR29(value)                 (CAN_TXBCR_CR29_Msk & (_UINT32_(value) << CAN_TXBCR_CR29_Pos)) /* Assignment of value for CR29 in the CAN_TXBCR register */
#define CAN_TXBCR_CR30_Pos                    _UINT32_(30)                                         /* (CAN_TXBCR) Cancellation Request 30 Position */
#define CAN_TXBCR_CR30_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR30_Pos)                /* (CAN_TXBCR) Cancellation Request 30 Mask */
#define CAN_TXBCR_CR30(value)                 (CAN_TXBCR_CR30_Msk & (_UINT32_(value) << CAN_TXBCR_CR30_Pos)) /* Assignment of value for CR30 in the CAN_TXBCR register */
#define CAN_TXBCR_CR31_Pos                    _UINT32_(31)                                         /* (CAN_TXBCR) Cancellation Request 31 Position */
#define CAN_TXBCR_CR31_Msk                    (_UINT32_(0x1) << CAN_TXBCR_CR31_Pos)                /* (CAN_TXBCR) Cancellation Request 31 Mask */
#define CAN_TXBCR_CR31(value)                 (CAN_TXBCR_CR31_Msk & (_UINT32_(value) << CAN_TXBCR_CR31_Pos)) /* Assignment of value for CR31 in the CAN_TXBCR register */
#define CAN_TXBCR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBCR) Register Mask  */

#define CAN_TXBCR_CR_Pos                      _UINT32_(0)                                          /* (CAN_TXBCR Position) Cancellation Request 3x */
#define CAN_TXBCR_CR_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_TXBCR_CR_Pos)           /* (CAN_TXBCR Mask) CR */
#define CAN_TXBCR_CR(value)                   (CAN_TXBCR_CR_Msk & (_UINT32_(value) << CAN_TXBCR_CR_Pos)) 

/* -------- CAN_TXBTO : (CAN Offset: 0xD8) ( R/ 32) Tx Buffer Transmission Occurred -------- */
#define CAN_TXBTO_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXBTO) Tx Buffer Transmission Occurred  Reset Value */

#define CAN_TXBTO_TO0_Pos                     _UINT32_(0)                                          /* (CAN_TXBTO) Transmission Occurred 0 Position */
#define CAN_TXBTO_TO0_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO0_Pos)                 /* (CAN_TXBTO) Transmission Occurred 0 Mask */
#define CAN_TXBTO_TO0(value)                  (CAN_TXBTO_TO0_Msk & (_UINT32_(value) << CAN_TXBTO_TO0_Pos)) /* Assignment of value for TO0 in the CAN_TXBTO register */
#define CAN_TXBTO_TO1_Pos                     _UINT32_(1)                                          /* (CAN_TXBTO) Transmission Occurred 1 Position */
#define CAN_TXBTO_TO1_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO1_Pos)                 /* (CAN_TXBTO) Transmission Occurred 1 Mask */
#define CAN_TXBTO_TO1(value)                  (CAN_TXBTO_TO1_Msk & (_UINT32_(value) << CAN_TXBTO_TO1_Pos)) /* Assignment of value for TO1 in the CAN_TXBTO register */
#define CAN_TXBTO_TO2_Pos                     _UINT32_(2)                                          /* (CAN_TXBTO) Transmission Occurred 2 Position */
#define CAN_TXBTO_TO2_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO2_Pos)                 /* (CAN_TXBTO) Transmission Occurred 2 Mask */
#define CAN_TXBTO_TO2(value)                  (CAN_TXBTO_TO2_Msk & (_UINT32_(value) << CAN_TXBTO_TO2_Pos)) /* Assignment of value for TO2 in the CAN_TXBTO register */
#define CAN_TXBTO_TO3_Pos                     _UINT32_(3)                                          /* (CAN_TXBTO) Transmission Occurred 3 Position */
#define CAN_TXBTO_TO3_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO3_Pos)                 /* (CAN_TXBTO) Transmission Occurred 3 Mask */
#define CAN_TXBTO_TO3(value)                  (CAN_TXBTO_TO3_Msk & (_UINT32_(value) << CAN_TXBTO_TO3_Pos)) /* Assignment of value for TO3 in the CAN_TXBTO register */
#define CAN_TXBTO_TO4_Pos                     _UINT32_(4)                                          /* (CAN_TXBTO) Transmission Occurred 4 Position */
#define CAN_TXBTO_TO4_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO4_Pos)                 /* (CAN_TXBTO) Transmission Occurred 4 Mask */
#define CAN_TXBTO_TO4(value)                  (CAN_TXBTO_TO4_Msk & (_UINT32_(value) << CAN_TXBTO_TO4_Pos)) /* Assignment of value for TO4 in the CAN_TXBTO register */
#define CAN_TXBTO_TO5_Pos                     _UINT32_(5)                                          /* (CAN_TXBTO) Transmission Occurred 5 Position */
#define CAN_TXBTO_TO5_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO5_Pos)                 /* (CAN_TXBTO) Transmission Occurred 5 Mask */
#define CAN_TXBTO_TO5(value)                  (CAN_TXBTO_TO5_Msk & (_UINT32_(value) << CAN_TXBTO_TO5_Pos)) /* Assignment of value for TO5 in the CAN_TXBTO register */
#define CAN_TXBTO_TO6_Pos                     _UINT32_(6)                                          /* (CAN_TXBTO) Transmission Occurred 6 Position */
#define CAN_TXBTO_TO6_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO6_Pos)                 /* (CAN_TXBTO) Transmission Occurred 6 Mask */
#define CAN_TXBTO_TO6(value)                  (CAN_TXBTO_TO6_Msk & (_UINT32_(value) << CAN_TXBTO_TO6_Pos)) /* Assignment of value for TO6 in the CAN_TXBTO register */
#define CAN_TXBTO_TO7_Pos                     _UINT32_(7)                                          /* (CAN_TXBTO) Transmission Occurred 7 Position */
#define CAN_TXBTO_TO7_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO7_Pos)                 /* (CAN_TXBTO) Transmission Occurred 7 Mask */
#define CAN_TXBTO_TO7(value)                  (CAN_TXBTO_TO7_Msk & (_UINT32_(value) << CAN_TXBTO_TO7_Pos)) /* Assignment of value for TO7 in the CAN_TXBTO register */
#define CAN_TXBTO_TO8_Pos                     _UINT32_(8)                                          /* (CAN_TXBTO) Transmission Occurred 8 Position */
#define CAN_TXBTO_TO8_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO8_Pos)                 /* (CAN_TXBTO) Transmission Occurred 8 Mask */
#define CAN_TXBTO_TO8(value)                  (CAN_TXBTO_TO8_Msk & (_UINT32_(value) << CAN_TXBTO_TO8_Pos)) /* Assignment of value for TO8 in the CAN_TXBTO register */
#define CAN_TXBTO_TO9_Pos                     _UINT32_(9)                                          /* (CAN_TXBTO) Transmission Occurred 9 Position */
#define CAN_TXBTO_TO9_Msk                     (_UINT32_(0x1) << CAN_TXBTO_TO9_Pos)                 /* (CAN_TXBTO) Transmission Occurred 9 Mask */
#define CAN_TXBTO_TO9(value)                  (CAN_TXBTO_TO9_Msk & (_UINT32_(value) << CAN_TXBTO_TO9_Pos)) /* Assignment of value for TO9 in the CAN_TXBTO register */
#define CAN_TXBTO_TO10_Pos                    _UINT32_(10)                                         /* (CAN_TXBTO) Transmission Occurred 10 Position */
#define CAN_TXBTO_TO10_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO10_Pos)                /* (CAN_TXBTO) Transmission Occurred 10 Mask */
#define CAN_TXBTO_TO10(value)                 (CAN_TXBTO_TO10_Msk & (_UINT32_(value) << CAN_TXBTO_TO10_Pos)) /* Assignment of value for TO10 in the CAN_TXBTO register */
#define CAN_TXBTO_TO11_Pos                    _UINT32_(11)                                         /* (CAN_TXBTO) Transmission Occurred 11 Position */
#define CAN_TXBTO_TO11_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO11_Pos)                /* (CAN_TXBTO) Transmission Occurred 11 Mask */
#define CAN_TXBTO_TO11(value)                 (CAN_TXBTO_TO11_Msk & (_UINT32_(value) << CAN_TXBTO_TO11_Pos)) /* Assignment of value for TO11 in the CAN_TXBTO register */
#define CAN_TXBTO_TO12_Pos                    _UINT32_(12)                                         /* (CAN_TXBTO) Transmission Occurred 12 Position */
#define CAN_TXBTO_TO12_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO12_Pos)                /* (CAN_TXBTO) Transmission Occurred 12 Mask */
#define CAN_TXBTO_TO12(value)                 (CAN_TXBTO_TO12_Msk & (_UINT32_(value) << CAN_TXBTO_TO12_Pos)) /* Assignment of value for TO12 in the CAN_TXBTO register */
#define CAN_TXBTO_TO13_Pos                    _UINT32_(13)                                         /* (CAN_TXBTO) Transmission Occurred 13 Position */
#define CAN_TXBTO_TO13_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO13_Pos)                /* (CAN_TXBTO) Transmission Occurred 13 Mask */
#define CAN_TXBTO_TO13(value)                 (CAN_TXBTO_TO13_Msk & (_UINT32_(value) << CAN_TXBTO_TO13_Pos)) /* Assignment of value for TO13 in the CAN_TXBTO register */
#define CAN_TXBTO_TO14_Pos                    _UINT32_(14)                                         /* (CAN_TXBTO) Transmission Occurred 14 Position */
#define CAN_TXBTO_TO14_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO14_Pos)                /* (CAN_TXBTO) Transmission Occurred 14 Mask */
#define CAN_TXBTO_TO14(value)                 (CAN_TXBTO_TO14_Msk & (_UINT32_(value) << CAN_TXBTO_TO14_Pos)) /* Assignment of value for TO14 in the CAN_TXBTO register */
#define CAN_TXBTO_TO15_Pos                    _UINT32_(15)                                         /* (CAN_TXBTO) Transmission Occurred 15 Position */
#define CAN_TXBTO_TO15_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO15_Pos)                /* (CAN_TXBTO) Transmission Occurred 15 Mask */
#define CAN_TXBTO_TO15(value)                 (CAN_TXBTO_TO15_Msk & (_UINT32_(value) << CAN_TXBTO_TO15_Pos)) /* Assignment of value for TO15 in the CAN_TXBTO register */
#define CAN_TXBTO_TO16_Pos                    _UINT32_(16)                                         /* (CAN_TXBTO) Transmission Occurred 16 Position */
#define CAN_TXBTO_TO16_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO16_Pos)                /* (CAN_TXBTO) Transmission Occurred 16 Mask */
#define CAN_TXBTO_TO16(value)                 (CAN_TXBTO_TO16_Msk & (_UINT32_(value) << CAN_TXBTO_TO16_Pos)) /* Assignment of value for TO16 in the CAN_TXBTO register */
#define CAN_TXBTO_TO17_Pos                    _UINT32_(17)                                         /* (CAN_TXBTO) Transmission Occurred 17 Position */
#define CAN_TXBTO_TO17_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO17_Pos)                /* (CAN_TXBTO) Transmission Occurred 17 Mask */
#define CAN_TXBTO_TO17(value)                 (CAN_TXBTO_TO17_Msk & (_UINT32_(value) << CAN_TXBTO_TO17_Pos)) /* Assignment of value for TO17 in the CAN_TXBTO register */
#define CAN_TXBTO_TO18_Pos                    _UINT32_(18)                                         /* (CAN_TXBTO) Transmission Occurred 18 Position */
#define CAN_TXBTO_TO18_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO18_Pos)                /* (CAN_TXBTO) Transmission Occurred 18 Mask */
#define CAN_TXBTO_TO18(value)                 (CAN_TXBTO_TO18_Msk & (_UINT32_(value) << CAN_TXBTO_TO18_Pos)) /* Assignment of value for TO18 in the CAN_TXBTO register */
#define CAN_TXBTO_TO19_Pos                    _UINT32_(19)                                         /* (CAN_TXBTO) Transmission Occurred 19 Position */
#define CAN_TXBTO_TO19_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO19_Pos)                /* (CAN_TXBTO) Transmission Occurred 19 Mask */
#define CAN_TXBTO_TO19(value)                 (CAN_TXBTO_TO19_Msk & (_UINT32_(value) << CAN_TXBTO_TO19_Pos)) /* Assignment of value for TO19 in the CAN_TXBTO register */
#define CAN_TXBTO_TO20_Pos                    _UINT32_(20)                                         /* (CAN_TXBTO) Transmission Occurred 20 Position */
#define CAN_TXBTO_TO20_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO20_Pos)                /* (CAN_TXBTO) Transmission Occurred 20 Mask */
#define CAN_TXBTO_TO20(value)                 (CAN_TXBTO_TO20_Msk & (_UINT32_(value) << CAN_TXBTO_TO20_Pos)) /* Assignment of value for TO20 in the CAN_TXBTO register */
#define CAN_TXBTO_TO21_Pos                    _UINT32_(21)                                         /* (CAN_TXBTO) Transmission Occurred 21 Position */
#define CAN_TXBTO_TO21_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO21_Pos)                /* (CAN_TXBTO) Transmission Occurred 21 Mask */
#define CAN_TXBTO_TO21(value)                 (CAN_TXBTO_TO21_Msk & (_UINT32_(value) << CAN_TXBTO_TO21_Pos)) /* Assignment of value for TO21 in the CAN_TXBTO register */
#define CAN_TXBTO_TO22_Pos                    _UINT32_(22)                                         /* (CAN_TXBTO) Transmission Occurred 22 Position */
#define CAN_TXBTO_TO22_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO22_Pos)                /* (CAN_TXBTO) Transmission Occurred 22 Mask */
#define CAN_TXBTO_TO22(value)                 (CAN_TXBTO_TO22_Msk & (_UINT32_(value) << CAN_TXBTO_TO22_Pos)) /* Assignment of value for TO22 in the CAN_TXBTO register */
#define CAN_TXBTO_TO23_Pos                    _UINT32_(23)                                         /* (CAN_TXBTO) Transmission Occurred 23 Position */
#define CAN_TXBTO_TO23_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO23_Pos)                /* (CAN_TXBTO) Transmission Occurred 23 Mask */
#define CAN_TXBTO_TO23(value)                 (CAN_TXBTO_TO23_Msk & (_UINT32_(value) << CAN_TXBTO_TO23_Pos)) /* Assignment of value for TO23 in the CAN_TXBTO register */
#define CAN_TXBTO_TO24_Pos                    _UINT32_(24)                                         /* (CAN_TXBTO) Transmission Occurred 24 Position */
#define CAN_TXBTO_TO24_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO24_Pos)                /* (CAN_TXBTO) Transmission Occurred 24 Mask */
#define CAN_TXBTO_TO24(value)                 (CAN_TXBTO_TO24_Msk & (_UINT32_(value) << CAN_TXBTO_TO24_Pos)) /* Assignment of value for TO24 in the CAN_TXBTO register */
#define CAN_TXBTO_TO25_Pos                    _UINT32_(25)                                         /* (CAN_TXBTO) Transmission Occurred 25 Position */
#define CAN_TXBTO_TO25_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO25_Pos)                /* (CAN_TXBTO) Transmission Occurred 25 Mask */
#define CAN_TXBTO_TO25(value)                 (CAN_TXBTO_TO25_Msk & (_UINT32_(value) << CAN_TXBTO_TO25_Pos)) /* Assignment of value for TO25 in the CAN_TXBTO register */
#define CAN_TXBTO_TO26_Pos                    _UINT32_(26)                                         /* (CAN_TXBTO) Transmission Occurred 26 Position */
#define CAN_TXBTO_TO26_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO26_Pos)                /* (CAN_TXBTO) Transmission Occurred 26 Mask */
#define CAN_TXBTO_TO26(value)                 (CAN_TXBTO_TO26_Msk & (_UINT32_(value) << CAN_TXBTO_TO26_Pos)) /* Assignment of value for TO26 in the CAN_TXBTO register */
#define CAN_TXBTO_TO27_Pos                    _UINT32_(27)                                         /* (CAN_TXBTO) Transmission Occurred 27 Position */
#define CAN_TXBTO_TO27_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO27_Pos)                /* (CAN_TXBTO) Transmission Occurred 27 Mask */
#define CAN_TXBTO_TO27(value)                 (CAN_TXBTO_TO27_Msk & (_UINT32_(value) << CAN_TXBTO_TO27_Pos)) /* Assignment of value for TO27 in the CAN_TXBTO register */
#define CAN_TXBTO_TO28_Pos                    _UINT32_(28)                                         /* (CAN_TXBTO) Transmission Occurred 28 Position */
#define CAN_TXBTO_TO28_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO28_Pos)                /* (CAN_TXBTO) Transmission Occurred 28 Mask */
#define CAN_TXBTO_TO28(value)                 (CAN_TXBTO_TO28_Msk & (_UINT32_(value) << CAN_TXBTO_TO28_Pos)) /* Assignment of value for TO28 in the CAN_TXBTO register */
#define CAN_TXBTO_TO29_Pos                    _UINT32_(29)                                         /* (CAN_TXBTO) Transmission Occurred 29 Position */
#define CAN_TXBTO_TO29_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO29_Pos)                /* (CAN_TXBTO) Transmission Occurred 29 Mask */
#define CAN_TXBTO_TO29(value)                 (CAN_TXBTO_TO29_Msk & (_UINT32_(value) << CAN_TXBTO_TO29_Pos)) /* Assignment of value for TO29 in the CAN_TXBTO register */
#define CAN_TXBTO_TO30_Pos                    _UINT32_(30)                                         /* (CAN_TXBTO) Transmission Occurred 30 Position */
#define CAN_TXBTO_TO30_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO30_Pos)                /* (CAN_TXBTO) Transmission Occurred 30 Mask */
#define CAN_TXBTO_TO30(value)                 (CAN_TXBTO_TO30_Msk & (_UINT32_(value) << CAN_TXBTO_TO30_Pos)) /* Assignment of value for TO30 in the CAN_TXBTO register */
#define CAN_TXBTO_TO31_Pos                    _UINT32_(31)                                         /* (CAN_TXBTO) Transmission Occurred 31 Position */
#define CAN_TXBTO_TO31_Msk                    (_UINT32_(0x1) << CAN_TXBTO_TO31_Pos)                /* (CAN_TXBTO) Transmission Occurred 31 Mask */
#define CAN_TXBTO_TO31(value)                 (CAN_TXBTO_TO31_Msk & (_UINT32_(value) << CAN_TXBTO_TO31_Pos)) /* Assignment of value for TO31 in the CAN_TXBTO register */
#define CAN_TXBTO_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBTO) Register Mask  */

#define CAN_TXBTO_TO_Pos                      _UINT32_(0)                                          /* (CAN_TXBTO Position) Transmission Occurred 3x */
#define CAN_TXBTO_TO_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_TXBTO_TO_Pos)           /* (CAN_TXBTO Mask) TO */
#define CAN_TXBTO_TO(value)                   (CAN_TXBTO_TO_Msk & (_UINT32_(value) << CAN_TXBTO_TO_Pos)) 

/* -------- CAN_TXBCF : (CAN Offset: 0xDC) ( R/ 32) Tx Buffer Cancellation Finished -------- */
#define CAN_TXBCF_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXBCF) Tx Buffer Cancellation Finished  Reset Value */

#define CAN_TXBCF_CF0_Pos                     _UINT32_(0)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 0 Position */
#define CAN_TXBCF_CF0_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF0_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 0 Mask */
#define CAN_TXBCF_CF0(value)                  (CAN_TXBCF_CF0_Msk & (_UINT32_(value) << CAN_TXBCF_CF0_Pos)) /* Assignment of value for CF0 in the CAN_TXBCF register */
#define CAN_TXBCF_CF1_Pos                     _UINT32_(1)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 1 Position */
#define CAN_TXBCF_CF1_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF1_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 1 Mask */
#define CAN_TXBCF_CF1(value)                  (CAN_TXBCF_CF1_Msk & (_UINT32_(value) << CAN_TXBCF_CF1_Pos)) /* Assignment of value for CF1 in the CAN_TXBCF register */
#define CAN_TXBCF_CF2_Pos                     _UINT32_(2)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 2 Position */
#define CAN_TXBCF_CF2_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF2_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 2 Mask */
#define CAN_TXBCF_CF2(value)                  (CAN_TXBCF_CF2_Msk & (_UINT32_(value) << CAN_TXBCF_CF2_Pos)) /* Assignment of value for CF2 in the CAN_TXBCF register */
#define CAN_TXBCF_CF3_Pos                     _UINT32_(3)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 3 Position */
#define CAN_TXBCF_CF3_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF3_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 3 Mask */
#define CAN_TXBCF_CF3(value)                  (CAN_TXBCF_CF3_Msk & (_UINT32_(value) << CAN_TXBCF_CF3_Pos)) /* Assignment of value for CF3 in the CAN_TXBCF register */
#define CAN_TXBCF_CF4_Pos                     _UINT32_(4)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 4 Position */
#define CAN_TXBCF_CF4_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF4_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 4 Mask */
#define CAN_TXBCF_CF4(value)                  (CAN_TXBCF_CF4_Msk & (_UINT32_(value) << CAN_TXBCF_CF4_Pos)) /* Assignment of value for CF4 in the CAN_TXBCF register */
#define CAN_TXBCF_CF5_Pos                     _UINT32_(5)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 5 Position */
#define CAN_TXBCF_CF5_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF5_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 5 Mask */
#define CAN_TXBCF_CF5(value)                  (CAN_TXBCF_CF5_Msk & (_UINT32_(value) << CAN_TXBCF_CF5_Pos)) /* Assignment of value for CF5 in the CAN_TXBCF register */
#define CAN_TXBCF_CF6_Pos                     _UINT32_(6)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 6 Position */
#define CAN_TXBCF_CF6_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF6_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 6 Mask */
#define CAN_TXBCF_CF6(value)                  (CAN_TXBCF_CF6_Msk & (_UINT32_(value) << CAN_TXBCF_CF6_Pos)) /* Assignment of value for CF6 in the CAN_TXBCF register */
#define CAN_TXBCF_CF7_Pos                     _UINT32_(7)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 7 Position */
#define CAN_TXBCF_CF7_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF7_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 7 Mask */
#define CAN_TXBCF_CF7(value)                  (CAN_TXBCF_CF7_Msk & (_UINT32_(value) << CAN_TXBCF_CF7_Pos)) /* Assignment of value for CF7 in the CAN_TXBCF register */
#define CAN_TXBCF_CF8_Pos                     _UINT32_(8)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 8 Position */
#define CAN_TXBCF_CF8_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF8_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 8 Mask */
#define CAN_TXBCF_CF8(value)                  (CAN_TXBCF_CF8_Msk & (_UINT32_(value) << CAN_TXBCF_CF8_Pos)) /* Assignment of value for CF8 in the CAN_TXBCF register */
#define CAN_TXBCF_CF9_Pos                     _UINT32_(9)                                          /* (CAN_TXBCF) Tx Buffer Cancellation Finished 9 Position */
#define CAN_TXBCF_CF9_Msk                     (_UINT32_(0x1) << CAN_TXBCF_CF9_Pos)                 /* (CAN_TXBCF) Tx Buffer Cancellation Finished 9 Mask */
#define CAN_TXBCF_CF9(value)                  (CAN_TXBCF_CF9_Msk & (_UINT32_(value) << CAN_TXBCF_CF9_Pos)) /* Assignment of value for CF9 in the CAN_TXBCF register */
#define CAN_TXBCF_CF10_Pos                    _UINT32_(10)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 10 Position */
#define CAN_TXBCF_CF10_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF10_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 10 Mask */
#define CAN_TXBCF_CF10(value)                 (CAN_TXBCF_CF10_Msk & (_UINT32_(value) << CAN_TXBCF_CF10_Pos)) /* Assignment of value for CF10 in the CAN_TXBCF register */
#define CAN_TXBCF_CF11_Pos                    _UINT32_(11)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 11 Position */
#define CAN_TXBCF_CF11_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF11_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 11 Mask */
#define CAN_TXBCF_CF11(value)                 (CAN_TXBCF_CF11_Msk & (_UINT32_(value) << CAN_TXBCF_CF11_Pos)) /* Assignment of value for CF11 in the CAN_TXBCF register */
#define CAN_TXBCF_CF12_Pos                    _UINT32_(12)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 12 Position */
#define CAN_TXBCF_CF12_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF12_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 12 Mask */
#define CAN_TXBCF_CF12(value)                 (CAN_TXBCF_CF12_Msk & (_UINT32_(value) << CAN_TXBCF_CF12_Pos)) /* Assignment of value for CF12 in the CAN_TXBCF register */
#define CAN_TXBCF_CF13_Pos                    _UINT32_(13)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 13 Position */
#define CAN_TXBCF_CF13_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF13_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 13 Mask */
#define CAN_TXBCF_CF13(value)                 (CAN_TXBCF_CF13_Msk & (_UINT32_(value) << CAN_TXBCF_CF13_Pos)) /* Assignment of value for CF13 in the CAN_TXBCF register */
#define CAN_TXBCF_CF14_Pos                    _UINT32_(14)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 14 Position */
#define CAN_TXBCF_CF14_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF14_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 14 Mask */
#define CAN_TXBCF_CF14(value)                 (CAN_TXBCF_CF14_Msk & (_UINT32_(value) << CAN_TXBCF_CF14_Pos)) /* Assignment of value for CF14 in the CAN_TXBCF register */
#define CAN_TXBCF_CF15_Pos                    _UINT32_(15)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 15 Position */
#define CAN_TXBCF_CF15_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF15_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 15 Mask */
#define CAN_TXBCF_CF15(value)                 (CAN_TXBCF_CF15_Msk & (_UINT32_(value) << CAN_TXBCF_CF15_Pos)) /* Assignment of value for CF15 in the CAN_TXBCF register */
#define CAN_TXBCF_CF16_Pos                    _UINT32_(16)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 16 Position */
#define CAN_TXBCF_CF16_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF16_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 16 Mask */
#define CAN_TXBCF_CF16(value)                 (CAN_TXBCF_CF16_Msk & (_UINT32_(value) << CAN_TXBCF_CF16_Pos)) /* Assignment of value for CF16 in the CAN_TXBCF register */
#define CAN_TXBCF_CF17_Pos                    _UINT32_(17)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 17 Position */
#define CAN_TXBCF_CF17_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF17_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 17 Mask */
#define CAN_TXBCF_CF17(value)                 (CAN_TXBCF_CF17_Msk & (_UINT32_(value) << CAN_TXBCF_CF17_Pos)) /* Assignment of value for CF17 in the CAN_TXBCF register */
#define CAN_TXBCF_CF18_Pos                    _UINT32_(18)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 18 Position */
#define CAN_TXBCF_CF18_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF18_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 18 Mask */
#define CAN_TXBCF_CF18(value)                 (CAN_TXBCF_CF18_Msk & (_UINT32_(value) << CAN_TXBCF_CF18_Pos)) /* Assignment of value for CF18 in the CAN_TXBCF register */
#define CAN_TXBCF_CF19_Pos                    _UINT32_(19)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 19 Position */
#define CAN_TXBCF_CF19_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF19_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 19 Mask */
#define CAN_TXBCF_CF19(value)                 (CAN_TXBCF_CF19_Msk & (_UINT32_(value) << CAN_TXBCF_CF19_Pos)) /* Assignment of value for CF19 in the CAN_TXBCF register */
#define CAN_TXBCF_CF20_Pos                    _UINT32_(20)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 20 Position */
#define CAN_TXBCF_CF20_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF20_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 20 Mask */
#define CAN_TXBCF_CF20(value)                 (CAN_TXBCF_CF20_Msk & (_UINT32_(value) << CAN_TXBCF_CF20_Pos)) /* Assignment of value for CF20 in the CAN_TXBCF register */
#define CAN_TXBCF_CF21_Pos                    _UINT32_(21)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 21 Position */
#define CAN_TXBCF_CF21_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF21_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 21 Mask */
#define CAN_TXBCF_CF21(value)                 (CAN_TXBCF_CF21_Msk & (_UINT32_(value) << CAN_TXBCF_CF21_Pos)) /* Assignment of value for CF21 in the CAN_TXBCF register */
#define CAN_TXBCF_CF22_Pos                    _UINT32_(22)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 22 Position */
#define CAN_TXBCF_CF22_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF22_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 22 Mask */
#define CAN_TXBCF_CF22(value)                 (CAN_TXBCF_CF22_Msk & (_UINT32_(value) << CAN_TXBCF_CF22_Pos)) /* Assignment of value for CF22 in the CAN_TXBCF register */
#define CAN_TXBCF_CF23_Pos                    _UINT32_(23)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 23 Position */
#define CAN_TXBCF_CF23_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF23_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 23 Mask */
#define CAN_TXBCF_CF23(value)                 (CAN_TXBCF_CF23_Msk & (_UINT32_(value) << CAN_TXBCF_CF23_Pos)) /* Assignment of value for CF23 in the CAN_TXBCF register */
#define CAN_TXBCF_CF24_Pos                    _UINT32_(24)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 24 Position */
#define CAN_TXBCF_CF24_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF24_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 24 Mask */
#define CAN_TXBCF_CF24(value)                 (CAN_TXBCF_CF24_Msk & (_UINT32_(value) << CAN_TXBCF_CF24_Pos)) /* Assignment of value for CF24 in the CAN_TXBCF register */
#define CAN_TXBCF_CF25_Pos                    _UINT32_(25)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 25 Position */
#define CAN_TXBCF_CF25_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF25_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 25 Mask */
#define CAN_TXBCF_CF25(value)                 (CAN_TXBCF_CF25_Msk & (_UINT32_(value) << CAN_TXBCF_CF25_Pos)) /* Assignment of value for CF25 in the CAN_TXBCF register */
#define CAN_TXBCF_CF26_Pos                    _UINT32_(26)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 26 Position */
#define CAN_TXBCF_CF26_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF26_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 26 Mask */
#define CAN_TXBCF_CF26(value)                 (CAN_TXBCF_CF26_Msk & (_UINT32_(value) << CAN_TXBCF_CF26_Pos)) /* Assignment of value for CF26 in the CAN_TXBCF register */
#define CAN_TXBCF_CF27_Pos                    _UINT32_(27)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 27 Position */
#define CAN_TXBCF_CF27_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF27_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 27 Mask */
#define CAN_TXBCF_CF27(value)                 (CAN_TXBCF_CF27_Msk & (_UINT32_(value) << CAN_TXBCF_CF27_Pos)) /* Assignment of value for CF27 in the CAN_TXBCF register */
#define CAN_TXBCF_CF28_Pos                    _UINT32_(28)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 28 Position */
#define CAN_TXBCF_CF28_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF28_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 28 Mask */
#define CAN_TXBCF_CF28(value)                 (CAN_TXBCF_CF28_Msk & (_UINT32_(value) << CAN_TXBCF_CF28_Pos)) /* Assignment of value for CF28 in the CAN_TXBCF register */
#define CAN_TXBCF_CF29_Pos                    _UINT32_(29)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 29 Position */
#define CAN_TXBCF_CF29_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF29_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 29 Mask */
#define CAN_TXBCF_CF29(value)                 (CAN_TXBCF_CF29_Msk & (_UINT32_(value) << CAN_TXBCF_CF29_Pos)) /* Assignment of value for CF29 in the CAN_TXBCF register */
#define CAN_TXBCF_CF30_Pos                    _UINT32_(30)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 30 Position */
#define CAN_TXBCF_CF30_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF30_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 30 Mask */
#define CAN_TXBCF_CF30(value)                 (CAN_TXBCF_CF30_Msk & (_UINT32_(value) << CAN_TXBCF_CF30_Pos)) /* Assignment of value for CF30 in the CAN_TXBCF register */
#define CAN_TXBCF_CF31_Pos                    _UINT32_(31)                                         /* (CAN_TXBCF) Tx Buffer Cancellation Finished 31 Position */
#define CAN_TXBCF_CF31_Msk                    (_UINT32_(0x1) << CAN_TXBCF_CF31_Pos)                /* (CAN_TXBCF) Tx Buffer Cancellation Finished 31 Mask */
#define CAN_TXBCF_CF31(value)                 (CAN_TXBCF_CF31_Msk & (_UINT32_(value) << CAN_TXBCF_CF31_Pos)) /* Assignment of value for CF31 in the CAN_TXBCF register */
#define CAN_TXBCF_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBCF) Register Mask  */

#define CAN_TXBCF_CF_Pos                      _UINT32_(0)                                          /* (CAN_TXBCF Position) Tx Buffer Cancellation Finished 3x */
#define CAN_TXBCF_CF_Msk                      (_UINT32_(0xFFFFFFFF) << CAN_TXBCF_CF_Pos)           /* (CAN_TXBCF Mask) CF */
#define CAN_TXBCF_CF(value)                   (CAN_TXBCF_CF_Msk & (_UINT32_(value) << CAN_TXBCF_CF_Pos)) 

/* -------- CAN_TXBTIE : (CAN Offset: 0xE0) (R/W 32) Tx Buffer Transmission Interrupt Enable -------- */
#define CAN_TXBTIE_RESETVALUE                 _UINT32_(0x00)                                       /*  (CAN_TXBTIE) Tx Buffer Transmission Interrupt Enable  Reset Value */

#define CAN_TXBTIE_TIE0_Pos                   _UINT32_(0)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 0 Position */
#define CAN_TXBTIE_TIE0_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE0_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 0 Mask */
#define CAN_TXBTIE_TIE0(value)                (CAN_TXBTIE_TIE0_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE0_Pos)) /* Assignment of value for TIE0 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE1_Pos                   _UINT32_(1)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 1 Position */
#define CAN_TXBTIE_TIE1_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE1_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 1 Mask */
#define CAN_TXBTIE_TIE1(value)                (CAN_TXBTIE_TIE1_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE1_Pos)) /* Assignment of value for TIE1 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE2_Pos                   _UINT32_(2)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 2 Position */
#define CAN_TXBTIE_TIE2_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE2_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 2 Mask */
#define CAN_TXBTIE_TIE2(value)                (CAN_TXBTIE_TIE2_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE2_Pos)) /* Assignment of value for TIE2 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE3_Pos                   _UINT32_(3)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 3 Position */
#define CAN_TXBTIE_TIE3_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE3_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 3 Mask */
#define CAN_TXBTIE_TIE3(value)                (CAN_TXBTIE_TIE3_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE3_Pos)) /* Assignment of value for TIE3 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE4_Pos                   _UINT32_(4)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 4 Position */
#define CAN_TXBTIE_TIE4_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE4_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 4 Mask */
#define CAN_TXBTIE_TIE4(value)                (CAN_TXBTIE_TIE4_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE4_Pos)) /* Assignment of value for TIE4 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE5_Pos                   _UINT32_(5)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 5 Position */
#define CAN_TXBTIE_TIE5_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE5_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 5 Mask */
#define CAN_TXBTIE_TIE5(value)                (CAN_TXBTIE_TIE5_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE5_Pos)) /* Assignment of value for TIE5 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE6_Pos                   _UINT32_(6)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 6 Position */
#define CAN_TXBTIE_TIE6_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE6_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 6 Mask */
#define CAN_TXBTIE_TIE6(value)                (CAN_TXBTIE_TIE6_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE6_Pos)) /* Assignment of value for TIE6 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE7_Pos                   _UINT32_(7)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 7 Position */
#define CAN_TXBTIE_TIE7_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE7_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 7 Mask */
#define CAN_TXBTIE_TIE7(value)                (CAN_TXBTIE_TIE7_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE7_Pos)) /* Assignment of value for TIE7 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE8_Pos                   _UINT32_(8)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 8 Position */
#define CAN_TXBTIE_TIE8_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE8_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 8 Mask */
#define CAN_TXBTIE_TIE8(value)                (CAN_TXBTIE_TIE8_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE8_Pos)) /* Assignment of value for TIE8 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE9_Pos                   _UINT32_(9)                                          /* (CAN_TXBTIE) Transmission Interrupt Enable 9 Position */
#define CAN_TXBTIE_TIE9_Msk                   (_UINT32_(0x1) << CAN_TXBTIE_TIE9_Pos)               /* (CAN_TXBTIE) Transmission Interrupt Enable 9 Mask */
#define CAN_TXBTIE_TIE9(value)                (CAN_TXBTIE_TIE9_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE9_Pos)) /* Assignment of value for TIE9 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE10_Pos                  _UINT32_(10)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 10 Position */
#define CAN_TXBTIE_TIE10_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE10_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 10 Mask */
#define CAN_TXBTIE_TIE10(value)               (CAN_TXBTIE_TIE10_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE10_Pos)) /* Assignment of value for TIE10 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE11_Pos                  _UINT32_(11)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 11 Position */
#define CAN_TXBTIE_TIE11_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE11_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 11 Mask */
#define CAN_TXBTIE_TIE11(value)               (CAN_TXBTIE_TIE11_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE11_Pos)) /* Assignment of value for TIE11 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE12_Pos                  _UINT32_(12)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 12 Position */
#define CAN_TXBTIE_TIE12_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE12_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 12 Mask */
#define CAN_TXBTIE_TIE12(value)               (CAN_TXBTIE_TIE12_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE12_Pos)) /* Assignment of value for TIE12 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE13_Pos                  _UINT32_(13)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 13 Position */
#define CAN_TXBTIE_TIE13_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE13_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 13 Mask */
#define CAN_TXBTIE_TIE13(value)               (CAN_TXBTIE_TIE13_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE13_Pos)) /* Assignment of value for TIE13 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE14_Pos                  _UINT32_(14)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 14 Position */
#define CAN_TXBTIE_TIE14_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE14_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 14 Mask */
#define CAN_TXBTIE_TIE14(value)               (CAN_TXBTIE_TIE14_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE14_Pos)) /* Assignment of value for TIE14 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE15_Pos                  _UINT32_(15)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 15 Position */
#define CAN_TXBTIE_TIE15_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE15_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 15 Mask */
#define CAN_TXBTIE_TIE15(value)               (CAN_TXBTIE_TIE15_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE15_Pos)) /* Assignment of value for TIE15 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE16_Pos                  _UINT32_(16)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 16 Position */
#define CAN_TXBTIE_TIE16_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE16_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 16 Mask */
#define CAN_TXBTIE_TIE16(value)               (CAN_TXBTIE_TIE16_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE16_Pos)) /* Assignment of value for TIE16 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE17_Pos                  _UINT32_(17)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 17 Position */
#define CAN_TXBTIE_TIE17_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE17_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 17 Mask */
#define CAN_TXBTIE_TIE17(value)               (CAN_TXBTIE_TIE17_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE17_Pos)) /* Assignment of value for TIE17 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE18_Pos                  _UINT32_(18)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 18 Position */
#define CAN_TXBTIE_TIE18_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE18_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 18 Mask */
#define CAN_TXBTIE_TIE18(value)               (CAN_TXBTIE_TIE18_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE18_Pos)) /* Assignment of value for TIE18 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE19_Pos                  _UINT32_(19)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 19 Position */
#define CAN_TXBTIE_TIE19_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE19_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 19 Mask */
#define CAN_TXBTIE_TIE19(value)               (CAN_TXBTIE_TIE19_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE19_Pos)) /* Assignment of value for TIE19 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE20_Pos                  _UINT32_(20)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 20 Position */
#define CAN_TXBTIE_TIE20_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE20_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 20 Mask */
#define CAN_TXBTIE_TIE20(value)               (CAN_TXBTIE_TIE20_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE20_Pos)) /* Assignment of value for TIE20 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE21_Pos                  _UINT32_(21)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 21 Position */
#define CAN_TXBTIE_TIE21_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE21_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 21 Mask */
#define CAN_TXBTIE_TIE21(value)               (CAN_TXBTIE_TIE21_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE21_Pos)) /* Assignment of value for TIE21 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE22_Pos                  _UINT32_(22)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 22 Position */
#define CAN_TXBTIE_TIE22_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE22_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 22 Mask */
#define CAN_TXBTIE_TIE22(value)               (CAN_TXBTIE_TIE22_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE22_Pos)) /* Assignment of value for TIE22 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE23_Pos                  _UINT32_(23)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 23 Position */
#define CAN_TXBTIE_TIE23_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE23_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 23 Mask */
#define CAN_TXBTIE_TIE23(value)               (CAN_TXBTIE_TIE23_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE23_Pos)) /* Assignment of value for TIE23 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE24_Pos                  _UINT32_(24)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 24 Position */
#define CAN_TXBTIE_TIE24_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE24_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 24 Mask */
#define CAN_TXBTIE_TIE24(value)               (CAN_TXBTIE_TIE24_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE24_Pos)) /* Assignment of value for TIE24 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE25_Pos                  _UINT32_(25)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 25 Position */
#define CAN_TXBTIE_TIE25_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE25_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 25 Mask */
#define CAN_TXBTIE_TIE25(value)               (CAN_TXBTIE_TIE25_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE25_Pos)) /* Assignment of value for TIE25 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE26_Pos                  _UINT32_(26)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 26 Position */
#define CAN_TXBTIE_TIE26_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE26_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 26 Mask */
#define CAN_TXBTIE_TIE26(value)               (CAN_TXBTIE_TIE26_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE26_Pos)) /* Assignment of value for TIE26 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE27_Pos                  _UINT32_(27)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 27 Position */
#define CAN_TXBTIE_TIE27_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE27_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 27 Mask */
#define CAN_TXBTIE_TIE27(value)               (CAN_TXBTIE_TIE27_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE27_Pos)) /* Assignment of value for TIE27 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE28_Pos                  _UINT32_(28)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 28 Position */
#define CAN_TXBTIE_TIE28_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE28_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 28 Mask */
#define CAN_TXBTIE_TIE28(value)               (CAN_TXBTIE_TIE28_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE28_Pos)) /* Assignment of value for TIE28 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE29_Pos                  _UINT32_(29)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 29 Position */
#define CAN_TXBTIE_TIE29_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE29_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 29 Mask */
#define CAN_TXBTIE_TIE29(value)               (CAN_TXBTIE_TIE29_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE29_Pos)) /* Assignment of value for TIE29 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE30_Pos                  _UINT32_(30)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 30 Position */
#define CAN_TXBTIE_TIE30_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE30_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 30 Mask */
#define CAN_TXBTIE_TIE30(value)               (CAN_TXBTIE_TIE30_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE30_Pos)) /* Assignment of value for TIE30 in the CAN_TXBTIE register */
#define CAN_TXBTIE_TIE31_Pos                  _UINT32_(31)                                         /* (CAN_TXBTIE) Transmission Interrupt Enable 31 Position */
#define CAN_TXBTIE_TIE31_Msk                  (_UINT32_(0x1) << CAN_TXBTIE_TIE31_Pos)              /* (CAN_TXBTIE) Transmission Interrupt Enable 31 Mask */
#define CAN_TXBTIE_TIE31(value)               (CAN_TXBTIE_TIE31_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE31_Pos)) /* Assignment of value for TIE31 in the CAN_TXBTIE register */
#define CAN_TXBTIE_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBTIE) Register Mask  */

#define CAN_TXBTIE_TIE_Pos                    _UINT32_(0)                                          /* (CAN_TXBTIE Position) Transmission Interrupt Enable 3x */
#define CAN_TXBTIE_TIE_Msk                    (_UINT32_(0xFFFFFFFF) << CAN_TXBTIE_TIE_Pos)         /* (CAN_TXBTIE Mask) TIE */
#define CAN_TXBTIE_TIE(value)                 (CAN_TXBTIE_TIE_Msk & (_UINT32_(value) << CAN_TXBTIE_TIE_Pos)) 

/* -------- CAN_TXBCIE : (CAN Offset: 0xE4) (R/W 32) Tx Buffer Cancellation Finished Interrupt Enable -------- */
#define CAN_TXBCIE_RESETVALUE                 _UINT32_(0x00)                                       /*  (CAN_TXBCIE) Tx Buffer Cancellation Finished Interrupt Enable  Reset Value */

#define CAN_TXBCIE_CFIE0_Pos                  _UINT32_(0)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 0 Position */
#define CAN_TXBCIE_CFIE0_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE0_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 0 Mask */
#define CAN_TXBCIE_CFIE0(value)               (CAN_TXBCIE_CFIE0_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE0_Pos)) /* Assignment of value for CFIE0 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE1_Pos                  _UINT32_(1)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 1 Position */
#define CAN_TXBCIE_CFIE1_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE1_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 1 Mask */
#define CAN_TXBCIE_CFIE1(value)               (CAN_TXBCIE_CFIE1_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE1_Pos)) /* Assignment of value for CFIE1 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE2_Pos                  _UINT32_(2)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 2 Position */
#define CAN_TXBCIE_CFIE2_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE2_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 2 Mask */
#define CAN_TXBCIE_CFIE2(value)               (CAN_TXBCIE_CFIE2_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE2_Pos)) /* Assignment of value for CFIE2 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE3_Pos                  _UINT32_(3)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 3 Position */
#define CAN_TXBCIE_CFIE3_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE3_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 3 Mask */
#define CAN_TXBCIE_CFIE3(value)               (CAN_TXBCIE_CFIE3_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE3_Pos)) /* Assignment of value for CFIE3 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE4_Pos                  _UINT32_(4)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 4 Position */
#define CAN_TXBCIE_CFIE4_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE4_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 4 Mask */
#define CAN_TXBCIE_CFIE4(value)               (CAN_TXBCIE_CFIE4_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE4_Pos)) /* Assignment of value for CFIE4 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE5_Pos                  _UINT32_(5)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 5 Position */
#define CAN_TXBCIE_CFIE5_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE5_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 5 Mask */
#define CAN_TXBCIE_CFIE5(value)               (CAN_TXBCIE_CFIE5_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE5_Pos)) /* Assignment of value for CFIE5 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE6_Pos                  _UINT32_(6)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 6 Position */
#define CAN_TXBCIE_CFIE6_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE6_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 6 Mask */
#define CAN_TXBCIE_CFIE6(value)               (CAN_TXBCIE_CFIE6_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE6_Pos)) /* Assignment of value for CFIE6 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE7_Pos                  _UINT32_(7)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 7 Position */
#define CAN_TXBCIE_CFIE7_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE7_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 7 Mask */
#define CAN_TXBCIE_CFIE7(value)               (CAN_TXBCIE_CFIE7_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE7_Pos)) /* Assignment of value for CFIE7 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE8_Pos                  _UINT32_(8)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 8 Position */
#define CAN_TXBCIE_CFIE8_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE8_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 8 Mask */
#define CAN_TXBCIE_CFIE8(value)               (CAN_TXBCIE_CFIE8_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE8_Pos)) /* Assignment of value for CFIE8 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE9_Pos                  _UINT32_(9)                                          /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 9 Position */
#define CAN_TXBCIE_CFIE9_Msk                  (_UINT32_(0x1) << CAN_TXBCIE_CFIE9_Pos)              /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 9 Mask */
#define CAN_TXBCIE_CFIE9(value)               (CAN_TXBCIE_CFIE9_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE9_Pos)) /* Assignment of value for CFIE9 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE10_Pos                 _UINT32_(10)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 10 Position */
#define CAN_TXBCIE_CFIE10_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE10_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 10 Mask */
#define CAN_TXBCIE_CFIE10(value)              (CAN_TXBCIE_CFIE10_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE10_Pos)) /* Assignment of value for CFIE10 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE11_Pos                 _UINT32_(11)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 11 Position */
#define CAN_TXBCIE_CFIE11_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE11_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 11 Mask */
#define CAN_TXBCIE_CFIE11(value)              (CAN_TXBCIE_CFIE11_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE11_Pos)) /* Assignment of value for CFIE11 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE12_Pos                 _UINT32_(12)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 12 Position */
#define CAN_TXBCIE_CFIE12_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE12_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 12 Mask */
#define CAN_TXBCIE_CFIE12(value)              (CAN_TXBCIE_CFIE12_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE12_Pos)) /* Assignment of value for CFIE12 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE13_Pos                 _UINT32_(13)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 13 Position */
#define CAN_TXBCIE_CFIE13_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE13_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 13 Mask */
#define CAN_TXBCIE_CFIE13(value)              (CAN_TXBCIE_CFIE13_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE13_Pos)) /* Assignment of value for CFIE13 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE14_Pos                 _UINT32_(14)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 14 Position */
#define CAN_TXBCIE_CFIE14_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE14_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 14 Mask */
#define CAN_TXBCIE_CFIE14(value)              (CAN_TXBCIE_CFIE14_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE14_Pos)) /* Assignment of value for CFIE14 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE15_Pos                 _UINT32_(15)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 15 Position */
#define CAN_TXBCIE_CFIE15_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE15_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 15 Mask */
#define CAN_TXBCIE_CFIE15(value)              (CAN_TXBCIE_CFIE15_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE15_Pos)) /* Assignment of value for CFIE15 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE16_Pos                 _UINT32_(16)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 16 Position */
#define CAN_TXBCIE_CFIE16_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE16_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 16 Mask */
#define CAN_TXBCIE_CFIE16(value)              (CAN_TXBCIE_CFIE16_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE16_Pos)) /* Assignment of value for CFIE16 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE17_Pos                 _UINT32_(17)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 17 Position */
#define CAN_TXBCIE_CFIE17_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE17_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 17 Mask */
#define CAN_TXBCIE_CFIE17(value)              (CAN_TXBCIE_CFIE17_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE17_Pos)) /* Assignment of value for CFIE17 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE18_Pos                 _UINT32_(18)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 18 Position */
#define CAN_TXBCIE_CFIE18_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE18_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 18 Mask */
#define CAN_TXBCIE_CFIE18(value)              (CAN_TXBCIE_CFIE18_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE18_Pos)) /* Assignment of value for CFIE18 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE19_Pos                 _UINT32_(19)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 19 Position */
#define CAN_TXBCIE_CFIE19_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE19_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 19 Mask */
#define CAN_TXBCIE_CFIE19(value)              (CAN_TXBCIE_CFIE19_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE19_Pos)) /* Assignment of value for CFIE19 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE20_Pos                 _UINT32_(20)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 20 Position */
#define CAN_TXBCIE_CFIE20_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE20_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 20 Mask */
#define CAN_TXBCIE_CFIE20(value)              (CAN_TXBCIE_CFIE20_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE20_Pos)) /* Assignment of value for CFIE20 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE21_Pos                 _UINT32_(21)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 21 Position */
#define CAN_TXBCIE_CFIE21_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE21_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 21 Mask */
#define CAN_TXBCIE_CFIE21(value)              (CAN_TXBCIE_CFIE21_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE21_Pos)) /* Assignment of value for CFIE21 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE22_Pos                 _UINT32_(22)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 22 Position */
#define CAN_TXBCIE_CFIE22_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE22_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 22 Mask */
#define CAN_TXBCIE_CFIE22(value)              (CAN_TXBCIE_CFIE22_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE22_Pos)) /* Assignment of value for CFIE22 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE23_Pos                 _UINT32_(23)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 23 Position */
#define CAN_TXBCIE_CFIE23_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE23_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 23 Mask */
#define CAN_TXBCIE_CFIE23(value)              (CAN_TXBCIE_CFIE23_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE23_Pos)) /* Assignment of value for CFIE23 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE24_Pos                 _UINT32_(24)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 24 Position */
#define CAN_TXBCIE_CFIE24_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE24_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 24 Mask */
#define CAN_TXBCIE_CFIE24(value)              (CAN_TXBCIE_CFIE24_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE24_Pos)) /* Assignment of value for CFIE24 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE25_Pos                 _UINT32_(25)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 25 Position */
#define CAN_TXBCIE_CFIE25_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE25_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 25 Mask */
#define CAN_TXBCIE_CFIE25(value)              (CAN_TXBCIE_CFIE25_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE25_Pos)) /* Assignment of value for CFIE25 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE26_Pos                 _UINT32_(26)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 26 Position */
#define CAN_TXBCIE_CFIE26_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE26_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 26 Mask */
#define CAN_TXBCIE_CFIE26(value)              (CAN_TXBCIE_CFIE26_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE26_Pos)) /* Assignment of value for CFIE26 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE27_Pos                 _UINT32_(27)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 27 Position */
#define CAN_TXBCIE_CFIE27_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE27_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 27 Mask */
#define CAN_TXBCIE_CFIE27(value)              (CAN_TXBCIE_CFIE27_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE27_Pos)) /* Assignment of value for CFIE27 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE28_Pos                 _UINT32_(28)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 28 Position */
#define CAN_TXBCIE_CFIE28_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE28_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 28 Mask */
#define CAN_TXBCIE_CFIE28(value)              (CAN_TXBCIE_CFIE28_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE28_Pos)) /* Assignment of value for CFIE28 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE29_Pos                 _UINT32_(29)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 29 Position */
#define CAN_TXBCIE_CFIE29_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE29_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 29 Mask */
#define CAN_TXBCIE_CFIE29(value)              (CAN_TXBCIE_CFIE29_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE29_Pos)) /* Assignment of value for CFIE29 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE30_Pos                 _UINT32_(30)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 30 Position */
#define CAN_TXBCIE_CFIE30_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE30_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 30 Mask */
#define CAN_TXBCIE_CFIE30(value)              (CAN_TXBCIE_CFIE30_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE30_Pos)) /* Assignment of value for CFIE30 in the CAN_TXBCIE register */
#define CAN_TXBCIE_CFIE31_Pos                 _UINT32_(31)                                         /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 31 Position */
#define CAN_TXBCIE_CFIE31_Msk                 (_UINT32_(0x1) << CAN_TXBCIE_CFIE31_Pos)             /* (CAN_TXBCIE) Cancellation Finished Interrupt Enable 31 Mask */
#define CAN_TXBCIE_CFIE31(value)              (CAN_TXBCIE_CFIE31_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE31_Pos)) /* Assignment of value for CFIE31 in the CAN_TXBCIE register */
#define CAN_TXBCIE_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (CAN_TXBCIE) Register Mask  */

#define CAN_TXBCIE_CFIE_Pos                   _UINT32_(0)                                          /* (CAN_TXBCIE Position) Cancellation Finished Interrupt Enable 3x */
#define CAN_TXBCIE_CFIE_Msk                   (_UINT32_(0xFFFFFFFF) << CAN_TXBCIE_CFIE_Pos)        /* (CAN_TXBCIE Mask) CFIE */
#define CAN_TXBCIE_CFIE(value)                (CAN_TXBCIE_CFIE_Msk & (_UINT32_(value) << CAN_TXBCIE_CFIE_Pos)) 

/* -------- CAN_TXEFC : (CAN Offset: 0xF0) (R/W 32) Tx Event FIFO Configuration -------- */
#define CAN_TXEFC_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXEFC) Tx Event FIFO Configuration  Reset Value */

#define CAN_TXEFC_EFSA_Pos                    _UINT32_(0)                                          /* (CAN_TXEFC) Event FIFO Start Address Position */
#define CAN_TXEFC_EFSA_Msk                    (_UINT32_(0xFFFF) << CAN_TXEFC_EFSA_Pos)             /* (CAN_TXEFC) Event FIFO Start Address Mask */
#define CAN_TXEFC_EFSA(value)                 (CAN_TXEFC_EFSA_Msk & (_UINT32_(value) << CAN_TXEFC_EFSA_Pos)) /* Assignment of value for EFSA in the CAN_TXEFC register */
#define CAN_TXEFC_EFS_Pos                     _UINT32_(16)                                         /* (CAN_TXEFC) Event FIFO Size Position */
#define CAN_TXEFC_EFS_Msk                     (_UINT32_(0x3F) << CAN_TXEFC_EFS_Pos)                /* (CAN_TXEFC) Event FIFO Size Mask */
#define CAN_TXEFC_EFS(value)                  (CAN_TXEFC_EFS_Msk & (_UINT32_(value) << CAN_TXEFC_EFS_Pos)) /* Assignment of value for EFS in the CAN_TXEFC register */
#define CAN_TXEFC_EFWM_Pos                    _UINT32_(24)                                         /* (CAN_TXEFC) Event FIFO Watermark Position */
#define CAN_TXEFC_EFWM_Msk                    (_UINT32_(0x3F) << CAN_TXEFC_EFWM_Pos)               /* (CAN_TXEFC) Event FIFO Watermark Mask */
#define CAN_TXEFC_EFWM(value)                 (CAN_TXEFC_EFWM_Msk & (_UINT32_(value) << CAN_TXEFC_EFWM_Pos)) /* Assignment of value for EFWM in the CAN_TXEFC register */
#define CAN_TXEFC_Msk                         _UINT32_(0x3F3FFFFF)                                 /* (CAN_TXEFC) Register Mask  */


/* -------- CAN_TXEFS : (CAN Offset: 0xF4) ( R/ 32) Tx Event FIFO Status -------- */
#define CAN_TXEFS_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXEFS) Tx Event FIFO Status  Reset Value */

#define CAN_TXEFS_EFFL_Pos                    _UINT32_(0)                                          /* (CAN_TXEFS) Event FIFO Fill Level Position */
#define CAN_TXEFS_EFFL_Msk                    (_UINT32_(0x3F) << CAN_TXEFS_EFFL_Pos)               /* (CAN_TXEFS) Event FIFO Fill Level Mask */
#define CAN_TXEFS_EFFL(value)                 (CAN_TXEFS_EFFL_Msk & (_UINT32_(value) << CAN_TXEFS_EFFL_Pos)) /* Assignment of value for EFFL in the CAN_TXEFS register */
#define CAN_TXEFS_EFGI_Pos                    _UINT32_(8)                                          /* (CAN_TXEFS) Event FIFO Get Index Position */
#define CAN_TXEFS_EFGI_Msk                    (_UINT32_(0x1F) << CAN_TXEFS_EFGI_Pos)               /* (CAN_TXEFS) Event FIFO Get Index Mask */
#define CAN_TXEFS_EFGI(value)                 (CAN_TXEFS_EFGI_Msk & (_UINT32_(value) << CAN_TXEFS_EFGI_Pos)) /* Assignment of value for EFGI in the CAN_TXEFS register */
#define CAN_TXEFS_EFPI_Pos                    _UINT32_(16)                                         /* (CAN_TXEFS) Event FIFO Put Index Position */
#define CAN_TXEFS_EFPI_Msk                    (_UINT32_(0x1F) << CAN_TXEFS_EFPI_Pos)               /* (CAN_TXEFS) Event FIFO Put Index Mask */
#define CAN_TXEFS_EFPI(value)                 (CAN_TXEFS_EFPI_Msk & (_UINT32_(value) << CAN_TXEFS_EFPI_Pos)) /* Assignment of value for EFPI in the CAN_TXEFS register */
#define CAN_TXEFS_EFF_Pos                     _UINT32_(24)                                         /* (CAN_TXEFS) Event FIFO Full Position */
#define CAN_TXEFS_EFF_Msk                     (_UINT32_(0x1) << CAN_TXEFS_EFF_Pos)                 /* (CAN_TXEFS) Event FIFO Full Mask */
#define CAN_TXEFS_EFF(value)                  (CAN_TXEFS_EFF_Msk & (_UINT32_(value) << CAN_TXEFS_EFF_Pos)) /* Assignment of value for EFF in the CAN_TXEFS register */
#define CAN_TXEFS_TEFL_Pos                    _UINT32_(25)                                         /* (CAN_TXEFS) Tx Event FIFO Element Lost Position */
#define CAN_TXEFS_TEFL_Msk                    (_UINT32_(0x1) << CAN_TXEFS_TEFL_Pos)                /* (CAN_TXEFS) Tx Event FIFO Element Lost Mask */
#define CAN_TXEFS_TEFL(value)                 (CAN_TXEFS_TEFL_Msk & (_UINT32_(value) << CAN_TXEFS_TEFL_Pos)) /* Assignment of value for TEFL in the CAN_TXEFS register */
#define CAN_TXEFS_Msk                         _UINT32_(0x031F1F3F)                                 /* (CAN_TXEFS) Register Mask  */


/* -------- CAN_TXEFA : (CAN Offset: 0xF8) (R/W 32) Tx Event FIFO Acknowledge -------- */
#define CAN_TXEFA_RESETVALUE                  _UINT32_(0x00)                                       /*  (CAN_TXEFA) Tx Event FIFO Acknowledge  Reset Value */

#define CAN_TXEFA_EFAI_Pos                    _UINT32_(0)                                          /* (CAN_TXEFA) Event FIFO Acknowledge Index Position */
#define CAN_TXEFA_EFAI_Msk                    (_UINT32_(0x1F) << CAN_TXEFA_EFAI_Pos)               /* (CAN_TXEFA) Event FIFO Acknowledge Index Mask */
#define CAN_TXEFA_EFAI(value)                 (CAN_TXEFA_EFAI_Msk & (_UINT32_(value) << CAN_TXEFA_EFAI_Pos)) /* Assignment of value for EFAI in the CAN_TXEFA register */
#define CAN_TXEFA_Msk                         _UINT32_(0x0000001F)                                 /* (CAN_TXEFA) Register Mask  */


/* CAN register offsets definitions */
#define CAN_RXBE_0_REG_OFST            _UINT32_(0x00)      /* (CAN_RXBE_0) Rx Buffer Element 0 Offset */
#define CAN_RXBE_1_REG_OFST            _UINT32_(0x04)      /* (CAN_RXBE_1) Rx Buffer Element 1 Offset */
#define CAN_RXBE_DATA_REG_OFST         _UINT32_(0x08)      /* (CAN_RXBE_DATA) Rx Buffer Element Data Offset */
#define CAN_RXF0E_0_REG_OFST           _UINT32_(0x00)      /* (CAN_RXF0E_0) Rx FIFO 0 Element 0 Offset */
#define CAN_RXF0E_1_REG_OFST           _UINT32_(0x04)      /* (CAN_RXF0E_1) Rx FIFO 0 Element 1 Offset */
#define CAN_RXF0E_DATA_REG_OFST        _UINT32_(0x08)      /* (CAN_RXF0E_DATA) Rx FIFO 0 Element Data Offset */
#define CAN_RXF1E_0_REG_OFST           _UINT32_(0x00)      /* (CAN_RXF1E_0) Rx FIFO 1 Element 0 Offset */
#define CAN_RXF1E_1_REG_OFST           _UINT32_(0x04)      /* (CAN_RXF1E_1) Rx FIFO 1 Element 1 Offset */
#define CAN_RXF1E_DATA_REG_OFST        _UINT32_(0x08)      /* (CAN_RXF1E_DATA) Rx FIFO 1 Element Data Offset */
#define CAN_TXBE_0_REG_OFST            _UINT32_(0x00)      /* (CAN_TXBE_0) Tx Buffer Element 0 Offset */
#define CAN_TXBE_1_REG_OFST            _UINT32_(0x04)      /* (CAN_TXBE_1) Tx Buffer Element 1 Offset */
#define CAN_TXBE_DATA_REG_OFST         _UINT32_(0x08)      /* (CAN_TXBE_DATA) Tx Buffer Element Data Offset */
#define CAN_TXEFE_0_REG_OFST           _UINT32_(0x00)      /* (CAN_TXEFE_0) Tx Event FIFO Element 0 Offset */
#define CAN_TXEFE_1_REG_OFST           _UINT32_(0x04)      /* (CAN_TXEFE_1) Tx Event FIFO Element 1 Offset */
#define CAN_SIDFE_0_REG_OFST           _UINT32_(0x00)      /* (CAN_SIDFE_0) Standard Message ID Filter Element 0 Offset */
#define CAN_XIDFE_0_REG_OFST           _UINT32_(0x00)      /* (CAN_XIDFE_0) Extended Message ID Filter Element 0 Offset */
#define CAN_XIDFE_1_REG_OFST           _UINT32_(0x04)      /* (CAN_XIDFE_1) Extended Message ID Filter Element 1 Offset */
#define CAN_CREL_REG_OFST              _UINT32_(0x00)      /* (CAN_CREL) Core Release Offset */
#define CAN_ENDN_REG_OFST              _UINT32_(0x04)      /* (CAN_ENDN) Endian Offset */
#define CAN_MRCFG_REG_OFST             _UINT32_(0x08)      /* (CAN_MRCFG) Message RAM Configuration Offset */
#define CAN_DBTP_REG_OFST              _UINT32_(0x0C)      /* (CAN_DBTP) Fast Bit Timing and Prescaler Offset */
#define CAN_TEST_REG_OFST              _UINT32_(0x10)      /* (CAN_TEST) Test Offset */
#define CAN_RWD_REG_OFST               _UINT32_(0x14)      /* (CAN_RWD) RAM Watchdog Offset */
#define CAN_CCCR_REG_OFST              _UINT32_(0x18)      /* (CAN_CCCR) CC Control Offset */
#define CAN_NBTP_REG_OFST              _UINT32_(0x1C)      /* (CAN_NBTP) Nominal Bit Timing and Prescaler Offset */
#define CAN_TSCC_REG_OFST              _UINT32_(0x20)      /* (CAN_TSCC) Timestamp Counter Configuration Offset */
#define CAN_TSCV_REG_OFST              _UINT32_(0x24)      /* (CAN_TSCV) Timestamp Counter Value Offset */
#define CAN_TOCC_REG_OFST              _UINT32_(0x28)      /* (CAN_TOCC) Timeout Counter Configuration Offset */
#define CAN_TOCV_REG_OFST              _UINT32_(0x2C)      /* (CAN_TOCV) Timeout Counter Value Offset */
#define CAN_ECR_REG_OFST               _UINT32_(0x40)      /* (CAN_ECR) Error Counter Offset */
#define CAN_PSR_REG_OFST               _UINT32_(0x44)      /* (CAN_PSR) Protocol Status Offset */
#define CAN_TDCR_REG_OFST              _UINT32_(0x48)      /* (CAN_TDCR) Extended ID Filter Configuration Offset */
#define CAN_IR_REG_OFST                _UINT32_(0x50)      /* (CAN_IR) Interrupt Offset */
#define CAN_IE_REG_OFST                _UINT32_(0x54)      /* (CAN_IE) Interrupt Enable Offset */
#define CAN_ILS_REG_OFST               _UINT32_(0x58)      /* (CAN_ILS) Interrupt Line Select Offset */
#define CAN_ILE_REG_OFST               _UINT32_(0x5C)      /* (CAN_ILE) Interrupt Line Enable Offset */
#define CAN_GFC_REG_OFST               _UINT32_(0x80)      /* (CAN_GFC) Global Filter Configuration Offset */
#define CAN_SIDFC_REG_OFST             _UINT32_(0x84)      /* (CAN_SIDFC) Standard ID Filter Configuration Offset */
#define CAN_XIDFC_REG_OFST             _UINT32_(0x88)      /* (CAN_XIDFC) Extended ID Filter Configuration Offset */
#define CAN_XIDAM_REG_OFST             _UINT32_(0x90)      /* (CAN_XIDAM) Extended ID AND Mask Offset */
#define CAN_HPMS_REG_OFST              _UINT32_(0x94)      /* (CAN_HPMS) High Priority Message Status Offset */
#define CAN_NDAT1_REG_OFST             _UINT32_(0x98)      /* (CAN_NDAT1) New Data 1 Offset */
#define CAN_NDAT2_REG_OFST             _UINT32_(0x9C)      /* (CAN_NDAT2) New Data 2 Offset */
#define CAN_RXF0C_REG_OFST             _UINT32_(0xA0)      /* (CAN_RXF0C) Rx FIFO 0 Configuration Offset */
#define CAN_RXF0S_REG_OFST             _UINT32_(0xA4)      /* (CAN_RXF0S) Rx FIFO 0 Status Offset */
#define CAN_RXF0A_REG_OFST             _UINT32_(0xA8)      /* (CAN_RXF0A) Rx FIFO 0 Acknowledge Offset */
#define CAN_RXBC_REG_OFST              _UINT32_(0xAC)      /* (CAN_RXBC) Rx Buffer Configuration Offset */
#define CAN_RXF1C_REG_OFST             _UINT32_(0xB0)      /* (CAN_RXF1C) Rx FIFO 1 Configuration Offset */
#define CAN_RXF1S_REG_OFST             _UINT32_(0xB4)      /* (CAN_RXF1S) Rx FIFO 1 Status Offset */
#define CAN_RXF1A_REG_OFST             _UINT32_(0xB8)      /* (CAN_RXF1A) Rx FIFO 1 Acknowledge Offset */
#define CAN_RXESC_REG_OFST             _UINT32_(0xBC)      /* (CAN_RXESC) Rx Buffer / FIFO Element Size Configuration Offset */
#define CAN_TXBC_REG_OFST              _UINT32_(0xC0)      /* (CAN_TXBC) Tx Buffer Configuration Offset */
#define CAN_TXFQS_REG_OFST             _UINT32_(0xC4)      /* (CAN_TXFQS) Tx FIFO / Queue Status Offset */
#define CAN_TXESC_REG_OFST             _UINT32_(0xC8)      /* (CAN_TXESC) Tx Buffer Element Size Configuration Offset */
#define CAN_TXBRP_REG_OFST             _UINT32_(0xCC)      /* (CAN_TXBRP) Tx Buffer Request Pending Offset */
#define CAN_TXBAR_REG_OFST             _UINT32_(0xD0)      /* (CAN_TXBAR) Tx Buffer Add Request Offset */
#define CAN_TXBCR_REG_OFST             _UINT32_(0xD4)      /* (CAN_TXBCR) Tx Buffer Cancellation Request Offset */
#define CAN_TXBTO_REG_OFST             _UINT32_(0xD8)      /* (CAN_TXBTO) Tx Buffer Transmission Occurred Offset */
#define CAN_TXBCF_REG_OFST             _UINT32_(0xDC)      /* (CAN_TXBCF) Tx Buffer Cancellation Finished Offset */
#define CAN_TXBTIE_REG_OFST            _UINT32_(0xE0)      /* (CAN_TXBTIE) Tx Buffer Transmission Interrupt Enable Offset */
#define CAN_TXBCIE_REG_OFST            _UINT32_(0xE4)      /* (CAN_TXBCIE) Tx Buffer Cancellation Finished Interrupt Enable Offset */
#define CAN_TXEFC_REG_OFST             _UINT32_(0xF0)      /* (CAN_TXEFC) Tx Event FIFO Configuration Offset */
#define CAN_TXEFS_REG_OFST             _UINT32_(0xF4)      /* (CAN_TXEFS) Tx Event FIFO Status Offset */
#define CAN_TXEFA_REG_OFST             _UINT32_(0xF8)      /* (CAN_TXEFA) Tx Event FIFO Acknowledge Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* CAN_RXBE register API structure */
typedef struct
{  /* Rx Buffer Element */
  __IO  uint32_t                       CAN_RXBE_0;         /* Offset: 0x00 (R/W  32) Rx Buffer Element 0 */
  __IO  uint32_t                       CAN_RXBE_1;         /* Offset: 0x04 (R/W  32) Rx Buffer Element 1 */
  __IO  uint32_t                       CAN_RXBE_DATA;      /* Offset: 0x08 (R/W  32) Rx Buffer Element Data */
} can_rxbe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN_RXF0E register API structure */
typedef struct
{  /* Rx FIFO 0 Element */
  __IO  uint32_t                       CAN_RXF0E_0;        /* Offset: 0x00 (R/W  32) Rx FIFO 0 Element 0 */
  __IO  uint32_t                       CAN_RXF0E_1;        /* Offset: 0x04 (R/W  32) Rx FIFO 0 Element 1 */
  __IO  uint32_t                       CAN_RXF0E_DATA;     /* Offset: 0x08 (R/W  32) Rx FIFO 0 Element Data */
} can_rxf0e_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN_RXF1E register API structure */
typedef struct
{  /* Rx FIFO 1 Element */
  __IO  uint32_t                       CAN_RXF1E_0;        /* Offset: 0x00 (R/W  32) Rx FIFO 1 Element 0 */
  __IO  uint32_t                       CAN_RXF1E_1;        /* Offset: 0x04 (R/W  32) Rx FIFO 1 Element 1 */
  __IO  uint32_t                       CAN_RXF1E_DATA;     /* Offset: 0x08 (R/W  32) Rx FIFO 1 Element Data */
} can_rxf1e_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN_TXBE register API structure */
typedef struct
{  /* Tx Buffer Element */
  __IO  uint32_t                       CAN_TXBE_0;         /* Offset: 0x00 (R/W  32) Tx Buffer Element 0 */
  __IO  uint32_t                       CAN_TXBE_1;         /* Offset: 0x04 (R/W  32) Tx Buffer Element 1 */
  __IO  uint32_t                       CAN_TXBE_DATA;      /* Offset: 0x08 (R/W  32) Tx Buffer Element Data */
} can_txbe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN_TXEFE register API structure */
typedef struct
{  /* Tx Event FIFO Element */
  __IO  uint32_t                       CAN_TXEFE_0;        /* Offset: 0x00 (R/W  32) Tx Event FIFO Element 0 */
  __IO  uint32_t                       CAN_TXEFE_1;        /* Offset: 0x04 (R/W  32) Tx Event FIFO Element 1 */
} can_txefe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN_SIDFE register API structure */
typedef struct
{  /* Standard Message ID Filter Element */
  __IO  uint32_t                       CAN_SIDFE_0;        /* Offset: 0x00 (R/W  32) Standard Message ID Filter Element 0 */
} can_sidfe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN_XIDFE register API structure */
typedef struct
{  /* Extended Message ID Filter Element */
  __IO  uint32_t                       CAN_XIDFE_0;        /* Offset: 0x00 (R/W  32) Extended Message ID Filter Element 0 */
  __IO  uint32_t                       CAN_XIDFE_1;        /* Offset: 0x04 (R/W  32) Extended Message ID Filter Element 1 */
} can_xidfe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* CAN register API structure */
typedef struct
{  /* Control Area Network */
  __I   uint32_t                       CAN_CREL;           /* Offset: 0x00 (R/   32) Core Release */
  __I   uint32_t                       CAN_ENDN;           /* Offset: 0x04 (R/   32) Endian */
  __IO  uint32_t                       CAN_MRCFG;          /* Offset: 0x08 (R/W  32) Message RAM Configuration */
  __IO  uint32_t                       CAN_DBTP;           /* Offset: 0x0C (R/W  32) Fast Bit Timing and Prescaler */
  __IO  uint32_t                       CAN_TEST;           /* Offset: 0x10 (R/W  32) Test */
  __IO  uint32_t                       CAN_RWD;            /* Offset: 0x14 (R/W  32) RAM Watchdog */
  __IO  uint32_t                       CAN_CCCR;           /* Offset: 0x18 (R/W  32) CC Control */
  __IO  uint32_t                       CAN_NBTP;           /* Offset: 0x1C (R/W  32) Nominal Bit Timing and Prescaler */
  __IO  uint32_t                       CAN_TSCC;           /* Offset: 0x20 (R/W  32) Timestamp Counter Configuration */
  __I   uint32_t                       CAN_TSCV;           /* Offset: 0x24 (R/   32) Timestamp Counter Value */
  __IO  uint32_t                       CAN_TOCC;           /* Offset: 0x28 (R/W  32) Timeout Counter Configuration */
  __IO  uint32_t                       CAN_TOCV;           /* Offset: 0x2C (R/W  32) Timeout Counter Value */
  __I   uint8_t                        Reserved1[0x10];
  __I   uint32_t                       CAN_ECR;            /* Offset: 0x40 (R/   32) Error Counter */
  __I   uint32_t                       CAN_PSR;            /* Offset: 0x44 (R/   32) Protocol Status */
  __IO  uint32_t                       CAN_TDCR;           /* Offset: 0x48 (R/W  32) Extended ID Filter Configuration */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       CAN_IR;             /* Offset: 0x50 (R/W  32) Interrupt */
  __IO  uint32_t                       CAN_IE;             /* Offset: 0x54 (R/W  32) Interrupt Enable */
  __IO  uint32_t                       CAN_ILS;            /* Offset: 0x58 (R/W  32) Interrupt Line Select */
  __IO  uint32_t                       CAN_ILE;            /* Offset: 0x5C (R/W  32) Interrupt Line Enable */
  __I   uint8_t                        Reserved3[0x20];
  __IO  uint32_t                       CAN_GFC;            /* Offset: 0x80 (R/W  32) Global Filter Configuration */
  __IO  uint32_t                       CAN_SIDFC;          /* Offset: 0x84 (R/W  32) Standard ID Filter Configuration */
  __IO  uint32_t                       CAN_XIDFC;          /* Offset: 0x88 (R/W  32) Extended ID Filter Configuration */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       CAN_XIDAM;          /* Offset: 0x90 (R/W  32) Extended ID AND Mask */
  __I   uint32_t                       CAN_HPMS;           /* Offset: 0x94 (R/   32) High Priority Message Status */
  __IO  uint32_t                       CAN_NDAT1;          /* Offset: 0x98 (R/W  32) New Data 1 */
  __IO  uint32_t                       CAN_NDAT2;          /* Offset: 0x9C (R/W  32) New Data 2 */
  __IO  uint32_t                       CAN_RXF0C;          /* Offset: 0xA0 (R/W  32) Rx FIFO 0 Configuration */
  __I   uint32_t                       CAN_RXF0S;          /* Offset: 0xA4 (R/   32) Rx FIFO 0 Status */
  __IO  uint32_t                       CAN_RXF0A;          /* Offset: 0xA8 (R/W  32) Rx FIFO 0 Acknowledge */
  __IO  uint32_t                       CAN_RXBC;           /* Offset: 0xAC (R/W  32) Rx Buffer Configuration */
  __IO  uint32_t                       CAN_RXF1C;          /* Offset: 0xB0 (R/W  32) Rx FIFO 1 Configuration */
  __I   uint32_t                       CAN_RXF1S;          /* Offset: 0xB4 (R/   32) Rx FIFO 1 Status */
  __IO  uint32_t                       CAN_RXF1A;          /* Offset: 0xB8 (R/W  32) Rx FIFO 1 Acknowledge */
  __IO  uint32_t                       CAN_RXESC;          /* Offset: 0xBC (R/W  32) Rx Buffer / FIFO Element Size Configuration */
  __IO  uint32_t                       CAN_TXBC;           /* Offset: 0xC0 (R/W  32) Tx Buffer Configuration */
  __I   uint32_t                       CAN_TXFQS;          /* Offset: 0xC4 (R/   32) Tx FIFO / Queue Status */
  __IO  uint32_t                       CAN_TXESC;          /* Offset: 0xC8 (R/W  32) Tx Buffer Element Size Configuration */
  __I   uint32_t                       CAN_TXBRP;          /* Offset: 0xCC (R/   32) Tx Buffer Request Pending */
  __IO  uint32_t                       CAN_TXBAR;          /* Offset: 0xD0 (R/W  32) Tx Buffer Add Request */
  __IO  uint32_t                       CAN_TXBCR;          /* Offset: 0xD4 (R/W  32) Tx Buffer Cancellation Request */
  __I   uint32_t                       CAN_TXBTO;          /* Offset: 0xD8 (R/   32) Tx Buffer Transmission Occurred */
  __I   uint32_t                       CAN_TXBCF;          /* Offset: 0xDC (R/   32) Tx Buffer Cancellation Finished */
  __IO  uint32_t                       CAN_TXBTIE;         /* Offset: 0xE0 (R/W  32) Tx Buffer Transmission Interrupt Enable */
  __IO  uint32_t                       CAN_TXBCIE;         /* Offset: 0xE4 (R/W  32) Tx Buffer Cancellation Finished Interrupt Enable */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       CAN_TXEFC;          /* Offset: 0xF0 (R/W  32) Tx Event FIFO Configuration */
  __I   uint32_t                       CAN_TXEFS;          /* Offset: 0xF4 (R/   32) Tx Event FIFO Status */
  __IO  uint32_t                       CAN_TXEFA;          /* Offset: 0xF8 (R/W  32) Tx Event FIFO Acknowledge */
} can_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAME54_CAN_COMPONENT_H_ */
