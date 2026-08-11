
/*
 * Software API Definition for PORT (GPIO / Pin Controller) Component
 * Target Family: Microchip PIC32CM LS00 (e.g. PIC32CM5164LS00048)
 * Architecture: Arm Cortex-M23 (ARMv8-M Baseline with TrustZone)
 *
 * Copyright (c) 2026 Microchip Technology Inc. and its subsidiaries.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _PIC32CM5164LS00048_PORT_COMPONENT_H_
#define _PIC32CM5164LS00048_PORT_COMPONENT_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Standard CMSIS Access Qualifiers fallback */
#ifndef __I
  #define __I  volatile const  /*!< Defines 'read only' permissions */
#endif
#ifndef __O
  #define __O  volatile        /*!< Defines 'write only' permissions */
#endif
#ifndef __IO
  #define __IO volatile        /*!< Defines 'read / write' permissions */
#endif

/* Type macro definitions */
#ifndef _UINT32_
  #define _UINT32_(x) ((uint32_t)(x))
#endif
#ifndef _UINT8_
  #define _UINT8_(x)  ((uint8_t)(x))
#endif

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PORT                      */
/* ************************************************************************** */

/* -------- PORT_DIR : (PORT Offset: 0x00) (R/W 32) Data Direction -------- */
#define PORT_DIR_RESETVALUE                   _UINT32_(0x00000000)
#define PORT_DIR_DIR_Pos                      _UINT32_(0)
#define PORT_DIR_DIR_Msk                      (_UINT32_(0xFFFFFFFF) << PORT_DIR_DIR_Pos)
#define PORT_DIR_DIR(value)                   (PORT_DIR_DIR_Msk & (_UINT32_(value) << PORT_DIR_DIR_Pos))
#define PORT_DIR_Msk                          _UINT32_(0xFFFFFFFF)

/* -------- PORT_DIRCLR : (PORT Offset: 0x04) (R/W 32) Data Direction Clear -------- */
#define PORT_DIRCLR_RESETVALUE                _UINT32_(0x00000000)
#define PORT_DIRCLR_DIRCLR_Pos                _UINT32_(0)
#define PORT_DIRCLR_DIRCLR_Msk                (_UINT32_(0xFFFFFFFF) << PORT_DIRCLR_DIRCLR_Pos)
#define PORT_DIRCLR_DIRCLR(value)             (PORT_DIRCLR_DIRCLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIRCLR_Pos))
#define PORT_DIRCLR_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_DIRSET : (PORT Offset: 0x08) (R/W 32) Data Direction Set -------- */
#define PORT_DIRSET_RESETVALUE                _UINT32_(0x00000000)
#define PORT_DIRSET_DIRSET_Pos                _UINT32_(0)
#define PORT_DIRSET_DIRSET_Msk                (_UINT32_(0xFFFFFFFF) << PORT_DIRSET_DIRSET_Pos)
#define PORT_DIRSET_DIRSET(value)             (PORT_DIRSET_DIRSET_Msk & (_UINT32_(value) << PORT_DIRSET_DIRSET_Pos))
#define PORT_DIRSET_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_DIRTGL : (PORT Offset: 0x0C) (R/W 32) Data Direction Toggle -------- */
#define PORT_DIRTGL_RESETVALUE                _UINT32_(0x00000000)
#define PORT_DIRTGL_DIRTGL_Pos                _UINT32_(0)
#define PORT_DIRTGL_DIRTGL_Msk                (_UINT32_(0xFFFFFFFF) << PORT_DIRTGL_DIRTGL_Pos)
#define PORT_DIRTGL_DIRTGL(value)             (PORT_DIRTGL_DIRTGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIRTGL_Pos))
#define PORT_DIRTGL_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_OUT : (PORT Offset: 0x10) (R/W 32) Data Output Value -------- */
#define PORT_OUT_RESETVALUE                   _UINT32_(0x00000000)
#define PORT_OUT_OUT_Pos                      _UINT32_(0)
#define PORT_OUT_OUT_Msk                      (_UINT32_(0xFFFFFFFF) << PORT_OUT_OUT_Pos)
#define PORT_OUT_OUT(value)                   (PORT_OUT_OUT_Msk & (_UINT32_(value) << PORT_OUT_OUT_Pos))
#define PORT_OUT_Msk                          _UINT32_(0xFFFFFFFF)

/* -------- PORT_OUTCLR : (PORT Offset: 0x14) (R/W 32) Data Output Value Clear -------- */
#define PORT_OUTCLR_RESETVALUE                _UINT32_(0x00000000)
#define PORT_OUTCLR_OUTCLR_Pos                _UINT32_(0)
#define PORT_OUTCLR_OUTCLR_Msk                (_UINT32_(0xFFFFFFFF) << PORT_OUTCLR_OUTCLR_Pos)
#define PORT_OUTCLR_OUTCLR(value)             (PORT_OUTCLR_OUTCLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUTCLR_Pos))
#define PORT_OUTCLR_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_OUTSET : (PORT Offset: 0x18) (R/W 32) Data Output Value Set -------- */
#define PORT_OUTSET_RESETVALUE                _UINT32_(0x00000000)
#define PORT_OUTSET_OUTSET_Pos                _UINT32_(0)
#define PORT_OUTSET_OUTSET_Msk                (_UINT32_(0xFFFFFFFF) << PORT_OUTSET_OUTSET_Pos)
#define PORT_OUTSET_OUTSET(value)             (PORT_OUTSET_OUTSET_Msk & (_UINT32_(value) << PORT_OUTSET_OUTSET_Pos))
#define PORT_OUTSET_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_OUTTGL : (PORT Offset: 0x1C) (R/W 32) Data Output Value Toggle -------- */
#define PORT_OUTTGL_RESETVALUE                _UINT32_(0x00000000)
#define PORT_OUTTGL_OUTTGL_Pos                _UINT32_(0)
#define PORT_OUTTGL_OUTTGL_Msk                (_UINT32_(0xFFFFFFFF) << PORT_OUTTGL_OUTTGL_Pos)
#define PORT_OUTTGL_OUTTGL(value)             (PORT_OUTTGL_OUTTGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUTTGL_Pos))
#define PORT_OUTTGL_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_IN : (PORT Offset: 0x20) ( R/ 32) Data Input Value -------- */
#define PORT_IN_RESETVALUE                    _UINT32_(0x00000000)
#define PORT_IN_IN_Pos                        _UINT32_(0)
#define PORT_IN_IN_Msk                        (_UINT32_(0xFFFFFFFF) << PORT_IN_IN_Pos)
#define PORT_IN_IN(value)                     (PORT_IN_IN_Msk & (_UINT32_(value) << PORT_IN_IN_Pos))
#define PORT_IN_Msk                           _UINT32_(0xFFFFFFFF)

/* -------- PORT_CTRL : (PORT Offset: 0x24) (R/W 32) Control -------- */
#define PORT_CTRL_RESETVALUE                  _UINT32_(0x00000000)
#define PORT_CTRL_SAMPLING_Pos                _UINT32_(0)
#define PORT_CTRL_SAMPLING_Msk                (_UINT32_(0xFFFFFFFF) << PORT_CTRL_SAMPLING_Pos)
#define PORT_CTRL_SAMPLING(value)             (PORT_CTRL_SAMPLING_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING_Pos))
#define PORT_CTRL_Msk                         _UINT32_(0xFFFFFFFF)

/* -------- PORT_WRCONFIG : (PORT Offset: 0x28) ( /W 32) Write Configuration -------- */
#define PORT_WRCONFIG_RESETVALUE              _UINT32_(0x00000000)

#define PORT_WRCONFIG_PINMASK_Pos             _UINT32_(0)
#define PORT_WRCONFIG_PINMASK_Msk             (_UINT32_(0xFFFF) << PORT_WRCONFIG_PINMASK_Pos)
#define PORT_WRCONFIG_PINMASK(value)          (PORT_WRCONFIG_PINMASK_Msk & (_UINT32_(value) << PORT_WRCONFIG_PINMASK_Pos))

#define PORT_WRCONFIG_PMUXEN_Pos              _UINT32_(16)
#define PORT_WRCONFIG_PMUXEN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_PMUXEN_Pos)
#define PORT_WRCONFIG_PMUXEN(value)           (PORT_WRCONFIG_PMUXEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_PMUXEN_Pos))

#define PORT_WRCONFIG_INEN_Pos                _UINT32_(17)
#define PORT_WRCONFIG_INEN_Msk                (_UINT32_(0x1) << PORT_WRCONFIG_INEN_Pos)
#define PORT_WRCONFIG_INEN(value)             (PORT_WRCONFIG_INEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_INEN_Pos))

#define PORT_WRCONFIG_PULLEN_Pos              _UINT32_(18)
#define PORT_WRCONFIG_PULLEN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_PULLEN_Pos)
#define PORT_WRCONFIG_PULLEN(value)           (PORT_WRCONFIG_PULLEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_PULLEN_Pos))

#define PORT_WRCONFIG_ODRAIN_Pos              _UINT32_(19)
#define PORT_WRCONFIG_ODRAIN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_ODRAIN_Pos)
#define PORT_WRCONFIG_ODRAIN(value)           (PORT_WRCONFIG_ODRAIN_Msk & (_UINT32_(value) << PORT_WRCONFIG_ODRAIN_Pos))

#define PORT_WRCONFIG_SLEWLIM_Pos             _UINT32_(20)
#define PORT_WRCONFIG_SLEWLIM_Msk             (_UINT32_(0x3) << PORT_WRCONFIG_SLEWLIM_Pos)
#define PORT_WRCONFIG_SLEWLIM(value)          (PORT_WRCONFIG_SLEWLIM_Msk & (_UINT32_(value) << PORT_WRCONFIG_SLEWLIM_Pos))

#define PORT_WRCONFIG_PMUX_Pos                _UINT32_(24)
#define PORT_WRCONFIG_PMUX_Msk                (_UINT32_(0xF) << PORT_WRCONFIG_PMUX_Pos)
#define PORT_WRCONFIG_PMUX(value)             (PORT_WRCONFIG_PMUX_Msk & (_UINT32_(value) << PORT_WRCONFIG_PMUX_Pos))

#define PORT_WRCONFIG_WRPMUX_Pos              _UINT32_(28)
#define PORT_WRCONFIG_WRPMUX_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_WRPMUX_Pos)
#define PORT_WRCONFIG_WRPMUX(value)           (PORT_WRCONFIG_WRPMUX_Msk & (_UINT32_(value) << PORT_WRCONFIG_WRPMUX_Pos))

#define PORT_WRCONFIG_WRPINCFG_Pos            _UINT32_(30)
#define PORT_WRCONFIG_WRPINCFG_Msk            (_UINT32_(0x1) << PORT_WRCONFIG_WRPINCFG_Pos)
#define PORT_WRCONFIG_WRPINCFG(value)         (PORT_WRCONFIG_WRPINCFG_Msk & (_UINT32_(value) << PORT_WRCONFIG_WRPINCFG_Pos))

#define PORT_WRCONFIG_HWSEL_Pos               _UINT32_(31)
#define PORT_WRCONFIG_HWSEL_Msk               (_UINT32_(0x1) << PORT_WRCONFIG_HWSEL_Pos)
#define PORT_WRCONFIG_HWSEL(value)            (PORT_WRCONFIG_HWSEL_Msk & (_UINT32_(value) << PORT_WRCONFIG_HWSEL_Pos))

#define PORT_WRCONFIG_Msk                     _UINT32_(0xDF3FFFFF)

/* -------- PORT_EVCTRL : (PORT Offset: 0x2C) (R/W 32) Event Input Control -------- */
#define PORT_EVCTRL_RESETVALUE                _UINT32_(0x00000000)

#define PORT_EVCTRL_PID0_Pos                  _UINT32_(0)
#define PORT_EVCTRL_PID0_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID0_Pos)
#define PORT_EVCTRL_PID0(value)               (PORT_EVCTRL_PID0_Msk & (_UINT32_(value) << PORT_EVCTRL_PID0_Pos))

#define PORT_EVCTRL_EVACT0_Pos                _UINT32_(5)
#define PORT_EVCTRL_EVACT0_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT0_Pos)
#define PORT_EVCTRL_EVACT0(value)             (PORT_EVCTRL_EVACT0_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT0_Pos))
#define   PORT_EVCTRL_EVACT0_OUT_Val          _UINT32_(0x0)
#define   PORT_EVCTRL_EVACT0_SET_Val          _UINT32_(0x1)
#define   PORT_EVCTRL_EVACT0_CLR_Val          _UINT32_(0x2)
#define   PORT_EVCTRL_EVACT0_TGL_Val          _UINT32_(0x3)
#define PORT_EVCTRL_EVACT0_OUT                (PORT_EVCTRL_EVACT0_OUT_Val << PORT_EVCTRL_EVACT0_Pos)
#define PORT_EVCTRL_EVACT0_SET                (PORT_EVCTRL_EVACT0_SET_Val << PORT_EVCTRL_EVACT0_Pos)
#define PORT_EVCTRL_EVACT0_CLR                (PORT_EVCTRL_EVACT0_CLR_Val << PORT_EVCTRL_EVACT0_Pos)
#define PORT_EVCTRL_EVACT0_TGL                (PORT_EVCTRL_EVACT0_TGL_Val << PORT_EVCTRL_EVACT0_Pos)

#define PORT_EVCTRL_PORTEI0_Pos               _UINT32_(7)
#define PORT_EVCTRL_PORTEI0_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI0_Pos)
#define PORT_EVCTRL_PORTEI0(value)            (PORT_EVCTRL_PORTEI0_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI0_Pos))

#define PORT_EVCTRL_PID1_Pos                  _UINT32_(8)
#define PORT_EVCTRL_PID1_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID1_Pos)
#define PORT_EVCTRL_PID1(value)               (PORT_EVCTRL_PID1_Msk & (_UINT32_(value) << PORT_EVCTRL_PID1_Pos))

#define PORT_EVCTRL_EVACT1_Pos                _UINT32_(13)
#define PORT_EVCTRL_EVACT1_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT1_Pos)
#define PORT_EVCTRL_EVACT1(value)             (PORT_EVCTRL_EVACT1_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT1_Pos))

#define PORT_EVCTRL_PORTEI1_Pos               _UINT32_(15)
#define PORT_EVCTRL_PORTEI1_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI1_Pos)
#define PORT_EVCTRL_PORTEI1(value)            (PORT_EVCTRL_PORTEI1_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI1_Pos))

#define PORT_EVCTRL_PID2_Pos                  _UINT32_(16)
#define PORT_EVCTRL_PID2_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID2_Pos)
#define PORT_EVCTRL_PID2(value)               (PORT_EVCTRL_PID2_Msk & (_UINT32_(value) << PORT_EVCTRL_PID2_Pos))

#define PORT_EVCTRL_EVACT2_Pos                _UINT32_(21)
#define PORT_EVCTRL_EVACT2_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT2_Pos)
#define PORT_EVCTRL_EVACT2(value)             (PORT_EVCTRL_EVACT2_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT2_Pos))

#define PORT_EVCTRL_PORTEI2_Pos               _UINT32_(23)
#define PORT_EVCTRL_PORTEI2_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI2_Pos)
#define PORT_EVCTRL_PORTEI2(value)            (PORT_EVCTRL_PORTEI2_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI2_Pos))

#define PORT_EVCTRL_PID3_Pos                  _UINT32_(24)
#define PORT_EVCTRL_PID3_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID3_Pos)
#define PORT_EVCTRL_PID3(value)               (PORT_EVCTRL_PID3_Msk & (_UINT32_(value) << PORT_EVCTRL_PID3_Pos))

#define PORT_EVCTRL_EVACT3_Pos                _UINT32_(29)
#define PORT_EVCTRL_EVACT3_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT3_Pos)
#define PORT_EVCTRL_EVACT3(value)             (PORT_EVCTRL_EVACT3_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT3_Pos))

#define PORT_EVCTRL_PORTEI3_Pos               _UINT32_(31)
#define PORT_EVCTRL_PORTEI3_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI3_Pos)
#define PORT_EVCTRL_PORTEI3(value)            (PORT_EVCTRL_PORTEI3_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI3_Pos))

#define PORT_EVCTRL_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_PMUX : (PORT Offset: 0x30) (R/W 8) Peripheral Multiplexing -------- */
#define PORT_PMUX_RESETVALUE                  _UINT8_(0x00)

#define PORT_PMUX_PMUXE_Pos                   _UINT8_(0)
#define PORT_PMUX_PMUXE_Msk                   (_UINT8_(0xF) << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE(value)                (PORT_PMUX_PMUXE_Msk & (_UINT8_(value) << PORT_PMUX_PMUXE_Pos))
#define   PORT_PMUX_PMUXE_A_Val               _UINT8_(0x0)
#define   PORT_PMUX_PMUXE_B_Val               _UINT8_(0x1)
#define   PORT_PMUX_PMUXE_C_Val               _UINT8_(0x2)
#define   PORT_PMUX_PMUXE_D_Val               _UINT8_(0x3)
#define   PORT_PMUX_PMUXE_E_Val               _UINT8_(0x4)
#define   PORT_PMUX_PMUXE_F_Val               _UINT8_(0x5)
#define   PORT_PMUX_PMUXE_G_Val               _UINT8_(0x6)
#define   PORT_PMUX_PMUXE_H_Val               _UINT8_(0x7)
#define   PORT_PMUX_PMUXE_I_Val               _UINT8_(0x8)
#define   PORT_PMUX_PMUXE_K_Val               _UINT8_(0xA)
#define   PORT_PMUX_PMUXE_P_Val               _UINT8_(0xF)
#define PORT_PMUX_PMUXE_A                     (PORT_PMUX_PMUXE_A_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_B                     (PORT_PMUX_PMUXE_B_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_C                     (PORT_PMUX_PMUXE_C_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_D                     (PORT_PMUX_PMUXE_D_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_E                     (PORT_PMUX_PMUXE_E_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_F                     (PORT_PMUX_PMUXE_F_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_G                     (PORT_PMUX_PMUXE_G_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_H                     (PORT_PMUX_PMUXE_H_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_I                     (PORT_PMUX_PMUXE_I_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_K                     (PORT_PMUX_PMUXE_K_Val << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE_P                     (PORT_PMUX_PMUXE_P_Val << PORT_PMUX_PMUXE_Pos)

#define PORT_PMUX_PMUXO_Pos                   _UINT8_(4)
#define PORT_PMUX_PMUXO_Msk                   (_UINT8_(0xF) << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO(value)                (PORT_PMUX_PMUXO_Msk & (_UINT8_(value) << PORT_PMUX_PMUXO_Pos))
#define   PORT_PMUX_PMUXO_A_Val               _UINT8_(0x0)
#define   PORT_PMUX_PMUXO_B_Val               _UINT8_(0x1)
#define   PORT_PMUX_PMUXO_C_Val               _UINT8_(0x2)
#define   PORT_PMUX_PMUXO_D_Val               _UINT8_(0x3)
#define   PORT_PMUX_PMUXO_E_Val               _UINT8_(0x4)
#define   PORT_PMUX_PMUXO_F_Val               _UINT8_(0x5)
#define   PORT_PMUX_PMUXO_G_Val               _UINT8_(0x6)
#define   PORT_PMUX_PMUXO_H_Val               _UINT8_(0x7)
#define   PORT_PMUX_PMUXO_I_Val               _UINT8_(0x8)
#define   PORT_PMUX_PMUXO_K_Val               _UINT8_(0xA)
#define   PORT_PMUX_PMUXO_P_Val               _UINT8_(0xF)
#define PORT_PMUX_PMUXO_A                     (PORT_PMUX_PMUXO_A_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_B                     (PORT_PMUX_PMUXO_B_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_C                     (PORT_PMUX_PMUXO_C_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_D                     (PORT_PMUX_PMUXO_D_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_E                     (PORT_PMUX_PMUXO_E_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_F                     (PORT_PMUX_PMUXO_F_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_G                     (PORT_PMUX_PMUXO_G_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_H                     (PORT_PMUX_PMUXO_H_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_I                     (PORT_PMUX_PMUXO_I_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_K                     (PORT_PMUX_PMUXO_K_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO_P                     (PORT_PMUX_PMUXO_P_Val << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_Msk                         _UINT8_(0xFF)

/* -------- PORT_PINCFG : (PORT Offset: 0x40) (R/W 8) Pin Configuration -------- */
#define PORT_PINCFG_RESETVALUE                _UINT8_(0x00)

#define PORT_PINCFG_PMUXEN_Pos                _UINT8_(0)
#define PORT_PINCFG_PMUXEN_Msk                (_UINT8_(0x1) << PORT_PINCFG_PMUXEN_Pos)
#define PORT_PINCFG_PMUXEN(value)             (PORT_PINCFG_PMUXEN_Msk & (_UINT8_(value) << PORT_PINCFG_PMUXEN_Pos))

#define PORT_PINCFG_INEN_Pos                  _UINT8_(1)
#define PORT_PINCFG_INEN_Msk                  (_UINT8_(0x1) << PORT_PINCFG_INEN_Pos)
#define PORT_PINCFG_INEN(value)               (PORT_PINCFG_INEN_Msk & (_UINT8_(value) << PORT_PINCFG_INEN_Pos))

#define PORT_PINCFG_PULLEN_Pos                _UINT8_(2)
#define PORT_PINCFG_PULLEN_Msk                (_UINT8_(0x1) << PORT_PINCFG_PULLEN_Pos)
#define PORT_PINCFG_PULLEN(value)             (PORT_PINCFG_PULLEN_Msk & (_UINT8_(value) << PORT_PINCFG_PULLEN_Pos))

#define PORT_PINCFG_ODRAIN_Pos                _UINT8_(3)
#define PORT_PINCFG_ODRAIN_Msk                (_UINT8_(0x1) << PORT_PINCFG_ODRAIN_Pos)
#define PORT_PINCFG_ODRAIN(value)             (PORT_PINCFG_ODRAIN_Msk & (_UINT8_(value) << PORT_PINCFG_ODRAIN_Pos))

#define PORT_PINCFG_SLEWLIM_Pos               _UINT8_(4)
#define PORT_PINCFG_SLEWLIM_Msk               (_UINT8_(0x3) << PORT_PINCFG_SLEWLIM_Pos)
#define PORT_PINCFG_SLEWLIM(value)            (PORT_PINCFG_SLEWLIM_Msk & (_UINT8_(value) << PORT_PINCFG_SLEWLIM_Pos))
#define   PORT_PINCFG_SLEWLIM_FAST_Val        _UINT8_(0x0)
#define   PORT_PINCFG_SLEWLIM_SLOW4_Val       _UINT8_(0x1)
#define   PORT_PINCFG_SLEWLIM_SLOW8_Val       _UINT8_(0x2)
#define   PORT_PINCFG_SLEWLIM_SLOW12_Val      _UINT8_(0x3)
#define PORT_PINCFG_SLEWLIM_FAST              (PORT_PINCFG_SLEWLIM_FAST_Val << PORT_PINCFG_SLEWLIM_Pos)
#define PORT_PINCFG_SLEWLIM_SLOW4             (PORT_PINCFG_SLEWLIM_SLOW4_Val << PORT_PINCFG_SLEWLIM_Pos)
#define PORT_PINCFG_SLEWLIM_SLOW8             (PORT_PINCFG_SLEWLIM_SLOW8_Val << PORT_PINCFG_SLEWLIM_Pos)
#define PORT_PINCFG_SLEWLIM_SLOW12            (PORT_PINCFG_SLEWLIM_SLOW12_Val << PORT_PINCFG_SLEWLIM_Pos)
#define PORT_PINCFG_Msk                       _UINT8_(0x3F)

/* -------- PORT_INTENCLR : (PORT Offset: 0x60) (R/W 32) Interrupt Enable Clear -------- */
#define PORT_INTENCLR_RESETVALUE              _UINT32_(0x00000000)
#define PORT_INTENCLR_NSCHK_Pos               _UINT32_(0)
#define PORT_INTENCLR_NSCHK_Msk               (_UINT32_(0x1) << PORT_INTENCLR_NSCHK_Pos)
#define PORT_INTENCLR_NSCHK(value)            (PORT_INTENCLR_NSCHK_Msk & (_UINT32_(value) << PORT_INTENCLR_NSCHK_Pos))
#define PORT_INTENCLR_Msk                     _UINT32_(0x00000001)

/* -------- PORT_INTENSET : (PORT Offset: 0x64) (R/W 32) Interrupt Enable Set -------- */
#define PORT_INTENSET_RESETVALUE              _UINT32_(0x00000000)
#define PORT_INTENSET_NSCHK_Pos               _UINT32_(0)
#define PORT_INTENSET_NSCHK_Msk               (_UINT32_(0x1) << PORT_INTENSET_NSCHK_Pos)
#define PORT_INTENSET_NSCHK(value)            (PORT_INTENSET_NSCHK_Msk & (_UINT32_(value) << PORT_INTENSET_NSCHK_Pos))
#define PORT_INTENSET_Msk                     _UINT32_(0x00000001)

/* -------- PORT_INTFLAG : (PORT Offset: 0x68) (R/W 32) Interrupt Flag Status and Clear -------- */
#define PORT_INTFLAG_RESETVALUE               _UINT32_(0x00000000)
#define PORT_INTFLAG_NSCHK_Pos                _UINT32_(0)
#define PORT_INTFLAG_NSCHK_Msk                (_UINT32_(0x1) << PORT_INTFLAG_NSCHK_Pos)
#define PORT_INTFLAG_NSCHK(value)             (PORT_INTFLAG_NSCHK_Msk & (_UINT32_(value) << PORT_INTFLAG_NSCHK_Pos))
#define PORT_INTFLAG_Msk                      _UINT32_(0x00000001)

/* -------- PORT_NONSEC : (PORT Offset: 0x6C) (R/W 32) Security Attribution -------- */
#define PORT_NONSEC_RESETVALUE                _UINT32_(0x00000000)
#define PORT_NONSEC_NONSEC_Pos                _UINT32_(0)
#define PORT_NONSEC_NONSEC_Msk                (_UINT32_(0xFFFFFFFF) << PORT_NONSEC_NONSEC_Pos)
#define PORT_NONSEC_NONSEC(value)             (PORT_NONSEC_NONSEC_Msk & (_UINT32_(value) << PORT_NONSEC_NONSEC_Pos))
#define PORT_NONSEC_Msk                       _UINT32_(0xFFFFFFFF)

/* -------- PORT_NSCHK : (PORT Offset: 0x70) (R/W 32) Security Attribution Check -------- */
#define PORT_NSCHK_RESETVALUE                 _UINT32_(0x00000000)
#define PORT_NSCHK_NSCHK_Pos                  _UINT32_(0)
#define PORT_NSCHK_NSCHK_Msk                  (_UINT32_(0xFFFFFFFF) << PORT_NSCHK_NSCHK_Pos)
#define PORT_NSCHK_NSCHK(value)               (PORT_NSCHK_NSCHK_Msk & (_UINT32_(value) << PORT_NSCHK_NSCHK_Pos))
#define PORT_NSCHK_Msk                        _UINT32_(0xFFFFFFFF)

/* -------- PORT Register Offset Definitions -------- */
#define PORT_DIR_REG_OFST                     _UINT32_(0x00)
#define PORT_DIRCLR_REG_OFST                  _UINT32_(0x04)
#define PORT_DIRSET_REG_OFST                  _UINT32_(0x08)
#define PORT_DIRTGL_REG_OFST                  _UINT32_(0x0C)
#define PORT_OUT_REG_OFST                     _UINT32_(0x10)
#define PORT_OUTCLR_REG_OFST                  _UINT32_(0x14)
#define PORT_OUTSET_REG_OFST                  _UINT32_(0x18)
#define PORT_OUTTGL_REG_OFST                  _UINT32_(0x1C)
#define PORT_IN_REG_OFST                      _UINT32_(0x20)
#define PORT_CTRL_REG_OFST                    _UINT32_(0x24)
#define PORT_WRCONFIG_REG_OFST                _UINT32_(0x28)
#define PORT_EVCTRL_REG_OFST                  _UINT32_(0x2C)
#define PORT_PMUX_REG_OFST                    _UINT32_(0x30)
#define PORT_PINCFG_REG_OFST                  _UINT32_(0x40)
#define PORT_INTENCLR_REG_OFST                _UINT32_(0x60)
#define PORT_INTENSET_REG_OFST                _UINT32_(0x64)
#define PORT_INTFLAG_REG_OFST                 _UINT32_(0x68)
#define PORT_NONSEC_REG_OFST                  _UINT32_(0x6C)
#define PORT_NSCHK_REG_OFST                   _UINT32_(0x70)

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

/* GROUP Register API Structure (128-byte stride per PORT bank) */
typedef struct
{
  __IO  uint32_t                       PORT_DIR;           /* Offset: 0x00 (R/W 32) Data Direction */
  __IO  uint32_t                       PORT_DIRCLR;        /* Offset: 0x04 (R/W 32) Data Direction Clear */
  __IO  uint32_t                       PORT_DIRSET;        /* Offset: 0x08 (R/W 32) Data Direction Set */
  __IO  uint32_t                       PORT_DIRTGL;        /* Offset: 0x0C (R/W 32) Data Direction Toggle */
  __IO  uint32_t                       PORT_OUT;           /* Offset: 0x10 (R/W 32) Data Output Value */
  __IO  uint32_t                       PORT_OUTCLR;        /* Offset: 0x14 (R/W 32) Data Output Value Clear */
  __IO  uint32_t                       PORT_OUTSET;        /* Offset: 0x18 (R/W 32) Data Output Value Set */
  __IO  uint32_t                       PORT_OUTTGL;        /* Offset: 0x1C (R/W 32) Data Output Value Toggle */
  __I   uint32_t                       PORT_IN;            /* Offset: 0x20 (R/  32) Data Input Value */
  __IO  uint32_t                       PORT_CTRL;          /* Offset: 0x24 (R/W 32) Control */
  __O   uint32_t                       PORT_WRCONFIG;      /* Offset: 0x28 ( /W 32) Write Configuration */
  __IO  uint32_t                       PORT_EVCTRL;        /* Offset: 0x2C (R/W 32) Event Input Control */
  __IO  uint8_t                        PORT_PMUX[16];      /* Offset: 0x30 (R/W  8) Peripheral Multiplexing (32 pins) */
  __IO  uint8_t                        PORT_PINCFG[32];    /* Offset: 0x40 (R/W  8) Pin Configuration (32 pins) */
  __IO  uint32_t                       PORT_INTENCLR;      /* Offset: 0x60 (R/W 32) Interrupt Enable Clear */
  __IO  uint32_t                       PORT_INTENSET;      /* Offset: 0x64 (R/W 32) Interrupt Enable Set */
  __IO  uint32_t                       PORT_INTFLAG;       /* Offset: 0x68 (R/W 32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       PORT_NONSEC;        /* Offset: 0x6C (R/W 32) Security Attribution */
  __IO  uint32_t                       PORT_NSCHK;         /* Offset: 0x70 (R/W 32) Security Attribution Check */
  __I   uint8_t                        Reserved1[0x0C];    /* Offset: 0x74 (12 bytes padding to 0x80) */
} port_group_registers_t;

#ifndef PORT_GROUP_NUMBER
#define PORT_GROUP_NUMBER              2                   /* PIC32CM5164LS00048 has 2 PORT banks (Port A & Port B) */
#endif

/* PORT Register API Structure */
typedef struct
{
  port_group_registers_t              GROUP[PORT_GROUP_NUMBER]; /* Offset: 0x00 */
} port_registers_t;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#ifdef __cplusplus
}
#endif

#endif /* _PIC32CM5164LS00048_PORT_COMPONENT_H_ */



