/*
 * Component description for PAC
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
#ifndef _PIC32CMPL10_PAC_COMPONENT_H_
#define _PIC32CMPL10_PAC_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PAC                       */
/* ************************************************************************** */

/* -------- PAC_WRCTRL : (PAC Offset: 0x00) (R/W 32) Write Control -------- */
#define PAC_WRCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (PAC_WRCTRL) Write Control  Reset Value */

#define PAC_WRCTRL_PERID_Pos                  _UINT32_(0)                                          /* (PAC_WRCTRL) Peripheral Identifier Position */
#define PAC_WRCTRL_PERID_Msk                  (_UINT32_(0xFFFF) << PAC_WRCTRL_PERID_Pos)           /* (PAC_WRCTRL) Peripheral Identifier Mask */
#define PAC_WRCTRL_PERID(value)               (PAC_WRCTRL_PERID_Msk & (_UINT32_(value) << PAC_WRCTRL_PERID_Pos)) /* Assignment of value for PERID in the PAC_WRCTRL register */
#define   PAC_WRCTRL_PERID_PAC_Val            _UINT32_(0x0)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_PM_Val             _UINT32_(0x1)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_MCLK_Val           _UINT32_(0x2)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_RSTC_Val           _UINT32_(0x3)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_OSCCTRL_Val        _UINT32_(0x4)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_OSC32KCTRL_Val     _UINT32_(0x5)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_SUPC_Val           _UINT32_(0x6)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_GCLK_Val           _UINT32_(0x7)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_WDT_Val            _UINT32_(0x8)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_RTC_Val            _UINT32_(0x9)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_EIC_Val            _UINT32_(0xA)                                        /* (PAC_WRCTRL) APBA Peripheral  */
#define   PAC_WRCTRL_PERID_PORT_Val           _UINT32_(0x20)                                       /* (PAC_WRCTRL) APBB Peripheral  */
#define   PAC_WRCTRL_PERID_DSU_Val            _UINT32_(0x21)                                       /* (PAC_WRCTRL) APBB Peripheral  */
#define   PAC_WRCTRL_PERID_NVMCTRL_Val        _UINT32_(0x22)                                       /* (PAC_WRCTRL) APBB Peripheral  */
#define   PAC_WRCTRL_PERID_DMAC_Val           _UINT32_(0x23)                                       /* (PAC_WRCTRL) APBB Peripheral  */
#define   PAC_WRCTRL_PERID_MTB_Val            _UINT32_(0x24)                                       /* (PAC_WRCTRL) APBB Peripheral  */
#define   PAC_WRCTRL_PERID_HMATRIXHS_Val      _UINT32_(0x25)                                       /* (PAC_WRCTRL) APBB Peripheral  */
#define   PAC_WRCTRL_PERID_EVSYS_Val          _UINT32_(0x40)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_SERCOM0_Val        _UINT32_(0x41)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_SERCOM1_Val        _UINT32_(0x42)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_TC0_Val            _UINT32_(0x43)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_TC1_Val            _UINT32_(0x44)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_TC2_Val            _UINT32_(0x45)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_TCC0_Val           _UINT32_(0x46)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_ADC0_Val           _UINT32_(0x47)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_AC_Val             _UINT32_(0x48)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_CCL_Val            _UINT32_(0x49)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_PTC_Val            _UINT32_(0x4A)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define   PAC_WRCTRL_PERID_SYSCTRL_Val        _UINT32_(0x4B)                                       /* (PAC_WRCTRL) APBC Peripheral  */
#define PAC_WRCTRL_PERID_PAC                  (PAC_WRCTRL_PERID_PAC_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_PM                   (PAC_WRCTRL_PERID_PM_Val << PAC_WRCTRL_PERID_Pos)    /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_MCLK                 (PAC_WRCTRL_PERID_MCLK_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_RSTC                 (PAC_WRCTRL_PERID_RSTC_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_OSCCTRL              (PAC_WRCTRL_PERID_OSCCTRL_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_OSC32KCTRL           (PAC_WRCTRL_PERID_OSC32KCTRL_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_SUPC                 (PAC_WRCTRL_PERID_SUPC_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_GCLK                 (PAC_WRCTRL_PERID_GCLK_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_WDT                  (PAC_WRCTRL_PERID_WDT_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_RTC                  (PAC_WRCTRL_PERID_RTC_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_EIC                  (PAC_WRCTRL_PERID_EIC_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBA Peripheral Position */
#define PAC_WRCTRL_PERID_PORT                 (PAC_WRCTRL_PERID_PORT_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBB Peripheral Position */
#define PAC_WRCTRL_PERID_DSU                  (PAC_WRCTRL_PERID_DSU_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBB Peripheral Position */
#define PAC_WRCTRL_PERID_NVMCTRL              (PAC_WRCTRL_PERID_NVMCTRL_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBB Peripheral Position */
#define PAC_WRCTRL_PERID_DMAC                 (PAC_WRCTRL_PERID_DMAC_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBB Peripheral Position */
#define PAC_WRCTRL_PERID_MTB                  (PAC_WRCTRL_PERID_MTB_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBB Peripheral Position */
#define PAC_WRCTRL_PERID_HMATRIXHS            (PAC_WRCTRL_PERID_HMATRIXHS_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBB Peripheral Position */
#define PAC_WRCTRL_PERID_EVSYS                (PAC_WRCTRL_PERID_EVSYS_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_SERCOM0              (PAC_WRCTRL_PERID_SERCOM0_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_SERCOM1              (PAC_WRCTRL_PERID_SERCOM1_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_TC0                  (PAC_WRCTRL_PERID_TC0_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_TC1                  (PAC_WRCTRL_PERID_TC1_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_TC2                  (PAC_WRCTRL_PERID_TC2_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_TCC0                 (PAC_WRCTRL_PERID_TCC0_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_ADC0                 (PAC_WRCTRL_PERID_ADC0_Val << PAC_WRCTRL_PERID_Pos)  /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_AC                   (PAC_WRCTRL_PERID_AC_Val << PAC_WRCTRL_PERID_Pos)    /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_CCL                  (PAC_WRCTRL_PERID_CCL_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_PTC                  (PAC_WRCTRL_PERID_PTC_Val << PAC_WRCTRL_PERID_Pos)   /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_PERID_SYSCTRL              (PAC_WRCTRL_PERID_SYSCTRL_Val << PAC_WRCTRL_PERID_Pos) /* (PAC_WRCTRL) APBC Peripheral Position */
#define PAC_WRCTRL_KEY_Pos                    _UINT32_(16)                                         /* (PAC_WRCTRL) Peripheral Access Control Key Position */
#define PAC_WRCTRL_KEY_Msk                    (_UINT32_(0xFF) << PAC_WRCTRL_KEY_Pos)               /* (PAC_WRCTRL) Peripheral Access Control Key Mask */
#define PAC_WRCTRL_KEY(value)                 (PAC_WRCTRL_KEY_Msk & (_UINT32_(value) << PAC_WRCTRL_KEY_Pos)) /* Assignment of value for KEY in the PAC_WRCTRL register */
#define   PAC_WRCTRL_KEY_OFF_Val              _UINT32_(0x0)                                        /* (PAC_WRCTRL) No action  */
#define   PAC_WRCTRL_KEY_CLR_Val              _UINT32_(0x1)                                        /* (PAC_WRCTRL) Clear the peripheral write-control  */
#define   PAC_WRCTRL_KEY_SET_Val              _UINT32_(0x2)                                        /* (PAC_WRCTRL) Set the peripheral write-control  */
#define   PAC_WRCTRL_KEY_SETLCK_Val           _UINT32_(0x3)                                        /* (PAC_WRCTRL) Set and lock the peripheral write-control until the next hardware reset  */
#define PAC_WRCTRL_KEY_OFF                    (PAC_WRCTRL_KEY_OFF_Val << PAC_WRCTRL_KEY_Pos)       /* (PAC_WRCTRL) No action Position */
#define PAC_WRCTRL_KEY_CLR                    (PAC_WRCTRL_KEY_CLR_Val << PAC_WRCTRL_KEY_Pos)       /* (PAC_WRCTRL) Clear the peripheral write-control Position */
#define PAC_WRCTRL_KEY_SET                    (PAC_WRCTRL_KEY_SET_Val << PAC_WRCTRL_KEY_Pos)       /* (PAC_WRCTRL) Set the peripheral write-control Position */
#define PAC_WRCTRL_KEY_SETLCK                 (PAC_WRCTRL_KEY_SETLCK_Val << PAC_WRCTRL_KEY_Pos)    /* (PAC_WRCTRL) Set and lock the peripheral write-control until the next hardware reset Position */
#define PAC_WRCTRL_Msk                        _UINT32_(0x00FFFFFF)                                 /* (PAC_WRCTRL) Register Mask  */


/* -------- PAC_EVCTRL : (PAC Offset: 0x04) (R/W 8) Event Control -------- */
#define PAC_EVCTRL_RESETVALUE                 _UINT8_(0x00)                                        /*  (PAC_EVCTRL) Event Control  Reset Value */

#define PAC_EVCTRL_ERREO_Pos                  _UINT8_(0)                                           /* (PAC_EVCTRL) Peripheral Access Error Event Output Position */
#define PAC_EVCTRL_ERREO_Msk                  (_UINT8_(0x1) << PAC_EVCTRL_ERREO_Pos)               /* (PAC_EVCTRL) Peripheral Access Error Event Output Mask */
#define PAC_EVCTRL_ERREO(value)               (PAC_EVCTRL_ERREO_Msk & (_UINT8_(value) << PAC_EVCTRL_ERREO_Pos)) /* Assignment of value for ERREO in the PAC_EVCTRL register */
#define PAC_EVCTRL_Msk                        _UINT8_(0x01)                                        /* (PAC_EVCTRL) Register Mask  */


/* -------- PAC_INTENCLR : (PAC Offset: 0x08) (R/W 8) Interrupt Enable Clear -------- */
#define PAC_INTENCLR_RESETVALUE               _UINT8_(0x00)                                        /*  (PAC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define PAC_INTENCLR_ERR_Pos                  _UINT8_(0)                                           /* (PAC_INTENCLR) Peripheral Access Error Interrupt Disable Position */
#define PAC_INTENCLR_ERR_Msk                  (_UINT8_(0x1) << PAC_INTENCLR_ERR_Pos)               /* (PAC_INTENCLR) Peripheral Access Error Interrupt Disable Mask */
#define PAC_INTENCLR_ERR(value)               (PAC_INTENCLR_ERR_Msk & (_UINT8_(value) << PAC_INTENCLR_ERR_Pos)) /* Assignment of value for ERR in the PAC_INTENCLR register */
#define PAC_INTENCLR_Msk                      _UINT8_(0x01)                                        /* (PAC_INTENCLR) Register Mask  */


/* -------- PAC_INTENSET : (PAC Offset: 0x09) (R/W 8) Interrupt Enable Set -------- */
#define PAC_INTENSET_RESETVALUE               _UINT8_(0x00)                                        /*  (PAC_INTENSET) Interrupt Enable Set  Reset Value */

#define PAC_INTENSET_ERR_Pos                  _UINT8_(0)                                           /* (PAC_INTENSET) Peripheral Access Error Interrupt Enable Position */
#define PAC_INTENSET_ERR_Msk                  (_UINT8_(0x1) << PAC_INTENSET_ERR_Pos)               /* (PAC_INTENSET) Peripheral Access Error Interrupt Enable Mask */
#define PAC_INTENSET_ERR(value)               (PAC_INTENSET_ERR_Msk & (_UINT8_(value) << PAC_INTENSET_ERR_Pos)) /* Assignment of value for ERR in the PAC_INTENSET register */
#define PAC_INTENSET_Msk                      _UINT8_(0x01)                                        /* (PAC_INTENSET) Register Mask  */


/* -------- PAC_INTFLAGAHB : (PAC Offset: 0x10) (R/W 32) AHB Client Bus Interrupt Flag Status and Clear -------- */
#define PAC_INTFLAGAHB_RESETVALUE             _UINT32_(0x00)                                       /*  (PAC_INTFLAGAHB) AHB Client Bus Interrupt Flag Status and Clear  Reset Value */

#define PAC_INTFLAGAHB_FLASH_Pos              _UINT32_(0)                                          /* (PAC_INTFLAGAHB) FLASH Position */
#define PAC_INTFLAGAHB_FLASH_Msk              (_UINT32_(0x1) << PAC_INTFLAGAHB_FLASH_Pos)          /* (PAC_INTFLAGAHB) FLASH Mask */
#define PAC_INTFLAGAHB_FLASH(value)           (PAC_INTFLAGAHB_FLASH_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_FLASH_Pos)) /* Assignment of value for FLASH in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_HSRAMCM0P_Pos          _UINT32_(1)                                          /* (PAC_INTFLAGAHB) HSRAMCM0P Position */
#define PAC_INTFLAGAHB_HSRAMCM0P_Msk          (_UINT32_(0x1) << PAC_INTFLAGAHB_HSRAMCM0P_Pos)      /* (PAC_INTFLAGAHB) HSRAMCM0P Mask */
#define PAC_INTFLAGAHB_HSRAMCM0P(value)       (PAC_INTFLAGAHB_HSRAMCM0P_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_HSRAMCM0P_Pos)) /* Assignment of value for HSRAMCM0P in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_HSRAMDSU_Pos           _UINT32_(2)                                          /* (PAC_INTFLAGAHB) HSRAMDSU Position */
#define PAC_INTFLAGAHB_HSRAMDSU_Msk           (_UINT32_(0x1) << PAC_INTFLAGAHB_HSRAMDSU_Pos)       /* (PAC_INTFLAGAHB) HSRAMDSU Mask */
#define PAC_INTFLAGAHB_HSRAMDSU(value)        (PAC_INTFLAGAHB_HSRAMDSU_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_HSRAMDSU_Pos)) /* Assignment of value for HSRAMDSU in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_APBB_Pos               _UINT32_(3)                                          /* (PAC_INTFLAGAHB) APBB Position */
#define PAC_INTFLAGAHB_APBB_Msk               (_UINT32_(0x1) << PAC_INTFLAGAHB_APBB_Pos)           /* (PAC_INTFLAGAHB) APBB Mask */
#define PAC_INTFLAGAHB_APBB(value)            (PAC_INTFLAGAHB_APBB_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_APBB_Pos)) /* Assignment of value for APBB in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_APBA_Pos               _UINT32_(4)                                          /* (PAC_INTFLAGAHB) APBA Position */
#define PAC_INTFLAGAHB_APBA_Msk               (_UINT32_(0x1) << PAC_INTFLAGAHB_APBA_Pos)           /* (PAC_INTFLAGAHB) APBA Mask */
#define PAC_INTFLAGAHB_APBA(value)            (PAC_INTFLAGAHB_APBA_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_APBA_Pos)) /* Assignment of value for APBA in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_APBC_Pos               _UINT32_(5)                                          /* (PAC_INTFLAGAHB) APBC Position */
#define PAC_INTFLAGAHB_APBC_Msk               (_UINT32_(0x1) << PAC_INTFLAGAHB_APBC_Pos)           /* (PAC_INTFLAGAHB) APBC Mask */
#define PAC_INTFLAGAHB_APBC(value)            (PAC_INTFLAGAHB_APBC_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_APBC_Pos)) /* Assignment of value for APBC in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_SRAMDMAC_Pos           _UINT32_(6)                                          /* (PAC_INTFLAGAHB) SRAMDMAC Position */
#define PAC_INTFLAGAHB_SRAMDMAC_Msk           (_UINT32_(0x1) << PAC_INTFLAGAHB_SRAMDMAC_Pos)       /* (PAC_INTFLAGAHB) SRAMDMAC Mask */
#define PAC_INTFLAGAHB_SRAMDMAC(value)        (PAC_INTFLAGAHB_SRAMDMAC_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_SRAMDMAC_Pos)) /* Assignment of value for SRAMDMAC in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_BROM_Pos               _UINT32_(7)                                          /* (PAC_INTFLAGAHB) BROM Position */
#define PAC_INTFLAGAHB_BROM_Msk               (_UINT32_(0x1) << PAC_INTFLAGAHB_BROM_Pos)           /* (PAC_INTFLAGAHB) BROM Mask */
#define PAC_INTFLAGAHB_BROM(value)            (PAC_INTFLAGAHB_BROM_Msk & (_UINT32_(value) << PAC_INTFLAGAHB_BROM_Pos)) /* Assignment of value for BROM in the PAC_INTFLAGAHB register */
#define PAC_INTFLAGAHB_Msk                    _UINT32_(0x000000FF)                                 /* (PAC_INTFLAGAHB) Register Mask  */


/* -------- PAC_INTFLAGA : (PAC Offset: 0x14) (R/W 32) Peripheral Interrupt Flag Status and Clear A -------- */
#define PAC_INTFLAGA_RESETVALUE               _UINT32_(0x00)                                       /*  (PAC_INTFLAGA) Peripheral Interrupt Flag Status and Clear A  Reset Value */

#define PAC_INTFLAGA_PAC_Pos                  _UINT32_(0)                                          /* (PAC_INTFLAGA) PAC Position */
#define PAC_INTFLAGA_PAC_Msk                  (_UINT32_(0x1) << PAC_INTFLAGA_PAC_Pos)              /* (PAC_INTFLAGA) PAC Mask */
#define PAC_INTFLAGA_PAC(value)               (PAC_INTFLAGA_PAC_Msk & (_UINT32_(value) << PAC_INTFLAGA_PAC_Pos)) /* Assignment of value for PAC in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_PM_Pos                   _UINT32_(1)                                          /* (PAC_INTFLAGA) PM Position */
#define PAC_INTFLAGA_PM_Msk                   (_UINT32_(0x1) << PAC_INTFLAGA_PM_Pos)               /* (PAC_INTFLAGA) PM Mask */
#define PAC_INTFLAGA_PM(value)                (PAC_INTFLAGA_PM_Msk & (_UINT32_(value) << PAC_INTFLAGA_PM_Pos)) /* Assignment of value for PM in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_MCLK_Pos                 _UINT32_(2)                                          /* (PAC_INTFLAGA) MCLK Position */
#define PAC_INTFLAGA_MCLK_Msk                 (_UINT32_(0x1) << PAC_INTFLAGA_MCLK_Pos)             /* (PAC_INTFLAGA) MCLK Mask */
#define PAC_INTFLAGA_MCLK(value)              (PAC_INTFLAGA_MCLK_Msk & (_UINT32_(value) << PAC_INTFLAGA_MCLK_Pos)) /* Assignment of value for MCLK in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_RSTC_Pos                 _UINT32_(3)                                          /* (PAC_INTFLAGA) RSTC Position */
#define PAC_INTFLAGA_RSTC_Msk                 (_UINT32_(0x1) << PAC_INTFLAGA_RSTC_Pos)             /* (PAC_INTFLAGA) RSTC Mask */
#define PAC_INTFLAGA_RSTC(value)              (PAC_INTFLAGA_RSTC_Msk & (_UINT32_(value) << PAC_INTFLAGA_RSTC_Pos)) /* Assignment of value for RSTC in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_OSCCTRL_Pos              _UINT32_(4)                                          /* (PAC_INTFLAGA) OSCCTRL Position */
#define PAC_INTFLAGA_OSCCTRL_Msk              (_UINT32_(0x1) << PAC_INTFLAGA_OSCCTRL_Pos)          /* (PAC_INTFLAGA) OSCCTRL Mask */
#define PAC_INTFLAGA_OSCCTRL(value)           (PAC_INTFLAGA_OSCCTRL_Msk & (_UINT32_(value) << PAC_INTFLAGA_OSCCTRL_Pos)) /* Assignment of value for OSCCTRL in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_OSC32KCTRL_Pos           _UINT32_(5)                                          /* (PAC_INTFLAGA) OSC32KCTRL Position */
#define PAC_INTFLAGA_OSC32KCTRL_Msk           (_UINT32_(0x1) << PAC_INTFLAGA_OSC32KCTRL_Pos)       /* (PAC_INTFLAGA) OSC32KCTRL Mask */
#define PAC_INTFLAGA_OSC32KCTRL(value)        (PAC_INTFLAGA_OSC32KCTRL_Msk & (_UINT32_(value) << PAC_INTFLAGA_OSC32KCTRL_Pos)) /* Assignment of value for OSC32KCTRL in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_SUPC_Pos                 _UINT32_(6)                                          /* (PAC_INTFLAGA) SUPC Position */
#define PAC_INTFLAGA_SUPC_Msk                 (_UINT32_(0x1) << PAC_INTFLAGA_SUPC_Pos)             /* (PAC_INTFLAGA) SUPC Mask */
#define PAC_INTFLAGA_SUPC(value)              (PAC_INTFLAGA_SUPC_Msk & (_UINT32_(value) << PAC_INTFLAGA_SUPC_Pos)) /* Assignment of value for SUPC in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_GCLK_Pos                 _UINT32_(7)                                          /* (PAC_INTFLAGA) GCLK Position */
#define PAC_INTFLAGA_GCLK_Msk                 (_UINT32_(0x1) << PAC_INTFLAGA_GCLK_Pos)             /* (PAC_INTFLAGA) GCLK Mask */
#define PAC_INTFLAGA_GCLK(value)              (PAC_INTFLAGA_GCLK_Msk & (_UINT32_(value) << PAC_INTFLAGA_GCLK_Pos)) /* Assignment of value for GCLK in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_WDT_Pos                  _UINT32_(8)                                          /* (PAC_INTFLAGA) WDT Position */
#define PAC_INTFLAGA_WDT_Msk                  (_UINT32_(0x1) << PAC_INTFLAGA_WDT_Pos)              /* (PAC_INTFLAGA) WDT Mask */
#define PAC_INTFLAGA_WDT(value)               (PAC_INTFLAGA_WDT_Msk & (_UINT32_(value) << PAC_INTFLAGA_WDT_Pos)) /* Assignment of value for WDT in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_RTC_Pos                  _UINT32_(9)                                          /* (PAC_INTFLAGA) RTC Position */
#define PAC_INTFLAGA_RTC_Msk                  (_UINT32_(0x1) << PAC_INTFLAGA_RTC_Pos)              /* (PAC_INTFLAGA) RTC Mask */
#define PAC_INTFLAGA_RTC(value)               (PAC_INTFLAGA_RTC_Msk & (_UINT32_(value) << PAC_INTFLAGA_RTC_Pos)) /* Assignment of value for RTC in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_EIC_Pos                  _UINT32_(10)                                         /* (PAC_INTFLAGA) EIC Position */
#define PAC_INTFLAGA_EIC_Msk                  (_UINT32_(0x1) << PAC_INTFLAGA_EIC_Pos)              /* (PAC_INTFLAGA) EIC Mask */
#define PAC_INTFLAGA_EIC(value)               (PAC_INTFLAGA_EIC_Msk & (_UINT32_(value) << PAC_INTFLAGA_EIC_Pos)) /* Assignment of value for EIC in the PAC_INTFLAGA register */
#define PAC_INTFLAGA_Msk                      _UINT32_(0x000007FF)                                 /* (PAC_INTFLAGA) Register Mask  */


/* -------- PAC_INTFLAGB : (PAC Offset: 0x18) (R/W 32) Peripheral Interrupt Flag Status and Clear B -------- */
#define PAC_INTFLAGB_RESETVALUE               _UINT32_(0x00)                                       /*  (PAC_INTFLAGB) Peripheral Interrupt Flag Status and Clear B  Reset Value */

#define PAC_INTFLAGB_PORT_Pos                 _UINT32_(0)                                          /* (PAC_INTFLAGB) PORT Position */
#define PAC_INTFLAGB_PORT_Msk                 (_UINT32_(0x1) << PAC_INTFLAGB_PORT_Pos)             /* (PAC_INTFLAGB) PORT Mask */
#define PAC_INTFLAGB_PORT(value)              (PAC_INTFLAGB_PORT_Msk & (_UINT32_(value) << PAC_INTFLAGB_PORT_Pos)) /* Assignment of value for PORT in the PAC_INTFLAGB register */
#define PAC_INTFLAGB_DSU_Pos                  _UINT32_(1)                                          /* (PAC_INTFLAGB) DSU Position */
#define PAC_INTFLAGB_DSU_Msk                  (_UINT32_(0x1) << PAC_INTFLAGB_DSU_Pos)              /* (PAC_INTFLAGB) DSU Mask */
#define PAC_INTFLAGB_DSU(value)               (PAC_INTFLAGB_DSU_Msk & (_UINT32_(value) << PAC_INTFLAGB_DSU_Pos)) /* Assignment of value for DSU in the PAC_INTFLAGB register */
#define PAC_INTFLAGB_NVMCTRL_Pos              _UINT32_(2)                                          /* (PAC_INTFLAGB) NVMCTRL Position */
#define PAC_INTFLAGB_NVMCTRL_Msk              (_UINT32_(0x1) << PAC_INTFLAGB_NVMCTRL_Pos)          /* (PAC_INTFLAGB) NVMCTRL Mask */
#define PAC_INTFLAGB_NVMCTRL(value)           (PAC_INTFLAGB_NVMCTRL_Msk & (_UINT32_(value) << PAC_INTFLAGB_NVMCTRL_Pos)) /* Assignment of value for NVMCTRL in the PAC_INTFLAGB register */
#define PAC_INTFLAGB_DMAC_Pos                 _UINT32_(3)                                          /* (PAC_INTFLAGB) DMAC Position */
#define PAC_INTFLAGB_DMAC_Msk                 (_UINT32_(0x1) << PAC_INTFLAGB_DMAC_Pos)             /* (PAC_INTFLAGB) DMAC Mask */
#define PAC_INTFLAGB_DMAC(value)              (PAC_INTFLAGB_DMAC_Msk & (_UINT32_(value) << PAC_INTFLAGB_DMAC_Pos)) /* Assignment of value for DMAC in the PAC_INTFLAGB register */
#define PAC_INTFLAGB_MTB_Pos                  _UINT32_(4)                                          /* (PAC_INTFLAGB) MTB Position */
#define PAC_INTFLAGB_MTB_Msk                  (_UINT32_(0x1) << PAC_INTFLAGB_MTB_Pos)              /* (PAC_INTFLAGB) MTB Mask */
#define PAC_INTFLAGB_MTB(value)               (PAC_INTFLAGB_MTB_Msk & (_UINT32_(value) << PAC_INTFLAGB_MTB_Pos)) /* Assignment of value for MTB in the PAC_INTFLAGB register */
#define PAC_INTFLAGB_HMATRIXHS_Pos            _UINT32_(5)                                          /* (PAC_INTFLAGB) HMATRIXHS Position */
#define PAC_INTFLAGB_HMATRIXHS_Msk            (_UINT32_(0x1) << PAC_INTFLAGB_HMATRIXHS_Pos)        /* (PAC_INTFLAGB) HMATRIXHS Mask */
#define PAC_INTFLAGB_HMATRIXHS(value)         (PAC_INTFLAGB_HMATRIXHS_Msk & (_UINT32_(value) << PAC_INTFLAGB_HMATRIXHS_Pos)) /* Assignment of value for HMATRIXHS in the PAC_INTFLAGB register */
#define PAC_INTFLAGB_Msk                      _UINT32_(0x0000003F)                                 /* (PAC_INTFLAGB) Register Mask  */


/* -------- PAC_INTFLAGC : (PAC Offset: 0x1C) (R/W 32) Peripheral Interrupt Flag Status and Clear C -------- */
#define PAC_INTFLAGC_RESETVALUE               _UINT32_(0x00)                                       /*  (PAC_INTFLAGC) Peripheral Interrupt Flag Status and Clear C  Reset Value */

#define PAC_INTFLAGC_EVSYS_Pos                _UINT32_(0)                                          /* (PAC_INTFLAGC) EVSYS Position */
#define PAC_INTFLAGC_EVSYS_Msk                (_UINT32_(0x1) << PAC_INTFLAGC_EVSYS_Pos)            /* (PAC_INTFLAGC) EVSYS Mask */
#define PAC_INTFLAGC_EVSYS(value)             (PAC_INTFLAGC_EVSYS_Msk & (_UINT32_(value) << PAC_INTFLAGC_EVSYS_Pos)) /* Assignment of value for EVSYS in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_SERCOM0_Pos              _UINT32_(1)                                          /* (PAC_INTFLAGC) SERCOM0 Position */
#define PAC_INTFLAGC_SERCOM0_Msk              (_UINT32_(0x1) << PAC_INTFLAGC_SERCOM0_Pos)          /* (PAC_INTFLAGC) SERCOM0 Mask */
#define PAC_INTFLAGC_SERCOM0(value)           (PAC_INTFLAGC_SERCOM0_Msk & (_UINT32_(value) << PAC_INTFLAGC_SERCOM0_Pos)) /* Assignment of value for SERCOM0 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_SERCOM1_Pos              _UINT32_(2)                                          /* (PAC_INTFLAGC) SERCOM1 Position */
#define PAC_INTFLAGC_SERCOM1_Msk              (_UINT32_(0x1) << PAC_INTFLAGC_SERCOM1_Pos)          /* (PAC_INTFLAGC) SERCOM1 Mask */
#define PAC_INTFLAGC_SERCOM1(value)           (PAC_INTFLAGC_SERCOM1_Msk & (_UINT32_(value) << PAC_INTFLAGC_SERCOM1_Pos)) /* Assignment of value for SERCOM1 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_TC0_Pos                  _UINT32_(3)                                          /* (PAC_INTFLAGC) TC0 Position */
#define PAC_INTFLAGC_TC0_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_TC0_Pos)              /* (PAC_INTFLAGC) TC0 Mask */
#define PAC_INTFLAGC_TC0(value)               (PAC_INTFLAGC_TC0_Msk & (_UINT32_(value) << PAC_INTFLAGC_TC0_Pos)) /* Assignment of value for TC0 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_TC1_Pos                  _UINT32_(4)                                          /* (PAC_INTFLAGC) TC1 Position */
#define PAC_INTFLAGC_TC1_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_TC1_Pos)              /* (PAC_INTFLAGC) TC1 Mask */
#define PAC_INTFLAGC_TC1(value)               (PAC_INTFLAGC_TC1_Msk & (_UINT32_(value) << PAC_INTFLAGC_TC1_Pos)) /* Assignment of value for TC1 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_TC2_Pos                  _UINT32_(5)                                          /* (PAC_INTFLAGC) TC2 Position */
#define PAC_INTFLAGC_TC2_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_TC2_Pos)              /* (PAC_INTFLAGC) TC2 Mask */
#define PAC_INTFLAGC_TC2(value)               (PAC_INTFLAGC_TC2_Msk & (_UINT32_(value) << PAC_INTFLAGC_TC2_Pos)) /* Assignment of value for TC2 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_TCC0_Pos                 _UINT32_(6)                                          /* (PAC_INTFLAGC) TCC0 Position */
#define PAC_INTFLAGC_TCC0_Msk                 (_UINT32_(0x1) << PAC_INTFLAGC_TCC0_Pos)             /* (PAC_INTFLAGC) TCC0 Mask */
#define PAC_INTFLAGC_TCC0(value)              (PAC_INTFLAGC_TCC0_Msk & (_UINT32_(value) << PAC_INTFLAGC_TCC0_Pos)) /* Assignment of value for TCC0 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_ADC0_Pos                 _UINT32_(7)                                          /* (PAC_INTFLAGC) ADC0 Position */
#define PAC_INTFLAGC_ADC0_Msk                 (_UINT32_(0x1) << PAC_INTFLAGC_ADC0_Pos)             /* (PAC_INTFLAGC) ADC0 Mask */
#define PAC_INTFLAGC_ADC0(value)              (PAC_INTFLAGC_ADC0_Msk & (_UINT32_(value) << PAC_INTFLAGC_ADC0_Pos)) /* Assignment of value for ADC0 in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_AC_Pos                   _UINT32_(8)                                          /* (PAC_INTFLAGC) AC Position */
#define PAC_INTFLAGC_AC_Msk                   (_UINT32_(0x1) << PAC_INTFLAGC_AC_Pos)               /* (PAC_INTFLAGC) AC Mask */
#define PAC_INTFLAGC_AC(value)                (PAC_INTFLAGC_AC_Msk & (_UINT32_(value) << PAC_INTFLAGC_AC_Pos)) /* Assignment of value for AC in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_CCL_Pos                  _UINT32_(9)                                          /* (PAC_INTFLAGC) CCL Position */
#define PAC_INTFLAGC_CCL_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_CCL_Pos)              /* (PAC_INTFLAGC) CCL Mask */
#define PAC_INTFLAGC_CCL(value)               (PAC_INTFLAGC_CCL_Msk & (_UINT32_(value) << PAC_INTFLAGC_CCL_Pos)) /* Assignment of value for CCL in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_PTC_Pos                  _UINT32_(10)                                         /* (PAC_INTFLAGC) PTC Position */
#define PAC_INTFLAGC_PTC_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_PTC_Pos)              /* (PAC_INTFLAGC) PTC Mask */
#define PAC_INTFLAGC_PTC(value)               (PAC_INTFLAGC_PTC_Msk & (_UINT32_(value) << PAC_INTFLAGC_PTC_Pos)) /* Assignment of value for PTC in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_SYSCTRL_Pos              _UINT32_(11)                                         /* (PAC_INTFLAGC) SYSCTRL Position */
#define PAC_INTFLAGC_SYSCTRL_Msk              (_UINT32_(0x1) << PAC_INTFLAGC_SYSCTRL_Pos)          /* (PAC_INTFLAGC) SYSCTRL Mask */
#define PAC_INTFLAGC_SYSCTRL(value)           (PAC_INTFLAGC_SYSCTRL_Msk & (_UINT32_(value) << PAC_INTFLAGC_SYSCTRL_Pos)) /* Assignment of value for SYSCTRL in the PAC_INTFLAGC register */
#define PAC_INTFLAGC_Msk                      _UINT32_(0x00000FFF)                                 /* (PAC_INTFLAGC) Register Mask  */

#define PAC_INTFLAGC_SERCOM_Pos               _UINT32_(1)                                          /* (PAC_INTFLAGC Position) SERCOMx */
#define PAC_INTFLAGC_SERCOM_Msk               (_UINT32_(0x3) << PAC_INTFLAGC_SERCOM_Pos)           /* (PAC_INTFLAGC Mask) SERCOM */
#define PAC_INTFLAGC_SERCOM(value)            (PAC_INTFLAGC_SERCOM_Msk & (_UINT32_(value) << PAC_INTFLAGC_SERCOM_Pos)) 
#define PAC_INTFLAGC_TC_Pos                   _UINT32_(3)                                          /* (PAC_INTFLAGC Position) TCx */
#define PAC_INTFLAGC_TC_Msk                   (_UINT32_(0x7) << PAC_INTFLAGC_TC_Pos)               /* (PAC_INTFLAGC Mask) TC */
#define PAC_INTFLAGC_TC(value)                (PAC_INTFLAGC_TC_Msk & (_UINT32_(value) << PAC_INTFLAGC_TC_Pos)) 
#define PAC_INTFLAGC_TCC_Pos                  _UINT32_(6)                                          /* (PAC_INTFLAGC Position) TCCx */
#define PAC_INTFLAGC_TCC_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_TCC_Pos)              /* (PAC_INTFLAGC Mask) TCC */
#define PAC_INTFLAGC_TCC(value)               (PAC_INTFLAGC_TCC_Msk & (_UINT32_(value) << PAC_INTFLAGC_TCC_Pos)) 
#define PAC_INTFLAGC_ADC_Pos                  _UINT32_(7)                                          /* (PAC_INTFLAGC Position) ADCx */
#define PAC_INTFLAGC_ADC_Msk                  (_UINT32_(0x1) << PAC_INTFLAGC_ADC_Pos)              /* (PAC_INTFLAGC Mask) ADC */
#define PAC_INTFLAGC_ADC(value)               (PAC_INTFLAGC_ADC_Msk & (_UINT32_(value) << PAC_INTFLAGC_ADC_Pos)) 

/* -------- PAC_STATUSA : (PAC Offset: 0x34) ( R/ 32) Peripheral Write Protection Status A -------- */
#define PAC_STATUSA_RESETVALUE                _UINT32_(0x00)                                       /*  (PAC_STATUSA) Peripheral Write Protection Status A  Reset Value */

#define PAC_STATUSA_PAC_Pos                   _UINT32_(0)                                          /* (PAC_STATUSA) PAC APB Protect Enable Position */
#define PAC_STATUSA_PAC_Msk                   (_UINT32_(0x1) << PAC_STATUSA_PAC_Pos)               /* (PAC_STATUSA) PAC APB Protect Enable Mask */
#define PAC_STATUSA_PAC(value)                (PAC_STATUSA_PAC_Msk & (_UINT32_(value) << PAC_STATUSA_PAC_Pos)) /* Assignment of value for PAC in the PAC_STATUSA register */
#define PAC_STATUSA_PM_Pos                    _UINT32_(1)                                          /* (PAC_STATUSA) PM APB Protect Enable Position */
#define PAC_STATUSA_PM_Msk                    (_UINT32_(0x1) << PAC_STATUSA_PM_Pos)                /* (PAC_STATUSA) PM APB Protect Enable Mask */
#define PAC_STATUSA_PM(value)                 (PAC_STATUSA_PM_Msk & (_UINT32_(value) << PAC_STATUSA_PM_Pos)) /* Assignment of value for PM in the PAC_STATUSA register */
#define PAC_STATUSA_MCLK_Pos                  _UINT32_(2)                                          /* (PAC_STATUSA) MCLK APB Protect Enable Position */
#define PAC_STATUSA_MCLK_Msk                  (_UINT32_(0x1) << PAC_STATUSA_MCLK_Pos)              /* (PAC_STATUSA) MCLK APB Protect Enable Mask */
#define PAC_STATUSA_MCLK(value)               (PAC_STATUSA_MCLK_Msk & (_UINT32_(value) << PAC_STATUSA_MCLK_Pos)) /* Assignment of value for MCLK in the PAC_STATUSA register */
#define PAC_STATUSA_RSTC_Pos                  _UINT32_(3)                                          /* (PAC_STATUSA) RSTC APB Protect Enable Position */
#define PAC_STATUSA_RSTC_Msk                  (_UINT32_(0x1) << PAC_STATUSA_RSTC_Pos)              /* (PAC_STATUSA) RSTC APB Protect Enable Mask */
#define PAC_STATUSA_RSTC(value)               (PAC_STATUSA_RSTC_Msk & (_UINT32_(value) << PAC_STATUSA_RSTC_Pos)) /* Assignment of value for RSTC in the PAC_STATUSA register */
#define PAC_STATUSA_OSCCTRL_Pos               _UINT32_(4)                                          /* (PAC_STATUSA) OSCCTRL APB Protect Enable Position */
#define PAC_STATUSA_OSCCTRL_Msk               (_UINT32_(0x1) << PAC_STATUSA_OSCCTRL_Pos)           /* (PAC_STATUSA) OSCCTRL APB Protect Enable Mask */
#define PAC_STATUSA_OSCCTRL(value)            (PAC_STATUSA_OSCCTRL_Msk & (_UINT32_(value) << PAC_STATUSA_OSCCTRL_Pos)) /* Assignment of value for OSCCTRL in the PAC_STATUSA register */
#define PAC_STATUSA_OSC32KCTRL_Pos            _UINT32_(5)                                          /* (PAC_STATUSA) OSC32KCTRL APB Protect Enable Position */
#define PAC_STATUSA_OSC32KCTRL_Msk            (_UINT32_(0x1) << PAC_STATUSA_OSC32KCTRL_Pos)        /* (PAC_STATUSA) OSC32KCTRL APB Protect Enable Mask */
#define PAC_STATUSA_OSC32KCTRL(value)         (PAC_STATUSA_OSC32KCTRL_Msk & (_UINT32_(value) << PAC_STATUSA_OSC32KCTRL_Pos)) /* Assignment of value for OSC32KCTRL in the PAC_STATUSA register */
#define PAC_STATUSA_SUPC_Pos                  _UINT32_(6)                                          /* (PAC_STATUSA) SUPC APB Protect Enable Position */
#define PAC_STATUSA_SUPC_Msk                  (_UINT32_(0x1) << PAC_STATUSA_SUPC_Pos)              /* (PAC_STATUSA) SUPC APB Protect Enable Mask */
#define PAC_STATUSA_SUPC(value)               (PAC_STATUSA_SUPC_Msk & (_UINT32_(value) << PAC_STATUSA_SUPC_Pos)) /* Assignment of value for SUPC in the PAC_STATUSA register */
#define PAC_STATUSA_GCLK_Pos                  _UINT32_(7)                                          /* (PAC_STATUSA) GCLK APB Protect Enable Position */
#define PAC_STATUSA_GCLK_Msk                  (_UINT32_(0x1) << PAC_STATUSA_GCLK_Pos)              /* (PAC_STATUSA) GCLK APB Protect Enable Mask */
#define PAC_STATUSA_GCLK(value)               (PAC_STATUSA_GCLK_Msk & (_UINT32_(value) << PAC_STATUSA_GCLK_Pos)) /* Assignment of value for GCLK in the PAC_STATUSA register */
#define PAC_STATUSA_WDT_Pos                   _UINT32_(8)                                          /* (PAC_STATUSA) WDT APB Protect Enable Position */
#define PAC_STATUSA_WDT_Msk                   (_UINT32_(0x1) << PAC_STATUSA_WDT_Pos)               /* (PAC_STATUSA) WDT APB Protect Enable Mask */
#define PAC_STATUSA_WDT(value)                (PAC_STATUSA_WDT_Msk & (_UINT32_(value) << PAC_STATUSA_WDT_Pos)) /* Assignment of value for WDT in the PAC_STATUSA register */
#define PAC_STATUSA_RTC_Pos                   _UINT32_(9)                                          /* (PAC_STATUSA) RTC APB Protect Enable Position */
#define PAC_STATUSA_RTC_Msk                   (_UINT32_(0x1) << PAC_STATUSA_RTC_Pos)               /* (PAC_STATUSA) RTC APB Protect Enable Mask */
#define PAC_STATUSA_RTC(value)                (PAC_STATUSA_RTC_Msk & (_UINT32_(value) << PAC_STATUSA_RTC_Pos)) /* Assignment of value for RTC in the PAC_STATUSA register */
#define PAC_STATUSA_EIC_Pos                   _UINT32_(10)                                         /* (PAC_STATUSA) EIC APB Protect Enable Position */
#define PAC_STATUSA_EIC_Msk                   (_UINT32_(0x1) << PAC_STATUSA_EIC_Pos)               /* (PAC_STATUSA) EIC APB Protect Enable Mask */
#define PAC_STATUSA_EIC(value)                (PAC_STATUSA_EIC_Msk & (_UINT32_(value) << PAC_STATUSA_EIC_Pos)) /* Assignment of value for EIC in the PAC_STATUSA register */
#define PAC_STATUSA_Msk                       _UINT32_(0x000007FF)                                 /* (PAC_STATUSA) Register Mask  */


/* -------- PAC_STATUSB : (PAC Offset: 0x38) ( R/ 32) Peripheral Write Protection Status B -------- */
#define PAC_STATUSB_RESETVALUE                _UINT32_(0x00)                                       /*  (PAC_STATUSB) Peripheral Write Protection Status B  Reset Value */

#define PAC_STATUSB_PORT_Pos                  _UINT32_(0)                                          /* (PAC_STATUSB) PORT APB Protect Enable Position */
#define PAC_STATUSB_PORT_Msk                  (_UINT32_(0x1) << PAC_STATUSB_PORT_Pos)              /* (PAC_STATUSB) PORT APB Protect Enable Mask */
#define PAC_STATUSB_PORT(value)               (PAC_STATUSB_PORT_Msk & (_UINT32_(value) << PAC_STATUSB_PORT_Pos)) /* Assignment of value for PORT in the PAC_STATUSB register */
#define PAC_STATUSB_DSU_Pos                   _UINT32_(1)                                          /* (PAC_STATUSB) DSU APB Protect Enable Position */
#define PAC_STATUSB_DSU_Msk                   (_UINT32_(0x1) << PAC_STATUSB_DSU_Pos)               /* (PAC_STATUSB) DSU APB Protect Enable Mask */
#define PAC_STATUSB_DSU(value)                (PAC_STATUSB_DSU_Msk & (_UINT32_(value) << PAC_STATUSB_DSU_Pos)) /* Assignment of value for DSU in the PAC_STATUSB register */
#define PAC_STATUSB_NVMCTRL_Pos               _UINT32_(2)                                          /* (PAC_STATUSB) NVMCTRL APB Protect Enable Position */
#define PAC_STATUSB_NVMCTRL_Msk               (_UINT32_(0x1) << PAC_STATUSB_NVMCTRL_Pos)           /* (PAC_STATUSB) NVMCTRL APB Protect Enable Mask */
#define PAC_STATUSB_NVMCTRL(value)            (PAC_STATUSB_NVMCTRL_Msk & (_UINT32_(value) << PAC_STATUSB_NVMCTRL_Pos)) /* Assignment of value for NVMCTRL in the PAC_STATUSB register */
#define PAC_STATUSB_DMAC_Pos                  _UINT32_(3)                                          /* (PAC_STATUSB) DMAC APB Protect Enable Position */
#define PAC_STATUSB_DMAC_Msk                  (_UINT32_(0x1) << PAC_STATUSB_DMAC_Pos)              /* (PAC_STATUSB) DMAC APB Protect Enable Mask */
#define PAC_STATUSB_DMAC(value)               (PAC_STATUSB_DMAC_Msk & (_UINT32_(value) << PAC_STATUSB_DMAC_Pos)) /* Assignment of value for DMAC in the PAC_STATUSB register */
#define PAC_STATUSB_MTB_Pos                   _UINT32_(4)                                          /* (PAC_STATUSB) MTB APB Protect Enable Position */
#define PAC_STATUSB_MTB_Msk                   (_UINT32_(0x1) << PAC_STATUSB_MTB_Pos)               /* (PAC_STATUSB) MTB APB Protect Enable Mask */
#define PAC_STATUSB_MTB(value)                (PAC_STATUSB_MTB_Msk & (_UINT32_(value) << PAC_STATUSB_MTB_Pos)) /* Assignment of value for MTB in the PAC_STATUSB register */
#define PAC_STATUSB_HMATRIXHS_Pos             _UINT32_(5)                                          /* (PAC_STATUSB) HMATRIXHS APB Protect Enable Position */
#define PAC_STATUSB_HMATRIXHS_Msk             (_UINT32_(0x1) << PAC_STATUSB_HMATRIXHS_Pos)         /* (PAC_STATUSB) HMATRIXHS APB Protect Enable Mask */
#define PAC_STATUSB_HMATRIXHS(value)          (PAC_STATUSB_HMATRIXHS_Msk & (_UINT32_(value) << PAC_STATUSB_HMATRIXHS_Pos)) /* Assignment of value for HMATRIXHS in the PAC_STATUSB register */
#define PAC_STATUSB_Msk                       _UINT32_(0x0000003F)                                 /* (PAC_STATUSB) Register Mask  */


/* -------- PAC_STATUSC : (PAC Offset: 0x3C) ( R/ 32) Peripheral Write Protection Status C -------- */
#define PAC_STATUSC_RESETVALUE                _UINT32_(0x00)                                       /*  (PAC_STATUSC) Peripheral Write Protection Status C  Reset Value */

#define PAC_STATUSC_EVSYS_Pos                 _UINT32_(0)                                          /* (PAC_STATUSC) EVSYS APB Protect Enable Position */
#define PAC_STATUSC_EVSYS_Msk                 (_UINT32_(0x1) << PAC_STATUSC_EVSYS_Pos)             /* (PAC_STATUSC) EVSYS APB Protect Enable Mask */
#define PAC_STATUSC_EVSYS(value)              (PAC_STATUSC_EVSYS_Msk & (_UINT32_(value) << PAC_STATUSC_EVSYS_Pos)) /* Assignment of value for EVSYS in the PAC_STATUSC register */
#define PAC_STATUSC_SERCOM0_Pos               _UINT32_(1)                                          /* (PAC_STATUSC) SERCOM0 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM0_Msk               (_UINT32_(0x1) << PAC_STATUSC_SERCOM0_Pos)           /* (PAC_STATUSC) SERCOM0 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM0(value)            (PAC_STATUSC_SERCOM0_Msk & (_UINT32_(value) << PAC_STATUSC_SERCOM0_Pos)) /* Assignment of value for SERCOM0 in the PAC_STATUSC register */
#define PAC_STATUSC_SERCOM1_Pos               _UINT32_(2)                                          /* (PAC_STATUSC) SERCOM1 APB Protect Enable Position */
#define PAC_STATUSC_SERCOM1_Msk               (_UINT32_(0x1) << PAC_STATUSC_SERCOM1_Pos)           /* (PAC_STATUSC) SERCOM1 APB Protect Enable Mask */
#define PAC_STATUSC_SERCOM1(value)            (PAC_STATUSC_SERCOM1_Msk & (_UINT32_(value) << PAC_STATUSC_SERCOM1_Pos)) /* Assignment of value for SERCOM1 in the PAC_STATUSC register */
#define PAC_STATUSC_TC0_Pos                   _UINT32_(3)                                          /* (PAC_STATUSC) TC0 APB Protect Enable Position */
#define PAC_STATUSC_TC0_Msk                   (_UINT32_(0x1) << PAC_STATUSC_TC0_Pos)               /* (PAC_STATUSC) TC0 APB Protect Enable Mask */
#define PAC_STATUSC_TC0(value)                (PAC_STATUSC_TC0_Msk & (_UINT32_(value) << PAC_STATUSC_TC0_Pos)) /* Assignment of value for TC0 in the PAC_STATUSC register */
#define PAC_STATUSC_TC1_Pos                   _UINT32_(4)                                          /* (PAC_STATUSC) TC1 APB Protect Enable Position */
#define PAC_STATUSC_TC1_Msk                   (_UINT32_(0x1) << PAC_STATUSC_TC1_Pos)               /* (PAC_STATUSC) TC1 APB Protect Enable Mask */
#define PAC_STATUSC_TC1(value)                (PAC_STATUSC_TC1_Msk & (_UINT32_(value) << PAC_STATUSC_TC1_Pos)) /* Assignment of value for TC1 in the PAC_STATUSC register */
#define PAC_STATUSC_TC2_Pos                   _UINT32_(5)                                          /* (PAC_STATUSC) TC2 APB Protect Enable Position */
#define PAC_STATUSC_TC2_Msk                   (_UINT32_(0x1) << PAC_STATUSC_TC2_Pos)               /* (PAC_STATUSC) TC2 APB Protect Enable Mask */
#define PAC_STATUSC_TC2(value)                (PAC_STATUSC_TC2_Msk & (_UINT32_(value) << PAC_STATUSC_TC2_Pos)) /* Assignment of value for TC2 in the PAC_STATUSC register */
#define PAC_STATUSC_TCC0_Pos                  _UINT32_(6)                                          /* (PAC_STATUSC) TCC0 APB Protect Enable Position */
#define PAC_STATUSC_TCC0_Msk                  (_UINT32_(0x1) << PAC_STATUSC_TCC0_Pos)              /* (PAC_STATUSC) TCC0 APB Protect Enable Mask */
#define PAC_STATUSC_TCC0(value)               (PAC_STATUSC_TCC0_Msk & (_UINT32_(value) << PAC_STATUSC_TCC0_Pos)) /* Assignment of value for TCC0 in the PAC_STATUSC register */
#define PAC_STATUSC_ADC0_Pos                  _UINT32_(7)                                          /* (PAC_STATUSC) ADC0 APB Protect Enable Position */
#define PAC_STATUSC_ADC0_Msk                  (_UINT32_(0x1) << PAC_STATUSC_ADC0_Pos)              /* (PAC_STATUSC) ADC0 APB Protect Enable Mask */
#define PAC_STATUSC_ADC0(value)               (PAC_STATUSC_ADC0_Msk & (_UINT32_(value) << PAC_STATUSC_ADC0_Pos)) /* Assignment of value for ADC0 in the PAC_STATUSC register */
#define PAC_STATUSC_AC_Pos                    _UINT32_(8)                                          /* (PAC_STATUSC) AC APB Protect Enable Position */
#define PAC_STATUSC_AC_Msk                    (_UINT32_(0x1) << PAC_STATUSC_AC_Pos)                /* (PAC_STATUSC) AC APB Protect Enable Mask */
#define PAC_STATUSC_AC(value)                 (PAC_STATUSC_AC_Msk & (_UINT32_(value) << PAC_STATUSC_AC_Pos)) /* Assignment of value for AC in the PAC_STATUSC register */
#define PAC_STATUSC_CCL_Pos                   _UINT32_(9)                                          /* (PAC_STATUSC) CCL APB Protect Enable Position */
#define PAC_STATUSC_CCL_Msk                   (_UINT32_(0x1) << PAC_STATUSC_CCL_Pos)               /* (PAC_STATUSC) CCL APB Protect Enable Mask */
#define PAC_STATUSC_CCL(value)                (PAC_STATUSC_CCL_Msk & (_UINT32_(value) << PAC_STATUSC_CCL_Pos)) /* Assignment of value for CCL in the PAC_STATUSC register */
#define PAC_STATUSC_PTC_Pos                   _UINT32_(10)                                         /* (PAC_STATUSC) PTC APB Protect Enable Position */
#define PAC_STATUSC_PTC_Msk                   (_UINT32_(0x1) << PAC_STATUSC_PTC_Pos)               /* (PAC_STATUSC) PTC APB Protect Enable Mask */
#define PAC_STATUSC_PTC(value)                (PAC_STATUSC_PTC_Msk & (_UINT32_(value) << PAC_STATUSC_PTC_Pos)) /* Assignment of value for PTC in the PAC_STATUSC register */
#define PAC_STATUSC_SYSCTRL_Pos               _UINT32_(11)                                         /* (PAC_STATUSC) SYSCTRL APB Protect Enable Position */
#define PAC_STATUSC_SYSCTRL_Msk               (_UINT32_(0x1) << PAC_STATUSC_SYSCTRL_Pos)           /* (PAC_STATUSC) SYSCTRL APB Protect Enable Mask */
#define PAC_STATUSC_SYSCTRL(value)            (PAC_STATUSC_SYSCTRL_Msk & (_UINT32_(value) << PAC_STATUSC_SYSCTRL_Pos)) /* Assignment of value for SYSCTRL in the PAC_STATUSC register */
#define PAC_STATUSC_Msk                       _UINT32_(0x00000FFF)                                 /* (PAC_STATUSC) Register Mask  */

#define PAC_STATUSC_SERCOM_Pos                _UINT32_(1)                                          /* (PAC_STATUSC Position) SERCOMx APB Protect Enable */
#define PAC_STATUSC_SERCOM_Msk                (_UINT32_(0x3) << PAC_STATUSC_SERCOM_Pos)            /* (PAC_STATUSC Mask) SERCOM */
#define PAC_STATUSC_SERCOM(value)             (PAC_STATUSC_SERCOM_Msk & (_UINT32_(value) << PAC_STATUSC_SERCOM_Pos)) 
#define PAC_STATUSC_TC_Pos                    _UINT32_(3)                                          /* (PAC_STATUSC Position) TCx APB Protect Enable */
#define PAC_STATUSC_TC_Msk                    (_UINT32_(0x7) << PAC_STATUSC_TC_Pos)                /* (PAC_STATUSC Mask) TC */
#define PAC_STATUSC_TC(value)                 (PAC_STATUSC_TC_Msk & (_UINT32_(value) << PAC_STATUSC_TC_Pos)) 
#define PAC_STATUSC_TCC_Pos                   _UINT32_(6)                                          /* (PAC_STATUSC Position) TCCx APB Protect Enable */
#define PAC_STATUSC_TCC_Msk                   (_UINT32_(0x1) << PAC_STATUSC_TCC_Pos)               /* (PAC_STATUSC Mask) TCC */
#define PAC_STATUSC_TCC(value)                (PAC_STATUSC_TCC_Msk & (_UINT32_(value) << PAC_STATUSC_TCC_Pos)) 
#define PAC_STATUSC_ADC_Pos                   _UINT32_(7)                                          /* (PAC_STATUSC Position) ADCx APB Protect Enable */
#define PAC_STATUSC_ADC_Msk                   (_UINT32_(0x1) << PAC_STATUSC_ADC_Pos)               /* (PAC_STATUSC Mask) ADC */
#define PAC_STATUSC_ADC(value)                (PAC_STATUSC_ADC_Msk & (_UINT32_(value) << PAC_STATUSC_ADC_Pos)) 

/* PAC register offsets definitions */
#define PAC_WRCTRL_REG_OFST            _UINT32_(0x00)      /* (PAC_WRCTRL) Write Control Offset */
#define PAC_EVCTRL_REG_OFST            _UINT32_(0x04)      /* (PAC_EVCTRL) Event Control Offset */
#define PAC_INTENCLR_REG_OFST          _UINT32_(0x08)      /* (PAC_INTENCLR) Interrupt Enable Clear Offset */
#define PAC_INTENSET_REG_OFST          _UINT32_(0x09)      /* (PAC_INTENSET) Interrupt Enable Set Offset */
#define PAC_INTFLAGAHB_REG_OFST        _UINT32_(0x10)      /* (PAC_INTFLAGAHB) AHB Client Bus Interrupt Flag Status and Clear Offset */
#define PAC_INTFLAGA_REG_OFST          _UINT32_(0x14)      /* (PAC_INTFLAGA) Peripheral Interrupt Flag Status and Clear A Offset */
#define PAC_INTFLAGB_REG_OFST          _UINT32_(0x18)      /* (PAC_INTFLAGB) Peripheral Interrupt Flag Status and Clear B Offset */
#define PAC_INTFLAGC_REG_OFST          _UINT32_(0x1C)      /* (PAC_INTFLAGC) Peripheral Interrupt Flag Status and Clear C Offset */
#define PAC_STATUSA_REG_OFST           _UINT32_(0x34)      /* (PAC_STATUSA) Peripheral Write Protection Status A Offset */
#define PAC_STATUSB_REG_OFST           _UINT32_(0x38)      /* (PAC_STATUSB) Peripheral Write Protection Status B Offset */
#define PAC_STATUSC_REG_OFST           _UINT32_(0x3C)      /* (PAC_STATUSC) Peripheral Write Protection Status C Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PAC register API structure */
typedef struct
{  /* Peripheral Access Controller */
  __IO  uint32_t                       PAC_WRCTRL;         /* Offset: 0x00 (R/W  32) Write Control */
  __IO  uint8_t                        PAC_EVCTRL;         /* Offset: 0x04 (R/W  8) Event Control */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        PAC_INTENCLR;       /* Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        PAC_INTENSET;       /* Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __I   uint8_t                        Reserved2[0x06];
  __IO  uint32_t                       PAC_INTFLAGAHB;     /* Offset: 0x10 (R/W  32) AHB Client Bus Interrupt Flag Status and Clear */
  __IO  uint32_t                       PAC_INTFLAGA;       /* Offset: 0x14 (R/W  32) Peripheral Interrupt Flag Status and Clear A */
  __IO  uint32_t                       PAC_INTFLAGB;       /* Offset: 0x18 (R/W  32) Peripheral Interrupt Flag Status and Clear B */
  __IO  uint32_t                       PAC_INTFLAGC;       /* Offset: 0x1C (R/W  32) Peripheral Interrupt Flag Status and Clear C */
  __I   uint8_t                        Reserved3[0x14];
  __I   uint32_t                       PAC_STATUSA;        /* Offset: 0x34 (R/   32) Peripheral Write Protection Status A */
  __I   uint32_t                       PAC_STATUSB;        /* Offset: 0x38 (R/   32) Peripheral Write Protection Status B */
  __I   uint32_t                       PAC_STATUSC;        /* Offset: 0x3C (R/   32) Peripheral Write Protection Status C */
} pac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_PAC_COMPONENT_H_ */
