/*
 * Component description for DSU
 *
 * Copyright (c) 2026 Microchip Technology Inc. and its subsidiaries.
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _PIC32CMPL10_DSU_COMPONENT_H_
#define _PIC32CMPL10_DSU_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR DSU                       */
/* ************************************************************************** */

/* -------- DSU_CTRLB : (DSU Offset: 0x04) (R/W 32) Control B -------- */
#define DSU_CTRLB_RESETVALUE                  _UINT32_(0x04)                                       /*  (DSU_CTRLB) Control B  Reset Value */

#define DSU_CTRLB_DCCDMALVL0_Pos              _UINT32_(0)                                          /* (DSU_CTRLB) DMA Trigger 0 Level Position */
#define DSU_CTRLB_DCCDMALVL0_Msk              (_UINT32_(0x1) << DSU_CTRLB_DCCDMALVL0_Pos)          /* (DSU_CTRLB) DMA Trigger 0 Level Mask */
#define DSU_CTRLB_DCCDMALVL0(value)           (DSU_CTRLB_DCCDMALVL0_Msk & (_UINT32_(value) << DSU_CTRLB_DCCDMALVL0_Pos)) /* Assignment of value for DCCDMALVL0 in the DSU_CTRLB register */
#define   DSU_CTRLB_DCCDMALVL0_EMPTY_Val      _UINT32_(0x0)                                        /* (DSU_CTRLB) Trigger n rises when DCCn is read and falls when it is written  */
#define   DSU_CTRLB_DCCDMALVL0_FULL_Val       _UINT32_(0x1)                                        /* (DSU_CTRLB) Trigger n rises when DCCn is written and falls when it is read  */
#define DSU_CTRLB_DCCDMALVL0_EMPTY            (DSU_CTRLB_DCCDMALVL0_EMPTY_Val << DSU_CTRLB_DCCDMALVL0_Pos) /* (DSU_CTRLB) Trigger n rises when DCCn is read and falls when it is written Position */
#define DSU_CTRLB_DCCDMALVL0_FULL             (DSU_CTRLB_DCCDMALVL0_FULL_Val << DSU_CTRLB_DCCDMALVL0_Pos) /* (DSU_CTRLB) Trigger n rises when DCCn is written and falls when it is read Position */
#define DSU_CTRLB_DCCDMALVL1_Pos              _UINT32_(1)                                          /* (DSU_CTRLB) DMA Trigger 1 Level Position */
#define DSU_CTRLB_DCCDMALVL1_Msk              (_UINT32_(0x1) << DSU_CTRLB_DCCDMALVL1_Pos)          /* (DSU_CTRLB) DMA Trigger 1 Level Mask */
#define DSU_CTRLB_DCCDMALVL1(value)           (DSU_CTRLB_DCCDMALVL1_Msk & (_UINT32_(value) << DSU_CTRLB_DCCDMALVL1_Pos)) /* Assignment of value for DCCDMALVL1 in the DSU_CTRLB register */
#define   DSU_CTRLB_DCCDMALVL1_EMPTY_Val      _UINT32_(0x0)                                        /* (DSU_CTRLB) Trigger n rises when DCCn is read and falls when it is written  */
#define   DSU_CTRLB_DCCDMALVL1_FULL_Val       _UINT32_(0x1)                                        /* (DSU_CTRLB) Trigger n rises when DCCn is written and falls when it is read  */
#define DSU_CTRLB_DCCDMALVL1_EMPTY            (DSU_CTRLB_DCCDMALVL1_EMPTY_Val << DSU_CTRLB_DCCDMALVL1_Pos) /* (DSU_CTRLB) Trigger n rises when DCCn is read and falls when it is written Position */
#define DSU_CTRLB_DCCDMALVL1_FULL             (DSU_CTRLB_DCCDMALVL1_FULL_Val << DSU_CTRLB_DCCDMALVL1_Pos) /* (DSU_CTRLB) Trigger n rises when DCCn is written and falls when it is read Position */
#define DSU_CTRLB_QOS_Pos                     _UINT32_(2)                                          /* (DSU_CTRLB) DSU QoS Level Position */
#define DSU_CTRLB_QOS_Msk                     (_UINT32_(0x3) << DSU_CTRLB_QOS_Pos)                 /* (DSU_CTRLB) DSU QoS Level Mask */
#define DSU_CTRLB_QOS(value)                  (DSU_CTRLB_QOS_Msk & (_UINT32_(value) << DSU_CTRLB_QOS_Pos)) /* Assignment of value for QOS in the DSU_CTRLB register */
#define   DSU_CTRLB_QOS_DISABLE_Val           _UINT32_(0x0)                                        /* (DSU_CTRLB) Background (no sensitive operation)  */
#define   DSU_CTRLB_QOS_LOW_Val               _UINT32_(0x1)                                        /* (DSU_CTRLB) Sensitive bandwidth  */
#define   DSU_CTRLB_QOS_MEDIUM_Val            _UINT32_(0x2)                                        /* (DSU_CTRLB) Sensitive latency  */
#define   DSU_CTRLB_QOS_HIGH_Val              _UINT32_(0x3)                                        /* (DSU_CTRLB) Critical latency  */
#define DSU_CTRLB_QOS_DISABLE                 (DSU_CTRLB_QOS_DISABLE_Val << DSU_CTRLB_QOS_Pos)     /* (DSU_CTRLB) Background (no sensitive operation) Position */
#define DSU_CTRLB_QOS_LOW                     (DSU_CTRLB_QOS_LOW_Val << DSU_CTRLB_QOS_Pos)         /* (DSU_CTRLB) Sensitive bandwidth Position */
#define DSU_CTRLB_QOS_MEDIUM                  (DSU_CTRLB_QOS_MEDIUM_Val << DSU_CTRLB_QOS_Pos)      /* (DSU_CTRLB) Sensitive latency Position */
#define DSU_CTRLB_QOS_HIGH                    (DSU_CTRLB_QOS_HIGH_Val << DSU_CTRLB_QOS_Pos)        /* (DSU_CTRLB) Critical latency Position */
#define DSU_CTRLB_Msk                         _UINT32_(0x0000000F)                                 /* (DSU_CTRLB) Register Mask  */

#define DSU_CTRLB_DCCDMALVL_Pos               _UINT32_(0)                                          /* (DSU_CTRLB Position) DMA Trigger x Level */
#define DSU_CTRLB_DCCDMALVL_Msk               (_UINT32_(0x3) << DSU_CTRLB_DCCDMALVL_Pos)           /* (DSU_CTRLB Mask) DCCDMALVL */
#define DSU_CTRLB_DCCDMALVL(value)            (DSU_CTRLB_DCCDMALVL_Msk & (_UINT32_(value) << DSU_CTRLB_DCCDMALVL_Pos)) 

/* -------- DSU_WPCTRL : (DSU Offset: 0x08) (R/W 32) Write Protection Control -------- */
#define DSU_WPCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (DSU_WPCTRL) Write Protection Control  Reset Value */

#define DSU_WPCTRL_WPEN_Pos                   _UINT32_(0)                                          /* (DSU_WPCTRL) Write Protection Enable Position */
#define DSU_WPCTRL_WPEN_Msk                   (_UINT32_(0x1) << DSU_WPCTRL_WPEN_Pos)               /* (DSU_WPCTRL) Write Protection Enable Mask */
#define DSU_WPCTRL_WPEN(value)                (DSU_WPCTRL_WPEN_Msk & (_UINT32_(value) << DSU_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the DSU_WPCTRL register */
#define DSU_WPCTRL_WPLCK_Pos                  _UINT32_(1)                                          /* (DSU_WPCTRL) Write Protection Lock Position */
#define DSU_WPCTRL_WPLCK_Msk                  (_UINT32_(0x1) << DSU_WPCTRL_WPLCK_Pos)              /* (DSU_WPCTRL) Write Protection Lock Mask */
#define DSU_WPCTRL_WPLCK(value)               (DSU_WPCTRL_WPLCK_Msk & (_UINT32_(value) << DSU_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the DSU_WPCTRL register */
#define DSU_WPCTRL_WPKEY_Pos                  _UINT32_(8)                                          /* (DSU_WPCTRL) Write Protection Key Position */
#define DSU_WPCTRL_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << DSU_WPCTRL_WPKEY_Pos)         /* (DSU_WPCTRL) Write Protection Key Mask */
#define DSU_WPCTRL_WPKEY(value)               (DSU_WPCTRL_WPKEY_Msk & (_UINT32_(value) << DSU_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the DSU_WPCTRL register */
#define   DSU_WPCTRL_WPKEY_KEY_Val            _UINT32_(0x445355)                                   /* (DSU_WPCTRL) Allow writes to the WPCTRL register  */
#define DSU_WPCTRL_WPKEY_KEY                  (DSU_WPCTRL_WPKEY_KEY_Val << DSU_WPCTRL_WPKEY_Pos)   /* (DSU_WPCTRL) Allow writes to the WPCTRL register Position */
#define DSU_WPCTRL_Msk                        _UINT32_(0xFFFFFF03)                                 /* (DSU_WPCTRL) Register Mask  */


/* -------- DSU_CTRLC : (DSU Offset: 0x100) (R/W 32) Control C -------- */
#define DSU_CTRLC_RESETVALUE                  _UINT32_(0x00)                                       /*  (DSU_CTRLC) Control C  Reset Value */

#define DSU_CTRLC_DBGRW0_Pos                  _UINT32_(0)                                          /* (DSU_CTRLC) CPU0 Debug R/W Position */
#define DSU_CTRLC_DBGRW0_Msk                  (_UINT32_(0x1) << DSU_CTRLC_DBGRW0_Pos)              /* (DSU_CTRLC) CPU0 Debug R/W Mask */
#define DSU_CTRLC_DBGRW0(value)               (DSU_CTRLC_DBGRW0_Msk & (_UINT32_(value) << DSU_CTRLC_DBGRW0_Pos)) /* Assignment of value for DBGRW0 in the DSU_CTRLC register */
#define DSU_CTRLC_Msk                         _UINT32_(0x00000001)                                 /* (DSU_CTRLC) Register Mask  */

#define DSU_CTRLC_DBGRW_Pos                   _UINT32_(0)                                          /* (DSU_CTRLC Position) CPUx Debug R/W */
#define DSU_CTRLC_DBGRW_Msk                   (_UINT32_(0x1) << DSU_CTRLC_DBGRW_Pos)               /* (DSU_CTRLC Mask) DBGRW */
#define DSU_CTRLC_DBGRW(value)                (DSU_CTRLC_DBGRW_Msk & (_UINT32_(value) << DSU_CTRLC_DBGRW_Pos)) 

/* -------- DSU_STATUSA : (DSU Offset: 0x104) ( R/ 32) Status A -------- */
#define DSU_STATUSA_RESETVALUE                _UINT32_(0x00)                                       /*  (DSU_STATUSA) Status A  Reset Value */

#define DSU_STATUSA_DONE_Pos                  _UINT32_(0)                                          /* (DSU_STATUSA) Done Status Position */
#define DSU_STATUSA_DONE_Msk                  (_UINT32_(0x1) << DSU_STATUSA_DONE_Pos)              /* (DSU_STATUSA) Done Status Mask */
#define DSU_STATUSA_DONE(value)               (DSU_STATUSA_DONE_Msk & (_UINT32_(value) << DSU_STATUSA_DONE_Pos)) /* Assignment of value for DONE in the DSU_STATUSA register */
#define DSU_STATUSA_CRSTEXT0_Pos              _UINT32_(8)                                          /* (DSU_STATUSA) CPU0 Reset Extension Status Position */
#define DSU_STATUSA_CRSTEXT0_Msk              (_UINT32_(0x1) << DSU_STATUSA_CRSTEXT0_Pos)          /* (DSU_STATUSA) CPU0 Reset Extension Status Mask */
#define DSU_STATUSA_CRSTEXT0(value)           (DSU_STATUSA_CRSTEXT0_Msk & (_UINT32_(value) << DSU_STATUSA_CRSTEXT0_Pos)) /* Assignment of value for CRSTEXT0 in the DSU_STATUSA register */
#define DSU_STATUSA_BREXT0_Pos                _UINT32_(16)                                         /* (DSU_STATUSA) Boot ROM 0 Phase Extension Status Position */
#define DSU_STATUSA_BREXT0_Msk                (_UINT32_(0x1) << DSU_STATUSA_BREXT0_Pos)            /* (DSU_STATUSA) Boot ROM 0 Phase Extension Status Mask */
#define DSU_STATUSA_BREXT0(value)             (DSU_STATUSA_BREXT0_Msk & (_UINT32_(value) << DSU_STATUSA_BREXT0_Pos)) /* Assignment of value for BREXT0 in the DSU_STATUSA register */
#define DSU_STATUSA_Msk                       _UINT32_(0x00010101)                                 /* (DSU_STATUSA) Register Mask  */

#define DSU_STATUSA_CRSTEXT_Pos               _UINT32_(8)                                          /* (DSU_STATUSA Position) CPUx Reset Extension Status */
#define DSU_STATUSA_CRSTEXT_Msk               (_UINT32_(0x1) << DSU_STATUSA_CRSTEXT_Pos)           /* (DSU_STATUSA Mask) CRSTEXT */
#define DSU_STATUSA_CRSTEXT(value)            (DSU_STATUSA_CRSTEXT_Msk & (_UINT32_(value) << DSU_STATUSA_CRSTEXT_Pos)) 
#define DSU_STATUSA_BREXT_Pos                 _UINT32_(16)                                         /* (DSU_STATUSA Position) Boot ROM x Phase Extension Status */
#define DSU_STATUSA_BREXT_Msk                 (_UINT32_(0x1) << DSU_STATUSA_BREXT_Pos)             /* (DSU_STATUSA Mask) BREXT */
#define DSU_STATUSA_BREXT(value)              (DSU_STATUSA_BREXT_Msk & (_UINT32_(value) << DSU_STATUSA_BREXT_Pos)) 

/* -------- DSU_STATUSB : (DSU Offset: 0x108) ( R/ 32) Status B -------- */
#define DSU_STATUSB_RESETVALUE                _UINT32_(0x00)                                       /*  (DSU_STATUSB) Status B  Reset Value */

#define DSU_STATUSB_BCCD0_Pos                 _UINT32_(0)                                          /* (DSU_STATUSB) Boot ROM Communication Channel 0 Dirty Position */
#define DSU_STATUSB_BCCD0_Msk                 (_UINT32_(0x1) << DSU_STATUSB_BCCD0_Pos)             /* (DSU_STATUSB) Boot ROM Communication Channel 0 Dirty Mask */
#define DSU_STATUSB_BCCD0(value)              (DSU_STATUSB_BCCD0_Msk & (_UINT32_(value) << DSU_STATUSB_BCCD0_Pos)) /* Assignment of value for BCCD0 in the DSU_STATUSB register */
#define DSU_STATUSB_BCCD1_Pos                 _UINT32_(1)                                          /* (DSU_STATUSB) Boot ROM Communication Channel 1 Dirty Position */
#define DSU_STATUSB_BCCD1_Msk                 (_UINT32_(0x1) << DSU_STATUSB_BCCD1_Pos)             /* (DSU_STATUSB) Boot ROM Communication Channel 1 Dirty Mask */
#define DSU_STATUSB_BCCD1(value)              (DSU_STATUSB_BCCD1_Msk & (_UINT32_(value) << DSU_STATUSB_BCCD1_Pos)) /* Assignment of value for BCCD1 in the DSU_STATUSB register */
#define DSU_STATUSB_DCCD0_Pos                 _UINT32_(2)                                          /* (DSU_STATUSB) Debug Communication Channel 0 Dirty Position */
#define DSU_STATUSB_DCCD0_Msk                 (_UINT32_(0x1) << DSU_STATUSB_DCCD0_Pos)             /* (DSU_STATUSB) Debug Communication Channel 0 Dirty Mask */
#define DSU_STATUSB_DCCD0(value)              (DSU_STATUSB_DCCD0_Msk & (_UINT32_(value) << DSU_STATUSB_DCCD0_Pos)) /* Assignment of value for DCCD0 in the DSU_STATUSB register */
#define DSU_STATUSB_DCCD1_Pos                 _UINT32_(3)                                          /* (DSU_STATUSB) Debug Communication Channel 1 Dirty Position */
#define DSU_STATUSB_DCCD1_Msk                 (_UINT32_(0x1) << DSU_STATUSB_DCCD1_Pos)             /* (DSU_STATUSB) Debug Communication Channel 1 Dirty Mask */
#define DSU_STATUSB_DCCD1(value)              (DSU_STATUSB_DCCD1_Msk & (_UINT32_(value) << DSU_STATUSB_DCCD1_Pos)) /* Assignment of value for DCCD1 in the DSU_STATUSB register */
#define DSU_STATUSB_DBGPRES_Pos               _UINT32_(8)                                          /* (DSU_STATUSB) Debugger Present Status Position */
#define DSU_STATUSB_DBGPRES_Msk               (_UINT32_(0x1) << DSU_STATUSB_DBGPRES_Pos)           /* (DSU_STATUSB) Debugger Present Status Mask */
#define DSU_STATUSB_DBGPRES(value)            (DSU_STATUSB_DBGPRES_Msk & (_UINT32_(value) << DSU_STATUSB_DBGPRES_Pos)) /* Assignment of value for DBGPRES in the DSU_STATUSB register */
#define DSU_STATUSB_HPS_Pos                   _UINT32_(10)                                         /* (DSU_STATUSB) Hot-plugging Status Position */
#define DSU_STATUSB_HPS_Msk                   (_UINT32_(0x1) << DSU_STATUSB_HPS_Pos)               /* (DSU_STATUSB) Hot-plugging Status Mask */
#define DSU_STATUSB_HPS(value)                (DSU_STATUSB_HPS_Msk & (_UINT32_(value) << DSU_STATUSB_HPS_Pos)) /* Assignment of value for HPS in the DSU_STATUSB register */
#define DSU_STATUSB_Msk                       _UINT32_(0x0000050F)                                 /* (DSU_STATUSB) Register Mask  */

#define DSU_STATUSB_BCCD_Pos                  _UINT32_(0)                                          /* (DSU_STATUSB Position) Boot ROM Communication Channel x Dirty */
#define DSU_STATUSB_BCCD_Msk                  (_UINT32_(0x3) << DSU_STATUSB_BCCD_Pos)              /* (DSU_STATUSB Mask) BCCD */
#define DSU_STATUSB_BCCD(value)               (DSU_STATUSB_BCCD_Msk & (_UINT32_(value) << DSU_STATUSB_BCCD_Pos)) 
#define DSU_STATUSB_DCCD_Pos                  _UINT32_(2)                                          /* (DSU_STATUSB Position) Debug Communication Channel x Dirty */
#define DSU_STATUSB_DCCD_Msk                  (_UINT32_(0x3) << DSU_STATUSB_DCCD_Pos)              /* (DSU_STATUSB Mask) DCCD */
#define DSU_STATUSB_DCCD(value)               (DSU_STATUSB_DCCD_Msk & (_UINT32_(value) << DSU_STATUSB_DCCD_Pos)) 

/* -------- DSU_BCC : (DSU Offset: 0x110) (R/W 32) Boot ROM Channel # -------- */
#define DSU_BCC_DATA_Pos                      _UINT32_(0)                                          /* (DSU_BCC) Data Position */
#define DSU_BCC_DATA_Msk                      (_UINT32_(0xFFFFFFFF) << DSU_BCC_DATA_Pos)           /* (DSU_BCC) Data Mask */
#define DSU_BCC_DATA(value)                   (DSU_BCC_DATA_Msk & (_UINT32_(value) << DSU_BCC_DATA_Pos)) /* Assignment of value for DATA in the DSU_BCC register */
#define DSU_BCC_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (DSU_BCC) Register Mask  */


/* -------- DSU_DCC : (DSU Offset: 0x118) (R/W 32) Debug Communication Channel # -------- */
#define DSU_DCC_DATA_Pos                      _UINT32_(0)                                          /* (DSU_DCC) Data Position */
#define DSU_DCC_DATA_Msk                      (_UINT32_(0xFFFFFFFF) << DSU_DCC_DATA_Pos)           /* (DSU_DCC) Data Mask */
#define DSU_DCC_DATA(value)                   (DSU_DCC_DATA_Msk & (_UINT32_(value) << DSU_DCC_DATA_Pos)) /* Assignment of value for DATA in the DSU_DCC register */
#define DSU_DCC_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (DSU_DCC) Register Mask  */


/* -------- DSU_DID : (DSU Offset: 0x120) ( R/ 32) Device Identification -------- */
#define DSU_DID_RESETVALUE                    _UINT32_(0xBA03053)                                  /*  (DSU_DID) Device Identification  Reset Value */

#define DSU_DID_FV_Pos                        _UINT32_(0)                                          /* (DSU_DID) Fixed Value of 1 Position */
#define DSU_DID_FV_Msk                        (_UINT32_(0x1) << DSU_DID_FV_Pos)                    /* (DSU_DID) Fixed Value of 1 Mask */
#define DSU_DID_FV(value)                     (DSU_DID_FV_Msk & (_UINT32_(value) << DSU_DID_FV_Pos)) /* Assignment of value for FV in the DSU_DID register */
#define DSU_DID_MANID_Pos                     _UINT32_(1)                                          /* (DSU_DID) JEDEC Manufacture ID Position */
#define DSU_DID_MANID_Msk                     (_UINT32_(0x7FF) << DSU_DID_MANID_Pos)               /* (DSU_DID) JEDEC Manufacture ID Mask */
#define DSU_DID_MANID(value)                  (DSU_DID_MANID_Msk & (_UINT32_(value) << DSU_DID_MANID_Pos)) /* Assignment of value for MANID in the DSU_DID register */
#define DSU_DID_PNDID_Pos                     _UINT32_(12)                                         /* (DSU_DID) Part Number Device ID Position */
#define DSU_DID_PNDID_Msk                     (_UINT32_(0xFF) << DSU_DID_PNDID_Pos)                /* (DSU_DID) Part Number Device ID Mask */
#define DSU_DID_PNDID(value)                  (DSU_DID_PNDID_Msk & (_UINT32_(value) << DSU_DID_PNDID_Pos)) /* Assignment of value for PNDID in the DSU_DID register */
#define DSU_DID_PNMID_Pos                     _UINT32_(20)                                         /* (DSU_DID) Part Number Mask ID Position */
#define DSU_DID_PNMID_Msk                     (_UINT32_(0xFF) << DSU_DID_PNMID_Pos)                /* (DSU_DID) Part Number Mask ID Mask */
#define DSU_DID_PNMID(value)                  (DSU_DID_PNMID_Msk & (_UINT32_(value) << DSU_DID_PNMID_Pos)) /* Assignment of value for PNMID in the DSU_DID register */
#define DSU_DID_VER_Pos                       _UINT32_(28)                                         /* (DSU_DID) Version Code Position */
#define DSU_DID_VER_Msk                       (_UINT32_(0xF) << DSU_DID_VER_Pos)                   /* (DSU_DID) Version Code Mask */
#define DSU_DID_VER(value)                    (DSU_DID_VER_Msk & (_UINT32_(value) << DSU_DID_VER_Pos)) /* Assignment of value for VER in the DSU_DID register */
#define DSU_DID_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (DSU_DID) Register Mask  */


/* -------- DSU_DAL : (DSU Offset: 0x124) ( R/ 32) Debugger Access Level -------- */
#define DSU_DAL_CPU0_Pos                      _UINT32_(0)                                          /* (DSU_DAL) CPU 0 Debugger Access Level Position */
#define DSU_DAL_CPU0_Msk                      (_UINT32_(0x3) << DSU_DAL_CPU0_Pos)                  /* (DSU_DAL) CPU 0 Debugger Access Level Mask */
#define DSU_DAL_CPU0(value)                   (DSU_DAL_CPU0_Msk & (_UINT32_(value) << DSU_DAL_CPU0_Pos)) /* Assignment of value for CPU0 in the DSU_DAL register */
#define   DSU_DAL_CPU0_SECURED_Val            _UINT32_(0x0)                                        /* (DSU_DAL) The Debugger targeting the CPU0 domain can only access the DSU external address space; otherwise, debugger access is disabled.  */
#define   DSU_DAL_CPU0_FULL_DEBUG_Val         _UINT32_(0x2)                                        /* (DSU_DAL) The Debugger has unrestricted access  */
#define DSU_DAL_CPU0_SECURED                  (DSU_DAL_CPU0_SECURED_Val << DSU_DAL_CPU0_Pos)       /* (DSU_DAL) The Debugger targeting the CPU0 domain can only access the DSU external address space; otherwise, debugger access is disabled. Position */
#define DSU_DAL_CPU0_FULL_DEBUG               (DSU_DAL_CPU0_FULL_DEBUG_Val << DSU_DAL_CPU0_Pos)    /* (DSU_DAL) The Debugger has unrestricted access Position */
#define DSU_DAL_Msk                           _UINT32_(0x00000003)                                 /* (DSU_DAL) Register Mask  */


/* -------- DSU_ENTRY0 : (DSU Offset: 0x1000) ( R/ 32) CoreSight ROM Table Entry 0 -------- */
#define DSU_ENTRY0_EPRES_Pos                  _UINT32_(0)                                          /* (DSU_ENTRY0) CoreSight Entry Present Position */
#define DSU_ENTRY0_EPRES_Msk                  (_UINT32_(0x1) << DSU_ENTRY0_EPRES_Pos)              /* (DSU_ENTRY0) CoreSight Entry Present Mask */
#define DSU_ENTRY0_EPRES(value)               (DSU_ENTRY0_EPRES_Msk & (_UINT32_(value) << DSU_ENTRY0_EPRES_Pos)) /* Assignment of value for EPRES in the DSU_ENTRY0 register */
#define DSU_ENTRY0_FMT_Pos                    _UINT32_(1)                                          /* (DSU_ENTRY0) CoreSight Rom Table Format Position */
#define DSU_ENTRY0_FMT_Msk                    (_UINT32_(0x1) << DSU_ENTRY0_FMT_Pos)                /* (DSU_ENTRY0) CoreSight Rom Table Format Mask */
#define DSU_ENTRY0_FMT(value)                 (DSU_ENTRY0_FMT_Msk & (_UINT32_(value) << DSU_ENTRY0_FMT_Pos)) /* Assignment of value for FMT in the DSU_ENTRY0 register */
#define DSU_ENTRY0_ADDOFF_Pos                 _UINT32_(12)                                         /* (DSU_ENTRY0) CoreSight ROM Table Address Offset Position */
#define DSU_ENTRY0_ADDOFF_Msk                 (_UINT32_(0xFFFFF) << DSU_ENTRY0_ADDOFF_Pos)         /* (DSU_ENTRY0) CoreSight ROM Table Address Offset Mask */
#define DSU_ENTRY0_ADDOFF(value)              (DSU_ENTRY0_ADDOFF_Msk & (_UINT32_(value) << DSU_ENTRY0_ADDOFF_Pos)) /* Assignment of value for ADDOFF in the DSU_ENTRY0 register */
#define DSU_ENTRY0_Msk                        _UINT32_(0xFFFFF003)                                 /* (DSU_ENTRY0) Register Mask  */


/* -------- DSU_ENTRY1 : (DSU Offset: 0x1004) ( R/ 32) CoreSight ROM Table Entry 1 -------- */
#define DSU_ENTRY1_EPRES_Pos                  _UINT32_(0)                                          /* (DSU_ENTRY1) CoreSight Entry Present Position */
#define DSU_ENTRY1_EPRES_Msk                  (_UINT32_(0x1) << DSU_ENTRY1_EPRES_Pos)              /* (DSU_ENTRY1) CoreSight Entry Present Mask */
#define DSU_ENTRY1_EPRES(value)               (DSU_ENTRY1_EPRES_Msk & (_UINT32_(value) << DSU_ENTRY1_EPRES_Pos)) /* Assignment of value for EPRES in the DSU_ENTRY1 register */
#define DSU_ENTRY1_FMT_Pos                    _UINT32_(1)                                          /* (DSU_ENTRY1) CoreSight Rom Table Format Position */
#define DSU_ENTRY1_FMT_Msk                    (_UINT32_(0x1) << DSU_ENTRY1_FMT_Pos)                /* (DSU_ENTRY1) CoreSight Rom Table Format Mask */
#define DSU_ENTRY1_FMT(value)                 (DSU_ENTRY1_FMT_Msk & (_UINT32_(value) << DSU_ENTRY1_FMT_Pos)) /* Assignment of value for FMT in the DSU_ENTRY1 register */
#define DSU_ENTRY1_ADDOFF_Pos                 _UINT32_(12)                                         /* (DSU_ENTRY1) CoreSight ROM Table Address Offset Position */
#define DSU_ENTRY1_ADDOFF_Msk                 (_UINT32_(0xFFFFF) << DSU_ENTRY1_ADDOFF_Pos)         /* (DSU_ENTRY1) CoreSight ROM Table Address Offset Mask */
#define DSU_ENTRY1_ADDOFF(value)              (DSU_ENTRY1_ADDOFF_Msk & (_UINT32_(value) << DSU_ENTRY1_ADDOFF_Pos)) /* Assignment of value for ADDOFF in the DSU_ENTRY1 register */
#define DSU_ENTRY1_Msk                        _UINT32_(0xFFFFF003)                                 /* (DSU_ENTRY1) Register Mask  */


/* -------- DSU_ENTRY2 : (DSU Offset: 0x1008) ( R/ 32) CoreSight ROM Table Entry 2 -------- */
#define DSU_ENTRY2_EPRES_Pos                  _UINT32_(0)                                          /* (DSU_ENTRY2) CoreSight Entry Present Position */
#define DSU_ENTRY2_EPRES_Msk                  (_UINT32_(0x1) << DSU_ENTRY2_EPRES_Pos)              /* (DSU_ENTRY2) CoreSight Entry Present Mask */
#define DSU_ENTRY2_EPRES(value)               (DSU_ENTRY2_EPRES_Msk & (_UINT32_(value) << DSU_ENTRY2_EPRES_Pos)) /* Assignment of value for EPRES in the DSU_ENTRY2 register */
#define DSU_ENTRY2_FMT_Pos                    _UINT32_(1)                                          /* (DSU_ENTRY2) CoreSight Rom Table Format Position */
#define DSU_ENTRY2_FMT_Msk                    (_UINT32_(0x1) << DSU_ENTRY2_FMT_Pos)                /* (DSU_ENTRY2) CoreSight Rom Table Format Mask */
#define DSU_ENTRY2_FMT(value)                 (DSU_ENTRY2_FMT_Msk & (_UINT32_(value) << DSU_ENTRY2_FMT_Pos)) /* Assignment of value for FMT in the DSU_ENTRY2 register */
#define DSU_ENTRY2_ADDOFF_Pos                 _UINT32_(12)                                         /* (DSU_ENTRY2) CoreSight ROM Table Address Offset Position */
#define DSU_ENTRY2_ADDOFF_Msk                 (_UINT32_(0xFFFFF) << DSU_ENTRY2_ADDOFF_Pos)         /* (DSU_ENTRY2) CoreSight ROM Table Address Offset Mask */
#define DSU_ENTRY2_ADDOFF(value)              (DSU_ENTRY2_ADDOFF_Msk & (_UINT32_(value) << DSU_ENTRY2_ADDOFF_Pos)) /* Assignment of value for ADDOFF in the DSU_ENTRY2 register */
#define DSU_ENTRY2_Msk                        _UINT32_(0xFFFFF003)                                 /* (DSU_ENTRY2) Register Mask  */


/* -------- DSU_ENTRY3 : (DSU Offset: 0x100C) ( R/ 32) CoreSight ROM Table Entry 3 -------- */
#define DSU_ENTRY3_EPRES_Pos                  _UINT32_(0)                                          /* (DSU_ENTRY3) CoreSight Entry Present Position */
#define DSU_ENTRY3_EPRES_Msk                  (_UINT32_(0x1) << DSU_ENTRY3_EPRES_Pos)              /* (DSU_ENTRY3) CoreSight Entry Present Mask */
#define DSU_ENTRY3_EPRES(value)               (DSU_ENTRY3_EPRES_Msk & (_UINT32_(value) << DSU_ENTRY3_EPRES_Pos)) /* Assignment of value for EPRES in the DSU_ENTRY3 register */
#define DSU_ENTRY3_FMT_Pos                    _UINT32_(1)                                          /* (DSU_ENTRY3) CoreSight Rom Table Format Position */
#define DSU_ENTRY3_FMT_Msk                    (_UINT32_(0x1) << DSU_ENTRY3_FMT_Pos)                /* (DSU_ENTRY3) CoreSight Rom Table Format Mask */
#define DSU_ENTRY3_FMT(value)                 (DSU_ENTRY3_FMT_Msk & (_UINT32_(value) << DSU_ENTRY3_FMT_Pos)) /* Assignment of value for FMT in the DSU_ENTRY3 register */
#define DSU_ENTRY3_ADDOFF_Pos                 _UINT32_(12)                                         /* (DSU_ENTRY3) CoreSight ROM Table Address Offset Position */
#define DSU_ENTRY3_ADDOFF_Msk                 (_UINT32_(0xFFFFF) << DSU_ENTRY3_ADDOFF_Pos)         /* (DSU_ENTRY3) CoreSight ROM Table Address Offset Mask */
#define DSU_ENTRY3_ADDOFF(value)              (DSU_ENTRY3_ADDOFF_Msk & (_UINT32_(value) << DSU_ENTRY3_ADDOFF_Pos)) /* Assignment of value for ADDOFF in the DSU_ENTRY3 register */
#define DSU_ENTRY3_Msk                        _UINT32_(0xFFFFF003)                                 /* (DSU_ENTRY3) Register Mask  */


/* -------- DSU_MEMTYPE : (DSU Offset: 0x1FCC) ( R/ 32) CoreSight ROM Table Memory Type -------- */
#define DSU_MEMTYPE_RESETVALUE                _UINT32_(0x00)                                       /*  (DSU_MEMTYPE) CoreSight ROM Table Memory Type  Reset Value */

#define DSU_MEMTYPE_SYSMEM_Pos                _UINT32_(0)                                          /* (DSU_MEMTYPE) CoreSight System Memory Present Position */
#define DSU_MEMTYPE_SYSMEM_Msk                (_UINT32_(0x1) << DSU_MEMTYPE_SYSMEM_Pos)            /* (DSU_MEMTYPE) CoreSight System Memory Present Mask */
#define DSU_MEMTYPE_SYSMEM(value)             (DSU_MEMTYPE_SYSMEM_Msk & (_UINT32_(value) << DSU_MEMTYPE_SYSMEM_Pos)) /* Assignment of value for SYSMEM in the DSU_MEMTYPE register */
#define DSU_MEMTYPE_Msk                       _UINT32_(0x00000001)                                 /* (DSU_MEMTYPE) Register Mask  */


/* -------- DSU_PID4 : (DSU Offset: 0x1FD0) ( R/ 32) CoreSight Peripheral Identification 4 -------- */
#define DSU_PID4_RESETVALUE                   _UINT32_(0x00)                                       /*  (DSU_PID4) CoreSight Peripheral Identification 4  Reset Value */

#define DSU_PID4_DES2_Pos                     _UINT32_(0)                                          /* (DSU_PID4) CoreSight JEP-106 Continuation Code Position */
#define DSU_PID4_DES2_Msk                     (_UINT32_(0xF) << DSU_PID4_DES2_Pos)                 /* (DSU_PID4) CoreSight JEP-106 Continuation Code Mask */
#define DSU_PID4_DES2(value)                  (DSU_PID4_DES2_Msk & (_UINT32_(value) << DSU_PID4_DES2_Pos)) /* Assignment of value for DES2 in the DSU_PID4 register */
#define DSU_PID4_SIZE_Pos                     _UINT32_(4)                                          /* (DSU_PID4) CoreSight Size Position */
#define DSU_PID4_SIZE_Msk                     (_UINT32_(0xF) << DSU_PID4_SIZE_Pos)                 /* (DSU_PID4) CoreSight Size Mask */
#define DSU_PID4_SIZE(value)                  (DSU_PID4_SIZE_Msk & (_UINT32_(value) << DSU_PID4_SIZE_Pos)) /* Assignment of value for SIZE in the DSU_PID4 register */
#define DSU_PID4_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID4) Register Mask  */


/* -------- DSU_PID5 : (DSU Offset: 0x1FD4) ( R/ 32) CoreSight Peripheral Identification 5 -------- */
#define DSU_PID5_RESETVALUE                   _UINT32_(0x00)                                       /*  (DSU_PID5) CoreSight Peripheral Identification 5  Reset Value */

#define DSU_PID5_RES0_Pos                     _UINT32_(0)                                          /* (DSU_PID5) CoreSight Reserved Field Position */
#define DSU_PID5_RES0_Msk                     (_UINT32_(0xFF) << DSU_PID5_RES0_Pos)                /* (DSU_PID5) CoreSight Reserved Field Mask */
#define DSU_PID5_RES0(value)                  (DSU_PID5_RES0_Msk & (_UINT32_(value) << DSU_PID5_RES0_Pos)) /* Assignment of value for RES0 in the DSU_PID5 register */
#define DSU_PID5_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID5) Register Mask  */


/* -------- DSU_PID6 : (DSU Offset: 0x1FD8) ( R/ 32) CoreSight Peripheral Identification 6 -------- */
#define DSU_PID6_RESETVALUE                   _UINT32_(0x00)                                       /*  (DSU_PID6) CoreSight Peripheral Identification 6  Reset Value */

#define DSU_PID6_RES0_Pos                     _UINT32_(0)                                          /* (DSU_PID6) CoreSight Reserved Field Position */
#define DSU_PID6_RES0_Msk                     (_UINT32_(0xFF) << DSU_PID6_RES0_Pos)                /* (DSU_PID6) CoreSight Reserved Field Mask */
#define DSU_PID6_RES0(value)                  (DSU_PID6_RES0_Msk & (_UINT32_(value) << DSU_PID6_RES0_Pos)) /* Assignment of value for RES0 in the DSU_PID6 register */
#define DSU_PID6_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID6) Register Mask  */


/* -------- DSU_PID7 : (DSU Offset: 0x1FDC) ( R/ 32) CoreSight Peripheral Identification 7 -------- */
#define DSU_PID7_RESETVALUE                   _UINT32_(0x00)                                       /*  (DSU_PID7) CoreSight Peripheral Identification 7  Reset Value */

#define DSU_PID7_RES0_Pos                     _UINT32_(0)                                          /* (DSU_PID7) CoreSight Reserved Field Position */
#define DSU_PID7_RES0_Msk                     (_UINT32_(0xFF) << DSU_PID7_RES0_Pos)                /* (DSU_PID7) CoreSight Reserved Field Mask */
#define DSU_PID7_RES0(value)                  (DSU_PID7_RES0_Msk & (_UINT32_(value) << DSU_PID7_RES0_Pos)) /* Assignment of value for RES0 in the DSU_PID7 register */
#define DSU_PID7_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID7) Register Mask  */


/* -------- DSU_PID0 : (DSU Offset: 0x1FE0) ( R/ 32) CoreSight Peripheral Identification 0 -------- */
#define DSU_PID0_RESETVALUE                   _UINT32_(0xD0)                                       /*  (DSU_PID0) CoreSight Peripheral Identification 0  Reset Value */

#define DSU_PID0_PART0_Pos                    _UINT32_(0)                                          /* (DSU_PID0) CoreSight Part Number Bits Position */
#define DSU_PID0_PART0_Msk                    (_UINT32_(0xFF) << DSU_PID0_PART0_Pos)               /* (DSU_PID0) CoreSight Part Number Bits Mask */
#define DSU_PID0_PART0(value)                 (DSU_PID0_PART0_Msk & (_UINT32_(value) << DSU_PID0_PART0_Pos)) /* Assignment of value for PART0 in the DSU_PID0 register */
#define DSU_PID0_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID0) Register Mask  */


/* -------- DSU_PID1 : (DSU Offset: 0x1FE4) ( R/ 32) CoreSight Peripheral Identification 1 -------- */
#define DSU_PID1_RESETVALUE                   _UINT32_(0x9C)                                       /*  (DSU_PID1) CoreSight Peripheral Identification 1  Reset Value */

#define DSU_PID1_PART1_Pos                    _UINT32_(0)                                          /* (DSU_PID1) CoreSight Part Number Bits Position */
#define DSU_PID1_PART1_Msk                    (_UINT32_(0xF) << DSU_PID1_PART1_Pos)                /* (DSU_PID1) CoreSight Part Number Bits Mask */
#define DSU_PID1_PART1(value)                 (DSU_PID1_PART1_Msk & (_UINT32_(value) << DSU_PID1_PART1_Pos)) /* Assignment of value for PART1 in the DSU_PID1 register */
#define DSU_PID1_DES0_Pos                     _UINT32_(4)                                          /* (DSU_PID1) CoreSight JEP106 Identification Code Bits Position */
#define DSU_PID1_DES0_Msk                     (_UINT32_(0xF) << DSU_PID1_DES0_Pos)                 /* (DSU_PID1) CoreSight JEP106 Identification Code Bits Mask */
#define DSU_PID1_DES0(value)                  (DSU_PID1_DES0_Msk & (_UINT32_(value) << DSU_PID1_DES0_Pos)) /* Assignment of value for DES0 in the DSU_PID1 register */
#define DSU_PID1_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID1) Register Mask  */


/* -------- DSU_PID2 : (DSU Offset: 0x1FE8) ( R/ 32) CoreSight Peripheral Identification 2 -------- */
#define DSU_PID2_DES1_Pos                     _UINT32_(0)                                          /* (DSU_PID2) CoreSight JEP106 Identification Code Bits Position */
#define DSU_PID2_DES1_Msk                     (_UINT32_(0x7) << DSU_PID2_DES1_Pos)                 /* (DSU_PID2) CoreSight JEP106 Identification Code Bits Mask */
#define DSU_PID2_DES1(value)                  (DSU_PID2_DES1_Msk & (_UINT32_(value) << DSU_PID2_DES1_Pos)) /* Assignment of value for DES1 in the DSU_PID2 register */
#define DSU_PID2_JEDEC_Pos                    _UINT32_(3)                                          /* (DSU_PID2) CoreSight JEDEC Assignment Position */
#define DSU_PID2_JEDEC_Msk                    (_UINT32_(0x1) << DSU_PID2_JEDEC_Pos)                /* (DSU_PID2) CoreSight JEDEC Assignment Mask */
#define DSU_PID2_JEDEC(value)                 (DSU_PID2_JEDEC_Msk & (_UINT32_(value) << DSU_PID2_JEDEC_Pos)) /* Assignment of value for JEDEC in the DSU_PID2 register */
#define DSU_PID2_REVISION_Pos                 _UINT32_(4)                                          /* (DSU_PID2) CoreSight Revision Number Position */
#define DSU_PID2_REVISION_Msk                 (_UINT32_(0xF) << DSU_PID2_REVISION_Pos)             /* (DSU_PID2) CoreSight Revision Number Mask */
#define DSU_PID2_REVISION(value)              (DSU_PID2_REVISION_Msk & (_UINT32_(value) << DSU_PID2_REVISION_Pos)) /* Assignment of value for REVISION in the DSU_PID2 register */
#define DSU_PID2_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID2) Register Mask  */


/* -------- DSU_PID3 : (DSU Offset: 0x1FEC) ( R/ 32) CoreSight Peripheral Identification 3 -------- */
#define DSU_PID3_RESETVALUE                   _UINT32_(0x00)                                       /*  (DSU_PID3) CoreSight Peripheral Identification 3  Reset Value */

#define DSU_PID3_CMOD_Pos                     _UINT32_(0)                                          /* (DSU_PID3) CoreSight Custom Modifier 0 Position */
#define DSU_PID3_CMOD_Msk                     (_UINT32_(0xF) << DSU_PID3_CMOD_Pos)                 /* (DSU_PID3) CoreSight Custom Modifier 0 Mask */
#define DSU_PID3_CMOD(value)                  (DSU_PID3_CMOD_Msk & (_UINT32_(value) << DSU_PID3_CMOD_Pos)) /* Assignment of value for CMOD in the DSU_PID3 register */
#define DSU_PID3_REVAND_Pos                   _UINT32_(4)                                          /* (DSU_PID3) CoreSight REVAND Position */
#define DSU_PID3_REVAND_Msk                   (_UINT32_(0xF) << DSU_PID3_REVAND_Pos)               /* (DSU_PID3) CoreSight REVAND Mask */
#define DSU_PID3_REVAND(value)                (DSU_PID3_REVAND_Msk & (_UINT32_(value) << DSU_PID3_REVAND_Pos)) /* Assignment of value for REVAND in the DSU_PID3 register */
#define DSU_PID3_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_PID3) Register Mask  */


/* -------- DSU_CID0 : (DSU Offset: 0x1FF0) ( R/ 32) CoreSight Component Identification 0 -------- */
#define DSU_CID0_RESETVALUE                   _UINT32_(0x0D)                                       /*  (DSU_CID0) CoreSight Component Identification 0  Reset Value */

#define DSU_CID0_PRMBL0_Pos                   _UINT32_(0)                                          /* (DSU_CID0) CoreSight Preamble 0 Position */
#define DSU_CID0_PRMBL0_Msk                   (_UINT32_(0xFF) << DSU_CID0_PRMBL0_Pos)              /* (DSU_CID0) CoreSight Preamble 0 Mask */
#define DSU_CID0_PRMBL0(value)                (DSU_CID0_PRMBL0_Msk & (_UINT32_(value) << DSU_CID0_PRMBL0_Pos)) /* Assignment of value for PRMBL0 in the DSU_CID0 register */
#define DSU_CID0_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_CID0) Register Mask  */


/* -------- DSU_CID1 : (DSU Offset: 0x1FF4) ( R/ 32) CoreSight Component Identification 1 -------- */
#define DSU_CID1_RESETVALUE                   _UINT32_(0x10)                                       /*  (DSU_CID1) CoreSight Component Identification 1  Reset Value */

#define DSU_CID1_PRMBL1_Pos                   _UINT32_(0)                                          /* (DSU_CID1) CoreSight Preamble 1 Position */
#define DSU_CID1_PRMBL1_Msk                   (_UINT32_(0xF) << DSU_CID1_PRMBL1_Pos)               /* (DSU_CID1) CoreSight Preamble 1 Mask */
#define DSU_CID1_PRMBL1(value)                (DSU_CID1_PRMBL1_Msk & (_UINT32_(value) << DSU_CID1_PRMBL1_Pos)) /* Assignment of value for PRMBL1 in the DSU_CID1 register */
#define DSU_CID1_CCLASS_Pos                   _UINT32_(4)                                          /* (DSU_CID1) CoreSight Component Class Position */
#define DSU_CID1_CCLASS_Msk                   (_UINT32_(0xF) << DSU_CID1_CCLASS_Pos)               /* (DSU_CID1) CoreSight Component Class Mask */
#define DSU_CID1_CCLASS(value)                (DSU_CID1_CCLASS_Msk & (_UINT32_(value) << DSU_CID1_CCLASS_Pos)) /* Assignment of value for CCLASS in the DSU_CID1 register */
#define DSU_CID1_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_CID1) Register Mask  */


/* -------- DSU_CID2 : (DSU Offset: 0x1FF8) ( R/ 32) CoreSight Component Identification 2 -------- */
#define DSU_CID2_RESETVALUE                   _UINT32_(0x05)                                       /*  (DSU_CID2) CoreSight Component Identification 2  Reset Value */

#define DSU_CID2_PRMBL2_Pos                   _UINT32_(0)                                          /* (DSU_CID2) CoreSight Preamble 2 Position */
#define DSU_CID2_PRMBL2_Msk                   (_UINT32_(0xFF) << DSU_CID2_PRMBL2_Pos)              /* (DSU_CID2) CoreSight Preamble 2 Mask */
#define DSU_CID2_PRMBL2(value)                (DSU_CID2_PRMBL2_Msk & (_UINT32_(value) << DSU_CID2_PRMBL2_Pos)) /* Assignment of value for PRMBL2 in the DSU_CID2 register */
#define DSU_CID2_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_CID2) Register Mask  */


/* -------- DSU_CID3 : (DSU Offset: 0x1FFC) ( R/ 32) CoreSight Component Identification 3 -------- */
#define DSU_CID3_RESETVALUE                   _UINT32_(0xB1)                                       /*  (DSU_CID3) CoreSight Component Identification 3  Reset Value */

#define DSU_CID3_PRMBL3_Pos                   _UINT32_(0)                                          /* (DSU_CID3) CoreSight Preamble 3 Position */
#define DSU_CID3_PRMBL3_Msk                   (_UINT32_(0xFF) << DSU_CID3_PRMBL3_Pos)              /* (DSU_CID3) CoreSight Preamble 3 Mask */
#define DSU_CID3_PRMBL3(value)                (DSU_CID3_PRMBL3_Msk & (_UINT32_(value) << DSU_CID3_PRMBL3_Pos)) /* Assignment of value for PRMBL3 in the DSU_CID3 register */
#define DSU_CID3_Msk                          _UINT32_(0x000000FF)                                 /* (DSU_CID3) Register Mask  */


/* DSU register offsets definitions */
#define DSU_CTRLB_REG_OFST             _UINT32_(0x04)      /* (DSU_CTRLB) Control B Offset */
#define DSU_WPCTRL_REG_OFST            _UINT32_(0x08)      /* (DSU_WPCTRL) Write Protection Control Offset */
#define DSU_CTRLC_REG_OFST             _UINT32_(0x100)     /* (DSU_CTRLC) Control C Offset */
#define DSU_STATUSA_REG_OFST           _UINT32_(0x104)     /* (DSU_STATUSA) Status A Offset */
#define DSU_STATUSB_REG_OFST           _UINT32_(0x108)     /* (DSU_STATUSB) Status B Offset */
#define DSU_BCC_REG_OFST               _UINT32_(0x110)     /* (DSU_BCC) Boot ROM Channel # Offset */
#define DSU_BCC0_REG_OFST              _UINT32_(0x110)     /* (DSU_BCC0) Boot ROM Channel # Offset */
#define DSU_BCC1_REG_OFST              _UINT32_(0x114)     /* (DSU_BCC1) Boot ROM Channel # Offset */
#define DSU_DCC_REG_OFST               _UINT32_(0x118)     /* (DSU_DCC) Debug Communication Channel # Offset */
#define DSU_DCC0_REG_OFST              _UINT32_(0x118)     /* (DSU_DCC0) Debug Communication Channel # Offset */
#define DSU_DCC1_REG_OFST              _UINT32_(0x11C)     /* (DSU_DCC1) Debug Communication Channel # Offset */
#define DSU_DID_REG_OFST               _UINT32_(0x120)     /* (DSU_DID) Device Identification Offset */
#define DSU_DAL_REG_OFST               _UINT32_(0x124)     /* (DSU_DAL) Debugger Access Level Offset */
#define DSU_ENTRY0_REG_OFST            _UINT32_(0x1000)    /* (DSU_ENTRY0) CoreSight ROM Table Entry 0 Offset */
#define DSU_ENTRY1_REG_OFST            _UINT32_(0x1004)    /* (DSU_ENTRY1) CoreSight ROM Table Entry 1 Offset */
#define DSU_ENTRY2_REG_OFST            _UINT32_(0x1008)    /* (DSU_ENTRY2) CoreSight ROM Table Entry 2 Offset */
#define DSU_ENTRY3_REG_OFST            _UINT32_(0x100C)    /* (DSU_ENTRY3) CoreSight ROM Table Entry 3 Offset */
#define DSU_MEMTYPE_REG_OFST           _UINT32_(0x1FCC)    /* (DSU_MEMTYPE) CoreSight ROM Table Memory Type Offset */
#define DSU_PID4_REG_OFST              _UINT32_(0x1FD0)    /* (DSU_PID4) CoreSight Peripheral Identification 4 Offset */
#define DSU_PID5_REG_OFST              _UINT32_(0x1FD4)    /* (DSU_PID5) CoreSight Peripheral Identification 5 Offset */
#define DSU_PID6_REG_OFST              _UINT32_(0x1FD8)    /* (DSU_PID6) CoreSight Peripheral Identification 6 Offset */
#define DSU_PID7_REG_OFST              _UINT32_(0x1FDC)    /* (DSU_PID7) CoreSight Peripheral Identification 7 Offset */
#define DSU_PID0_REG_OFST              _UINT32_(0x1FE0)    /* (DSU_PID0) CoreSight Peripheral Identification 0 Offset */
#define DSU_PID1_REG_OFST              _UINT32_(0x1FE4)    /* (DSU_PID1) CoreSight Peripheral Identification 1 Offset */
#define DSU_PID2_REG_OFST              _UINT32_(0x1FE8)    /* (DSU_PID2) CoreSight Peripheral Identification 2 Offset */
#define DSU_PID3_REG_OFST              _UINT32_(0x1FEC)    /* (DSU_PID3) CoreSight Peripheral Identification 3 Offset */
#define DSU_CID0_REG_OFST              _UINT32_(0x1FF0)    /* (DSU_CID0) CoreSight Component Identification 0 Offset */
#define DSU_CID1_REG_OFST              _UINT32_(0x1FF4)    /* (DSU_CID1) CoreSight Component Identification 1 Offset */
#define DSU_CID2_REG_OFST              _UINT32_(0x1FF8)    /* (DSU_CID2) CoreSight Component Identification 2 Offset */
#define DSU_CID3_REG_OFST              _UINT32_(0x1FFC)    /* (DSU_CID3) CoreSight Component Identification 3 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* DSU register API structure */
typedef struct
{  /* Device Service Unit */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       DSU_CTRLB;          /* Offset: 0x04 (R/W  32) Control B */
  __IO  uint32_t                       DSU_WPCTRL;         /* Offset: 0x08 (R/W  32) Write Protection Control */
  __I   uint8_t                        Reserved2[0xF4];
  __IO  uint32_t                       DSU_CTRLC;          /* Offset: 0x100 (R/W  32) Control C */
  __I   uint32_t                       DSU_STATUSA;        /* Offset: 0x104 (R/   32) Status A */
  __I   uint32_t                       DSU_STATUSB;        /* Offset: 0x108 (R/   32) Status B */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       DSU_BCC[2];         /* Offset: 0x110 (R/W  32) Boot ROM Channel # */
  __IO  uint32_t                       DSU_DCC[2];         /* Offset: 0x118 (R/W  32) Debug Communication Channel # */
  __I   uint32_t                       DSU_DID;            /* Offset: 0x120 (R/   32) Device Identification */
  __I   uint32_t                       DSU_DAL;            /* Offset: 0x124 (R/   32) Debugger Access Level */
  __I   uint8_t                        Reserved4[0xED8];
  __I   uint32_t                       DSU_ENTRY0;         /* Offset: 0x1000 (R/   32) CoreSight ROM Table Entry 0 */
  __I   uint32_t                       DSU_ENTRY1;         /* Offset: 0x1004 (R/   32) CoreSight ROM Table Entry 1 */
  __I   uint32_t                       DSU_ENTRY2;         /* Offset: 0x1008 (R/   32) CoreSight ROM Table Entry 2 */
  __I   uint32_t                       DSU_ENTRY3;         /* Offset: 0x100C (R/   32) CoreSight ROM Table Entry 3 */
  __I   uint8_t                        Reserved5[0xFBC];
  __I   uint32_t                       DSU_MEMTYPE;        /* Offset: 0x1FCC (R/   32) CoreSight ROM Table Memory Type */
  __I   uint32_t                       DSU_PID4;           /* Offset: 0x1FD0 (R/   32) CoreSight Peripheral Identification 4 */
  __I   uint32_t                       DSU_PID5;           /* Offset: 0x1FD4 (R/   32) CoreSight Peripheral Identification 5 */
  __I   uint32_t                       DSU_PID6;           /* Offset: 0x1FD8 (R/   32) CoreSight Peripheral Identification 6 */
  __I   uint32_t                       DSU_PID7;           /* Offset: 0x1FDC (R/   32) CoreSight Peripheral Identification 7 */
  __I   uint32_t                       DSU_PID0;           /* Offset: 0x1FE0 (R/   32) CoreSight Peripheral Identification 0 */
  __I   uint32_t                       DSU_PID1;           /* Offset: 0x1FE4 (R/   32) CoreSight Peripheral Identification 1 */
  __I   uint32_t                       DSU_PID2;           /* Offset: 0x1FE8 (R/   32) CoreSight Peripheral Identification 2 */
  __I   uint32_t                       DSU_PID3;           /* Offset: 0x1FEC (R/   32) CoreSight Peripheral Identification 3 */
  __I   uint32_t                       DSU_CID0;           /* Offset: 0x1FF0 (R/   32) CoreSight Component Identification 0 */
  __I   uint32_t                       DSU_CID1;           /* Offset: 0x1FF4 (R/   32) CoreSight Component Identification 1 */
  __I   uint32_t                       DSU_CID2;           /* Offset: 0x1FF8 (R/   32) CoreSight Component Identification 2 */
  __I   uint32_t                       DSU_CID3;           /* Offset: 0x1FFC (R/   32) CoreSight Component Identification 3 */
} dsu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_DSU_COMPONENT_H_ */
