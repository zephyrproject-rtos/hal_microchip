/*
 * Component description for SERCOM
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
#ifndef _PIC32CMPL10_SERCOM_COMPONENT_H_
#define _PIC32CMPL10_SERCOM_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SERCOM                     */
/* ************************************************************************** */

/* -------- SERCOM_I2CM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CM Control A -------- */
#define SERCOM_I2CM_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLA) I2CM Control A  Reset Value */

#define SERCOM_I2CM_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_I2CM_CTRLA) Software Reset Position */
#define SERCOM_I2CM_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SWRST_Pos)       /* (SERCOM_I2CM_CTRLA) Software Reset Mask */
#define SERCOM_I2CM_CTRLA_SWRST(value)        (SERCOM_I2CM_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_I2CM_CTRLA) Enable Position */
#define SERCOM_I2CM_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_ENABLE_Pos)      /* (SERCOM_I2CM_CTRLA) Enable Mask */
#define SERCOM_I2CM_CTRLA_ENABLE(value)       (SERCOM_I2CM_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_I2CM_CTRLA) Operating Mode Position */
#define SERCOM_I2CM_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_I2CM_CTRLA_MODE_Pos)        /* (SERCOM_I2CM_CTRLA) Operating Mode Mask */
#define SERCOM_I2CM_CTRLA_MODE(value)         (SERCOM_I2CM_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_MODE_USART_EXT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) USART with external clock  */
#define   SERCOM_I2CM_CTRLA_MODE_USART_INT_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) USART with internal clock  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) SPI Client mode  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) SPI Host mode  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_I2CM_CTRLA) I2C Client mode  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_I2CM_CTRLA) I2C Host mode  */
#define SERCOM_I2CM_CTRLA_MODE_USART_EXT      (SERCOM_I2CM_CTRLA_MODE_USART_EXT_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) USART with external clock Position */
#define SERCOM_I2CM_CTRLA_MODE_USART_INT      (SERCOM_I2CM_CTRLA_MODE_USART_INT_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) USART with internal clock Position */
#define SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE      (SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) SPI Client mode Position */
#define SERCOM_I2CM_CTRLA_MODE_SPI_MASTER     (SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) SPI Host mode Position */
#define SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE      (SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) I2C Client mode Position */
#define SERCOM_I2CM_CTRLA_MODE_I2C_MASTER     (SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) I2C Host mode Position */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_I2CM_CTRLA) Run in Standby Position */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_I2CM_CTRLA) Run in Standby Mask */
#define SERCOM_I2CM_CTRLA_RUNSTDBY(value)     (SERCOM_I2CM_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_PINOUT_Pos          _UINT32_(16)                                         /* (SERCOM_I2CM_CTRLA) Pin Usage Position */
#define SERCOM_I2CM_CTRLA_PINOUT_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_PINOUT_Pos)      /* (SERCOM_I2CM_CTRLA) Pin Usage Mask */
#define SERCOM_I2CM_CTRLA_PINOUT(value)       (SERCOM_I2CM_CTRLA_PINOUT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_PINOUT_Pos)) /* Assignment of value for PINOUT in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Pos         _UINT32_(20)                                         /* (SERCOM_I2CM_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Msk         (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)     /* (SERCOM_I2CM_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CM_CTRLA_SDAHOLD(value)      (SERCOM_I2CM_CTRLA_SDAHOLD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)) /* Assignment of value for SDAHOLD in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_DIS_Val   _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) SDA hold time is disabled  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) SDA hold time is 50-100 ns  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) SDA hold time is 300-600 ns  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) SDA hold time is 400-800 ns  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_DIS         (SERCOM_I2CM_CTRLA_SDAHOLD_DIS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) SDA hold time is disabled Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_75NS        (SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) SDA hold time is 50-100 ns Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_450NS       (SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) SDA hold time is 300-600 ns Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_600NS       (SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) SDA hold time is 400-800 ns Position */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Pos        _UINT32_(22)                                         /* (SERCOM_I2CM_CTRLA) Host SCL Low Extend Time-Out Position */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)    /* (SERCOM_I2CM_CTRLA) Host SCL Low Extend Time-Out Mask */
#define SERCOM_I2CM_CTRLA_MEXTTOEN(value)     (SERCOM_I2CM_CTRLA_MEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)) /* Assignment of value for MEXTTOEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Pos        _UINT32_(23)                                         /* (SERCOM_I2CM_CTRLA) Client SCL Low Extend Time-Out Position */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)    /* (SERCOM_I2CM_CTRLA) Client SCL Low Extend Time-Out Mask */
#define SERCOM_I2CM_CTRLA_SEXTTOEN(value)     (SERCOM_I2CM_CTRLA_SEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)) /* Assignment of value for SEXTTOEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SPEED_Pos           _UINT32_(24)                                         /* (SERCOM_I2CM_CTRLA) Transfer Speed Position */
#define SERCOM_I2CM_CTRLA_SPEED_Msk           (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SPEED_Pos)       /* (SERCOM_I2CM_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CM_CTRLA_SPEED(value)        (SERCOM_I2CM_CTRLA_SPEED_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SPEED_Pos)) /* Assignment of value for SPEED in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SPEED_SM_MODE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Standard-mode (Sm) and Fast-mode (Fm)  */
#define   SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) Fast-mode Plus (Fm+)  */
#define SERCOM_I2CM_CTRLA_SPEED_SM_MODE       (SERCOM_I2CM_CTRLA_SPEED_SM_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) Standard-mode (Sm) and Fast-mode (Fm) Position */
#define SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE (SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) Fast-mode Plus (Fm+) Position */
#define SERCOM_I2CM_CTRLA_SCLSM_Pos           _UINT32_(27)                                         /* (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CM_CTRLA_SCLSM_Msk           (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SCLSM_Pos)       /* (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CM_CTRLA_SCLSM(value)        (SERCOM_I2CM_CTRLA_SCLSM_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SCLSM_Pos)) /* Assignment of value for SCLSM in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_INACTOUT_Pos        _UINT32_(28)                                         /* (SERCOM_I2CM_CTRLA) Inactive Time-Out Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_Msk        (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)    /* (SERCOM_I2CM_CTRLA) Inactive Time-Out Mask */
#define SERCOM_I2CM_CTRLA_INACTOUT(value)     (SERCOM_I2CM_CTRLA_INACTOUT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)) /* Assignment of value for INACTOUT in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_INACTOUT_DIS_Val  _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Disabled  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_55US_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) 5-6 SCL cycle time-out (50-60 us)  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_105US_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) 10-11 SCL cycle time-out (100-110 us)  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_205US_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) 20-21 SCL cycle time-out (200-210 us)  */
#define SERCOM_I2CM_CTRLA_INACTOUT_DIS        (SERCOM_I2CM_CTRLA_INACTOUT_DIS_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) Disabled Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_55US       (SERCOM_I2CM_CTRLA_INACTOUT_55US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 5-6 SCL cycle time-out (50-60 us) Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_105US      (SERCOM_I2CM_CTRLA_INACTOUT_105US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 10-11 SCL cycle time-out (100-110 us) Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_205US      (SERCOM_I2CM_CTRLA_INACTOUT_205US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 20-21 SCL cycle time-out (200-210 us) Position */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos       _UINT32_(30)                                         /* (SERCOM_I2CM_CTRLA) SCL Low Time-Out Position */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk       (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)   /* (SERCOM_I2CM_CTRLA) SCL Low Time-Out Mask */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN(value)    (SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)) /* Assignment of value for LOWTOUTEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_Msk                 _UINT32_(0x7BF1009F)                                 /* (SERCOM_I2CM_CTRLA) Register Mask  */


/* -------- SERCOM_I2CS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CS Control A -------- */
#define SERCOM_I2CS_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLA) I2CS Control A  Reset Value */

#define SERCOM_I2CS_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_I2CS_CTRLA) Software Reset Position */
#define SERCOM_I2CS_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SWRST_Pos)       /* (SERCOM_I2CS_CTRLA) Software Reset Mask */
#define SERCOM_I2CS_CTRLA_SWRST(value)        (SERCOM_I2CS_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_I2CS_CTRLA) Enable Position */
#define SERCOM_I2CS_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_ENABLE_Pos)      /* (SERCOM_I2CS_CTRLA) Enable Mask */
#define SERCOM_I2CS_CTRLA_ENABLE(value)       (SERCOM_I2CS_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_I2CS_CTRLA) Operating Mode Position */
#define SERCOM_I2CS_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_I2CS_CTRLA_MODE_Pos)        /* (SERCOM_I2CS_CTRLA) Operating Mode Mask */
#define SERCOM_I2CS_CTRLA_MODE(value)         (SERCOM_I2CS_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_MODE_USART_EXT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) USART with external clock  */
#define   SERCOM_I2CS_CTRLA_MODE_USART_INT_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) USART with internal clock  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) SPI Client mode  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) SPI Host mode  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_I2CS_CTRLA) I2C Client mode  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_I2CS_CTRLA) I2C Host mode  */
#define SERCOM_I2CS_CTRLA_MODE_USART_EXT      (SERCOM_I2CS_CTRLA_MODE_USART_EXT_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) USART with external clock Position */
#define SERCOM_I2CS_CTRLA_MODE_USART_INT      (SERCOM_I2CS_CTRLA_MODE_USART_INT_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) USART with internal clock Position */
#define SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE      (SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) SPI Client mode Position */
#define SERCOM_I2CS_CTRLA_MODE_SPI_MASTER     (SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) SPI Host mode Position */
#define SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE      (SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) I2C Client mode Position */
#define SERCOM_I2CS_CTRLA_MODE_I2C_MASTER     (SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) I2C Host mode Position */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_I2CS_CTRLA) Run in Standby Position */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_I2CS_CTRLA) Run in Standby Mask */
#define SERCOM_I2CS_CTRLA_RUNSTDBY(value)     (SERCOM_I2CS_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_PINOUT_Pos          _UINT32_(16)                                         /* (SERCOM_I2CS_CTRLA) Pin Usage Position */
#define SERCOM_I2CS_CTRLA_PINOUT_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_PINOUT_Pos)      /* (SERCOM_I2CS_CTRLA) Pin Usage Mask */
#define SERCOM_I2CS_CTRLA_PINOUT(value)       (SERCOM_I2CS_CTRLA_PINOUT_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_PINOUT_Pos)) /* Assignment of value for PINOUT in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Pos         _UINT32_(20)                                         /* (SERCOM_I2CS_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Msk         (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)     /* (SERCOM_I2CS_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CS_CTRLA_SDAHOLD(value)      (SERCOM_I2CS_CTRLA_SDAHOLD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)) /* Assignment of value for SDAHOLD in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_DIS_Val   _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Disabled  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) 50-100 ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) 300-600 ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) 400-800 ns hold time  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_DIS         (SERCOM_I2CS_CTRLA_SDAHOLD_DIS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) Disabled Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_75NS        (SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 50-100 ns hold time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_450NS       (SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 300-600 ns hold time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_600NS       (SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 400-800 ns hold time Position */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Pos        _UINT32_(23)                                         /* (SERCOM_I2CS_CTRLA) Client SCL Low Extend Time-Out Position */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)    /* (SERCOM_I2CS_CTRLA) Client SCL Low Extend Time-Out Mask */
#define SERCOM_I2CS_CTRLA_SEXTTOEN(value)     (SERCOM_I2CS_CTRLA_SEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)) /* Assignment of value for SEXTTOEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SPEED_Pos           _UINT32_(24)                                         /* (SERCOM_I2CS_CTRLA) Transfer Speed Position */
#define SERCOM_I2CS_CTRLA_SPEED_Msk           (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SPEED_Pos)       /* (SERCOM_I2CS_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CS_CTRLA_SPEED(value)        (SERCOM_I2CS_CTRLA_SPEED_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SPEED_Pos)) /* Assignment of value for SPEED in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SPEED_SM_MODE_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Standard-mode (Sm) and Fast-mode (Fm)  */
#define   SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) Fast-mode Plus (Fm+)  */
#define SERCOM_I2CS_CTRLA_SPEED_SM_MODE       (SERCOM_I2CS_CTRLA_SPEED_SM_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) Standard-mode (Sm) and Fast-mode (Fm) Position */
#define SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE (SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) Fast-mode Plus (Fm+) Position */
#define SERCOM_I2CS_CTRLA_SCLSM_Pos           _UINT32_(27)                                         /* (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CS_CTRLA_SCLSM_Msk           (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SCLSM_Pos)       /* (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CS_CTRLA_SCLSM(value)        (SERCOM_I2CS_CTRLA_SCLSM_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SCLSM_Pos)) /* Assignment of value for SCLSM in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos       _UINT32_(30)                                         /* (SERCOM_I2CS_CTRLA) SCL Low Time-Out Position */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk       (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)   /* (SERCOM_I2CS_CTRLA) SCL Low Time-Out Mask */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN(value)    (SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)) /* Assignment of value for LOWTOUTEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_Msk                 _UINT32_(0x4BB1009F)                                 /* (SERCOM_I2CS_CTRLA) Register Mask  */


/* -------- SERCOM_SPI_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPI Control A -------- */
#define SERCOM_SPI_CTRLA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPI_CTRLA) SPI Control A  Reset Value */

#define SERCOM_SPI_CTRLA_SWRST_Pos            _UINT32_(0)                                          /* (SERCOM_SPI_CTRLA) Software Reset Position */
#define SERCOM_SPI_CTRLA_SWRST_Msk            (_UINT32_(0x1) << SERCOM_SPI_CTRLA_SWRST_Pos)        /* (SERCOM_SPI_CTRLA) Software Reset Mask */
#define SERCOM_SPI_CTRLA_SWRST(value)         (SERCOM_SPI_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_SPI_CTRLA register */
#define SERCOM_SPI_CTRLA_ENABLE_Pos           _UINT32_(1)                                          /* (SERCOM_SPI_CTRLA) Enable Position */
#define SERCOM_SPI_CTRLA_ENABLE_Msk           (_UINT32_(0x1) << SERCOM_SPI_CTRLA_ENABLE_Pos)       /* (SERCOM_SPI_CTRLA) Enable Mask */
#define SERCOM_SPI_CTRLA_ENABLE(value)        (SERCOM_SPI_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_SPI_CTRLA register */
#define SERCOM_SPI_CTRLA_MODE_Pos             _UINT32_(2)                                          /* (SERCOM_SPI_CTRLA) Operating Mode Position */
#define SERCOM_SPI_CTRLA_MODE_Msk             (_UINT32_(0x7) << SERCOM_SPI_CTRLA_MODE_Pos)         /* (SERCOM_SPI_CTRLA) Operating Mode Mask */
#define SERCOM_SPI_CTRLA_MODE(value)          (SERCOM_SPI_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_MODE_USART_EXT_Val _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) USART with external clock  */
#define   SERCOM_SPI_CTRLA_MODE_USART_INT_Val _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLA) USART with internal clock  */
#define   SERCOM_SPI_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_SPI_CTRLA) SPI Client mode  */
#define   SERCOM_SPI_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_SPI_CTRLA) SPI Host mode  */
#define   SERCOM_SPI_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_SPI_CTRLA) I2C Client mode  */
#define   SERCOM_SPI_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_SPI_CTRLA) I2C Host mode  */
#define SERCOM_SPI_CTRLA_MODE_USART_EXT       (SERCOM_SPI_CTRLA_MODE_USART_EXT_Val << SERCOM_SPI_CTRLA_MODE_Pos) /* (SERCOM_SPI_CTRLA) USART with external clock Position */
#define SERCOM_SPI_CTRLA_MODE_USART_INT       (SERCOM_SPI_CTRLA_MODE_USART_INT_Val << SERCOM_SPI_CTRLA_MODE_Pos) /* (SERCOM_SPI_CTRLA) USART with internal clock Position */
#define SERCOM_SPI_CTRLA_MODE_SPI_SLAVE       (SERCOM_SPI_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPI_CTRLA_MODE_Pos) /* (SERCOM_SPI_CTRLA) SPI Client mode Position */
#define SERCOM_SPI_CTRLA_MODE_SPI_MASTER      (SERCOM_SPI_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPI_CTRLA_MODE_Pos) /* (SERCOM_SPI_CTRLA) SPI Host mode Position */
#define SERCOM_SPI_CTRLA_MODE_I2C_SLAVE       (SERCOM_SPI_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPI_CTRLA_MODE_Pos) /* (SERCOM_SPI_CTRLA) I2C Client mode Position */
#define SERCOM_SPI_CTRLA_MODE_I2C_MASTER      (SERCOM_SPI_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPI_CTRLA_MODE_Pos) /* (SERCOM_SPI_CTRLA) I2C Host mode Position */
#define SERCOM_SPI_CTRLA_RUNSTDBY_Pos         _UINT32_(7)                                          /* (SERCOM_SPI_CTRLA) Run In Standby Position */
#define SERCOM_SPI_CTRLA_RUNSTDBY_Msk         (_UINT32_(0x1) << SERCOM_SPI_CTRLA_RUNSTDBY_Pos)     /* (SERCOM_SPI_CTRLA) Run In Standby Mask */
#define SERCOM_SPI_CTRLA_RUNSTDBY(value)      (SERCOM_SPI_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_SPI_CTRLA register */
#define SERCOM_SPI_CTRLA_IBON_Pos             _UINT32_(8)                                          /* (SERCOM_SPI_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPI_CTRLA_IBON_Msk             (_UINT32_(0x1) << SERCOM_SPI_CTRLA_IBON_Pos)         /* (SERCOM_SPI_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPI_CTRLA_IBON(value)          (SERCOM_SPI_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_IBON_Pos)) /* Assignment of value for IBON in the SERCOM_SPI_CTRLA register */
#define SERCOM_SPI_CTRLA_DOPO_Pos             _UINT32_(16)                                         /* (SERCOM_SPI_CTRLA) Data Out Pinout Position */
#define SERCOM_SPI_CTRLA_DOPO_Msk             (_UINT32_(0x3) << SERCOM_SPI_CTRLA_DOPO_Pos)         /* (SERCOM_SPI_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPI_CTRLA_DOPO(value)          (SERCOM_SPI_CTRLA_DOPO_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_DOPO_Pos)) /* Assignment of value for DOPO in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_DOPO_MUX0_Val      _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) PAD[0]=DO, PAD[1]=SCK, PAD[2]=SS  */
#define   SERCOM_SPI_CTRLA_DOPO_MUX1_Val      _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLA) PAD[2]=DO, PAD[3]=SCK, PAD[1]=SS  */
#define   SERCOM_SPI_CTRLA_DOPO_MUX2_Val      _UINT32_(0x2)                                        /* (SERCOM_SPI_CTRLA) PAD[3]=DO, PAD[1]=SCK, PAD[2]=SS  */
#define   SERCOM_SPI_CTRLA_DOPO_MUX3_Val      _UINT32_(0x3)                                        /* (SERCOM_SPI_CTRLA) PAD[0]=DO, PAD[3]=SCK, PAD[1]=SS  */
#define SERCOM_SPI_CTRLA_DOPO_MUX0            (SERCOM_SPI_CTRLA_DOPO_MUX0_Val << SERCOM_SPI_CTRLA_DOPO_Pos) /* (SERCOM_SPI_CTRLA) PAD[0]=DO, PAD[1]=SCK, PAD[2]=SS Position */
#define SERCOM_SPI_CTRLA_DOPO_MUX1            (SERCOM_SPI_CTRLA_DOPO_MUX1_Val << SERCOM_SPI_CTRLA_DOPO_Pos) /* (SERCOM_SPI_CTRLA) PAD[2]=DO, PAD[3]=SCK, PAD[1]=SS Position */
#define SERCOM_SPI_CTRLA_DOPO_MUX2            (SERCOM_SPI_CTRLA_DOPO_MUX2_Val << SERCOM_SPI_CTRLA_DOPO_Pos) /* (SERCOM_SPI_CTRLA) PAD[3]=DO, PAD[1]=SCK, PAD[2]=SS Position */
#define SERCOM_SPI_CTRLA_DOPO_MUX3            (SERCOM_SPI_CTRLA_DOPO_MUX3_Val << SERCOM_SPI_CTRLA_DOPO_Pos) /* (SERCOM_SPI_CTRLA) PAD[0]=DO, PAD[3]=SCK, PAD[1]=SS Position */
#define SERCOM_SPI_CTRLA_DIPO_Pos             _UINT32_(20)                                         /* (SERCOM_SPI_CTRLA) Data In Pinout Position */
#define SERCOM_SPI_CTRLA_DIPO_Msk             (_UINT32_(0x3) << SERCOM_SPI_CTRLA_DIPO_Pos)         /* (SERCOM_SPI_CTRLA) Data In Pinout Mask */
#define SERCOM_SPI_CTRLA_DIPO(value)          (SERCOM_SPI_CTRLA_DIPO_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_DIPO_Pos)) /* Assignment of value for DIPO in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_DIPO_MUX0_Val      _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) SERCOM PAD[0] is used as data input  */
#define   SERCOM_SPI_CTRLA_DIPO_MUX1_Val      _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLA) SERCOM PAD[1] is used as data input  */
#define   SERCOM_SPI_CTRLA_DIPO_MUX2_Val      _UINT32_(0x2)                                        /* (SERCOM_SPI_CTRLA) SERCOM PAD[2] is used as data input  */
#define   SERCOM_SPI_CTRLA_DIPO_MUX3_Val      _UINT32_(0x3)                                        /* (SERCOM_SPI_CTRLA) SERCOM PAD[3] is used as data input  */
#define SERCOM_SPI_CTRLA_DIPO_MUX0            (SERCOM_SPI_CTRLA_DIPO_MUX0_Val << SERCOM_SPI_CTRLA_DIPO_Pos) /* (SERCOM_SPI_CTRLA) SERCOM PAD[0] is used as data input Position */
#define SERCOM_SPI_CTRLA_DIPO_MUX1            (SERCOM_SPI_CTRLA_DIPO_MUX1_Val << SERCOM_SPI_CTRLA_DIPO_Pos) /* (SERCOM_SPI_CTRLA) SERCOM PAD[1] is used as data input Position */
#define SERCOM_SPI_CTRLA_DIPO_MUX2            (SERCOM_SPI_CTRLA_DIPO_MUX2_Val << SERCOM_SPI_CTRLA_DIPO_Pos) /* (SERCOM_SPI_CTRLA) SERCOM PAD[2] is used as data input Position */
#define SERCOM_SPI_CTRLA_DIPO_MUX3            (SERCOM_SPI_CTRLA_DIPO_MUX3_Val << SERCOM_SPI_CTRLA_DIPO_Pos) /* (SERCOM_SPI_CTRLA) SERCOM PAD[3] is used as data input Position */
#define SERCOM_SPI_CTRLA_FORM_Pos             _UINT32_(24)                                         /* (SERCOM_SPI_CTRLA) Frame Format Position */
#define SERCOM_SPI_CTRLA_FORM_Msk             (_UINT32_(0xF) << SERCOM_SPI_CTRLA_FORM_Pos)         /* (SERCOM_SPI_CTRLA) Frame Format Mask */
#define SERCOM_SPI_CTRLA_FORM(value)          (SERCOM_SPI_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_FORM_Pos)) /* Assignment of value for FORM in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_FORM_SPI_FRAME_Val _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) SPI Frame  */
#define   SERCOM_SPI_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val _UINT32_(0x2)                                        /* (SERCOM_SPI_CTRLA) SPI Frame with Address  */
#define SERCOM_SPI_CTRLA_FORM_SPI_FRAME       (SERCOM_SPI_CTRLA_FORM_SPI_FRAME_Val << SERCOM_SPI_CTRLA_FORM_Pos) /* (SERCOM_SPI_CTRLA) SPI Frame Position */
#define SERCOM_SPI_CTRLA_FORM_SPI_FRAME_WITH_ADDR (SERCOM_SPI_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val << SERCOM_SPI_CTRLA_FORM_Pos) /* (SERCOM_SPI_CTRLA) SPI Frame with Address Position */
#define SERCOM_SPI_CTRLA_CPHA_Pos             _UINT32_(28)                                         /* (SERCOM_SPI_CTRLA) Clock Phase Position */
#define SERCOM_SPI_CTRLA_CPHA_Msk             (_UINT32_(0x1) << SERCOM_SPI_CTRLA_CPHA_Pos)         /* (SERCOM_SPI_CTRLA) Clock Phase Mask */
#define SERCOM_SPI_CTRLA_CPHA(value)          (SERCOM_SPI_CTRLA_CPHA_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_CPHA_Pos)) /* Assignment of value for CPHA in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_CPHA_LEADING_EDGE_Val _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPI_CTRLA_CPHA_TRAILING_EDGE_Val _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPI_CTRLA_CPHA_LEADING_EDGE    (SERCOM_SPI_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPI_CTRLA_CPHA_Pos) /* (SERCOM_SPI_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position */
#define SERCOM_SPI_CTRLA_CPHA_TRAILING_EDGE   (SERCOM_SPI_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPI_CTRLA_CPHA_Pos) /* (SERCOM_SPI_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position */
#define SERCOM_SPI_CTRLA_CPOL_Pos             _UINT32_(29)                                         /* (SERCOM_SPI_CTRLA) Clock Polarity Position */
#define SERCOM_SPI_CTRLA_CPOL_Msk             (_UINT32_(0x1) << SERCOM_SPI_CTRLA_CPOL_Pos)         /* (SERCOM_SPI_CTRLA) Clock Polarity Mask */
#define SERCOM_SPI_CTRLA_CPOL(value)          (SERCOM_SPI_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_CPOL_Pos)) /* Assignment of value for CPOL in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_CPOL_IDLE_LOW_Val  _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) SCK is low when IDLE. The leading edge of a clock cycle is a rising edge, while the trailing edge is a falling edge.  */
#define   SERCOM_SPI_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLA) SCK is high when IDLE. The leading edge of a clock cycle is a falling edge, while the trailing edge is a rising edge.  */
#define SERCOM_SPI_CTRLA_CPOL_IDLE_LOW        (SERCOM_SPI_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPI_CTRLA_CPOL_Pos) /* (SERCOM_SPI_CTRLA) SCK is low when IDLE. The leading edge of a clock cycle is a rising edge, while the trailing edge is a falling edge. Position */
#define SERCOM_SPI_CTRLA_CPOL_IDLE_HIGH       (SERCOM_SPI_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPI_CTRLA_CPOL_Pos) /* (SERCOM_SPI_CTRLA) SCK is high when IDLE. The leading edge of a clock cycle is a falling edge, while the trailing edge is a rising edge. Position */
#define SERCOM_SPI_CTRLA_DORD_Pos             _UINT32_(30)                                         /* (SERCOM_SPI_CTRLA) Data Order Position */
#define SERCOM_SPI_CTRLA_DORD_Msk             (_UINT32_(0x1) << SERCOM_SPI_CTRLA_DORD_Pos)         /* (SERCOM_SPI_CTRLA) Data Order Mask */
#define SERCOM_SPI_CTRLA_DORD(value)          (SERCOM_SPI_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLA_DORD_Pos)) /* Assignment of value for DORD in the SERCOM_SPI_CTRLA register */
#define   SERCOM_SPI_CTRLA_DORD_MSB_Val       _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLA) MSb is transferred first  */
#define   SERCOM_SPI_CTRLA_DORD_LSB_Val       _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLA) LSb is transferred first  */
#define SERCOM_SPI_CTRLA_DORD_MSB             (SERCOM_SPI_CTRLA_DORD_MSB_Val << SERCOM_SPI_CTRLA_DORD_Pos) /* (SERCOM_SPI_CTRLA) MSb is transferred first Position */
#define SERCOM_SPI_CTRLA_DORD_LSB             (SERCOM_SPI_CTRLA_DORD_LSB_Val << SERCOM_SPI_CTRLA_DORD_Pos) /* (SERCOM_SPI_CTRLA) LSb is transferred first Position */
#define SERCOM_SPI_CTRLA_Msk                  _UINT32_(0x7F33019F)                                 /* (SERCOM_SPI_CTRLA) Register Mask  */


/* -------- SERCOM_USART_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART Control A -------- */
#define SERCOM_USART_CTRLA_RESETVALUE         _UINT32_(0x00)                                       /*  (SERCOM_USART_CTRLA) USART Control A  Reset Value */

#define SERCOM_USART_CTRLA_SWRST_Pos          _UINT32_(0)                                          /* (SERCOM_USART_CTRLA) Software Reset Position */
#define SERCOM_USART_CTRLA_SWRST_Msk          (_UINT32_(0x1) << SERCOM_USART_CTRLA_SWRST_Pos)      /* (SERCOM_USART_CTRLA) Software Reset Mask */
#define SERCOM_USART_CTRLA_SWRST(value)       (SERCOM_USART_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_USART_CTRLA register */
#define SERCOM_USART_CTRLA_ENABLE_Pos         _UINT32_(1)                                          /* (SERCOM_USART_CTRLA) Enable Position */
#define SERCOM_USART_CTRLA_ENABLE_Msk         (_UINT32_(0x1) << SERCOM_USART_CTRLA_ENABLE_Pos)     /* (SERCOM_USART_CTRLA) Enable Mask */
#define SERCOM_USART_CTRLA_ENABLE(value)      (SERCOM_USART_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_USART_CTRLA register */
#define SERCOM_USART_CTRLA_MODE_Pos           _UINT32_(2)                                          /* (SERCOM_USART_CTRLA) Operating Mode Position */
#define SERCOM_USART_CTRLA_MODE_Msk           (_UINT32_(0x7) << SERCOM_USART_CTRLA_MODE_Pos)       /* (SERCOM_USART_CTRLA) Operating Mode Mask */
#define SERCOM_USART_CTRLA_MODE(value)        (SERCOM_USART_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_MODE_USART_EXT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) USART with external clock  */
#define   SERCOM_USART_CTRLA_MODE_USART_INT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) USART with internal clock  */
#define   SERCOM_USART_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLA) SPI Client mode  */
#define   SERCOM_USART_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLA) SPI Host mode  */
#define   SERCOM_USART_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_USART_CTRLA) I2C Client mode  */
#define   SERCOM_USART_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_USART_CTRLA) I2C Host mode  */
#define SERCOM_USART_CTRLA_MODE_USART_EXT     (SERCOM_USART_CTRLA_MODE_USART_EXT_Val << SERCOM_USART_CTRLA_MODE_Pos) /* (SERCOM_USART_CTRLA) USART with external clock Position */
#define SERCOM_USART_CTRLA_MODE_USART_INT     (SERCOM_USART_CTRLA_MODE_USART_INT_Val << SERCOM_USART_CTRLA_MODE_Pos) /* (SERCOM_USART_CTRLA) USART with internal clock Position */
#define SERCOM_USART_CTRLA_MODE_SPI_SLAVE     (SERCOM_USART_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_USART_CTRLA_MODE_Pos) /* (SERCOM_USART_CTRLA) SPI Client mode Position */
#define SERCOM_USART_CTRLA_MODE_SPI_MASTER    (SERCOM_USART_CTRLA_MODE_SPI_MASTER_Val << SERCOM_USART_CTRLA_MODE_Pos) /* (SERCOM_USART_CTRLA) SPI Host mode Position */
#define SERCOM_USART_CTRLA_MODE_I2C_SLAVE     (SERCOM_USART_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_USART_CTRLA_MODE_Pos) /* (SERCOM_USART_CTRLA) I2C Client mode Position */
#define SERCOM_USART_CTRLA_MODE_I2C_MASTER    (SERCOM_USART_CTRLA_MODE_I2C_MASTER_Val << SERCOM_USART_CTRLA_MODE_Pos) /* (SERCOM_USART_CTRLA) I2C Host mode Position */
#define SERCOM_USART_CTRLA_RUNSTDBY_Pos       _UINT32_(7)                                          /* (SERCOM_USART_CTRLA) Run In Standby Position */
#define SERCOM_USART_CTRLA_RUNSTDBY_Msk       (_UINT32_(0x1) << SERCOM_USART_CTRLA_RUNSTDBY_Pos)   /* (SERCOM_USART_CTRLA) Run In Standby Mask */
#define SERCOM_USART_CTRLA_RUNSTDBY(value)    (SERCOM_USART_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_USART_CTRLA register */
#define SERCOM_USART_CTRLA_IBON_Pos           _UINT32_(8)                                          /* (SERCOM_USART_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_USART_CTRLA_IBON_Msk           (_UINT32_(0x1) << SERCOM_USART_CTRLA_IBON_Pos)       /* (SERCOM_USART_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_USART_CTRLA_IBON(value)        (SERCOM_USART_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_IBON_Pos)) /* Assignment of value for IBON in the SERCOM_USART_CTRLA register */
#define SERCOM_USART_CTRLA_SAMPR_Pos          _UINT32_(13)                                         /* (SERCOM_USART_CTRLA) Sample Rate Position */
#define SERCOM_USART_CTRLA_SAMPR_Msk          (_UINT32_(0x7) << SERCOM_USART_CTRLA_SAMPR_Pos)      /* (SERCOM_USART_CTRLA) Sample Rate Mask */
#define SERCOM_USART_CTRLA_SAMPR(value)       (SERCOM_USART_CTRLA_SAMPR_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_SAMPR_Pos)) /* Assignment of value for SAMPR in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_SAMPR_16X_ARITHMETIC_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) 16x over-sampling using arithmetic baud rate generation  */
#define   SERCOM_USART_CTRLA_SAMPR_16X_FRACTIONAL_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) 16x over-sampling using fractional baud rate generation  */
#define   SERCOM_USART_CTRLA_SAMPR_8X_ARITHMETIC_Val _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLA) 8x over-sampling using arithmetic baud rate generation  */
#define   SERCOM_USART_CTRLA_SAMPR_8X_FRACTIONAL_Val _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLA) 8x over-sampling using fractional baud rate generation  */
#define   SERCOM_USART_CTRLA_SAMPR_3X_ARITHMETIC_Val _UINT32_(0x4)                                        /* (SERCOM_USART_CTRLA) 3x over-sampling using arithmetic baud rate generation  */
#define SERCOM_USART_CTRLA_SAMPR_16X_ARITHMETIC (SERCOM_USART_CTRLA_SAMPR_16X_ARITHMETIC_Val << SERCOM_USART_CTRLA_SAMPR_Pos) /* (SERCOM_USART_CTRLA) 16x over-sampling using arithmetic baud rate generation Position */
#define SERCOM_USART_CTRLA_SAMPR_16X_FRACTIONAL (SERCOM_USART_CTRLA_SAMPR_16X_FRACTIONAL_Val << SERCOM_USART_CTRLA_SAMPR_Pos) /* (SERCOM_USART_CTRLA) 16x over-sampling using fractional baud rate generation Position */
#define SERCOM_USART_CTRLA_SAMPR_8X_ARITHMETIC (SERCOM_USART_CTRLA_SAMPR_8X_ARITHMETIC_Val << SERCOM_USART_CTRLA_SAMPR_Pos) /* (SERCOM_USART_CTRLA) 8x over-sampling using arithmetic baud rate generation Position */
#define SERCOM_USART_CTRLA_SAMPR_8X_FRACTIONAL (SERCOM_USART_CTRLA_SAMPR_8X_FRACTIONAL_Val << SERCOM_USART_CTRLA_SAMPR_Pos) /* (SERCOM_USART_CTRLA) 8x over-sampling using fractional baud rate generation Position */
#define SERCOM_USART_CTRLA_SAMPR_3X_ARITHMETIC (SERCOM_USART_CTRLA_SAMPR_3X_ARITHMETIC_Val << SERCOM_USART_CTRLA_SAMPR_Pos) /* (SERCOM_USART_CTRLA) 3x over-sampling using arithmetic baud rate generation Position */
#define SERCOM_USART_CTRLA_TXPO_Pos           _UINT32_(16)                                         /* (SERCOM_USART_CTRLA) Transmit Data Pinout Position */
#define SERCOM_USART_CTRLA_TXPO_Msk           (_UINT32_(0x3) << SERCOM_USART_CTRLA_TXPO_Pos)       /* (SERCOM_USART_CTRLA) Transmit Data Pinout Mask */
#define SERCOM_USART_CTRLA_TXPO(value)        (SERCOM_USART_CTRLA_TXPO_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_TXPO_Pos)) /* Assignment of value for TXPO in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_TXPO_MUX0_Val    _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) PAD[0]=TxD, PAD[1]=XCK  */
#define   SERCOM_USART_CTRLA_TXPO_MUX1_Val    _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) PAD[2]=TxD, PAD[3]=XCK  */
#define   SERCOM_USART_CTRLA_TXPO_MUX2_Val    _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLA) PAD[0]=TxD, PAD[2]=RTS/TE, PAD[3]=CTS  */
#define   SERCOM_USART_CTRLA_TXPO_MUX3_Val    _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLA) PAD[0]=TxD, PAD[1]=XCK, PAD[2]=RTS/TE  */
#define SERCOM_USART_CTRLA_TXPO_MUX0          (SERCOM_USART_CTRLA_TXPO_MUX0_Val << SERCOM_USART_CTRLA_TXPO_Pos) /* (SERCOM_USART_CTRLA) PAD[0]=TxD, PAD[1]=XCK Position */
#define SERCOM_USART_CTRLA_TXPO_MUX1          (SERCOM_USART_CTRLA_TXPO_MUX1_Val << SERCOM_USART_CTRLA_TXPO_Pos) /* (SERCOM_USART_CTRLA) PAD[2]=TxD, PAD[3]=XCK Position */
#define SERCOM_USART_CTRLA_TXPO_MUX2          (SERCOM_USART_CTRLA_TXPO_MUX2_Val << SERCOM_USART_CTRLA_TXPO_Pos) /* (SERCOM_USART_CTRLA) PAD[0]=TxD, PAD[2]=RTS/TE, PAD[3]=CTS Position */
#define SERCOM_USART_CTRLA_TXPO_MUX3          (SERCOM_USART_CTRLA_TXPO_MUX3_Val << SERCOM_USART_CTRLA_TXPO_Pos) /* (SERCOM_USART_CTRLA) PAD[0]=TxD, PAD[1]=XCK, PAD[2]=RTS/TE Position */
#define SERCOM_USART_CTRLA_RXPO_Pos           _UINT32_(20)                                         /* (SERCOM_USART_CTRLA) Receive Data Pinout Position */
#define SERCOM_USART_CTRLA_RXPO_Msk           (_UINT32_(0x3) << SERCOM_USART_CTRLA_RXPO_Pos)       /* (SERCOM_USART_CTRLA) Receive Data Pinout Mask */
#define SERCOM_USART_CTRLA_RXPO(value)        (SERCOM_USART_CTRLA_RXPO_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_RXPO_Pos)) /* Assignment of value for RXPO in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_RXPO_MUX0_Val    _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) SERCOM PAD[0] is used for data reception  */
#define   SERCOM_USART_CTRLA_RXPO_MUX1_Val    _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) SERCOM PAD[1] is used for data reception  */
#define   SERCOM_USART_CTRLA_RXPO_MUX2_Val    _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLA) SERCOM PAD[2] is used for data reception  */
#define   SERCOM_USART_CTRLA_RXPO_MUX3_Val    _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLA) SERCOM PAD[3] is used for data reception  */
#define SERCOM_USART_CTRLA_RXPO_MUX0          (SERCOM_USART_CTRLA_RXPO_MUX0_Val << SERCOM_USART_CTRLA_RXPO_Pos) /* (SERCOM_USART_CTRLA) SERCOM PAD[0] is used for data reception Position */
#define SERCOM_USART_CTRLA_RXPO_MUX1          (SERCOM_USART_CTRLA_RXPO_MUX1_Val << SERCOM_USART_CTRLA_RXPO_Pos) /* (SERCOM_USART_CTRLA) SERCOM PAD[1] is used for data reception Position */
#define SERCOM_USART_CTRLA_RXPO_MUX2          (SERCOM_USART_CTRLA_RXPO_MUX2_Val << SERCOM_USART_CTRLA_RXPO_Pos) /* (SERCOM_USART_CTRLA) SERCOM PAD[2] is used for data reception Position */
#define SERCOM_USART_CTRLA_RXPO_MUX3          (SERCOM_USART_CTRLA_RXPO_MUX3_Val << SERCOM_USART_CTRLA_RXPO_Pos) /* (SERCOM_USART_CTRLA) SERCOM PAD[3] is used for data reception Position */
#define SERCOM_USART_CTRLA_SAMPA_Pos          _UINT32_(22)                                         /* (SERCOM_USART_CTRLA) Sample Adjustment Position */
#define SERCOM_USART_CTRLA_SAMPA_Msk          (_UINT32_(0x3) << SERCOM_USART_CTRLA_SAMPA_Pos)      /* (SERCOM_USART_CTRLA) Sample Adjustment Mask */
#define SERCOM_USART_CTRLA_SAMPA(value)       (SERCOM_USART_CTRLA_SAMPA_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_SAMPA_Pos)) /* Assignment of value for SAMPA in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_SAMPA_ADJ0_Val   _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5  */
#define   SERCOM_USART_CTRLA_SAMPA_ADJ1_Val   _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6  */
#define   SERCOM_USART_CTRLA_SAMPA_ADJ2_Val   _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7  */
#define   SERCOM_USART_CTRLA_SAMPA_ADJ3_Val   _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8  */
#define SERCOM_USART_CTRLA_SAMPA_ADJ0         (SERCOM_USART_CTRLA_SAMPA_ADJ0_Val << SERCOM_USART_CTRLA_SAMPA_Pos) /* (SERCOM_USART_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5 Position */
#define SERCOM_USART_CTRLA_SAMPA_ADJ1         (SERCOM_USART_CTRLA_SAMPA_ADJ1_Val << SERCOM_USART_CTRLA_SAMPA_Pos) /* (SERCOM_USART_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6 Position */
#define SERCOM_USART_CTRLA_SAMPA_ADJ2         (SERCOM_USART_CTRLA_SAMPA_ADJ2_Val << SERCOM_USART_CTRLA_SAMPA_Pos) /* (SERCOM_USART_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7 Position */
#define SERCOM_USART_CTRLA_SAMPA_ADJ3         (SERCOM_USART_CTRLA_SAMPA_ADJ3_Val << SERCOM_USART_CTRLA_SAMPA_Pos) /* (SERCOM_USART_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8 Position */
#define SERCOM_USART_CTRLA_FORM_Pos           _UINT32_(24)                                         /* (SERCOM_USART_CTRLA) Frame Format Position */
#define SERCOM_USART_CTRLA_FORM_Msk           (_UINT32_(0xF) << SERCOM_USART_CTRLA_FORM_Pos)       /* (SERCOM_USART_CTRLA) Frame Format Mask */
#define SERCOM_USART_CTRLA_FORM(value)        (SERCOM_USART_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_FORM_Pos)) /* Assignment of value for FORM in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_FORM_USART_FRAME_NO_PARITY_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) USART frame  */
#define   SERCOM_USART_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) USART frame with parity  */
#define   SERCOM_USART_CTRLA_FORM_USART_FRAME_LINBRKGEN_Val _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLA) LIN Host - Break and sync generation. See LIN Command (CTRLB.LINCMD).  */
#define   SERCOM_USART_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val _UINT32_(0x4)                                        /* (SERCOM_USART_CTRLA) Auto-baud (LIN Client) - break detection and auto-baud  */
#define   SERCOM_USART_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val _UINT32_(0x5)                                        /* (SERCOM_USART_CTRLA) Auto-baud - break detection and auto-baud with parity  */
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_NO_PARITY (SERCOM_USART_CTRLA_FORM_USART_FRAME_NO_PARITY_Val << SERCOM_USART_CTRLA_FORM_Pos) /* (SERCOM_USART_CTRLA) USART frame Position */
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_WITH_PARITY (SERCOM_USART_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val << SERCOM_USART_CTRLA_FORM_Pos) /* (SERCOM_USART_CTRLA) USART frame with parity Position */
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_LINBRKGEN (SERCOM_USART_CTRLA_FORM_USART_FRAME_LINBRKGEN_Val << SERCOM_USART_CTRLA_FORM_Pos) /* (SERCOM_USART_CTRLA) LIN Host - Break and sync generation. See LIN Command (CTRLB.LINCMD). Position */
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY (SERCOM_USART_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val << SERCOM_USART_CTRLA_FORM_Pos) /* (SERCOM_USART_CTRLA) Auto-baud (LIN Client) - break detection and auto-baud Position */
#define SERCOM_USART_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY (SERCOM_USART_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val << SERCOM_USART_CTRLA_FORM_Pos) /* (SERCOM_USART_CTRLA) Auto-baud - break detection and auto-baud with parity Position */
#define SERCOM_USART_CTRLA_CMODE_Pos          _UINT32_(28)                                         /* (SERCOM_USART_CTRLA) Communication Mode Position */
#define SERCOM_USART_CTRLA_CMODE_Msk          (_UINT32_(0x1) << SERCOM_USART_CTRLA_CMODE_Pos)      /* (SERCOM_USART_CTRLA) Communication Mode Mask */
#define SERCOM_USART_CTRLA_CMODE(value)       (SERCOM_USART_CTRLA_CMODE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_CMODE_Pos)) /* Assignment of value for CMODE in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_CMODE_ASYNC_Val  _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) Asynchronous communication  */
#define   SERCOM_USART_CTRLA_CMODE_SYNC_Val   _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) Synchronous communication  */
#define SERCOM_USART_CTRLA_CMODE_ASYNC        (SERCOM_USART_CTRLA_CMODE_ASYNC_Val << SERCOM_USART_CTRLA_CMODE_Pos) /* (SERCOM_USART_CTRLA) Asynchronous communication Position */
#define SERCOM_USART_CTRLA_CMODE_SYNC         (SERCOM_USART_CTRLA_CMODE_SYNC_Val << SERCOM_USART_CTRLA_CMODE_Pos) /* (SERCOM_USART_CTRLA) Synchronous communication Position */
#define SERCOM_USART_CTRLA_CPOL_Pos           _UINT32_(29)                                         /* (SERCOM_USART_CTRLA) Clock Polarity Position */
#define SERCOM_USART_CTRLA_CPOL_Msk           (_UINT32_(0x1) << SERCOM_USART_CTRLA_CPOL_Pos)       /* (SERCOM_USART_CTRLA) Clock Polarity Mask */
#define SERCOM_USART_CTRLA_CPOL(value)        (SERCOM_USART_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_CPOL_Pos)) /* Assignment of value for CPOL in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) TxD Change: Rising XCK edge, RxD Sample: Falling XCK edge  */
#define   SERCOM_USART_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) TxD Change: Falling XCK edge, RxD Sample: Rising XCK edge  */
#define SERCOM_USART_CTRLA_CPOL_IDLE_LOW      (SERCOM_USART_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_USART_CTRLA_CPOL_Pos) /* (SERCOM_USART_CTRLA) TxD Change: Rising XCK edge, RxD Sample: Falling XCK edge Position */
#define SERCOM_USART_CTRLA_CPOL_IDLE_HIGH     (SERCOM_USART_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_USART_CTRLA_CPOL_Pos) /* (SERCOM_USART_CTRLA) TxD Change: Falling XCK edge, RxD Sample: Rising XCK edge Position */
#define SERCOM_USART_CTRLA_DORD_Pos           _UINT32_(30)                                         /* (SERCOM_USART_CTRLA) Data Order Position */
#define SERCOM_USART_CTRLA_DORD_Msk           (_UINT32_(0x1) << SERCOM_USART_CTRLA_DORD_Pos)       /* (SERCOM_USART_CTRLA) Data Order Mask */
#define SERCOM_USART_CTRLA_DORD(value)        (SERCOM_USART_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_USART_CTRLA_DORD_Pos)) /* Assignment of value for DORD in the SERCOM_USART_CTRLA register */
#define   SERCOM_USART_CTRLA_DORD_MSB_Val     _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLA) MSb is transferred first  */
#define   SERCOM_USART_CTRLA_DORD_LSB_Val     _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLA) LSb is transferred first  */
#define SERCOM_USART_CTRLA_DORD_MSB           (SERCOM_USART_CTRLA_DORD_MSB_Val << SERCOM_USART_CTRLA_DORD_Pos) /* (SERCOM_USART_CTRLA) MSb is transferred first Position */
#define SERCOM_USART_CTRLA_DORD_LSB           (SERCOM_USART_CTRLA_DORD_LSB_Val << SERCOM_USART_CTRLA_DORD_Pos) /* (SERCOM_USART_CTRLA) LSb is transferred first Position */
#define SERCOM_USART_CTRLA_Msk                _UINT32_(0x7FF3E19F)                                 /* (SERCOM_USART_CTRLA) Register Mask  */


/* -------- SERCOM_I2CM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CM Control B -------- */
#define SERCOM_I2CM_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLB) I2CM Control B  Reset Value */

#define SERCOM_I2CM_CTRLB_SMEN_Pos            _UINT32_(8)                                          /* (SERCOM_I2CM_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CM_CTRLB_SMEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_SMEN_Pos)        /* (SERCOM_I2CM_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CM_CTRLB_SMEN(value)         (SERCOM_I2CM_CTRLB_SMEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_SMEN_Pos)) /* Assignment of value for SMEN in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_QCEN_Pos            _UINT32_(9)                                          /* (SERCOM_I2CM_CTRLB) Quick Command Enable Position */
#define SERCOM_I2CM_CTRLB_QCEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_QCEN_Pos)        /* (SERCOM_I2CM_CTRLB) Quick Command Enable Mask */
#define SERCOM_I2CM_CTRLB_QCEN(value)         (SERCOM_I2CM_CTRLB_QCEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_QCEN_Pos)) /* Assignment of value for QCEN in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_CMD_Pos             _UINT32_(16)                                         /* (SERCOM_I2CM_CTRLB) Command Position */
#define SERCOM_I2CM_CTRLB_CMD_Msk             (_UINT32_(0x3) << SERCOM_I2CM_CTRLB_CMD_Pos)         /* (SERCOM_I2CM_CTRLB) Command Mask */
#define SERCOM_I2CM_CTRLB_CMD(value)          (SERCOM_I2CM_CTRLB_CMD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_CMD_Pos)) /* Assignment of value for CMD in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_ACKACT_Pos          _UINT32_(18)                                         /* (SERCOM_I2CM_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CM_CTRLB_ACKACT_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_ACKACT_Pos)      /* (SERCOM_I2CM_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CM_CTRLB_ACKACT(value)       (SERCOM_I2CM_CTRLB_ACKACT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_ACKACT_Pos)) /* Assignment of value for ACKACT in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_Msk                 _UINT32_(0x00070300)                                 /* (SERCOM_I2CM_CTRLB) Register Mask  */


/* -------- SERCOM_I2CS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CS Control B -------- */
#define SERCOM_I2CS_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLB) I2CS Control B  Reset Value */

#define SERCOM_I2CS_CTRLB_SMEN_Pos            _UINT32_(8)                                          /* (SERCOM_I2CS_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CS_CTRLB_SMEN_Msk            (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_SMEN_Pos)        /* (SERCOM_I2CS_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CS_CTRLB_SMEN(value)         (SERCOM_I2CS_CTRLB_SMEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_SMEN_Pos)) /* Assignment of value for SMEN in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_GCMD_Pos            _UINT32_(9)                                          /* (SERCOM_I2CS_CTRLB) PMBus Group Command Position */
#define SERCOM_I2CS_CTRLB_GCMD_Msk            (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_GCMD_Pos)        /* (SERCOM_I2CS_CTRLB) PMBus Group Command Mask */
#define SERCOM_I2CS_CTRLB_GCMD(value)         (SERCOM_I2CS_CTRLB_GCMD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_GCMD_Pos)) /* Assignment of value for GCMD in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_AACKEN_Pos          _UINT32_(10)                                         /* (SERCOM_I2CS_CTRLB) Automatic Acknowledge Enable Position */
#define SERCOM_I2CS_CTRLB_AACKEN_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_AACKEN_Pos)      /* (SERCOM_I2CS_CTRLB) Automatic Acknowledge Enable Mask */
#define SERCOM_I2CS_CTRLB_AACKEN(value)       (SERCOM_I2CS_CTRLB_AACKEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_AACKEN_Pos)) /* Assignment of value for AACKEN in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_I2CS_CTRLB) Address Mode Position */
#define SERCOM_I2CS_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_AMODE_Pos)       /* (SERCOM_I2CS_CTRLB) Address Mode Mask */
#define SERCOM_I2CS_CTRLB_AMODE(value)        (SERCOM_I2CS_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_AMODE_Pos)) /* Assignment of value for AMODE in the SERCOM_I2CS_CTRLB register */
#define   SERCOM_I2CS_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLB) The client responds to the address written in ADDR.ADDR masked by the value in ADDR.ADDRMASK. See SERCOM - Serial Communication Interface for additional information.  */
#define   SERCOM_I2CS_CTRLB_AMODE_2ADDRS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLB) The client responds to the two unique addresses in ADDR.ADDR and ADDR.ADDRMASK  */
#define   SERCOM_I2CS_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLB) The client responds to the range of addresses between and including ADDR.ADDR and ADDR.ADDRMASK. ADDR.ADDR is the upper limit.  */
#define SERCOM_I2CS_CTRLB_AMODE_MASK          (SERCOM_I2CS_CTRLB_AMODE_MASK_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) The client responds to the address written in ADDR.ADDR masked by the value in ADDR.ADDRMASK. See SERCOM - Serial Communication Interface for additional information. Position */
#define SERCOM_I2CS_CTRLB_AMODE_2ADDRS        (SERCOM_I2CS_CTRLB_AMODE_2ADDRS_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) The client responds to the two unique addresses in ADDR.ADDR and ADDR.ADDRMASK Position */
#define SERCOM_I2CS_CTRLB_AMODE_RANGE         (SERCOM_I2CS_CTRLB_AMODE_RANGE_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) The client responds to the range of addresses between and including ADDR.ADDR and ADDR.ADDRMASK. ADDR.ADDR is the upper limit. Position */
#define SERCOM_I2CS_CTRLB_CMD_Pos             _UINT32_(16)                                         /* (SERCOM_I2CS_CTRLB) Command Position */
#define SERCOM_I2CS_CTRLB_CMD_Msk             (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_CMD_Pos)         /* (SERCOM_I2CS_CTRLB) Command Mask */
#define SERCOM_I2CS_CTRLB_CMD(value)          (SERCOM_I2CS_CTRLB_CMD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_CMD_Pos)) /* Assignment of value for CMD in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_ACKACT_Pos          _UINT32_(18)                                         /* (SERCOM_I2CS_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CS_CTRLB_ACKACT_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_ACKACT_Pos)      /* (SERCOM_I2CS_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CS_CTRLB_ACKACT(value)       (SERCOM_I2CS_CTRLB_ACKACT_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_ACKACT_Pos)) /* Assignment of value for ACKACT in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_Msk                 _UINT32_(0x0007C700)                                 /* (SERCOM_I2CS_CTRLB) Register Mask  */


/* -------- SERCOM_SPI_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPI Control B -------- */
#define SERCOM_SPI_CTRLB_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPI_CTRLB) SPI Control B  Reset Value */

#define SERCOM_SPI_CTRLB_CHSIZE_Pos           _UINT32_(0)                                          /* (SERCOM_SPI_CTRLB) Character Size Position */
#define SERCOM_SPI_CTRLB_CHSIZE_Msk           (_UINT32_(0x7) << SERCOM_SPI_CTRLB_CHSIZE_Pos)       /* (SERCOM_SPI_CTRLB) Character Size Mask */
#define SERCOM_SPI_CTRLB_CHSIZE(value)        (SERCOM_SPI_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLB_CHSIZE_Pos)) /* Assignment of value for CHSIZE in the SERCOM_SPI_CTRLB register */
#define   SERCOM_SPI_CTRLB_CHSIZE_8_BIT_Val   _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLB) Eight bits  */
#define   SERCOM_SPI_CTRLB_CHSIZE_9_BIT_Val   _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLB) Nine bits  */
#define SERCOM_SPI_CTRLB_CHSIZE_8_BIT         (SERCOM_SPI_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPI_CTRLB_CHSIZE_Pos) /* (SERCOM_SPI_CTRLB) Eight bits Position */
#define SERCOM_SPI_CTRLB_CHSIZE_9_BIT         (SERCOM_SPI_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPI_CTRLB_CHSIZE_Pos) /* (SERCOM_SPI_CTRLB) Nine bits Position */
#define SERCOM_SPI_CTRLB_PLOADEN_Pos          _UINT32_(6)                                          /* (SERCOM_SPI_CTRLB) Client Data Preload Enable Position */
#define SERCOM_SPI_CTRLB_PLOADEN_Msk          (_UINT32_(0x1) << SERCOM_SPI_CTRLB_PLOADEN_Pos)      /* (SERCOM_SPI_CTRLB) Client Data Preload Enable Mask */
#define SERCOM_SPI_CTRLB_PLOADEN(value)       (SERCOM_SPI_CTRLB_PLOADEN_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLB_PLOADEN_Pos)) /* Assignment of value for PLOADEN in the SERCOM_SPI_CTRLB register */
#define SERCOM_SPI_CTRLB_SSDE_Pos             _UINT32_(9)                                          /* (SERCOM_SPI_CTRLB) SPI Select Low Detect Enable Position */
#define SERCOM_SPI_CTRLB_SSDE_Msk             (_UINT32_(0x1) << SERCOM_SPI_CTRLB_SSDE_Pos)         /* (SERCOM_SPI_CTRLB) SPI Select Low Detect Enable Mask */
#define SERCOM_SPI_CTRLB_SSDE(value)          (SERCOM_SPI_CTRLB_SSDE_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLB_SSDE_Pos)) /* Assignment of value for SSDE in the SERCOM_SPI_CTRLB register */
#define SERCOM_SPI_CTRLB_MSSEN_Pos            _UINT32_(13)                                         /* (SERCOM_SPI_CTRLB) Host SPI Select Enable Position */
#define SERCOM_SPI_CTRLB_MSSEN_Msk            (_UINT32_(0x1) << SERCOM_SPI_CTRLB_MSSEN_Pos)        /* (SERCOM_SPI_CTRLB) Host SPI Select Enable Mask */
#define SERCOM_SPI_CTRLB_MSSEN(value)         (SERCOM_SPI_CTRLB_MSSEN_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLB_MSSEN_Pos)) /* Assignment of value for MSSEN in the SERCOM_SPI_CTRLB register */
#define SERCOM_SPI_CTRLB_AMODE_Pos            _UINT32_(14)                                         /* (SERCOM_SPI_CTRLB) Address Mode Position */
#define SERCOM_SPI_CTRLB_AMODE_Msk            (_UINT32_(0x3) << SERCOM_SPI_CTRLB_AMODE_Pos)        /* (SERCOM_SPI_CTRLB) Address Mode Mask */
#define SERCOM_SPI_CTRLB_AMODE(value)         (SERCOM_SPI_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLB_AMODE_Pos)) /* Assignment of value for AMODE in the SERCOM_SPI_CTRLB register */
#define   SERCOM_SPI_CTRLB_AMODE_MASK_Val     _UINT32_(0x0)                                        /* (SERCOM_SPI_CTRLB) ADDRMASK is used as a mask to the ADDR register  */
#define   SERCOM_SPI_CTRLB_AMODE_2ADDRS_Val   _UINT32_(0x1)                                        /* (SERCOM_SPI_CTRLB) The client responds to the two unique addresses in ADDR and ADDRMASK  */
#define   SERCOM_SPI_CTRLB_AMODE_RANGE_Val    _UINT32_(0x2)                                        /* (SERCOM_SPI_CTRLB) The client responds to the range of addresses between and including ADDR and ADDRMASK with ADDR as the upper limit  */
#define SERCOM_SPI_CTRLB_AMODE_MASK           (SERCOM_SPI_CTRLB_AMODE_MASK_Val << SERCOM_SPI_CTRLB_AMODE_Pos) /* (SERCOM_SPI_CTRLB) ADDRMASK is used as a mask to the ADDR register Position */
#define SERCOM_SPI_CTRLB_AMODE_2ADDRS         (SERCOM_SPI_CTRLB_AMODE_2ADDRS_Val << SERCOM_SPI_CTRLB_AMODE_Pos) /* (SERCOM_SPI_CTRLB) The client responds to the two unique addresses in ADDR and ADDRMASK Position */
#define SERCOM_SPI_CTRLB_AMODE_RANGE          (SERCOM_SPI_CTRLB_AMODE_RANGE_Val << SERCOM_SPI_CTRLB_AMODE_Pos) /* (SERCOM_SPI_CTRLB) The client responds to the range of addresses between and including ADDR and ADDRMASK with ADDR as the upper limit Position */
#define SERCOM_SPI_CTRLB_RXEN_Pos             _UINT32_(17)                                         /* (SERCOM_SPI_CTRLB) Receiver Enable Position */
#define SERCOM_SPI_CTRLB_RXEN_Msk             (_UINT32_(0x1) << SERCOM_SPI_CTRLB_RXEN_Pos)         /* (SERCOM_SPI_CTRLB) Receiver Enable Mask */
#define SERCOM_SPI_CTRLB_RXEN(value)          (SERCOM_SPI_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_SPI_CTRLB_RXEN_Pos)) /* Assignment of value for RXEN in the SERCOM_SPI_CTRLB register */
#define SERCOM_SPI_CTRLB_Msk                  _UINT32_(0x0002E247)                                 /* (SERCOM_SPI_CTRLB) Register Mask  */


/* -------- SERCOM_USART_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART Control B -------- */
#define SERCOM_USART_CTRLB_RESETVALUE         _UINT32_(0x00)                                       /*  (SERCOM_USART_CTRLB) USART Control B  Reset Value */

#define SERCOM_USART_CTRLB_CHSIZE_Pos         _UINT32_(0)                                          /* (SERCOM_USART_CTRLB) Character Size Position */
#define SERCOM_USART_CTRLB_CHSIZE_Msk         (_UINT32_(0x7) << SERCOM_USART_CTRLB_CHSIZE_Pos)     /* (SERCOM_USART_CTRLB) Character Size Mask */
#define SERCOM_USART_CTRLB_CHSIZE(value)      (SERCOM_USART_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_CHSIZE_Pos)) /* Assignment of value for CHSIZE in the SERCOM_USART_CTRLB register */
#define   SERCOM_USART_CTRLB_CHSIZE_8_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLB) 8-bits character  */
#define   SERCOM_USART_CTRLB_CHSIZE_9_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLB) 9-bits character  */
#define   SERCOM_USART_CTRLB_CHSIZE_5_BIT_Val _UINT32_(0x5)                                        /* (SERCOM_USART_CTRLB) 5-bits character  */
#define   SERCOM_USART_CTRLB_CHSIZE_6_BIT_Val _UINT32_(0x6)                                        /* (SERCOM_USART_CTRLB) 6-bits character  */
#define   SERCOM_USART_CTRLB_CHSIZE_7_BIT_Val _UINT32_(0x7)                                        /* (SERCOM_USART_CTRLB) 7-bits character  */
#define SERCOM_USART_CTRLB_CHSIZE_8_BIT       (SERCOM_USART_CTRLB_CHSIZE_8_BIT_Val << SERCOM_USART_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_CTRLB) 8-bits character Position */
#define SERCOM_USART_CTRLB_CHSIZE_9_BIT       (SERCOM_USART_CTRLB_CHSIZE_9_BIT_Val << SERCOM_USART_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_CTRLB) 9-bits character Position */
#define SERCOM_USART_CTRLB_CHSIZE_5_BIT       (SERCOM_USART_CTRLB_CHSIZE_5_BIT_Val << SERCOM_USART_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_CTRLB) 5-bits character Position */
#define SERCOM_USART_CTRLB_CHSIZE_6_BIT       (SERCOM_USART_CTRLB_CHSIZE_6_BIT_Val << SERCOM_USART_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_CTRLB) 6-bits character Position */
#define SERCOM_USART_CTRLB_CHSIZE_7_BIT       (SERCOM_USART_CTRLB_CHSIZE_7_BIT_Val << SERCOM_USART_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_CTRLB) 7-bits character Position */
#define SERCOM_USART_CTRLB_SBMODE_Pos         _UINT32_(6)                                          /* (SERCOM_USART_CTRLB) Stop Bit Mode Position */
#define SERCOM_USART_CTRLB_SBMODE_Msk         (_UINT32_(0x1) << SERCOM_USART_CTRLB_SBMODE_Pos)     /* (SERCOM_USART_CTRLB) Stop Bit Mode Mask */
#define SERCOM_USART_CTRLB_SBMODE(value)      (SERCOM_USART_CTRLB_SBMODE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_SBMODE_Pos)) /* Assignment of value for SBMODE in the SERCOM_USART_CTRLB register */
#define   SERCOM_USART_CTRLB_SBMODE_1_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLB) One stop bit  */
#define   SERCOM_USART_CTRLB_SBMODE_2_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLB) Two stop bits  */
#define SERCOM_USART_CTRLB_SBMODE_1_BIT       (SERCOM_USART_CTRLB_SBMODE_1_BIT_Val << SERCOM_USART_CTRLB_SBMODE_Pos) /* (SERCOM_USART_CTRLB) One stop bit Position */
#define SERCOM_USART_CTRLB_SBMODE_2_BIT       (SERCOM_USART_CTRLB_SBMODE_2_BIT_Val << SERCOM_USART_CTRLB_SBMODE_Pos) /* (SERCOM_USART_CTRLB) Two stop bits Position */
#define SERCOM_USART_CTRLB_COLDEN_Pos         _UINT32_(8)                                          /* (SERCOM_USART_CTRLB) Collision Detection Enable Position */
#define SERCOM_USART_CTRLB_COLDEN_Msk         (_UINT32_(0x1) << SERCOM_USART_CTRLB_COLDEN_Pos)     /* (SERCOM_USART_CTRLB) Collision Detection Enable Mask */
#define SERCOM_USART_CTRLB_COLDEN(value)      (SERCOM_USART_CTRLB_COLDEN_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_COLDEN_Pos)) /* Assignment of value for COLDEN in the SERCOM_USART_CTRLB register */
#define SERCOM_USART_CTRLB_SFDE_Pos           _UINT32_(9)                                          /* (SERCOM_USART_CTRLB) Start of Frame Detection Enable Position */
#define SERCOM_USART_CTRLB_SFDE_Msk           (_UINT32_(0x1) << SERCOM_USART_CTRLB_SFDE_Pos)       /* (SERCOM_USART_CTRLB) Start of Frame Detection Enable Mask */
#define SERCOM_USART_CTRLB_SFDE(value)        (SERCOM_USART_CTRLB_SFDE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_SFDE_Pos)) /* Assignment of value for SFDE in the SERCOM_USART_CTRLB register */
#define SERCOM_USART_CTRLB_ENC_Pos            _UINT32_(10)                                         /* (SERCOM_USART_CTRLB) Encoding Format Position */
#define SERCOM_USART_CTRLB_ENC_Msk            (_UINT32_(0x1) << SERCOM_USART_CTRLB_ENC_Pos)        /* (SERCOM_USART_CTRLB) Encoding Format Mask */
#define SERCOM_USART_CTRLB_ENC(value)         (SERCOM_USART_CTRLB_ENC_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_ENC_Pos)) /* Assignment of value for ENC in the SERCOM_USART_CTRLB register */
#define   SERCOM_USART_CTRLB_ENC_IRDA_Val     _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLB) Data is IrDA encoded  */
#define SERCOM_USART_CTRLB_ENC_IRDA           (SERCOM_USART_CTRLB_ENC_IRDA_Val << SERCOM_USART_CTRLB_ENC_Pos) /* (SERCOM_USART_CTRLB) Data is IrDA encoded Position */
#define SERCOM_USART_CTRLB_PMODE_Pos          _UINT32_(13)                                         /* (SERCOM_USART_CTRLB) Parity Mode Position */
#define SERCOM_USART_CTRLB_PMODE_Msk          (_UINT32_(0x1) << SERCOM_USART_CTRLB_PMODE_Pos)      /* (SERCOM_USART_CTRLB) Parity Mode Mask */
#define SERCOM_USART_CTRLB_PMODE(value)       (SERCOM_USART_CTRLB_PMODE_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_PMODE_Pos)) /* Assignment of value for PMODE in the SERCOM_USART_CTRLB register */
#define   SERCOM_USART_CTRLB_PMODE_EVEN_Val   _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLB) Even parity  */
#define   SERCOM_USART_CTRLB_PMODE_ODD_Val    _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLB) Odd parity  */
#define SERCOM_USART_CTRLB_PMODE_EVEN         (SERCOM_USART_CTRLB_PMODE_EVEN_Val << SERCOM_USART_CTRLB_PMODE_Pos) /* (SERCOM_USART_CTRLB) Even parity Position */
#define SERCOM_USART_CTRLB_PMODE_ODD          (SERCOM_USART_CTRLB_PMODE_ODD_Val << SERCOM_USART_CTRLB_PMODE_Pos) /* (SERCOM_USART_CTRLB) Odd parity Position */
#define SERCOM_USART_CTRLB_TXEN_Pos           _UINT32_(16)                                         /* (SERCOM_USART_CTRLB) Transmitter Enable Position */
#define SERCOM_USART_CTRLB_TXEN_Msk           (_UINT32_(0x1) << SERCOM_USART_CTRLB_TXEN_Pos)       /* (SERCOM_USART_CTRLB) Transmitter Enable Mask */
#define SERCOM_USART_CTRLB_TXEN(value)        (SERCOM_USART_CTRLB_TXEN_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_TXEN_Pos)) /* Assignment of value for TXEN in the SERCOM_USART_CTRLB register */
#define SERCOM_USART_CTRLB_RXEN_Pos           _UINT32_(17)                                         /* (SERCOM_USART_CTRLB) Receiver Enable Position */
#define SERCOM_USART_CTRLB_RXEN_Msk           (_UINT32_(0x1) << SERCOM_USART_CTRLB_RXEN_Pos)       /* (SERCOM_USART_CTRLB) Receiver Enable Mask */
#define SERCOM_USART_CTRLB_RXEN(value)        (SERCOM_USART_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_RXEN_Pos)) /* Assignment of value for RXEN in the SERCOM_USART_CTRLB register */
#define SERCOM_USART_CTRLB_LINCMD_Pos         _UINT32_(24)                                         /* (SERCOM_USART_CTRLB) LIN Command Position */
#define SERCOM_USART_CTRLB_LINCMD_Msk         (_UINT32_(0x3) << SERCOM_USART_CTRLB_LINCMD_Pos)     /* (SERCOM_USART_CTRLB) LIN Command Mask */
#define SERCOM_USART_CTRLB_LINCMD(value)      (SERCOM_USART_CTRLB_LINCMD_Msk & (_UINT32_(value) << SERCOM_USART_CTRLB_LINCMD_Pos)) /* Assignment of value for LINCMD in the SERCOM_USART_CTRLB register */
#define   SERCOM_USART_CTRLB_LINCMD_NONE_Val  _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLB) Normal USART transmission  */
#define   SERCOM_USART_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLB) A break field is transmitted when DATA is written  */
#define   SERCOM_USART_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLB) The break, sync, and identifier fields are automatically transmitted when the DATA is written with the identifier  */
#define SERCOM_USART_CTRLB_LINCMD_NONE        (SERCOM_USART_CTRLB_LINCMD_NONE_Val << SERCOM_USART_CTRLB_LINCMD_Pos) /* (SERCOM_USART_CTRLB) Normal USART transmission Position */
#define SERCOM_USART_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD (SERCOM_USART_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val << SERCOM_USART_CTRLB_LINCMD_Pos) /* (SERCOM_USART_CTRLB) A break field is transmitted when DATA is written Position */
#define SERCOM_USART_CTRLB_LINCMD_AUTO_TRANSMIT_CMD (SERCOM_USART_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val << SERCOM_USART_CTRLB_LINCMD_Pos) /* (SERCOM_USART_CTRLB) The break, sync, and identifier fields are automatically transmitted when the DATA is written with the identifier Position */
#define SERCOM_USART_CTRLB_Msk                _UINT32_(0x03032747)                                 /* (SERCOM_USART_CTRLB) Register Mask  */


/* -------- SERCOM_USART_CTRLC : (SERCOM Offset: 0x08) (R/W 32) USART Control C -------- */
#define SERCOM_USART_CTRLC_RESETVALUE         _UINT32_(0x00)                                       /*  (SERCOM_USART_CTRLC) USART Control C  Reset Value */

#define SERCOM_USART_CTRLC_GTIME_Pos          _UINT32_(0)                                          /* (SERCOM_USART_CTRLC) Guard Time Position */
#define SERCOM_USART_CTRLC_GTIME_Msk          (_UINT32_(0x7) << SERCOM_USART_CTRLC_GTIME_Pos)      /* (SERCOM_USART_CTRLC) Guard Time Mask */
#define SERCOM_USART_CTRLC_GTIME(value)       (SERCOM_USART_CTRLC_GTIME_Msk & (_UINT32_(value) << SERCOM_USART_CTRLC_GTIME_Pos)) /* Assignment of value for GTIME in the SERCOM_USART_CTRLC register */
#define SERCOM_USART_CTRLC_BRKLEN_Pos         _UINT32_(8)                                          /* (SERCOM_USART_CTRLC) LIN Host Break Length Position */
#define SERCOM_USART_CTRLC_BRKLEN_Msk         (_UINT32_(0x3) << SERCOM_USART_CTRLC_BRKLEN_Pos)     /* (SERCOM_USART_CTRLC) LIN Host Break Length Mask */
#define SERCOM_USART_CTRLC_BRKLEN(value)      (SERCOM_USART_CTRLC_BRKLEN_Msk & (_UINT32_(value) << SERCOM_USART_CTRLC_BRKLEN_Pos)) /* Assignment of value for BRKLEN in the SERCOM_USART_CTRLC register */
#define   SERCOM_USART_CTRLC_BRKLEN_13_BIT_TIME_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLC) The break field transmission is 13 bit times  */
#define   SERCOM_USART_CTRLC_BRKLEN_17_BIT_TIME_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLC) The break field transmission is 17 bit times  */
#define   SERCOM_USART_CTRLC_BRKLEN_21_BIT_TIME_Val _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLC) The break field transmission is 21 bit times  */
#define   SERCOM_USART_CTRLC_BRKLEN_26_BIT_TIME_Val _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLC) The break field transmission is 26 bit times  */
#define SERCOM_USART_CTRLC_BRKLEN_13_BIT_TIME (SERCOM_USART_CTRLC_BRKLEN_13_BIT_TIME_Val << SERCOM_USART_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_CTRLC) The break field transmission is 13 bit times Position */
#define SERCOM_USART_CTRLC_BRKLEN_17_BIT_TIME (SERCOM_USART_CTRLC_BRKLEN_17_BIT_TIME_Val << SERCOM_USART_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_CTRLC) The break field transmission is 17 bit times Position */
#define SERCOM_USART_CTRLC_BRKLEN_21_BIT_TIME (SERCOM_USART_CTRLC_BRKLEN_21_BIT_TIME_Val << SERCOM_USART_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_CTRLC) The break field transmission is 21 bit times Position */
#define SERCOM_USART_CTRLC_BRKLEN_26_BIT_TIME (SERCOM_USART_CTRLC_BRKLEN_26_BIT_TIME_Val << SERCOM_USART_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_CTRLC) The break field transmission is 26 bit times Position */
#define SERCOM_USART_CTRLC_HDRDLY_Pos         _UINT32_(10)                                         /* (SERCOM_USART_CTRLC) LIN Host Header Delay Position */
#define SERCOM_USART_CTRLC_HDRDLY_Msk         (_UINT32_(0x3) << SERCOM_USART_CTRLC_HDRDLY_Pos)     /* (SERCOM_USART_CTRLC) LIN Host Header Delay Mask */
#define SERCOM_USART_CTRLC_HDRDLY(value)      (SERCOM_USART_CTRLC_HDRDLY_Msk & (_UINT32_(value) << SERCOM_USART_CTRLC_HDRDLY_Pos)) /* Assignment of value for HDRDLY in the SERCOM_USART_CTRLC register */
#define   SERCOM_USART_CTRLC_HDRDLY_1_BIT_TIME_Val _UINT32_(0x0)                                        /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is one bit time. Delay between sync and ID transmission is one bit time.  */
#define   SERCOM_USART_CTRLC_HDRDLY_4_BIT_TIME_Val _UINT32_(0x1)                                        /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is four bit times. Delay between sync and ID transmission is four bit times.  */
#define   SERCOM_USART_CTRLC_HDRDLY_8_BIT_TIME_Val _UINT32_(0x2)                                        /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is eight bit times. Delay between sync and ID transmission is four bit times.  */
#define   SERCOM_USART_CTRLC_HDRDLY_14_BIT_TIME_Val _UINT32_(0x3)                                        /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is 14 bit times. Delay between sync and ID transmission is four bit times.  */
#define SERCOM_USART_CTRLC_HDRDLY_1_BIT_TIME  (SERCOM_USART_CTRLC_HDRDLY_1_BIT_TIME_Val << SERCOM_USART_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is one bit time. Delay between sync and ID transmission is one bit time. Position */
#define SERCOM_USART_CTRLC_HDRDLY_4_BIT_TIME  (SERCOM_USART_CTRLC_HDRDLY_4_BIT_TIME_Val << SERCOM_USART_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is four bit times. Delay between sync and ID transmission is four bit times. Position */
#define SERCOM_USART_CTRLC_HDRDLY_8_BIT_TIME  (SERCOM_USART_CTRLC_HDRDLY_8_BIT_TIME_Val << SERCOM_USART_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is eight bit times. Delay between sync and ID transmission is four bit times. Position */
#define SERCOM_USART_CTRLC_HDRDLY_14_BIT_TIME (SERCOM_USART_CTRLC_HDRDLY_14_BIT_TIME_Val << SERCOM_USART_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_CTRLC) Delay between break and sync transmission is 14 bit times. Delay between sync and ID transmission is four bit times. Position */
#define SERCOM_USART_CTRLC_Msk                _UINT32_(0x00000F07)                                 /* (SERCOM_USART_CTRLC) Register Mask  */


/* -------- SERCOM_I2CM_BAUD : (SERCOM Offset: 0x0C) (R/W 32) I2CM Baud Rate -------- */
#define SERCOM_I2CM_BAUD_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_BAUD) I2CM Baud Rate  Reset Value */

#define SERCOM_I2CM_BAUD_BAUD_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_BAUD) Host Baud Rate Position */
#define SERCOM_I2CM_BAUD_BAUD_Msk             (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_BAUD_Pos)        /* (SERCOM_I2CM_BAUD) Host Baud Rate Mask */
#define SERCOM_I2CM_BAUD_BAUD(value)          (SERCOM_I2CM_BAUD_BAUD_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_BAUD_Pos)) /* Assignment of value for BAUD in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_BAUDLOW_Pos          _UINT32_(8)                                          /* (SERCOM_I2CM_BAUD) Host Baud Rate Low Position */
#define SERCOM_I2CM_BAUD_BAUDLOW_Msk          (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)     /* (SERCOM_I2CM_BAUD) Host Baud Rate Low Mask */
#define SERCOM_I2CM_BAUD_BAUDLOW(value)       (SERCOM_I2CM_BAUD_BAUDLOW_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)) /* Assignment of value for BAUDLOW in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_Msk                  _UINT32_(0x0000FFFF)                                 /* (SERCOM_I2CM_BAUD) Register Mask  */


/* -------- SERCOM_SPI_BAUD : (SERCOM Offset: 0x0C) (R/W 8) SPI Baud Rate -------- */
#define SERCOM_SPI_BAUD_RESETVALUE            _UINT8_(0x00)                                        /*  (SERCOM_SPI_BAUD) SPI Baud Rate  Reset Value */

#define SERCOM_SPI_BAUD_BAUD_Pos              _UINT8_(0)                                           /* (SERCOM_SPI_BAUD) Baud Register Position */
#define SERCOM_SPI_BAUD_BAUD_Msk              (_UINT8_(0xFF) << SERCOM_SPI_BAUD_BAUD_Pos)          /* (SERCOM_SPI_BAUD) Baud Register Mask */
#define SERCOM_SPI_BAUD_BAUD(value)           (SERCOM_SPI_BAUD_BAUD_Msk & (_UINT8_(value) << SERCOM_SPI_BAUD_BAUD_Pos)) /* Assignment of value for BAUD in the SERCOM_SPI_BAUD register */
#define SERCOM_SPI_BAUD_Msk                   _UINT8_(0xFF)                                        /* (SERCOM_SPI_BAUD) Register Mask  */


/* -------- SERCOM_USART_BAUD : (SERCOM Offset: 0x0C) (R/W 16) USART Baud -------- */
#define SERCOM_USART_BAUD_RESETVALUE          _UINT16_(0x00)                                       /*  (SERCOM_USART_BAUD) USART Baud  Reset Value */

#define SERCOM_USART_BAUD_Msk                 _UINT16_(0x0000)                                     /* (SERCOM_USART_BAUD) Register Mask  */

/* ARITH mode */
#define SERCOM_USART_BAUD_ARITH_BAUD_Pos      _UINT16_(0)                                          /* (SERCOM_USART_BAUD) Baud Value Position */
#define SERCOM_USART_BAUD_ARITH_BAUD_Msk      (_UINT16_(0xFFFF) << SERCOM_USART_BAUD_ARITH_BAUD_Pos) /* (SERCOM_USART_BAUD) Baud Value Mask */
#define SERCOM_USART_BAUD_ARITH_BAUD(value)   (SERCOM_USART_BAUD_ARITH_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_BAUD_ARITH_BAUD_Pos))
#define SERCOM_USART_BAUD_ARITH_Msk           _UINT16_(0xFFFF)                                     /* (SERCOM_USART_BAUD_ARITH) Register Mask  */

/* FRAC mode */
#define SERCOM_USART_BAUD_FRAC_BAUD_Pos       _UINT16_(0)                                          /* (SERCOM_USART_BAUD) Baud Value Position */
#define SERCOM_USART_BAUD_FRAC_BAUD_Msk       (_UINT16_(0x1FFF) << SERCOM_USART_BAUD_FRAC_BAUD_Pos) /* (SERCOM_USART_BAUD) Baud Value Mask */
#define SERCOM_USART_BAUD_FRAC_BAUD(value)    (SERCOM_USART_BAUD_FRAC_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_BAUD_FRAC_FP_Pos         _UINT16_(13)                                         /* (SERCOM_USART_BAUD) Fractional Part Position */
#define SERCOM_USART_BAUD_FRAC_FP_Msk         (_UINT16_(0x7) << SERCOM_USART_BAUD_FRAC_FP_Pos)     /* (SERCOM_USART_BAUD) Fractional Part Mask */
#define SERCOM_USART_BAUD_FRAC_FP(value)      (SERCOM_USART_BAUD_FRAC_FP_Msk & (_UINT16_(value) << SERCOM_USART_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_BAUD_FRAC_Msk            _UINT16_(0xFFFF)                                     /* (SERCOM_USART_BAUD_FRAC) Register Mask  */


/* -------- SERCOM_USART_RXPL : (SERCOM Offset: 0x0E) (R/W 8) USART Receive Pulse Length -------- */
#define SERCOM_USART_RXPL_RESETVALUE          _UINT8_(0x00)                                        /*  (SERCOM_USART_RXPL) USART Receive Pulse Length  Reset Value */

#define SERCOM_USART_RXPL_RXPL_Pos            _UINT8_(0)                                           /* (SERCOM_USART_RXPL) Receive Pulse Length Position */
#define SERCOM_USART_RXPL_RXPL_Msk            (_UINT8_(0xFF) << SERCOM_USART_RXPL_RXPL_Pos)        /* (SERCOM_USART_RXPL) Receive Pulse Length Mask */
#define SERCOM_USART_RXPL_RXPL(value)         (SERCOM_USART_RXPL_RXPL_Msk & (_UINT8_(value) << SERCOM_USART_RXPL_RXPL_Pos)) /* Assignment of value for RXPL in the SERCOM_USART_RXPL register */
#define SERCOM_USART_RXPL_Msk                 _UINT8_(0xFF)                                        /* (SERCOM_USART_RXPL) Register Mask  */


/* -------- SERCOM_I2CM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CM Interrupt Enable Clear -------- */
#define SERCOM_I2CM_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CM_INTENCLR_MB_Pos           _UINT8_(0)                                           /* (SERCOM_I2CM_INTENCLR) Host on Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENCLR_MB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_MB_Pos)        /* (SERCOM_I2CM_INTENCLR) Host on Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENCLR_MB(value)        (SERCOM_I2CM_INTENCLR_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_MB_Pos)) /* Assignment of value for MB in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_SB_Pos           _UINT8_(1)                                           /* (SERCOM_I2CM_INTENCLR) Client on Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENCLR_SB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_SB_Pos)        /* (SERCOM_I2CM_INTENCLR) Client on Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENCLR_SB(value)        (SERCOM_I2CM_INTENCLR_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_SB_Pos)) /* Assignment of value for SB in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CM_INTENCLR) Error Interrupt Enable Position */
#define SERCOM_I2CM_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_ERROR_Pos)     /* (SERCOM_I2CM_INTENCLR) Error Interrupt Enable Mask */
#define SERCOM_I2CM_INTENCLR_ERROR(value)     (SERCOM_I2CM_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_Msk              _UINT8_(0x83)                                        /* (SERCOM_I2CM_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CS Interrupt Enable Clear -------- */
#define SERCOM_I2CS_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CS_INTENCLR_PREC_Pos         _UINT8_(0)                                           /* (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Enable Position */
#define SERCOM_I2CS_INTENCLR_PREC_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_PREC_Pos)      /* (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Enable Mask */
#define SERCOM_I2CS_INTENCLR_PREC(value)      (SERCOM_I2CS_INTENCLR_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_PREC_Pos)) /* Assignment of value for PREC in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_AMATCH_Pos       _UINT8_(1)                                           /* (SERCOM_I2CS_INTENCLR) Address Match Interrupt Enable Position */
#define SERCOM_I2CS_INTENCLR_AMATCH_Msk       (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)    /* (SERCOM_I2CS_INTENCLR) Address Match Interrupt Enable Mask */
#define SERCOM_I2CS_INTENCLR_AMATCH(value)    (SERCOM_I2CS_INTENCLR_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)) /* Assignment of value for AMATCH in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_DRDY_Pos         _UINT8_(2)                                           /* (SERCOM_I2CS_INTENCLR) Data Ready Interrupt Enable Position */
#define SERCOM_I2CS_INTENCLR_DRDY_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_DRDY_Pos)      /* (SERCOM_I2CS_INTENCLR) Data Ready Interrupt Enable Mask */
#define SERCOM_I2CS_INTENCLR_DRDY(value)      (SERCOM_I2CS_INTENCLR_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_DRDY_Pos)) /* Assignment of value for DRDY in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CS_INTENCLR) Error Interrupt Enable Position */
#define SERCOM_I2CS_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_ERROR_Pos)     /* (SERCOM_I2CS_INTENCLR) Error Interrupt Enable Mask */
#define SERCOM_I2CS_INTENCLR_ERROR(value)     (SERCOM_I2CS_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_Msk              _UINT8_(0x87)                                        /* (SERCOM_I2CS_INTENCLR) Register Mask  */


/* -------- SERCOM_SPI_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPI Interrupt Enable Clear -------- */
#define SERCOM_SPI_INTENCLR_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPI_INTENCLR) SPI Interrupt Enable Clear  Reset Value */

#define SERCOM_SPI_INTENCLR_DRE_Pos           _UINT8_(0)                                           /* (SERCOM_SPI_INTENCLR) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPI_INTENCLR_DRE_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENCLR_DRE_Pos)        /* (SERCOM_SPI_INTENCLR) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPI_INTENCLR_DRE(value)        (SERCOM_SPI_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_SPI_INTENCLR_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPI_INTENCLR register */
#define SERCOM_SPI_INTENCLR_TXC_Pos           _UINT8_(1)                                           /* (SERCOM_SPI_INTENCLR) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPI_INTENCLR_TXC_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENCLR_TXC_Pos)        /* (SERCOM_SPI_INTENCLR) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPI_INTENCLR_TXC(value)        (SERCOM_SPI_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_SPI_INTENCLR_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPI_INTENCLR register */
#define SERCOM_SPI_INTENCLR_RXC_Pos           _UINT8_(2)                                           /* (SERCOM_SPI_INTENCLR) Receive Complete Interrupt Enable Position */
#define SERCOM_SPI_INTENCLR_RXC_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENCLR_RXC_Pos)        /* (SERCOM_SPI_INTENCLR) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPI_INTENCLR_RXC(value)        (SERCOM_SPI_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_SPI_INTENCLR_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPI_INTENCLR register */
#define SERCOM_SPI_INTENCLR_SSL_Pos           _UINT8_(3)                                           /* (SERCOM_SPI_INTENCLR) SPI Select Low Interrupt Enable Position */
#define SERCOM_SPI_INTENCLR_SSL_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENCLR_SSL_Pos)        /* (SERCOM_SPI_INTENCLR) SPI Select Low Interrupt Enable Mask */
#define SERCOM_SPI_INTENCLR_SSL(value)        (SERCOM_SPI_INTENCLR_SSL_Msk & (_UINT8_(value) << SERCOM_SPI_INTENCLR_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPI_INTENCLR register */
#define SERCOM_SPI_INTENCLR_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_SPI_INTENCLR) Error Interrupt Enable Position */
#define SERCOM_SPI_INTENCLR_ERROR_Msk         (_UINT8_(0x1) << SERCOM_SPI_INTENCLR_ERROR_Pos)      /* (SERCOM_SPI_INTENCLR) Error Interrupt Enable Mask */
#define SERCOM_SPI_INTENCLR_ERROR(value)      (SERCOM_SPI_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_SPI_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPI_INTENCLR register */
#define SERCOM_SPI_INTENCLR_Msk               _UINT8_(0x8F)                                        /* (SERCOM_SPI_INTENCLR) Register Mask  */


/* -------- SERCOM_USART_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) USART Interrupt Enable Clear -------- */
#define SERCOM_USART_INTENCLR_RESETVALUE      _UINT8_(0x00)                                        /*  (SERCOM_USART_INTENCLR) USART Interrupt Enable Clear  Reset Value */

#define SERCOM_USART_INTENCLR_DRE_Pos         _UINT8_(0)                                           /* (SERCOM_USART_INTENCLR) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_DRE_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENCLR_DRE_Pos)      /* (SERCOM_USART_INTENCLR) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_DRE(value)      (SERCOM_USART_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_TXC_Pos         _UINT8_(1)                                           /* (SERCOM_USART_INTENCLR) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_TXC_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENCLR_TXC_Pos)      /* (SERCOM_USART_INTENCLR) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_TXC(value)      (SERCOM_USART_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_RXC_Pos         _UINT8_(2)                                           /* (SERCOM_USART_INTENCLR) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_RXC_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENCLR_RXC_Pos)      /* (SERCOM_USART_INTENCLR) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_RXC(value)      (SERCOM_USART_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_RXS_Pos         _UINT8_(3)                                           /* (SERCOM_USART_INTENCLR) Receive Start Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_RXS_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENCLR_RXS_Pos)      /* (SERCOM_USART_INTENCLR) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_RXS(value)      (SERCOM_USART_INTENCLR_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_RXS_Pos)) /* Assignment of value for RXS in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_CTSIC_Pos       _UINT8_(4)                                           /* (SERCOM_USART_INTENCLR) Clear to Send Input Change Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_CTSIC_Msk       (_UINT8_(0x1) << SERCOM_USART_INTENCLR_CTSIC_Pos)    /* (SERCOM_USART_INTENCLR) Clear to Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_CTSIC(value)    (SERCOM_USART_INTENCLR_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_CTSIC_Pos)) /* Assignment of value for CTSIC in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_RXBRK_Pos       _UINT8_(5)                                           /* (SERCOM_USART_INTENCLR) Receive Break Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_RXBRK_Msk       (_UINT8_(0x1) << SERCOM_USART_INTENCLR_RXBRK_Pos)    /* (SERCOM_USART_INTENCLR) Receive Break Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_RXBRK(value)    (SERCOM_USART_INTENCLR_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_RXBRK_Pos)) /* Assignment of value for RXBRK in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_ERROR_Pos       _UINT8_(7)                                           /* (SERCOM_USART_INTENCLR) Error Interrupt Enable Position */
#define SERCOM_USART_INTENCLR_ERROR_Msk       (_UINT8_(0x1) << SERCOM_USART_INTENCLR_ERROR_Pos)    /* (SERCOM_USART_INTENCLR) Error Interrupt Enable Mask */
#define SERCOM_USART_INTENCLR_ERROR(value)    (SERCOM_USART_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_USART_INTENCLR register */
#define SERCOM_USART_INTENCLR_Msk             _UINT8_(0xBF)                                        /* (SERCOM_USART_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CM Interrupt Enable Set -------- */
#define SERCOM_I2CM_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set  Reset Value */

#define SERCOM_I2CM_INTENSET_MB_Pos           _UINT8_(0)                                           /* (SERCOM_I2CM_INTENSET) Host on Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_MB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_MB_Pos)        /* (SERCOM_I2CM_INTENSET) Host on Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_MB(value)        (SERCOM_I2CM_INTENSET_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_MB_Pos)) /* Assignment of value for MB in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_SB_Pos           _UINT8_(1)                                           /* (SERCOM_I2CM_INTENSET) Client on Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_SB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_SB_Pos)        /* (SERCOM_I2CM_INTENSET) Client on Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_SB(value)        (SERCOM_I2CM_INTENSET_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_SB_Pos)) /* Assignment of value for SB in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CM_INTENSET) Error Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_ERROR_Pos)     /* (SERCOM_I2CM_INTENSET) Error Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_ERROR(value)     (SERCOM_I2CM_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_Msk              _UINT8_(0x83)                                        /* (SERCOM_I2CM_INTENSET) Register Mask  */


/* -------- SERCOM_I2CS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CS Interrupt Enable Set -------- */
#define SERCOM_I2CS_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set  Reset Value */

#define SERCOM_I2CS_INTENSET_PREC_Pos         _UINT8_(0)                                           /* (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_PREC_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_PREC_Pos)      /* (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_PREC(value)      (SERCOM_I2CS_INTENSET_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_PREC_Pos)) /* Assignment of value for PREC in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_AMATCH_Pos       _UINT8_(1)                                           /* (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_AMATCH_Msk       (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_AMATCH_Pos)    /* (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_AMATCH(value)    (SERCOM_I2CS_INTENSET_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_AMATCH_Pos)) /* Assignment of value for AMATCH in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_DRDY_Pos         _UINT8_(2)                                           /* (SERCOM_I2CS_INTENSET) Data Ready Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_DRDY_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_DRDY_Pos)      /* (SERCOM_I2CS_INTENSET) Data Ready Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_DRDY(value)      (SERCOM_I2CS_INTENSET_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_DRDY_Pos)) /* Assignment of value for DRDY in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CS_INTENSET) Error Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_ERROR_Pos)     /* (SERCOM_I2CS_INTENSET) Error Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_ERROR(value)     (SERCOM_I2CS_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_Msk              _UINT8_(0x87)                                        /* (SERCOM_I2CS_INTENSET) Register Mask  */


/* -------- SERCOM_SPI_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPI Interrupt Enable Set -------- */
#define SERCOM_SPI_INTENSET_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPI_INTENSET) SPI Interrupt Enable Set  Reset Value */

#define SERCOM_SPI_INTENSET_DRE_Pos           _UINT8_(0)                                           /* (SERCOM_SPI_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPI_INTENSET_DRE_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENSET_DRE_Pos)        /* (SERCOM_SPI_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPI_INTENSET_DRE(value)        (SERCOM_SPI_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_SPI_INTENSET_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPI_INTENSET register */
#define SERCOM_SPI_INTENSET_TXC_Pos           _UINT8_(1)                                           /* (SERCOM_SPI_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPI_INTENSET_TXC_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENSET_TXC_Pos)        /* (SERCOM_SPI_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPI_INTENSET_TXC(value)        (SERCOM_SPI_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_SPI_INTENSET_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPI_INTENSET register */
#define SERCOM_SPI_INTENSET_RXC_Pos           _UINT8_(2)                                           /* (SERCOM_SPI_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPI_INTENSET_RXC_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENSET_RXC_Pos)        /* (SERCOM_SPI_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPI_INTENSET_RXC(value)        (SERCOM_SPI_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_SPI_INTENSET_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPI_INTENSET register */
#define SERCOM_SPI_INTENSET_SSL_Pos           _UINT8_(3)                                           /* (SERCOM_SPI_INTENSET) SPI Select Low Interrupt Enable Position */
#define SERCOM_SPI_INTENSET_SSL_Msk           (_UINT8_(0x1) << SERCOM_SPI_INTENSET_SSL_Pos)        /* (SERCOM_SPI_INTENSET) SPI Select Low Interrupt Enable Mask */
#define SERCOM_SPI_INTENSET_SSL(value)        (SERCOM_SPI_INTENSET_SSL_Msk & (_UINT8_(value) << SERCOM_SPI_INTENSET_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPI_INTENSET register */
#define SERCOM_SPI_INTENSET_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_SPI_INTENSET) Error Interrupt Enable Position */
#define SERCOM_SPI_INTENSET_ERROR_Msk         (_UINT8_(0x1) << SERCOM_SPI_INTENSET_ERROR_Pos)      /* (SERCOM_SPI_INTENSET) Error Interrupt Enable Mask */
#define SERCOM_SPI_INTENSET_ERROR(value)      (SERCOM_SPI_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_SPI_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPI_INTENSET register */
#define SERCOM_SPI_INTENSET_Msk               _UINT8_(0x8F)                                        /* (SERCOM_SPI_INTENSET) Register Mask  */


/* -------- SERCOM_USART_INTENSET : (SERCOM Offset: 0x16) (R/W 8) USART Interrupt Enable Set -------- */
#define SERCOM_USART_INTENSET_RESETVALUE      _UINT8_(0x00)                                        /*  (SERCOM_USART_INTENSET) USART Interrupt Enable Set  Reset Value */

#define SERCOM_USART_INTENSET_DRE_Pos         _UINT8_(0)                                           /* (SERCOM_USART_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_INTENSET_DRE_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENSET_DRE_Pos)      /* (SERCOM_USART_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_DRE(value)      (SERCOM_USART_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_TXC_Pos         _UINT8_(1)                                           /* (SERCOM_USART_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_INTENSET_TXC_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENSET_TXC_Pos)      /* (SERCOM_USART_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_TXC(value)      (SERCOM_USART_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_RXC_Pos         _UINT8_(2)                                           /* (SERCOM_USART_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_INTENSET_RXC_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENSET_RXC_Pos)      /* (SERCOM_USART_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_RXC(value)      (SERCOM_USART_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_RXS_Pos         _UINT8_(3)                                           /* (SERCOM_USART_INTENSET) Receive Start Interrupt Enable Position */
#define SERCOM_USART_INTENSET_RXS_Msk         (_UINT8_(0x1) << SERCOM_USART_INTENSET_RXS_Pos)      /* (SERCOM_USART_INTENSET) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_RXS(value)      (SERCOM_USART_INTENSET_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_RXS_Pos)) /* Assignment of value for RXS in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_CTSIC_Pos       _UINT8_(4)                                           /* (SERCOM_USART_INTENSET) Clear to Send Input Change Interrupt Enable Position */
#define SERCOM_USART_INTENSET_CTSIC_Msk       (_UINT8_(0x1) << SERCOM_USART_INTENSET_CTSIC_Pos)    /* (SERCOM_USART_INTENSET) Clear to Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_CTSIC(value)    (SERCOM_USART_INTENSET_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_CTSIC_Pos)) /* Assignment of value for CTSIC in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_RXBRK_Pos       _UINT8_(5)                                           /* (SERCOM_USART_INTENSET) Receive Break Interrupt Enable Position */
#define SERCOM_USART_INTENSET_RXBRK_Msk       (_UINT8_(0x1) << SERCOM_USART_INTENSET_RXBRK_Pos)    /* (SERCOM_USART_INTENSET) Receive Break Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_RXBRK(value)    (SERCOM_USART_INTENSET_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_RXBRK_Pos)) /* Assignment of value for RXBRK in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_ERROR_Pos       _UINT8_(7)                                           /* (SERCOM_USART_INTENSET) Error Interrupt Enable Position */
#define SERCOM_USART_INTENSET_ERROR_Msk       (_UINT8_(0x1) << SERCOM_USART_INTENSET_ERROR_Pos)    /* (SERCOM_USART_INTENSET) Error Interrupt Enable Mask */
#define SERCOM_USART_INTENSET_ERROR(value)    (SERCOM_USART_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_USART_INTENSET register */
#define SERCOM_USART_INTENSET_Msk             _UINT8_(0xBF)                                        /* (SERCOM_USART_INTENSET) Register Mask  */


/* -------- SERCOM_I2CM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CM Interrupt Flag Status and Clear -------- */
#define SERCOM_I2CM_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CM_INTFLAG_MB_Pos            _UINT8_(0)                                           /* (SERCOM_I2CM_INTFLAG) Host on Bus Position */
#define SERCOM_I2CM_INTFLAG_MB_Msk            (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_MB_Pos)         /* (SERCOM_I2CM_INTFLAG) Host on Bus Mask */
#define SERCOM_I2CM_INTFLAG_MB(value)         (SERCOM_I2CM_INTFLAG_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_MB_Pos)) /* Assignment of value for MB in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_SB_Pos            _UINT8_(1)                                           /* (SERCOM_I2CM_INTFLAG) Client on Bus Position */
#define SERCOM_I2CM_INTFLAG_SB_Msk            (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_SB_Pos)         /* (SERCOM_I2CM_INTFLAG) Client on Bus Mask */
#define SERCOM_I2CM_INTFLAG_SB(value)         (SERCOM_I2CM_INTFLAG_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_SB_Pos)) /* Assignment of value for SB in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_I2CM_INTFLAG) Error Position */
#define SERCOM_I2CM_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_ERROR_Pos)      /* (SERCOM_I2CM_INTFLAG) Error Mask */
#define SERCOM_I2CM_INTFLAG_ERROR(value)      (SERCOM_I2CM_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_Msk               _UINT8_(0x83)                                        /* (SERCOM_I2CM_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CS Interrupt Flag Status and Clear -------- */
#define SERCOM_I2CS_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CS_INTFLAG_PREC_Pos          _UINT8_(0)                                           /* (SERCOM_I2CS_INTFLAG) Stop Received Position */
#define SERCOM_I2CS_INTFLAG_PREC_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_PREC_Pos)       /* (SERCOM_I2CS_INTFLAG) Stop Received Mask */
#define SERCOM_I2CS_INTFLAG_PREC(value)       (SERCOM_I2CS_INTFLAG_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_PREC_Pos)) /* Assignment of value for PREC in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_AMATCH_Pos        _UINT8_(1)                                           /* (SERCOM_I2CS_INTFLAG) Address Match Position */
#define SERCOM_I2CS_INTFLAG_AMATCH_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)     /* (SERCOM_I2CS_INTFLAG) Address Match Mask */
#define SERCOM_I2CS_INTFLAG_AMATCH(value)     (SERCOM_I2CS_INTFLAG_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)) /* Assignment of value for AMATCH in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_DRDY_Pos          _UINT8_(2)                                           /* (SERCOM_I2CS_INTFLAG) Data Ready Position */
#define SERCOM_I2CS_INTFLAG_DRDY_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_DRDY_Pos)       /* (SERCOM_I2CS_INTFLAG) Data Ready Mask */
#define SERCOM_I2CS_INTFLAG_DRDY(value)       (SERCOM_I2CS_INTFLAG_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_DRDY_Pos)) /* Assignment of value for DRDY in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_I2CS_INTFLAG) Error Position */
#define SERCOM_I2CS_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_ERROR_Pos)      /* (SERCOM_I2CS_INTFLAG) Error Mask */
#define SERCOM_I2CS_INTFLAG_ERROR(value)      (SERCOM_I2CS_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_Msk               _UINT8_(0x87)                                        /* (SERCOM_I2CS_INTFLAG) Register Mask  */


/* -------- SERCOM_SPI_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPI Interrupt Flag Status and Clear -------- */
#define SERCOM_SPI_INTFLAG_RESETVALUE         _UINT8_(0x00)                                        /*  (SERCOM_SPI_INTFLAG) SPI Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPI_INTFLAG_DRE_Pos            _UINT8_(0)                                           /* (SERCOM_SPI_INTFLAG) Data Register Empty Position */
#define SERCOM_SPI_INTFLAG_DRE_Msk            (_UINT8_(0x1) << SERCOM_SPI_INTFLAG_DRE_Pos)         /* (SERCOM_SPI_INTFLAG) Data Register Empty Mask */
#define SERCOM_SPI_INTFLAG_DRE(value)         (SERCOM_SPI_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_SPI_INTFLAG_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPI_INTFLAG register */
#define SERCOM_SPI_INTFLAG_TXC_Pos            _UINT8_(1)                                           /* (SERCOM_SPI_INTFLAG) Transmit Complete Position */
#define SERCOM_SPI_INTFLAG_TXC_Msk            (_UINT8_(0x1) << SERCOM_SPI_INTFLAG_TXC_Pos)         /* (SERCOM_SPI_INTFLAG) Transmit Complete Mask */
#define SERCOM_SPI_INTFLAG_TXC(value)         (SERCOM_SPI_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_SPI_INTFLAG_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPI_INTFLAG register */
#define SERCOM_SPI_INTFLAG_RXC_Pos            _UINT8_(2)                                           /* (SERCOM_SPI_INTFLAG) Receive Complete Position */
#define SERCOM_SPI_INTFLAG_RXC_Msk            (_UINT8_(0x1) << SERCOM_SPI_INTFLAG_RXC_Pos)         /* (SERCOM_SPI_INTFLAG) Receive Complete Mask */
#define SERCOM_SPI_INTFLAG_RXC(value)         (SERCOM_SPI_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_SPI_INTFLAG_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPI_INTFLAG register */
#define SERCOM_SPI_INTFLAG_SSL_Pos            _UINT8_(3)                                           /* (SERCOM_SPI_INTFLAG) SPI Select Low Position */
#define SERCOM_SPI_INTFLAG_SSL_Msk            (_UINT8_(0x1) << SERCOM_SPI_INTFLAG_SSL_Pos)         /* (SERCOM_SPI_INTFLAG) SPI Select Low Mask */
#define SERCOM_SPI_INTFLAG_SSL(value)         (SERCOM_SPI_INTFLAG_SSL_Msk & (_UINT8_(value) << SERCOM_SPI_INTFLAG_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPI_INTFLAG register */
#define SERCOM_SPI_INTFLAG_ERROR_Pos          _UINT8_(7)                                           /* (SERCOM_SPI_INTFLAG) Error Position */
#define SERCOM_SPI_INTFLAG_ERROR_Msk          (_UINT8_(0x1) << SERCOM_SPI_INTFLAG_ERROR_Pos)       /* (SERCOM_SPI_INTFLAG) Error Mask */
#define SERCOM_SPI_INTFLAG_ERROR(value)       (SERCOM_SPI_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_SPI_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPI_INTFLAG register */
#define SERCOM_SPI_INTFLAG_Msk                _UINT8_(0x8F)                                        /* (SERCOM_SPI_INTFLAG) Register Mask  */


/* -------- SERCOM_USART_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) USART Interrupt Flag Status and Clear -------- */
#define SERCOM_USART_INTFLAG_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_USART_INTFLAG) USART Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_USART_INTFLAG_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_USART_INTFLAG) Data Register Empty Position */
#define SERCOM_USART_INTFLAG_DRE_Msk          (_UINT8_(0x1) << SERCOM_USART_INTFLAG_DRE_Pos)       /* (SERCOM_USART_INTFLAG) Data Register Empty Mask */
#define SERCOM_USART_INTFLAG_DRE(value)       (SERCOM_USART_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_USART_INTFLAG) Transmit Complete Position */
#define SERCOM_USART_INTFLAG_TXC_Msk          (_UINT8_(0x1) << SERCOM_USART_INTFLAG_TXC_Pos)       /* (SERCOM_USART_INTFLAG) Transmit Complete Mask */
#define SERCOM_USART_INTFLAG_TXC(value)       (SERCOM_USART_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_USART_INTFLAG) Receive Complete Position */
#define SERCOM_USART_INTFLAG_RXC_Msk          (_UINT8_(0x1) << SERCOM_USART_INTFLAG_RXC_Pos)       /* (SERCOM_USART_INTFLAG) Receive Complete Mask */
#define SERCOM_USART_INTFLAG_RXC(value)       (SERCOM_USART_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_RXS_Pos          _UINT8_(3)                                           /* (SERCOM_USART_INTFLAG) Receive Start Position */
#define SERCOM_USART_INTFLAG_RXS_Msk          (_UINT8_(0x1) << SERCOM_USART_INTFLAG_RXS_Pos)       /* (SERCOM_USART_INTFLAG) Receive Start Mask */
#define SERCOM_USART_INTFLAG_RXS(value)       (SERCOM_USART_INTFLAG_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_RXS_Pos)) /* Assignment of value for RXS in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_CTSIC_Pos        _UINT8_(4)                                           /* (SERCOM_USART_INTFLAG) Clear to Send Input Change Position */
#define SERCOM_USART_INTFLAG_CTSIC_Msk        (_UINT8_(0x1) << SERCOM_USART_INTFLAG_CTSIC_Pos)     /* (SERCOM_USART_INTFLAG) Clear to Send Input Change Mask */
#define SERCOM_USART_INTFLAG_CTSIC(value)     (SERCOM_USART_INTFLAG_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_CTSIC_Pos)) /* Assignment of value for CTSIC in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_RXBRK_Pos        _UINT8_(5)                                           /* (SERCOM_USART_INTFLAG) Receive Break Position */
#define SERCOM_USART_INTFLAG_RXBRK_Msk        (_UINT8_(0x1) << SERCOM_USART_INTFLAG_RXBRK_Pos)     /* (SERCOM_USART_INTFLAG) Receive Break Mask */
#define SERCOM_USART_INTFLAG_RXBRK(value)     (SERCOM_USART_INTFLAG_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_RXBRK_Pos)) /* Assignment of value for RXBRK in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_USART_INTFLAG) Error Position */
#define SERCOM_USART_INTFLAG_ERROR_Msk        (_UINT8_(0x1) << SERCOM_USART_INTFLAG_ERROR_Pos)     /* (SERCOM_USART_INTFLAG) Error Mask */
#define SERCOM_USART_INTFLAG_ERROR(value)     (SERCOM_USART_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_USART_INTFLAG register */
#define SERCOM_USART_INTFLAG_Msk              _UINT8_(0xBF)                                        /* (SERCOM_USART_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CM_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CM Status -------- */
#define SERCOM_I2CM_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CM_STATUS) I2CM Status  Reset Value */

#define SERCOM_I2CM_STATUS_BUSERR_Pos         _UINT16_(0)                                          /* (SERCOM_I2CM_STATUS) Bus Error Position */
#define SERCOM_I2CM_STATUS_BUSERR_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_BUSERR_Pos)     /* (SERCOM_I2CM_STATUS) Bus Error Mask */
#define SERCOM_I2CM_STATUS_BUSERR(value)      (SERCOM_I2CM_STATUS_BUSERR_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_BUSERR_Pos)) /* Assignment of value for BUSERR in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_ARBLOST_Pos        _UINT16_(1)                                          /* (SERCOM_I2CM_STATUS) Arbitration Lost Position */
#define SERCOM_I2CM_STATUS_ARBLOST_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_ARBLOST_Pos)    /* (SERCOM_I2CM_STATUS) Arbitration Lost Mask */
#define SERCOM_I2CM_STATUS_ARBLOST(value)     (SERCOM_I2CM_STATUS_ARBLOST_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_ARBLOST_Pos)) /* Assignment of value for ARBLOST in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_RXNACK_Pos         _UINT16_(2)                                          /* (SERCOM_I2CM_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CM_STATUS_RXNACK_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_RXNACK_Pos)     /* (SERCOM_I2CM_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CM_STATUS_RXNACK(value)      (SERCOM_I2CM_STATUS_RXNACK_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_RXNACK_Pos)) /* Assignment of value for RXNACK in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_BUSSTATE_Pos       _UINT16_(4)                                          /* (SERCOM_I2CM_STATUS) Bus State Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_Msk       (_UINT16_(0x3) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)   /* (SERCOM_I2CM_STATUS) Bus State Mask */
#define SERCOM_I2CM_STATUS_BUSSTATE(value)    (SERCOM_I2CM_STATUS_BUSSTATE_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)) /* Assignment of value for BUSSTATE in the SERCOM_I2CM_STATUS register */
#define   SERCOM_I2CM_STATUS_BUSSTATE_UNKNOWN_Val _UINT16_(0x0)                                        /* (SERCOM_I2CM_STATUS) The bus state is unknown to the I2C host, which will wait for a stop condition to be detected or for the bus to be forced into the IDLE state by software  */
#define   SERCOM_I2CM_STATUS_BUSSTATE_IDLE_Val _UINT16_(0x1)                                        /* (SERCOM_I2CM_STATUS) The bus state is waiting for a transaction to be initialized  */
#define   SERCOM_I2CM_STATUS_BUSSTATE_OWNER_Val _UINT16_(0x2)                                        /* (SERCOM_I2CM_STATUS) The I2C host is the current owner of the bus  */
#define   SERCOM_I2CM_STATUS_BUSSTATE_BUSY_Val _UINT16_(0x3)                                        /* (SERCOM_I2CM_STATUS) Some other I2C host owns the bus  */
#define SERCOM_I2CM_STATUS_BUSSTATE_UNKNOWN   (SERCOM_I2CM_STATUS_BUSSTATE_UNKNOWN_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) The bus state is unknown to the I2C host, which will wait for a stop condition to be detected or for the bus to be forced into the IDLE state by software Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_IDLE      (SERCOM_I2CM_STATUS_BUSSTATE_IDLE_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) The bus state is waiting for a transaction to be initialized Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_OWNER     (SERCOM_I2CM_STATUS_BUSSTATE_OWNER_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) The I2C host is the current owner of the bus Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_BUSY      (SERCOM_I2CM_STATUS_BUSSTATE_BUSY_Val << SERCOM_I2CM_STATUS_BUSSTATE_Pos) /* (SERCOM_I2CM_STATUS) Some other I2C host owns the bus Position */
#define SERCOM_I2CM_STATUS_LOWTOUT_Pos        _UINT16_(6)                                          /* (SERCOM_I2CM_STATUS) SCL Low Time-Out Position */
#define SERCOM_I2CM_STATUS_LOWTOUT_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)    /* (SERCOM_I2CM_STATUS) SCL Low Time-Out Mask */
#define SERCOM_I2CM_STATUS_LOWTOUT(value)     (SERCOM_I2CM_STATUS_LOWTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)) /* Assignment of value for LOWTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_CLKHOLD_Pos        _UINT16_(7)                                          /* (SERCOM_I2CM_STATUS) Clock Hold Position */
#define SERCOM_I2CM_STATUS_CLKHOLD_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)    /* (SERCOM_I2CM_STATUS) Clock Hold Mask */
#define SERCOM_I2CM_STATUS_CLKHOLD(value)     (SERCOM_I2CM_STATUS_CLKHOLD_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)) /* Assignment of value for CLKHOLD in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Pos       _UINT16_(8)                                          /* (SERCOM_I2CM_STATUS) Host SCL Low Extend Time-Out Position */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)   /* (SERCOM_I2CM_STATUS) Host SCL Low Extend Time-Out Mask */
#define SERCOM_I2CM_STATUS_MEXTTOUT(value)    (SERCOM_I2CM_STATUS_MEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)) /* Assignment of value for MEXTTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Pos       _UINT16_(9)                                          /* (SERCOM_I2CM_STATUS) Client SCL Low Extend Time-Out Position */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)   /* (SERCOM_I2CM_STATUS) Client SCL Low Extend Time-Out Mask */
#define SERCOM_I2CM_STATUS_SEXTTOUT(value)    (SERCOM_I2CM_STATUS_SEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)) /* Assignment of value for SEXTTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_LENERR_Pos         _UINT16_(10)                                         /* (SERCOM_I2CM_STATUS) Transaction Length Error Position */
#define SERCOM_I2CM_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_LENERR_Pos)     /* (SERCOM_I2CM_STATUS) Transaction Length Error Mask */
#define SERCOM_I2CM_STATUS_LENERR(value)      (SERCOM_I2CM_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_LENERR_Pos)) /* Assignment of value for LENERR in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_Msk                _UINT16_(0x07F7)                                     /* (SERCOM_I2CM_STATUS) Register Mask  */


/* -------- SERCOM_I2CS_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CS Status -------- */
#define SERCOM_I2CS_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CS_STATUS) I2CS Status  Reset Value */

#define SERCOM_I2CS_STATUS_BUSERR_Pos         _UINT16_(0)                                          /* (SERCOM_I2CS_STATUS) Bus Error Position */
#define SERCOM_I2CS_STATUS_BUSERR_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_BUSERR_Pos)     /* (SERCOM_I2CS_STATUS) Bus Error Mask */
#define SERCOM_I2CS_STATUS_BUSERR(value)      (SERCOM_I2CS_STATUS_BUSERR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_BUSERR_Pos)) /* Assignment of value for BUSERR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_COLL_Pos           _UINT16_(1)                                          /* (SERCOM_I2CS_STATUS) Transmit Collision Position */
#define SERCOM_I2CS_STATUS_COLL_Msk           (_UINT16_(0x1) << SERCOM_I2CS_STATUS_COLL_Pos)       /* (SERCOM_I2CS_STATUS) Transmit Collision Mask */
#define SERCOM_I2CS_STATUS_COLL(value)        (SERCOM_I2CS_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_COLL_Pos)) /* Assignment of value for COLL in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_RXNACK_Pos         _UINT16_(2)                                          /* (SERCOM_I2CS_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CS_STATUS_RXNACK_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_RXNACK_Pos)     /* (SERCOM_I2CS_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CS_STATUS_RXNACK(value)      (SERCOM_I2CS_STATUS_RXNACK_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_RXNACK_Pos)) /* Assignment of value for RXNACK in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_DIR_Pos            _UINT16_(3)                                          /* (SERCOM_I2CS_STATUS) Read / Write Direction Position */
#define SERCOM_I2CS_STATUS_DIR_Msk            (_UINT16_(0x1) << SERCOM_I2CS_STATUS_DIR_Pos)        /* (SERCOM_I2CS_STATUS) Read / Write Direction Mask */
#define SERCOM_I2CS_STATUS_DIR(value)         (SERCOM_I2CS_STATUS_DIR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_DIR_Pos)) /* Assignment of value for DIR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_SR_Pos             _UINT16_(4)                                          /* (SERCOM_I2CS_STATUS) Repeated Start Position */
#define SERCOM_I2CS_STATUS_SR_Msk             (_UINT16_(0x1) << SERCOM_I2CS_STATUS_SR_Pos)         /* (SERCOM_I2CS_STATUS) Repeated Start Mask */
#define SERCOM_I2CS_STATUS_SR(value)          (SERCOM_I2CS_STATUS_SR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_SR_Pos)) /* Assignment of value for SR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_LOWTOUT_Pos        _UINT16_(6)                                          /* (SERCOM_I2CS_STATUS) SCL Low Time-out Position */
#define SERCOM_I2CS_STATUS_LOWTOUT_Msk        (_UINT16_(0x1) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)    /* (SERCOM_I2CS_STATUS) SCL Low Time-out Mask */
#define SERCOM_I2CS_STATUS_LOWTOUT(value)     (SERCOM_I2CS_STATUS_LOWTOUT_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)) /* Assignment of value for LOWTOUT in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_CLKHOLD_Pos        _UINT16_(7)                                          /* (SERCOM_I2CS_STATUS) Clock Hold Position */
#define SERCOM_I2CS_STATUS_CLKHOLD_Msk        (_UINT16_(0x1) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)    /* (SERCOM_I2CS_STATUS) Clock Hold Mask */
#define SERCOM_I2CS_STATUS_CLKHOLD(value)     (SERCOM_I2CS_STATUS_CLKHOLD_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)) /* Assignment of value for CLKHOLD in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Pos       _UINT16_(9)                                          /* (SERCOM_I2CS_STATUS) Client SCL Low Extend Time-Out Position */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)   /* (SERCOM_I2CS_STATUS) Client SCL Low Extend Time-Out Mask */
#define SERCOM_I2CS_STATUS_SEXTTOUT(value)    (SERCOM_I2CS_STATUS_SEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)) /* Assignment of value for SEXTTOUT in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_Msk                _UINT16_(0x02DF)                                     /* (SERCOM_I2CS_STATUS) Register Mask  */


/* -------- SERCOM_SPI_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPI Status -------- */
#define SERCOM_SPI_STATUS_RESETVALUE          _UINT16_(0x00)                                       /*  (SERCOM_SPI_STATUS) SPI Status  Reset Value */

#define SERCOM_SPI_STATUS_BUFOVF_Pos          _UINT16_(2)                                          /* (SERCOM_SPI_STATUS) Buffer Overflow Position */
#define SERCOM_SPI_STATUS_BUFOVF_Msk          (_UINT16_(0x1) << SERCOM_SPI_STATUS_BUFOVF_Pos)      /* (SERCOM_SPI_STATUS) Buffer Overflow Mask */
#define SERCOM_SPI_STATUS_BUFOVF(value)       (SERCOM_SPI_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_SPI_STATUS_BUFOVF_Pos)) /* Assignment of value for BUFOVF in the SERCOM_SPI_STATUS register */
#define SERCOM_SPI_STATUS_Msk                 _UINT16_(0x0004)                                     /* (SERCOM_SPI_STATUS) Register Mask  */


/* -------- SERCOM_USART_STATUS : (SERCOM Offset: 0x1A) (R/W 16) USART Status -------- */
#define SERCOM_USART_STATUS_RESETVALUE        _UINT16_(0x00)                                       /*  (SERCOM_USART_STATUS) USART Status  Reset Value */

#define SERCOM_USART_STATUS_PERR_Pos          _UINT16_(0)                                          /* (SERCOM_USART_STATUS) Parity Error Position */
#define SERCOM_USART_STATUS_PERR_Msk          (_UINT16_(0x1) << SERCOM_USART_STATUS_PERR_Pos)      /* (SERCOM_USART_STATUS) Parity Error Mask */
#define SERCOM_USART_STATUS_PERR(value)       (SERCOM_USART_STATUS_PERR_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_PERR_Pos)) /* Assignment of value for PERR in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_FERR_Pos          _UINT16_(1)                                          /* (SERCOM_USART_STATUS) Frame Error Position */
#define SERCOM_USART_STATUS_FERR_Msk          (_UINT16_(0x1) << SERCOM_USART_STATUS_FERR_Pos)      /* (SERCOM_USART_STATUS) Frame Error Mask */
#define SERCOM_USART_STATUS_FERR(value)       (SERCOM_USART_STATUS_FERR_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_FERR_Pos)) /* Assignment of value for FERR in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_BUFOVF_Pos        _UINT16_(2)                                          /* (SERCOM_USART_STATUS) Buffer Overflow Position */
#define SERCOM_USART_STATUS_BUFOVF_Msk        (_UINT16_(0x1) << SERCOM_USART_STATUS_BUFOVF_Pos)    /* (SERCOM_USART_STATUS) Buffer Overflow Mask */
#define SERCOM_USART_STATUS_BUFOVF(value)     (SERCOM_USART_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_BUFOVF_Pos)) /* Assignment of value for BUFOVF in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_CTS_Pos           _UINT16_(3)                                          /* (SERCOM_USART_STATUS) Clear to Send Position */
#define SERCOM_USART_STATUS_CTS_Msk           (_UINT16_(0x1) << SERCOM_USART_STATUS_CTS_Pos)       /* (SERCOM_USART_STATUS) Clear to Send Mask */
#define SERCOM_USART_STATUS_CTS(value)        (SERCOM_USART_STATUS_CTS_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_CTS_Pos)) /* Assignment of value for CTS in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_ISF_Pos           _UINT16_(4)                                          /* (SERCOM_USART_STATUS) Inconsistent Sync Field Position */
#define SERCOM_USART_STATUS_ISF_Msk           (_UINT16_(0x1) << SERCOM_USART_STATUS_ISF_Pos)       /* (SERCOM_USART_STATUS) Inconsistent Sync Field Mask */
#define SERCOM_USART_STATUS_ISF(value)        (SERCOM_USART_STATUS_ISF_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_ISF_Pos)) /* Assignment of value for ISF in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_COLL_Pos          _UINT16_(5)                                          /* (SERCOM_USART_STATUS) Collision Detected Position */
#define SERCOM_USART_STATUS_COLL_Msk          (_UINT16_(0x1) << SERCOM_USART_STATUS_COLL_Pos)      /* (SERCOM_USART_STATUS) Collision Detected Mask */
#define SERCOM_USART_STATUS_COLL(value)       (SERCOM_USART_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_COLL_Pos)) /* Assignment of value for COLL in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_TXE_Pos           _UINT16_(6)                                          /* (SERCOM_USART_STATUS) Transmitter Empty Position */
#define SERCOM_USART_STATUS_TXE_Msk           (_UINT16_(0x1) << SERCOM_USART_STATUS_TXE_Pos)       /* (SERCOM_USART_STATUS) Transmitter Empty Mask */
#define SERCOM_USART_STATUS_TXE(value)        (SERCOM_USART_STATUS_TXE_Msk & (_UINT16_(value) << SERCOM_USART_STATUS_TXE_Pos)) /* Assignment of value for TXE in the SERCOM_USART_STATUS register */
#define SERCOM_USART_STATUS_Msk               _UINT16_(0x007F)                                     /* (SERCOM_USART_STATUS) Register Mask  */


/* -------- SERCOM_I2CM_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) I2CM Synchronization Busy -------- */
#define SERCOM_I2CM_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy  Reset Value */

#define SERCOM_I2CM_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)    /* (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SWRST(value)     (SERCOM_I2CM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_ENABLE(value)    (SERCOM_I2CM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Pos        _UINT32_(2)                                          /* (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Msk        (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)    /* (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SYSOP(value)     (SERCOM_I2CM_SYNCBUSY_SYSOP_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)) /* Assignment of value for SYSOP in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_Msk              _UINT32_(0x00000007)                                 /* (SERCOM_I2CM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_I2CS_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) I2CS Synchronization Busy -------- */
#define SERCOM_I2CS_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy  Reset Value */

#define SERCOM_I2CS_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)    /* (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_SWRST(value)     (SERCOM_I2CS_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_ENABLE(value)    (SERCOM_I2CS_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_Msk              _UINT32_(0x00000003)                                 /* (SERCOM_I2CS_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPI_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) SPI Synchronization Busy -------- */
#define SERCOM_SPI_SYNCBUSY_RESETVALUE        _UINT32_(0x00)                                       /*  (SERCOM_SPI_SYNCBUSY) SPI Synchronization Busy  Reset Value */

#define SERCOM_SPI_SYNCBUSY_SWRST_Pos         _UINT32_(0)                                          /* (SERCOM_SPI_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPI_SYNCBUSY_SWRST_Msk         (_UINT32_(0x1) << SERCOM_SPI_SYNCBUSY_SWRST_Pos)     /* (SERCOM_SPI_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPI_SYNCBUSY_SWRST(value)      (SERCOM_SPI_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_SPI_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_SPI_SYNCBUSY register */
#define SERCOM_SPI_SYNCBUSY_ENABLE_Pos        _UINT32_(1)                                          /* (SERCOM_SPI_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPI_SYNCBUSY_ENABLE_Msk        (_UINT32_(0x1) << SERCOM_SPI_SYNCBUSY_ENABLE_Pos)    /* (SERCOM_SPI_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPI_SYNCBUSY_ENABLE(value)     (SERCOM_SPI_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPI_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_SPI_SYNCBUSY register */
#define SERCOM_SPI_SYNCBUSY_CTRLB_Pos         _UINT32_(2)                                          /* (SERCOM_SPI_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPI_SYNCBUSY_CTRLB_Msk         (_UINT32_(0x1) << SERCOM_SPI_SYNCBUSY_CTRLB_Pos)     /* (SERCOM_SPI_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPI_SYNCBUSY_CTRLB(value)      (SERCOM_SPI_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_SPI_SYNCBUSY_CTRLB_Pos)) /* Assignment of value for CTRLB in the SERCOM_SPI_SYNCBUSY register */
#define SERCOM_SPI_SYNCBUSY_Msk               _UINT32_(0x00000007)                                 /* (SERCOM_SPI_SYNCBUSY) Register Mask  */


/* -------- SERCOM_USART_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) USART Synchronization Busy -------- */
#define SERCOM_USART_SYNCBUSY_RESETVALUE      _UINT32_(0x00)                                       /*  (SERCOM_USART_SYNCBUSY) USART Synchronization Busy  Reset Value */

#define SERCOM_USART_SYNCBUSY_SWRST_Pos       _UINT32_(0)                                          /* (SERCOM_USART_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_USART_SYNCBUSY_SWRST_Msk       (_UINT32_(0x1) << SERCOM_USART_SYNCBUSY_SWRST_Pos)   /* (SERCOM_USART_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_USART_SYNCBUSY_SWRST(value)    (SERCOM_USART_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_USART_SYNCBUSY register */
#define SERCOM_USART_SYNCBUSY_ENABLE_Pos      _UINT32_(1)                                          /* (SERCOM_USART_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_USART_SYNCBUSY_ENABLE_Msk      (_UINT32_(0x1) << SERCOM_USART_SYNCBUSY_ENABLE_Pos)  /* (SERCOM_USART_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_USART_SYNCBUSY_ENABLE(value)   (SERCOM_USART_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_USART_SYNCBUSY register */
#define SERCOM_USART_SYNCBUSY_CTRLB_Pos       _UINT32_(2)                                          /* (SERCOM_USART_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_USART_SYNCBUSY_CTRLB_Msk       (_UINT32_(0x1) << SERCOM_USART_SYNCBUSY_CTRLB_Pos)   /* (SERCOM_USART_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_USART_SYNCBUSY_CTRLB(value)    (SERCOM_USART_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_USART_SYNCBUSY_CTRLB_Pos)) /* Assignment of value for CTRLB in the SERCOM_USART_SYNCBUSY register */
#define SERCOM_USART_SYNCBUSY_Msk             _UINT32_(0x00000007)                                 /* (SERCOM_USART_SYNCBUSY) Register Mask  */


/* -------- SERCOM_I2CM_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CM Address -------- */
#define SERCOM_I2CM_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_ADDR) I2CM Address  Reset Value */

#define SERCOM_I2CM_ADDR_LENEN_Pos            _UINT32_(13)                                         /* (SERCOM_I2CM_ADDR) Transfer Length Enable Position */
#define SERCOM_I2CM_ADDR_LENEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_ADDR_LENEN_Pos)        /* (SERCOM_I2CM_ADDR) Transfer Length Enable Mask */
#define SERCOM_I2CM_ADDR_LENEN(value)         (SERCOM_I2CM_ADDR_LENEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_LENEN_Pos)) /* Assignment of value for LENEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_TENBITEN_Pos         _UINT32_(15)                                         /* (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CM_ADDR_TENBITEN_Msk         (_UINT32_(0x1) << SERCOM_I2CM_ADDR_TENBITEN_Pos)     /* (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CM_ADDR_TENBITEN(value)      (SERCOM_I2CM_ADDR_TENBITEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_TENBITEN_Pos)) /* Assignment of value for TENBITEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_LEN_Pos              _UINT32_(16)                                         /* (SERCOM_I2CM_ADDR) Transaction Length Position */
#define SERCOM_I2CM_ADDR_LEN_Msk              (_UINT32_(0xFF) << SERCOM_I2CM_ADDR_LEN_Pos)         /* (SERCOM_I2CM_ADDR) Transaction Length Mask */
#define SERCOM_I2CM_ADDR_LEN(value)           (SERCOM_I2CM_ADDR_LEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_LEN_Pos)) /* Assignment of value for LEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_Msk                  _UINT32_(0x00FFA000)                                 /* (SERCOM_I2CM_ADDR) Register Mask  */

/* SEVENBIT mode */
#define SERCOM_I2CM_ADDR_SEVENBIT_ADDR_Pos    _UINT32_(0)                                          /* (SERCOM_I2CM_ADDR) Address Position */
#define SERCOM_I2CM_ADDR_SEVENBIT_ADDR_Msk    (_UINT32_(0x7F) << SERCOM_I2CM_ADDR_SEVENBIT_ADDR_Pos) /* (SERCOM_I2CM_ADDR) Address Mask */
#define SERCOM_I2CM_ADDR_SEVENBIT_ADDR(value) (SERCOM_I2CM_ADDR_SEVENBIT_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_SEVENBIT_ADDR_Pos))
#define SERCOM_I2CM_ADDR_SEVENBIT_Msk         _UINT32_(0x0000007F)                                 /* (SERCOM_I2CM_ADDR_SEVENBIT) Register Mask  */

/* TENBIT mode */
#define SERCOM_I2CM_ADDR_TENBIT_ADDR_Pos      _UINT32_(0)                                          /* (SERCOM_I2CM_ADDR) Address Position */
#define SERCOM_I2CM_ADDR_TENBIT_ADDR_Msk      (_UINT32_(0x3FF) << SERCOM_I2CM_ADDR_TENBIT_ADDR_Pos) /* (SERCOM_I2CM_ADDR) Address Mask */
#define SERCOM_I2CM_ADDR_TENBIT_ADDR(value)   (SERCOM_I2CM_ADDR_TENBIT_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_TENBIT_ADDR_Pos))
#define SERCOM_I2CM_ADDR_TENBIT_Msk           _UINT32_(0x000003FF)                                 /* (SERCOM_I2CM_ADDR_TENBIT) Register Mask  */


/* -------- SERCOM_I2CS_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CS Address -------- */
#define SERCOM_I2CS_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CS_ADDR) I2CS Address  Reset Value */

#define SERCOM_I2CS_ADDR_GENCEN_Pos           _UINT32_(0)                                          /* (SERCOM_I2CS_ADDR) General Call Address Enable Position */
#define SERCOM_I2CS_ADDR_GENCEN_Msk           (_UINT32_(0x1) << SERCOM_I2CS_ADDR_GENCEN_Pos)       /* (SERCOM_I2CS_ADDR) General Call Address Enable Mask */
#define SERCOM_I2CS_ADDR_GENCEN(value)        (SERCOM_I2CS_ADDR_GENCEN_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_GENCEN_Pos)) /* Assignment of value for GENCEN in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_TENBITEN_Pos         _UINT32_(15)                                         /* (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CS_ADDR_TENBITEN_Msk         (_UINT32_(0x1) << SERCOM_I2CS_ADDR_TENBITEN_Pos)     /* (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CS_ADDR_TENBITEN(value)      (SERCOM_I2CS_ADDR_TENBITEN_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_TENBITEN_Pos)) /* Assignment of value for TENBITEN in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_Msk                  _UINT32_(0x00008001)                                 /* (SERCOM_I2CS_ADDR) Register Mask  */

/* SEVENBIT mode */
#define SERCOM_I2CS_ADDR_SEVENBIT_ADDR_Pos    _UINT32_(1)                                          /* (SERCOM_I2CS_ADDR) Address Position */
#define SERCOM_I2CS_ADDR_SEVENBIT_ADDR_Msk    (_UINT32_(0x7F) << SERCOM_I2CS_ADDR_SEVENBIT_ADDR_Pos) /* (SERCOM_I2CS_ADDR) Address Mask */
#define SERCOM_I2CS_ADDR_SEVENBIT_ADDR(value) (SERCOM_I2CS_ADDR_SEVENBIT_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_SEVENBIT_ADDR_Pos))
#define SERCOM_I2CS_ADDR_SEVENBIT_ADDRMASK_Pos _UINT32_(17)                                         /* (SERCOM_I2CS_ADDR) Address Mask Position */
#define SERCOM_I2CS_ADDR_SEVENBIT_ADDRMASK_Msk (_UINT32_(0x7F) << SERCOM_I2CS_ADDR_SEVENBIT_ADDRMASK_Pos) /* (SERCOM_I2CS_ADDR) Address Mask Mask */
#define SERCOM_I2CS_ADDR_SEVENBIT_ADDRMASK(value) (SERCOM_I2CS_ADDR_SEVENBIT_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_SEVENBIT_ADDRMASK_Pos))
#define SERCOM_I2CS_ADDR_SEVENBIT_Msk         _UINT32_(0x00FE00FE)                                 /* (SERCOM_I2CS_ADDR_SEVENBIT) Register Mask  */

/* TENBIT mode */
#define SERCOM_I2CS_ADDR_TENBIT_ADDR_Pos      _UINT32_(1)                                          /* (SERCOM_I2CS_ADDR) Address Position */
#define SERCOM_I2CS_ADDR_TENBIT_ADDR_Msk      (_UINT32_(0x3FF) << SERCOM_I2CS_ADDR_TENBIT_ADDR_Pos) /* (SERCOM_I2CS_ADDR) Address Mask */
#define SERCOM_I2CS_ADDR_TENBIT_ADDR(value)   (SERCOM_I2CS_ADDR_TENBIT_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_TENBIT_ADDR_Pos))
#define SERCOM_I2CS_ADDR_TENBIT_ADDRMASK_Pos  _UINT32_(17)                                         /* (SERCOM_I2CS_ADDR) Address Mask Position */
#define SERCOM_I2CS_ADDR_TENBIT_ADDRMASK_Msk  (_UINT32_(0x3FF) << SERCOM_I2CS_ADDR_TENBIT_ADDRMASK_Pos) /* (SERCOM_I2CS_ADDR) Address Mask Mask */
#define SERCOM_I2CS_ADDR_TENBIT_ADDRMASK(value) (SERCOM_I2CS_ADDR_TENBIT_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_TENBIT_ADDRMASK_Pos))
#define SERCOM_I2CS_ADDR_TENBIT_Msk           _UINT32_(0x07FE07FE)                                 /* (SERCOM_I2CS_ADDR_TENBIT) Register Mask  */


/* -------- SERCOM_SPI_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPI Address -------- */
#define SERCOM_SPI_ADDR_RESETVALUE            _UINT32_(0x00)                                       /*  (SERCOM_SPI_ADDR) SPI Address  Reset Value */

#define SERCOM_SPI_ADDR_ADDR_Pos              _UINT32_(0)                                          /* (SERCOM_SPI_ADDR) Address Position */
#define SERCOM_SPI_ADDR_ADDR_Msk              (_UINT32_(0xFF) << SERCOM_SPI_ADDR_ADDR_Pos)         /* (SERCOM_SPI_ADDR) Address Mask */
#define SERCOM_SPI_ADDR_ADDR(value)           (SERCOM_SPI_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_SPI_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the SERCOM_SPI_ADDR register */
#define SERCOM_SPI_ADDR_ADDRMASK_Pos          _UINT32_(16)                                         /* (SERCOM_SPI_ADDR) Address Mask Position */
#define SERCOM_SPI_ADDR_ADDRMASK_Msk          (_UINT32_(0xFF) << SERCOM_SPI_ADDR_ADDRMASK_Pos)     /* (SERCOM_SPI_ADDR) Address Mask Mask */
#define SERCOM_SPI_ADDR_ADDRMASK(value)       (SERCOM_SPI_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_SPI_ADDR_ADDRMASK_Pos)) /* Assignment of value for ADDRMASK in the SERCOM_SPI_ADDR register */
#define SERCOM_SPI_ADDR_Msk                   _UINT32_(0x00FF00FF)                                 /* (SERCOM_SPI_ADDR) Register Mask  */


/* -------- SERCOM_I2CM_DATA : (SERCOM Offset: 0x28) (R/W 8) I2CM Data -------- */
#define SERCOM_I2CM_DATA_RESETVALUE           _UINT8_(0x00)                                        /*  (SERCOM_I2CM_DATA) I2CM Data  Reset Value */

#define SERCOM_I2CM_DATA_DATA_Pos             _UINT8_(0)                                           /* (SERCOM_I2CM_DATA) Data Position */
#define SERCOM_I2CM_DATA_DATA_Msk             (_UINT8_(0xFF) << SERCOM_I2CM_DATA_DATA_Pos)         /* (SERCOM_I2CM_DATA) Data Mask */
#define SERCOM_I2CM_DATA_DATA(value)          (SERCOM_I2CM_DATA_DATA_Msk & (_UINT8_(value) << SERCOM_I2CM_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_I2CM_DATA register */
#define SERCOM_I2CM_DATA_Msk                  _UINT8_(0xFF)                                        /* (SERCOM_I2CM_DATA) Register Mask  */


/* -------- SERCOM_I2CS_DATA : (SERCOM Offset: 0x28) (R/W 8) I2CS Data -------- */
#define SERCOM_I2CS_DATA_RESETVALUE           _UINT8_(0x00)                                        /*  (SERCOM_I2CS_DATA) I2CS Data  Reset Value */

#define SERCOM_I2CS_DATA_DATA_Pos             _UINT8_(0)                                           /* (SERCOM_I2CS_DATA) Data Position */
#define SERCOM_I2CS_DATA_DATA_Msk             (_UINT8_(0xFF) << SERCOM_I2CS_DATA_DATA_Pos)         /* (SERCOM_I2CS_DATA) Data Mask */
#define SERCOM_I2CS_DATA_DATA(value)          (SERCOM_I2CS_DATA_DATA_Msk & (_UINT8_(value) << SERCOM_I2CS_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_I2CS_DATA register */
#define SERCOM_I2CS_DATA_Msk                  _UINT8_(0xFF)                                        /* (SERCOM_I2CS_DATA) Register Mask  */


/* -------- SERCOM_SPI_DATA : (SERCOM Offset: 0x28) (R/W 16) SPI Data -------- */
#define SERCOM_SPI_DATA_RESETVALUE            _UINT16_(0x00)                                       /*  (SERCOM_SPI_DATA) SPI Data  Reset Value */

#define SERCOM_SPI_DATA_DATA_Pos              _UINT16_(0)                                          /* (SERCOM_SPI_DATA) Data Position */
#define SERCOM_SPI_DATA_DATA_Msk              (_UINT16_(0x1FF) << SERCOM_SPI_DATA_DATA_Pos)        /* (SERCOM_SPI_DATA) Data Mask */
#define SERCOM_SPI_DATA_DATA(value)           (SERCOM_SPI_DATA_DATA_Msk & (_UINT16_(value) << SERCOM_SPI_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_SPI_DATA register */
#define SERCOM_SPI_DATA_Msk                   _UINT16_(0x01FF)                                     /* (SERCOM_SPI_DATA) Register Mask  */


/* -------- SERCOM_USART_DATA : (SERCOM Offset: 0x28) (R/W 16) USART Data -------- */
#define SERCOM_USART_DATA_RESETVALUE          _UINT16_(0x00)                                       /*  (SERCOM_USART_DATA) USART Data  Reset Value */

#define SERCOM_USART_DATA_DATA_Pos            _UINT16_(0)                                          /* (SERCOM_USART_DATA) Data Position */
#define SERCOM_USART_DATA_DATA_Msk            (_UINT16_(0x1FF) << SERCOM_USART_DATA_DATA_Pos)      /* (SERCOM_USART_DATA) Data Mask */
#define SERCOM_USART_DATA_DATA(value)         (SERCOM_USART_DATA_DATA_Msk & (_UINT16_(value) << SERCOM_USART_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_USART_DATA register */
#define SERCOM_USART_DATA_Msk                 _UINT16_(0x01FF)                                     /* (SERCOM_USART_DATA) Register Mask  */


/* -------- SERCOM_I2CM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) I2CM Debug Control -------- */
#define SERCOM_I2CM_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CM_DBGCTRL) I2CM Debug Control  Reset Value */

#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_I2CM_DBGCTRL) Debug Stop Mode Position */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_I2CM_DBGCTRL) Debug Stop Mode Mask */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP(value)    (SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_I2CM_DBGCTRL register */
#define SERCOM_I2CM_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_I2CM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPI_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPI Debug Control -------- */
#define SERCOM_SPI_DBGCTRL_RESETVALUE         _UINT8_(0x00)                                        /*  (SERCOM_SPI_DBGCTRL) SPI Debug Control  Reset Value */

#define SERCOM_SPI_DBGCTRL_DBGSTOP_Pos        _UINT8_(0)                                           /* (SERCOM_SPI_DBGCTRL) Debug Stop Mode Position */
#define SERCOM_SPI_DBGCTRL_DBGSTOP_Msk        (_UINT8_(0x1) << SERCOM_SPI_DBGCTRL_DBGSTOP_Pos)     /* (SERCOM_SPI_DBGCTRL) Debug Stop Mode Mask */
#define SERCOM_SPI_DBGCTRL_DBGSTOP(value)     (SERCOM_SPI_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_SPI_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_SPI_DBGCTRL register */
#define SERCOM_SPI_DBGCTRL_Msk                _UINT8_(0x01)                                        /* (SERCOM_SPI_DBGCTRL) Register Mask  */


/* -------- SERCOM_USART_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) USART Debug Control -------- */
#define SERCOM_USART_DBGCTRL_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_USART_DBGCTRL) USART Debug Control  Reset Value */

#define SERCOM_USART_DBGCTRL_DBGSTOP_Pos      _UINT8_(0)                                           /* (SERCOM_USART_DBGCTRL) Debug Stop Mode Position */
#define SERCOM_USART_DBGCTRL_DBGSTOP_Msk      (_UINT8_(0x1) << SERCOM_USART_DBGCTRL_DBGSTOP_Pos)   /* (SERCOM_USART_DBGCTRL) Debug Stop Mode Mask */
#define SERCOM_USART_DBGCTRL_DBGSTOP(value)   (SERCOM_USART_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_USART_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_USART_DBGCTRL register */
#define SERCOM_USART_DBGCTRL_Msk              _UINT8_(0x01)                                        /* (SERCOM_USART_DBGCTRL) Register Mask  */


/* SERCOM register offsets definitions */
#define SERCOM_I2CM_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_I2CM_CTRLA) I2CM Control A Offset */
#define SERCOM_I2CS_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_I2CS_CTRLA) I2CS Control A Offset */
#define SERCOM_SPI_CTRLA_REG_OFST      _UINT32_(0x00)      /* (SERCOM_SPI_CTRLA) SPI Control A Offset */
#define SERCOM_USART_CTRLA_REG_OFST    _UINT32_(0x00)      /* (SERCOM_USART_CTRLA) USART Control A Offset */
#define SERCOM_I2CM_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_I2CM_CTRLB) I2CM Control B Offset */
#define SERCOM_I2CS_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_I2CS_CTRLB) I2CS Control B Offset */
#define SERCOM_SPI_CTRLB_REG_OFST      _UINT32_(0x04)      /* (SERCOM_SPI_CTRLB) SPI Control B Offset */
#define SERCOM_USART_CTRLB_REG_OFST    _UINT32_(0x04)      /* (SERCOM_USART_CTRLB) USART Control B Offset */
#define SERCOM_USART_CTRLC_REG_OFST    _UINT32_(0x08)      /* (SERCOM_USART_CTRLC) USART Control C Offset */
#define SERCOM_I2CM_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_I2CM_BAUD) I2CM Baud Rate Offset */
#define SERCOM_SPI_BAUD_REG_OFST       _UINT32_(0x0C)      /* (SERCOM_SPI_BAUD) SPI Baud Rate Offset */
#define SERCOM_USART_BAUD_REG_OFST     _UINT32_(0x0C)      /* (SERCOM_USART_BAUD) USART Baud Offset */
#define SERCOM_USART_RXPL_REG_OFST     _UINT32_(0x0E)      /* (SERCOM_USART_RXPL) USART Receive Pulse Length Offset */
#define SERCOM_I2CM_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear Offset */
#define SERCOM_I2CS_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear Offset */
#define SERCOM_SPI_INTENCLR_REG_OFST   _UINT32_(0x14)      /* (SERCOM_SPI_INTENCLR) SPI Interrupt Enable Clear Offset */
#define SERCOM_USART_INTENCLR_REG_OFST _UINT32_(0x14)      /* (SERCOM_USART_INTENCLR) USART Interrupt Enable Clear Offset */
#define SERCOM_I2CM_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set Offset */
#define SERCOM_I2CS_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set Offset */
#define SERCOM_SPI_INTENSET_REG_OFST   _UINT32_(0x16)      /* (SERCOM_SPI_INTENSET) SPI Interrupt Enable Set Offset */
#define SERCOM_USART_INTENSET_REG_OFST _UINT32_(0x16)      /* (SERCOM_USART_INTENSET) USART Interrupt Enable Set Offset */
#define SERCOM_I2CM_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear Offset */
#define SERCOM_I2CS_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear Offset */
#define SERCOM_SPI_INTFLAG_REG_OFST    _UINT32_(0x18)      /* (SERCOM_SPI_INTFLAG) SPI Interrupt Flag Status and Clear Offset */
#define SERCOM_USART_INTFLAG_REG_OFST  _UINT32_(0x18)      /* (SERCOM_USART_INTFLAG) USART Interrupt Flag Status and Clear Offset */
#define SERCOM_I2CM_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_I2CM_STATUS) I2CM Status Offset */
#define SERCOM_I2CS_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_I2CS_STATUS) I2CS Status Offset */
#define SERCOM_SPI_STATUS_REG_OFST     _UINT32_(0x1A)      /* (SERCOM_SPI_STATUS) SPI Status Offset */
#define SERCOM_USART_STATUS_REG_OFST   _UINT32_(0x1A)      /* (SERCOM_USART_STATUS) USART Status Offset */
#define SERCOM_I2CM_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy Offset */
#define SERCOM_I2CS_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy Offset */
#define SERCOM_SPI_SYNCBUSY_REG_OFST   _UINT32_(0x1C)      /* (SERCOM_SPI_SYNCBUSY) SPI Synchronization Busy Offset */
#define SERCOM_USART_SYNCBUSY_REG_OFST _UINT32_(0x1C)      /* (SERCOM_USART_SYNCBUSY) USART Synchronization Busy Offset */
#define SERCOM_I2CM_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_I2CM_ADDR) I2CM Address Offset */
#define SERCOM_I2CS_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_I2CS_ADDR) I2CS Address Offset */
#define SERCOM_SPI_ADDR_REG_OFST       _UINT32_(0x24)      /* (SERCOM_SPI_ADDR) SPI Address Offset */
#define SERCOM_I2CM_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_I2CM_DATA) I2CM Data Offset */
#define SERCOM_I2CS_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_I2CS_DATA) I2CS Data Offset */
#define SERCOM_SPI_DATA_REG_OFST       _UINT32_(0x28)      /* (SERCOM_SPI_DATA) SPI Data Offset */
#define SERCOM_USART_DATA_REG_OFST     _UINT32_(0x28)      /* (SERCOM_USART_DATA) USART Data Offset */
#define SERCOM_I2CM_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_I2CM_DBGCTRL) I2CM Debug Control Offset */
#define SERCOM_SPI_DBGCTRL_REG_OFST    _UINT32_(0x30)      /* (SERCOM_SPI_DBGCTRL) SPI Debug Control Offset */
#define SERCOM_USART_DBGCTRL_REG_OFST  _UINT32_(0x30)      /* (SERCOM_USART_DBGCTRL) USART Debug Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) I2CM Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) I2CM Control B */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       SERCOM_BAUD;        /* Offset: 0x0C (R/W  32) I2CM Baud Rate */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) I2CM Interrupt Enable Clear */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) I2CM Interrupt Enable Set */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) I2CM Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved5[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) I2CM Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) I2CM Synchronization Busy */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) I2CM Address */
  __IO  uint8_t                        SERCOM_DATA;        /* Offset: 0x28 (R/W  8) I2CM Data */
  __I   uint8_t                        Reserved7[0x07];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) I2CM Debug Control */
} sercom_i2cm_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) I2CS Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) I2CS Control B */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) I2CS Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) I2CS Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) I2CS Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) I2CS Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) I2CS Synchronization Busy */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) I2CS Address */
  __IO  uint8_t                        SERCOM_DATA;        /* Offset: 0x28 (R/W  8) I2CS Data */
} sercom_i2cs_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) SPI Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) SPI Control B */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint8_t                        SERCOM_BAUD;        /* Offset: 0x0C (R/W  8) SPI Baud Rate */
  __I   uint8_t                        Reserved2[0x07];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) SPI Interrupt Enable Clear */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) SPI Interrupt Enable Set */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) SPI Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved5[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) SPI Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) SPI Synchronization Busy */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) SPI Address */
  __IO  uint16_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  16) SPI Data */
  __I   uint8_t                        Reserved7[0x06];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) SPI Debug Control */
} sercom_spi_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) USART Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) USART Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /* Offset: 0x08 (R/W  32) USART Control C */
  __IO  uint16_t                       SERCOM_BAUD;        /* Offset: 0x0C (R/W  16) USART Baud */
  __IO  uint8_t                        SERCOM_RXPL;        /* Offset: 0x0E (R/W  8) USART Receive Pulse Length */
  __I   uint8_t                        Reserved1[0x05];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) USART Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) USART Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) USART Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) USART Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) USART Synchronization Busy */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint16_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  16) USART Data */
  __I   uint8_t                        Reserved6[0x06];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) USART Debug Control */
} sercom_usart_registers_t;

/* SERCOM hardware registers */
typedef union
{  /* Serial Communication Interface */
       sercom_i2cm_registers_t        I2CM;           /* I2C Host Mode */
       sercom_i2cs_registers_t        I2CS;           /* I2C Client Mode */
       sercom_spi_registers_t         SPI;            /* SPI Mode */
       sercom_usart_registers_t       USART;          /* USART Mode */
} sercom_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_SERCOM_COMPONENT_H_ */
