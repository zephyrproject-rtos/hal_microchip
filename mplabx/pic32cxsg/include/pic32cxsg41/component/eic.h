/*
 * Component description for EIC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-03-17T09:48:34Z */
#ifndef _PIC32CXSG41_EIC_COMPONENT_H_
#define _PIC32CXSG41_EIC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EIC                                          */
/* ************************************************************************** */

/* -------- EIC_CTRLA : (EIC Offset: 0x00) (R/W 8) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  ENABLE:1;         /*!< bit:      1  Enable                             */
    uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    uint8_t  CKSEL:1;          /*!< bit:      4  Clock Selection                    */
    uint8_t  :3;               /*!< bit:  5.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EIC_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_CTRLA_RESETVALUE                  _UINT8_(0x00)                                        /*  (EIC_CTRLA) Control A  Reset Value */

#define EIC_CTRLA_SWRST_Pos                   _UINT8_(0)                                           /* (EIC_CTRLA) Software Reset Position */
#define EIC_CTRLA_SWRST_Msk                   (_UINT8_(0x1) << EIC_CTRLA_SWRST_Pos)                /* (EIC_CTRLA) Software Reset Mask */
#define EIC_CTRLA_SWRST(value)                (EIC_CTRLA_SWRST_Msk & (_UINT8_(value) << EIC_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the EIC_CTRLA register */
#define EIC_CTRLA_ENABLE_Pos                  _UINT8_(1)                                           /* (EIC_CTRLA) Enable Position */
#define EIC_CTRLA_ENABLE_Msk                  (_UINT8_(0x1) << EIC_CTRLA_ENABLE_Pos)               /* (EIC_CTRLA) Enable Mask */
#define EIC_CTRLA_ENABLE(value)               (EIC_CTRLA_ENABLE_Msk & (_UINT8_(value) << EIC_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the EIC_CTRLA register */
#define EIC_CTRLA_CKSEL_Pos                   _UINT8_(4)                                           /* (EIC_CTRLA) Clock Selection Position */
#define EIC_CTRLA_CKSEL_Msk                   (_UINT8_(0x1) << EIC_CTRLA_CKSEL_Pos)                /* (EIC_CTRLA) Clock Selection Mask */
#define EIC_CTRLA_CKSEL(value)                (EIC_CTRLA_CKSEL_Msk & (_UINT8_(value) << EIC_CTRLA_CKSEL_Pos)) /* Assigment of value for CKSEL in the EIC_CTRLA register */
#define   EIC_CTRLA_CKSEL_CLK_GCLK_Val        _UINT8_(0x0)                                         /* (EIC_CTRLA) Clocked by GCLK  */
#define   EIC_CTRLA_CKSEL_CLK_ULP32K_Val      _UINT8_(0x1)                                         /* (EIC_CTRLA) Clocked by ULP32K  */
#define EIC_CTRLA_CKSEL_CLK_GCLK              (EIC_CTRLA_CKSEL_CLK_GCLK_Val << EIC_CTRLA_CKSEL_Pos) /* (EIC_CTRLA) Clocked by GCLK Position  */
#define EIC_CTRLA_CKSEL_CLK_ULP32K            (EIC_CTRLA_CKSEL_CLK_ULP32K_Val << EIC_CTRLA_CKSEL_Pos) /* (EIC_CTRLA) Clocked by ULP32K Position  */
#define EIC_CTRLA_Msk                         _UINT8_(0x13)                                        /* (EIC_CTRLA) Register Mask  */


/* -------- EIC_NMICTRL : (EIC Offset: 0x01) (R/W 8) Non-Maskable Interrupt Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  NMISENSE:3;       /*!< bit:  0.. 2  Non-Maskable Interrupt Sense Configuration */
    uint8_t  NMIFILTEN:1;      /*!< bit:      3  Non-Maskable Interrupt Filter Enable */
    uint8_t  NMIASYNCH:1;      /*!< bit:      4  Asynchronous Edge Detection Mode   */
    uint8_t  :3;               /*!< bit:  5.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EIC_NMICTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_NMICTRL_RESETVALUE                _UINT8_(0x00)                                        /*  (EIC_NMICTRL) Non-Maskable Interrupt Control  Reset Value */

#define EIC_NMICTRL_NMISENSE_Pos              _UINT8_(0)                                           /* (EIC_NMICTRL) Non-Maskable Interrupt Sense Configuration Position */
#define EIC_NMICTRL_NMISENSE_Msk              (_UINT8_(0x7) << EIC_NMICTRL_NMISENSE_Pos)           /* (EIC_NMICTRL) Non-Maskable Interrupt Sense Configuration Mask */
#define EIC_NMICTRL_NMISENSE(value)           (EIC_NMICTRL_NMISENSE_Msk & (_UINT8_(value) << EIC_NMICTRL_NMISENSE_Pos)) /* Assigment of value for NMISENSE in the EIC_NMICTRL register */
#define   EIC_NMICTRL_NMISENSE_NONE_Val       _UINT8_(0x0)                                         /* (EIC_NMICTRL) No detection  */
#define   EIC_NMICTRL_NMISENSE_RISE_Val       _UINT8_(0x1)                                         /* (EIC_NMICTRL) Rising-edge detection  */
#define   EIC_NMICTRL_NMISENSE_FALL_Val       _UINT8_(0x2)                                         /* (EIC_NMICTRL) Falling-edge detection  */
#define   EIC_NMICTRL_NMISENSE_BOTH_Val       _UINT8_(0x3)                                         /* (EIC_NMICTRL) Both-edges detection  */
#define   EIC_NMICTRL_NMISENSE_HIGH_Val       _UINT8_(0x4)                                         /* (EIC_NMICTRL) High-level detection  */
#define   EIC_NMICTRL_NMISENSE_LOW_Val        _UINT8_(0x5)                                         /* (EIC_NMICTRL) Low-level detection  */
#define EIC_NMICTRL_NMISENSE_NONE             (EIC_NMICTRL_NMISENSE_NONE_Val << EIC_NMICTRL_NMISENSE_Pos) /* (EIC_NMICTRL) No detection Position  */
#define EIC_NMICTRL_NMISENSE_RISE             (EIC_NMICTRL_NMISENSE_RISE_Val << EIC_NMICTRL_NMISENSE_Pos) /* (EIC_NMICTRL) Rising-edge detection Position  */
#define EIC_NMICTRL_NMISENSE_FALL             (EIC_NMICTRL_NMISENSE_FALL_Val << EIC_NMICTRL_NMISENSE_Pos) /* (EIC_NMICTRL) Falling-edge detection Position  */
#define EIC_NMICTRL_NMISENSE_BOTH             (EIC_NMICTRL_NMISENSE_BOTH_Val << EIC_NMICTRL_NMISENSE_Pos) /* (EIC_NMICTRL) Both-edges detection Position  */
#define EIC_NMICTRL_NMISENSE_HIGH             (EIC_NMICTRL_NMISENSE_HIGH_Val << EIC_NMICTRL_NMISENSE_Pos) /* (EIC_NMICTRL) High-level detection Position  */
#define EIC_NMICTRL_NMISENSE_LOW              (EIC_NMICTRL_NMISENSE_LOW_Val << EIC_NMICTRL_NMISENSE_Pos) /* (EIC_NMICTRL) Low-level detection Position  */
#define EIC_NMICTRL_NMIFILTEN_Pos             _UINT8_(3)                                           /* (EIC_NMICTRL) Non-Maskable Interrupt Filter Enable Position */
#define EIC_NMICTRL_NMIFILTEN_Msk             (_UINT8_(0x1) << EIC_NMICTRL_NMIFILTEN_Pos)          /* (EIC_NMICTRL) Non-Maskable Interrupt Filter Enable Mask */
#define EIC_NMICTRL_NMIFILTEN(value)          (EIC_NMICTRL_NMIFILTEN_Msk & (_UINT8_(value) << EIC_NMICTRL_NMIFILTEN_Pos)) /* Assigment of value for NMIFILTEN in the EIC_NMICTRL register */
#define EIC_NMICTRL_NMIASYNCH_Pos             _UINT8_(4)                                           /* (EIC_NMICTRL) Asynchronous Edge Detection Mode Position */
#define EIC_NMICTRL_NMIASYNCH_Msk             (_UINT8_(0x1) << EIC_NMICTRL_NMIASYNCH_Pos)          /* (EIC_NMICTRL) Asynchronous Edge Detection Mode Mask */
#define EIC_NMICTRL_NMIASYNCH(value)          (EIC_NMICTRL_NMIASYNCH_Msk & (_UINT8_(value) << EIC_NMICTRL_NMIASYNCH_Pos)) /* Assigment of value for NMIASYNCH in the EIC_NMICTRL register */
#define   EIC_NMICTRL_NMIASYNCH_SYNC_Val      _UINT8_(0x0)                                         /* (EIC_NMICTRL) Edge detection is clock synchronously operated  */
#define   EIC_NMICTRL_NMIASYNCH_ASYNC_Val     _UINT8_(0x1)                                         /* (EIC_NMICTRL) Edge detection is clock asynchronously operated  */
#define EIC_NMICTRL_NMIASYNCH_SYNC            (EIC_NMICTRL_NMIASYNCH_SYNC_Val << EIC_NMICTRL_NMIASYNCH_Pos) /* (EIC_NMICTRL) Edge detection is clock synchronously operated Position  */
#define EIC_NMICTRL_NMIASYNCH_ASYNC           (EIC_NMICTRL_NMIASYNCH_ASYNC_Val << EIC_NMICTRL_NMIASYNCH_Pos) /* (EIC_NMICTRL) Edge detection is clock asynchronously operated Position  */
#define EIC_NMICTRL_Msk                       _UINT8_(0x1F)                                        /* (EIC_NMICTRL) Register Mask  */


/* -------- EIC_NMIFLAG : (EIC Offset: 0x02) (R/W 16) Non-Maskable Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t NMI:1;            /*!< bit:      0  Non-Maskable Interrupt             */
    uint16_t :15;              /*!< bit:  1..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} EIC_NMIFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_NMIFLAG_RESETVALUE                _UINT16_(0x00)                                       /*  (EIC_NMIFLAG) Non-Maskable Interrupt Flag Status and Clear  Reset Value */

#define EIC_NMIFLAG_NMI_Pos                   _UINT16_(0)                                          /* (EIC_NMIFLAG) Non-Maskable Interrupt Position */
#define EIC_NMIFLAG_NMI_Msk                   (_UINT16_(0x1) << EIC_NMIFLAG_NMI_Pos)               /* (EIC_NMIFLAG) Non-Maskable Interrupt Mask */
#define EIC_NMIFLAG_NMI(value)                (EIC_NMIFLAG_NMI_Msk & (_UINT16_(value) << EIC_NMIFLAG_NMI_Pos)) /* Assigment of value for NMI in the EIC_NMIFLAG register */
#define EIC_NMIFLAG_Msk                       _UINT16_(0x0001)                                     /* (EIC_NMIFLAG) Register Mask  */


/* -------- EIC_SYNCBUSY : (EIC Offset: 0x04) ( R/ 32) Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Synchronization Busy Status */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable Synchronization Busy Status */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_SYNCBUSY_RESETVALUE               _UINT32_(0x00)                                       /*  (EIC_SYNCBUSY) Synchronization Busy  Reset Value */

#define EIC_SYNCBUSY_SWRST_Pos                _UINT32_(0)                                          /* (EIC_SYNCBUSY) Software Reset Synchronization Busy Status Position */
#define EIC_SYNCBUSY_SWRST_Msk                (_UINT32_(0x1) << EIC_SYNCBUSY_SWRST_Pos)            /* (EIC_SYNCBUSY) Software Reset Synchronization Busy Status Mask */
#define EIC_SYNCBUSY_SWRST(value)             (EIC_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << EIC_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the EIC_SYNCBUSY register */
#define EIC_SYNCBUSY_ENABLE_Pos               _UINT32_(1)                                          /* (EIC_SYNCBUSY) Enable Synchronization Busy Status Position */
#define EIC_SYNCBUSY_ENABLE_Msk               (_UINT32_(0x1) << EIC_SYNCBUSY_ENABLE_Pos)           /* (EIC_SYNCBUSY) Enable Synchronization Busy Status Mask */
#define EIC_SYNCBUSY_ENABLE(value)            (EIC_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << EIC_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the EIC_SYNCBUSY register */
#define EIC_SYNCBUSY_Msk                      _UINT32_(0x00000003)                                 /* (EIC_SYNCBUSY) Register Mask  */


/* -------- EIC_EVCTRL : (EIC Offset: 0x08) (R/W 32) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EXTINTEO:16;      /*!< bit:  0..15  External Interrupt Event Output Enable */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_EVCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (EIC_EVCTRL) Event Control  Reset Value */

#define EIC_EVCTRL_EXTINTEO_Pos               _UINT32_(0)                                          /* (EIC_EVCTRL) External Interrupt Event Output Enable Position */
#define EIC_EVCTRL_EXTINTEO_Msk               (_UINT32_(0xFFFF) << EIC_EVCTRL_EXTINTEO_Pos)        /* (EIC_EVCTRL) External Interrupt Event Output Enable Mask */
#define EIC_EVCTRL_EXTINTEO(value)            (EIC_EVCTRL_EXTINTEO_Msk & (_UINT32_(value) << EIC_EVCTRL_EXTINTEO_Pos)) /* Assigment of value for EXTINTEO in the EIC_EVCTRL register */
#define EIC_EVCTRL_Msk                        _UINT32_(0x0000FFFF)                                 /* (EIC_EVCTRL) Register Mask  */


/* -------- EIC_INTENCLR : (EIC Offset: 0x0C) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EXTINT:16;        /*!< bit:  0..15  External Interrupt Enable          */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_INTENCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (EIC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define EIC_INTENCLR_EXTINT_Pos               _UINT32_(0)                                          /* (EIC_INTENCLR) External Interrupt Enable Position */
#define EIC_INTENCLR_EXTINT_Msk               (_UINT32_(0xFFFF) << EIC_INTENCLR_EXTINT_Pos)        /* (EIC_INTENCLR) External Interrupt Enable Mask */
#define EIC_INTENCLR_EXTINT(value)            (EIC_INTENCLR_EXTINT_Msk & (_UINT32_(value) << EIC_INTENCLR_EXTINT_Pos)) /* Assigment of value for EXTINT in the EIC_INTENCLR register */
#define EIC_INTENCLR_Msk                      _UINT32_(0x0000FFFF)                                 /* (EIC_INTENCLR) Register Mask  */


/* -------- EIC_INTENSET : (EIC Offset: 0x10) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EXTINT:16;        /*!< bit:  0..15  External Interrupt Enable          */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_INTENSET_RESETVALUE               _UINT32_(0x00)                                       /*  (EIC_INTENSET) Interrupt Enable Set  Reset Value */

#define EIC_INTENSET_EXTINT_Pos               _UINT32_(0)                                          /* (EIC_INTENSET) External Interrupt Enable Position */
#define EIC_INTENSET_EXTINT_Msk               (_UINT32_(0xFFFF) << EIC_INTENSET_EXTINT_Pos)        /* (EIC_INTENSET) External Interrupt Enable Mask */
#define EIC_INTENSET_EXTINT(value)            (EIC_INTENSET_EXTINT_Msk & (_UINT32_(value) << EIC_INTENSET_EXTINT_Pos)) /* Assigment of value for EXTINT in the EIC_INTENSET register */
#define EIC_INTENSET_Msk                      _UINT32_(0x0000FFFF)                                 /* (EIC_INTENSET) Register Mask  */


/* -------- EIC_INTFLAG : (EIC Offset: 0x14) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t EXTINT:16;        /*!< bit:  0..15  External Interrupt                 */
    __I uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_INTFLAG_RESETVALUE                _UINT32_(0x00)                                       /*  (EIC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define EIC_INTFLAG_EXTINT_Pos                _UINT32_(0)                                          /* (EIC_INTFLAG) External Interrupt Position */
#define EIC_INTFLAG_EXTINT_Msk                (_UINT32_(0xFFFF) << EIC_INTFLAG_EXTINT_Pos)         /* (EIC_INTFLAG) External Interrupt Mask */
#define EIC_INTFLAG_EXTINT(value)             (EIC_INTFLAG_EXTINT_Msk & (_UINT32_(value) << EIC_INTFLAG_EXTINT_Pos)) /* Assigment of value for EXTINT in the EIC_INTFLAG register */
#define EIC_INTFLAG_Msk                       _UINT32_(0x0000FFFF)                                 /* (EIC_INTFLAG) Register Mask  */


/* -------- EIC_ASYNCH : (EIC Offset: 0x18) (R/W 32) External Interrupt Asynchronous Mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ASYNCH:16;        /*!< bit:  0..15  Asynchronous Edge Detection Mode   */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_ASYNCH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_ASYNCH_RESETVALUE                 _UINT32_(0x00)                                       /*  (EIC_ASYNCH) External Interrupt Asynchronous Mode  Reset Value */

#define EIC_ASYNCH_ASYNCH_Pos                 _UINT32_(0)                                          /* (EIC_ASYNCH) Asynchronous Edge Detection Mode Position */
#define EIC_ASYNCH_ASYNCH_Msk                 (_UINT32_(0xFFFF) << EIC_ASYNCH_ASYNCH_Pos)          /* (EIC_ASYNCH) Asynchronous Edge Detection Mode Mask */
#define EIC_ASYNCH_ASYNCH(value)              (EIC_ASYNCH_ASYNCH_Msk & (_UINT32_(value) << EIC_ASYNCH_ASYNCH_Pos)) /* Assigment of value for ASYNCH in the EIC_ASYNCH register */
#define   EIC_ASYNCH_ASYNCH_SYNC_Val          _UINT32_(0x0)                                        /* (EIC_ASYNCH) Edge detection is clock synchronously operated  */
#define   EIC_ASYNCH_ASYNCH_ASYNC_Val         _UINT32_(0x1)                                        /* (EIC_ASYNCH) Edge detection is clock asynchronously operated  */
#define EIC_ASYNCH_ASYNCH_SYNC                (EIC_ASYNCH_ASYNCH_SYNC_Val << EIC_ASYNCH_ASYNCH_Pos) /* (EIC_ASYNCH) Edge detection is clock synchronously operated Position  */
#define EIC_ASYNCH_ASYNCH_ASYNC               (EIC_ASYNCH_ASYNCH_ASYNC_Val << EIC_ASYNCH_ASYNCH_Pos) /* (EIC_ASYNCH) Edge detection is clock asynchronously operated Position  */
#define EIC_ASYNCH_Msk                        _UINT32_(0x0000FFFF)                                 /* (EIC_ASYNCH) Register Mask  */


/* -------- EIC_CONFIG0 : (EIC Offset: 0x1C) (R/W 32) External Interrupt Sense Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SENSE0:3;         /*!< bit:  0.. 2  Input Sense Configuration 0        */
    uint32_t FILTEN0:1;        /*!< bit:      3  Filter Enable 0                    */
    uint32_t SENSE1:3;         /*!< bit:  4.. 6  Input Sense Configuration 1        */
    uint32_t FILTEN1:1;        /*!< bit:      7  Filter Enable 1                    */
    uint32_t SENSE2:3;         /*!< bit:  8..10  Input Sense Configuration 2        */
    uint32_t FILTEN2:1;        /*!< bit:     11  Filter Enable 2                    */
    uint32_t SENSE3:3;         /*!< bit: 12..14  Input Sense Configuration 3        */
    uint32_t FILTEN3:1;        /*!< bit:     15  Filter Enable 3                    */
    uint32_t SENSE4:3;         /*!< bit: 16..18  Input Sense Configuration 4        */
    uint32_t FILTEN4:1;        /*!< bit:     19  Filter Enable 4                    */
    uint32_t SENSE5:3;         /*!< bit: 20..22  Input Sense Configuration 5        */
    uint32_t FILTEN5:1;        /*!< bit:     23  Filter Enable 5                    */
    uint32_t SENSE6:3;         /*!< bit: 24..26  Input Sense Configuration 6        */
    uint32_t FILTEN6:1;        /*!< bit:     27  Filter Enable 6                    */
    uint32_t SENSE7:3;         /*!< bit: 28..30  Input Sense Configuration 7        */
    uint32_t FILTEN7:1;        /*!< bit:     31  Filter Enable 7                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_CONFIG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_CONFIG0_RESETVALUE                _UINT32_(0x00)                                       /*  (EIC_CONFIG0) External Interrupt Sense Configuration  Reset Value */

#define EIC_CONFIG0_SENSE0_Pos                _UINT32_(0)                                          /* (EIC_CONFIG0) Input Sense Configuration 0 Position */
#define EIC_CONFIG0_SENSE0_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE0_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 0 Mask */
#define EIC_CONFIG0_SENSE0(value)             (EIC_CONFIG0_SENSE0_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE0_Pos)) /* Assigment of value for SENSE0 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE0_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE0_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE0_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE0_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE0_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE0_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE0_NONE               (EIC_CONFIG0_SENSE0_NONE_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE0_RISE               (EIC_CONFIG0_SENSE0_RISE_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE0_FALL               (EIC_CONFIG0_SENSE0_FALL_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE0_BOTH               (EIC_CONFIG0_SENSE0_BOTH_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE0_HIGH               (EIC_CONFIG0_SENSE0_HIGH_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE0_LOW                (EIC_CONFIG0_SENSE0_LOW_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN0_Pos               _UINT32_(3)                                          /* (EIC_CONFIG0) Filter Enable 0 Position */
#define EIC_CONFIG0_FILTEN0_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN0_Pos)           /* (EIC_CONFIG0) Filter Enable 0 Mask */
#define EIC_CONFIG0_FILTEN0(value)            (EIC_CONFIG0_FILTEN0_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN0_Pos)) /* Assigment of value for FILTEN0 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE1_Pos                _UINT32_(4)                                          /* (EIC_CONFIG0) Input Sense Configuration 1 Position */
#define EIC_CONFIG0_SENSE1_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE1_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 1 Mask */
#define EIC_CONFIG0_SENSE1(value)             (EIC_CONFIG0_SENSE1_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE1_Pos)) /* Assigment of value for SENSE1 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE1_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE1_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE1_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE1_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE1_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE1_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE1_NONE               (EIC_CONFIG0_SENSE1_NONE_Val << EIC_CONFIG0_SENSE1_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE1_RISE               (EIC_CONFIG0_SENSE1_RISE_Val << EIC_CONFIG0_SENSE1_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE1_FALL               (EIC_CONFIG0_SENSE1_FALL_Val << EIC_CONFIG0_SENSE1_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE1_BOTH               (EIC_CONFIG0_SENSE1_BOTH_Val << EIC_CONFIG0_SENSE1_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE1_HIGH               (EIC_CONFIG0_SENSE1_HIGH_Val << EIC_CONFIG0_SENSE1_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE1_LOW                (EIC_CONFIG0_SENSE1_LOW_Val << EIC_CONFIG0_SENSE1_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN1_Pos               _UINT32_(7)                                          /* (EIC_CONFIG0) Filter Enable 1 Position */
#define EIC_CONFIG0_FILTEN1_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN1_Pos)           /* (EIC_CONFIG0) Filter Enable 1 Mask */
#define EIC_CONFIG0_FILTEN1(value)            (EIC_CONFIG0_FILTEN1_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN1_Pos)) /* Assigment of value for FILTEN1 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE2_Pos                _UINT32_(8)                                          /* (EIC_CONFIG0) Input Sense Configuration 2 Position */
#define EIC_CONFIG0_SENSE2_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE2_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 2 Mask */
#define EIC_CONFIG0_SENSE2(value)             (EIC_CONFIG0_SENSE2_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE2_Pos)) /* Assigment of value for SENSE2 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE2_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE2_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE2_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE2_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE2_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE2_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE2_NONE               (EIC_CONFIG0_SENSE2_NONE_Val << EIC_CONFIG0_SENSE2_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE2_RISE               (EIC_CONFIG0_SENSE2_RISE_Val << EIC_CONFIG0_SENSE2_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE2_FALL               (EIC_CONFIG0_SENSE2_FALL_Val << EIC_CONFIG0_SENSE2_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE2_BOTH               (EIC_CONFIG0_SENSE2_BOTH_Val << EIC_CONFIG0_SENSE2_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE2_HIGH               (EIC_CONFIG0_SENSE2_HIGH_Val << EIC_CONFIG0_SENSE2_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE2_LOW                (EIC_CONFIG0_SENSE2_LOW_Val << EIC_CONFIG0_SENSE2_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN2_Pos               _UINT32_(11)                                         /* (EIC_CONFIG0) Filter Enable 2 Position */
#define EIC_CONFIG0_FILTEN2_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN2_Pos)           /* (EIC_CONFIG0) Filter Enable 2 Mask */
#define EIC_CONFIG0_FILTEN2(value)            (EIC_CONFIG0_FILTEN2_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN2_Pos)) /* Assigment of value for FILTEN2 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE3_Pos                _UINT32_(12)                                         /* (EIC_CONFIG0) Input Sense Configuration 3 Position */
#define EIC_CONFIG0_SENSE3_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE3_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 3 Mask */
#define EIC_CONFIG0_SENSE3(value)             (EIC_CONFIG0_SENSE3_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE3_Pos)) /* Assigment of value for SENSE3 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE3_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE3_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE3_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE3_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE3_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE3_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE3_NONE               (EIC_CONFIG0_SENSE3_NONE_Val << EIC_CONFIG0_SENSE3_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE3_RISE               (EIC_CONFIG0_SENSE3_RISE_Val << EIC_CONFIG0_SENSE3_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE3_FALL               (EIC_CONFIG0_SENSE3_FALL_Val << EIC_CONFIG0_SENSE3_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE3_BOTH               (EIC_CONFIG0_SENSE3_BOTH_Val << EIC_CONFIG0_SENSE3_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE3_HIGH               (EIC_CONFIG0_SENSE3_HIGH_Val << EIC_CONFIG0_SENSE3_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE3_LOW                (EIC_CONFIG0_SENSE3_LOW_Val << EIC_CONFIG0_SENSE3_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN3_Pos               _UINT32_(15)                                         /* (EIC_CONFIG0) Filter Enable 3 Position */
#define EIC_CONFIG0_FILTEN3_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN3_Pos)           /* (EIC_CONFIG0) Filter Enable 3 Mask */
#define EIC_CONFIG0_FILTEN3(value)            (EIC_CONFIG0_FILTEN3_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN3_Pos)) /* Assigment of value for FILTEN3 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE4_Pos                _UINT32_(16)                                         /* (EIC_CONFIG0) Input Sense Configuration 4 Position */
#define EIC_CONFIG0_SENSE4_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE4_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 4 Mask */
#define EIC_CONFIG0_SENSE4(value)             (EIC_CONFIG0_SENSE4_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE4_Pos)) /* Assigment of value for SENSE4 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE4_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE4_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE4_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE4_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE4_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE4_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE4_NONE               (EIC_CONFIG0_SENSE4_NONE_Val << EIC_CONFIG0_SENSE4_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE4_RISE               (EIC_CONFIG0_SENSE4_RISE_Val << EIC_CONFIG0_SENSE4_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE4_FALL               (EIC_CONFIG0_SENSE4_FALL_Val << EIC_CONFIG0_SENSE4_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE4_BOTH               (EIC_CONFIG0_SENSE4_BOTH_Val << EIC_CONFIG0_SENSE4_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE4_HIGH               (EIC_CONFIG0_SENSE4_HIGH_Val << EIC_CONFIG0_SENSE4_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE4_LOW                (EIC_CONFIG0_SENSE4_LOW_Val << EIC_CONFIG0_SENSE4_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN4_Pos               _UINT32_(19)                                         /* (EIC_CONFIG0) Filter Enable 4 Position */
#define EIC_CONFIG0_FILTEN4_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN4_Pos)           /* (EIC_CONFIG0) Filter Enable 4 Mask */
#define EIC_CONFIG0_FILTEN4(value)            (EIC_CONFIG0_FILTEN4_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN4_Pos)) /* Assigment of value for FILTEN4 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE5_Pos                _UINT32_(20)                                         /* (EIC_CONFIG0) Input Sense Configuration 5 Position */
#define EIC_CONFIG0_SENSE5_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE5_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 5 Mask */
#define EIC_CONFIG0_SENSE5(value)             (EIC_CONFIG0_SENSE5_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE5_Pos)) /* Assigment of value for SENSE5 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE5_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE5_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE5_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE5_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE5_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE5_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE5_NONE               (EIC_CONFIG0_SENSE5_NONE_Val << EIC_CONFIG0_SENSE5_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE5_RISE               (EIC_CONFIG0_SENSE5_RISE_Val << EIC_CONFIG0_SENSE5_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE5_FALL               (EIC_CONFIG0_SENSE5_FALL_Val << EIC_CONFIG0_SENSE5_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE5_BOTH               (EIC_CONFIG0_SENSE5_BOTH_Val << EIC_CONFIG0_SENSE5_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE5_HIGH               (EIC_CONFIG0_SENSE5_HIGH_Val << EIC_CONFIG0_SENSE5_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE5_LOW                (EIC_CONFIG0_SENSE5_LOW_Val << EIC_CONFIG0_SENSE5_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN5_Pos               _UINT32_(23)                                         /* (EIC_CONFIG0) Filter Enable 5 Position */
#define EIC_CONFIG0_FILTEN5_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN5_Pos)           /* (EIC_CONFIG0) Filter Enable 5 Mask */
#define EIC_CONFIG0_FILTEN5(value)            (EIC_CONFIG0_FILTEN5_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN5_Pos)) /* Assigment of value for FILTEN5 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE6_Pos                _UINT32_(24)                                         /* (EIC_CONFIG0) Input Sense Configuration 6 Position */
#define EIC_CONFIG0_SENSE6_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE6_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 6 Mask */
#define EIC_CONFIG0_SENSE6(value)             (EIC_CONFIG0_SENSE6_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE6_Pos)) /* Assigment of value for SENSE6 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE6_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE6_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE6_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE6_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE6_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE6_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE6_NONE               (EIC_CONFIG0_SENSE6_NONE_Val << EIC_CONFIG0_SENSE6_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE6_RISE               (EIC_CONFIG0_SENSE6_RISE_Val << EIC_CONFIG0_SENSE6_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE6_FALL               (EIC_CONFIG0_SENSE6_FALL_Val << EIC_CONFIG0_SENSE6_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE6_BOTH               (EIC_CONFIG0_SENSE6_BOTH_Val << EIC_CONFIG0_SENSE6_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE6_HIGH               (EIC_CONFIG0_SENSE6_HIGH_Val << EIC_CONFIG0_SENSE6_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE6_LOW                (EIC_CONFIG0_SENSE6_LOW_Val << EIC_CONFIG0_SENSE6_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN6_Pos               _UINT32_(27)                                         /* (EIC_CONFIG0) Filter Enable 6 Position */
#define EIC_CONFIG0_FILTEN6_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN6_Pos)           /* (EIC_CONFIG0) Filter Enable 6 Mask */
#define EIC_CONFIG0_FILTEN6(value)            (EIC_CONFIG0_FILTEN6_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN6_Pos)) /* Assigment of value for FILTEN6 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_SENSE7_Pos                _UINT32_(28)                                         /* (EIC_CONFIG0) Input Sense Configuration 7 Position */
#define EIC_CONFIG0_SENSE7_Msk                (_UINT32_(0x7) << EIC_CONFIG0_SENSE7_Pos)            /* (EIC_CONFIG0) Input Sense Configuration 7 Mask */
#define EIC_CONFIG0_SENSE7(value)             (EIC_CONFIG0_SENSE7_Msk & (_UINT32_(value) << EIC_CONFIG0_SENSE7_Pos)) /* Assigment of value for SENSE7 in the EIC_CONFIG0 register */
#define   EIC_CONFIG0_SENSE7_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG0) No detection  */
#define   EIC_CONFIG0_SENSE7_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG0) Rising edge detection  */
#define   EIC_CONFIG0_SENSE7_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG0) Falling edge detection  */
#define   EIC_CONFIG0_SENSE7_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG0) Both edges detection  */
#define   EIC_CONFIG0_SENSE7_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG0) High level detection  */
#define   EIC_CONFIG0_SENSE7_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG0) Low level detection  */
#define EIC_CONFIG0_SENSE7_NONE               (EIC_CONFIG0_SENSE7_NONE_Val << EIC_CONFIG0_SENSE7_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG0_SENSE7_RISE               (EIC_CONFIG0_SENSE7_RISE_Val << EIC_CONFIG0_SENSE7_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG0_SENSE7_FALL               (EIC_CONFIG0_SENSE7_FALL_Val << EIC_CONFIG0_SENSE7_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG0_SENSE7_BOTH               (EIC_CONFIG0_SENSE7_BOTH_Val << EIC_CONFIG0_SENSE7_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG0_SENSE7_HIGH               (EIC_CONFIG0_SENSE7_HIGH_Val << EIC_CONFIG0_SENSE7_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG0_SENSE7_LOW                (EIC_CONFIG0_SENSE7_LOW_Val << EIC_CONFIG0_SENSE7_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG0_FILTEN7_Pos               _UINT32_(31)                                         /* (EIC_CONFIG0) Filter Enable 7 Position */
#define EIC_CONFIG0_FILTEN7_Msk               (_UINT32_(0x1) << EIC_CONFIG0_FILTEN7_Pos)           /* (EIC_CONFIG0) Filter Enable 7 Mask */
#define EIC_CONFIG0_FILTEN7(value)            (EIC_CONFIG0_FILTEN7_Msk & (_UINT32_(value) << EIC_CONFIG0_FILTEN7_Pos)) /* Assigment of value for FILTEN7 in the EIC_CONFIG0 register */
#define EIC_CONFIG0_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (EIC_CONFIG0) Register Mask  */

/* For SAM0 compatibily start */
/* -------- EIC_CONFIG0 : (EIC Offset: 0x20) (R/W 32) External Interrupt Sense Configuration -------- */
#define EIC_CONFIG_SENSE0_NONE               (EIC_CONFIG0_SENSE0_NONE_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) No detection Position  */
#define EIC_CONFIG_SENSE0_RISE               (EIC_CONFIG0_SENSE0_RISE_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Rising edge detection Position  */
#define EIC_CONFIG_SENSE0_FALL               (EIC_CONFIG0_SENSE0_FALL_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Falling edge detection Position  */
#define EIC_CONFIG_SENSE0_BOTH               (EIC_CONFIG0_SENSE0_BOTH_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Both edges detection Position  */
#define EIC_CONFIG_SENSE0_HIGH               (EIC_CONFIG0_SENSE0_HIGH_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) High level detection Position  */
#define EIC_CONFIG_SENSE0_LOW                (EIC_CONFIG0_SENSE0_LOW_Val << EIC_CONFIG0_SENSE0_Pos) /* (EIC_CONFIG0) Low level detection Position  */
#define EIC_CONFIG_FILTEN0                   (_UINT32_(0x1) << EIC_CONFIG0_FILTEN0_Pos)           /* (EIC_CONFIG0) Filter Enable 0 Mask */
/* For SAM0 compatibily end */

/* -------- EIC_CONFIG1 : (EIC Offset: 0x20) (R/W 32) External Interrupt Sense Configuration -------- */
#define EIC_CONFIG1_RESETVALUE                _UINT32_(0x00)                                       /*  (EIC_CONFIG1) External Interrupt Sense Configuration  Reset Value */

#define EIC_CONFIG1_SENSE8_Pos                _UINT32_(0)                                          /* (EIC_CONFIG1) Input Sense Configuration 8 Position */
#define EIC_CONFIG1_SENSE8_Msk                (_UINT32_(0x7) << EIC_CONFIG1_SENSE8_Pos)            /* (EIC_CONFIG1) Input Sense Configuration 8 Mask */
#define EIC_CONFIG1_SENSE8(value)             (EIC_CONFIG1_SENSE8_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE8_Pos)) /* Assigment of value for SENSE8 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE8_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE8_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE8_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE8_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE8_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE8_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE8_NONE               (EIC_CONFIG1_SENSE8_NONE_Val << EIC_CONFIG1_SENSE8_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE8_RISE               (EIC_CONFIG1_SENSE8_RISE_Val << EIC_CONFIG1_SENSE8_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE8_FALL               (EIC_CONFIG1_SENSE8_FALL_Val << EIC_CONFIG1_SENSE8_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE8_BOTH               (EIC_CONFIG1_SENSE8_BOTH_Val << EIC_CONFIG1_SENSE8_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE8_HIGH               (EIC_CONFIG1_SENSE8_HIGH_Val << EIC_CONFIG1_SENSE8_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE8_LOW                (EIC_CONFIG1_SENSE8_LOW_Val << EIC_CONFIG1_SENSE8_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN8_Pos               _UINT32_(3)                                          /* (EIC_CONFIG1) Filter Enable 8 Position */
#define EIC_CONFIG1_FILTEN8_Msk               (_UINT32_(0x1) << EIC_CONFIG1_FILTEN8_Pos)           /* (EIC_CONFIG1) Filter Enable 8 Mask */
#define EIC_CONFIG1_FILTEN8(value)            (EIC_CONFIG1_FILTEN8_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN8_Pos)) /* Assigment of value for FILTEN8 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE9_Pos                _UINT32_(4)                                          /* (EIC_CONFIG1) Input Sense Configuration 9 Position */
#define EIC_CONFIG1_SENSE9_Msk                (_UINT32_(0x7) << EIC_CONFIG1_SENSE9_Pos)            /* (EIC_CONFIG1) Input Sense Configuration 9 Mask */
#define EIC_CONFIG1_SENSE9(value)             (EIC_CONFIG1_SENSE9_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE9_Pos)) /* Assigment of value for SENSE9 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE9_NONE_Val         _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE9_RISE_Val         _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE9_FALL_Val         _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE9_BOTH_Val         _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE9_HIGH_Val         _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE9_LOW_Val          _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE9_NONE               (EIC_CONFIG1_SENSE9_NONE_Val << EIC_CONFIG1_SENSE9_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE9_RISE               (EIC_CONFIG1_SENSE9_RISE_Val << EIC_CONFIG1_SENSE9_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE9_FALL               (EIC_CONFIG1_SENSE9_FALL_Val << EIC_CONFIG1_SENSE9_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE9_BOTH               (EIC_CONFIG1_SENSE9_BOTH_Val << EIC_CONFIG1_SENSE9_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE9_HIGH               (EIC_CONFIG1_SENSE9_HIGH_Val << EIC_CONFIG1_SENSE9_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE9_LOW                (EIC_CONFIG1_SENSE9_LOW_Val << EIC_CONFIG1_SENSE9_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN9_Pos               _UINT32_(7)                                          /* (EIC_CONFIG1) Filter Enable 9 Position */
#define EIC_CONFIG1_FILTEN9_Msk               (_UINT32_(0x1) << EIC_CONFIG1_FILTEN9_Pos)           /* (EIC_CONFIG1) Filter Enable 9 Mask */
#define EIC_CONFIG1_FILTEN9(value)            (EIC_CONFIG1_FILTEN9_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN9_Pos)) /* Assigment of value for FILTEN9 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE10_Pos               _UINT32_(8)                                          /* (EIC_CONFIG1) Input Sense Configuration 10 Position */
#define EIC_CONFIG1_SENSE10_Msk               (_UINT32_(0x7) << EIC_CONFIG1_SENSE10_Pos)           /* (EIC_CONFIG1) Input Sense Configuration 10 Mask */
#define EIC_CONFIG1_SENSE10(value)            (EIC_CONFIG1_SENSE10_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE10_Pos)) /* Assigment of value for SENSE10 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE10_NONE_Val        _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE10_RISE_Val        _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE10_FALL_Val        _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE10_BOTH_Val        _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE10_HIGH_Val        _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE10_LOW_Val         _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE10_NONE              (EIC_CONFIG1_SENSE10_NONE_Val << EIC_CONFIG1_SENSE10_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE10_RISE              (EIC_CONFIG1_SENSE10_RISE_Val << EIC_CONFIG1_SENSE10_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE10_FALL              (EIC_CONFIG1_SENSE10_FALL_Val << EIC_CONFIG1_SENSE10_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE10_BOTH              (EIC_CONFIG1_SENSE10_BOTH_Val << EIC_CONFIG1_SENSE10_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE10_HIGH              (EIC_CONFIG1_SENSE10_HIGH_Val << EIC_CONFIG1_SENSE10_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE10_LOW               (EIC_CONFIG1_SENSE10_LOW_Val << EIC_CONFIG1_SENSE10_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN10_Pos              _UINT32_(11)                                         /* (EIC_CONFIG1) Filter Enable 10 Position */
#define EIC_CONFIG1_FILTEN10_Msk              (_UINT32_(0x1) << EIC_CONFIG1_FILTEN10_Pos)          /* (EIC_CONFIG1) Filter Enable 10 Mask */
#define EIC_CONFIG1_FILTEN10(value)           (EIC_CONFIG1_FILTEN10_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN10_Pos)) /* Assigment of value for FILTEN10 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE11_Pos               _UINT32_(12)                                         /* (EIC_CONFIG1) Input Sense Configuration 11 Position */
#define EIC_CONFIG1_SENSE11_Msk               (_UINT32_(0x7) << EIC_CONFIG1_SENSE11_Pos)           /* (EIC_CONFIG1) Input Sense Configuration 11 Mask */
#define EIC_CONFIG1_SENSE11(value)            (EIC_CONFIG1_SENSE11_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE11_Pos)) /* Assigment of value for SENSE11 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE11_NONE_Val        _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE11_RISE_Val        _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE11_FALL_Val        _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE11_BOTH_Val        _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE11_HIGH_Val        _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE11_LOW_Val         _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE11_NONE              (EIC_CONFIG1_SENSE11_NONE_Val << EIC_CONFIG1_SENSE11_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE11_RISE              (EIC_CONFIG1_SENSE11_RISE_Val << EIC_CONFIG1_SENSE11_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE11_FALL              (EIC_CONFIG1_SENSE11_FALL_Val << EIC_CONFIG1_SENSE11_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE11_BOTH              (EIC_CONFIG1_SENSE11_BOTH_Val << EIC_CONFIG1_SENSE11_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE11_HIGH              (EIC_CONFIG1_SENSE11_HIGH_Val << EIC_CONFIG1_SENSE11_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE11_LOW               (EIC_CONFIG1_SENSE11_LOW_Val << EIC_CONFIG1_SENSE11_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN11_Pos              _UINT32_(15)                                         /* (EIC_CONFIG1) Filter Enable 11 Position */
#define EIC_CONFIG1_FILTEN11_Msk              (_UINT32_(0x1) << EIC_CONFIG1_FILTEN11_Pos)          /* (EIC_CONFIG1) Filter Enable 11 Mask */
#define EIC_CONFIG1_FILTEN11(value)           (EIC_CONFIG1_FILTEN11_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN11_Pos)) /* Assigment of value for FILTEN11 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE12_Pos               _UINT32_(16)                                         /* (EIC_CONFIG1) Input Sense Configuration 12 Position */
#define EIC_CONFIG1_SENSE12_Msk               (_UINT32_(0x7) << EIC_CONFIG1_SENSE12_Pos)           /* (EIC_CONFIG1) Input Sense Configuration 12 Mask */
#define EIC_CONFIG1_SENSE12(value)            (EIC_CONFIG1_SENSE12_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE12_Pos)) /* Assigment of value for SENSE12 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE12_NONE_Val        _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE12_RISE_Val        _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE12_FALL_Val        _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE12_BOTH_Val        _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE12_HIGH_Val        _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE12_LOW_Val         _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE12_NONE              (EIC_CONFIG1_SENSE12_NONE_Val << EIC_CONFIG1_SENSE12_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE12_RISE              (EIC_CONFIG1_SENSE12_RISE_Val << EIC_CONFIG1_SENSE12_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE12_FALL              (EIC_CONFIG1_SENSE12_FALL_Val << EIC_CONFIG1_SENSE12_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE12_BOTH              (EIC_CONFIG1_SENSE12_BOTH_Val << EIC_CONFIG1_SENSE12_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE12_HIGH              (EIC_CONFIG1_SENSE12_HIGH_Val << EIC_CONFIG1_SENSE12_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE12_LOW               (EIC_CONFIG1_SENSE12_LOW_Val << EIC_CONFIG1_SENSE12_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN12_Pos              _UINT32_(19)                                         /* (EIC_CONFIG1) Filter Enable 12 Position */
#define EIC_CONFIG1_FILTEN12_Msk              (_UINT32_(0x1) << EIC_CONFIG1_FILTEN12_Pos)          /* (EIC_CONFIG1) Filter Enable 12 Mask */
#define EIC_CONFIG1_FILTEN12(value)           (EIC_CONFIG1_FILTEN12_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN12_Pos)) /* Assigment of value for FILTEN12 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE13_Pos               _UINT32_(20)                                         /* (EIC_CONFIG1) Input Sense Configuration 13 Position */
#define EIC_CONFIG1_SENSE13_Msk               (_UINT32_(0x7) << EIC_CONFIG1_SENSE13_Pos)           /* (EIC_CONFIG1) Input Sense Configuration 13 Mask */
#define EIC_CONFIG1_SENSE13(value)            (EIC_CONFIG1_SENSE13_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE13_Pos)) /* Assigment of value for SENSE13 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE13_NONE_Val        _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE13_RISE_Val        _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE13_FALL_Val        _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE13_BOTH_Val        _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE13_HIGH_Val        _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE13_LOW_Val         _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE13_NONE              (EIC_CONFIG1_SENSE13_NONE_Val << EIC_CONFIG1_SENSE13_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE13_RISE              (EIC_CONFIG1_SENSE13_RISE_Val << EIC_CONFIG1_SENSE13_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE13_FALL              (EIC_CONFIG1_SENSE13_FALL_Val << EIC_CONFIG1_SENSE13_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE13_BOTH              (EIC_CONFIG1_SENSE13_BOTH_Val << EIC_CONFIG1_SENSE13_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE13_HIGH              (EIC_CONFIG1_SENSE13_HIGH_Val << EIC_CONFIG1_SENSE13_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE13_LOW               (EIC_CONFIG1_SENSE13_LOW_Val << EIC_CONFIG1_SENSE13_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN13_Pos              _UINT32_(23)                                         /* (EIC_CONFIG1) Filter Enable 13 Position */
#define EIC_CONFIG1_FILTEN13_Msk              (_UINT32_(0x1) << EIC_CONFIG1_FILTEN13_Pos)          /* (EIC_CONFIG1) Filter Enable 13 Mask */
#define EIC_CONFIG1_FILTEN13(value)           (EIC_CONFIG1_FILTEN13_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN13_Pos)) /* Assigment of value for FILTEN13 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE14_Pos               _UINT32_(24)                                         /* (EIC_CONFIG1) Input Sense Configuration 14 Position */
#define EIC_CONFIG1_SENSE14_Msk               (_UINT32_(0x7) << EIC_CONFIG1_SENSE14_Pos)           /* (EIC_CONFIG1) Input Sense Configuration 14 Mask */
#define EIC_CONFIG1_SENSE14(value)            (EIC_CONFIG1_SENSE14_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE14_Pos)) /* Assigment of value for SENSE14 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE14_NONE_Val        _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE14_RISE_Val        _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE14_FALL_Val        _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE14_BOTH_Val        _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE14_HIGH_Val        _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE14_LOW_Val         _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE14_NONE              (EIC_CONFIG1_SENSE14_NONE_Val << EIC_CONFIG1_SENSE14_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE14_RISE              (EIC_CONFIG1_SENSE14_RISE_Val << EIC_CONFIG1_SENSE14_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE14_FALL              (EIC_CONFIG1_SENSE14_FALL_Val << EIC_CONFIG1_SENSE14_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE14_BOTH              (EIC_CONFIG1_SENSE14_BOTH_Val << EIC_CONFIG1_SENSE14_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE14_HIGH              (EIC_CONFIG1_SENSE14_HIGH_Val << EIC_CONFIG1_SENSE14_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE14_LOW               (EIC_CONFIG1_SENSE14_LOW_Val << EIC_CONFIG1_SENSE14_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN14_Pos              _UINT32_(27)                                         /* (EIC_CONFIG1) Filter Enable 14 Position */
#define EIC_CONFIG1_FILTEN14_Msk              (_UINT32_(0x1) << EIC_CONFIG1_FILTEN14_Pos)          /* (EIC_CONFIG1) Filter Enable 14 Mask */
#define EIC_CONFIG1_FILTEN14(value)           (EIC_CONFIG1_FILTEN14_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN14_Pos)) /* Assigment of value for FILTEN14 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_SENSE15_Pos               _UINT32_(28)                                         /* (EIC_CONFIG1) Input Sense Configuration 15 Position */
#define EIC_CONFIG1_SENSE15_Msk               (_UINT32_(0x7) << EIC_CONFIG1_SENSE15_Pos)           /* (EIC_CONFIG1) Input Sense Configuration 15 Mask */
#define EIC_CONFIG1_SENSE15(value)            (EIC_CONFIG1_SENSE15_Msk & (_UINT32_(value) << EIC_CONFIG1_SENSE15_Pos)) /* Assigment of value for SENSE15 in the EIC_CONFIG1 register */
#define   EIC_CONFIG1_SENSE15_NONE_Val        _UINT32_(0x0)                                        /* (EIC_CONFIG1) No detection  */
#define   EIC_CONFIG1_SENSE15_RISE_Val        _UINT32_(0x1)                                        /* (EIC_CONFIG1) Rising edge detection  */
#define   EIC_CONFIG1_SENSE15_FALL_Val        _UINT32_(0x2)                                        /* (EIC_CONFIG1) Falling edge detection  */
#define   EIC_CONFIG1_SENSE15_BOTH_Val        _UINT32_(0x3)                                        /* (EIC_CONFIG1) Both edges detection  */
#define   EIC_CONFIG1_SENSE15_HIGH_Val        _UINT32_(0x4)                                        /* (EIC_CONFIG1) High level detection  */
#define   EIC_CONFIG1_SENSE15_LOW_Val         _UINT32_(0x5)                                        /* (EIC_CONFIG1) Low level detection  */
#define EIC_CONFIG1_SENSE15_NONE              (EIC_CONFIG1_SENSE15_NONE_Val << EIC_CONFIG1_SENSE15_Pos) /* (EIC_CONFIG1) No detection Position  */
#define EIC_CONFIG1_SENSE15_RISE              (EIC_CONFIG1_SENSE15_RISE_Val << EIC_CONFIG1_SENSE15_Pos) /* (EIC_CONFIG1) Rising edge detection Position  */
#define EIC_CONFIG1_SENSE15_FALL              (EIC_CONFIG1_SENSE15_FALL_Val << EIC_CONFIG1_SENSE15_Pos) /* (EIC_CONFIG1) Falling edge detection Position  */
#define EIC_CONFIG1_SENSE15_BOTH              (EIC_CONFIG1_SENSE15_BOTH_Val << EIC_CONFIG1_SENSE15_Pos) /* (EIC_CONFIG1) Both edges detection Position  */
#define EIC_CONFIG1_SENSE15_HIGH              (EIC_CONFIG1_SENSE15_HIGH_Val << EIC_CONFIG1_SENSE15_Pos) /* (EIC_CONFIG1) High level detection Position  */
#define EIC_CONFIG1_SENSE15_LOW               (EIC_CONFIG1_SENSE15_LOW_Val << EIC_CONFIG1_SENSE15_Pos) /* (EIC_CONFIG1) Low level detection Position  */
#define EIC_CONFIG1_FILTEN15_Pos              _UINT32_(31)                                         /* (EIC_CONFIG1) Filter Enable 15 Position */
#define EIC_CONFIG1_FILTEN15_Msk              (_UINT32_(0x1) << EIC_CONFIG1_FILTEN15_Pos)          /* (EIC_CONFIG1) Filter Enable 15 Mask */
#define EIC_CONFIG1_FILTEN15(value)           (EIC_CONFIG1_FILTEN15_Msk & (_UINT32_(value) << EIC_CONFIG1_FILTEN15_Pos)) /* Assigment of value for FILTEN15 in the EIC_CONFIG1 register */
#define EIC_CONFIG1_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (EIC_CONFIG1) Register Mask  */


/* -------- EIC_DEBOUNCEN : (EIC Offset: 0x30) (R/W 32) Debouncer Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DEBOUNCEN:16;     /*!< bit:  0..15  Debouncer Enable                   */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_DEBOUNCEN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_DEBOUNCEN_RESETVALUE              _UINT32_(0x00)                                       /*  (EIC_DEBOUNCEN) Debouncer Enable  Reset Value */

#define EIC_DEBOUNCEN_DEBOUNCEN_Pos           _UINT32_(0)                                          /* (EIC_DEBOUNCEN) Debouncer Enable Position */
#define EIC_DEBOUNCEN_DEBOUNCEN_Msk           (_UINT32_(0xFFFF) << EIC_DEBOUNCEN_DEBOUNCEN_Pos)    /* (EIC_DEBOUNCEN) Debouncer Enable Mask */
#define EIC_DEBOUNCEN_DEBOUNCEN(value)        (EIC_DEBOUNCEN_DEBOUNCEN_Msk & (_UINT32_(value) << EIC_DEBOUNCEN_DEBOUNCEN_Pos)) /* Assigment of value for DEBOUNCEN in the EIC_DEBOUNCEN register */
#define EIC_DEBOUNCEN_Msk                     _UINT32_(0x0000FFFF)                                 /* (EIC_DEBOUNCEN) Register Mask  */


/* -------- EIC_DPRESCALER : (EIC Offset: 0x34) (R/W 32) Debouncer Prescaler -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PRESCALER0:3;     /*!< bit:  0.. 2  Debouncer Prescaler                */
    uint32_t STATES0:1;        /*!< bit:      3  Debouncer number of states         */
    uint32_t PRESCALER1:3;     /*!< bit:  4.. 6  Debouncer Prescaler                */
    uint32_t STATES1:1;        /*!< bit:      7  Debouncer number of states         */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t TICKON:1;         /*!< bit:     16  Pin Sampler frequency selection    */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_DPRESCALER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_DPRESCALER_RESETVALUE             _UINT32_(0x00)                                       /*  (EIC_DPRESCALER) Debouncer Prescaler  Reset Value */

#define EIC_DPRESCALER_PRESCALER0_Pos         _UINT32_(0)                                          /* (EIC_DPRESCALER) Debouncer Prescaler Position */
#define EIC_DPRESCALER_PRESCALER0_Msk         (_UINT32_(0x7) << EIC_DPRESCALER_PRESCALER0_Pos)     /* (EIC_DPRESCALER) Debouncer Prescaler Mask */
#define EIC_DPRESCALER_PRESCALER0(value)      (EIC_DPRESCALER_PRESCALER0_Msk & (_UINT32_(value) << EIC_DPRESCALER_PRESCALER0_Pos)) /* Assigment of value for PRESCALER0 in the EIC_DPRESCALER register */
#define   EIC_DPRESCALER_PRESCALER0_DIV2_Val  _UINT32_(0x0)                                        /* (EIC_DPRESCALER) EIC clock divided by 2  */
#define   EIC_DPRESCALER_PRESCALER0_DIV4_Val  _UINT32_(0x1)                                        /* (EIC_DPRESCALER) EIC clock divided by 4  */
#define   EIC_DPRESCALER_PRESCALER0_DIV8_Val  _UINT32_(0x2)                                        /* (EIC_DPRESCALER) EIC clock divided by 8  */
#define   EIC_DPRESCALER_PRESCALER0_DIV16_Val _UINT32_(0x3)                                        /* (EIC_DPRESCALER) EIC clock divided by 16  */
#define   EIC_DPRESCALER_PRESCALER0_DIV32_Val _UINT32_(0x4)                                        /* (EIC_DPRESCALER) EIC clock divided by 32  */
#define   EIC_DPRESCALER_PRESCALER0_DIV64_Val _UINT32_(0x5)                                        /* (EIC_DPRESCALER) EIC clock divided by 64  */
#define   EIC_DPRESCALER_PRESCALER0_DIV128_Val _UINT32_(0x6)                                        /* (EIC_DPRESCALER) EIC clock divided by 128  */
#define   EIC_DPRESCALER_PRESCALER0_DIV256_Val _UINT32_(0x7)                                        /* (EIC_DPRESCALER) EIC clock divided by 256  */
#define EIC_DPRESCALER_PRESCALER0_DIV2        (EIC_DPRESCALER_PRESCALER0_DIV2_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 2 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV4        (EIC_DPRESCALER_PRESCALER0_DIV4_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 4 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV8        (EIC_DPRESCALER_PRESCALER0_DIV8_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 8 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV16       (EIC_DPRESCALER_PRESCALER0_DIV16_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 16 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV32       (EIC_DPRESCALER_PRESCALER0_DIV32_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 32 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV64       (EIC_DPRESCALER_PRESCALER0_DIV64_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 64 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV128      (EIC_DPRESCALER_PRESCALER0_DIV128_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 128 Position  */
#define EIC_DPRESCALER_PRESCALER0_DIV256      (EIC_DPRESCALER_PRESCALER0_DIV256_Val << EIC_DPRESCALER_PRESCALER0_Pos) /* (EIC_DPRESCALER) EIC clock divided by 256 Position  */
#define EIC_DPRESCALER_STATES0_Pos            _UINT32_(3)                                          /* (EIC_DPRESCALER) Debouncer number of states Position */
#define EIC_DPRESCALER_STATES0_Msk            (_UINT32_(0x1) << EIC_DPRESCALER_STATES0_Pos)        /* (EIC_DPRESCALER) Debouncer number of states Mask */
#define EIC_DPRESCALER_STATES0(value)         (EIC_DPRESCALER_STATES0_Msk & (_UINT32_(value) << EIC_DPRESCALER_STATES0_Pos)) /* Assigment of value for STATES0 in the EIC_DPRESCALER register */
#define   EIC_DPRESCALER_STATES0_LFREQ3_Val   _UINT32_(0x0)                                        /* (EIC_DPRESCALER) 3 low frequency samples  */
#define   EIC_DPRESCALER_STATES0_LFREQ7_Val   _UINT32_(0x1)                                        /* (EIC_DPRESCALER) 7 low frequency samples  */
#define EIC_DPRESCALER_STATES0_LFREQ3         (EIC_DPRESCALER_STATES0_LFREQ3_Val << EIC_DPRESCALER_STATES0_Pos) /* (EIC_DPRESCALER) 3 low frequency samples Position  */
#define EIC_DPRESCALER_STATES0_LFREQ7         (EIC_DPRESCALER_STATES0_LFREQ7_Val << EIC_DPRESCALER_STATES0_Pos) /* (EIC_DPRESCALER) 7 low frequency samples Position  */
#define EIC_DPRESCALER_PRESCALER1_Pos         _UINT32_(4)                                          /* (EIC_DPRESCALER) Debouncer Prescaler Position */
#define EIC_DPRESCALER_PRESCALER1_Msk         (_UINT32_(0x7) << EIC_DPRESCALER_PRESCALER1_Pos)     /* (EIC_DPRESCALER) Debouncer Prescaler Mask */
#define EIC_DPRESCALER_PRESCALER1(value)      (EIC_DPRESCALER_PRESCALER1_Msk & (_UINT32_(value) << EIC_DPRESCALER_PRESCALER1_Pos)) /* Assigment of value for PRESCALER1 in the EIC_DPRESCALER register */
#define   EIC_DPRESCALER_PRESCALER1_DIV2_Val  _UINT32_(0x0)                                        /* (EIC_DPRESCALER) EIC clock divided by 2  */
#define   EIC_DPRESCALER_PRESCALER1_DIV4_Val  _UINT32_(0x1)                                        /* (EIC_DPRESCALER) EIC clock divided by 4  */
#define   EIC_DPRESCALER_PRESCALER1_DIV8_Val  _UINT32_(0x2)                                        /* (EIC_DPRESCALER) EIC clock divided by 8  */
#define   EIC_DPRESCALER_PRESCALER1_DIV16_Val _UINT32_(0x3)                                        /* (EIC_DPRESCALER) EIC clock divided by 16  */
#define   EIC_DPRESCALER_PRESCALER1_DIV32_Val _UINT32_(0x4)                                        /* (EIC_DPRESCALER) EIC clock divided by 32  */
#define   EIC_DPRESCALER_PRESCALER1_DIV64_Val _UINT32_(0x5)                                        /* (EIC_DPRESCALER) EIC clock divided by 64  */
#define   EIC_DPRESCALER_PRESCALER1_DIV128_Val _UINT32_(0x6)                                        /* (EIC_DPRESCALER) EIC clock divided by 128  */
#define   EIC_DPRESCALER_PRESCALER1_DIV256_Val _UINT32_(0x7)                                        /* (EIC_DPRESCALER) EIC clock divided by 256  */
#define EIC_DPRESCALER_PRESCALER1_DIV2        (EIC_DPRESCALER_PRESCALER1_DIV2_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 2 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV4        (EIC_DPRESCALER_PRESCALER1_DIV4_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 4 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV8        (EIC_DPRESCALER_PRESCALER1_DIV8_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 8 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV16       (EIC_DPRESCALER_PRESCALER1_DIV16_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 16 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV32       (EIC_DPRESCALER_PRESCALER1_DIV32_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 32 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV64       (EIC_DPRESCALER_PRESCALER1_DIV64_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 64 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV128      (EIC_DPRESCALER_PRESCALER1_DIV128_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 128 Position  */
#define EIC_DPRESCALER_PRESCALER1_DIV256      (EIC_DPRESCALER_PRESCALER1_DIV256_Val << EIC_DPRESCALER_PRESCALER1_Pos) /* (EIC_DPRESCALER) EIC clock divided by 256 Position  */
#define EIC_DPRESCALER_STATES1_Pos            _UINT32_(7)                                          /* (EIC_DPRESCALER) Debouncer number of states Position */
#define EIC_DPRESCALER_STATES1_Msk            (_UINT32_(0x1) << EIC_DPRESCALER_STATES1_Pos)        /* (EIC_DPRESCALER) Debouncer number of states Mask */
#define EIC_DPRESCALER_STATES1(value)         (EIC_DPRESCALER_STATES1_Msk & (_UINT32_(value) << EIC_DPRESCALER_STATES1_Pos)) /* Assigment of value for STATES1 in the EIC_DPRESCALER register */
#define   EIC_DPRESCALER_STATES1_LFREQ3_Val   _UINT32_(0x0)                                        /* (EIC_DPRESCALER) 3 low frequency samples  */
#define   EIC_DPRESCALER_STATES1_LFREQ7_Val   _UINT32_(0x1)                                        /* (EIC_DPRESCALER) 7 low frequency samples  */
#define EIC_DPRESCALER_STATES1_LFREQ3         (EIC_DPRESCALER_STATES1_LFREQ3_Val << EIC_DPRESCALER_STATES1_Pos) /* (EIC_DPRESCALER) 3 low frequency samples Position  */
#define EIC_DPRESCALER_STATES1_LFREQ7         (EIC_DPRESCALER_STATES1_LFREQ7_Val << EIC_DPRESCALER_STATES1_Pos) /* (EIC_DPRESCALER) 7 low frequency samples Position  */
#define EIC_DPRESCALER_TICKON_Pos             _UINT32_(16)                                         /* (EIC_DPRESCALER) Pin Sampler frequency selection Position */
#define EIC_DPRESCALER_TICKON_Msk             (_UINT32_(0x1) << EIC_DPRESCALER_TICKON_Pos)         /* (EIC_DPRESCALER) Pin Sampler frequency selection Mask */
#define EIC_DPRESCALER_TICKON(value)          (EIC_DPRESCALER_TICKON_Msk & (_UINT32_(value) << EIC_DPRESCALER_TICKON_Pos)) /* Assigment of value for TICKON in the EIC_DPRESCALER register */
#define   EIC_DPRESCALER_TICKON_CLK_GCLK_EIC_Val _UINT32_(0x0)                                        /* (EIC_DPRESCALER) Clocked by GCLK  */
#define   EIC_DPRESCALER_TICKON_CLK_LFREQ_Val _UINT32_(0x1)                                        /* (EIC_DPRESCALER) Clocked by Low Frequency Clock  */
#define EIC_DPRESCALER_TICKON_CLK_GCLK_EIC    (EIC_DPRESCALER_TICKON_CLK_GCLK_EIC_Val << EIC_DPRESCALER_TICKON_Pos) /* (EIC_DPRESCALER) Clocked by GCLK Position  */
#define EIC_DPRESCALER_TICKON_CLK_LFREQ       (EIC_DPRESCALER_TICKON_CLK_LFREQ_Val << EIC_DPRESCALER_TICKON_Pos) /* (EIC_DPRESCALER) Clocked by Low Frequency Clock Position  */
#define EIC_DPRESCALER_Msk                    _UINT32_(0x000100FF)                                 /* (EIC_DPRESCALER) Register Mask  */


/* -------- EIC_PINSTATE : (EIC Offset: 0x38) ( R/ 32) Pin State -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PINSTATE:16;      /*!< bit:  0..15  Pin State                          */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_PINSTATE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_PINSTATE_RESETVALUE               _UINT32_(0x00)                                       /*  (EIC_PINSTATE) Pin State  Reset Value */

#define EIC_PINSTATE_PINSTATE_Pos             _UINT32_(0)                                          /* (EIC_PINSTATE) Pin State Position */
#define EIC_PINSTATE_PINSTATE_Msk             (_UINT32_(0xFFFF) << EIC_PINSTATE_PINSTATE_Pos)      /* (EIC_PINSTATE) Pin State Mask */
#define EIC_PINSTATE_PINSTATE(value)          (EIC_PINSTATE_PINSTATE_Msk & (_UINT32_(value) << EIC_PINSTATE_PINSTATE_Pos)) /* Assigment of value for PINSTATE in the EIC_PINSTATE register */
#define EIC_PINSTATE_Msk                      _UINT32_(0x0000FFFF)                                 /* (EIC_PINSTATE) Register Mask  */


/** \brief EIC register offsets definitions */
#define EIC_CTRLA_REG_OFST             _UINT32_(0x00)      /* (EIC_CTRLA) Control A Offset */
#define EIC_NMICTRL_REG_OFST           _UINT32_(0x01)      /* (EIC_NMICTRL) Non-Maskable Interrupt Control Offset */
#define EIC_NMIFLAG_REG_OFST           _UINT32_(0x02)      /* (EIC_NMIFLAG) Non-Maskable Interrupt Flag Status and Clear Offset */
#define EIC_SYNCBUSY_REG_OFST          _UINT32_(0x04)      /* (EIC_SYNCBUSY) Synchronization Busy Offset */
#define EIC_EVCTRL_REG_OFST            _UINT32_(0x08)      /* (EIC_EVCTRL) Event Control Offset */
#define EIC_INTENCLR_REG_OFST          _UINT32_(0x0C)      /* (EIC_INTENCLR) Interrupt Enable Clear Offset */
#define EIC_INTENSET_REG_OFST          _UINT32_(0x10)      /* (EIC_INTENSET) Interrupt Enable Set Offset */
#define EIC_INTFLAG_REG_OFST           _UINT32_(0x14)      /* (EIC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define EIC_ASYNCH_REG_OFST            _UINT32_(0x18)      /* (EIC_ASYNCH) External Interrupt Asynchronous Mode Offset */
#define EIC_CONFIG0_REG_OFST           _UINT32_(0x1C)      /* (EIC_CONFIG0) External Interrupt Sense Configuration Offset */
#define EIC_CONFIG1_REG_OFST           _UINT32_(0x20)      /* (EIC_CONFIG1) External Interrupt Sense Configuration Offset */
#define EIC_DEBOUNCEN_REG_OFST         _UINT32_(0x30)      /* (EIC_DEBOUNCEN) Debouncer Enable Offset */
#define EIC_DPRESCALER_REG_OFST        _UINT32_(0x34)      /* (EIC_DPRESCALER) Debouncer Prescaler Offset */
#define EIC_PINSTATE_REG_OFST          _UINT32_(0x38)      /* (EIC_PINSTATE) Pin State Offset */

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO EIC_CTRLA_Type            CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control A */
  __IO EIC_NMICTRL_Type          NMICTRL;     /**< \brief Offset: 0x01 (R/W  8) Non-Maskable Interrupt Control */
  __IO EIC_NMIFLAG_Type          NMIFLAG;     /**< \brief Offset: 0x02 (R/W 16) Non-Maskable Interrupt Flag Status and Clear */
  __I  EIC_SYNCBUSY_Type         SYNCBUSY;    /**< \brief Offset: 0x04 (R/  32) Synchronization Busy */
  __IO EIC_EVCTRL_Type           EVCTRL;      /**< \brief Offset: 0x08 (R/W 32) Event Control */
  __IO EIC_INTENCLR_Type         INTENCLR;    /**< \brief Offset: 0x0C (R/W 32) Interrupt Enable Clear */
  __IO EIC_INTENSET_Type         INTENSET;    /**< \brief Offset: 0x10 (R/W 32) Interrupt Enable Set */
  __IO EIC_INTFLAG_Type          INTFLAG;     /**< \brief Offset: 0x14 (R/W 32) Interrupt Flag Status and Clear */
  __IO EIC_ASYNCH_Type           ASYNCH;      /**< \brief Offset: 0x18 (R/W 32) External Interrupt Asynchronous Mode */
  __IO EIC_CONFIG_Type           CONFIG[2];   /**< \brief Offset: 0x1C (R/W 32) External Interrupt Sense Configuration */
       RoReg8                    Reserved1[0xC];
  __IO EIC_DEBOUNCEN_Type        DEBOUNCEN;   /**< \brief Offset: 0x30 (R/W 32) Debouncer Enable */
  __IO EIC_DPRESCALER_Type       DPRESCALER;  /**< \brief Offset: 0x34 (R/W 32) Debouncer Prescaler */
  __I  EIC_PINSTATE_Type         PINSTATE;    /**< \brief Offset: 0x38 (R/  32) Pin State */
} Eic;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EIC register API structure */
typedef struct
{  /* External Interrupt Controller */
  __IO  uint8_t                        EIC_CTRLA;          /**< Offset: 0x00 (R/W  8) Control A */
  __IO  uint8_t                        EIC_NMICTRL;        /**< Offset: 0x01 (R/W  8) Non-Maskable Interrupt Control */
  __IO  uint16_t                       EIC_NMIFLAG;        /**< Offset: 0x02 (R/W  16) Non-Maskable Interrupt Flag Status and Clear */
  __I   uint32_t                       EIC_SYNCBUSY;       /**< Offset: 0x04 (R/   32) Synchronization Busy */
  __IO  uint32_t                       EIC_EVCTRL;         /**< Offset: 0x08 (R/W  32) Event Control */
  __IO  uint32_t                       EIC_INTENCLR;       /**< Offset: 0x0C (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       EIC_INTENSET;       /**< Offset: 0x10 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       EIC_INTFLAG;        /**< Offset: 0x14 (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       EIC_ASYNCH;         /**< Offset: 0x18 (R/W  32) External Interrupt Asynchronous Mode */
  __IO  uint32_t                       EIC_CONFIG0;        /**< Offset: 0x1C (R/W  32) External Interrupt Sense Configuration */
  __IO  uint32_t                       EIC_CONFIG1;        /**< Offset: 0x20 (R/W  32) External Interrupt Sense Configuration */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       EIC_DEBOUNCEN;      /**< Offset: 0x30 (R/W  32) Debouncer Enable */
  __IO  uint32_t                       EIC_DPRESCALER;     /**< Offset: 0x34 (R/W  32) Debouncer Prescaler */
  __I   uint32_t                       EIC_PINSTATE;       /**< Offset: 0x38 (R/   32) Pin State */
} eic_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXSG41_EIC_COMPONENT_H_ */
