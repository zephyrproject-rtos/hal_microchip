/*
 * Component description for UHPHS
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

/*  file generated from device description file (ATDF) version 2025-07-09T11:00:00Z  */
#ifndef _SAMA5D2_UHPHS_COMPONENT_H_
#define _SAMA5D2_UHPHS_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR UHPHS                      */
/* ************************************************************************** */

/* -------- UHPHS_HCCAPBASE : (UHPHS Offset: 0x00) ( R/ 32) UHPHS Host Controller Capability Register -------- */
#define UHPHS_HCCAPBASE_CAPLENGTH_Pos         _UINT32_(0)                                          /* (UHPHS_HCCAPBASE) Capability Registers Length Position */
#define UHPHS_HCCAPBASE_CAPLENGTH_Msk         (_UINT32_(0xFF) << UHPHS_HCCAPBASE_CAPLENGTH_Pos)    /* (UHPHS_HCCAPBASE) Capability Registers Length Mask */
#define UHPHS_HCCAPBASE_CAPLENGTH(value)      (UHPHS_HCCAPBASE_CAPLENGTH_Msk & (_UINT32_(value) << UHPHS_HCCAPBASE_CAPLENGTH_Pos)) /* Assignment of value for CAPLENGTH in the UHPHS_HCCAPBASE register */
#define UHPHS_HCCAPBASE_HCIVERSION_Pos        _UINT32_(16)                                         /* (UHPHS_HCCAPBASE) Host Controller Interface Version Number Position */
#define UHPHS_HCCAPBASE_HCIVERSION_Msk        (_UINT32_(0xFFFF) << UHPHS_HCCAPBASE_HCIVERSION_Pos) /* (UHPHS_HCCAPBASE) Host Controller Interface Version Number Mask */
#define UHPHS_HCCAPBASE_HCIVERSION(value)     (UHPHS_HCCAPBASE_HCIVERSION_Msk & (_UINT32_(value) << UHPHS_HCCAPBASE_HCIVERSION_Pos)) /* Assignment of value for HCIVERSION in the UHPHS_HCCAPBASE register */
#define UHPHS_HCCAPBASE_Msk                   _UINT32_(0xFFFF00FF)                                 /* (UHPHS_HCCAPBASE) Register Mask  */


/* -------- UHPHS_HCSPARAMS : (UHPHS Offset: 0x04) ( R/ 32) UHPHS Host Controller Structural Parameters Register -------- */
#define UHPHS_HCSPARAMS_N_PORTS_Pos           _UINT32_(0)                                          /* (UHPHS_HCSPARAMS) Number of Ports Position */
#define UHPHS_HCSPARAMS_N_PORTS_Msk           (_UINT32_(0xF) << UHPHS_HCSPARAMS_N_PORTS_Pos)       /* (UHPHS_HCSPARAMS) Number of Ports Mask */
#define UHPHS_HCSPARAMS_N_PORTS(value)        (UHPHS_HCSPARAMS_N_PORTS_Msk & (_UINT32_(value) << UHPHS_HCSPARAMS_N_PORTS_Pos)) /* Assignment of value for N_PORTS in the UHPHS_HCSPARAMS register */
#define UHPHS_HCSPARAMS_PPC_Pos               _UINT32_(4)                                          /* (UHPHS_HCSPARAMS) Port Power Control Position */
#define UHPHS_HCSPARAMS_PPC_Msk               (_UINT32_(0x1) << UHPHS_HCSPARAMS_PPC_Pos)           /* (UHPHS_HCSPARAMS) Port Power Control Mask */
#define UHPHS_HCSPARAMS_PPC(value)            (UHPHS_HCSPARAMS_PPC_Msk & (_UINT32_(value) << UHPHS_HCSPARAMS_PPC_Pos)) /* Assignment of value for PPC in the UHPHS_HCSPARAMS register */
#define UHPHS_HCSPARAMS_N_PCC_Pos             _UINT32_(8)                                          /* (UHPHS_HCSPARAMS) Number of Ports per Companion Controller Position */
#define UHPHS_HCSPARAMS_N_PCC_Msk             (_UINT32_(0xF) << UHPHS_HCSPARAMS_N_PCC_Pos)         /* (UHPHS_HCSPARAMS) Number of Ports per Companion Controller Mask */
#define UHPHS_HCSPARAMS_N_PCC(value)          (UHPHS_HCSPARAMS_N_PCC_Msk & (_UINT32_(value) << UHPHS_HCSPARAMS_N_PCC_Pos)) /* Assignment of value for N_PCC in the UHPHS_HCSPARAMS register */
#define UHPHS_HCSPARAMS_N_CC_Pos              _UINT32_(12)                                         /* (UHPHS_HCSPARAMS) Number of Companion Controllers Position */
#define UHPHS_HCSPARAMS_N_CC_Msk              (_UINT32_(0xF) << UHPHS_HCSPARAMS_N_CC_Pos)          /* (UHPHS_HCSPARAMS) Number of Companion Controllers Mask */
#define UHPHS_HCSPARAMS_N_CC(value)           (UHPHS_HCSPARAMS_N_CC_Msk & (_UINT32_(value) << UHPHS_HCSPARAMS_N_CC_Pos)) /* Assignment of value for N_CC in the UHPHS_HCSPARAMS register */
#define UHPHS_HCSPARAMS_P_INDICATOR_Pos       _UINT32_(16)                                         /* (UHPHS_HCSPARAMS) Port Indicators Position */
#define UHPHS_HCSPARAMS_P_INDICATOR_Msk       (_UINT32_(0x1) << UHPHS_HCSPARAMS_P_INDICATOR_Pos)   /* (UHPHS_HCSPARAMS) Port Indicators Mask */
#define UHPHS_HCSPARAMS_P_INDICATOR(value)    (UHPHS_HCSPARAMS_P_INDICATOR_Msk & (_UINT32_(value) << UHPHS_HCSPARAMS_P_INDICATOR_Pos)) /* Assignment of value for P_INDICATOR in the UHPHS_HCSPARAMS register */
#define UHPHS_HCSPARAMS_N_DP_Pos              _UINT32_(20)                                         /* (UHPHS_HCSPARAMS) Debug Port Number Position */
#define UHPHS_HCSPARAMS_N_DP_Msk              (_UINT32_(0xF) << UHPHS_HCSPARAMS_N_DP_Pos)          /* (UHPHS_HCSPARAMS) Debug Port Number Mask */
#define UHPHS_HCSPARAMS_N_DP(value)           (UHPHS_HCSPARAMS_N_DP_Msk & (_UINT32_(value) << UHPHS_HCSPARAMS_N_DP_Pos)) /* Assignment of value for N_DP in the UHPHS_HCSPARAMS register */
#define UHPHS_HCSPARAMS_Msk                   _UINT32_(0x00F1FF1F)                                 /* (UHPHS_HCSPARAMS) Register Mask  */


/* -------- UHPHS_HCCPARAMS : (UHPHS Offset: 0x08) ( R/ 32) UHPHS Host Controller Capability Parameters Register -------- */
#define UHPHS_HCCPARAMS_AC_Pos                _UINT32_(0)                                          /* (UHPHS_HCCPARAMS) 64-bit Addressing Capability Position */
#define UHPHS_HCCPARAMS_AC_Msk                (_UINT32_(0x1) << UHPHS_HCCPARAMS_AC_Pos)            /* (UHPHS_HCCPARAMS) 64-bit Addressing Capability Mask */
#define UHPHS_HCCPARAMS_AC(value)             (UHPHS_HCCPARAMS_AC_Msk & (_UINT32_(value) << UHPHS_HCCPARAMS_AC_Pos)) /* Assignment of value for AC in the UHPHS_HCCPARAMS register */
#define UHPHS_HCCPARAMS_PFLF_Pos              _UINT32_(1)                                          /* (UHPHS_HCCPARAMS) Programmable Frame List Flag Position */
#define UHPHS_HCCPARAMS_PFLF_Msk              (_UINT32_(0x1) << UHPHS_HCCPARAMS_PFLF_Pos)          /* (UHPHS_HCCPARAMS) Programmable Frame List Flag Mask */
#define UHPHS_HCCPARAMS_PFLF(value)           (UHPHS_HCCPARAMS_PFLF_Msk & (_UINT32_(value) << UHPHS_HCCPARAMS_PFLF_Pos)) /* Assignment of value for PFLF in the UHPHS_HCCPARAMS register */
#define UHPHS_HCCPARAMS_ASPC_Pos              _UINT32_(2)                                          /* (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Position */
#define UHPHS_HCCPARAMS_ASPC_Msk              (_UINT32_(0x1) << UHPHS_HCCPARAMS_ASPC_Pos)          /* (UHPHS_HCCPARAMS) Asynchronous Schedule Park Capability Mask */
#define UHPHS_HCCPARAMS_ASPC(value)           (UHPHS_HCCPARAMS_ASPC_Msk & (_UINT32_(value) << UHPHS_HCCPARAMS_ASPC_Pos)) /* Assignment of value for ASPC in the UHPHS_HCCPARAMS register */
#define UHPHS_HCCPARAMS_IST_Pos               _UINT32_(4)                                          /* (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Position */
#define UHPHS_HCCPARAMS_IST_Msk               (_UINT32_(0xF) << UHPHS_HCCPARAMS_IST_Pos)           /* (UHPHS_HCCPARAMS) Isochronous Scheduling Threshold Mask */
#define UHPHS_HCCPARAMS_IST(value)            (UHPHS_HCCPARAMS_IST_Msk & (_UINT32_(value) << UHPHS_HCCPARAMS_IST_Pos)) /* Assignment of value for IST in the UHPHS_HCCPARAMS register */
#define UHPHS_HCCPARAMS_EECP_Pos              _UINT32_(8)                                          /* (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Position */
#define UHPHS_HCCPARAMS_EECP_Msk              (_UINT32_(0xFF) << UHPHS_HCCPARAMS_EECP_Pos)         /* (UHPHS_HCCPARAMS) EHCI Extended Capabilities Pointer Mask */
#define UHPHS_HCCPARAMS_EECP(value)           (UHPHS_HCCPARAMS_EECP_Msk & (_UINT32_(value) << UHPHS_HCCPARAMS_EECP_Pos)) /* Assignment of value for EECP in the UHPHS_HCCPARAMS register */
#define UHPHS_HCCPARAMS_Msk                   _UINT32_(0x0000FFF7)                                 /* (UHPHS_HCCPARAMS) Register Mask  */


/* -------- UHPHS_USBCMD : (UHPHS Offset: 0x10) (R/W 32) UHPHS USB Command Register -------- */
#define UHPHS_USBCMD_RS_Pos                   _UINT32_(0)                                          /* (UHPHS_USBCMD) Run/Stop (read/write) Position */
#define UHPHS_USBCMD_RS_Msk                   (_UINT32_(0x1) << UHPHS_USBCMD_RS_Pos)               /* (UHPHS_USBCMD) Run/Stop (read/write) Mask */
#define UHPHS_USBCMD_RS(value)                (UHPHS_USBCMD_RS_Msk & (_UINT32_(value) << UHPHS_USBCMD_RS_Pos)) /* Assignment of value for RS in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_HCRESET_Pos              _UINT32_(1)                                          /* (UHPHS_USBCMD) Host Controller Reset (read/write) Position */
#define UHPHS_USBCMD_HCRESET_Msk              (_UINT32_(0x1) << UHPHS_USBCMD_HCRESET_Pos)          /* (UHPHS_USBCMD) Host Controller Reset (read/write) Mask */
#define UHPHS_USBCMD_HCRESET(value)           (UHPHS_USBCMD_HCRESET_Msk & (_UINT32_(value) << UHPHS_USBCMD_HCRESET_Pos)) /* Assignment of value for HCRESET in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_FLS_Pos                  _UINT32_(2)                                          /* (UHPHS_USBCMD) Frame List Size (read/write or read-only) Position */
#define UHPHS_USBCMD_FLS_Msk                  (_UINT32_(0x3) << UHPHS_USBCMD_FLS_Pos)              /* (UHPHS_USBCMD) Frame List Size (read/write or read-only) Mask */
#define UHPHS_USBCMD_FLS(value)               (UHPHS_USBCMD_FLS_Msk & (_UINT32_(value) << UHPHS_USBCMD_FLS_Pos)) /* Assignment of value for FLS in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_PSE_Pos                  _UINT32_(4)                                          /* (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_PSE_Msk                  (_UINT32_(0x1) << UHPHS_USBCMD_PSE_Pos)              /* (UHPHS_USBCMD) Periodic Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_PSE(value)               (UHPHS_USBCMD_PSE_Msk & (_UINT32_(value) << UHPHS_USBCMD_PSE_Pos)) /* Assignment of value for PSE in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_ASE_Pos                  _UINT32_(5)                                          /* (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Position */
#define UHPHS_USBCMD_ASE_Msk                  (_UINT32_(0x1) << UHPHS_USBCMD_ASE_Pos)              /* (UHPHS_USBCMD) Asynchronous Schedule Enable (read/write) Mask */
#define UHPHS_USBCMD_ASE(value)               (UHPHS_USBCMD_ASE_Msk & (_UINT32_(value) << UHPHS_USBCMD_ASE_Pos)) /* Assignment of value for ASE in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_IAAD_Pos                 _UINT32_(6)                                          /* (UHPHS_USBCMD) Interrupt on Async Advance Doorbell (read/write) Position */
#define UHPHS_USBCMD_IAAD_Msk                 (_UINT32_(0x1) << UHPHS_USBCMD_IAAD_Pos)             /* (UHPHS_USBCMD) Interrupt on Async Advance Doorbell (read/write) Mask */
#define UHPHS_USBCMD_IAAD(value)              (UHPHS_USBCMD_IAAD_Msk & (_UINT32_(value) << UHPHS_USBCMD_IAAD_Pos)) /* Assignment of value for IAAD in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_LHCR_Pos                 _UINT32_(7)                                          /* (UHPHS_USBCMD) Light Host Controller Reset (optional) (read/write) Position */
#define UHPHS_USBCMD_LHCR_Msk                 (_UINT32_(0x1) << UHPHS_USBCMD_LHCR_Pos)             /* (UHPHS_USBCMD) Light Host Controller Reset (optional) (read/write) Mask */
#define UHPHS_USBCMD_LHCR(value)              (UHPHS_USBCMD_LHCR_Msk & (_UINT32_(value) << UHPHS_USBCMD_LHCR_Pos)) /* Assignment of value for LHCR in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_ASPMC_Pos                _UINT32_(8)                                          /* (UHPHS_USBCMD) Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) Position */
#define UHPHS_USBCMD_ASPMC_Msk                (_UINT32_(0x3) << UHPHS_USBCMD_ASPMC_Pos)            /* (UHPHS_USBCMD) Asynchronous Schedule Park Mode Count (optional) (read/write or read-only) Mask */
#define UHPHS_USBCMD_ASPMC(value)             (UHPHS_USBCMD_ASPMC_Msk & (_UINT32_(value) << UHPHS_USBCMD_ASPMC_Pos)) /* Assignment of value for ASPMC in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_ASPME_Pos                _UINT32_(11)                                         /* (UHPHS_USBCMD) Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) Position */
#define UHPHS_USBCMD_ASPME_Msk                (_UINT32_(0x1) << UHPHS_USBCMD_ASPME_Pos)            /* (UHPHS_USBCMD) Asynchronous Schedule Park Mode Enable (optional) (read/write or read-only) Mask */
#define UHPHS_USBCMD_ASPME(value)             (UHPHS_USBCMD_ASPME_Msk & (_UINT32_(value) << UHPHS_USBCMD_ASPME_Pos)) /* Assignment of value for ASPME in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_ITC_Pos                  _UINT32_(16)                                         /* (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Position */
#define UHPHS_USBCMD_ITC_Msk                  (_UINT32_(0xFF) << UHPHS_USBCMD_ITC_Pos)             /* (UHPHS_USBCMD) Interrupt Threshold Control (read/write) Mask */
#define UHPHS_USBCMD_ITC(value)               (UHPHS_USBCMD_ITC_Msk & (_UINT32_(value) << UHPHS_USBCMD_ITC_Pos)) /* Assignment of value for ITC in the UHPHS_USBCMD register */
#define UHPHS_USBCMD_Msk                      _UINT32_(0x00FF0BFF)                                 /* (UHPHS_USBCMD) Register Mask  */


/* -------- UHPHS_USBSTS : (UHPHS Offset: 0x14) (R/W 32) UHPHS USB Status Register -------- */
#define UHPHS_USBSTS_USBINT_Pos               _UINT32_(0)                                          /* (UHPHS_USBSTS) USB Interrupt (read/write clear) Position */
#define UHPHS_USBSTS_USBINT_Msk               (_UINT32_(0x1) << UHPHS_USBSTS_USBINT_Pos)           /* (UHPHS_USBSTS) USB Interrupt (read/write clear) Mask */
#define UHPHS_USBSTS_USBINT(value)            (UHPHS_USBSTS_USBINT_Msk & (_UINT32_(value) << UHPHS_USBSTS_USBINT_Pos)) /* Assignment of value for USBINT in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_USBERRINT_Pos            _UINT32_(1)                                          /* (UHPHS_USBSTS) USB Error Interrupt (read/write clear) Position */
#define UHPHS_USBSTS_USBERRINT_Msk            (_UINT32_(0x1) << UHPHS_USBSTS_USBERRINT_Pos)        /* (UHPHS_USBSTS) USB Error Interrupt (read/write clear) Mask */
#define UHPHS_USBSTS_USBERRINT(value)         (UHPHS_USBSTS_USBERRINT_Msk & (_UINT32_(value) << UHPHS_USBSTS_USBERRINT_Pos)) /* Assignment of value for USBERRINT in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_PCD_Pos                  _UINT32_(2)                                          /* (UHPHS_USBSTS) Port Change Detect (read/write clear) Position */
#define UHPHS_USBSTS_PCD_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_PCD_Pos)              /* (UHPHS_USBSTS) Port Change Detect (read/write clear) Mask */
#define UHPHS_USBSTS_PCD(value)               (UHPHS_USBSTS_PCD_Msk & (_UINT32_(value) << UHPHS_USBSTS_PCD_Pos)) /* Assignment of value for PCD in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_FLR_Pos                  _UINT32_(3)                                          /* (UHPHS_USBSTS) Frame List Rollover (read/write clear) Position */
#define UHPHS_USBSTS_FLR_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_FLR_Pos)              /* (UHPHS_USBSTS) Frame List Rollover (read/write clear) Mask */
#define UHPHS_USBSTS_FLR(value)               (UHPHS_USBSTS_FLR_Msk & (_UINT32_(value) << UHPHS_USBSTS_FLR_Pos)) /* Assignment of value for FLR in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_HSE_Pos                  _UINT32_(4)                                          /* (UHPHS_USBSTS) Host System Error (read/write clear) Position */
#define UHPHS_USBSTS_HSE_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_HSE_Pos)              /* (UHPHS_USBSTS) Host System Error (read/write clear) Mask */
#define UHPHS_USBSTS_HSE(value)               (UHPHS_USBSTS_HSE_Msk & (_UINT32_(value) << UHPHS_USBSTS_HSE_Pos)) /* Assignment of value for HSE in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_IAA_Pos                  _UINT32_(5)                                          /* (UHPHS_USBSTS) Interrupt on Async Advance (read/write clear) Position */
#define UHPHS_USBSTS_IAA_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_IAA_Pos)              /* (UHPHS_USBSTS) Interrupt on Async Advance (read/write clear) Mask */
#define UHPHS_USBSTS_IAA(value)               (UHPHS_USBSTS_IAA_Msk & (_UINT32_(value) << UHPHS_USBSTS_IAA_Pos)) /* Assignment of value for IAA in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_HCHLT_Pos                _UINT32_(12)                                         /* (UHPHS_USBSTS) HCHalted (read-only) Position */
#define UHPHS_USBSTS_HCHLT_Msk                (_UINT32_(0x1) << UHPHS_USBSTS_HCHLT_Pos)            /* (UHPHS_USBSTS) HCHalted (read-only) Mask */
#define UHPHS_USBSTS_HCHLT(value)             (UHPHS_USBSTS_HCHLT_Msk & (_UINT32_(value) << UHPHS_USBSTS_HCHLT_Pos)) /* Assignment of value for HCHLT in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_RCM_Pos                  _UINT32_(13)                                         /* (UHPHS_USBSTS) Reclamation (read-only) Position */
#define UHPHS_USBSTS_RCM_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_RCM_Pos)              /* (UHPHS_USBSTS) Reclamation (read-only) Mask */
#define UHPHS_USBSTS_RCM(value)               (UHPHS_USBSTS_RCM_Msk & (_UINT32_(value) << UHPHS_USBSTS_RCM_Pos)) /* Assignment of value for RCM in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_PSS_Pos                  _UINT32_(14)                                         /* (UHPHS_USBSTS) Periodic Schedule Status (read-only) Position */
#define UHPHS_USBSTS_PSS_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_PSS_Pos)              /* (UHPHS_USBSTS) Periodic Schedule Status (read-only) Mask */
#define UHPHS_USBSTS_PSS(value)               (UHPHS_USBSTS_PSS_Msk & (_UINT32_(value) << UHPHS_USBSTS_PSS_Pos)) /* Assignment of value for PSS in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_ASS_Pos                  _UINT32_(15)                                         /* (UHPHS_USBSTS) Asynchronous Schedule Status (read-only) Position */
#define UHPHS_USBSTS_ASS_Msk                  (_UINT32_(0x1) << UHPHS_USBSTS_ASS_Pos)              /* (UHPHS_USBSTS) Asynchronous Schedule Status (read-only) Mask */
#define UHPHS_USBSTS_ASS(value)               (UHPHS_USBSTS_ASS_Msk & (_UINT32_(value) << UHPHS_USBSTS_ASS_Pos)) /* Assignment of value for ASS in the UHPHS_USBSTS register */
#define UHPHS_USBSTS_Msk                      _UINT32_(0x0000F03F)                                 /* (UHPHS_USBSTS) Register Mask  */


/* -------- UHPHS_USBINTR : (UHPHS Offset: 0x18) (R/W 32) UHPHS USB Interrupt Enable Register -------- */
#define UHPHS_USBINTR_USBIE_Pos               _UINT32_(0)                                          /* (UHPHS_USBINTR) USB Interrupt Enable Position */
#define UHPHS_USBINTR_USBIE_Msk               (_UINT32_(0x1) << UHPHS_USBINTR_USBIE_Pos)           /* (UHPHS_USBINTR) USB Interrupt Enable Mask */
#define UHPHS_USBINTR_USBIE(value)            (UHPHS_USBINTR_USBIE_Msk & (_UINT32_(value) << UHPHS_USBINTR_USBIE_Pos)) /* Assignment of value for USBIE in the UHPHS_USBINTR register */
#define UHPHS_USBINTR_USBEIE_Pos              _UINT32_(1)                                          /* (UHPHS_USBINTR) USB Error Interrupt Enable Position */
#define UHPHS_USBINTR_USBEIE_Msk              (_UINT32_(0x1) << UHPHS_USBINTR_USBEIE_Pos)          /* (UHPHS_USBINTR) USB Error Interrupt Enable Mask */
#define UHPHS_USBINTR_USBEIE(value)           (UHPHS_USBINTR_USBEIE_Msk & (_UINT32_(value) << UHPHS_USBINTR_USBEIE_Pos)) /* Assignment of value for USBEIE in the UHPHS_USBINTR register */
#define UHPHS_USBINTR_PCIE_Pos                _UINT32_(2)                                          /* (UHPHS_USBINTR) Port Change Interrupt Enable Position */
#define UHPHS_USBINTR_PCIE_Msk                (_UINT32_(0x1) << UHPHS_USBINTR_PCIE_Pos)            /* (UHPHS_USBINTR) Port Change Interrupt Enable Mask */
#define UHPHS_USBINTR_PCIE(value)             (UHPHS_USBINTR_PCIE_Msk & (_UINT32_(value) << UHPHS_USBINTR_PCIE_Pos)) /* Assignment of value for PCIE in the UHPHS_USBINTR register */
#define UHPHS_USBINTR_FLRE_Pos                _UINT32_(3)                                          /* (UHPHS_USBINTR) Frame List Rollover Enable Position */
#define UHPHS_USBINTR_FLRE_Msk                (_UINT32_(0x1) << UHPHS_USBINTR_FLRE_Pos)            /* (UHPHS_USBINTR) Frame List Rollover Enable Mask */
#define UHPHS_USBINTR_FLRE(value)             (UHPHS_USBINTR_FLRE_Msk & (_UINT32_(value) << UHPHS_USBINTR_FLRE_Pos)) /* Assignment of value for FLRE in the UHPHS_USBINTR register */
#define UHPHS_USBINTR_HSEE_Pos                _UINT32_(4)                                          /* (UHPHS_USBINTR) Host System Error Enable Position */
#define UHPHS_USBINTR_HSEE_Msk                (_UINT32_(0x1) << UHPHS_USBINTR_HSEE_Pos)            /* (UHPHS_USBINTR) Host System Error Enable Mask */
#define UHPHS_USBINTR_HSEE(value)             (UHPHS_USBINTR_HSEE_Msk & (_UINT32_(value) << UHPHS_USBINTR_HSEE_Pos)) /* Assignment of value for HSEE in the UHPHS_USBINTR register */
#define UHPHS_USBINTR_IAAE_Pos                _UINT32_(5)                                          /* (UHPHS_USBINTR) Interrupt on Async Advance Enable Position */
#define UHPHS_USBINTR_IAAE_Msk                (_UINT32_(0x1) << UHPHS_USBINTR_IAAE_Pos)            /* (UHPHS_USBINTR) Interrupt on Async Advance Enable Mask */
#define UHPHS_USBINTR_IAAE(value)             (UHPHS_USBINTR_IAAE_Msk & (_UINT32_(value) << UHPHS_USBINTR_IAAE_Pos)) /* Assignment of value for IAAE in the UHPHS_USBINTR register */
#define UHPHS_USBINTR_Msk                     _UINT32_(0x0000003F)                                 /* (UHPHS_USBINTR) Register Mask  */


/* -------- UHPHS_FRINDEX : (UHPHS Offset: 0x1C) (R/W 32) UHPHS USB Frame Index Register -------- */
#define UHPHS_FRINDEX_FI_Pos                  _UINT32_(0)                                          /* (UHPHS_FRINDEX) Frame Index Position */
#define UHPHS_FRINDEX_FI_Msk                  (_UINT32_(0x3FFF) << UHPHS_FRINDEX_FI_Pos)           /* (UHPHS_FRINDEX) Frame Index Mask */
#define UHPHS_FRINDEX_FI(value)               (UHPHS_FRINDEX_FI_Msk & (_UINT32_(value) << UHPHS_FRINDEX_FI_Pos)) /* Assignment of value for FI in the UHPHS_FRINDEX register */
#define UHPHS_FRINDEX_Msk                     _UINT32_(0x00003FFF)                                 /* (UHPHS_FRINDEX) Register Mask  */


/* -------- UHPHS_PERIODICLISTBASE : (UHPHS Offset: 0x24) (R/W 32) UHPHS Periodic Frame List Base Address Register -------- */
#define UHPHS_PERIODICLISTBASE_BA_Pos         _UINT32_(12)                                         /* (UHPHS_PERIODICLISTBASE) Base Address (Low) Position */
#define UHPHS_PERIODICLISTBASE_BA_Msk         (_UINT32_(0xFFFFF) << UHPHS_PERIODICLISTBASE_BA_Pos) /* (UHPHS_PERIODICLISTBASE) Base Address (Low) Mask */
#define UHPHS_PERIODICLISTBASE_BA(value)      (UHPHS_PERIODICLISTBASE_BA_Msk & (_UINT32_(value) << UHPHS_PERIODICLISTBASE_BA_Pos)) /* Assignment of value for BA in the UHPHS_PERIODICLISTBASE register */
#define UHPHS_PERIODICLISTBASE_Msk            _UINT32_(0xFFFFF000)                                 /* (UHPHS_PERIODICLISTBASE) Register Mask  */


/* -------- UHPHS_ASYNCLISTADDR : (UHPHS Offset: 0x28) (R/W 32) UHPHS Asynchronous List Address Register -------- */
#define UHPHS_ASYNCLISTADDR_LPL_Pos           _UINT32_(5)                                          /* (UHPHS_ASYNCLISTADDR) Link Pointer Low Position */
#define UHPHS_ASYNCLISTADDR_LPL_Msk           (_UINT32_(0x7FFFFFF) << UHPHS_ASYNCLISTADDR_LPL_Pos) /* (UHPHS_ASYNCLISTADDR) Link Pointer Low Mask */
#define UHPHS_ASYNCLISTADDR_LPL(value)        (UHPHS_ASYNCLISTADDR_LPL_Msk & (_UINT32_(value) << UHPHS_ASYNCLISTADDR_LPL_Pos)) /* Assignment of value for LPL in the UHPHS_ASYNCLISTADDR register */
#define UHPHS_ASYNCLISTADDR_Msk               _UINT32_(0xFFFFFFE0)                                 /* (UHPHS_ASYNCLISTADDR) Register Mask  */


/* -------- UHPHS_CONFIGFLAG : (UHPHS Offset: 0x50) (R/W 32) UHPHS Configured Flag Register -------- */
#define UHPHS_CONFIGFLAG_CF_Pos               _UINT32_(0)                                          /* (UHPHS_CONFIGFLAG) Configure Flag (read/write) Position */
#define UHPHS_CONFIGFLAG_CF_Msk               (_UINT32_(0x1) << UHPHS_CONFIGFLAG_CF_Pos)           /* (UHPHS_CONFIGFLAG) Configure Flag (read/write) Mask */
#define UHPHS_CONFIGFLAG_CF(value)            (UHPHS_CONFIGFLAG_CF_Msk & (_UINT32_(value) << UHPHS_CONFIGFLAG_CF_Pos)) /* Assignment of value for CF in the UHPHS_CONFIGFLAG register */
#define UHPHS_CONFIGFLAG_Msk                  _UINT32_(0x00000001)                                 /* (UHPHS_CONFIGFLAG) Register Mask  */


/* -------- UHPHS_PORTSC_0 : (UHPHS Offset: 0x54) (R/W 32) UHPHS Port Status and Control Register 0 -------- */
#define UHPHS_PORTSC_0_CCS_Pos                _UINT32_(0)                                          /* (UHPHS_PORTSC_0) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_0_CCS_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_CCS_Pos)            /* (UHPHS_PORTSC_0) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_0_CCS(value)             (UHPHS_PORTSC_0_CCS_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_CCS_Pos)) /* Assignment of value for CCS in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_CSC_Pos                _UINT32_(1)                                          /* (UHPHS_PORTSC_0) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_0_CSC_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_CSC_Pos)            /* (UHPHS_PORTSC_0) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_CSC(value)             (UHPHS_PORTSC_0_CSC_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_CSC_Pos)) /* Assignment of value for CSC in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PED_Pos                _UINT32_(2)                                          /* (UHPHS_PORTSC_0) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_0_PED_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_PED_Pos)            /* (UHPHS_PORTSC_0) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_0_PED(value)             (UHPHS_PORTSC_0_PED_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PED_Pos)) /* Assignment of value for PED in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PEDC_Pos               _UINT32_(3)                                          /* (UHPHS_PORTSC_0) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_0_PEDC_Msk               (_UINT32_(0x1) << UHPHS_PORTSC_0_PEDC_Pos)           /* (UHPHS_PORTSC_0) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_PEDC(value)            (UHPHS_PORTSC_0_PEDC_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PEDC_Pos)) /* Assignment of value for PEDC in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_OCA_Pos                _UINT32_(4)                                          /* (UHPHS_PORTSC_0) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_0_OCA_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_OCA_Pos)            /* (UHPHS_PORTSC_0) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_0_OCA(value)             (UHPHS_PORTSC_0_OCA_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_OCA_Pos)) /* Assignment of value for OCA in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_OCC_Pos                _UINT32_(5)                                          /* (UHPHS_PORTSC_0) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_0_OCC_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_OCC_Pos)            /* (UHPHS_PORTSC_0) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_0_OCC(value)             (UHPHS_PORTSC_0_OCC_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_OCC_Pos)) /* Assignment of value for OCC in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_FPR_Pos                _UINT32_(6)                                          /* (UHPHS_PORTSC_0) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_0_FPR_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_FPR_Pos)            /* (UHPHS_PORTSC_0) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_0_FPR(value)             (UHPHS_PORTSC_0_FPR_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_FPR_Pos)) /* Assignment of value for FPR in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_SUS_Pos                _UINT32_(7)                                          /* (UHPHS_PORTSC_0) Suspend (read/write) Position */
#define UHPHS_PORTSC_0_SUS_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_0_SUS_Pos)            /* (UHPHS_PORTSC_0) Suspend (read/write) Mask */
#define UHPHS_PORTSC_0_SUS(value)             (UHPHS_PORTSC_0_SUS_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_SUS_Pos)) /* Assignment of value for SUS in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PR_Pos                 _UINT32_(8)                                          /* (UHPHS_PORTSC_0) Port Reset (read/write) Position */
#define UHPHS_PORTSC_0_PR_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_0_PR_Pos)             /* (UHPHS_PORTSC_0) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_0_PR(value)              (UHPHS_PORTSC_0_PR_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PR_Pos)) /* Assignment of value for PR in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_LS_Pos                 _UINT32_(10)                                         /* (UHPHS_PORTSC_0) Line Status (read-only) Position */
#define UHPHS_PORTSC_0_LS_Msk                 (_UINT32_(0x3) << UHPHS_PORTSC_0_LS_Pos)             /* (UHPHS_PORTSC_0) Line Status (read-only) Mask */
#define UHPHS_PORTSC_0_LS(value)              (UHPHS_PORTSC_0_LS_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_LS_Pos)) /* Assignment of value for LS in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PP_Pos                 _UINT32_(12)                                         /* (UHPHS_PORTSC_0) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_0_PP_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_0_PP_Pos)             /* (UHPHS_PORTSC_0) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_0_PP(value)              (UHPHS_PORTSC_0_PP_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PP_Pos)) /* Assignment of value for PP in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PO_Pos                 _UINT32_(13)                                         /* (UHPHS_PORTSC_0) Port Owner (read/write) Position */
#define UHPHS_PORTSC_0_PO_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_0_PO_Pos)             /* (UHPHS_PORTSC_0) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_0_PO(value)              (UHPHS_PORTSC_0_PO_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PO_Pos)) /* Assignment of value for PO in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PIC_Pos                _UINT32_(14)                                         /* (UHPHS_PORTSC_0) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_0_PIC_Msk                (_UINT32_(0x3) << UHPHS_PORTSC_0_PIC_Pos)            /* (UHPHS_PORTSC_0) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_0_PIC(value)             (UHPHS_PORTSC_0_PIC_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PIC_Pos)) /* Assignment of value for PIC in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_PTC_Pos                _UINT32_(16)                                         /* (UHPHS_PORTSC_0) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_0_PTC_Msk                (_UINT32_(0xF) << UHPHS_PORTSC_0_PTC_Pos)            /* (UHPHS_PORTSC_0) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_0_PTC(value)             (UHPHS_PORTSC_0_PTC_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_PTC_Pos)) /* Assignment of value for PTC in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_WKCNNT_E_Pos           _UINT32_(20)                                         /* (UHPHS_PORTSC_0) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKCNNT_E_Msk           (_UINT32_(0x1) << UHPHS_PORTSC_0_WKCNNT_E_Pos)       /* (UHPHS_PORTSC_0) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKCNNT_E(value)        (UHPHS_PORTSC_0_WKCNNT_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_WKCNNT_E_Pos)) /* Assignment of value for WKCNNT_E in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_WKDSCNNT_E_Pos         _UINT32_(21)                                         /* (UHPHS_PORTSC_0) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKDSCNNT_E_Msk         (_UINT32_(0x1) << UHPHS_PORTSC_0_WKDSCNNT_E_Pos)     /* (UHPHS_PORTSC_0) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKDSCNNT_E(value)      (UHPHS_PORTSC_0_WKDSCNNT_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_WKDSCNNT_E_Pos)) /* Assignment of value for WKDSCNNT_E in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_WKOC_E_Pos             _UINT32_(22)                                         /* (UHPHS_PORTSC_0) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_0_WKOC_E_Msk             (_UINT32_(0x1) << UHPHS_PORTSC_0_WKOC_E_Pos)         /* (UHPHS_PORTSC_0) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_0_WKOC_E(value)          (UHPHS_PORTSC_0_WKOC_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_0_WKOC_E_Pos)) /* Assignment of value for WKOC_E in the UHPHS_PORTSC_0 register */
#define UHPHS_PORTSC_0_Msk                    _UINT32_(0x007FFDFF)                                 /* (UHPHS_PORTSC_0) Register Mask  */


/* -------- UHPHS_PORTSC_1 : (UHPHS Offset: 0x58) (R/W 32) UHPHS Port Status and Control Register 1 -------- */
#define UHPHS_PORTSC_1_CCS_Pos                _UINT32_(0)                                          /* (UHPHS_PORTSC_1) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_1_CCS_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_CCS_Pos)            /* (UHPHS_PORTSC_1) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_1_CCS(value)             (UHPHS_PORTSC_1_CCS_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_CCS_Pos)) /* Assignment of value for CCS in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_CSC_Pos                _UINT32_(1)                                          /* (UHPHS_PORTSC_1) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_1_CSC_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_CSC_Pos)            /* (UHPHS_PORTSC_1) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_CSC(value)             (UHPHS_PORTSC_1_CSC_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_CSC_Pos)) /* Assignment of value for CSC in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PED_Pos                _UINT32_(2)                                          /* (UHPHS_PORTSC_1) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_1_PED_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_PED_Pos)            /* (UHPHS_PORTSC_1) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_1_PED(value)             (UHPHS_PORTSC_1_PED_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PED_Pos)) /* Assignment of value for PED in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PEDC_Pos               _UINT32_(3)                                          /* (UHPHS_PORTSC_1) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_1_PEDC_Msk               (_UINT32_(0x1) << UHPHS_PORTSC_1_PEDC_Pos)           /* (UHPHS_PORTSC_1) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_PEDC(value)            (UHPHS_PORTSC_1_PEDC_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PEDC_Pos)) /* Assignment of value for PEDC in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_OCA_Pos                _UINT32_(4)                                          /* (UHPHS_PORTSC_1) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_1_OCA_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_OCA_Pos)            /* (UHPHS_PORTSC_1) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_1_OCA(value)             (UHPHS_PORTSC_1_OCA_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_OCA_Pos)) /* Assignment of value for OCA in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_OCC_Pos                _UINT32_(5)                                          /* (UHPHS_PORTSC_1) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_1_OCC_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_OCC_Pos)            /* (UHPHS_PORTSC_1) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_1_OCC(value)             (UHPHS_PORTSC_1_OCC_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_OCC_Pos)) /* Assignment of value for OCC in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_FPR_Pos                _UINT32_(6)                                          /* (UHPHS_PORTSC_1) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_1_FPR_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_FPR_Pos)            /* (UHPHS_PORTSC_1) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_1_FPR(value)             (UHPHS_PORTSC_1_FPR_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_FPR_Pos)) /* Assignment of value for FPR in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_SUS_Pos                _UINT32_(7)                                          /* (UHPHS_PORTSC_1) Suspend (read/write) Position */
#define UHPHS_PORTSC_1_SUS_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_1_SUS_Pos)            /* (UHPHS_PORTSC_1) Suspend (read/write) Mask */
#define UHPHS_PORTSC_1_SUS(value)             (UHPHS_PORTSC_1_SUS_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_SUS_Pos)) /* Assignment of value for SUS in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PR_Pos                 _UINT32_(8)                                          /* (UHPHS_PORTSC_1) Port Reset (read/write) Position */
#define UHPHS_PORTSC_1_PR_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_1_PR_Pos)             /* (UHPHS_PORTSC_1) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_1_PR(value)              (UHPHS_PORTSC_1_PR_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PR_Pos)) /* Assignment of value for PR in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_LS_Pos                 _UINT32_(10)                                         /* (UHPHS_PORTSC_1) Line Status (read-only) Position */
#define UHPHS_PORTSC_1_LS_Msk                 (_UINT32_(0x3) << UHPHS_PORTSC_1_LS_Pos)             /* (UHPHS_PORTSC_1) Line Status (read-only) Mask */
#define UHPHS_PORTSC_1_LS(value)              (UHPHS_PORTSC_1_LS_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_LS_Pos)) /* Assignment of value for LS in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PP_Pos                 _UINT32_(12)                                         /* (UHPHS_PORTSC_1) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_1_PP_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_1_PP_Pos)             /* (UHPHS_PORTSC_1) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_1_PP(value)              (UHPHS_PORTSC_1_PP_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PP_Pos)) /* Assignment of value for PP in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PO_Pos                 _UINT32_(13)                                         /* (UHPHS_PORTSC_1) Port Owner (read/write) Position */
#define UHPHS_PORTSC_1_PO_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_1_PO_Pos)             /* (UHPHS_PORTSC_1) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_1_PO(value)              (UHPHS_PORTSC_1_PO_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PO_Pos)) /* Assignment of value for PO in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PIC_Pos                _UINT32_(14)                                         /* (UHPHS_PORTSC_1) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_1_PIC_Msk                (_UINT32_(0x3) << UHPHS_PORTSC_1_PIC_Pos)            /* (UHPHS_PORTSC_1) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_1_PIC(value)             (UHPHS_PORTSC_1_PIC_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PIC_Pos)) /* Assignment of value for PIC in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_PTC_Pos                _UINT32_(16)                                         /* (UHPHS_PORTSC_1) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_1_PTC_Msk                (_UINT32_(0xF) << UHPHS_PORTSC_1_PTC_Pos)            /* (UHPHS_PORTSC_1) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_1_PTC(value)             (UHPHS_PORTSC_1_PTC_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_PTC_Pos)) /* Assignment of value for PTC in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_WKCNNT_E_Pos           _UINT32_(20)                                         /* (UHPHS_PORTSC_1) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKCNNT_E_Msk           (_UINT32_(0x1) << UHPHS_PORTSC_1_WKCNNT_E_Pos)       /* (UHPHS_PORTSC_1) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKCNNT_E(value)        (UHPHS_PORTSC_1_WKCNNT_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_WKCNNT_E_Pos)) /* Assignment of value for WKCNNT_E in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_WKDSCNNT_E_Pos         _UINT32_(21)                                         /* (UHPHS_PORTSC_1) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKDSCNNT_E_Msk         (_UINT32_(0x1) << UHPHS_PORTSC_1_WKDSCNNT_E_Pos)     /* (UHPHS_PORTSC_1) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKDSCNNT_E(value)      (UHPHS_PORTSC_1_WKDSCNNT_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_WKDSCNNT_E_Pos)) /* Assignment of value for WKDSCNNT_E in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_WKOC_E_Pos             _UINT32_(22)                                         /* (UHPHS_PORTSC_1) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_1_WKOC_E_Msk             (_UINT32_(0x1) << UHPHS_PORTSC_1_WKOC_E_Pos)         /* (UHPHS_PORTSC_1) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_1_WKOC_E(value)          (UHPHS_PORTSC_1_WKOC_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_1_WKOC_E_Pos)) /* Assignment of value for WKOC_E in the UHPHS_PORTSC_1 register */
#define UHPHS_PORTSC_1_Msk                    _UINT32_(0x007FFDFF)                                 /* (UHPHS_PORTSC_1) Register Mask  */


/* -------- UHPHS_PORTSC_2 : (UHPHS Offset: 0x5C) (R/W 32) UHPHS Port Status and Control Register 2 -------- */
#define UHPHS_PORTSC_2_CCS_Pos                _UINT32_(0)                                          /* (UHPHS_PORTSC_2) Current Connect Status (read-only) Position */
#define UHPHS_PORTSC_2_CCS_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_CCS_Pos)            /* (UHPHS_PORTSC_2) Current Connect Status (read-only) Mask */
#define UHPHS_PORTSC_2_CCS(value)             (UHPHS_PORTSC_2_CCS_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_CCS_Pos)) /* Assignment of value for CCS in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_CSC_Pos                _UINT32_(1)                                          /* (UHPHS_PORTSC_2) Connect Status Change (read/write clear) Position */
#define UHPHS_PORTSC_2_CSC_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_CSC_Pos)            /* (UHPHS_PORTSC_2) Connect Status Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_CSC(value)             (UHPHS_PORTSC_2_CSC_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_CSC_Pos)) /* Assignment of value for CSC in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PED_Pos                _UINT32_(2)                                          /* (UHPHS_PORTSC_2) Port Enabled/Disabled (read/write) Position */
#define UHPHS_PORTSC_2_PED_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_PED_Pos)            /* (UHPHS_PORTSC_2) Port Enabled/Disabled (read/write) Mask */
#define UHPHS_PORTSC_2_PED(value)             (UHPHS_PORTSC_2_PED_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PED_Pos)) /* Assignment of value for PED in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PEDC_Pos               _UINT32_(3)                                          /* (UHPHS_PORTSC_2) Port Enable/Disable Change (read/write clear) Position */
#define UHPHS_PORTSC_2_PEDC_Msk               (_UINT32_(0x1) << UHPHS_PORTSC_2_PEDC_Pos)           /* (UHPHS_PORTSC_2) Port Enable/Disable Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_PEDC(value)            (UHPHS_PORTSC_2_PEDC_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PEDC_Pos)) /* Assignment of value for PEDC in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_OCA_Pos                _UINT32_(4)                                          /* (UHPHS_PORTSC_2) Over-current Active (read-only) Position */
#define UHPHS_PORTSC_2_OCA_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_OCA_Pos)            /* (UHPHS_PORTSC_2) Over-current Active (read-only) Mask */
#define UHPHS_PORTSC_2_OCA(value)             (UHPHS_PORTSC_2_OCA_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_OCA_Pos)) /* Assignment of value for OCA in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_OCC_Pos                _UINT32_(5)                                          /* (UHPHS_PORTSC_2) Over-current Change (read/write clear) Position */
#define UHPHS_PORTSC_2_OCC_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_OCC_Pos)            /* (UHPHS_PORTSC_2) Over-current Change (read/write clear) Mask */
#define UHPHS_PORTSC_2_OCC(value)             (UHPHS_PORTSC_2_OCC_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_OCC_Pos)) /* Assignment of value for OCC in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_FPR_Pos                _UINT32_(6)                                          /* (UHPHS_PORTSC_2) Force Port Resume (read/write) Position */
#define UHPHS_PORTSC_2_FPR_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_FPR_Pos)            /* (UHPHS_PORTSC_2) Force Port Resume (read/write) Mask */
#define UHPHS_PORTSC_2_FPR(value)             (UHPHS_PORTSC_2_FPR_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_FPR_Pos)) /* Assignment of value for FPR in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_SUS_Pos                _UINT32_(7)                                          /* (UHPHS_PORTSC_2) Suspend (read/write) Position */
#define UHPHS_PORTSC_2_SUS_Msk                (_UINT32_(0x1) << UHPHS_PORTSC_2_SUS_Pos)            /* (UHPHS_PORTSC_2) Suspend (read/write) Mask */
#define UHPHS_PORTSC_2_SUS(value)             (UHPHS_PORTSC_2_SUS_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_SUS_Pos)) /* Assignment of value for SUS in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PR_Pos                 _UINT32_(8)                                          /* (UHPHS_PORTSC_2) Port Reset (read/write) Position */
#define UHPHS_PORTSC_2_PR_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_2_PR_Pos)             /* (UHPHS_PORTSC_2) Port Reset (read/write) Mask */
#define UHPHS_PORTSC_2_PR(value)              (UHPHS_PORTSC_2_PR_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PR_Pos)) /* Assignment of value for PR in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_LS_Pos                 _UINT32_(10)                                         /* (UHPHS_PORTSC_2) Line Status (read-only) Position */
#define UHPHS_PORTSC_2_LS_Msk                 (_UINT32_(0x3) << UHPHS_PORTSC_2_LS_Pos)             /* (UHPHS_PORTSC_2) Line Status (read-only) Mask */
#define UHPHS_PORTSC_2_LS(value)              (UHPHS_PORTSC_2_LS_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_LS_Pos)) /* Assignment of value for LS in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PP_Pos                 _UINT32_(12)                                         /* (UHPHS_PORTSC_2) Port Power (read/write or read-only) Position */
#define UHPHS_PORTSC_2_PP_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_2_PP_Pos)             /* (UHPHS_PORTSC_2) Port Power (read/write or read-only) Mask */
#define UHPHS_PORTSC_2_PP(value)              (UHPHS_PORTSC_2_PP_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PP_Pos)) /* Assignment of value for PP in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PO_Pos                 _UINT32_(13)                                         /* (UHPHS_PORTSC_2) Port Owner (read/write) Position */
#define UHPHS_PORTSC_2_PO_Msk                 (_UINT32_(0x1) << UHPHS_PORTSC_2_PO_Pos)             /* (UHPHS_PORTSC_2) Port Owner (read/write) Mask */
#define UHPHS_PORTSC_2_PO(value)              (UHPHS_PORTSC_2_PO_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PO_Pos)) /* Assignment of value for PO in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PIC_Pos                _UINT32_(14)                                         /* (UHPHS_PORTSC_2) Port Indicator Control (read/write) Position */
#define UHPHS_PORTSC_2_PIC_Msk                (_UINT32_(0x3) << UHPHS_PORTSC_2_PIC_Pos)            /* (UHPHS_PORTSC_2) Port Indicator Control (read/write) Mask */
#define UHPHS_PORTSC_2_PIC(value)             (UHPHS_PORTSC_2_PIC_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PIC_Pos)) /* Assignment of value for PIC in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_PTC_Pos                _UINT32_(16)                                         /* (UHPHS_PORTSC_2) Port Test Control (read/write) Position */
#define UHPHS_PORTSC_2_PTC_Msk                (_UINT32_(0xF) << UHPHS_PORTSC_2_PTC_Pos)            /* (UHPHS_PORTSC_2) Port Test Control (read/write) Mask */
#define UHPHS_PORTSC_2_PTC(value)             (UHPHS_PORTSC_2_PTC_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_PTC_Pos)) /* Assignment of value for PTC in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_WKCNNT_E_Pos           _UINT32_(20)                                         /* (UHPHS_PORTSC_2) Wake on Connect Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKCNNT_E_Msk           (_UINT32_(0x1) << UHPHS_PORTSC_2_WKCNNT_E_Pos)       /* (UHPHS_PORTSC_2) Wake on Connect Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKCNNT_E(value)        (UHPHS_PORTSC_2_WKCNNT_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_WKCNNT_E_Pos)) /* Assignment of value for WKCNNT_E in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_WKDSCNNT_E_Pos         _UINT32_(21)                                         /* (UHPHS_PORTSC_2) Wake on Disconnect Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKDSCNNT_E_Msk         (_UINT32_(0x1) << UHPHS_PORTSC_2_WKDSCNNT_E_Pos)     /* (UHPHS_PORTSC_2) Wake on Disconnect Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKDSCNNT_E(value)      (UHPHS_PORTSC_2_WKDSCNNT_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_WKDSCNNT_E_Pos)) /* Assignment of value for WKDSCNNT_E in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_WKOC_E_Pos             _UINT32_(22)                                         /* (UHPHS_PORTSC_2) Wake on Over-current Enable (read/write) Position */
#define UHPHS_PORTSC_2_WKOC_E_Msk             (_UINT32_(0x1) << UHPHS_PORTSC_2_WKOC_E_Pos)         /* (UHPHS_PORTSC_2) Wake on Over-current Enable (read/write) Mask */
#define UHPHS_PORTSC_2_WKOC_E(value)          (UHPHS_PORTSC_2_WKOC_E_Msk & (_UINT32_(value) << UHPHS_PORTSC_2_WKOC_E_Pos)) /* Assignment of value for WKOC_E in the UHPHS_PORTSC_2 register */
#define UHPHS_PORTSC_2_Msk                    _UINT32_(0x007FFDFF)                                 /* (UHPHS_PORTSC_2) Register Mask  */


/* -------- UHPHS_INSNREG06 : (UHPHS Offset: 0xA8) (R/W 32) EHCI Synopsys-Specific Registers 06 -------- */
#define UHPHS_INSNREG06_Nb_Success_Burst_Pos  _UINT32_(0)                                          /* (UHPHS_INSNREG06) Number of Successful Bursts (read-only)(1) Position */
#define UHPHS_INSNREG06_Nb_Success_Burst_Msk  (_UINT32_(0xF) << UHPHS_INSNREG06_Nb_Success_Burst_Pos) /* (UHPHS_INSNREG06) Number of Successful Bursts (read-only)(1) Mask */
#define UHPHS_INSNREG06_Nb_Success_Burst(value) (UHPHS_INSNREG06_Nb_Success_Burst_Msk & (_UINT32_(value) << UHPHS_INSNREG06_Nb_Success_Burst_Pos)) /* Assignment of value for Nb_Success_Burst in the UHPHS_INSNREG06 register */
#define UHPHS_INSNREG06_Nb_Burst_Pos          _UINT32_(4)                                          /* (UHPHS_INSNREG06) Number of Bursts (read-only)(1) Position */
#define UHPHS_INSNREG06_Nb_Burst_Msk          (_UINT32_(0x1F) << UHPHS_INSNREG06_Nb_Burst_Pos)     /* (UHPHS_INSNREG06) Number of Bursts (read-only)(1) Mask */
#define UHPHS_INSNREG06_Nb_Burst(value)       (UHPHS_INSNREG06_Nb_Burst_Msk & (_UINT32_(value) << UHPHS_INSNREG06_Nb_Burst_Pos)) /* Assignment of value for Nb_Burst in the UHPHS_INSNREG06 register */
#define UHPHS_INSNREG06_HBURST_Pos            _UINT32_(9)                                          /* (UHPHS_INSNREG06) Burst Value (read-only)(1) Position */
#define UHPHS_INSNREG06_HBURST_Msk            (_UINT32_(0x7) << UHPHS_INSNREG06_HBURST_Pos)        /* (UHPHS_INSNREG06) Burst Value (read-only)(1) Mask */
#define UHPHS_INSNREG06_HBURST(value)         (UHPHS_INSNREG06_HBURST_Msk & (_UINT32_(value) << UHPHS_INSNREG06_HBURST_Pos)) /* Assignment of value for HBURST in the UHPHS_INSNREG06 register */
#define UHPHS_INSNREG06_AHB_ERR_Pos           _UINT32_(31)                                         /* (UHPHS_INSNREG06) AHB Error Position */
#define UHPHS_INSNREG06_AHB_ERR_Msk           (_UINT32_(0x1) << UHPHS_INSNREG06_AHB_ERR_Pos)       /* (UHPHS_INSNREG06) AHB Error Mask */
#define UHPHS_INSNREG06_AHB_ERR(value)        (UHPHS_INSNREG06_AHB_ERR_Msk & (_UINT32_(value) << UHPHS_INSNREG06_AHB_ERR_Pos)) /* Assignment of value for AHB_ERR in the UHPHS_INSNREG06 register */
#define UHPHS_INSNREG06_Msk                   _UINT32_(0x80000FFF)                                 /* (UHPHS_INSNREG06) Register Mask  */


/* -------- UHPHS_INSNREG07 : (UHPHS Offset: 0xAC) (R/W 32) EHCI Synopsys-Specific Registers 07 -------- */
#define UHPHS_INSNREG07_AHB_ADDR_Pos          _UINT32_(0)                                          /* (UHPHS_INSNREG07) AHB Address (read only) Position */
#define UHPHS_INSNREG07_AHB_ADDR_Msk          (_UINT32_(0xFFFFFFFF) << UHPHS_INSNREG07_AHB_ADDR_Pos) /* (UHPHS_INSNREG07) AHB Address (read only) Mask */
#define UHPHS_INSNREG07_AHB_ADDR(value)       (UHPHS_INSNREG07_AHB_ADDR_Msk & (_UINT32_(value) << UHPHS_INSNREG07_AHB_ADDR_Pos)) /* Assignment of value for AHB_ADDR in the UHPHS_INSNREG07 register */
#define UHPHS_INSNREG07_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (UHPHS_INSNREG07) Register Mask  */


/* -------- UHPHS_INSNREG08 : (UHPHS Offset: 0xB0) (R/W 32) EHCI Synopsys-Specific Registers 08 -------- */
#define UHPHS_INSNREG08_HSIC_EN_Pos           _UINT32_(2)                                          /* (UHPHS_INSNREG08) HSIC Enable/Disable Position */
#define UHPHS_INSNREG08_HSIC_EN_Msk           (_UINT32_(0x1) << UHPHS_INSNREG08_HSIC_EN_Pos)       /* (UHPHS_INSNREG08) HSIC Enable/Disable Mask */
#define UHPHS_INSNREG08_HSIC_EN(value)        (UHPHS_INSNREG08_HSIC_EN_Msk & (_UINT32_(value) << UHPHS_INSNREG08_HSIC_EN_Pos)) /* Assignment of value for HSIC_EN in the UHPHS_INSNREG08 register */
#define UHPHS_INSNREG08_Msk                   _UINT32_(0x00000004)                                 /* (UHPHS_INSNREG08) Register Mask  */


/* UHPHS register offsets definitions */
#define UHPHS_HCCAPBASE_REG_OFST       _UINT32_(0x00)      /* (UHPHS_HCCAPBASE) UHPHS Host Controller Capability Register Offset */
#define UHPHS_HCSPARAMS_REG_OFST       _UINT32_(0x04)      /* (UHPHS_HCSPARAMS) UHPHS Host Controller Structural Parameters Register Offset */
#define UHPHS_HCCPARAMS_REG_OFST       _UINT32_(0x08)      /* (UHPHS_HCCPARAMS) UHPHS Host Controller Capability Parameters Register Offset */
#define UHPHS_USBCMD_REG_OFST          _UINT32_(0x10)      /* (UHPHS_USBCMD) UHPHS USB Command Register Offset */
#define UHPHS_USBSTS_REG_OFST          _UINT32_(0x14)      /* (UHPHS_USBSTS) UHPHS USB Status Register Offset */
#define UHPHS_USBINTR_REG_OFST         _UINT32_(0x18)      /* (UHPHS_USBINTR) UHPHS USB Interrupt Enable Register Offset */
#define UHPHS_FRINDEX_REG_OFST         _UINT32_(0x1C)      /* (UHPHS_FRINDEX) UHPHS USB Frame Index Register Offset */
#define UHPHS_PERIODICLISTBASE_REG_OFST _UINT32_(0x24)      /* (UHPHS_PERIODICLISTBASE) UHPHS Periodic Frame List Base Address Register Offset */
#define UHPHS_ASYNCLISTADDR_REG_OFST   _UINT32_(0x28)      /* (UHPHS_ASYNCLISTADDR) UHPHS Asynchronous List Address Register Offset */
#define UHPHS_CONFIGFLAG_REG_OFST      _UINT32_(0x50)      /* (UHPHS_CONFIGFLAG) UHPHS Configured Flag Register Offset */
#define UHPHS_PORTSC_0_REG_OFST        _UINT32_(0x54)      /* (UHPHS_PORTSC_0) UHPHS Port Status and Control Register 0 Offset */
#define UHPHS_PORTSC_1_REG_OFST        _UINT32_(0x58)      /* (UHPHS_PORTSC_1) UHPHS Port Status and Control Register 1 Offset */
#define UHPHS_PORTSC_2_REG_OFST        _UINT32_(0x5C)      /* (UHPHS_PORTSC_2) UHPHS Port Status and Control Register 2 Offset */
#define UHPHS_INSNREG06_REG_OFST       _UINT32_(0xA8)      /* (UHPHS_INSNREG06) EHCI Synopsys-Specific Registers 06 Offset */
#define UHPHS_INSNREG07_REG_OFST       _UINT32_(0xAC)      /* (UHPHS_INSNREG07) EHCI Synopsys-Specific Registers 07 Offset */
#define UHPHS_INSNREG08_REG_OFST       _UINT32_(0xB0)      /* (UHPHS_INSNREG08) EHCI Synopsys-Specific Registers 08 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* UHPHS register API structure */
typedef struct
{
  __I   uint32_t                       UHPHS_HCCAPBASE;    /* Offset: 0x00 (R/   32) UHPHS Host Controller Capability Register */
  __I   uint32_t                       UHPHS_HCSPARAMS;    /* Offset: 0x04 (R/   32) UHPHS Host Controller Structural Parameters Register */
  __I   uint32_t                       UHPHS_HCCPARAMS;    /* Offset: 0x08 (R/   32) UHPHS Host Controller Capability Parameters Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       UHPHS_USBCMD;       /* Offset: 0x10 (R/W  32) UHPHS USB Command Register */
  __IO  uint32_t                       UHPHS_USBSTS;       /* Offset: 0x14 (R/W  32) UHPHS USB Status Register */
  __IO  uint32_t                       UHPHS_USBINTR;      /* Offset: 0x18 (R/W  32) UHPHS USB Interrupt Enable Register */
  __IO  uint32_t                       UHPHS_FRINDEX;      /* Offset: 0x1C (R/W  32) UHPHS USB Frame Index Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       UHPHS_PERIODICLISTBASE; /* Offset: 0x24 (R/W  32) UHPHS Periodic Frame List Base Address Register */
  __IO  uint32_t                       UHPHS_ASYNCLISTADDR; /* Offset: 0x28 (R/W  32) UHPHS Asynchronous List Address Register */
  __I   uint8_t                        Reserved3[0x24];
  __IO  uint32_t                       UHPHS_CONFIGFLAG;   /* Offset: 0x50 (R/W  32) UHPHS Configured Flag Register */
  __IO  uint32_t                       UHPHS_PORTSC_0;     /* Offset: 0x54 (R/W  32) UHPHS Port Status and Control Register 0 */
  __IO  uint32_t                       UHPHS_PORTSC_1;     /* Offset: 0x58 (R/W  32) UHPHS Port Status and Control Register 1 */
  __IO  uint32_t                       UHPHS_PORTSC_2;     /* Offset: 0x5C (R/W  32) UHPHS Port Status and Control Register 2 */
  __I   uint8_t                        Reserved4[0x48];
  __IO  uint32_t                       UHPHS_INSNREG06;    /* Offset: 0xA8 (R/W  32) EHCI Synopsys-Specific Registers 06 */
  __IO  uint32_t                       UHPHS_INSNREG07;    /* Offset: 0xAC (R/W  32) EHCI Synopsys-Specific Registers 07 */
  __IO  uint32_t                       UHPHS_INSNREG08;    /* Offset: 0xB0 (R/W  32) EHCI Synopsys-Specific Registers 08 */
} uhphs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_UHPHS_COMPONENT_H_ */
