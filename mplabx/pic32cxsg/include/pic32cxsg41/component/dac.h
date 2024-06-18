/*
 * Component description for DAC
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
#ifndef _PIC32CXSG41_DAC_COMPONENT_H_
#define _PIC32CXSG41_DAC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DAC                                          */
/* ************************************************************************** */

/* -------- DAC_CTRLA : (DAC Offset: 0x00) (R/W 8) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  ENABLE:1;         /*!< bit:      1  Enable DAC Controller              */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_CTRLA_RESETVALUE                  _UINT8_(0x00)                                        /*  (DAC_CTRLA) Control A  Reset Value */

#define DAC_CTRLA_SWRST_Pos                   _UINT8_(0)                                           /* (DAC_CTRLA) Software Reset Position */
#define DAC_CTRLA_SWRST_Msk                   (_UINT8_(0x1) << DAC_CTRLA_SWRST_Pos)                /* (DAC_CTRLA) Software Reset Mask */
#define DAC_CTRLA_SWRST(value)                (DAC_CTRLA_SWRST_Msk & (_UINT8_(value) << DAC_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the DAC_CTRLA register */
#define DAC_CTRLA_ENABLE_Pos                  _UINT8_(1)                                           /* (DAC_CTRLA) Enable DAC Controller Position */
#define DAC_CTRLA_ENABLE_Msk                  (_UINT8_(0x1) << DAC_CTRLA_ENABLE_Pos)               /* (DAC_CTRLA) Enable DAC Controller Mask */
#define DAC_CTRLA_ENABLE(value)               (DAC_CTRLA_ENABLE_Msk & (_UINT8_(value) << DAC_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the DAC_CTRLA register */
#define DAC_CTRLA_Msk                         _UINT8_(0x03)                                        /* (DAC_CTRLA) Register Mask  */


/* -------- DAC_CTRLB : (DAC Offset: 0x01) (R/W 8) Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIFF:1;           /*!< bit:      0  Differential mode enable           */
    uint8_t  REFSEL:2;         /*!< bit:  1.. 2  Reference Selection for DAC0/1     */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_CTRLB_RESETVALUE                  _UINT8_(0x02)                                        /*  (DAC_CTRLB) Control B  Reset Value */

#define DAC_CTRLB_DIFF_Pos                    _UINT8_(0)                                           /* (DAC_CTRLB) Differential mode enable Position */
#define DAC_CTRLB_DIFF_Msk                    (_UINT8_(0x1) << DAC_CTRLB_DIFF_Pos)                 /* (DAC_CTRLB) Differential mode enable Mask */
#define DAC_CTRLB_DIFF(value)                 (DAC_CTRLB_DIFF_Msk & (_UINT8_(value) << DAC_CTRLB_DIFF_Pos)) /* Assigment of value for DIFF in the DAC_CTRLB register */
#define DAC_CTRLB_REFSEL_Pos                  _UINT8_(1)                                           /* (DAC_CTRLB) Reference Selection for DAC0/1 Position */
#define DAC_CTRLB_REFSEL_Msk                  (_UINT8_(0x3) << DAC_CTRLB_REFSEL_Pos)               /* (DAC_CTRLB) Reference Selection for DAC0/1 Mask */
#define DAC_CTRLB_REFSEL(value)               (DAC_CTRLB_REFSEL_Msk & (_UINT8_(value) << DAC_CTRLB_REFSEL_Pos)) /* Assigment of value for REFSEL in the DAC_CTRLB register */
#define   DAC_CTRLB_REFSEL_VREFAU_Val         _UINT8_(0x0)                                         /* (DAC_CTRLB) External reference unbuffered  */
#define   DAC_CTRLB_REFSEL_AVDD_Val           _UINT8_(0x1)                                         /* (DAC_CTRLB) Analog supply  */
#define   DAC_CTRLB_REFSEL_VREFAB_Val         _UINT8_(0x2)                                         /* (DAC_CTRLB) External reference buffered  */
#define   DAC_CTRLB_REFSEL_INTREF_Val         _UINT8_(0x3)                                         /* (DAC_CTRLB) Internal bandgap reference  */
#define DAC_CTRLB_REFSEL_VREFAU               (DAC_CTRLB_REFSEL_VREFAU_Val << DAC_CTRLB_REFSEL_Pos) /* (DAC_CTRLB) External reference unbuffered Position  */
#define DAC_CTRLB_REFSEL_AVDD                 (DAC_CTRLB_REFSEL_AVDD_Val << DAC_CTRLB_REFSEL_Pos)  /* (DAC_CTRLB) Analog supply Position  */
#define DAC_CTRLB_REFSEL_VREFAB               (DAC_CTRLB_REFSEL_VREFAB_Val << DAC_CTRLB_REFSEL_Pos) /* (DAC_CTRLB) External reference buffered Position  */
#define DAC_CTRLB_REFSEL_INTREF               (DAC_CTRLB_REFSEL_INTREF_Val << DAC_CTRLB_REFSEL_Pos) /* (DAC_CTRLB) Internal bandgap reference Position  */
#define DAC_CTRLB_Msk                         _UINT8_(0x07)                                        /* (DAC_CTRLB) Register Mask  */


/* -------- DAC_EVCTRL : (DAC Offset: 0x02) (R/W 8) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  STARTEI0:1;       /*!< bit:      0  Start Conversion Event Input DAC 0 */
    uint8_t  STARTEI1:1;       /*!< bit:      1  Start Conversion Event Input DAC 1 */
    uint8_t  EMPTYEO0:1;       /*!< bit:      2  Data Buffer Empty Event Output DAC 0 */
    uint8_t  EMPTYEO1:1;       /*!< bit:      3  Data Buffer Empty Event Output DAC 1 */
    uint8_t  INVEI0:1;         /*!< bit:      4  Enable Invertion of DAC 0 input event */
    uint8_t  INVEI1:1;         /*!< bit:      5  Enable Invertion of DAC 1 input event */
    uint8_t  Reserved1:1;      /*!< bit:      6  Result Ready Event Output 0        */
    uint8_t  Reserved2:1;      /*!< bit:      7  Result Ready Event Output 1        */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  STARTEI:2;        /*!< bit:  0.. 1  Start Conversion Event Input DAC x */
    uint8_t  EMPTYEO:2;        /*!< bit:  2.. 3  Data Buffer Empty Event Output DAC x */
    uint8_t  INVEI:2;          /*!< bit:  4.. 5  Enable Invertion of DAC x input event */
    uint8_t  Reserved3:2;      /*!< bit:  6.. 7  Result Ready Event Output x        */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_EVCTRL_RESETVALUE                 _UINT8_(0x00)                                        /*  (DAC_EVCTRL) Event Control  Reset Value */

#define DAC_EVCTRL_STARTEI0_Pos               _UINT8_(0)                                           /* (DAC_EVCTRL) Start Conversion Event Input DAC 0 Position */
#define DAC_EVCTRL_STARTEI0_Msk               (_UINT8_(0x1) << DAC_EVCTRL_STARTEI0_Pos)            /* (DAC_EVCTRL) Start Conversion Event Input DAC 0 Mask */
#define DAC_EVCTRL_STARTEI0(value)            (DAC_EVCTRL_STARTEI0_Msk & (_UINT8_(value) << DAC_EVCTRL_STARTEI0_Pos)) /* Assigment of value for STARTEI0 in the DAC_EVCTRL register */
#define DAC_EVCTRL_STARTEI1_Pos               _UINT8_(1)                                           /* (DAC_EVCTRL) Start Conversion Event Input DAC 1 Position */
#define DAC_EVCTRL_STARTEI1_Msk               (_UINT8_(0x1) << DAC_EVCTRL_STARTEI1_Pos)            /* (DAC_EVCTRL) Start Conversion Event Input DAC 1 Mask */
#define DAC_EVCTRL_STARTEI1(value)            (DAC_EVCTRL_STARTEI1_Msk & (_UINT8_(value) << DAC_EVCTRL_STARTEI1_Pos)) /* Assigment of value for STARTEI1 in the DAC_EVCTRL register */
#define DAC_EVCTRL_EMPTYEO0_Pos               _UINT8_(2)                                           /* (DAC_EVCTRL) Data Buffer Empty Event Output DAC 0 Position */
#define DAC_EVCTRL_EMPTYEO0_Msk               (_UINT8_(0x1) << DAC_EVCTRL_EMPTYEO0_Pos)            /* (DAC_EVCTRL) Data Buffer Empty Event Output DAC 0 Mask */
#define DAC_EVCTRL_EMPTYEO0(value)            (DAC_EVCTRL_EMPTYEO0_Msk & (_UINT8_(value) << DAC_EVCTRL_EMPTYEO0_Pos)) /* Assigment of value for EMPTYEO0 in the DAC_EVCTRL register */
#define DAC_EVCTRL_EMPTYEO1_Pos               _UINT8_(3)                                           /* (DAC_EVCTRL) Data Buffer Empty Event Output DAC 1 Position */
#define DAC_EVCTRL_EMPTYEO1_Msk               (_UINT8_(0x1) << DAC_EVCTRL_EMPTYEO1_Pos)            /* (DAC_EVCTRL) Data Buffer Empty Event Output DAC 1 Mask */
#define DAC_EVCTRL_EMPTYEO1(value)            (DAC_EVCTRL_EMPTYEO1_Msk & (_UINT8_(value) << DAC_EVCTRL_EMPTYEO1_Pos)) /* Assigment of value for EMPTYEO1 in the DAC_EVCTRL register */
#define DAC_EVCTRL_INVEI0_Pos                 _UINT8_(4)                                           /* (DAC_EVCTRL) Enable Invertion of DAC 0 input event Position */
#define DAC_EVCTRL_INVEI0_Msk                 (_UINT8_(0x1) << DAC_EVCTRL_INVEI0_Pos)              /* (DAC_EVCTRL) Enable Invertion of DAC 0 input event Mask */
#define DAC_EVCTRL_INVEI0(value)              (DAC_EVCTRL_INVEI0_Msk & (_UINT8_(value) << DAC_EVCTRL_INVEI0_Pos)) /* Assigment of value for INVEI0 in the DAC_EVCTRL register */
#define DAC_EVCTRL_INVEI1_Pos                 _UINT8_(5)                                           /* (DAC_EVCTRL) Enable Invertion of DAC 1 input event Position */
#define DAC_EVCTRL_INVEI1_Msk                 (_UINT8_(0x1) << DAC_EVCTRL_INVEI1_Pos)              /* (DAC_EVCTRL) Enable Invertion of DAC 1 input event Mask */
#define DAC_EVCTRL_INVEI1(value)              (DAC_EVCTRL_INVEI1_Msk & (_UINT8_(value) << DAC_EVCTRL_INVEI1_Pos)) /* Assigment of value for INVEI1 in the DAC_EVCTRL register */
#define DAC_EVCTRL_Msk                        _UINT8_(0x3F)                                        /* (DAC_EVCTRL) Register Mask  */

#define DAC_EVCTRL_STARTEI_Pos                _UINT8_(0)                                           /* (DAC_EVCTRL Position) Start Conversion Event Input DAC x */
#define DAC_EVCTRL_STARTEI_Msk                (_UINT8_(0x3) << DAC_EVCTRL_STARTEI_Pos)             /* (DAC_EVCTRL Mask) STARTEI */
#define DAC_EVCTRL_STARTEI(value)             (DAC_EVCTRL_STARTEI_Msk & (_UINT8_(value) << DAC_EVCTRL_STARTEI_Pos)) 
#define DAC_EVCTRL_EMPTYEO_Pos                _UINT8_(2)                                           /* (DAC_EVCTRL Position) Data Buffer Empty Event Output DAC x */
#define DAC_EVCTRL_EMPTYEO_Msk                (_UINT8_(0x3) << DAC_EVCTRL_EMPTYEO_Pos)             /* (DAC_EVCTRL Mask) EMPTYEO */
#define DAC_EVCTRL_EMPTYEO(value)             (DAC_EVCTRL_EMPTYEO_Msk & (_UINT8_(value) << DAC_EVCTRL_EMPTYEO_Pos)) 
#define DAC_EVCTRL_INVEI_Pos                  _UINT8_(4)                                           /* (DAC_EVCTRL Position) Enable Invertion of DAC x input event */
#define DAC_EVCTRL_INVEI_Msk                  (_UINT8_(0x3) << DAC_EVCTRL_INVEI_Pos)               /* (DAC_EVCTRL Mask) INVEI */
#define DAC_EVCTRL_INVEI(value)               (DAC_EVCTRL_INVEI_Msk & (_UINT8_(value) << DAC_EVCTRL_INVEI_Pos)) 

/* -------- DAC_INTENCLR : (DAC Offset: 0x04) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  UNDERRUN0:1;      /*!< bit:      0  Underrun 0 Interrupt Enable        */
    uint8_t  UNDERRUN1:1;      /*!< bit:      1  Underrun 1 Interrupt Enable        */
    uint8_t  EMPTY0:1;         /*!< bit:      2  Data Buffer 0 Empty Interrupt Enable */
    uint8_t  EMPTY1:1;         /*!< bit:      3  Data Buffer 1 Empty Interrupt Enable */
    uint8_t  Reserved1:1;        /*!< bit:      4  Result 0 Ready Interrupt Enable    */
    uint8_t  Reserved2:1;        /*!< bit:      5  Result 1 Ready Interrupt Enable    */
    uint8_t  Reserved3:1;       /*!< bit:      6  Overrun 0 Interrupt Enable         */
    uint8_t  Reserved4:1;       /*!< bit:      7  Overrun 1 Interrupt Enable         */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  UNDERRUN:2;       /*!< bit:  0.. 1  Underrun x Interrupt Enable        */
    uint8_t  EMPTY:2;          /*!< bit:  2.. 3  Data Buffer x Empty Interrupt Enable */
    uint8_t  Reserved5:2;         /*!< bit:  4.. 5  Result x Ready Interrupt Enable    */
    uint8_t  Reserved6:2;        /*!< bit:  6.. 7  Overrun x Interrupt Enable         */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_INTENCLR_RESETVALUE               _UINT8_(0x00)                                        /*  (DAC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define DAC_INTENCLR_UNDERRUN0_Pos            _UINT8_(0)                                           /* (DAC_INTENCLR) Underrun 0 Interrupt Enable Position */
#define DAC_INTENCLR_UNDERRUN0_Msk            (_UINT8_(0x1) << DAC_INTENCLR_UNDERRUN0_Pos)         /* (DAC_INTENCLR) Underrun 0 Interrupt Enable Mask */
#define DAC_INTENCLR_UNDERRUN0(value)         (DAC_INTENCLR_UNDERRUN0_Msk & (_UINT8_(value) << DAC_INTENCLR_UNDERRUN0_Pos)) /* Assigment of value for UNDERRUN0 in the DAC_INTENCLR register */
#define DAC_INTENCLR_UNDERRUN1_Pos            _UINT8_(1)                                           /* (DAC_INTENCLR) Underrun 1 Interrupt Enable Position */
#define DAC_INTENCLR_UNDERRUN1_Msk            (_UINT8_(0x1) << DAC_INTENCLR_UNDERRUN1_Pos)         /* (DAC_INTENCLR) Underrun 1 Interrupt Enable Mask */
#define DAC_INTENCLR_UNDERRUN1(value)         (DAC_INTENCLR_UNDERRUN1_Msk & (_UINT8_(value) << DAC_INTENCLR_UNDERRUN1_Pos)) /* Assigment of value for UNDERRUN1 in the DAC_INTENCLR register */
#define DAC_INTENCLR_EMPTY0_Pos               _UINT8_(2)                                           /* (DAC_INTENCLR) Data Buffer 0 Empty Interrupt Enable Position */
#define DAC_INTENCLR_EMPTY0_Msk               (_UINT8_(0x1) << DAC_INTENCLR_EMPTY0_Pos)            /* (DAC_INTENCLR) Data Buffer 0 Empty Interrupt Enable Mask */
#define DAC_INTENCLR_EMPTY0(value)            (DAC_INTENCLR_EMPTY0_Msk & (_UINT8_(value) << DAC_INTENCLR_EMPTY0_Pos)) /* Assigment of value for EMPTY0 in the DAC_INTENCLR register */
#define DAC_INTENCLR_EMPTY1_Pos               _UINT8_(3)                                           /* (DAC_INTENCLR) Data Buffer 1 Empty Interrupt Enable Position */
#define DAC_INTENCLR_EMPTY1_Msk               (_UINT8_(0x1) << DAC_INTENCLR_EMPTY1_Pos)            /* (DAC_INTENCLR) Data Buffer 1 Empty Interrupt Enable Mask */
#define DAC_INTENCLR_EMPTY1(value)            (DAC_INTENCLR_EMPTY1_Msk & (_UINT8_(value) << DAC_INTENCLR_EMPTY1_Pos)) /* Assigment of value for EMPTY1 in the DAC_INTENCLR register */
#define DAC_INTENCLR_Msk                      _UINT8_(0x0F)                                        /* (DAC_INTENCLR) Register Mask  */

#define DAC_INTENCLR_UNDERRUN_Pos             _UINT8_(0)                                           /* (DAC_INTENCLR Position) Underrun x Interrupt Enable */
#define DAC_INTENCLR_UNDERRUN_Msk             (_UINT8_(0x3) << DAC_INTENCLR_UNDERRUN_Pos)          /* (DAC_INTENCLR Mask) UNDERRUN */
#define DAC_INTENCLR_UNDERRUN(value)          (DAC_INTENCLR_UNDERRUN_Msk & (_UINT8_(value) << DAC_INTENCLR_UNDERRUN_Pos)) 
#define DAC_INTENCLR_EMPTY_Pos                _UINT8_(2)                                           /* (DAC_INTENCLR Position) Data Buffer x Empty Interrupt Enable */
#define DAC_INTENCLR_EMPTY_Msk                (_UINT8_(0x3) << DAC_INTENCLR_EMPTY_Pos)             /* (DAC_INTENCLR Mask) EMPTY */
#define DAC_INTENCLR_EMPTY(value)             (DAC_INTENCLR_EMPTY_Msk & (_UINT8_(value) << DAC_INTENCLR_EMPTY_Pos)) 

/* -------- DAC_INTENSET : (DAC Offset: 0x05) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  UNDERRUN0:1;      /*!< bit:      0  Underrun 0 Interrupt Enable        */
    uint8_t  UNDERRUN1:1;      /*!< bit:      1  Underrun 1 Interrupt Enable        */
    uint8_t  EMPTY0:1;         /*!< bit:      2  Data Buffer 0 Empty Interrupt Enable */
    uint8_t  EMPTY1:1;         /*!< bit:      3  Data Buffer 1 Empty Interrupt Enable */
    uint8_t  Reserved1:1;      /*!< bit:      4  Result 0 Ready Interrupt Enable    */
    uint8_t  Reserved2:1;      /*!< bit:      5  Result 1 Ready Interrupt Enable    */
    uint8_t  Reserved3:1;      /*!< bit:      6  Overrun 0 Interrupt Enable         */
    uint8_t  Reserved4:1;      /*!< bit:      7  Overrun 1 Interrupt Enable         */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  UNDERRUN:2;       /*!< bit:  0.. 1  Underrun x Interrupt Enable        */
    uint8_t  EMPTY:2;          /*!< bit:  2.. 3  Data Buffer x Empty Interrupt Enable */
    uint8_t  Reserved5:2;      /*!< bit:  4.. 5  Result x Ready Interrupt Enable    */
    uint8_t  Reserved6:2;      /*!< bit:  6.. 7  Overrun x Interrupt Enable         */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_INTENSET_RESETVALUE               _UINT8_(0x00)                                        /*  (DAC_INTENSET) Interrupt Enable Set  Reset Value */

#define DAC_INTENSET_UNDERRUN0_Pos            _UINT8_(0)                                           /* (DAC_INTENSET) Underrun 0 Interrupt Enable Position */
#define DAC_INTENSET_UNDERRUN0_Msk            (_UINT8_(0x1) << DAC_INTENSET_UNDERRUN0_Pos)         /* (DAC_INTENSET) Underrun 0 Interrupt Enable Mask */
#define DAC_INTENSET_UNDERRUN0(value)         (DAC_INTENSET_UNDERRUN0_Msk & (_UINT8_(value) << DAC_INTENSET_UNDERRUN0_Pos)) /* Assigment of value for UNDERRUN0 in the DAC_INTENSET register */
#define DAC_INTENSET_UNDERRUN1_Pos            _UINT8_(1)                                           /* (DAC_INTENSET) Underrun 1 Interrupt Enable Position */
#define DAC_INTENSET_UNDERRUN1_Msk            (_UINT8_(0x1) << DAC_INTENSET_UNDERRUN1_Pos)         /* (DAC_INTENSET) Underrun 1 Interrupt Enable Mask */
#define DAC_INTENSET_UNDERRUN1(value)         (DAC_INTENSET_UNDERRUN1_Msk & (_UINT8_(value) << DAC_INTENSET_UNDERRUN1_Pos)) /* Assigment of value for UNDERRUN1 in the DAC_INTENSET register */
#define DAC_INTENSET_EMPTY0_Pos               _UINT8_(2)                                           /* (DAC_INTENSET) Data Buffer 0 Empty Interrupt Enable Position */
#define DAC_INTENSET_EMPTY0_Msk               (_UINT8_(0x1) << DAC_INTENSET_EMPTY0_Pos)            /* (DAC_INTENSET) Data Buffer 0 Empty Interrupt Enable Mask */
#define DAC_INTENSET_EMPTY0(value)            (DAC_INTENSET_EMPTY0_Msk & (_UINT8_(value) << DAC_INTENSET_EMPTY0_Pos)) /* Assigment of value for EMPTY0 in the DAC_INTENSET register */
#define DAC_INTENSET_EMPTY1_Pos               _UINT8_(3)                                           /* (DAC_INTENSET) Data Buffer 1 Empty Interrupt Enable Position */
#define DAC_INTENSET_EMPTY1_Msk               (_UINT8_(0x1) << DAC_INTENSET_EMPTY1_Pos)            /* (DAC_INTENSET) Data Buffer 1 Empty Interrupt Enable Mask */
#define DAC_INTENSET_EMPTY1(value)            (DAC_INTENSET_EMPTY1_Msk & (_UINT8_(value) << DAC_INTENSET_EMPTY1_Pos)) /* Assigment of value for EMPTY1 in the DAC_INTENSET register */
#define DAC_INTENSET_Msk                      _UINT8_(0x0F)                                        /* (DAC_INTENSET) Register Mask  */

#define DAC_INTENSET_UNDERRUN_Pos             _UINT8_(0)                                           /* (DAC_INTENSET Position) Underrun x Interrupt Enable */
#define DAC_INTENSET_UNDERRUN_Msk             (_UINT8_(0x3) << DAC_INTENSET_UNDERRUN_Pos)          /* (DAC_INTENSET Mask) UNDERRUN */
#define DAC_INTENSET_UNDERRUN(value)          (DAC_INTENSET_UNDERRUN_Msk & (_UINT8_(value) << DAC_INTENSET_UNDERRUN_Pos)) 
#define DAC_INTENSET_EMPTY_Pos                _UINT8_(2)                                           /* (DAC_INTENSET Position) Data Buffer x Empty Interrupt Enable */
#define DAC_INTENSET_EMPTY_Msk                (_UINT8_(0x3) << DAC_INTENSET_EMPTY_Pos)             /* (DAC_INTENSET Mask) EMPTY */
#define DAC_INTENSET_EMPTY(value)             (DAC_INTENSET_EMPTY_Msk & (_UINT8_(value) << DAC_INTENSET_EMPTY_Pos)) 

/* -------- DAC_INTFLAG : (DAC Offset: 0x06) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  UNDERRUN0:1;      /*!< bit:      0  Result 0 Underrun                  */
    __I uint8_t  UNDERRUN1:1;      /*!< bit:      1  Result 1 Underrun                  */
    __I uint8_t  EMPTY0:1;         /*!< bit:      2  Data Buffer 0 Empty                */
    __I uint8_t  EMPTY1:1;         /*!< bit:      3  Data Buffer 1 Empty                */
    __I uint8_t  Reserved1:1;      /*!< bit:      4  Result 0 Ready                     */
    __I uint8_t  Reserved2:1;      /*!< bit:      5  Result 1 Ready                     */
    __I uint8_t  Reserved3:1;      /*!< bit:      6  Result 0 Overrun                   */
    __I uint8_t  Reserved4:1;      /*!< bit:      7  Result 1 Overrun                   */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    __I uint8_t  UNDERRUN:2;       /*!< bit:  0.. 1  Result x Underrun                  */
    __I uint8_t  EMPTY:2;          /*!< bit:  2.. 3  Data Buffer x Empty                */
    __I uint8_t  Reserved5:2;      /*!< bit:  4.. 5  Result x Ready                     */
    __I uint8_t  Reserved6:2;      /*!< bit:  6.. 7  Result x Overrun                   */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_INTFLAG_RESETVALUE                _UINT8_(0x00)                                        /*  (DAC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define DAC_INTFLAG_UNDERRUN0_Pos             _UINT8_(0)                                           /* (DAC_INTFLAG) Result 0 Underrun Position */
#define DAC_INTFLAG_UNDERRUN0_Msk             (_UINT8_(0x1) << DAC_INTFLAG_UNDERRUN0_Pos)          /* (DAC_INTFLAG) Result 0 Underrun Mask */
#define DAC_INTFLAG_UNDERRUN0(value)          (DAC_INTFLAG_UNDERRUN0_Msk & (_UINT8_(value) << DAC_INTFLAG_UNDERRUN0_Pos)) /* Assigment of value for UNDERRUN0 in the DAC_INTFLAG register */
#define DAC_INTFLAG_UNDERRUN1_Pos             _UINT8_(1)                                           /* (DAC_INTFLAG) Result 1 Underrun Position */
#define DAC_INTFLAG_UNDERRUN1_Msk             (_UINT8_(0x1) << DAC_INTFLAG_UNDERRUN1_Pos)          /* (DAC_INTFLAG) Result 1 Underrun Mask */
#define DAC_INTFLAG_UNDERRUN1(value)          (DAC_INTFLAG_UNDERRUN1_Msk & (_UINT8_(value) << DAC_INTFLAG_UNDERRUN1_Pos)) /* Assigment of value for UNDERRUN1 in the DAC_INTFLAG register */
#define DAC_INTFLAG_EMPTY0_Pos                _UINT8_(2)                                           /* (DAC_INTFLAG) Data Buffer 0 Empty Position */
#define DAC_INTFLAG_EMPTY0_Msk                (_UINT8_(0x1) << DAC_INTFLAG_EMPTY0_Pos)             /* (DAC_INTFLAG) Data Buffer 0 Empty Mask */
#define DAC_INTFLAG_EMPTY0(value)             (DAC_INTFLAG_EMPTY0_Msk & (_UINT8_(value) << DAC_INTFLAG_EMPTY0_Pos)) /* Assigment of value for EMPTY0 in the DAC_INTFLAG register */
#define DAC_INTFLAG_EMPTY1_Pos                _UINT8_(3)                                           /* (DAC_INTFLAG) Data Buffer 1 Empty Position */
#define DAC_INTFLAG_EMPTY1_Msk                (_UINT8_(0x1) << DAC_INTFLAG_EMPTY1_Pos)             /* (DAC_INTFLAG) Data Buffer 1 Empty Mask */
#define DAC_INTFLAG_EMPTY1(value)             (DAC_INTFLAG_EMPTY1_Msk & (_UINT8_(value) << DAC_INTFLAG_EMPTY1_Pos)) /* Assigment of value for EMPTY1 in the DAC_INTFLAG register */
#define DAC_INTFLAG_Msk                       _UINT8_(0x0F)                                        /* (DAC_INTFLAG) Register Mask  */

#define DAC_INTFLAG_UNDERRUN_Pos              _UINT8_(0)                                           /* (DAC_INTFLAG Position) Result x Underrun */
#define DAC_INTFLAG_UNDERRUN_Msk              (_UINT8_(0x3) << DAC_INTFLAG_UNDERRUN_Pos)           /* (DAC_INTFLAG Mask) UNDERRUN */
#define DAC_INTFLAG_UNDERRUN(value)           (DAC_INTFLAG_UNDERRUN_Msk & (_UINT8_(value) << DAC_INTFLAG_UNDERRUN_Pos)) 
#define DAC_INTFLAG_EMPTY_Pos                 _UINT8_(2)                                           /* (DAC_INTFLAG Position) Data Buffer x Empty */
#define DAC_INTFLAG_EMPTY_Msk                 (_UINT8_(0x3) << DAC_INTFLAG_EMPTY_Pos)              /* (DAC_INTFLAG Mask) EMPTY */
#define DAC_INTFLAG_EMPTY(value)              (DAC_INTFLAG_EMPTY_Msk & (_UINT8_(value) << DAC_INTFLAG_EMPTY_Pos)) 

/* -------- DAC_STATUS : (DAC Offset: 0x07) ( R/ 8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  READY0:1;         /*!< bit:      0  DAC 0 Startup Ready                */
    uint8_t  READY1:1;         /*!< bit:      1  DAC 1 Startup Ready                */
    uint8_t  EOC0:1;           /*!< bit:      2  DAC 0 End of Conversion            */
    uint8_t  EOC1:1;           /*!< bit:      3  DAC 1 End of Conversion            */
    uint8_t  :4;               /*!< bit:  4.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  READY:2;          /*!< bit:  0.. 1  DAC x Startup Ready                */
    uint8_t  EOC:2;            /*!< bit:  2.. 3  DAC x End of Conversion            */
    uint8_t  :4;               /*!< bit:  4.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_STATUS_RESETVALUE                 _UINT8_(0x00)                                        /*  (DAC_STATUS) Status  Reset Value */

#define DAC_STATUS_READY0_Pos                 _UINT8_(0)                                           /* (DAC_STATUS) DAC 0 Startup Ready Position */
#define DAC_STATUS_READY0_Msk                 (_UINT8_(0x1) << DAC_STATUS_READY0_Pos)              /* (DAC_STATUS) DAC 0 Startup Ready Mask */
#define DAC_STATUS_READY0(value)              (DAC_STATUS_READY0_Msk & (_UINT8_(value) << DAC_STATUS_READY0_Pos)) /* Assigment of value for READY0 in the DAC_STATUS register */
#define DAC_STATUS_READY1_Pos                 _UINT8_(1)                                           /* (DAC_STATUS) DAC 1 Startup Ready Position */
#define DAC_STATUS_READY1_Msk                 (_UINT8_(0x1) << DAC_STATUS_READY1_Pos)              /* (DAC_STATUS) DAC 1 Startup Ready Mask */
#define DAC_STATUS_READY1(value)              (DAC_STATUS_READY1_Msk & (_UINT8_(value) << DAC_STATUS_READY1_Pos)) /* Assigment of value for READY1 in the DAC_STATUS register */
#define DAC_STATUS_EOC0_Pos                   _UINT8_(2)                                           /* (DAC_STATUS) DAC 0 End of Conversion Position */
#define DAC_STATUS_EOC0_Msk                   (_UINT8_(0x1) << DAC_STATUS_EOC0_Pos)                /* (DAC_STATUS) DAC 0 End of Conversion Mask */
#define DAC_STATUS_EOC0(value)                (DAC_STATUS_EOC0_Msk & (_UINT8_(value) << DAC_STATUS_EOC0_Pos)) /* Assigment of value for EOC0 in the DAC_STATUS register */
#define DAC_STATUS_EOC1_Pos                   _UINT8_(3)                                           /* (DAC_STATUS) DAC 1 End of Conversion Position */
#define DAC_STATUS_EOC1_Msk                   (_UINT8_(0x1) << DAC_STATUS_EOC1_Pos)                /* (DAC_STATUS) DAC 1 End of Conversion Mask */
#define DAC_STATUS_EOC1(value)                (DAC_STATUS_EOC1_Msk & (_UINT8_(value) << DAC_STATUS_EOC1_Pos)) /* Assigment of value for EOC1 in the DAC_STATUS register */
#define DAC_STATUS_Msk                        _UINT8_(0x0F)                                        /* (DAC_STATUS) Register Mask  */

#define DAC_STATUS_READY_Pos                  _UINT8_(0)                                           /* (DAC_STATUS Position) DAC x Startup Ready */
#define DAC_STATUS_READY_Msk                  (_UINT8_(0x3) << DAC_STATUS_READY_Pos)               /* (DAC_STATUS Mask) READY */
#define DAC_STATUS_READY(value)               (DAC_STATUS_READY_Msk & (_UINT8_(value) << DAC_STATUS_READY_Pos)) 
#define DAC_STATUS_EOC_Pos                    _UINT8_(2)                                           /* (DAC_STATUS Position) DAC x End of Conversion */
#define DAC_STATUS_EOC_Msk                    (_UINT8_(0x3) << DAC_STATUS_EOC_Pos)                 /* (DAC_STATUS Mask) EOC */
#define DAC_STATUS_EOC(value)                 (DAC_STATUS_EOC_Msk & (_UINT8_(value) << DAC_STATUS_EOC_Pos)) 

/* -------- DAC_SYNCBUSY : (DAC Offset: 0x08) ( R/ 32) Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  DAC Enable Status                  */
    uint32_t DATA0:1;          /*!< bit:      2  Data DAC 0                         */
    uint32_t DATA1:1;          /*!< bit:      3  Data DAC 1                         */
    uint32_t DATABUF0:1;       /*!< bit:      4  Data Buffer DAC 0                  */
    uint32_t DATABUF1:1;       /*!< bit:      5  Data Buffer DAC 1                  */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t DATA:2;           /*!< bit:  2.. 3  Data DAC x                         */
    uint32_t DATABUF:2;        /*!< bit:  4.. 5  Data Buffer DAC x                  */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DAC_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_SYNCBUSY_RESETVALUE               _UINT32_(0x00)                                       /*  (DAC_SYNCBUSY) Synchronization Busy  Reset Value */

#define DAC_SYNCBUSY_SWRST_Pos                _UINT32_(0)                                          /* (DAC_SYNCBUSY) Software Reset Position */
#define DAC_SYNCBUSY_SWRST_Msk                (_UINT32_(0x1) << DAC_SYNCBUSY_SWRST_Pos)            /* (DAC_SYNCBUSY) Software Reset Mask */
#define DAC_SYNCBUSY_SWRST(value)             (DAC_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << DAC_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the DAC_SYNCBUSY register */
#define DAC_SYNCBUSY_ENABLE_Pos               _UINT32_(1)                                          /* (DAC_SYNCBUSY) DAC Enable Status Position */
#define DAC_SYNCBUSY_ENABLE_Msk               (_UINT32_(0x1) << DAC_SYNCBUSY_ENABLE_Pos)           /* (DAC_SYNCBUSY) DAC Enable Status Mask */
#define DAC_SYNCBUSY_ENABLE(value)            (DAC_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << DAC_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the DAC_SYNCBUSY register */
#define DAC_SYNCBUSY_DATA0_Pos                _UINT32_(2)                                          /* (DAC_SYNCBUSY) Data DAC 0 Position */
#define DAC_SYNCBUSY_DATA0_Msk                (_UINT32_(0x1) << DAC_SYNCBUSY_DATA0_Pos)            /* (DAC_SYNCBUSY) Data DAC 0 Mask */
#define DAC_SYNCBUSY_DATA0(value)             (DAC_SYNCBUSY_DATA0_Msk & (_UINT32_(value) << DAC_SYNCBUSY_DATA0_Pos)) /* Assigment of value for DATA0 in the DAC_SYNCBUSY register */
#define DAC_SYNCBUSY_DATA1_Pos                _UINT32_(3)                                          /* (DAC_SYNCBUSY) Data DAC 1 Position */
#define DAC_SYNCBUSY_DATA1_Msk                (_UINT32_(0x1) << DAC_SYNCBUSY_DATA1_Pos)            /* (DAC_SYNCBUSY) Data DAC 1 Mask */
#define DAC_SYNCBUSY_DATA1(value)             (DAC_SYNCBUSY_DATA1_Msk & (_UINT32_(value) << DAC_SYNCBUSY_DATA1_Pos)) /* Assigment of value for DATA1 in the DAC_SYNCBUSY register */
#define DAC_SYNCBUSY_DATABUF0_Pos             _UINT32_(4)                                          /* (DAC_SYNCBUSY) Data Buffer DAC 0 Position */
#define DAC_SYNCBUSY_DATABUF0_Msk             (_UINT32_(0x1) << DAC_SYNCBUSY_DATABUF0_Pos)         /* (DAC_SYNCBUSY) Data Buffer DAC 0 Mask */
#define DAC_SYNCBUSY_DATABUF0(value)          (DAC_SYNCBUSY_DATABUF0_Msk & (_UINT32_(value) << DAC_SYNCBUSY_DATABUF0_Pos)) /* Assigment of value for DATABUF0 in the DAC_SYNCBUSY register */
#define DAC_SYNCBUSY_DATABUF1_Pos             _UINT32_(5)                                          /* (DAC_SYNCBUSY) Data Buffer DAC 1 Position */
#define DAC_SYNCBUSY_DATABUF1_Msk             (_UINT32_(0x1) << DAC_SYNCBUSY_DATABUF1_Pos)         /* (DAC_SYNCBUSY) Data Buffer DAC 1 Mask */
#define DAC_SYNCBUSY_DATABUF1(value)          (DAC_SYNCBUSY_DATABUF1_Msk & (_UINT32_(value) << DAC_SYNCBUSY_DATABUF1_Pos)) /* Assigment of value for DATABUF1 in the DAC_SYNCBUSY register */
#define DAC_SYNCBUSY_Msk                      _UINT32_(0x0000003F)                                 /* (DAC_SYNCBUSY) Register Mask  */

#define DAC_SYNCBUSY_DATA_Pos                 _UINT32_(2)                                          /* (DAC_SYNCBUSY Position) Data DAC x */
#define DAC_SYNCBUSY_DATA_Msk                 (_UINT32_(0x3) << DAC_SYNCBUSY_DATA_Pos)             /* (DAC_SYNCBUSY Mask) DATA */
#define DAC_SYNCBUSY_DATA(value)              (DAC_SYNCBUSY_DATA_Msk & (_UINT32_(value) << DAC_SYNCBUSY_DATA_Pos)) 
#define DAC_SYNCBUSY_DATABUF_Pos              _UINT32_(4)                                          /* (DAC_SYNCBUSY Position) Data Buffer DAC x */
#define DAC_SYNCBUSY_DATABUF_Msk              (_UINT32_(0x3) << DAC_SYNCBUSY_DATABUF_Pos)          /* (DAC_SYNCBUSY Mask) DATABUF */
#define DAC_SYNCBUSY_DATABUF(value)           (DAC_SYNCBUSY_DATABUF_Msk & (_UINT32_(value) << DAC_SYNCBUSY_DATABUF_Pos)) 

/* -------- DAC_DACCTRL : (DAC Offset: 0x0C) (R/W 16) DAC n Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t LEFTADJ:1;        /*!< bit:      0  Left Adjusted Data                 */
    uint16_t ENABLE:1;         /*!< bit:      1  Enable DAC0                        */
    uint16_t CCTRL:2;          /*!< bit:  2.. 3  Current Control                    */
    uint16_t :1;               /*!< bit:      4  Reserved                           */
    uint16_t FEXT:1;           /*!< bit:      5  Standalone Filter                  */
    uint16_t RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint16_t DITHER:1;         /*!< bit:      7  Dithering Mode                     */
    uint16_t REFRESH:4;        /*!< bit:  8..11  Refresh period                     */
    uint16_t :1;               /*!< bit:     12  Reserved                           */
    uint16_t OSR:3;            /*!< bit: 13..15  Sampling Rate                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} DAC_DACCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DACCTRL_RESETVALUE                _UINT16_(0x00)                                       /*  (DAC_DACCTRL) DAC n Control  Reset Value */

#define DAC_DACCTRL_LEFTADJ_Pos               _UINT16_(0)                                          /* (DAC_DACCTRL) Left Adjusted Data Position */
#define DAC_DACCTRL_LEFTADJ_Msk               (_UINT16_(0x1) << DAC_DACCTRL_LEFTADJ_Pos)           /* (DAC_DACCTRL) Left Adjusted Data Mask */
#define DAC_DACCTRL_LEFTADJ(value)            (DAC_DACCTRL_LEFTADJ_Msk & (_UINT16_(value) << DAC_DACCTRL_LEFTADJ_Pos)) /* Assigment of value for LEFTADJ in the DAC_DACCTRL register */
#define DAC_DACCTRL_ENABLE_Pos                _UINT16_(1)                                          /* (DAC_DACCTRL) Enable DAC0 Position */
#define DAC_DACCTRL_ENABLE_Msk                (_UINT16_(0x1) << DAC_DACCTRL_ENABLE_Pos)            /* (DAC_DACCTRL) Enable DAC0 Mask */
#define DAC_DACCTRL_ENABLE(value)             (DAC_DACCTRL_ENABLE_Msk & (_UINT16_(value) << DAC_DACCTRL_ENABLE_Pos)) /* Assigment of value for ENABLE in the DAC_DACCTRL register */
#define DAC_DACCTRL_CCTRL_Pos                 _UINT16_(2)                                          /* (DAC_DACCTRL) Current Control Position */
#define DAC_DACCTRL_CCTRL_Msk                 (_UINT16_(0x3) << DAC_DACCTRL_CCTRL_Pos)             /* (DAC_DACCTRL) Current Control Mask */
#define DAC_DACCTRL_CCTRL(value)              (DAC_DACCTRL_CCTRL_Msk & (_UINT16_(value) << DAC_DACCTRL_CCTRL_Pos)) /* Assigment of value for CCTRL in the DAC_DACCTRL register */
#define   DAC_DACCTRL_CCTRL_CC100K_Val        _UINT16_(0x0)                                        /* (DAC_DACCTRL) 100kSPS  */
#define   DAC_DACCTRL_CCTRL_CC1M_Val          _UINT16_(0x1)                                        /* (DAC_DACCTRL) 500kSPS  */
#define   DAC_DACCTRL_CCTRL_CC12M_Val         _UINT16_(0x2)                                        /* (DAC_DACCTRL) 1MSPS  */
#define DAC_DACCTRL_CCTRL_CC100K              (DAC_DACCTRL_CCTRL_CC100K_Val << DAC_DACCTRL_CCTRL_Pos) /* (DAC_DACCTRL) 100kSPS Position  */
#define DAC_DACCTRL_CCTRL_CC1M                (DAC_DACCTRL_CCTRL_CC1M_Val << DAC_DACCTRL_CCTRL_Pos) /* (DAC_DACCTRL) 500kSPS Position  */
#define DAC_DACCTRL_CCTRL_CC12M               (DAC_DACCTRL_CCTRL_CC12M_Val << DAC_DACCTRL_CCTRL_Pos) /* (DAC_DACCTRL) 1MSPS Position  */
#define DAC_DACCTRL_RUNSTDBY_Pos              _UINT16_(6)                                          /* (DAC_DACCTRL) Run in Standby Position */
#define DAC_DACCTRL_RUNSTDBY_Msk              (_UINT16_(0x1) << DAC_DACCTRL_RUNSTDBY_Pos)          /* (DAC_DACCTRL) Run in Standby Mask */
#define DAC_DACCTRL_RUNSTDBY(value)           (DAC_DACCTRL_RUNSTDBY_Msk & (_UINT16_(value) << DAC_DACCTRL_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the DAC_DACCTRL register */
#define DAC_DACCTRL_DITHER_Pos                _UINT16_(7)                                          /* (DAC_DACCTRL) Dithering Mode Position */
#define DAC_DACCTRL_DITHER_Msk                (_UINT16_(0x1) << DAC_DACCTRL_DITHER_Pos)            /* (DAC_DACCTRL) Dithering Mode Mask */
#define DAC_DACCTRL_DITHER(value)             (DAC_DACCTRL_DITHER_Msk & (_UINT16_(value) << DAC_DACCTRL_DITHER_Pos)) /* Assigment of value for DITHER in the DAC_DACCTRL register */
#define DAC_DACCTRL_Msk                       _UINT16_(0x00CF)                                     /* (DAC_DACCTRL) Register Mask  */


/* -------- DAC_DATA : (DAC Offset: 0x10) ( /W 16) DAC n Data -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t DATA:16;          /*!< bit:  0..15  DAC0 Data                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} DAC_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DATA_RESETVALUE                   _UINT16_(0x00)                                       /*  (DAC_DATA) DAC n Data  Reset Value */

#define DAC_DATA_DATA_Pos                     _UINT16_(0)                                          /* (DAC_DATA) DAC0 Data Position */
#define DAC_DATA_DATA_Msk                     (_UINT16_(0xFFFF) << DAC_DATA_DATA_Pos)              /* (DAC_DATA) DAC0 Data Mask */
#define DAC_DATA_DATA(value)                  (DAC_DATA_DATA_Msk & (_UINT16_(value) << DAC_DATA_DATA_Pos)) /* Assigment of value for DATA in the DAC_DATA register */
#define DAC_DATA_Msk                          _UINT16_(0xFFFF)                                     /* (DAC_DATA) Register Mask  */


/* -------- DAC_DATABUF : (DAC Offset: 0x14) ( /W 16) DAC n Data Buffer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t DATABUF:16;       /*!< bit:  0..15  DAC0 Data Buffer                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} DAC_DATABUF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DATABUF_RESETVALUE                _UINT16_(0x00)                                       /*  (DAC_DATABUF) DAC n Data Buffer  Reset Value */

#define DAC_DATABUF_DATABUF_Pos               _UINT16_(0)                                          /* (DAC_DATABUF) DAC0 Data Buffer Position */
#define DAC_DATABUF_DATABUF_Msk               (_UINT16_(0xFFFF) << DAC_DATABUF_DATABUF_Pos)        /* (DAC_DATABUF) DAC0 Data Buffer Mask */
#define DAC_DATABUF_DATABUF(value)            (DAC_DATABUF_DATABUF_Msk & (_UINT16_(value) << DAC_DATABUF_DATABUF_Pos)) /* Assigment of value for DATABUF in the DAC_DATABUF register */
#define DAC_DATABUF_Msk                       _UINT16_(0xFFFF)                                     /* (DAC_DATABUF) Register Mask  */


/* -------- DAC_DBGCTRL : (DAC Offset: 0x18) (R/W 8) Debug Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGRUN:1;         /*!< bit:      0  Debug Run                          */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DAC_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DBGCTRL_RESETVALUE                _UINT8_(0x00)                                        /*  (DAC_DBGCTRL) Debug Control  Reset Value */

#define DAC_DBGCTRL_DBGRUN_Pos                _UINT8_(0)                                           /* (DAC_DBGCTRL) Debug Run Position */
#define DAC_DBGCTRL_DBGRUN_Msk                (_UINT8_(0x1) << DAC_DBGCTRL_DBGRUN_Pos)             /* (DAC_DBGCTRL) Debug Run Mask */
#define DAC_DBGCTRL_DBGRUN(value)             (DAC_DBGCTRL_DBGRUN_Msk & (_UINT8_(value) << DAC_DBGCTRL_DBGRUN_Pos)) /* Assigment of value for DBGRUN in the DAC_DBGCTRL register */
#define DAC_DBGCTRL_Msk                       _UINT8_(0x01)                                        /* (DAC_DBGCTRL) Register Mask  */


/** \brief DAC register offsets definitions */
#define DAC_CTRLA_REG_OFST             _UINT32_(0x00)      /* (DAC_CTRLA) Control A Offset */
#define DAC_CTRLB_REG_OFST             _UINT32_(0x01)      /* (DAC_CTRLB) Control B Offset */
#define DAC_EVCTRL_REG_OFST            _UINT32_(0x02)      /* (DAC_EVCTRL) Event Control Offset */
#define DAC_INTENCLR_REG_OFST          _UINT32_(0x04)      /* (DAC_INTENCLR) Interrupt Enable Clear Offset */
#define DAC_INTENSET_REG_OFST          _UINT32_(0x05)      /* (DAC_INTENSET) Interrupt Enable Set Offset */
#define DAC_INTFLAG_REG_OFST           _UINT32_(0x06)      /* (DAC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define DAC_STATUS_REG_OFST            _UINT32_(0x07)      /* (DAC_STATUS) Status Offset */
#define DAC_SYNCBUSY_REG_OFST          _UINT32_(0x08)      /* (DAC_SYNCBUSY) Synchronization Busy Offset */
#define DAC_DACCTRL_REG_OFST           _UINT32_(0x0C)      /* (DAC_DACCTRL) DAC n Control Offset */
#define DAC_DACCTRL0_REG_OFST          _UINT32_(0x0C)      /* (DAC_DACCTRL0) DAC n Control Offset */
#define DAC_DACCTRL1_REG_OFST          _UINT32_(0x0E)      /* (DAC_DACCTRL1) DAC n Control Offset */
#define DAC_DATA_REG_OFST              _UINT32_(0x10)      /* (DAC_DATA) DAC n Data Offset */
#define DAC_DATA0_REG_OFST             _UINT32_(0x10)      /* (DAC_DATA0) DAC n Data Offset */
#define DAC_DATA1_REG_OFST             _UINT32_(0x12)      /* (DAC_DATA1) DAC n Data Offset */
#define DAC_DATABUF_REG_OFST           _UINT32_(0x14)      /* (DAC_DATABUF) DAC n Data Buffer Offset */
#define DAC_DATABUF0_REG_OFST          _UINT32_(0x14)      /* (DAC_DATABUF0) DAC n Data Buffer Offset */
#define DAC_DATABUF1_REG_OFST          _UINT32_(0x16)      /* (DAC_DATABUF1) DAC n Data Buffer Offset */
#define DAC_DBGCTRL_REG_OFST           _UINT32_(0x18)      /* (DAC_DBGCTRL) Debug Control Offset */

/** \brief DAC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO DAC_CTRLA_Type            CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control A */
  __IO DAC_CTRLB_Type            CTRLB;       /**< \brief Offset: 0x01 (R/W  8) Control B */
  __IO DAC_EVCTRL_Type           EVCTRL;      /**< \brief Offset: 0x02 (R/W  8) Event Control */
       RoReg8                    Reserved1[0x1];
  __IO DAC_INTENCLR_Type         INTENCLR;    /**< \brief Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  __IO DAC_INTENSET_Type         INTENSET;    /**< \brief Offset: 0x05 (R/W  8) Interrupt Enable Set */
  __IO DAC_INTFLAG_Type          INTFLAG;     /**< \brief Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
  __I  DAC_STATUS_Type           STATUS;      /**< \brief Offset: 0x07 (R/   8) Status */
  __I  DAC_SYNCBUSY_Type         SYNCBUSY;    /**< \brief Offset: 0x08 (R/  32) Synchronization Busy */
  __IO DAC_DACCTRL_Type          DACCTRL[2];  /**< \brief Offset: 0x0C (R/W 16) DAC n Control */
  __O  DAC_DATA_Type             DATA[2];     /**< \brief Offset: 0x10 ( /W 16) DAC n Data */
  __O  DAC_DATABUF_Type          DATABUF[2];  /**< \brief Offset: 0x14 ( /W 16) DAC n Data Buffer */
  __IO DAC_DBGCTRL_Type          DBGCTRL;     /**< \brief Offset: 0x18 (R/W  8) Debug Control */
  /*     RoReg8                    Reserved2[0x3]; - Reserved */
  /*__I  DAC_RESULT_Type           RESULT[2]; - Reserved */  /**< \brief Offset: 0x1C (R/  16) Filter Result */
} Dac;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DAC register API structure */
typedef struct
{  /* Digital-to-Analog Converter */
  __IO  uint8_t                        DAC_CTRLA;          /**< Offset: 0x00 (R/W  8) Control A */
  __IO  uint8_t                        DAC_CTRLB;          /**< Offset: 0x01 (R/W  8) Control B */
  __IO  uint8_t                        DAC_EVCTRL;         /**< Offset: 0x02 (R/W  8) Event Control */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        DAC_INTENCLR;       /**< Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        DAC_INTENSET;       /**< Offset: 0x05 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        DAC_INTFLAG;        /**< Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
  __I   uint8_t                        DAC_STATUS;         /**< Offset: 0x07 (R/   8) Status */
  __I   uint32_t                       DAC_SYNCBUSY;       /**< Offset: 0x08 (R/   32) Synchronization Busy */
  __IO  uint16_t                       DAC_DACCTRL[2];     /**< Offset: 0x0C (R/W  16) DAC n Control */
  __O   uint16_t                       DAC_DATA[2];        /**< Offset: 0x10 ( /W  16) DAC n Data */
  __O   uint16_t                       DAC_DATABUF[2];     /**< Offset: 0x14 ( /W  16) DAC n Data Buffer */
  __IO  uint8_t                        DAC_DBGCTRL;        /**< Offset: 0x18 (R/W  8) Debug Control */
} dac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXSG41_DAC_COMPONENT_H_ */
