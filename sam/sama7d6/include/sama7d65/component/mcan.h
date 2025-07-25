/*
 * Component description for MCAN
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
#ifndef _SAMA7D_MCAN_COMPONENT_H_
#define _SAMA7D_MCAN_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR MCAN                      */
/* ************************************************************************** */

/* -------- MCAN_XIDFE_0 : (MCAN Offset: 0x00) (R/W 32) Extended Message ID Filter Element 0 -------- */
#define MCAN_XIDFE_0_EFID1_Pos                _UINT32_(0)                                          /* (MCAN_XIDFE_0) Extended Filter ID 1 Position */
#define MCAN_XIDFE_0_EFID1_Msk                (_UINT32_(0x1FFFFFFF) << MCAN_XIDFE_0_EFID1_Pos)     /* (MCAN_XIDFE_0) Extended Filter ID 1 Mask */
#define MCAN_XIDFE_0_EFID1(value)             (MCAN_XIDFE_0_EFID1_Msk & (_UINT32_(value) << MCAN_XIDFE_0_EFID1_Pos)) /* Assignment of value for EFID1 in the MCAN_XIDFE_0 register */
#define MCAN_XIDFE_0_EFEC_Pos                 _UINT32_(29)                                         /* (MCAN_XIDFE_0) Extended Filter Element Configuration Position */
#define MCAN_XIDFE_0_EFEC_Msk                 (_UINT32_(0x7) << MCAN_XIDFE_0_EFEC_Pos)             /* (MCAN_XIDFE_0) Extended Filter Element Configuration Mask */
#define MCAN_XIDFE_0_EFEC(value)              (MCAN_XIDFE_0_EFEC_Msk & (_UINT32_(value) << MCAN_XIDFE_0_EFEC_Pos)) /* Assignment of value for EFEC in the MCAN_XIDFE_0 register */
#define   MCAN_XIDFE_0_EFEC_DISABLE_Val       _UINT32_(0x0)                                        /* (MCAN_XIDFE_0) Disable filter element  */
#define   MCAN_XIDFE_0_EFEC_STF0M_Val         _UINT32_(0x1)                                        /* (MCAN_XIDFE_0) Store in Rx FIFO 0 if filter matches  */
#define   MCAN_XIDFE_0_EFEC_STF1M_Val         _UINT32_(0x2)                                        /* (MCAN_XIDFE_0) Store in Rx FIFO 1 if filter matches  */
#define   MCAN_XIDFE_0_EFEC_REJECT_Val        _UINT32_(0x3)                                        /* (MCAN_XIDFE_0) Reject ID if filter matches  */
#define   MCAN_XIDFE_0_EFEC_PRIORITY_Val      _UINT32_(0x4)                                        /* (MCAN_XIDFE_0) Set priority if filter matches  */
#define   MCAN_XIDFE_0_EFEC_PRIF0M_Val        _UINT32_(0x5)                                        /* (MCAN_XIDFE_0) Set priority and store in FIFO 0 if filter matches  */
#define   MCAN_XIDFE_0_EFEC_PRIF1M_Val        _UINT32_(0x6)                                        /* (MCAN_XIDFE_0) Set priority and store in FIFO 1 if filter matches  */
#define   MCAN_XIDFE_0_EFEC_STRXBUF_Val       _UINT32_(0x7)                                        /* (MCAN_XIDFE_0) Store into Rx Buffer  */
#define MCAN_XIDFE_0_EFEC_DISABLE             (MCAN_XIDFE_0_EFEC_DISABLE_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Disable filter element Position */
#define MCAN_XIDFE_0_EFEC_STF0M               (MCAN_XIDFE_0_EFEC_STF0M_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Store in Rx FIFO 0 if filter matches Position */
#define MCAN_XIDFE_0_EFEC_STF1M               (MCAN_XIDFE_0_EFEC_STF1M_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Store in Rx FIFO 1 if filter matches Position */
#define MCAN_XIDFE_0_EFEC_REJECT              (MCAN_XIDFE_0_EFEC_REJECT_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Reject ID if filter matches Position */
#define MCAN_XIDFE_0_EFEC_PRIORITY            (MCAN_XIDFE_0_EFEC_PRIORITY_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Set priority if filter matches Position */
#define MCAN_XIDFE_0_EFEC_PRIF0M              (MCAN_XIDFE_0_EFEC_PRIF0M_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Set priority and store in FIFO 0 if filter matches Position */
#define MCAN_XIDFE_0_EFEC_PRIF1M              (MCAN_XIDFE_0_EFEC_PRIF1M_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Set priority and store in FIFO 1 if filter matches Position */
#define MCAN_XIDFE_0_EFEC_STRXBUF             (MCAN_XIDFE_0_EFEC_STRXBUF_Val << MCAN_XIDFE_0_EFEC_Pos) /* (MCAN_XIDFE_0) Store into Rx Buffer Position */
#define MCAN_XIDFE_0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MCAN_XIDFE_0) Register Mask  */


/* -------- MCAN_XIDFE_1 : (MCAN Offset: 0x04) (R/W 32) Extended Message ID Filter Element 1 -------- */
#define MCAN_XIDFE_1_EFID2_Pos                _UINT32_(0)                                          /* (MCAN_XIDFE_1) Extended Filter ID 2 Position */
#define MCAN_XIDFE_1_EFID2_Msk                (_UINT32_(0x1FFFFFFF) << MCAN_XIDFE_1_EFID2_Pos)     /* (MCAN_XIDFE_1) Extended Filter ID 2 Mask */
#define MCAN_XIDFE_1_EFID2(value)             (MCAN_XIDFE_1_EFID2_Msk & (_UINT32_(value) << MCAN_XIDFE_1_EFID2_Pos)) /* Assignment of value for EFID2 in the MCAN_XIDFE_1 register */
#define MCAN_XIDFE_1_EFT_Pos                  _UINT32_(30)                                         /* (MCAN_XIDFE_1) Extended Filter Type Position */
#define MCAN_XIDFE_1_EFT_Msk                  (_UINT32_(0x3) << MCAN_XIDFE_1_EFT_Pos)              /* (MCAN_XIDFE_1) Extended Filter Type Mask */
#define MCAN_XIDFE_1_EFT(value)               (MCAN_XIDFE_1_EFT_Msk & (_UINT32_(value) << MCAN_XIDFE_1_EFT_Pos)) /* Assignment of value for EFT in the MCAN_XIDFE_1 register */
#define   MCAN_XIDFE_1_EFT_RANGE_Val          _UINT32_(0x0)                                        /* (MCAN_XIDFE_1) Range filter from EFID1 to EFID2  */
#define   MCAN_XIDFE_1_EFT_DUAL_Val           _UINT32_(0x1)                                        /* (MCAN_XIDFE_1) Dual ID filter for EFID1 or EFID2  */
#define   MCAN_XIDFE_1_EFT_CLASSIC_Val        _UINT32_(0x2)                                        /* (MCAN_XIDFE_1) Classic filter  */
#define   MCAN_XIDFE_1_EFT_RANGE_NO_XIDAM_Val _UINT32_(0x3)                                        /* (MCAN_XIDFE_1) Range filter from EFID1 to EFID2 with no XIDAM mask  */
#define MCAN_XIDFE_1_EFT_RANGE                (MCAN_XIDFE_1_EFT_RANGE_Val << MCAN_XIDFE_1_EFT_Pos) /* (MCAN_XIDFE_1) Range filter from EFID1 to EFID2 Position */
#define MCAN_XIDFE_1_EFT_DUAL                 (MCAN_XIDFE_1_EFT_DUAL_Val << MCAN_XIDFE_1_EFT_Pos)  /* (MCAN_XIDFE_1) Dual ID filter for EFID1 or EFID2 Position */
#define MCAN_XIDFE_1_EFT_CLASSIC              (MCAN_XIDFE_1_EFT_CLASSIC_Val << MCAN_XIDFE_1_EFT_Pos) /* (MCAN_XIDFE_1) Classic filter Position */
#define MCAN_XIDFE_1_EFT_RANGE_NO_XIDAM       (MCAN_XIDFE_1_EFT_RANGE_NO_XIDAM_Val << MCAN_XIDFE_1_EFT_Pos) /* (MCAN_XIDFE_1) Range filter from EFID1 to EFID2 with no XIDAM mask Position */
#define MCAN_XIDFE_1_Msk                      _UINT32_(0xDFFFFFFF)                                 /* (MCAN_XIDFE_1) Register Mask  */


/* -------- MCAN_SIDFE_0 : (MCAN Offset: 0x00) (R/W 32) Standard Message ID Filter Element 0 -------- */
#define MCAN_SIDFE_0_SFID2_Pos                _UINT32_(0)                                          /* (MCAN_SIDFE_0) Standard Filter ID 2 Position */
#define MCAN_SIDFE_0_SFID2_Msk                (_UINT32_(0x7FF) << MCAN_SIDFE_0_SFID2_Pos)          /* (MCAN_SIDFE_0) Standard Filter ID 2 Mask */
#define MCAN_SIDFE_0_SFID2(value)             (MCAN_SIDFE_0_SFID2_Msk & (_UINT32_(value) << MCAN_SIDFE_0_SFID2_Pos)) /* Assignment of value for SFID2 in the MCAN_SIDFE_0 register */
#define MCAN_SIDFE_0_SFID1_Pos                _UINT32_(16)                                         /* (MCAN_SIDFE_0) Standard Filter ID 1 Position */
#define MCAN_SIDFE_0_SFID1_Msk                (_UINT32_(0x7FF) << MCAN_SIDFE_0_SFID1_Pos)          /* (MCAN_SIDFE_0) Standard Filter ID 1 Mask */
#define MCAN_SIDFE_0_SFID1(value)             (MCAN_SIDFE_0_SFID1_Msk & (_UINT32_(value) << MCAN_SIDFE_0_SFID1_Pos)) /* Assignment of value for SFID1 in the MCAN_SIDFE_0 register */
#define MCAN_SIDFE_0_SFEC_Pos                 _UINT32_(27)                                         /* (MCAN_SIDFE_0) Standard Filter Element Configuration Position */
#define MCAN_SIDFE_0_SFEC_Msk                 (_UINT32_(0x7) << MCAN_SIDFE_0_SFEC_Pos)             /* (MCAN_SIDFE_0) Standard Filter Element Configuration Mask */
#define MCAN_SIDFE_0_SFEC(value)              (MCAN_SIDFE_0_SFEC_Msk & (_UINT32_(value) << MCAN_SIDFE_0_SFEC_Pos)) /* Assignment of value for SFEC in the MCAN_SIDFE_0 register */
#define   MCAN_SIDFE_0_SFEC_DISABLE_Val       _UINT32_(0x0)                                        /* (MCAN_SIDFE_0) Disable filter element  */
#define   MCAN_SIDFE_0_SFEC_STF0M_Val         _UINT32_(0x1)                                        /* (MCAN_SIDFE_0) Store in Rx FIFO 0 if filter matches  */
#define   MCAN_SIDFE_0_SFEC_STF1M_Val         _UINT32_(0x2)                                        /* (MCAN_SIDFE_0) Store in Rx FIFO 1 if filter matches  */
#define   MCAN_SIDFE_0_SFEC_REJECT_Val        _UINT32_(0x3)                                        /* (MCAN_SIDFE_0) Reject ID if filter matches  */
#define   MCAN_SIDFE_0_SFEC_PRIORITY_Val      _UINT32_(0x4)                                        /* (MCAN_SIDFE_0) Set priority if filter matches  */
#define   MCAN_SIDFE_0_SFEC_PRIF0M_Val        _UINT32_(0x5)                                        /* (MCAN_SIDFE_0) Set priority and store in FIFO 0 if filter matches  */
#define   MCAN_SIDFE_0_SFEC_PRIF1M_Val        _UINT32_(0x6)                                        /* (MCAN_SIDFE_0) Set priority and store in FIFO 1 if filter matches  */
#define   MCAN_SIDFE_0_SFEC_STRXBUF_Val       _UINT32_(0x7)                                        /* (MCAN_SIDFE_0) Store into Rx Buffer  */
#define MCAN_SIDFE_0_SFEC_DISABLE             (MCAN_SIDFE_0_SFEC_DISABLE_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Disable filter element Position */
#define MCAN_SIDFE_0_SFEC_STF0M               (MCAN_SIDFE_0_SFEC_STF0M_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Store in Rx FIFO 0 if filter matches Position */
#define MCAN_SIDFE_0_SFEC_STF1M               (MCAN_SIDFE_0_SFEC_STF1M_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Store in Rx FIFO 1 if filter matches Position */
#define MCAN_SIDFE_0_SFEC_REJECT              (MCAN_SIDFE_0_SFEC_REJECT_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Reject ID if filter matches Position */
#define MCAN_SIDFE_0_SFEC_PRIORITY            (MCAN_SIDFE_0_SFEC_PRIORITY_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Set priority if filter matches Position */
#define MCAN_SIDFE_0_SFEC_PRIF0M              (MCAN_SIDFE_0_SFEC_PRIF0M_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Set priority and store in FIFO 0 if filter matches Position */
#define MCAN_SIDFE_0_SFEC_PRIF1M              (MCAN_SIDFE_0_SFEC_PRIF1M_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Set priority and store in FIFO 1 if filter matches Position */
#define MCAN_SIDFE_0_SFEC_STRXBUF             (MCAN_SIDFE_0_SFEC_STRXBUF_Val << MCAN_SIDFE_0_SFEC_Pos) /* (MCAN_SIDFE_0) Store into Rx Buffer Position */
#define MCAN_SIDFE_0_SFT_Pos                  _UINT32_(30)                                         /* (MCAN_SIDFE_0) Standard Filter Type Position */
#define MCAN_SIDFE_0_SFT_Msk                  (_UINT32_(0x3) << MCAN_SIDFE_0_SFT_Pos)              /* (MCAN_SIDFE_0) Standard Filter Type Mask */
#define MCAN_SIDFE_0_SFT(value)               (MCAN_SIDFE_0_SFT_Msk & (_UINT32_(value) << MCAN_SIDFE_0_SFT_Pos)) /* Assignment of value for SFT in the MCAN_SIDFE_0 register */
#define   MCAN_SIDFE_0_SFT_RANGE_Val          _UINT32_(0x0)                                        /* (MCAN_SIDFE_0) Range filter from SFID1 to SFID2  */
#define   MCAN_SIDFE_0_SFT_DUAL_Val           _UINT32_(0x1)                                        /* (MCAN_SIDFE_0) Dual ID filter for SF1ID or SF2ID  */
#define   MCAN_SIDFE_0_SFT_CLASSIC_Val        _UINT32_(0x2)                                        /* (MCAN_SIDFE_0) Classic filter  */
#define MCAN_SIDFE_0_SFT_RANGE                (MCAN_SIDFE_0_SFT_RANGE_Val << MCAN_SIDFE_0_SFT_Pos) /* (MCAN_SIDFE_0) Range filter from SFID1 to SFID2 Position */
#define MCAN_SIDFE_0_SFT_DUAL                 (MCAN_SIDFE_0_SFT_DUAL_Val << MCAN_SIDFE_0_SFT_Pos)  /* (MCAN_SIDFE_0) Dual ID filter for SF1ID or SF2ID Position */
#define MCAN_SIDFE_0_SFT_CLASSIC              (MCAN_SIDFE_0_SFT_CLASSIC_Val << MCAN_SIDFE_0_SFT_Pos) /* (MCAN_SIDFE_0) Classic filter Position */
#define MCAN_SIDFE_0_Msk                      _UINT32_(0xFFFF07FF)                                 /* (MCAN_SIDFE_0) Register Mask  */


/* -------- MCAN_TXEFE_0 : (MCAN Offset: 0x00) (R/W 32) Tx Event FIFO Element -------- */
#define MCAN_TXEFE_0_ID_Pos                   _UINT32_(0)                                          /* (MCAN_TXEFE_0) Identifier Position */
#define MCAN_TXEFE_0_ID_Msk                   (_UINT32_(0x1FFFFFFF) << MCAN_TXEFE_0_ID_Pos)        /* (MCAN_TXEFE_0) Identifier Mask */
#define MCAN_TXEFE_0_ID(value)                (MCAN_TXEFE_0_ID_Msk & (_UINT32_(value) << MCAN_TXEFE_0_ID_Pos)) /* Assignment of value for ID in the MCAN_TXEFE_0 register */
#define MCAN_TXEFE_0_RTR_Pos                  _UINT32_(29)                                         /* (MCAN_TXEFE_0) Remote Transmission Request Position */
#define MCAN_TXEFE_0_RTR_Msk                  (_UINT32_(0x1) << MCAN_TXEFE_0_RTR_Pos)              /* (MCAN_TXEFE_0) Remote Transmission Request Mask */
#define MCAN_TXEFE_0_RTR(value)               (MCAN_TXEFE_0_RTR_Msk & (_UINT32_(value) << MCAN_TXEFE_0_RTR_Pos)) /* Assignment of value for RTR in the MCAN_TXEFE_0 register */
#define MCAN_TXEFE_0_XTD_Pos                  _UINT32_(30)                                         /* (MCAN_TXEFE_0) Extended Identifier Position */
#define MCAN_TXEFE_0_XTD_Msk                  (_UINT32_(0x1) << MCAN_TXEFE_0_XTD_Pos)              /* (MCAN_TXEFE_0) Extended Identifier Mask */
#define MCAN_TXEFE_0_XTD(value)               (MCAN_TXEFE_0_XTD_Msk & (_UINT32_(value) << MCAN_TXEFE_0_XTD_Pos)) /* Assignment of value for XTD in the MCAN_TXEFE_0 register */
#define MCAN_TXEFE_0_ESI_Pos                  _UINT32_(31)                                         /* (MCAN_TXEFE_0) Error State Indicator Position */
#define MCAN_TXEFE_0_ESI_Msk                  (_UINT32_(0x1) << MCAN_TXEFE_0_ESI_Pos)              /* (MCAN_TXEFE_0) Error State Indicator Mask */
#define MCAN_TXEFE_0_ESI(value)               (MCAN_TXEFE_0_ESI_Msk & (_UINT32_(value) << MCAN_TXEFE_0_ESI_Pos)) /* Assignment of value for ESI in the MCAN_TXEFE_0 register */
#define MCAN_TXEFE_0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXEFE_0) Register Mask  */


/* -------- MCAN_TXEFE_1 : (MCAN Offset: 0x04) (R/W 32) Tx Event FIFO Element 1 -------- */
#define MCAN_TXEFE_1_TXTS_Pos                 _UINT32_(0)                                          /* (MCAN_TXEFE_1) Tx Timestamp Position */
#define MCAN_TXEFE_1_TXTS_Msk                 (_UINT32_(0xFFFF) << MCAN_TXEFE_1_TXTS_Pos)          /* (MCAN_TXEFE_1) Tx Timestamp Mask */
#define MCAN_TXEFE_1_TXTS(value)              (MCAN_TXEFE_1_TXTS_Msk & (_UINT32_(value) << MCAN_TXEFE_1_TXTS_Pos)) /* Assignment of value for TXTS in the MCAN_TXEFE_1 register */
#define MCAN_TXEFE_1_DLC_Pos                  _UINT32_(16)                                         /* (MCAN_TXEFE_1) Data Length Code Position */
#define MCAN_TXEFE_1_DLC_Msk                  (_UINT32_(0xF) << MCAN_TXEFE_1_DLC_Pos)              /* (MCAN_TXEFE_1) Data Length Code Mask */
#define MCAN_TXEFE_1_DLC(value)               (MCAN_TXEFE_1_DLC_Msk & (_UINT32_(value) << MCAN_TXEFE_1_DLC_Pos)) /* Assignment of value for DLC in the MCAN_TXEFE_1 register */
#define MCAN_TXEFE_1_BRS_Pos                  _UINT32_(20)                                         /* (MCAN_TXEFE_1) Bit Rate Switch Position */
#define MCAN_TXEFE_1_BRS_Msk                  (_UINT32_(0x1) << MCAN_TXEFE_1_BRS_Pos)              /* (MCAN_TXEFE_1) Bit Rate Switch Mask */
#define MCAN_TXEFE_1_BRS(value)               (MCAN_TXEFE_1_BRS_Msk & (_UINT32_(value) << MCAN_TXEFE_1_BRS_Pos)) /* Assignment of value for BRS in the MCAN_TXEFE_1 register */
#define MCAN_TXEFE_1_FDF_Pos                  _UINT32_(21)                                         /* (MCAN_TXEFE_1) FD Format Position */
#define MCAN_TXEFE_1_FDF_Msk                  (_UINT32_(0x1) << MCAN_TXEFE_1_FDF_Pos)              /* (MCAN_TXEFE_1) FD Format Mask */
#define MCAN_TXEFE_1_FDF(value)               (MCAN_TXEFE_1_FDF_Msk & (_UINT32_(value) << MCAN_TXEFE_1_FDF_Pos)) /* Assignment of value for FDF in the MCAN_TXEFE_1 register */
#define MCAN_TXEFE_1_ET_Pos                   _UINT32_(22)                                         /* (MCAN_TXEFE_1) Event Type Position */
#define MCAN_TXEFE_1_ET_Msk                   (_UINT32_(0x3) << MCAN_TXEFE_1_ET_Pos)               /* (MCAN_TXEFE_1) Event Type Mask */
#define MCAN_TXEFE_1_ET(value)                (MCAN_TXEFE_1_ET_Msk & (_UINT32_(value) << MCAN_TXEFE_1_ET_Pos)) /* Assignment of value for ET in the MCAN_TXEFE_1 register */
#define   MCAN_TXEFE_1_ET_TXE_Val             _UINT32_(0x1)                                        /* (MCAN_TXEFE_1) Tx event  */
#define   MCAN_TXEFE_1_ET_TXC_Val             _UINT32_(0x2)                                        /* (MCAN_TXEFE_1) Transmission in spite of cancellation  */
#define MCAN_TXEFE_1_ET_TXE                   (MCAN_TXEFE_1_ET_TXE_Val << MCAN_TXEFE_1_ET_Pos)     /* (MCAN_TXEFE_1) Tx event Position */
#define MCAN_TXEFE_1_ET_TXC                   (MCAN_TXEFE_1_ET_TXC_Val << MCAN_TXEFE_1_ET_Pos)     /* (MCAN_TXEFE_1) Transmission in spite of cancellation Position */
#define MCAN_TXEFE_1_MM_Pos                   _UINT32_(24)                                         /* (MCAN_TXEFE_1) Message Marker Position */
#define MCAN_TXEFE_1_MM_Msk                   (_UINT32_(0xFF) << MCAN_TXEFE_1_MM_Pos)              /* (MCAN_TXEFE_1) Message Marker Mask */
#define MCAN_TXEFE_1_MM(value)                (MCAN_TXEFE_1_MM_Msk & (_UINT32_(value) << MCAN_TXEFE_1_MM_Pos)) /* Assignment of value for MM in the MCAN_TXEFE_1 register */
#define MCAN_TXEFE_1_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXEFE_1) Register Mask  */


/* -------- MCAN_TXBE_0 : (MCAN Offset: 0x00) (R/W 32) Tx Buffer Element 0 -------- */
#define MCAN_TXBE_0_ID_Pos                    _UINT32_(0)                                          /* (MCAN_TXBE_0) Identifier Position */
#define MCAN_TXBE_0_ID_Msk                    (_UINT32_(0x1FFFFFFF) << MCAN_TXBE_0_ID_Pos)         /* (MCAN_TXBE_0) Identifier Mask */
#define MCAN_TXBE_0_ID(value)                 (MCAN_TXBE_0_ID_Msk & (_UINT32_(value) << MCAN_TXBE_0_ID_Pos)) /* Assignment of value for ID in the MCAN_TXBE_0 register */
#define MCAN_TXBE_0_RTR_Pos                   _UINT32_(29)                                         /* (MCAN_TXBE_0) Remote Transmission Request Position */
#define MCAN_TXBE_0_RTR_Msk                   (_UINT32_(0x1) << MCAN_TXBE_0_RTR_Pos)               /* (MCAN_TXBE_0) Remote Transmission Request Mask */
#define MCAN_TXBE_0_RTR(value)                (MCAN_TXBE_0_RTR_Msk & (_UINT32_(value) << MCAN_TXBE_0_RTR_Pos)) /* Assignment of value for RTR in the MCAN_TXBE_0 register */
#define MCAN_TXBE_0_XTD_Pos                   _UINT32_(30)                                         /* (MCAN_TXBE_0) Extended Identifier Position */
#define MCAN_TXBE_0_XTD_Msk                   (_UINT32_(0x1) << MCAN_TXBE_0_XTD_Pos)               /* (MCAN_TXBE_0) Extended Identifier Mask */
#define MCAN_TXBE_0_XTD(value)                (MCAN_TXBE_0_XTD_Msk & (_UINT32_(value) << MCAN_TXBE_0_XTD_Pos)) /* Assignment of value for XTD in the MCAN_TXBE_0 register */
#define MCAN_TXBE_0_ESI_Pos                   _UINT32_(31)                                         /* (MCAN_TXBE_0) Error State Indicator Position */
#define MCAN_TXBE_0_ESI_Msk                   (_UINT32_(0x1) << MCAN_TXBE_0_ESI_Pos)               /* (MCAN_TXBE_0) Error State Indicator Mask */
#define MCAN_TXBE_0_ESI(value)                (MCAN_TXBE_0_ESI_Msk & (_UINT32_(value) << MCAN_TXBE_0_ESI_Pos)) /* Assignment of value for ESI in the MCAN_TXBE_0 register */
#define MCAN_TXBE_0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBE_0) Register Mask  */


/* -------- MCAN_TXBE_1 : (MCAN Offset: 0x04) (R/W 32) Tx Buffer Element 1 -------- */
#define MCAN_TXBE_1_DLC_Pos                   _UINT32_(16)                                         /* (MCAN_TXBE_1) Data Length Code Position */
#define MCAN_TXBE_1_DLC_Msk                   (_UINT32_(0xF) << MCAN_TXBE_1_DLC_Pos)               /* (MCAN_TXBE_1) Data Length Code Mask */
#define MCAN_TXBE_1_DLC(value)                (MCAN_TXBE_1_DLC_Msk & (_UINT32_(value) << MCAN_TXBE_1_DLC_Pos)) /* Assignment of value for DLC in the MCAN_TXBE_1 register */
#define MCAN_TXBE_1_BRS_Pos                   _UINT32_(20)                                         /* (MCAN_TXBE_1) Bit Rate Switch Position */
#define MCAN_TXBE_1_BRS_Msk                   (_UINT32_(0x1) << MCAN_TXBE_1_BRS_Pos)               /* (MCAN_TXBE_1) Bit Rate Switch Mask */
#define MCAN_TXBE_1_BRS(value)                (MCAN_TXBE_1_BRS_Msk & (_UINT32_(value) << MCAN_TXBE_1_BRS_Pos)) /* Assignment of value for BRS in the MCAN_TXBE_1 register */
#define MCAN_TXBE_1_FDF_Pos                   _UINT32_(21)                                         /* (MCAN_TXBE_1) FD Format Position */
#define MCAN_TXBE_1_FDF_Msk                   (_UINT32_(0x1) << MCAN_TXBE_1_FDF_Pos)               /* (MCAN_TXBE_1) FD Format Mask */
#define MCAN_TXBE_1_FDF(value)                (MCAN_TXBE_1_FDF_Msk & (_UINT32_(value) << MCAN_TXBE_1_FDF_Pos)) /* Assignment of value for FDF in the MCAN_TXBE_1 register */
#define MCAN_TXBE_1_EFC_Pos                   _UINT32_(23)                                         /* (MCAN_TXBE_1) Event FIFO Control Position */
#define MCAN_TXBE_1_EFC_Msk                   (_UINT32_(0x1) << MCAN_TXBE_1_EFC_Pos)               /* (MCAN_TXBE_1) Event FIFO Control Mask */
#define MCAN_TXBE_1_EFC(value)                (MCAN_TXBE_1_EFC_Msk & (_UINT32_(value) << MCAN_TXBE_1_EFC_Pos)) /* Assignment of value for EFC in the MCAN_TXBE_1 register */
#define MCAN_TXBE_1_MM_Pos                    _UINT32_(24)                                         /* (MCAN_TXBE_1) Message Marker Position */
#define MCAN_TXBE_1_MM_Msk                    (_UINT32_(0xFF) << MCAN_TXBE_1_MM_Pos)               /* (MCAN_TXBE_1) Message Marker Mask */
#define MCAN_TXBE_1_MM(value)                 (MCAN_TXBE_1_MM_Msk & (_UINT32_(value) << MCAN_TXBE_1_MM_Pos)) /* Assignment of value for MM in the MCAN_TXBE_1 register */
#define MCAN_TXBE_1_Msk                       _UINT32_(0xFFBF0000)                                 /* (MCAN_TXBE_1) Register Mask  */


/* -------- MCAN_TXBE_DATA : (MCAN Offset: 0x08) (R/W 32) Tx Buffer Element Data -------- */
#define MCAN_TXBE_DATA_DB0_Pos                _UINT32_(0)                                          /* (MCAN_TXBE_DATA) Data Byte 0 Position */
#define MCAN_TXBE_DATA_DB0_Msk                (_UINT32_(0xFF) << MCAN_TXBE_DATA_DB0_Pos)           /* (MCAN_TXBE_DATA) Data Byte 0 Mask */
#define MCAN_TXBE_DATA_DB0(value)             (MCAN_TXBE_DATA_DB0_Msk & (_UINT32_(value) << MCAN_TXBE_DATA_DB0_Pos)) /* Assignment of value for DB0 in the MCAN_TXBE_DATA register */
#define MCAN_TXBE_DATA_DB1_Pos                _UINT32_(8)                                          /* (MCAN_TXBE_DATA) Data Byte 1 Position */
#define MCAN_TXBE_DATA_DB1_Msk                (_UINT32_(0xFF) << MCAN_TXBE_DATA_DB1_Pos)           /* (MCAN_TXBE_DATA) Data Byte 1 Mask */
#define MCAN_TXBE_DATA_DB1(value)             (MCAN_TXBE_DATA_DB1_Msk & (_UINT32_(value) << MCAN_TXBE_DATA_DB1_Pos)) /* Assignment of value for DB1 in the MCAN_TXBE_DATA register */
#define MCAN_TXBE_DATA_DB2_Pos                _UINT32_(16)                                         /* (MCAN_TXBE_DATA) Data Byte 2 Position */
#define MCAN_TXBE_DATA_DB2_Msk                (_UINT32_(0xFF) << MCAN_TXBE_DATA_DB2_Pos)           /* (MCAN_TXBE_DATA) Data Byte 2 Mask */
#define MCAN_TXBE_DATA_DB2(value)             (MCAN_TXBE_DATA_DB2_Msk & (_UINT32_(value) << MCAN_TXBE_DATA_DB2_Pos)) /* Assignment of value for DB2 in the MCAN_TXBE_DATA register */
#define MCAN_TXBE_DATA_DB3_Pos                _UINT32_(24)                                         /* (MCAN_TXBE_DATA) Data Byte 3 Position */
#define MCAN_TXBE_DATA_DB3_Msk                (_UINT32_(0xFF) << MCAN_TXBE_DATA_DB3_Pos)           /* (MCAN_TXBE_DATA) Data Byte 3 Mask */
#define MCAN_TXBE_DATA_DB3(value)             (MCAN_TXBE_DATA_DB3_Msk & (_UINT32_(value) << MCAN_TXBE_DATA_DB3_Pos)) /* Assignment of value for DB3 in the MCAN_TXBE_DATA register */
#define MCAN_TXBE_DATA_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBE_DATA) Register Mask  */


/* -------- MCAN_RXF1E_0 : (MCAN Offset: 0x00) (R/W 32) Rx FIFO 1 Element 0 -------- */
#define MCAN_RXF1E_0_ID_Pos                   _UINT32_(0)                                          /* (MCAN_RXF1E_0) Identifier Position */
#define MCAN_RXF1E_0_ID_Msk                   (_UINT32_(0x1FFFFFFF) << MCAN_RXF1E_0_ID_Pos)        /* (MCAN_RXF1E_0) Identifier Mask */
#define MCAN_RXF1E_0_ID(value)                (MCAN_RXF1E_0_ID_Msk & (_UINT32_(value) << MCAN_RXF1E_0_ID_Pos)) /* Assignment of value for ID in the MCAN_RXF1E_0 register */
#define MCAN_RXF1E_0_RTR_Pos                  _UINT32_(29)                                         /* (MCAN_RXF1E_0) Remote Transmission Request Position */
#define MCAN_RXF1E_0_RTR_Msk                  (_UINT32_(0x1) << MCAN_RXF1E_0_RTR_Pos)              /* (MCAN_RXF1E_0) Remote Transmission Request Mask */
#define MCAN_RXF1E_0_RTR(value)               (MCAN_RXF1E_0_RTR_Msk & (_UINT32_(value) << MCAN_RXF1E_0_RTR_Pos)) /* Assignment of value for RTR in the MCAN_RXF1E_0 register */
#define MCAN_RXF1E_0_XTD_Pos                  _UINT32_(30)                                         /* (MCAN_RXF1E_0) Extended Identifier Position */
#define MCAN_RXF1E_0_XTD_Msk                  (_UINT32_(0x1) << MCAN_RXF1E_0_XTD_Pos)              /* (MCAN_RXF1E_0) Extended Identifier Mask */
#define MCAN_RXF1E_0_XTD(value)               (MCAN_RXF1E_0_XTD_Msk & (_UINT32_(value) << MCAN_RXF1E_0_XTD_Pos)) /* Assignment of value for XTD in the MCAN_RXF1E_0 register */
#define MCAN_RXF1E_0_ESI_Pos                  _UINT32_(31)                                         /* (MCAN_RXF1E_0) Error State Indicator Position */
#define MCAN_RXF1E_0_ESI_Msk                  (_UINT32_(0x1) << MCAN_RXF1E_0_ESI_Pos)              /* (MCAN_RXF1E_0) Error State Indicator Mask */
#define MCAN_RXF1E_0_ESI(value)               (MCAN_RXF1E_0_ESI_Msk & (_UINT32_(value) << MCAN_RXF1E_0_ESI_Pos)) /* Assignment of value for ESI in the MCAN_RXF1E_0 register */
#define MCAN_RXF1E_0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MCAN_RXF1E_0) Register Mask  */


/* -------- MCAN_RXF1E_1 : (MCAN Offset: 0x04) (R/W 32) Rx FIFO 1 Element 1 -------- */
#define MCAN_RXF1E_1_RXTS_Pos                 _UINT32_(0)                                          /* (MCAN_RXF1E_1) Rx Timestamp Position */
#define MCAN_RXF1E_1_RXTS_Msk                 (_UINT32_(0xFFFF) << MCAN_RXF1E_1_RXTS_Pos)          /* (MCAN_RXF1E_1) Rx Timestamp Mask */
#define MCAN_RXF1E_1_RXTS(value)              (MCAN_RXF1E_1_RXTS_Msk & (_UINT32_(value) << MCAN_RXF1E_1_RXTS_Pos)) /* Assignment of value for RXTS in the MCAN_RXF1E_1 register */
#define MCAN_RXF1E_1_DLC_Pos                  _UINT32_(16)                                         /* (MCAN_RXF1E_1) Data Length Code Position */
#define MCAN_RXF1E_1_DLC_Msk                  (_UINT32_(0xF) << MCAN_RXF1E_1_DLC_Pos)              /* (MCAN_RXF1E_1) Data Length Code Mask */
#define MCAN_RXF1E_1_DLC(value)               (MCAN_RXF1E_1_DLC_Msk & (_UINT32_(value) << MCAN_RXF1E_1_DLC_Pos)) /* Assignment of value for DLC in the MCAN_RXF1E_1 register */
#define MCAN_RXF1E_1_BRS_Pos                  _UINT32_(20)                                         /* (MCAN_RXF1E_1) Bit Rate Switch Position */
#define MCAN_RXF1E_1_BRS_Msk                  (_UINT32_(0x1) << MCAN_RXF1E_1_BRS_Pos)              /* (MCAN_RXF1E_1) Bit Rate Switch Mask */
#define MCAN_RXF1E_1_BRS(value)               (MCAN_RXF1E_1_BRS_Msk & (_UINT32_(value) << MCAN_RXF1E_1_BRS_Pos)) /* Assignment of value for BRS in the MCAN_RXF1E_1 register */
#define MCAN_RXF1E_1_FDF_Pos                  _UINT32_(21)                                         /* (MCAN_RXF1E_1) FD Format Position */
#define MCAN_RXF1E_1_FDF_Msk                  (_UINT32_(0x1) << MCAN_RXF1E_1_FDF_Pos)              /* (MCAN_RXF1E_1) FD Format Mask */
#define MCAN_RXF1E_1_FDF(value)               (MCAN_RXF1E_1_FDF_Msk & (_UINT32_(value) << MCAN_RXF1E_1_FDF_Pos)) /* Assignment of value for FDF in the MCAN_RXF1E_1 register */
#define MCAN_RXF1E_1_FIDX_Pos                 _UINT32_(24)                                         /* (MCAN_RXF1E_1) Filter Index Position */
#define MCAN_RXF1E_1_FIDX_Msk                 (_UINT32_(0x7F) << MCAN_RXF1E_1_FIDX_Pos)            /* (MCAN_RXF1E_1) Filter Index Mask */
#define MCAN_RXF1E_1_FIDX(value)              (MCAN_RXF1E_1_FIDX_Msk & (_UINT32_(value) << MCAN_RXF1E_1_FIDX_Pos)) /* Assignment of value for FIDX in the MCAN_RXF1E_1 register */
#define MCAN_RXF1E_1_ANMF_Pos                 _UINT32_(31)                                         /* (MCAN_RXF1E_1) Accepted Non-matching Frame Position */
#define MCAN_RXF1E_1_ANMF_Msk                 (_UINT32_(0x1) << MCAN_RXF1E_1_ANMF_Pos)             /* (MCAN_RXF1E_1) Accepted Non-matching Frame Mask */
#define MCAN_RXF1E_1_ANMF(value)              (MCAN_RXF1E_1_ANMF_Msk & (_UINT32_(value) << MCAN_RXF1E_1_ANMF_Pos)) /* Assignment of value for ANMF in the MCAN_RXF1E_1 register */
#define MCAN_RXF1E_1_Msk                      _UINT32_(0xFF3FFFFF)                                 /* (MCAN_RXF1E_1) Register Mask  */


/* -------- MCAN_RXF1E_DATA : (MCAN Offset: 0x08) (R/W 32) Rx FIFO 1 Element Data -------- */
#define MCAN_RXF1E_DATA_DB0_Pos               _UINT32_(0)                                          /* (MCAN_RXF1E_DATA) Data Byte 0 Position */
#define MCAN_RXF1E_DATA_DB0_Msk               (_UINT32_(0xFF) << MCAN_RXF1E_DATA_DB0_Pos)          /* (MCAN_RXF1E_DATA) Data Byte 0 Mask */
#define MCAN_RXF1E_DATA_DB0(value)            (MCAN_RXF1E_DATA_DB0_Msk & (_UINT32_(value) << MCAN_RXF1E_DATA_DB0_Pos)) /* Assignment of value for DB0 in the MCAN_RXF1E_DATA register */
#define MCAN_RXF1E_DATA_DB1_Pos               _UINT32_(8)                                          /* (MCAN_RXF1E_DATA) Data Byte 1 Position */
#define MCAN_RXF1E_DATA_DB1_Msk               (_UINT32_(0xFF) << MCAN_RXF1E_DATA_DB1_Pos)          /* (MCAN_RXF1E_DATA) Data Byte 1 Mask */
#define MCAN_RXF1E_DATA_DB1(value)            (MCAN_RXF1E_DATA_DB1_Msk & (_UINT32_(value) << MCAN_RXF1E_DATA_DB1_Pos)) /* Assignment of value for DB1 in the MCAN_RXF1E_DATA register */
#define MCAN_RXF1E_DATA_DB2_Pos               _UINT32_(16)                                         /* (MCAN_RXF1E_DATA) Data Byte 2 Position */
#define MCAN_RXF1E_DATA_DB2_Msk               (_UINT32_(0xFF) << MCAN_RXF1E_DATA_DB2_Pos)          /* (MCAN_RXF1E_DATA) Data Byte 2 Mask */
#define MCAN_RXF1E_DATA_DB2(value)            (MCAN_RXF1E_DATA_DB2_Msk & (_UINT32_(value) << MCAN_RXF1E_DATA_DB2_Pos)) /* Assignment of value for DB2 in the MCAN_RXF1E_DATA register */
#define MCAN_RXF1E_DATA_DB3_Pos               _UINT32_(24)                                         /* (MCAN_RXF1E_DATA) Data Byte 3 Position */
#define MCAN_RXF1E_DATA_DB3_Msk               (_UINT32_(0xFF) << MCAN_RXF1E_DATA_DB3_Pos)          /* (MCAN_RXF1E_DATA) Data Byte 3 Mask */
#define MCAN_RXF1E_DATA_DB3(value)            (MCAN_RXF1E_DATA_DB3_Msk & (_UINT32_(value) << MCAN_RXF1E_DATA_DB3_Pos)) /* Assignment of value for DB3 in the MCAN_RXF1E_DATA register */
#define MCAN_RXF1E_DATA_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (MCAN_RXF1E_DATA) Register Mask  */


/* -------- MCAN_RXF0E_0 : (MCAN Offset: 0x00) (R/W 32) Rx FIFO 0 Element 0 -------- */
#define MCAN_RXF0E_0_ID_Pos                   _UINT32_(0)                                          /* (MCAN_RXF0E_0) Identifier Position */
#define MCAN_RXF0E_0_ID_Msk                   (_UINT32_(0x1FFFFFFF) << MCAN_RXF0E_0_ID_Pos)        /* (MCAN_RXF0E_0) Identifier Mask */
#define MCAN_RXF0E_0_ID(value)                (MCAN_RXF0E_0_ID_Msk & (_UINT32_(value) << MCAN_RXF0E_0_ID_Pos)) /* Assignment of value for ID in the MCAN_RXF0E_0 register */
#define MCAN_RXF0E_0_RTR_Pos                  _UINT32_(29)                                         /* (MCAN_RXF0E_0) Remote Transmission Request Position */
#define MCAN_RXF0E_0_RTR_Msk                  (_UINT32_(0x1) << MCAN_RXF0E_0_RTR_Pos)              /* (MCAN_RXF0E_0) Remote Transmission Request Mask */
#define MCAN_RXF0E_0_RTR(value)               (MCAN_RXF0E_0_RTR_Msk & (_UINT32_(value) << MCAN_RXF0E_0_RTR_Pos)) /* Assignment of value for RTR in the MCAN_RXF0E_0 register */
#define MCAN_RXF0E_0_XTD_Pos                  _UINT32_(30)                                         /* (MCAN_RXF0E_0) Extended Identifier Position */
#define MCAN_RXF0E_0_XTD_Msk                  (_UINT32_(0x1) << MCAN_RXF0E_0_XTD_Pos)              /* (MCAN_RXF0E_0) Extended Identifier Mask */
#define MCAN_RXF0E_0_XTD(value)               (MCAN_RXF0E_0_XTD_Msk & (_UINT32_(value) << MCAN_RXF0E_0_XTD_Pos)) /* Assignment of value for XTD in the MCAN_RXF0E_0 register */
#define MCAN_RXF0E_0_ESI_Pos                  _UINT32_(31)                                         /* (MCAN_RXF0E_0) Error State Indicator Position */
#define MCAN_RXF0E_0_ESI_Msk                  (_UINT32_(0x1) << MCAN_RXF0E_0_ESI_Pos)              /* (MCAN_RXF0E_0) Error State Indicator Mask */
#define MCAN_RXF0E_0_ESI(value)               (MCAN_RXF0E_0_ESI_Msk & (_UINT32_(value) << MCAN_RXF0E_0_ESI_Pos)) /* Assignment of value for ESI in the MCAN_RXF0E_0 register */
#define MCAN_RXF0E_0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MCAN_RXF0E_0) Register Mask  */


/* -------- MCAN_RXF0E_1 : (MCAN Offset: 0x04) (R/W 32) Rx FIFO 0 Element 1 -------- */
#define MCAN_RXF0E_1_RXTS_Pos                 _UINT32_(0)                                          /* (MCAN_RXF0E_1) Rx Timestamp Position */
#define MCAN_RXF0E_1_RXTS_Msk                 (_UINT32_(0xFFFF) << MCAN_RXF0E_1_RXTS_Pos)          /* (MCAN_RXF0E_1) Rx Timestamp Mask */
#define MCAN_RXF0E_1_RXTS(value)              (MCAN_RXF0E_1_RXTS_Msk & (_UINT32_(value) << MCAN_RXF0E_1_RXTS_Pos)) /* Assignment of value for RXTS in the MCAN_RXF0E_1 register */
#define MCAN_RXF0E_1_DLC_Pos                  _UINT32_(16)                                         /* (MCAN_RXF0E_1) Data Length Code Position */
#define MCAN_RXF0E_1_DLC_Msk                  (_UINT32_(0xF) << MCAN_RXF0E_1_DLC_Pos)              /* (MCAN_RXF0E_1) Data Length Code Mask */
#define MCAN_RXF0E_1_DLC(value)               (MCAN_RXF0E_1_DLC_Msk & (_UINT32_(value) << MCAN_RXF0E_1_DLC_Pos)) /* Assignment of value for DLC in the MCAN_RXF0E_1 register */
#define MCAN_RXF0E_1_BRS_Pos                  _UINT32_(20)                                         /* (MCAN_RXF0E_1) Bit Rate Switch Position */
#define MCAN_RXF0E_1_BRS_Msk                  (_UINT32_(0x1) << MCAN_RXF0E_1_BRS_Pos)              /* (MCAN_RXF0E_1) Bit Rate Switch Mask */
#define MCAN_RXF0E_1_BRS(value)               (MCAN_RXF0E_1_BRS_Msk & (_UINT32_(value) << MCAN_RXF0E_1_BRS_Pos)) /* Assignment of value for BRS in the MCAN_RXF0E_1 register */
#define MCAN_RXF0E_1_FDF_Pos                  _UINT32_(21)                                         /* (MCAN_RXF0E_1) FD Format Position */
#define MCAN_RXF0E_1_FDF_Msk                  (_UINT32_(0x1) << MCAN_RXF0E_1_FDF_Pos)              /* (MCAN_RXF0E_1) FD Format Mask */
#define MCAN_RXF0E_1_FDF(value)               (MCAN_RXF0E_1_FDF_Msk & (_UINT32_(value) << MCAN_RXF0E_1_FDF_Pos)) /* Assignment of value for FDF in the MCAN_RXF0E_1 register */
#define MCAN_RXF0E_1_FIDX_Pos                 _UINT32_(24)                                         /* (MCAN_RXF0E_1) Filter Index Position */
#define MCAN_RXF0E_1_FIDX_Msk                 (_UINT32_(0x7F) << MCAN_RXF0E_1_FIDX_Pos)            /* (MCAN_RXF0E_1) Filter Index Mask */
#define MCAN_RXF0E_1_FIDX(value)              (MCAN_RXF0E_1_FIDX_Msk & (_UINT32_(value) << MCAN_RXF0E_1_FIDX_Pos)) /* Assignment of value for FIDX in the MCAN_RXF0E_1 register */
#define MCAN_RXF0E_1_ANMF_Pos                 _UINT32_(31)                                         /* (MCAN_RXF0E_1) Accepted Non-matching Frame Position */
#define MCAN_RXF0E_1_ANMF_Msk                 (_UINT32_(0x1) << MCAN_RXF0E_1_ANMF_Pos)             /* (MCAN_RXF0E_1) Accepted Non-matching Frame Mask */
#define MCAN_RXF0E_1_ANMF(value)              (MCAN_RXF0E_1_ANMF_Msk & (_UINT32_(value) << MCAN_RXF0E_1_ANMF_Pos)) /* Assignment of value for ANMF in the MCAN_RXF0E_1 register */
#define MCAN_RXF0E_1_Msk                      _UINT32_(0xFF3FFFFF)                                 /* (MCAN_RXF0E_1) Register Mask  */


/* -------- MCAN_RXF0E_DATA : (MCAN Offset: 0x08) (R/W 32) Rx FIFO 0 Element Data -------- */
#define MCAN_RXF0E_DATA_DB0_Pos               _UINT32_(0)                                          /* (MCAN_RXF0E_DATA) Data Byte 0 Position */
#define MCAN_RXF0E_DATA_DB0_Msk               (_UINT32_(0xFF) << MCAN_RXF0E_DATA_DB0_Pos)          /* (MCAN_RXF0E_DATA) Data Byte 0 Mask */
#define MCAN_RXF0E_DATA_DB0(value)            (MCAN_RXF0E_DATA_DB0_Msk & (_UINT32_(value) << MCAN_RXF0E_DATA_DB0_Pos)) /* Assignment of value for DB0 in the MCAN_RXF0E_DATA register */
#define MCAN_RXF0E_DATA_DB1_Pos               _UINT32_(8)                                          /* (MCAN_RXF0E_DATA) Data Byte 1 Position */
#define MCAN_RXF0E_DATA_DB1_Msk               (_UINT32_(0xFF) << MCAN_RXF0E_DATA_DB1_Pos)          /* (MCAN_RXF0E_DATA) Data Byte 1 Mask */
#define MCAN_RXF0E_DATA_DB1(value)            (MCAN_RXF0E_DATA_DB1_Msk & (_UINT32_(value) << MCAN_RXF0E_DATA_DB1_Pos)) /* Assignment of value for DB1 in the MCAN_RXF0E_DATA register */
#define MCAN_RXF0E_DATA_DB2_Pos               _UINT32_(16)                                         /* (MCAN_RXF0E_DATA) Data Byte 2 Position */
#define MCAN_RXF0E_DATA_DB2_Msk               (_UINT32_(0xFF) << MCAN_RXF0E_DATA_DB2_Pos)          /* (MCAN_RXF0E_DATA) Data Byte 2 Mask */
#define MCAN_RXF0E_DATA_DB2(value)            (MCAN_RXF0E_DATA_DB2_Msk & (_UINT32_(value) << MCAN_RXF0E_DATA_DB2_Pos)) /* Assignment of value for DB2 in the MCAN_RXF0E_DATA register */
#define MCAN_RXF0E_DATA_DB3_Pos               _UINT32_(24)                                         /* (MCAN_RXF0E_DATA) Data Byte 3 Position */
#define MCAN_RXF0E_DATA_DB3_Msk               (_UINT32_(0xFF) << MCAN_RXF0E_DATA_DB3_Pos)          /* (MCAN_RXF0E_DATA) Data Byte 3 Mask */
#define MCAN_RXF0E_DATA_DB3(value)            (MCAN_RXF0E_DATA_DB3_Msk & (_UINT32_(value) << MCAN_RXF0E_DATA_DB3_Pos)) /* Assignment of value for DB3 in the MCAN_RXF0E_DATA register */
#define MCAN_RXF0E_DATA_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (MCAN_RXF0E_DATA) Register Mask  */


/* -------- MCAN_RXBE_0 : (MCAN Offset: 0x00) (R/W 32) Rx Buffer Element 0 -------- */
#define MCAN_RXBE_0_ID_Pos                    _UINT32_(0)                                          /* (MCAN_RXBE_0) Identifier Position */
#define MCAN_RXBE_0_ID_Msk                    (_UINT32_(0x1FFFFFFF) << MCAN_RXBE_0_ID_Pos)         /* (MCAN_RXBE_0) Identifier Mask */
#define MCAN_RXBE_0_ID(value)                 (MCAN_RXBE_0_ID_Msk & (_UINT32_(value) << MCAN_RXBE_0_ID_Pos)) /* Assignment of value for ID in the MCAN_RXBE_0 register */
#define MCAN_RXBE_0_RTR_Pos                   _UINT32_(29)                                         /* (MCAN_RXBE_0) Remote Transmission Request Position */
#define MCAN_RXBE_0_RTR_Msk                   (_UINT32_(0x1) << MCAN_RXBE_0_RTR_Pos)               /* (MCAN_RXBE_0) Remote Transmission Request Mask */
#define MCAN_RXBE_0_RTR(value)                (MCAN_RXBE_0_RTR_Msk & (_UINT32_(value) << MCAN_RXBE_0_RTR_Pos)) /* Assignment of value for RTR in the MCAN_RXBE_0 register */
#define MCAN_RXBE_0_XTD_Pos                   _UINT32_(30)                                         /* (MCAN_RXBE_0) Extended Identifier Position */
#define MCAN_RXBE_0_XTD_Msk                   (_UINT32_(0x1) << MCAN_RXBE_0_XTD_Pos)               /* (MCAN_RXBE_0) Extended Identifier Mask */
#define MCAN_RXBE_0_XTD(value)                (MCAN_RXBE_0_XTD_Msk & (_UINT32_(value) << MCAN_RXBE_0_XTD_Pos)) /* Assignment of value for XTD in the MCAN_RXBE_0 register */
#define MCAN_RXBE_0_ESI_Pos                   _UINT32_(31)                                         /* (MCAN_RXBE_0) Error State Indicator Position */
#define MCAN_RXBE_0_ESI_Msk                   (_UINT32_(0x1) << MCAN_RXBE_0_ESI_Pos)               /* (MCAN_RXBE_0) Error State Indicator Mask */
#define MCAN_RXBE_0_ESI(value)                (MCAN_RXBE_0_ESI_Msk & (_UINT32_(value) << MCAN_RXBE_0_ESI_Pos)) /* Assignment of value for ESI in the MCAN_RXBE_0 register */
#define MCAN_RXBE_0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MCAN_RXBE_0) Register Mask  */


/* -------- MCAN_RXBE_1 : (MCAN Offset: 0x04) (R/W 32) Rx Buffer Element 1 -------- */
#define MCAN_RXBE_1_RXTS_Pos                  _UINT32_(0)                                          /* (MCAN_RXBE_1) Rx Timestamp Position */
#define MCAN_RXBE_1_RXTS_Msk                  (_UINT32_(0xFFFF) << MCAN_RXBE_1_RXTS_Pos)           /* (MCAN_RXBE_1) Rx Timestamp Mask */
#define MCAN_RXBE_1_RXTS(value)               (MCAN_RXBE_1_RXTS_Msk & (_UINT32_(value) << MCAN_RXBE_1_RXTS_Pos)) /* Assignment of value for RXTS in the MCAN_RXBE_1 register */
#define MCAN_RXBE_1_DLC_Pos                   _UINT32_(16)                                         /* (MCAN_RXBE_1) Data Length Code Position */
#define MCAN_RXBE_1_DLC_Msk                   (_UINT32_(0xF) << MCAN_RXBE_1_DLC_Pos)               /* (MCAN_RXBE_1) Data Length Code Mask */
#define MCAN_RXBE_1_DLC(value)                (MCAN_RXBE_1_DLC_Msk & (_UINT32_(value) << MCAN_RXBE_1_DLC_Pos)) /* Assignment of value for DLC in the MCAN_RXBE_1 register */
#define MCAN_RXBE_1_BRS_Pos                   _UINT32_(20)                                         /* (MCAN_RXBE_1) Bit Rate Switch Position */
#define MCAN_RXBE_1_BRS_Msk                   (_UINT32_(0x1) << MCAN_RXBE_1_BRS_Pos)               /* (MCAN_RXBE_1) Bit Rate Switch Mask */
#define MCAN_RXBE_1_BRS(value)                (MCAN_RXBE_1_BRS_Msk & (_UINT32_(value) << MCAN_RXBE_1_BRS_Pos)) /* Assignment of value for BRS in the MCAN_RXBE_1 register */
#define MCAN_RXBE_1_FDF_Pos                   _UINT32_(21)                                         /* (MCAN_RXBE_1) FD Format Position */
#define MCAN_RXBE_1_FDF_Msk                   (_UINT32_(0x1) << MCAN_RXBE_1_FDF_Pos)               /* (MCAN_RXBE_1) FD Format Mask */
#define MCAN_RXBE_1_FDF(value)                (MCAN_RXBE_1_FDF_Msk & (_UINT32_(value) << MCAN_RXBE_1_FDF_Pos)) /* Assignment of value for FDF in the MCAN_RXBE_1 register */
#define MCAN_RXBE_1_FIDX_Pos                  _UINT32_(24)                                         /* (MCAN_RXBE_1) Filter Index Position */
#define MCAN_RXBE_1_FIDX_Msk                  (_UINT32_(0x7F) << MCAN_RXBE_1_FIDX_Pos)             /* (MCAN_RXBE_1) Filter Index Mask */
#define MCAN_RXBE_1_FIDX(value)               (MCAN_RXBE_1_FIDX_Msk & (_UINT32_(value) << MCAN_RXBE_1_FIDX_Pos)) /* Assignment of value for FIDX in the MCAN_RXBE_1 register */
#define MCAN_RXBE_1_ANMF_Pos                  _UINT32_(31)                                         /* (MCAN_RXBE_1) Accepted Non-matching Frame Position */
#define MCAN_RXBE_1_ANMF_Msk                  (_UINT32_(0x1) << MCAN_RXBE_1_ANMF_Pos)              /* (MCAN_RXBE_1) Accepted Non-matching Frame Mask */
#define MCAN_RXBE_1_ANMF(value)               (MCAN_RXBE_1_ANMF_Msk & (_UINT32_(value) << MCAN_RXBE_1_ANMF_Pos)) /* Assignment of value for ANMF in the MCAN_RXBE_1 register */
#define MCAN_RXBE_1_Msk                       _UINT32_(0xFF3FFFFF)                                 /* (MCAN_RXBE_1) Register Mask  */


/* -------- MCAN_RXBE_DATA : (MCAN Offset: 0x08) (R/W 32) Rx Buffer Element Data -------- */
#define MCAN_RXBE_DATA_DB0_Pos                _UINT32_(0)                                          /* (MCAN_RXBE_DATA) Data Byte 0 Position */
#define MCAN_RXBE_DATA_DB0_Msk                (_UINT32_(0xFF) << MCAN_RXBE_DATA_DB0_Pos)           /* (MCAN_RXBE_DATA) Data Byte 0 Mask */
#define MCAN_RXBE_DATA_DB0(value)             (MCAN_RXBE_DATA_DB0_Msk & (_UINT32_(value) << MCAN_RXBE_DATA_DB0_Pos)) /* Assignment of value for DB0 in the MCAN_RXBE_DATA register */
#define MCAN_RXBE_DATA_DB1_Pos                _UINT32_(8)                                          /* (MCAN_RXBE_DATA) Data Byte 1 Position */
#define MCAN_RXBE_DATA_DB1_Msk                (_UINT32_(0xFF) << MCAN_RXBE_DATA_DB1_Pos)           /* (MCAN_RXBE_DATA) Data Byte 1 Mask */
#define MCAN_RXBE_DATA_DB1(value)             (MCAN_RXBE_DATA_DB1_Msk & (_UINT32_(value) << MCAN_RXBE_DATA_DB1_Pos)) /* Assignment of value for DB1 in the MCAN_RXBE_DATA register */
#define MCAN_RXBE_DATA_DB2_Pos                _UINT32_(16)                                         /* (MCAN_RXBE_DATA) Data Byte 2 Position */
#define MCAN_RXBE_DATA_DB2_Msk                (_UINT32_(0xFF) << MCAN_RXBE_DATA_DB2_Pos)           /* (MCAN_RXBE_DATA) Data Byte 2 Mask */
#define MCAN_RXBE_DATA_DB2(value)             (MCAN_RXBE_DATA_DB2_Msk & (_UINT32_(value) << MCAN_RXBE_DATA_DB2_Pos)) /* Assignment of value for DB2 in the MCAN_RXBE_DATA register */
#define MCAN_RXBE_DATA_DB3_Pos                _UINT32_(24)                                         /* (MCAN_RXBE_DATA) Data Byte 3 Position */
#define MCAN_RXBE_DATA_DB3_Msk                (_UINT32_(0xFF) << MCAN_RXBE_DATA_DB3_Pos)           /* (MCAN_RXBE_DATA) Data Byte 3 Mask */
#define MCAN_RXBE_DATA_DB3(value)             (MCAN_RXBE_DATA_DB3_Msk & (_UINT32_(value) << MCAN_RXBE_DATA_DB3_Pos)) /* Assignment of value for DB3 in the MCAN_RXBE_DATA register */
#define MCAN_RXBE_DATA_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (MCAN_RXBE_DATA) Register Mask  */


/* -------- MCAN_ENDN : (MCAN Offset: 0x04) ( R/ 32) Endian Register -------- */
#define MCAN_ENDN_RESETVALUE                  _UINT32_(0x87654321)                                 /*  (MCAN_ENDN) Endian Register  Reset Value */

#define MCAN_ENDN_ETV_Pos                     _UINT32_(0)                                          /* (MCAN_ENDN) Endianness Test Value Position */
#define MCAN_ENDN_ETV_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_ENDN_ETV_Pos)          /* (MCAN_ENDN) Endianness Test Value Mask */
#define MCAN_ENDN_ETV(value)                  (MCAN_ENDN_ETV_Msk & (_UINT32_(value) << MCAN_ENDN_ETV_Pos)) /* Assignment of value for ETV in the MCAN_ENDN register */
#define MCAN_ENDN_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (MCAN_ENDN) Register Mask  */


/* -------- MCAN_DBTP : (MCAN Offset: 0x0C) (R/W 32) Data Bit Timing and Prescaler Register -------- */
#define MCAN_DBTP_RESETVALUE                  _UINT32_(0xA33)                                      /*  (MCAN_DBTP) Data Bit Timing and Prescaler Register  Reset Value */

#define MCAN_DBTP_DSJW_Pos                    _UINT32_(0)                                          /* (MCAN_DBTP) Data (Re) Synchronization Jump Width Position */
#define MCAN_DBTP_DSJW_Msk                    (_UINT32_(0x7) << MCAN_DBTP_DSJW_Pos)                /* (MCAN_DBTP) Data (Re) Synchronization Jump Width Mask */
#define MCAN_DBTP_DSJW(value)                 (MCAN_DBTP_DSJW_Msk & (_UINT32_(value) << MCAN_DBTP_DSJW_Pos)) /* Assignment of value for DSJW in the MCAN_DBTP register */
#define MCAN_DBTP_DTSEG2_Pos                  _UINT32_(4)                                          /* (MCAN_DBTP) Data Time Segment After Sample Point Position */
#define MCAN_DBTP_DTSEG2_Msk                  (_UINT32_(0xF) << MCAN_DBTP_DTSEG2_Pos)              /* (MCAN_DBTP) Data Time Segment After Sample Point Mask */
#define MCAN_DBTP_DTSEG2(value)               (MCAN_DBTP_DTSEG2_Msk & (_UINT32_(value) << MCAN_DBTP_DTSEG2_Pos)) /* Assignment of value for DTSEG2 in the MCAN_DBTP register */
#define MCAN_DBTP_DTSEG1_Pos                  _UINT32_(8)                                          /* (MCAN_DBTP) Data Time Segment Before Sample Point Position */
#define MCAN_DBTP_DTSEG1_Msk                  (_UINT32_(0x1F) << MCAN_DBTP_DTSEG1_Pos)             /* (MCAN_DBTP) Data Time Segment Before Sample Point Mask */
#define MCAN_DBTP_DTSEG1(value)               (MCAN_DBTP_DTSEG1_Msk & (_UINT32_(value) << MCAN_DBTP_DTSEG1_Pos)) /* Assignment of value for DTSEG1 in the MCAN_DBTP register */
#define   MCAN_DBTP_DTSEG1_0_Val              _UINT32_(0x0)                                        /* (MCAN_DBTP) Forbidden.  */
#define MCAN_DBTP_DTSEG1_0                    (MCAN_DBTP_DTSEG1_0_Val << MCAN_DBTP_DTSEG1_Pos)     /* (MCAN_DBTP) Forbidden. Position */
#define MCAN_DBTP_DBRP_Pos                    _UINT32_(16)                                         /* (MCAN_DBTP) Data Bit Rate Prescaler Position */
#define MCAN_DBTP_DBRP_Msk                    (_UINT32_(0x1F) << MCAN_DBTP_DBRP_Pos)               /* (MCAN_DBTP) Data Bit Rate Prescaler Mask */
#define MCAN_DBTP_DBRP(value)                 (MCAN_DBTP_DBRP_Msk & (_UINT32_(value) << MCAN_DBTP_DBRP_Pos)) /* Assignment of value for DBRP in the MCAN_DBTP register */
#define MCAN_DBTP_TDC_Pos                     _UINT32_(23)                                         /* (MCAN_DBTP) Transmitter Delay Compensation Position */
#define MCAN_DBTP_TDC_Msk                     (_UINT32_(0x1) << MCAN_DBTP_TDC_Pos)                 /* (MCAN_DBTP) Transmitter Delay Compensation Mask */
#define MCAN_DBTP_TDC(value)                  (MCAN_DBTP_TDC_Msk & (_UINT32_(value) << MCAN_DBTP_TDC_Pos)) /* Assignment of value for TDC in the MCAN_DBTP register */
#define   MCAN_DBTP_TDC_DISABLED_Val          _UINT32_(0x0)                                        /* (MCAN_DBTP) Transmitter Delay Compensation disabled.  */
#define   MCAN_DBTP_TDC_ENABLED_Val           _UINT32_(0x1)                                        /* (MCAN_DBTP) Transmitter Delay Compensation enabled.  */
#define MCAN_DBTP_TDC_DISABLED                (MCAN_DBTP_TDC_DISABLED_Val << MCAN_DBTP_TDC_Pos)    /* (MCAN_DBTP) Transmitter Delay Compensation disabled. Position */
#define MCAN_DBTP_TDC_ENABLED                 (MCAN_DBTP_TDC_ENABLED_Val << MCAN_DBTP_TDC_Pos)     /* (MCAN_DBTP) Transmitter Delay Compensation enabled. Position */
#define MCAN_DBTP_Msk                         _UINT32_(0x009F1FF7)                                 /* (MCAN_DBTP) Register Mask  */


/* -------- MCAN_TEST : (MCAN Offset: 0x10) (R/W 32) Test Register -------- */
#define MCAN_TEST_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_TEST) Test Register  Reset Value */

#define MCAN_TEST_LBCK_Pos                    _UINT32_(4)                                          /* (MCAN_TEST) Loop Back Mode (read/write) Position */
#define MCAN_TEST_LBCK_Msk                    (_UINT32_(0x1) << MCAN_TEST_LBCK_Pos)                /* (MCAN_TEST) Loop Back Mode (read/write) Mask */
#define MCAN_TEST_LBCK(value)                 (MCAN_TEST_LBCK_Msk & (_UINT32_(value) << MCAN_TEST_LBCK_Pos)) /* Assignment of value for LBCK in the MCAN_TEST register */
#define   MCAN_TEST_LBCK_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_TEST) Reset value. Loop Back mode is disabled.  */
#define   MCAN_TEST_LBCK_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_TEST) Loop Back mode is enabled (see Section 6.1.9 "Test Modes").  */
#define MCAN_TEST_LBCK_DISABLED               (MCAN_TEST_LBCK_DISABLED_Val << MCAN_TEST_LBCK_Pos)  /* (MCAN_TEST) Reset value. Loop Back mode is disabled. Position */
#define MCAN_TEST_LBCK_ENABLED                (MCAN_TEST_LBCK_ENABLED_Val << MCAN_TEST_LBCK_Pos)   /* (MCAN_TEST) Loop Back mode is enabled (see Section 6.1.9 "Test Modes"). Position */
#define MCAN_TEST_TX_Pos                      _UINT32_(5)                                          /* (MCAN_TEST) Control of Transmit Pin (read/write) Position */
#define MCAN_TEST_TX_Msk                      (_UINT32_(0x3) << MCAN_TEST_TX_Pos)                  /* (MCAN_TEST) Control of Transmit Pin (read/write) Mask */
#define MCAN_TEST_TX(value)                   (MCAN_TEST_TX_Msk & (_UINT32_(value) << MCAN_TEST_TX_Pos)) /* Assignment of value for TX in the MCAN_TEST register */
#define   MCAN_TEST_TX_RESET_Val              _UINT32_(0x0)                                        /* (MCAN_TEST) Reset value, CANTX controlled by the CAN Core, updated at the end of the CAN bit time.  */
#define   MCAN_TEST_TX_SAMPLE_POINT_MONITORING_Val _UINT32_(0x1)                                        /* (MCAN_TEST) Sample Point can be monitored at pin CANTX.  */
#define   MCAN_TEST_TX_DOMINANT_Val           _UINT32_(0x2)                                        /* (MCAN_TEST) Dominant ('0') level at pin CANTX.  */
#define   MCAN_TEST_TX_RECESSIVE_Val          _UINT32_(0x3)                                        /* (MCAN_TEST) Recessive ('1') at pin CANTX.  */
#define MCAN_TEST_TX_RESET                    (MCAN_TEST_TX_RESET_Val << MCAN_TEST_TX_Pos)         /* (MCAN_TEST) Reset value, CANTX controlled by the CAN Core, updated at the end of the CAN bit time. Position */
#define MCAN_TEST_TX_SAMPLE_POINT_MONITORING  (MCAN_TEST_TX_SAMPLE_POINT_MONITORING_Val << MCAN_TEST_TX_Pos) /* (MCAN_TEST) Sample Point can be monitored at pin CANTX. Position */
#define MCAN_TEST_TX_DOMINANT                 (MCAN_TEST_TX_DOMINANT_Val << MCAN_TEST_TX_Pos)      /* (MCAN_TEST) Dominant ('0') level at pin CANTX. Position */
#define MCAN_TEST_TX_RECESSIVE                (MCAN_TEST_TX_RECESSIVE_Val << MCAN_TEST_TX_Pos)     /* (MCAN_TEST) Recessive ('1') at pin CANTX. Position */
#define MCAN_TEST_RX_Pos                      _UINT32_(7)                                          /* (MCAN_TEST) Receive Pin (read-only) Position */
#define MCAN_TEST_RX_Msk                      (_UINT32_(0x1) << MCAN_TEST_RX_Pos)                  /* (MCAN_TEST) Receive Pin (read-only) Mask */
#define MCAN_TEST_RX(value)                   (MCAN_TEST_RX_Msk & (_UINT32_(value) << MCAN_TEST_RX_Pos)) /* Assignment of value for RX in the MCAN_TEST register */
#define   MCAN_TEST_RX_0_Val                  _UINT32_(0x0)                                        /* (MCAN_TEST) The CAN bus is dominant (CANRX = '0').  */
#define   MCAN_TEST_RX_1_Val                  _UINT32_(0x1)                                        /* (MCAN_TEST) The CAN bus is recessive (CANRX = '1').  */
#define MCAN_TEST_RX_0                        (MCAN_TEST_RX_0_Val << MCAN_TEST_RX_Pos)             /* (MCAN_TEST) The CAN bus is dominant (CANRX = '0'). Position */
#define MCAN_TEST_RX_1                        (MCAN_TEST_RX_1_Val << MCAN_TEST_RX_Pos)             /* (MCAN_TEST) The CAN bus is recessive (CANRX = '1'). Position */
#define MCAN_TEST_TXBNP_Pos                   _UINT32_(8)                                          /* (MCAN_TEST) TX Buffer Number Prepared (read-only) Position */
#define MCAN_TEST_TXBNP_Msk                   (_UINT32_(0x1F) << MCAN_TEST_TXBNP_Pos)              /* (MCAN_TEST) TX Buffer Number Prepared (read-only) Mask */
#define MCAN_TEST_TXBNP(value)                (MCAN_TEST_TXBNP_Msk & (_UINT32_(value) << MCAN_TEST_TXBNP_Pos)) /* Assignment of value for TXBNP in the MCAN_TEST register */
#define MCAN_TEST_PVAL_Pos                    _UINT32_(13)                                         /* (MCAN_TEST) Prepared Valid (read-only) Position */
#define MCAN_TEST_PVAL_Msk                    (_UINT32_(0x1) << MCAN_TEST_PVAL_Pos)                /* (MCAN_TEST) Prepared Valid (read-only) Mask */
#define MCAN_TEST_PVAL(value)                 (MCAN_TEST_PVAL_Msk & (_UINT32_(value) << MCAN_TEST_PVAL_Pos)) /* Assignment of value for PVAL in the MCAN_TEST register */
#define   MCAN_TEST_PVAL_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_TEST) TXBNP value is not valid.  */
#define   MCAN_TEST_PVAL_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_TEST) TXBNP value is valid.  */
#define MCAN_TEST_PVAL_DISABLED               (MCAN_TEST_PVAL_DISABLED_Val << MCAN_TEST_PVAL_Pos)  /* (MCAN_TEST) TXBNP value is not valid. Position */
#define MCAN_TEST_PVAL_ENABLED                (MCAN_TEST_PVAL_ENABLED_Val << MCAN_TEST_PVAL_Pos)   /* (MCAN_TEST) TXBNP value is valid. Position */
#define MCAN_TEST_TXBNS_Pos                   _UINT32_(16)                                         /* (MCAN_TEST) TX Buffer Number Started (read-only) Position */
#define MCAN_TEST_TXBNS_Msk                   (_UINT32_(0x1F) << MCAN_TEST_TXBNS_Pos)              /* (MCAN_TEST) TX Buffer Number Started (read-only) Mask */
#define MCAN_TEST_TXBNS(value)                (MCAN_TEST_TXBNS_Msk & (_UINT32_(value) << MCAN_TEST_TXBNS_Pos)) /* Assignment of value for TXBNS in the MCAN_TEST register */
#define MCAN_TEST_SVAL_Pos                    _UINT32_(21)                                         /* (MCAN_TEST) Started Valid (read-only) Position */
#define MCAN_TEST_SVAL_Msk                    (_UINT32_(0x1) << MCAN_TEST_SVAL_Pos)                /* (MCAN_TEST) Started Valid (read-only) Mask */
#define MCAN_TEST_SVAL(value)                 (MCAN_TEST_SVAL_Msk & (_UINT32_(value) << MCAN_TEST_SVAL_Pos)) /* Assignment of value for SVAL in the MCAN_TEST register */
#define   MCAN_TEST_SVAL_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_TEST) TXBNS value is not valid.  */
#define   MCAN_TEST_SVAL_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_TEST) TXBNS value is valid.  */
#define MCAN_TEST_SVAL_DISABLED               (MCAN_TEST_SVAL_DISABLED_Val << MCAN_TEST_SVAL_Pos)  /* (MCAN_TEST) TXBNS value is not valid. Position */
#define MCAN_TEST_SVAL_ENABLED                (MCAN_TEST_SVAL_ENABLED_Val << MCAN_TEST_SVAL_Pos)   /* (MCAN_TEST) TXBNS value is valid. Position */
#define MCAN_TEST_Msk                         _UINT32_(0x003F3FF0)                                 /* (MCAN_TEST) Register Mask  */


/* -------- MCAN_RWD : (MCAN Offset: 0x14) (R/W 32) RAM Watchdog Register -------- */
#define MCAN_RWD_RESETVALUE                   _UINT32_(0x00)                                       /*  (MCAN_RWD) RAM Watchdog Register  Reset Value */

#define MCAN_RWD_WDC_Pos                      _UINT32_(0)                                          /* (MCAN_RWD) Watchdog Configuration (read/write) Position */
#define MCAN_RWD_WDC_Msk                      (_UINT32_(0xFF) << MCAN_RWD_WDC_Pos)                 /* (MCAN_RWD) Watchdog Configuration (read/write) Mask */
#define MCAN_RWD_WDC(value)                   (MCAN_RWD_WDC_Msk & (_UINT32_(value) << MCAN_RWD_WDC_Pos)) /* Assignment of value for WDC in the MCAN_RWD register */
#define MCAN_RWD_WDV_Pos                      _UINT32_(8)                                          /* (MCAN_RWD) Watchdog Value (read-only) Position */
#define MCAN_RWD_WDV_Msk                      (_UINT32_(0xFF) << MCAN_RWD_WDV_Pos)                 /* (MCAN_RWD) Watchdog Value (read-only) Mask */
#define MCAN_RWD_WDV(value)                   (MCAN_RWD_WDV_Msk & (_UINT32_(value) << MCAN_RWD_WDV_Pos)) /* Assignment of value for WDV in the MCAN_RWD register */
#define MCAN_RWD_Msk                          _UINT32_(0x0000FFFF)                                 /* (MCAN_RWD) Register Mask  */


/* -------- MCAN_CCCR : (MCAN Offset: 0x18) (R/W 32) CC Control Register -------- */
#define MCAN_CCCR_RESETVALUE                  _UINT32_(0x01)                                       /*  (MCAN_CCCR) CC Control Register  Reset Value */

#define MCAN_CCCR_INIT_Pos                    _UINT32_(0)                                          /* (MCAN_CCCR) Initialization (read/write) Position */
#define MCAN_CCCR_INIT_Msk                    (_UINT32_(0x1) << MCAN_CCCR_INIT_Pos)                /* (MCAN_CCCR) Initialization (read/write) Mask */
#define MCAN_CCCR_INIT(value)                 (MCAN_CCCR_INIT_Msk & (_UINT32_(value) << MCAN_CCCR_INIT_Pos)) /* Assignment of value for INIT in the MCAN_CCCR register */
#define   MCAN_CCCR_INIT_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) Normal operation.  */
#define   MCAN_CCCR_INIT_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_CCCR) Initialization is started.  */
#define MCAN_CCCR_INIT_DISABLED               (MCAN_CCCR_INIT_DISABLED_Val << MCAN_CCCR_INIT_Pos)  /* (MCAN_CCCR) Normal operation. Position */
#define MCAN_CCCR_INIT_ENABLED                (MCAN_CCCR_INIT_ENABLED_Val << MCAN_CCCR_INIT_Pos)   /* (MCAN_CCCR) Initialization is started. Position */
#define MCAN_CCCR_CCE_Pos                     _UINT32_(1)                                          /* (MCAN_CCCR) Configuration Change Enable (read/write, write protection) Position */
#define MCAN_CCCR_CCE_Msk                     (_UINT32_(0x1) << MCAN_CCCR_CCE_Pos)                 /* (MCAN_CCCR) Configuration Change Enable (read/write, write protection) Mask */
#define MCAN_CCCR_CCE(value)                  (MCAN_CCCR_CCE_Msk & (_UINT32_(value) << MCAN_CCCR_CCE_Pos)) /* Assignment of value for CCE in the MCAN_CCCR register */
#define   MCAN_CCCR_CCE_PROTECTED_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) The processor has no write access to the protected configuration registers.  */
#define   MCAN_CCCR_CCE_CONFIGURABLE_Val      _UINT32_(0x1)                                        /* (MCAN_CCCR) The processor has write access to the protected configuration registers (while MCAN_CCCR.INIT = '1').  */
#define MCAN_CCCR_CCE_PROTECTED               (MCAN_CCCR_CCE_PROTECTED_Val << MCAN_CCCR_CCE_Pos)   /* (MCAN_CCCR) The processor has no write access to the protected configuration registers. Position */
#define MCAN_CCCR_CCE_CONFIGURABLE            (MCAN_CCCR_CCE_CONFIGURABLE_Val << MCAN_CCCR_CCE_Pos) /* (MCAN_CCCR) The processor has write access to the protected configuration registers (while MCAN_CCCR.INIT = '1'). Position */
#define MCAN_CCCR_ASM_Pos                     _UINT32_(2)                                          /* (MCAN_CCCR) Restricted Operation Mode (read/write, write protection against '1') Position */
#define MCAN_CCCR_ASM_Msk                     (_UINT32_(0x1) << MCAN_CCCR_ASM_Pos)                 /* (MCAN_CCCR) Restricted Operation Mode (read/write, write protection against '1') Mask */
#define MCAN_CCCR_ASM(value)                  (MCAN_CCCR_ASM_Msk & (_UINT32_(value) << MCAN_CCCR_ASM_Pos)) /* Assignment of value for ASM in the MCAN_CCCR register */
#define   MCAN_CCCR_ASM_NORMAL_Val            _UINT32_(0x0)                                        /* (MCAN_CCCR) Normal CAN operation.  */
#define   MCAN_CCCR_ASM_RESTRICTED_Val        _UINT32_(0x1)                                        /* (MCAN_CCCR) Restricted Operation mode active.  */
#define MCAN_CCCR_ASM_NORMAL                  (MCAN_CCCR_ASM_NORMAL_Val << MCAN_CCCR_ASM_Pos)      /* (MCAN_CCCR) Normal CAN operation. Position */
#define MCAN_CCCR_ASM_RESTRICTED              (MCAN_CCCR_ASM_RESTRICTED_Val << MCAN_CCCR_ASM_Pos)  /* (MCAN_CCCR) Restricted Operation mode active. Position */
#define MCAN_CCCR_CSA_Pos                     _UINT32_(3)                                          /* (MCAN_CCCR) Clock Stop Acknowledge (read-only) Position */
#define MCAN_CCCR_CSA_Msk                     (_UINT32_(0x1) << MCAN_CCCR_CSA_Pos)                 /* (MCAN_CCCR) Clock Stop Acknowledge (read-only) Mask */
#define MCAN_CCCR_CSA(value)                  (MCAN_CCCR_CSA_Msk & (_UINT32_(value) << MCAN_CCCR_CSA_Pos)) /* Assignment of value for CSA in the MCAN_CCCR register */
#define   MCAN_CCCR_CSA_0_Val                 _UINT32_(0x0)                                        /* (MCAN_CCCR) No clock stop acknowledged.  */
#define   MCAN_CCCR_CSA_1_Val                 _UINT32_(0x1)                                        /* (MCAN_CCCR) MCAN may be set in power down by stopping the peripheral clock and the CAN core clock.  */
#define MCAN_CCCR_CSA_0                       (MCAN_CCCR_CSA_0_Val << MCAN_CCCR_CSA_Pos)           /* (MCAN_CCCR) No clock stop acknowledged. Position */
#define MCAN_CCCR_CSA_1                       (MCAN_CCCR_CSA_1_Val << MCAN_CCCR_CSA_Pos)           /* (MCAN_CCCR) MCAN may be set in power down by stopping the peripheral clock and the CAN core clock. Position */
#define MCAN_CCCR_CSR_Pos                     _UINT32_(4)                                          /* (MCAN_CCCR) Clock Stop Request (read/write) Position */
#define MCAN_CCCR_CSR_Msk                     (_UINT32_(0x1) << MCAN_CCCR_CSR_Pos)                 /* (MCAN_CCCR) Clock Stop Request (read/write) Mask */
#define MCAN_CCCR_CSR(value)                  (MCAN_CCCR_CSR_Msk & (_UINT32_(value) << MCAN_CCCR_CSR_Pos)) /* Assignment of value for CSR in the MCAN_CCCR register */
#define   MCAN_CCCR_CSR_NO_CLOCK_STOP_Val     _UINT32_(0x0)                                        /* (MCAN_CCCR) No clock stop is requested.  */
#define   MCAN_CCCR_CSR_CLOCK_STOP_Val        _UINT32_(0x1)                                        /* (MCAN_CCCR) Clock stop requested. When clock stop is requested, first INIT and then CSA will be set after all pending transfer requests have been completed and the CAN bus reached idle.  */
#define MCAN_CCCR_CSR_NO_CLOCK_STOP           (MCAN_CCCR_CSR_NO_CLOCK_STOP_Val << MCAN_CCCR_CSR_Pos) /* (MCAN_CCCR) No clock stop is requested. Position */
#define MCAN_CCCR_CSR_CLOCK_STOP              (MCAN_CCCR_CSR_CLOCK_STOP_Val << MCAN_CCCR_CSR_Pos)  /* (MCAN_CCCR) Clock stop requested. When clock stop is requested, first INIT and then CSA will be set after all pending transfer requests have been completed and the CAN bus reached idle. Position */
#define MCAN_CCCR_MON_Pos                     _UINT32_(5)                                          /* (MCAN_CCCR) Bus Monitoring Mode (read/write, write protection against '1') Position */
#define MCAN_CCCR_MON_Msk                     (_UINT32_(0x1) << MCAN_CCCR_MON_Pos)                 /* (MCAN_CCCR) Bus Monitoring Mode (read/write, write protection against '1') Mask */
#define MCAN_CCCR_MON(value)                  (MCAN_CCCR_MON_Msk & (_UINT32_(value) << MCAN_CCCR_MON_Pos)) /* Assignment of value for MON in the MCAN_CCCR register */
#define   MCAN_CCCR_MON_DISABLED_Val          _UINT32_(0x0)                                        /* (MCAN_CCCR) Bus Monitoring mode is disabled.  */
#define   MCAN_CCCR_MON_ENABLED_Val           _UINT32_(0x1)                                        /* (MCAN_CCCR) Bus Monitoring mode is enabled.  */
#define MCAN_CCCR_MON_DISABLED                (MCAN_CCCR_MON_DISABLED_Val << MCAN_CCCR_MON_Pos)    /* (MCAN_CCCR) Bus Monitoring mode is disabled. Position */
#define MCAN_CCCR_MON_ENABLED                 (MCAN_CCCR_MON_ENABLED_Val << MCAN_CCCR_MON_Pos)     /* (MCAN_CCCR) Bus Monitoring mode is enabled. Position */
#define MCAN_CCCR_DAR_Pos                     _UINT32_(6)                                          /* (MCAN_CCCR) Disable Automatic Retransmission (read/write, write protection) Position */
#define MCAN_CCCR_DAR_Msk                     (_UINT32_(0x1) << MCAN_CCCR_DAR_Pos)                 /* (MCAN_CCCR) Disable Automatic Retransmission (read/write, write protection) Mask */
#define MCAN_CCCR_DAR(value)                  (MCAN_CCCR_DAR_Msk & (_UINT32_(value) << MCAN_CCCR_DAR_Pos)) /* Assignment of value for DAR in the MCAN_CCCR register */
#define   MCAN_CCCR_DAR_AUTO_RETX_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) Automatic retransmission of messages not transmitted successfully enabled.  */
#define   MCAN_CCCR_DAR_NO_AUTO_RETX_Val      _UINT32_(0x1)                                        /* (MCAN_CCCR) Automatic retransmission disabled.  */
#define MCAN_CCCR_DAR_AUTO_RETX               (MCAN_CCCR_DAR_AUTO_RETX_Val << MCAN_CCCR_DAR_Pos)   /* (MCAN_CCCR) Automatic retransmission of messages not transmitted successfully enabled. Position */
#define MCAN_CCCR_DAR_NO_AUTO_RETX            (MCAN_CCCR_DAR_NO_AUTO_RETX_Val << MCAN_CCCR_DAR_Pos) /* (MCAN_CCCR) Automatic retransmission disabled. Position */
#define MCAN_CCCR_TEST_Pos                    _UINT32_(7)                                          /* (MCAN_CCCR) Test Mode Enable (read/write, write protection against '1') Position */
#define MCAN_CCCR_TEST_Msk                    (_UINT32_(0x1) << MCAN_CCCR_TEST_Pos)                /* (MCAN_CCCR) Test Mode Enable (read/write, write protection against '1') Mask */
#define MCAN_CCCR_TEST(value)                 (MCAN_CCCR_TEST_Msk & (_UINT32_(value) << MCAN_CCCR_TEST_Pos)) /* Assignment of value for TEST in the MCAN_CCCR register */
#define   MCAN_CCCR_TEST_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) Normal operation, MCAN_TEST register holds reset values.  */
#define   MCAN_CCCR_TEST_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_CCCR) Test mode, write access to MCAN_TEST register enabled.  */
#define MCAN_CCCR_TEST_DISABLED               (MCAN_CCCR_TEST_DISABLED_Val << MCAN_CCCR_TEST_Pos)  /* (MCAN_CCCR) Normal operation, MCAN_TEST register holds reset values. Position */
#define MCAN_CCCR_TEST_ENABLED                (MCAN_CCCR_TEST_ENABLED_Val << MCAN_CCCR_TEST_Pos)   /* (MCAN_CCCR) Test mode, write access to MCAN_TEST register enabled. Position */
#define MCAN_CCCR_FDOE_Pos                    _UINT32_(8)                                          /* (MCAN_CCCR) CAN FD Operation Enable (read/write, write protection) Position */
#define MCAN_CCCR_FDOE_Msk                    (_UINT32_(0x1) << MCAN_CCCR_FDOE_Pos)                /* (MCAN_CCCR) CAN FD Operation Enable (read/write, write protection) Mask */
#define MCAN_CCCR_FDOE(value)                 (MCAN_CCCR_FDOE_Msk & (_UINT32_(value) << MCAN_CCCR_FDOE_Pos)) /* Assignment of value for FDOE in the MCAN_CCCR register */
#define   MCAN_CCCR_FDOE_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) FD operation disabled.  */
#define   MCAN_CCCR_FDOE_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_CCCR) FD operation enabled.  */
#define MCAN_CCCR_FDOE_DISABLED               (MCAN_CCCR_FDOE_DISABLED_Val << MCAN_CCCR_FDOE_Pos)  /* (MCAN_CCCR) FD operation disabled. Position */
#define MCAN_CCCR_FDOE_ENABLED                (MCAN_CCCR_FDOE_ENABLED_Val << MCAN_CCCR_FDOE_Pos)   /* (MCAN_CCCR) FD operation enabled. Position */
#define MCAN_CCCR_BRSE_Pos                    _UINT32_(9)                                          /* (MCAN_CCCR) Bit Rate Switching Enable (read/write, write protection) Position */
#define MCAN_CCCR_BRSE_Msk                    (_UINT32_(0x1) << MCAN_CCCR_BRSE_Pos)                /* (MCAN_CCCR) Bit Rate Switching Enable (read/write, write protection) Mask */
#define MCAN_CCCR_BRSE(value)                 (MCAN_CCCR_BRSE_Msk & (_UINT32_(value) << MCAN_CCCR_BRSE_Pos)) /* Assignment of value for BRSE in the MCAN_CCCR register */
#define   MCAN_CCCR_BRSE_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) Bit rate switching for transmissions disabled.  */
#define   MCAN_CCCR_BRSE_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_CCCR) Bit rate switching for transmissions enabled.  */
#define MCAN_CCCR_BRSE_DISABLED               (MCAN_CCCR_BRSE_DISABLED_Val << MCAN_CCCR_BRSE_Pos)  /* (MCAN_CCCR) Bit rate switching for transmissions disabled. Position */
#define MCAN_CCCR_BRSE_ENABLED                (MCAN_CCCR_BRSE_ENABLED_Val << MCAN_CCCR_BRSE_Pos)   /* (MCAN_CCCR) Bit rate switching for transmissions enabled. Position */
#define MCAN_CCCR_UTSU_Pos                    _UINT32_(10)                                         /* (MCAN_CCCR) Use Timestamping Unit (read/write, write protection) Position */
#define MCAN_CCCR_UTSU_Msk                    (_UINT32_(0x1) << MCAN_CCCR_UTSU_Pos)                /* (MCAN_CCCR) Use Timestamping Unit (read/write, write protection) Mask */
#define MCAN_CCCR_UTSU(value)                 (MCAN_CCCR_UTSU_Msk & (_UINT32_(value) << MCAN_CCCR_UTSU_Pos)) /* Assignment of value for UTSU in the MCAN_CCCR register */
#define   MCAN_CCCR_UTSU_DISABLED_Val         _UINT32_(0x0)                                        /* (MCAN_CCCR) Internal timestamping.  */
#define   MCAN_CCCR_UTSU_ENABLED_Val          _UINT32_(0x1)                                        /* (MCAN_CCCR) External timestamping by TSU.  */
#define MCAN_CCCR_UTSU_DISABLED               (MCAN_CCCR_UTSU_DISABLED_Val << MCAN_CCCR_UTSU_Pos)  /* (MCAN_CCCR) Internal timestamping. Position */
#define MCAN_CCCR_UTSU_ENABLED                (MCAN_CCCR_UTSU_ENABLED_Val << MCAN_CCCR_UTSU_Pos)   /* (MCAN_CCCR) External timestamping by TSU. Position */
#define MCAN_CCCR_WMM_Pos                     _UINT32_(11)                                         /* (MCAN_CCCR) Wide Message Marker (read/write, write protection) Position */
#define MCAN_CCCR_WMM_Msk                     (_UINT32_(0x1) << MCAN_CCCR_WMM_Pos)                 /* (MCAN_CCCR) Wide Message Marker (read/write, write protection) Mask */
#define MCAN_CCCR_WMM(value)                  (MCAN_CCCR_WMM_Msk & (_UINT32_(value) << MCAN_CCCR_WMM_Pos)) /* Assignment of value for WMM in the MCAN_CCCR register */
#define   MCAN_CCCR_WMM_DISABLED_Val          _UINT32_(0x0)                                        /* (MCAN_CCCR) 8-bit message marker is used.  */
#define   MCAN_CCCR_WMM_ENABLED_Val           _UINT32_(0x1)                                        /* (MCAN_CCCR) 16-bit message marker is used, replacing 16-bit timestamps in TX Event FIFO.  */
#define MCAN_CCCR_WMM_DISABLED                (MCAN_CCCR_WMM_DISABLED_Val << MCAN_CCCR_WMM_Pos)    /* (MCAN_CCCR) 8-bit message marker is used. Position */
#define MCAN_CCCR_WMM_ENABLED                 (MCAN_CCCR_WMM_ENABLED_Val << MCAN_CCCR_WMM_Pos)     /* (MCAN_CCCR) 16-bit message marker is used, replacing 16-bit timestamps in TX Event FIFO. Position */
#define MCAN_CCCR_PXHD_Pos                    _UINT32_(12)                                         /* (MCAN_CCCR) Protocol Exception Event Handling (read/write, write protection) Position */
#define MCAN_CCCR_PXHD_Msk                    (_UINT32_(0x1) << MCAN_CCCR_PXHD_Pos)                /* (MCAN_CCCR) Protocol Exception Event Handling (read/write, write protection) Mask */
#define MCAN_CCCR_PXHD(value)                 (MCAN_CCCR_PXHD_Msk & (_UINT32_(value) << MCAN_CCCR_PXHD_Pos)) /* Assignment of value for PXHD in the MCAN_CCCR register */
#define   MCAN_CCCR_PXHD_0_Val                _UINT32_(0x0)                                        /* (MCAN_CCCR) Protocol exception handling enabled.  */
#define   MCAN_CCCR_PXHD_1_Val                _UINT32_(0x1)                                        /* (MCAN_CCCR) Protocol exception handling disabled.  */
#define MCAN_CCCR_PXHD_0                      (MCAN_CCCR_PXHD_0_Val << MCAN_CCCR_PXHD_Pos)         /* (MCAN_CCCR) Protocol exception handling enabled. Position */
#define MCAN_CCCR_PXHD_1                      (MCAN_CCCR_PXHD_1_Val << MCAN_CCCR_PXHD_Pos)         /* (MCAN_CCCR) Protocol exception handling disabled. Position */
#define MCAN_CCCR_EFBI_Pos                    _UINT32_(13)                                         /* (MCAN_CCCR) Edge Filtering during Bus Integration (read/write, write protection) Position */
#define MCAN_CCCR_EFBI_Msk                    (_UINT32_(0x1) << MCAN_CCCR_EFBI_Pos)                /* (MCAN_CCCR) Edge Filtering during Bus Integration (read/write, write protection) Mask */
#define MCAN_CCCR_EFBI(value)                 (MCAN_CCCR_EFBI_Msk & (_UINT32_(value) << MCAN_CCCR_EFBI_Pos)) /* Assignment of value for EFBI in the MCAN_CCCR register */
#define   MCAN_CCCR_EFBI_0_Val                _UINT32_(0x0)                                        /* (MCAN_CCCR) Edge filtering is disabled.  */
#define   MCAN_CCCR_EFBI_1_Val                _UINT32_(0x1)                                        /* (MCAN_CCCR) Edge filtering is enabled. Two consecutive dominant tq required to detect an edge for hard synchronization.  */
#define MCAN_CCCR_EFBI_0                      (MCAN_CCCR_EFBI_0_Val << MCAN_CCCR_EFBI_Pos)         /* (MCAN_CCCR) Edge filtering is disabled. Position */
#define MCAN_CCCR_EFBI_1                      (MCAN_CCCR_EFBI_1_Val << MCAN_CCCR_EFBI_Pos)         /* (MCAN_CCCR) Edge filtering is enabled. Two consecutive dominant tq required to detect an edge for hard synchronization. Position */
#define MCAN_CCCR_TXP_Pos                     _UINT32_(14)                                         /* (MCAN_CCCR) Transmit Pause (read/write, write protection) Position */
#define MCAN_CCCR_TXP_Msk                     (_UINT32_(0x1) << MCAN_CCCR_TXP_Pos)                 /* (MCAN_CCCR) Transmit Pause (read/write, write protection) Mask */
#define MCAN_CCCR_TXP(value)                  (MCAN_CCCR_TXP_Msk & (_UINT32_(value) << MCAN_CCCR_TXP_Pos)) /* Assignment of value for TXP in the MCAN_CCCR register */
#define   MCAN_CCCR_TXP_0_Val                 _UINT32_(0x0)                                        /* (MCAN_CCCR) Transmit pause disabled.  */
#define   MCAN_CCCR_TXP_1_Val                 _UINT32_(0x1)                                        /* (MCAN_CCCR) Transmit pause enabled.  */
#define MCAN_CCCR_TXP_0                       (MCAN_CCCR_TXP_0_Val << MCAN_CCCR_TXP_Pos)           /* (MCAN_CCCR) Transmit pause disabled. Position */
#define MCAN_CCCR_TXP_1                       (MCAN_CCCR_TXP_1_Val << MCAN_CCCR_TXP_Pos)           /* (MCAN_CCCR) Transmit pause enabled. Position */
#define MCAN_CCCR_NISO_Pos                    _UINT32_(15)                                         /* (MCAN_CCCR) Non-ISO Operation Position */
#define MCAN_CCCR_NISO_Msk                    (_UINT32_(0x1) << MCAN_CCCR_NISO_Pos)                /* (MCAN_CCCR) Non-ISO Operation Mask */
#define MCAN_CCCR_NISO(value)                 (MCAN_CCCR_NISO_Msk & (_UINT32_(value) << MCAN_CCCR_NISO_Pos)) /* Assignment of value for NISO in the MCAN_CCCR register */
#define   MCAN_CCCR_NISO_0_Val                _UINT32_(0x0)                                        /* (MCAN_CCCR) CAN FD frame format according to ISO11898-1 (default).  */
#define   MCAN_CCCR_NISO_1_Val                _UINT32_(0x1)                                        /* (MCAN_CCCR) CAN FD frame format according to Bosch CAN FD Specification V1.0.  */
#define MCAN_CCCR_NISO_0                      (MCAN_CCCR_NISO_0_Val << MCAN_CCCR_NISO_Pos)         /* (MCAN_CCCR) CAN FD frame format according to ISO11898-1 (default). Position */
#define MCAN_CCCR_NISO_1                      (MCAN_CCCR_NISO_1_Val << MCAN_CCCR_NISO_Pos)         /* (MCAN_CCCR) CAN FD frame format according to Bosch CAN FD Specification V1.0. Position */
#define MCAN_CCCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (MCAN_CCCR) Register Mask  */


/* -------- MCAN_NBTP : (MCAN Offset: 0x1C) (R/W 32) Nominal Bit Timing and Prescaler Register -------- */
#define MCAN_NBTP_RESETVALUE                  _UINT32_(0x6000A03)                                  /*  (MCAN_NBTP) Nominal Bit Timing and Prescaler Register  Reset Value */

#define MCAN_NBTP_NTSEG2_Pos                  _UINT32_(0)                                          /* (MCAN_NBTP) Nominal Time Segment After Sample Point Position */
#define MCAN_NBTP_NTSEG2_Msk                  (_UINT32_(0x7F) << MCAN_NBTP_NTSEG2_Pos)             /* (MCAN_NBTP) Nominal Time Segment After Sample Point Mask */
#define MCAN_NBTP_NTSEG2(value)               (MCAN_NBTP_NTSEG2_Msk & (_UINT32_(value) << MCAN_NBTP_NTSEG2_Pos)) /* Assignment of value for NTSEG2 in the MCAN_NBTP register */
#define MCAN_NBTP_NTSEG1_Pos                  _UINT32_(8)                                          /* (MCAN_NBTP) Nominal Time Segment Before Sample Point Position */
#define MCAN_NBTP_NTSEG1_Msk                  (_UINT32_(0xFF) << MCAN_NBTP_NTSEG1_Pos)             /* (MCAN_NBTP) Nominal Time Segment Before Sample Point Mask */
#define MCAN_NBTP_NTSEG1(value)               (MCAN_NBTP_NTSEG1_Msk & (_UINT32_(value) << MCAN_NBTP_NTSEG1_Pos)) /* Assignment of value for NTSEG1 in the MCAN_NBTP register */
#define   MCAN_NBTP_NTSEG1_0_Val              _UINT32_(0x0)                                        /* (MCAN_NBTP) Forbidden.  */
#define MCAN_NBTP_NTSEG1_0                    (MCAN_NBTP_NTSEG1_0_Val << MCAN_NBTP_NTSEG1_Pos)     /* (MCAN_NBTP) Forbidden. Position */
#define MCAN_NBTP_NBRP_Pos                    _UINT32_(16)                                         /* (MCAN_NBTP) Nominal Bit Rate Prescaler Position */
#define MCAN_NBTP_NBRP_Msk                    (_UINT32_(0x1FF) << MCAN_NBTP_NBRP_Pos)              /* (MCAN_NBTP) Nominal Bit Rate Prescaler Mask */
#define MCAN_NBTP_NBRP(value)                 (MCAN_NBTP_NBRP_Msk & (_UINT32_(value) << MCAN_NBTP_NBRP_Pos)) /* Assignment of value for NBRP in the MCAN_NBTP register */
#define MCAN_NBTP_NSJW_Pos                    _UINT32_(25)                                         /* (MCAN_NBTP) Nominal (Re) Synchronization Jump Width Position */
#define MCAN_NBTP_NSJW_Msk                    (_UINT32_(0x7F) << MCAN_NBTP_NSJW_Pos)               /* (MCAN_NBTP) Nominal (Re) Synchronization Jump Width Mask */
#define MCAN_NBTP_NSJW(value)                 (MCAN_NBTP_NSJW_Msk & (_UINT32_(value) << MCAN_NBTP_NSJW_Pos)) /* Assignment of value for NSJW in the MCAN_NBTP register */
#define MCAN_NBTP_Msk                         _UINT32_(0xFFFFFF7F)                                 /* (MCAN_NBTP) Register Mask  */


/* -------- MCAN_TSCC : (MCAN Offset: 0x20) (R/W 32) Timestamp Counter Configuration Register -------- */
#define MCAN_TSCC_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_TSCC) Timestamp Counter Configuration Register  Reset Value */

#define MCAN_TSCC_TSS_Pos                     _UINT32_(0)                                          /* (MCAN_TSCC) Timestamp Select Position */
#define MCAN_TSCC_TSS_Msk                     (_UINT32_(0x3) << MCAN_TSCC_TSS_Pos)                 /* (MCAN_TSCC) Timestamp Select Mask */
#define MCAN_TSCC_TSS(value)                  (MCAN_TSCC_TSS_Msk & (_UINT32_(value) << MCAN_TSCC_TSS_Pos)) /* Assignment of value for TSS in the MCAN_TSCC register */
#define   MCAN_TSCC_TSS_ALWAYS_0_Val          _UINT32_(0x0)                                        /* (MCAN_TSCC) Timestamp counter value always 0x0000  */
#define   MCAN_TSCC_TSS_TCP_INC_Val           _UINT32_(0x1)                                        /* (MCAN_TSCC) Timestamp counter value incremented according to TCP  */
#define   MCAN_TSCC_TSS_EXT_TIMESTAMP_Val     _UINT32_(0x2)                                        /* (MCAN_TSCC) External timestamp counter value used  */
#define   MCAN_TSCC_TSS_ALWAYS_0_a_Val        _UINT32_(0x3)                                        /* (MCAN_TSCC) Timestamp counter value always 0x0000  */
#define MCAN_TSCC_TSS_ALWAYS_0                (MCAN_TSCC_TSS_ALWAYS_0_Val << MCAN_TSCC_TSS_Pos)    /* (MCAN_TSCC) Timestamp counter value always 0x0000 Position */
#define MCAN_TSCC_TSS_TCP_INC                 (MCAN_TSCC_TSS_TCP_INC_Val << MCAN_TSCC_TSS_Pos)     /* (MCAN_TSCC) Timestamp counter value incremented according to TCP Position */
#define MCAN_TSCC_TSS_EXT_TIMESTAMP           (MCAN_TSCC_TSS_EXT_TIMESTAMP_Val << MCAN_TSCC_TSS_Pos) /* (MCAN_TSCC) External timestamp counter value used Position */
#define MCAN_TSCC_TSS_ALWAYS_0_a              (MCAN_TSCC_TSS_ALWAYS_0_a_Val << MCAN_TSCC_TSS_Pos)  /* (MCAN_TSCC) Timestamp counter value always 0x0000 Position */
#define MCAN_TSCC_TCP_Pos                     _UINT32_(16)                                         /* (MCAN_TSCC) Timestamp Counter Prescaler Position */
#define MCAN_TSCC_TCP_Msk                     (_UINT32_(0xF) << MCAN_TSCC_TCP_Pos)                 /* (MCAN_TSCC) Timestamp Counter Prescaler Mask */
#define MCAN_TSCC_TCP(value)                  (MCAN_TSCC_TCP_Msk & (_UINT32_(value) << MCAN_TSCC_TCP_Pos)) /* Assignment of value for TCP in the MCAN_TSCC register */
#define MCAN_TSCC_Msk                         _UINT32_(0x000F0003)                                 /* (MCAN_TSCC) Register Mask  */


/* -------- MCAN_TSCV : (MCAN Offset: 0x24) (R/W 32) Timestamp Counter Value Register -------- */
#define MCAN_TSCV_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_TSCV) Timestamp Counter Value Register  Reset Value */

#define MCAN_TSCV_TSC_Pos                     _UINT32_(0)                                          /* (MCAN_TSCV) Timestamp Counter (cleared on write) Position */
#define MCAN_TSCV_TSC_Msk                     (_UINT32_(0xFFFF) << MCAN_TSCV_TSC_Pos)              /* (MCAN_TSCV) Timestamp Counter (cleared on write) Mask */
#define MCAN_TSCV_TSC(value)                  (MCAN_TSCV_TSC_Msk & (_UINT32_(value) << MCAN_TSCV_TSC_Pos)) /* Assignment of value for TSC in the MCAN_TSCV register */
#define MCAN_TSCV_Msk                         _UINT32_(0x0000FFFF)                                 /* (MCAN_TSCV) Register Mask  */


/* -------- MCAN_TOCC : (MCAN Offset: 0x28) (R/W 32) Timeout Counter Configuration Register -------- */
#define MCAN_TOCC_RESETVALUE                  _UINT32_(0xFFFF0000)                                 /*  (MCAN_TOCC) Timeout Counter Configuration Register  Reset Value */

#define MCAN_TOCC_ETOC_Pos                    _UINT32_(0)                                          /* (MCAN_TOCC) Enable Timeout Counter Position */
#define MCAN_TOCC_ETOC_Msk                    (_UINT32_(0x1) << MCAN_TOCC_ETOC_Pos)                /* (MCAN_TOCC) Enable Timeout Counter Mask */
#define MCAN_TOCC_ETOC(value)                 (MCAN_TOCC_ETOC_Msk & (_UINT32_(value) << MCAN_TOCC_ETOC_Pos)) /* Assignment of value for ETOC in the MCAN_TOCC register */
#define   MCAN_TOCC_ETOC_NO_TIMEOUT_Val       _UINT32_(0x0)                                        /* (MCAN_TOCC) Timeout Counter disabled.  */
#define   MCAN_TOCC_ETOC_TOS_CONTROLLED_Val   _UINT32_(0x1)                                        /* (MCAN_TOCC) Timeout Counter enabled.  */
#define MCAN_TOCC_ETOC_NO_TIMEOUT             (MCAN_TOCC_ETOC_NO_TIMEOUT_Val << MCAN_TOCC_ETOC_Pos) /* (MCAN_TOCC) Timeout Counter disabled. Position */
#define MCAN_TOCC_ETOC_TOS_CONTROLLED         (MCAN_TOCC_ETOC_TOS_CONTROLLED_Val << MCAN_TOCC_ETOC_Pos) /* (MCAN_TOCC) Timeout Counter enabled. Position */
#define MCAN_TOCC_TOS_Pos                     _UINT32_(1)                                          /* (MCAN_TOCC) Timeout Select Position */
#define MCAN_TOCC_TOS_Msk                     (_UINT32_(0x3) << MCAN_TOCC_TOS_Pos)                 /* (MCAN_TOCC) Timeout Select Mask */
#define MCAN_TOCC_TOS(value)                  (MCAN_TOCC_TOS_Msk & (_UINT32_(value) << MCAN_TOCC_TOS_Pos)) /* Assignment of value for TOS in the MCAN_TOCC register */
#define   MCAN_TOCC_TOS_CONTINUOUS_Val        _UINT32_(0x0)                                        /* (MCAN_TOCC) Continuous operation  */
#define   MCAN_TOCC_TOS_TX_EV_TIMEOUT_Val     _UINT32_(0x1)                                        /* (MCAN_TOCC) Timeout controlled by Tx Event FIFO  */
#define   MCAN_TOCC_TOS_RX0_EV_TIMEOUT_Val    _UINT32_(0x2)                                        /* (MCAN_TOCC) Timeout controlled by Receive FIFO 0  */
#define   MCAN_TOCC_TOS_RX1_EV_TIMEOUT_Val    _UINT32_(0x3)                                        /* (MCAN_TOCC) Timeout controlled by Receive FIFO 1  */
#define MCAN_TOCC_TOS_CONTINUOUS              (MCAN_TOCC_TOS_CONTINUOUS_Val << MCAN_TOCC_TOS_Pos)  /* (MCAN_TOCC) Continuous operation Position */
#define MCAN_TOCC_TOS_TX_EV_TIMEOUT           (MCAN_TOCC_TOS_TX_EV_TIMEOUT_Val << MCAN_TOCC_TOS_Pos) /* (MCAN_TOCC) Timeout controlled by Tx Event FIFO Position */
#define MCAN_TOCC_TOS_RX0_EV_TIMEOUT          (MCAN_TOCC_TOS_RX0_EV_TIMEOUT_Val << MCAN_TOCC_TOS_Pos) /* (MCAN_TOCC) Timeout controlled by Receive FIFO 0 Position */
#define MCAN_TOCC_TOS_RX1_EV_TIMEOUT          (MCAN_TOCC_TOS_RX1_EV_TIMEOUT_Val << MCAN_TOCC_TOS_Pos) /* (MCAN_TOCC) Timeout controlled by Receive FIFO 1 Position */
#define MCAN_TOCC_TOP_Pos                     _UINT32_(16)                                         /* (MCAN_TOCC) Timeout Period Position */
#define MCAN_TOCC_TOP_Msk                     (_UINT32_(0xFFFF) << MCAN_TOCC_TOP_Pos)              /* (MCAN_TOCC) Timeout Period Mask */
#define MCAN_TOCC_TOP(value)                  (MCAN_TOCC_TOP_Msk & (_UINT32_(value) << MCAN_TOCC_TOP_Pos)) /* Assignment of value for TOP in the MCAN_TOCC register */
#define MCAN_TOCC_Msk                         _UINT32_(0xFFFF0007)                                 /* (MCAN_TOCC) Register Mask  */


/* -------- MCAN_TOCV : (MCAN Offset: 0x2C) (R/W 32) Timeout Counter Value Register -------- */
#define MCAN_TOCV_RESETVALUE                  _UINT32_(0xFFFF)                                     /*  (MCAN_TOCV) Timeout Counter Value Register  Reset Value */

#define MCAN_TOCV_TOC_Pos                     _UINT32_(0)                                          /* (MCAN_TOCV) Timeout Counter (cleared on write) Position */
#define MCAN_TOCV_TOC_Msk                     (_UINT32_(0xFFFF) << MCAN_TOCV_TOC_Pos)              /* (MCAN_TOCV) Timeout Counter (cleared on write) Mask */
#define MCAN_TOCV_TOC(value)                  (MCAN_TOCV_TOC_Msk & (_UINT32_(value) << MCAN_TOCV_TOC_Pos)) /* Assignment of value for TOC in the MCAN_TOCV register */
#define MCAN_TOCV_Msk                         _UINT32_(0x0000FFFF)                                 /* (MCAN_TOCV) Register Mask  */


/* -------- MCAN_ECR : (MCAN Offset: 0x40) ( R/ 32) Error Counter Register -------- */
#define MCAN_ECR_RESETVALUE                   _UINT32_(0x00)                                       /*  (MCAN_ECR) Error Counter Register  Reset Value */

#define MCAN_ECR_TEC_Pos                      _UINT32_(0)                                          /* (MCAN_ECR) Transmit Error Counter Position */
#define MCAN_ECR_TEC_Msk                      (_UINT32_(0xFF) << MCAN_ECR_TEC_Pos)                 /* (MCAN_ECR) Transmit Error Counter Mask */
#define MCAN_ECR_TEC(value)                   (MCAN_ECR_TEC_Msk & (_UINT32_(value) << MCAN_ECR_TEC_Pos)) /* Assignment of value for TEC in the MCAN_ECR register */
#define MCAN_ECR_REC_Pos                      _UINT32_(8)                                          /* (MCAN_ECR) Receive Error Counter Position */
#define MCAN_ECR_REC_Msk                      (_UINT32_(0x7F) << MCAN_ECR_REC_Pos)                 /* (MCAN_ECR) Receive Error Counter Mask */
#define MCAN_ECR_REC(value)                   (MCAN_ECR_REC_Msk & (_UINT32_(value) << MCAN_ECR_REC_Pos)) /* Assignment of value for REC in the MCAN_ECR register */
#define MCAN_ECR_RP_Pos                       _UINT32_(15)                                         /* (MCAN_ECR) Receive Error Passive Position */
#define MCAN_ECR_RP_Msk                       (_UINT32_(0x1) << MCAN_ECR_RP_Pos)                   /* (MCAN_ECR) Receive Error Passive Mask */
#define MCAN_ECR_RP(value)                    (MCAN_ECR_RP_Msk & (_UINT32_(value) << MCAN_ECR_RP_Pos)) /* Assignment of value for RP in the MCAN_ECR register */
#define   MCAN_ECR_RP_0_Val                   _UINT32_(0x0)                                        /* (MCAN_ECR) The Receive Error Counter is below the error passive level of 128.  */
#define   MCAN_ECR_RP_1_Val                   _UINT32_(0x1)                                        /* (MCAN_ECR) The Receive Error Counter has reached the error passive level of 128.  */
#define MCAN_ECR_RP_0                         (MCAN_ECR_RP_0_Val << MCAN_ECR_RP_Pos)               /* (MCAN_ECR) The Receive Error Counter is below the error passive level of 128. Position */
#define MCAN_ECR_RP_1                         (MCAN_ECR_RP_1_Val << MCAN_ECR_RP_Pos)               /* (MCAN_ECR) The Receive Error Counter has reached the error passive level of 128. Position */
#define MCAN_ECR_CEL_Pos                      _UINT32_(16)                                         /* (MCAN_ECR) CAN Error Logging (cleared on read) Position */
#define MCAN_ECR_CEL_Msk                      (_UINT32_(0xFF) << MCAN_ECR_CEL_Pos)                 /* (MCAN_ECR) CAN Error Logging (cleared on read) Mask */
#define MCAN_ECR_CEL(value)                   (MCAN_ECR_CEL_Msk & (_UINT32_(value) << MCAN_ECR_CEL_Pos)) /* Assignment of value for CEL in the MCAN_ECR register */
#define MCAN_ECR_Msk                          _UINT32_(0x00FFFFFF)                                 /* (MCAN_ECR) Register Mask  */


/* -------- MCAN_PSR : (MCAN Offset: 0x44) ( R/ 32) Protocol Status Register -------- */
#define MCAN_PSR_RESETVALUE                   _UINT32_(0x707)                                      /*  (MCAN_PSR) Protocol Status Register  Reset Value */

#define MCAN_PSR_LEC_Pos                      _UINT32_(0)                                          /* (MCAN_PSR) Last Error Code (set to 111 on read) Position */
#define MCAN_PSR_LEC_Msk                      (_UINT32_(0x7) << MCAN_PSR_LEC_Pos)                  /* (MCAN_PSR) Last Error Code (set to 111 on read) Mask */
#define MCAN_PSR_LEC(value)                   (MCAN_PSR_LEC_Msk & (_UINT32_(value) << MCAN_PSR_LEC_Pos)) /* Assignment of value for LEC in the MCAN_PSR register */
#define   MCAN_PSR_LEC_NO_ERROR_Val           _UINT32_(0x0)                                        /* (MCAN_PSR) No error occurred since LEC has been reset by successful reception or transmission.  */
#define   MCAN_PSR_LEC_STUFF_ERROR_Val        _UINT32_(0x1)                                        /* (MCAN_PSR) More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed.  */
#define   MCAN_PSR_LEC_FORM_ERROR_Val         _UINT32_(0x2)                                        /* (MCAN_PSR) A fixed format part of a received frame has the wrong format.  */
#define   MCAN_PSR_LEC_ACK_ERROR_Val          _UINT32_(0x3)                                        /* (MCAN_PSR) The message transmitted by the MCAN was not acknowledged by another node.  */
#define   MCAN_PSR_LEC_BIT1_ERROR_Val         _UINT32_(0x4)                                        /* (MCAN_PSR) During transmission of a message (with the exception of the arbitration field), the device tried to send a recessive level (bit of logical value '1'), but the monitored bus value was dominant.  */
#define   MCAN_PSR_LEC_BIT0_ERROR_Val         _UINT32_(0x5)                                        /* (MCAN_PSR) During transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device tried to send a dominant level (data or identifier bit logical value '0'), but the monitored bus value was recessive. During Bus_Off recovery, this status is set each time a sequence of 11 recessive bits has been monitored. This enables the processor to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed).  */
#define   MCAN_PSR_LEC_CRC_ERROR_Val          _UINT32_(0x6)                                        /* (MCAN_PSR) The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match the CRC calculated from the received data.  */
#define   MCAN_PSR_LEC_NO_CHANGE_Val          _UINT32_(0x7)                                        /* (MCAN_PSR) Any read access to the Protocol Status Register re-initializes the LEC to '7'. When the LEC shows value '7', no CAN bus event was detected since the last processor read access to the Protocol Status Register.  */
#define MCAN_PSR_LEC_NO_ERROR                 (MCAN_PSR_LEC_NO_ERROR_Val << MCAN_PSR_LEC_Pos)      /* (MCAN_PSR) No error occurred since LEC has been reset by successful reception or transmission. Position */
#define MCAN_PSR_LEC_STUFF_ERROR              (MCAN_PSR_LEC_STUFF_ERROR_Val << MCAN_PSR_LEC_Pos)   /* (MCAN_PSR) More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed. Position */
#define MCAN_PSR_LEC_FORM_ERROR               (MCAN_PSR_LEC_FORM_ERROR_Val << MCAN_PSR_LEC_Pos)    /* (MCAN_PSR) A fixed format part of a received frame has the wrong format. Position */
#define MCAN_PSR_LEC_ACK_ERROR                (MCAN_PSR_LEC_ACK_ERROR_Val << MCAN_PSR_LEC_Pos)     /* (MCAN_PSR) The message transmitted by the MCAN was not acknowledged by another node. Position */
#define MCAN_PSR_LEC_BIT1_ERROR               (MCAN_PSR_LEC_BIT1_ERROR_Val << MCAN_PSR_LEC_Pos)    /* (MCAN_PSR) During transmission of a message (with the exception of the arbitration field), the device tried to send a recessive level (bit of logical value '1'), but the monitored bus value was dominant. Position */
#define MCAN_PSR_LEC_BIT0_ERROR               (MCAN_PSR_LEC_BIT0_ERROR_Val << MCAN_PSR_LEC_Pos)    /* (MCAN_PSR) During transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device tried to send a dominant level (data or identifier bit logical value '0'), but the monitored bus value was recessive. During Bus_Off recovery, this status is set each time a sequence of 11 recessive bits has been monitored. This enables the processor to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). Position */
#define MCAN_PSR_LEC_CRC_ERROR                (MCAN_PSR_LEC_CRC_ERROR_Val << MCAN_PSR_LEC_Pos)     /* (MCAN_PSR) The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match the CRC calculated from the received data. Position */
#define MCAN_PSR_LEC_NO_CHANGE                (MCAN_PSR_LEC_NO_CHANGE_Val << MCAN_PSR_LEC_Pos)     /* (MCAN_PSR) Any read access to the Protocol Status Register re-initializes the LEC to '7'. When the LEC shows value '7', no CAN bus event was detected since the last processor read access to the Protocol Status Register. Position */
#define MCAN_PSR_ACT_Pos                      _UINT32_(3)                                          /* (MCAN_PSR) Activity Position */
#define MCAN_PSR_ACT_Msk                      (_UINT32_(0x3) << MCAN_PSR_ACT_Pos)                  /* (MCAN_PSR) Activity Mask */
#define MCAN_PSR_ACT(value)                   (MCAN_PSR_ACT_Msk & (_UINT32_(value) << MCAN_PSR_ACT_Pos)) /* Assignment of value for ACT in the MCAN_PSR register */
#define   MCAN_PSR_ACT_SYNCHRONIZING_Val      _UINT32_(0x0)                                        /* (MCAN_PSR) Node is synchronizing on CAN communication  */
#define   MCAN_PSR_ACT_IDLE_Val               _UINT32_(0x1)                                        /* (MCAN_PSR) Node is neither receiver nor transmitter  */
#define   MCAN_PSR_ACT_RECEIVER_Val           _UINT32_(0x2)                                        /* (MCAN_PSR) Node is operating as receiver  */
#define   MCAN_PSR_ACT_TRANSMITTER_Val        _UINT32_(0x3)                                        /* (MCAN_PSR) Node is operating as transmitter  */
#define MCAN_PSR_ACT_SYNCHRONIZING            (MCAN_PSR_ACT_SYNCHRONIZING_Val << MCAN_PSR_ACT_Pos) /* (MCAN_PSR) Node is synchronizing on CAN communication Position */
#define MCAN_PSR_ACT_IDLE                     (MCAN_PSR_ACT_IDLE_Val << MCAN_PSR_ACT_Pos)          /* (MCAN_PSR) Node is neither receiver nor transmitter Position */
#define MCAN_PSR_ACT_RECEIVER                 (MCAN_PSR_ACT_RECEIVER_Val << MCAN_PSR_ACT_Pos)      /* (MCAN_PSR) Node is operating as receiver Position */
#define MCAN_PSR_ACT_TRANSMITTER              (MCAN_PSR_ACT_TRANSMITTER_Val << MCAN_PSR_ACT_Pos)   /* (MCAN_PSR) Node is operating as transmitter Position */
#define MCAN_PSR_EP_Pos                       _UINT32_(5)                                          /* (MCAN_PSR) Error Passive Position */
#define MCAN_PSR_EP_Msk                       (_UINT32_(0x1) << MCAN_PSR_EP_Pos)                   /* (MCAN_PSR) Error Passive Mask */
#define MCAN_PSR_EP(value)                    (MCAN_PSR_EP_Msk & (_UINT32_(value) << MCAN_PSR_EP_Pos)) /* Assignment of value for EP in the MCAN_PSR register */
#define   MCAN_PSR_EP_0_Val                   _UINT32_(0x0)                                        /* (MCAN_PSR) The MCAN is in the Error_Active state. It normally takes part in bus communication and sends an active error flag when an error has been detected.  */
#define   MCAN_PSR_EP_1_Val                   _UINT32_(0x1)                                        /* (MCAN_PSR) The MCAN is in the Error_Passive state.  */
#define MCAN_PSR_EP_0                         (MCAN_PSR_EP_0_Val << MCAN_PSR_EP_Pos)               /* (MCAN_PSR) The MCAN is in the Error_Active state. It normally takes part in bus communication and sends an active error flag when an error has been detected. Position */
#define MCAN_PSR_EP_1                         (MCAN_PSR_EP_1_Val << MCAN_PSR_EP_Pos)               /* (MCAN_PSR) The MCAN is in the Error_Passive state. Position */
#define MCAN_PSR_EW_Pos                       _UINT32_(6)                                          /* (MCAN_PSR) Warning Status Position */
#define MCAN_PSR_EW_Msk                       (_UINT32_(0x1) << MCAN_PSR_EW_Pos)                   /* (MCAN_PSR) Warning Status Mask */
#define MCAN_PSR_EW(value)                    (MCAN_PSR_EW_Msk & (_UINT32_(value) << MCAN_PSR_EW_Pos)) /* Assignment of value for EW in the MCAN_PSR register */
#define   MCAN_PSR_EW_0_Val                   _UINT32_(0x0)                                        /* (MCAN_PSR) Both error counters are below the Error_Warning limit of 96.  */
#define   MCAN_PSR_EW_1_Val                   _UINT32_(0x1)                                        /* (MCAN_PSR) At least one of error counter has reached the Error_Warning limit of 96.  */
#define MCAN_PSR_EW_0                         (MCAN_PSR_EW_0_Val << MCAN_PSR_EW_Pos)               /* (MCAN_PSR) Both error counters are below the Error_Warning limit of 96. Position */
#define MCAN_PSR_EW_1                         (MCAN_PSR_EW_1_Val << MCAN_PSR_EW_Pos)               /* (MCAN_PSR) At least one of error counter has reached the Error_Warning limit of 96. Position */
#define MCAN_PSR_BO_Pos                       _UINT32_(7)                                          /* (MCAN_PSR) Bus_Off Status Position */
#define MCAN_PSR_BO_Msk                       (_UINT32_(0x1) << MCAN_PSR_BO_Pos)                   /* (MCAN_PSR) Bus_Off Status Mask */
#define MCAN_PSR_BO(value)                    (MCAN_PSR_BO_Msk & (_UINT32_(value) << MCAN_PSR_BO_Pos)) /* Assignment of value for BO in the MCAN_PSR register */
#define   MCAN_PSR_BO_0_Val                   _UINT32_(0x0)                                        /* (MCAN_PSR) The MCAN is not Bus_Off.  */
#define   MCAN_PSR_BO_1_Val                   _UINT32_(0x1)                                        /* (MCAN_PSR) The MCAN is in Bus_Off state.  */
#define MCAN_PSR_BO_0                         (MCAN_PSR_BO_0_Val << MCAN_PSR_BO_Pos)               /* (MCAN_PSR) The MCAN is not Bus_Off. Position */
#define MCAN_PSR_BO_1                         (MCAN_PSR_BO_1_Val << MCAN_PSR_BO_Pos)               /* (MCAN_PSR) The MCAN is in Bus_Off state. Position */
#define MCAN_PSR_DLEC_Pos                     _UINT32_(8)                                          /* (MCAN_PSR) Data Phase Last Error Code (set to 111 on read) Position */
#define MCAN_PSR_DLEC_Msk                     (_UINT32_(0x7) << MCAN_PSR_DLEC_Pos)                 /* (MCAN_PSR) Data Phase Last Error Code (set to 111 on read) Mask */
#define MCAN_PSR_DLEC(value)                  (MCAN_PSR_DLEC_Msk & (_UINT32_(value) << MCAN_PSR_DLEC_Pos)) /* Assignment of value for DLEC in the MCAN_PSR register */
#define MCAN_PSR_RESI_Pos                     _UINT32_(11)                                         /* (MCAN_PSR) ESI Flag of Last Received CAN FD Message (cleared on read) Position */
#define MCAN_PSR_RESI_Msk                     (_UINT32_(0x1) << MCAN_PSR_RESI_Pos)                 /* (MCAN_PSR) ESI Flag of Last Received CAN FD Message (cleared on read) Mask */
#define MCAN_PSR_RESI(value)                  (MCAN_PSR_RESI_Msk & (_UINT32_(value) << MCAN_PSR_RESI_Pos)) /* Assignment of value for RESI in the MCAN_PSR register */
#define   MCAN_PSR_RESI_0_Val                 _UINT32_(0x0)                                        /* (MCAN_PSR) Last received CAN FD message did not have its ESI flag set.  */
#define   MCAN_PSR_RESI_1_Val                 _UINT32_(0x1)                                        /* (MCAN_PSR) Last received CAN FD message had its ESI flag set.  */
#define MCAN_PSR_RESI_0                       (MCAN_PSR_RESI_0_Val << MCAN_PSR_RESI_Pos)           /* (MCAN_PSR) Last received CAN FD message did not have its ESI flag set. Position */
#define MCAN_PSR_RESI_1                       (MCAN_PSR_RESI_1_Val << MCAN_PSR_RESI_Pos)           /* (MCAN_PSR) Last received CAN FD message had its ESI flag set. Position */
#define MCAN_PSR_RBRS_Pos                     _UINT32_(12)                                         /* (MCAN_PSR) BRS Flag of Last Received CAN FD Message (cleared on read) Position */
#define MCAN_PSR_RBRS_Msk                     (_UINT32_(0x1) << MCAN_PSR_RBRS_Pos)                 /* (MCAN_PSR) BRS Flag of Last Received CAN FD Message (cleared on read) Mask */
#define MCAN_PSR_RBRS(value)                  (MCAN_PSR_RBRS_Msk & (_UINT32_(value) << MCAN_PSR_RBRS_Pos)) /* Assignment of value for RBRS in the MCAN_PSR register */
#define   MCAN_PSR_RBRS_0_Val                 _UINT32_(0x0)                                        /* (MCAN_PSR) Last received CAN FD message did not have its BRS flag set.  */
#define   MCAN_PSR_RBRS_1_Val                 _UINT32_(0x1)                                        /* (MCAN_PSR) Last received CAN FD message had its BRS flag set.  */
#define MCAN_PSR_RBRS_0                       (MCAN_PSR_RBRS_0_Val << MCAN_PSR_RBRS_Pos)           /* (MCAN_PSR) Last received CAN FD message did not have its BRS flag set. Position */
#define MCAN_PSR_RBRS_1                       (MCAN_PSR_RBRS_1_Val << MCAN_PSR_RBRS_Pos)           /* (MCAN_PSR) Last received CAN FD message had its BRS flag set. Position */
#define MCAN_PSR_RFDF_Pos                     _UINT32_(13)                                         /* (MCAN_PSR) Received a CAN FD Message (cleared on read) Position */
#define MCAN_PSR_RFDF_Msk                     (_UINT32_(0x1) << MCAN_PSR_RFDF_Pos)                 /* (MCAN_PSR) Received a CAN FD Message (cleared on read) Mask */
#define MCAN_PSR_RFDF(value)                  (MCAN_PSR_RFDF_Msk & (_UINT32_(value) << MCAN_PSR_RFDF_Pos)) /* Assignment of value for RFDF in the MCAN_PSR register */
#define   MCAN_PSR_RFDF_0_Val                 _UINT32_(0x0)                                        /* (MCAN_PSR) Since this bit was reset by the CPU, no CAN FD message has been received  */
#define   MCAN_PSR_RFDF_1_Val                 _UINT32_(0x1)                                        /* (MCAN_PSR) Message in CAN FD format with FDF flag set has been received  */
#define MCAN_PSR_RFDF_0                       (MCAN_PSR_RFDF_0_Val << MCAN_PSR_RFDF_Pos)           /* (MCAN_PSR) Since this bit was reset by the CPU, no CAN FD message has been received Position */
#define MCAN_PSR_RFDF_1                       (MCAN_PSR_RFDF_1_Val << MCAN_PSR_RFDF_Pos)           /* (MCAN_PSR) Message in CAN FD format with FDF flag set has been received Position */
#define MCAN_PSR_PXE_Pos                      _UINT32_(14)                                         /* (MCAN_PSR) Protocol Exception Event (cleared on read) Position */
#define MCAN_PSR_PXE_Msk                      (_UINT32_(0x1) << MCAN_PSR_PXE_Pos)                  /* (MCAN_PSR) Protocol Exception Event (cleared on read) Mask */
#define MCAN_PSR_PXE(value)                   (MCAN_PSR_PXE_Msk & (_UINT32_(value) << MCAN_PSR_PXE_Pos)) /* Assignment of value for PXE in the MCAN_PSR register */
#define   MCAN_PSR_PXE_0_Val                  _UINT32_(0x0)                                        /* (MCAN_PSR) No protocol exception event occurred since last read access  */
#define   MCAN_PSR_PXE_1_Val                  _UINT32_(0x1)                                        /* (MCAN_PSR) Protocol exception event occurred  */
#define MCAN_PSR_PXE_0                        (MCAN_PSR_PXE_0_Val << MCAN_PSR_PXE_Pos)             /* (MCAN_PSR) No protocol exception event occurred since last read access Position */
#define MCAN_PSR_PXE_1                        (MCAN_PSR_PXE_1_Val << MCAN_PSR_PXE_Pos)             /* (MCAN_PSR) Protocol exception event occurred Position */
#define MCAN_PSR_TDCV_Pos                     _UINT32_(16)                                         /* (MCAN_PSR) Transmitter Delay Compensation Value Position */
#define MCAN_PSR_TDCV_Msk                     (_UINT32_(0x7F) << MCAN_PSR_TDCV_Pos)                /* (MCAN_PSR) Transmitter Delay Compensation Value Mask */
#define MCAN_PSR_TDCV(value)                  (MCAN_PSR_TDCV_Msk & (_UINT32_(value) << MCAN_PSR_TDCV_Pos)) /* Assignment of value for TDCV in the MCAN_PSR register */
#define MCAN_PSR_Msk                          _UINT32_(0x007F7FFF)                                 /* (MCAN_PSR) Register Mask  */


/* -------- MCAN_TDCR : (MCAN Offset: 0x48) (R/W 32) Transmit Delay Compensation Register -------- */
#define MCAN_TDCR_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_TDCR) Transmit Delay Compensation Register  Reset Value */

#define MCAN_TDCR_TDCF_Pos                    _UINT32_(0)                                          /* (MCAN_TDCR) Transmitter Delay Compensation Filter Position */
#define MCAN_TDCR_TDCF_Msk                    (_UINT32_(0x7F) << MCAN_TDCR_TDCF_Pos)               /* (MCAN_TDCR) Transmitter Delay Compensation Filter Mask */
#define MCAN_TDCR_TDCF(value)                 (MCAN_TDCR_TDCF_Msk & (_UINT32_(value) << MCAN_TDCR_TDCF_Pos)) /* Assignment of value for TDCF in the MCAN_TDCR register */
#define MCAN_TDCR_TDCO_Pos                    _UINT32_(8)                                          /* (MCAN_TDCR) Transmitter Delay Compensation Offset Position */
#define MCAN_TDCR_TDCO_Msk                    (_UINT32_(0x7F) << MCAN_TDCR_TDCO_Pos)               /* (MCAN_TDCR) Transmitter Delay Compensation Offset Mask */
#define MCAN_TDCR_TDCO(value)                 (MCAN_TDCR_TDCO_Msk & (_UINT32_(value) << MCAN_TDCR_TDCO_Pos)) /* Assignment of value for TDCO in the MCAN_TDCR register */
#define MCAN_TDCR_Msk                         _UINT32_(0x00007F7F)                                 /* (MCAN_TDCR) Register Mask  */


/* -------- MCAN_IR : (MCAN Offset: 0x50) (R/W 32) Interrupt Register -------- */
#define MCAN_IR_RESETVALUE                    _UINT32_(0x00)                                       /*  (MCAN_IR) Interrupt Register  Reset Value */

#define MCAN_IR_RF0N_Pos                      _UINT32_(0)                                          /* (MCAN_IR) Receive FIFO 0 New Message Position */
#define MCAN_IR_RF0N_Msk                      (_UINT32_(0x1) << MCAN_IR_RF0N_Pos)                  /* (MCAN_IR) Receive FIFO 0 New Message Mask */
#define MCAN_IR_RF0N(value)                   (MCAN_IR_RF0N_Msk & (_UINT32_(value) << MCAN_IR_RF0N_Pos)) /* Assignment of value for RF0N in the MCAN_IR register */
#define   MCAN_IR_RF0N_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) No new message written to Receive FIFO 0.  */
#define   MCAN_IR_RF0N_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) New message written to Receive FIFO 0.  */
#define MCAN_IR_RF0N_0                        (MCAN_IR_RF0N_0_Val << MCAN_IR_RF0N_Pos)             /* (MCAN_IR) No new message written to Receive FIFO 0. Position */
#define MCAN_IR_RF0N_1                        (MCAN_IR_RF0N_1_Val << MCAN_IR_RF0N_Pos)             /* (MCAN_IR) New message written to Receive FIFO 0. Position */
#define MCAN_IR_RF0W_Pos                      _UINT32_(1)                                          /* (MCAN_IR) Receive FIFO 0 Watermark Reached Position */
#define MCAN_IR_RF0W_Msk                      (_UINT32_(0x1) << MCAN_IR_RF0W_Pos)                  /* (MCAN_IR) Receive FIFO 0 Watermark Reached Mask */
#define MCAN_IR_RF0W(value)                   (MCAN_IR_RF0W_Msk & (_UINT32_(value) << MCAN_IR_RF0W_Pos)) /* Assignment of value for RF0W in the MCAN_IR register */
#define   MCAN_IR_RF0W_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Receive FIFO 0 fill level below watermark.  */
#define   MCAN_IR_RF0W_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Receive FIFO 0 fill level reached watermark.  */
#define MCAN_IR_RF0W_0                        (MCAN_IR_RF0W_0_Val << MCAN_IR_RF0W_Pos)             /* (MCAN_IR) Receive FIFO 0 fill level below watermark. Position */
#define MCAN_IR_RF0W_1                        (MCAN_IR_RF0W_1_Val << MCAN_IR_RF0W_Pos)             /* (MCAN_IR) Receive FIFO 0 fill level reached watermark. Position */
#define MCAN_IR_RF0F_Pos                      _UINT32_(2)                                          /* (MCAN_IR) Receive FIFO 0 Full Position */
#define MCAN_IR_RF0F_Msk                      (_UINT32_(0x1) << MCAN_IR_RF0F_Pos)                  /* (MCAN_IR) Receive FIFO 0 Full Mask */
#define MCAN_IR_RF0F(value)                   (MCAN_IR_RF0F_Msk & (_UINT32_(value) << MCAN_IR_RF0F_Pos)) /* Assignment of value for RF0F in the MCAN_IR register */
#define   MCAN_IR_RF0F_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Receive FIFO 0 not full.  */
#define   MCAN_IR_RF0F_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Receive FIFO 0 full.  */
#define MCAN_IR_RF0F_0                        (MCAN_IR_RF0F_0_Val << MCAN_IR_RF0F_Pos)             /* (MCAN_IR) Receive FIFO 0 not full. Position */
#define MCAN_IR_RF0F_1                        (MCAN_IR_RF0F_1_Val << MCAN_IR_RF0F_Pos)             /* (MCAN_IR) Receive FIFO 0 full. Position */
#define MCAN_IR_RF0L_Pos                      _UINT32_(3)                                          /* (MCAN_IR) Receive FIFO 0 Message Lost Position */
#define MCAN_IR_RF0L_Msk                      (_UINT32_(0x1) << MCAN_IR_RF0L_Pos)                  /* (MCAN_IR) Receive FIFO 0 Message Lost Mask */
#define MCAN_IR_RF0L(value)                   (MCAN_IR_RF0L_Msk & (_UINT32_(value) << MCAN_IR_RF0L_Pos)) /* Assignment of value for RF0L in the MCAN_IR register */
#define   MCAN_IR_RF0L_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) No Receive FIFO 0 message lost.  */
#define   MCAN_IR_RF0L_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Receive FIFO 0 message lost, also set after write attempt to Receive FIFO 0 of size zero.  */
#define MCAN_IR_RF0L_0                        (MCAN_IR_RF0L_0_Val << MCAN_IR_RF0L_Pos)             /* (MCAN_IR) No Receive FIFO 0 message lost. Position */
#define MCAN_IR_RF0L_1                        (MCAN_IR_RF0L_1_Val << MCAN_IR_RF0L_Pos)             /* (MCAN_IR) Receive FIFO 0 message lost, also set after write attempt to Receive FIFO 0 of size zero. Position */
#define MCAN_IR_RF1N_Pos                      _UINT32_(4)                                          /* (MCAN_IR) Receive FIFO 1 New Message Position */
#define MCAN_IR_RF1N_Msk                      (_UINT32_(0x1) << MCAN_IR_RF1N_Pos)                  /* (MCAN_IR) Receive FIFO 1 New Message Mask */
#define MCAN_IR_RF1N(value)                   (MCAN_IR_RF1N_Msk & (_UINT32_(value) << MCAN_IR_RF1N_Pos)) /* Assignment of value for RF1N in the MCAN_IR register */
#define   MCAN_IR_RF1N_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) No new message written to Receive FIFO 1.  */
#define   MCAN_IR_RF1N_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) New message written to Receive FIFO 1.  */
#define MCAN_IR_RF1N_0                        (MCAN_IR_RF1N_0_Val << MCAN_IR_RF1N_Pos)             /* (MCAN_IR) No new message written to Receive FIFO 1. Position */
#define MCAN_IR_RF1N_1                        (MCAN_IR_RF1N_1_Val << MCAN_IR_RF1N_Pos)             /* (MCAN_IR) New message written to Receive FIFO 1. Position */
#define MCAN_IR_RF1W_Pos                      _UINT32_(5)                                          /* (MCAN_IR) Receive FIFO 1 Watermark Reached Position */
#define MCAN_IR_RF1W_Msk                      (_UINT32_(0x1) << MCAN_IR_RF1W_Pos)                  /* (MCAN_IR) Receive FIFO 1 Watermark Reached Mask */
#define MCAN_IR_RF1W(value)                   (MCAN_IR_RF1W_Msk & (_UINT32_(value) << MCAN_IR_RF1W_Pos)) /* Assignment of value for RF1W in the MCAN_IR register */
#define   MCAN_IR_RF1W_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Receive FIFO 1 fill level below watermark.  */
#define   MCAN_IR_RF1W_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Receive FIFO 1 fill level reached watermark.  */
#define MCAN_IR_RF1W_0                        (MCAN_IR_RF1W_0_Val << MCAN_IR_RF1W_Pos)             /* (MCAN_IR) Receive FIFO 1 fill level below watermark. Position */
#define MCAN_IR_RF1W_1                        (MCAN_IR_RF1W_1_Val << MCAN_IR_RF1W_Pos)             /* (MCAN_IR) Receive FIFO 1 fill level reached watermark. Position */
#define MCAN_IR_RF1F_Pos                      _UINT32_(6)                                          /* (MCAN_IR) Receive FIFO 1 Full Position */
#define MCAN_IR_RF1F_Msk                      (_UINT32_(0x1) << MCAN_IR_RF1F_Pos)                  /* (MCAN_IR) Receive FIFO 1 Full Mask */
#define MCAN_IR_RF1F(value)                   (MCAN_IR_RF1F_Msk & (_UINT32_(value) << MCAN_IR_RF1F_Pos)) /* Assignment of value for RF1F in the MCAN_IR register */
#define   MCAN_IR_RF1F_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Receive FIFO 1 not full.  */
#define   MCAN_IR_RF1F_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Receive FIFO 1 full.  */
#define MCAN_IR_RF1F_0                        (MCAN_IR_RF1F_0_Val << MCAN_IR_RF1F_Pos)             /* (MCAN_IR) Receive FIFO 1 not full. Position */
#define MCAN_IR_RF1F_1                        (MCAN_IR_RF1F_1_Val << MCAN_IR_RF1F_Pos)             /* (MCAN_IR) Receive FIFO 1 full. Position */
#define MCAN_IR_RF1L_Pos                      _UINT32_(7)                                          /* (MCAN_IR) Receive FIFO 1 Message Lost Position */
#define MCAN_IR_RF1L_Msk                      (_UINT32_(0x1) << MCAN_IR_RF1L_Pos)                  /* (MCAN_IR) Receive FIFO 1 Message Lost Mask */
#define MCAN_IR_RF1L(value)                   (MCAN_IR_RF1L_Msk & (_UINT32_(value) << MCAN_IR_RF1L_Pos)) /* Assignment of value for RF1L in the MCAN_IR register */
#define   MCAN_IR_RF1L_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) No Receive FIFO 1 message lost.  */
#define   MCAN_IR_RF1L_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Receive FIFO 1 message lost, also set after write attempt to Receive FIFO 1 of size zero.  */
#define MCAN_IR_RF1L_0                        (MCAN_IR_RF1L_0_Val << MCAN_IR_RF1L_Pos)             /* (MCAN_IR) No Receive FIFO 1 message lost. Position */
#define MCAN_IR_RF1L_1                        (MCAN_IR_RF1L_1_Val << MCAN_IR_RF1L_Pos)             /* (MCAN_IR) Receive FIFO 1 message lost, also set after write attempt to Receive FIFO 1 of size zero. Position */
#define MCAN_IR_HPM_Pos                       _UINT32_(8)                                          /* (MCAN_IR) High Priority Message Position */
#define MCAN_IR_HPM_Msk                       (_UINT32_(0x1) << MCAN_IR_HPM_Pos)                   /* (MCAN_IR) High Priority Message Mask */
#define MCAN_IR_HPM(value)                    (MCAN_IR_HPM_Msk & (_UINT32_(value) << MCAN_IR_HPM_Pos)) /* Assignment of value for HPM in the MCAN_IR register */
#define   MCAN_IR_HPM_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No high priority message received.  */
#define   MCAN_IR_HPM_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) High priority message received.  */
#define MCAN_IR_HPM_0                         (MCAN_IR_HPM_0_Val << MCAN_IR_HPM_Pos)               /* (MCAN_IR) No high priority message received. Position */
#define MCAN_IR_HPM_1                         (MCAN_IR_HPM_1_Val << MCAN_IR_HPM_Pos)               /* (MCAN_IR) High priority message received. Position */
#define MCAN_IR_TC_Pos                        _UINT32_(9)                                          /* (MCAN_IR) Transmission Completed Position */
#define MCAN_IR_TC_Msk                        (_UINT32_(0x1) << MCAN_IR_TC_Pos)                    /* (MCAN_IR) Transmission Completed Mask */
#define MCAN_IR_TC(value)                     (MCAN_IR_TC_Msk & (_UINT32_(value) << MCAN_IR_TC_Pos)) /* Assignment of value for TC in the MCAN_IR register */
#define   MCAN_IR_TC_0_Val                    _UINT32_(0x0)                                        /* (MCAN_IR) No transmission completed.  */
#define   MCAN_IR_TC_1_Val                    _UINT32_(0x1)                                        /* (MCAN_IR) Transmission completed.  */
#define MCAN_IR_TC_0                          (MCAN_IR_TC_0_Val << MCAN_IR_TC_Pos)                 /* (MCAN_IR) No transmission completed. Position */
#define MCAN_IR_TC_1                          (MCAN_IR_TC_1_Val << MCAN_IR_TC_Pos)                 /* (MCAN_IR) Transmission completed. Position */
#define MCAN_IR_TCF_Pos                       _UINT32_(10)                                         /* (MCAN_IR) Transmission Cancellation Finished Position */
#define MCAN_IR_TCF_Msk                       (_UINT32_(0x1) << MCAN_IR_TCF_Pos)                   /* (MCAN_IR) Transmission Cancellation Finished Mask */
#define MCAN_IR_TCF(value)                    (MCAN_IR_TCF_Msk & (_UINT32_(value) << MCAN_IR_TCF_Pos)) /* Assignment of value for TCF in the MCAN_IR register */
#define   MCAN_IR_TCF_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No transmission cancellation finished.  */
#define   MCAN_IR_TCF_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Transmission cancellation finished.  */
#define MCAN_IR_TCF_0                         (MCAN_IR_TCF_0_Val << MCAN_IR_TCF_Pos)               /* (MCAN_IR) No transmission cancellation finished. Position */
#define MCAN_IR_TCF_1                         (MCAN_IR_TCF_1_Val << MCAN_IR_TCF_Pos)               /* (MCAN_IR) Transmission cancellation finished. Position */
#define MCAN_IR_TFE_Pos                       _UINT32_(11)                                         /* (MCAN_IR) Tx FIFO Empty Position */
#define MCAN_IR_TFE_Msk                       (_UINT32_(0x1) << MCAN_IR_TFE_Pos)                   /* (MCAN_IR) Tx FIFO Empty Mask */
#define MCAN_IR_TFE(value)                    (MCAN_IR_TFE_Msk & (_UINT32_(value) << MCAN_IR_TFE_Pos)) /* Assignment of value for TFE in the MCAN_IR register */
#define   MCAN_IR_TFE_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) Tx FIFO non-empty.  */
#define   MCAN_IR_TFE_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Tx FIFO empty.  */
#define MCAN_IR_TFE_0                         (MCAN_IR_TFE_0_Val << MCAN_IR_TFE_Pos)               /* (MCAN_IR) Tx FIFO non-empty. Position */
#define MCAN_IR_TFE_1                         (MCAN_IR_TFE_1_Val << MCAN_IR_TFE_Pos)               /* (MCAN_IR) Tx FIFO empty. Position */
#define MCAN_IR_TEFN_Pos                      _UINT32_(12)                                         /* (MCAN_IR) Tx Event FIFO New Entry Position */
#define MCAN_IR_TEFN_Msk                      (_UINT32_(0x1) << MCAN_IR_TEFN_Pos)                  /* (MCAN_IR) Tx Event FIFO New Entry Mask */
#define MCAN_IR_TEFN(value)                   (MCAN_IR_TEFN_Msk & (_UINT32_(value) << MCAN_IR_TEFN_Pos)) /* Assignment of value for TEFN in the MCAN_IR register */
#define   MCAN_IR_TEFN_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Tx Event FIFO unchanged.  */
#define   MCAN_IR_TEFN_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Tx Handler wrote Tx Event FIFO element.  */
#define MCAN_IR_TEFN_0                        (MCAN_IR_TEFN_0_Val << MCAN_IR_TEFN_Pos)             /* (MCAN_IR) Tx Event FIFO unchanged. Position */
#define MCAN_IR_TEFN_1                        (MCAN_IR_TEFN_1_Val << MCAN_IR_TEFN_Pos)             /* (MCAN_IR) Tx Handler wrote Tx Event FIFO element. Position */
#define MCAN_IR_TEFW_Pos                      _UINT32_(13)                                         /* (MCAN_IR) Tx Event FIFO Watermark Reached Position */
#define MCAN_IR_TEFW_Msk                      (_UINT32_(0x1) << MCAN_IR_TEFW_Pos)                  /* (MCAN_IR) Tx Event FIFO Watermark Reached Mask */
#define MCAN_IR_TEFW(value)                   (MCAN_IR_TEFW_Msk & (_UINT32_(value) << MCAN_IR_TEFW_Pos)) /* Assignment of value for TEFW in the MCAN_IR register */
#define   MCAN_IR_TEFW_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Tx Event FIFO fill level below watermark.  */
#define   MCAN_IR_TEFW_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Tx Event FIFO fill level reached watermark.  */
#define MCAN_IR_TEFW_0                        (MCAN_IR_TEFW_0_Val << MCAN_IR_TEFW_Pos)             /* (MCAN_IR) Tx Event FIFO fill level below watermark. Position */
#define MCAN_IR_TEFW_1                        (MCAN_IR_TEFW_1_Val << MCAN_IR_TEFW_Pos)             /* (MCAN_IR) Tx Event FIFO fill level reached watermark. Position */
#define MCAN_IR_TEFF_Pos                      _UINT32_(14)                                         /* (MCAN_IR) Tx Event FIFO Full Position */
#define MCAN_IR_TEFF_Msk                      (_UINT32_(0x1) << MCAN_IR_TEFF_Pos)                  /* (MCAN_IR) Tx Event FIFO Full Mask */
#define MCAN_IR_TEFF(value)                   (MCAN_IR_TEFF_Msk & (_UINT32_(value) << MCAN_IR_TEFF_Pos)) /* Assignment of value for TEFF in the MCAN_IR register */
#define   MCAN_IR_TEFF_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) Tx Event FIFO not full.  */
#define   MCAN_IR_TEFF_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Tx Event FIFO full.  */
#define MCAN_IR_TEFF_0                        (MCAN_IR_TEFF_0_Val << MCAN_IR_TEFF_Pos)             /* (MCAN_IR) Tx Event FIFO not full. Position */
#define MCAN_IR_TEFF_1                        (MCAN_IR_TEFF_1_Val << MCAN_IR_TEFF_Pos)             /* (MCAN_IR) Tx Event FIFO full. Position */
#define MCAN_IR_TEFL_Pos                      _UINT32_(15)                                         /* (MCAN_IR) Tx Event FIFO Element Lost Position */
#define MCAN_IR_TEFL_Msk                      (_UINT32_(0x1) << MCAN_IR_TEFL_Pos)                  /* (MCAN_IR) Tx Event FIFO Element Lost Mask */
#define MCAN_IR_TEFL(value)                   (MCAN_IR_TEFL_Msk & (_UINT32_(value) << MCAN_IR_TEFL_Pos)) /* Assignment of value for TEFL in the MCAN_IR register */
#define   MCAN_IR_TEFL_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) No Tx Event FIFO element lost.  */
#define   MCAN_IR_TEFL_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Tx Event FIFO element lost, also set after write attempt to Tx Event FIFO of size zero.  */
#define MCAN_IR_TEFL_0                        (MCAN_IR_TEFL_0_Val << MCAN_IR_TEFL_Pos)             /* (MCAN_IR) No Tx Event FIFO element lost. Position */
#define MCAN_IR_TEFL_1                        (MCAN_IR_TEFL_1_Val << MCAN_IR_TEFL_Pos)             /* (MCAN_IR) Tx Event FIFO element lost, also set after write attempt to Tx Event FIFO of size zero. Position */
#define MCAN_IR_TSW_Pos                       _UINT32_(16)                                         /* (MCAN_IR) Timestamp Wraparound Position */
#define MCAN_IR_TSW_Msk                       (_UINT32_(0x1) << MCAN_IR_TSW_Pos)                   /* (MCAN_IR) Timestamp Wraparound Mask */
#define MCAN_IR_TSW(value)                    (MCAN_IR_TSW_Msk & (_UINT32_(value) << MCAN_IR_TSW_Pos)) /* Assignment of value for TSW in the MCAN_IR register */
#define   MCAN_IR_TSW_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No timestamp counter wrap-around.  */
#define   MCAN_IR_TSW_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Timestamp counter wrapped around.  */
#define MCAN_IR_TSW_0                         (MCAN_IR_TSW_0_Val << MCAN_IR_TSW_Pos)               /* (MCAN_IR) No timestamp counter wrap-around. Position */
#define MCAN_IR_TSW_1                         (MCAN_IR_TSW_1_Val << MCAN_IR_TSW_Pos)               /* (MCAN_IR) Timestamp counter wrapped around. Position */
#define MCAN_IR_MRAF_Pos                      _UINT32_(17)                                         /* (MCAN_IR) Message RAM Access Failure Position */
#define MCAN_IR_MRAF_Msk                      (_UINT32_(0x1) << MCAN_IR_MRAF_Pos)                  /* (MCAN_IR) Message RAM Access Failure Mask */
#define MCAN_IR_MRAF(value)                   (MCAN_IR_MRAF_Msk & (_UINT32_(value) << MCAN_IR_MRAF_Pos)) /* Assignment of value for MRAF in the MCAN_IR register */
#define   MCAN_IR_MRAF_0_Val                  _UINT32_(0x0)                                        /* (MCAN_IR) No Message RAM access failure occurred.  */
#define   MCAN_IR_MRAF_1_Val                  _UINT32_(0x1)                                        /* (MCAN_IR) Message RAM access failure occurred.  */
#define MCAN_IR_MRAF_0                        (MCAN_IR_MRAF_0_Val << MCAN_IR_MRAF_Pos)             /* (MCAN_IR) No Message RAM access failure occurred. Position */
#define MCAN_IR_MRAF_1                        (MCAN_IR_MRAF_1_Val << MCAN_IR_MRAF_Pos)             /* (MCAN_IR) Message RAM access failure occurred. Position */
#define MCAN_IR_TOO_Pos                       _UINT32_(18)                                         /* (MCAN_IR) Timeout Occurred Position */
#define MCAN_IR_TOO_Msk                       (_UINT32_(0x1) << MCAN_IR_TOO_Pos)                   /* (MCAN_IR) Timeout Occurred Mask */
#define MCAN_IR_TOO(value)                    (MCAN_IR_TOO_Msk & (_UINT32_(value) << MCAN_IR_TOO_Pos)) /* Assignment of value for TOO in the MCAN_IR register */
#define   MCAN_IR_TOO_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No timeout.  */
#define   MCAN_IR_TOO_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Timeout reached.  */
#define MCAN_IR_TOO_0                         (MCAN_IR_TOO_0_Val << MCAN_IR_TOO_Pos)               /* (MCAN_IR) No timeout. Position */
#define MCAN_IR_TOO_1                         (MCAN_IR_TOO_1_Val << MCAN_IR_TOO_Pos)               /* (MCAN_IR) Timeout reached. Position */
#define MCAN_IR_DRX_Pos                       _UINT32_(19)                                         /* (MCAN_IR) Message stored to Dedicated Receive Buffer Position */
#define MCAN_IR_DRX_Msk                       (_UINT32_(0x1) << MCAN_IR_DRX_Pos)                   /* (MCAN_IR) Message stored to Dedicated Receive Buffer Mask */
#define MCAN_IR_DRX(value)                    (MCAN_IR_DRX_Msk & (_UINT32_(value) << MCAN_IR_DRX_Pos)) /* Assignment of value for DRX in the MCAN_IR register */
#define   MCAN_IR_DRX_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No Receive Buffer updated.  */
#define   MCAN_IR_DRX_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) At least one received message stored into a Receive Buffer.  */
#define MCAN_IR_DRX_0                         (MCAN_IR_DRX_0_Val << MCAN_IR_DRX_Pos)               /* (MCAN_IR) No Receive Buffer updated. Position */
#define MCAN_IR_DRX_1                         (MCAN_IR_DRX_1_Val << MCAN_IR_DRX_Pos)               /* (MCAN_IR) At least one received message stored into a Receive Buffer. Position */
#define MCAN_IR_ELO_Pos                       _UINT32_(22)                                         /* (MCAN_IR) Error Logging Overflow Position */
#define MCAN_IR_ELO_Msk                       (_UINT32_(0x1) << MCAN_IR_ELO_Pos)                   /* (MCAN_IR) Error Logging Overflow Mask */
#define MCAN_IR_ELO(value)                    (MCAN_IR_ELO_Msk & (_UINT32_(value) << MCAN_IR_ELO_Pos)) /* Assignment of value for ELO in the MCAN_IR register */
#define   MCAN_IR_ELO_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) CAN Error Logging Counter did not overflow.  */
#define   MCAN_IR_ELO_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Overflow of CAN Error Logging Counter occurred.  */
#define MCAN_IR_ELO_0                         (MCAN_IR_ELO_0_Val << MCAN_IR_ELO_Pos)               /* (MCAN_IR) CAN Error Logging Counter did not overflow. Position */
#define MCAN_IR_ELO_1                         (MCAN_IR_ELO_1_Val << MCAN_IR_ELO_Pos)               /* (MCAN_IR) Overflow of CAN Error Logging Counter occurred. Position */
#define MCAN_IR_EP_Pos                        _UINT32_(23)                                         /* (MCAN_IR) Error Passive Position */
#define MCAN_IR_EP_Msk                        (_UINT32_(0x1) << MCAN_IR_EP_Pos)                    /* (MCAN_IR) Error Passive Mask */
#define MCAN_IR_EP(value)                     (MCAN_IR_EP_Msk & (_UINT32_(value) << MCAN_IR_EP_Pos)) /* Assignment of value for EP in the MCAN_IR register */
#define   MCAN_IR_EP_0_Val                    _UINT32_(0x0)                                        /* (MCAN_IR) Error_Passive status unchanged.  */
#define   MCAN_IR_EP_1_Val                    _UINT32_(0x1)                                        /* (MCAN_IR) Error_Passive status changed.  */
#define MCAN_IR_EP_0                          (MCAN_IR_EP_0_Val << MCAN_IR_EP_Pos)                 /* (MCAN_IR) Error_Passive status unchanged. Position */
#define MCAN_IR_EP_1                          (MCAN_IR_EP_1_Val << MCAN_IR_EP_Pos)                 /* (MCAN_IR) Error_Passive status changed. Position */
#define MCAN_IR_EW_Pos                        _UINT32_(24)                                         /* (MCAN_IR) Warning Status Position */
#define MCAN_IR_EW_Msk                        (_UINT32_(0x1) << MCAN_IR_EW_Pos)                    /* (MCAN_IR) Warning Status Mask */
#define MCAN_IR_EW(value)                     (MCAN_IR_EW_Msk & (_UINT32_(value) << MCAN_IR_EW_Pos)) /* Assignment of value for EW in the MCAN_IR register */
#define   MCAN_IR_EW_0_Val                    _UINT32_(0x0)                                        /* (MCAN_IR) Error_Warning status unchanged.  */
#define   MCAN_IR_EW_1_Val                    _UINT32_(0x1)                                        /* (MCAN_IR) Error_Warning status changed.  */
#define MCAN_IR_EW_0                          (MCAN_IR_EW_0_Val << MCAN_IR_EW_Pos)                 /* (MCAN_IR) Error_Warning status unchanged. Position */
#define MCAN_IR_EW_1                          (MCAN_IR_EW_1_Val << MCAN_IR_EW_Pos)                 /* (MCAN_IR) Error_Warning status changed. Position */
#define MCAN_IR_BO_Pos                        _UINT32_(25)                                         /* (MCAN_IR) Bus_Off Status Position */
#define MCAN_IR_BO_Msk                        (_UINT32_(0x1) << MCAN_IR_BO_Pos)                    /* (MCAN_IR) Bus_Off Status Mask */
#define MCAN_IR_BO(value)                     (MCAN_IR_BO_Msk & (_UINT32_(value) << MCAN_IR_BO_Pos)) /* Assignment of value for BO in the MCAN_IR register */
#define   MCAN_IR_BO_0_Val                    _UINT32_(0x0)                                        /* (MCAN_IR) Bus_Off status unchanged.  */
#define   MCAN_IR_BO_1_Val                    _UINT32_(0x1)                                        /* (MCAN_IR) Bus_Off status changed.  */
#define MCAN_IR_BO_0                          (MCAN_IR_BO_0_Val << MCAN_IR_BO_Pos)                 /* (MCAN_IR) Bus_Off status unchanged. Position */
#define MCAN_IR_BO_1                          (MCAN_IR_BO_1_Val << MCAN_IR_BO_Pos)                 /* (MCAN_IR) Bus_Off status changed. Position */
#define MCAN_IR_WDI_Pos                       _UINT32_(26)                                         /* (MCAN_IR) Watchdog Interrupt Position */
#define MCAN_IR_WDI_Msk                       (_UINT32_(0x1) << MCAN_IR_WDI_Pos)                   /* (MCAN_IR) Watchdog Interrupt Mask */
#define MCAN_IR_WDI(value)                    (MCAN_IR_WDI_Msk & (_UINT32_(value) << MCAN_IR_WDI_Pos)) /* Assignment of value for WDI in the MCAN_IR register */
#define   MCAN_IR_WDI_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No Message RAM Watchdog event occurred.  */
#define   MCAN_IR_WDI_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Message RAM Watchdog event due to missing READY.  */
#define MCAN_IR_WDI_0                         (MCAN_IR_WDI_0_Val << MCAN_IR_WDI_Pos)               /* (MCAN_IR) No Message RAM Watchdog event occurred. Position */
#define MCAN_IR_WDI_1                         (MCAN_IR_WDI_1_Val << MCAN_IR_WDI_Pos)               /* (MCAN_IR) Message RAM Watchdog event due to missing READY. Position */
#define MCAN_IR_PEA_Pos                       _UINT32_(27)                                         /* (MCAN_IR) Protocol Error in Arbitration Phase Position */
#define MCAN_IR_PEA_Msk                       (_UINT32_(0x1) << MCAN_IR_PEA_Pos)                   /* (MCAN_IR) Protocol Error in Arbitration Phase Mask */
#define MCAN_IR_PEA(value)                    (MCAN_IR_PEA_Msk & (_UINT32_(value) << MCAN_IR_PEA_Pos)) /* Assignment of value for PEA in the MCAN_IR register */
#define   MCAN_IR_PEA_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No protocol error in arbitration phase  */
#define   MCAN_IR_PEA_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Protocol error in arbitration phase detected (MCAN_PSR.LEC differs from 0 or 7)  */
#define MCAN_IR_PEA_0                         (MCAN_IR_PEA_0_Val << MCAN_IR_PEA_Pos)               /* (MCAN_IR) No protocol error in arbitration phase Position */
#define MCAN_IR_PEA_1                         (MCAN_IR_PEA_1_Val << MCAN_IR_PEA_Pos)               /* (MCAN_IR) Protocol error in arbitration phase detected (MCAN_PSR.LEC differs from 0 or 7) Position */
#define MCAN_IR_PED_Pos                       _UINT32_(28)                                         /* (MCAN_IR) Protocol Error in Data Phase Position */
#define MCAN_IR_PED_Msk                       (_UINT32_(0x1) << MCAN_IR_PED_Pos)                   /* (MCAN_IR) Protocol Error in Data Phase Mask */
#define MCAN_IR_PED(value)                    (MCAN_IR_PED_Msk & (_UINT32_(value) << MCAN_IR_PED_Pos)) /* Assignment of value for PED in the MCAN_IR register */
#define   MCAN_IR_PED_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No protocol error in data phase  */
#define   MCAN_IR_PED_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Protocol error in data phase detected (MCAN_PSR.DLEC differs from 0 or 7)  */
#define MCAN_IR_PED_0                         (MCAN_IR_PED_0_Val << MCAN_IR_PED_Pos)               /* (MCAN_IR) No protocol error in data phase Position */
#define MCAN_IR_PED_1                         (MCAN_IR_PED_1_Val << MCAN_IR_PED_Pos)               /* (MCAN_IR) Protocol error in data phase detected (MCAN_PSR.DLEC differs from 0 or 7) Position */
#define MCAN_IR_ARA_Pos                       _UINT32_(29)                                         /* (MCAN_IR) Access to Reserved Address Position */
#define MCAN_IR_ARA_Msk                       (_UINT32_(0x1) << MCAN_IR_ARA_Pos)                   /* (MCAN_IR) Access to Reserved Address Mask */
#define MCAN_IR_ARA(value)                    (MCAN_IR_ARA_Msk & (_UINT32_(value) << MCAN_IR_ARA_Pos)) /* Assignment of value for ARA in the MCAN_IR register */
#define   MCAN_IR_ARA_0_Val                   _UINT32_(0x0)                                        /* (MCAN_IR) No access to reserved address occurred  */
#define   MCAN_IR_ARA_1_Val                   _UINT32_(0x1)                                        /* (MCAN_IR) Access to reserved address occurred  */
#define MCAN_IR_ARA_0                         (MCAN_IR_ARA_0_Val << MCAN_IR_ARA_Pos)               /* (MCAN_IR) No access to reserved address occurred Position */
#define MCAN_IR_ARA_1                         (MCAN_IR_ARA_1_Val << MCAN_IR_ARA_Pos)               /* (MCAN_IR) Access to reserved address occurred Position */
#define MCAN_IR_Msk                           _UINT32_(0x3FCFFFFF)                                 /* (MCAN_IR) Register Mask  */


/* -------- MCAN_IE : (MCAN Offset: 0x54) (R/W 32) Interrupt Enable Register -------- */
#define MCAN_IE_RESETVALUE                    _UINT32_(0x00)                                       /*  (MCAN_IE) Interrupt Enable Register  Reset Value */

#define MCAN_IE_RF0NE_Pos                     _UINT32_(0)                                          /* (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Position */
#define MCAN_IE_RF0NE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF0NE_Pos)                 /* (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Mask */
#define MCAN_IE_RF0NE(value)                  (MCAN_IE_RF0NE_Msk & (_UINT32_(value) << MCAN_IE_RF0NE_Pos)) /* Assignment of value for RF0NE in the MCAN_IE register */
#define MCAN_IE_RF0WE_Pos                     _UINT32_(1)                                          /* (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Position */
#define MCAN_IE_RF0WE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF0WE_Pos)                 /* (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_RF0WE(value)                  (MCAN_IE_RF0WE_Msk & (_UINT32_(value) << MCAN_IE_RF0WE_Pos)) /* Assignment of value for RF0WE in the MCAN_IE register */
#define MCAN_IE_RF0FE_Pos                     _UINT32_(2)                                          /* (MCAN_IE) Receive FIFO 0 Full Interrupt Enable Position */
#define MCAN_IE_RF0FE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF0FE_Pos)                 /* (MCAN_IE) Receive FIFO 0 Full Interrupt Enable Mask */
#define MCAN_IE_RF0FE(value)                  (MCAN_IE_RF0FE_Msk & (_UINT32_(value) << MCAN_IE_RF0FE_Pos)) /* Assignment of value for RF0FE in the MCAN_IE register */
#define MCAN_IE_RF0LE_Pos                     _UINT32_(3)                                          /* (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Position */
#define MCAN_IE_RF0LE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF0LE_Pos)                 /* (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Mask */
#define MCAN_IE_RF0LE(value)                  (MCAN_IE_RF0LE_Msk & (_UINT32_(value) << MCAN_IE_RF0LE_Pos)) /* Assignment of value for RF0LE in the MCAN_IE register */
#define MCAN_IE_RF1NE_Pos                     _UINT32_(4)                                          /* (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Position */
#define MCAN_IE_RF1NE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF1NE_Pos)                 /* (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Mask */
#define MCAN_IE_RF1NE(value)                  (MCAN_IE_RF1NE_Msk & (_UINT32_(value) << MCAN_IE_RF1NE_Pos)) /* Assignment of value for RF1NE in the MCAN_IE register */
#define MCAN_IE_RF1WE_Pos                     _UINT32_(5)                                          /* (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Position */
#define MCAN_IE_RF1WE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF1WE_Pos)                 /* (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_RF1WE(value)                  (MCAN_IE_RF1WE_Msk & (_UINT32_(value) << MCAN_IE_RF1WE_Pos)) /* Assignment of value for RF1WE in the MCAN_IE register */
#define MCAN_IE_RF1FE_Pos                     _UINT32_(6)                                          /* (MCAN_IE) Receive FIFO 1 Full Interrupt Enable Position */
#define MCAN_IE_RF1FE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF1FE_Pos)                 /* (MCAN_IE) Receive FIFO 1 Full Interrupt Enable Mask */
#define MCAN_IE_RF1FE(value)                  (MCAN_IE_RF1FE_Msk & (_UINT32_(value) << MCAN_IE_RF1FE_Pos)) /* Assignment of value for RF1FE in the MCAN_IE register */
#define MCAN_IE_RF1LE_Pos                     _UINT32_(7)                                          /* (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Position */
#define MCAN_IE_RF1LE_Msk                     (_UINT32_(0x1) << MCAN_IE_RF1LE_Pos)                 /* (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Mask */
#define MCAN_IE_RF1LE(value)                  (MCAN_IE_RF1LE_Msk & (_UINT32_(value) << MCAN_IE_RF1LE_Pos)) /* Assignment of value for RF1LE in the MCAN_IE register */
#define MCAN_IE_HPME_Pos                      _UINT32_(8)                                          /* (MCAN_IE) High Priority Message Interrupt Enable Position */
#define MCAN_IE_HPME_Msk                      (_UINT32_(0x1) << MCAN_IE_HPME_Pos)                  /* (MCAN_IE) High Priority Message Interrupt Enable Mask */
#define MCAN_IE_HPME(value)                   (MCAN_IE_HPME_Msk & (_UINT32_(value) << MCAN_IE_HPME_Pos)) /* Assignment of value for HPME in the MCAN_IE register */
#define MCAN_IE_TCE_Pos                       _UINT32_(9)                                          /* (MCAN_IE) Transmission Completed Interrupt Enable Position */
#define MCAN_IE_TCE_Msk                       (_UINT32_(0x1) << MCAN_IE_TCE_Pos)                   /* (MCAN_IE) Transmission Completed Interrupt Enable Mask */
#define MCAN_IE_TCE(value)                    (MCAN_IE_TCE_Msk & (_UINT32_(value) << MCAN_IE_TCE_Pos)) /* Assignment of value for TCE in the MCAN_IE register */
#define MCAN_IE_TCFE_Pos                      _UINT32_(10)                                         /* (MCAN_IE) Transmission Cancellation Finished Interrupt Enable Position */
#define MCAN_IE_TCFE_Msk                      (_UINT32_(0x1) << MCAN_IE_TCFE_Pos)                  /* (MCAN_IE) Transmission Cancellation Finished Interrupt Enable Mask */
#define MCAN_IE_TCFE(value)                   (MCAN_IE_TCFE_Msk & (_UINT32_(value) << MCAN_IE_TCFE_Pos)) /* Assignment of value for TCFE in the MCAN_IE register */
#define MCAN_IE_TFEE_Pos                      _UINT32_(11)                                         /* (MCAN_IE) Tx FIFO Empty Interrupt Enable Position */
#define MCAN_IE_TFEE_Msk                      (_UINT32_(0x1) << MCAN_IE_TFEE_Pos)                  /* (MCAN_IE) Tx FIFO Empty Interrupt Enable Mask */
#define MCAN_IE_TFEE(value)                   (MCAN_IE_TFEE_Msk & (_UINT32_(value) << MCAN_IE_TFEE_Pos)) /* Assignment of value for TFEE in the MCAN_IE register */
#define MCAN_IE_TEFNE_Pos                     _UINT32_(12)                                         /* (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Position */
#define MCAN_IE_TEFNE_Msk                     (_UINT32_(0x1) << MCAN_IE_TEFNE_Pos)                 /* (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Mask */
#define MCAN_IE_TEFNE(value)                  (MCAN_IE_TEFNE_Msk & (_UINT32_(value) << MCAN_IE_TEFNE_Pos)) /* Assignment of value for TEFNE in the MCAN_IE register */
#define MCAN_IE_TEFWE_Pos                     _UINT32_(13)                                         /* (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Position */
#define MCAN_IE_TEFWE_Msk                     (_UINT32_(0x1) << MCAN_IE_TEFWE_Pos)                 /* (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_TEFWE(value)                  (MCAN_IE_TEFWE_Msk & (_UINT32_(value) << MCAN_IE_TEFWE_Pos)) /* Assignment of value for TEFWE in the MCAN_IE register */
#define MCAN_IE_TEFFE_Pos                     _UINT32_(14)                                         /* (MCAN_IE) Tx Event FIFO Full Interrupt Enable Position */
#define MCAN_IE_TEFFE_Msk                     (_UINT32_(0x1) << MCAN_IE_TEFFE_Pos)                 /* (MCAN_IE) Tx Event FIFO Full Interrupt Enable Mask */
#define MCAN_IE_TEFFE(value)                  (MCAN_IE_TEFFE_Msk & (_UINT32_(value) << MCAN_IE_TEFFE_Pos)) /* Assignment of value for TEFFE in the MCAN_IE register */
#define MCAN_IE_TEFLE_Pos                     _UINT32_(15)                                         /* (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Position */
#define MCAN_IE_TEFLE_Msk                     (_UINT32_(0x1) << MCAN_IE_TEFLE_Pos)                 /* (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Mask */
#define MCAN_IE_TEFLE(value)                  (MCAN_IE_TEFLE_Msk & (_UINT32_(value) << MCAN_IE_TEFLE_Pos)) /* Assignment of value for TEFLE in the MCAN_IE register */
#define MCAN_IE_TSWE_Pos                      _UINT32_(16)                                         /* (MCAN_IE) Timestamp Wraparound Interrupt Enable Position */
#define MCAN_IE_TSWE_Msk                      (_UINT32_(0x1) << MCAN_IE_TSWE_Pos)                  /* (MCAN_IE) Timestamp Wraparound Interrupt Enable Mask */
#define MCAN_IE_TSWE(value)                   (MCAN_IE_TSWE_Msk & (_UINT32_(value) << MCAN_IE_TSWE_Pos)) /* Assignment of value for TSWE in the MCAN_IE register */
#define MCAN_IE_MRAFE_Pos                     _UINT32_(17)                                         /* (MCAN_IE) Message RAM Access Failure Interrupt Enable Position */
#define MCAN_IE_MRAFE_Msk                     (_UINT32_(0x1) << MCAN_IE_MRAFE_Pos)                 /* (MCAN_IE) Message RAM Access Failure Interrupt Enable Mask */
#define MCAN_IE_MRAFE(value)                  (MCAN_IE_MRAFE_Msk & (_UINT32_(value) << MCAN_IE_MRAFE_Pos)) /* Assignment of value for MRAFE in the MCAN_IE register */
#define MCAN_IE_TOOE_Pos                      _UINT32_(18)                                         /* (MCAN_IE) Timeout Occurred Interrupt Enable Position */
#define MCAN_IE_TOOE_Msk                      (_UINT32_(0x1) << MCAN_IE_TOOE_Pos)                  /* (MCAN_IE) Timeout Occurred Interrupt Enable Mask */
#define MCAN_IE_TOOE(value)                   (MCAN_IE_TOOE_Msk & (_UINT32_(value) << MCAN_IE_TOOE_Pos)) /* Assignment of value for TOOE in the MCAN_IE register */
#define MCAN_IE_DRXE_Pos                      _UINT32_(19)                                         /* (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Position */
#define MCAN_IE_DRXE_Msk                      (_UINT32_(0x1) << MCAN_IE_DRXE_Pos)                  /* (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Mask */
#define MCAN_IE_DRXE(value)                   (MCAN_IE_DRXE_Msk & (_UINT32_(value) << MCAN_IE_DRXE_Pos)) /* Assignment of value for DRXE in the MCAN_IE register */
#define MCAN_IE_ELOE_Pos                      _UINT32_(22)                                         /* (MCAN_IE) Error Logging Overflow Interrupt Enable Position */
#define MCAN_IE_ELOE_Msk                      (_UINT32_(0x1) << MCAN_IE_ELOE_Pos)                  /* (MCAN_IE) Error Logging Overflow Interrupt Enable Mask */
#define MCAN_IE_ELOE(value)                   (MCAN_IE_ELOE_Msk & (_UINT32_(value) << MCAN_IE_ELOE_Pos)) /* Assignment of value for ELOE in the MCAN_IE register */
#define MCAN_IE_EPE_Pos                       _UINT32_(23)                                         /* (MCAN_IE) Error Passive Interrupt Enable Position */
#define MCAN_IE_EPE_Msk                       (_UINT32_(0x1) << MCAN_IE_EPE_Pos)                   /* (MCAN_IE) Error Passive Interrupt Enable Mask */
#define MCAN_IE_EPE(value)                    (MCAN_IE_EPE_Msk & (_UINT32_(value) << MCAN_IE_EPE_Pos)) /* Assignment of value for EPE in the MCAN_IE register */
#define MCAN_IE_EWE_Pos                       _UINT32_(24)                                         /* (MCAN_IE) Warning Status Interrupt Enable Position */
#define MCAN_IE_EWE_Msk                       (_UINT32_(0x1) << MCAN_IE_EWE_Pos)                   /* (MCAN_IE) Warning Status Interrupt Enable Mask */
#define MCAN_IE_EWE(value)                    (MCAN_IE_EWE_Msk & (_UINT32_(value) << MCAN_IE_EWE_Pos)) /* Assignment of value for EWE in the MCAN_IE register */
#define MCAN_IE_BOE_Pos                       _UINT32_(25)                                         /* (MCAN_IE) Bus_Off Status Interrupt Enable Position */
#define MCAN_IE_BOE_Msk                       (_UINT32_(0x1) << MCAN_IE_BOE_Pos)                   /* (MCAN_IE) Bus_Off Status Interrupt Enable Mask */
#define MCAN_IE_BOE(value)                    (MCAN_IE_BOE_Msk & (_UINT32_(value) << MCAN_IE_BOE_Pos)) /* Assignment of value for BOE in the MCAN_IE register */
#define MCAN_IE_WDIE_Pos                      _UINT32_(26)                                         /* (MCAN_IE) Watchdog Interrupt Enable Position */
#define MCAN_IE_WDIE_Msk                      (_UINT32_(0x1) << MCAN_IE_WDIE_Pos)                  /* (MCAN_IE) Watchdog Interrupt Enable Mask */
#define MCAN_IE_WDIE(value)                   (MCAN_IE_WDIE_Msk & (_UINT32_(value) << MCAN_IE_WDIE_Pos)) /* Assignment of value for WDIE in the MCAN_IE register */
#define MCAN_IE_PEAE_Pos                      _UINT32_(27)                                         /* (MCAN_IE) Protocol Error in Arbitration Phase Enable Position */
#define MCAN_IE_PEAE_Msk                      (_UINT32_(0x1) << MCAN_IE_PEAE_Pos)                  /* (MCAN_IE) Protocol Error in Arbitration Phase Enable Mask */
#define MCAN_IE_PEAE(value)                   (MCAN_IE_PEAE_Msk & (_UINT32_(value) << MCAN_IE_PEAE_Pos)) /* Assignment of value for PEAE in the MCAN_IE register */
#define MCAN_IE_PEDE_Pos                      _UINT32_(28)                                         /* (MCAN_IE) Protocol Error in Data Phase Enable Position */
#define MCAN_IE_PEDE_Msk                      (_UINT32_(0x1) << MCAN_IE_PEDE_Pos)                  /* (MCAN_IE) Protocol Error in Data Phase Enable Mask */
#define MCAN_IE_PEDE(value)                   (MCAN_IE_PEDE_Msk & (_UINT32_(value) << MCAN_IE_PEDE_Pos)) /* Assignment of value for PEDE in the MCAN_IE register */
#define MCAN_IE_ARAE_Pos                      _UINT32_(29)                                         /* (MCAN_IE) Access to Reserved Address Enable Position */
#define MCAN_IE_ARAE_Msk                      (_UINT32_(0x1) << MCAN_IE_ARAE_Pos)                  /* (MCAN_IE) Access to Reserved Address Enable Mask */
#define MCAN_IE_ARAE(value)                   (MCAN_IE_ARAE_Msk & (_UINT32_(value) << MCAN_IE_ARAE_Pos)) /* Assignment of value for ARAE in the MCAN_IE register */
#define MCAN_IE_Msk                           _UINT32_(0x3FCFFFFF)                                 /* (MCAN_IE) Register Mask  */


/* -------- MCAN_ILS : (MCAN Offset: 0x58) (R/W 32) Interrupt Line Select Register -------- */
#define MCAN_ILS_RESETVALUE                   _UINT32_(0x00)                                       /*  (MCAN_ILS) Interrupt Line Select Register  Reset Value */

#define MCAN_ILS_RF0NL_Pos                    _UINT32_(0)                                          /* (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Position */
#define MCAN_ILS_RF0NL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF0NL_Pos)                /* (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Mask */
#define MCAN_ILS_RF0NL(value)                 (MCAN_ILS_RF0NL_Msk & (_UINT32_(value) << MCAN_ILS_RF0NL_Pos)) /* Assignment of value for RF0NL in the MCAN_ILS register */
#define MCAN_ILS_RF0WL_Pos                    _UINT32_(1)                                          /* (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Position */
#define MCAN_ILS_RF0WL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF0WL_Pos)                /* (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_RF0WL(value)                 (MCAN_ILS_RF0WL_Msk & (_UINT32_(value) << MCAN_ILS_RF0WL_Pos)) /* Assignment of value for RF0WL in the MCAN_ILS register */
#define MCAN_ILS_RF0FL_Pos                    _UINT32_(2)                                          /* (MCAN_ILS) Receive FIFO 0 Full Interrupt Line Position */
#define MCAN_ILS_RF0FL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF0FL_Pos)                /* (MCAN_ILS) Receive FIFO 0 Full Interrupt Line Mask */
#define MCAN_ILS_RF0FL(value)                 (MCAN_ILS_RF0FL_Msk & (_UINT32_(value) << MCAN_ILS_RF0FL_Pos)) /* Assignment of value for RF0FL in the MCAN_ILS register */
#define MCAN_ILS_RF0LL_Pos                    _UINT32_(3)                                          /* (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Position */
#define MCAN_ILS_RF0LL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF0LL_Pos)                /* (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Mask */
#define MCAN_ILS_RF0LL(value)                 (MCAN_ILS_RF0LL_Msk & (_UINT32_(value) << MCAN_ILS_RF0LL_Pos)) /* Assignment of value for RF0LL in the MCAN_ILS register */
#define MCAN_ILS_RF1NL_Pos                    _UINT32_(4)                                          /* (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Position */
#define MCAN_ILS_RF1NL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF1NL_Pos)                /* (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Mask */
#define MCAN_ILS_RF1NL(value)                 (MCAN_ILS_RF1NL_Msk & (_UINT32_(value) << MCAN_ILS_RF1NL_Pos)) /* Assignment of value for RF1NL in the MCAN_ILS register */
#define MCAN_ILS_RF1WL_Pos                    _UINT32_(5)                                          /* (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Position */
#define MCAN_ILS_RF1WL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF1WL_Pos)                /* (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_RF1WL(value)                 (MCAN_ILS_RF1WL_Msk & (_UINT32_(value) << MCAN_ILS_RF1WL_Pos)) /* Assignment of value for RF1WL in the MCAN_ILS register */
#define MCAN_ILS_RF1FL_Pos                    _UINT32_(6)                                          /* (MCAN_ILS) Receive FIFO 1 Full Interrupt Line Position */
#define MCAN_ILS_RF1FL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF1FL_Pos)                /* (MCAN_ILS) Receive FIFO 1 Full Interrupt Line Mask */
#define MCAN_ILS_RF1FL(value)                 (MCAN_ILS_RF1FL_Msk & (_UINT32_(value) << MCAN_ILS_RF1FL_Pos)) /* Assignment of value for RF1FL in the MCAN_ILS register */
#define MCAN_ILS_RF1LL_Pos                    _UINT32_(7)                                          /* (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Position */
#define MCAN_ILS_RF1LL_Msk                    (_UINT32_(0x1) << MCAN_ILS_RF1LL_Pos)                /* (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Mask */
#define MCAN_ILS_RF1LL(value)                 (MCAN_ILS_RF1LL_Msk & (_UINT32_(value) << MCAN_ILS_RF1LL_Pos)) /* Assignment of value for RF1LL in the MCAN_ILS register */
#define MCAN_ILS_HPML_Pos                     _UINT32_(8)                                          /* (MCAN_ILS) High Priority Message Interrupt Line Position */
#define MCAN_ILS_HPML_Msk                     (_UINT32_(0x1) << MCAN_ILS_HPML_Pos)                 /* (MCAN_ILS) High Priority Message Interrupt Line Mask */
#define MCAN_ILS_HPML(value)                  (MCAN_ILS_HPML_Msk & (_UINT32_(value) << MCAN_ILS_HPML_Pos)) /* Assignment of value for HPML in the MCAN_ILS register */
#define MCAN_ILS_TCL_Pos                      _UINT32_(9)                                          /* (MCAN_ILS) Transmission Completed Interrupt Line Position */
#define MCAN_ILS_TCL_Msk                      (_UINT32_(0x1) << MCAN_ILS_TCL_Pos)                  /* (MCAN_ILS) Transmission Completed Interrupt Line Mask */
#define MCAN_ILS_TCL(value)                   (MCAN_ILS_TCL_Msk & (_UINT32_(value) << MCAN_ILS_TCL_Pos)) /* Assignment of value for TCL in the MCAN_ILS register */
#define MCAN_ILS_TCFL_Pos                     _UINT32_(10)                                         /* (MCAN_ILS) Transmission Cancellation Finished Interrupt Line Position */
#define MCAN_ILS_TCFL_Msk                     (_UINT32_(0x1) << MCAN_ILS_TCFL_Pos)                 /* (MCAN_ILS) Transmission Cancellation Finished Interrupt Line Mask */
#define MCAN_ILS_TCFL(value)                  (MCAN_ILS_TCFL_Msk & (_UINT32_(value) << MCAN_ILS_TCFL_Pos)) /* Assignment of value for TCFL in the MCAN_ILS register */
#define MCAN_ILS_TFEL_Pos                     _UINT32_(11)                                         /* (MCAN_ILS) Tx FIFO Empty Interrupt Line Position */
#define MCAN_ILS_TFEL_Msk                     (_UINT32_(0x1) << MCAN_ILS_TFEL_Pos)                 /* (MCAN_ILS) Tx FIFO Empty Interrupt Line Mask */
#define MCAN_ILS_TFEL(value)                  (MCAN_ILS_TFEL_Msk & (_UINT32_(value) << MCAN_ILS_TFEL_Pos)) /* Assignment of value for TFEL in the MCAN_ILS register */
#define MCAN_ILS_TEFNL_Pos                    _UINT32_(12)                                         /* (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Position */
#define MCAN_ILS_TEFNL_Msk                    (_UINT32_(0x1) << MCAN_ILS_TEFNL_Pos)                /* (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Mask */
#define MCAN_ILS_TEFNL(value)                 (MCAN_ILS_TEFNL_Msk & (_UINT32_(value) << MCAN_ILS_TEFNL_Pos)) /* Assignment of value for TEFNL in the MCAN_ILS register */
#define MCAN_ILS_TEFWL_Pos                    _UINT32_(13)                                         /* (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Position */
#define MCAN_ILS_TEFWL_Msk                    (_UINT32_(0x1) << MCAN_ILS_TEFWL_Pos)                /* (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_TEFWL(value)                 (MCAN_ILS_TEFWL_Msk & (_UINT32_(value) << MCAN_ILS_TEFWL_Pos)) /* Assignment of value for TEFWL in the MCAN_ILS register */
#define MCAN_ILS_TEFFL_Pos                    _UINT32_(14)                                         /* (MCAN_ILS) Tx Event FIFO Full Interrupt Line Position */
#define MCAN_ILS_TEFFL_Msk                    (_UINT32_(0x1) << MCAN_ILS_TEFFL_Pos)                /* (MCAN_ILS) Tx Event FIFO Full Interrupt Line Mask */
#define MCAN_ILS_TEFFL(value)                 (MCAN_ILS_TEFFL_Msk & (_UINT32_(value) << MCAN_ILS_TEFFL_Pos)) /* Assignment of value for TEFFL in the MCAN_ILS register */
#define MCAN_ILS_TEFLL_Pos                    _UINT32_(15)                                         /* (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Position */
#define MCAN_ILS_TEFLL_Msk                    (_UINT32_(0x1) << MCAN_ILS_TEFLL_Pos)                /* (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Mask */
#define MCAN_ILS_TEFLL(value)                 (MCAN_ILS_TEFLL_Msk & (_UINT32_(value) << MCAN_ILS_TEFLL_Pos)) /* Assignment of value for TEFLL in the MCAN_ILS register */
#define MCAN_ILS_TSWL_Pos                     _UINT32_(16)                                         /* (MCAN_ILS) Timestamp Wraparound Interrupt Line Position */
#define MCAN_ILS_TSWL_Msk                     (_UINT32_(0x1) << MCAN_ILS_TSWL_Pos)                 /* (MCAN_ILS) Timestamp Wraparound Interrupt Line Mask */
#define MCAN_ILS_TSWL(value)                  (MCAN_ILS_TSWL_Msk & (_UINT32_(value) << MCAN_ILS_TSWL_Pos)) /* Assignment of value for TSWL in the MCAN_ILS register */
#define MCAN_ILS_MRAFL_Pos                    _UINT32_(17)                                         /* (MCAN_ILS) Message RAM Access Failure Interrupt Line Position */
#define MCAN_ILS_MRAFL_Msk                    (_UINT32_(0x1) << MCAN_ILS_MRAFL_Pos)                /* (MCAN_ILS) Message RAM Access Failure Interrupt Line Mask */
#define MCAN_ILS_MRAFL(value)                 (MCAN_ILS_MRAFL_Msk & (_UINT32_(value) << MCAN_ILS_MRAFL_Pos)) /* Assignment of value for MRAFL in the MCAN_ILS register */
#define MCAN_ILS_TOOL_Pos                     _UINT32_(18)                                         /* (MCAN_ILS) Timeout Occurred Interrupt Line Position */
#define MCAN_ILS_TOOL_Msk                     (_UINT32_(0x1) << MCAN_ILS_TOOL_Pos)                 /* (MCAN_ILS) Timeout Occurred Interrupt Line Mask */
#define MCAN_ILS_TOOL(value)                  (MCAN_ILS_TOOL_Msk & (_UINT32_(value) << MCAN_ILS_TOOL_Pos)) /* Assignment of value for TOOL in the MCAN_ILS register */
#define MCAN_ILS_DRXL_Pos                     _UINT32_(19)                                         /* (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Position */
#define MCAN_ILS_DRXL_Msk                     (_UINT32_(0x1) << MCAN_ILS_DRXL_Pos)                 /* (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Mask */
#define MCAN_ILS_DRXL(value)                  (MCAN_ILS_DRXL_Msk & (_UINT32_(value) << MCAN_ILS_DRXL_Pos)) /* Assignment of value for DRXL in the MCAN_ILS register */
#define MCAN_ILS_ELOL_Pos                     _UINT32_(22)                                         /* (MCAN_ILS) Error Logging Overflow Interrupt Line Position */
#define MCAN_ILS_ELOL_Msk                     (_UINT32_(0x1) << MCAN_ILS_ELOL_Pos)                 /* (MCAN_ILS) Error Logging Overflow Interrupt Line Mask */
#define MCAN_ILS_ELOL(value)                  (MCAN_ILS_ELOL_Msk & (_UINT32_(value) << MCAN_ILS_ELOL_Pos)) /* Assignment of value for ELOL in the MCAN_ILS register */
#define MCAN_ILS_EPL_Pos                      _UINT32_(23)                                         /* (MCAN_ILS) Error Passive Interrupt Line Position */
#define MCAN_ILS_EPL_Msk                      (_UINT32_(0x1) << MCAN_ILS_EPL_Pos)                  /* (MCAN_ILS) Error Passive Interrupt Line Mask */
#define MCAN_ILS_EPL(value)                   (MCAN_ILS_EPL_Msk & (_UINT32_(value) << MCAN_ILS_EPL_Pos)) /* Assignment of value for EPL in the MCAN_ILS register */
#define MCAN_ILS_EWL_Pos                      _UINT32_(24)                                         /* (MCAN_ILS) Warning Status Interrupt Line Position */
#define MCAN_ILS_EWL_Msk                      (_UINT32_(0x1) << MCAN_ILS_EWL_Pos)                  /* (MCAN_ILS) Warning Status Interrupt Line Mask */
#define MCAN_ILS_EWL(value)                   (MCAN_ILS_EWL_Msk & (_UINT32_(value) << MCAN_ILS_EWL_Pos)) /* Assignment of value for EWL in the MCAN_ILS register */
#define MCAN_ILS_BOL_Pos                      _UINT32_(25)                                         /* (MCAN_ILS) Bus_Off Status Interrupt Line Position */
#define MCAN_ILS_BOL_Msk                      (_UINT32_(0x1) << MCAN_ILS_BOL_Pos)                  /* (MCAN_ILS) Bus_Off Status Interrupt Line Mask */
#define MCAN_ILS_BOL(value)                   (MCAN_ILS_BOL_Msk & (_UINT32_(value) << MCAN_ILS_BOL_Pos)) /* Assignment of value for BOL in the MCAN_ILS register */
#define MCAN_ILS_WDIL_Pos                     _UINT32_(26)                                         /* (MCAN_ILS) Watchdog Interrupt Line Position */
#define MCAN_ILS_WDIL_Msk                     (_UINT32_(0x1) << MCAN_ILS_WDIL_Pos)                 /* (MCAN_ILS) Watchdog Interrupt Line Mask */
#define MCAN_ILS_WDIL(value)                  (MCAN_ILS_WDIL_Msk & (_UINT32_(value) << MCAN_ILS_WDIL_Pos)) /* Assignment of value for WDIL in the MCAN_ILS register */
#define MCAN_ILS_PEAL_Pos                     _UINT32_(27)                                         /* (MCAN_ILS) Protocol Error in Arbitration Phase Line Position */
#define MCAN_ILS_PEAL_Msk                     (_UINT32_(0x1) << MCAN_ILS_PEAL_Pos)                 /* (MCAN_ILS) Protocol Error in Arbitration Phase Line Mask */
#define MCAN_ILS_PEAL(value)                  (MCAN_ILS_PEAL_Msk & (_UINT32_(value) << MCAN_ILS_PEAL_Pos)) /* Assignment of value for PEAL in the MCAN_ILS register */
#define MCAN_ILS_PEDL_Pos                     _UINT32_(28)                                         /* (MCAN_ILS) Protocol Error in Data Phase Line Position */
#define MCAN_ILS_PEDL_Msk                     (_UINT32_(0x1) << MCAN_ILS_PEDL_Pos)                 /* (MCAN_ILS) Protocol Error in Data Phase Line Mask */
#define MCAN_ILS_PEDL(value)                  (MCAN_ILS_PEDL_Msk & (_UINT32_(value) << MCAN_ILS_PEDL_Pos)) /* Assignment of value for PEDL in the MCAN_ILS register */
#define MCAN_ILS_ARAL_Pos                     _UINT32_(29)                                         /* (MCAN_ILS) Access to Reserved Address Line Position */
#define MCAN_ILS_ARAL_Msk                     (_UINT32_(0x1) << MCAN_ILS_ARAL_Pos)                 /* (MCAN_ILS) Access to Reserved Address Line Mask */
#define MCAN_ILS_ARAL(value)                  (MCAN_ILS_ARAL_Msk & (_UINT32_(value) << MCAN_ILS_ARAL_Pos)) /* Assignment of value for ARAL in the MCAN_ILS register */
#define MCAN_ILS_Msk                          _UINT32_(0x3FCFFFFF)                                 /* (MCAN_ILS) Register Mask  */


/* -------- MCAN_ILE : (MCAN Offset: 0x5C) (R/W 32) Interrupt Line Enable Register -------- */
#define MCAN_ILE_RESETVALUE                   _UINT32_(0x00)                                       /*  (MCAN_ILE) Interrupt Line Enable Register  Reset Value */

#define MCAN_ILE_EINT0_Pos                    _UINT32_(0)                                          /* (MCAN_ILE) Enable Interrupt Line 0 Position */
#define MCAN_ILE_EINT0_Msk                    (_UINT32_(0x1) << MCAN_ILE_EINT0_Pos)                /* (MCAN_ILE) Enable Interrupt Line 0 Mask */
#define MCAN_ILE_EINT0(value)                 (MCAN_ILE_EINT0_Msk & (_UINT32_(value) << MCAN_ILE_EINT0_Pos)) /* Assignment of value for EINT0 in the MCAN_ILE register */
#define   MCAN_ILE_EINT0_0_Val                _UINT32_(0x0)                                        /* (MCAN_ILE) Interrupt line MCAN_INT0 disabled.  */
#define   MCAN_ILE_EINT0_1_Val                _UINT32_(0x1)                                        /* (MCAN_ILE) Interrupt line MCAN_INT0 enabled.  */
#define MCAN_ILE_EINT0_0                      (MCAN_ILE_EINT0_0_Val << MCAN_ILE_EINT0_Pos)         /* (MCAN_ILE) Interrupt line MCAN_INT0 disabled. Position */
#define MCAN_ILE_EINT0_1                      (MCAN_ILE_EINT0_1_Val << MCAN_ILE_EINT0_Pos)         /* (MCAN_ILE) Interrupt line MCAN_INT0 enabled. Position */
#define MCAN_ILE_EINT1_Pos                    _UINT32_(1)                                          /* (MCAN_ILE) Enable Interrupt Line 1 Position */
#define MCAN_ILE_EINT1_Msk                    (_UINT32_(0x1) << MCAN_ILE_EINT1_Pos)                /* (MCAN_ILE) Enable Interrupt Line 1 Mask */
#define MCAN_ILE_EINT1(value)                 (MCAN_ILE_EINT1_Msk & (_UINT32_(value) << MCAN_ILE_EINT1_Pos)) /* Assignment of value for EINT1 in the MCAN_ILE register */
#define   MCAN_ILE_EINT1_0_Val                _UINT32_(0x0)                                        /* (MCAN_ILE) Interrupt line MCAN_INT1 disabled.  */
#define   MCAN_ILE_EINT1_1_Val                _UINT32_(0x1)                                        /* (MCAN_ILE) Interrupt line MCAN_INT1 enabled.  */
#define MCAN_ILE_EINT1_0                      (MCAN_ILE_EINT1_0_Val << MCAN_ILE_EINT1_Pos)         /* (MCAN_ILE) Interrupt line MCAN_INT1 disabled. Position */
#define MCAN_ILE_EINT1_1                      (MCAN_ILE_EINT1_1_Val << MCAN_ILE_EINT1_Pos)         /* (MCAN_ILE) Interrupt line MCAN_INT1 enabled. Position */
#define MCAN_ILE_Msk                          _UINT32_(0x00000003)                                 /* (MCAN_ILE) Register Mask  */

#define MCAN_ILE_EINT_Pos                     _UINT32_(0)                                          /* (MCAN_ILE Position) Enable Interrupt Line x */
#define MCAN_ILE_EINT_Msk                     (_UINT32_(0x3) << MCAN_ILE_EINT_Pos)                 /* (MCAN_ILE Mask) EINT */
#define MCAN_ILE_EINT(value)                  (MCAN_ILE_EINT_Msk & (_UINT32_(value) << MCAN_ILE_EINT_Pos)) 

/* -------- MCAN_GFC : (MCAN Offset: 0x80) (R/W 32) Global Filter Configuration Register -------- */
#define MCAN_GFC_RESETVALUE                   _UINT32_(0x00)                                       /*  (MCAN_GFC) Global Filter Configuration Register  Reset Value */

#define MCAN_GFC_RRFE_Pos                     _UINT32_(0)                                          /* (MCAN_GFC) Reject Remote Frames Extended Position */
#define MCAN_GFC_RRFE_Msk                     (_UINT32_(0x1) << MCAN_GFC_RRFE_Pos)                 /* (MCAN_GFC) Reject Remote Frames Extended Mask */
#define MCAN_GFC_RRFE(value)                  (MCAN_GFC_RRFE_Msk & (_UINT32_(value) << MCAN_GFC_RRFE_Pos)) /* Assignment of value for RRFE in the MCAN_GFC register */
#define   MCAN_GFC_RRFE_FILTER_Val            _UINT32_(0x0)                                        /* (MCAN_GFC) Filter remote frames with 29-bit extended IDs.  */
#define   MCAN_GFC_RRFE_REJECT_Val            _UINT32_(0x1)                                        /* (MCAN_GFC) Reject all remote frames with 29-bit extended IDs.  */
#define MCAN_GFC_RRFE_FILTER                  (MCAN_GFC_RRFE_FILTER_Val << MCAN_GFC_RRFE_Pos)      /* (MCAN_GFC) Filter remote frames with 29-bit extended IDs. Position */
#define MCAN_GFC_RRFE_REJECT                  (MCAN_GFC_RRFE_REJECT_Val << MCAN_GFC_RRFE_Pos)      /* (MCAN_GFC) Reject all remote frames with 29-bit extended IDs. Position */
#define MCAN_GFC_RRFS_Pos                     _UINT32_(1)                                          /* (MCAN_GFC) Reject Remote Frames Standard Position */
#define MCAN_GFC_RRFS_Msk                     (_UINT32_(0x1) << MCAN_GFC_RRFS_Pos)                 /* (MCAN_GFC) Reject Remote Frames Standard Mask */
#define MCAN_GFC_RRFS(value)                  (MCAN_GFC_RRFS_Msk & (_UINT32_(value) << MCAN_GFC_RRFS_Pos)) /* Assignment of value for RRFS in the MCAN_GFC register */
#define   MCAN_GFC_RRFS_FILTER_Val            _UINT32_(0x0)                                        /* (MCAN_GFC) Filter remote frames with 11-bit standard IDs.  */
#define   MCAN_GFC_RRFS_REJECT_Val            _UINT32_(0x1)                                        /* (MCAN_GFC) Reject all remote frames with 11-bit standard IDs.  */
#define MCAN_GFC_RRFS_FILTER                  (MCAN_GFC_RRFS_FILTER_Val << MCAN_GFC_RRFS_Pos)      /* (MCAN_GFC) Filter remote frames with 11-bit standard IDs. Position */
#define MCAN_GFC_RRFS_REJECT                  (MCAN_GFC_RRFS_REJECT_Val << MCAN_GFC_RRFS_Pos)      /* (MCAN_GFC) Reject all remote frames with 11-bit standard IDs. Position */
#define MCAN_GFC_ANFE_Pos                     _UINT32_(2)                                          /* (MCAN_GFC) Accept Non-matching Frames Extended Position */
#define MCAN_GFC_ANFE_Msk                     (_UINT32_(0x3) << MCAN_GFC_ANFE_Pos)                 /* (MCAN_GFC) Accept Non-matching Frames Extended Mask */
#define MCAN_GFC_ANFE(value)                  (MCAN_GFC_ANFE_Msk & (_UINT32_(value) << MCAN_GFC_ANFE_Pos)) /* Assignment of value for ANFE in the MCAN_GFC register */
#define   MCAN_GFC_ANFE_RX_FIFO_0_Val         _UINT32_(0x0)                                        /* (MCAN_GFC) Accept in Rx FIFO 0  */
#define   MCAN_GFC_ANFE_RX_FIFO_1_Val         _UINT32_(0x1)                                        /* (MCAN_GFC) Accept in Rx FIFO 1  */
#define   MCAN_GFC_ANFE_REJECTED_Val          _UINT32_(0x2)                                        /* (MCAN_GFC) Message rejected  */
#define MCAN_GFC_ANFE_RX_FIFO_0               (MCAN_GFC_ANFE_RX_FIFO_0_Val << MCAN_GFC_ANFE_Pos)   /* (MCAN_GFC) Accept in Rx FIFO 0 Position */
#define MCAN_GFC_ANFE_RX_FIFO_1               (MCAN_GFC_ANFE_RX_FIFO_1_Val << MCAN_GFC_ANFE_Pos)   /* (MCAN_GFC) Accept in Rx FIFO 1 Position */
#define MCAN_GFC_ANFE_REJECTED                (MCAN_GFC_ANFE_REJECTED_Val << MCAN_GFC_ANFE_Pos)    /* (MCAN_GFC) Message rejected Position */
#define MCAN_GFC_ANFS_Pos                     _UINT32_(4)                                          /* (MCAN_GFC) Accept Non-matching Frames Standard Position */
#define MCAN_GFC_ANFS_Msk                     (_UINT32_(0x3) << MCAN_GFC_ANFS_Pos)                 /* (MCAN_GFC) Accept Non-matching Frames Standard Mask */
#define MCAN_GFC_ANFS(value)                  (MCAN_GFC_ANFS_Msk & (_UINT32_(value) << MCAN_GFC_ANFS_Pos)) /* Assignment of value for ANFS in the MCAN_GFC register */
#define   MCAN_GFC_ANFS_RX_FIFO_0_Val         _UINT32_(0x0)                                        /* (MCAN_GFC) Accept in Rx FIFO 0  */
#define   MCAN_GFC_ANFS_RX_FIFO_1_Val         _UINT32_(0x1)                                        /* (MCAN_GFC) Accept in Rx FIFO 1  */
#define   MCAN_GFC_ANFS_REJECTED_Val          _UINT32_(0x2)                                        /* (MCAN_GFC) Message rejected  */
#define MCAN_GFC_ANFS_RX_FIFO_0               (MCAN_GFC_ANFS_RX_FIFO_0_Val << MCAN_GFC_ANFS_Pos)   /* (MCAN_GFC) Accept in Rx FIFO 0 Position */
#define MCAN_GFC_ANFS_RX_FIFO_1               (MCAN_GFC_ANFS_RX_FIFO_1_Val << MCAN_GFC_ANFS_Pos)   /* (MCAN_GFC) Accept in Rx FIFO 1 Position */
#define MCAN_GFC_ANFS_REJECTED                (MCAN_GFC_ANFS_REJECTED_Val << MCAN_GFC_ANFS_Pos)    /* (MCAN_GFC) Message rejected Position */
#define MCAN_GFC_Msk                          _UINT32_(0x0000003F)                                 /* (MCAN_GFC) Register Mask  */


/* -------- MCAN_SIDFC : (MCAN Offset: 0x84) (R/W 32) Standard ID Filter Configuration Register -------- */
#define MCAN_SIDFC_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_SIDFC) Standard ID Filter Configuration Register  Reset Value */

#define MCAN_SIDFC_FLSSA_Pos                  _UINT32_(2)                                          /* (MCAN_SIDFC) Filter List Standard Start Address Position */
#define MCAN_SIDFC_FLSSA_Msk                  (_UINT32_(0x3FFF) << MCAN_SIDFC_FLSSA_Pos)           /* (MCAN_SIDFC) Filter List Standard Start Address Mask */
#define MCAN_SIDFC_FLSSA(value)               (MCAN_SIDFC_FLSSA_Msk & (_UINT32_(value) << MCAN_SIDFC_FLSSA_Pos)) /* Assignment of value for FLSSA in the MCAN_SIDFC register */
#define MCAN_SIDFC_LSS_Pos                    _UINT32_(16)                                         /* (MCAN_SIDFC) List Size Standard Position */
#define MCAN_SIDFC_LSS_Msk                    (_UINT32_(0xFF) << MCAN_SIDFC_LSS_Pos)               /* (MCAN_SIDFC) List Size Standard Mask */
#define MCAN_SIDFC_LSS(value)                 (MCAN_SIDFC_LSS_Msk & (_UINT32_(value) << MCAN_SIDFC_LSS_Pos)) /* Assignment of value for LSS in the MCAN_SIDFC register */
#define   MCAN_SIDFC_LSS_0_Val                _UINT32_(0x0)                                        /* (MCAN_SIDFC) No standard Message ID filter.  */
#define MCAN_SIDFC_LSS_0                      (MCAN_SIDFC_LSS_0_Val << MCAN_SIDFC_LSS_Pos)         /* (MCAN_SIDFC) No standard Message ID filter. Position */
#define MCAN_SIDFC_Msk                        _UINT32_(0x00FFFFFC)                                 /* (MCAN_SIDFC) Register Mask  */


/* -------- MCAN_XIDFC : (MCAN Offset: 0x88) (R/W 32) Extended ID Filter Configuration Register -------- */
#define MCAN_XIDFC_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_XIDFC) Extended ID Filter Configuration Register  Reset Value */

#define MCAN_XIDFC_FLESA_Pos                  _UINT32_(2)                                          /* (MCAN_XIDFC) Filter List Extended Start Address Position */
#define MCAN_XIDFC_FLESA_Msk                  (_UINT32_(0x3FFF) << MCAN_XIDFC_FLESA_Pos)           /* (MCAN_XIDFC) Filter List Extended Start Address Mask */
#define MCAN_XIDFC_FLESA(value)               (MCAN_XIDFC_FLESA_Msk & (_UINT32_(value) << MCAN_XIDFC_FLESA_Pos)) /* Assignment of value for FLESA in the MCAN_XIDFC register */
#define MCAN_XIDFC_LSE_Pos                    _UINT32_(16)                                         /* (MCAN_XIDFC) List Size Extended Position */
#define MCAN_XIDFC_LSE_Msk                    (_UINT32_(0x7F) << MCAN_XIDFC_LSE_Pos)               /* (MCAN_XIDFC) List Size Extended Mask */
#define MCAN_XIDFC_LSE(value)                 (MCAN_XIDFC_LSE_Msk & (_UINT32_(value) << MCAN_XIDFC_LSE_Pos)) /* Assignment of value for LSE in the MCAN_XIDFC register */
#define   MCAN_XIDFC_LSE_0_Val                _UINT32_(0x0)                                        /* (MCAN_XIDFC) No extended Message ID filter.  */
#define MCAN_XIDFC_LSE_0                      (MCAN_XIDFC_LSE_0_Val << MCAN_XIDFC_LSE_Pos)         /* (MCAN_XIDFC) No extended Message ID filter. Position */
#define MCAN_XIDFC_Msk                        _UINT32_(0x007FFFFC)                                 /* (MCAN_XIDFC) Register Mask  */


/* -------- MCAN_XIDAM : (MCAN Offset: 0x90) (R/W 32) Extended ID AND Mask Register -------- */
#define MCAN_XIDAM_RESETVALUE                 _UINT32_(0x1FFFFFFF)                                 /*  (MCAN_XIDAM) Extended ID AND Mask Register  Reset Value */

#define MCAN_XIDAM_EIDM_Pos                   _UINT32_(0)                                          /* (MCAN_XIDAM) Extended ID Mask Position */
#define MCAN_XIDAM_EIDM_Msk                   (_UINT32_(0x1FFFFFFF) << MCAN_XIDAM_EIDM_Pos)        /* (MCAN_XIDAM) Extended ID Mask Mask */
#define MCAN_XIDAM_EIDM(value)                (MCAN_XIDAM_EIDM_Msk & (_UINT32_(value) << MCAN_XIDAM_EIDM_Pos)) /* Assignment of value for EIDM in the MCAN_XIDAM register */
#define MCAN_XIDAM_Msk                        _UINT32_(0x1FFFFFFF)                                 /* (MCAN_XIDAM) Register Mask  */


/* -------- MCAN_HPMS : (MCAN Offset: 0x94) ( R/ 32) High Priority Message Status Register -------- */
#define MCAN_HPMS_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_HPMS) High Priority Message Status Register  Reset Value */

#define MCAN_HPMS_BIDX_Pos                    _UINT32_(0)                                          /* (MCAN_HPMS) Buffer Index Position */
#define MCAN_HPMS_BIDX_Msk                    (_UINT32_(0x3F) << MCAN_HPMS_BIDX_Pos)               /* (MCAN_HPMS) Buffer Index Mask */
#define MCAN_HPMS_BIDX(value)                 (MCAN_HPMS_BIDX_Msk & (_UINT32_(value) << MCAN_HPMS_BIDX_Pos)) /* Assignment of value for BIDX in the MCAN_HPMS register */
#define MCAN_HPMS_MSI_Pos                     _UINT32_(6)                                          /* (MCAN_HPMS) Message Storage Indicator Position */
#define MCAN_HPMS_MSI_Msk                     (_UINT32_(0x3) << MCAN_HPMS_MSI_Pos)                 /* (MCAN_HPMS) Message Storage Indicator Mask */
#define MCAN_HPMS_MSI(value)                  (MCAN_HPMS_MSI_Msk & (_UINT32_(value) << MCAN_HPMS_MSI_Pos)) /* Assignment of value for MSI in the MCAN_HPMS register */
#define   MCAN_HPMS_MSI_NO_FIFO_SEL_Val       _UINT32_(0x0)                                        /* (MCAN_HPMS) No FIFO selected.  */
#define   MCAN_HPMS_MSI_LOST_Val              _UINT32_(0x1)                                        /* (MCAN_HPMS) FIFO message lost.  */
#define   MCAN_HPMS_MSI_FIFO_0_Val            _UINT32_(0x2)                                        /* (MCAN_HPMS) Message stored in FIFO 0.  */
#define   MCAN_HPMS_MSI_FIFO_1_Val            _UINT32_(0x3)                                        /* (MCAN_HPMS) Message stored in FIFO 1.  */
#define MCAN_HPMS_MSI_NO_FIFO_SEL             (MCAN_HPMS_MSI_NO_FIFO_SEL_Val << MCAN_HPMS_MSI_Pos) /* (MCAN_HPMS) No FIFO selected. Position */
#define MCAN_HPMS_MSI_LOST                    (MCAN_HPMS_MSI_LOST_Val << MCAN_HPMS_MSI_Pos)        /* (MCAN_HPMS) FIFO message lost. Position */
#define MCAN_HPMS_MSI_FIFO_0                  (MCAN_HPMS_MSI_FIFO_0_Val << MCAN_HPMS_MSI_Pos)      /* (MCAN_HPMS) Message stored in FIFO 0. Position */
#define MCAN_HPMS_MSI_FIFO_1                  (MCAN_HPMS_MSI_FIFO_1_Val << MCAN_HPMS_MSI_Pos)      /* (MCAN_HPMS) Message stored in FIFO 1. Position */
#define MCAN_HPMS_FIDX_Pos                    _UINT32_(8)                                          /* (MCAN_HPMS) Filter Index Position */
#define MCAN_HPMS_FIDX_Msk                    (_UINT32_(0x7F) << MCAN_HPMS_FIDX_Pos)               /* (MCAN_HPMS) Filter Index Mask */
#define MCAN_HPMS_FIDX(value)                 (MCAN_HPMS_FIDX_Msk & (_UINT32_(value) << MCAN_HPMS_FIDX_Pos)) /* Assignment of value for FIDX in the MCAN_HPMS register */
#define MCAN_HPMS_FLST_Pos                    _UINT32_(15)                                         /* (MCAN_HPMS) Filter List Position */
#define MCAN_HPMS_FLST_Msk                    (_UINT32_(0x1) << MCAN_HPMS_FLST_Pos)                /* (MCAN_HPMS) Filter List Mask */
#define MCAN_HPMS_FLST(value)                 (MCAN_HPMS_FLST_Msk & (_UINT32_(value) << MCAN_HPMS_FLST_Pos)) /* Assignment of value for FLST in the MCAN_HPMS register */
#define   MCAN_HPMS_FLST_0_Val                _UINT32_(0x0)                                        /* (MCAN_HPMS) Standard filter list  */
#define   MCAN_HPMS_FLST_1_Val                _UINT32_(0x1)                                        /* (MCAN_HPMS) Extended filter list  */
#define MCAN_HPMS_FLST_0                      (MCAN_HPMS_FLST_0_Val << MCAN_HPMS_FLST_Pos)         /* (MCAN_HPMS) Standard filter list Position */
#define MCAN_HPMS_FLST_1                      (MCAN_HPMS_FLST_1_Val << MCAN_HPMS_FLST_Pos)         /* (MCAN_HPMS) Extended filter list Position */
#define MCAN_HPMS_Msk                         _UINT32_(0x0000FFFF)                                 /* (MCAN_HPMS) Register Mask  */


/* -------- MCAN_NDAT1 : (MCAN Offset: 0x98) (R/W 32) New Data 1 Register -------- */
#define MCAN_NDAT1_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_NDAT1) New Data 1 Register  Reset Value */

#define MCAN_NDAT1_ND0_Pos                    _UINT32_(0)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND0_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND0_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND0(value)                 (MCAN_NDAT1_ND0_Msk & (_UINT32_(value) << MCAN_NDAT1_ND0_Pos)) /* Assignment of value for ND0 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND0_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND0_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND0_0                      (MCAN_NDAT1_ND0_0_Val << MCAN_NDAT1_ND0_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND0_1                      (MCAN_NDAT1_ND0_1_Val << MCAN_NDAT1_ND0_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND1_Pos                    _UINT32_(1)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND1_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND1_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND1(value)                 (MCAN_NDAT1_ND1_Msk & (_UINT32_(value) << MCAN_NDAT1_ND1_Pos)) /* Assignment of value for ND1 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND1_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND1_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND1_0                      (MCAN_NDAT1_ND1_0_Val << MCAN_NDAT1_ND1_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND1_1                      (MCAN_NDAT1_ND1_1_Val << MCAN_NDAT1_ND1_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND2_Pos                    _UINT32_(2)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND2_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND2_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND2(value)                 (MCAN_NDAT1_ND2_Msk & (_UINT32_(value) << MCAN_NDAT1_ND2_Pos)) /* Assignment of value for ND2 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND2_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND2_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND2_0                      (MCAN_NDAT1_ND2_0_Val << MCAN_NDAT1_ND2_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND2_1                      (MCAN_NDAT1_ND2_1_Val << MCAN_NDAT1_ND2_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND3_Pos                    _UINT32_(3)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND3_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND3_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND3(value)                 (MCAN_NDAT1_ND3_Msk & (_UINT32_(value) << MCAN_NDAT1_ND3_Pos)) /* Assignment of value for ND3 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND3_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND3_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND3_0                      (MCAN_NDAT1_ND3_0_Val << MCAN_NDAT1_ND3_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND3_1                      (MCAN_NDAT1_ND3_1_Val << MCAN_NDAT1_ND3_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND4_Pos                    _UINT32_(4)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND4_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND4_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND4(value)                 (MCAN_NDAT1_ND4_Msk & (_UINT32_(value) << MCAN_NDAT1_ND4_Pos)) /* Assignment of value for ND4 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND4_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND4_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND4_0                      (MCAN_NDAT1_ND4_0_Val << MCAN_NDAT1_ND4_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND4_1                      (MCAN_NDAT1_ND4_1_Val << MCAN_NDAT1_ND4_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND5_Pos                    _UINT32_(5)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND5_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND5_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND5(value)                 (MCAN_NDAT1_ND5_Msk & (_UINT32_(value) << MCAN_NDAT1_ND5_Pos)) /* Assignment of value for ND5 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND5_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND5_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND5_0                      (MCAN_NDAT1_ND5_0_Val << MCAN_NDAT1_ND5_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND5_1                      (MCAN_NDAT1_ND5_1_Val << MCAN_NDAT1_ND5_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND6_Pos                    _UINT32_(6)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND6_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND6_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND6(value)                 (MCAN_NDAT1_ND6_Msk & (_UINT32_(value) << MCAN_NDAT1_ND6_Pos)) /* Assignment of value for ND6 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND6_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND6_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND6_0                      (MCAN_NDAT1_ND6_0_Val << MCAN_NDAT1_ND6_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND6_1                      (MCAN_NDAT1_ND6_1_Val << MCAN_NDAT1_ND6_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND7_Pos                    _UINT32_(7)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND7_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND7_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND7(value)                 (MCAN_NDAT1_ND7_Msk & (_UINT32_(value) << MCAN_NDAT1_ND7_Pos)) /* Assignment of value for ND7 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND7_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND7_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND7_0                      (MCAN_NDAT1_ND7_0_Val << MCAN_NDAT1_ND7_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND7_1                      (MCAN_NDAT1_ND7_1_Val << MCAN_NDAT1_ND7_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND8_Pos                    _UINT32_(8)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND8_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND8_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND8(value)                 (MCAN_NDAT1_ND8_Msk & (_UINT32_(value) << MCAN_NDAT1_ND8_Pos)) /* Assignment of value for ND8 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND8_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND8_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND8_0                      (MCAN_NDAT1_ND8_0_Val << MCAN_NDAT1_ND8_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND8_1                      (MCAN_NDAT1_ND8_1_Val << MCAN_NDAT1_ND8_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND9_Pos                    _UINT32_(9)                                          /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND9_Msk                    (_UINT32_(0x1) << MCAN_NDAT1_ND9_Pos)                /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND9(value)                 (MCAN_NDAT1_ND9_Msk & (_UINT32_(value) << MCAN_NDAT1_ND9_Pos)) /* Assignment of value for ND9 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND9_0_Val                _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND9_1_Val                _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND9_0                      (MCAN_NDAT1_ND9_0_Val << MCAN_NDAT1_ND9_Pos)         /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND9_1                      (MCAN_NDAT1_ND9_1_Val << MCAN_NDAT1_ND9_Pos)         /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND10_Pos                   _UINT32_(10)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND10_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND10_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND10(value)                (MCAN_NDAT1_ND10_Msk & (_UINT32_(value) << MCAN_NDAT1_ND10_Pos)) /* Assignment of value for ND10 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND10_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND10_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND10_0                     (MCAN_NDAT1_ND10_0_Val << MCAN_NDAT1_ND10_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND10_1                     (MCAN_NDAT1_ND10_1_Val << MCAN_NDAT1_ND10_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND11_Pos                   _UINT32_(11)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND11_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND11_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND11(value)                (MCAN_NDAT1_ND11_Msk & (_UINT32_(value) << MCAN_NDAT1_ND11_Pos)) /* Assignment of value for ND11 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND11_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND11_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND11_0                     (MCAN_NDAT1_ND11_0_Val << MCAN_NDAT1_ND11_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND11_1                     (MCAN_NDAT1_ND11_1_Val << MCAN_NDAT1_ND11_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND12_Pos                   _UINT32_(12)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND12_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND12_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND12(value)                (MCAN_NDAT1_ND12_Msk & (_UINT32_(value) << MCAN_NDAT1_ND12_Pos)) /* Assignment of value for ND12 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND12_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND12_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND12_0                     (MCAN_NDAT1_ND12_0_Val << MCAN_NDAT1_ND12_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND12_1                     (MCAN_NDAT1_ND12_1_Val << MCAN_NDAT1_ND12_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND13_Pos                   _UINT32_(13)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND13_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND13_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND13(value)                (MCAN_NDAT1_ND13_Msk & (_UINT32_(value) << MCAN_NDAT1_ND13_Pos)) /* Assignment of value for ND13 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND13_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND13_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND13_0                     (MCAN_NDAT1_ND13_0_Val << MCAN_NDAT1_ND13_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND13_1                     (MCAN_NDAT1_ND13_1_Val << MCAN_NDAT1_ND13_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND14_Pos                   _UINT32_(14)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND14_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND14_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND14(value)                (MCAN_NDAT1_ND14_Msk & (_UINT32_(value) << MCAN_NDAT1_ND14_Pos)) /* Assignment of value for ND14 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND14_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND14_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND14_0                     (MCAN_NDAT1_ND14_0_Val << MCAN_NDAT1_ND14_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND14_1                     (MCAN_NDAT1_ND14_1_Val << MCAN_NDAT1_ND14_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND15_Pos                   _UINT32_(15)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND15_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND15_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND15(value)                (MCAN_NDAT1_ND15_Msk & (_UINT32_(value) << MCAN_NDAT1_ND15_Pos)) /* Assignment of value for ND15 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND15_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND15_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND15_0                     (MCAN_NDAT1_ND15_0_Val << MCAN_NDAT1_ND15_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND15_1                     (MCAN_NDAT1_ND15_1_Val << MCAN_NDAT1_ND15_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND16_Pos                   _UINT32_(16)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND16_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND16_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND16(value)                (MCAN_NDAT1_ND16_Msk & (_UINT32_(value) << MCAN_NDAT1_ND16_Pos)) /* Assignment of value for ND16 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND16_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND16_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND16_0                     (MCAN_NDAT1_ND16_0_Val << MCAN_NDAT1_ND16_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND16_1                     (MCAN_NDAT1_ND16_1_Val << MCAN_NDAT1_ND16_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND17_Pos                   _UINT32_(17)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND17_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND17_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND17(value)                (MCAN_NDAT1_ND17_Msk & (_UINT32_(value) << MCAN_NDAT1_ND17_Pos)) /* Assignment of value for ND17 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND17_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND17_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND17_0                     (MCAN_NDAT1_ND17_0_Val << MCAN_NDAT1_ND17_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND17_1                     (MCAN_NDAT1_ND17_1_Val << MCAN_NDAT1_ND17_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND18_Pos                   _UINT32_(18)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND18_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND18_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND18(value)                (MCAN_NDAT1_ND18_Msk & (_UINT32_(value) << MCAN_NDAT1_ND18_Pos)) /* Assignment of value for ND18 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND18_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND18_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND18_0                     (MCAN_NDAT1_ND18_0_Val << MCAN_NDAT1_ND18_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND18_1                     (MCAN_NDAT1_ND18_1_Val << MCAN_NDAT1_ND18_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND19_Pos                   _UINT32_(19)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND19_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND19_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND19(value)                (MCAN_NDAT1_ND19_Msk & (_UINT32_(value) << MCAN_NDAT1_ND19_Pos)) /* Assignment of value for ND19 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND19_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND19_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND19_0                     (MCAN_NDAT1_ND19_0_Val << MCAN_NDAT1_ND19_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND19_1                     (MCAN_NDAT1_ND19_1_Val << MCAN_NDAT1_ND19_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND20_Pos                   _UINT32_(20)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND20_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND20_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND20(value)                (MCAN_NDAT1_ND20_Msk & (_UINT32_(value) << MCAN_NDAT1_ND20_Pos)) /* Assignment of value for ND20 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND20_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND20_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND20_0                     (MCAN_NDAT1_ND20_0_Val << MCAN_NDAT1_ND20_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND20_1                     (MCAN_NDAT1_ND20_1_Val << MCAN_NDAT1_ND20_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND21_Pos                   _UINT32_(21)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND21_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND21_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND21(value)                (MCAN_NDAT1_ND21_Msk & (_UINT32_(value) << MCAN_NDAT1_ND21_Pos)) /* Assignment of value for ND21 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND21_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND21_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND21_0                     (MCAN_NDAT1_ND21_0_Val << MCAN_NDAT1_ND21_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND21_1                     (MCAN_NDAT1_ND21_1_Val << MCAN_NDAT1_ND21_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND22_Pos                   _UINT32_(22)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND22_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND22_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND22(value)                (MCAN_NDAT1_ND22_Msk & (_UINT32_(value) << MCAN_NDAT1_ND22_Pos)) /* Assignment of value for ND22 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND22_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND22_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND22_0                     (MCAN_NDAT1_ND22_0_Val << MCAN_NDAT1_ND22_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND22_1                     (MCAN_NDAT1_ND22_1_Val << MCAN_NDAT1_ND22_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND23_Pos                   _UINT32_(23)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND23_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND23_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND23(value)                (MCAN_NDAT1_ND23_Msk & (_UINT32_(value) << MCAN_NDAT1_ND23_Pos)) /* Assignment of value for ND23 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND23_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND23_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND23_0                     (MCAN_NDAT1_ND23_0_Val << MCAN_NDAT1_ND23_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND23_1                     (MCAN_NDAT1_ND23_1_Val << MCAN_NDAT1_ND23_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND24_Pos                   _UINT32_(24)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND24_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND24_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND24(value)                (MCAN_NDAT1_ND24_Msk & (_UINT32_(value) << MCAN_NDAT1_ND24_Pos)) /* Assignment of value for ND24 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND24_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND24_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND24_0                     (MCAN_NDAT1_ND24_0_Val << MCAN_NDAT1_ND24_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND24_1                     (MCAN_NDAT1_ND24_1_Val << MCAN_NDAT1_ND24_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND25_Pos                   _UINT32_(25)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND25_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND25_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND25(value)                (MCAN_NDAT1_ND25_Msk & (_UINT32_(value) << MCAN_NDAT1_ND25_Pos)) /* Assignment of value for ND25 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND25_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND25_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND25_0                     (MCAN_NDAT1_ND25_0_Val << MCAN_NDAT1_ND25_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND25_1                     (MCAN_NDAT1_ND25_1_Val << MCAN_NDAT1_ND25_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND26_Pos                   _UINT32_(26)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND26_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND26_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND26(value)                (MCAN_NDAT1_ND26_Msk & (_UINT32_(value) << MCAN_NDAT1_ND26_Pos)) /* Assignment of value for ND26 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND26_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND26_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND26_0                     (MCAN_NDAT1_ND26_0_Val << MCAN_NDAT1_ND26_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND26_1                     (MCAN_NDAT1_ND26_1_Val << MCAN_NDAT1_ND26_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND27_Pos                   _UINT32_(27)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND27_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND27_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND27(value)                (MCAN_NDAT1_ND27_Msk & (_UINT32_(value) << MCAN_NDAT1_ND27_Pos)) /* Assignment of value for ND27 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND27_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND27_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND27_0                     (MCAN_NDAT1_ND27_0_Val << MCAN_NDAT1_ND27_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND27_1                     (MCAN_NDAT1_ND27_1_Val << MCAN_NDAT1_ND27_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND28_Pos                   _UINT32_(28)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND28_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND28_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND28(value)                (MCAN_NDAT1_ND28_Msk & (_UINT32_(value) << MCAN_NDAT1_ND28_Pos)) /* Assignment of value for ND28 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND28_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND28_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND28_0                     (MCAN_NDAT1_ND28_0_Val << MCAN_NDAT1_ND28_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND28_1                     (MCAN_NDAT1_ND28_1_Val << MCAN_NDAT1_ND28_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND29_Pos                   _UINT32_(29)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND29_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND29_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND29(value)                (MCAN_NDAT1_ND29_Msk & (_UINT32_(value) << MCAN_NDAT1_ND29_Pos)) /* Assignment of value for ND29 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND29_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND29_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND29_0                     (MCAN_NDAT1_ND29_0_Val << MCAN_NDAT1_ND29_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND29_1                     (MCAN_NDAT1_ND29_1_Val << MCAN_NDAT1_ND29_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND30_Pos                   _UINT32_(30)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND30_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND30_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND30(value)                (MCAN_NDAT1_ND30_Msk & (_UINT32_(value) << MCAN_NDAT1_ND30_Pos)) /* Assignment of value for ND30 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND30_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND30_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND30_0                     (MCAN_NDAT1_ND30_0_Val << MCAN_NDAT1_ND30_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND30_1                     (MCAN_NDAT1_ND30_1_Val << MCAN_NDAT1_ND30_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_ND31_Pos                   _UINT32_(31)                                         /* (MCAN_NDAT1) New Data Position */
#define MCAN_NDAT1_ND31_Msk                   (_UINT32_(0x1) << MCAN_NDAT1_ND31_Pos)               /* (MCAN_NDAT1) New Data Mask */
#define MCAN_NDAT1_ND31(value)                (MCAN_NDAT1_ND31_Msk & (_UINT32_(value) << MCAN_NDAT1_ND31_Pos)) /* Assignment of value for ND31 in the MCAN_NDAT1 register */
#define   MCAN_NDAT1_ND31_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT1) Receive Buffer not updated  */
#define   MCAN_NDAT1_ND31_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT1) Receive Buffer updated from new message  */
#define MCAN_NDAT1_ND31_0                     (MCAN_NDAT1_ND31_0_Val << MCAN_NDAT1_ND31_Pos)       /* (MCAN_NDAT1) Receive Buffer not updated Position */
#define MCAN_NDAT1_ND31_1                     (MCAN_NDAT1_ND31_1_Val << MCAN_NDAT1_ND31_Pos)       /* (MCAN_NDAT1) Receive Buffer updated from new message Position */
#define MCAN_NDAT1_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_NDAT1) Register Mask  */

#define MCAN_NDAT1_ND_Pos                     _UINT32_(0)                                          /* (MCAN_NDAT1 Position) New Data */
#define MCAN_NDAT1_ND_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_NDAT1_ND_Pos)          /* (MCAN_NDAT1 Mask) ND */
#define MCAN_NDAT1_ND(value)                  (MCAN_NDAT1_ND_Msk & (_UINT32_(value) << MCAN_NDAT1_ND_Pos)) 

/* -------- MCAN_NDAT2 : (MCAN Offset: 0x9C) (R/W 32) New Data 2 Register -------- */
#define MCAN_NDAT2_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_NDAT2) New Data 2 Register  Reset Value */

#define MCAN_NDAT2_ND32_Pos                   _UINT32_(0)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND32_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND32_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND32(value)                (MCAN_NDAT2_ND32_Msk & (_UINT32_(value) << MCAN_NDAT2_ND32_Pos)) /* Assignment of value for ND32 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND32_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND32_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND32_0                     (MCAN_NDAT2_ND32_0_Val << MCAN_NDAT2_ND32_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND32_1                     (MCAN_NDAT2_ND32_1_Val << MCAN_NDAT2_ND32_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND33_Pos                   _UINT32_(1)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND33_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND33_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND33(value)                (MCAN_NDAT2_ND33_Msk & (_UINT32_(value) << MCAN_NDAT2_ND33_Pos)) /* Assignment of value for ND33 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND33_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND33_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND33_0                     (MCAN_NDAT2_ND33_0_Val << MCAN_NDAT2_ND33_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND33_1                     (MCAN_NDAT2_ND33_1_Val << MCAN_NDAT2_ND33_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND34_Pos                   _UINT32_(2)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND34_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND34_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND34(value)                (MCAN_NDAT2_ND34_Msk & (_UINT32_(value) << MCAN_NDAT2_ND34_Pos)) /* Assignment of value for ND34 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND34_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND34_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND34_0                     (MCAN_NDAT2_ND34_0_Val << MCAN_NDAT2_ND34_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND34_1                     (MCAN_NDAT2_ND34_1_Val << MCAN_NDAT2_ND34_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND35_Pos                   _UINT32_(3)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND35_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND35_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND35(value)                (MCAN_NDAT2_ND35_Msk & (_UINT32_(value) << MCAN_NDAT2_ND35_Pos)) /* Assignment of value for ND35 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND35_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND35_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND35_0                     (MCAN_NDAT2_ND35_0_Val << MCAN_NDAT2_ND35_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND35_1                     (MCAN_NDAT2_ND35_1_Val << MCAN_NDAT2_ND35_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND36_Pos                   _UINT32_(4)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND36_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND36_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND36(value)                (MCAN_NDAT2_ND36_Msk & (_UINT32_(value) << MCAN_NDAT2_ND36_Pos)) /* Assignment of value for ND36 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND36_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND36_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND36_0                     (MCAN_NDAT2_ND36_0_Val << MCAN_NDAT2_ND36_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND36_1                     (MCAN_NDAT2_ND36_1_Val << MCAN_NDAT2_ND36_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND37_Pos                   _UINT32_(5)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND37_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND37_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND37(value)                (MCAN_NDAT2_ND37_Msk & (_UINT32_(value) << MCAN_NDAT2_ND37_Pos)) /* Assignment of value for ND37 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND37_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND37_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND37_0                     (MCAN_NDAT2_ND37_0_Val << MCAN_NDAT2_ND37_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND37_1                     (MCAN_NDAT2_ND37_1_Val << MCAN_NDAT2_ND37_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND38_Pos                   _UINT32_(6)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND38_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND38_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND38(value)                (MCAN_NDAT2_ND38_Msk & (_UINT32_(value) << MCAN_NDAT2_ND38_Pos)) /* Assignment of value for ND38 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND38_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND38_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND38_0                     (MCAN_NDAT2_ND38_0_Val << MCAN_NDAT2_ND38_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND38_1                     (MCAN_NDAT2_ND38_1_Val << MCAN_NDAT2_ND38_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND39_Pos                   _UINT32_(7)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND39_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND39_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND39(value)                (MCAN_NDAT2_ND39_Msk & (_UINT32_(value) << MCAN_NDAT2_ND39_Pos)) /* Assignment of value for ND39 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND39_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND39_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND39_0                     (MCAN_NDAT2_ND39_0_Val << MCAN_NDAT2_ND39_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND39_1                     (MCAN_NDAT2_ND39_1_Val << MCAN_NDAT2_ND39_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND40_Pos                   _UINT32_(8)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND40_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND40_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND40(value)                (MCAN_NDAT2_ND40_Msk & (_UINT32_(value) << MCAN_NDAT2_ND40_Pos)) /* Assignment of value for ND40 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND40_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND40_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND40_0                     (MCAN_NDAT2_ND40_0_Val << MCAN_NDAT2_ND40_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND40_1                     (MCAN_NDAT2_ND40_1_Val << MCAN_NDAT2_ND40_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND41_Pos                   _UINT32_(9)                                          /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND41_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND41_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND41(value)                (MCAN_NDAT2_ND41_Msk & (_UINT32_(value) << MCAN_NDAT2_ND41_Pos)) /* Assignment of value for ND41 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND41_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND41_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND41_0                     (MCAN_NDAT2_ND41_0_Val << MCAN_NDAT2_ND41_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND41_1                     (MCAN_NDAT2_ND41_1_Val << MCAN_NDAT2_ND41_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND42_Pos                   _UINT32_(10)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND42_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND42_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND42(value)                (MCAN_NDAT2_ND42_Msk & (_UINT32_(value) << MCAN_NDAT2_ND42_Pos)) /* Assignment of value for ND42 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND42_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND42_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND42_0                     (MCAN_NDAT2_ND42_0_Val << MCAN_NDAT2_ND42_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND42_1                     (MCAN_NDAT2_ND42_1_Val << MCAN_NDAT2_ND42_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND43_Pos                   _UINT32_(11)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND43_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND43_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND43(value)                (MCAN_NDAT2_ND43_Msk & (_UINT32_(value) << MCAN_NDAT2_ND43_Pos)) /* Assignment of value for ND43 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND43_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND43_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND43_0                     (MCAN_NDAT2_ND43_0_Val << MCAN_NDAT2_ND43_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND43_1                     (MCAN_NDAT2_ND43_1_Val << MCAN_NDAT2_ND43_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND44_Pos                   _UINT32_(12)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND44_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND44_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND44(value)                (MCAN_NDAT2_ND44_Msk & (_UINT32_(value) << MCAN_NDAT2_ND44_Pos)) /* Assignment of value for ND44 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND44_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND44_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND44_0                     (MCAN_NDAT2_ND44_0_Val << MCAN_NDAT2_ND44_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND44_1                     (MCAN_NDAT2_ND44_1_Val << MCAN_NDAT2_ND44_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND45_Pos                   _UINT32_(13)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND45_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND45_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND45(value)                (MCAN_NDAT2_ND45_Msk & (_UINT32_(value) << MCAN_NDAT2_ND45_Pos)) /* Assignment of value for ND45 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND45_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND45_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND45_0                     (MCAN_NDAT2_ND45_0_Val << MCAN_NDAT2_ND45_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND45_1                     (MCAN_NDAT2_ND45_1_Val << MCAN_NDAT2_ND45_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND46_Pos                   _UINT32_(14)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND46_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND46_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND46(value)                (MCAN_NDAT2_ND46_Msk & (_UINT32_(value) << MCAN_NDAT2_ND46_Pos)) /* Assignment of value for ND46 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND46_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND46_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND46_0                     (MCAN_NDAT2_ND46_0_Val << MCAN_NDAT2_ND46_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND46_1                     (MCAN_NDAT2_ND46_1_Val << MCAN_NDAT2_ND46_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND47_Pos                   _UINT32_(15)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND47_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND47_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND47(value)                (MCAN_NDAT2_ND47_Msk & (_UINT32_(value) << MCAN_NDAT2_ND47_Pos)) /* Assignment of value for ND47 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND47_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND47_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND47_0                     (MCAN_NDAT2_ND47_0_Val << MCAN_NDAT2_ND47_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND47_1                     (MCAN_NDAT2_ND47_1_Val << MCAN_NDAT2_ND47_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND48_Pos                   _UINT32_(16)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND48_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND48_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND48(value)                (MCAN_NDAT2_ND48_Msk & (_UINT32_(value) << MCAN_NDAT2_ND48_Pos)) /* Assignment of value for ND48 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND48_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND48_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND48_0                     (MCAN_NDAT2_ND48_0_Val << MCAN_NDAT2_ND48_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND48_1                     (MCAN_NDAT2_ND48_1_Val << MCAN_NDAT2_ND48_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND49_Pos                   _UINT32_(17)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND49_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND49_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND49(value)                (MCAN_NDAT2_ND49_Msk & (_UINT32_(value) << MCAN_NDAT2_ND49_Pos)) /* Assignment of value for ND49 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND49_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND49_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND49_0                     (MCAN_NDAT2_ND49_0_Val << MCAN_NDAT2_ND49_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND49_1                     (MCAN_NDAT2_ND49_1_Val << MCAN_NDAT2_ND49_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND50_Pos                   _UINT32_(18)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND50_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND50_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND50(value)                (MCAN_NDAT2_ND50_Msk & (_UINT32_(value) << MCAN_NDAT2_ND50_Pos)) /* Assignment of value for ND50 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND50_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND50_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND50_0                     (MCAN_NDAT2_ND50_0_Val << MCAN_NDAT2_ND50_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND50_1                     (MCAN_NDAT2_ND50_1_Val << MCAN_NDAT2_ND50_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND51_Pos                   _UINT32_(19)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND51_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND51_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND51(value)                (MCAN_NDAT2_ND51_Msk & (_UINT32_(value) << MCAN_NDAT2_ND51_Pos)) /* Assignment of value for ND51 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND51_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND51_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND51_0                     (MCAN_NDAT2_ND51_0_Val << MCAN_NDAT2_ND51_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND51_1                     (MCAN_NDAT2_ND51_1_Val << MCAN_NDAT2_ND51_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND52_Pos                   _UINT32_(20)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND52_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND52_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND52(value)                (MCAN_NDAT2_ND52_Msk & (_UINT32_(value) << MCAN_NDAT2_ND52_Pos)) /* Assignment of value for ND52 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND52_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND52_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND52_0                     (MCAN_NDAT2_ND52_0_Val << MCAN_NDAT2_ND52_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND52_1                     (MCAN_NDAT2_ND52_1_Val << MCAN_NDAT2_ND52_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND53_Pos                   _UINT32_(21)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND53_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND53_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND53(value)                (MCAN_NDAT2_ND53_Msk & (_UINT32_(value) << MCAN_NDAT2_ND53_Pos)) /* Assignment of value for ND53 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND53_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND53_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND53_0                     (MCAN_NDAT2_ND53_0_Val << MCAN_NDAT2_ND53_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND53_1                     (MCAN_NDAT2_ND53_1_Val << MCAN_NDAT2_ND53_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND54_Pos                   _UINT32_(22)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND54_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND54_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND54(value)                (MCAN_NDAT2_ND54_Msk & (_UINT32_(value) << MCAN_NDAT2_ND54_Pos)) /* Assignment of value for ND54 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND54_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND54_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND54_0                     (MCAN_NDAT2_ND54_0_Val << MCAN_NDAT2_ND54_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND54_1                     (MCAN_NDAT2_ND54_1_Val << MCAN_NDAT2_ND54_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND55_Pos                   _UINT32_(23)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND55_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND55_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND55(value)                (MCAN_NDAT2_ND55_Msk & (_UINT32_(value) << MCAN_NDAT2_ND55_Pos)) /* Assignment of value for ND55 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND55_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND55_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND55_0                     (MCAN_NDAT2_ND55_0_Val << MCAN_NDAT2_ND55_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND55_1                     (MCAN_NDAT2_ND55_1_Val << MCAN_NDAT2_ND55_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND56_Pos                   _UINT32_(24)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND56_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND56_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND56(value)                (MCAN_NDAT2_ND56_Msk & (_UINT32_(value) << MCAN_NDAT2_ND56_Pos)) /* Assignment of value for ND56 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND56_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND56_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND56_0                     (MCAN_NDAT2_ND56_0_Val << MCAN_NDAT2_ND56_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND56_1                     (MCAN_NDAT2_ND56_1_Val << MCAN_NDAT2_ND56_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND57_Pos                   _UINT32_(25)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND57_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND57_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND57(value)                (MCAN_NDAT2_ND57_Msk & (_UINT32_(value) << MCAN_NDAT2_ND57_Pos)) /* Assignment of value for ND57 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND57_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND57_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND57_0                     (MCAN_NDAT2_ND57_0_Val << MCAN_NDAT2_ND57_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND57_1                     (MCAN_NDAT2_ND57_1_Val << MCAN_NDAT2_ND57_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND58_Pos                   _UINT32_(26)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND58_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND58_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND58(value)                (MCAN_NDAT2_ND58_Msk & (_UINT32_(value) << MCAN_NDAT2_ND58_Pos)) /* Assignment of value for ND58 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND58_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND58_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND58_0                     (MCAN_NDAT2_ND58_0_Val << MCAN_NDAT2_ND58_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND58_1                     (MCAN_NDAT2_ND58_1_Val << MCAN_NDAT2_ND58_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND59_Pos                   _UINT32_(27)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND59_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND59_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND59(value)                (MCAN_NDAT2_ND59_Msk & (_UINT32_(value) << MCAN_NDAT2_ND59_Pos)) /* Assignment of value for ND59 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND59_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND59_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND59_0                     (MCAN_NDAT2_ND59_0_Val << MCAN_NDAT2_ND59_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND59_1                     (MCAN_NDAT2_ND59_1_Val << MCAN_NDAT2_ND59_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND60_Pos                   _UINT32_(28)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND60_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND60_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND60(value)                (MCAN_NDAT2_ND60_Msk & (_UINT32_(value) << MCAN_NDAT2_ND60_Pos)) /* Assignment of value for ND60 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND60_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND60_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND60_0                     (MCAN_NDAT2_ND60_0_Val << MCAN_NDAT2_ND60_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND60_1                     (MCAN_NDAT2_ND60_1_Val << MCAN_NDAT2_ND60_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND61_Pos                   _UINT32_(29)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND61_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND61_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND61(value)                (MCAN_NDAT2_ND61_Msk & (_UINT32_(value) << MCAN_NDAT2_ND61_Pos)) /* Assignment of value for ND61 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND61_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND61_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND61_0                     (MCAN_NDAT2_ND61_0_Val << MCAN_NDAT2_ND61_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND61_1                     (MCAN_NDAT2_ND61_1_Val << MCAN_NDAT2_ND61_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND62_Pos                   _UINT32_(30)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND62_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND62_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND62(value)                (MCAN_NDAT2_ND62_Msk & (_UINT32_(value) << MCAN_NDAT2_ND62_Pos)) /* Assignment of value for ND62 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND62_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND62_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND62_0                     (MCAN_NDAT2_ND62_0_Val << MCAN_NDAT2_ND62_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND62_1                     (MCAN_NDAT2_ND62_1_Val << MCAN_NDAT2_ND62_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_ND63_Pos                   _UINT32_(31)                                         /* (MCAN_NDAT2) New Data Position */
#define MCAN_NDAT2_ND63_Msk                   (_UINT32_(0x1) << MCAN_NDAT2_ND63_Pos)               /* (MCAN_NDAT2) New Data Mask */
#define MCAN_NDAT2_ND63(value)                (MCAN_NDAT2_ND63_Msk & (_UINT32_(value) << MCAN_NDAT2_ND63_Pos)) /* Assignment of value for ND63 in the MCAN_NDAT2 register */
#define   MCAN_NDAT2_ND63_0_Val               _UINT32_(0x0)                                        /* (MCAN_NDAT2) Receive Buffer not updated.  */
#define   MCAN_NDAT2_ND63_1_Val               _UINT32_(0x1)                                        /* (MCAN_NDAT2) Receive Buffer updated from new message.  */
#define MCAN_NDAT2_ND63_0                     (MCAN_NDAT2_ND63_0_Val << MCAN_NDAT2_ND63_Pos)       /* (MCAN_NDAT2) Receive Buffer not updated. Position */
#define MCAN_NDAT2_ND63_1                     (MCAN_NDAT2_ND63_1_Val << MCAN_NDAT2_ND63_Pos)       /* (MCAN_NDAT2) Receive Buffer updated from new message. Position */
#define MCAN_NDAT2_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_NDAT2) Register Mask  */

#define MCAN_NDAT2_ND_Pos                     _UINT32_(0)                                          /* (MCAN_NDAT2 Position) New Data */
#define MCAN_NDAT2_ND_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_NDAT2_ND_Pos)          /* (MCAN_NDAT2 Mask) ND */
#define MCAN_NDAT2_ND(value)                  (MCAN_NDAT2_ND_Msk & (_UINT32_(value) << MCAN_NDAT2_ND_Pos)) 

/* -------- MCAN_RXF0C : (MCAN Offset: 0xA0) (R/W 32) Receive FIFO 0 Configuration Register -------- */
#define MCAN_RXF0C_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXF0C) Receive FIFO 0 Configuration Register  Reset Value */

#define MCAN_RXF0C_F0SA_Pos                   _UINT32_(2)                                          /* (MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define MCAN_RXF0C_F0SA_Msk                   (_UINT32_(0x3FFF) << MCAN_RXF0C_F0SA_Pos)            /* (MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define MCAN_RXF0C_F0SA(value)                (MCAN_RXF0C_F0SA_Msk & (_UINT32_(value) << MCAN_RXF0C_F0SA_Pos)) /* Assignment of value for F0SA in the MCAN_RXF0C register */
#define MCAN_RXF0C_F0S_Pos                    _UINT32_(16)                                         /* (MCAN_RXF0C) Receive FIFO 0 Size Position */
#define MCAN_RXF0C_F0S_Msk                    (_UINT32_(0x7F) << MCAN_RXF0C_F0S_Pos)               /* (MCAN_RXF0C) Receive FIFO 0 Size Mask */
#define MCAN_RXF0C_F0S(value)                 (MCAN_RXF0C_F0S_Msk & (_UINT32_(value) << MCAN_RXF0C_F0S_Pos)) /* Assignment of value for F0S in the MCAN_RXF0C register */
#define   MCAN_RXF0C_F0S_0_Val                _UINT32_(0x0)                                        /* (MCAN_RXF0C) No Receive FIFO 0  */
#define MCAN_RXF0C_F0S_0                      (MCAN_RXF0C_F0S_0_Val << MCAN_RXF0C_F0S_Pos)         /* (MCAN_RXF0C) No Receive FIFO 0 Position */
#define MCAN_RXF0C_F0WM_Pos                   _UINT32_(24)                                         /* (MCAN_RXF0C) Receive FIFO 0 Watermark Position */
#define MCAN_RXF0C_F0WM_Msk                   (_UINT32_(0x7F) << MCAN_RXF0C_F0WM_Pos)              /* (MCAN_RXF0C) Receive FIFO 0 Watermark Mask */
#define MCAN_RXF0C_F0WM(value)                (MCAN_RXF0C_F0WM_Msk & (_UINT32_(value) << MCAN_RXF0C_F0WM_Pos)) /* Assignment of value for F0WM in the MCAN_RXF0C register */
#define   MCAN_RXF0C_F0WM_0_Val               _UINT32_(0x0)                                        /* (MCAN_RXF0C) Watermark interrupt disabled.  */
#define MCAN_RXF0C_F0WM_0                     (MCAN_RXF0C_F0WM_0_Val << MCAN_RXF0C_F0WM_Pos)       /* (MCAN_RXF0C) Watermark interrupt disabled. Position */
#define MCAN_RXF0C_F0OM_Pos                   _UINT32_(31)                                         /* (MCAN_RXF0C) FIFO 0 Operation Mode Position */
#define MCAN_RXF0C_F0OM_Msk                   (_UINT32_(0x1) << MCAN_RXF0C_F0OM_Pos)               /* (MCAN_RXF0C) FIFO 0 Operation Mode Mask */
#define MCAN_RXF0C_F0OM(value)                (MCAN_RXF0C_F0OM_Msk & (_UINT32_(value) << MCAN_RXF0C_F0OM_Pos)) /* Assignment of value for F0OM in the MCAN_RXF0C register */
#define   MCAN_RXF0C_F0OM_0_Val               _UINT32_(0x0)                                        /* (MCAN_RXF0C) FIFO 0 Blocking mode.  */
#define   MCAN_RXF0C_F0OM_1_Val               _UINT32_(0x1)                                        /* (MCAN_RXF0C) FIFO 0 Overwrite mode.  */
#define MCAN_RXF0C_F0OM_0                     (MCAN_RXF0C_F0OM_0_Val << MCAN_RXF0C_F0OM_Pos)       /* (MCAN_RXF0C) FIFO 0 Blocking mode. Position */
#define MCAN_RXF0C_F0OM_1                     (MCAN_RXF0C_F0OM_1_Val << MCAN_RXF0C_F0OM_Pos)       /* (MCAN_RXF0C) FIFO 0 Overwrite mode. Position */
#define MCAN_RXF0C_Msk                        _UINT32_(0xFF7FFFFC)                                 /* (MCAN_RXF0C) Register Mask  */


/* -------- MCAN_RXF0S : (MCAN Offset: 0xA4) ( R/ 32) Receive FIFO 0 Status Register -------- */
#define MCAN_RXF0S_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXF0S) Receive FIFO 0 Status Register  Reset Value */

#define MCAN_RXF0S_F0FL_Pos                   _UINT32_(0)                                          /* (MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define MCAN_RXF0S_F0FL_Msk                   (_UINT32_(0x7F) << MCAN_RXF0S_F0FL_Pos)              /* (MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define MCAN_RXF0S_F0FL(value)                (MCAN_RXF0S_F0FL_Msk & (_UINT32_(value) << MCAN_RXF0S_F0FL_Pos)) /* Assignment of value for F0FL in the MCAN_RXF0S register */
#define MCAN_RXF0S_F0GI_Pos                   _UINT32_(8)                                          /* (MCAN_RXF0S) Receive FIFO 0 Get Index Position */
#define MCAN_RXF0S_F0GI_Msk                   (_UINT32_(0x3F) << MCAN_RXF0S_F0GI_Pos)              /* (MCAN_RXF0S) Receive FIFO 0 Get Index Mask */
#define MCAN_RXF0S_F0GI(value)                (MCAN_RXF0S_F0GI_Msk & (_UINT32_(value) << MCAN_RXF0S_F0GI_Pos)) /* Assignment of value for F0GI in the MCAN_RXF0S register */
#define MCAN_RXF0S_F0PI_Pos                   _UINT32_(16)                                         /* (MCAN_RXF0S) Receive FIFO 0 Put Index Position */
#define MCAN_RXF0S_F0PI_Msk                   (_UINT32_(0x3F) << MCAN_RXF0S_F0PI_Pos)              /* (MCAN_RXF0S) Receive FIFO 0 Put Index Mask */
#define MCAN_RXF0S_F0PI(value)                (MCAN_RXF0S_F0PI_Msk & (_UINT32_(value) << MCAN_RXF0S_F0PI_Pos)) /* Assignment of value for F0PI in the MCAN_RXF0S register */
#define MCAN_RXF0S_F0F_Pos                    _UINT32_(24)                                         /* (MCAN_RXF0S) Receive FIFO 0 Full Position */
#define MCAN_RXF0S_F0F_Msk                    (_UINT32_(0x1) << MCAN_RXF0S_F0F_Pos)                /* (MCAN_RXF0S) Receive FIFO 0 Full Mask */
#define MCAN_RXF0S_F0F(value)                 (MCAN_RXF0S_F0F_Msk & (_UINT32_(value) << MCAN_RXF0S_F0F_Pos)) /* Assignment of value for F0F in the MCAN_RXF0S register */
#define   MCAN_RXF0S_F0F_0_Val                _UINT32_(0x0)                                        /* (MCAN_RXF0S) Receive FIFO 0 not full.  */
#define   MCAN_RXF0S_F0F_1_Val                _UINT32_(0x1)                                        /* (MCAN_RXF0S) Receive FIFO 0 full.  */
#define MCAN_RXF0S_F0F_0                      (MCAN_RXF0S_F0F_0_Val << MCAN_RXF0S_F0F_Pos)         /* (MCAN_RXF0S) Receive FIFO 0 not full. Position */
#define MCAN_RXF0S_F0F_1                      (MCAN_RXF0S_F0F_1_Val << MCAN_RXF0S_F0F_Pos)         /* (MCAN_RXF0S) Receive FIFO 0 full. Position */
#define MCAN_RXF0S_RF0L_Pos                   _UINT32_(25)                                         /* (MCAN_RXF0S) Receive FIFO 0 Message Lost Position */
#define MCAN_RXF0S_RF0L_Msk                   (_UINT32_(0x1) << MCAN_RXF0S_RF0L_Pos)               /* (MCAN_RXF0S) Receive FIFO 0 Message Lost Mask */
#define MCAN_RXF0S_RF0L(value)                (MCAN_RXF0S_RF0L_Msk & (_UINT32_(value) << MCAN_RXF0S_RF0L_Pos)) /* Assignment of value for RF0L in the MCAN_RXF0S register */
#define   MCAN_RXF0S_RF0L_0_Val               _UINT32_(0x0)                                        /* (MCAN_RXF0S) No Receive FIFO 0 message lost  */
#define   MCAN_RXF0S_RF0L_1_Val               _UINT32_(0x1)                                        /* (MCAN_RXF0S) Receive FIFO 0 message lost, also set after write attempt to Receive FIFO 0 of size zero  */
#define MCAN_RXF0S_RF0L_0                     (MCAN_RXF0S_RF0L_0_Val << MCAN_RXF0S_RF0L_Pos)       /* (MCAN_RXF0S) No Receive FIFO 0 message lost Position */
#define MCAN_RXF0S_RF0L_1                     (MCAN_RXF0S_RF0L_1_Val << MCAN_RXF0S_RF0L_Pos)       /* (MCAN_RXF0S) Receive FIFO 0 message lost, also set after write attempt to Receive FIFO 0 of size zero Position */
#define MCAN_RXF0S_Msk                        _UINT32_(0x033F3F7F)                                 /* (MCAN_RXF0S) Register Mask  */


/* -------- MCAN_RXF0A : (MCAN Offset: 0xA8) (R/W 32) Receive FIFO 0 Acknowledge Register -------- */
#define MCAN_RXF0A_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXF0A) Receive FIFO 0 Acknowledge Register  Reset Value */

#define MCAN_RXF0A_F0AI_Pos                   _UINT32_(0)                                          /* (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Position */
#define MCAN_RXF0A_F0AI_Msk                   (_UINT32_(0x3F) << MCAN_RXF0A_F0AI_Pos)              /* (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Mask */
#define MCAN_RXF0A_F0AI(value)                (MCAN_RXF0A_F0AI_Msk & (_UINT32_(value) << MCAN_RXF0A_F0AI_Pos)) /* Assignment of value for F0AI in the MCAN_RXF0A register */
#define MCAN_RXF0A_Msk                        _UINT32_(0x0000003F)                                 /* (MCAN_RXF0A) Register Mask  */


/* -------- MCAN_RXBC : (MCAN Offset: 0xAC) (R/W 32) Receive Rx Buffer Configuration Register -------- */
#define MCAN_RXBC_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_RXBC) Receive Rx Buffer Configuration Register  Reset Value */

#define MCAN_RXBC_RBSA_Pos                    _UINT32_(2)                                          /* (MCAN_RXBC) Receive Buffer Start Address Position */
#define MCAN_RXBC_RBSA_Msk                    (_UINT32_(0x3FFF) << MCAN_RXBC_RBSA_Pos)             /* (MCAN_RXBC) Receive Buffer Start Address Mask */
#define MCAN_RXBC_RBSA(value)                 (MCAN_RXBC_RBSA_Msk & (_UINT32_(value) << MCAN_RXBC_RBSA_Pos)) /* Assignment of value for RBSA in the MCAN_RXBC register */
#define MCAN_RXBC_Msk                         _UINT32_(0x0000FFFC)                                 /* (MCAN_RXBC) Register Mask  */


/* -------- MCAN_RXF1C : (MCAN Offset: 0xB0) (R/W 32) Receive FIFO 1 Configuration Register -------- */
#define MCAN_RXF1C_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXF1C) Receive FIFO 1 Configuration Register  Reset Value */

#define MCAN_RXF1C_F1SA_Pos                   _UINT32_(2)                                          /* (MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define MCAN_RXF1C_F1SA_Msk                   (_UINT32_(0x3FFF) << MCAN_RXF1C_F1SA_Pos)            /* (MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define MCAN_RXF1C_F1SA(value)                (MCAN_RXF1C_F1SA_Msk & (_UINT32_(value) << MCAN_RXF1C_F1SA_Pos)) /* Assignment of value for F1SA in the MCAN_RXF1C register */
#define MCAN_RXF1C_F1S_Pos                    _UINT32_(16)                                         /* (MCAN_RXF1C) Receive FIFO 1 Size Position */
#define MCAN_RXF1C_F1S_Msk                    (_UINT32_(0x7F) << MCAN_RXF1C_F1S_Pos)               /* (MCAN_RXF1C) Receive FIFO 1 Size Mask */
#define MCAN_RXF1C_F1S(value)                 (MCAN_RXF1C_F1S_Msk & (_UINT32_(value) << MCAN_RXF1C_F1S_Pos)) /* Assignment of value for F1S in the MCAN_RXF1C register */
#define   MCAN_RXF1C_F1S_0_Val                _UINT32_(0x0)                                        /* (MCAN_RXF1C) No Receive FIFO 1  */
#define MCAN_RXF1C_F1S_0                      (MCAN_RXF1C_F1S_0_Val << MCAN_RXF1C_F1S_Pos)         /* (MCAN_RXF1C) No Receive FIFO 1 Position */
#define MCAN_RXF1C_F1WM_Pos                   _UINT32_(24)                                         /* (MCAN_RXF1C) Receive FIFO 1 Watermark Position */
#define MCAN_RXF1C_F1WM_Msk                   (_UINT32_(0x7F) << MCAN_RXF1C_F1WM_Pos)              /* (MCAN_RXF1C) Receive FIFO 1 Watermark Mask */
#define MCAN_RXF1C_F1WM(value)                (MCAN_RXF1C_F1WM_Msk & (_UINT32_(value) << MCAN_RXF1C_F1WM_Pos)) /* Assignment of value for F1WM in the MCAN_RXF1C register */
#define   MCAN_RXF1C_F1WM_0_Val               _UINT32_(0x0)                                        /* (MCAN_RXF1C) Watermark interrupt disabled  */
#define MCAN_RXF1C_F1WM_0                     (MCAN_RXF1C_F1WM_0_Val << MCAN_RXF1C_F1WM_Pos)       /* (MCAN_RXF1C) Watermark interrupt disabled Position */
#define MCAN_RXF1C_F1OM_Pos                   _UINT32_(31)                                         /* (MCAN_RXF1C) FIFO 1 Operation Mode Position */
#define MCAN_RXF1C_F1OM_Msk                   (_UINT32_(0x1) << MCAN_RXF1C_F1OM_Pos)               /* (MCAN_RXF1C) FIFO 1 Operation Mode Mask */
#define MCAN_RXF1C_F1OM(value)                (MCAN_RXF1C_F1OM_Msk & (_UINT32_(value) << MCAN_RXF1C_F1OM_Pos)) /* Assignment of value for F1OM in the MCAN_RXF1C register */
#define   MCAN_RXF1C_F1OM_0_Val               _UINT32_(0x0)                                        /* (MCAN_RXF1C) FIFO 1 Blocking mode.  */
#define   MCAN_RXF1C_F1OM_1_Val               _UINT32_(0x1)                                        /* (MCAN_RXF1C) FIFO 1 Overwrite mode.  */
#define MCAN_RXF1C_F1OM_0                     (MCAN_RXF1C_F1OM_0_Val << MCAN_RXF1C_F1OM_Pos)       /* (MCAN_RXF1C) FIFO 1 Blocking mode. Position */
#define MCAN_RXF1C_F1OM_1                     (MCAN_RXF1C_F1OM_1_Val << MCAN_RXF1C_F1OM_Pos)       /* (MCAN_RXF1C) FIFO 1 Overwrite mode. Position */
#define MCAN_RXF1C_Msk                        _UINT32_(0xFF7FFFFC)                                 /* (MCAN_RXF1C) Register Mask  */


/* -------- MCAN_RXF1S : (MCAN Offset: 0xB4) ( R/ 32) Receive FIFO 1 Status Register -------- */
#define MCAN_RXF1S_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXF1S) Receive FIFO 1 Status Register  Reset Value */

#define MCAN_RXF1S_F1FL_Pos                   _UINT32_(0)                                          /* (MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define MCAN_RXF1S_F1FL_Msk                   (_UINT32_(0x7F) << MCAN_RXF1S_F1FL_Pos)              /* (MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define MCAN_RXF1S_F1FL(value)                (MCAN_RXF1S_F1FL_Msk & (_UINT32_(value) << MCAN_RXF1S_F1FL_Pos)) /* Assignment of value for F1FL in the MCAN_RXF1S register */
#define MCAN_RXF1S_F1GI_Pos                   _UINT32_(8)                                          /* (MCAN_RXF1S) Receive FIFO 1 Get Index Position */
#define MCAN_RXF1S_F1GI_Msk                   (_UINT32_(0x3F) << MCAN_RXF1S_F1GI_Pos)              /* (MCAN_RXF1S) Receive FIFO 1 Get Index Mask */
#define MCAN_RXF1S_F1GI(value)                (MCAN_RXF1S_F1GI_Msk & (_UINT32_(value) << MCAN_RXF1S_F1GI_Pos)) /* Assignment of value for F1GI in the MCAN_RXF1S register */
#define MCAN_RXF1S_F1PI_Pos                   _UINT32_(16)                                         /* (MCAN_RXF1S) Receive FIFO 1 Put Index Position */
#define MCAN_RXF1S_F1PI_Msk                   (_UINT32_(0x3F) << MCAN_RXF1S_F1PI_Pos)              /* (MCAN_RXF1S) Receive FIFO 1 Put Index Mask */
#define MCAN_RXF1S_F1PI(value)                (MCAN_RXF1S_F1PI_Msk & (_UINT32_(value) << MCAN_RXF1S_F1PI_Pos)) /* Assignment of value for F1PI in the MCAN_RXF1S register */
#define MCAN_RXF1S_F1F_Pos                    _UINT32_(24)                                         /* (MCAN_RXF1S) Receive FIFO 1 Full Position */
#define MCAN_RXF1S_F1F_Msk                    (_UINT32_(0x1) << MCAN_RXF1S_F1F_Pos)                /* (MCAN_RXF1S) Receive FIFO 1 Full Mask */
#define MCAN_RXF1S_F1F(value)                 (MCAN_RXF1S_F1F_Msk & (_UINT32_(value) << MCAN_RXF1S_F1F_Pos)) /* Assignment of value for F1F in the MCAN_RXF1S register */
#define   MCAN_RXF1S_F1F_0_Val                _UINT32_(0x0)                                        /* (MCAN_RXF1S) Receive FIFO 1 not full.  */
#define   MCAN_RXF1S_F1F_1_Val                _UINT32_(0x1)                                        /* (MCAN_RXF1S) Receive FIFO 1 full.  */
#define MCAN_RXF1S_F1F_0                      (MCAN_RXF1S_F1F_0_Val << MCAN_RXF1S_F1F_Pos)         /* (MCAN_RXF1S) Receive FIFO 1 not full. Position */
#define MCAN_RXF1S_F1F_1                      (MCAN_RXF1S_F1F_1_Val << MCAN_RXF1S_F1F_Pos)         /* (MCAN_RXF1S) Receive FIFO 1 full. Position */
#define MCAN_RXF1S_RF1L_Pos                   _UINT32_(25)                                         /* (MCAN_RXF1S) Receive FIFO 1 Message Lost Position */
#define MCAN_RXF1S_RF1L_Msk                   (_UINT32_(0x1) << MCAN_RXF1S_RF1L_Pos)               /* (MCAN_RXF1S) Receive FIFO 1 Message Lost Mask */
#define MCAN_RXF1S_RF1L(value)                (MCAN_RXF1S_RF1L_Msk & (_UINT32_(value) << MCAN_RXF1S_RF1L_Pos)) /* Assignment of value for RF1L in the MCAN_RXF1S register */
#define   MCAN_RXF1S_RF1L_0_Val               _UINT32_(0x0)                                        /* (MCAN_RXF1S) No Receive FIFO 1 message lost.  */
#define   MCAN_RXF1S_RF1L_1_Val               _UINT32_(0x1)                                        /* (MCAN_RXF1S) Receive FIFO 1 message lost, also set after write attempt to Receive FIFO 1 of size zero.  */
#define MCAN_RXF1S_RF1L_0                     (MCAN_RXF1S_RF1L_0_Val << MCAN_RXF1S_RF1L_Pos)       /* (MCAN_RXF1S) No Receive FIFO 1 message lost. Position */
#define MCAN_RXF1S_RF1L_1                     (MCAN_RXF1S_RF1L_1_Val << MCAN_RXF1S_RF1L_Pos)       /* (MCAN_RXF1S) Receive FIFO 1 message lost, also set after write attempt to Receive FIFO 1 of size zero. Position */
#define MCAN_RXF1S_DMS_Pos                    _UINT32_(30)                                         /* (MCAN_RXF1S) Debug Message Status Position */
#define MCAN_RXF1S_DMS_Msk                    (_UINT32_(0x3) << MCAN_RXF1S_DMS_Pos)                /* (MCAN_RXF1S) Debug Message Status Mask */
#define MCAN_RXF1S_DMS(value)                 (MCAN_RXF1S_DMS_Msk & (_UINT32_(value) << MCAN_RXF1S_DMS_Pos)) /* Assignment of value for DMS in the MCAN_RXF1S register */
#define   MCAN_RXF1S_DMS_IDLE_Val             _UINT32_(0x0)                                        /* (MCAN_RXF1S) Idle state, wait for reception of debug messages, DMA request is cleared.  */
#define   MCAN_RXF1S_DMS_MSG_A_Val            _UINT32_(0x1)                                        /* (MCAN_RXF1S) Debug message A received.  */
#define   MCAN_RXF1S_DMS_MSG_AB_Val           _UINT32_(0x2)                                        /* (MCAN_RXF1S) Debug messages A, B received.  */
#define   MCAN_RXF1S_DMS_MSG_ABC_Val          _UINT32_(0x3)                                        /* (MCAN_RXF1S) Debug messages A, B, C received, DMA request is set.  */
#define MCAN_RXF1S_DMS_IDLE                   (MCAN_RXF1S_DMS_IDLE_Val << MCAN_RXF1S_DMS_Pos)      /* (MCAN_RXF1S) Idle state, wait for reception of debug messages, DMA request is cleared. Position */
#define MCAN_RXF1S_DMS_MSG_A                  (MCAN_RXF1S_DMS_MSG_A_Val << MCAN_RXF1S_DMS_Pos)     /* (MCAN_RXF1S) Debug message A received. Position */
#define MCAN_RXF1S_DMS_MSG_AB                 (MCAN_RXF1S_DMS_MSG_AB_Val << MCAN_RXF1S_DMS_Pos)    /* (MCAN_RXF1S) Debug messages A, B received. Position */
#define MCAN_RXF1S_DMS_MSG_ABC                (MCAN_RXF1S_DMS_MSG_ABC_Val << MCAN_RXF1S_DMS_Pos)   /* (MCAN_RXF1S) Debug messages A, B, C received, DMA request is set. Position */
#define MCAN_RXF1S_Msk                        _UINT32_(0xC33F3F7F)                                 /* (MCAN_RXF1S) Register Mask  */


/* -------- MCAN_RXF1A : (MCAN Offset: 0xB8) (R/W 32) Receive FIFO 1 Acknowledge Register -------- */
#define MCAN_RXF1A_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXF1A) Receive FIFO 1 Acknowledge Register  Reset Value */

#define MCAN_RXF1A_F1AI_Pos                   _UINT32_(0)                                          /* (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Position */
#define MCAN_RXF1A_F1AI_Msk                   (_UINT32_(0x3F) << MCAN_RXF1A_F1AI_Pos)              /* (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Mask */
#define MCAN_RXF1A_F1AI(value)                (MCAN_RXF1A_F1AI_Msk & (_UINT32_(value) << MCAN_RXF1A_F1AI_Pos)) /* Assignment of value for F1AI in the MCAN_RXF1A register */
#define MCAN_RXF1A_Msk                        _UINT32_(0x0000003F)                                 /* (MCAN_RXF1A) Register Mask  */


/* -------- MCAN_RXESC : (MCAN Offset: 0xBC) (R/W 32) Receive Buffer / FIFO Element Size Configuration Register -------- */
#define MCAN_RXESC_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_RXESC) Receive Buffer / FIFO Element Size Configuration Register  Reset Value */

#define MCAN_RXESC_F0DS_Pos                   _UINT32_(0)                                          /* (MCAN_RXESC) Receive FIFO 0 Data Field Size Position */
#define MCAN_RXESC_F0DS_Msk                   (_UINT32_(0x7) << MCAN_RXESC_F0DS_Pos)               /* (MCAN_RXESC) Receive FIFO 0 Data Field Size Mask */
#define MCAN_RXESC_F0DS(value)                (MCAN_RXESC_F0DS_Msk & (_UINT32_(value) << MCAN_RXESC_F0DS_Pos)) /* Assignment of value for F0DS in the MCAN_RXESC register */
#define   MCAN_RXESC_F0DS_8_BYTE_Val          _UINT32_(0x0)                                        /* (MCAN_RXESC) 8-byte data field  */
#define   MCAN_RXESC_F0DS_12_BYTE_Val         _UINT32_(0x1)                                        /* (MCAN_RXESC) 12-byte data field  */
#define   MCAN_RXESC_F0DS_16_BYTE_Val         _UINT32_(0x2)                                        /* (MCAN_RXESC) 16-byte data field  */
#define   MCAN_RXESC_F0DS_20_BYTE_Val         _UINT32_(0x3)                                        /* (MCAN_RXESC) 20-byte data field  */
#define   MCAN_RXESC_F0DS_24_BYTE_Val         _UINT32_(0x4)                                        /* (MCAN_RXESC) 24-byte data field  */
#define   MCAN_RXESC_F0DS_32_BYTE_Val         _UINT32_(0x5)                                        /* (MCAN_RXESC) 32-byte data field  */
#define   MCAN_RXESC_F0DS_48_BYTE_Val         _UINT32_(0x6)                                        /* (MCAN_RXESC) 48-byte data field  */
#define   MCAN_RXESC_F0DS_64_BYTE_Val         _UINT32_(0x7)                                        /* (MCAN_RXESC) 64-byte data field  */
#define MCAN_RXESC_F0DS_8_BYTE                (MCAN_RXESC_F0DS_8_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /* (MCAN_RXESC) 8-byte data field Position */
#define MCAN_RXESC_F0DS_12_BYTE               (MCAN_RXESC_F0DS_12_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 12-byte data field Position */
#define MCAN_RXESC_F0DS_16_BYTE               (MCAN_RXESC_F0DS_16_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 16-byte data field Position */
#define MCAN_RXESC_F0DS_20_BYTE               (MCAN_RXESC_F0DS_20_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 20-byte data field Position */
#define MCAN_RXESC_F0DS_24_BYTE               (MCAN_RXESC_F0DS_24_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 24-byte data field Position */
#define MCAN_RXESC_F0DS_32_BYTE               (MCAN_RXESC_F0DS_32_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 32-byte data field Position */
#define MCAN_RXESC_F0DS_48_BYTE               (MCAN_RXESC_F0DS_48_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 48-byte data field Position */
#define MCAN_RXESC_F0DS_64_BYTE               (MCAN_RXESC_F0DS_64_BYTE_Val << MCAN_RXESC_F0DS_Pos) /* (MCAN_RXESC) 64-byte data field Position */
#define MCAN_RXESC_F1DS_Pos                   _UINT32_(4)                                          /* (MCAN_RXESC) Receive FIFO 1 Data Field Size Position */
#define MCAN_RXESC_F1DS_Msk                   (_UINT32_(0x7) << MCAN_RXESC_F1DS_Pos)               /* (MCAN_RXESC) Receive FIFO 1 Data Field Size Mask */
#define MCAN_RXESC_F1DS(value)                (MCAN_RXESC_F1DS_Msk & (_UINT32_(value) << MCAN_RXESC_F1DS_Pos)) /* Assignment of value for F1DS in the MCAN_RXESC register */
#define   MCAN_RXESC_F1DS_8_BYTE_Val          _UINT32_(0x0)                                        /* (MCAN_RXESC) 8-byte data field  */
#define   MCAN_RXESC_F1DS_12_BYTE_Val         _UINT32_(0x1)                                        /* (MCAN_RXESC) 12-byte data field  */
#define   MCAN_RXESC_F1DS_16_BYTE_Val         _UINT32_(0x2)                                        /* (MCAN_RXESC) 16-byte data field  */
#define   MCAN_RXESC_F1DS_20_BYTE_Val         _UINT32_(0x3)                                        /* (MCAN_RXESC) 20-byte data field  */
#define   MCAN_RXESC_F1DS_24_BYTE_Val         _UINT32_(0x4)                                        /* (MCAN_RXESC) 24-byte data field  */
#define   MCAN_RXESC_F1DS_32_BYTE_Val         _UINT32_(0x5)                                        /* (MCAN_RXESC) 32-byte data field  */
#define   MCAN_RXESC_F1DS_48_BYTE_Val         _UINT32_(0x6)                                        /* (MCAN_RXESC) 48-byte data field  */
#define   MCAN_RXESC_F1DS_64_BYTE_Val         _UINT32_(0x7)                                        /* (MCAN_RXESC) 64-byte data field  */
#define MCAN_RXESC_F1DS_8_BYTE                (MCAN_RXESC_F1DS_8_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /* (MCAN_RXESC) 8-byte data field Position */
#define MCAN_RXESC_F1DS_12_BYTE               (MCAN_RXESC_F1DS_12_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 12-byte data field Position */
#define MCAN_RXESC_F1DS_16_BYTE               (MCAN_RXESC_F1DS_16_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 16-byte data field Position */
#define MCAN_RXESC_F1DS_20_BYTE               (MCAN_RXESC_F1DS_20_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 20-byte data field Position */
#define MCAN_RXESC_F1DS_24_BYTE               (MCAN_RXESC_F1DS_24_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 24-byte data field Position */
#define MCAN_RXESC_F1DS_32_BYTE               (MCAN_RXESC_F1DS_32_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 32-byte data field Position */
#define MCAN_RXESC_F1DS_48_BYTE               (MCAN_RXESC_F1DS_48_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 48-byte data field Position */
#define MCAN_RXESC_F1DS_64_BYTE               (MCAN_RXESC_F1DS_64_BYTE_Val << MCAN_RXESC_F1DS_Pos) /* (MCAN_RXESC) 64-byte data field Position */
#define MCAN_RXESC_RBDS_Pos                   _UINT32_(8)                                          /* (MCAN_RXESC) Receive Buffer Data Field Size Position */
#define MCAN_RXESC_RBDS_Msk                   (_UINT32_(0x7) << MCAN_RXESC_RBDS_Pos)               /* (MCAN_RXESC) Receive Buffer Data Field Size Mask */
#define MCAN_RXESC_RBDS(value)                (MCAN_RXESC_RBDS_Msk & (_UINT32_(value) << MCAN_RXESC_RBDS_Pos)) /* Assignment of value for RBDS in the MCAN_RXESC register */
#define   MCAN_RXESC_RBDS_8_BYTE_Val          _UINT32_(0x0)                                        /* (MCAN_RXESC) 8-byte data field  */
#define   MCAN_RXESC_RBDS_12_BYTE_Val         _UINT32_(0x1)                                        /* (MCAN_RXESC) 12-byte data field  */
#define   MCAN_RXESC_RBDS_16_BYTE_Val         _UINT32_(0x2)                                        /* (MCAN_RXESC) 16-byte data field  */
#define   MCAN_RXESC_RBDS_20_BYTE_Val         _UINT32_(0x3)                                        /* (MCAN_RXESC) 20-byte data field  */
#define   MCAN_RXESC_RBDS_24_BYTE_Val         _UINT32_(0x4)                                        /* (MCAN_RXESC) 24-byte data field  */
#define   MCAN_RXESC_RBDS_32_BYTE_Val         _UINT32_(0x5)                                        /* (MCAN_RXESC) 32-byte data field  */
#define   MCAN_RXESC_RBDS_48_BYTE_Val         _UINT32_(0x6)                                        /* (MCAN_RXESC) 48-byte data field  */
#define   MCAN_RXESC_RBDS_64_BYTE_Val         _UINT32_(0x7)                                        /* (MCAN_RXESC) 64-byte data field  */
#define MCAN_RXESC_RBDS_8_BYTE                (MCAN_RXESC_RBDS_8_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /* (MCAN_RXESC) 8-byte data field Position */
#define MCAN_RXESC_RBDS_12_BYTE               (MCAN_RXESC_RBDS_12_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 12-byte data field Position */
#define MCAN_RXESC_RBDS_16_BYTE               (MCAN_RXESC_RBDS_16_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 16-byte data field Position */
#define MCAN_RXESC_RBDS_20_BYTE               (MCAN_RXESC_RBDS_20_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 20-byte data field Position */
#define MCAN_RXESC_RBDS_24_BYTE               (MCAN_RXESC_RBDS_24_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 24-byte data field Position */
#define MCAN_RXESC_RBDS_32_BYTE               (MCAN_RXESC_RBDS_32_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 32-byte data field Position */
#define MCAN_RXESC_RBDS_48_BYTE               (MCAN_RXESC_RBDS_48_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 48-byte data field Position */
#define MCAN_RXESC_RBDS_64_BYTE               (MCAN_RXESC_RBDS_64_BYTE_Val << MCAN_RXESC_RBDS_Pos) /* (MCAN_RXESC) 64-byte data field Position */
#define MCAN_RXESC_Msk                        _UINT32_(0x00000777)                                 /* (MCAN_RXESC) Register Mask  */


/* -------- MCAN_TXBC : (MCAN Offset: 0xC0) (R/W 32) Transmit Buffer Configuration Register -------- */
#define MCAN_TXBC_RESETVALUE                  _UINT32_(0x00)                                       /*  (MCAN_TXBC) Transmit Buffer Configuration Register  Reset Value */

#define MCAN_TXBC_TBSA_Pos                    _UINT32_(2)                                          /* (MCAN_TXBC) Tx Buffers Start Address Position */
#define MCAN_TXBC_TBSA_Msk                    (_UINT32_(0x3FFF) << MCAN_TXBC_TBSA_Pos)             /* (MCAN_TXBC) Tx Buffers Start Address Mask */
#define MCAN_TXBC_TBSA(value)                 (MCAN_TXBC_TBSA_Msk & (_UINT32_(value) << MCAN_TXBC_TBSA_Pos)) /* Assignment of value for TBSA in the MCAN_TXBC register */
#define MCAN_TXBC_NDTB_Pos                    _UINT32_(16)                                         /* (MCAN_TXBC) Number of Dedicated Transmit Buffers Position */
#define MCAN_TXBC_NDTB_Msk                    (_UINT32_(0x3F) << MCAN_TXBC_NDTB_Pos)               /* (MCAN_TXBC) Number of Dedicated Transmit Buffers Mask */
#define MCAN_TXBC_NDTB(value)                 (MCAN_TXBC_NDTB_Msk & (_UINT32_(value) << MCAN_TXBC_NDTB_Pos)) /* Assignment of value for NDTB in the MCAN_TXBC register */
#define   MCAN_TXBC_NDTB_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBC) No dedicated Tx Buffers.  */
#define MCAN_TXBC_NDTB_0                      (MCAN_TXBC_NDTB_0_Val << MCAN_TXBC_NDTB_Pos)         /* (MCAN_TXBC) No dedicated Tx Buffers. Position */
#define MCAN_TXBC_TFQS_Pos                    _UINT32_(24)                                         /* (MCAN_TXBC) Transmit FIFO/Queue Size Position */
#define MCAN_TXBC_TFQS_Msk                    (_UINT32_(0x3F) << MCAN_TXBC_TFQS_Pos)               /* (MCAN_TXBC) Transmit FIFO/Queue Size Mask */
#define MCAN_TXBC_TFQS(value)                 (MCAN_TXBC_TFQS_Msk & (_UINT32_(value) << MCAN_TXBC_TFQS_Pos)) /* Assignment of value for TFQS in the MCAN_TXBC register */
#define   MCAN_TXBC_TFQS_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBC) No Tx FIFO/Queue.  */
#define MCAN_TXBC_TFQS_0                      (MCAN_TXBC_TFQS_0_Val << MCAN_TXBC_TFQS_Pos)         /* (MCAN_TXBC) No Tx FIFO/Queue. Position */
#define MCAN_TXBC_TFQM_Pos                    _UINT32_(30)                                         /* (MCAN_TXBC) Tx FIFO/Queue Mode Position */
#define MCAN_TXBC_TFQM_Msk                    (_UINT32_(0x1) << MCAN_TXBC_TFQM_Pos)                /* (MCAN_TXBC) Tx FIFO/Queue Mode Mask */
#define MCAN_TXBC_TFQM(value)                 (MCAN_TXBC_TFQM_Msk & (_UINT32_(value) << MCAN_TXBC_TFQM_Pos)) /* Assignment of value for TFQM in the MCAN_TXBC register */
#define   MCAN_TXBC_TFQM_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBC) Tx FIFO operation.  */
#define   MCAN_TXBC_TFQM_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBC) Tx Queue operation.  */
#define MCAN_TXBC_TFQM_0                      (MCAN_TXBC_TFQM_0_Val << MCAN_TXBC_TFQM_Pos)         /* (MCAN_TXBC) Tx FIFO operation. Position */
#define MCAN_TXBC_TFQM_1                      (MCAN_TXBC_TFQM_1_Val << MCAN_TXBC_TFQM_Pos)         /* (MCAN_TXBC) Tx Queue operation. Position */
#define MCAN_TXBC_Msk                         _UINT32_(0x7F3FFFFC)                                 /* (MCAN_TXBC) Register Mask  */


/* -------- MCAN_TXFQS : (MCAN Offset: 0xC4) ( R/ 32) Transmit FIFO/Queue Status Register -------- */
#define MCAN_TXFQS_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXFQS) Transmit FIFO/Queue Status Register  Reset Value */

#define MCAN_TXFQS_TFFL_Pos                   _UINT32_(0)                                          /* (MCAN_TXFQS) Tx FIFO Free Level Position */
#define MCAN_TXFQS_TFFL_Msk                   (_UINT32_(0x3F) << MCAN_TXFQS_TFFL_Pos)              /* (MCAN_TXFQS) Tx FIFO Free Level Mask */
#define MCAN_TXFQS_TFFL(value)                (MCAN_TXFQS_TFFL_Msk & (_UINT32_(value) << MCAN_TXFQS_TFFL_Pos)) /* Assignment of value for TFFL in the MCAN_TXFQS register */
#define MCAN_TXFQS_TFGI_Pos                   _UINT32_(8)                                          /* (MCAN_TXFQS) Tx FIFO Get Index Position */
#define MCAN_TXFQS_TFGI_Msk                   (_UINT32_(0x1F) << MCAN_TXFQS_TFGI_Pos)              /* (MCAN_TXFQS) Tx FIFO Get Index Mask */
#define MCAN_TXFQS_TFGI(value)                (MCAN_TXFQS_TFGI_Msk & (_UINT32_(value) << MCAN_TXFQS_TFGI_Pos)) /* Assignment of value for TFGI in the MCAN_TXFQS register */
#define MCAN_TXFQS_TFQPI_Pos                  _UINT32_(16)                                         /* (MCAN_TXFQS) Tx FIFO/Queue Put Index Position */
#define MCAN_TXFQS_TFQPI_Msk                  (_UINT32_(0x1F) << MCAN_TXFQS_TFQPI_Pos)             /* (MCAN_TXFQS) Tx FIFO/Queue Put Index Mask */
#define MCAN_TXFQS_TFQPI(value)               (MCAN_TXFQS_TFQPI_Msk & (_UINT32_(value) << MCAN_TXFQS_TFQPI_Pos)) /* Assignment of value for TFQPI in the MCAN_TXFQS register */
#define MCAN_TXFQS_TFQF_Pos                   _UINT32_(21)                                         /* (MCAN_TXFQS) Tx FIFO/Queue Full Position */
#define MCAN_TXFQS_TFQF_Msk                   (_UINT32_(0x1) << MCAN_TXFQS_TFQF_Pos)               /* (MCAN_TXFQS) Tx FIFO/Queue Full Mask */
#define MCAN_TXFQS_TFQF(value)                (MCAN_TXFQS_TFQF_Msk & (_UINT32_(value) << MCAN_TXFQS_TFQF_Pos)) /* Assignment of value for TFQF in the MCAN_TXFQS register */
#define   MCAN_TXFQS_TFQF_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXFQS) Tx FIFO/Queue not full.  */
#define   MCAN_TXFQS_TFQF_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXFQS) Tx FIFO/Queue full.  */
#define MCAN_TXFQS_TFQF_0                     (MCAN_TXFQS_TFQF_0_Val << MCAN_TXFQS_TFQF_Pos)       /* (MCAN_TXFQS) Tx FIFO/Queue not full. Position */
#define MCAN_TXFQS_TFQF_1                     (MCAN_TXFQS_TFQF_1_Val << MCAN_TXFQS_TFQF_Pos)       /* (MCAN_TXFQS) Tx FIFO/Queue full. Position */
#define MCAN_TXFQS_Msk                        _UINT32_(0x003F1F3F)                                 /* (MCAN_TXFQS) Register Mask  */


/* -------- MCAN_TXESC : (MCAN Offset: 0xC8) (R/W 32) Transmit Buffer Element Size Configuration Register -------- */
#define MCAN_TXESC_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXESC) Transmit Buffer Element Size Configuration Register  Reset Value */

#define MCAN_TXESC_TBDS_Pos                   _UINT32_(0)                                          /* (MCAN_TXESC) Tx Buffer Data Field Size Position */
#define MCAN_TXESC_TBDS_Msk                   (_UINT32_(0x7) << MCAN_TXESC_TBDS_Pos)               /* (MCAN_TXESC) Tx Buffer Data Field Size Mask */
#define MCAN_TXESC_TBDS(value)                (MCAN_TXESC_TBDS_Msk & (_UINT32_(value) << MCAN_TXESC_TBDS_Pos)) /* Assignment of value for TBDS in the MCAN_TXESC register */
#define   MCAN_TXESC_TBDS_8_BYTE_Val          _UINT32_(0x0)                                        /* (MCAN_TXESC) 8-byte data field  */
#define   MCAN_TXESC_TBDS_12_BYTE_Val         _UINT32_(0x1)                                        /* (MCAN_TXESC) 12-byte data field  */
#define   MCAN_TXESC_TBDS_16_BYTE_Val         _UINT32_(0x2)                                        /* (MCAN_TXESC) 16-byte data field  */
#define   MCAN_TXESC_TBDS_20_BYTE_Val         _UINT32_(0x3)                                        /* (MCAN_TXESC) 20-byte data field  */
#define   MCAN_TXESC_TBDS_24_BYTE_Val         _UINT32_(0x4)                                        /* (MCAN_TXESC) 24-byte data field  */
#define   MCAN_TXESC_TBDS_32_BYTE_Val         _UINT32_(0x5)                                        /* (MCAN_TXESC) 32-byte data field  */
#define   MCAN_TXESC_TBDS_48_BYTE_Val         _UINT32_(0x6)                                        /* (MCAN_TXESC) 48- byte data field  */
#define   MCAN_TXESC_TBDS_64_BYTE_Val         _UINT32_(0x7)                                        /* (MCAN_TXESC) 64-byte data field  */
#define MCAN_TXESC_TBDS_8_BYTE                (MCAN_TXESC_TBDS_8_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /* (MCAN_TXESC) 8-byte data field Position */
#define MCAN_TXESC_TBDS_12_BYTE               (MCAN_TXESC_TBDS_12_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 12-byte data field Position */
#define MCAN_TXESC_TBDS_16_BYTE               (MCAN_TXESC_TBDS_16_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 16-byte data field Position */
#define MCAN_TXESC_TBDS_20_BYTE               (MCAN_TXESC_TBDS_20_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 20-byte data field Position */
#define MCAN_TXESC_TBDS_24_BYTE               (MCAN_TXESC_TBDS_24_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 24-byte data field Position */
#define MCAN_TXESC_TBDS_32_BYTE               (MCAN_TXESC_TBDS_32_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 32-byte data field Position */
#define MCAN_TXESC_TBDS_48_BYTE               (MCAN_TXESC_TBDS_48_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 48- byte data field Position */
#define MCAN_TXESC_TBDS_64_BYTE               (MCAN_TXESC_TBDS_64_BYTE_Val << MCAN_TXESC_TBDS_Pos) /* (MCAN_TXESC) 64-byte data field Position */
#define MCAN_TXESC_Msk                        _UINT32_(0x00000007)                                 /* (MCAN_TXESC) Register Mask  */


/* -------- MCAN_TXBRP : (MCAN Offset: 0xCC) ( R/ 32) Transmit Buffer Request Pending Register -------- */
#define MCAN_TXBRP_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXBRP) Transmit Buffer Request Pending Register  Reset Value */

#define MCAN_TXBRP_TRP0_Pos                   _UINT32_(0)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 0 Position */
#define MCAN_TXBRP_TRP0_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP0_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 0 Mask */
#define MCAN_TXBRP_TRP0(value)                (MCAN_TXBRP_TRP0_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP0_Pos)) /* Assignment of value for TRP0 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP0_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP0_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP0_0                     (MCAN_TXBRP_TRP0_0_Val << MCAN_TXBRP_TRP0_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP0_1                     (MCAN_TXBRP_TRP0_1_Val << MCAN_TXBRP_TRP0_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP1_Pos                   _UINT32_(1)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 1 Position */
#define MCAN_TXBRP_TRP1_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP1_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 1 Mask */
#define MCAN_TXBRP_TRP1(value)                (MCAN_TXBRP_TRP1_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP1_Pos)) /* Assignment of value for TRP1 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP1_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP1_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP1_0                     (MCAN_TXBRP_TRP1_0_Val << MCAN_TXBRP_TRP1_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP1_1                     (MCAN_TXBRP_TRP1_1_Val << MCAN_TXBRP_TRP1_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP2_Pos                   _UINT32_(2)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 2 Position */
#define MCAN_TXBRP_TRP2_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP2_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 2 Mask */
#define MCAN_TXBRP_TRP2(value)                (MCAN_TXBRP_TRP2_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP2_Pos)) /* Assignment of value for TRP2 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP2_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP2_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP2_0                     (MCAN_TXBRP_TRP2_0_Val << MCAN_TXBRP_TRP2_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP2_1                     (MCAN_TXBRP_TRP2_1_Val << MCAN_TXBRP_TRP2_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP3_Pos                   _UINT32_(3)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 3 Position */
#define MCAN_TXBRP_TRP3_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP3_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 3 Mask */
#define MCAN_TXBRP_TRP3(value)                (MCAN_TXBRP_TRP3_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP3_Pos)) /* Assignment of value for TRP3 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP3_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP3_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP3_0                     (MCAN_TXBRP_TRP3_0_Val << MCAN_TXBRP_TRP3_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP3_1                     (MCAN_TXBRP_TRP3_1_Val << MCAN_TXBRP_TRP3_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP4_Pos                   _UINT32_(4)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 4 Position */
#define MCAN_TXBRP_TRP4_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP4_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 4 Mask */
#define MCAN_TXBRP_TRP4(value)                (MCAN_TXBRP_TRP4_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP4_Pos)) /* Assignment of value for TRP4 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP4_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP4_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP4_0                     (MCAN_TXBRP_TRP4_0_Val << MCAN_TXBRP_TRP4_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP4_1                     (MCAN_TXBRP_TRP4_1_Val << MCAN_TXBRP_TRP4_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP5_Pos                   _UINT32_(5)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 5 Position */
#define MCAN_TXBRP_TRP5_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP5_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 5 Mask */
#define MCAN_TXBRP_TRP5(value)                (MCAN_TXBRP_TRP5_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP5_Pos)) /* Assignment of value for TRP5 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP5_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP5_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP5_0                     (MCAN_TXBRP_TRP5_0_Val << MCAN_TXBRP_TRP5_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP5_1                     (MCAN_TXBRP_TRP5_1_Val << MCAN_TXBRP_TRP5_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP6_Pos                   _UINT32_(6)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 6 Position */
#define MCAN_TXBRP_TRP6_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP6_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 6 Mask */
#define MCAN_TXBRP_TRP6(value)                (MCAN_TXBRP_TRP6_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP6_Pos)) /* Assignment of value for TRP6 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP6_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP6_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP6_0                     (MCAN_TXBRP_TRP6_0_Val << MCAN_TXBRP_TRP6_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP6_1                     (MCAN_TXBRP_TRP6_1_Val << MCAN_TXBRP_TRP6_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP7_Pos                   _UINT32_(7)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 7 Position */
#define MCAN_TXBRP_TRP7_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP7_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 7 Mask */
#define MCAN_TXBRP_TRP7(value)                (MCAN_TXBRP_TRP7_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP7_Pos)) /* Assignment of value for TRP7 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP7_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP7_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP7_0                     (MCAN_TXBRP_TRP7_0_Val << MCAN_TXBRP_TRP7_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP7_1                     (MCAN_TXBRP_TRP7_1_Val << MCAN_TXBRP_TRP7_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP8_Pos                   _UINT32_(8)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 8 Position */
#define MCAN_TXBRP_TRP8_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP8_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 8 Mask */
#define MCAN_TXBRP_TRP8(value)                (MCAN_TXBRP_TRP8_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP8_Pos)) /* Assignment of value for TRP8 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP8_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP8_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP8_0                     (MCAN_TXBRP_TRP8_0_Val << MCAN_TXBRP_TRP8_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP8_1                     (MCAN_TXBRP_TRP8_1_Val << MCAN_TXBRP_TRP8_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP9_Pos                   _UINT32_(9)                                          /* (MCAN_TXBRP) Transmission Request Pending for Buffer 9 Position */
#define MCAN_TXBRP_TRP9_Msk                   (_UINT32_(0x1) << MCAN_TXBRP_TRP9_Pos)               /* (MCAN_TXBRP) Transmission Request Pending for Buffer 9 Mask */
#define MCAN_TXBRP_TRP9(value)                (MCAN_TXBRP_TRP9_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP9_Pos)) /* Assignment of value for TRP9 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP9_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP9_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP9_0                     (MCAN_TXBRP_TRP9_0_Val << MCAN_TXBRP_TRP9_Pos)       /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP9_1                     (MCAN_TXBRP_TRP9_1_Val << MCAN_TXBRP_TRP9_Pos)       /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP10_Pos                  _UINT32_(10)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 10 Position */
#define MCAN_TXBRP_TRP10_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP10_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 10 Mask */
#define MCAN_TXBRP_TRP10(value)               (MCAN_TXBRP_TRP10_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP10_Pos)) /* Assignment of value for TRP10 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP10_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP10_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP10_0                    (MCAN_TXBRP_TRP10_0_Val << MCAN_TXBRP_TRP10_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP10_1                    (MCAN_TXBRP_TRP10_1_Val << MCAN_TXBRP_TRP10_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP11_Pos                  _UINT32_(11)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 11 Position */
#define MCAN_TXBRP_TRP11_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP11_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 11 Mask */
#define MCAN_TXBRP_TRP11(value)               (MCAN_TXBRP_TRP11_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP11_Pos)) /* Assignment of value for TRP11 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP11_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP11_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP11_0                    (MCAN_TXBRP_TRP11_0_Val << MCAN_TXBRP_TRP11_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP11_1                    (MCAN_TXBRP_TRP11_1_Val << MCAN_TXBRP_TRP11_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP12_Pos                  _UINT32_(12)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 12 Position */
#define MCAN_TXBRP_TRP12_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP12_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 12 Mask */
#define MCAN_TXBRP_TRP12(value)               (MCAN_TXBRP_TRP12_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP12_Pos)) /* Assignment of value for TRP12 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP12_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP12_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP12_0                    (MCAN_TXBRP_TRP12_0_Val << MCAN_TXBRP_TRP12_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP12_1                    (MCAN_TXBRP_TRP12_1_Val << MCAN_TXBRP_TRP12_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP13_Pos                  _UINT32_(13)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 13 Position */
#define MCAN_TXBRP_TRP13_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP13_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 13 Mask */
#define MCAN_TXBRP_TRP13(value)               (MCAN_TXBRP_TRP13_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP13_Pos)) /* Assignment of value for TRP13 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP13_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP13_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP13_0                    (MCAN_TXBRP_TRP13_0_Val << MCAN_TXBRP_TRP13_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP13_1                    (MCAN_TXBRP_TRP13_1_Val << MCAN_TXBRP_TRP13_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP14_Pos                  _UINT32_(14)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 14 Position */
#define MCAN_TXBRP_TRP14_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP14_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 14 Mask */
#define MCAN_TXBRP_TRP14(value)               (MCAN_TXBRP_TRP14_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP14_Pos)) /* Assignment of value for TRP14 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP14_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP14_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP14_0                    (MCAN_TXBRP_TRP14_0_Val << MCAN_TXBRP_TRP14_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP14_1                    (MCAN_TXBRP_TRP14_1_Val << MCAN_TXBRP_TRP14_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP15_Pos                  _UINT32_(15)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 15 Position */
#define MCAN_TXBRP_TRP15_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP15_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 15 Mask */
#define MCAN_TXBRP_TRP15(value)               (MCAN_TXBRP_TRP15_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP15_Pos)) /* Assignment of value for TRP15 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP15_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP15_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP15_0                    (MCAN_TXBRP_TRP15_0_Val << MCAN_TXBRP_TRP15_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP15_1                    (MCAN_TXBRP_TRP15_1_Val << MCAN_TXBRP_TRP15_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP16_Pos                  _UINT32_(16)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 16 Position */
#define MCAN_TXBRP_TRP16_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP16_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 16 Mask */
#define MCAN_TXBRP_TRP16(value)               (MCAN_TXBRP_TRP16_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP16_Pos)) /* Assignment of value for TRP16 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP16_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP16_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP16_0                    (MCAN_TXBRP_TRP16_0_Val << MCAN_TXBRP_TRP16_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP16_1                    (MCAN_TXBRP_TRP16_1_Val << MCAN_TXBRP_TRP16_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP17_Pos                  _UINT32_(17)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 17 Position */
#define MCAN_TXBRP_TRP17_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP17_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 17 Mask */
#define MCAN_TXBRP_TRP17(value)               (MCAN_TXBRP_TRP17_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP17_Pos)) /* Assignment of value for TRP17 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP17_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP17_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP17_0                    (MCAN_TXBRP_TRP17_0_Val << MCAN_TXBRP_TRP17_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP17_1                    (MCAN_TXBRP_TRP17_1_Val << MCAN_TXBRP_TRP17_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP18_Pos                  _UINT32_(18)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 18 Position */
#define MCAN_TXBRP_TRP18_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP18_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 18 Mask */
#define MCAN_TXBRP_TRP18(value)               (MCAN_TXBRP_TRP18_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP18_Pos)) /* Assignment of value for TRP18 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP18_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP18_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP18_0                    (MCAN_TXBRP_TRP18_0_Val << MCAN_TXBRP_TRP18_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP18_1                    (MCAN_TXBRP_TRP18_1_Val << MCAN_TXBRP_TRP18_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP19_Pos                  _UINT32_(19)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 19 Position */
#define MCAN_TXBRP_TRP19_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP19_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 19 Mask */
#define MCAN_TXBRP_TRP19(value)               (MCAN_TXBRP_TRP19_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP19_Pos)) /* Assignment of value for TRP19 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP19_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP19_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP19_0                    (MCAN_TXBRP_TRP19_0_Val << MCAN_TXBRP_TRP19_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP19_1                    (MCAN_TXBRP_TRP19_1_Val << MCAN_TXBRP_TRP19_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP20_Pos                  _UINT32_(20)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 20 Position */
#define MCAN_TXBRP_TRP20_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP20_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 20 Mask */
#define MCAN_TXBRP_TRP20(value)               (MCAN_TXBRP_TRP20_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP20_Pos)) /* Assignment of value for TRP20 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP20_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP20_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP20_0                    (MCAN_TXBRP_TRP20_0_Val << MCAN_TXBRP_TRP20_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP20_1                    (MCAN_TXBRP_TRP20_1_Val << MCAN_TXBRP_TRP20_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP21_Pos                  _UINT32_(21)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 21 Position */
#define MCAN_TXBRP_TRP21_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP21_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 21 Mask */
#define MCAN_TXBRP_TRP21(value)               (MCAN_TXBRP_TRP21_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP21_Pos)) /* Assignment of value for TRP21 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP21_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP21_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP21_0                    (MCAN_TXBRP_TRP21_0_Val << MCAN_TXBRP_TRP21_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP21_1                    (MCAN_TXBRP_TRP21_1_Val << MCAN_TXBRP_TRP21_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP22_Pos                  _UINT32_(22)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 22 Position */
#define MCAN_TXBRP_TRP22_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP22_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 22 Mask */
#define MCAN_TXBRP_TRP22(value)               (MCAN_TXBRP_TRP22_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP22_Pos)) /* Assignment of value for TRP22 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP22_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP22_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP22_0                    (MCAN_TXBRP_TRP22_0_Val << MCAN_TXBRP_TRP22_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP22_1                    (MCAN_TXBRP_TRP22_1_Val << MCAN_TXBRP_TRP22_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP23_Pos                  _UINT32_(23)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 23 Position */
#define MCAN_TXBRP_TRP23_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP23_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 23 Mask */
#define MCAN_TXBRP_TRP23(value)               (MCAN_TXBRP_TRP23_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP23_Pos)) /* Assignment of value for TRP23 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP23_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP23_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP23_0                    (MCAN_TXBRP_TRP23_0_Val << MCAN_TXBRP_TRP23_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP23_1                    (MCAN_TXBRP_TRP23_1_Val << MCAN_TXBRP_TRP23_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP24_Pos                  _UINT32_(24)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 24 Position */
#define MCAN_TXBRP_TRP24_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP24_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 24 Mask */
#define MCAN_TXBRP_TRP24(value)               (MCAN_TXBRP_TRP24_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP24_Pos)) /* Assignment of value for TRP24 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP24_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP24_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP24_0                    (MCAN_TXBRP_TRP24_0_Val << MCAN_TXBRP_TRP24_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP24_1                    (MCAN_TXBRP_TRP24_1_Val << MCAN_TXBRP_TRP24_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP25_Pos                  _UINT32_(25)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 25 Position */
#define MCAN_TXBRP_TRP25_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP25_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 25 Mask */
#define MCAN_TXBRP_TRP25(value)               (MCAN_TXBRP_TRP25_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP25_Pos)) /* Assignment of value for TRP25 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP25_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP25_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP25_0                    (MCAN_TXBRP_TRP25_0_Val << MCAN_TXBRP_TRP25_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP25_1                    (MCAN_TXBRP_TRP25_1_Val << MCAN_TXBRP_TRP25_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP26_Pos                  _UINT32_(26)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 26 Position */
#define MCAN_TXBRP_TRP26_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP26_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 26 Mask */
#define MCAN_TXBRP_TRP26(value)               (MCAN_TXBRP_TRP26_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP26_Pos)) /* Assignment of value for TRP26 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP26_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP26_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP26_0                    (MCAN_TXBRP_TRP26_0_Val << MCAN_TXBRP_TRP26_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP26_1                    (MCAN_TXBRP_TRP26_1_Val << MCAN_TXBRP_TRP26_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP27_Pos                  _UINT32_(27)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 27 Position */
#define MCAN_TXBRP_TRP27_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP27_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 27 Mask */
#define MCAN_TXBRP_TRP27(value)               (MCAN_TXBRP_TRP27_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP27_Pos)) /* Assignment of value for TRP27 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP27_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP27_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP27_0                    (MCAN_TXBRP_TRP27_0_Val << MCAN_TXBRP_TRP27_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP27_1                    (MCAN_TXBRP_TRP27_1_Val << MCAN_TXBRP_TRP27_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP28_Pos                  _UINT32_(28)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 28 Position */
#define MCAN_TXBRP_TRP28_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP28_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 28 Mask */
#define MCAN_TXBRP_TRP28(value)               (MCAN_TXBRP_TRP28_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP28_Pos)) /* Assignment of value for TRP28 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP28_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP28_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP28_0                    (MCAN_TXBRP_TRP28_0_Val << MCAN_TXBRP_TRP28_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP28_1                    (MCAN_TXBRP_TRP28_1_Val << MCAN_TXBRP_TRP28_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP29_Pos                  _UINT32_(29)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 29 Position */
#define MCAN_TXBRP_TRP29_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP29_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 29 Mask */
#define MCAN_TXBRP_TRP29(value)               (MCAN_TXBRP_TRP29_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP29_Pos)) /* Assignment of value for TRP29 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP29_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP29_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP29_0                    (MCAN_TXBRP_TRP29_0_Val << MCAN_TXBRP_TRP29_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP29_1                    (MCAN_TXBRP_TRP29_1_Val << MCAN_TXBRP_TRP29_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP30_Pos                  _UINT32_(30)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 30 Position */
#define MCAN_TXBRP_TRP30_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP30_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 30 Mask */
#define MCAN_TXBRP_TRP30(value)               (MCAN_TXBRP_TRP30_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP30_Pos)) /* Assignment of value for TRP30 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP30_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP30_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP30_0                    (MCAN_TXBRP_TRP30_0_Val << MCAN_TXBRP_TRP30_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP30_1                    (MCAN_TXBRP_TRP30_1_Val << MCAN_TXBRP_TRP30_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_TRP31_Pos                  _UINT32_(31)                                         /* (MCAN_TXBRP) Transmission Request Pending for Buffer 31 Position */
#define MCAN_TXBRP_TRP31_Msk                  (_UINT32_(0x1) << MCAN_TXBRP_TRP31_Pos)              /* (MCAN_TXBRP) Transmission Request Pending for Buffer 31 Mask */
#define MCAN_TXBRP_TRP31(value)               (MCAN_TXBRP_TRP31_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP31_Pos)) /* Assignment of value for TRP31 in the MCAN_TXBRP register */
#define   MCAN_TXBRP_TRP31_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBRP) No transmission request pending  */
#define   MCAN_TXBRP_TRP31_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBRP) Transmission request pending  */
#define MCAN_TXBRP_TRP31_0                    (MCAN_TXBRP_TRP31_0_Val << MCAN_TXBRP_TRP31_Pos)     /* (MCAN_TXBRP) No transmission request pending Position */
#define MCAN_TXBRP_TRP31_1                    (MCAN_TXBRP_TRP31_1_Val << MCAN_TXBRP_TRP31_Pos)     /* (MCAN_TXBRP) Transmission request pending Position */
#define MCAN_TXBRP_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBRP) Register Mask  */

#define MCAN_TXBRP_TRP_Pos                    _UINT32_(0)                                          /* (MCAN_TXBRP Position) Transmission Request Pending for Buffer 3x */
#define MCAN_TXBRP_TRP_Msk                    (_UINT32_(0xFFFFFFFF) << MCAN_TXBRP_TRP_Pos)         /* (MCAN_TXBRP Mask) TRP */
#define MCAN_TXBRP_TRP(value)                 (MCAN_TXBRP_TRP_Msk & (_UINT32_(value) << MCAN_TXBRP_TRP_Pos)) 

/* -------- MCAN_TXBAR : (MCAN Offset: 0xD0) (R/W 32) Transmit Buffer Add Request Register -------- */
#define MCAN_TXBAR_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXBAR) Transmit Buffer Add Request Register  Reset Value */

#define MCAN_TXBAR_AR0_Pos                    _UINT32_(0)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 0 Position */
#define MCAN_TXBAR_AR0_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR0_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 0 Mask */
#define MCAN_TXBAR_AR0(value)                 (MCAN_TXBAR_AR0_Msk & (_UINT32_(value) << MCAN_TXBAR_AR0_Pos)) /* Assignment of value for AR0 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR0_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR0_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR0_0                      (MCAN_TXBAR_AR0_0_Val << MCAN_TXBAR_AR0_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR0_1                      (MCAN_TXBAR_AR0_1_Val << MCAN_TXBAR_AR0_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR1_Pos                    _UINT32_(1)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 1 Position */
#define MCAN_TXBAR_AR1_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR1_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 1 Mask */
#define MCAN_TXBAR_AR1(value)                 (MCAN_TXBAR_AR1_Msk & (_UINT32_(value) << MCAN_TXBAR_AR1_Pos)) /* Assignment of value for AR1 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR1_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR1_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR1_0                      (MCAN_TXBAR_AR1_0_Val << MCAN_TXBAR_AR1_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR1_1                      (MCAN_TXBAR_AR1_1_Val << MCAN_TXBAR_AR1_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR2_Pos                    _UINT32_(2)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 2 Position */
#define MCAN_TXBAR_AR2_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR2_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 2 Mask */
#define MCAN_TXBAR_AR2(value)                 (MCAN_TXBAR_AR2_Msk & (_UINT32_(value) << MCAN_TXBAR_AR2_Pos)) /* Assignment of value for AR2 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR2_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR2_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR2_0                      (MCAN_TXBAR_AR2_0_Val << MCAN_TXBAR_AR2_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR2_1                      (MCAN_TXBAR_AR2_1_Val << MCAN_TXBAR_AR2_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR3_Pos                    _UINT32_(3)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 3 Position */
#define MCAN_TXBAR_AR3_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR3_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 3 Mask */
#define MCAN_TXBAR_AR3(value)                 (MCAN_TXBAR_AR3_Msk & (_UINT32_(value) << MCAN_TXBAR_AR3_Pos)) /* Assignment of value for AR3 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR3_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR3_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR3_0                      (MCAN_TXBAR_AR3_0_Val << MCAN_TXBAR_AR3_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR3_1                      (MCAN_TXBAR_AR3_1_Val << MCAN_TXBAR_AR3_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR4_Pos                    _UINT32_(4)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 4 Position */
#define MCAN_TXBAR_AR4_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR4_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 4 Mask */
#define MCAN_TXBAR_AR4(value)                 (MCAN_TXBAR_AR4_Msk & (_UINT32_(value) << MCAN_TXBAR_AR4_Pos)) /* Assignment of value for AR4 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR4_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR4_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR4_0                      (MCAN_TXBAR_AR4_0_Val << MCAN_TXBAR_AR4_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR4_1                      (MCAN_TXBAR_AR4_1_Val << MCAN_TXBAR_AR4_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR5_Pos                    _UINT32_(5)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 5 Position */
#define MCAN_TXBAR_AR5_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR5_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 5 Mask */
#define MCAN_TXBAR_AR5(value)                 (MCAN_TXBAR_AR5_Msk & (_UINT32_(value) << MCAN_TXBAR_AR5_Pos)) /* Assignment of value for AR5 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR5_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR5_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR5_0                      (MCAN_TXBAR_AR5_0_Val << MCAN_TXBAR_AR5_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR5_1                      (MCAN_TXBAR_AR5_1_Val << MCAN_TXBAR_AR5_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR6_Pos                    _UINT32_(6)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 6 Position */
#define MCAN_TXBAR_AR6_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR6_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 6 Mask */
#define MCAN_TXBAR_AR6(value)                 (MCAN_TXBAR_AR6_Msk & (_UINT32_(value) << MCAN_TXBAR_AR6_Pos)) /* Assignment of value for AR6 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR6_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR6_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR6_0                      (MCAN_TXBAR_AR6_0_Val << MCAN_TXBAR_AR6_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR6_1                      (MCAN_TXBAR_AR6_1_Val << MCAN_TXBAR_AR6_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR7_Pos                    _UINT32_(7)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 7 Position */
#define MCAN_TXBAR_AR7_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR7_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 7 Mask */
#define MCAN_TXBAR_AR7(value)                 (MCAN_TXBAR_AR7_Msk & (_UINT32_(value) << MCAN_TXBAR_AR7_Pos)) /* Assignment of value for AR7 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR7_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR7_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR7_0                      (MCAN_TXBAR_AR7_0_Val << MCAN_TXBAR_AR7_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR7_1                      (MCAN_TXBAR_AR7_1_Val << MCAN_TXBAR_AR7_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR8_Pos                    _UINT32_(8)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 8 Position */
#define MCAN_TXBAR_AR8_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR8_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 8 Mask */
#define MCAN_TXBAR_AR8(value)                 (MCAN_TXBAR_AR8_Msk & (_UINT32_(value) << MCAN_TXBAR_AR8_Pos)) /* Assignment of value for AR8 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR8_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR8_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR8_0                      (MCAN_TXBAR_AR8_0_Val << MCAN_TXBAR_AR8_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR8_1                      (MCAN_TXBAR_AR8_1_Val << MCAN_TXBAR_AR8_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR9_Pos                    _UINT32_(9)                                          /* (MCAN_TXBAR) Add Request for Transmit Buffer 9 Position */
#define MCAN_TXBAR_AR9_Msk                    (_UINT32_(0x1) << MCAN_TXBAR_AR9_Pos)                /* (MCAN_TXBAR) Add Request for Transmit Buffer 9 Mask */
#define MCAN_TXBAR_AR9(value)                 (MCAN_TXBAR_AR9_Msk & (_UINT32_(value) << MCAN_TXBAR_AR9_Pos)) /* Assignment of value for AR9 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR9_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR9_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR9_0                      (MCAN_TXBAR_AR9_0_Val << MCAN_TXBAR_AR9_Pos)         /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR9_1                      (MCAN_TXBAR_AR9_1_Val << MCAN_TXBAR_AR9_Pos)         /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR10_Pos                   _UINT32_(10)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 10 Position */
#define MCAN_TXBAR_AR10_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR10_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 10 Mask */
#define MCAN_TXBAR_AR10(value)                (MCAN_TXBAR_AR10_Msk & (_UINT32_(value) << MCAN_TXBAR_AR10_Pos)) /* Assignment of value for AR10 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR10_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR10_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR10_0                     (MCAN_TXBAR_AR10_0_Val << MCAN_TXBAR_AR10_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR10_1                     (MCAN_TXBAR_AR10_1_Val << MCAN_TXBAR_AR10_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR11_Pos                   _UINT32_(11)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 11 Position */
#define MCAN_TXBAR_AR11_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR11_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 11 Mask */
#define MCAN_TXBAR_AR11(value)                (MCAN_TXBAR_AR11_Msk & (_UINT32_(value) << MCAN_TXBAR_AR11_Pos)) /* Assignment of value for AR11 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR11_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR11_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR11_0                     (MCAN_TXBAR_AR11_0_Val << MCAN_TXBAR_AR11_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR11_1                     (MCAN_TXBAR_AR11_1_Val << MCAN_TXBAR_AR11_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR12_Pos                   _UINT32_(12)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 12 Position */
#define MCAN_TXBAR_AR12_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR12_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 12 Mask */
#define MCAN_TXBAR_AR12(value)                (MCAN_TXBAR_AR12_Msk & (_UINT32_(value) << MCAN_TXBAR_AR12_Pos)) /* Assignment of value for AR12 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR12_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR12_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR12_0                     (MCAN_TXBAR_AR12_0_Val << MCAN_TXBAR_AR12_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR12_1                     (MCAN_TXBAR_AR12_1_Val << MCAN_TXBAR_AR12_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR13_Pos                   _UINT32_(13)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 13 Position */
#define MCAN_TXBAR_AR13_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR13_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 13 Mask */
#define MCAN_TXBAR_AR13(value)                (MCAN_TXBAR_AR13_Msk & (_UINT32_(value) << MCAN_TXBAR_AR13_Pos)) /* Assignment of value for AR13 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR13_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR13_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR13_0                     (MCAN_TXBAR_AR13_0_Val << MCAN_TXBAR_AR13_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR13_1                     (MCAN_TXBAR_AR13_1_Val << MCAN_TXBAR_AR13_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR14_Pos                   _UINT32_(14)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 14 Position */
#define MCAN_TXBAR_AR14_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR14_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 14 Mask */
#define MCAN_TXBAR_AR14(value)                (MCAN_TXBAR_AR14_Msk & (_UINT32_(value) << MCAN_TXBAR_AR14_Pos)) /* Assignment of value for AR14 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR14_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR14_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR14_0                     (MCAN_TXBAR_AR14_0_Val << MCAN_TXBAR_AR14_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR14_1                     (MCAN_TXBAR_AR14_1_Val << MCAN_TXBAR_AR14_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR15_Pos                   _UINT32_(15)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 15 Position */
#define MCAN_TXBAR_AR15_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR15_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 15 Mask */
#define MCAN_TXBAR_AR15(value)                (MCAN_TXBAR_AR15_Msk & (_UINT32_(value) << MCAN_TXBAR_AR15_Pos)) /* Assignment of value for AR15 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR15_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR15_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR15_0                     (MCAN_TXBAR_AR15_0_Val << MCAN_TXBAR_AR15_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR15_1                     (MCAN_TXBAR_AR15_1_Val << MCAN_TXBAR_AR15_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR16_Pos                   _UINT32_(16)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 16 Position */
#define MCAN_TXBAR_AR16_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR16_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 16 Mask */
#define MCAN_TXBAR_AR16(value)                (MCAN_TXBAR_AR16_Msk & (_UINT32_(value) << MCAN_TXBAR_AR16_Pos)) /* Assignment of value for AR16 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR16_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR16_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR16_0                     (MCAN_TXBAR_AR16_0_Val << MCAN_TXBAR_AR16_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR16_1                     (MCAN_TXBAR_AR16_1_Val << MCAN_TXBAR_AR16_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR17_Pos                   _UINT32_(17)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 17 Position */
#define MCAN_TXBAR_AR17_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR17_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 17 Mask */
#define MCAN_TXBAR_AR17(value)                (MCAN_TXBAR_AR17_Msk & (_UINT32_(value) << MCAN_TXBAR_AR17_Pos)) /* Assignment of value for AR17 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR17_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR17_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR17_0                     (MCAN_TXBAR_AR17_0_Val << MCAN_TXBAR_AR17_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR17_1                     (MCAN_TXBAR_AR17_1_Val << MCAN_TXBAR_AR17_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR18_Pos                   _UINT32_(18)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 18 Position */
#define MCAN_TXBAR_AR18_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR18_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 18 Mask */
#define MCAN_TXBAR_AR18(value)                (MCAN_TXBAR_AR18_Msk & (_UINT32_(value) << MCAN_TXBAR_AR18_Pos)) /* Assignment of value for AR18 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR18_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR18_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR18_0                     (MCAN_TXBAR_AR18_0_Val << MCAN_TXBAR_AR18_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR18_1                     (MCAN_TXBAR_AR18_1_Val << MCAN_TXBAR_AR18_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR19_Pos                   _UINT32_(19)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 19 Position */
#define MCAN_TXBAR_AR19_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR19_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 19 Mask */
#define MCAN_TXBAR_AR19(value)                (MCAN_TXBAR_AR19_Msk & (_UINT32_(value) << MCAN_TXBAR_AR19_Pos)) /* Assignment of value for AR19 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR19_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR19_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR19_0                     (MCAN_TXBAR_AR19_0_Val << MCAN_TXBAR_AR19_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR19_1                     (MCAN_TXBAR_AR19_1_Val << MCAN_TXBAR_AR19_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR20_Pos                   _UINT32_(20)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 20 Position */
#define MCAN_TXBAR_AR20_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR20_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 20 Mask */
#define MCAN_TXBAR_AR20(value)                (MCAN_TXBAR_AR20_Msk & (_UINT32_(value) << MCAN_TXBAR_AR20_Pos)) /* Assignment of value for AR20 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR20_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR20_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR20_0                     (MCAN_TXBAR_AR20_0_Val << MCAN_TXBAR_AR20_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR20_1                     (MCAN_TXBAR_AR20_1_Val << MCAN_TXBAR_AR20_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR21_Pos                   _UINT32_(21)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 21 Position */
#define MCAN_TXBAR_AR21_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR21_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 21 Mask */
#define MCAN_TXBAR_AR21(value)                (MCAN_TXBAR_AR21_Msk & (_UINT32_(value) << MCAN_TXBAR_AR21_Pos)) /* Assignment of value for AR21 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR21_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR21_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR21_0                     (MCAN_TXBAR_AR21_0_Val << MCAN_TXBAR_AR21_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR21_1                     (MCAN_TXBAR_AR21_1_Val << MCAN_TXBAR_AR21_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR22_Pos                   _UINT32_(22)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 22 Position */
#define MCAN_TXBAR_AR22_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR22_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 22 Mask */
#define MCAN_TXBAR_AR22(value)                (MCAN_TXBAR_AR22_Msk & (_UINT32_(value) << MCAN_TXBAR_AR22_Pos)) /* Assignment of value for AR22 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR22_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR22_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR22_0                     (MCAN_TXBAR_AR22_0_Val << MCAN_TXBAR_AR22_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR22_1                     (MCAN_TXBAR_AR22_1_Val << MCAN_TXBAR_AR22_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR23_Pos                   _UINT32_(23)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 23 Position */
#define MCAN_TXBAR_AR23_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR23_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 23 Mask */
#define MCAN_TXBAR_AR23(value)                (MCAN_TXBAR_AR23_Msk & (_UINT32_(value) << MCAN_TXBAR_AR23_Pos)) /* Assignment of value for AR23 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR23_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR23_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR23_0                     (MCAN_TXBAR_AR23_0_Val << MCAN_TXBAR_AR23_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR23_1                     (MCAN_TXBAR_AR23_1_Val << MCAN_TXBAR_AR23_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR24_Pos                   _UINT32_(24)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 24 Position */
#define MCAN_TXBAR_AR24_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR24_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 24 Mask */
#define MCAN_TXBAR_AR24(value)                (MCAN_TXBAR_AR24_Msk & (_UINT32_(value) << MCAN_TXBAR_AR24_Pos)) /* Assignment of value for AR24 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR24_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR24_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR24_0                     (MCAN_TXBAR_AR24_0_Val << MCAN_TXBAR_AR24_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR24_1                     (MCAN_TXBAR_AR24_1_Val << MCAN_TXBAR_AR24_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR25_Pos                   _UINT32_(25)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 25 Position */
#define MCAN_TXBAR_AR25_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR25_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 25 Mask */
#define MCAN_TXBAR_AR25(value)                (MCAN_TXBAR_AR25_Msk & (_UINT32_(value) << MCAN_TXBAR_AR25_Pos)) /* Assignment of value for AR25 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR25_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR25_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR25_0                     (MCAN_TXBAR_AR25_0_Val << MCAN_TXBAR_AR25_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR25_1                     (MCAN_TXBAR_AR25_1_Val << MCAN_TXBAR_AR25_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR26_Pos                   _UINT32_(26)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 26 Position */
#define MCAN_TXBAR_AR26_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR26_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 26 Mask */
#define MCAN_TXBAR_AR26(value)                (MCAN_TXBAR_AR26_Msk & (_UINT32_(value) << MCAN_TXBAR_AR26_Pos)) /* Assignment of value for AR26 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR26_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR26_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR26_0                     (MCAN_TXBAR_AR26_0_Val << MCAN_TXBAR_AR26_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR26_1                     (MCAN_TXBAR_AR26_1_Val << MCAN_TXBAR_AR26_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR27_Pos                   _UINT32_(27)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 27 Position */
#define MCAN_TXBAR_AR27_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR27_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 27 Mask */
#define MCAN_TXBAR_AR27(value)                (MCAN_TXBAR_AR27_Msk & (_UINT32_(value) << MCAN_TXBAR_AR27_Pos)) /* Assignment of value for AR27 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR27_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR27_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR27_0                     (MCAN_TXBAR_AR27_0_Val << MCAN_TXBAR_AR27_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR27_1                     (MCAN_TXBAR_AR27_1_Val << MCAN_TXBAR_AR27_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR28_Pos                   _UINT32_(28)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 28 Position */
#define MCAN_TXBAR_AR28_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR28_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 28 Mask */
#define MCAN_TXBAR_AR28(value)                (MCAN_TXBAR_AR28_Msk & (_UINT32_(value) << MCAN_TXBAR_AR28_Pos)) /* Assignment of value for AR28 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR28_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR28_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR28_0                     (MCAN_TXBAR_AR28_0_Val << MCAN_TXBAR_AR28_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR28_1                     (MCAN_TXBAR_AR28_1_Val << MCAN_TXBAR_AR28_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR29_Pos                   _UINT32_(29)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 29 Position */
#define MCAN_TXBAR_AR29_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR29_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 29 Mask */
#define MCAN_TXBAR_AR29(value)                (MCAN_TXBAR_AR29_Msk & (_UINT32_(value) << MCAN_TXBAR_AR29_Pos)) /* Assignment of value for AR29 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR29_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR29_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR29_0                     (MCAN_TXBAR_AR29_0_Val << MCAN_TXBAR_AR29_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR29_1                     (MCAN_TXBAR_AR29_1_Val << MCAN_TXBAR_AR29_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR30_Pos                   _UINT32_(30)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 30 Position */
#define MCAN_TXBAR_AR30_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR30_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 30 Mask */
#define MCAN_TXBAR_AR30(value)                (MCAN_TXBAR_AR30_Msk & (_UINT32_(value) << MCAN_TXBAR_AR30_Pos)) /* Assignment of value for AR30 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR30_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR30_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR30_0                     (MCAN_TXBAR_AR30_0_Val << MCAN_TXBAR_AR30_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR30_1                     (MCAN_TXBAR_AR30_1_Val << MCAN_TXBAR_AR30_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_AR31_Pos                   _UINT32_(31)                                         /* (MCAN_TXBAR) Add Request for Transmit Buffer 31 Position */
#define MCAN_TXBAR_AR31_Msk                   (_UINT32_(0x1) << MCAN_TXBAR_AR31_Pos)               /* (MCAN_TXBAR) Add Request for Transmit Buffer 31 Mask */
#define MCAN_TXBAR_AR31(value)                (MCAN_TXBAR_AR31_Msk & (_UINT32_(value) << MCAN_TXBAR_AR31_Pos)) /* Assignment of value for AR31 in the MCAN_TXBAR register */
#define   MCAN_TXBAR_AR31_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBAR) No transmission request added.  */
#define   MCAN_TXBAR_AR31_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBAR) Transmission requested added.  */
#define MCAN_TXBAR_AR31_0                     (MCAN_TXBAR_AR31_0_Val << MCAN_TXBAR_AR31_Pos)       /* (MCAN_TXBAR) No transmission request added. Position */
#define MCAN_TXBAR_AR31_1                     (MCAN_TXBAR_AR31_1_Val << MCAN_TXBAR_AR31_Pos)       /* (MCAN_TXBAR) Transmission requested added. Position */
#define MCAN_TXBAR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBAR) Register Mask  */

#define MCAN_TXBAR_AR_Pos                     _UINT32_(0)                                          /* (MCAN_TXBAR Position) Add Request for Transmit Buffer 3x */
#define MCAN_TXBAR_AR_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_TXBAR_AR_Pos)          /* (MCAN_TXBAR Mask) AR */
#define MCAN_TXBAR_AR(value)                  (MCAN_TXBAR_AR_Msk & (_UINT32_(value) << MCAN_TXBAR_AR_Pos)) 

/* -------- MCAN_TXBCR : (MCAN Offset: 0xD4) (R/W 32) Transmit Buffer Cancellation Request Register -------- */
#define MCAN_TXBCR_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXBCR) Transmit Buffer Cancellation Request Register  Reset Value */

#define MCAN_TXBCR_CR0_Pos                    _UINT32_(0)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 0 Position */
#define MCAN_TXBCR_CR0_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR0_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 0 Mask */
#define MCAN_TXBCR_CR0(value)                 (MCAN_TXBCR_CR0_Msk & (_UINT32_(value) << MCAN_TXBCR_CR0_Pos)) /* Assignment of value for CR0 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR0_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR0_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR0_0                      (MCAN_TXBCR_CR0_0_Val << MCAN_TXBCR_CR0_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR0_1                      (MCAN_TXBCR_CR0_1_Val << MCAN_TXBCR_CR0_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR1_Pos                    _UINT32_(1)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 1 Position */
#define MCAN_TXBCR_CR1_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR1_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 1 Mask */
#define MCAN_TXBCR_CR1(value)                 (MCAN_TXBCR_CR1_Msk & (_UINT32_(value) << MCAN_TXBCR_CR1_Pos)) /* Assignment of value for CR1 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR1_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR1_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR1_0                      (MCAN_TXBCR_CR1_0_Val << MCAN_TXBCR_CR1_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR1_1                      (MCAN_TXBCR_CR1_1_Val << MCAN_TXBCR_CR1_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR2_Pos                    _UINT32_(2)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 2 Position */
#define MCAN_TXBCR_CR2_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR2_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 2 Mask */
#define MCAN_TXBCR_CR2(value)                 (MCAN_TXBCR_CR2_Msk & (_UINT32_(value) << MCAN_TXBCR_CR2_Pos)) /* Assignment of value for CR2 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR2_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR2_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR2_0                      (MCAN_TXBCR_CR2_0_Val << MCAN_TXBCR_CR2_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR2_1                      (MCAN_TXBCR_CR2_1_Val << MCAN_TXBCR_CR2_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR3_Pos                    _UINT32_(3)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 3 Position */
#define MCAN_TXBCR_CR3_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR3_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 3 Mask */
#define MCAN_TXBCR_CR3(value)                 (MCAN_TXBCR_CR3_Msk & (_UINT32_(value) << MCAN_TXBCR_CR3_Pos)) /* Assignment of value for CR3 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR3_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR3_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR3_0                      (MCAN_TXBCR_CR3_0_Val << MCAN_TXBCR_CR3_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR3_1                      (MCAN_TXBCR_CR3_1_Val << MCAN_TXBCR_CR3_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR4_Pos                    _UINT32_(4)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 4 Position */
#define MCAN_TXBCR_CR4_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR4_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 4 Mask */
#define MCAN_TXBCR_CR4(value)                 (MCAN_TXBCR_CR4_Msk & (_UINT32_(value) << MCAN_TXBCR_CR4_Pos)) /* Assignment of value for CR4 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR4_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR4_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR4_0                      (MCAN_TXBCR_CR4_0_Val << MCAN_TXBCR_CR4_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR4_1                      (MCAN_TXBCR_CR4_1_Val << MCAN_TXBCR_CR4_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR5_Pos                    _UINT32_(5)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 5 Position */
#define MCAN_TXBCR_CR5_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR5_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 5 Mask */
#define MCAN_TXBCR_CR5(value)                 (MCAN_TXBCR_CR5_Msk & (_UINT32_(value) << MCAN_TXBCR_CR5_Pos)) /* Assignment of value for CR5 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR5_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR5_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR5_0                      (MCAN_TXBCR_CR5_0_Val << MCAN_TXBCR_CR5_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR5_1                      (MCAN_TXBCR_CR5_1_Val << MCAN_TXBCR_CR5_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR6_Pos                    _UINT32_(6)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 6 Position */
#define MCAN_TXBCR_CR6_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR6_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 6 Mask */
#define MCAN_TXBCR_CR6(value)                 (MCAN_TXBCR_CR6_Msk & (_UINT32_(value) << MCAN_TXBCR_CR6_Pos)) /* Assignment of value for CR6 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR6_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR6_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR6_0                      (MCAN_TXBCR_CR6_0_Val << MCAN_TXBCR_CR6_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR6_1                      (MCAN_TXBCR_CR6_1_Val << MCAN_TXBCR_CR6_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR7_Pos                    _UINT32_(7)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 7 Position */
#define MCAN_TXBCR_CR7_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR7_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 7 Mask */
#define MCAN_TXBCR_CR7(value)                 (MCAN_TXBCR_CR7_Msk & (_UINT32_(value) << MCAN_TXBCR_CR7_Pos)) /* Assignment of value for CR7 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR7_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR7_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR7_0                      (MCAN_TXBCR_CR7_0_Val << MCAN_TXBCR_CR7_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR7_1                      (MCAN_TXBCR_CR7_1_Val << MCAN_TXBCR_CR7_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR8_Pos                    _UINT32_(8)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 8 Position */
#define MCAN_TXBCR_CR8_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR8_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 8 Mask */
#define MCAN_TXBCR_CR8(value)                 (MCAN_TXBCR_CR8_Msk & (_UINT32_(value) << MCAN_TXBCR_CR8_Pos)) /* Assignment of value for CR8 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR8_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR8_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR8_0                      (MCAN_TXBCR_CR8_0_Val << MCAN_TXBCR_CR8_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR8_1                      (MCAN_TXBCR_CR8_1_Val << MCAN_TXBCR_CR8_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR9_Pos                    _UINT32_(9)                                          /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 9 Position */
#define MCAN_TXBCR_CR9_Msk                    (_UINT32_(0x1) << MCAN_TXBCR_CR9_Pos)                /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 9 Mask */
#define MCAN_TXBCR_CR9(value)                 (MCAN_TXBCR_CR9_Msk & (_UINT32_(value) << MCAN_TXBCR_CR9_Pos)) /* Assignment of value for CR9 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR9_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR9_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR9_0                      (MCAN_TXBCR_CR9_0_Val << MCAN_TXBCR_CR9_Pos)         /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR9_1                      (MCAN_TXBCR_CR9_1_Val << MCAN_TXBCR_CR9_Pos)         /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR10_Pos                   _UINT32_(10)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 10 Position */
#define MCAN_TXBCR_CR10_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR10_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 10 Mask */
#define MCAN_TXBCR_CR10(value)                (MCAN_TXBCR_CR10_Msk & (_UINT32_(value) << MCAN_TXBCR_CR10_Pos)) /* Assignment of value for CR10 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR10_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR10_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR10_0                     (MCAN_TXBCR_CR10_0_Val << MCAN_TXBCR_CR10_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR10_1                     (MCAN_TXBCR_CR10_1_Val << MCAN_TXBCR_CR10_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR11_Pos                   _UINT32_(11)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 11 Position */
#define MCAN_TXBCR_CR11_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR11_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 11 Mask */
#define MCAN_TXBCR_CR11(value)                (MCAN_TXBCR_CR11_Msk & (_UINT32_(value) << MCAN_TXBCR_CR11_Pos)) /* Assignment of value for CR11 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR11_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR11_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR11_0                     (MCAN_TXBCR_CR11_0_Val << MCAN_TXBCR_CR11_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR11_1                     (MCAN_TXBCR_CR11_1_Val << MCAN_TXBCR_CR11_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR12_Pos                   _UINT32_(12)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 12 Position */
#define MCAN_TXBCR_CR12_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR12_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 12 Mask */
#define MCAN_TXBCR_CR12(value)                (MCAN_TXBCR_CR12_Msk & (_UINT32_(value) << MCAN_TXBCR_CR12_Pos)) /* Assignment of value for CR12 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR12_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR12_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR12_0                     (MCAN_TXBCR_CR12_0_Val << MCAN_TXBCR_CR12_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR12_1                     (MCAN_TXBCR_CR12_1_Val << MCAN_TXBCR_CR12_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR13_Pos                   _UINT32_(13)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 13 Position */
#define MCAN_TXBCR_CR13_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR13_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 13 Mask */
#define MCAN_TXBCR_CR13(value)                (MCAN_TXBCR_CR13_Msk & (_UINT32_(value) << MCAN_TXBCR_CR13_Pos)) /* Assignment of value for CR13 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR13_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR13_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR13_0                     (MCAN_TXBCR_CR13_0_Val << MCAN_TXBCR_CR13_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR13_1                     (MCAN_TXBCR_CR13_1_Val << MCAN_TXBCR_CR13_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR14_Pos                   _UINT32_(14)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 14 Position */
#define MCAN_TXBCR_CR14_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR14_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 14 Mask */
#define MCAN_TXBCR_CR14(value)                (MCAN_TXBCR_CR14_Msk & (_UINT32_(value) << MCAN_TXBCR_CR14_Pos)) /* Assignment of value for CR14 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR14_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR14_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR14_0                     (MCAN_TXBCR_CR14_0_Val << MCAN_TXBCR_CR14_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR14_1                     (MCAN_TXBCR_CR14_1_Val << MCAN_TXBCR_CR14_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR15_Pos                   _UINT32_(15)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 15 Position */
#define MCAN_TXBCR_CR15_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR15_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 15 Mask */
#define MCAN_TXBCR_CR15(value)                (MCAN_TXBCR_CR15_Msk & (_UINT32_(value) << MCAN_TXBCR_CR15_Pos)) /* Assignment of value for CR15 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR15_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR15_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR15_0                     (MCAN_TXBCR_CR15_0_Val << MCAN_TXBCR_CR15_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR15_1                     (MCAN_TXBCR_CR15_1_Val << MCAN_TXBCR_CR15_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR16_Pos                   _UINT32_(16)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 16 Position */
#define MCAN_TXBCR_CR16_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR16_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 16 Mask */
#define MCAN_TXBCR_CR16(value)                (MCAN_TXBCR_CR16_Msk & (_UINT32_(value) << MCAN_TXBCR_CR16_Pos)) /* Assignment of value for CR16 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR16_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR16_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR16_0                     (MCAN_TXBCR_CR16_0_Val << MCAN_TXBCR_CR16_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR16_1                     (MCAN_TXBCR_CR16_1_Val << MCAN_TXBCR_CR16_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR17_Pos                   _UINT32_(17)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 17 Position */
#define MCAN_TXBCR_CR17_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR17_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 17 Mask */
#define MCAN_TXBCR_CR17(value)                (MCAN_TXBCR_CR17_Msk & (_UINT32_(value) << MCAN_TXBCR_CR17_Pos)) /* Assignment of value for CR17 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR17_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR17_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR17_0                     (MCAN_TXBCR_CR17_0_Val << MCAN_TXBCR_CR17_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR17_1                     (MCAN_TXBCR_CR17_1_Val << MCAN_TXBCR_CR17_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR18_Pos                   _UINT32_(18)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 18 Position */
#define MCAN_TXBCR_CR18_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR18_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 18 Mask */
#define MCAN_TXBCR_CR18(value)                (MCAN_TXBCR_CR18_Msk & (_UINT32_(value) << MCAN_TXBCR_CR18_Pos)) /* Assignment of value for CR18 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR18_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR18_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR18_0                     (MCAN_TXBCR_CR18_0_Val << MCAN_TXBCR_CR18_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR18_1                     (MCAN_TXBCR_CR18_1_Val << MCAN_TXBCR_CR18_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR19_Pos                   _UINT32_(19)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 19 Position */
#define MCAN_TXBCR_CR19_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR19_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 19 Mask */
#define MCAN_TXBCR_CR19(value)                (MCAN_TXBCR_CR19_Msk & (_UINT32_(value) << MCAN_TXBCR_CR19_Pos)) /* Assignment of value for CR19 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR19_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR19_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR19_0                     (MCAN_TXBCR_CR19_0_Val << MCAN_TXBCR_CR19_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR19_1                     (MCAN_TXBCR_CR19_1_Val << MCAN_TXBCR_CR19_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR20_Pos                   _UINT32_(20)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 20 Position */
#define MCAN_TXBCR_CR20_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR20_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 20 Mask */
#define MCAN_TXBCR_CR20(value)                (MCAN_TXBCR_CR20_Msk & (_UINT32_(value) << MCAN_TXBCR_CR20_Pos)) /* Assignment of value for CR20 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR20_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR20_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR20_0                     (MCAN_TXBCR_CR20_0_Val << MCAN_TXBCR_CR20_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR20_1                     (MCAN_TXBCR_CR20_1_Val << MCAN_TXBCR_CR20_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR21_Pos                   _UINT32_(21)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 21 Position */
#define MCAN_TXBCR_CR21_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR21_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 21 Mask */
#define MCAN_TXBCR_CR21(value)                (MCAN_TXBCR_CR21_Msk & (_UINT32_(value) << MCAN_TXBCR_CR21_Pos)) /* Assignment of value for CR21 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR21_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR21_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR21_0                     (MCAN_TXBCR_CR21_0_Val << MCAN_TXBCR_CR21_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR21_1                     (MCAN_TXBCR_CR21_1_Val << MCAN_TXBCR_CR21_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR22_Pos                   _UINT32_(22)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 22 Position */
#define MCAN_TXBCR_CR22_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR22_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 22 Mask */
#define MCAN_TXBCR_CR22(value)                (MCAN_TXBCR_CR22_Msk & (_UINT32_(value) << MCAN_TXBCR_CR22_Pos)) /* Assignment of value for CR22 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR22_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR22_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR22_0                     (MCAN_TXBCR_CR22_0_Val << MCAN_TXBCR_CR22_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR22_1                     (MCAN_TXBCR_CR22_1_Val << MCAN_TXBCR_CR22_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR23_Pos                   _UINT32_(23)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 23 Position */
#define MCAN_TXBCR_CR23_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR23_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 23 Mask */
#define MCAN_TXBCR_CR23(value)                (MCAN_TXBCR_CR23_Msk & (_UINT32_(value) << MCAN_TXBCR_CR23_Pos)) /* Assignment of value for CR23 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR23_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR23_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR23_0                     (MCAN_TXBCR_CR23_0_Val << MCAN_TXBCR_CR23_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR23_1                     (MCAN_TXBCR_CR23_1_Val << MCAN_TXBCR_CR23_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR24_Pos                   _UINT32_(24)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 24 Position */
#define MCAN_TXBCR_CR24_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR24_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 24 Mask */
#define MCAN_TXBCR_CR24(value)                (MCAN_TXBCR_CR24_Msk & (_UINT32_(value) << MCAN_TXBCR_CR24_Pos)) /* Assignment of value for CR24 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR24_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR24_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR24_0                     (MCAN_TXBCR_CR24_0_Val << MCAN_TXBCR_CR24_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR24_1                     (MCAN_TXBCR_CR24_1_Val << MCAN_TXBCR_CR24_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR25_Pos                   _UINT32_(25)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 25 Position */
#define MCAN_TXBCR_CR25_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR25_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 25 Mask */
#define MCAN_TXBCR_CR25(value)                (MCAN_TXBCR_CR25_Msk & (_UINT32_(value) << MCAN_TXBCR_CR25_Pos)) /* Assignment of value for CR25 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR25_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR25_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR25_0                     (MCAN_TXBCR_CR25_0_Val << MCAN_TXBCR_CR25_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR25_1                     (MCAN_TXBCR_CR25_1_Val << MCAN_TXBCR_CR25_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR26_Pos                   _UINT32_(26)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 26 Position */
#define MCAN_TXBCR_CR26_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR26_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 26 Mask */
#define MCAN_TXBCR_CR26(value)                (MCAN_TXBCR_CR26_Msk & (_UINT32_(value) << MCAN_TXBCR_CR26_Pos)) /* Assignment of value for CR26 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR26_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR26_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR26_0                     (MCAN_TXBCR_CR26_0_Val << MCAN_TXBCR_CR26_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR26_1                     (MCAN_TXBCR_CR26_1_Val << MCAN_TXBCR_CR26_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR27_Pos                   _UINT32_(27)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 27 Position */
#define MCAN_TXBCR_CR27_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR27_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 27 Mask */
#define MCAN_TXBCR_CR27(value)                (MCAN_TXBCR_CR27_Msk & (_UINT32_(value) << MCAN_TXBCR_CR27_Pos)) /* Assignment of value for CR27 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR27_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR27_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR27_0                     (MCAN_TXBCR_CR27_0_Val << MCAN_TXBCR_CR27_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR27_1                     (MCAN_TXBCR_CR27_1_Val << MCAN_TXBCR_CR27_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR28_Pos                   _UINT32_(28)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 28 Position */
#define MCAN_TXBCR_CR28_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR28_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 28 Mask */
#define MCAN_TXBCR_CR28(value)                (MCAN_TXBCR_CR28_Msk & (_UINT32_(value) << MCAN_TXBCR_CR28_Pos)) /* Assignment of value for CR28 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR28_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR28_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR28_0                     (MCAN_TXBCR_CR28_0_Val << MCAN_TXBCR_CR28_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR28_1                     (MCAN_TXBCR_CR28_1_Val << MCAN_TXBCR_CR28_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR29_Pos                   _UINT32_(29)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 29 Position */
#define MCAN_TXBCR_CR29_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR29_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 29 Mask */
#define MCAN_TXBCR_CR29(value)                (MCAN_TXBCR_CR29_Msk & (_UINT32_(value) << MCAN_TXBCR_CR29_Pos)) /* Assignment of value for CR29 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR29_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR29_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR29_0                     (MCAN_TXBCR_CR29_0_Val << MCAN_TXBCR_CR29_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR29_1                     (MCAN_TXBCR_CR29_1_Val << MCAN_TXBCR_CR29_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR30_Pos                   _UINT32_(30)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 30 Position */
#define MCAN_TXBCR_CR30_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR30_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 30 Mask */
#define MCAN_TXBCR_CR30(value)                (MCAN_TXBCR_CR30_Msk & (_UINT32_(value) << MCAN_TXBCR_CR30_Pos)) /* Assignment of value for CR30 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR30_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR30_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR30_0                     (MCAN_TXBCR_CR30_0_Val << MCAN_TXBCR_CR30_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR30_1                     (MCAN_TXBCR_CR30_1_Val << MCAN_TXBCR_CR30_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_CR31_Pos                   _UINT32_(31)                                         /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 31 Position */
#define MCAN_TXBCR_CR31_Msk                   (_UINT32_(0x1) << MCAN_TXBCR_CR31_Pos)               /* (MCAN_TXBCR) Cancellation Request for Transmit Buffer 31 Mask */
#define MCAN_TXBCR_CR31(value)                (MCAN_TXBCR_CR31_Msk & (_UINT32_(value) << MCAN_TXBCR_CR31_Pos)) /* Assignment of value for CR31 in the MCAN_TXBCR register */
#define   MCAN_TXBCR_CR31_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCR) No cancellation pending.  */
#define   MCAN_TXBCR_CR31_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCR) Cancellation pending.  */
#define MCAN_TXBCR_CR31_0                     (MCAN_TXBCR_CR31_0_Val << MCAN_TXBCR_CR31_Pos)       /* (MCAN_TXBCR) No cancellation pending. Position */
#define MCAN_TXBCR_CR31_1                     (MCAN_TXBCR_CR31_1_Val << MCAN_TXBCR_CR31_Pos)       /* (MCAN_TXBCR) Cancellation pending. Position */
#define MCAN_TXBCR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBCR) Register Mask  */

#define MCAN_TXBCR_CR_Pos                     _UINT32_(0)                                          /* (MCAN_TXBCR Position) Cancellation Request for Transmit Buffer 3x */
#define MCAN_TXBCR_CR_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_TXBCR_CR_Pos)          /* (MCAN_TXBCR Mask) CR */
#define MCAN_TXBCR_CR(value)                  (MCAN_TXBCR_CR_Msk & (_UINT32_(value) << MCAN_TXBCR_CR_Pos)) 

/* -------- MCAN_TXBTO : (MCAN Offset: 0xD8) ( R/ 32) Transmit Buffer Transmission Occurred Register -------- */
#define MCAN_TXBTO_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXBTO) Transmit Buffer Transmission Occurred Register  Reset Value */

#define MCAN_TXBTO_TO0_Pos                    _UINT32_(0)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 0 Position */
#define MCAN_TXBTO_TO0_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO0_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 0 Mask */
#define MCAN_TXBTO_TO0(value)                 (MCAN_TXBTO_TO0_Msk & (_UINT32_(value) << MCAN_TXBTO_TO0_Pos)) /* Assignment of value for TO0 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO0_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO0_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO0_0                      (MCAN_TXBTO_TO0_0_Val << MCAN_TXBTO_TO0_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO0_1                      (MCAN_TXBTO_TO0_1_Val << MCAN_TXBTO_TO0_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO1_Pos                    _UINT32_(1)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 1 Position */
#define MCAN_TXBTO_TO1_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO1_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 1 Mask */
#define MCAN_TXBTO_TO1(value)                 (MCAN_TXBTO_TO1_Msk & (_UINT32_(value) << MCAN_TXBTO_TO1_Pos)) /* Assignment of value for TO1 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO1_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO1_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO1_0                      (MCAN_TXBTO_TO1_0_Val << MCAN_TXBTO_TO1_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO1_1                      (MCAN_TXBTO_TO1_1_Val << MCAN_TXBTO_TO1_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO2_Pos                    _UINT32_(2)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 2 Position */
#define MCAN_TXBTO_TO2_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO2_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 2 Mask */
#define MCAN_TXBTO_TO2(value)                 (MCAN_TXBTO_TO2_Msk & (_UINT32_(value) << MCAN_TXBTO_TO2_Pos)) /* Assignment of value for TO2 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO2_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO2_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO2_0                      (MCAN_TXBTO_TO2_0_Val << MCAN_TXBTO_TO2_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO2_1                      (MCAN_TXBTO_TO2_1_Val << MCAN_TXBTO_TO2_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO3_Pos                    _UINT32_(3)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 3 Position */
#define MCAN_TXBTO_TO3_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO3_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 3 Mask */
#define MCAN_TXBTO_TO3(value)                 (MCAN_TXBTO_TO3_Msk & (_UINT32_(value) << MCAN_TXBTO_TO3_Pos)) /* Assignment of value for TO3 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO3_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO3_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO3_0                      (MCAN_TXBTO_TO3_0_Val << MCAN_TXBTO_TO3_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO3_1                      (MCAN_TXBTO_TO3_1_Val << MCAN_TXBTO_TO3_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO4_Pos                    _UINT32_(4)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 4 Position */
#define MCAN_TXBTO_TO4_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO4_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 4 Mask */
#define MCAN_TXBTO_TO4(value)                 (MCAN_TXBTO_TO4_Msk & (_UINT32_(value) << MCAN_TXBTO_TO4_Pos)) /* Assignment of value for TO4 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO4_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO4_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO4_0                      (MCAN_TXBTO_TO4_0_Val << MCAN_TXBTO_TO4_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO4_1                      (MCAN_TXBTO_TO4_1_Val << MCAN_TXBTO_TO4_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO5_Pos                    _UINT32_(5)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 5 Position */
#define MCAN_TXBTO_TO5_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO5_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 5 Mask */
#define MCAN_TXBTO_TO5(value)                 (MCAN_TXBTO_TO5_Msk & (_UINT32_(value) << MCAN_TXBTO_TO5_Pos)) /* Assignment of value for TO5 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO5_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO5_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO5_0                      (MCAN_TXBTO_TO5_0_Val << MCAN_TXBTO_TO5_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO5_1                      (MCAN_TXBTO_TO5_1_Val << MCAN_TXBTO_TO5_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO6_Pos                    _UINT32_(6)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 6 Position */
#define MCAN_TXBTO_TO6_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO6_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 6 Mask */
#define MCAN_TXBTO_TO6(value)                 (MCAN_TXBTO_TO6_Msk & (_UINT32_(value) << MCAN_TXBTO_TO6_Pos)) /* Assignment of value for TO6 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO6_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO6_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO6_0                      (MCAN_TXBTO_TO6_0_Val << MCAN_TXBTO_TO6_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO6_1                      (MCAN_TXBTO_TO6_1_Val << MCAN_TXBTO_TO6_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO7_Pos                    _UINT32_(7)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 7 Position */
#define MCAN_TXBTO_TO7_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO7_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 7 Mask */
#define MCAN_TXBTO_TO7(value)                 (MCAN_TXBTO_TO7_Msk & (_UINT32_(value) << MCAN_TXBTO_TO7_Pos)) /* Assignment of value for TO7 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO7_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO7_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO7_0                      (MCAN_TXBTO_TO7_0_Val << MCAN_TXBTO_TO7_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO7_1                      (MCAN_TXBTO_TO7_1_Val << MCAN_TXBTO_TO7_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO8_Pos                    _UINT32_(8)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 8 Position */
#define MCAN_TXBTO_TO8_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO8_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 8 Mask */
#define MCAN_TXBTO_TO8(value)                 (MCAN_TXBTO_TO8_Msk & (_UINT32_(value) << MCAN_TXBTO_TO8_Pos)) /* Assignment of value for TO8 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO8_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO8_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO8_0                      (MCAN_TXBTO_TO8_0_Val << MCAN_TXBTO_TO8_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO8_1                      (MCAN_TXBTO_TO8_1_Val << MCAN_TXBTO_TO8_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO9_Pos                    _UINT32_(9)                                          /* (MCAN_TXBTO) Transmission Occurred for Buffer 9 Position */
#define MCAN_TXBTO_TO9_Msk                    (_UINT32_(0x1) << MCAN_TXBTO_TO9_Pos)                /* (MCAN_TXBTO) Transmission Occurred for Buffer 9 Mask */
#define MCAN_TXBTO_TO9(value)                 (MCAN_TXBTO_TO9_Msk & (_UINT32_(value) << MCAN_TXBTO_TO9_Pos)) /* Assignment of value for TO9 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO9_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO9_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO9_0                      (MCAN_TXBTO_TO9_0_Val << MCAN_TXBTO_TO9_Pos)         /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO9_1                      (MCAN_TXBTO_TO9_1_Val << MCAN_TXBTO_TO9_Pos)         /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO10_Pos                   _UINT32_(10)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 10 Position */
#define MCAN_TXBTO_TO10_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO10_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 10 Mask */
#define MCAN_TXBTO_TO10(value)                (MCAN_TXBTO_TO10_Msk & (_UINT32_(value) << MCAN_TXBTO_TO10_Pos)) /* Assignment of value for TO10 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO10_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO10_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO10_0                     (MCAN_TXBTO_TO10_0_Val << MCAN_TXBTO_TO10_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO10_1                     (MCAN_TXBTO_TO10_1_Val << MCAN_TXBTO_TO10_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO11_Pos                   _UINT32_(11)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 11 Position */
#define MCAN_TXBTO_TO11_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO11_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 11 Mask */
#define MCAN_TXBTO_TO11(value)                (MCAN_TXBTO_TO11_Msk & (_UINT32_(value) << MCAN_TXBTO_TO11_Pos)) /* Assignment of value for TO11 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO11_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO11_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO11_0                     (MCAN_TXBTO_TO11_0_Val << MCAN_TXBTO_TO11_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO11_1                     (MCAN_TXBTO_TO11_1_Val << MCAN_TXBTO_TO11_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO12_Pos                   _UINT32_(12)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 12 Position */
#define MCAN_TXBTO_TO12_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO12_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 12 Mask */
#define MCAN_TXBTO_TO12(value)                (MCAN_TXBTO_TO12_Msk & (_UINT32_(value) << MCAN_TXBTO_TO12_Pos)) /* Assignment of value for TO12 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO12_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO12_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO12_0                     (MCAN_TXBTO_TO12_0_Val << MCAN_TXBTO_TO12_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO12_1                     (MCAN_TXBTO_TO12_1_Val << MCAN_TXBTO_TO12_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO13_Pos                   _UINT32_(13)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 13 Position */
#define MCAN_TXBTO_TO13_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO13_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 13 Mask */
#define MCAN_TXBTO_TO13(value)                (MCAN_TXBTO_TO13_Msk & (_UINT32_(value) << MCAN_TXBTO_TO13_Pos)) /* Assignment of value for TO13 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO13_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO13_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO13_0                     (MCAN_TXBTO_TO13_0_Val << MCAN_TXBTO_TO13_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO13_1                     (MCAN_TXBTO_TO13_1_Val << MCAN_TXBTO_TO13_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO14_Pos                   _UINT32_(14)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 14 Position */
#define MCAN_TXBTO_TO14_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO14_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 14 Mask */
#define MCAN_TXBTO_TO14(value)                (MCAN_TXBTO_TO14_Msk & (_UINT32_(value) << MCAN_TXBTO_TO14_Pos)) /* Assignment of value for TO14 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO14_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO14_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO14_0                     (MCAN_TXBTO_TO14_0_Val << MCAN_TXBTO_TO14_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO14_1                     (MCAN_TXBTO_TO14_1_Val << MCAN_TXBTO_TO14_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO15_Pos                   _UINT32_(15)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 15 Position */
#define MCAN_TXBTO_TO15_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO15_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 15 Mask */
#define MCAN_TXBTO_TO15(value)                (MCAN_TXBTO_TO15_Msk & (_UINT32_(value) << MCAN_TXBTO_TO15_Pos)) /* Assignment of value for TO15 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO15_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO15_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO15_0                     (MCAN_TXBTO_TO15_0_Val << MCAN_TXBTO_TO15_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO15_1                     (MCAN_TXBTO_TO15_1_Val << MCAN_TXBTO_TO15_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO16_Pos                   _UINT32_(16)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 16 Position */
#define MCAN_TXBTO_TO16_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO16_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 16 Mask */
#define MCAN_TXBTO_TO16(value)                (MCAN_TXBTO_TO16_Msk & (_UINT32_(value) << MCAN_TXBTO_TO16_Pos)) /* Assignment of value for TO16 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO16_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO16_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO16_0                     (MCAN_TXBTO_TO16_0_Val << MCAN_TXBTO_TO16_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO16_1                     (MCAN_TXBTO_TO16_1_Val << MCAN_TXBTO_TO16_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO17_Pos                   _UINT32_(17)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 17 Position */
#define MCAN_TXBTO_TO17_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO17_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 17 Mask */
#define MCAN_TXBTO_TO17(value)                (MCAN_TXBTO_TO17_Msk & (_UINT32_(value) << MCAN_TXBTO_TO17_Pos)) /* Assignment of value for TO17 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO17_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO17_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO17_0                     (MCAN_TXBTO_TO17_0_Val << MCAN_TXBTO_TO17_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO17_1                     (MCAN_TXBTO_TO17_1_Val << MCAN_TXBTO_TO17_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO18_Pos                   _UINT32_(18)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 18 Position */
#define MCAN_TXBTO_TO18_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO18_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 18 Mask */
#define MCAN_TXBTO_TO18(value)                (MCAN_TXBTO_TO18_Msk & (_UINT32_(value) << MCAN_TXBTO_TO18_Pos)) /* Assignment of value for TO18 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO18_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO18_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO18_0                     (MCAN_TXBTO_TO18_0_Val << MCAN_TXBTO_TO18_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO18_1                     (MCAN_TXBTO_TO18_1_Val << MCAN_TXBTO_TO18_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO19_Pos                   _UINT32_(19)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 19 Position */
#define MCAN_TXBTO_TO19_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO19_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 19 Mask */
#define MCAN_TXBTO_TO19(value)                (MCAN_TXBTO_TO19_Msk & (_UINT32_(value) << MCAN_TXBTO_TO19_Pos)) /* Assignment of value for TO19 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO19_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO19_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO19_0                     (MCAN_TXBTO_TO19_0_Val << MCAN_TXBTO_TO19_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO19_1                     (MCAN_TXBTO_TO19_1_Val << MCAN_TXBTO_TO19_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO20_Pos                   _UINT32_(20)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 20 Position */
#define MCAN_TXBTO_TO20_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO20_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 20 Mask */
#define MCAN_TXBTO_TO20(value)                (MCAN_TXBTO_TO20_Msk & (_UINT32_(value) << MCAN_TXBTO_TO20_Pos)) /* Assignment of value for TO20 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO20_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO20_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO20_0                     (MCAN_TXBTO_TO20_0_Val << MCAN_TXBTO_TO20_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO20_1                     (MCAN_TXBTO_TO20_1_Val << MCAN_TXBTO_TO20_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO21_Pos                   _UINT32_(21)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 21 Position */
#define MCAN_TXBTO_TO21_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO21_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 21 Mask */
#define MCAN_TXBTO_TO21(value)                (MCAN_TXBTO_TO21_Msk & (_UINT32_(value) << MCAN_TXBTO_TO21_Pos)) /* Assignment of value for TO21 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO21_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO21_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO21_0                     (MCAN_TXBTO_TO21_0_Val << MCAN_TXBTO_TO21_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO21_1                     (MCAN_TXBTO_TO21_1_Val << MCAN_TXBTO_TO21_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO22_Pos                   _UINT32_(22)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 22 Position */
#define MCAN_TXBTO_TO22_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO22_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 22 Mask */
#define MCAN_TXBTO_TO22(value)                (MCAN_TXBTO_TO22_Msk & (_UINT32_(value) << MCAN_TXBTO_TO22_Pos)) /* Assignment of value for TO22 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO22_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO22_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO22_0                     (MCAN_TXBTO_TO22_0_Val << MCAN_TXBTO_TO22_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO22_1                     (MCAN_TXBTO_TO22_1_Val << MCAN_TXBTO_TO22_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO23_Pos                   _UINT32_(23)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 23 Position */
#define MCAN_TXBTO_TO23_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO23_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 23 Mask */
#define MCAN_TXBTO_TO23(value)                (MCAN_TXBTO_TO23_Msk & (_UINT32_(value) << MCAN_TXBTO_TO23_Pos)) /* Assignment of value for TO23 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO23_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO23_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO23_0                     (MCAN_TXBTO_TO23_0_Val << MCAN_TXBTO_TO23_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO23_1                     (MCAN_TXBTO_TO23_1_Val << MCAN_TXBTO_TO23_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO24_Pos                   _UINT32_(24)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 24 Position */
#define MCAN_TXBTO_TO24_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO24_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 24 Mask */
#define MCAN_TXBTO_TO24(value)                (MCAN_TXBTO_TO24_Msk & (_UINT32_(value) << MCAN_TXBTO_TO24_Pos)) /* Assignment of value for TO24 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO24_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO24_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO24_0                     (MCAN_TXBTO_TO24_0_Val << MCAN_TXBTO_TO24_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO24_1                     (MCAN_TXBTO_TO24_1_Val << MCAN_TXBTO_TO24_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO25_Pos                   _UINT32_(25)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 25 Position */
#define MCAN_TXBTO_TO25_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO25_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 25 Mask */
#define MCAN_TXBTO_TO25(value)                (MCAN_TXBTO_TO25_Msk & (_UINT32_(value) << MCAN_TXBTO_TO25_Pos)) /* Assignment of value for TO25 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO25_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO25_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO25_0                     (MCAN_TXBTO_TO25_0_Val << MCAN_TXBTO_TO25_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO25_1                     (MCAN_TXBTO_TO25_1_Val << MCAN_TXBTO_TO25_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO26_Pos                   _UINT32_(26)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 26 Position */
#define MCAN_TXBTO_TO26_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO26_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 26 Mask */
#define MCAN_TXBTO_TO26(value)                (MCAN_TXBTO_TO26_Msk & (_UINT32_(value) << MCAN_TXBTO_TO26_Pos)) /* Assignment of value for TO26 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO26_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO26_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO26_0                     (MCAN_TXBTO_TO26_0_Val << MCAN_TXBTO_TO26_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO26_1                     (MCAN_TXBTO_TO26_1_Val << MCAN_TXBTO_TO26_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO27_Pos                   _UINT32_(27)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 27 Position */
#define MCAN_TXBTO_TO27_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO27_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 27 Mask */
#define MCAN_TXBTO_TO27(value)                (MCAN_TXBTO_TO27_Msk & (_UINT32_(value) << MCAN_TXBTO_TO27_Pos)) /* Assignment of value for TO27 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO27_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO27_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO27_0                     (MCAN_TXBTO_TO27_0_Val << MCAN_TXBTO_TO27_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO27_1                     (MCAN_TXBTO_TO27_1_Val << MCAN_TXBTO_TO27_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO28_Pos                   _UINT32_(28)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 28 Position */
#define MCAN_TXBTO_TO28_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO28_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 28 Mask */
#define MCAN_TXBTO_TO28(value)                (MCAN_TXBTO_TO28_Msk & (_UINT32_(value) << MCAN_TXBTO_TO28_Pos)) /* Assignment of value for TO28 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO28_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO28_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO28_0                     (MCAN_TXBTO_TO28_0_Val << MCAN_TXBTO_TO28_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO28_1                     (MCAN_TXBTO_TO28_1_Val << MCAN_TXBTO_TO28_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO29_Pos                   _UINT32_(29)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 29 Position */
#define MCAN_TXBTO_TO29_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO29_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 29 Mask */
#define MCAN_TXBTO_TO29(value)                (MCAN_TXBTO_TO29_Msk & (_UINT32_(value) << MCAN_TXBTO_TO29_Pos)) /* Assignment of value for TO29 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO29_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO29_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO29_0                     (MCAN_TXBTO_TO29_0_Val << MCAN_TXBTO_TO29_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO29_1                     (MCAN_TXBTO_TO29_1_Val << MCAN_TXBTO_TO29_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO30_Pos                   _UINT32_(30)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 30 Position */
#define MCAN_TXBTO_TO30_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO30_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 30 Mask */
#define MCAN_TXBTO_TO30(value)                (MCAN_TXBTO_TO30_Msk & (_UINT32_(value) << MCAN_TXBTO_TO30_Pos)) /* Assignment of value for TO30 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO30_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO30_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO30_0                     (MCAN_TXBTO_TO30_0_Val << MCAN_TXBTO_TO30_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO30_1                     (MCAN_TXBTO_TO30_1_Val << MCAN_TXBTO_TO30_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_TO31_Pos                   _UINT32_(31)                                         /* (MCAN_TXBTO) Transmission Occurred for Buffer 31 Position */
#define MCAN_TXBTO_TO31_Msk                   (_UINT32_(0x1) << MCAN_TXBTO_TO31_Pos)               /* (MCAN_TXBTO) Transmission Occurred for Buffer 31 Mask */
#define MCAN_TXBTO_TO31(value)                (MCAN_TXBTO_TO31_Msk & (_UINT32_(value) << MCAN_TXBTO_TO31_Pos)) /* Assignment of value for TO31 in the MCAN_TXBTO register */
#define   MCAN_TXBTO_TO31_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBTO) No transmission occurred.  */
#define   MCAN_TXBTO_TO31_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBTO) Transmission occurred.  */
#define MCAN_TXBTO_TO31_0                     (MCAN_TXBTO_TO31_0_Val << MCAN_TXBTO_TO31_Pos)       /* (MCAN_TXBTO) No transmission occurred. Position */
#define MCAN_TXBTO_TO31_1                     (MCAN_TXBTO_TO31_1_Val << MCAN_TXBTO_TO31_Pos)       /* (MCAN_TXBTO) Transmission occurred. Position */
#define MCAN_TXBTO_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBTO) Register Mask  */

#define MCAN_TXBTO_TO_Pos                     _UINT32_(0)                                          /* (MCAN_TXBTO Position) Transmission Occurred for Buffer 3x */
#define MCAN_TXBTO_TO_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_TXBTO_TO_Pos)          /* (MCAN_TXBTO Mask) TO */
#define MCAN_TXBTO_TO(value)                  (MCAN_TXBTO_TO_Msk & (_UINT32_(value) << MCAN_TXBTO_TO_Pos)) 

/* -------- MCAN_TXBCF : (MCAN Offset: 0xDC) ( R/ 32) Transmit Buffer Cancellation Finished Register -------- */
#define MCAN_TXBCF_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXBCF) Transmit Buffer Cancellation Finished Register  Reset Value */

#define MCAN_TXBCF_CF0_Pos                    _UINT32_(0)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 0 Position */
#define MCAN_TXBCF_CF0_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF0_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 0 Mask */
#define MCAN_TXBCF_CF0(value)                 (MCAN_TXBCF_CF0_Msk & (_UINT32_(value) << MCAN_TXBCF_CF0_Pos)) /* Assignment of value for CF0 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF0_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF0_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF0_0                      (MCAN_TXBCF_CF0_0_Val << MCAN_TXBCF_CF0_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF0_1                      (MCAN_TXBCF_CF0_1_Val << MCAN_TXBCF_CF0_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF1_Pos                    _UINT32_(1)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 1 Position */
#define MCAN_TXBCF_CF1_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF1_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 1 Mask */
#define MCAN_TXBCF_CF1(value)                 (MCAN_TXBCF_CF1_Msk & (_UINT32_(value) << MCAN_TXBCF_CF1_Pos)) /* Assignment of value for CF1 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF1_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF1_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF1_0                      (MCAN_TXBCF_CF1_0_Val << MCAN_TXBCF_CF1_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF1_1                      (MCAN_TXBCF_CF1_1_Val << MCAN_TXBCF_CF1_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF2_Pos                    _UINT32_(2)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 2 Position */
#define MCAN_TXBCF_CF2_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF2_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 2 Mask */
#define MCAN_TXBCF_CF2(value)                 (MCAN_TXBCF_CF2_Msk & (_UINT32_(value) << MCAN_TXBCF_CF2_Pos)) /* Assignment of value for CF2 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF2_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF2_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF2_0                      (MCAN_TXBCF_CF2_0_Val << MCAN_TXBCF_CF2_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF2_1                      (MCAN_TXBCF_CF2_1_Val << MCAN_TXBCF_CF2_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF3_Pos                    _UINT32_(3)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 3 Position */
#define MCAN_TXBCF_CF3_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF3_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 3 Mask */
#define MCAN_TXBCF_CF3(value)                 (MCAN_TXBCF_CF3_Msk & (_UINT32_(value) << MCAN_TXBCF_CF3_Pos)) /* Assignment of value for CF3 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF3_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF3_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF3_0                      (MCAN_TXBCF_CF3_0_Val << MCAN_TXBCF_CF3_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF3_1                      (MCAN_TXBCF_CF3_1_Val << MCAN_TXBCF_CF3_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF4_Pos                    _UINT32_(4)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 4 Position */
#define MCAN_TXBCF_CF4_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF4_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 4 Mask */
#define MCAN_TXBCF_CF4(value)                 (MCAN_TXBCF_CF4_Msk & (_UINT32_(value) << MCAN_TXBCF_CF4_Pos)) /* Assignment of value for CF4 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF4_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF4_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF4_0                      (MCAN_TXBCF_CF4_0_Val << MCAN_TXBCF_CF4_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF4_1                      (MCAN_TXBCF_CF4_1_Val << MCAN_TXBCF_CF4_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF5_Pos                    _UINT32_(5)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 5 Position */
#define MCAN_TXBCF_CF5_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF5_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 5 Mask */
#define MCAN_TXBCF_CF5(value)                 (MCAN_TXBCF_CF5_Msk & (_UINT32_(value) << MCAN_TXBCF_CF5_Pos)) /* Assignment of value for CF5 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF5_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF5_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF5_0                      (MCAN_TXBCF_CF5_0_Val << MCAN_TXBCF_CF5_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF5_1                      (MCAN_TXBCF_CF5_1_Val << MCAN_TXBCF_CF5_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF6_Pos                    _UINT32_(6)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 6 Position */
#define MCAN_TXBCF_CF6_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF6_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 6 Mask */
#define MCAN_TXBCF_CF6(value)                 (MCAN_TXBCF_CF6_Msk & (_UINT32_(value) << MCAN_TXBCF_CF6_Pos)) /* Assignment of value for CF6 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF6_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF6_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF6_0                      (MCAN_TXBCF_CF6_0_Val << MCAN_TXBCF_CF6_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF6_1                      (MCAN_TXBCF_CF6_1_Val << MCAN_TXBCF_CF6_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF7_Pos                    _UINT32_(7)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 7 Position */
#define MCAN_TXBCF_CF7_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF7_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 7 Mask */
#define MCAN_TXBCF_CF7(value)                 (MCAN_TXBCF_CF7_Msk & (_UINT32_(value) << MCAN_TXBCF_CF7_Pos)) /* Assignment of value for CF7 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF7_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF7_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF7_0                      (MCAN_TXBCF_CF7_0_Val << MCAN_TXBCF_CF7_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF7_1                      (MCAN_TXBCF_CF7_1_Val << MCAN_TXBCF_CF7_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF8_Pos                    _UINT32_(8)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 8 Position */
#define MCAN_TXBCF_CF8_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF8_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 8 Mask */
#define MCAN_TXBCF_CF8(value)                 (MCAN_TXBCF_CF8_Msk & (_UINT32_(value) << MCAN_TXBCF_CF8_Pos)) /* Assignment of value for CF8 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF8_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF8_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF8_0                      (MCAN_TXBCF_CF8_0_Val << MCAN_TXBCF_CF8_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF8_1                      (MCAN_TXBCF_CF8_1_Val << MCAN_TXBCF_CF8_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF9_Pos                    _UINT32_(9)                                          /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 9 Position */
#define MCAN_TXBCF_CF9_Msk                    (_UINT32_(0x1) << MCAN_TXBCF_CF9_Pos)                /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 9 Mask */
#define MCAN_TXBCF_CF9(value)                 (MCAN_TXBCF_CF9_Msk & (_UINT32_(value) << MCAN_TXBCF_CF9_Pos)) /* Assignment of value for CF9 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF9_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF9_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF9_0                      (MCAN_TXBCF_CF9_0_Val << MCAN_TXBCF_CF9_Pos)         /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF9_1                      (MCAN_TXBCF_CF9_1_Val << MCAN_TXBCF_CF9_Pos)         /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF10_Pos                   _UINT32_(10)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 10 Position */
#define MCAN_TXBCF_CF10_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF10_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 10 Mask */
#define MCAN_TXBCF_CF10(value)                (MCAN_TXBCF_CF10_Msk & (_UINT32_(value) << MCAN_TXBCF_CF10_Pos)) /* Assignment of value for CF10 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF10_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF10_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF10_0                     (MCAN_TXBCF_CF10_0_Val << MCAN_TXBCF_CF10_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF10_1                     (MCAN_TXBCF_CF10_1_Val << MCAN_TXBCF_CF10_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF11_Pos                   _UINT32_(11)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 11 Position */
#define MCAN_TXBCF_CF11_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF11_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 11 Mask */
#define MCAN_TXBCF_CF11(value)                (MCAN_TXBCF_CF11_Msk & (_UINT32_(value) << MCAN_TXBCF_CF11_Pos)) /* Assignment of value for CF11 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF11_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF11_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF11_0                     (MCAN_TXBCF_CF11_0_Val << MCAN_TXBCF_CF11_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF11_1                     (MCAN_TXBCF_CF11_1_Val << MCAN_TXBCF_CF11_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF12_Pos                   _UINT32_(12)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 12 Position */
#define MCAN_TXBCF_CF12_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF12_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 12 Mask */
#define MCAN_TXBCF_CF12(value)                (MCAN_TXBCF_CF12_Msk & (_UINT32_(value) << MCAN_TXBCF_CF12_Pos)) /* Assignment of value for CF12 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF12_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF12_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF12_0                     (MCAN_TXBCF_CF12_0_Val << MCAN_TXBCF_CF12_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF12_1                     (MCAN_TXBCF_CF12_1_Val << MCAN_TXBCF_CF12_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF13_Pos                   _UINT32_(13)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 13 Position */
#define MCAN_TXBCF_CF13_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF13_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 13 Mask */
#define MCAN_TXBCF_CF13(value)                (MCAN_TXBCF_CF13_Msk & (_UINT32_(value) << MCAN_TXBCF_CF13_Pos)) /* Assignment of value for CF13 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF13_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF13_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF13_0                     (MCAN_TXBCF_CF13_0_Val << MCAN_TXBCF_CF13_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF13_1                     (MCAN_TXBCF_CF13_1_Val << MCAN_TXBCF_CF13_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF14_Pos                   _UINT32_(14)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 14 Position */
#define MCAN_TXBCF_CF14_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF14_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 14 Mask */
#define MCAN_TXBCF_CF14(value)                (MCAN_TXBCF_CF14_Msk & (_UINT32_(value) << MCAN_TXBCF_CF14_Pos)) /* Assignment of value for CF14 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF14_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF14_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF14_0                     (MCAN_TXBCF_CF14_0_Val << MCAN_TXBCF_CF14_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF14_1                     (MCAN_TXBCF_CF14_1_Val << MCAN_TXBCF_CF14_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF15_Pos                   _UINT32_(15)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 15 Position */
#define MCAN_TXBCF_CF15_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF15_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 15 Mask */
#define MCAN_TXBCF_CF15(value)                (MCAN_TXBCF_CF15_Msk & (_UINT32_(value) << MCAN_TXBCF_CF15_Pos)) /* Assignment of value for CF15 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF15_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF15_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF15_0                     (MCAN_TXBCF_CF15_0_Val << MCAN_TXBCF_CF15_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF15_1                     (MCAN_TXBCF_CF15_1_Val << MCAN_TXBCF_CF15_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF16_Pos                   _UINT32_(16)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 16 Position */
#define MCAN_TXBCF_CF16_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF16_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 16 Mask */
#define MCAN_TXBCF_CF16(value)                (MCAN_TXBCF_CF16_Msk & (_UINT32_(value) << MCAN_TXBCF_CF16_Pos)) /* Assignment of value for CF16 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF16_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF16_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF16_0                     (MCAN_TXBCF_CF16_0_Val << MCAN_TXBCF_CF16_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF16_1                     (MCAN_TXBCF_CF16_1_Val << MCAN_TXBCF_CF16_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF17_Pos                   _UINT32_(17)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 17 Position */
#define MCAN_TXBCF_CF17_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF17_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 17 Mask */
#define MCAN_TXBCF_CF17(value)                (MCAN_TXBCF_CF17_Msk & (_UINT32_(value) << MCAN_TXBCF_CF17_Pos)) /* Assignment of value for CF17 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF17_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF17_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF17_0                     (MCAN_TXBCF_CF17_0_Val << MCAN_TXBCF_CF17_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF17_1                     (MCAN_TXBCF_CF17_1_Val << MCAN_TXBCF_CF17_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF18_Pos                   _UINT32_(18)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 18 Position */
#define MCAN_TXBCF_CF18_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF18_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 18 Mask */
#define MCAN_TXBCF_CF18(value)                (MCAN_TXBCF_CF18_Msk & (_UINT32_(value) << MCAN_TXBCF_CF18_Pos)) /* Assignment of value for CF18 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF18_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF18_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF18_0                     (MCAN_TXBCF_CF18_0_Val << MCAN_TXBCF_CF18_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF18_1                     (MCAN_TXBCF_CF18_1_Val << MCAN_TXBCF_CF18_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF19_Pos                   _UINT32_(19)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 19 Position */
#define MCAN_TXBCF_CF19_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF19_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 19 Mask */
#define MCAN_TXBCF_CF19(value)                (MCAN_TXBCF_CF19_Msk & (_UINT32_(value) << MCAN_TXBCF_CF19_Pos)) /* Assignment of value for CF19 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF19_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF19_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF19_0                     (MCAN_TXBCF_CF19_0_Val << MCAN_TXBCF_CF19_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF19_1                     (MCAN_TXBCF_CF19_1_Val << MCAN_TXBCF_CF19_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF20_Pos                   _UINT32_(20)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 20 Position */
#define MCAN_TXBCF_CF20_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF20_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 20 Mask */
#define MCAN_TXBCF_CF20(value)                (MCAN_TXBCF_CF20_Msk & (_UINT32_(value) << MCAN_TXBCF_CF20_Pos)) /* Assignment of value for CF20 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF20_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF20_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF20_0                     (MCAN_TXBCF_CF20_0_Val << MCAN_TXBCF_CF20_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF20_1                     (MCAN_TXBCF_CF20_1_Val << MCAN_TXBCF_CF20_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF21_Pos                   _UINT32_(21)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 21 Position */
#define MCAN_TXBCF_CF21_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF21_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 21 Mask */
#define MCAN_TXBCF_CF21(value)                (MCAN_TXBCF_CF21_Msk & (_UINT32_(value) << MCAN_TXBCF_CF21_Pos)) /* Assignment of value for CF21 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF21_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF21_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF21_0                     (MCAN_TXBCF_CF21_0_Val << MCAN_TXBCF_CF21_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF21_1                     (MCAN_TXBCF_CF21_1_Val << MCAN_TXBCF_CF21_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF22_Pos                   _UINT32_(22)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 22 Position */
#define MCAN_TXBCF_CF22_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF22_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 22 Mask */
#define MCAN_TXBCF_CF22(value)                (MCAN_TXBCF_CF22_Msk & (_UINT32_(value) << MCAN_TXBCF_CF22_Pos)) /* Assignment of value for CF22 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF22_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF22_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF22_0                     (MCAN_TXBCF_CF22_0_Val << MCAN_TXBCF_CF22_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF22_1                     (MCAN_TXBCF_CF22_1_Val << MCAN_TXBCF_CF22_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF23_Pos                   _UINT32_(23)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 23 Position */
#define MCAN_TXBCF_CF23_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF23_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 23 Mask */
#define MCAN_TXBCF_CF23(value)                (MCAN_TXBCF_CF23_Msk & (_UINT32_(value) << MCAN_TXBCF_CF23_Pos)) /* Assignment of value for CF23 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF23_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF23_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF23_0                     (MCAN_TXBCF_CF23_0_Val << MCAN_TXBCF_CF23_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF23_1                     (MCAN_TXBCF_CF23_1_Val << MCAN_TXBCF_CF23_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF24_Pos                   _UINT32_(24)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 24 Position */
#define MCAN_TXBCF_CF24_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF24_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 24 Mask */
#define MCAN_TXBCF_CF24(value)                (MCAN_TXBCF_CF24_Msk & (_UINT32_(value) << MCAN_TXBCF_CF24_Pos)) /* Assignment of value for CF24 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF24_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF24_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF24_0                     (MCAN_TXBCF_CF24_0_Val << MCAN_TXBCF_CF24_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF24_1                     (MCAN_TXBCF_CF24_1_Val << MCAN_TXBCF_CF24_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF25_Pos                   _UINT32_(25)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 25 Position */
#define MCAN_TXBCF_CF25_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF25_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 25 Mask */
#define MCAN_TXBCF_CF25(value)                (MCAN_TXBCF_CF25_Msk & (_UINT32_(value) << MCAN_TXBCF_CF25_Pos)) /* Assignment of value for CF25 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF25_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF25_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF25_0                     (MCAN_TXBCF_CF25_0_Val << MCAN_TXBCF_CF25_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF25_1                     (MCAN_TXBCF_CF25_1_Val << MCAN_TXBCF_CF25_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF26_Pos                   _UINT32_(26)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 26 Position */
#define MCAN_TXBCF_CF26_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF26_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 26 Mask */
#define MCAN_TXBCF_CF26(value)                (MCAN_TXBCF_CF26_Msk & (_UINT32_(value) << MCAN_TXBCF_CF26_Pos)) /* Assignment of value for CF26 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF26_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF26_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF26_0                     (MCAN_TXBCF_CF26_0_Val << MCAN_TXBCF_CF26_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF26_1                     (MCAN_TXBCF_CF26_1_Val << MCAN_TXBCF_CF26_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF27_Pos                   _UINT32_(27)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 27 Position */
#define MCAN_TXBCF_CF27_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF27_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 27 Mask */
#define MCAN_TXBCF_CF27(value)                (MCAN_TXBCF_CF27_Msk & (_UINT32_(value) << MCAN_TXBCF_CF27_Pos)) /* Assignment of value for CF27 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF27_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF27_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF27_0                     (MCAN_TXBCF_CF27_0_Val << MCAN_TXBCF_CF27_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF27_1                     (MCAN_TXBCF_CF27_1_Val << MCAN_TXBCF_CF27_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF28_Pos                   _UINT32_(28)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 28 Position */
#define MCAN_TXBCF_CF28_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF28_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 28 Mask */
#define MCAN_TXBCF_CF28(value)                (MCAN_TXBCF_CF28_Msk & (_UINT32_(value) << MCAN_TXBCF_CF28_Pos)) /* Assignment of value for CF28 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF28_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF28_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF28_0                     (MCAN_TXBCF_CF28_0_Val << MCAN_TXBCF_CF28_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF28_1                     (MCAN_TXBCF_CF28_1_Val << MCAN_TXBCF_CF28_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF29_Pos                   _UINT32_(29)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 29 Position */
#define MCAN_TXBCF_CF29_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF29_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 29 Mask */
#define MCAN_TXBCF_CF29(value)                (MCAN_TXBCF_CF29_Msk & (_UINT32_(value) << MCAN_TXBCF_CF29_Pos)) /* Assignment of value for CF29 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF29_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF29_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF29_0                     (MCAN_TXBCF_CF29_0_Val << MCAN_TXBCF_CF29_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF29_1                     (MCAN_TXBCF_CF29_1_Val << MCAN_TXBCF_CF29_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF30_Pos                   _UINT32_(30)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 30 Position */
#define MCAN_TXBCF_CF30_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF30_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 30 Mask */
#define MCAN_TXBCF_CF30(value)                (MCAN_TXBCF_CF30_Msk & (_UINT32_(value) << MCAN_TXBCF_CF30_Pos)) /* Assignment of value for CF30 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF30_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF30_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF30_0                     (MCAN_TXBCF_CF30_0_Val << MCAN_TXBCF_CF30_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF30_1                     (MCAN_TXBCF_CF30_1_Val << MCAN_TXBCF_CF30_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_CF31_Pos                   _UINT32_(31)                                         /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 31 Position */
#define MCAN_TXBCF_CF31_Msk                   (_UINT32_(0x1) << MCAN_TXBCF_CF31_Pos)               /* (MCAN_TXBCF) Cancellation Finished for Transmit Buffer 31 Mask */
#define MCAN_TXBCF_CF31(value)                (MCAN_TXBCF_CF31_Msk & (_UINT32_(value) << MCAN_TXBCF_CF31_Pos)) /* Assignment of value for CF31 in the MCAN_TXBCF register */
#define   MCAN_TXBCF_CF31_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXBCF) No transmit buffer cancellation.  */
#define   MCAN_TXBCF_CF31_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXBCF) Transmit buffer cancellation finished.  */
#define MCAN_TXBCF_CF31_0                     (MCAN_TXBCF_CF31_0_Val << MCAN_TXBCF_CF31_Pos)       /* (MCAN_TXBCF) No transmit buffer cancellation. Position */
#define MCAN_TXBCF_CF31_1                     (MCAN_TXBCF_CF31_1_Val << MCAN_TXBCF_CF31_Pos)       /* (MCAN_TXBCF) Transmit buffer cancellation finished. Position */
#define MCAN_TXBCF_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBCF) Register Mask  */

#define MCAN_TXBCF_CF_Pos                     _UINT32_(0)                                          /* (MCAN_TXBCF Position) Cancellation Finished for Transmit Buffer 3x */
#define MCAN_TXBCF_CF_Msk                     (_UINT32_(0xFFFFFFFF) << MCAN_TXBCF_CF_Pos)          /* (MCAN_TXBCF Mask) CF */
#define MCAN_TXBCF_CF(value)                  (MCAN_TXBCF_CF_Msk & (_UINT32_(value) << MCAN_TXBCF_CF_Pos)) 

/* -------- MCAN_TXBTIE : (MCAN Offset: 0xE0) (R/W 32) Transmit Buffer Transmission Interrupt Enable Register -------- */
#define MCAN_TXBTIE_RESETVALUE                _UINT32_(0x00)                                       /*  (MCAN_TXBTIE) Transmit Buffer Transmission Interrupt Enable Register  Reset Value */

#define MCAN_TXBTIE_TIE0_Pos                  _UINT32_(0)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 0 Position */
#define MCAN_TXBTIE_TIE0_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE0_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 0 Mask */
#define MCAN_TXBTIE_TIE0(value)               (MCAN_TXBTIE_TIE0_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE0_Pos)) /* Assignment of value for TIE0 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE0_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE0_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE0_0                    (MCAN_TXBTIE_TIE0_0_Val << MCAN_TXBTIE_TIE0_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE0_1                    (MCAN_TXBTIE_TIE0_1_Val << MCAN_TXBTIE_TIE0_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE1_Pos                  _UINT32_(1)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 1 Position */
#define MCAN_TXBTIE_TIE1_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE1_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 1 Mask */
#define MCAN_TXBTIE_TIE1(value)               (MCAN_TXBTIE_TIE1_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE1_Pos)) /* Assignment of value for TIE1 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE1_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE1_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE1_0                    (MCAN_TXBTIE_TIE1_0_Val << MCAN_TXBTIE_TIE1_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE1_1                    (MCAN_TXBTIE_TIE1_1_Val << MCAN_TXBTIE_TIE1_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE2_Pos                  _UINT32_(2)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 2 Position */
#define MCAN_TXBTIE_TIE2_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE2_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 2 Mask */
#define MCAN_TXBTIE_TIE2(value)               (MCAN_TXBTIE_TIE2_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE2_Pos)) /* Assignment of value for TIE2 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE2_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE2_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE2_0                    (MCAN_TXBTIE_TIE2_0_Val << MCAN_TXBTIE_TIE2_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE2_1                    (MCAN_TXBTIE_TIE2_1_Val << MCAN_TXBTIE_TIE2_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE3_Pos                  _UINT32_(3)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 3 Position */
#define MCAN_TXBTIE_TIE3_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE3_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 3 Mask */
#define MCAN_TXBTIE_TIE3(value)               (MCAN_TXBTIE_TIE3_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE3_Pos)) /* Assignment of value for TIE3 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE3_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE3_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE3_0                    (MCAN_TXBTIE_TIE3_0_Val << MCAN_TXBTIE_TIE3_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE3_1                    (MCAN_TXBTIE_TIE3_1_Val << MCAN_TXBTIE_TIE3_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE4_Pos                  _UINT32_(4)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 4 Position */
#define MCAN_TXBTIE_TIE4_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE4_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 4 Mask */
#define MCAN_TXBTIE_TIE4(value)               (MCAN_TXBTIE_TIE4_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE4_Pos)) /* Assignment of value for TIE4 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE4_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE4_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE4_0                    (MCAN_TXBTIE_TIE4_0_Val << MCAN_TXBTIE_TIE4_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE4_1                    (MCAN_TXBTIE_TIE4_1_Val << MCAN_TXBTIE_TIE4_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE5_Pos                  _UINT32_(5)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 5 Position */
#define MCAN_TXBTIE_TIE5_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE5_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 5 Mask */
#define MCAN_TXBTIE_TIE5(value)               (MCAN_TXBTIE_TIE5_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE5_Pos)) /* Assignment of value for TIE5 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE5_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE5_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE5_0                    (MCAN_TXBTIE_TIE5_0_Val << MCAN_TXBTIE_TIE5_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE5_1                    (MCAN_TXBTIE_TIE5_1_Val << MCAN_TXBTIE_TIE5_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE6_Pos                  _UINT32_(6)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 6 Position */
#define MCAN_TXBTIE_TIE6_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE6_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 6 Mask */
#define MCAN_TXBTIE_TIE6(value)               (MCAN_TXBTIE_TIE6_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE6_Pos)) /* Assignment of value for TIE6 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE6_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE6_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE6_0                    (MCAN_TXBTIE_TIE6_0_Val << MCAN_TXBTIE_TIE6_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE6_1                    (MCAN_TXBTIE_TIE6_1_Val << MCAN_TXBTIE_TIE6_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE7_Pos                  _UINT32_(7)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 7 Position */
#define MCAN_TXBTIE_TIE7_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE7_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 7 Mask */
#define MCAN_TXBTIE_TIE7(value)               (MCAN_TXBTIE_TIE7_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE7_Pos)) /* Assignment of value for TIE7 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE7_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE7_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE7_0                    (MCAN_TXBTIE_TIE7_0_Val << MCAN_TXBTIE_TIE7_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE7_1                    (MCAN_TXBTIE_TIE7_1_Val << MCAN_TXBTIE_TIE7_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE8_Pos                  _UINT32_(8)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 8 Position */
#define MCAN_TXBTIE_TIE8_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE8_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 8 Mask */
#define MCAN_TXBTIE_TIE8(value)               (MCAN_TXBTIE_TIE8_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE8_Pos)) /* Assignment of value for TIE8 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE8_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE8_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE8_0                    (MCAN_TXBTIE_TIE8_0_Val << MCAN_TXBTIE_TIE8_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE8_1                    (MCAN_TXBTIE_TIE8_1_Val << MCAN_TXBTIE_TIE8_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE9_Pos                  _UINT32_(9)                                          /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 9 Position */
#define MCAN_TXBTIE_TIE9_Msk                  (_UINT32_(0x1) << MCAN_TXBTIE_TIE9_Pos)              /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 9 Mask */
#define MCAN_TXBTIE_TIE9(value)               (MCAN_TXBTIE_TIE9_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE9_Pos)) /* Assignment of value for TIE9 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE9_0_Val              _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE9_1_Val              _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE9_0                    (MCAN_TXBTIE_TIE9_0_Val << MCAN_TXBTIE_TIE9_Pos)     /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE9_1                    (MCAN_TXBTIE_TIE9_1_Val << MCAN_TXBTIE_TIE9_Pos)     /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE10_Pos                 _UINT32_(10)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 10 Position */
#define MCAN_TXBTIE_TIE10_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE10_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 10 Mask */
#define MCAN_TXBTIE_TIE10(value)              (MCAN_TXBTIE_TIE10_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE10_Pos)) /* Assignment of value for TIE10 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE10_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE10_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE10_0                   (MCAN_TXBTIE_TIE10_0_Val << MCAN_TXBTIE_TIE10_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE10_1                   (MCAN_TXBTIE_TIE10_1_Val << MCAN_TXBTIE_TIE10_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE11_Pos                 _UINT32_(11)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 11 Position */
#define MCAN_TXBTIE_TIE11_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE11_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 11 Mask */
#define MCAN_TXBTIE_TIE11(value)              (MCAN_TXBTIE_TIE11_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE11_Pos)) /* Assignment of value for TIE11 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE11_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE11_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE11_0                   (MCAN_TXBTIE_TIE11_0_Val << MCAN_TXBTIE_TIE11_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE11_1                   (MCAN_TXBTIE_TIE11_1_Val << MCAN_TXBTIE_TIE11_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE12_Pos                 _UINT32_(12)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 12 Position */
#define MCAN_TXBTIE_TIE12_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE12_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 12 Mask */
#define MCAN_TXBTIE_TIE12(value)              (MCAN_TXBTIE_TIE12_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE12_Pos)) /* Assignment of value for TIE12 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE12_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE12_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE12_0                   (MCAN_TXBTIE_TIE12_0_Val << MCAN_TXBTIE_TIE12_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE12_1                   (MCAN_TXBTIE_TIE12_1_Val << MCAN_TXBTIE_TIE12_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE13_Pos                 _UINT32_(13)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 13 Position */
#define MCAN_TXBTIE_TIE13_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE13_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 13 Mask */
#define MCAN_TXBTIE_TIE13(value)              (MCAN_TXBTIE_TIE13_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE13_Pos)) /* Assignment of value for TIE13 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE13_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE13_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE13_0                   (MCAN_TXBTIE_TIE13_0_Val << MCAN_TXBTIE_TIE13_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE13_1                   (MCAN_TXBTIE_TIE13_1_Val << MCAN_TXBTIE_TIE13_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE14_Pos                 _UINT32_(14)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 14 Position */
#define MCAN_TXBTIE_TIE14_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE14_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 14 Mask */
#define MCAN_TXBTIE_TIE14(value)              (MCAN_TXBTIE_TIE14_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE14_Pos)) /* Assignment of value for TIE14 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE14_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE14_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE14_0                   (MCAN_TXBTIE_TIE14_0_Val << MCAN_TXBTIE_TIE14_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE14_1                   (MCAN_TXBTIE_TIE14_1_Val << MCAN_TXBTIE_TIE14_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE15_Pos                 _UINT32_(15)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 15 Position */
#define MCAN_TXBTIE_TIE15_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE15_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 15 Mask */
#define MCAN_TXBTIE_TIE15(value)              (MCAN_TXBTIE_TIE15_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE15_Pos)) /* Assignment of value for TIE15 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE15_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE15_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE15_0                   (MCAN_TXBTIE_TIE15_0_Val << MCAN_TXBTIE_TIE15_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE15_1                   (MCAN_TXBTIE_TIE15_1_Val << MCAN_TXBTIE_TIE15_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE16_Pos                 _UINT32_(16)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 16 Position */
#define MCAN_TXBTIE_TIE16_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE16_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 16 Mask */
#define MCAN_TXBTIE_TIE16(value)              (MCAN_TXBTIE_TIE16_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE16_Pos)) /* Assignment of value for TIE16 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE16_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE16_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE16_0                   (MCAN_TXBTIE_TIE16_0_Val << MCAN_TXBTIE_TIE16_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE16_1                   (MCAN_TXBTIE_TIE16_1_Val << MCAN_TXBTIE_TIE16_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE17_Pos                 _UINT32_(17)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 17 Position */
#define MCAN_TXBTIE_TIE17_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE17_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 17 Mask */
#define MCAN_TXBTIE_TIE17(value)              (MCAN_TXBTIE_TIE17_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE17_Pos)) /* Assignment of value for TIE17 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE17_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE17_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE17_0                   (MCAN_TXBTIE_TIE17_0_Val << MCAN_TXBTIE_TIE17_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE17_1                   (MCAN_TXBTIE_TIE17_1_Val << MCAN_TXBTIE_TIE17_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE18_Pos                 _UINT32_(18)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 18 Position */
#define MCAN_TXBTIE_TIE18_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE18_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 18 Mask */
#define MCAN_TXBTIE_TIE18(value)              (MCAN_TXBTIE_TIE18_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE18_Pos)) /* Assignment of value for TIE18 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE18_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE18_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE18_0                   (MCAN_TXBTIE_TIE18_0_Val << MCAN_TXBTIE_TIE18_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE18_1                   (MCAN_TXBTIE_TIE18_1_Val << MCAN_TXBTIE_TIE18_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE19_Pos                 _UINT32_(19)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 19 Position */
#define MCAN_TXBTIE_TIE19_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE19_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 19 Mask */
#define MCAN_TXBTIE_TIE19(value)              (MCAN_TXBTIE_TIE19_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE19_Pos)) /* Assignment of value for TIE19 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE19_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE19_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE19_0                   (MCAN_TXBTIE_TIE19_0_Val << MCAN_TXBTIE_TIE19_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE19_1                   (MCAN_TXBTIE_TIE19_1_Val << MCAN_TXBTIE_TIE19_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE20_Pos                 _UINT32_(20)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 20 Position */
#define MCAN_TXBTIE_TIE20_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE20_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 20 Mask */
#define MCAN_TXBTIE_TIE20(value)              (MCAN_TXBTIE_TIE20_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE20_Pos)) /* Assignment of value for TIE20 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE20_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE20_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE20_0                   (MCAN_TXBTIE_TIE20_0_Val << MCAN_TXBTIE_TIE20_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE20_1                   (MCAN_TXBTIE_TIE20_1_Val << MCAN_TXBTIE_TIE20_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE21_Pos                 _UINT32_(21)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 21 Position */
#define MCAN_TXBTIE_TIE21_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE21_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 21 Mask */
#define MCAN_TXBTIE_TIE21(value)              (MCAN_TXBTIE_TIE21_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE21_Pos)) /* Assignment of value for TIE21 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE21_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE21_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE21_0                   (MCAN_TXBTIE_TIE21_0_Val << MCAN_TXBTIE_TIE21_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE21_1                   (MCAN_TXBTIE_TIE21_1_Val << MCAN_TXBTIE_TIE21_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE22_Pos                 _UINT32_(22)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 22 Position */
#define MCAN_TXBTIE_TIE22_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE22_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 22 Mask */
#define MCAN_TXBTIE_TIE22(value)              (MCAN_TXBTIE_TIE22_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE22_Pos)) /* Assignment of value for TIE22 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE22_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE22_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE22_0                   (MCAN_TXBTIE_TIE22_0_Val << MCAN_TXBTIE_TIE22_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE22_1                   (MCAN_TXBTIE_TIE22_1_Val << MCAN_TXBTIE_TIE22_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE23_Pos                 _UINT32_(23)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 23 Position */
#define MCAN_TXBTIE_TIE23_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE23_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 23 Mask */
#define MCAN_TXBTIE_TIE23(value)              (MCAN_TXBTIE_TIE23_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE23_Pos)) /* Assignment of value for TIE23 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE23_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE23_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE23_0                   (MCAN_TXBTIE_TIE23_0_Val << MCAN_TXBTIE_TIE23_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE23_1                   (MCAN_TXBTIE_TIE23_1_Val << MCAN_TXBTIE_TIE23_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE24_Pos                 _UINT32_(24)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 24 Position */
#define MCAN_TXBTIE_TIE24_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE24_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 24 Mask */
#define MCAN_TXBTIE_TIE24(value)              (MCAN_TXBTIE_TIE24_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE24_Pos)) /* Assignment of value for TIE24 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE24_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE24_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE24_0                   (MCAN_TXBTIE_TIE24_0_Val << MCAN_TXBTIE_TIE24_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE24_1                   (MCAN_TXBTIE_TIE24_1_Val << MCAN_TXBTIE_TIE24_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE25_Pos                 _UINT32_(25)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 25 Position */
#define MCAN_TXBTIE_TIE25_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE25_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 25 Mask */
#define MCAN_TXBTIE_TIE25(value)              (MCAN_TXBTIE_TIE25_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE25_Pos)) /* Assignment of value for TIE25 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE25_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE25_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE25_0                   (MCAN_TXBTIE_TIE25_0_Val << MCAN_TXBTIE_TIE25_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE25_1                   (MCAN_TXBTIE_TIE25_1_Val << MCAN_TXBTIE_TIE25_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE26_Pos                 _UINT32_(26)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 26 Position */
#define MCAN_TXBTIE_TIE26_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE26_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 26 Mask */
#define MCAN_TXBTIE_TIE26(value)              (MCAN_TXBTIE_TIE26_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE26_Pos)) /* Assignment of value for TIE26 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE26_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE26_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE26_0                   (MCAN_TXBTIE_TIE26_0_Val << MCAN_TXBTIE_TIE26_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE26_1                   (MCAN_TXBTIE_TIE26_1_Val << MCAN_TXBTIE_TIE26_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE27_Pos                 _UINT32_(27)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 27 Position */
#define MCAN_TXBTIE_TIE27_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE27_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 27 Mask */
#define MCAN_TXBTIE_TIE27(value)              (MCAN_TXBTIE_TIE27_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE27_Pos)) /* Assignment of value for TIE27 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE27_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE27_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE27_0                   (MCAN_TXBTIE_TIE27_0_Val << MCAN_TXBTIE_TIE27_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE27_1                   (MCAN_TXBTIE_TIE27_1_Val << MCAN_TXBTIE_TIE27_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE28_Pos                 _UINT32_(28)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 28 Position */
#define MCAN_TXBTIE_TIE28_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE28_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 28 Mask */
#define MCAN_TXBTIE_TIE28(value)              (MCAN_TXBTIE_TIE28_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE28_Pos)) /* Assignment of value for TIE28 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE28_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE28_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE28_0                   (MCAN_TXBTIE_TIE28_0_Val << MCAN_TXBTIE_TIE28_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE28_1                   (MCAN_TXBTIE_TIE28_1_Val << MCAN_TXBTIE_TIE28_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE29_Pos                 _UINT32_(29)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 29 Position */
#define MCAN_TXBTIE_TIE29_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE29_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 29 Mask */
#define MCAN_TXBTIE_TIE29(value)              (MCAN_TXBTIE_TIE29_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE29_Pos)) /* Assignment of value for TIE29 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE29_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE29_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE29_0                   (MCAN_TXBTIE_TIE29_0_Val << MCAN_TXBTIE_TIE29_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE29_1                   (MCAN_TXBTIE_TIE29_1_Val << MCAN_TXBTIE_TIE29_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE30_Pos                 _UINT32_(30)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 30 Position */
#define MCAN_TXBTIE_TIE30_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE30_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 30 Mask */
#define MCAN_TXBTIE_TIE30(value)              (MCAN_TXBTIE_TIE30_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE30_Pos)) /* Assignment of value for TIE30 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE30_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE30_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE30_0                   (MCAN_TXBTIE_TIE30_0_Val << MCAN_TXBTIE_TIE30_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE30_1                   (MCAN_TXBTIE_TIE30_1_Val << MCAN_TXBTIE_TIE30_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_TIE31_Pos                 _UINT32_(31)                                         /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 31 Position */
#define MCAN_TXBTIE_TIE31_Msk                 (_UINT32_(0x1) << MCAN_TXBTIE_TIE31_Pos)             /* (MCAN_TXBTIE) Transmission Interrupt Enable for Buffer 31 Mask */
#define MCAN_TXBTIE_TIE31(value)              (MCAN_TXBTIE_TIE31_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE31_Pos)) /* Assignment of value for TIE31 in the MCAN_TXBTIE register */
#define   MCAN_TXBTIE_TIE31_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBTIE) Transmission interrupt disabled  */
#define   MCAN_TXBTIE_TIE31_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBTIE) Transmission interrupt enable  */
#define MCAN_TXBTIE_TIE31_0                   (MCAN_TXBTIE_TIE31_0_Val << MCAN_TXBTIE_TIE31_Pos)   /* (MCAN_TXBTIE) Transmission interrupt disabled Position */
#define MCAN_TXBTIE_TIE31_1                   (MCAN_TXBTIE_TIE31_1_Val << MCAN_TXBTIE_TIE31_Pos)   /* (MCAN_TXBTIE) Transmission interrupt enable Position */
#define MCAN_TXBTIE_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBTIE) Register Mask  */

#define MCAN_TXBTIE_TIE_Pos                   _UINT32_(0)                                          /* (MCAN_TXBTIE Position) Transmission Interrupt Enable for Buffer 3x */
#define MCAN_TXBTIE_TIE_Msk                   (_UINT32_(0xFFFFFFFF) << MCAN_TXBTIE_TIE_Pos)        /* (MCAN_TXBTIE Mask) TIE */
#define MCAN_TXBTIE_TIE(value)                (MCAN_TXBTIE_TIE_Msk & (_UINT32_(value) << MCAN_TXBTIE_TIE_Pos)) 

/* -------- MCAN_TXBCIE : (MCAN Offset: 0xE4) (R/W 32) Transmit Buffer Cancellation Finished Interrupt Enable Register -------- */
#define MCAN_TXBCIE_RESETVALUE                _UINT32_(0x00)                                       /*  (MCAN_TXBCIE) Transmit Buffer Cancellation Finished Interrupt Enable Register  Reset Value */

#define MCAN_TXBCIE_CFIE0_Pos                 _UINT32_(0)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 0 Position */
#define MCAN_TXBCIE_CFIE0_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE0_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 0 Mask */
#define MCAN_TXBCIE_CFIE0(value)              (MCAN_TXBCIE_CFIE0_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE0_Pos)) /* Assignment of value for CFIE0 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE0_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE0_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE0_0                   (MCAN_TXBCIE_CFIE0_0_Val << MCAN_TXBCIE_CFIE0_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE0_1                   (MCAN_TXBCIE_CFIE0_1_Val << MCAN_TXBCIE_CFIE0_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE1_Pos                 _UINT32_(1)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 1 Position */
#define MCAN_TXBCIE_CFIE1_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE1_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 1 Mask */
#define MCAN_TXBCIE_CFIE1(value)              (MCAN_TXBCIE_CFIE1_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE1_Pos)) /* Assignment of value for CFIE1 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE1_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE1_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE1_0                   (MCAN_TXBCIE_CFIE1_0_Val << MCAN_TXBCIE_CFIE1_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE1_1                   (MCAN_TXBCIE_CFIE1_1_Val << MCAN_TXBCIE_CFIE1_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE2_Pos                 _UINT32_(2)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 2 Position */
#define MCAN_TXBCIE_CFIE2_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE2_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 2 Mask */
#define MCAN_TXBCIE_CFIE2(value)              (MCAN_TXBCIE_CFIE2_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE2_Pos)) /* Assignment of value for CFIE2 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE2_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE2_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE2_0                   (MCAN_TXBCIE_CFIE2_0_Val << MCAN_TXBCIE_CFIE2_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE2_1                   (MCAN_TXBCIE_CFIE2_1_Val << MCAN_TXBCIE_CFIE2_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE3_Pos                 _UINT32_(3)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 3 Position */
#define MCAN_TXBCIE_CFIE3_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE3_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 3 Mask */
#define MCAN_TXBCIE_CFIE3(value)              (MCAN_TXBCIE_CFIE3_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE3_Pos)) /* Assignment of value for CFIE3 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE3_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE3_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE3_0                   (MCAN_TXBCIE_CFIE3_0_Val << MCAN_TXBCIE_CFIE3_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE3_1                   (MCAN_TXBCIE_CFIE3_1_Val << MCAN_TXBCIE_CFIE3_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE4_Pos                 _UINT32_(4)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 4 Position */
#define MCAN_TXBCIE_CFIE4_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE4_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 4 Mask */
#define MCAN_TXBCIE_CFIE4(value)              (MCAN_TXBCIE_CFIE4_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE4_Pos)) /* Assignment of value for CFIE4 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE4_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE4_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE4_0                   (MCAN_TXBCIE_CFIE4_0_Val << MCAN_TXBCIE_CFIE4_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE4_1                   (MCAN_TXBCIE_CFIE4_1_Val << MCAN_TXBCIE_CFIE4_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE5_Pos                 _UINT32_(5)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 5 Position */
#define MCAN_TXBCIE_CFIE5_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE5_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 5 Mask */
#define MCAN_TXBCIE_CFIE5(value)              (MCAN_TXBCIE_CFIE5_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE5_Pos)) /* Assignment of value for CFIE5 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE5_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE5_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE5_0                   (MCAN_TXBCIE_CFIE5_0_Val << MCAN_TXBCIE_CFIE5_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE5_1                   (MCAN_TXBCIE_CFIE5_1_Val << MCAN_TXBCIE_CFIE5_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE6_Pos                 _UINT32_(6)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 6 Position */
#define MCAN_TXBCIE_CFIE6_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE6_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 6 Mask */
#define MCAN_TXBCIE_CFIE6(value)              (MCAN_TXBCIE_CFIE6_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE6_Pos)) /* Assignment of value for CFIE6 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE6_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE6_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE6_0                   (MCAN_TXBCIE_CFIE6_0_Val << MCAN_TXBCIE_CFIE6_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE6_1                   (MCAN_TXBCIE_CFIE6_1_Val << MCAN_TXBCIE_CFIE6_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE7_Pos                 _UINT32_(7)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 7 Position */
#define MCAN_TXBCIE_CFIE7_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE7_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 7 Mask */
#define MCAN_TXBCIE_CFIE7(value)              (MCAN_TXBCIE_CFIE7_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE7_Pos)) /* Assignment of value for CFIE7 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE7_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE7_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE7_0                   (MCAN_TXBCIE_CFIE7_0_Val << MCAN_TXBCIE_CFIE7_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE7_1                   (MCAN_TXBCIE_CFIE7_1_Val << MCAN_TXBCIE_CFIE7_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE8_Pos                 _UINT32_(8)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 8 Position */
#define MCAN_TXBCIE_CFIE8_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE8_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 8 Mask */
#define MCAN_TXBCIE_CFIE8(value)              (MCAN_TXBCIE_CFIE8_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE8_Pos)) /* Assignment of value for CFIE8 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE8_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE8_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE8_0                   (MCAN_TXBCIE_CFIE8_0_Val << MCAN_TXBCIE_CFIE8_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE8_1                   (MCAN_TXBCIE_CFIE8_1_Val << MCAN_TXBCIE_CFIE8_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE9_Pos                 _UINT32_(9)                                          /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 9 Position */
#define MCAN_TXBCIE_CFIE9_Msk                 (_UINT32_(0x1) << MCAN_TXBCIE_CFIE9_Pos)             /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 9 Mask */
#define MCAN_TXBCIE_CFIE9(value)              (MCAN_TXBCIE_CFIE9_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE9_Pos)) /* Assignment of value for CFIE9 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE9_0_Val             _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE9_1_Val             _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE9_0                   (MCAN_TXBCIE_CFIE9_0_Val << MCAN_TXBCIE_CFIE9_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE9_1                   (MCAN_TXBCIE_CFIE9_1_Val << MCAN_TXBCIE_CFIE9_Pos)   /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE10_Pos                _UINT32_(10)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 10 Position */
#define MCAN_TXBCIE_CFIE10_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE10_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 10 Mask */
#define MCAN_TXBCIE_CFIE10(value)             (MCAN_TXBCIE_CFIE10_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE10_Pos)) /* Assignment of value for CFIE10 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE10_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE10_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE10_0                  (MCAN_TXBCIE_CFIE10_0_Val << MCAN_TXBCIE_CFIE10_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE10_1                  (MCAN_TXBCIE_CFIE10_1_Val << MCAN_TXBCIE_CFIE10_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE11_Pos                _UINT32_(11)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 11 Position */
#define MCAN_TXBCIE_CFIE11_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE11_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 11 Mask */
#define MCAN_TXBCIE_CFIE11(value)             (MCAN_TXBCIE_CFIE11_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE11_Pos)) /* Assignment of value for CFIE11 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE11_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE11_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE11_0                  (MCAN_TXBCIE_CFIE11_0_Val << MCAN_TXBCIE_CFIE11_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE11_1                  (MCAN_TXBCIE_CFIE11_1_Val << MCAN_TXBCIE_CFIE11_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE12_Pos                _UINT32_(12)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 12 Position */
#define MCAN_TXBCIE_CFIE12_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE12_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 12 Mask */
#define MCAN_TXBCIE_CFIE12(value)             (MCAN_TXBCIE_CFIE12_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE12_Pos)) /* Assignment of value for CFIE12 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE12_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE12_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE12_0                  (MCAN_TXBCIE_CFIE12_0_Val << MCAN_TXBCIE_CFIE12_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE12_1                  (MCAN_TXBCIE_CFIE12_1_Val << MCAN_TXBCIE_CFIE12_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE13_Pos                _UINT32_(13)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 13 Position */
#define MCAN_TXBCIE_CFIE13_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE13_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 13 Mask */
#define MCAN_TXBCIE_CFIE13(value)             (MCAN_TXBCIE_CFIE13_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE13_Pos)) /* Assignment of value for CFIE13 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE13_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE13_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE13_0                  (MCAN_TXBCIE_CFIE13_0_Val << MCAN_TXBCIE_CFIE13_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE13_1                  (MCAN_TXBCIE_CFIE13_1_Val << MCAN_TXBCIE_CFIE13_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE14_Pos                _UINT32_(14)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 14 Position */
#define MCAN_TXBCIE_CFIE14_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE14_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 14 Mask */
#define MCAN_TXBCIE_CFIE14(value)             (MCAN_TXBCIE_CFIE14_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE14_Pos)) /* Assignment of value for CFIE14 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE14_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE14_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE14_0                  (MCAN_TXBCIE_CFIE14_0_Val << MCAN_TXBCIE_CFIE14_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE14_1                  (MCAN_TXBCIE_CFIE14_1_Val << MCAN_TXBCIE_CFIE14_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE15_Pos                _UINT32_(15)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 15 Position */
#define MCAN_TXBCIE_CFIE15_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE15_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 15 Mask */
#define MCAN_TXBCIE_CFIE15(value)             (MCAN_TXBCIE_CFIE15_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE15_Pos)) /* Assignment of value for CFIE15 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE15_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE15_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE15_0                  (MCAN_TXBCIE_CFIE15_0_Val << MCAN_TXBCIE_CFIE15_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE15_1                  (MCAN_TXBCIE_CFIE15_1_Val << MCAN_TXBCIE_CFIE15_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE16_Pos                _UINT32_(16)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 16 Position */
#define MCAN_TXBCIE_CFIE16_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE16_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 16 Mask */
#define MCAN_TXBCIE_CFIE16(value)             (MCAN_TXBCIE_CFIE16_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE16_Pos)) /* Assignment of value for CFIE16 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE16_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE16_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE16_0                  (MCAN_TXBCIE_CFIE16_0_Val << MCAN_TXBCIE_CFIE16_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE16_1                  (MCAN_TXBCIE_CFIE16_1_Val << MCAN_TXBCIE_CFIE16_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE17_Pos                _UINT32_(17)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 17 Position */
#define MCAN_TXBCIE_CFIE17_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE17_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 17 Mask */
#define MCAN_TXBCIE_CFIE17(value)             (MCAN_TXBCIE_CFIE17_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE17_Pos)) /* Assignment of value for CFIE17 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE17_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE17_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE17_0                  (MCAN_TXBCIE_CFIE17_0_Val << MCAN_TXBCIE_CFIE17_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE17_1                  (MCAN_TXBCIE_CFIE17_1_Val << MCAN_TXBCIE_CFIE17_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE18_Pos                _UINT32_(18)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 18 Position */
#define MCAN_TXBCIE_CFIE18_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE18_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 18 Mask */
#define MCAN_TXBCIE_CFIE18(value)             (MCAN_TXBCIE_CFIE18_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE18_Pos)) /* Assignment of value for CFIE18 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE18_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE18_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE18_0                  (MCAN_TXBCIE_CFIE18_0_Val << MCAN_TXBCIE_CFIE18_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE18_1                  (MCAN_TXBCIE_CFIE18_1_Val << MCAN_TXBCIE_CFIE18_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE19_Pos                _UINT32_(19)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 19 Position */
#define MCAN_TXBCIE_CFIE19_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE19_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 19 Mask */
#define MCAN_TXBCIE_CFIE19(value)             (MCAN_TXBCIE_CFIE19_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE19_Pos)) /* Assignment of value for CFIE19 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE19_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE19_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE19_0                  (MCAN_TXBCIE_CFIE19_0_Val << MCAN_TXBCIE_CFIE19_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE19_1                  (MCAN_TXBCIE_CFIE19_1_Val << MCAN_TXBCIE_CFIE19_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE20_Pos                _UINT32_(20)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 20 Position */
#define MCAN_TXBCIE_CFIE20_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE20_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 20 Mask */
#define MCAN_TXBCIE_CFIE20(value)             (MCAN_TXBCIE_CFIE20_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE20_Pos)) /* Assignment of value for CFIE20 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE20_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE20_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE20_0                  (MCAN_TXBCIE_CFIE20_0_Val << MCAN_TXBCIE_CFIE20_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE20_1                  (MCAN_TXBCIE_CFIE20_1_Val << MCAN_TXBCIE_CFIE20_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE21_Pos                _UINT32_(21)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 21 Position */
#define MCAN_TXBCIE_CFIE21_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE21_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 21 Mask */
#define MCAN_TXBCIE_CFIE21(value)             (MCAN_TXBCIE_CFIE21_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE21_Pos)) /* Assignment of value for CFIE21 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE21_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE21_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE21_0                  (MCAN_TXBCIE_CFIE21_0_Val << MCAN_TXBCIE_CFIE21_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE21_1                  (MCAN_TXBCIE_CFIE21_1_Val << MCAN_TXBCIE_CFIE21_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE22_Pos                _UINT32_(22)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 22 Position */
#define MCAN_TXBCIE_CFIE22_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE22_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 22 Mask */
#define MCAN_TXBCIE_CFIE22(value)             (MCAN_TXBCIE_CFIE22_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE22_Pos)) /* Assignment of value for CFIE22 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE22_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE22_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE22_0                  (MCAN_TXBCIE_CFIE22_0_Val << MCAN_TXBCIE_CFIE22_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE22_1                  (MCAN_TXBCIE_CFIE22_1_Val << MCAN_TXBCIE_CFIE22_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE23_Pos                _UINT32_(23)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 23 Position */
#define MCAN_TXBCIE_CFIE23_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE23_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 23 Mask */
#define MCAN_TXBCIE_CFIE23(value)             (MCAN_TXBCIE_CFIE23_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE23_Pos)) /* Assignment of value for CFIE23 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE23_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE23_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE23_0                  (MCAN_TXBCIE_CFIE23_0_Val << MCAN_TXBCIE_CFIE23_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE23_1                  (MCAN_TXBCIE_CFIE23_1_Val << MCAN_TXBCIE_CFIE23_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE24_Pos                _UINT32_(24)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 24 Position */
#define MCAN_TXBCIE_CFIE24_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE24_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 24 Mask */
#define MCAN_TXBCIE_CFIE24(value)             (MCAN_TXBCIE_CFIE24_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE24_Pos)) /* Assignment of value for CFIE24 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE24_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE24_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE24_0                  (MCAN_TXBCIE_CFIE24_0_Val << MCAN_TXBCIE_CFIE24_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE24_1                  (MCAN_TXBCIE_CFIE24_1_Val << MCAN_TXBCIE_CFIE24_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE25_Pos                _UINT32_(25)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 25 Position */
#define MCAN_TXBCIE_CFIE25_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE25_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 25 Mask */
#define MCAN_TXBCIE_CFIE25(value)             (MCAN_TXBCIE_CFIE25_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE25_Pos)) /* Assignment of value for CFIE25 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE25_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE25_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE25_0                  (MCAN_TXBCIE_CFIE25_0_Val << MCAN_TXBCIE_CFIE25_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE25_1                  (MCAN_TXBCIE_CFIE25_1_Val << MCAN_TXBCIE_CFIE25_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE26_Pos                _UINT32_(26)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 26 Position */
#define MCAN_TXBCIE_CFIE26_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE26_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 26 Mask */
#define MCAN_TXBCIE_CFIE26(value)             (MCAN_TXBCIE_CFIE26_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE26_Pos)) /* Assignment of value for CFIE26 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE26_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE26_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE26_0                  (MCAN_TXBCIE_CFIE26_0_Val << MCAN_TXBCIE_CFIE26_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE26_1                  (MCAN_TXBCIE_CFIE26_1_Val << MCAN_TXBCIE_CFIE26_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE27_Pos                _UINT32_(27)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 27 Position */
#define MCAN_TXBCIE_CFIE27_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE27_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 27 Mask */
#define MCAN_TXBCIE_CFIE27(value)             (MCAN_TXBCIE_CFIE27_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE27_Pos)) /* Assignment of value for CFIE27 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE27_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE27_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE27_0                  (MCAN_TXBCIE_CFIE27_0_Val << MCAN_TXBCIE_CFIE27_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE27_1                  (MCAN_TXBCIE_CFIE27_1_Val << MCAN_TXBCIE_CFIE27_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE28_Pos                _UINT32_(28)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 28 Position */
#define MCAN_TXBCIE_CFIE28_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE28_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 28 Mask */
#define MCAN_TXBCIE_CFIE28(value)             (MCAN_TXBCIE_CFIE28_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE28_Pos)) /* Assignment of value for CFIE28 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE28_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE28_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE28_0                  (MCAN_TXBCIE_CFIE28_0_Val << MCAN_TXBCIE_CFIE28_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE28_1                  (MCAN_TXBCIE_CFIE28_1_Val << MCAN_TXBCIE_CFIE28_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE29_Pos                _UINT32_(29)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 29 Position */
#define MCAN_TXBCIE_CFIE29_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE29_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 29 Mask */
#define MCAN_TXBCIE_CFIE29(value)             (MCAN_TXBCIE_CFIE29_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE29_Pos)) /* Assignment of value for CFIE29 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE29_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE29_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE29_0                  (MCAN_TXBCIE_CFIE29_0_Val << MCAN_TXBCIE_CFIE29_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE29_1                  (MCAN_TXBCIE_CFIE29_1_Val << MCAN_TXBCIE_CFIE29_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE30_Pos                _UINT32_(30)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 30 Position */
#define MCAN_TXBCIE_CFIE30_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE30_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 30 Mask */
#define MCAN_TXBCIE_CFIE30(value)             (MCAN_TXBCIE_CFIE30_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE30_Pos)) /* Assignment of value for CFIE30 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE30_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE30_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE30_0                  (MCAN_TXBCIE_CFIE30_0_Val << MCAN_TXBCIE_CFIE30_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE30_1                  (MCAN_TXBCIE_CFIE30_1_Val << MCAN_TXBCIE_CFIE30_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_CFIE31_Pos                _UINT32_(31)                                         /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 31 Position */
#define MCAN_TXBCIE_CFIE31_Msk                (_UINT32_(0x1) << MCAN_TXBCIE_CFIE31_Pos)            /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable for Transmit Buffer 31 Mask */
#define MCAN_TXBCIE_CFIE31(value)             (MCAN_TXBCIE_CFIE31_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE31_Pos)) /* Assignment of value for CFIE31 in the MCAN_TXBCIE register */
#define   MCAN_TXBCIE_CFIE31_0_Val            _UINT32_(0x0)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt disabled.  */
#define   MCAN_TXBCIE_CFIE31_1_Val            _UINT32_(0x1)                                        /* (MCAN_TXBCIE) Cancellation finished interrupt enabled.  */
#define MCAN_TXBCIE_CFIE31_0                  (MCAN_TXBCIE_CFIE31_0_Val << MCAN_TXBCIE_CFIE31_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt disabled. Position */
#define MCAN_TXBCIE_CFIE31_1                  (MCAN_TXBCIE_CFIE31_1_Val << MCAN_TXBCIE_CFIE31_Pos) /* (MCAN_TXBCIE) Cancellation finished interrupt enabled. Position */
#define MCAN_TXBCIE_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TXBCIE) Register Mask  */

#define MCAN_TXBCIE_CFIE_Pos                  _UINT32_(0)                                          /* (MCAN_TXBCIE Position) Cancellation Finished Interrupt Enable for Transmit Buffer 3x */
#define MCAN_TXBCIE_CFIE_Msk                  (_UINT32_(0xFFFFFFFF) << MCAN_TXBCIE_CFIE_Pos)       /* (MCAN_TXBCIE Mask) CFIE */
#define MCAN_TXBCIE_CFIE(value)               (MCAN_TXBCIE_CFIE_Msk & (_UINT32_(value) << MCAN_TXBCIE_CFIE_Pos)) 

/* -------- MCAN_TXEFC : (MCAN Offset: 0xF0) (R/W 32) Transmit Event FIFO Configuration Register -------- */
#define MCAN_TXEFC_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXEFC) Transmit Event FIFO Configuration Register  Reset Value */

#define MCAN_TXEFC_EFSA_Pos                   _UINT32_(2)                                          /* (MCAN_TXEFC) Event FIFO Start Address Position */
#define MCAN_TXEFC_EFSA_Msk                   (_UINT32_(0x3FFF) << MCAN_TXEFC_EFSA_Pos)            /* (MCAN_TXEFC) Event FIFO Start Address Mask */
#define MCAN_TXEFC_EFSA(value)                (MCAN_TXEFC_EFSA_Msk & (_UINT32_(value) << MCAN_TXEFC_EFSA_Pos)) /* Assignment of value for EFSA in the MCAN_TXEFC register */
#define MCAN_TXEFC_EFS_Pos                    _UINT32_(16)                                         /* (MCAN_TXEFC) Event FIFO Size Position */
#define MCAN_TXEFC_EFS_Msk                    (_UINT32_(0x3F) << MCAN_TXEFC_EFS_Pos)               /* (MCAN_TXEFC) Event FIFO Size Mask */
#define MCAN_TXEFC_EFS(value)                 (MCAN_TXEFC_EFS_Msk & (_UINT32_(value) << MCAN_TXEFC_EFS_Pos)) /* Assignment of value for EFS in the MCAN_TXEFC register */
#define   MCAN_TXEFC_EFS_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXEFC) Tx Event FIFO disabled.  */
#define MCAN_TXEFC_EFS_0                      (MCAN_TXEFC_EFS_0_Val << MCAN_TXEFC_EFS_Pos)         /* (MCAN_TXEFC) Tx Event FIFO disabled. Position */
#define MCAN_TXEFC_EFWM_Pos                   _UINT32_(24)                                         /* (MCAN_TXEFC) Event FIFO Watermark Position */
#define MCAN_TXEFC_EFWM_Msk                   (_UINT32_(0x3F) << MCAN_TXEFC_EFWM_Pos)              /* (MCAN_TXEFC) Event FIFO Watermark Mask */
#define MCAN_TXEFC_EFWM(value)                (MCAN_TXEFC_EFWM_Msk & (_UINT32_(value) << MCAN_TXEFC_EFWM_Pos)) /* Assignment of value for EFWM in the MCAN_TXEFC register */
#define   MCAN_TXEFC_EFWM_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXEFC) Watermark interrupt disabled.  */
#define MCAN_TXEFC_EFWM_0                     (MCAN_TXEFC_EFWM_0_Val << MCAN_TXEFC_EFWM_Pos)       /* (MCAN_TXEFC) Watermark interrupt disabled. Position */
#define MCAN_TXEFC_Msk                        _UINT32_(0x3F3FFFFC)                                 /* (MCAN_TXEFC) Register Mask  */


/* -------- MCAN_TXEFS : (MCAN Offset: 0xF4) ( R/ 32) Transmit Event FIFO Status Register -------- */
#define MCAN_TXEFS_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXEFS) Transmit Event FIFO Status Register  Reset Value */

#define MCAN_TXEFS_EFFL_Pos                   _UINT32_(0)                                          /* (MCAN_TXEFS) Event FIFO Fill Level Position */
#define MCAN_TXEFS_EFFL_Msk                   (_UINT32_(0x3F) << MCAN_TXEFS_EFFL_Pos)              /* (MCAN_TXEFS) Event FIFO Fill Level Mask */
#define MCAN_TXEFS_EFFL(value)                (MCAN_TXEFS_EFFL_Msk & (_UINT32_(value) << MCAN_TXEFS_EFFL_Pos)) /* Assignment of value for EFFL in the MCAN_TXEFS register */
#define MCAN_TXEFS_EFGI_Pos                   _UINT32_(8)                                          /* (MCAN_TXEFS) Event FIFO Get Index Position */
#define MCAN_TXEFS_EFGI_Msk                   (_UINT32_(0x1F) << MCAN_TXEFS_EFGI_Pos)              /* (MCAN_TXEFS) Event FIFO Get Index Mask */
#define MCAN_TXEFS_EFGI(value)                (MCAN_TXEFS_EFGI_Msk & (_UINT32_(value) << MCAN_TXEFS_EFGI_Pos)) /* Assignment of value for EFGI in the MCAN_TXEFS register */
#define MCAN_TXEFS_EFPI_Pos                   _UINT32_(16)                                         /* (MCAN_TXEFS) Event FIFO Put Index Position */
#define MCAN_TXEFS_EFPI_Msk                   (_UINT32_(0x1F) << MCAN_TXEFS_EFPI_Pos)              /* (MCAN_TXEFS) Event FIFO Put Index Mask */
#define MCAN_TXEFS_EFPI(value)                (MCAN_TXEFS_EFPI_Msk & (_UINT32_(value) << MCAN_TXEFS_EFPI_Pos)) /* Assignment of value for EFPI in the MCAN_TXEFS register */
#define MCAN_TXEFS_EFF_Pos                    _UINT32_(24)                                         /* (MCAN_TXEFS) Event FIFO Full Position */
#define MCAN_TXEFS_EFF_Msk                    (_UINT32_(0x1) << MCAN_TXEFS_EFF_Pos)                /* (MCAN_TXEFS) Event FIFO Full Mask */
#define MCAN_TXEFS_EFF(value)                 (MCAN_TXEFS_EFF_Msk & (_UINT32_(value) << MCAN_TXEFS_EFF_Pos)) /* Assignment of value for EFF in the MCAN_TXEFS register */
#define   MCAN_TXEFS_EFF_0_Val                _UINT32_(0x0)                                        /* (MCAN_TXEFS) Tx Event FIFO not full  */
#define   MCAN_TXEFS_EFF_1_Val                _UINT32_(0x1)                                        /* (MCAN_TXEFS) Tx Event FIFO full  */
#define MCAN_TXEFS_EFF_0                      (MCAN_TXEFS_EFF_0_Val << MCAN_TXEFS_EFF_Pos)         /* (MCAN_TXEFS) Tx Event FIFO not full Position */
#define MCAN_TXEFS_EFF_1                      (MCAN_TXEFS_EFF_1_Val << MCAN_TXEFS_EFF_Pos)         /* (MCAN_TXEFS) Tx Event FIFO full Position */
#define MCAN_TXEFS_TEFL_Pos                   _UINT32_(25)                                         /* (MCAN_TXEFS) Tx Event FIFO Element Lost Position */
#define MCAN_TXEFS_TEFL_Msk                   (_UINT32_(0x1) << MCAN_TXEFS_TEFL_Pos)               /* (MCAN_TXEFS) Tx Event FIFO Element Lost Mask */
#define MCAN_TXEFS_TEFL(value)                (MCAN_TXEFS_TEFL_Msk & (_UINT32_(value) << MCAN_TXEFS_TEFL_Pos)) /* Assignment of value for TEFL in the MCAN_TXEFS register */
#define   MCAN_TXEFS_TEFL_0_Val               _UINT32_(0x0)                                        /* (MCAN_TXEFS) No Tx Event FIFO element lost  */
#define   MCAN_TXEFS_TEFL_1_Val               _UINT32_(0x1)                                        /* (MCAN_TXEFS) Tx Event FIFO element lost, also set after write attempt to Tx Event FIFO of size zero.  */
#define MCAN_TXEFS_TEFL_0                     (MCAN_TXEFS_TEFL_0_Val << MCAN_TXEFS_TEFL_Pos)       /* (MCAN_TXEFS) No Tx Event FIFO element lost Position */
#define MCAN_TXEFS_TEFL_1                     (MCAN_TXEFS_TEFL_1_Val << MCAN_TXEFS_TEFL_Pos)       /* (MCAN_TXEFS) Tx Event FIFO element lost, also set after write attempt to Tx Event FIFO of size zero. Position */
#define MCAN_TXEFS_Msk                        _UINT32_(0x031F1F3F)                                 /* (MCAN_TXEFS) Register Mask  */


/* -------- MCAN_TXEFA : (MCAN Offset: 0xF8) (R/W 32) Transmit Event FIFO Acknowledge Register -------- */
#define MCAN_TXEFA_RESETVALUE                 _UINT32_(0x00)                                       /*  (MCAN_TXEFA) Transmit Event FIFO Acknowledge Register  Reset Value */

#define MCAN_TXEFA_EFAI_Pos                   _UINT32_(0)                                          /* (MCAN_TXEFA) Event FIFO Acknowledge Index Position */
#define MCAN_TXEFA_EFAI_Msk                   (_UINT32_(0x1F) << MCAN_TXEFA_EFAI_Pos)              /* (MCAN_TXEFA) Event FIFO Acknowledge Index Mask */
#define MCAN_TXEFA_EFAI(value)                (MCAN_TXEFA_EFAI_Msk & (_UINT32_(value) << MCAN_TXEFA_EFAI_Pos)) /* Assignment of value for EFAI in the MCAN_TXEFA register */
#define MCAN_TXEFA_Msk                        _UINT32_(0x0000001F)                                 /* (MCAN_TXEFA) Register Mask  */


/* -------- MCAN_TSU_TSCFG : (MCAN Offset: 0x164) (R/W 32) TSU Timestamp Configuration Register -------- */
#define MCAN_TSU_TSCFG_RESETVALUE             _UINT32_(0x00)                                       /*  (MCAN_TSU_TSCFG) TSU Timestamp Configuration Register  Reset Value */

#define MCAN_TSU_TSCFG_TSUE_Pos               _UINT32_(0)                                          /* (MCAN_TSU_TSCFG) Timestamp Unit Enable Position */
#define MCAN_TSU_TSCFG_TSUE_Msk               (_UINT32_(0x1) << MCAN_TSU_TSCFG_TSUE_Pos)           /* (MCAN_TSU_TSCFG) Timestamp Unit Enable Mask */
#define MCAN_TSU_TSCFG_TSUE(value)            (MCAN_TSU_TSCFG_TSUE_Msk & (_UINT32_(value) << MCAN_TSU_TSCFG_TSUE_Pos)) /* Assignment of value for TSUE in the MCAN_TSU_TSCFG register */
#define   MCAN_TSU_TSCFG_TSUE_0_Val           _UINT32_(0x0)                                        /* (MCAN_TSU_TSCFG) TSU disabled  */
#define   MCAN_TSU_TSCFG_TSUE_1_Val           _UINT32_(0x1)                                        /* (MCAN_TSU_TSCFG) TSU enabled  */
#define MCAN_TSU_TSCFG_TSUE_0                 (MCAN_TSU_TSCFG_TSUE_0_Val << MCAN_TSU_TSCFG_TSUE_Pos) /* (MCAN_TSU_TSCFG) TSU disabled Position */
#define MCAN_TSU_TSCFG_TSUE_1                 (MCAN_TSU_TSCFG_TSUE_1_Val << MCAN_TSU_TSCFG_TSUE_Pos) /* (MCAN_TSU_TSCFG) TSU enabled Position */
#define MCAN_TSU_TSCFG_TBCS_Pos               _UINT32_(1)                                          /* (MCAN_TSU_TSCFG) Timebase Counter Select Position */
#define MCAN_TSU_TSCFG_TBCS_Msk               (_UINT32_(0x1) << MCAN_TSU_TSCFG_TBCS_Pos)           /* (MCAN_TSU_TSCFG) Timebase Counter Select Mask */
#define MCAN_TSU_TSCFG_TBCS(value)            (MCAN_TSU_TSCFG_TBCS_Msk & (_UINT32_(value) << MCAN_TSU_TSCFG_TBCS_Pos)) /* Assignment of value for TBCS in the MCAN_TSU_TSCFG register */
#define   MCAN_TSU_TSCFG_TBCS_0_Val           _UINT32_(0x0)                                        /* (MCAN_TSU_TSCFG) Timestamp value captured from internal timebase counter (32 bits)  */
#define   MCAN_TSU_TSCFG_TBCS_1_Val           _UINT32_(0x1)                                        /* (MCAN_TSU_TSCFG) Timestamp value captured from external timebase counter (32 bits)  */
#define MCAN_TSU_TSCFG_TBCS_0                 (MCAN_TSU_TSCFG_TBCS_0_Val << MCAN_TSU_TSCFG_TBCS_Pos) /* (MCAN_TSU_TSCFG) Timestamp value captured from internal timebase counter (32 bits) Position */
#define MCAN_TSU_TSCFG_TBCS_1                 (MCAN_TSU_TSCFG_TBCS_1_Val << MCAN_TSU_TSCFG_TBCS_Pos) /* (MCAN_TSU_TSCFG) Timestamp value captured from external timebase counter (32 bits) Position */
#define MCAN_TSU_TSCFG_SCP_Pos                _UINT32_(2)                                          /* (MCAN_TSU_TSCFG) Select Capturing Position Position */
#define MCAN_TSU_TSCFG_SCP_Msk                (_UINT32_(0x1) << MCAN_TSU_TSCFG_SCP_Pos)            /* (MCAN_TSU_TSCFG) Select Capturing Position Mask */
#define MCAN_TSU_TSCFG_SCP(value)             (MCAN_TSU_TSCFG_SCP_Msk & (_UINT32_(value) << MCAN_TSU_TSCFG_SCP_Pos)) /* Assignment of value for SCP in the MCAN_TSU_TSCFG register */
#define   MCAN_TSU_TSCFG_SCP_0_Val            _UINT32_(0x0)                                        /* (MCAN_TSU_TSCFG) Timestamp captured at EOF.  */
#define   MCAN_TSU_TSCFG_SCP_1_Val            _UINT32_(0x1)                                        /* (MCAN_TSU_TSCFG) Timestamp captured at SOF.  */
#define MCAN_TSU_TSCFG_SCP_0                  (MCAN_TSU_TSCFG_SCP_0_Val << MCAN_TSU_TSCFG_SCP_Pos) /* (MCAN_TSU_TSCFG) Timestamp captured at EOF. Position */
#define MCAN_TSU_TSCFG_SCP_1                  (MCAN_TSU_TSCFG_SCP_1_Val << MCAN_TSU_TSCFG_SCP_Pos) /* (MCAN_TSU_TSCFG) Timestamp captured at SOF. Position */
#define MCAN_TSU_TSCFG_TBPRE_Pos              _UINT32_(8)                                          /* (MCAN_TSU_TSCFG) Timebase Prescaler Position */
#define MCAN_TSU_TSCFG_TBPRE_Msk              (_UINT32_(0xFF) << MCAN_TSU_TSCFG_TBPRE_Pos)         /* (MCAN_TSU_TSCFG) Timebase Prescaler Mask */
#define MCAN_TSU_TSCFG_TBPRE(value)           (MCAN_TSU_TSCFG_TBPRE_Msk & (_UINT32_(value) << MCAN_TSU_TSCFG_TBPRE_Pos)) /* Assignment of value for TBPRE in the MCAN_TSU_TSCFG register */
#define MCAN_TSU_TSCFG_Msk                    _UINT32_(0x0000FF07)                                 /* (MCAN_TSU_TSCFG) Register Mask  */


/* -------- MCAN_TSU_TSS1 : (MCAN Offset: 0x168) ( R/ 32) TSU Timestamp Status 1 Register -------- */
#define MCAN_TSU_TSS1_RESETVALUE              _UINT32_(0x00)                                       /*  (MCAN_TSU_TSS1) TSU Timestamp Status 1 Register  Reset Value */

#define MCAN_TSU_TSS1_TSN_Pos                 _UINT32_(0)                                          /* (MCAN_TSU_TSS1) Timestamp New Position */
#define MCAN_TSU_TSS1_TSN_Msk                 (_UINT32_(0xFFFF) << MCAN_TSU_TSS1_TSN_Pos)          /* (MCAN_TSU_TSS1) Timestamp New Mask */
#define MCAN_TSU_TSS1_TSN(value)              (MCAN_TSU_TSS1_TSN_Msk & (_UINT32_(value) << MCAN_TSU_TSS1_TSN_Pos)) /* Assignment of value for TSN in the MCAN_TSU_TSS1 register */
#define MCAN_TSU_TSS1_TSL_Pos                 _UINT32_(16)                                         /* (MCAN_TSU_TSS1) Timestamp Lost Position */
#define MCAN_TSU_TSS1_TSL_Msk                 (_UINT32_(0xFFFF) << MCAN_TSU_TSS1_TSL_Pos)          /* (MCAN_TSU_TSS1) Timestamp Lost Mask */
#define MCAN_TSU_TSS1_TSL(value)              (MCAN_TSU_TSS1_TSL_Msk & (_UINT32_(value) << MCAN_TSU_TSS1_TSL_Pos)) /* Assignment of value for TSL in the MCAN_TSU_TSS1 register */
#define MCAN_TSU_TSS1_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TSU_TSS1) Register Mask  */


/* -------- MCAN_TSU_TSS2 : (MCAN Offset: 0x16C) ( R/ 32) TSU Timestamp Status 2 Register -------- */
#define MCAN_TSU_TSS2_RESETVALUE              _UINT32_(0xE000)                                     /*  (MCAN_TSU_TSS2) TSU Timestamp Status 2 Register  Reset Value */

#define MCAN_TSU_TSS2_TSP_Pos                 _UINT32_(0)                                          /* (MCAN_TSU_TSS2) Timestamp Pointer Position */
#define MCAN_TSU_TSS2_TSP_Msk                 (_UINT32_(0xF) << MCAN_TSU_TSS2_TSP_Pos)             /* (MCAN_TSU_TSS2) Timestamp Pointer Mask */
#define MCAN_TSU_TSS2_TSP(value)              (MCAN_TSU_TSS2_TSP_Msk & (_UINT32_(value) << MCAN_TSU_TSS2_TSP_Pos)) /* Assignment of value for TSP in the MCAN_TSU_TSS2 register */
#define MCAN_TSU_TSS2_NTSG_Pos                _UINT32_(12)                                         /* (MCAN_TSU_TSS2) Number of Timestamps Generic Position */
#define MCAN_TSU_TSS2_NTSG_Msk                (_UINT32_(0x3) << MCAN_TSU_TSS2_NTSG_Pos)            /* (MCAN_TSU_TSS2) Number of Timestamps Generic Mask */
#define MCAN_TSU_TSS2_NTSG(value)             (MCAN_TSU_TSS2_NTSG_Msk & (_UINT32_(value) << MCAN_TSU_TSS2_NTSG_Pos)) /* Assignment of value for NTSG in the MCAN_TSU_TSS2 register */
#define MCAN_TSU_TSS2_ITBG_Pos                _UINT32_(14)                                         /* (MCAN_TSU_TSS2) Internal Timebase and SOF Select Generic Position */
#define MCAN_TSU_TSS2_ITBG_Msk                (_UINT32_(0x3) << MCAN_TSU_TSS2_ITBG_Pos)            /* (MCAN_TSU_TSS2) Internal Timebase and SOF Select Generic Mask */
#define MCAN_TSU_TSS2_ITBG(value)             (MCAN_TSU_TSS2_ITBG_Msk & (_UINT32_(value) << MCAN_TSU_TSS2_ITBG_Pos)) /* Assignment of value for ITBG in the MCAN_TSU_TSS2 register */
#define MCAN_TSU_TSS2_Msk                     _UINT32_(0x0000F00F)                                 /* (MCAN_TSU_TSS2) Register Mask  */


/* -------- MCAN_TSU_TS : (MCAN Offset: 0x170) ( R/ 32) TSU Timestamp x Register -------- */
#define MCAN_TSU_TS_RESETVALUE                _UINT32_(0x00)                                       /*  (MCAN_TSU_TS) TSU Timestamp x Register  Reset Value */

#define MCAN_TSU_TS_TS_Pos                    _UINT32_(0)                                          /* (MCAN_TSU_TS) Timestamp Word TS Position */
#define MCAN_TSU_TS_TS_Msk                    (_UINT32_(0xFFFFFFFF) << MCAN_TSU_TS_TS_Pos)         /* (MCAN_TSU_TS) Timestamp Word TS Mask */
#define MCAN_TSU_TS_TS(value)                 (MCAN_TSU_TS_TS_Msk & (_UINT32_(value) << MCAN_TSU_TS_TS_Pos)) /* Assignment of value for TS in the MCAN_TSU_TS register */
#define MCAN_TSU_TS_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TSU_TS) Register Mask  */


/* -------- MCAN_TSU_ATB : (MCAN Offset: 0x1B0) ( R/ 32) TSU Actual Timebase Register -------- */
#define MCAN_TSU_ATB_RESETVALUE               _UINT32_(0x00)                                       /*  (MCAN_TSU_ATB) TSU Actual Timebase Register  Reset Value */

#define MCAN_TSU_ATB_TB_Pos                   _UINT32_(0)                                          /* (MCAN_TSU_ATB) Timebase for Timestamp Generation Position */
#define MCAN_TSU_ATB_TB_Msk                   (_UINT32_(0xFFFFFFFF) << MCAN_TSU_ATB_TB_Pos)        /* (MCAN_TSU_ATB) Timebase for Timestamp Generation Mask */
#define MCAN_TSU_ATB_TB(value)                (MCAN_TSU_ATB_TB_Msk & (_UINT32_(value) << MCAN_TSU_ATB_TB_Pos)) /* Assignment of value for TB in the MCAN_TSU_ATB register */
#define MCAN_TSU_ATB_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MCAN_TSU_ATB) Register Mask  */


/* MCAN register offsets definitions */
#define MCAN_XIDFE_0_REG_OFST          _UINT32_(0x00)      /* (MCAN_XIDFE_0) Extended Message ID Filter Element 0 Offset */
#define MCAN_XIDFE_1_REG_OFST          _UINT32_(0x04)      /* (MCAN_XIDFE_1) Extended Message ID Filter Element 1 Offset */
#define MCAN_SIDFE_0_REG_OFST          _UINT32_(0x00)      /* (MCAN_SIDFE_0) Standard Message ID Filter Element 0 Offset */
#define MCAN_TXEFE_0_REG_OFST          _UINT32_(0x00)      /* (MCAN_TXEFE_0) Tx Event FIFO Element Offset */
#define MCAN_TXEFE_1_REG_OFST          _UINT32_(0x04)      /* (MCAN_TXEFE_1) Tx Event FIFO Element 1 Offset */
#define MCAN_TXBE_0_REG_OFST           _UINT32_(0x00)      /* (MCAN_TXBE_0) Tx Buffer Element 0 Offset */
#define MCAN_TXBE_1_REG_OFST           _UINT32_(0x04)      /* (MCAN_TXBE_1) Tx Buffer Element 1 Offset */
#define MCAN_TXBE_DATA_REG_OFST        _UINT32_(0x08)      /* (MCAN_TXBE_DATA) Tx Buffer Element Data Offset */
#define MCAN_RXF1E_0_REG_OFST          _UINT32_(0x00)      /* (MCAN_RXF1E_0) Rx FIFO 1 Element 0 Offset */
#define MCAN_RXF1E_1_REG_OFST          _UINT32_(0x04)      /* (MCAN_RXF1E_1) Rx FIFO 1 Element 1 Offset */
#define MCAN_RXF1E_DATA_REG_OFST       _UINT32_(0x08)      /* (MCAN_RXF1E_DATA) Rx FIFO 1 Element Data Offset */
#define MCAN_RXF0E_0_REG_OFST          _UINT32_(0x00)      /* (MCAN_RXF0E_0) Rx FIFO 0 Element 0 Offset */
#define MCAN_RXF0E_1_REG_OFST          _UINT32_(0x04)      /* (MCAN_RXF0E_1) Rx FIFO 0 Element 1 Offset */
#define MCAN_RXF0E_DATA_REG_OFST       _UINT32_(0x08)      /* (MCAN_RXF0E_DATA) Rx FIFO 0 Element Data Offset */
#define MCAN_RXBE_0_REG_OFST           _UINT32_(0x00)      /* (MCAN_RXBE_0) Rx Buffer Element 0 Offset */
#define MCAN_RXBE_1_REG_OFST           _UINT32_(0x04)      /* (MCAN_RXBE_1) Rx Buffer Element 1 Offset */
#define MCAN_RXBE_DATA_REG_OFST        _UINT32_(0x08)      /* (MCAN_RXBE_DATA) Rx Buffer Element Data Offset */
#define MCAN_ENDN_REG_OFST             _UINT32_(0x04)      /* (MCAN_ENDN) Endian Register Offset */
#define MCAN_DBTP_REG_OFST             _UINT32_(0x0C)      /* (MCAN_DBTP) Data Bit Timing and Prescaler Register Offset */
#define MCAN_TEST_REG_OFST             _UINT32_(0x10)      /* (MCAN_TEST) Test Register Offset */
#define MCAN_RWD_REG_OFST              _UINT32_(0x14)      /* (MCAN_RWD) RAM Watchdog Register Offset */
#define MCAN_CCCR_REG_OFST             _UINT32_(0x18)      /* (MCAN_CCCR) CC Control Register Offset */
#define MCAN_NBTP_REG_OFST             _UINT32_(0x1C)      /* (MCAN_NBTP) Nominal Bit Timing and Prescaler Register Offset */
#define MCAN_TSCC_REG_OFST             _UINT32_(0x20)      /* (MCAN_TSCC) Timestamp Counter Configuration Register Offset */
#define MCAN_TSCV_REG_OFST             _UINT32_(0x24)      /* (MCAN_TSCV) Timestamp Counter Value Register Offset */
#define MCAN_TOCC_REG_OFST             _UINT32_(0x28)      /* (MCAN_TOCC) Timeout Counter Configuration Register Offset */
#define MCAN_TOCV_REG_OFST             _UINT32_(0x2C)      /* (MCAN_TOCV) Timeout Counter Value Register Offset */
#define MCAN_ECR_REG_OFST              _UINT32_(0x40)      /* (MCAN_ECR) Error Counter Register Offset */
#define MCAN_PSR_REG_OFST              _UINT32_(0x44)      /* (MCAN_PSR) Protocol Status Register Offset */
#define MCAN_TDCR_REG_OFST             _UINT32_(0x48)      /* (MCAN_TDCR) Transmit Delay Compensation Register Offset */
#define MCAN_IR_REG_OFST               _UINT32_(0x50)      /* (MCAN_IR) Interrupt Register Offset */
#define MCAN_IE_REG_OFST               _UINT32_(0x54)      /* (MCAN_IE) Interrupt Enable Register Offset */
#define MCAN_ILS_REG_OFST              _UINT32_(0x58)      /* (MCAN_ILS) Interrupt Line Select Register Offset */
#define MCAN_ILE_REG_OFST              _UINT32_(0x5C)      /* (MCAN_ILE) Interrupt Line Enable Register Offset */
#define MCAN_GFC_REG_OFST              _UINT32_(0x80)      /* (MCAN_GFC) Global Filter Configuration Register Offset */
#define MCAN_SIDFC_REG_OFST            _UINT32_(0x84)      /* (MCAN_SIDFC) Standard ID Filter Configuration Register Offset */
#define MCAN_XIDFC_REG_OFST            _UINT32_(0x88)      /* (MCAN_XIDFC) Extended ID Filter Configuration Register Offset */
#define MCAN_XIDAM_REG_OFST            _UINT32_(0x90)      /* (MCAN_XIDAM) Extended ID AND Mask Register Offset */
#define MCAN_HPMS_REG_OFST             _UINT32_(0x94)      /* (MCAN_HPMS) High Priority Message Status Register Offset */
#define MCAN_NDAT1_REG_OFST            _UINT32_(0x98)      /* (MCAN_NDAT1) New Data 1 Register Offset */
#define MCAN_NDAT2_REG_OFST            _UINT32_(0x9C)      /* (MCAN_NDAT2) New Data 2 Register Offset */
#define MCAN_RXF0C_REG_OFST            _UINT32_(0xA0)      /* (MCAN_RXF0C) Receive FIFO 0 Configuration Register Offset */
#define MCAN_RXF0S_REG_OFST            _UINT32_(0xA4)      /* (MCAN_RXF0S) Receive FIFO 0 Status Register Offset */
#define MCAN_RXF0A_REG_OFST            _UINT32_(0xA8)      /* (MCAN_RXF0A) Receive FIFO 0 Acknowledge Register Offset */
#define MCAN_RXBC_REG_OFST             _UINT32_(0xAC)      /* (MCAN_RXBC) Receive Rx Buffer Configuration Register Offset */
#define MCAN_RXF1C_REG_OFST            _UINT32_(0xB0)      /* (MCAN_RXF1C) Receive FIFO 1 Configuration Register Offset */
#define MCAN_RXF1S_REG_OFST            _UINT32_(0xB4)      /* (MCAN_RXF1S) Receive FIFO 1 Status Register Offset */
#define MCAN_RXF1A_REG_OFST            _UINT32_(0xB8)      /* (MCAN_RXF1A) Receive FIFO 1 Acknowledge Register Offset */
#define MCAN_RXESC_REG_OFST            _UINT32_(0xBC)      /* (MCAN_RXESC) Receive Buffer / FIFO Element Size Configuration Register Offset */
#define MCAN_TXBC_REG_OFST             _UINT32_(0xC0)      /* (MCAN_TXBC) Transmit Buffer Configuration Register Offset */
#define MCAN_TXFQS_REG_OFST            _UINT32_(0xC4)      /* (MCAN_TXFQS) Transmit FIFO/Queue Status Register Offset */
#define MCAN_TXESC_REG_OFST            _UINT32_(0xC8)      /* (MCAN_TXESC) Transmit Buffer Element Size Configuration Register Offset */
#define MCAN_TXBRP_REG_OFST            _UINT32_(0xCC)      /* (MCAN_TXBRP) Transmit Buffer Request Pending Register Offset */
#define MCAN_TXBAR_REG_OFST            _UINT32_(0xD0)      /* (MCAN_TXBAR) Transmit Buffer Add Request Register Offset */
#define MCAN_TXBCR_REG_OFST            _UINT32_(0xD4)      /* (MCAN_TXBCR) Transmit Buffer Cancellation Request Register Offset */
#define MCAN_TXBTO_REG_OFST            _UINT32_(0xD8)      /* (MCAN_TXBTO) Transmit Buffer Transmission Occurred Register Offset */
#define MCAN_TXBCF_REG_OFST            _UINT32_(0xDC)      /* (MCAN_TXBCF) Transmit Buffer Cancellation Finished Register Offset */
#define MCAN_TXBTIE_REG_OFST           _UINT32_(0xE0)      /* (MCAN_TXBTIE) Transmit Buffer Transmission Interrupt Enable Register Offset */
#define MCAN_TXBCIE_REG_OFST           _UINT32_(0xE4)      /* (MCAN_TXBCIE) Transmit Buffer Cancellation Finished Interrupt Enable Register Offset */
#define MCAN_TXEFC_REG_OFST            _UINT32_(0xF0)      /* (MCAN_TXEFC) Transmit Event FIFO Configuration Register Offset */
#define MCAN_TXEFS_REG_OFST            _UINT32_(0xF4)      /* (MCAN_TXEFS) Transmit Event FIFO Status Register Offset */
#define MCAN_TXEFA_REG_OFST            _UINT32_(0xF8)      /* (MCAN_TXEFA) Transmit Event FIFO Acknowledge Register Offset */
#define MCAN_TSU_TSCFG_REG_OFST        _UINT32_(0x164)     /* (MCAN_TSU_TSCFG) TSU Timestamp Configuration Register Offset */
#define MCAN_TSU_TSS1_REG_OFST         _UINT32_(0x168)     /* (MCAN_TSU_TSS1) TSU Timestamp Status 1 Register Offset */
#define MCAN_TSU_TSS2_REG_OFST         _UINT32_(0x16C)     /* (MCAN_TSU_TSS2) TSU Timestamp Status 2 Register Offset */
#define MCAN_TSU_TS_REG_OFST           _UINT32_(0x170)     /* (MCAN_TSU_TS) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS0_REG_OFST          _UINT32_(0x170)     /* (MCAN_TSU_TS0) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS1_REG_OFST          _UINT32_(0x174)     /* (MCAN_TSU_TS1) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS2_REG_OFST          _UINT32_(0x178)     /* (MCAN_TSU_TS2) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS3_REG_OFST          _UINT32_(0x17C)     /* (MCAN_TSU_TS3) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS4_REG_OFST          _UINT32_(0x180)     /* (MCAN_TSU_TS4) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS5_REG_OFST          _UINT32_(0x184)     /* (MCAN_TSU_TS5) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS6_REG_OFST          _UINT32_(0x188)     /* (MCAN_TSU_TS6) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS7_REG_OFST          _UINT32_(0x18C)     /* (MCAN_TSU_TS7) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS8_REG_OFST          _UINT32_(0x190)     /* (MCAN_TSU_TS8) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS9_REG_OFST          _UINT32_(0x194)     /* (MCAN_TSU_TS9) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS10_REG_OFST         _UINT32_(0x198)     /* (MCAN_TSU_TS10) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS11_REG_OFST         _UINT32_(0x19C)     /* (MCAN_TSU_TS11) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS12_REG_OFST         _UINT32_(0x1A0)     /* (MCAN_TSU_TS12) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS13_REG_OFST         _UINT32_(0x1A4)     /* (MCAN_TSU_TS13) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS14_REG_OFST         _UINT32_(0x1A8)     /* (MCAN_TSU_TS14) TSU Timestamp x Register Offset */
#define MCAN_TSU_TS15_REG_OFST         _UINT32_(0x1AC)     /* (MCAN_TSU_TS15) TSU Timestamp x Register Offset */
#define MCAN_TSU_ATB_REG_OFST          _UINT32_(0x1B0)     /* (MCAN_TSU_ATB) TSU Actual Timebase Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* MCAN_XIDFE register API structure */
typedef struct
{  /* Extended Message ID Filter Element */
  __IO  uint32_t                       MCAN_XIDFE_0;       /* Offset: 0x00 (R/W  32) Extended Message ID Filter Element 0 */
  __IO  uint32_t                       MCAN_XIDFE_1;       /* Offset: 0x04 (R/W  32) Extended Message ID Filter Element 1 */
} mcan_xidfe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN_SIDFE register API structure */
typedef struct
{  /* Standard Message ID Filter Element */
  __IO  uint32_t                       MCAN_SIDFE_0;       /* Offset: 0x00 (R/W  32) Standard Message ID Filter Element 0 */
} mcan_sidfe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN_TXEFE register API structure */
typedef struct
{  /* Tx Event FIFO Element */
  __IO  uint32_t                       MCAN_TXEFE_0;       /* Offset: 0x00 (R/W  32) Tx Event FIFO Element */
  __IO  uint32_t                       MCAN_TXEFE_1;       /* Offset: 0x04 (R/W  32) Tx Event FIFO Element 1 */
} mcan_txefe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN_TXBE register API structure */
typedef struct
{  /* Tx Buffer Element */
  __IO  uint32_t                       MCAN_TXBE_0;        /* Offset: 0x00 (R/W  32) Tx Buffer Element 0 */
  __IO  uint32_t                       MCAN_TXBE_1;        /* Offset: 0x04 (R/W  32) Tx Buffer Element 1 */
  __IO  uint32_t                       MCAN_TXBE_DATA;     /* Offset: 0x08 (R/W  32) Tx Buffer Element Data */
} mcan_txbe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN_RXF1E register API structure */
typedef struct
{  /* Rx FIFO 1 Element */
  __IO  uint32_t                       MCAN_RXF1E_0;       /* Offset: 0x00 (R/W  32) Rx FIFO 1 Element 0 */
  __IO  uint32_t                       MCAN_RXF1E_1;       /* Offset: 0x04 (R/W  32) Rx FIFO 1 Element 1 */
  __IO  uint32_t                       MCAN_RXF1E_DATA;    /* Offset: 0x08 (R/W  32) Rx FIFO 1 Element Data */
} mcan_rxf1e_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN_RXF0E register API structure */
typedef struct
{  /* Rx FIFO 0 Element */
  __IO  uint32_t                       MCAN_RXF0E_0;       /* Offset: 0x00 (R/W  32) Rx FIFO 0 Element 0 */
  __IO  uint32_t                       MCAN_RXF0E_1;       /* Offset: 0x04 (R/W  32) Rx FIFO 0 Element 1 */
  __IO  uint32_t                       MCAN_RXF0E_DATA;    /* Offset: 0x08 (R/W  32) Rx FIFO 0 Element Data */
} mcan_rxf0e_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN_RXBE register API structure */
typedef struct
{  /* Rx Buffer Element */
  __IO  uint32_t                       MCAN_RXBE_0;        /* Offset: 0x00 (R/W  32) Rx Buffer Element 0 */
  __IO  uint32_t                       MCAN_RXBE_1;        /* Offset: 0x04 (R/W  32) Rx Buffer Element 1 */
  __IO  uint32_t                       MCAN_RXBE_DATA;     /* Offset: 0x08 (R/W  32) Rx Buffer Element Data */
} mcan_rxbe_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (4)))
#endif
;

/* MCAN register API structure */
typedef struct
{  /* Controller Area Network */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       MCAN_ENDN;          /* Offset: 0x04 (R/   32) Endian Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       MCAN_DBTP;          /* Offset: 0x0C (R/W  32) Data Bit Timing and Prescaler Register */
  __IO  uint32_t                       MCAN_TEST;          /* Offset: 0x10 (R/W  32) Test Register */
  __IO  uint32_t                       MCAN_RWD;           /* Offset: 0x14 (R/W  32) RAM Watchdog Register */
  __IO  uint32_t                       MCAN_CCCR;          /* Offset: 0x18 (R/W  32) CC Control Register */
  __IO  uint32_t                       MCAN_NBTP;          /* Offset: 0x1C (R/W  32) Nominal Bit Timing and Prescaler Register */
  __IO  uint32_t                       MCAN_TSCC;          /* Offset: 0x20 (R/W  32) Timestamp Counter Configuration Register */
  __IO  uint32_t                       MCAN_TSCV;          /* Offset: 0x24 (R/W  32) Timestamp Counter Value Register */
  __IO  uint32_t                       MCAN_TOCC;          /* Offset: 0x28 (R/W  32) Timeout Counter Configuration Register */
  __IO  uint32_t                       MCAN_TOCV;          /* Offset: 0x2C (R/W  32) Timeout Counter Value Register */
  __I   uint8_t                        Reserved3[0x10];
  __I   uint32_t                       MCAN_ECR;           /* Offset: 0x40 (R/   32) Error Counter Register */
  __I   uint32_t                       MCAN_PSR;           /* Offset: 0x44 (R/   32) Protocol Status Register */
  __IO  uint32_t                       MCAN_TDCR;          /* Offset: 0x48 (R/W  32) Transmit Delay Compensation Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       MCAN_IR;            /* Offset: 0x50 (R/W  32) Interrupt Register */
  __IO  uint32_t                       MCAN_IE;            /* Offset: 0x54 (R/W  32) Interrupt Enable Register */
  __IO  uint32_t                       MCAN_ILS;           /* Offset: 0x58 (R/W  32) Interrupt Line Select Register */
  __IO  uint32_t                       MCAN_ILE;           /* Offset: 0x5C (R/W  32) Interrupt Line Enable Register */
  __I   uint8_t                        Reserved5[0x20];
  __IO  uint32_t                       MCAN_GFC;           /* Offset: 0x80 (R/W  32) Global Filter Configuration Register */
  __IO  uint32_t                       MCAN_SIDFC;         /* Offset: 0x84 (R/W  32) Standard ID Filter Configuration Register */
  __IO  uint32_t                       MCAN_XIDFC;         /* Offset: 0x88 (R/W  32) Extended ID Filter Configuration Register */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       MCAN_XIDAM;         /* Offset: 0x90 (R/W  32) Extended ID AND Mask Register */
  __I   uint32_t                       MCAN_HPMS;          /* Offset: 0x94 (R/   32) High Priority Message Status Register */
  __IO  uint32_t                       MCAN_NDAT1;         /* Offset: 0x98 (R/W  32) New Data 1 Register */
  __IO  uint32_t                       MCAN_NDAT2;         /* Offset: 0x9C (R/W  32) New Data 2 Register */
  __IO  uint32_t                       MCAN_RXF0C;         /* Offset: 0xA0 (R/W  32) Receive FIFO 0 Configuration Register */
  __I   uint32_t                       MCAN_RXF0S;         /* Offset: 0xA4 (R/   32) Receive FIFO 0 Status Register */
  __IO  uint32_t                       MCAN_RXF0A;         /* Offset: 0xA8 (R/W  32) Receive FIFO 0 Acknowledge Register */
  __IO  uint32_t                       MCAN_RXBC;          /* Offset: 0xAC (R/W  32) Receive Rx Buffer Configuration Register */
  __IO  uint32_t                       MCAN_RXF1C;         /* Offset: 0xB0 (R/W  32) Receive FIFO 1 Configuration Register */
  __I   uint32_t                       MCAN_RXF1S;         /* Offset: 0xB4 (R/   32) Receive FIFO 1 Status Register */
  __IO  uint32_t                       MCAN_RXF1A;         /* Offset: 0xB8 (R/W  32) Receive FIFO 1 Acknowledge Register */
  __IO  uint32_t                       MCAN_RXESC;         /* Offset: 0xBC (R/W  32) Receive Buffer / FIFO Element Size Configuration Register */
  __IO  uint32_t                       MCAN_TXBC;          /* Offset: 0xC0 (R/W  32) Transmit Buffer Configuration Register */
  __I   uint32_t                       MCAN_TXFQS;         /* Offset: 0xC4 (R/   32) Transmit FIFO/Queue Status Register */
  __IO  uint32_t                       MCAN_TXESC;         /* Offset: 0xC8 (R/W  32) Transmit Buffer Element Size Configuration Register */
  __I   uint32_t                       MCAN_TXBRP;         /* Offset: 0xCC (R/   32) Transmit Buffer Request Pending Register */
  __IO  uint32_t                       MCAN_TXBAR;         /* Offset: 0xD0 (R/W  32) Transmit Buffer Add Request Register */
  __IO  uint32_t                       MCAN_TXBCR;         /* Offset: 0xD4 (R/W  32) Transmit Buffer Cancellation Request Register */
  __I   uint32_t                       MCAN_TXBTO;         /* Offset: 0xD8 (R/   32) Transmit Buffer Transmission Occurred Register */
  __I   uint32_t                       MCAN_TXBCF;         /* Offset: 0xDC (R/   32) Transmit Buffer Cancellation Finished Register */
  __IO  uint32_t                       MCAN_TXBTIE;        /* Offset: 0xE0 (R/W  32) Transmit Buffer Transmission Interrupt Enable Register */
  __IO  uint32_t                       MCAN_TXBCIE;        /* Offset: 0xE4 (R/W  32) Transmit Buffer Cancellation Finished Interrupt Enable Register */
  __I   uint8_t                        Reserved7[0x08];
  __IO  uint32_t                       MCAN_TXEFC;         /* Offset: 0xF0 (R/W  32) Transmit Event FIFO Configuration Register */
  __I   uint32_t                       MCAN_TXEFS;         /* Offset: 0xF4 (R/   32) Transmit Event FIFO Status Register */
  __IO  uint32_t                       MCAN_TXEFA;         /* Offset: 0xF8 (R/W  32) Transmit Event FIFO Acknowledge Register */
  __I   uint8_t                        Reserved8[0x68];
  __IO  uint32_t                       MCAN_TSU_TSCFG;     /* Offset: 0x164 (R/W  32) TSU Timestamp Configuration Register */
  __I   uint32_t                       MCAN_TSU_TSS1;      /* Offset: 0x168 (R/   32) TSU Timestamp Status 1 Register */
  __I   uint32_t                       MCAN_TSU_TSS2;      /* Offset: 0x16C (R/   32) TSU Timestamp Status 2 Register */
  __I   uint32_t                       MCAN_TSU_TS[16];    /* Offset: 0x170 (R/   32) TSU Timestamp x Register */
  __I   uint32_t                       MCAN_TSU_ATB;       /* Offset: 0x1B0 (R/   32) TSU Actual Timebase Register */
} mcan_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_MCAN_COMPONENT_H_ */
