/*
 * Component description for SERCOM
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
#ifndef _PIC32CXSG41_SERCOM_COMPONENT_H_
#define _PIC32CXSG41_SERCOM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SERCOM                                       */
/* ************************************************************************** */

/* -------- SERCOM_I2CM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CM Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t MODE:3;           /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2;               /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:      7  Run in Standby                     */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t PINOUT:1;         /*!< bit:     16  Pin Usage                          */
    uint32_t :3;               /*!< bit: 17..19  Reserved                           */
    uint32_t SDAHOLD:2;        /*!< bit: 20..21  SDA Hold Time                      */
    uint32_t MEXTTOEN:1;       /*!< bit:     22  Master SCL Low Extend Timeout      */
    uint32_t SEXTTOEN:1;       /*!< bit:     23  Slave SCL Low Extend Timeout       */
    uint32_t SPEED:2;          /*!< bit: 24..25  Transfer Speed                     */
    uint32_t :1;               /*!< bit:     26  Reserved                           */
    uint32_t SCLSM:1;          /*!< bit:     27  SCL Clock Stretch Mode             */
    uint32_t INACTOUT:2;       /*!< bit: 28..29  Inactive Time-Out                  */
    uint32_t LOWTOUTEN:1;      /*!< bit:     30  SCL Low Timeout Enable             */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLA) I2CM Control A  Reset Value */

#define SERCOM_I2CM_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_I2CM_CTRLA) Software Reset Position */
#define SERCOM_I2CM_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SWRST_Pos)       /* (SERCOM_I2CM_CTRLA) Software Reset Mask */
#define SERCOM_I2CM_CTRLA_SWRST(value)        (SERCOM_I2CM_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_I2CM_CTRLA) Enable Position */
#define SERCOM_I2CM_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_ENABLE_Pos)      /* (SERCOM_I2CM_CTRLA) Enable Mask */
#define SERCOM_I2CM_CTRLA_ENABLE(value)       (SERCOM_I2CM_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_I2CM_CTRLA) Operating Mode Position */
#define SERCOM_I2CM_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_I2CM_CTRLA_MODE_Pos)        /* (SERCOM_I2CM_CTRLA) Operating Mode Mask */
#define SERCOM_I2CM_CTRLA_MODE(value)         (SERCOM_I2CM_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) USART with external clock  */
#define   SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) USART with internal clock  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) SPI in slave operation  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) SPI in master operation  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_I2CM_CTRLA) I2C slave operation  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_I2CM_CTRLA) I2C master operation  */
#define SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK  (SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) USART with external clock Position  */
#define SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK  (SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) USART with internal clock Position  */
#define SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE      (SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) SPI in slave operation Position  */
#define SERCOM_I2CM_CTRLA_MODE_SPI_MASTER     (SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) SPI in master operation Position  */
#define SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE      (SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) I2C slave operation Position  */
#define SERCOM_I2CM_CTRLA_MODE_I2C_MASTER     (SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) I2C master operation Position  */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_I2CM_CTRLA) Run in Standby Position */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_I2CM_CTRLA) Run in Standby Mask */
#define SERCOM_I2CM_CTRLA_RUNSTDBY(value)     (SERCOM_I2CM_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_PINOUT_Pos          _UINT32_(16)                                         /* (SERCOM_I2CM_CTRLA) Pin Usage Position */
#define SERCOM_I2CM_CTRLA_PINOUT_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_PINOUT_Pos)      /* (SERCOM_I2CM_CTRLA) Pin Usage Mask */
#define SERCOM_I2CM_CTRLA_PINOUT(value)       (SERCOM_I2CM_CTRLA_PINOUT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_PINOUT_Pos)) /* Assigment of value for PINOUT in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Pos         _UINT32_(20)                                         /* (SERCOM_I2CM_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Msk         (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)     /* (SERCOM_I2CM_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CM_CTRLA_SDAHOLD(value)      (SERCOM_I2CM_CTRLA_SDAHOLD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)) /* Assigment of value for SDAHOLD in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Disabled  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) 50-100ns hold time  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) 300-600ns hold time  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) 400-800ns hold time  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_DISABLE     (SERCOM_I2CM_CTRLA_SDAHOLD_DISABLE_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) Disabled Position  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_75NS        (SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) 50-100ns hold time Position  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_450NS       (SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) 300-600ns hold time Position  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_600NS       (SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) 400-800ns hold time Position  */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Pos        _UINT32_(22)                                         /* (SERCOM_I2CM_CTRLA) Master SCL Low Extend Timeout Position */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)    /* (SERCOM_I2CM_CTRLA) Master SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_CTRLA_MEXTTOEN(value)     (SERCOM_I2CM_CTRLA_MEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)) /* Assigment of value for MEXTTOEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Pos        _UINT32_(23)                                         /* (SERCOM_I2CM_CTRLA) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)    /* (SERCOM_I2CM_CTRLA) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_CTRLA_SEXTTOEN(value)     (SERCOM_I2CM_CTRLA_SEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)) /* Assigment of value for SEXTTOEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SPEED_Pos           _UINT32_(24)                                         /* (SERCOM_I2CM_CTRLA) Transfer Speed Position */
#define SERCOM_I2CM_CTRLA_SPEED_Msk           (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SPEED_Pos)       /* (SERCOM_I2CM_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CM_CTRLA_SPEED(value)        (SERCOM_I2CM_CTRLA_SPEED_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SPEED_Pos)) /* Assigment of value for SPEED in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz   */
#define   SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) Fast-mode Plus Upto 1MHz  */
#define   SERCOM_I2CM_CTRLA_SPEED_HIGH_SPEED_MODE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) High-speed mode Upto 3.4MHz  */
#define SERCOM_I2CM_CTRLA_SPEED_STANDARD_AND_FAST_MODE (SERCOM_I2CM_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz  Position  */
#define SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE (SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) Fast-mode Plus Upto 1MHz Position  */
#define SERCOM_I2CM_CTRLA_SPEED_HIGH_SPEED_MODE (SERCOM_I2CM_CTRLA_SPEED_HIGH_SPEED_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) High-speed mode Upto 3.4MHz Position  */
#define SERCOM_I2CM_CTRLA_SCLSM_Pos           _UINT32_(27)                                         /* (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CM_CTRLA_SCLSM_Msk           (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SCLSM_Pos)       /* (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CM_CTRLA_SCLSM(value)        (SERCOM_I2CM_CTRLA_SCLSM_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SCLSM_Pos)) /* Assigment of value for SCLSM in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_INACTOUT_Pos        _UINT32_(28)                                         /* (SERCOM_I2CM_CTRLA) Inactive Time-Out Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_Msk        (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)    /* (SERCOM_I2CM_CTRLA) Inactive Time-Out Mask */
#define SERCOM_I2CM_CTRLA_INACTOUT(value)     (SERCOM_I2CM_CTRLA_INACTOUT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)) /* Assigment of value for INACTOUT in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_INACTOUT_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Disabled  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_55US_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) 5-6 SCL Time-Out(50-60us)  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_105US_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) 10-11 SCL Time-Out(100-110us)  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_205US_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) 20-21 SCL Time-Out(200-210us)  */
#define SERCOM_I2CM_CTRLA_INACTOUT_DISABLE    (SERCOM_I2CM_CTRLA_INACTOUT_DISABLE_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) Disabled Position  */
#define SERCOM_I2CM_CTRLA_INACTOUT_55US       (SERCOM_I2CM_CTRLA_INACTOUT_55US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 5-6 SCL Time-Out(50-60us) Position  */
#define SERCOM_I2CM_CTRLA_INACTOUT_105US      (SERCOM_I2CM_CTRLA_INACTOUT_105US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 10-11 SCL Time-Out(100-110us) Position  */
#define SERCOM_I2CM_CTRLA_INACTOUT_205US      (SERCOM_I2CM_CTRLA_INACTOUT_205US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 20-21 SCL Time-Out(200-210us) Position  */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos       _UINT32_(30)                                         /* (SERCOM_I2CM_CTRLA) SCL Low Timeout Enable Position */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk       (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)   /* (SERCOM_I2CM_CTRLA) SCL Low Timeout Enable Mask */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN(value)    (SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)) /* Assigment of value for LOWTOUTEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_Msk                 _UINT32_(0x7BF1009F)                                 /* (SERCOM_I2CM_CTRLA) Register Mask  */


/* -------- SERCOM_I2CS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CS Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t MODE:3;           /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2;               /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:      7  Run during Standby                 */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t PINOUT:1;         /*!< bit:     16  Pin Usage                          */
    uint32_t :3;               /*!< bit: 17..19  Reserved                           */
    uint32_t SDAHOLD:2;        /*!< bit: 20..21  SDA Hold Time                      */
    uint32_t :1;               /*!< bit:     22  Reserved                           */
    uint32_t SEXTTOEN:1;       /*!< bit:     23  Slave SCL Low Extend Timeout       */
    uint32_t SPEED:2;          /*!< bit: 24..25  Transfer Speed                     */
    uint32_t :1;               /*!< bit:     26  Reserved                           */
    uint32_t SCLSM:1;          /*!< bit:     27  SCL Clock Stretch Mode             */
    uint32_t :2;               /*!< bit: 28..29  Reserved                           */
    uint32_t LOWTOUTEN:1;      /*!< bit:     30  SCL Low Timeout Enable             */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLA) I2CS Control A  Reset Value */

#define SERCOM_I2CS_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_I2CS_CTRLA) Software Reset Position */
#define SERCOM_I2CS_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SWRST_Pos)       /* (SERCOM_I2CS_CTRLA) Software Reset Mask */
#define SERCOM_I2CS_CTRLA_SWRST(value)        (SERCOM_I2CS_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_I2CS_CTRLA) Enable Position */
#define SERCOM_I2CS_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_ENABLE_Pos)      /* (SERCOM_I2CS_CTRLA) Enable Mask */
#define SERCOM_I2CS_CTRLA_ENABLE(value)       (SERCOM_I2CS_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_I2CS_CTRLA) Operating Mode Position */
#define SERCOM_I2CS_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_I2CS_CTRLA_MODE_Pos)        /* (SERCOM_I2CS_CTRLA) Operating Mode Mask */
#define SERCOM_I2CS_CTRLA_MODE(value)         (SERCOM_I2CS_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) USART with external clock  */
#define   SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) USART with internal clock  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) SPI in slave operation  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) SPI in master operation  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_I2CS_CTRLA) I2C slave operation  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_I2CS_CTRLA) I2C master operation  */
#define SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK  (SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) USART with external clock Position  */
#define SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK  (SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) USART with internal clock Position  */
#define SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE      (SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) SPI in slave operation Position  */
#define SERCOM_I2CS_CTRLA_MODE_SPI_MASTER     (SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) SPI in master operation Position  */
#define SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE      (SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) I2C slave operation Position  */
#define SERCOM_I2CS_CTRLA_MODE_I2C_MASTER     (SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) I2C master operation Position  */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_I2CS_CTRLA) Run during Standby Position */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_I2CS_CTRLA) Run during Standby Mask */
#define SERCOM_I2CS_CTRLA_RUNSTDBY(value)     (SERCOM_I2CS_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_PINOUT_Pos          _UINT32_(16)                                         /* (SERCOM_I2CS_CTRLA) Pin Usage Position */
#define SERCOM_I2CS_CTRLA_PINOUT_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_PINOUT_Pos)      /* (SERCOM_I2CS_CTRLA) Pin Usage Mask */
#define SERCOM_I2CS_CTRLA_PINOUT(value)       (SERCOM_I2CS_CTRLA_PINOUT_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_PINOUT_Pos)) /* Assigment of value for PINOUT in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Pos         _UINT32_(20)                                         /* (SERCOM_I2CS_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Msk         (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)     /* (SERCOM_I2CS_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CS_CTRLA_SDAHOLD(value)      (SERCOM_I2CS_CTRLA_SDAHOLD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)) /* Assigment of value for SDAHOLD in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Disabled  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) 50-100ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) 300-600ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) 400-800ns hold time  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_DISABLE     (SERCOM_I2CS_CTRLA_SDAHOLD_DISABLE_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) Disabled Position  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_75NS        (SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 50-100ns hold time Position  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_450NS       (SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 300-600ns hold time Position  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_600NS       (SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 400-800ns hold time Position  */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Pos        _UINT32_(23)                                         /* (SERCOM_I2CS_CTRLA) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)    /* (SERCOM_I2CS_CTRLA) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CS_CTRLA_SEXTTOEN(value)     (SERCOM_I2CS_CTRLA_SEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)) /* Assigment of value for SEXTTOEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SPEED_Pos           _UINT32_(24)                                         /* (SERCOM_I2CS_CTRLA) Transfer Speed Position */
#define SERCOM_I2CS_CTRLA_SPEED_Msk           (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SPEED_Pos)       /* (SERCOM_I2CS_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CS_CTRLA_SPEED(value)        (SERCOM_I2CS_CTRLA_SPEED_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SPEED_Pos)) /* Assigment of value for SPEED in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz   */
#define   SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) Fast-mode Plus Upto 1MHz  */
#define   SERCOM_I2CS_CTRLA_SPEED_HIGH_SPEED_MODE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) High-speed mode Upto 3.4MHz  */
#define SERCOM_I2CS_CTRLA_SPEED_STANDARD_AND_FAST_MODE (SERCOM_I2CS_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz  Position  */
#define SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE (SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) Fast-mode Plus Upto 1MHz Position  */
#define SERCOM_I2CS_CTRLA_SPEED_HIGH_SPEED_MODE (SERCOM_I2CS_CTRLA_SPEED_HIGH_SPEED_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) High-speed mode Upto 3.4MHz Position  */
#define SERCOM_I2CS_CTRLA_SCLSM_Pos           _UINT32_(27)                                         /* (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CS_CTRLA_SCLSM_Msk           (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SCLSM_Pos)       /* (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CS_CTRLA_SCLSM(value)        (SERCOM_I2CS_CTRLA_SCLSM_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SCLSM_Pos)) /* Assigment of value for SCLSM in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos       _UINT32_(30)                                         /* (SERCOM_I2CS_CTRLA) SCL Low Timeout Enable Position */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk       (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)   /* (SERCOM_I2CS_CTRLA) SCL Low Timeout Enable Mask */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN(value)    (SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)) /* Assigment of value for LOWTOUTEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_Msk                 _UINT32_(0x4BB1009F)                                 /* (SERCOM_I2CS_CTRLA) Register Mask  */


/* -------- SERCOM_SPIM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPIM Control A -------- */
#define SERCOM_SPIM_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIM_CTRLA) SPIM Control A  Reset Value */

#define SERCOM_SPIM_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_SPIM_CTRLA) Software Reset Position */
#define SERCOM_SPIM_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_SWRST_Pos)       /* (SERCOM_SPIM_CTRLA) Software Reset Mask */
#define SERCOM_SPIM_CTRLA_SWRST(value)        (SERCOM_SPIM_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_SPIM_CTRLA) Enable Position */
#define SERCOM_SPIM_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_ENABLE_Pos)      /* (SERCOM_SPIM_CTRLA) Enable Mask */
#define SERCOM_SPIM_CTRLA_ENABLE(value)       (SERCOM_SPIM_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_SPIM_CTRLA) Operating Mode Position */
#define SERCOM_SPIM_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_SPIM_CTRLA_MODE_Pos)        /* (SERCOM_SPIM_CTRLA) Operating Mode Mask */
#define SERCOM_SPIM_CTRLA_MODE(value)         (SERCOM_SPIM_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) USART with external clock  */
#define   SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) USART with internal clock  */
#define   SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) SPI in slave operation  */
#define   SERCOM_SPIM_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_SPIM_CTRLA) SPI in master operation  */
#define   SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_SPIM_CTRLA) I2C slave operation  */
#define   SERCOM_SPIM_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_SPIM_CTRLA) I2C master operation  */
#define SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK  (SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) USART with external clock Position  */
#define SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK  (SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) USART with internal clock Position  */
#define SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE      (SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) SPI in slave operation Position  */
#define SERCOM_SPIM_CTRLA_MODE_SPI_MASTER     (SERCOM_SPIM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) SPI in master operation Position  */
#define SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE      (SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) I2C slave operation Position  */
#define SERCOM_SPIM_CTRLA_MODE_I2C_MASTER     (SERCOM_SPIM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) I2C master operation Position  */
#define SERCOM_SPIM_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_SPIM_CTRLA) Run during Standby Position */
#define SERCOM_SPIM_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_SPIM_CTRLA) Run during Standby Mask */
#define SERCOM_SPIM_CTRLA_RUNSTDBY(value)     (SERCOM_SPIM_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_IBON_Pos            _UINT32_(8)                                          /* (SERCOM_SPIM_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPIM_CTRLA_IBON_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_IBON_Pos)        /* (SERCOM_SPIM_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPIM_CTRLA_IBON(value)         (SERCOM_SPIM_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_IBON_Pos)) /* Assigment of value for IBON in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_DOPO_Pos            _UINT32_(16)                                         /* (SERCOM_SPIM_CTRLA) Data Out Pinout Position */
#define SERCOM_SPIM_CTRLA_DOPO_Msk            (_UINT32_(0x3) << SERCOM_SPIM_CTRLA_DOPO_Pos)        /* (SERCOM_SPIM_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPIM_CTRLA_DOPO(value)         (SERCOM_SPIM_CTRLA_DOPO_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_DOPO_Pos)) /* Assigment of value for DOPO in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2]  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD0           (SERCOM_SPIM_CTRLA_DOPO_PAD0_Val << SERCOM_SPIM_CTRLA_DOPO_Pos) /* (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD2           (SERCOM_SPIM_CTRLA_DOPO_PAD2_Val << SERCOM_SPIM_CTRLA_DOPO_Pos) /* (SERCOM_SPIM_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIM_CTRLA_DIPO_Pos            _UINT32_(20)                                         /* (SERCOM_SPIM_CTRLA) Data In Pinout Position */
#define SERCOM_SPIM_CTRLA_DIPO_Msk            (_UINT32_(0x3) << SERCOM_SPIM_CTRLA_DIPO_Pos)        /* (SERCOM_SPIM_CTRLA) Data In Pinout Mask */
#define SERCOM_SPIM_CTRLA_DIPO(value)         (SERCOM_SPIM_CTRLA_DIPO_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_DIPO_Pos)) /* Assigment of value for DIPO in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD[0] is used as data input  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD1_Val     _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD[1] is used as data input  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD[2] is used as data input  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD3_Val     _UINT32_(0x3)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD[3] is used as data input  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD0           (SERCOM_SPIM_CTRLA_DIPO_PAD0_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD[0] is used as data input Position  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD1           (SERCOM_SPIM_CTRLA_DIPO_PAD1_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD[1] is used as data input Position  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD2           (SERCOM_SPIM_CTRLA_DIPO_PAD2_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD[2] is used as data input Position  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD3           (SERCOM_SPIM_CTRLA_DIPO_PAD3_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD[3] is used as data input Position  */
#define SERCOM_SPIM_CTRLA_FORM_Pos            _UINT32_(24)                                         /* (SERCOM_SPIM_CTRLA) Frame Format Position */
#define SERCOM_SPIM_CTRLA_FORM_Msk            (_UINT32_(0xF) << SERCOM_SPIM_CTRLA_FORM_Pos)        /* (SERCOM_SPIM_CTRLA) Frame Format Mask */
#define SERCOM_SPIM_CTRLA_FORM(value)         (SERCOM_SPIM_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_FORM_Pos)) /* Assigment of value for FORM in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) SPI Frame  */
#define   SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) SPI Frame with Addr  */
#define SERCOM_SPIM_CTRLA_FORM_SPI_FRAME      (SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_Val << SERCOM_SPIM_CTRLA_FORM_Pos) /* (SERCOM_SPIM_CTRLA) SPI Frame Position  */
#define SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_WITH_ADDR (SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val << SERCOM_SPIM_CTRLA_FORM_Pos) /* (SERCOM_SPIM_CTRLA) SPI Frame with Addr Position  */
#define SERCOM_SPIM_CTRLA_CPHA_Pos            _UINT32_(28)                                         /* (SERCOM_SPIM_CTRLA) Clock Phase Position */
#define SERCOM_SPIM_CTRLA_CPHA_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_CPHA_Pos)        /* (SERCOM_SPIM_CTRLA) Clock Phase Mask */
#define SERCOM_SPIM_CTRLA_CPHA(value)         (SERCOM_SPIM_CTRLA_CPHA_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_CPHA_Pos)) /* Assigment of value for CPHA in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE   (SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPIM_CTRLA_CPHA_Pos) /* (SERCOM_SPIM_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position  */
#define SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE  (SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPIM_CTRLA_CPHA_Pos) /* (SERCOM_SPIM_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position  */
#define SERCOM_SPIM_CTRLA_CPOL_Pos            _UINT32_(29)                                         /* (SERCOM_SPIM_CTRLA) Clock Polarity Position */
#define SERCOM_SPIM_CTRLA_CPOL_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_CPOL_Pos)        /* (SERCOM_SPIM_CTRLA) Clock Polarity Mask */
#define SERCOM_SPIM_CTRLA_CPOL(value)         (SERCOM_SPIM_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_CPOL_Pos)) /* Assigment of value for CPOL in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) SCK is low when idle  */
#define   SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) SCK is high when idle  */
#define SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW       (SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPIM_CTRLA_CPOL_Pos) /* (SERCOM_SPIM_CTRLA) SCK is low when idle Position  */
#define SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH      (SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPIM_CTRLA_CPOL_Pos) /* (SERCOM_SPIM_CTRLA) SCK is high when idle Position  */
#define SERCOM_SPIM_CTRLA_DORD_Pos            _UINT32_(30)                                         /* (SERCOM_SPIM_CTRLA) Data Order Position */
#define SERCOM_SPIM_CTRLA_DORD_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_DORD_Pos)        /* (SERCOM_SPIM_CTRLA) Data Order Mask */
#define SERCOM_SPIM_CTRLA_DORD(value)         (SERCOM_SPIM_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_DORD_Pos)) /* Assigment of value for DORD in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_DORD_MSB_Val      _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) MSB is transferred first  */
#define   SERCOM_SPIM_CTRLA_DORD_LSB_Val      _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) LSB is transferred first  */
#define SERCOM_SPIM_CTRLA_DORD_MSB            (SERCOM_SPIM_CTRLA_DORD_MSB_Val << SERCOM_SPIM_CTRLA_DORD_Pos) /* (SERCOM_SPIM_CTRLA) MSB is transferred first Position  */
#define SERCOM_SPIM_CTRLA_DORD_LSB            (SERCOM_SPIM_CTRLA_DORD_LSB_Val << SERCOM_SPIM_CTRLA_DORD_Pos) /* (SERCOM_SPIM_CTRLA) LSB is transferred first Position  */
#define SERCOM_SPIM_CTRLA_Msk                 _UINT32_(0x7F33019F)                                 /* (SERCOM_SPIM_CTRLA) Register Mask  */


/* -------- SERCOM_SPIS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPIS Control A -------- */
#define SERCOM_SPIS_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIS_CTRLA) SPIS Control A  Reset Value */

#define SERCOM_SPIS_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_SPIS_CTRLA) Software Reset Position */
#define SERCOM_SPIS_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_SWRST_Pos)       /* (SERCOM_SPIS_CTRLA) Software Reset Mask */
#define SERCOM_SPIS_CTRLA_SWRST(value)        (SERCOM_SPIS_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_SPIS_CTRLA) Enable Position */
#define SERCOM_SPIS_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_ENABLE_Pos)      /* (SERCOM_SPIS_CTRLA) Enable Mask */
#define SERCOM_SPIS_CTRLA_ENABLE(value)       (SERCOM_SPIS_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_SPIS_CTRLA) Operating Mode Position */
#define SERCOM_SPIS_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_SPIS_CTRLA_MODE_Pos)        /* (SERCOM_SPIS_CTRLA) Operating Mode Mask */
#define SERCOM_SPIS_CTRLA_MODE(value)         (SERCOM_SPIS_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) USART with external clock  */
#define   SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) USART with internal clock  */
#define   SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) SPI in slave operation  */
#define   SERCOM_SPIS_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_SPIS_CTRLA) SPI in master operation  */
#define   SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_SPIS_CTRLA) I2C slave operation  */
#define   SERCOM_SPIS_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_SPIS_CTRLA) I2C master operation  */
#define SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK  (SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) USART with external clock Position  */
#define SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK  (SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) USART with internal clock Position  */
#define SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE      (SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) SPI in slave operation Position  */
#define SERCOM_SPIS_CTRLA_MODE_SPI_MASTER     (SERCOM_SPIS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) SPI in master operation Position  */
#define SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE      (SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) I2C slave operation Position  */
#define SERCOM_SPIS_CTRLA_MODE_I2C_MASTER     (SERCOM_SPIS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) I2C master operation Position  */
#define SERCOM_SPIS_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_SPIS_CTRLA) Run during Standby Position */
#define SERCOM_SPIS_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_SPIS_CTRLA) Run during Standby Mask */
#define SERCOM_SPIS_CTRLA_RUNSTDBY(value)     (SERCOM_SPIS_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_IBON_Pos            _UINT32_(8)                                          /* (SERCOM_SPIS_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPIS_CTRLA_IBON_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_IBON_Pos)        /* (SERCOM_SPIS_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPIS_CTRLA_IBON(value)         (SERCOM_SPIS_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_IBON_Pos)) /* Assigment of value for IBON in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_DOPO_Pos            _UINT32_(16)                                         /* (SERCOM_SPIS_CTRLA) Data Out Pinout Position */
#define SERCOM_SPIS_CTRLA_DOPO_Msk            (_UINT32_(0x3) << SERCOM_SPIS_CTRLA_DOPO_Pos)        /* (SERCOM_SPIS_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPIS_CTRLA_DOPO(value)         (SERCOM_SPIS_CTRLA_DOPO_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_DOPO_Pos)) /* Assigment of value for DOPO in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2]  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD0           (SERCOM_SPIS_CTRLA_DOPO_PAD0_Val << SERCOM_SPIS_CTRLA_DOPO_Pos) /* (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD2           (SERCOM_SPIS_CTRLA_DOPO_PAD2_Val << SERCOM_SPIS_CTRLA_DOPO_Pos) /* (SERCOM_SPIS_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIS_CTRLA_DIPO_Pos            _UINT32_(20)                                         /* (SERCOM_SPIS_CTRLA) Data In Pinout Position */
#define SERCOM_SPIS_CTRLA_DIPO_Msk            (_UINT32_(0x3) << SERCOM_SPIS_CTRLA_DIPO_Pos)        /* (SERCOM_SPIS_CTRLA) Data In Pinout Mask */
#define SERCOM_SPIS_CTRLA_DIPO(value)         (SERCOM_SPIS_CTRLA_DIPO_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_DIPO_Pos)) /* Assigment of value for DIPO in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD[0] is used as data input  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD1_Val     _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD[1] is used as data input  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD[2] is used as data input  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD3_Val     _UINT32_(0x3)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD[3] is used as data input  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD0           (SERCOM_SPIS_CTRLA_DIPO_PAD0_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD[0] is used as data input Position  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD1           (SERCOM_SPIS_CTRLA_DIPO_PAD1_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD[1] is used as data input Position  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD2           (SERCOM_SPIS_CTRLA_DIPO_PAD2_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD[2] is used as data input Position  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD3           (SERCOM_SPIS_CTRLA_DIPO_PAD3_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD[3] is used as data input Position  */
#define SERCOM_SPIS_CTRLA_FORM_Pos            _UINT32_(24)                                         /* (SERCOM_SPIS_CTRLA) Frame Format Position */
#define SERCOM_SPIS_CTRLA_FORM_Msk            (_UINT32_(0xF) << SERCOM_SPIS_CTRLA_FORM_Pos)        /* (SERCOM_SPIS_CTRLA) Frame Format Mask */
#define SERCOM_SPIS_CTRLA_FORM(value)         (SERCOM_SPIS_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_FORM_Pos)) /* Assigment of value for FORM in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) SPI Frame  */
#define   SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) SPI Frame with Addr  */
#define SERCOM_SPIS_CTRLA_FORM_SPI_FRAME      (SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_Val << SERCOM_SPIS_CTRLA_FORM_Pos) /* (SERCOM_SPIS_CTRLA) SPI Frame Position  */
#define SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_WITH_ADDR (SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val << SERCOM_SPIS_CTRLA_FORM_Pos) /* (SERCOM_SPIS_CTRLA) SPI Frame with Addr Position  */
#define SERCOM_SPIS_CTRLA_CPHA_Pos            _UINT32_(28)                                         /* (SERCOM_SPIS_CTRLA) Clock Phase Position */
#define SERCOM_SPIS_CTRLA_CPHA_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_CPHA_Pos)        /* (SERCOM_SPIS_CTRLA) Clock Phase Mask */
#define SERCOM_SPIS_CTRLA_CPHA(value)         (SERCOM_SPIS_CTRLA_CPHA_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_CPHA_Pos)) /* Assigment of value for CPHA in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE   (SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPIS_CTRLA_CPHA_Pos) /* (SERCOM_SPIS_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position  */
#define SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE  (SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPIS_CTRLA_CPHA_Pos) /* (SERCOM_SPIS_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position  */
#define SERCOM_SPIS_CTRLA_CPOL_Pos            _UINT32_(29)                                         /* (SERCOM_SPIS_CTRLA) Clock Polarity Position */
#define SERCOM_SPIS_CTRLA_CPOL_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_CPOL_Pos)        /* (SERCOM_SPIS_CTRLA) Clock Polarity Mask */
#define SERCOM_SPIS_CTRLA_CPOL(value)         (SERCOM_SPIS_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_CPOL_Pos)) /* Assigment of value for CPOL in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) SCK is low when idle  */
#define   SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) SCK is high when idle  */
#define SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW       (SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPIS_CTRLA_CPOL_Pos) /* (SERCOM_SPIS_CTRLA) SCK is low when idle Position  */
#define SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH      (SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPIS_CTRLA_CPOL_Pos) /* (SERCOM_SPIS_CTRLA) SCK is high when idle Position  */
#define SERCOM_SPIS_CTRLA_DORD_Pos            _UINT32_(30)                                         /* (SERCOM_SPIS_CTRLA) Data Order Position */
#define SERCOM_SPIS_CTRLA_DORD_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_DORD_Pos)        /* (SERCOM_SPIS_CTRLA) Data Order Mask */
#define SERCOM_SPIS_CTRLA_DORD(value)         (SERCOM_SPIS_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_DORD_Pos)) /* Assigment of value for DORD in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_DORD_MSB_Val      _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) MSB is transferred first  */
#define   SERCOM_SPIS_CTRLA_DORD_LSB_Val      _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) LSB is transferred first  */
#define SERCOM_SPIS_CTRLA_DORD_MSB            (SERCOM_SPIS_CTRLA_DORD_MSB_Val << SERCOM_SPIS_CTRLA_DORD_Pos) /* (SERCOM_SPIS_CTRLA) MSB is transferred first Position  */
#define SERCOM_SPIS_CTRLA_DORD_LSB            (SERCOM_SPIS_CTRLA_DORD_LSB_Val << SERCOM_SPIS_CTRLA_DORD_Pos) /* (SERCOM_SPIS_CTRLA) LSB is transferred first Position  */
#define SERCOM_SPIS_CTRLA_Msk                 _UINT32_(0x7F33019F)                                 /* (SERCOM_SPIS_CTRLA) Register Mask  */

/* -------- SERCOM_SPI_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPI SPI Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t MODE:3;           /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2;               /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:      7  Run during Standby                 */
    uint32_t IBON:1;           /*!< bit:      8  Immediate Buffer Overflow Notification */
    uint32_t :7;               /*!< bit:  9..15  Reserved                           */
    uint32_t DOPO:2;           /*!< bit: 16..17  Data Out Pinout                    */
    uint32_t :2;               /*!< bit: 18..19  Reserved                           */
    uint32_t DIPO:2;           /*!< bit: 20..21  Data In Pinout                     */
    uint32_t :2;               /*!< bit: 22..23  Reserved                           */
    uint32_t FORM:4;           /*!< bit: 24..27  Frame Format                       */
    uint32_t CPHA:1;           /*!< bit:     28  Clock Phase                        */
    uint32_t CPOL:1;           /*!< bit:     29  Clock Polarity                     */
    uint32_t DORD:1;           /*!< bit:     30  Data Order                         */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_CTRLA_OFFSET     0x00         /**< \brief (SERCOM_SPI_CTRLA offset) SPI Control A */
#define SERCOM_SPI_CTRLA_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_SPI_CTRLA reset_value) SPI Control A */

#define SERCOM_SPI_CTRLA_SWRST_Pos  0            /**< \brief (SERCOM_SPI_CTRLA) Software Reset */
#define SERCOM_SPI_CTRLA_SWRST      (_U_(0x1) << SERCOM_SPI_CTRLA_SWRST_Pos)
#define SERCOM_SPI_CTRLA_ENABLE_Pos 1            /**< \brief (SERCOM_SPI_CTRLA) Enable */
#define SERCOM_SPI_CTRLA_ENABLE     (_U_(0x1) << SERCOM_SPI_CTRLA_ENABLE_Pos)
#define SERCOM_SPI_CTRLA_MODE_Pos   2            /**< \brief (SERCOM_SPI_CTRLA) Operating Mode */
#define SERCOM_SPI_CTRLA_MODE_Msk   (_U_(0x7) << SERCOM_SPI_CTRLA_MODE_Pos)
#define SERCOM_SPI_CTRLA_MODE(value) (SERCOM_SPI_CTRLA_MODE_Msk & ((value) << SERCOM_SPI_CTRLA_MODE_Pos))
#define SERCOM_SPI_CTRLA_RUNSTDBY_Pos 7            /**< \brief (SERCOM_SPI_CTRLA) Run during Standby */
#define SERCOM_SPI_CTRLA_RUNSTDBY   (_U_(0x1) << SERCOM_SPI_CTRLA_RUNSTDBY_Pos)
#define SERCOM_SPI_CTRLA_IBON_Pos   8            /**< \brief (SERCOM_SPI_CTRLA) Immediate Buffer Overflow Notification */
#define SERCOM_SPI_CTRLA_IBON       (_U_(0x1) << SERCOM_SPI_CTRLA_IBON_Pos)
#define SERCOM_SPI_CTRLA_DOPO_Pos   16           /**< \brief (SERCOM_SPI_CTRLA) Data Out Pinout */
#define SERCOM_SPI_CTRLA_DOPO_Msk   (_U_(0x3) << SERCOM_SPI_CTRLA_DOPO_Pos)
#define SERCOM_SPI_CTRLA_DOPO(value) (SERCOM_SPI_CTRLA_DOPO_Msk & ((value) << SERCOM_SPI_CTRLA_DOPO_Pos))
#define SERCOM_SPI_CTRLA_DIPO_Pos   20           /**< \brief (SERCOM_SPI_CTRLA) Data In Pinout */
#define SERCOM_SPI_CTRLA_DIPO_Msk   (_U_(0x3) << SERCOM_SPI_CTRLA_DIPO_Pos)
#define SERCOM_SPI_CTRLA_DIPO(value) (SERCOM_SPI_CTRLA_DIPO_Msk & ((value) << SERCOM_SPI_CTRLA_DIPO_Pos))
#define SERCOM_SPI_CTRLA_FORM_Pos   24           /**< \brief (SERCOM_SPI_CTRLA) Frame Format */
#define SERCOM_SPI_CTRLA_FORM_Msk   (_U_(0xF) << SERCOM_SPI_CTRLA_FORM_Pos)
#define SERCOM_SPI_CTRLA_FORM(value) (SERCOM_SPI_CTRLA_FORM_Msk & ((value) << SERCOM_SPI_CTRLA_FORM_Pos))
#define SERCOM_SPI_CTRLA_CPHA_Pos   28           /**< \brief (SERCOM_SPI_CTRLA) Clock Phase */
#define SERCOM_SPI_CTRLA_CPHA       (_U_(0x1) << SERCOM_SPI_CTRLA_CPHA_Pos)
#define SERCOM_SPI_CTRLA_CPOL_Pos   29           /**< \brief (SERCOM_SPI_CTRLA) Clock Polarity */
#define SERCOM_SPI_CTRLA_CPOL       (_U_(0x1) << SERCOM_SPI_CTRLA_CPOL_Pos)
#define SERCOM_SPI_CTRLA_DORD_Pos   30           /**< \brief (SERCOM_SPI_CTRLA) Data Order */
#define SERCOM_SPI_CTRLA_DORD       (_U_(0x1) << SERCOM_SPI_CTRLA_DORD_Pos)
#define SERCOM_SPI_CTRLA_MASK       _U_(0x7F33019F) /**< \brief (SERCOM_SPI_CTRLA) MASK Register */

/* -------- SERCOM_USART_EXT_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART_EXT Control A -------- */
#define SERCOM_USART_EXT_CTRLA_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_EXT_CTRLA) USART_EXT Control A  Reset Value */

#define SERCOM_USART_EXT_CTRLA_SWRST_Pos      _UINT32_(0)                                          /* (SERCOM_USART_EXT_CTRLA) Software Reset Position */
#define SERCOM_USART_EXT_CTRLA_SWRST_Msk      (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_SWRST_Pos)  /* (SERCOM_USART_EXT_CTRLA) Software Reset Mask */
#define SERCOM_USART_EXT_CTRLA_SWRST(value)   (SERCOM_USART_EXT_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_USART_EXT_CTRLA register */
#define SERCOM_USART_EXT_CTRLA_ENABLE_Pos     _UINT32_(1)                                          /* (SERCOM_USART_EXT_CTRLA) Enable Position */
#define SERCOM_USART_EXT_CTRLA_ENABLE_Msk     (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_ENABLE_Pos) /* (SERCOM_USART_EXT_CTRLA) Enable Mask */
#define SERCOM_USART_EXT_CTRLA_ENABLE(value)  (SERCOM_USART_EXT_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_USART_EXT_CTRLA register */
#define SERCOM_USART_EXT_CTRLA_MODE_Pos       _UINT32_(2)                                          /* (SERCOM_USART_EXT_CTRLA) Operating Mode Position */
#define SERCOM_USART_EXT_CTRLA_MODE_Msk       (_UINT32_(0x7) << SERCOM_USART_EXT_CTRLA_MODE_Pos)   /* (SERCOM_USART_EXT_CTRLA) Operating Mode Mask */
#define SERCOM_USART_EXT_CTRLA_MODE(value)    (SERCOM_USART_EXT_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) USART with external clock  */
#define   SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) USART with internal clock  */
#define   SERCOM_USART_EXT_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLA) SPI in slave operation  */
#define   SERCOM_USART_EXT_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLA) SPI in master operation  */
#define   SERCOM_USART_EXT_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_USART_EXT_CTRLA) I2C slave operation  */
#define   SERCOM_USART_EXT_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_USART_EXT_CTRLA) I2C master operation  */
#define SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK (SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos) /* (SERCOM_USART_EXT_CTRLA) USART with external clock Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK (SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos) /* (SERCOM_USART_EXT_CTRLA) USART with internal clock Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_SPI_SLAVE (SERCOM_USART_EXT_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos) /* (SERCOM_USART_EXT_CTRLA) SPI in slave operation Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_SPI_MASTER (SERCOM_USART_EXT_CTRLA_MODE_SPI_MASTER_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos) /* (SERCOM_USART_EXT_CTRLA) SPI in master operation Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_I2C_SLAVE (SERCOM_USART_EXT_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos) /* (SERCOM_USART_EXT_CTRLA) I2C slave operation Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_I2C_MASTER (SERCOM_USART_EXT_CTRLA_MODE_I2C_MASTER_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos) /* (SERCOM_USART_EXT_CTRLA) I2C master operation Position  */
#define SERCOM_USART_EXT_CTRLA_RUNSTDBY_Pos   _UINT32_(7)                                          /* (SERCOM_USART_EXT_CTRLA) Run during Standby Position */
#define SERCOM_USART_EXT_CTRLA_RUNSTDBY_Msk   (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_RUNSTDBY_Pos) /* (SERCOM_USART_EXT_CTRLA) Run during Standby Mask */
#define SERCOM_USART_EXT_CTRLA_RUNSTDBY(value) (SERCOM_USART_EXT_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the SERCOM_USART_EXT_CTRLA register */
#define SERCOM_USART_EXT_CTRLA_IBON_Pos       _UINT32_(8)                                          /* (SERCOM_USART_EXT_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_USART_EXT_CTRLA_IBON_Msk       (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_IBON_Pos)   /* (SERCOM_USART_EXT_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_USART_EXT_CTRLA_IBON(value)    (SERCOM_USART_EXT_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_IBON_Pos)) /* Assigment of value for IBON in the SERCOM_USART_EXT_CTRLA register */
#define SERCOM_USART_EXT_CTRLA_TXINV_Pos      _UINT32_(9)                                          /* (SERCOM_USART_EXT_CTRLA) Transmit Data Invert Position */
#define SERCOM_USART_EXT_CTRLA_TXINV_Msk      (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_TXINV_Pos)  /* (SERCOM_USART_EXT_CTRLA) Transmit Data Invert Mask */
#define SERCOM_USART_EXT_CTRLA_TXINV(value)   (SERCOM_USART_EXT_CTRLA_TXINV_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_TXINV_Pos)) /* Assigment of value for TXINV in the SERCOM_USART_EXT_CTRLA register */
#define SERCOM_USART_EXT_CTRLA_RXINV_Pos      _UINT32_(10)                                         /* (SERCOM_USART_EXT_CTRLA) Receive Data Invert Position */
#define SERCOM_USART_EXT_CTRLA_RXINV_Msk      (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_RXINV_Pos)  /* (SERCOM_USART_EXT_CTRLA) Receive Data Invert Mask */
#define SERCOM_USART_EXT_CTRLA_RXINV(value)   (SERCOM_USART_EXT_CTRLA_RXINV_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_RXINV_Pos)) /* Assigment of value for RXINV in the SERCOM_USART_EXT_CTRLA register */
#define SERCOM_USART_EXT_CTRLA_SAMPR_Pos      _UINT32_(13)                                         /* (SERCOM_USART_EXT_CTRLA) Sample Position */
#define SERCOM_USART_EXT_CTRLA_SAMPR_Msk      (_UINT32_(0x7) << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /* (SERCOM_USART_EXT_CTRLA) Sample Mask */
#define SERCOM_USART_EXT_CTRLA_SAMPR(value)   (SERCOM_USART_EXT_CTRLA_SAMPR_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)) /* Assigment of value for SAMPR in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_16X_ARITHMETIC_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) 16x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_16X_FRACTIONAL_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) 16x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_8X_ARITHMETIC_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLA) 8x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_8X_FRACTIONAL_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLA) 8x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_3X_ARITHMETIC_Val _UINT32_(0x4)                                        /* (SERCOM_USART_EXT_CTRLA) 3x over-sampling using arithmetic baudrate generation  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_16X_ARITHMETIC (SERCOM_USART_EXT_CTRLA_SAMPR_16X_ARITHMETIC_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_EXT_CTRLA) 16x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_16X_FRACTIONAL (SERCOM_USART_EXT_CTRLA_SAMPR_16X_FRACTIONAL_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_EXT_CTRLA) 16x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_8X_ARITHMETIC (SERCOM_USART_EXT_CTRLA_SAMPR_8X_ARITHMETIC_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_EXT_CTRLA) 8x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_8X_FRACTIONAL (SERCOM_USART_EXT_CTRLA_SAMPR_8X_FRACTIONAL_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_EXT_CTRLA) 8x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_3X_ARITHMETIC (SERCOM_USART_EXT_CTRLA_SAMPR_3X_ARITHMETIC_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_EXT_CTRLA) 3x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_TXPO_Pos       _UINT32_(16)                                         /* (SERCOM_USART_EXT_CTRLA) Transmit Data Pinout Position */
#define SERCOM_USART_EXT_CTRLA_TXPO_Msk       (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLA_TXPO_Pos)   /* (SERCOM_USART_EXT_CTRLA) Transmit Data Pinout Mask */
#define SERCOM_USART_EXT_CTRLA_TXPO(value)    (SERCOM_USART_EXT_CTRLA_TXPO_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_TXPO_Pos)) /* Assigment of value for TXPO in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_TXPO_PAD0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[1] = XCK  */
#define   SERCOM_USART_EXT_CTRLA_TXPO_PAD2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS  */
#define   SERCOM_USART_EXT_CTRLA_TXPO_PAD3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[1] = XCK; PAD[2] = TE  */
#define SERCOM_USART_EXT_CTRLA_TXPO_PAD0      (SERCOM_USART_EXT_CTRLA_TXPO_PAD0_Val << SERCOM_USART_EXT_CTRLA_TXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[1] = XCK Position  */
#define SERCOM_USART_EXT_CTRLA_TXPO_PAD2      (SERCOM_USART_EXT_CTRLA_TXPO_PAD2_Val << SERCOM_USART_EXT_CTRLA_TXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS Position  */
#define SERCOM_USART_EXT_CTRLA_TXPO_PAD3      (SERCOM_USART_EXT_CTRLA_TXPO_PAD3_Val << SERCOM_USART_EXT_CTRLA_TXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[1] = XCK; PAD[2] = TE Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_Pos       _UINT32_(20)                                         /* (SERCOM_USART_EXT_CTRLA) Receive Data Pinout Position */
#define SERCOM_USART_EXT_CTRLA_RXPO_Msk       (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLA_RXPO_Pos)   /* (SERCOM_USART_EXT_CTRLA) Receive Data Pinout Mask */
#define SERCOM_USART_EXT_CTRLA_RXPO(value)    (SERCOM_USART_EXT_CTRLA_RXPO_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_RXPO_Pos)) /* Assigment of value for RXPO in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[0] is used for data reception  */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[1] is used for data reception  */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[2] is used for data reception  */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[3] is used for data reception  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD0      (SERCOM_USART_EXT_CTRLA_RXPO_PAD0_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[0] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD1      (SERCOM_USART_EXT_CTRLA_RXPO_PAD1_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[1] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD2      (SERCOM_USART_EXT_CTRLA_RXPO_PAD2_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[2] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD3      (SERCOM_USART_EXT_CTRLA_RXPO_PAD3_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos) /* (SERCOM_USART_EXT_CTRLA) SERCOM PAD[3] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_Pos      _UINT32_(22)                                         /* (SERCOM_USART_EXT_CTRLA) Sample Adjustment Position */
#define SERCOM_USART_EXT_CTRLA_SAMPA_Msk      (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)  /* (SERCOM_USART_EXT_CTRLA) Sample Adjustment Mask */
#define SERCOM_USART_EXT_CTRLA_SAMPA(value)   (SERCOM_USART_EXT_CTRLA_SAMPA_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)) /* Assigment of value for SAMPA in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5  */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6  */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7  */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ0     (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ0_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5 Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ1     (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ1_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6 Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ2     (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ2_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7 Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ3     (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ3_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8 Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_Pos       _UINT32_(24)                                         /* (SERCOM_USART_EXT_CTRLA) Frame Format Position */
#define SERCOM_USART_EXT_CTRLA_FORM_Msk       (_UINT32_(0xF) << SERCOM_USART_EXT_CTRLA_FORM_Pos)   /* (SERCOM_USART_EXT_CTRLA) Frame Format Mask */
#define SERCOM_USART_EXT_CTRLA_FORM(value)    (SERCOM_USART_EXT_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_FORM_Pos)) /* Assigment of value for FORM in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) USART frame  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) USART frame with parity  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_LIN_MASTER_MODE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLA) LIN Master - Break and sync generation  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val _UINT32_(0x4)                                        /* (SERCOM_USART_EXT_CTRLA) Auto-baud (LIN Slave) - break detection and auto-baud  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val _UINT32_(0x5)                                        /* (SERCOM_USART_EXT_CTRLA) Auto-baud - break detection and auto-baud with parity  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_ISO_7816_Val _UINT32_(0x7)                                        /* (SERCOM_USART_EXT_CTRLA) ISO 7816  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos) /* (SERCOM_USART_EXT_CTRLA) USART frame Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos) /* (SERCOM_USART_EXT_CTRLA) USART frame with parity Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_LIN_MASTER_MODE (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_LIN_MASTER_MODE_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos) /* (SERCOM_USART_EXT_CTRLA) LIN Master - Break and sync generation Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos) /* (SERCOM_USART_EXT_CTRLA) Auto-baud (LIN Slave) - break detection and auto-baud Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos) /* (SERCOM_USART_EXT_CTRLA) Auto-baud - break detection and auto-baud with parity Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_ISO_7816 (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_ISO_7816_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos) /* (SERCOM_USART_EXT_CTRLA) ISO 7816 Position  */
#define SERCOM_USART_EXT_CTRLA_CMODE_Pos      _UINT32_(28)                                         /* (SERCOM_USART_EXT_CTRLA) Communication Mode Position */
#define SERCOM_USART_EXT_CTRLA_CMODE_Msk      (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_CMODE_Pos)  /* (SERCOM_USART_EXT_CTRLA) Communication Mode Mask */
#define SERCOM_USART_EXT_CTRLA_CMODE(value)   (SERCOM_USART_EXT_CTRLA_CMODE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_CMODE_Pos)) /* Assigment of value for CMODE in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_CMODE_ASYNC_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) Asynchronous Communication  */
#define   SERCOM_USART_EXT_CTRLA_CMODE_SYNC_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) Synchronous Communication  */
#define SERCOM_USART_EXT_CTRLA_CMODE_ASYNC    (SERCOM_USART_EXT_CTRLA_CMODE_ASYNC_Val << SERCOM_USART_EXT_CTRLA_CMODE_Pos) /* (SERCOM_USART_EXT_CTRLA) Asynchronous Communication Position  */
#define SERCOM_USART_EXT_CTRLA_CMODE_SYNC     (SERCOM_USART_EXT_CTRLA_CMODE_SYNC_Val << SERCOM_USART_EXT_CTRLA_CMODE_Pos) /* (SERCOM_USART_EXT_CTRLA) Synchronous Communication Position  */
#define SERCOM_USART_EXT_CTRLA_CPOL_Pos       _UINT32_(29)                                         /* (SERCOM_USART_EXT_CTRLA) Clock Polarity Position */
#define SERCOM_USART_EXT_CTRLA_CPOL_Msk       (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_CPOL_Pos)   /* (SERCOM_USART_EXT_CTRLA) Clock Polarity Mask */
#define SERCOM_USART_EXT_CTRLA_CPOL(value)    (SERCOM_USART_EXT_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_CPOL_Pos)) /* Assigment of value for CPOL in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge  */
#define   SERCOM_USART_EXT_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge  */
#define SERCOM_USART_EXT_CTRLA_CPOL_IDLE_LOW  (SERCOM_USART_EXT_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_USART_EXT_CTRLA_CPOL_Pos) /* (SERCOM_USART_EXT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge Position  */
#define SERCOM_USART_EXT_CTRLA_CPOL_IDLE_HIGH (SERCOM_USART_EXT_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_USART_EXT_CTRLA_CPOL_Pos) /* (SERCOM_USART_EXT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge Position  */
#define SERCOM_USART_EXT_CTRLA_DORD_Pos       _UINT32_(30)                                         /* (SERCOM_USART_EXT_CTRLA) Data Order Position */
#define SERCOM_USART_EXT_CTRLA_DORD_Msk       (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLA_DORD_Pos)   /* (SERCOM_USART_EXT_CTRLA) Data Order Mask */
#define SERCOM_USART_EXT_CTRLA_DORD(value)    (SERCOM_USART_EXT_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLA_DORD_Pos)) /* Assigment of value for DORD in the SERCOM_USART_EXT_CTRLA register */
#define   SERCOM_USART_EXT_CTRLA_DORD_MSB_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLA) MSB is transmitted first  */
#define   SERCOM_USART_EXT_CTRLA_DORD_LSB_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLA) LSB is transmitted first  */
#define SERCOM_USART_EXT_CTRLA_DORD_MSB       (SERCOM_USART_EXT_CTRLA_DORD_MSB_Val << SERCOM_USART_EXT_CTRLA_DORD_Pos) /* (SERCOM_USART_EXT_CTRLA) MSB is transmitted first Position  */
#define SERCOM_USART_EXT_CTRLA_DORD_LSB       (SERCOM_USART_EXT_CTRLA_DORD_LSB_Val << SERCOM_USART_EXT_CTRLA_DORD_Pos) /* (SERCOM_USART_EXT_CTRLA) LSB is transmitted first Position  */
#define SERCOM_USART_EXT_CTRLA_Msk            _UINT32_(0x7FF3E79F)                                 /* (SERCOM_USART_EXT_CTRLA) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART_INT Control A -------- */
#define SERCOM_USART_INT_CTRLA_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_CTRLA) USART_INT Control A  Reset Value */

#define SERCOM_USART_INT_CTRLA_SWRST_Pos      _UINT32_(0)                                          /* (SERCOM_USART_INT_CTRLA) Software Reset Position */
#define SERCOM_USART_INT_CTRLA_SWRST_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_SWRST_Pos)  /* (SERCOM_USART_INT_CTRLA) Software Reset Mask */
#define SERCOM_USART_INT_CTRLA_SWRST(value)   (SERCOM_USART_INT_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_ENABLE_Pos     _UINT32_(1)                                          /* (SERCOM_USART_INT_CTRLA) Enable Position */
#define SERCOM_USART_INT_CTRLA_ENABLE_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_ENABLE_Pos) /* (SERCOM_USART_INT_CTRLA) Enable Mask */
#define SERCOM_USART_INT_CTRLA_ENABLE(value)  (SERCOM_USART_INT_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_MODE_Pos       _UINT32_(2)                                          /* (SERCOM_USART_INT_CTRLA) Operating Mode Position */
#define SERCOM_USART_INT_CTRLA_MODE_Msk       (_UINT32_(0x7) << SERCOM_USART_INT_CTRLA_MODE_Pos)   /* (SERCOM_USART_INT_CTRLA) Operating Mode Mask */
#define SERCOM_USART_INT_CTRLA_MODE(value)    (SERCOM_USART_INT_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) USART with external clock  */
#define   SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) USART with internal clock  */
#define   SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) SPI in slave operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) SPI in master operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_USART_INT_CTRLA) I2C slave operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_USART_INT_CTRLA) I2C master operation  */
#define SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK (SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) USART with external clock Position  */
#define SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK (SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) USART with internal clock Position  */
#define SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE (SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) SPI in slave operation Position  */
#define SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER (SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) SPI in master operation Position  */
#define SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE (SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) I2C slave operation Position  */
#define SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER (SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) I2C master operation Position  */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos   _UINT32_(7)                                          /* (SERCOM_USART_INT_CTRLA) Run during Standby Position */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk   (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos) /* (SERCOM_USART_INT_CTRLA) Run during Standby Mask */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY(value) (SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_IBON_Pos       _UINT32_(8)                                          /* (SERCOM_USART_INT_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_USART_INT_CTRLA_IBON_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_IBON_Pos)   /* (SERCOM_USART_INT_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_USART_INT_CTRLA_IBON(value)    (SERCOM_USART_INT_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_IBON_Pos)) /* Assigment of value for IBON in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_TXINV_Pos      _UINT32_(9)                                          /* (SERCOM_USART_INT_CTRLA) Transmit Data Invert Position */
#define SERCOM_USART_INT_CTRLA_TXINV_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_TXINV_Pos)  /* (SERCOM_USART_INT_CTRLA) Transmit Data Invert Mask */
#define SERCOM_USART_INT_CTRLA_TXINV(value)   (SERCOM_USART_INT_CTRLA_TXINV_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_TXINV_Pos)) /* Assigment of value for TXINV in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_RXINV_Pos      _UINT32_(10)                                         /* (SERCOM_USART_INT_CTRLA) Receive Data Invert Position */
#define SERCOM_USART_INT_CTRLA_RXINV_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_RXINV_Pos)  /* (SERCOM_USART_INT_CTRLA) Receive Data Invert Mask */
#define SERCOM_USART_INT_CTRLA_RXINV(value)   (SERCOM_USART_INT_CTRLA_RXINV_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_RXINV_Pos)) /* Assigment of value for RXINV in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_SAMPR_Pos      _UINT32_(13)                                         /* (SERCOM_USART_INT_CTRLA) Sample Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_Msk      (_UINT32_(0x7) << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /* (SERCOM_USART_INT_CTRLA) Sample Mask */
#define SERCOM_USART_INT_CTRLA_SAMPR(value)   (SERCOM_USART_INT_CTRLA_SAMPR_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_SAMPR_Pos)) /* Assigment of value for SAMPR in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_SAMPR_16X_ARITHMETIC_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) 16x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_16X_FRACTIONAL_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) 16x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_8X_ARITHMETIC_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) 8x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_8X_FRACTIONAL_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) 8x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_3X_ARITHMETIC_Val _UINT32_(0x4)                                        /* (SERCOM_USART_INT_CTRLA) 3x over-sampling using arithmetic baudrate generation  */
#define SERCOM_USART_INT_CTRLA_SAMPR_16X_ARITHMETIC (SERCOM_USART_INT_CTRLA_SAMPR_16X_ARITHMETIC_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 16x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_16X_FRACTIONAL (SERCOM_USART_INT_CTRLA_SAMPR_16X_FRACTIONAL_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 16x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_8X_ARITHMETIC (SERCOM_USART_INT_CTRLA_SAMPR_8X_ARITHMETIC_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 8x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_8X_FRACTIONAL (SERCOM_USART_INT_CTRLA_SAMPR_8X_FRACTIONAL_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 8x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_3X_ARITHMETIC (SERCOM_USART_INT_CTRLA_SAMPR_3X_ARITHMETIC_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 3x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_TXPO_Pos       _UINT32_(16)                                         /* (SERCOM_USART_INT_CTRLA) Transmit Data Pinout Position */
#define SERCOM_USART_INT_CTRLA_TXPO_Msk       (_UINT32_(0x3) << SERCOM_USART_INT_CTRLA_TXPO_Pos)   /* (SERCOM_USART_INT_CTRLA) Transmit Data Pinout Mask */
#define SERCOM_USART_INT_CTRLA_TXPO(value)    (SERCOM_USART_INT_CTRLA_TXPO_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_TXPO_Pos)) /* Assigment of value for TXPO in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK  */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS  */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK; PAD[2] = TE  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD0      (SERCOM_USART_INT_CTRLA_TXPO_PAD0_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos) /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK Position  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD2      (SERCOM_USART_INT_CTRLA_TXPO_PAD2_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos) /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS Position  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD3      (SERCOM_USART_INT_CTRLA_TXPO_PAD3_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos) /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK; PAD[2] = TE Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_Pos       _UINT32_(20)                                         /* (SERCOM_USART_INT_CTRLA) Receive Data Pinout Position */
#define SERCOM_USART_INT_CTRLA_RXPO_Msk       (_UINT32_(0x3) << SERCOM_USART_INT_CTRLA_RXPO_Pos)   /* (SERCOM_USART_INT_CTRLA) Receive Data Pinout Mask */
#define SERCOM_USART_INT_CTRLA_RXPO(value)    (SERCOM_USART_INT_CTRLA_RXPO_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_RXPO_Pos)) /* Assigment of value for RXPO in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[0] is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[1] is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[2] is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[3] is used for data reception  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD0      (SERCOM_USART_INT_CTRLA_RXPO_PAD0_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[0] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD1      (SERCOM_USART_INT_CTRLA_RXPO_PAD1_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[1] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD2      (SERCOM_USART_INT_CTRLA_RXPO_PAD2_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[2] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD3      (SERCOM_USART_INT_CTRLA_RXPO_PAD3_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD[3] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_Pos      _UINT32_(22)                                         /* (SERCOM_USART_INT_CTRLA) Sample Adjustment Position */
#define SERCOM_USART_INT_CTRLA_SAMPA_Msk      (_UINT32_(0x3) << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /* (SERCOM_USART_INT_CTRLA) Sample Adjustment Mask */
#define SERCOM_USART_INT_CTRLA_SAMPA(value)   (SERCOM_USART_INT_CTRLA_SAMPA_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_SAMPA_Pos)) /* Assigment of value for SAMPA in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5  */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6  */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7  */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ0     (SERCOM_USART_INT_CTRLA_SAMPA_ADJ0_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5 Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ1     (SERCOM_USART_INT_CTRLA_SAMPA_ADJ1_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6 Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ2     (SERCOM_USART_INT_CTRLA_SAMPA_ADJ2_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7 Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ3     (SERCOM_USART_INT_CTRLA_SAMPA_ADJ3_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos) /* (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8 Position  */
#define SERCOM_USART_INT_CTRLA_FORM_Pos       _UINT32_(24)                                         /* (SERCOM_USART_INT_CTRLA) Frame Format Position */
#define SERCOM_USART_INT_CTRLA_FORM_Msk       (_UINT32_(0xF) << SERCOM_USART_INT_CTRLA_FORM_Pos)   /* (SERCOM_USART_INT_CTRLA) Frame Format Mask */
#define SERCOM_USART_INT_CTRLA_FORM(value)    (SERCOM_USART_INT_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_FORM_Pos)) /* Assigment of value for FORM in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) USART frame  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) USART frame with parity  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_LIN_MASTER_MODE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) LIN Master - Break and sync generation  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val _UINT32_(0x4)                                        /* (SERCOM_USART_INT_CTRLA) Auto-baud (LIN Slave) - break detection and auto-baud  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val _UINT32_(0x5)                                        /* (SERCOM_USART_INT_CTRLA) Auto-baud - break detection and auto-baud with parity  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_ISO_7816_Val _UINT32_(0x7)                                        /* (SERCOM_USART_INT_CTRLA) ISO 7816  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) USART frame Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) USART frame with parity Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_LIN_MASTER_MODE (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_LIN_MASTER_MODE_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) LIN Master - Break and sync generation Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) Auto-baud (LIN Slave) - break detection and auto-baud Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) Auto-baud - break detection and auto-baud with parity Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_ISO_7816 (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_ISO_7816_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) ISO 7816 Position  */
#define SERCOM_USART_INT_CTRLA_CMODE_Pos      _UINT32_(28)                                         /* (SERCOM_USART_INT_CTRLA) Communication Mode Position */
#define SERCOM_USART_INT_CTRLA_CMODE_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_CMODE_Pos)  /* (SERCOM_USART_INT_CTRLA) Communication Mode Mask */
#define SERCOM_USART_INT_CTRLA_CMODE(value)   (SERCOM_USART_INT_CTRLA_CMODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_CMODE_Pos)) /* Assigment of value for CMODE in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_CMODE_ASYNC_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) Asynchronous Communication  */
#define   SERCOM_USART_INT_CTRLA_CMODE_SYNC_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) Synchronous Communication  */
#define SERCOM_USART_INT_CTRLA_CMODE_ASYNC    (SERCOM_USART_INT_CTRLA_CMODE_ASYNC_Val << SERCOM_USART_INT_CTRLA_CMODE_Pos) /* (SERCOM_USART_INT_CTRLA) Asynchronous Communication Position  */
#define SERCOM_USART_INT_CTRLA_CMODE_SYNC     (SERCOM_USART_INT_CTRLA_CMODE_SYNC_Val << SERCOM_USART_INT_CTRLA_CMODE_Pos) /* (SERCOM_USART_INT_CTRLA) Synchronous Communication Position  */
#define SERCOM_USART_INT_CTRLA_CPOL_Pos       _UINT32_(29)                                         /* (SERCOM_USART_INT_CTRLA) Clock Polarity Position */
#define SERCOM_USART_INT_CTRLA_CPOL_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_CPOL_Pos)   /* (SERCOM_USART_INT_CTRLA) Clock Polarity Mask */
#define SERCOM_USART_INT_CTRLA_CPOL(value)    (SERCOM_USART_INT_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_CPOL_Pos)) /* Assigment of value for CPOL in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge  */
#define   SERCOM_USART_INT_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge  */
#define SERCOM_USART_INT_CTRLA_CPOL_IDLE_LOW  (SERCOM_USART_INT_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_USART_INT_CTRLA_CPOL_Pos) /* (SERCOM_USART_INT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge Position  */
#define SERCOM_USART_INT_CTRLA_CPOL_IDLE_HIGH (SERCOM_USART_INT_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_USART_INT_CTRLA_CPOL_Pos) /* (SERCOM_USART_INT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge Position  */
#define SERCOM_USART_INT_CTRLA_DORD_Pos       _UINT32_(30)                                         /* (SERCOM_USART_INT_CTRLA) Data Order Position */
#define SERCOM_USART_INT_CTRLA_DORD_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_DORD_Pos)   /* (SERCOM_USART_INT_CTRLA) Data Order Mask */
#define SERCOM_USART_INT_CTRLA_DORD(value)    (SERCOM_USART_INT_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_DORD_Pos)) /* Assigment of value for DORD in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_DORD_MSB_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) MSB is transmitted first  */
#define   SERCOM_USART_INT_CTRLA_DORD_LSB_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) LSB is transmitted first  */
#define SERCOM_USART_INT_CTRLA_DORD_MSB       (SERCOM_USART_INT_CTRLA_DORD_MSB_Val << SERCOM_USART_INT_CTRLA_DORD_Pos) /* (SERCOM_USART_INT_CTRLA) MSB is transmitted first Position  */
#define SERCOM_USART_INT_CTRLA_DORD_LSB       (SERCOM_USART_INT_CTRLA_DORD_LSB_Val << SERCOM_USART_INT_CTRLA_DORD_Pos) /* (SERCOM_USART_INT_CTRLA) LSB is transmitted first Position  */
#define SERCOM_USART_INT_CTRLA_Msk            _UINT32_(0x7FF3E79F)                                 /* (SERCOM_USART_INT_CTRLA) Register Mask  */

/* -------- SERCOM_USART_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART USART Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t MODE:3;           /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2;               /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:      7  Run during Standby                 */
    uint32_t IBON:1;           /*!< bit:      8  Immediate Buffer Overflow Notification */
    uint32_t TXINV:1;          /*!< bit:      9  Transmit Data Invert               */
    uint32_t RXINV:1;          /*!< bit:     10  Receive Data Invert                */
    uint32_t :2;               /*!< bit: 11..12  Reserved                           */
    uint32_t SAMPR:3;          /*!< bit: 13..15  Sample                             */
    uint32_t TXPO:2;           /*!< bit: 16..17  Transmit Data Pinout               */
    uint32_t :2;               /*!< bit: 18..19  Reserved                           */
    uint32_t RXPO:2;           /*!< bit: 20..21  Receive Data Pinout                */
    uint32_t SAMPA:2;          /*!< bit: 22..23  Sample Adjustment                  */
    uint32_t FORM:4;           /*!< bit: 24..27  Frame Format                       */
    uint32_t CMODE:1;          /*!< bit:     28  Communication Mode                 */
    uint32_t CPOL:1;           /*!< bit:     29  Clock Polarity                     */
    uint32_t DORD:1;           /*!< bit:     30  Data Order                         */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_CTRLA_OFFSET   0x00         /**< \brief (SERCOM_USART_CTRLA offset) USART Control A */
#define SERCOM_USART_CTRLA_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_USART_CTRLA reset_value) USART Control A */

#define SERCOM_USART_CTRLA_SWRST_Pos 0            /**< \brief (SERCOM_USART_CTRLA) Software Reset */
#define SERCOM_USART_CTRLA_SWRST    (_U_(0x1) << SERCOM_USART_CTRLA_SWRST_Pos)
#define SERCOM_USART_CTRLA_ENABLE_Pos 1            /**< \brief (SERCOM_USART_CTRLA) Enable */
#define SERCOM_USART_CTRLA_ENABLE   (_U_(0x1) << SERCOM_USART_CTRLA_ENABLE_Pos)
#define SERCOM_USART_CTRLA_MODE_Pos 2            /**< \brief (SERCOM_USART_CTRLA) Operating Mode */
#define SERCOM_USART_CTRLA_MODE_Msk (_U_(0x7) << SERCOM_USART_CTRLA_MODE_Pos)
#define SERCOM_USART_CTRLA_MODE(value) (SERCOM_USART_CTRLA_MODE_Msk & ((value) << SERCOM_USART_CTRLA_MODE_Pos))
#define SERCOM_USART_CTRLA_RUNSTDBY_Pos 7            /**< \brief (SERCOM_USART_CTRLA) Run during Standby */
#define SERCOM_USART_CTRLA_RUNSTDBY (_U_(0x1) << SERCOM_USART_CTRLA_RUNSTDBY_Pos)
#define SERCOM_USART_CTRLA_IBON_Pos 8            /**< \brief (SERCOM_USART_CTRLA) Immediate Buffer Overflow Notification */
#define SERCOM_USART_CTRLA_IBON     (_U_(0x1) << SERCOM_USART_CTRLA_IBON_Pos)
#define SERCOM_USART_CTRLA_TXINV_Pos 9            /**< \brief (SERCOM_USART_CTRLA) Transmit Data Invert */
#define SERCOM_USART_CTRLA_TXINV    (_U_(0x1) << SERCOM_USART_CTRLA_TXINV_Pos)
#define SERCOM_USART_CTRLA_RXINV_Pos 10           /**< \brief (SERCOM_USART_CTRLA) Receive Data Invert */
#define SERCOM_USART_CTRLA_RXINV    (_U_(0x1) << SERCOM_USART_CTRLA_RXINV_Pos)
#define SERCOM_USART_CTRLA_SAMPR_Pos 13           /**< \brief (SERCOM_USART_CTRLA) Sample */
#define SERCOM_USART_CTRLA_SAMPR_Msk (_U_(0x7) << SERCOM_USART_CTRLA_SAMPR_Pos)
#define SERCOM_USART_CTRLA_SAMPR(value) (SERCOM_USART_CTRLA_SAMPR_Msk & ((value) << SERCOM_USART_CTRLA_SAMPR_Pos))
#define SERCOM_USART_CTRLA_TXPO_Pos 16           /**< \brief (SERCOM_USART_CTRLA) Transmit Data Pinout */
#define SERCOM_USART_CTRLA_TXPO_Msk (_U_(0x3) << SERCOM_USART_CTRLA_TXPO_Pos)
#define SERCOM_USART_CTRLA_TXPO(value) (SERCOM_USART_CTRLA_TXPO_Msk & ((value) << SERCOM_USART_CTRLA_TXPO_Pos))
#define SERCOM_USART_CTRLA_RXPO_Pos 20           /**< \brief (SERCOM_USART_CTRLA) Receive Data Pinout */
#define SERCOM_USART_CTRLA_RXPO_Msk (_U_(0x3) << SERCOM_USART_CTRLA_RXPO_Pos)
#define SERCOM_USART_CTRLA_RXPO(value) (SERCOM_USART_CTRLA_RXPO_Msk & ((value) << SERCOM_USART_CTRLA_RXPO_Pos))
#define SERCOM_USART_CTRLA_SAMPA_Pos 22           /**< \brief (SERCOM_USART_CTRLA) Sample Adjustment */
#define SERCOM_USART_CTRLA_SAMPA_Msk (_U_(0x3) << SERCOM_USART_CTRLA_SAMPA_Pos)
#define SERCOM_USART_CTRLA_SAMPA(value) (SERCOM_USART_CTRLA_SAMPA_Msk & ((value) << SERCOM_USART_CTRLA_SAMPA_Pos))
#define SERCOM_USART_CTRLA_FORM_Pos 24           /**< \brief (SERCOM_USART_CTRLA) Frame Format */
#define SERCOM_USART_CTRLA_FORM_Msk (_U_(0xF) << SERCOM_USART_CTRLA_FORM_Pos)
#define SERCOM_USART_CTRLA_FORM(value) (SERCOM_USART_CTRLA_FORM_Msk & ((value) << SERCOM_USART_CTRLA_FORM_Pos))
#define SERCOM_USART_CTRLA_CMODE_Pos 28           /**< \brief (SERCOM_USART_CTRLA) Communication Mode */
#define SERCOM_USART_CTRLA_CMODE    (_U_(0x1) << SERCOM_USART_CTRLA_CMODE_Pos)
#define SERCOM_USART_CTRLA_CPOL_Pos 29           /**< \brief (SERCOM_USART_CTRLA) Clock Polarity */
#define SERCOM_USART_CTRLA_CPOL     (_U_(0x1) << SERCOM_USART_CTRLA_CPOL_Pos)
#define SERCOM_USART_CTRLA_DORD_Pos 30           /**< \brief (SERCOM_USART_CTRLA) Data Order */
#define SERCOM_USART_CTRLA_DORD     (_U_(0x1) << SERCOM_USART_CTRLA_DORD_Pos)
#define SERCOM_USART_CTRLA_MASK     _U_(0x7FF3E79F) /**< \brief (SERCOM_USART_CTRLA) MASK Register */

/* -------- SERCOM_I2CM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CM Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :8;               /*!< bit:  0.. 7  Reserved                           */
    uint32_t SMEN:1;           /*!< bit:      8  Smart Mode Enable                  */
    uint32_t QCEN:1;           /*!< bit:      9  Quick Command Enable               */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t CMD:2;            /*!< bit: 16..17  Command                            */
    uint32_t ACKACT:1;         /*!< bit:     18  Acknowledge Action                 */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLB) I2CM Control B  Reset Value */

#define SERCOM_I2CM_CTRLB_SMEN_Pos            _UINT32_(8)                                          /* (SERCOM_I2CM_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CM_CTRLB_SMEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_SMEN_Pos)        /* (SERCOM_I2CM_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CM_CTRLB_SMEN(value)         (SERCOM_I2CM_CTRLB_SMEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_SMEN_Pos)) /* Assigment of value for SMEN in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_QCEN_Pos            _UINT32_(9)                                          /* (SERCOM_I2CM_CTRLB) Quick Command Enable Position */
#define SERCOM_I2CM_CTRLB_QCEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_QCEN_Pos)        /* (SERCOM_I2CM_CTRLB) Quick Command Enable Mask */
#define SERCOM_I2CM_CTRLB_QCEN(value)         (SERCOM_I2CM_CTRLB_QCEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_QCEN_Pos)) /* Assigment of value for QCEN in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_CMD_Pos             _UINT32_(16)                                         /* (SERCOM_I2CM_CTRLB) Command Position */
#define SERCOM_I2CM_CTRLB_CMD_Msk             (_UINT32_(0x3) << SERCOM_I2CM_CTRLB_CMD_Pos)         /* (SERCOM_I2CM_CTRLB) Command Mask */
#define SERCOM_I2CM_CTRLB_CMD(value)          (SERCOM_I2CM_CTRLB_CMD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_CMD_Pos)) /* Assigment of value for CMD in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_ACKACT_Pos          _UINT32_(18)                                         /* (SERCOM_I2CM_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CM_CTRLB_ACKACT_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_ACKACT_Pos)      /* (SERCOM_I2CM_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CM_CTRLB_ACKACT(value)       (SERCOM_I2CM_CTRLB_ACKACT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_ACKACT_Pos)) /* Assigment of value for ACKACT in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_Msk                 _UINT32_(0x00070300)                                 /* (SERCOM_I2CM_CTRLB) Register Mask  */


/* -------- SERCOM_I2CS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CS Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :8;               /*!< bit:  0.. 7  Reserved                           */
    uint32_t SMEN:1;           /*!< bit:      8  Smart Mode Enable                  */
    uint32_t GCMD:1;           /*!< bit:      9  PMBus Group Command                */
    uint32_t AACKEN:1;         /*!< bit:     10  Automatic Address Acknowledge      */
    uint32_t :3;               /*!< bit: 11..13  Reserved                           */
    uint32_t AMODE:2;          /*!< bit: 14..15  Address Mode                       */
    uint32_t CMD:2;            /*!< bit: 16..17  Command                            */
    uint32_t ACKACT:1;         /*!< bit:     18  Acknowledge Action                 */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLB) I2CS Control B  Reset Value */

#define SERCOM_I2CS_CTRLB_SMEN_Pos            _UINT32_(8)                                          /* (SERCOM_I2CS_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CS_CTRLB_SMEN_Msk            (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_SMEN_Pos)        /* (SERCOM_I2CS_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CS_CTRLB_SMEN(value)         (SERCOM_I2CS_CTRLB_SMEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_SMEN_Pos)) /* Assigment of value for SMEN in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_GCMD_Pos            _UINT32_(9)                                          /* (SERCOM_I2CS_CTRLB) PMBus Group Command Position */
#define SERCOM_I2CS_CTRLB_GCMD_Msk            (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_GCMD_Pos)        /* (SERCOM_I2CS_CTRLB) PMBus Group Command Mask */
#define SERCOM_I2CS_CTRLB_GCMD(value)         (SERCOM_I2CS_CTRLB_GCMD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_GCMD_Pos)) /* Assigment of value for GCMD in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_I2CS_CTRLB) Address Mode Position */
#define SERCOM_I2CS_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_AMODE_Pos)       /* (SERCOM_I2CS_CTRLB) Address Mode Mask */
#define SERCOM_I2CS_CTRLB_AMODE(value)        (SERCOM_I2CS_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_AMODE_Pos)) /* Assigment of value for AMODE in the SERCOM_I2CS_CTRLB register */
#define   SERCOM_I2CS_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLB) I2C Address mask   */
#define   SERCOM_I2CS_CTRLB_AMODE_2_ADDRESSES_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLB) Two unique Addressess  */
#define   SERCOM_I2CS_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLB) Address Range  */
#define SERCOM_I2CS_CTRLB_AMODE_MASK          (SERCOM_I2CS_CTRLB_AMODE_MASK_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) I2C Address mask  Position  */
#define SERCOM_I2CS_CTRLB_AMODE_2_ADDRESSES   (SERCOM_I2CS_CTRLB_AMODE_2_ADDRESSES_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) Two unique Addressess Position  */
#define SERCOM_I2CS_CTRLB_AMODE_RANGE         (SERCOM_I2CS_CTRLB_AMODE_RANGE_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) Address Range Position  */
#define SERCOM_I2CS_CTRLB_CMD_Pos             _UINT32_(16)                                         /* (SERCOM_I2CS_CTRLB) Command Position */
#define SERCOM_I2CS_CTRLB_CMD_Msk             (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_CMD_Pos)         /* (SERCOM_I2CS_CTRLB) Command Mask */
#define SERCOM_I2CS_CTRLB_CMD(value)          (SERCOM_I2CS_CTRLB_CMD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_CMD_Pos)) /* Assigment of value for CMD in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_ACKACT_Pos          _UINT32_(18)                                         /* (SERCOM_I2CS_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CS_CTRLB_ACKACT_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_ACKACT_Pos)      /* (SERCOM_I2CS_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CS_CTRLB_ACKACT(value)       (SERCOM_I2CS_CTRLB_ACKACT_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_ACKACT_Pos)) /* Assigment of value for ACKACT in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_Msk                 _UINT32_(0x0007C300)                                 /* (SERCOM_I2CS_CTRLB) Register Mask  */


/* -------- SERCOM_SPIM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPIM Control B -------- */
#define SERCOM_SPIM_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIM_CTRLB) SPIM Control B  Reset Value */

#define SERCOM_SPIM_CTRLB_CHSIZE_Pos          _UINT32_(0)                                          /* (SERCOM_SPIM_CTRLB) Character Size Position */
#define SERCOM_SPIM_CTRLB_CHSIZE_Msk          (_UINT32_(0x7) << SERCOM_SPIM_CTRLB_CHSIZE_Pos)      /* (SERCOM_SPIM_CTRLB) Character Size Mask */
#define SERCOM_SPIM_CTRLB_CHSIZE(value)       (SERCOM_SPIM_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_CHSIZE_Pos)) /* Assigment of value for CHSIZE in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_CHSIZE_8_BIT_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) 8 bits  */
#define   SERCOM_SPIM_CTRLB_CHSIZE_9_BIT_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) 9 bits  */
#define SERCOM_SPIM_CTRLB_CHSIZE_8_BIT        (SERCOM_SPIM_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPIM_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIM_CTRLB) 8 bits Position  */
#define SERCOM_SPIM_CTRLB_CHSIZE_9_BIT        (SERCOM_SPIM_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPIM_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIM_CTRLB) 9 bits Position  */
#define SERCOM_SPIM_CTRLB_PLOADEN_Pos         _UINT32_(6)                                          /* (SERCOM_SPIM_CTRLB) Data Preload Enable Position */
#define SERCOM_SPIM_CTRLB_PLOADEN_Msk         (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_PLOADEN_Pos)     /* (SERCOM_SPIM_CTRLB) Data Preload Enable Mask */
#define SERCOM_SPIM_CTRLB_PLOADEN(value)      (SERCOM_SPIM_CTRLB_PLOADEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_PLOADEN_Pos)) /* Assigment of value for PLOADEN in the SERCOM_SPIM_CTRLB register */
#define SERCOM_SPIM_CTRLB_SSDE_Pos            _UINT32_(9)                                          /* (SERCOM_SPIM_CTRLB) Slave Select Low Detect Enable Position */
#define SERCOM_SPIM_CTRLB_SSDE_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_SSDE_Pos)        /* (SERCOM_SPIM_CTRLB) Slave Select Low Detect Enable Mask */
#define SERCOM_SPIM_CTRLB_SSDE(value)         (SERCOM_SPIM_CTRLB_SSDE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_SSDE_Pos)) /* Assigment of value for SSDE in the SERCOM_SPIM_CTRLB register */
#define SERCOM_SPIM_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_SPIM_CTRLB) Address Mode Position */
#define SERCOM_SPIM_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_SPIM_CTRLB_AMODE_Pos)       /* (SERCOM_SPIM_CTRLB) Address Mode Mask */
#define SERCOM_SPIM_CTRLB_AMODE(value)        (SERCOM_SPIM_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_AMODE_Pos)) /* Assigment of value for AMODE in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) SPI Address mask   */
#define   SERCOM_SPIM_CTRLB_AMODE_2_ADDRESSES_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) Two unique Addressess  */
#define   SERCOM_SPIM_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLB) Address Range  */
#define SERCOM_SPIM_CTRLB_AMODE_MASK          (SERCOM_SPIM_CTRLB_AMODE_MASK_Val << SERCOM_SPIM_CTRLB_AMODE_Pos) /* (SERCOM_SPIM_CTRLB) SPI Address mask  Position  */
#define SERCOM_SPIM_CTRLB_AMODE_2_ADDRESSES   (SERCOM_SPIM_CTRLB_AMODE_2_ADDRESSES_Val << SERCOM_SPIM_CTRLB_AMODE_Pos) /* (SERCOM_SPIM_CTRLB) Two unique Addressess Position  */
#define SERCOM_SPIM_CTRLB_AMODE_RANGE         (SERCOM_SPIM_CTRLB_AMODE_RANGE_Val << SERCOM_SPIM_CTRLB_AMODE_Pos) /* (SERCOM_SPIM_CTRLB) Address Range Position  */
#define SERCOM_SPIM_CTRLB_RXEN_Pos            _UINT32_(17)                                         /* (SERCOM_SPIM_CTRLB) Receiver Enable Position */
#define SERCOM_SPIM_CTRLB_RXEN_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_RXEN_Pos)        /* (SERCOM_SPIM_CTRLB) Receiver Enable Mask */
#define SERCOM_SPIM_CTRLB_RXEN(value)         (SERCOM_SPIM_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_RXEN_Pos)) /* Assigment of value for RXEN in the SERCOM_SPIM_CTRLB register */
#define SERCOM_SPIM_CTRLB_Msk                 _UINT32_(0x0002C247)                                 /* (SERCOM_SPIM_CTRLB) Register Mask  */


/* -------- SERCOM_SPIS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPIS Control B -------- */
#define SERCOM_SPIS_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIS_CTRLB) SPIS Control B  Reset Value */

#define SERCOM_SPIS_CTRLB_CHSIZE_Pos          _UINT32_(0)                                          /* (SERCOM_SPIS_CTRLB) Character Size Position */
#define SERCOM_SPIS_CTRLB_CHSIZE_Msk          (_UINT32_(0x7) << SERCOM_SPIS_CTRLB_CHSIZE_Pos)      /* (SERCOM_SPIS_CTRLB) Character Size Mask */
#define SERCOM_SPIS_CTRLB_CHSIZE(value)       (SERCOM_SPIS_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_CHSIZE_Pos)) /* Assigment of value for CHSIZE in the SERCOM_SPIS_CTRLB register */
#define   SERCOM_SPIS_CTRLB_CHSIZE_8_BIT_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLB) 8 bits  */
#define   SERCOM_SPIS_CTRLB_CHSIZE_9_BIT_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLB) 9 bits  */
#define SERCOM_SPIS_CTRLB_CHSIZE_8_BIT        (SERCOM_SPIS_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPIS_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIS_CTRLB) 8 bits Position  */
#define SERCOM_SPIS_CTRLB_CHSIZE_9_BIT        (SERCOM_SPIS_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPIS_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIS_CTRLB) 9 bits Position  */
#define SERCOM_SPIS_CTRLB_PLOADEN_Pos         _UINT32_(6)                                          /* (SERCOM_SPIS_CTRLB) Data Preload Enable Position */
#define SERCOM_SPIS_CTRLB_PLOADEN_Msk         (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_PLOADEN_Pos)     /* (SERCOM_SPIS_CTRLB) Data Preload Enable Mask */
#define SERCOM_SPIS_CTRLB_PLOADEN(value)      (SERCOM_SPIS_CTRLB_PLOADEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_PLOADEN_Pos)) /* Assigment of value for PLOADEN in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_SSDE_Pos            _UINT32_(9)                                          /* (SERCOM_SPIS_CTRLB) Slave Select Low Detect Enable Position */
#define SERCOM_SPIS_CTRLB_SSDE_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_SSDE_Pos)        /* (SERCOM_SPIS_CTRLB) Slave Select Low Detect Enable Mask */
#define SERCOM_SPIS_CTRLB_SSDE(value)         (SERCOM_SPIS_CTRLB_SSDE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_SSDE_Pos)) /* Assigment of value for SSDE in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_SPIS_CTRLB) Address Mode Position */
#define SERCOM_SPIS_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_SPIS_CTRLB_AMODE_Pos)       /* (SERCOM_SPIS_CTRLB) Address Mode Mask */
#define SERCOM_SPIS_CTRLB_AMODE(value)        (SERCOM_SPIS_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_AMODE_Pos)) /* Assigment of value for AMODE in the SERCOM_SPIS_CTRLB register */
#define   SERCOM_SPIS_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLB) SPI Address mask   */
#define   SERCOM_SPIS_CTRLB_AMODE_2_ADDRESSES_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLB) Two unique Addressess  */
#define   SERCOM_SPIS_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLB) Address Range  */
#define SERCOM_SPIS_CTRLB_AMODE_MASK          (SERCOM_SPIS_CTRLB_AMODE_MASK_Val << SERCOM_SPIS_CTRLB_AMODE_Pos) /* (SERCOM_SPIS_CTRLB) SPI Address mask  Position  */
#define SERCOM_SPIS_CTRLB_AMODE_2_ADDRESSES   (SERCOM_SPIS_CTRLB_AMODE_2_ADDRESSES_Val << SERCOM_SPIS_CTRLB_AMODE_Pos) /* (SERCOM_SPIS_CTRLB) Two unique Addressess Position  */
#define SERCOM_SPIS_CTRLB_AMODE_RANGE         (SERCOM_SPIS_CTRLB_AMODE_RANGE_Val << SERCOM_SPIS_CTRLB_AMODE_Pos) /* (SERCOM_SPIS_CTRLB) Address Range Position  */
#define SERCOM_SPIS_CTRLB_RXEN_Pos            _UINT32_(17)                                         /* (SERCOM_SPIS_CTRLB) Receiver Enable Position */
#define SERCOM_SPIS_CTRLB_RXEN_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_RXEN_Pos)        /* (SERCOM_SPIS_CTRLB) Receiver Enable Mask */
#define SERCOM_SPIS_CTRLB_RXEN(value)         (SERCOM_SPIS_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_RXEN_Pos)) /* Assigment of value for RXEN in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_Msk                 _UINT32_(0x0002C247)                                 /* (SERCOM_SPIS_CTRLB) Register Mask  */

/* -------- SERCOM_SPI_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPI SPI Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHSIZE:3;         /*!< bit:  0.. 2  Character Size                     */
    uint32_t :3;               /*!< bit:  3.. 5  Reserved                           */
    uint32_t PLOADEN:1;        /*!< bit:      6  Data Preload Enable                */
    uint32_t :2;               /*!< bit:  7.. 8  Reserved                           */
    uint32_t SSDE:1;           /*!< bit:      9  Slave Select Low Detect Enable     */
    uint32_t :3;               /*!< bit: 10..12  Reserved                           */
    uint32_t MSSEN:1;          /*!< bit:     13  Master Slave Select Enable         */
    uint32_t AMODE:2;          /*!< bit: 14..15  Address Mode                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t RXEN:1;           /*!< bit:     17  Receiver Enable                    */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_CTRLB_OFFSET     0x04         /**< \brief (SERCOM_SPI_CTRLB offset) SPI Control B */
#define SERCOM_SPI_CTRLB_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_SPI_CTRLB reset_value) SPI Control B */

#define SERCOM_SPI_CTRLB_CHSIZE_Pos 0            /**< \brief (SERCOM_SPI_CTRLB) Character Size */
#define SERCOM_SPI_CTRLB_CHSIZE_Msk (_U_(0x7) << SERCOM_SPI_CTRLB_CHSIZE_Pos)
#define SERCOM_SPI_CTRLB_CHSIZE(value) (SERCOM_SPI_CTRLB_CHSIZE_Msk & ((value) << SERCOM_SPI_CTRLB_CHSIZE_Pos))
#define SERCOM_SPI_CTRLB_PLOADEN_Pos 6            /**< \brief (SERCOM_SPI_CTRLB) Data Preload Enable */
#define SERCOM_SPI_CTRLB_PLOADEN    (_U_(0x1) << SERCOM_SPI_CTRLB_PLOADEN_Pos)
#define SERCOM_SPI_CTRLB_SSDE_Pos   9            /**< \brief (SERCOM_SPI_CTRLB) Slave Select Low Detect Enable */
#define SERCOM_SPI_CTRLB_SSDE       (_U_(0x1) << SERCOM_SPI_CTRLB_SSDE_Pos)
#define SERCOM_SPI_CTRLB_MSSEN_Pos  13           /**< \brief (SERCOM_SPI_CTRLB) Master Slave Select Enable */
#define SERCOM_SPI_CTRLB_MSSEN      (_U_(0x1) << SERCOM_SPI_CTRLB_MSSEN_Pos)
#define SERCOM_SPI_CTRLB_AMODE_Pos  14           /**< \brief (SERCOM_SPI_CTRLB) Address Mode */
#define SERCOM_SPI_CTRLB_AMODE_Msk  (_U_(0x3) << SERCOM_SPI_CTRLB_AMODE_Pos)
#define SERCOM_SPI_CTRLB_AMODE(value) (SERCOM_SPI_CTRLB_AMODE_Msk & ((value) << SERCOM_SPI_CTRLB_AMODE_Pos))
#define SERCOM_SPI_CTRLB_RXEN_Pos   17           /**< \brief (SERCOM_SPI_CTRLB) Receiver Enable */
#define SERCOM_SPI_CTRLB_RXEN       (_U_(0x1) << SERCOM_SPI_CTRLB_RXEN_Pos)
#define SERCOM_SPI_CTRLB_MASK       _U_(0x0002E247) /**< \brief (SERCOM_SPI_CTRLB) MASK Register */


/* -------- SERCOM_USART_EXT_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART_EXT Control B -------- */
#define SERCOM_USART_EXT_CTRLB_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_EXT_CTRLB) USART_EXT Control B  Reset Value */

#define SERCOM_USART_EXT_CTRLB_CHSIZE_Pos     _UINT32_(0)                                          /* (SERCOM_USART_EXT_CTRLB) Character Size Position */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_Msk     (_UINT32_(0x7) << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_EXT_CTRLB) Character Size Mask */
#define SERCOM_USART_EXT_CTRLB_CHSIZE(value)  (SERCOM_USART_EXT_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)) /* Assigment of value for CHSIZE in the SERCOM_USART_EXT_CTRLB register */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLB) 8 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLB) 9 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT_Val _UINT32_(0x5)                                        /* (SERCOM_USART_EXT_CTRLB) 5 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT_Val _UINT32_(0x6)                                        /* (SERCOM_USART_EXT_CTRLB) 6 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT_Val _UINT32_(0x7)                                        /* (SERCOM_USART_EXT_CTRLB) 7 Bits  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT   (SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_EXT_CTRLB) 8 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT   (SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_EXT_CTRLB) 9 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT   (SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_EXT_CTRLB) 5 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT   (SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_EXT_CTRLB) 6 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT   (SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_EXT_CTRLB) 7 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_SBMODE_Pos     _UINT32_(6)                                          /* (SERCOM_USART_EXT_CTRLB) Stop Bit Mode Position */
#define SERCOM_USART_EXT_CTRLB_SBMODE_Msk     (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_EXT_CTRLB) Stop Bit Mode Mask */
#define SERCOM_USART_EXT_CTRLB_SBMODE(value)  (SERCOM_USART_EXT_CTRLB_SBMODE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_SBMODE_Pos)) /* Assigment of value for SBMODE in the SERCOM_USART_EXT_CTRLB register */
#define   SERCOM_USART_EXT_CTRLB_SBMODE_1_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLB) One Stop Bit  */
#define   SERCOM_USART_EXT_CTRLB_SBMODE_2_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLB) Two Stop Bits  */
#define SERCOM_USART_EXT_CTRLB_SBMODE_1_BIT   (SERCOM_USART_EXT_CTRLB_SBMODE_1_BIT_Val << SERCOM_USART_EXT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_EXT_CTRLB) One Stop Bit Position  */
#define SERCOM_USART_EXT_CTRLB_SBMODE_2_BIT   (SERCOM_USART_EXT_CTRLB_SBMODE_2_BIT_Val << SERCOM_USART_EXT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_EXT_CTRLB) Two Stop Bits Position  */
#define SERCOM_USART_EXT_CTRLB_COLDEN_Pos     _UINT32_(8)                                          /* (SERCOM_USART_EXT_CTRLB) Collision Detection Enable Position */
#define SERCOM_USART_EXT_CTRLB_COLDEN_Msk     (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_COLDEN_Pos) /* (SERCOM_USART_EXT_CTRLB) Collision Detection Enable Mask */
#define SERCOM_USART_EXT_CTRLB_COLDEN(value)  (SERCOM_USART_EXT_CTRLB_COLDEN_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_COLDEN_Pos)) /* Assigment of value for COLDEN in the SERCOM_USART_EXT_CTRLB register */
#define SERCOM_USART_EXT_CTRLB_SFDE_Pos       _UINT32_(9)                                          /* (SERCOM_USART_EXT_CTRLB) Start of Frame Detection Enable Position */
#define SERCOM_USART_EXT_CTRLB_SFDE_Msk       (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_SFDE_Pos)   /* (SERCOM_USART_EXT_CTRLB) Start of Frame Detection Enable Mask */
#define SERCOM_USART_EXT_CTRLB_SFDE(value)    (SERCOM_USART_EXT_CTRLB_SFDE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_SFDE_Pos)) /* Assigment of value for SFDE in the SERCOM_USART_EXT_CTRLB register */
#define SERCOM_USART_EXT_CTRLB_ENC_Pos        _UINT32_(10)                                         /* (SERCOM_USART_EXT_CTRLB) Encoding Format Position */
#define SERCOM_USART_EXT_CTRLB_ENC_Msk        (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_ENC_Pos)    /* (SERCOM_USART_EXT_CTRLB) Encoding Format Mask */
#define SERCOM_USART_EXT_CTRLB_ENC(value)     (SERCOM_USART_EXT_CTRLB_ENC_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_ENC_Pos)) /* Assigment of value for ENC in the SERCOM_USART_EXT_CTRLB register */
#define SERCOM_USART_EXT_CTRLB_PMODE_Pos      _UINT32_(13)                                         /* (SERCOM_USART_EXT_CTRLB) Parity Mode Position */
#define SERCOM_USART_EXT_CTRLB_PMODE_Msk      (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_PMODE_Pos)  /* (SERCOM_USART_EXT_CTRLB) Parity Mode Mask */
#define SERCOM_USART_EXT_CTRLB_PMODE(value)   (SERCOM_USART_EXT_CTRLB_PMODE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_PMODE_Pos)) /* Assigment of value for PMODE in the SERCOM_USART_EXT_CTRLB register */
#define   SERCOM_USART_EXT_CTRLB_PMODE_EVEN_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLB) Even Parity  */
#define   SERCOM_USART_EXT_CTRLB_PMODE_ODD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLB) Odd Parity  */
#define SERCOM_USART_EXT_CTRLB_PMODE_EVEN     (SERCOM_USART_EXT_CTRLB_PMODE_EVEN_Val << SERCOM_USART_EXT_CTRLB_PMODE_Pos) /* (SERCOM_USART_EXT_CTRLB) Even Parity Position  */
#define SERCOM_USART_EXT_CTRLB_PMODE_ODD      (SERCOM_USART_EXT_CTRLB_PMODE_ODD_Val << SERCOM_USART_EXT_CTRLB_PMODE_Pos) /* (SERCOM_USART_EXT_CTRLB) Odd Parity Position  */
#define SERCOM_USART_EXT_CTRLB_TXEN_Pos       _UINT32_(16)                                         /* (SERCOM_USART_EXT_CTRLB) Transmitter Enable Position */
#define SERCOM_USART_EXT_CTRLB_TXEN_Msk       (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_TXEN_Pos)   /* (SERCOM_USART_EXT_CTRLB) Transmitter Enable Mask */
#define SERCOM_USART_EXT_CTRLB_TXEN(value)    (SERCOM_USART_EXT_CTRLB_TXEN_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_TXEN_Pos)) /* Assigment of value for TXEN in the SERCOM_USART_EXT_CTRLB register */
#define SERCOM_USART_EXT_CTRLB_RXEN_Pos       _UINT32_(17)                                         /* (SERCOM_USART_EXT_CTRLB) Receiver Enable Position */
#define SERCOM_USART_EXT_CTRLB_RXEN_Msk       (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLB_RXEN_Pos)   /* (SERCOM_USART_EXT_CTRLB) Receiver Enable Mask */
#define SERCOM_USART_EXT_CTRLB_RXEN(value)    (SERCOM_USART_EXT_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_RXEN_Pos)) /* Assigment of value for RXEN in the SERCOM_USART_EXT_CTRLB register */
#define SERCOM_USART_EXT_CTRLB_LINCMD_Pos     _UINT32_(24)                                         /* (SERCOM_USART_EXT_CTRLB) LIN Command Position */
#define SERCOM_USART_EXT_CTRLB_LINCMD_Msk     (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_EXT_CTRLB) LIN Command Mask */
#define SERCOM_USART_EXT_CTRLB_LINCMD(value)  (SERCOM_USART_EXT_CTRLB_LINCMD_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLB_LINCMD_Pos)) /* Assigment of value for LINCMD in the SERCOM_USART_EXT_CTRLB register */
#define   SERCOM_USART_EXT_CTRLB_LINCMD_NONE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLB) Normal USART transmission  */
#define   SERCOM_USART_EXT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLB) Break field is transmitted when DATA is written  */
#define   SERCOM_USART_EXT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLB) Break, sync and identifier are automatically transmitted when DATA is written with the identifier  */
#define SERCOM_USART_EXT_CTRLB_LINCMD_NONE    (SERCOM_USART_EXT_CTRLB_LINCMD_NONE_Val << SERCOM_USART_EXT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_EXT_CTRLB) Normal USART transmission Position  */
#define SERCOM_USART_EXT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD (SERCOM_USART_EXT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val << SERCOM_USART_EXT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_EXT_CTRLB) Break field is transmitted when DATA is written Position  */
#define SERCOM_USART_EXT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD (SERCOM_USART_EXT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val << SERCOM_USART_EXT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_EXT_CTRLB) Break, sync and identifier are automatically transmitted when DATA is written with the identifier Position  */
#define SERCOM_USART_EXT_CTRLB_Msk            _UINT32_(0x03032747)                                 /* (SERCOM_USART_EXT_CTRLB) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART_INT Control B -------- */
#define SERCOM_USART_INT_CTRLB_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_CTRLB) USART_INT Control B  Reset Value */

#define SERCOM_USART_INT_CTRLB_CHSIZE_Pos     _UINT32_(0)                                          /* (SERCOM_USART_INT_CTRLB) Character Size Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_Msk     (_UINT32_(0x7) << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) Character Size Mask */
#define SERCOM_USART_INT_CTRLB_CHSIZE(value)  (SERCOM_USART_INT_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)) /* Assigment of value for CHSIZE in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) 8 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) 9 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT_Val _UINT32_(0x5)                                        /* (SERCOM_USART_INT_CTRLB) 5 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT_Val _UINT32_(0x6)                                        /* (SERCOM_USART_INT_CTRLB) 6 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT_Val _UINT32_(0x7)                                        /* (SERCOM_USART_INT_CTRLB) 7 Bits  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 8 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 9 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 5 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 6 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 7 Bits Position  */
#define SERCOM_USART_INT_CTRLB_SBMODE_Pos     _UINT32_(6)                                          /* (SERCOM_USART_INT_CTRLB) Stop Bit Mode Position */
#define SERCOM_USART_INT_CTRLB_SBMODE_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Stop Bit Mode Mask */
#define SERCOM_USART_INT_CTRLB_SBMODE(value)  (SERCOM_USART_INT_CTRLB_SBMODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_SBMODE_Pos)) /* Assigment of value for SBMODE in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_SBMODE_1_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) One Stop Bit  */
#define   SERCOM_USART_INT_CTRLB_SBMODE_2_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Two Stop Bits  */
#define SERCOM_USART_INT_CTRLB_SBMODE_1_BIT   (SERCOM_USART_INT_CTRLB_SBMODE_1_BIT_Val << SERCOM_USART_INT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_INT_CTRLB) One Stop Bit Position  */
#define SERCOM_USART_INT_CTRLB_SBMODE_2_BIT   (SERCOM_USART_INT_CTRLB_SBMODE_2_BIT_Val << SERCOM_USART_INT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Two Stop Bits Position  */
#define SERCOM_USART_INT_CTRLB_COLDEN_Pos     _UINT32_(8)                                          /* (SERCOM_USART_INT_CTRLB) Collision Detection Enable Position */
#define SERCOM_USART_INT_CTRLB_COLDEN_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_COLDEN_Pos) /* (SERCOM_USART_INT_CTRLB) Collision Detection Enable Mask */
#define SERCOM_USART_INT_CTRLB_COLDEN(value)  (SERCOM_USART_INT_CTRLB_COLDEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_COLDEN_Pos)) /* Assigment of value for COLDEN in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_SFDE_Pos       _UINT32_(9)                                          /* (SERCOM_USART_INT_CTRLB) Start of Frame Detection Enable Position */
#define SERCOM_USART_INT_CTRLB_SFDE_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_SFDE_Pos)   /* (SERCOM_USART_INT_CTRLB) Start of Frame Detection Enable Mask */
#define SERCOM_USART_INT_CTRLB_SFDE(value)    (SERCOM_USART_INT_CTRLB_SFDE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_SFDE_Pos)) /* Assigment of value for SFDE in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_ENC_Pos        _UINT32_(10)                                         /* (SERCOM_USART_INT_CTRLB) Encoding Format Position */
#define SERCOM_USART_INT_CTRLB_ENC_Msk        (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_ENC_Pos)    /* (SERCOM_USART_INT_CTRLB) Encoding Format Mask */
#define SERCOM_USART_INT_CTRLB_ENC(value)     (SERCOM_USART_INT_CTRLB_ENC_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_ENC_Pos)) /* Assigment of value for ENC in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_PMODE_Pos      _UINT32_(13)                                         /* (SERCOM_USART_INT_CTRLB) Parity Mode Position */
#define SERCOM_USART_INT_CTRLB_PMODE_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_PMODE_Pos)  /* (SERCOM_USART_INT_CTRLB) Parity Mode Mask */
#define SERCOM_USART_INT_CTRLB_PMODE(value)   (SERCOM_USART_INT_CTRLB_PMODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_PMODE_Pos)) /* Assigment of value for PMODE in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_PMODE_EVEN_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) Even Parity  */
#define   SERCOM_USART_INT_CTRLB_PMODE_ODD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Odd Parity  */
#define SERCOM_USART_INT_CTRLB_PMODE_EVEN     (SERCOM_USART_INT_CTRLB_PMODE_EVEN_Val << SERCOM_USART_INT_CTRLB_PMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Even Parity Position  */
#define SERCOM_USART_INT_CTRLB_PMODE_ODD      (SERCOM_USART_INT_CTRLB_PMODE_ODD_Val << SERCOM_USART_INT_CTRLB_PMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Odd Parity Position  */
#define SERCOM_USART_INT_CTRLB_TXEN_Pos       _UINT32_(16)                                         /* (SERCOM_USART_INT_CTRLB) Transmitter Enable Position */
#define SERCOM_USART_INT_CTRLB_TXEN_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_TXEN_Pos)   /* (SERCOM_USART_INT_CTRLB) Transmitter Enable Mask */
#define SERCOM_USART_INT_CTRLB_TXEN(value)    (SERCOM_USART_INT_CTRLB_TXEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_TXEN_Pos)) /* Assigment of value for TXEN in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_RXEN_Pos       _UINT32_(17)                                         /* (SERCOM_USART_INT_CTRLB) Receiver Enable Position */
#define SERCOM_USART_INT_CTRLB_RXEN_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_RXEN_Pos)   /* (SERCOM_USART_INT_CTRLB) Receiver Enable Mask */
#define SERCOM_USART_INT_CTRLB_RXEN(value)    (SERCOM_USART_INT_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_RXEN_Pos)) /* Assigment of value for RXEN in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_LINCMD_Pos     _UINT32_(24)                                         /* (SERCOM_USART_INT_CTRLB) LIN Command Position */
#define SERCOM_USART_INT_CTRLB_LINCMD_Msk     (_UINT32_(0x3) << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) LIN Command Mask */
#define SERCOM_USART_INT_CTRLB_LINCMD(value)  (SERCOM_USART_INT_CTRLB_LINCMD_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_LINCMD_Pos)) /* Assigment of value for LINCMD in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_LINCMD_NONE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) Normal USART transmission  */
#define   SERCOM_USART_INT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Break field is transmitted when DATA is written  */
#define   SERCOM_USART_INT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLB) Break, sync and identifier are automatically transmitted when DATA is written with the identifier  */
#define SERCOM_USART_INT_CTRLB_LINCMD_NONE    (SERCOM_USART_INT_CTRLB_LINCMD_NONE_Val << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) Normal USART transmission Position  */
#define SERCOM_USART_INT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD (SERCOM_USART_INT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) Break field is transmitted when DATA is written Position  */
#define SERCOM_USART_INT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD (SERCOM_USART_INT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) Break, sync and identifier are automatically transmitted when DATA is written with the identifier Position  */
#define SERCOM_USART_INT_CTRLB_Msk            _UINT32_(0x03032747)                                 /* (SERCOM_USART_INT_CTRLB) Register Mask  */

/* -------- SERCOM_USART_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART USART Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHSIZE:3;         /*!< bit:  0.. 2  Character Size                     */
    uint32_t :3;               /*!< bit:  3.. 5  Reserved                           */
    uint32_t SBMODE:1;         /*!< bit:      6  Stop Bit Mode                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t COLDEN:1;         /*!< bit:      8  Collision Detection Enable         */
    uint32_t SFDE:1;           /*!< bit:      9  Start of Frame Detection Enable    */
    uint32_t ENC:1;            /*!< bit:     10  Encoding Format                    */
    uint32_t :2;               /*!< bit: 11..12  Reserved                           */
    uint32_t PMODE:1;          /*!< bit:     13  Parity Mode                        */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t TXEN:1;           /*!< bit:     16  Transmitter Enable                 */
    uint32_t RXEN:1;           /*!< bit:     17  Receiver Enable                    */
    uint32_t :6;               /*!< bit: 18..23  Reserved                           */
    uint32_t LINCMD:2;         /*!< bit: 24..25  LIN Command                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_CTRLB_OFFSET   0x04         /**< \brief (SERCOM_USART_CTRLB offset) USART Control B */
#define SERCOM_USART_CTRLB_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_USART_CTRLB reset_value) USART Control B */

#define SERCOM_USART_CTRLB_CHSIZE_Pos 0            /**< \brief (SERCOM_USART_CTRLB) Character Size */
#define SERCOM_USART_CTRLB_CHSIZE_Msk (_U_(0x7) << SERCOM_USART_CTRLB_CHSIZE_Pos)
#define SERCOM_USART_CTRLB_CHSIZE(value) (SERCOM_USART_CTRLB_CHSIZE_Msk & ((value) << SERCOM_USART_CTRLB_CHSIZE_Pos))
#define SERCOM_USART_CTRLB_SBMODE_Pos 6            /**< \brief (SERCOM_USART_CTRLB) Stop Bit Mode */
#define SERCOM_USART_CTRLB_SBMODE   (_U_(0x1) << SERCOM_USART_CTRLB_SBMODE_Pos)
#define SERCOM_USART_CTRLB_COLDEN_Pos 8            /**< \brief (SERCOM_USART_CTRLB) Collision Detection Enable */
#define SERCOM_USART_CTRLB_COLDEN   (_U_(0x1) << SERCOM_USART_CTRLB_COLDEN_Pos)
#define SERCOM_USART_CTRLB_SFDE_Pos 9            /**< \brief (SERCOM_USART_CTRLB) Start of Frame Detection Enable */
#define SERCOM_USART_CTRLB_SFDE     (_U_(0x1) << SERCOM_USART_CTRLB_SFDE_Pos)
#define SERCOM_USART_CTRLB_ENC_Pos  10           /**< \brief (SERCOM_USART_CTRLB) Encoding Format */
#define SERCOM_USART_CTRLB_ENC      (_U_(0x1) << SERCOM_USART_CTRLB_ENC_Pos)
#define SERCOM_USART_CTRLB_PMODE_Pos 13           /**< \brief (SERCOM_USART_CTRLB) Parity Mode */
#define SERCOM_USART_CTRLB_PMODE    (_U_(0x1) << SERCOM_USART_CTRLB_PMODE_Pos)
#define SERCOM_USART_CTRLB_TXEN_Pos 16           /**< \brief (SERCOM_USART_CTRLB) Transmitter Enable */
#define SERCOM_USART_CTRLB_TXEN     (_U_(0x1) << SERCOM_USART_CTRLB_TXEN_Pos)
#define SERCOM_USART_CTRLB_RXEN_Pos 17           /**< \brief (SERCOM_USART_CTRLB) Receiver Enable */
#define SERCOM_USART_CTRLB_RXEN     (_U_(0x1) << SERCOM_USART_CTRLB_RXEN_Pos)
#define SERCOM_USART_CTRLB_LINCMD_Pos 24           /**< \brief (SERCOM_USART_CTRLB) LIN Command */
#define SERCOM_USART_CTRLB_LINCMD_Msk (_U_(0x3) << SERCOM_USART_CTRLB_LINCMD_Pos)
#define SERCOM_USART_CTRLB_LINCMD(value) (SERCOM_USART_CTRLB_LINCMD_Msk & ((value) << SERCOM_USART_CTRLB_LINCMD_Pos))
#define SERCOM_USART_CTRLB_MASK     _U_(0x03032747) /**< \brief (SERCOM_USART_CTRLB) MASK Register */

/* -------- SERCOM_I2CM_CTRLC : (SERCOM Offset: 0x08) (R/W 32) I2CM Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :24;              /*!< bit:  0..23  Reserved                           */
    uint32_t DATA32B:1;        /*!< bit:     24  Data 32 Bit                        */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_CTRLC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLC) I2CM Control C  Reset Value */

#define SERCOM_I2CM_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_I2CM_CTRLC) Data 32 Bit Position */
#define SERCOM_I2CM_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_I2CM_CTRLC_DATA32B_Pos)     /* (SERCOM_I2CM_CTRLC) Data 32 Bit Mask */
#define SERCOM_I2CM_CTRLC_DATA32B(value)      (SERCOM_I2CM_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLC_DATA32B_Pos)) /* Assigment of value for DATA32B in the SERCOM_I2CM_CTRLC register */
#define   SERCOM_I2CM_CTRLC_DATA32B_DATA_TRANS_8BIT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLC) Data transaction from/to DATA register are 8-bit  */
#define   SERCOM_I2CM_CTRLC_DATA32B_DATA_TRANS_32BIT_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLC) Data transaction from/to DATA register are 32-bit  */
#define SERCOM_I2CM_CTRLC_DATA32B_DATA_TRANS_8BIT (SERCOM_I2CM_CTRLC_DATA32B_DATA_TRANS_8BIT_Val << SERCOM_I2CM_CTRLC_DATA32B_Pos) /* (SERCOM_I2CM_CTRLC) Data transaction from/to DATA register are 8-bit Position  */
#define SERCOM_I2CM_CTRLC_DATA32B_DATA_TRANS_32BIT (SERCOM_I2CM_CTRLC_DATA32B_DATA_TRANS_32BIT_Val << SERCOM_I2CM_CTRLC_DATA32B_Pos) /* (SERCOM_I2CM_CTRLC) Data transaction from/to DATA register are 32-bit Position  */
#define SERCOM_I2CM_CTRLC_Msk                 _UINT32_(0x01000000)                                 /* (SERCOM_I2CM_CTRLC) Register Mask  */


/* -------- SERCOM_I2CS_CTRLC : (SERCOM Offset: 0x08) (R/W 32) I2CS Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SDASETUP:4;       /*!< bit:  0.. 3  SDA Setup Time                     */
    uint32_t :20;              /*!< bit:  4..23  Reserved                           */
    uint32_t DATA32B:1;        /*!< bit:     24  Data 32 Bit                        */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_CTRLC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLC) I2CS Control C  Reset Value */

#define SERCOM_I2CS_CTRLC_SDASETUP_Pos        _UINT32_(0)                                          /* (SERCOM_I2CS_CTRLC) SDA Setup Time Position */
#define SERCOM_I2CS_CTRLC_SDASETUP_Msk        (_UINT32_(0xF) << SERCOM_I2CS_CTRLC_SDASETUP_Pos)    /* (SERCOM_I2CS_CTRLC) SDA Setup Time Mask */
#define SERCOM_I2CS_CTRLC_SDASETUP(value)     (SERCOM_I2CS_CTRLC_SDASETUP_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_SDASETUP_Pos)) /* Assigment of value for SDASETUP in the SERCOM_I2CS_CTRLC register */
#define SERCOM_I2CS_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_I2CS_CTRLC) Data 32 Bit Position */
#define SERCOM_I2CS_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_I2CS_CTRLC_DATA32B_Pos)     /* (SERCOM_I2CS_CTRLC) Data 32 Bit Mask */
#define SERCOM_I2CS_CTRLC_DATA32B(value)      (SERCOM_I2CS_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_DATA32B_Pos)) /* Assigment of value for DATA32B in the SERCOM_I2CS_CTRLC register */
#define   SERCOM_I2CS_CTRLC_DATA32B_DATA_TRANS_8BIT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLC) Data transaction from/to DATA register are 8-bit  */
#define   SERCOM_I2CS_CTRLC_DATA32B_DATA_TRANS_32BIT_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLC) Data transaction from/to DATA register are 32-bit  */
#define SERCOM_I2CS_CTRLC_DATA32B_DATA_TRANS_8BIT (SERCOM_I2CS_CTRLC_DATA32B_DATA_TRANS_8BIT_Val << SERCOM_I2CS_CTRLC_DATA32B_Pos) /* (SERCOM_I2CS_CTRLC) Data transaction from/to DATA register are 8-bit Position  */
#define SERCOM_I2CS_CTRLC_DATA32B_DATA_TRANS_32BIT (SERCOM_I2CS_CTRLC_DATA32B_DATA_TRANS_32BIT_Val << SERCOM_I2CS_CTRLC_DATA32B_Pos) /* (SERCOM_I2CS_CTRLC) Data transaction from/to DATA register are 32-bit Position  */
#define SERCOM_I2CS_CTRLC_Msk                 _UINT32_(0x0100000F)                                 /* (SERCOM_I2CS_CTRLC) Register Mask  */


/* -------- SERCOM_SPIM_CTRLC : (SERCOM Offset: 0x08) (R/W 32) SPIM Control C -------- */
#define SERCOM_SPIM_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIM_CTRLC) SPIM Control C  Reset Value */

#define SERCOM_SPIM_CTRLC_ICSPACE_Pos         _UINT32_(0)                                          /* (SERCOM_SPIM_CTRLC) Inter-Character Spacing Position */
#define SERCOM_SPIM_CTRLC_ICSPACE_Msk         (_UINT32_(0x3F) << SERCOM_SPIM_CTRLC_ICSPACE_Pos)    /* (SERCOM_SPIM_CTRLC) Inter-Character Spacing Mask */
#define SERCOM_SPIM_CTRLC_ICSPACE(value)      (SERCOM_SPIM_CTRLC_ICSPACE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_ICSPACE_Pos)) /* Assigment of value for ICSPACE in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_SPIM_CTRLC) Data 32 Bit Position */
#define SERCOM_SPIM_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_DATA32B_Pos)     /* (SERCOM_SPIM_CTRLC) Data 32 Bit Mask */
#define SERCOM_SPIM_CTRLC_DATA32B(value)      (SERCOM_SPIM_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_DATA32B_Pos)) /* Assigment of value for DATA32B in the SERCOM_SPIM_CTRLC register */
#define   SERCOM_SPIM_CTRLC_DATA32B_DATA_TRANS_8BIT_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLC) Transaction from and to DATA register are 8-bit  */
#define   SERCOM_SPIM_CTRLC_DATA32B_DATA_TRANS_32BIT_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLC) Transaction from and to DATA register are 32-bit  */
#define SERCOM_SPIM_CTRLC_DATA32B_DATA_TRANS_8BIT (SERCOM_SPIM_CTRLC_DATA32B_DATA_TRANS_8BIT_Val << SERCOM_SPIM_CTRLC_DATA32B_Pos) /* (SERCOM_SPIM_CTRLC) Transaction from and to DATA register are 8-bit Position  */
#define SERCOM_SPIM_CTRLC_DATA32B_DATA_TRANS_32BIT (SERCOM_SPIM_CTRLC_DATA32B_DATA_TRANS_32BIT_Val << SERCOM_SPIM_CTRLC_DATA32B_Pos) /* (SERCOM_SPIM_CTRLC) Transaction from and to DATA register are 32-bit Position  */
#define SERCOM_SPIM_CTRLC_Msk                 _UINT32_(0x0100003F)                                 /* (SERCOM_SPIM_CTRLC) Register Mask  */


/* -------- SERCOM_SPIS_CTRLC : (SERCOM Offset: 0x08) (R/W 32) SPIS Control C -------- */
#define SERCOM_SPIS_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIS_CTRLC) SPIS Control C  Reset Value */

#define SERCOM_SPIS_CTRLC_ICSPACE_Pos         _UINT32_(0)                                          /* (SERCOM_SPIS_CTRLC) Inter-Character Spacing Position */
#define SERCOM_SPIS_CTRLC_ICSPACE_Msk         (_UINT32_(0x3F) << SERCOM_SPIS_CTRLC_ICSPACE_Pos)    /* (SERCOM_SPIS_CTRLC) Inter-Character Spacing Mask */
#define SERCOM_SPIS_CTRLC_ICSPACE(value)      (SERCOM_SPIS_CTRLC_ICSPACE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_ICSPACE_Pos)) /* Assigment of value for ICSPACE in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_SPIS_CTRLC) Data 32 Bit Position */
#define SERCOM_SPIS_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_DATA32B_Pos)     /* (SERCOM_SPIS_CTRLC) Data 32 Bit Mask */
#define SERCOM_SPIS_CTRLC_DATA32B(value)      (SERCOM_SPIS_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_DATA32B_Pos)) /* Assigment of value for DATA32B in the SERCOM_SPIS_CTRLC register */
#define   SERCOM_SPIS_CTRLC_DATA32B_DATA_TRANS_8BIT_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLC) Transaction from and to DATA register are 8-bit  */
#define   SERCOM_SPIS_CTRLC_DATA32B_DATA_TRANS_32BIT_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLC) Transaction from and to DATA register are 32-bit  */
#define SERCOM_SPIS_CTRLC_DATA32B_DATA_TRANS_8BIT (SERCOM_SPIS_CTRLC_DATA32B_DATA_TRANS_8BIT_Val << SERCOM_SPIS_CTRLC_DATA32B_Pos) /* (SERCOM_SPIS_CTRLC) Transaction from and to DATA register are 8-bit Position  */
#define SERCOM_SPIS_CTRLC_DATA32B_DATA_TRANS_32BIT (SERCOM_SPIS_CTRLC_DATA32B_DATA_TRANS_32BIT_Val << SERCOM_SPIS_CTRLC_DATA32B_Pos) /* (SERCOM_SPIS_CTRLC) Transaction from and to DATA register are 32-bit Position  */
#define SERCOM_SPIS_CTRLC_Msk                 _UINT32_(0x0100003F)                                 /* (SERCOM_SPIS_CTRLC) Register Mask  */

/* -------- SERCOM_SPI_CTRLC : (SERCOM Offset: 0x08) (R/W 32) SPI SPI Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ICSPACE:6;        /*!< bit:  0.. 5  Inter-Character Spacing            */
    uint32_t :18;              /*!< bit:  6..23  Reserved                           */
    uint32_t DATA32B:1;        /*!< bit:     24  Data 32 Bit                        */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_CTRLC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_CTRLC_OFFSET     0x08         /**< \brief (SERCOM_SPI_CTRLC offset) SPI Control C */
#define SERCOM_SPI_CTRLC_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_SPI_CTRLC reset_value) SPI Control C */

#define SERCOM_SPI_CTRLC_ICSPACE_Pos 0            /**< \brief (SERCOM_SPI_CTRLC) Inter-Character Spacing */
#define SERCOM_SPI_CTRLC_ICSPACE_Msk (_U_(0x3F) << SERCOM_SPI_CTRLC_ICSPACE_Pos)
#define SERCOM_SPI_CTRLC_ICSPACE(value) (SERCOM_SPI_CTRLC_ICSPACE_Msk & ((value) << SERCOM_SPI_CTRLC_ICSPACE_Pos))
#define SERCOM_SPI_CTRLC_DATA32B_Pos 24           /**< \brief (SERCOM_SPI_CTRLC) Data 32 Bit */
#define SERCOM_SPI_CTRLC_DATA32B    (_U_(0x1) << SERCOM_SPI_CTRLC_DATA32B_Pos)
#define SERCOM_SPI_CTRLC_MASK       _U_(0x0100003F) /**< \brief (SERCOM_SPI_CTRLC) MASK Register */

/* -------- SERCOM_USART_EXT_CTRLC : (SERCOM Offset: 0x08) (R/W 32) USART_EXT Control C -------- */
#define SERCOM_USART_EXT_CTRLC_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_EXT_CTRLC) USART_EXT Control C  Reset Value */

#define SERCOM_USART_EXT_CTRLC_GTIME_Pos      _UINT32_(0)                                          /* (SERCOM_USART_EXT_CTRLC) Guard Time Position */
#define SERCOM_USART_EXT_CTRLC_GTIME_Msk      (_UINT32_(0x7) << SERCOM_USART_EXT_CTRLC_GTIME_Pos)  /* (SERCOM_USART_EXT_CTRLC) Guard Time Mask */
#define SERCOM_USART_EXT_CTRLC_GTIME(value)   (SERCOM_USART_EXT_CTRLC_GTIME_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_GTIME_Pos)) /* Assigment of value for GTIME in the SERCOM_USART_EXT_CTRLC register */
#define SERCOM_USART_EXT_CTRLC_BRKLEN_Pos     _UINT32_(8)                                          /* (SERCOM_USART_EXT_CTRLC) LIN Master Break Length Position */
#define SERCOM_USART_EXT_CTRLC_BRKLEN_Msk     (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_EXT_CTRLC) LIN Master Break Length Mask */
#define SERCOM_USART_EXT_CTRLC_BRKLEN(value)  (SERCOM_USART_EXT_CTRLC_BRKLEN_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_BRKLEN_Pos)) /* Assigment of value for BRKLEN in the SERCOM_USART_EXT_CTRLC register */
#define   SERCOM_USART_EXT_CTRLC_BRKLEN_13_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 13 bit times  */
#define   SERCOM_USART_EXT_CTRLC_BRKLEN_17_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 17 bit times  */
#define   SERCOM_USART_EXT_CTRLC_BRKLEN_21_BIT_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 21 bit times  */
#define   SERCOM_USART_EXT_CTRLC_BRKLEN_26_BIT_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 26 bit times  */
#define SERCOM_USART_EXT_CTRLC_BRKLEN_13_BIT  (SERCOM_USART_EXT_CTRLC_BRKLEN_13_BIT_Val << SERCOM_USART_EXT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 13 bit times Position  */
#define SERCOM_USART_EXT_CTRLC_BRKLEN_17_BIT  (SERCOM_USART_EXT_CTRLC_BRKLEN_17_BIT_Val << SERCOM_USART_EXT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 17 bit times Position  */
#define SERCOM_USART_EXT_CTRLC_BRKLEN_21_BIT  (SERCOM_USART_EXT_CTRLC_BRKLEN_21_BIT_Val << SERCOM_USART_EXT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 21 bit times Position  */
#define SERCOM_USART_EXT_CTRLC_BRKLEN_26_BIT  (SERCOM_USART_EXT_CTRLC_BRKLEN_26_BIT_Val << SERCOM_USART_EXT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_EXT_CTRLC) Break field transmission is 26 bit times Position  */
#define SERCOM_USART_EXT_CTRLC_HDRDLY_Pos     _UINT32_(10)                                         /* (SERCOM_USART_EXT_CTRLC) LIN Master Header Delay Position */
#define SERCOM_USART_EXT_CTRLC_HDRDLY_Msk     (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_EXT_CTRLC) LIN Master Header Delay Mask */
#define SERCOM_USART_EXT_CTRLC_HDRDLY(value)  (SERCOM_USART_EXT_CTRLC_HDRDLY_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_HDRDLY_Pos)) /* Assigment of value for HDRDLY in the SERCOM_USART_EXT_CTRLC register */
#define   SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 1 bit time; Delay between sync and ID transmission is 1 bit time  */
#define   SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 4 bit time; Delay between sync and ID transmission is 4 bit time  */
#define   SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 8 bit time; Delay between sync and ID transmission is 4 bit time  */
#define   SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 14 bit time; Delay between sync and ID transmission is 4 bit time  */
#define SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY0  (SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY0_Val << SERCOM_USART_EXT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 1 bit time; Delay between sync and ID transmission is 1 bit time Position  */
#define SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY1  (SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY1_Val << SERCOM_USART_EXT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 4 bit time; Delay between sync and ID transmission is 4 bit time Position  */
#define SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY2  (SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY2_Val << SERCOM_USART_EXT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 8 bit time; Delay between sync and ID transmission is 4 bit time Position  */
#define SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY3  (SERCOM_USART_EXT_CTRLC_HDRDLY_DELAY3_Val << SERCOM_USART_EXT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_EXT_CTRLC) Delay between break and sync transmission is 14 bit time; Delay between sync and ID transmission is 4 bit time Position  */
#define SERCOM_USART_EXT_CTRLC_INACK_Pos      _UINT32_(16)                                         /* (SERCOM_USART_EXT_CTRLC) Inhibit Not Acknowledge Position */
#define SERCOM_USART_EXT_CTRLC_INACK_Msk      (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLC_INACK_Pos)  /* (SERCOM_USART_EXT_CTRLC) Inhibit Not Acknowledge Mask */
#define SERCOM_USART_EXT_CTRLC_INACK(value)   (SERCOM_USART_EXT_CTRLC_INACK_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_INACK_Pos)) /* Assigment of value for INACK in the SERCOM_USART_EXT_CTRLC register */
#define SERCOM_USART_EXT_CTRLC_DSNACK_Pos     _UINT32_(17)                                         /* (SERCOM_USART_EXT_CTRLC) Disable Successive NACK Position */
#define SERCOM_USART_EXT_CTRLC_DSNACK_Msk     (_UINT32_(0x1) << SERCOM_USART_EXT_CTRLC_DSNACK_Pos) /* (SERCOM_USART_EXT_CTRLC) Disable Successive NACK Mask */
#define SERCOM_USART_EXT_CTRLC_DSNACK(value)  (SERCOM_USART_EXT_CTRLC_DSNACK_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_DSNACK_Pos)) /* Assigment of value for DSNACK in the SERCOM_USART_EXT_CTRLC register */
#define SERCOM_USART_EXT_CTRLC_MAXITER_Pos    _UINT32_(20)                                         /* (SERCOM_USART_EXT_CTRLC) Maximum Iterations Position */
#define SERCOM_USART_EXT_CTRLC_MAXITER_Msk    (_UINT32_(0x7) << SERCOM_USART_EXT_CTRLC_MAXITER_Pos) /* (SERCOM_USART_EXT_CTRLC) Maximum Iterations Mask */
#define SERCOM_USART_EXT_CTRLC_MAXITER(value) (SERCOM_USART_EXT_CTRLC_MAXITER_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_MAXITER_Pos)) /* Assigment of value for MAXITER in the SERCOM_USART_EXT_CTRLC register */
#define SERCOM_USART_EXT_CTRLC_DATA32B_Pos    _UINT32_(24)                                         /* (SERCOM_USART_EXT_CTRLC) Data 32 Bit Position */
#define SERCOM_USART_EXT_CTRLC_DATA32B_Msk    (_UINT32_(0x3) << SERCOM_USART_EXT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_EXT_CTRLC) Data 32 Bit Mask */
#define SERCOM_USART_EXT_CTRLC_DATA32B(value) (SERCOM_USART_EXT_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_USART_EXT_CTRLC_DATA32B_Pos)) /* Assigment of value for DATA32B in the SERCOM_USART_EXT_CTRLC register */
#define   SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_WRITE_CHSIZE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_EXT_CTRLC) Data reads and writes according CTRLB.CHSIZE  */
#define   SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_CHSIZE_WRITE_32BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_EXT_CTRLC) Data reads according CTRLB.CHSIZE and writes according 32-bit extension  */
#define   SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_32BIT_WRITE_CHSIZE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_EXT_CTRLC) Data reads according 32-bit extension and writes according CTRLB.CHSIZE  */
#define   SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_WRITE_32BIT_Val _UINT32_(0x3)                                        /* (SERCOM_USART_EXT_CTRLC) Data reads and writes according 32-bit extension  */
#define SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_WRITE_CHSIZE (SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_WRITE_CHSIZE_Val << SERCOM_USART_EXT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_EXT_CTRLC) Data reads and writes according CTRLB.CHSIZE Position  */
#define SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_CHSIZE_WRITE_32BIT (SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_CHSIZE_WRITE_32BIT_Val << SERCOM_USART_EXT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_EXT_CTRLC) Data reads according CTRLB.CHSIZE and writes according 32-bit extension Position  */
#define SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_32BIT_WRITE_CHSIZE (SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_32BIT_WRITE_CHSIZE_Val << SERCOM_USART_EXT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_EXT_CTRLC) Data reads according 32-bit extension and writes according CTRLB.CHSIZE Position  */
#define SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_WRITE_32BIT (SERCOM_USART_EXT_CTRLC_DATA32B_DATA_READ_WRITE_32BIT_Val << SERCOM_USART_EXT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_EXT_CTRLC) Data reads and writes according 32-bit extension Position  */
#define SERCOM_USART_EXT_CTRLC_Msk            _UINT32_(0x03730F07)                                 /* (SERCOM_USART_EXT_CTRLC) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLC : (SERCOM Offset: 0x08) (R/W 32) USART_INT Control C -------- */
#define SERCOM_USART_INT_CTRLC_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_CTRLC) USART_INT Control C  Reset Value */

#define SERCOM_USART_INT_CTRLC_GTIME_Pos      _UINT32_(0)                                          /* (SERCOM_USART_INT_CTRLC) Guard Time Position */
#define SERCOM_USART_INT_CTRLC_GTIME_Msk      (_UINT32_(0x7) << SERCOM_USART_INT_CTRLC_GTIME_Pos)  /* (SERCOM_USART_INT_CTRLC) Guard Time Mask */
#define SERCOM_USART_INT_CTRLC_GTIME(value)   (SERCOM_USART_INT_CTRLC_GTIME_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_GTIME_Pos)) /* Assigment of value for GTIME in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_BRKLEN_Pos     _UINT32_(8)                                          /* (SERCOM_USART_INT_CTRLC) LIN Master Break Length Position */
#define SERCOM_USART_INT_CTRLC_BRKLEN_Msk     (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) LIN Master Break Length Mask */
#define SERCOM_USART_INT_CTRLC_BRKLEN(value)  (SERCOM_USART_INT_CTRLC_BRKLEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_BRKLEN_Pos)) /* Assigment of value for BRKLEN in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_13_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 13 bit times  */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_17_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 17 bit times  */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_21_BIT_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 21 bit times  */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_26_BIT_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 26 bit times  */
#define SERCOM_USART_INT_CTRLC_BRKLEN_13_BIT  (SERCOM_USART_INT_CTRLC_BRKLEN_13_BIT_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 13 bit times Position  */
#define SERCOM_USART_INT_CTRLC_BRKLEN_17_BIT  (SERCOM_USART_INT_CTRLC_BRKLEN_17_BIT_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 17 bit times Position  */
#define SERCOM_USART_INT_CTRLC_BRKLEN_21_BIT  (SERCOM_USART_INT_CTRLC_BRKLEN_21_BIT_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 21 bit times Position  */
#define SERCOM_USART_INT_CTRLC_BRKLEN_26_BIT  (SERCOM_USART_INT_CTRLC_BRKLEN_26_BIT_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 26 bit times Position  */
#define SERCOM_USART_INT_CTRLC_HDRDLY_Pos     _UINT32_(10)                                         /* (SERCOM_USART_INT_CTRLC) LIN Master Header Delay Position */
#define SERCOM_USART_INT_CTRLC_HDRDLY_Msk     (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) LIN Master Header Delay Mask */
#define SERCOM_USART_INT_CTRLC_HDRDLY(value)  (SERCOM_USART_INT_CTRLC_HDRDLY_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_HDRDLY_Pos)) /* Assigment of value for HDRDLY in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_DELAY0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 1 bit time; Delay between sync and ID transmission is 1 bit time  */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_DELAY1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 4 bit time; Delay between sync and ID transmission is 4 bit time  */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_DELAY2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 8 bit time; Delay between sync and ID transmission is 4 bit time  */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_DELAY3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 14 bit time; Delay between sync and ID transmission is 4 bit time  */
#define SERCOM_USART_INT_CTRLC_HDRDLY_DELAY0  (SERCOM_USART_INT_CTRLC_HDRDLY_DELAY0_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 1 bit time; Delay between sync and ID transmission is 1 bit time Position  */
#define SERCOM_USART_INT_CTRLC_HDRDLY_DELAY1  (SERCOM_USART_INT_CTRLC_HDRDLY_DELAY1_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 4 bit time; Delay between sync and ID transmission is 4 bit time Position  */
#define SERCOM_USART_INT_CTRLC_HDRDLY_DELAY2  (SERCOM_USART_INT_CTRLC_HDRDLY_DELAY2_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 8 bit time; Delay between sync and ID transmission is 4 bit time Position  */
#define SERCOM_USART_INT_CTRLC_HDRDLY_DELAY3  (SERCOM_USART_INT_CTRLC_HDRDLY_DELAY3_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 14 bit time; Delay between sync and ID transmission is 4 bit time Position  */
#define SERCOM_USART_INT_CTRLC_INACK_Pos      _UINT32_(16)                                         /* (SERCOM_USART_INT_CTRLC) Inhibit Not Acknowledge Position */
#define SERCOM_USART_INT_CTRLC_INACK_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLC_INACK_Pos)  /* (SERCOM_USART_INT_CTRLC) Inhibit Not Acknowledge Mask */
#define SERCOM_USART_INT_CTRLC_INACK(value)   (SERCOM_USART_INT_CTRLC_INACK_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_INACK_Pos)) /* Assigment of value for INACK in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_DSNACK_Pos     _UINT32_(17)                                         /* (SERCOM_USART_INT_CTRLC) Disable Successive NACK Position */
#define SERCOM_USART_INT_CTRLC_DSNACK_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLC_DSNACK_Pos) /* (SERCOM_USART_INT_CTRLC) Disable Successive NACK Mask */
#define SERCOM_USART_INT_CTRLC_DSNACK(value)  (SERCOM_USART_INT_CTRLC_DSNACK_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_DSNACK_Pos)) /* Assigment of value for DSNACK in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_MAXITER_Pos    _UINT32_(20)                                         /* (SERCOM_USART_INT_CTRLC) Maximum Iterations Position */
#define SERCOM_USART_INT_CTRLC_MAXITER_Msk    (_UINT32_(0x7) << SERCOM_USART_INT_CTRLC_MAXITER_Pos) /* (SERCOM_USART_INT_CTRLC) Maximum Iterations Mask */
#define SERCOM_USART_INT_CTRLC_MAXITER(value) (SERCOM_USART_INT_CTRLC_MAXITER_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_MAXITER_Pos)) /* Assigment of value for MAXITER in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_DATA32B_Pos    _UINT32_(24)                                         /* (SERCOM_USART_INT_CTRLC) Data 32 Bit Position */
#define SERCOM_USART_INT_CTRLC_DATA32B_Msk    (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_INT_CTRLC) Data 32 Bit Mask */
#define SERCOM_USART_INT_CTRLC_DATA32B(value) (SERCOM_USART_INT_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_DATA32B_Pos)) /* Assigment of value for DATA32B in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_WRITE_CHSIZE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Data reads and writes according CTRLB.CHSIZE  */
#define   SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_CHSIZE_WRITE_32BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Data reads according CTRLB.CHSIZE and writes according 32-bit extension  */
#define   SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_32BIT_WRITE_CHSIZE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Data reads according 32-bit extension and writes according CTRLB.CHSIZE  */
#define   SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_WRITE_32BIT_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLC) Data reads and writes according 32-bit extension  */
#define SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_WRITE_CHSIZE (SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_WRITE_CHSIZE_Val << SERCOM_USART_INT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_INT_CTRLC) Data reads and writes according CTRLB.CHSIZE Position  */
#define SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_CHSIZE_WRITE_32BIT (SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_CHSIZE_WRITE_32BIT_Val << SERCOM_USART_INT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_INT_CTRLC) Data reads according CTRLB.CHSIZE and writes according 32-bit extension Position  */
#define SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_32BIT_WRITE_CHSIZE (SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_32BIT_WRITE_CHSIZE_Val << SERCOM_USART_INT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_INT_CTRLC) Data reads according 32-bit extension and writes according CTRLB.CHSIZE Position  */
#define SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_WRITE_32BIT (SERCOM_USART_INT_CTRLC_DATA32B_DATA_READ_WRITE_32BIT_Val << SERCOM_USART_INT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_INT_CTRLC) Data reads and writes according 32-bit extension Position  */
#define SERCOM_USART_INT_CTRLC_Msk            _UINT32_(0x03730F07)                                 /* (SERCOM_USART_INT_CTRLC) Register Mask  */

/* -------- SERCOM_USART_CTRLC : (SERCOM Offset: 0x08) (R/W 32) USART USART Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t GTIME:3;          /*!< bit:  0.. 2  Guard Time                         */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t BRKLEN:2;         /*!< bit:  8.. 9  LIN Master Break Length            */
    uint32_t HDRDLY:2;         /*!< bit: 10..11  LIN Master Header Delay            */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t INACK:1;          /*!< bit:     16  Inhibit Not Acknowledge            */
    uint32_t DSNACK:1;         /*!< bit:     17  Disable Successive NACK            */
    uint32_t :2;               /*!< bit: 18..19  Reserved                           */
    uint32_t MAXITER:3;        /*!< bit: 20..22  Maximum Iterations                 */
    uint32_t :1;               /*!< bit:     23  Reserved                           */
    uint32_t DATA32B:2;        /*!< bit: 24..25  Data 32 Bit                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_CTRLC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_CTRLC_OFFSET   0x08         /**< \brief (SERCOM_USART_CTRLC offset) USART Control C */
#define SERCOM_USART_CTRLC_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_USART_CTRLC reset_value) USART Control C */

#define SERCOM_USART_CTRLC_GTIME_Pos 0            /**< \brief (SERCOM_USART_CTRLC) Guard Time */
#define SERCOM_USART_CTRLC_GTIME_Msk (_U_(0x7) << SERCOM_USART_CTRLC_GTIME_Pos)
#define SERCOM_USART_CTRLC_GTIME(value) (SERCOM_USART_CTRLC_GTIME_Msk & ((value) << SERCOM_USART_CTRLC_GTIME_Pos))
#define SERCOM_USART_CTRLC_BRKLEN_Pos 8            /**< \brief (SERCOM_USART_CTRLC) LIN Master Break Length */
#define SERCOM_USART_CTRLC_BRKLEN_Msk (_U_(0x3) << SERCOM_USART_CTRLC_BRKLEN_Pos)
#define SERCOM_USART_CTRLC_BRKLEN(value) (SERCOM_USART_CTRLC_BRKLEN_Msk & ((value) << SERCOM_USART_CTRLC_BRKLEN_Pos))
#define SERCOM_USART_CTRLC_HDRDLY_Pos 10           /**< \brief (SERCOM_USART_CTRLC) LIN Master Header Delay */
#define SERCOM_USART_CTRLC_HDRDLY_Msk (_U_(0x3) << SERCOM_USART_CTRLC_HDRDLY_Pos)
#define SERCOM_USART_CTRLC_HDRDLY(value) (SERCOM_USART_CTRLC_HDRDLY_Msk & ((value) << SERCOM_USART_CTRLC_HDRDLY_Pos))
#define SERCOM_USART_CTRLC_INACK_Pos 16           /**< \brief (SERCOM_USART_CTRLC) Inhibit Not Acknowledge */
#define SERCOM_USART_CTRLC_INACK    (_U_(0x1) << SERCOM_USART_CTRLC_INACK_Pos)
#define SERCOM_USART_CTRLC_DSNACK_Pos 17           /**< \brief (SERCOM_USART_CTRLC) Disable Successive NACK */
#define SERCOM_USART_CTRLC_DSNACK   (_U_(0x1) << SERCOM_USART_CTRLC_DSNACK_Pos)
#define SERCOM_USART_CTRLC_MAXITER_Pos 20           /**< \brief (SERCOM_USART_CTRLC) Maximum Iterations */
#define SERCOM_USART_CTRLC_MAXITER_Msk (_U_(0x7) << SERCOM_USART_CTRLC_MAXITER_Pos)
#define SERCOM_USART_CTRLC_MAXITER(value) (SERCOM_USART_CTRLC_MAXITER_Msk & ((value) << SERCOM_USART_CTRLC_MAXITER_Pos))
#define SERCOM_USART_CTRLC_DATA32B_Pos 24           /**< \brief (SERCOM_USART_CTRLC) Data 32 Bit */
#define SERCOM_USART_CTRLC_DATA32B_Msk (_U_(0x3) << SERCOM_USART_CTRLC_DATA32B_Pos)
#define SERCOM_USART_CTRLC_DATA32B(value) (SERCOM_USART_CTRLC_DATA32B_Msk & ((value) << SERCOM_USART_CTRLC_DATA32B_Pos))
#define SERCOM_USART_CTRLC_MASK     _U_(0x03730F07) /**< \brief (SERCOM_USART_CTRLC) MASK Register */

/* -------- SERCOM_I2CM_BAUD : (SERCOM Offset: 0x0C) (R/W 32) I2CM Baud Rate -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BAUD:8;           /*!< bit:  0.. 7  Baud Rate Value                    */
    uint32_t BAUDLOW:8;        /*!< bit:  8..15  Baud Rate Value Low                */
    uint32_t HSBAUD:8;         /*!< bit: 16..23  High Speed Baud Rate Value         */
    uint32_t HSBAUDLOW:8;      /*!< bit: 24..31  High Speed Baud Rate Value Low     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_BAUD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_BAUD_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_BAUD) I2CM Baud Rate  Reset Value */

#define SERCOM_I2CM_BAUD_BAUD_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_BAUD) Baud Rate Value Position */
#define SERCOM_I2CM_BAUD_BAUD_Msk             (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_BAUD_Pos)        /* (SERCOM_I2CM_BAUD) Baud Rate Value Mask */
#define SERCOM_I2CM_BAUD_BAUD(value)          (SERCOM_I2CM_BAUD_BAUD_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_BAUD_Pos)) /* Assigment of value for BAUD in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_BAUDLOW_Pos          _UINT32_(8)                                          /* (SERCOM_I2CM_BAUD) Baud Rate Value Low Position */
#define SERCOM_I2CM_BAUD_BAUDLOW_Msk          (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)     /* (SERCOM_I2CM_BAUD) Baud Rate Value Low Mask */
#define SERCOM_I2CM_BAUD_BAUDLOW(value)       (SERCOM_I2CM_BAUD_BAUDLOW_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)) /* Assigment of value for BAUDLOW in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_HSBAUD_Pos           _UINT32_(16)                                         /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Position */
#define SERCOM_I2CM_BAUD_HSBAUD_Msk           (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_HSBAUD_Pos)      /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Mask */
#define SERCOM_I2CM_BAUD_HSBAUD(value)        (SERCOM_I2CM_BAUD_HSBAUD_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_HSBAUD_Pos)) /* Assigment of value for HSBAUD in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_HSBAUDLOW_Pos        _UINT32_(24)                                         /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Low Position */
#define SERCOM_I2CM_BAUD_HSBAUDLOW_Msk        (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_HSBAUDLOW_Pos)   /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Low Mask */
#define SERCOM_I2CM_BAUD_HSBAUDLOW(value)     (SERCOM_I2CM_BAUD_HSBAUDLOW_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_HSBAUDLOW_Pos)) /* Assigment of value for HSBAUDLOW in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_I2CM_BAUD) Register Mask  */


/* -------- SERCOM_SPIM_BAUD : (SERCOM Offset: 0x0C) (R/W 8) SPIM Baud Rate -------- */
#define SERCOM_SPIM_BAUD_RESETVALUE           _UINT8_(0x00)                                        /*  (SERCOM_SPIM_BAUD) SPIM Baud Rate  Reset Value */

#define SERCOM_SPIM_BAUD_BAUD_Pos             _UINT8_(0)                                           /* (SERCOM_SPIM_BAUD) Baud Rate Value Position */
#define SERCOM_SPIM_BAUD_BAUD_Msk             (_UINT8_(0xFF) << SERCOM_SPIM_BAUD_BAUD_Pos)         /* (SERCOM_SPIM_BAUD) Baud Rate Value Mask */
#define SERCOM_SPIM_BAUD_BAUD(value)          (SERCOM_SPIM_BAUD_BAUD_Msk & (_UINT8_(value) << SERCOM_SPIM_BAUD_BAUD_Pos)) /* Assigment of value for BAUD in the SERCOM_SPIM_BAUD register */
#define SERCOM_SPIM_BAUD_Msk                  _UINT8_(0xFF)                                        /* (SERCOM_SPIM_BAUD) Register Mask  */


/* -------- SERCOM_SPIS_BAUD : (SERCOM Offset: 0x0C) (R/W 8) SPIS Baud Rate -------- */
#define SERCOM_SPIS_BAUD_RESETVALUE           _UINT8_(0x00)                                        /*  (SERCOM_SPIS_BAUD) SPIS Baud Rate  Reset Value */

#define SERCOM_SPIS_BAUD_BAUD_Pos             _UINT8_(0)                                           /* (SERCOM_SPIS_BAUD) Baud Rate Value Position */
#define SERCOM_SPIS_BAUD_BAUD_Msk             (_UINT8_(0xFF) << SERCOM_SPIS_BAUD_BAUD_Pos)         /* (SERCOM_SPIS_BAUD) Baud Rate Value Mask */
#define SERCOM_SPIS_BAUD_BAUD(value)          (SERCOM_SPIS_BAUD_BAUD_Msk & (_UINT8_(value) << SERCOM_SPIS_BAUD_BAUD_Pos)) /* Assigment of value for BAUD in the SERCOM_SPIS_BAUD register */
#define SERCOM_SPIS_BAUD_Msk                  _UINT8_(0xFF)                                        /* (SERCOM_SPIS_BAUD) Register Mask  */

/* -------- SERCOM_SPI_BAUD : (SERCOM Offset: 0x0C) (R/W  8) SPI SPI Baud Rate -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  BAUD:8;           /*!< bit:  0.. 7  Baud Rate Value                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_SPI_BAUD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_BAUD_OFFSET      0x0C         /**< \brief (SERCOM_SPI_BAUD offset) SPI Baud Rate */
#define SERCOM_SPI_BAUD_RESETVALUE  _U_(0x00)    /**< \brief (SERCOM_SPI_BAUD reset_value) SPI Baud Rate */

#define SERCOM_SPI_BAUD_BAUD_Pos    0            /**< \brief (SERCOM_SPI_BAUD) Baud Rate Value */
#define SERCOM_SPI_BAUD_BAUD_Msk    (_U_(0xFF) << SERCOM_SPI_BAUD_BAUD_Pos)
#define SERCOM_SPI_BAUD_BAUD(value) (SERCOM_SPI_BAUD_BAUD_Msk & ((value) << SERCOM_SPI_BAUD_BAUD_Pos))
#define SERCOM_SPI_BAUD_MASK        _U_(0xFF)    /**< \brief (SERCOM_SPI_BAUD) MASK Register */

/* -------- SERCOM_USART_EXT_BAUD : (SERCOM Offset: 0x0C) (R/W 16) USART_EXT Baud Rate -------- */
#define SERCOM_USART_EXT_BAUD_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_USART_EXT_BAUD) USART_EXT Baud Rate  Reset Value */

#define SERCOM_USART_EXT_BAUD_BAUD_Pos        _UINT16_(0)                                          /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_BAUD_Msk        (_UINT16_(0xFFFF) << SERCOM_USART_EXT_BAUD_BAUD_Pos) /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_BAUD(value)     (SERCOM_USART_EXT_BAUD_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_EXT_BAUD_BAUD_Pos)) /* Assigment of value for BAUD in the SERCOM_USART_EXT_BAUD register */
#define SERCOM_USART_EXT_BAUD_Msk             _UINT16_(0xFFFF)                                     /* (SERCOM_USART_EXT_BAUD) Register Mask  */

/* FRAC mode */
#define SERCOM_USART_EXT_BAUD_FRAC_BAUD_Pos   _UINT16_(0)                                          /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_FRAC_BAUD_Msk   (_UINT16_(0x1FFF) << SERCOM_USART_EXT_BAUD_FRAC_BAUD_Pos) /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_FRAC_BAUD(value) (SERCOM_USART_EXT_BAUD_FRAC_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_EXT_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_FRAC_FP_Pos     _UINT16_(13)                                         /* (SERCOM_USART_EXT_BAUD) Fractional Part Position */
#define SERCOM_USART_EXT_BAUD_FRAC_FP_Msk     (_UINT16_(0x7) << SERCOM_USART_EXT_BAUD_FRAC_FP_Pos) /* (SERCOM_USART_EXT_BAUD) Fractional Part Mask */
#define SERCOM_USART_EXT_BAUD_FRAC_FP(value)  (SERCOM_USART_EXT_BAUD_FRAC_FP_Msk & (_UINT16_(value) << SERCOM_USART_EXT_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_EXT_BAUD_FRAC_Msk        _UINT16_(0xFFFF)                                      /* (SERCOM_USART_EXT_BAUD_FRAC) Register Mask  */

/* FRACFP mode */
#define SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Pos _UINT16_(0)                                          /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Msk (_UINT16_(0x1FFF) << SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Pos) /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_FRACFP_BAUD(value) (SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_FRACFP_FP_Pos   _UINT16_(13)                                         /* (SERCOM_USART_EXT_BAUD) Fractional Part Position */
#define SERCOM_USART_EXT_BAUD_FRACFP_FP_Msk   (_UINT16_(0x7) << SERCOM_USART_EXT_BAUD_FRACFP_FP_Pos) /* (SERCOM_USART_EXT_BAUD) Fractional Part Mask */
#define SERCOM_USART_EXT_BAUD_FRACFP_FP(value) (SERCOM_USART_EXT_BAUD_FRACFP_FP_Msk & (_UINT16_(value) << SERCOM_USART_EXT_BAUD_FRACFP_FP_Pos))
#define SERCOM_USART_EXT_BAUD_FRACFP_Msk      _UINT16_(0xFFFF)                                      /* (SERCOM_USART_EXT_BAUD_FRACFP) Register Mask  */

/* USARTFP mode */
#define SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Pos _UINT16_(0)                                          /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Msk (_UINT16_(0xFFFF) << SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Pos) /* (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_USARTFP_BAUD(value) (SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_USARTFP_Msk     _UINT16_(0xFFFF)                                      /* (SERCOM_USART_EXT_BAUD_USARTFP) Register Mask  */


/* -------- SERCOM_USART_INT_BAUD : (SERCOM Offset: 0x0C) (R/W 16) USART_INT Baud Rate -------- */
#define SERCOM_USART_INT_BAUD_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_BAUD) USART_INT Baud Rate  Reset Value */

#define SERCOM_USART_INT_BAUD_BAUD_Pos        _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_BAUD_Msk        (_UINT16_(0xFFFF) << SERCOM_USART_INT_BAUD_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_BAUD(value)     (SERCOM_USART_INT_BAUD_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_BAUD_Pos)) /* Assigment of value for BAUD in the SERCOM_USART_INT_BAUD register */
#define SERCOM_USART_INT_BAUD_Msk             _UINT16_(0xFFFF)                                     /* (SERCOM_USART_INT_BAUD) Register Mask  */

/* FRAC mode */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos   _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD_Msk   (_UINT16_(0x1FFF) << SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD(value) (SERCOM_USART_INT_BAUD_FRAC_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_FRAC_FP_Pos     _UINT16_(13)                                         /* (SERCOM_USART_INT_BAUD) Fractional Part Position */
#define SERCOM_USART_INT_BAUD_FRAC_FP_Msk     (_UINT16_(0x7) << SERCOM_USART_INT_BAUD_FRAC_FP_Pos) /* (SERCOM_USART_INT_BAUD) Fractional Part Mask */
#define SERCOM_USART_INT_BAUD_FRAC_FP(value)  (SERCOM_USART_INT_BAUD_FRAC_FP_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_INT_BAUD_FRAC_Msk        _UINT16_(0xFFFF)                                      /* (SERCOM_USART_INT_BAUD_FRAC) Register Mask  */

/* FRACFP mode */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD_Msk (_UINT16_(0x1FFF) << SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD(value) (SERCOM_USART_INT_BAUD_FRACFP_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_FRACFP_FP_Pos   _UINT16_(13)                                         /* (SERCOM_USART_INT_BAUD) Fractional Part Position */
#define SERCOM_USART_INT_BAUD_FRACFP_FP_Msk   (_UINT16_(0x7) << SERCOM_USART_INT_BAUD_FRACFP_FP_Pos) /* (SERCOM_USART_INT_BAUD) Fractional Part Mask */
#define SERCOM_USART_INT_BAUD_FRACFP_FP(value) (SERCOM_USART_INT_BAUD_FRACFP_FP_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRACFP_FP_Pos))
#define SERCOM_USART_INT_BAUD_FRACFP_Msk      _UINT16_(0xFFFF)                                      /* (SERCOM_USART_INT_BAUD_FRACFP) Register Mask  */

/* USARTFP mode */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD_Msk (_UINT16_(0xFFFF) << SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD(value) (SERCOM_USART_INT_BAUD_USARTFP_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_USARTFP_Msk     _UINT16_(0xFFFF)                                      /* (SERCOM_USART_INT_BAUD_USARTFP) Register Mask  */

/* -------- SERCOM_USART_BAUD : (SERCOM Offset: 0x0C) (R/W 16) USART USART Baud Rate -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t BAUD:16;          /*!< bit:  0..15  Baud Rate Value                    */
  } bit;                       /*!< Structure used for bit  access                  */
  struct { // FRAC mode
    uint16_t BAUD:13;          /*!< bit:  0..12  Baud Rate Value                    */
    uint16_t FP:3;             /*!< bit: 13..15  Fractional Part                    */
  } FRAC;                      /*!< Structure used for FRAC                         */
  struct { // FRACFP mode
    uint16_t BAUD:13;          /*!< bit:  0..12  Baud Rate Value                    */
    uint16_t FP:3;             /*!< bit: 13..15  Fractional Part                    */
  } FRACFP;                    /*!< Structure used for FRACFP                       */
  struct { // USARTFP mode
    uint16_t BAUD:16;          /*!< bit:  0..15  Baud Rate Value                    */
  } USARTFP;                   /*!< Structure used for USARTFP                      */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_BAUD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_BAUD_OFFSET    0x0C         /**< \brief (SERCOM_USART_BAUD offset) USART Baud Rate */
#define SERCOM_USART_BAUD_RESETVALUE _U_(0x0000)  /**< \brief (SERCOM_USART_BAUD reset_value) USART Baud Rate */

#define SERCOM_USART_BAUD_BAUD_Pos  0            /**< \brief (SERCOM_USART_BAUD) Baud Rate Value */
#define SERCOM_USART_BAUD_BAUD_Msk  (_U_(0xFFFF) << SERCOM_USART_BAUD_BAUD_Pos)
#define SERCOM_USART_BAUD_BAUD(value) (SERCOM_USART_BAUD_BAUD_Msk & ((value) << SERCOM_USART_BAUD_BAUD_Pos))
#define SERCOM_USART_BAUD_MASK      _U_(0xFFFF)  /**< \brief (SERCOM_USART_BAUD) MASK Register */

// FRAC mode
#define SERCOM_USART_BAUD_FRAC_BAUD_Pos 0            /**< \brief (SERCOM_USART_BAUD_FRAC) Baud Rate Value */
#define SERCOM_USART_BAUD_FRAC_BAUD_Msk (_U_(0x1FFF) << SERCOM_USART_BAUD_FRAC_BAUD_Pos)
#define SERCOM_USART_BAUD_FRAC_BAUD(value) (SERCOM_USART_BAUD_FRAC_BAUD_Msk & ((value) << SERCOM_USART_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_BAUD_FRAC_FP_Pos 13           /**< \brief (SERCOM_USART_BAUD_FRAC) Fractional Part */
#define SERCOM_USART_BAUD_FRAC_FP_Msk (_U_(0x7) << SERCOM_USART_BAUD_FRAC_FP_Pos)
#define SERCOM_USART_BAUD_FRAC_FP(value) (SERCOM_USART_BAUD_FRAC_FP_Msk & ((value) << SERCOM_USART_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_BAUD_FRAC_MASK _U_(0xFFFF)  /**< \brief (SERCOM_USART_BAUD_FRAC) MASK Register */

// FRACFP mode
#define SERCOM_USART_BAUD_FRACFP_BAUD_Pos 0            /**< \brief (SERCOM_USART_BAUD_FRACFP) Baud Rate Value */
#define SERCOM_USART_BAUD_FRACFP_BAUD_Msk (_U_(0x1FFF) << SERCOM_USART_BAUD_FRACFP_BAUD_Pos)
#define SERCOM_USART_BAUD_FRACFP_BAUD(value) (SERCOM_USART_BAUD_FRACFP_BAUD_Msk & ((value) << SERCOM_USART_BAUD_FRACFP_BAUD_Pos))
#define SERCOM_USART_BAUD_FRACFP_FP_Pos 13           /**< \brief (SERCOM_USART_BAUD_FRACFP) Fractional Part */
#define SERCOM_USART_BAUD_FRACFP_FP_Msk (_U_(0x7) << SERCOM_USART_BAUD_FRACFP_FP_Pos)
#define SERCOM_USART_BAUD_FRACFP_FP(value) (SERCOM_USART_BAUD_FRACFP_FP_Msk & ((value) << SERCOM_USART_BAUD_FRACFP_FP_Pos))
#define SERCOM_USART_BAUD_FRACFP_MASK _U_(0xFFFF)  /**< \brief (SERCOM_USART_BAUD_FRACFP) MASK Register */

// USARTFP mode
#define SERCOM_USART_BAUD_USARTFP_BAUD_Pos 0            /**< \brief (SERCOM_USART_BAUD_USARTFP) Baud Rate Value */
#define SERCOM_USART_BAUD_USARTFP_BAUD_Msk (_U_(0xFFFF) << SERCOM_USART_BAUD_USARTFP_BAUD_Pos)
#define SERCOM_USART_BAUD_USARTFP_BAUD(value) (SERCOM_USART_BAUD_USARTFP_BAUD_Msk & ((value) << SERCOM_USART_BAUD_USARTFP_BAUD_Pos))
#define SERCOM_USART_BAUD_USARTFP_MASK _U_(0xFFFF)  /**< \brief (SERCOM_USART_BAUD_USARTFP) MASK Register */

/* -------- SERCOM_USART_EXT_RXPL : (SERCOM Offset: 0x0E) (R/W 8) USART_EXT Receive Pulse Length -------- */
#define SERCOM_USART_EXT_RXPL_RESETVALUE      _UINT8_(0x00)                                        /*  (SERCOM_USART_EXT_RXPL) USART_EXT Receive Pulse Length  Reset Value */

#define SERCOM_USART_EXT_RXPL_RXPL_Pos        _UINT8_(0)                                           /* (SERCOM_USART_EXT_RXPL) Receive Pulse Length Position */
#define SERCOM_USART_EXT_RXPL_RXPL_Msk        (_UINT8_(0xFF) << SERCOM_USART_EXT_RXPL_RXPL_Pos)    /* (SERCOM_USART_EXT_RXPL) Receive Pulse Length Mask */
#define SERCOM_USART_EXT_RXPL_RXPL(value)     (SERCOM_USART_EXT_RXPL_RXPL_Msk & (_UINT8_(value) << SERCOM_USART_EXT_RXPL_RXPL_Pos)) /* Assigment of value for RXPL in the SERCOM_USART_EXT_RXPL register */
#define SERCOM_USART_EXT_RXPL_Msk             _UINT8_(0xFF)                                        /* (SERCOM_USART_EXT_RXPL) Register Mask  */


/* -------- SERCOM_USART_INT_RXPL : (SERCOM Offset: 0x0E) (R/W 8) USART_INT Receive Pulse Length -------- */
#define SERCOM_USART_INT_RXPL_RESETVALUE      _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_RXPL) USART_INT Receive Pulse Length  Reset Value */

#define SERCOM_USART_INT_RXPL_RXPL_Pos        _UINT8_(0)                                           /* (SERCOM_USART_INT_RXPL) Receive Pulse Length Position */
#define SERCOM_USART_INT_RXPL_RXPL_Msk        (_UINT8_(0xFF) << SERCOM_USART_INT_RXPL_RXPL_Pos)    /* (SERCOM_USART_INT_RXPL) Receive Pulse Length Mask */
#define SERCOM_USART_INT_RXPL_RXPL(value)     (SERCOM_USART_INT_RXPL_RXPL_Msk & (_UINT8_(value) << SERCOM_USART_INT_RXPL_RXPL_Pos)) /* Assigment of value for RXPL in the SERCOM_USART_INT_RXPL register */
#define SERCOM_USART_INT_RXPL_Msk             _UINT8_(0xFF)                                        /* (SERCOM_USART_INT_RXPL) Register Mask  */

/* -------- SERCOM_USART_RXPL : (SERCOM Offset: 0x0E) (R/W  8) USART USART Receive Pulse Length -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  RXPL:8;           /*!< bit:  0.. 7  Receive Pulse Length               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_USART_RXPL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_RXPL_OFFSET    0x0E         /**< \brief (SERCOM_USART_RXPL offset) USART Receive Pulse Length */
#define SERCOM_USART_RXPL_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_USART_RXPL reset_value) USART Receive Pulse Length */

#define SERCOM_USART_RXPL_RXPL_Pos  0            /**< \brief (SERCOM_USART_RXPL) Receive Pulse Length */
#define SERCOM_USART_RXPL_RXPL_Msk  (_U_(0xFF) << SERCOM_USART_RXPL_RXPL_Pos)
#define SERCOM_USART_RXPL_RXPL(value) (SERCOM_USART_RXPL_RXPL_Msk & ((value) << SERCOM_USART_RXPL_RXPL_Pos))
#define SERCOM_USART_RXPL_MASK      _U_(0xFF)    /**< \brief (SERCOM_USART_RXPL) MASK Register */

/* -------- SERCOM_I2CM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CM Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  MB:1;             /*!< bit:      0  Master On Bus Interrupt Disable    */
    uint8_t  SB:1;             /*!< bit:      1  Slave On Bus Interrupt Disable     */
    uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CM_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CM_INTENCLR_MB_Pos           _UINT8_(0)                                           /* (SERCOM_I2CM_INTENCLR) Master On Bus Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_MB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_MB_Pos)        /* (SERCOM_I2CM_INTENCLR) Master On Bus Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_MB(value)        (SERCOM_I2CM_INTENCLR_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_MB_Pos)) /* Assigment of value for MB in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_SB_Pos           _UINT8_(1)                                           /* (SERCOM_I2CM_INTENCLR) Slave On Bus Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_SB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_SB_Pos)        /* (SERCOM_I2CM_INTENCLR) Slave On Bus Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_SB(value)        (SERCOM_I2CM_INTENCLR_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_SB_Pos)) /* Assigment of value for SB in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CM_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_ERROR_Pos)     /* (SERCOM_I2CM_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_ERROR(value)     (SERCOM_I2CM_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_Msk              _UINT8_(0x83)                                        /* (SERCOM_I2CM_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CS Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PREC:1;           /*!< bit:      0  Stop Received Interrupt Disable    */
    uint8_t  AMATCH:1;         /*!< bit:      1  Address Match Interrupt Disable    */
    uint8_t  DRDY:1;           /*!< bit:      2  Data Interrupt Disable             */
    uint8_t  :4;               /*!< bit:  3.. 6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CS_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CS_INTENCLR_PREC_Pos         _UINT8_(0)                                           /* (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_PREC_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_PREC_Pos)      /* (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_PREC(value)      (SERCOM_I2CS_INTENCLR_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_PREC_Pos)) /* Assigment of value for PREC in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_AMATCH_Pos       _UINT8_(1)                                           /* (SERCOM_I2CS_INTENCLR) Address Match Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_AMATCH_Msk       (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)    /* (SERCOM_I2CS_INTENCLR) Address Match Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_AMATCH(value)    (SERCOM_I2CS_INTENCLR_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)) /* Assigment of value for AMATCH in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_DRDY_Pos         _UINT8_(2)                                           /* (SERCOM_I2CS_INTENCLR) Data Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_DRDY_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_DRDY_Pos)      /* (SERCOM_I2CS_INTENCLR) Data Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_DRDY(value)      (SERCOM_I2CS_INTENCLR_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_DRDY_Pos)) /* Assigment of value for DRDY in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CS_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_ERROR_Pos)     /* (SERCOM_I2CS_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_ERROR(value)     (SERCOM_I2CS_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_Msk              _UINT8_(0x87)                                        /* (SERCOM_I2CS_INTENCLR) Register Mask  */


/* -------- SERCOM_SPIM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPIM Interrupt Enable Clear -------- */
#define SERCOM_SPIM_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIM_INTENCLR) SPIM Interrupt Enable Clear  Reset Value */

#define SERCOM_SPIM_INTENCLR_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIM_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_DRE_Pos)       /* (SERCOM_SPIM_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_DRE(value)       (SERCOM_SPIM_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIM_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_TXC_Pos)       /* (SERCOM_SPIM_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_TXC(value)       (SERCOM_SPIM_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIM_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_RXC_Pos)       /* (SERCOM_SPIM_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_RXC(value)       (SERCOM_SPIM_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIM_INTENCLR) Slave Select Low Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_SSL_Pos)       /* (SERCOM_SPIM_INTENCLR) Slave Select Low Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_SSL(value)       (SERCOM_SPIM_INTENCLR_SSL_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_SSL_Pos)) /* Assigment of value for SSL in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIM_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_ERROR_Pos)     /* (SERCOM_SPIM_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_ERROR(value)     (SERCOM_SPIM_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIM_INTENCLR) Register Mask  */

/* -------- SERCOM_SPI_INTENCLR : (SERCOM Offset: 0x14) (R/W  8) SPI SPI Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DRE:1;            /*!< bit:      0  Data Register Empty Interrupt Disable */
    uint8_t  TXC:1;            /*!< bit:      1  Transmit Complete Interrupt Disable */
    uint8_t  RXC:1;            /*!< bit:      2  Receive Complete Interrupt Disable */
    uint8_t  SSL:1;            /*!< bit:      3  Slave Select Low Interrupt Disable */
    uint8_t  :3;               /*!< bit:  4.. 6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_SPI_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_INTENCLR_OFFSET  0x14         /**< \brief (SERCOM_SPI_INTENCLR offset) SPI Interrupt Enable Clear */
#define SERCOM_SPI_INTENCLR_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_SPI_INTENCLR reset_value) SPI Interrupt Enable Clear */

#define SERCOM_SPI_INTENCLR_DRE_Pos 0            /**< \brief (SERCOM_SPI_INTENCLR) Data Register Empty Interrupt Disable */
#define SERCOM_SPI_INTENCLR_DRE     (_U_(0x1) << SERCOM_SPI_INTENCLR_DRE_Pos)
#define SERCOM_SPI_INTENCLR_TXC_Pos 1            /**< \brief (SERCOM_SPI_INTENCLR) Transmit Complete Interrupt Disable */
#define SERCOM_SPI_INTENCLR_TXC     (_U_(0x1) << SERCOM_SPI_INTENCLR_TXC_Pos)
#define SERCOM_SPI_INTENCLR_RXC_Pos 2            /**< \brief (SERCOM_SPI_INTENCLR) Receive Complete Interrupt Disable */
#define SERCOM_SPI_INTENCLR_RXC     (_U_(0x1) << SERCOM_SPI_INTENCLR_RXC_Pos)
#define SERCOM_SPI_INTENCLR_SSL_Pos 3            /**< \brief (SERCOM_SPI_INTENCLR) Slave Select Low Interrupt Disable */
#define SERCOM_SPI_INTENCLR_SSL     (_U_(0x1) << SERCOM_SPI_INTENCLR_SSL_Pos)
#define SERCOM_SPI_INTENCLR_ERROR_Pos 7            /**< \brief (SERCOM_SPI_INTENCLR) Combined Error Interrupt Disable */
#define SERCOM_SPI_INTENCLR_ERROR   (_U_(0x1) << SERCOM_SPI_INTENCLR_ERROR_Pos)
#define SERCOM_SPI_INTENCLR_MASK    _U_(0x8F)    /**< \brief (SERCOM_SPI_INTENCLR) MASK Register */

/* -------- SERCOM_SPIS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPIS Interrupt Enable Clear -------- */
#define SERCOM_SPIS_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIS_INTENCLR) SPIS Interrupt Enable Clear  Reset Value */

#define SERCOM_SPIS_INTENCLR_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIS_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_DRE_Pos)       /* (SERCOM_SPIS_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_DRE(value)       (SERCOM_SPIS_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIS_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_TXC_Pos)       /* (SERCOM_SPIS_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_TXC(value)       (SERCOM_SPIS_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIS_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_RXC_Pos)       /* (SERCOM_SPIS_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_RXC(value)       (SERCOM_SPIS_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIS_INTENCLR) Slave Select Low Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_SSL_Pos)       /* (SERCOM_SPIS_INTENCLR) Slave Select Low Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_SSL(value)       (SERCOM_SPIS_INTENCLR_SSL_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_SSL_Pos)) /* Assigment of value for SSL in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIS_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_ERROR_Pos)     /* (SERCOM_SPIS_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_ERROR(value)     (SERCOM_SPIS_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIS_INTENCLR) Register Mask  */


/* -------- SERCOM_USART_EXT_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) USART_EXT Interrupt Enable Clear -------- */
#define SERCOM_USART_EXT_INTENCLR_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_EXT_INTENCLR) USART_EXT Interrupt Enable Clear  Reset Value */

#define SERCOM_USART_EXT_INTENCLR_DRE_Pos     _UINT8_(0)                                           /* (SERCOM_USART_EXT_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_DRE_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_DRE_Pos)  /* (SERCOM_USART_EXT_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_DRE(value)  (SERCOM_USART_EXT_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_TXC_Pos     _UINT8_(1)                                           /* (SERCOM_USART_EXT_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_TXC_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_TXC_Pos)  /* (SERCOM_USART_EXT_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_TXC(value)  (SERCOM_USART_EXT_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_RXC_Pos     _UINT8_(2)                                           /* (SERCOM_USART_EXT_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_RXC_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_RXC_Pos)  /* (SERCOM_USART_EXT_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_RXC(value)  (SERCOM_USART_EXT_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_RXS_Pos     _UINT8_(3)                                           /* (SERCOM_USART_EXT_INTENCLR) Receive Start Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_RXS_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_RXS_Pos)  /* (SERCOM_USART_EXT_INTENCLR) Receive Start Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_RXS(value)  (SERCOM_USART_EXT_INTENCLR_RXS_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_RXS_Pos)) /* Assigment of value for RXS in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_CTSIC_Pos   _UINT8_(4)                                           /* (SERCOM_USART_EXT_INTENCLR) Clear To Send Input Change Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_CTSIC_Msk   (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_CTSIC_Pos) /* (SERCOM_USART_EXT_INTENCLR) Clear To Send Input Change Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_CTSIC(value) (SERCOM_USART_EXT_INTENCLR_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_CTSIC_Pos)) /* Assigment of value for CTSIC in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_RXBRK_Pos   _UINT8_(5)                                           /* (SERCOM_USART_EXT_INTENCLR) Break Received Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_RXBRK_Msk   (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_RXBRK_Pos) /* (SERCOM_USART_EXT_INTENCLR) Break Received Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_RXBRK(value) (SERCOM_USART_EXT_INTENCLR_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_RXBRK_Pos)) /* Assigment of value for RXBRK in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_ERROR_Pos   _UINT8_(7)                                           /* (SERCOM_USART_EXT_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_ERROR_Msk   (_UINT8_(0x1) << SERCOM_USART_EXT_INTENCLR_ERROR_Pos) /* (SERCOM_USART_EXT_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_ERROR(value) (SERCOM_USART_EXT_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENCLR_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_USART_EXT_INTENCLR register */
#define SERCOM_USART_EXT_INTENCLR_Msk         _UINT8_(0xBF)                                        /* (SERCOM_USART_EXT_INTENCLR) Register Mask  */


/* -------- SERCOM_USART_INT_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) USART_INT Interrupt Enable Clear -------- */
#define SERCOM_USART_INT_INTENCLR_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_INTENCLR) USART_INT Interrupt Enable Clear  Reset Value */

#define SERCOM_USART_INT_INTENCLR_DRE_Pos     _UINT8_(0)                                           /* (SERCOM_USART_INT_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_DRE_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_DRE_Pos)  /* (SERCOM_USART_INT_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_DRE(value)  (SERCOM_USART_INT_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_TXC_Pos     _UINT8_(1)                                           /* (SERCOM_USART_INT_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_TXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_TXC_Pos)  /* (SERCOM_USART_INT_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_TXC(value)  (SERCOM_USART_INT_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_RXC_Pos     _UINT8_(2)                                           /* (SERCOM_USART_INT_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_RXC_Pos)  /* (SERCOM_USART_INT_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXC(value)  (SERCOM_USART_INT_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_RXS_Pos     _UINT8_(3)                                           /* (SERCOM_USART_INT_INTENCLR) Receive Start Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXS_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_RXS_Pos)  /* (SERCOM_USART_INT_INTENCLR) Receive Start Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXS(value)  (SERCOM_USART_INT_INTENCLR_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_RXS_Pos)) /* Assigment of value for RXS in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_CTSIC_Pos   _UINT8_(4)                                           /* (SERCOM_USART_INT_INTENCLR) Clear To Send Input Change Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_CTSIC_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_CTSIC_Pos) /* (SERCOM_USART_INT_INTENCLR) Clear To Send Input Change Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_CTSIC(value) (SERCOM_USART_INT_INTENCLR_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_CTSIC_Pos)) /* Assigment of value for CTSIC in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_RXBRK_Pos   _UINT8_(5)                                           /* (SERCOM_USART_INT_INTENCLR) Break Received Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXBRK_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_RXBRK_Pos) /* (SERCOM_USART_INT_INTENCLR) Break Received Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXBRK(value) (SERCOM_USART_INT_INTENCLR_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_RXBRK_Pos)) /* Assigment of value for RXBRK in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_ERROR_Pos   _UINT8_(7)                                           /* (SERCOM_USART_INT_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_ERROR_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_ERROR_Pos) /* (SERCOM_USART_INT_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_ERROR(value) (SERCOM_USART_INT_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_Msk         _UINT8_(0xBF)                                        /* (SERCOM_USART_INT_INTENCLR) Register Mask  */

/* -------- SERCOM_USART_INTENCLR : (SERCOM Offset: 0x14) (R/W  8) USART USART Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DRE:1;            /*!< bit:      0  Data Register Empty Interrupt Disable */
    uint8_t  TXC:1;            /*!< bit:      1  Transmit Complete Interrupt Disable */
    uint8_t  RXC:1;            /*!< bit:      2  Receive Complete Interrupt Disable */
    uint8_t  RXS:1;            /*!< bit:      3  Receive Start Interrupt Disable    */
    uint8_t  CTSIC:1;          /*!< bit:      4  Clear To Send Input Change Interrupt Disable */
    uint8_t  RXBRK:1;          /*!< bit:      5  Break Received Interrupt Disable   */
    uint8_t  :1;               /*!< bit:      6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_USART_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INTENCLR_OFFSET 0x14         /**< \brief (SERCOM_USART_INTENCLR offset) USART Interrupt Enable Clear */
#define SERCOM_USART_INTENCLR_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_USART_INTENCLR reset_value) USART Interrupt Enable Clear */

#define SERCOM_USART_INTENCLR_DRE_Pos 0            /**< \brief (SERCOM_USART_INTENCLR) Data Register Empty Interrupt Disable */
#define SERCOM_USART_INTENCLR_DRE   (_U_(0x1) << SERCOM_USART_INTENCLR_DRE_Pos)
#define SERCOM_USART_INTENCLR_TXC_Pos 1            /**< \brief (SERCOM_USART_INTENCLR) Transmit Complete Interrupt Disable */
#define SERCOM_USART_INTENCLR_TXC   (_U_(0x1) << SERCOM_USART_INTENCLR_TXC_Pos)
#define SERCOM_USART_INTENCLR_RXC_Pos 2            /**< \brief (SERCOM_USART_INTENCLR) Receive Complete Interrupt Disable */
#define SERCOM_USART_INTENCLR_RXC   (_U_(0x1) << SERCOM_USART_INTENCLR_RXC_Pos)
#define SERCOM_USART_INTENCLR_RXS_Pos 3            /**< \brief (SERCOM_USART_INTENCLR) Receive Start Interrupt Disable */
#define SERCOM_USART_INTENCLR_RXS   (_U_(0x1) << SERCOM_USART_INTENCLR_RXS_Pos)
#define SERCOM_USART_INTENCLR_CTSIC_Pos 4            /**< \brief (SERCOM_USART_INTENCLR) Clear To Send Input Change Interrupt Disable */
#define SERCOM_USART_INTENCLR_CTSIC (_U_(0x1) << SERCOM_USART_INTENCLR_CTSIC_Pos)
#define SERCOM_USART_INTENCLR_RXBRK_Pos 5            /**< \brief (SERCOM_USART_INTENCLR) Break Received Interrupt Disable */
#define SERCOM_USART_INTENCLR_RXBRK (_U_(0x1) << SERCOM_USART_INTENCLR_RXBRK_Pos)
#define SERCOM_USART_INTENCLR_ERROR_Pos 7            /**< \brief (SERCOM_USART_INTENCLR) Combined Error Interrupt Disable */
#define SERCOM_USART_INTENCLR_ERROR (_U_(0x1) << SERCOM_USART_INTENCLR_ERROR_Pos)
#define SERCOM_USART_INTENCLR_MASK  _U_(0xBF)    /**< \brief (SERCOM_USART_INTENCLR) MASK Register */

/* -------- SERCOM_I2CM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CM Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  MB:1;             /*!< bit:      0  Master On Bus Interrupt Enable     */
    uint8_t  SB:1;             /*!< bit:      1  Slave On Bus Interrupt Enable      */
    uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CM_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set  Reset Value */

#define SERCOM_I2CM_INTENSET_MB_Pos           _UINT8_(0)                                           /* (SERCOM_I2CM_INTENSET) Master On Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_MB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_MB_Pos)        /* (SERCOM_I2CM_INTENSET) Master On Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_MB(value)        (SERCOM_I2CM_INTENSET_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_MB_Pos)) /* Assigment of value for MB in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_SB_Pos           _UINT8_(1)                                           /* (SERCOM_I2CM_INTENSET) Slave On Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_SB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_SB_Pos)        /* (SERCOM_I2CM_INTENSET) Slave On Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_SB(value)        (SERCOM_I2CM_INTENSET_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_SB_Pos)) /* Assigment of value for SB in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CM_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_ERROR_Pos)     /* (SERCOM_I2CM_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_ERROR(value)     (SERCOM_I2CM_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_Msk              _UINT8_(0x83)                                        /* (SERCOM_I2CM_INTENSET) Register Mask  */


/* -------- SERCOM_I2CS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CS Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PREC:1;           /*!< bit:      0  Stop Received Interrupt Enable     */
    uint8_t  AMATCH:1;         /*!< bit:      1  Address Match Interrupt Enable     */
    uint8_t  DRDY:1;           /*!< bit:      2  Data Interrupt Enable              */
    uint8_t  :4;               /*!< bit:  3.. 6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CS_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set  Reset Value */

#define SERCOM_I2CS_INTENSET_PREC_Pos         _UINT8_(0)                                           /* (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_PREC_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_PREC_Pos)      /* (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_PREC(value)      (SERCOM_I2CS_INTENSET_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_PREC_Pos)) /* Assigment of value for PREC in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_AMATCH_Pos       _UINT8_(1)                                           /* (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_AMATCH_Msk       (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_AMATCH_Pos)    /* (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_AMATCH(value)    (SERCOM_I2CS_INTENSET_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_AMATCH_Pos)) /* Assigment of value for AMATCH in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_DRDY_Pos         _UINT8_(2)                                           /* (SERCOM_I2CS_INTENSET) Data Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_DRDY_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_DRDY_Pos)      /* (SERCOM_I2CS_INTENSET) Data Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_DRDY(value)      (SERCOM_I2CS_INTENSET_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_DRDY_Pos)) /* Assigment of value for DRDY in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CS_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_ERROR_Pos)     /* (SERCOM_I2CS_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_ERROR(value)     (SERCOM_I2CS_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_Msk              _UINT8_(0x87)                                        /* (SERCOM_I2CS_INTENSET) Register Mask  */


/* -------- SERCOM_SPIM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPIM Interrupt Enable Set -------- */
#define SERCOM_SPIM_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIM_INTENSET) SPIM Interrupt Enable Set  Reset Value */

#define SERCOM_SPIM_INTENSET_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIM_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_DRE_Pos)       /* (SERCOM_SPIM_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_DRE(value)       (SERCOM_SPIM_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIM_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_TXC_Pos)       /* (SERCOM_SPIM_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_TXC(value)       (SERCOM_SPIM_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIM_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_RXC_Pos)       /* (SERCOM_SPIM_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_RXC(value)       (SERCOM_SPIM_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIM_INTENSET) Slave Select Low Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_SSL_Pos)       /* (SERCOM_SPIM_INTENSET) Slave Select Low Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_SSL(value)       (SERCOM_SPIM_INTENSET_SSL_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_SSL_Pos)) /* Assigment of value for SSL in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIM_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_ERROR_Pos)     /* (SERCOM_SPIM_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_ERROR(value)     (SERCOM_SPIM_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIM_INTENSET) Register Mask  */


/* -------- SERCOM_SPIS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPIS Interrupt Enable Set -------- */
#define SERCOM_SPIS_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIS_INTENSET) SPIS Interrupt Enable Set  Reset Value */

#define SERCOM_SPIS_INTENSET_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIS_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_DRE_Pos)       /* (SERCOM_SPIS_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_DRE(value)       (SERCOM_SPIS_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIS_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_TXC_Pos)       /* (SERCOM_SPIS_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_TXC(value)       (SERCOM_SPIS_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIS_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_RXC_Pos)       /* (SERCOM_SPIS_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_RXC(value)       (SERCOM_SPIS_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIS_INTENSET) Slave Select Low Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_SSL_Pos)       /* (SERCOM_SPIS_INTENSET) Slave Select Low Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_SSL(value)       (SERCOM_SPIS_INTENSET_SSL_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_SSL_Pos)) /* Assigment of value for SSL in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIS_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_ERROR_Pos)     /* (SERCOM_SPIS_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_ERROR(value)     (SERCOM_SPIS_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIS_INTENSET) Register Mask  */

/* -------- SERCOM_SPI_INTENSET : (SERCOM Offset: 0x16) (R/W  8) SPI SPI Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DRE:1;            /*!< bit:      0  Data Register Empty Interrupt Enable */
    uint8_t  TXC:1;            /*!< bit:      1  Transmit Complete Interrupt Enable */
    uint8_t  RXC:1;            /*!< bit:      2  Receive Complete Interrupt Enable  */
    uint8_t  SSL:1;            /*!< bit:      3  Slave Select Low Interrupt Enable  */
    uint8_t  :3;               /*!< bit:  4.. 6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_SPI_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_INTENSET_OFFSET  0x16         /**< \brief (SERCOM_SPI_INTENSET offset) SPI Interrupt Enable Set */
#define SERCOM_SPI_INTENSET_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_SPI_INTENSET reset_value) SPI Interrupt Enable Set */

#define SERCOM_SPI_INTENSET_DRE_Pos 0            /**< \brief (SERCOM_SPI_INTENSET) Data Register Empty Interrupt Enable */
#define SERCOM_SPI_INTENSET_DRE     (_U_(0x1) << SERCOM_SPI_INTENSET_DRE_Pos)
#define SERCOM_SPI_INTENSET_TXC_Pos 1            /**< \brief (SERCOM_SPI_INTENSET) Transmit Complete Interrupt Enable */
#define SERCOM_SPI_INTENSET_TXC     (_U_(0x1) << SERCOM_SPI_INTENSET_TXC_Pos)
#define SERCOM_SPI_INTENSET_RXC_Pos 2            /**< \brief (SERCOM_SPI_INTENSET) Receive Complete Interrupt Enable */
#define SERCOM_SPI_INTENSET_RXC     (_U_(0x1) << SERCOM_SPI_INTENSET_RXC_Pos)
#define SERCOM_SPI_INTENSET_SSL_Pos 3            /**< \brief (SERCOM_SPI_INTENSET) Slave Select Low Interrupt Enable */
#define SERCOM_SPI_INTENSET_SSL     (_U_(0x1) << SERCOM_SPI_INTENSET_SSL_Pos)
#define SERCOM_SPI_INTENSET_ERROR_Pos 7            /**< \brief (SERCOM_SPI_INTENSET) Combined Error Interrupt Enable */
#define SERCOM_SPI_INTENSET_ERROR   (_U_(0x1) << SERCOM_SPI_INTENSET_ERROR_Pos)
#define SERCOM_SPI_INTENSET_MASK    _U_(0x8F)    /**< \brief (SERCOM_SPI_INTENSET) MASK Register */


/* -------- SERCOM_USART_EXT_INTENSET : (SERCOM Offset: 0x16) (R/W 8) USART_EXT Interrupt Enable Set -------- */
#define SERCOM_USART_EXT_INTENSET_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_EXT_INTENSET) USART_EXT Interrupt Enable Set  Reset Value */

#define SERCOM_USART_EXT_INTENSET_DRE_Pos     _UINT8_(0)                                           /* (SERCOM_USART_EXT_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_DRE_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_DRE_Pos)  /* (SERCOM_USART_EXT_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_DRE(value)  (SERCOM_USART_EXT_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_TXC_Pos     _UINT8_(1)                                           /* (SERCOM_USART_EXT_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_TXC_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_TXC_Pos)  /* (SERCOM_USART_EXT_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_TXC(value)  (SERCOM_USART_EXT_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_RXC_Pos     _UINT8_(2)                                           /* (SERCOM_USART_EXT_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_RXC_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_RXC_Pos)  /* (SERCOM_USART_EXT_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_RXC(value)  (SERCOM_USART_EXT_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_RXS_Pos     _UINT8_(3)                                           /* (SERCOM_USART_EXT_INTENSET) Receive Start Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_RXS_Msk     (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_RXS_Pos)  /* (SERCOM_USART_EXT_INTENSET) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_RXS(value)  (SERCOM_USART_EXT_INTENSET_RXS_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_RXS_Pos)) /* Assigment of value for RXS in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_CTSIC_Pos   _UINT8_(4)                                           /* (SERCOM_USART_EXT_INTENSET) Clear To Send Input Change Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_CTSIC_Msk   (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_CTSIC_Pos) /* (SERCOM_USART_EXT_INTENSET) Clear To Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_CTSIC(value) (SERCOM_USART_EXT_INTENSET_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_CTSIC_Pos)) /* Assigment of value for CTSIC in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_RXBRK_Pos   _UINT8_(5)                                           /* (SERCOM_USART_EXT_INTENSET) Break Received Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_RXBRK_Msk   (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_RXBRK_Pos) /* (SERCOM_USART_EXT_INTENSET) Break Received Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_RXBRK(value) (SERCOM_USART_EXT_INTENSET_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_RXBRK_Pos)) /* Assigment of value for RXBRK in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_ERROR_Pos   _UINT8_(7)                                           /* (SERCOM_USART_EXT_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_ERROR_Msk   (_UINT8_(0x1) << SERCOM_USART_EXT_INTENSET_ERROR_Pos) /* (SERCOM_USART_EXT_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_ERROR(value) (SERCOM_USART_EXT_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTENSET_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_USART_EXT_INTENSET register */
#define SERCOM_USART_EXT_INTENSET_Msk         _UINT8_(0xBF)                                        /* (SERCOM_USART_EXT_INTENSET) Register Mask  */


/* -------- SERCOM_USART_INT_INTENSET : (SERCOM Offset: 0x16) (R/W 8) USART_INT Interrupt Enable Set -------- */
#define SERCOM_USART_INT_INTENSET_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_INTENSET) USART_INT Interrupt Enable Set  Reset Value */

#define SERCOM_USART_INT_INTENSET_DRE_Pos     _UINT8_(0)                                           /* (SERCOM_USART_INT_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_DRE_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_DRE_Pos)  /* (SERCOM_USART_INT_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_DRE(value)  (SERCOM_USART_INT_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_TXC_Pos     _UINT8_(1)                                           /* (SERCOM_USART_INT_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_TXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_TXC_Pos)  /* (SERCOM_USART_INT_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_TXC(value)  (SERCOM_USART_INT_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_RXC_Pos     _UINT8_(2)                                           /* (SERCOM_USART_INT_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_RXC_Pos)  /* (SERCOM_USART_INT_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXC(value)  (SERCOM_USART_INT_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_RXS_Pos     _UINT8_(3)                                           /* (SERCOM_USART_INT_INTENSET) Receive Start Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXS_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_RXS_Pos)  /* (SERCOM_USART_INT_INTENSET) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXS(value)  (SERCOM_USART_INT_INTENSET_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_RXS_Pos)) /* Assigment of value for RXS in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_CTSIC_Pos   _UINT8_(4)                                           /* (SERCOM_USART_INT_INTENSET) Clear To Send Input Change Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_CTSIC_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_CTSIC_Pos) /* (SERCOM_USART_INT_INTENSET) Clear To Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_CTSIC(value) (SERCOM_USART_INT_INTENSET_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_CTSIC_Pos)) /* Assigment of value for CTSIC in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_RXBRK_Pos   _UINT8_(5)                                           /* (SERCOM_USART_INT_INTENSET) Break Received Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXBRK_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_RXBRK_Pos) /* (SERCOM_USART_INT_INTENSET) Break Received Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXBRK(value) (SERCOM_USART_INT_INTENSET_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_RXBRK_Pos)) /* Assigment of value for RXBRK in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_ERROR_Pos   _UINT8_(7)                                           /* (SERCOM_USART_INT_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_ERROR_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_ERROR_Pos) /* (SERCOM_USART_INT_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_ERROR(value) (SERCOM_USART_INT_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_Msk         _UINT8_(0xBF)                                        /* (SERCOM_USART_INT_INTENSET) Register Mask  */

/* -------- SERCOM_USART_INTENSET : (SERCOM Offset: 0x16) (R/W  8) USART USART Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DRE:1;            /*!< bit:      0  Data Register Empty Interrupt Enable */
    uint8_t  TXC:1;            /*!< bit:      1  Transmit Complete Interrupt Enable */
    uint8_t  RXC:1;            /*!< bit:      2  Receive Complete Interrupt Enable  */
    uint8_t  RXS:1;            /*!< bit:      3  Receive Start Interrupt Enable     */
    uint8_t  CTSIC:1;          /*!< bit:      4  Clear To Send Input Change Interrupt Enable */
    uint8_t  RXBRK:1;          /*!< bit:      5  Break Received Interrupt Enable    */
    uint8_t  :1;               /*!< bit:      6  Reserved                           */
    uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_USART_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INTENSET_OFFSET 0x16         /**< \brief (SERCOM_USART_INTENSET offset) USART Interrupt Enable Set */
#define SERCOM_USART_INTENSET_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_USART_INTENSET reset_value) USART Interrupt Enable Set */

#define SERCOM_USART_INTENSET_DRE_Pos 0            /**< \brief (SERCOM_USART_INTENSET) Data Register Empty Interrupt Enable */
#define SERCOM_USART_INTENSET_DRE   (_U_(0x1) << SERCOM_USART_INTENSET_DRE_Pos)
#define SERCOM_USART_INTENSET_TXC_Pos 1            /**< \brief (SERCOM_USART_INTENSET) Transmit Complete Interrupt Enable */
#define SERCOM_USART_INTENSET_TXC   (_U_(0x1) << SERCOM_USART_INTENSET_TXC_Pos)
#define SERCOM_USART_INTENSET_RXC_Pos 2            /**< \brief (SERCOM_USART_INTENSET) Receive Complete Interrupt Enable */
#define SERCOM_USART_INTENSET_RXC   (_U_(0x1) << SERCOM_USART_INTENSET_RXC_Pos)
#define SERCOM_USART_INTENSET_RXS_Pos 3            /**< \brief (SERCOM_USART_INTENSET) Receive Start Interrupt Enable */
#define SERCOM_USART_INTENSET_RXS   (_U_(0x1) << SERCOM_USART_INTENSET_RXS_Pos)
#define SERCOM_USART_INTENSET_CTSIC_Pos 4            /**< \brief (SERCOM_USART_INTENSET) Clear To Send Input Change Interrupt Enable */
#define SERCOM_USART_INTENSET_CTSIC (_U_(0x1) << SERCOM_USART_INTENSET_CTSIC_Pos)
#define SERCOM_USART_INTENSET_RXBRK_Pos 5            /**< \brief (SERCOM_USART_INTENSET) Break Received Interrupt Enable */
#define SERCOM_USART_INTENSET_RXBRK (_U_(0x1) << SERCOM_USART_INTENSET_RXBRK_Pos)
#define SERCOM_USART_INTENSET_ERROR_Pos 7            /**< \brief (SERCOM_USART_INTENSET) Combined Error Interrupt Enable */
#define SERCOM_USART_INTENSET_ERROR (_U_(0x1) << SERCOM_USART_INTENSET_ERROR_Pos)
#define SERCOM_USART_INTENSET_MASK  _U_(0xBF)    /**< \brief (SERCOM_USART_INTENSET) MASK Register */


/* -------- SERCOM_I2CM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CM Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  MB:1;             /*!< bit:      0  Master On Bus Interrupt            */
    __I uint8_t  SB:1;             /*!< bit:      1  Slave On Bus Interrupt             */
    __I uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    __I uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CM_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CM_INTFLAG_MB_Pos            _UINT8_(0)                                           /* (SERCOM_I2CM_INTFLAG) Master On Bus Interrupt Position */
#define SERCOM_I2CM_INTFLAG_MB_Msk            (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_MB_Pos)         /* (SERCOM_I2CM_INTFLAG) Master On Bus Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_MB(value)         (SERCOM_I2CM_INTFLAG_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_MB_Pos)) /* Assigment of value for MB in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_SB_Pos            _UINT8_(1)                                           /* (SERCOM_I2CM_INTFLAG) Slave On Bus Interrupt Position */
#define SERCOM_I2CM_INTFLAG_SB_Msk            (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_SB_Pos)         /* (SERCOM_I2CM_INTFLAG) Slave On Bus Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_SB(value)         (SERCOM_I2CM_INTFLAG_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_SB_Pos)) /* Assigment of value for SB in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_I2CM_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_I2CM_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_ERROR_Pos)      /* (SERCOM_I2CM_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_ERROR(value)      (SERCOM_I2CM_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_Msk               _UINT8_(0x83)                                        /* (SERCOM_I2CM_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CS Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  PREC:1;           /*!< bit:      0  Stop Received Interrupt            */
    __I uint8_t  AMATCH:1;         /*!< bit:      1  Address Match Interrupt            */
    __I uint8_t  DRDY:1;           /*!< bit:      2  Data Interrupt                     */
    __I uint8_t  :4;               /*!< bit:  3.. 6  Reserved                           */
    __I uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CS_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CS_INTFLAG_PREC_Pos          _UINT8_(0)                                           /* (SERCOM_I2CS_INTFLAG) Stop Received Interrupt Position */
#define SERCOM_I2CS_INTFLAG_PREC_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_PREC_Pos)       /* (SERCOM_I2CS_INTFLAG) Stop Received Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_PREC(value)       (SERCOM_I2CS_INTFLAG_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_PREC_Pos)) /* Assigment of value for PREC in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_AMATCH_Pos        _UINT8_(1)                                           /* (SERCOM_I2CS_INTFLAG) Address Match Interrupt Position */
#define SERCOM_I2CS_INTFLAG_AMATCH_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)     /* (SERCOM_I2CS_INTFLAG) Address Match Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_AMATCH(value)     (SERCOM_I2CS_INTFLAG_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)) /* Assigment of value for AMATCH in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_DRDY_Pos          _UINT8_(2)                                           /* (SERCOM_I2CS_INTFLAG) Data Interrupt Position */
#define SERCOM_I2CS_INTFLAG_DRDY_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_DRDY_Pos)       /* (SERCOM_I2CS_INTFLAG) Data Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_DRDY(value)       (SERCOM_I2CS_INTFLAG_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_DRDY_Pos)) /* Assigment of value for DRDY in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_I2CS_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_I2CS_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_ERROR_Pos)      /* (SERCOM_I2CS_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_ERROR(value)      (SERCOM_I2CS_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_Msk               _UINT8_(0x87)                                        /* (SERCOM_I2CS_INTFLAG) Register Mask  */


/* -------- SERCOM_SPIM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPIM Interrupt Flag Status and Clear -------- */
#define SERCOM_SPIM_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIM_INTFLAG) SPIM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPIM_INTFLAG_DRE_Pos           _UINT8_(0)                                           /* (SERCOM_SPIM_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_SPIM_INTFLAG_DRE_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_DRE_Pos)        /* (SERCOM_SPIM_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_DRE(value)        (SERCOM_SPIM_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_TXC_Pos           _UINT8_(1)                                           /* (SERCOM_SPIM_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_SPIM_INTFLAG_TXC_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_TXC_Pos)        /* (SERCOM_SPIM_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_TXC(value)        (SERCOM_SPIM_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_RXC_Pos           _UINT8_(2)                                           /* (SERCOM_SPIM_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_SPIM_INTFLAG_RXC_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_RXC_Pos)        /* (SERCOM_SPIM_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_RXC(value)        (SERCOM_SPIM_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_SSL_Pos           _UINT8_(3)                                           /* (SERCOM_SPIM_INTFLAG) Slave Select Low Interrupt Flag Position */
#define SERCOM_SPIM_INTFLAG_SSL_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_SSL_Pos)        /* (SERCOM_SPIM_INTFLAG) Slave Select Low Interrupt Flag Mask */
#define SERCOM_SPIM_INTFLAG_SSL(value)        (SERCOM_SPIM_INTFLAG_SSL_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_SSL_Pos)) /* Assigment of value for SSL in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_SPIM_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_SPIM_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_ERROR_Pos)      /* (SERCOM_SPIM_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_ERROR(value)      (SERCOM_SPIM_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_Msk               _UINT8_(0x8F)                                        /* (SERCOM_SPIM_INTFLAG) Register Mask  */


/* -------- SERCOM_SPIS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPIS Interrupt Flag Status and Clear -------- */
#define SERCOM_SPIS_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIS_INTFLAG) SPIS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPIS_INTFLAG_DRE_Pos           _UINT8_(0)                                           /* (SERCOM_SPIS_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_SPIS_INTFLAG_DRE_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_DRE_Pos)        /* (SERCOM_SPIS_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_DRE(value)        (SERCOM_SPIS_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_TXC_Pos           _UINT8_(1)                                           /* (SERCOM_SPIS_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_SPIS_INTFLAG_TXC_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_TXC_Pos)        /* (SERCOM_SPIS_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_TXC(value)        (SERCOM_SPIS_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_RXC_Pos           _UINT8_(2)                                           /* (SERCOM_SPIS_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_SPIS_INTFLAG_RXC_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_RXC_Pos)        /* (SERCOM_SPIS_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_RXC(value)        (SERCOM_SPIS_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_SSL_Pos           _UINT8_(3)                                           /* (SERCOM_SPIS_INTFLAG) Slave Select Low Interrupt Flag Position */
#define SERCOM_SPIS_INTFLAG_SSL_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_SSL_Pos)        /* (SERCOM_SPIS_INTFLAG) Slave Select Low Interrupt Flag Mask */
#define SERCOM_SPIS_INTFLAG_SSL(value)        (SERCOM_SPIS_INTFLAG_SSL_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_SSL_Pos)) /* Assigment of value for SSL in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_SPIS_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_SPIS_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_ERROR_Pos)      /* (SERCOM_SPIS_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_ERROR(value)      (SERCOM_SPIS_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_Msk               _UINT8_(0x8F)                                        /* (SERCOM_SPIS_INTFLAG) Register Mask  */

/* -------- SERCOM_SPI_INTFLAG : (SERCOM Offset: 0x18) (R/W  8) SPI SPI Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  DRE:1;            /*!< bit:      0  Data Register Empty Interrupt      */
    __I uint8_t  TXC:1;            /*!< bit:      1  Transmit Complete Interrupt        */
    __I uint8_t  RXC:1;            /*!< bit:      2  Receive Complete Interrupt         */
    __I uint8_t  SSL:1;            /*!< bit:      3  Slave Select Low Interrupt Flag    */
    __I uint8_t  :3;               /*!< bit:  4.. 6  Reserved                           */
    __I uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_SPI_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_INTFLAG_OFFSET   0x18         /**< \brief (SERCOM_SPI_INTFLAG offset) SPI Interrupt Flag Status and Clear */
#define SERCOM_SPI_INTFLAG_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_SPI_INTFLAG reset_value) SPI Interrupt Flag Status and Clear */

#define SERCOM_SPI_INTFLAG_DRE_Pos  0            /**< \brief (SERCOM_SPI_INTFLAG) Data Register Empty Interrupt */
#define SERCOM_SPI_INTFLAG_DRE      (_U_(0x1) << SERCOM_SPI_INTFLAG_DRE_Pos)
#define SERCOM_SPI_INTFLAG_TXC_Pos  1            /**< \brief (SERCOM_SPI_INTFLAG) Transmit Complete Interrupt */
#define SERCOM_SPI_INTFLAG_TXC      (_U_(0x1) << SERCOM_SPI_INTFLAG_TXC_Pos)
#define SERCOM_SPI_INTFLAG_RXC_Pos  2            /**< \brief (SERCOM_SPI_INTFLAG) Receive Complete Interrupt */
#define SERCOM_SPI_INTFLAG_RXC      (_U_(0x1) << SERCOM_SPI_INTFLAG_RXC_Pos)
#define SERCOM_SPI_INTFLAG_SSL_Pos  3            /**< \brief (SERCOM_SPI_INTFLAG) Slave Select Low Interrupt Flag */
#define SERCOM_SPI_INTFLAG_SSL      (_U_(0x1) << SERCOM_SPI_INTFLAG_SSL_Pos)
#define SERCOM_SPI_INTFLAG_ERROR_Pos 7            /**< \brief (SERCOM_SPI_INTFLAG) Combined Error Interrupt */
#define SERCOM_SPI_INTFLAG_ERROR    (_U_(0x1) << SERCOM_SPI_INTFLAG_ERROR_Pos)
#define SERCOM_SPI_INTFLAG_MASK     _U_(0x8F)    /**< \brief (SERCOM_SPI_INTFLAG) MASK Register */


/* -------- SERCOM_USART_EXT_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) USART_EXT Interrupt Flag Status and Clear -------- */
#define SERCOM_USART_EXT_INTFLAG_RESETVALUE   _UINT8_(0x00)                                        /*  (SERCOM_USART_EXT_INTFLAG) USART_EXT Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_USART_EXT_INTFLAG_DRE_Pos      _UINT8_(0)                                           /* (SERCOM_USART_EXT_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_DRE_Msk      (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_DRE_Pos)   /* (SERCOM_USART_EXT_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_DRE(value)   (SERCOM_USART_EXT_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_TXC_Pos      _UINT8_(1)                                           /* (SERCOM_USART_EXT_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_TXC_Msk      (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_TXC_Pos)   /* (SERCOM_USART_EXT_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_TXC(value)   (SERCOM_USART_EXT_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_RXC_Pos      _UINT8_(2)                                           /* (SERCOM_USART_EXT_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_RXC_Msk      (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_RXC_Pos)   /* (SERCOM_USART_EXT_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_RXC(value)   (SERCOM_USART_EXT_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_RXS_Pos      _UINT8_(3)                                           /* (SERCOM_USART_EXT_INTFLAG) Receive Start Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_RXS_Msk      (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_RXS_Pos)   /* (SERCOM_USART_EXT_INTFLAG) Receive Start Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_RXS(value)   (SERCOM_USART_EXT_INTFLAG_RXS_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_RXS_Pos)) /* Assigment of value for RXS in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_CTSIC_Pos    _UINT8_(4)                                           /* (SERCOM_USART_EXT_INTFLAG) Clear To Send Input Change Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_CTSIC_Msk    (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_CTSIC_Pos) /* (SERCOM_USART_EXT_INTFLAG) Clear To Send Input Change Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_CTSIC(value) (SERCOM_USART_EXT_INTFLAG_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_CTSIC_Pos)) /* Assigment of value for CTSIC in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_RXBRK_Pos    _UINT8_(5)                                           /* (SERCOM_USART_EXT_INTFLAG) Break Received Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_RXBRK_Msk    (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_RXBRK_Pos) /* (SERCOM_USART_EXT_INTFLAG) Break Received Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_RXBRK(value) (SERCOM_USART_EXT_INTFLAG_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_RXBRK_Pos)) /* Assigment of value for RXBRK in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_ERROR_Pos    _UINT8_(7)                                           /* (SERCOM_USART_EXT_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_ERROR_Msk    (_UINT8_(0x1) << SERCOM_USART_EXT_INTFLAG_ERROR_Pos) /* (SERCOM_USART_EXT_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_ERROR(value) (SERCOM_USART_EXT_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_EXT_INTFLAG_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_USART_EXT_INTFLAG register */
#define SERCOM_USART_EXT_INTFLAG_Msk          _UINT8_(0xBF)                                        /* (SERCOM_USART_EXT_INTFLAG) Register Mask  */


/* -------- SERCOM_USART_INT_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) USART_INT Interrupt Flag Status and Clear -------- */
#define SERCOM_USART_INT_INTFLAG_RESETVALUE   _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_INTFLAG) USART_INT Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_USART_INT_INTFLAG_DRE_Pos      _UINT8_(0)                                           /* (SERCOM_USART_INT_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_DRE_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_DRE_Pos)   /* (SERCOM_USART_INT_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_DRE(value)   (SERCOM_USART_INT_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_DRE_Pos)) /* Assigment of value for DRE in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_TXC_Pos      _UINT8_(1)                                           /* (SERCOM_USART_INT_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_TXC_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_TXC_Pos)   /* (SERCOM_USART_INT_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_TXC(value)   (SERCOM_USART_INT_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_TXC_Pos)) /* Assigment of value for TXC in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_RXC_Pos      _UINT8_(2)                                           /* (SERCOM_USART_INT_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXC_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_RXC_Pos)   /* (SERCOM_USART_INT_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXC(value)   (SERCOM_USART_INT_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_RXC_Pos)) /* Assigment of value for RXC in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_RXS_Pos      _UINT8_(3)                                           /* (SERCOM_USART_INT_INTFLAG) Receive Start Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXS_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_RXS_Pos)   /* (SERCOM_USART_INT_INTFLAG) Receive Start Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXS(value)   (SERCOM_USART_INT_INTFLAG_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_RXS_Pos)) /* Assigment of value for RXS in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_CTSIC_Pos    _UINT8_(4)                                           /* (SERCOM_USART_INT_INTFLAG) Clear To Send Input Change Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_CTSIC_Msk    (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_CTSIC_Pos) /* (SERCOM_USART_INT_INTFLAG) Clear To Send Input Change Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_CTSIC(value) (SERCOM_USART_INT_INTFLAG_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_CTSIC_Pos)) /* Assigment of value for CTSIC in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_RXBRK_Pos    _UINT8_(5)                                           /* (SERCOM_USART_INT_INTFLAG) Break Received Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXBRK_Msk    (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_RXBRK_Pos) /* (SERCOM_USART_INT_INTFLAG) Break Received Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXBRK(value) (SERCOM_USART_INT_INTFLAG_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_RXBRK_Pos)) /* Assigment of value for RXBRK in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_ERROR_Pos    _UINT8_(7)                                           /* (SERCOM_USART_INT_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_ERROR_Msk    (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_ERROR_Pos) /* (SERCOM_USART_INT_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_ERROR(value) (SERCOM_USART_INT_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_ERROR_Pos)) /* Assigment of value for ERROR in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_Msk          _UINT8_(0xBF)                                        /* (SERCOM_USART_INT_INTFLAG) Register Mask  */

/* -------- SERCOM_USART_INTFLAG : (SERCOM Offset: 0x18) (R/W  8) USART USART Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  DRE:1;            /*!< bit:      0  Data Register Empty Interrupt      */
    __I uint8_t  TXC:1;            /*!< bit:      1  Transmit Complete Interrupt        */
    __I uint8_t  RXC:1;            /*!< bit:      2  Receive Complete Interrupt         */
    __I uint8_t  RXS:1;            /*!< bit:      3  Receive Start Interrupt            */
    __I uint8_t  CTSIC:1;          /*!< bit:      4  Clear To Send Input Change Interrupt */
    __I uint8_t  RXBRK:1;          /*!< bit:      5  Break Received Interrupt           */
    __I uint8_t  :1;               /*!< bit:      6  Reserved                           */
    __I uint8_t  ERROR:1;          /*!< bit:      7  Combined Error Interrupt           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_USART_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INTFLAG_OFFSET 0x18         /**< \brief (SERCOM_USART_INTFLAG offset) USART Interrupt Flag Status and Clear */
#define SERCOM_USART_INTFLAG_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_USART_INTFLAG reset_value) USART Interrupt Flag Status and Clear */

#define SERCOM_USART_INTFLAG_DRE_Pos 0            /**< \brief (SERCOM_USART_INTFLAG) Data Register Empty Interrupt */
#define SERCOM_USART_INTFLAG_DRE    (_U_(0x1) << SERCOM_USART_INTFLAG_DRE_Pos)
#define SERCOM_USART_INTFLAG_TXC_Pos 1            /**< \brief (SERCOM_USART_INTFLAG) Transmit Complete Interrupt */
#define SERCOM_USART_INTFLAG_TXC    (_U_(0x1) << SERCOM_USART_INTFLAG_TXC_Pos)
#define SERCOM_USART_INTFLAG_RXC_Pos 2            /**< \brief (SERCOM_USART_INTFLAG) Receive Complete Interrupt */
#define SERCOM_USART_INTFLAG_RXC    (_U_(0x1) << SERCOM_USART_INTFLAG_RXC_Pos)
#define SERCOM_USART_INTFLAG_RXS_Pos 3            /**< \brief (SERCOM_USART_INTFLAG) Receive Start Interrupt */
#define SERCOM_USART_INTFLAG_RXS    (_U_(0x1) << SERCOM_USART_INTFLAG_RXS_Pos)
#define SERCOM_USART_INTFLAG_CTSIC_Pos 4            /**< \brief (SERCOM_USART_INTFLAG) Clear To Send Input Change Interrupt */
#define SERCOM_USART_INTFLAG_CTSIC  (_U_(0x1) << SERCOM_USART_INTFLAG_CTSIC_Pos)
#define SERCOM_USART_INTFLAG_RXBRK_Pos 5            /**< \brief (SERCOM_USART_INTFLAG) Break Received Interrupt */
#define SERCOM_USART_INTFLAG_RXBRK  (_U_(0x1) << SERCOM_USART_INTFLAG_RXBRK_Pos)
#define SERCOM_USART_INTFLAG_ERROR_Pos 7            /**< \brief (SERCOM_USART_INTFLAG) Combined Error Interrupt */
#define SERCOM_USART_INTFLAG_ERROR  (_U_(0x1) << SERCOM_USART_INTFLAG_ERROR_Pos)
#define SERCOM_USART_INTFLAG_MASK   _U_(0xBF)    /**< \brief (SERCOM_USART_INTFLAG) MASK Register */



/* -------- SERCOM_I2CM_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CM Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t BUSERR:1;         /*!< bit:      0  Bus Error                          */
    uint16_t ARBLOST:1;        /*!< bit:      1  Arbitration Lost                   */
    uint16_t RXNACK:1;         /*!< bit:      2  Received Not Acknowledge           */
    uint16_t :1;               /*!< bit:      3  Reserved                           */
    uint16_t BUSSTATE:2;       /*!< bit:  4.. 5  Bus State                          */
    uint16_t LOWTOUT:1;        /*!< bit:      6  SCL Low Timeout                    */
    uint16_t CLKHOLD:1;        /*!< bit:      7  Clock Hold                         */
    uint16_t MEXTTOUT:1;       /*!< bit:      8  Master SCL Low Extend Timeout      */
    uint16_t SEXTTOUT:1;       /*!< bit:      9  Slave SCL Low Extend Timeout       */
    uint16_t LENERR:1;         /*!< bit:     10  Length Error                       */
    uint16_t :5;               /*!< bit: 11..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CM_STATUS) I2CM Status  Reset Value */

#define SERCOM_I2CM_STATUS_BUSERR_Pos         _UINT16_(0)                                          /* (SERCOM_I2CM_STATUS) Bus Error Position */
#define SERCOM_I2CM_STATUS_BUSERR_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_BUSERR_Pos)     /* (SERCOM_I2CM_STATUS) Bus Error Mask */
#define SERCOM_I2CM_STATUS_BUSERR(value)      (SERCOM_I2CM_STATUS_BUSERR_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_BUSERR_Pos)) /* Assigment of value for BUSERR in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_ARBLOST_Pos        _UINT16_(1)                                          /* (SERCOM_I2CM_STATUS) Arbitration Lost Position */
#define SERCOM_I2CM_STATUS_ARBLOST_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_ARBLOST_Pos)    /* (SERCOM_I2CM_STATUS) Arbitration Lost Mask */
#define SERCOM_I2CM_STATUS_ARBLOST(value)     (SERCOM_I2CM_STATUS_ARBLOST_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_ARBLOST_Pos)) /* Assigment of value for ARBLOST in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_RXNACK_Pos         _UINT16_(2)                                          /* (SERCOM_I2CM_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CM_STATUS_RXNACK_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_RXNACK_Pos)     /* (SERCOM_I2CM_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CM_STATUS_RXNACK(value)      (SERCOM_I2CM_STATUS_RXNACK_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_RXNACK_Pos)) /* Assigment of value for RXNACK in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_BUSSTATE_Pos       _UINT16_(4)                                          /* (SERCOM_I2CM_STATUS) Bus State Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_Msk       (_UINT16_(0x3) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)   /* (SERCOM_I2CM_STATUS) Bus State Mask */
#define SERCOM_I2CM_STATUS_BUSSTATE(value)    (SERCOM_I2CM_STATUS_BUSSTATE_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)) /* Assigment of value for BUSSTATE in the SERCOM_I2CM_STATUS register */
#define   SERCOM_I2CM_STATUS_BUSSTATE_UNKNOWN_Val _UINT16_(0x0)                                        /* (SERCOM_I2CM_STATUS) The Bus state is unknown to the I2C Host  */
#define   SERCOM_I2CM_STATUS_BUSSTATE_IDLE_Val _UINT16_(0x1)                                        /* (SERCOM_I2CM_STATUS) The Bus state is waiting for a transaction to be initialized  */
#define   SERCOM_I2CM_STATUS_BUSSTATE_OWNER_Val _UINT16_(0x2)                                        /* (SERCOM_I2CM_STATUS) The I2C Host is the current owner of the bus  */
#define   SERCOM_I2CM_STATUS_BUSSTATE_BUSY_Val _UINT16_(0x3)                                        /* (SERCOM_I2CM_STATUS) Some other I2C Host owns the bus  */
#define SERCOM_I2CM_STATUS_BUSSTATE_UNKNOWN   (SERCOM_I2CM_STATUS_BUSSTATE_UNKNOWN_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) The Bus state is unknown to the I2C Host Position  */
#define SERCOM_I2CM_STATUS_BUSSTATE_IDLE      (SERCOM_I2CM_STATUS_BUSSTATE_IDLE_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) The Bus state is waiting for a transaction to be initialized Position  */
#define SERCOM_I2CM_STATUS_BUSSTATE_OWNER     (SERCOM_I2CM_STATUS_BUSSTATE_OWNER_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) The I2C Host is the current owner of the bus Position  */
#define SERCOM_I2CM_STATUS_BUSSTATE_BUSY      (SERCOM_I2CM_STATUS_BUSSTATE_BUSY_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) Some other I2C Host owns the bus Position  */
#define SERCOM_I2CM_STATUS_LOWTOUT_Pos        _UINT16_(6)                                          /* (SERCOM_I2CM_STATUS) SCL Low Timeout Position */
#define SERCOM_I2CM_STATUS_LOWTOUT_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)    /* (SERCOM_I2CM_STATUS) SCL Low Timeout Mask */
#define SERCOM_I2CM_STATUS_LOWTOUT(value)     (SERCOM_I2CM_STATUS_LOWTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)) /* Assigment of value for LOWTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_CLKHOLD_Pos        _UINT16_(7)                                          /* (SERCOM_I2CM_STATUS) Clock Hold Position */
#define SERCOM_I2CM_STATUS_CLKHOLD_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)    /* (SERCOM_I2CM_STATUS) Clock Hold Mask */
#define SERCOM_I2CM_STATUS_CLKHOLD(value)     (SERCOM_I2CM_STATUS_CLKHOLD_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)) /* Assigment of value for CLKHOLD in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Pos       _UINT16_(8)                                          /* (SERCOM_I2CM_STATUS) Master SCL Low Extend Timeout Position */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)   /* (SERCOM_I2CM_STATUS) Master SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_STATUS_MEXTTOUT(value)    (SERCOM_I2CM_STATUS_MEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)) /* Assigment of value for MEXTTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Pos       _UINT16_(9)                                          /* (SERCOM_I2CM_STATUS) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)   /* (SERCOM_I2CM_STATUS) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_STATUS_SEXTTOUT(value)    (SERCOM_I2CM_STATUS_SEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)) /* Assigment of value for SEXTTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_LENERR_Pos         _UINT16_(10)                                         /* (SERCOM_I2CM_STATUS) Length Error Position */
#define SERCOM_I2CM_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_LENERR_Pos)     /* (SERCOM_I2CM_STATUS) Length Error Mask */
#define SERCOM_I2CM_STATUS_LENERR(value)      (SERCOM_I2CM_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_LENERR_Pos)) /* Assigment of value for LENERR in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_Msk                _UINT16_(0x07F7)                                     /* (SERCOM_I2CM_STATUS) Register Mask  */


/* -------- SERCOM_I2CS_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CS Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t BUSERR:1;         /*!< bit:      0  Bus Error                          */
    uint16_t COLL:1;           /*!< bit:      1  Transmit Collision                 */
    uint16_t RXNACK:1;         /*!< bit:      2  Received Not Acknowledge           */
    uint16_t DIR:1;            /*!< bit:      3  Read/Write Direction               */
    uint16_t SR:1;             /*!< bit:      4  Repeated Start                     */
    uint16_t :1;               /*!< bit:      5  Reserved                           */
    uint16_t LOWTOUT:1;        /*!< bit:      6  SCL Low Timeout                    */
    uint16_t CLKHOLD:1;        /*!< bit:      7  Clock Hold                         */
    uint16_t :1;               /*!< bit:      8  Reserved                           */
    uint16_t SEXTTOUT:1;       /*!< bit:      9  Slave SCL Low Extend Timeout       */
    uint16_t HS:1;             /*!< bit:     10  High Speed                         */
    uint16_t LENERR:1;         /*!< bit:     11  Transaction Length Error           */
    uint16_t :4;               /*!< bit: 12..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CS_STATUS) I2CS Status  Reset Value */

#define SERCOM_I2CS_STATUS_BUSERR_Pos         _UINT16_(0)                                          /* (SERCOM_I2CS_STATUS) Bus Error Position */
#define SERCOM_I2CS_STATUS_BUSERR_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_BUSERR_Pos)     /* (SERCOM_I2CS_STATUS) Bus Error Mask */
#define SERCOM_I2CS_STATUS_BUSERR(value)      (SERCOM_I2CS_STATUS_BUSERR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_BUSERR_Pos)) /* Assigment of value for BUSERR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_COLL_Pos           _UINT16_(1)                                          /* (SERCOM_I2CS_STATUS) Transmit Collision Position */
#define SERCOM_I2CS_STATUS_COLL_Msk           (_UINT16_(0x1) << SERCOM_I2CS_STATUS_COLL_Pos)       /* (SERCOM_I2CS_STATUS) Transmit Collision Mask */
#define SERCOM_I2CS_STATUS_COLL(value)        (SERCOM_I2CS_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_COLL_Pos)) /* Assigment of value for COLL in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_RXNACK_Pos         _UINT16_(2)                                          /* (SERCOM_I2CS_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CS_STATUS_RXNACK_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_RXNACK_Pos)     /* (SERCOM_I2CS_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CS_STATUS_RXNACK(value)      (SERCOM_I2CS_STATUS_RXNACK_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_RXNACK_Pos)) /* Assigment of value for RXNACK in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_DIR_Pos            _UINT16_(3)                                          /* (SERCOM_I2CS_STATUS) Read/Write Direction Position */
#define SERCOM_I2CS_STATUS_DIR_Msk            (_UINT16_(0x1) << SERCOM_I2CS_STATUS_DIR_Pos)        /* (SERCOM_I2CS_STATUS) Read/Write Direction Mask */
#define SERCOM_I2CS_STATUS_DIR(value)         (SERCOM_I2CS_STATUS_DIR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_DIR_Pos)) /* Assigment of value for DIR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_SR_Pos             _UINT16_(4)                                          /* (SERCOM_I2CS_STATUS) Repeated Start Position */
#define SERCOM_I2CS_STATUS_SR_Msk             (_UINT16_(0x1) << SERCOM_I2CS_STATUS_SR_Pos)         /* (SERCOM_I2CS_STATUS) Repeated Start Mask */
#define SERCOM_I2CS_STATUS_SR(value)          (SERCOM_I2CS_STATUS_SR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_SR_Pos)) /* Assigment of value for SR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_LOWTOUT_Pos        _UINT16_(6)                                          /* (SERCOM_I2CS_STATUS) SCL Low Timeout Position */
#define SERCOM_I2CS_STATUS_LOWTOUT_Msk        (_UINT16_(0x1) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)    /* (SERCOM_I2CS_STATUS) SCL Low Timeout Mask */
#define SERCOM_I2CS_STATUS_LOWTOUT(value)     (SERCOM_I2CS_STATUS_LOWTOUT_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)) /* Assigment of value for LOWTOUT in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_CLKHOLD_Pos        _UINT16_(7)                                          /* (SERCOM_I2CS_STATUS) Clock Hold Position */
#define SERCOM_I2CS_STATUS_CLKHOLD_Msk        (_UINT16_(0x1) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)    /* (SERCOM_I2CS_STATUS) Clock Hold Mask */
#define SERCOM_I2CS_STATUS_CLKHOLD(value)     (SERCOM_I2CS_STATUS_CLKHOLD_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)) /* Assigment of value for CLKHOLD in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Pos       _UINT16_(9)                                          /* (SERCOM_I2CS_STATUS) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)   /* (SERCOM_I2CS_STATUS) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CS_STATUS_SEXTTOUT(value)    (SERCOM_I2CS_STATUS_SEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)) /* Assigment of value for SEXTTOUT in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_HS_Pos             _UINT16_(10)                                         /* (SERCOM_I2CS_STATUS) High Speed Position */
#define SERCOM_I2CS_STATUS_HS_Msk             (_UINT16_(0x1) << SERCOM_I2CS_STATUS_HS_Pos)         /* (SERCOM_I2CS_STATUS) High Speed Mask */
#define SERCOM_I2CS_STATUS_HS(value)          (SERCOM_I2CS_STATUS_HS_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_HS_Pos)) /* Assigment of value for HS in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_LENERR_Pos         _UINT16_(11)                                         /* (SERCOM_I2CS_STATUS) Transaction Length Error Position */
#define SERCOM_I2CS_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_LENERR_Pos)     /* (SERCOM_I2CS_STATUS) Transaction Length Error Mask */
#define SERCOM_I2CS_STATUS_LENERR(value)      (SERCOM_I2CS_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_LENERR_Pos)) /* Assigment of value for LENERR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_Msk                _UINT16_(0x0EDF)                                     /* (SERCOM_I2CS_STATUS) Register Mask  */


/* -------- SERCOM_SPIM_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPIM Status -------- */
#define SERCOM_SPIM_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIM_STATUS) SPIM Status  Reset Value */

#define SERCOM_SPIM_STATUS_BUFOVF_Pos         _UINT16_(2)                                          /* (SERCOM_SPIM_STATUS) Buffer Overflow Position */
#define SERCOM_SPIM_STATUS_BUFOVF_Msk         (_UINT16_(0x1) << SERCOM_SPIM_STATUS_BUFOVF_Pos)     /* (SERCOM_SPIM_STATUS) Buffer Overflow Mask */
#define SERCOM_SPIM_STATUS_BUFOVF(value)      (SERCOM_SPIM_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_SPIM_STATUS_BUFOVF_Pos)) /* Assigment of value for BUFOVF in the SERCOM_SPIM_STATUS register */
#define SERCOM_SPIM_STATUS_LENERR_Pos         _UINT16_(11)                                         /* (SERCOM_SPIM_STATUS) Transaction Length Error Position */
#define SERCOM_SPIM_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_SPIM_STATUS_LENERR_Pos)     /* (SERCOM_SPIM_STATUS) Transaction Length Error Mask */
#define SERCOM_SPIM_STATUS_LENERR(value)      (SERCOM_SPIM_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_SPIM_STATUS_LENERR_Pos)) /* Assigment of value for LENERR in the SERCOM_SPIM_STATUS register */
#define SERCOM_SPIM_STATUS_Msk                _UINT16_(0x0804)                                     /* (SERCOM_SPIM_STATUS) Register Mask  */


/* -------- SERCOM_SPIS_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPIS Status -------- */
#define SERCOM_SPIS_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIS_STATUS) SPIS Status  Reset Value */

#define SERCOM_SPIS_STATUS_BUFOVF_Pos         _UINT16_(2)                                          /* (SERCOM_SPIS_STATUS) Buffer Overflow Position */
#define SERCOM_SPIS_STATUS_BUFOVF_Msk         (_UINT16_(0x1) << SERCOM_SPIS_STATUS_BUFOVF_Pos)     /* (SERCOM_SPIS_STATUS) Buffer Overflow Mask */
#define SERCOM_SPIS_STATUS_BUFOVF(value)      (SERCOM_SPIS_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_SPIS_STATUS_BUFOVF_Pos)) /* Assigment of value for BUFOVF in the SERCOM_SPIS_STATUS register */
#define SERCOM_SPIS_STATUS_LENERR_Pos         _UINT16_(11)                                         /* (SERCOM_SPIS_STATUS) Transaction Length Error Position */
#define SERCOM_SPIS_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_SPIS_STATUS_LENERR_Pos)     /* (SERCOM_SPIS_STATUS) Transaction Length Error Mask */
#define SERCOM_SPIS_STATUS_LENERR(value)      (SERCOM_SPIS_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_SPIS_STATUS_LENERR_Pos)) /* Assigment of value for LENERR in the SERCOM_SPIS_STATUS register */
#define SERCOM_SPIS_STATUS_Msk                _UINT16_(0x0804)                                     /* (SERCOM_SPIS_STATUS) Register Mask  */

/* -------- SERCOM_SPI_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPI SPI Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint16_t BUFOVF:1;         /*!< bit:      2  Buffer Overflow                    */
    uint16_t :8;               /*!< bit:  3..10  Reserved                           */
    uint16_t LENERR:1;         /*!< bit:     11  Transaction Length Error           */
    uint16_t :4;               /*!< bit: 12..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_STATUS_OFFSET    0x1A         /**< \brief (SERCOM_SPI_STATUS offset) SPI Status */
#define SERCOM_SPI_STATUS_RESETVALUE _U_(0x0000)  /**< \brief (SERCOM_SPI_STATUS reset_value) SPI Status */

#define SERCOM_SPI_STATUS_BUFOVF_Pos 2            /**< \brief (SERCOM_SPI_STATUS) Buffer Overflow */
#define SERCOM_SPI_STATUS_BUFOVF    (_U_(0x1) << SERCOM_SPI_STATUS_BUFOVF_Pos)
#define SERCOM_SPI_STATUS_LENERR_Pos 11           /**< \brief (SERCOM_SPI_STATUS) Transaction Length Error */
#define SERCOM_SPI_STATUS_LENERR    (_U_(0x1) << SERCOM_SPI_STATUS_LENERR_Pos)
#define SERCOM_SPI_STATUS_MASK      _U_(0x0804)  /**< \brief (SERCOM_SPI_STATUS) MASK Register */



/* -------- SERCOM_USART_EXT_STATUS : (SERCOM Offset: 0x1A) (R/W 16) USART_EXT Status -------- */
#define SERCOM_USART_EXT_STATUS_RESETVALUE    _UINT16_(0x00)                                       /*  (SERCOM_USART_EXT_STATUS) USART_EXT Status  Reset Value */

#define SERCOM_USART_EXT_STATUS_PERR_Pos      _UINT16_(0)                                          /* (SERCOM_USART_EXT_STATUS) Parity Error Position */
#define SERCOM_USART_EXT_STATUS_PERR_Msk      (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_PERR_Pos)  /* (SERCOM_USART_EXT_STATUS) Parity Error Mask */
#define SERCOM_USART_EXT_STATUS_PERR(value)   (SERCOM_USART_EXT_STATUS_PERR_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_PERR_Pos)) /* Assigment of value for PERR in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_FERR_Pos      _UINT16_(1)                                          /* (SERCOM_USART_EXT_STATUS) Frame Error Position */
#define SERCOM_USART_EXT_STATUS_FERR_Msk      (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_FERR_Pos)  /* (SERCOM_USART_EXT_STATUS) Frame Error Mask */
#define SERCOM_USART_EXT_STATUS_FERR(value)   (SERCOM_USART_EXT_STATUS_FERR_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_FERR_Pos)) /* Assigment of value for FERR in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_BUFOVF_Pos    _UINT16_(2)                                          /* (SERCOM_USART_EXT_STATUS) Buffer Overflow Position */
#define SERCOM_USART_EXT_STATUS_BUFOVF_Msk    (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_BUFOVF_Pos) /* (SERCOM_USART_EXT_STATUS) Buffer Overflow Mask */
#define SERCOM_USART_EXT_STATUS_BUFOVF(value) (SERCOM_USART_EXT_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_BUFOVF_Pos)) /* Assigment of value for BUFOVF in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_CTS_Pos       _UINT16_(3)                                          /* (SERCOM_USART_EXT_STATUS) Clear To Send Position */
#define SERCOM_USART_EXT_STATUS_CTS_Msk       (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_CTS_Pos)   /* (SERCOM_USART_EXT_STATUS) Clear To Send Mask */
#define SERCOM_USART_EXT_STATUS_CTS(value)    (SERCOM_USART_EXT_STATUS_CTS_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_CTS_Pos)) /* Assigment of value for CTS in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_ISF_Pos       _UINT16_(4)                                          /* (SERCOM_USART_EXT_STATUS) Inconsistent Sync Field Position */
#define SERCOM_USART_EXT_STATUS_ISF_Msk       (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_ISF_Pos)   /* (SERCOM_USART_EXT_STATUS) Inconsistent Sync Field Mask */
#define SERCOM_USART_EXT_STATUS_ISF(value)    (SERCOM_USART_EXT_STATUS_ISF_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_ISF_Pos)) /* Assigment of value for ISF in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_COLL_Pos      _UINT16_(5)                                          /* (SERCOM_USART_EXT_STATUS) Collision Detected Position */
#define SERCOM_USART_EXT_STATUS_COLL_Msk      (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_COLL_Pos)  /* (SERCOM_USART_EXT_STATUS) Collision Detected Mask */
#define SERCOM_USART_EXT_STATUS_COLL(value)   (SERCOM_USART_EXT_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_COLL_Pos)) /* Assigment of value for COLL in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_TXE_Pos       _UINT16_(6)                                          /* (SERCOM_USART_EXT_STATUS) Transmitter Empty Position */
#define SERCOM_USART_EXT_STATUS_TXE_Msk       (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_TXE_Pos)   /* (SERCOM_USART_EXT_STATUS) Transmitter Empty Mask */
#define SERCOM_USART_EXT_STATUS_TXE(value)    (SERCOM_USART_EXT_STATUS_TXE_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_TXE_Pos)) /* Assigment of value for TXE in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_ITER_Pos      _UINT16_(7)                                          /* (SERCOM_USART_EXT_STATUS) Maximum Number of Repetitions Reached Position */
#define SERCOM_USART_EXT_STATUS_ITER_Msk      (_UINT16_(0x1) << SERCOM_USART_EXT_STATUS_ITER_Pos)  /* (SERCOM_USART_EXT_STATUS) Maximum Number of Repetitions Reached Mask */
#define SERCOM_USART_EXT_STATUS_ITER(value)   (SERCOM_USART_EXT_STATUS_ITER_Msk & (_UINT16_(value) << SERCOM_USART_EXT_STATUS_ITER_Pos)) /* Assigment of value for ITER in the SERCOM_USART_EXT_STATUS register */
#define SERCOM_USART_EXT_STATUS_Msk           _UINT16_(0x00FF)                                     /* (SERCOM_USART_EXT_STATUS) Register Mask  */


/* -------- SERCOM_USART_INT_STATUS : (SERCOM Offset: 0x1A) (R/W 16) USART_INT Status -------- */
#define SERCOM_USART_INT_STATUS_RESETVALUE    _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_STATUS) USART_INT Status  Reset Value */

#define SERCOM_USART_INT_STATUS_PERR_Pos      _UINT16_(0)                                          /* (SERCOM_USART_INT_STATUS) Parity Error Position */
#define SERCOM_USART_INT_STATUS_PERR_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_PERR_Pos)  /* (SERCOM_USART_INT_STATUS) Parity Error Mask */
#define SERCOM_USART_INT_STATUS_PERR(value)   (SERCOM_USART_INT_STATUS_PERR_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_PERR_Pos)) /* Assigment of value for PERR in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_FERR_Pos      _UINT16_(1)                                          /* (SERCOM_USART_INT_STATUS) Frame Error Position */
#define SERCOM_USART_INT_STATUS_FERR_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_FERR_Pos)  /* (SERCOM_USART_INT_STATUS) Frame Error Mask */
#define SERCOM_USART_INT_STATUS_FERR(value)   (SERCOM_USART_INT_STATUS_FERR_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_FERR_Pos)) /* Assigment of value for FERR in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_BUFOVF_Pos    _UINT16_(2)                                          /* (SERCOM_USART_INT_STATUS) Buffer Overflow Position */
#define SERCOM_USART_INT_STATUS_BUFOVF_Msk    (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_BUFOVF_Pos) /* (SERCOM_USART_INT_STATUS) Buffer Overflow Mask */
#define SERCOM_USART_INT_STATUS_BUFOVF(value) (SERCOM_USART_INT_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_BUFOVF_Pos)) /* Assigment of value for BUFOVF in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_CTS_Pos       _UINT16_(3)                                          /* (SERCOM_USART_INT_STATUS) Clear To Send Position */
#define SERCOM_USART_INT_STATUS_CTS_Msk       (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_CTS_Pos)   /* (SERCOM_USART_INT_STATUS) Clear To Send Mask */
#define SERCOM_USART_INT_STATUS_CTS(value)    (SERCOM_USART_INT_STATUS_CTS_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_CTS_Pos)) /* Assigment of value for CTS in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_ISF_Pos       _UINT16_(4)                                          /* (SERCOM_USART_INT_STATUS) Inconsistent Sync Field Position */
#define SERCOM_USART_INT_STATUS_ISF_Msk       (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_ISF_Pos)   /* (SERCOM_USART_INT_STATUS) Inconsistent Sync Field Mask */
#define SERCOM_USART_INT_STATUS_ISF(value)    (SERCOM_USART_INT_STATUS_ISF_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_ISF_Pos)) /* Assigment of value for ISF in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_COLL_Pos      _UINT16_(5)                                          /* (SERCOM_USART_INT_STATUS) Collision Detected Position */
#define SERCOM_USART_INT_STATUS_COLL_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_COLL_Pos)  /* (SERCOM_USART_INT_STATUS) Collision Detected Mask */
#define SERCOM_USART_INT_STATUS_COLL(value)   (SERCOM_USART_INT_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_COLL_Pos)) /* Assigment of value for COLL in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_TXE_Pos       _UINT16_(6)                                          /* (SERCOM_USART_INT_STATUS) Transmitter Empty Position */
#define SERCOM_USART_INT_STATUS_TXE_Msk       (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_TXE_Pos)   /* (SERCOM_USART_INT_STATUS) Transmitter Empty Mask */
#define SERCOM_USART_INT_STATUS_TXE(value)    (SERCOM_USART_INT_STATUS_TXE_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_TXE_Pos)) /* Assigment of value for TXE in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_ITER_Pos      _UINT16_(7)                                          /* (SERCOM_USART_INT_STATUS) Maximum Number of Repetitions Reached Position */
#define SERCOM_USART_INT_STATUS_ITER_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_ITER_Pos)  /* (SERCOM_USART_INT_STATUS) Maximum Number of Repetitions Reached Mask */
#define SERCOM_USART_INT_STATUS_ITER(value)   (SERCOM_USART_INT_STATUS_ITER_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_ITER_Pos)) /* Assigment of value for ITER in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_Msk           _UINT16_(0x00FF)                                     /* (SERCOM_USART_INT_STATUS) Register Mask  */

/* -------- SERCOM_USART_STATUS : (SERCOM Offset: 0x1A) (R/W 16) USART USART Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t PERR:1;           /*!< bit:      0  Parity Error                       */
    uint16_t FERR:1;           /*!< bit:      1  Frame Error                        */
    uint16_t BUFOVF:1;         /*!< bit:      2  Buffer Overflow                    */
    uint16_t CTS:1;            /*!< bit:      3  Clear To Send                      */
    uint16_t ISF:1;            /*!< bit:      4  Inconsistent Sync Field            */
    uint16_t COLL:1;           /*!< bit:      5  Collision Detected                 */
    uint16_t TXE:1;            /*!< bit:      6  Transmitter Empty                  */
    uint16_t ITER:1;           /*!< bit:      7  Maximum Number of Repetitions Reached */
    uint16_t :8;               /*!< bit:  8..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_STATUS_OFFSET  0x1A         /**< \brief (SERCOM_USART_STATUS offset) USART Status */
#define SERCOM_USART_STATUS_RESETVALUE _U_(0x0000)  /**< \brief (SERCOM_USART_STATUS reset_value) USART Status */

#define SERCOM_USART_STATUS_PERR_Pos 0            /**< \brief (SERCOM_USART_STATUS) Parity Error */
#define SERCOM_USART_STATUS_PERR    (_U_(0x1) << SERCOM_USART_STATUS_PERR_Pos)
#define SERCOM_USART_STATUS_FERR_Pos 1            /**< \brief (SERCOM_USART_STATUS) Frame Error */
#define SERCOM_USART_STATUS_FERR    (_U_(0x1) << SERCOM_USART_STATUS_FERR_Pos)
#define SERCOM_USART_STATUS_BUFOVF_Pos 2            /**< \brief (SERCOM_USART_STATUS) Buffer Overflow */
#define SERCOM_USART_STATUS_BUFOVF  (_U_(0x1) << SERCOM_USART_STATUS_BUFOVF_Pos)
#define SERCOM_USART_STATUS_CTS_Pos 3            /**< \brief (SERCOM_USART_STATUS) Clear To Send */
#define SERCOM_USART_STATUS_CTS     (_U_(0x1) << SERCOM_USART_STATUS_CTS_Pos)
#define SERCOM_USART_STATUS_ISF_Pos 4            /**< \brief (SERCOM_USART_STATUS) Inconsistent Sync Field */
#define SERCOM_USART_STATUS_ISF     (_U_(0x1) << SERCOM_USART_STATUS_ISF_Pos)
#define SERCOM_USART_STATUS_COLL_Pos 5            /**< \brief (SERCOM_USART_STATUS) Collision Detected */
#define SERCOM_USART_STATUS_COLL    (_U_(0x1) << SERCOM_USART_STATUS_COLL_Pos)
#define SERCOM_USART_STATUS_TXE_Pos 6            /**< \brief (SERCOM_USART_STATUS) Transmitter Empty */
#define SERCOM_USART_STATUS_TXE     (_U_(0x1) << SERCOM_USART_STATUS_TXE_Pos)
#define SERCOM_USART_STATUS_ITER_Pos 7            /**< \brief (SERCOM_USART_STATUS) Maximum Number of Repetitions Reached */
#define SERCOM_USART_STATUS_ITER    (_U_(0x1) << SERCOM_USART_STATUS_ITER_Pos)
#define SERCOM_USART_STATUS_MASK    _U_(0x00FF)  /**< \brief (SERCOM_USART_STATUS) MASK Register */



/* -------- SERCOM_I2CM_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) I2CM Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1;         /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t SYSOP:1;          /*!< bit:      2  System Operation Synchronization Busy */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t LENGTH:1;         /*!< bit:      4  Length Synchronization Busy        */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy  Reset Value */

#define SERCOM_I2CM_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)    /* (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SWRST(value)     (SERCOM_I2CM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_ENABLE(value)    (SERCOM_I2CM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Pos        _UINT32_(2)                                          /* (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Msk        (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)    /* (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SYSOP(value)     (SERCOM_I2CM_SYNCBUSY_SYSOP_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)) /* Assigment of value for SYSOP in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_Msk              _UINT32_(0x00000007)                                 /* (SERCOM_I2CM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_I2CS_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) I2CS Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1;         /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t LENGTH:1;         /*!< bit:      4  Length Synchronization Busy        */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy  Reset Value */

#define SERCOM_I2CS_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)    /* (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_SWRST(value)     (SERCOM_I2CS_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_ENABLE(value)    (SERCOM_I2CS_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_I2CS_SYNCBUSY) Length Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_I2CS_SYNCBUSY) Length Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_LENGTH(value)    (SERCOM_I2CS_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_LENGTH_Pos)) /* Assigment of value for LENGTH in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_Msk              _UINT32_(0x00000013)                                 /* (SERCOM_I2CS_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPIM_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) SPIM Synchronization Busy -------- */
#define SERCOM_SPIM_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_SPIM_SYNCBUSY) SPIM Synchronization Busy  Reset Value */

#define SERCOM_SPIM_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_SPIM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_SWRST_Pos)    /* (SERCOM_SPIM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_SWRST(value)     (SERCOM_SPIM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_SPIM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_SPIM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_ENABLE(value)    (SERCOM_SPIM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_CTRLB_Pos        _UINT32_(2)                                          /* (SERCOM_SPIM_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_CTRLB_Msk        (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_CTRLB_Pos)    /* (SERCOM_SPIM_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_CTRLB(value)     (SERCOM_SPIM_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_CTRLB_Pos)) /* Assigment of value for CTRLB in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_SPIM_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_SPIM_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_LENGTH(value)    (SERCOM_SPIM_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_LENGTH_Pos)) /* Assigment of value for LENGTH in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_Msk              _UINT32_(0x00000017)                                 /* (SERCOM_SPIM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPIS_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) SPIS Synchronization Busy -------- */
#define SERCOM_SPIS_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_SPIS_SYNCBUSY) SPIS Synchronization Busy  Reset Value */

#define SERCOM_SPIS_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_SPIS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_SWRST_Pos)    /* (SERCOM_SPIS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_SWRST(value)     (SERCOM_SPIS_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_SPIS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_SPIS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_ENABLE(value)    (SERCOM_SPIS_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_CTRLB_Pos        _UINT32_(2)                                          /* (SERCOM_SPIS_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_CTRLB_Msk        (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_CTRLB_Pos)    /* (SERCOM_SPIS_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_CTRLB(value)     (SERCOM_SPIS_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_CTRLB_Pos)) /* Assigment of value for CTRLB in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_SPIS_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_SPIS_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_LENGTH(value)    (SERCOM_SPIS_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_LENGTH_Pos)) /* Assigment of value for LENGTH in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_Msk              _UINT32_(0x00000017)                                 /* (SERCOM_SPIS_SYNCBUSY) Register Mask  */

/* -------- SERCOM_SPI_SYNCBUSY : (SERCOM Offset: 0x1C) (R/  32) SPI SPI Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1;         /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t CTRLB:1;          /*!< bit:      2  CTRLB Synchronization Busy         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t LENGTH:1;         /*!< bit:      4  LENGTH Synchronization Busy        */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_SYNCBUSY_OFFSET  0x1C         /**< \brief (SERCOM_SPI_SYNCBUSY offset) SPI Synchronization Busy */
#define SERCOM_SPI_SYNCBUSY_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_SPI_SYNCBUSY reset_value) SPI Synchronization Busy */

#define SERCOM_SPI_SYNCBUSY_SWRST_Pos 0            /**< \brief (SERCOM_SPI_SYNCBUSY) Software Reset Synchronization Busy */
#define SERCOM_SPI_SYNCBUSY_SWRST   (_U_(0x1) << SERCOM_SPI_SYNCBUSY_SWRST_Pos)
#define SERCOM_SPI_SYNCBUSY_ENABLE_Pos 1            /**< \brief (SERCOM_SPI_SYNCBUSY) SERCOM Enable Synchronization Busy */
#define SERCOM_SPI_SYNCBUSY_ENABLE  (_U_(0x1) << SERCOM_SPI_SYNCBUSY_ENABLE_Pos)
#define SERCOM_SPI_SYNCBUSY_CTRLB_Pos 2            /**< \brief (SERCOM_SPI_SYNCBUSY) CTRLB Synchronization Busy */
#define SERCOM_SPI_SYNCBUSY_CTRLB   (_U_(0x1) << SERCOM_SPI_SYNCBUSY_CTRLB_Pos)
#define SERCOM_SPI_SYNCBUSY_LENGTH_Pos 4            /**< \brief (SERCOM_SPI_SYNCBUSY) LENGTH Synchronization Busy */
#define SERCOM_SPI_SYNCBUSY_LENGTH  (_U_(0x1) << SERCOM_SPI_SYNCBUSY_LENGTH_Pos)
#define SERCOM_SPI_SYNCBUSY_MASK    _U_(0x00000017) /**< \brief (SERCOM_SPI_SYNCBUSY) MASK Register */



/* -------- SERCOM_USART_EXT_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) USART_EXT Synchronization Busy -------- */
#define SERCOM_USART_EXT_SYNCBUSY_RESETVALUE  _UINT32_(0x00)                                       /*  (SERCOM_USART_EXT_SYNCBUSY) USART_EXT Synchronization Busy  Reset Value */

#define SERCOM_USART_EXT_SYNCBUSY_SWRST_Pos   _UINT32_(0)                                          /* (SERCOM_USART_EXT_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_SWRST_Msk   (_UINT32_(0x1) << SERCOM_USART_EXT_SYNCBUSY_SWRST_Pos) /* (SERCOM_USART_EXT_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_SWRST(value) (SERCOM_USART_EXT_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_EXT_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_USART_EXT_SYNCBUSY register */
#define SERCOM_USART_EXT_SYNCBUSY_ENABLE_Pos  _UINT32_(1)                                          /* (SERCOM_USART_EXT_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_ENABLE_Msk  (_UINT32_(0x1) << SERCOM_USART_EXT_SYNCBUSY_ENABLE_Pos) /* (SERCOM_USART_EXT_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_ENABLE(value) (SERCOM_USART_EXT_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_EXT_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_USART_EXT_SYNCBUSY register */
#define SERCOM_USART_EXT_SYNCBUSY_CTRLB_Pos   _UINT32_(2)                                          /* (SERCOM_USART_EXT_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_CTRLB_Msk   (_UINT32_(0x1) << SERCOM_USART_EXT_SYNCBUSY_CTRLB_Pos) /* (SERCOM_USART_EXT_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_CTRLB(value) (SERCOM_USART_EXT_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_USART_EXT_SYNCBUSY_CTRLB_Pos)) /* Assigment of value for CTRLB in the SERCOM_USART_EXT_SYNCBUSY register */
#define SERCOM_USART_EXT_SYNCBUSY_RXERRCNT_Pos _UINT32_(3)                                          /* (SERCOM_USART_EXT_SYNCBUSY) RXERRCNT Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_RXERRCNT_Msk (_UINT32_(0x1) << SERCOM_USART_EXT_SYNCBUSY_RXERRCNT_Pos) /* (SERCOM_USART_EXT_SYNCBUSY) RXERRCNT Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_RXERRCNT(value) (SERCOM_USART_EXT_SYNCBUSY_RXERRCNT_Msk & (_UINT32_(value) << SERCOM_USART_EXT_SYNCBUSY_RXERRCNT_Pos)) /* Assigment of value for RXERRCNT in the SERCOM_USART_EXT_SYNCBUSY register */
#define SERCOM_USART_EXT_SYNCBUSY_LENGTH_Pos  _UINT32_(4)                                          /* (SERCOM_USART_EXT_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_LENGTH_Msk  (_UINT32_(0x1) << SERCOM_USART_EXT_SYNCBUSY_LENGTH_Pos) /* (SERCOM_USART_EXT_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_LENGTH(value) (SERCOM_USART_EXT_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_USART_EXT_SYNCBUSY_LENGTH_Pos)) /* Assigment of value for LENGTH in the SERCOM_USART_EXT_SYNCBUSY register */
#define SERCOM_USART_EXT_SYNCBUSY_Msk         _UINT32_(0x0000001F)                                 /* (SERCOM_USART_EXT_SYNCBUSY) Register Mask  */


/* -------- SERCOM_USART_INT_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) USART_INT Synchronization Busy -------- */
#define SERCOM_USART_INT_SYNCBUSY_RESETVALUE  _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_SYNCBUSY) USART_INT Synchronization Busy  Reset Value */

#define SERCOM_USART_INT_SYNCBUSY_SWRST_Pos   _UINT32_(0)                                          /* (SERCOM_USART_INT_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_SWRST_Msk   (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_SWRST_Pos) /* (SERCOM_USART_INT_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_SWRST(value) (SERCOM_USART_INT_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos  _UINT32_(1)                                          /* (SERCOM_USART_INT_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk  (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos) /* (SERCOM_USART_INT_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE(value) (SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos   _UINT32_(2)                                          /* (SERCOM_USART_INT_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk   (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos) /* (SERCOM_USART_INT_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB(value) (SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos)) /* Assigment of value for CTRLB in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Pos _UINT32_(3)                                          /* (SERCOM_USART_INT_SYNCBUSY) RXERRCNT Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Msk (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Pos) /* (SERCOM_USART_INT_SYNCBUSY) RXERRCNT Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_RXERRCNT(value) (SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Pos)) /* Assigment of value for RXERRCNT in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_LENGTH_Pos  _UINT32_(4)                                          /* (SERCOM_USART_INT_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_LENGTH_Msk  (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_LENGTH_Pos) /* (SERCOM_USART_INT_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_LENGTH(value) (SERCOM_USART_INT_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_LENGTH_Pos)) /* Assigment of value for LENGTH in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_Msk         _UINT32_(0x0000001F)                                 /* (SERCOM_USART_INT_SYNCBUSY) Register Mask  */

/* -------- SERCOM_USART_SYNCBUSY : (SERCOM Offset: 0x1C) (R/  32) USART USART Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1;         /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t CTRLB:1;          /*!< bit:      2  CTRLB Synchronization Busy         */
    uint32_t RXERRCNT:1;       /*!< bit:      3  RXERRCNT Synchronization Busy      */
    uint32_t LENGTH:1;         /*!< bit:      4  LENGTH Synchronization Busy        */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_SYNCBUSY_OFFSET 0x1C         /**< \brief (SERCOM_USART_SYNCBUSY offset) USART Synchronization Busy */
#define SERCOM_USART_SYNCBUSY_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_USART_SYNCBUSY reset_value) USART Synchronization Busy */

#define SERCOM_USART_SYNCBUSY_SWRST_Pos 0            /**< \brief (SERCOM_USART_SYNCBUSY) Software Reset Synchronization Busy */
#define SERCOM_USART_SYNCBUSY_SWRST (_U_(0x1) << SERCOM_USART_SYNCBUSY_SWRST_Pos)
#define SERCOM_USART_SYNCBUSY_ENABLE_Pos 1            /**< \brief (SERCOM_USART_SYNCBUSY) SERCOM Enable Synchronization Busy */
#define SERCOM_USART_SYNCBUSY_ENABLE (_U_(0x1) << SERCOM_USART_SYNCBUSY_ENABLE_Pos)
#define SERCOM_USART_SYNCBUSY_CTRLB_Pos 2            /**< \brief (SERCOM_USART_SYNCBUSY) CTRLB Synchronization Busy */
#define SERCOM_USART_SYNCBUSY_CTRLB (_U_(0x1) << SERCOM_USART_SYNCBUSY_CTRLB_Pos)
#define SERCOM_USART_SYNCBUSY_RXERRCNT_Pos 3            /**< \brief (SERCOM_USART_SYNCBUSY) RXERRCNT Synchronization Busy */
#define SERCOM_USART_SYNCBUSY_RXERRCNT (_U_(0x1) << SERCOM_USART_SYNCBUSY_RXERRCNT_Pos)
#define SERCOM_USART_SYNCBUSY_LENGTH_Pos 4            /**< \brief (SERCOM_USART_SYNCBUSY) LENGTH Synchronization Busy */
#define SERCOM_USART_SYNCBUSY_LENGTH (_U_(0x1) << SERCOM_USART_SYNCBUSY_LENGTH_Pos)
#define SERCOM_USART_SYNCBUSY_MASK  _U_(0x0000001F) /**< \brief (SERCOM_USART_SYNCBUSY) MASK Register */



/* -------- SERCOM_USART_EXT_RXERRCNT : (SERCOM Offset: 0x20) ( R/ 8) USART_EXT Receive Error Count -------- */
#define SERCOM_USART_EXT_RXERRCNT_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_EXT_RXERRCNT) USART_EXT Receive Error Count  Reset Value */

#define SERCOM_USART_EXT_RXERRCNT_RXERRCNT_Pos _UINT8_(0)                                           /* (SERCOM_USART_EXT_RXERRCNT) Receive Error Count Position */
#define SERCOM_USART_EXT_RXERRCNT_RXERRCNT_Msk (_UINT8_(0xFF) << SERCOM_USART_EXT_RXERRCNT_RXERRCNT_Pos) /* (SERCOM_USART_EXT_RXERRCNT) Receive Error Count Mask */
#define SERCOM_USART_EXT_RXERRCNT_RXERRCNT(value) (SERCOM_USART_EXT_RXERRCNT_RXERRCNT_Msk & (_UINT8_(value) << SERCOM_USART_EXT_RXERRCNT_RXERRCNT_Pos)) /* Assigment of value for RXERRCNT in the SERCOM_USART_EXT_RXERRCNT register */
#define SERCOM_USART_EXT_RXERRCNT_Msk         _UINT8_(0xFF)                                        /* (SERCOM_USART_EXT_RXERRCNT) Register Mask  */


/* -------- SERCOM_USART_INT_RXERRCNT : (SERCOM Offset: 0x20) ( R/ 8) USART_INT Receive Error Count -------- */
#define SERCOM_USART_INT_RXERRCNT_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_RXERRCNT) USART_INT Receive Error Count  Reset Value */

#define SERCOM_USART_INT_RXERRCNT_RXERRCNT_Pos _UINT8_(0)                                           /* (SERCOM_USART_INT_RXERRCNT) Receive Error Count Position */
#define SERCOM_USART_INT_RXERRCNT_RXERRCNT_Msk (_UINT8_(0xFF) << SERCOM_USART_INT_RXERRCNT_RXERRCNT_Pos) /* (SERCOM_USART_INT_RXERRCNT) Receive Error Count Mask */
#define SERCOM_USART_INT_RXERRCNT_RXERRCNT(value) (SERCOM_USART_INT_RXERRCNT_RXERRCNT_Msk & (_UINT8_(value) << SERCOM_USART_INT_RXERRCNT_RXERRCNT_Pos)) /* Assigment of value for RXERRCNT in the SERCOM_USART_INT_RXERRCNT register */
#define SERCOM_USART_INT_RXERRCNT_Msk         _UINT8_(0xFF)                                        /* (SERCOM_USART_INT_RXERRCNT) Register Mask  */

/* -------- SERCOM_USART_RXERRCNT : (SERCOM Offset: 0x20) (R/   8) USART USART Receive Error Count -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_USART_RXERRCNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_RXERRCNT_OFFSET 0x20         /**< \brief (SERCOM_USART_RXERRCNT offset) USART Receive Error Count */
#define SERCOM_USART_RXERRCNT_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_USART_RXERRCNT reset_value) USART Receive Error Count */
#define SERCOM_USART_RXERRCNT_MASK  _U_(0xFF)    /**< \brief (SERCOM_USART_RXERRCNT) MASK Register */



/* -------- SERCOM_I2CS_LENGTH : (SERCOM Offset: 0x22) (R/W 16) I2CS Length -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t LEN:8;            /*!< bit:  0.. 7  Data Length                        */
    uint16_t LENEN:1;          /*!< bit:      8  Data Length Enable                 */
    uint16_t :7;               /*!< bit:  9..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_LENGTH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_LENGTH_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CS_LENGTH) I2CS Length  Reset Value */

#define SERCOM_I2CS_LENGTH_LEN_Pos            _UINT16_(0)                                          /* (SERCOM_I2CS_LENGTH) Data Length Position */
#define SERCOM_I2CS_LENGTH_LEN_Msk            (_UINT16_(0xFF) << SERCOM_I2CS_LENGTH_LEN_Pos)       /* (SERCOM_I2CS_LENGTH) Data Length Mask */
#define SERCOM_I2CS_LENGTH_LEN(value)         (SERCOM_I2CS_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_I2CS_LENGTH_LEN_Pos)) /* Assigment of value for LEN in the SERCOM_I2CS_LENGTH register */
#define SERCOM_I2CS_LENGTH_LENEN_Pos          _UINT16_(8)                                          /* (SERCOM_I2CS_LENGTH) Data Length Enable Position */
#define SERCOM_I2CS_LENGTH_LENEN_Msk          (_UINT16_(0x1) << SERCOM_I2CS_LENGTH_LENEN_Pos)      /* (SERCOM_I2CS_LENGTH) Data Length Enable Mask */
#define SERCOM_I2CS_LENGTH_LENEN(value)       (SERCOM_I2CS_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_I2CS_LENGTH_LENEN_Pos)) /* Assigment of value for LENEN in the SERCOM_I2CS_LENGTH register */
#define SERCOM_I2CS_LENGTH_Msk                _UINT16_(0x01FF)                                     /* (SERCOM_I2CS_LENGTH) Register Mask  */


/* -------- SERCOM_SPIM_LENGTH : (SERCOM Offset: 0x22) (R/W 16) SPIM Length -------- */
#define SERCOM_SPIM_LENGTH_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIM_LENGTH) SPIM Length  Reset Value */

#define SERCOM_SPIM_LENGTH_LEN_Pos            _UINT16_(0)                                          /* (SERCOM_SPIM_LENGTH) Data Length Position */
#define SERCOM_SPIM_LENGTH_LEN_Msk            (_UINT16_(0xFF) << SERCOM_SPIM_LENGTH_LEN_Pos)       /* (SERCOM_SPIM_LENGTH) Data Length Mask */
#define SERCOM_SPIM_LENGTH_LEN(value)         (SERCOM_SPIM_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_SPIM_LENGTH_LEN_Pos)) /* Assigment of value for LEN in the SERCOM_SPIM_LENGTH register */
#define SERCOM_SPIM_LENGTH_LENEN_Pos          _UINT16_(8)                                          /* (SERCOM_SPIM_LENGTH) Data Length Enable Position */
#define SERCOM_SPIM_LENGTH_LENEN_Msk          (_UINT16_(0x1) << SERCOM_SPIM_LENGTH_LENEN_Pos)      /* (SERCOM_SPIM_LENGTH) Data Length Enable Mask */
#define SERCOM_SPIM_LENGTH_LENEN(value)       (SERCOM_SPIM_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_SPIM_LENGTH_LENEN_Pos)) /* Assigment of value for LENEN in the SERCOM_SPIM_LENGTH register */
#define SERCOM_SPIM_LENGTH_Msk                _UINT16_(0x01FF)                                     /* (SERCOM_SPIM_LENGTH) Register Mask  */


/* -------- SERCOM_SPIS_LENGTH : (SERCOM Offset: 0x22) (R/W 16) SPIS Length -------- */
#define SERCOM_SPIS_LENGTH_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIS_LENGTH) SPIS Length  Reset Value */

#define SERCOM_SPIS_LENGTH_LEN_Pos            _UINT16_(0)                                          /* (SERCOM_SPIS_LENGTH) Data Length Position */
#define SERCOM_SPIS_LENGTH_LEN_Msk            (_UINT16_(0xFF) << SERCOM_SPIS_LENGTH_LEN_Pos)       /* (SERCOM_SPIS_LENGTH) Data Length Mask */
#define SERCOM_SPIS_LENGTH_LEN(value)         (SERCOM_SPIS_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_SPIS_LENGTH_LEN_Pos)) /* Assigment of value for LEN in the SERCOM_SPIS_LENGTH register */
#define SERCOM_SPIS_LENGTH_LENEN_Pos          _UINT16_(8)                                          /* (SERCOM_SPIS_LENGTH) Data Length Enable Position */
#define SERCOM_SPIS_LENGTH_LENEN_Msk          (_UINT16_(0x1) << SERCOM_SPIS_LENGTH_LENEN_Pos)      /* (SERCOM_SPIS_LENGTH) Data Length Enable Mask */
#define SERCOM_SPIS_LENGTH_LENEN(value)       (SERCOM_SPIS_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_SPIS_LENGTH_LENEN_Pos)) /* Assigment of value for LENEN in the SERCOM_SPIS_LENGTH register */
#define SERCOM_SPIS_LENGTH_Msk                _UINT16_(0x01FF)                                     /* (SERCOM_SPIS_LENGTH) Register Mask  */

/* -------- SERCOM_SPI_LENGTH : (SERCOM Offset: 0x22) (R/W 16) SPI SPI Length -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t LEN:8;            /*!< bit:  0.. 7  Data Length                        */
    uint16_t LENEN:1;          /*!< bit:      8  Data Length Enable                 */
    uint16_t :7;               /*!< bit:  9..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_LENGTH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_LENGTH_OFFSET    0x22         /**< \brief (SERCOM_SPI_LENGTH offset) SPI Length */
#define SERCOM_SPI_LENGTH_RESETVALUE _U_(0x0000)  /**< \brief (SERCOM_SPI_LENGTH reset_value) SPI Length */

#define SERCOM_SPI_LENGTH_LEN_Pos   0            /**< \brief (SERCOM_SPI_LENGTH) Data Length */
#define SERCOM_SPI_LENGTH_LEN_Msk   (_U_(0xFF) << SERCOM_SPI_LENGTH_LEN_Pos)
#define SERCOM_SPI_LENGTH_LEN(value) (SERCOM_SPI_LENGTH_LEN_Msk & ((value) << SERCOM_SPI_LENGTH_LEN_Pos))
#define SERCOM_SPI_LENGTH_LENEN_Pos 8            /**< \brief (SERCOM_SPI_LENGTH) Data Length Enable */
#define SERCOM_SPI_LENGTH_LENEN     (_U_(0x1) << SERCOM_SPI_LENGTH_LENEN_Pos)
#define SERCOM_SPI_LENGTH_MASK      _U_(0x01FF)  /**< \brief (SERCOM_SPI_LENGTH) MASK Register */



/* -------- SERCOM_USART_EXT_LENGTH : (SERCOM Offset: 0x22) (R/W 16) USART_EXT Length -------- */
#define SERCOM_USART_EXT_LENGTH_RESETVALUE    _UINT16_(0x00)                                       /*  (SERCOM_USART_EXT_LENGTH) USART_EXT Length  Reset Value */

#define SERCOM_USART_EXT_LENGTH_LEN_Pos       _UINT16_(0)                                          /* (SERCOM_USART_EXT_LENGTH) Data Length Position */
#define SERCOM_USART_EXT_LENGTH_LEN_Msk       (_UINT16_(0xFF) << SERCOM_USART_EXT_LENGTH_LEN_Pos)  /* (SERCOM_USART_EXT_LENGTH) Data Length Mask */
#define SERCOM_USART_EXT_LENGTH_LEN(value)    (SERCOM_USART_EXT_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_USART_EXT_LENGTH_LEN_Pos)) /* Assigment of value for LEN in the SERCOM_USART_EXT_LENGTH register */
#define SERCOM_USART_EXT_LENGTH_LENEN_Pos     _UINT16_(8)                                          /* (SERCOM_USART_EXT_LENGTH) Data Length Enable Position */
#define SERCOM_USART_EXT_LENGTH_LENEN_Msk     (_UINT16_(0x3) << SERCOM_USART_EXT_LENGTH_LENEN_Pos) /* (SERCOM_USART_EXT_LENGTH) Data Length Enable Mask */
#define SERCOM_USART_EXT_LENGTH_LENEN(value)  (SERCOM_USART_EXT_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_USART_EXT_LENGTH_LENEN_Pos)) /* Assigment of value for LENEN in the SERCOM_USART_EXT_LENGTH register */
#define SERCOM_USART_EXT_LENGTH_Msk           _UINT16_(0x03FF)                                     /* (SERCOM_USART_EXT_LENGTH) Register Mask  */


/* -------- SERCOM_USART_INT_LENGTH : (SERCOM Offset: 0x22) (R/W 16) USART_INT Length -------- */
#define SERCOM_USART_INT_LENGTH_RESETVALUE    _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_LENGTH) USART_INT Length  Reset Value */

#define SERCOM_USART_INT_LENGTH_LEN_Pos       _UINT16_(0)                                          /* (SERCOM_USART_INT_LENGTH) Data Length Position */
#define SERCOM_USART_INT_LENGTH_LEN_Msk       (_UINT16_(0xFF) << SERCOM_USART_INT_LENGTH_LEN_Pos)  /* (SERCOM_USART_INT_LENGTH) Data Length Mask */
#define SERCOM_USART_INT_LENGTH_LEN(value)    (SERCOM_USART_INT_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_USART_INT_LENGTH_LEN_Pos)) /* Assigment of value for LEN in the SERCOM_USART_INT_LENGTH register */
#define SERCOM_USART_INT_LENGTH_LENEN_Pos     _UINT16_(8)                                          /* (SERCOM_USART_INT_LENGTH) Data Length Enable Position */
#define SERCOM_USART_INT_LENGTH_LENEN_Msk     (_UINT16_(0x3) << SERCOM_USART_INT_LENGTH_LENEN_Pos) /* (SERCOM_USART_INT_LENGTH) Data Length Enable Mask */
#define SERCOM_USART_INT_LENGTH_LENEN(value)  (SERCOM_USART_INT_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_USART_INT_LENGTH_LENEN_Pos)) /* Assigment of value for LENEN in the SERCOM_USART_INT_LENGTH register */
#define SERCOM_USART_INT_LENGTH_Msk           _UINT16_(0x03FF)                                     /* (SERCOM_USART_INT_LENGTH) Register Mask  */

/* -------- SERCOM_USART_LENGTH : (SERCOM Offset: 0x22) (R/W 16) USART USART Length -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t LEN:8;            /*!< bit:  0.. 7  Data Length                        */
    uint16_t LENEN:2;          /*!< bit:  8.. 9  Data Length Enable                 */
    uint16_t :6;               /*!< bit: 10..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_LENGTH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_LENGTH_OFFSET  0x22         /**< \brief (SERCOM_USART_LENGTH offset) USART Length */
#define SERCOM_USART_LENGTH_RESETVALUE _U_(0x0000)  /**< \brief (SERCOM_USART_LENGTH reset_value) USART Length */

#define SERCOM_USART_LENGTH_LEN_Pos 0            /**< \brief (SERCOM_USART_LENGTH) Data Length */
#define SERCOM_USART_LENGTH_LEN_Msk (_U_(0xFF) << SERCOM_USART_LENGTH_LEN_Pos)
#define SERCOM_USART_LENGTH_LEN(value) (SERCOM_USART_LENGTH_LEN_Msk & ((value) << SERCOM_USART_LENGTH_LEN_Pos))
#define SERCOM_USART_LENGTH_LENEN_Pos 8            /**< \brief (SERCOM_USART_LENGTH) Data Length Enable */
#define SERCOM_USART_LENGTH_LENEN_Msk (_U_(0x3) << SERCOM_USART_LENGTH_LENEN_Pos)
#define SERCOM_USART_LENGTH_LENEN(value) (SERCOM_USART_LENGTH_LENEN_Msk & ((value) << SERCOM_USART_LENGTH_LENEN_Pos))
#define SERCOM_USART_LENGTH_MASK    _U_(0x03FF)  /**< \brief (SERCOM_USART_LENGTH) MASK Register */



/* -------- SERCOM_I2CM_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CM Address -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:11;          /*!< bit:  0..10  Address Value                      */
    uint32_t :2;               /*!< bit: 11..12  Reserved                           */
    uint32_t LENEN:1;          /*!< bit:     13  Length Enable                      */
    uint32_t HS:1;             /*!< bit:     14  High Speed Mode                    */
    uint32_t TENBITEN:1;       /*!< bit:     15  Ten Bit Addressing Enable          */
    uint32_t LEN:8;            /*!< bit: 16..23  Length                             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_ADDR) I2CM Address  Reset Value */

#define SERCOM_I2CM_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_ADDR) Address Value Position */
#define SERCOM_I2CM_ADDR_ADDR_Msk             (_UINT32_(0x7FF) << SERCOM_I2CM_ADDR_ADDR_Pos)       /* (SERCOM_I2CM_ADDR) Address Value Mask */
#define SERCOM_I2CM_ADDR_ADDR(value)          (SERCOM_I2CM_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_LENEN_Pos            _UINT32_(13)                                         /* (SERCOM_I2CM_ADDR) Length Enable Position */
#define SERCOM_I2CM_ADDR_LENEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_ADDR_LENEN_Pos)        /* (SERCOM_I2CM_ADDR) Length Enable Mask */
#define SERCOM_I2CM_ADDR_LENEN(value)         (SERCOM_I2CM_ADDR_LENEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_LENEN_Pos)) /* Assigment of value for LENEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_HS_Pos               _UINT32_(14)                                         /* (SERCOM_I2CM_ADDR) High Speed Mode Position */
#define SERCOM_I2CM_ADDR_HS_Msk               (_UINT32_(0x1) << SERCOM_I2CM_ADDR_HS_Pos)           /* (SERCOM_I2CM_ADDR) High Speed Mode Mask */
#define SERCOM_I2CM_ADDR_HS(value)            (SERCOM_I2CM_ADDR_HS_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_HS_Pos)) /* Assigment of value for HS in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_TENBITEN_Pos         _UINT32_(15)                                         /* (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CM_ADDR_TENBITEN_Msk         (_UINT32_(0x1) << SERCOM_I2CM_ADDR_TENBITEN_Pos)     /* (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CM_ADDR_TENBITEN(value)      (SERCOM_I2CM_ADDR_TENBITEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_TENBITEN_Pos)) /* Assigment of value for TENBITEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_LEN_Pos              _UINT32_(16)                                         /* (SERCOM_I2CM_ADDR) Length Position */
#define SERCOM_I2CM_ADDR_LEN_Msk              (_UINT32_(0xFF) << SERCOM_I2CM_ADDR_LEN_Pos)         /* (SERCOM_I2CM_ADDR) Length Mask */
#define SERCOM_I2CM_ADDR_LEN(value)           (SERCOM_I2CM_ADDR_LEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_LEN_Pos)) /* Assigment of value for LEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_Msk                  _UINT32_(0x00FFE7FF)                                 /* (SERCOM_I2CM_ADDR) Register Mask  */


/* -------- SERCOM_I2CS_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CS Address -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t GENCEN:1;         /*!< bit:      0  General Call Address Enable        */
    uint32_t ADDR:10;          /*!< bit:  1..10  Address Value                      */
    uint32_t :4;               /*!< bit: 11..14  Reserved                           */
    uint32_t TENBITEN:1;       /*!< bit:     15  Ten Bit Addressing Enable          */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t ADDRMASK:10;      /*!< bit: 17..26  Address Mask                       */
    uint32_t :5;               /*!< bit: 27..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CS_ADDR) I2CS Address  Reset Value */

#define SERCOM_I2CS_ADDR_GENCEN_Pos           _UINT32_(0)                                          /* (SERCOM_I2CS_ADDR) General Call Address Enable Position */
#define SERCOM_I2CS_ADDR_GENCEN_Msk           (_UINT32_(0x1) << SERCOM_I2CS_ADDR_GENCEN_Pos)       /* (SERCOM_I2CS_ADDR) General Call Address Enable Mask */
#define SERCOM_I2CS_ADDR_GENCEN(value)        (SERCOM_I2CS_ADDR_GENCEN_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_GENCEN_Pos)) /* Assigment of value for GENCEN in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_ADDR_Pos             _UINT32_(1)                                          /* (SERCOM_I2CS_ADDR) Address Value Position */
#define SERCOM_I2CS_ADDR_ADDR_Msk             (_UINT32_(0x3FF) << SERCOM_I2CS_ADDR_ADDR_Pos)       /* (SERCOM_I2CS_ADDR) Address Value Mask */
#define SERCOM_I2CS_ADDR_ADDR(value)          (SERCOM_I2CS_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_TENBITEN_Pos         _UINT32_(15)                                         /* (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CS_ADDR_TENBITEN_Msk         (_UINT32_(0x1) << SERCOM_I2CS_ADDR_TENBITEN_Pos)     /* (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CS_ADDR_TENBITEN(value)      (SERCOM_I2CS_ADDR_TENBITEN_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_TENBITEN_Pos)) /* Assigment of value for TENBITEN in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_ADDRMASK_Pos         _UINT32_(17)                                         /* (SERCOM_I2CS_ADDR) Address Mask Position */
#define SERCOM_I2CS_ADDR_ADDRMASK_Msk         (_UINT32_(0x3FF) << SERCOM_I2CS_ADDR_ADDRMASK_Pos)   /* (SERCOM_I2CS_ADDR) Address Mask Mask */
#define SERCOM_I2CS_ADDR_ADDRMASK(value)      (SERCOM_I2CS_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_ADDRMASK_Pos)) /* Assigment of value for ADDRMASK in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_Msk                  _UINT32_(0x07FE87FF)                                 /* (SERCOM_I2CS_ADDR) Register Mask  */


/* -------- SERCOM_SPIM_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPIM Address -------- */
#define SERCOM_SPIM_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIM_ADDR) SPIM Address  Reset Value */

#define SERCOM_SPIM_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SERCOM_SPIM_ADDR) Address Value Position */
#define SERCOM_SPIM_ADDR_ADDR_Msk             (_UINT32_(0xFF) << SERCOM_SPIM_ADDR_ADDR_Pos)        /* (SERCOM_SPIM_ADDR) Address Value Mask */
#define SERCOM_SPIM_ADDR_ADDR(value)          (SERCOM_SPIM_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_SPIM_ADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SERCOM_SPIM_ADDR register */
#define SERCOM_SPIM_ADDR_ADDRMASK_Pos         _UINT32_(16)                                         /* (SERCOM_SPIM_ADDR) Address Mask Position */
#define SERCOM_SPIM_ADDR_ADDRMASK_Msk         (_UINT32_(0xFF) << SERCOM_SPIM_ADDR_ADDRMASK_Pos)    /* (SERCOM_SPIM_ADDR) Address Mask Mask */
#define SERCOM_SPIM_ADDR_ADDRMASK(value)      (SERCOM_SPIM_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_SPIM_ADDR_ADDRMASK_Pos)) /* Assigment of value for ADDRMASK in the SERCOM_SPIM_ADDR register */
#define SERCOM_SPIM_ADDR_Msk                  _UINT32_(0x00FF00FF)                                 /* (SERCOM_SPIM_ADDR) Register Mask  */


/* -------- SERCOM_SPIS_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPIS Address -------- */
#define SERCOM_SPIS_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIS_ADDR) SPIS Address  Reset Value */

#define SERCOM_SPIS_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SERCOM_SPIS_ADDR) Address Value Position */
#define SERCOM_SPIS_ADDR_ADDR_Msk             (_UINT32_(0xFF) << SERCOM_SPIS_ADDR_ADDR_Pos)        /* (SERCOM_SPIS_ADDR) Address Value Mask */
#define SERCOM_SPIS_ADDR_ADDR(value)          (SERCOM_SPIS_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_SPIS_ADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SERCOM_SPIS_ADDR register */
#define SERCOM_SPIS_ADDR_ADDRMASK_Pos         _UINT32_(16)                                         /* (SERCOM_SPIS_ADDR) Address Mask Position */
#define SERCOM_SPIS_ADDR_ADDRMASK_Msk         (_UINT32_(0xFF) << SERCOM_SPIS_ADDR_ADDRMASK_Pos)    /* (SERCOM_SPIS_ADDR) Address Mask Mask */
#define SERCOM_SPIS_ADDR_ADDRMASK(value)      (SERCOM_SPIS_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_SPIS_ADDR_ADDRMASK_Pos)) /* Assigment of value for ADDRMASK in the SERCOM_SPIS_ADDR register */
#define SERCOM_SPIS_ADDR_Msk                  _UINT32_(0x00FF00FF)                                 /* (SERCOM_SPIS_ADDR) Register Mask  */

/* -------- SERCOM_SPI_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPI SPI Address -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:8;           /*!< bit:  0.. 7  Address Value                      */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t ADDRMASK:8;       /*!< bit: 16..23  Address Mask                       */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_ADDR_OFFSET      0x24         /**< \brief (SERCOM_SPI_ADDR offset) SPI Address */
#define SERCOM_SPI_ADDR_RESETVALUE  _U_(0x00000000) /**< \brief (SERCOM_SPI_ADDR reset_value) SPI Address */

#define SERCOM_SPI_ADDR_ADDR_Pos    0            /**< \brief (SERCOM_SPI_ADDR) Address Value */
#define SERCOM_SPI_ADDR_ADDR_Msk    (_U_(0xFF) << SERCOM_SPI_ADDR_ADDR_Pos)
#define SERCOM_SPI_ADDR_ADDR(value) (SERCOM_SPI_ADDR_ADDR_Msk & ((value) << SERCOM_SPI_ADDR_ADDR_Pos))
#define SERCOM_SPI_ADDR_ADDRMASK_Pos 16           /**< \brief (SERCOM_SPI_ADDR) Address Mask */
#define SERCOM_SPI_ADDR_ADDRMASK_Msk (_U_(0xFF) << SERCOM_SPI_ADDR_ADDRMASK_Pos)
#define SERCOM_SPI_ADDR_ADDRMASK(value) (SERCOM_SPI_ADDR_ADDRMASK_Msk & ((value) << SERCOM_SPI_ADDR_ADDRMASK_Pos))
#define SERCOM_SPI_ADDR_MASK        _U_(0x00FF00FF) /**< \brief (SERCOM_SPI_ADDR) MASK Register */



/* -------- SERCOM_I2CM_DATA : (SERCOM Offset: 0x28) (R/W 32) I2CM Data -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Value                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CM_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_DATA) I2CM Data  Reset Value */

#define SERCOM_I2CM_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_DATA) Data Value Position */
#define SERCOM_I2CM_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_I2CM_DATA_DATA_Pos)  /* (SERCOM_I2CM_DATA) Data Value Mask */
#define SERCOM_I2CM_DATA_DATA(value)          (SERCOM_I2CM_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_I2CM_DATA_DATA_Pos)) /* Assigment of value for DATA in the SERCOM_I2CM_DATA register */
#define SERCOM_I2CM_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_I2CM_DATA) Register Mask  */


/* -------- SERCOM_I2CS_DATA : (SERCOM Offset: 0x28) (R/W 32) I2CS Data -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Value                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_I2CS_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CS_DATA) I2CS Data  Reset Value */

#define SERCOM_I2CS_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_I2CS_DATA) Data Value Position */
#define SERCOM_I2CS_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_I2CS_DATA_DATA_Pos)  /* (SERCOM_I2CS_DATA) Data Value Mask */
#define SERCOM_I2CS_DATA_DATA(value)          (SERCOM_I2CS_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_I2CS_DATA_DATA_Pos)) /* Assigment of value for DATA in the SERCOM_I2CS_DATA register */
#define SERCOM_I2CS_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_I2CS_DATA) Register Mask  */


/* -------- SERCOM_SPIM_DATA : (SERCOM Offset: 0x28) (R/W 32) SPIM Data -------- */
#define SERCOM_SPIM_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIM_DATA) SPIM Data  Reset Value */

#define SERCOM_SPIM_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_SPIM_DATA) Data Value Position */
#define SERCOM_SPIM_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_SPIM_DATA_DATA_Pos)  /* (SERCOM_SPIM_DATA) Data Value Mask */
#define SERCOM_SPIM_DATA_DATA(value)          (SERCOM_SPIM_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_SPIM_DATA_DATA_Pos)) /* Assigment of value for DATA in the SERCOM_SPIM_DATA register */
#define SERCOM_SPIM_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_SPIM_DATA) Register Mask  */


/* -------- SERCOM_SPIS_DATA : (SERCOM Offset: 0x28) (R/W 32) SPIS Data -------- */
#define SERCOM_SPIS_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIS_DATA) SPIS Data  Reset Value */

#define SERCOM_SPIS_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_SPIS_DATA) Data Value Position */
#define SERCOM_SPIS_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_SPIS_DATA_DATA_Pos)  /* (SERCOM_SPIS_DATA) Data Value Mask */
#define SERCOM_SPIS_DATA_DATA(value)          (SERCOM_SPIS_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_SPIS_DATA_DATA_Pos)) /* Assigment of value for DATA in the SERCOM_SPIS_DATA register */
#define SERCOM_SPIS_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_SPIS_DATA) Register Mask  */

/* -------- SERCOM_SPI_DATA : (SERCOM Offset: 0x28) (R/W 32) SPI SPI Data -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Value                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_SPI_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_DATA_OFFSET      0x28         /**< \brief (SERCOM_SPI_DATA offset) SPI Data */
#define SERCOM_SPI_DATA_RESETVALUE  _U_(0x00000000) /**< \brief (SERCOM_SPI_DATA reset_value) SPI Data */

#define SERCOM_SPI_DATA_DATA_Pos    0            /**< \brief (SERCOM_SPI_DATA) Data Value */
#define SERCOM_SPI_DATA_DATA_Msk    (_U_(0xFFFFFFFF) << SERCOM_SPI_DATA_DATA_Pos)
#define SERCOM_SPI_DATA_DATA(value) (SERCOM_SPI_DATA_DATA_Msk & ((value) << SERCOM_SPI_DATA_DATA_Pos))
#define SERCOM_SPI_DATA_MASK        _U_(0xFFFFFFFF) /**< \brief (SERCOM_SPI_DATA) MASK Register */



/* -------- SERCOM_USART_EXT_DATA : (SERCOM Offset: 0x28) (R/W 32) USART_EXT Data -------- */
#define SERCOM_USART_EXT_DATA_RESETVALUE      _UINT32_(0x00)                                       /*  (SERCOM_USART_EXT_DATA) USART_EXT Data  Reset Value */

#define SERCOM_USART_EXT_DATA_DATA_Pos        _UINT32_(0)                                          /* (SERCOM_USART_EXT_DATA) Data Value Position */
#define SERCOM_USART_EXT_DATA_DATA_Msk        (_UINT32_(0xFFFFFFFF) << SERCOM_USART_EXT_DATA_DATA_Pos) /* (SERCOM_USART_EXT_DATA) Data Value Mask */
#define SERCOM_USART_EXT_DATA_DATA(value)     (SERCOM_USART_EXT_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_USART_EXT_DATA_DATA_Pos)) /* Assigment of value for DATA in the SERCOM_USART_EXT_DATA register */
#define SERCOM_USART_EXT_DATA_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_USART_EXT_DATA) Register Mask  */


/* -------- SERCOM_USART_INT_DATA : (SERCOM Offset: 0x28) (R/W 32) USART_INT Data -------- */
#define SERCOM_USART_INT_DATA_RESETVALUE      _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_DATA) USART_INT Data  Reset Value */

#define SERCOM_USART_INT_DATA_DATA_Pos        _UINT32_(0)                                          /* (SERCOM_USART_INT_DATA) Data Value Position */
#define SERCOM_USART_INT_DATA_DATA_Msk        (_UINT32_(0xFFFFFFFF) << SERCOM_USART_INT_DATA_DATA_Pos) /* (SERCOM_USART_INT_DATA) Data Value Mask */
#define SERCOM_USART_INT_DATA_DATA(value)     (SERCOM_USART_INT_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_USART_INT_DATA_DATA_Pos)) /* Assigment of value for DATA in the SERCOM_USART_INT_DATA register */
#define SERCOM_USART_INT_DATA_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_USART_INT_DATA) Register Mask  */

/* -------- SERCOM_USART_DATA : (SERCOM Offset: 0x28) (R/W 32) USART USART Data -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Value                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SERCOM_USART_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_DATA_OFFSET    0x28         /**< \brief (SERCOM_USART_DATA offset) USART Data */
#define SERCOM_USART_DATA_RESETVALUE _U_(0x00000000) /**< \brief (SERCOM_USART_DATA reset_value) USART Data */

#define SERCOM_USART_DATA_DATA_Pos  0            /**< \brief (SERCOM_USART_DATA) Data Value */
#define SERCOM_USART_DATA_DATA_Msk  (_U_(0xFFFFFFFF) << SERCOM_USART_DATA_DATA_Pos)
#define SERCOM_USART_DATA_DATA(value) (SERCOM_USART_DATA_DATA_Msk & ((value) << SERCOM_USART_DATA_DATA_Pos))
#define SERCOM_USART_DATA_MASK      _U_(0xFFFFFFFF) /**< \brief (SERCOM_USART_DATA) MASK Register */



/* -------- SERCOM_I2CM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) I2CM Debug Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGSTOP:1;        /*!< bit:      0  Debug Mode                         */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_I2CM_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CM_DBGCTRL) I2CM Debug Control  Reset Value */

#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_I2CM_DBGCTRL) Debug Mode Position */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_I2CM_DBGCTRL) Debug Mode Mask */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP(value)    (SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)) /* Assigment of value for DBGSTOP in the SERCOM_I2CM_DBGCTRL register */
#define SERCOM_I2CM_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_I2CM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPIM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPIM Debug Control -------- */
#define SERCOM_SPIM_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIM_DBGCTRL) SPIM Debug Control  Reset Value */

#define SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_SPIM_DBGCTRL) Debug Mode Position */
#define SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_SPIM_DBGCTRL) Debug Mode Mask */
#define SERCOM_SPIM_DBGCTRL_DBGSTOP(value)    (SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos)) /* Assigment of value for DBGSTOP in the SERCOM_SPIM_DBGCTRL register */
#define SERCOM_SPIM_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_SPIM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPIS_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPIS Debug Control -------- */
#define SERCOM_SPIS_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIS_DBGCTRL) SPIS Debug Control  Reset Value */

#define SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_SPIS_DBGCTRL) Debug Mode Position */
#define SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_SPIS_DBGCTRL) Debug Mode Mask */
#define SERCOM_SPIS_DBGCTRL_DBGSTOP(value)    (SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos)) /* Assigment of value for DBGSTOP in the SERCOM_SPIS_DBGCTRL register */
#define SERCOM_SPIS_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_SPIS_DBGCTRL) Register Mask  */

/* -------- SERCOM_SPI_DBGCTRL : (SERCOM Offset: 0x30) (R/W  8) SPI SPI Debug Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGSTOP:1;        /*!< bit:      0  Debug Mode                         */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_SPI_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPI_DBGCTRL_OFFSET   0x30         /**< \brief (SERCOM_SPI_DBGCTRL offset) SPI Debug Control */
#define SERCOM_SPI_DBGCTRL_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_SPI_DBGCTRL reset_value) SPI Debug Control */

#define SERCOM_SPI_DBGCTRL_DBGSTOP_Pos 0            /**< \brief (SERCOM_SPI_DBGCTRL) Debug Mode */
#define SERCOM_SPI_DBGCTRL_DBGSTOP  (_U_(0x1) << SERCOM_SPI_DBGCTRL_DBGSTOP_Pos)
#define SERCOM_SPI_DBGCTRL_MASK     _U_(0x01)    /**< \brief (SERCOM_SPI_DBGCTRL) MASK Register */



/* -------- SERCOM_USART_EXT_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) USART_EXT Debug Control -------- */
#define SERCOM_USART_EXT_DBGCTRL_RESETVALUE   _UINT8_(0x00)                                        /*  (SERCOM_USART_EXT_DBGCTRL) USART_EXT Debug Control  Reset Value */

#define SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Pos  _UINT8_(0)                                           /* (SERCOM_USART_EXT_DBGCTRL) Debug Mode Position */
#define SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Msk  (_UINT8_(0x1) << SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Pos) /* (SERCOM_USART_EXT_DBGCTRL) Debug Mode Mask */
#define SERCOM_USART_EXT_DBGCTRL_DBGSTOP(value) (SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Pos)) /* Assigment of value for DBGSTOP in the SERCOM_USART_EXT_DBGCTRL register */
#define SERCOM_USART_EXT_DBGCTRL_Msk          _UINT8_(0x01)                                        /* (SERCOM_USART_EXT_DBGCTRL) Register Mask  */


/* -------- SERCOM_USART_INT_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) USART_INT Debug Control -------- */
#define SERCOM_USART_INT_DBGCTRL_RESETVALUE   _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_DBGCTRL) USART_INT Debug Control  Reset Value */

#define SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos  _UINT8_(0)                                           /* (SERCOM_USART_INT_DBGCTRL) Debug Mode Position */
#define SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk  (_UINT8_(0x1) << SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos) /* (SERCOM_USART_INT_DBGCTRL) Debug Mode Mask */
#define SERCOM_USART_INT_DBGCTRL_DBGSTOP(value) (SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos)) /* Assigment of value for DBGSTOP in the SERCOM_USART_INT_DBGCTRL register */
#define SERCOM_USART_INT_DBGCTRL_Msk          _UINT8_(0x01)                                        /* (SERCOM_USART_INT_DBGCTRL) Register Mask  */

/* -------- SERCOM_USART_DBGCTRL : (SERCOM Offset: 0x30) (R/W  8) USART USART Debug Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGSTOP:1;        /*!< bit:      0  Debug Mode                         */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} SERCOM_USART_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_DBGCTRL_OFFSET 0x30         /**< \brief (SERCOM_USART_DBGCTRL offset) USART Debug Control */
#define SERCOM_USART_DBGCTRL_RESETVALUE _U_(0x00)    /**< \brief (SERCOM_USART_DBGCTRL reset_value) USART Debug Control */

#define SERCOM_USART_DBGCTRL_DBGSTOP_Pos 0            /**< \brief (SERCOM_USART_DBGCTRL) Debug Mode */
#define SERCOM_USART_DBGCTRL_DBGSTOP (_U_(0x1) << SERCOM_USART_DBGCTRL_DBGSTOP_Pos)
#define SERCOM_USART_DBGCTRL_MASK   _U_(0x01)    /**< \brief (SERCOM_USART_DBGCTRL) MASK Register */



/** \brief SERCOM register offsets definitions */
#define SERCOM_I2CM_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_I2CM_CTRLA) I2CM Control A Offset */
#define SERCOM_I2CS_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_I2CS_CTRLA) I2CS Control A Offset */
#define SERCOM_SPIM_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_SPIM_CTRLA) SPIM Control A Offset */
#define SERCOM_SPIS_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_SPIS_CTRLA) SPIS Control A Offset */
#define SERCOM_USART_EXT_CTRLA_REG_OFST _UINT32_(0x00)      /* (SERCOM_USART_EXT_CTRLA) USART_EXT Control A Offset */
#define SERCOM_USART_INT_CTRLA_REG_OFST _UINT32_(0x00)      /* (SERCOM_USART_INT_CTRLA) USART_INT Control A Offset */
#define SERCOM_I2CM_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_I2CM_CTRLB) I2CM Control B Offset */
#define SERCOM_I2CS_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_I2CS_CTRLB) I2CS Control B Offset */
#define SERCOM_SPIM_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_SPIM_CTRLB) SPIM Control B Offset */
#define SERCOM_SPIS_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_SPIS_CTRLB) SPIS Control B Offset */
#define SERCOM_USART_EXT_CTRLB_REG_OFST _UINT32_(0x04)      /* (SERCOM_USART_EXT_CTRLB) USART_EXT Control B Offset */
#define SERCOM_USART_INT_CTRLB_REG_OFST _UINT32_(0x04)      /* (SERCOM_USART_INT_CTRLB) USART_INT Control B Offset */
#define SERCOM_I2CM_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_I2CM_CTRLC) I2CM Control C Offset */
#define SERCOM_I2CS_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_I2CS_CTRLC) I2CS Control C Offset */
#define SERCOM_SPIM_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_SPIM_CTRLC) SPIM Control C Offset */
#define SERCOM_SPIS_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_SPIS_CTRLC) SPIS Control C Offset */
#define SERCOM_USART_EXT_CTRLC_REG_OFST _UINT32_(0x08)      /* (SERCOM_USART_EXT_CTRLC) USART_EXT Control C Offset */
#define SERCOM_USART_INT_CTRLC_REG_OFST _UINT32_(0x08)      /* (SERCOM_USART_INT_CTRLC) USART_INT Control C Offset */
#define SERCOM_I2CM_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_I2CM_BAUD) I2CM Baud Rate Offset */
#define SERCOM_SPIM_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_SPIM_BAUD) SPIM Baud Rate Offset */
#define SERCOM_SPIS_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_SPIS_BAUD) SPIS Baud Rate Offset */
#define SERCOM_USART_EXT_BAUD_REG_OFST _UINT32_(0x0C)      /* (SERCOM_USART_EXT_BAUD) USART_EXT Baud Rate Offset */
#define SERCOM_USART_INT_BAUD_REG_OFST _UINT32_(0x0C)      /* (SERCOM_USART_INT_BAUD) USART_INT Baud Rate Offset */
#define SERCOM_USART_EXT_RXPL_REG_OFST _UINT32_(0x0E)      /* (SERCOM_USART_EXT_RXPL) USART_EXT Receive Pulse Length Offset */
#define SERCOM_USART_INT_RXPL_REG_OFST _UINT32_(0x0E)      /* (SERCOM_USART_INT_RXPL) USART_INT Receive Pulse Length Offset */
#define SERCOM_I2CM_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear Offset */
#define SERCOM_I2CS_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear Offset */
#define SERCOM_SPIM_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_SPIM_INTENCLR) SPIM Interrupt Enable Clear Offset */
#define SERCOM_SPIS_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_SPIS_INTENCLR) SPIS Interrupt Enable Clear Offset */
#define SERCOM_USART_EXT_INTENCLR_REG_OFST _UINT32_(0x14)      /* (SERCOM_USART_EXT_INTENCLR) USART_EXT Interrupt Enable Clear Offset */
#define SERCOM_USART_INT_INTENCLR_REG_OFST _UINT32_(0x14)      /* (SERCOM_USART_INT_INTENCLR) USART_INT Interrupt Enable Clear Offset */
#define SERCOM_I2CM_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set Offset */
#define SERCOM_I2CS_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set Offset */
#define SERCOM_SPIM_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_SPIM_INTENSET) SPIM Interrupt Enable Set Offset */
#define SERCOM_SPIS_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_SPIS_INTENSET) SPIS Interrupt Enable Set Offset */
#define SERCOM_USART_EXT_INTENSET_REG_OFST _UINT32_(0x16)      /* (SERCOM_USART_EXT_INTENSET) USART_EXT Interrupt Enable Set Offset */
#define SERCOM_USART_INT_INTENSET_REG_OFST _UINT32_(0x16)      /* (SERCOM_USART_INT_INTENSET) USART_INT Interrupt Enable Set Offset */
#define SERCOM_I2CM_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear Offset */
#define SERCOM_I2CS_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear Offset */
#define SERCOM_SPIM_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_SPIM_INTFLAG) SPIM Interrupt Flag Status and Clear Offset */
#define SERCOM_SPIS_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_SPIS_INTFLAG) SPIS Interrupt Flag Status and Clear Offset */
#define SERCOM_USART_EXT_INTFLAG_REG_OFST _UINT32_(0x18)      /* (SERCOM_USART_EXT_INTFLAG) USART_EXT Interrupt Flag Status and Clear Offset */
#define SERCOM_USART_INT_INTFLAG_REG_OFST _UINT32_(0x18)      /* (SERCOM_USART_INT_INTFLAG) USART_INT Interrupt Flag Status and Clear Offset */
#define SERCOM_I2CM_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_I2CM_STATUS) I2CM Status Offset */
#define SERCOM_I2CS_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_I2CS_STATUS) I2CS Status Offset */
#define SERCOM_SPIM_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_SPIM_STATUS) SPIM Status Offset */
#define SERCOM_SPIS_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_SPIS_STATUS) SPIS Status Offset */
#define SERCOM_USART_EXT_STATUS_REG_OFST _UINT32_(0x1A)      /* (SERCOM_USART_EXT_STATUS) USART_EXT Status Offset */
#define SERCOM_USART_INT_STATUS_REG_OFST _UINT32_(0x1A)      /* (SERCOM_USART_INT_STATUS) USART_INT Status Offset */
#define SERCOM_I2CM_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy Offset */
#define SERCOM_I2CS_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy Offset */
#define SERCOM_SPIM_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_SPIM_SYNCBUSY) SPIM Synchronization Busy Offset */
#define SERCOM_SPIS_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_SPIS_SYNCBUSY) SPIS Synchronization Busy Offset */
#define SERCOM_USART_EXT_SYNCBUSY_REG_OFST _UINT32_(0x1C)      /* (SERCOM_USART_EXT_SYNCBUSY) USART_EXT Synchronization Busy Offset */
#define SERCOM_USART_INT_SYNCBUSY_REG_OFST _UINT32_(0x1C)      /* (SERCOM_USART_INT_SYNCBUSY) USART_INT Synchronization Busy Offset */
#define SERCOM_USART_EXT_RXERRCNT_REG_OFST _UINT32_(0x20)      /* (SERCOM_USART_EXT_RXERRCNT) USART_EXT Receive Error Count Offset */
#define SERCOM_USART_INT_RXERRCNT_REG_OFST _UINT32_(0x20)      /* (SERCOM_USART_INT_RXERRCNT) USART_INT Receive Error Count Offset */
#define SERCOM_I2CS_LENGTH_REG_OFST    _UINT32_(0x22)      /* (SERCOM_I2CS_LENGTH) I2CS Length Offset */
#define SERCOM_SPIM_LENGTH_REG_OFST    _UINT32_(0x22)      /* (SERCOM_SPIM_LENGTH) SPIM Length Offset */
#define SERCOM_SPIS_LENGTH_REG_OFST    _UINT32_(0x22)      /* (SERCOM_SPIS_LENGTH) SPIS Length Offset */
#define SERCOM_USART_EXT_LENGTH_REG_OFST _UINT32_(0x22)      /* (SERCOM_USART_EXT_LENGTH) USART_EXT Length Offset */
#define SERCOM_USART_INT_LENGTH_REG_OFST _UINT32_(0x22)      /* (SERCOM_USART_INT_LENGTH) USART_INT Length Offset */
#define SERCOM_I2CM_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_I2CM_ADDR) I2CM Address Offset */
#define SERCOM_I2CS_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_I2CS_ADDR) I2CS Address Offset */
#define SERCOM_SPIM_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_SPIM_ADDR) SPIM Address Offset */
#define SERCOM_SPIS_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_SPIS_ADDR) SPIS Address Offset */
#define SERCOM_I2CM_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_I2CM_DATA) I2CM Data Offset */
#define SERCOM_I2CS_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_I2CS_DATA) I2CS Data Offset */
#define SERCOM_SPIM_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_SPIM_DATA) SPIM Data Offset */
#define SERCOM_SPIS_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_SPIS_DATA) SPIS Data Offset */
#define SERCOM_USART_EXT_DATA_REG_OFST _UINT32_(0x28)      /* (SERCOM_USART_EXT_DATA) USART_EXT Data Offset */
#define SERCOM_USART_INT_DATA_REG_OFST _UINT32_(0x28)      /* (SERCOM_USART_INT_DATA) USART_INT Data Offset */
#define SERCOM_I2CM_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_I2CM_DBGCTRL) I2CM Debug Control Offset */
#define SERCOM_SPIM_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_SPIM_DBGCTRL) SPIM Debug Control Offset */
#define SERCOM_SPIS_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_SPIS_DBGCTRL) SPIS Debug Control Offset */
#define SERCOM_USART_EXT_DBGCTRL_REG_OFST _UINT32_(0x30)      /* (SERCOM_USART_EXT_DBGCTRL) USART_EXT Debug Control Offset */
#define SERCOM_USART_INT_DBGCTRL_REG_OFST _UINT32_(0x30)      /* (SERCOM_USART_INT_DBGCTRL) USART_INT Debug Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SERCOM I2C Master register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /**< Offset: 0x00 (R/W  32) I2CM Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /**< Offset: 0x04 (R/W  32) I2CM Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /**< Offset: 0x08 (R/W  32) I2CM Control C */
  __IO  uint32_t                       SERCOM_BAUD;        /**< Offset: 0x0C (R/W  32) I2CM Baud Rate */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint8_t                        SERCOM_INTENCLR;    /**< Offset: 0x14 (R/W  8) I2CM Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /**< Offset: 0x16 (R/W  8) I2CM Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /**< Offset: 0x18 (R/W  8) I2CM Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /**< Offset: 0x1A (R/W  16) I2CM Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /**< Offset: 0x1C (R/   32) I2CM Synchronization Busy */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SERCOM_ADDR;        /**< Offset: 0x24 (R/W  32) I2CM Address */
  __IO  uint32_t                       SERCOM_DATA;        /**< Offset: 0x28 (R/W  32) I2CM Data */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /**< Offset: 0x30 (R/W  8) I2CM Debug Control */
} sercom_i2cm_registers_t;

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* I2C Master Mode */
  __IO SERCOM_I2CM_CTRLA_Type    CTRLA;       /**< \brief Offset: 0x00 (R/W 32) I2CM Control A */
  __IO SERCOM_I2CM_CTRLB_Type    CTRLB;       /**< \brief Offset: 0x04 (R/W 32) I2CM Control B */
  __IO SERCOM_I2CM_CTRLC_Type    CTRLC;       /**< \brief Offset: 0x08 (R/W 32) I2CM Control C */
  __IO SERCOM_I2CM_BAUD_Type     BAUD;        /**< \brief Offset: 0x0C (R/W 32) I2CM Baud Rate */
       RoReg8                    Reserved1[0x4];
  __IO SERCOM_I2CM_INTENCLR_Type INTENCLR;    /**< \brief Offset: 0x14 (R/W  8) I2CM Interrupt Enable Clear */
       RoReg8                    Reserved2[0x1];
  __IO SERCOM_I2CM_INTENSET_Type INTENSET;    /**< \brief Offset: 0x16 (R/W  8) I2CM Interrupt Enable Set */
       RoReg8                    Reserved3[0x1];
  __IO SERCOM_I2CM_INTFLAG_Type  INTFLAG;     /**< \brief Offset: 0x18 (R/W  8) I2CM Interrupt Flag Status and Clear */
       RoReg8                    Reserved4[0x1];
  __IO SERCOM_I2CM_STATUS_Type   STATUS;      /**< \brief Offset: 0x1A (R/W 16) I2CM Status */
  __I  SERCOM_I2CM_SYNCBUSY_Type SYNCBUSY;    /**< \brief Offset: 0x1C (R/  32) I2CM Synchronization Busy */
       RoReg8                    Reserved5[0x4];
  __IO SERCOM_I2CM_ADDR_Type     ADDR;        /**< \brief Offset: 0x24 (R/W 32) I2CM Address */
  __IO SERCOM_I2CM_DATA_Type     DATA;        /**< \brief Offset: 0x28 (R/W 32) I2CM Data */
       RoReg8                    Reserved6[0x4];
  __IO SERCOM_I2CM_DBGCTRL_Type  DBGCTRL;     /**< \brief Offset: 0x30 (R/W  8) I2CM Debug Control */
} SercomI2cm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief SERCOM I2C Slave register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /**< Offset: 0x00 (R/W  32) I2CS Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /**< Offset: 0x04 (R/W  32) I2CS Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /**< Offset: 0x08 (R/W  32) I2CS Control C */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint8_t                        SERCOM_INTENCLR;    /**< Offset: 0x14 (R/W  8) I2CS Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /**< Offset: 0x16 (R/W  8) I2CS Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /**< Offset: 0x18 (R/W  8) I2CS Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /**< Offset: 0x1A (R/W  16) I2CS Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /**< Offset: 0x1C (R/   32) I2CS Synchronization Busy */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       SERCOM_LENGTH;      /**< Offset: 0x22 (R/W  16) I2CS Length */
  __IO  uint32_t                       SERCOM_ADDR;        /**< Offset: 0x24 (R/W  32) I2CS Address */
  __IO  uint32_t                       SERCOM_DATA;        /**< Offset: 0x28 (R/W  32) I2CS Data */
} sercom_i2cs_registers_t;

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* I2C Slave Mode */
  __IO SERCOM_I2CS_CTRLA_Type    CTRLA;       /**< \brief Offset: 0x00 (R/W 32) I2CS Control A */
  __IO SERCOM_I2CS_CTRLB_Type    CTRLB;       /**< \brief Offset: 0x04 (R/W 32) I2CS Control B */
  __IO SERCOM_I2CS_CTRLC_Type    CTRLC;       /**< \brief Offset: 0x08 (R/W 32) I2CS Control C */
       RoReg8                    Reserved1[0x8];
  __IO SERCOM_I2CS_INTENCLR_Type INTENCLR;    /**< \brief Offset: 0x14 (R/W  8) I2CS Interrupt Enable Clear */
       RoReg8                    Reserved2[0x1];
  __IO SERCOM_I2CS_INTENSET_Type INTENSET;    /**< \brief Offset: 0x16 (R/W  8) I2CS Interrupt Enable Set */
       RoReg8                    Reserved3[0x1];
  __IO SERCOM_I2CS_INTFLAG_Type  INTFLAG;     /**< \brief Offset: 0x18 (R/W  8) I2CS Interrupt Flag Status and Clear */
       RoReg8                    Reserved4[0x1];
  __IO SERCOM_I2CS_STATUS_Type   STATUS;      /**< \brief Offset: 0x1A (R/W 16) I2CS Status */
  __I  SERCOM_I2CS_SYNCBUSY_Type SYNCBUSY;    /**< \brief Offset: 0x1C (R/  32) I2CS Synchronization Busy */
       RoReg8                    Reserved5[0x2];
  __IO SERCOM_I2CS_LENGTH_Type   LENGTH;      /**< \brief Offset: 0x22 (R/W 16) I2CS Length */
  __IO SERCOM_I2CS_ADDR_Type     ADDR;        /**< \brief Offset: 0x24 (R/W 32) I2CS Address */
  __IO SERCOM_I2CS_DATA_Type     DATA;        /**< \brief Offset: 0x28 (R/W 32) I2CS Data */
} SercomI2cs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


/** \brief SERCOM SPI Slave register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /**< Offset: 0x00 (R/W  32) SPIS Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /**< Offset: 0x04 (R/W  32) SPIS Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /**< Offset: 0x08 (R/W  32) SPIS Control C */
  __IO  uint8_t                        SERCOM_BAUD;        /**< Offset: 0x0C (R/W  8) SPIS Baud Rate */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint8_t                        SERCOM_INTENCLR;    /**< Offset: 0x14 (R/W  8) SPIS Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /**< Offset: 0x16 (R/W  8) SPIS Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /**< Offset: 0x18 (R/W  8) SPIS Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /**< Offset: 0x1A (R/W  16) SPIS Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /**< Offset: 0x1C (R/   32) SPIS Synchronization Busy */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       SERCOM_LENGTH;      /**< Offset: 0x22 (R/W  16) SPIS Length */
  __IO  uint32_t                       SERCOM_ADDR;        /**< Offset: 0x24 (R/W  32) SPIS Address */
  __IO  uint32_t                       SERCOM_DATA;        /**< Offset: 0x28 (R/W  32) SPIS Data */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /**< Offset: 0x30 (R/W  8) SPIS Debug Control */
} sercom_spis_registers_t;

/** \brief SERCOM SPI Master register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /**< Offset: 0x00 (R/W  32) SPIM Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /**< Offset: 0x04 (R/W  32) SPIM Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /**< Offset: 0x08 (R/W  32) SPIM Control C */
  __IO  uint8_t                        SERCOM_BAUD;        /**< Offset: 0x0C (R/W  8) SPIM Baud Rate */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint8_t                        SERCOM_INTENCLR;    /**< Offset: 0x14 (R/W  8) SPIM Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /**< Offset: 0x16 (R/W  8) SPIM Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /**< Offset: 0x18 (R/W  8) SPIM Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /**< Offset: 0x1A (R/W  16) SPIM Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /**< Offset: 0x1C (R/   32) SPIM Synchronization Busy */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       SERCOM_LENGTH;      /**< Offset: 0x22 (R/W  16) SPIM Length */
  __IO  uint32_t                       SERCOM_ADDR;        /**< Offset: 0x24 (R/W  32) SPIM Address */
  __IO  uint32_t                       SERCOM_DATA;        /**< Offset: 0x28 (R/W  32) SPIM Data */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /**< Offset: 0x30 (R/W  8) SPIM Debug Control */
} sercom_spim_registers_t;

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* SPI Mode */
  __IO SERCOM_SPI_CTRLA_Type     CTRLA;       /**< \brief Offset: 0x00 (R/W 32) SPI Control A */
  __IO SERCOM_SPI_CTRLB_Type     CTRLB;       /**< \brief Offset: 0x04 (R/W 32) SPI Control B */
  __IO SERCOM_SPI_CTRLC_Type     CTRLC;       /**< \brief Offset: 0x08 (R/W 32) SPI Control C */
  __IO SERCOM_SPI_BAUD_Type      BAUD;        /**< \brief Offset: 0x0C (R/W  8) SPI Baud Rate */
       RoReg8                    Reserved1[0x7];
  __IO SERCOM_SPI_INTENCLR_Type  INTENCLR;    /**< \brief Offset: 0x14 (R/W  8) SPI Interrupt Enable Clear */
       RoReg8                    Reserved2[0x1];
  __IO SERCOM_SPI_INTENSET_Type  INTENSET;    /**< \brief Offset: 0x16 (R/W  8) SPI Interrupt Enable Set */
       RoReg8                    Reserved3[0x1];
  __IO SERCOM_SPI_INTFLAG_Type   INTFLAG;     /**< \brief Offset: 0x18 (R/W  8) SPI Interrupt Flag Status and Clear */
       RoReg8                    Reserved4[0x1];
  __IO SERCOM_SPI_STATUS_Type    STATUS;      /**< \brief Offset: 0x1A (R/W 16) SPI Status */
  __I  SERCOM_SPI_SYNCBUSY_Type  SYNCBUSY;    /**< \brief Offset: 0x1C (R/  32) SPI Synchronization Busy */
       RoReg8                    Reserved5[0x2];
  __IO SERCOM_SPI_LENGTH_Type    LENGTH;      /**< \brief Offset: 0x22 (R/W 16) SPI Length */
  __IO SERCOM_SPI_ADDR_Type      ADDR;        /**< \brief Offset: 0x24 (R/W 32) SPI Address */
  __IO SERCOM_SPI_DATA_Type      DATA;        /**< \brief Offset: 0x28 (R/W 32) SPI Data */
       RoReg8                    Reserved6[0x4];
  __IO SERCOM_SPI_DBGCTRL_Type   DBGCTRL;     /**< \brief Offset: 0x30 (R/W  8) SPI Debug Control */
} SercomSpi;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief SERCOM USART External register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /**< Offset: 0x00 (R/W  32) USART_EXT Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /**< Offset: 0x04 (R/W  32) USART_EXT Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /**< Offset: 0x08 (R/W  32) USART_EXT Control C */
  __IO  uint16_t                       SERCOM_BAUD;        /**< Offset: 0x0C (R/W  16) USART_EXT Baud Rate */
  __IO  uint8_t                        SERCOM_RXPL;        /**< Offset: 0x0E (R/W  8) USART_EXT Receive Pulse Length */
  __I   uint8_t                        Reserved1[0x05];
  __IO  uint8_t                        SERCOM_INTENCLR;    /**< Offset: 0x14 (R/W  8) USART_EXT Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /**< Offset: 0x16 (R/W  8) USART_EXT Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /**< Offset: 0x18 (R/W  8) USART_EXT Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /**< Offset: 0x1A (R/W  16) USART_EXT Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /**< Offset: 0x1C (R/   32) USART_EXT Synchronization Busy */
  __I   uint8_t                        SERCOM_RXERRCNT;    /**< Offset: 0x20 (R/   8) USART_EXT Receive Error Count */
  __I   uint8_t                        Reserved5[0x01];
  __IO  uint16_t                       SERCOM_LENGTH;      /**< Offset: 0x22 (R/W  16) USART_EXT Length */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SERCOM_DATA;        /**< Offset: 0x28 (R/W  32) USART_EXT Data */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /**< Offset: 0x30 (R/W  8) USART_EXT Debug Control */
} sercom_usart_ext_registers_t;

/** \brief SERCOM USART Internal register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /**< Offset: 0x00 (R/W  32) USART_INT Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /**< Offset: 0x04 (R/W  32) USART_INT Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /**< Offset: 0x08 (R/W  32) USART_INT Control C */
  __IO  uint16_t                       SERCOM_BAUD;        /**< Offset: 0x0C (R/W  16) USART_INT Baud Rate */
  __IO  uint8_t                        SERCOM_RXPL;        /**< Offset: 0x0E (R/W  8) USART_INT Receive Pulse Length */
  __I   uint8_t                        Reserved1[0x05];
  __IO  uint8_t                        SERCOM_INTENCLR;    /**< Offset: 0x14 (R/W  8) USART_INT Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /**< Offset: 0x16 (R/W  8) USART_INT Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /**< Offset: 0x18 (R/W  8) USART_INT Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /**< Offset: 0x1A (R/W  16) USART_INT Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /**< Offset: 0x1C (R/   32) USART_INT Synchronization Busy */
  __I   uint8_t                        SERCOM_RXERRCNT;    /**< Offset: 0x20 (R/   8) USART_INT Receive Error Count */
  __I   uint8_t                        Reserved5[0x01];
  __IO  uint16_t                       SERCOM_LENGTH;      /**< Offset: 0x22 (R/W  16) USART_INT Length */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SERCOM_DATA;        /**< Offset: 0x28 (R/W  32) USART_INT Data */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /**< Offset: 0x30 (R/W  8) USART_INT Debug Control */
} sercom_usart_int_registers_t;

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* USART Mode */
  __IO SERCOM_USART_CTRLA_Type   CTRLA;       /**< \brief Offset: 0x00 (R/W 32) USART Control A */
  __IO SERCOM_USART_CTRLB_Type   CTRLB;       /**< \brief Offset: 0x04 (R/W 32) USART Control B */
  __IO SERCOM_USART_CTRLC_Type   CTRLC;       /**< \brief Offset: 0x08 (R/W 32) USART Control C */
  __IO SERCOM_USART_BAUD_Type    BAUD;        /**< \brief Offset: 0x0C (R/W 16) USART Baud Rate */
  __IO SERCOM_USART_RXPL_Type    RXPL;        /**< \brief Offset: 0x0E (R/W  8) USART Receive Pulse Length */
       RoReg8                    Reserved1[0x5];
  __IO SERCOM_USART_INTENCLR_Type INTENCLR;    /**< \brief Offset: 0x14 (R/W  8) USART Interrupt Enable Clear */
       RoReg8                    Reserved2[0x1];
  __IO SERCOM_USART_INTENSET_Type INTENSET;    /**< \brief Offset: 0x16 (R/W  8) USART Interrupt Enable Set */
       RoReg8                    Reserved3[0x1];
  __IO SERCOM_USART_INTFLAG_Type INTFLAG;     /**< \brief Offset: 0x18 (R/W  8) USART Interrupt Flag Status and Clear */
       RoReg8                    Reserved4[0x1];
  __IO SERCOM_USART_STATUS_Type  STATUS;      /**< \brief Offset: 0x1A (R/W 16) USART Status */
  __I  SERCOM_USART_SYNCBUSY_Type SYNCBUSY;    /**< \brief Offset: 0x1C (R/  32) USART Synchronization Busy */
  __I  SERCOM_USART_RXERRCNT_Type RXERRCNT;    /**< \brief Offset: 0x20 (R/   8) USART Receive Error Count */
       RoReg8                    Reserved5[0x1];
  __IO SERCOM_USART_LENGTH_Type  LENGTH;      /**< \brief Offset: 0x22 (R/W 16) USART Length */
       RoReg8                    Reserved6[0x4];
  __IO SERCOM_USART_DATA_Type    DATA;        /**< \brief Offset: 0x28 (R/W 32) USART Data */
       RoReg8                    Reserved7[0x4];
  __IO SERCOM_USART_DBGCTRL_Type DBGCTRL;     /**< \brief Offset: 0x30 (R/W  8) USART Debug Control */
} SercomUsart;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


/** \brief SERCOM hardware registers */
typedef union
{  /* Serial Communication Interface */
       sercom_i2cm_registers_t        I2CM;           /**< I2C Master Mode */
       sercom_i2cs_registers_t        I2CS;           /**< I2C Slave Mode */
       sercom_spis_registers_t        SPIS;           /**< SPI Slave Mode */
       sercom_spim_registers_t        SPIM;           /**< SPI Master Mode */
       sercom_usart_ext_registers_t   USART_EXT;      /**< USART EXTERNAL CLOCK Mode */
       sercom_usart_int_registers_t   USART_INT;      /**< USART INTERNAL CLOCK Mode */
} sercom_registers_t;

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
       SercomI2cm                I2CM;        /**< \brief Offset: 0x00 I2C Master Mode */
       SercomI2cs                I2CS;        /**< \brief Offset: 0x00 I2C Slave Mode */
       SercomSpi                 SPI;         /**< \brief Offset: 0x00 SPI Mode */
       SercomUsart               USART;       /**< \brief Offset: 0x00 USART Mode */
} Sercom;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXSG41_SERCOM_COMPONENT_H_ */
