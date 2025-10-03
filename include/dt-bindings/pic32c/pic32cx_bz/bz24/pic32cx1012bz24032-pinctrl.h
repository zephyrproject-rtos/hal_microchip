/*
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_PIC32CX1012BZ24032_PINCTRL_H_
#define MICROCHIP_PIC32CX1012BZ24032_PINCTRL_H_

#include <dt-bindings/pic32c/pic32cx_bz/common/mchp_pinctrl_pinmux_pic32cxbz.h>

/* Indicates that direct mode is enabled; use this macro when configuring for direct mode
 * instead of PPS.
 */
#define PIN_DIRECT_MODE  MCHP_PINMUX(direct, NA, NA, NA, directmode)
/* pa3_cclin0_in */
#define PA3_CCLIN0_IN    MCHP_PINMUX(a, 3, 0x98, 1, periph)
/* pa3_cclin1_in */
#define PA3_CCLIN1_IN    MCHP_PINMUX(a, 3, 0x9c, 8, periph)
/* pa3_cclin3_in */
#define PA3_CCLIN3_IN    MCHP_PINMUX(a, 3, 0xa4, 1, periph)
/* pa3_cclin4_in */
#define PA3_CCLIN4_IN    MCHP_PINMUX(a, 3, 0xa8, 8, periph)
/* pa3_cclout0_out */
#define PA3_CCLOUT0_OUT  MCHP_PINMUX(a, 3, 0x218, 28, periph)
/* pa3_cclout1_out */
#define PA3_CCLOUT1_OUT  MCHP_PINMUX(a, 3, 0x21c, 28, periph)
/* pa3_extint0_in */
#define PA3_EXTINT0_IN   MCHP_PINMUX(a, 3, 0x0, 1, periph)
/* pa3_extint1_in */
#define PA3_EXTINT1_IN   MCHP_PINMUX(a, 3, 0x4, 8, periph)
/* pa3_qcs_out */
#define PA3_QCS_OUT      MCHP_PINMUX(a, 3, 0x218, 24, periph)
/* pa3_qd0_out */
#define PA3_QD0_OUT      MCHP_PINMUX(a, 3, 0x21c, 25, periph)
/* pa3_qd1_in */
#define PA3_QD1_IN       MCHP_PINMUX(a, 3, 0x88, 1, periph)
/* pa3_qd1_out */
#define PA3_QD1_OUT      MCHP_PINMUX(a, 3, 0x218, 27, periph)
/* pa3_qd2_in */
#define PA3_QD2_IN       MCHP_PINMUX(a, 3, 0x8c, 8, periph)
/* pa3_qd2_out */
#define PA3_QD2_OUT      MCHP_PINMUX(a, 3, 0x218, 26, periph)
/* pa3_qd3_out */
#define PA3_QD3_OUT      MCHP_PINMUX(a, 3, 0x218, 25, periph)
/* pa3_qsck_in */
#define PA3_QSCK_IN      MCHP_PINMUX(a, 3, 0x80, 1, periph)
/* pa3_qsck_out */
#define PA3_QSCK_OUT     MCHP_PINMUX(a, 3, 0x218, 23, periph)
/* pa3_refi_in */
#define PA3_REFI_IN      MCHP_PINMUX(a, 3, 0x94, 1, periph)
/* pa3_refo1_out */
#define PA3_REFO1_OUT    MCHP_PINMUX(a, 3, 0x218, 19, periph)
/* pa3_refo2_out */
#define PA3_REFO2_OUT    MCHP_PINMUX(a, 3, 0x21c, 19, periph)
/* pa3_refo3_out */
#define PA3_REFO3_OUT    MCHP_PINMUX(a, 3, 0x220, 19, periph)
/* pa3_scom0p0_in */
#define PA3_SCOM0P0_IN   MCHP_PINMUX(a, 3, 0x40, 8, periph)
/* pa3_scom0p0_out */
#define PA3_SCOM0P0_OUT  MCHP_PINMUX(a, 3, 0x21c, 1, periph)
/* pa3_scom0p1_out */
#define PA3_SCOM0P1_OUT  MCHP_PINMUX(a, 3, 0x218, 3, periph)
/* pa3_scom0p2_out */
#define PA3_SCOM0P2_OUT  MCHP_PINMUX(a, 3, 0x218, 2, periph)
/* pa3_scom0p3_in */
#define PA3_SCOM0P3_IN   MCHP_PINMUX(a, 3, 0x4c, 1, periph)
/* pa3_scom0p3_out */
#define PA3_SCOM0P3_OUT  MCHP_PINMUX(a, 3, 0x218, 1, periph)
/* pa3_scom1p0_out */
#define PA3_SCOM1P0_OUT  MCHP_PINMUX(a, 3, 0x218, 4, periph)
/* pa3_scom1p1_out */
#define PA3_SCOM1P1_OUT  MCHP_PINMUX(a, 3, 0x218, 6, periph)
/* pa3_scom1p2_in */
#define PA3_SCOM1P2_IN   MCHP_PINMUX(a, 3, 0x58, 1, periph)
/* pa3_scom1p2_out */
#define PA3_SCOM1P2_OUT  MCHP_PINMUX(a, 3, 0x218, 5, periph)
/* pa3_scom1p3_in */
#define PA3_SCOM1P3_IN   MCHP_PINMUX(a, 3, 0x5c, 8, periph)
/* pa3_scom1p3_out */
#define PA3_SCOM1P3_OUT  MCHP_PINMUX(a, 3, 0x21c, 5, periph)
/* pa3_tc0wo0g1_in */
#define PA3_TC0WO0G1_IN  MCHP_PINMUX(a, 3, 0xb0, 1, periph)
/* pa3_tc0wo0g2_in */
#define PA3_TC0WO0G2_IN  MCHP_PINMUX(a, 3, 0xb4, 8, periph)
/* pa3_tc0wo0_out */
#define PA3_TC0WO0_OUT   MCHP_PINMUX(a, 3, 0x220, 18, periph)
/* pa3_tc0wo1_out */
#define PA3_TC0WO1_OUT   MCHP_PINMUX(a, 3, 0x218, 18, periph)
/* pa3_tc1wo0g1_in */
#define PA3_TC1WO0G1_IN  MCHP_PINMUX(a, 3, 0xc0, 1, periph)
/* pa3_tc1wo0_out */
#define PA3_TC1WO0_OUT   MCHP_PINMUX(a, 3, 0x218, 20, periph)
/* pa3_tc1wo1g2_in */
#define PA3_TC1WO1G2_IN  MCHP_PINMUX(a, 3, 0xc4, 8, periph)
/* pa3_tc1wo1_out */
#define PA3_TC1WO1_OUT   MCHP_PINMUX(a, 3, 0x21c, 20, periph)
/* pa3_tc2wo0g1_in */
#define PA3_TC2WO0G1_IN  MCHP_PINMUX(a, 3, 0xc8, 1, periph)
/* pa3_tc2wo0_out */
#define PA3_TC2WO0_OUT   MCHP_PINMUX(a, 3, 0x218, 21, periph)
/* pa3_tc2wo1g2_in */
#define PA3_TC2WO1G2_IN  MCHP_PINMUX(a, 3, 0xd0, 8, periph)
/* pa3_tc2wo1_out */
#define PA3_TC2WO1_OUT   MCHP_PINMUX(a, 3, 0x21c, 21, periph)
/* pa3_tc3wo0g1_in */
#define PA3_TC3WO0G1_IN  MCHP_PINMUX(a, 3, 0xd8, 1, periph)
/* pa3_tc3wo0_out */
#define PA3_TC3WO0_OUT   MCHP_PINMUX(a, 3, 0x218, 22, periph)
/* pa3_tc3wo1g2_in */
#define PA3_TC3WO1G2_IN  MCHP_PINMUX(a, 3, 0xe0, 8, periph)
/* pa3_tc3wo1_out */
#define PA3_TC3WO1_OUT   MCHP_PINMUX(a, 3, 0x21c, 22, periph)
/* pa3_tcc0wo0_out */
#define PA3_TCC0WO0_OUT  MCHP_PINMUX(a, 3, 0x218, 11, periph)
/* pa3_tcc0wo1_out */
#define PA3_TCC0WO1_OUT  MCHP_PINMUX(a, 3, 0x21c, 11, periph)
/* pa3_tcc0wo2_out */
#define PA3_TCC0WO2_OUT  MCHP_PINMUX(a, 3, 0x218, 13, periph)
/* pa3_tcc0wo3_out */
#define PA3_TCC0WO3_OUT  MCHP_PINMUX(a, 3, 0x21c, 13, periph)
/* pa3_tcc0wo4_out */
#define PA3_TCC0WO4_OUT  MCHP_PINMUX(a, 3, 0x218, 12, periph)
/* pa3_tcc0wo5_out */
#define PA3_TCC0WO5_OUT  MCHP_PINMUX(a, 3, 0x21c, 12, periph)
/* pa3_tcc1wo0_out */
#define PA3_TCC1WO0_OUT  MCHP_PINMUX(a, 3, 0x218, 14, periph)
/* pa3_tcc1wo1_out */
#define PA3_TCC1WO1_OUT  MCHP_PINMUX(a, 3, 0x21c, 14, periph)
/* pa3_tcc1wo2_out */
#define PA3_TCC1WO2_OUT  MCHP_PINMUX(a, 3, 0x218, 16, periph)
/* pa3_tcc1wo3_out */
#define PA3_TCC1WO3_OUT  MCHP_PINMUX(a, 3, 0x21c, 16, periph)
/* pa3_tcc1wo4_out */
#define PA3_TCC1WO4_OUT  MCHP_PINMUX(a, 3, 0x218, 15, periph)
/* pa3_tcc1wo5_out */
#define PA3_TCC1WO5_OUT  MCHP_PINMUX(a, 3, 0x21c, 15, periph)
/* pa3_tcc2wo0_out */
#define PA3_TCC2WO0_OUT  MCHP_PINMUX(a, 3, 0x218, 17, periph)
/* pa3_tcc2wo1_out */
#define PA3_TCC2WO1_OUT  MCHP_PINMUX(a, 3, 0x21c, 17, periph)
/* pa4_cclin1_in */
#define PA4_CCLIN1_IN    MCHP_PINMUX(a, 4, 0x9c, 1, periph)
/* pa4_cclin2_in */
#define PA4_CCLIN2_IN    MCHP_PINMUX(a, 4, 0xa0, 8, periph)
/* pa4_cclin4_in */
#define PA4_CCLIN4_IN    MCHP_PINMUX(a, 4, 0xa8, 1, periph)
/* pa4_cclin5_in */
#define PA4_CCLIN5_IN    MCHP_PINMUX(a, 4, 0xac, 8, periph)
/* pa4_cclout0_out */
#define PA4_CCLOUT0_OUT  MCHP_PINMUX(a, 4, 0x228, 28, periph)
/* pa4_cclout1_out */
#define PA4_CCLOUT1_OUT  MCHP_PINMUX(a, 4, 0x224, 28, periph)
/* pa4_extint1_in */
#define PA4_EXTINT1_IN   MCHP_PINMUX(a, 4, 0x4, 1, periph)
/* pa4_extint2_in */
#define PA4_EXTINT2_IN   MCHP_PINMUX(a, 4, 0x8, 8, periph)
/* pa4_qcs_out */
#define PA4_QCS_OUT      MCHP_PINMUX(a, 4, 0x224, 24, periph)
/* pa4_qd0_out */
#define PA4_QD0_OUT      MCHP_PINMUX(a, 4, 0x224, 25, periph)
/* pa4_qd1_out */
#define PA4_QD1_OUT      MCHP_PINMUX(a, 4, 0x228, 25, periph)
/* pa4_qd2_in */
#define PA4_QD2_IN       MCHP_PINMUX(a, 4, 0x8c, 1, periph)
/* pa4_qd2_out */
#define PA4_QD2_OUT      MCHP_PINMUX(a, 4, 0x224, 27, periph)
/* pa4_qd3_in */
#define PA4_QD3_IN       MCHP_PINMUX(a, 4, 0x90, 8, periph)
/* pa4_qd3_out */
#define PA4_QD3_OUT      MCHP_PINMUX(a, 4, 0x224, 26, periph)
/* pa4_qsck_out */
#define PA4_QSCK_OUT     MCHP_PINMUX(a, 4, 0x224, 23, periph)
/* pa4_refo2_out */
#define PA4_REFO2_OUT    MCHP_PINMUX(a, 4, 0x224, 19, periph)
/* pa4_refo3_out */
#define PA4_REFO3_OUT    MCHP_PINMUX(a, 4, 0x228, 19, periph)
/* pa4_refo4_out */
#define PA4_REFO4_OUT    MCHP_PINMUX(a, 4, 0x22c, 19, periph)
/* pa4_scom0p0_in */
#define PA4_SCOM0P0_IN   MCHP_PINMUX(a, 4, 0x40, 1, periph)
/* pa4_scom0p0_out */
#define PA4_SCOM0P0_OUT  MCHP_PINMUX(a, 4, 0x224, 1, periph)
/* pa4_scom0p1_in */
#define PA4_SCOM0P1_IN   MCHP_PINMUX(a, 4, 0x44, 8, periph)
/* pa4_scom0p1_out */
#define PA4_SCOM0P1_OUT  MCHP_PINMUX(a, 4, 0x228, 1, periph)
/* pa4_scom0p2_out */
#define PA4_SCOM0P2_OUT  MCHP_PINMUX(a, 4, 0x224, 3, periph)
/* pa4_scom0p3_out */
#define PA4_SCOM0P3_OUT  MCHP_PINMUX(a, 4, 0x224, 2, periph)
/* pa4_scom1p0_in */
#define PA4_SCOM1P0_IN   MCHP_PINMUX(a, 4, 0x50, 8, periph)
/* pa4_scom1p0_out */
#define PA4_SCOM1P0_OUT  MCHP_PINMUX(a, 4, 0x228, 5, periph)
/* pa4_scom1p1_out */
#define PA4_SCOM1P1_OUT  MCHP_PINMUX(a, 4, 0x224, 4, periph)
/* pa4_scom1p2_out */
#define PA4_SCOM1P2_OUT  MCHP_PINMUX(a, 4, 0x224, 6, periph)
/* pa4_scom1p3_in */
#define PA4_SCOM1P3_IN   MCHP_PINMUX(a, 4, 0x5c, 1, periph)
/* pa4_scom1p3_out */
#define PA4_SCOM1P3_OUT  MCHP_PINMUX(a, 4, 0x224, 5, periph)
/* pa4_tc0wo0g2_in */
#define PA4_TC0WO0G2_IN  MCHP_PINMUX(a, 4, 0xb4, 1, periph)
/* pa4_tc0wo0_out */
#define PA4_TC0WO0_OUT   MCHP_PINMUX(a, 4, 0x228, 18, periph)
/* pa4_tc0wo1g3_in */
#define PA4_TC0WO1G3_IN  MCHP_PINMUX(a, 4, 0xb8, 8, periph)
/* pa4_tc0wo1_out */
#define PA4_TC0WO1_OUT   MCHP_PINMUX(a, 4, 0x224, 18, periph)
/* pa4_tc1wo0_out */
#define PA4_TC1WO0_OUT   MCHP_PINMUX(a, 4, 0x228, 20, periph)
/* pa4_tc1wo1g2_in */
#define PA4_TC1WO1G2_IN  MCHP_PINMUX(a, 4, 0xc4, 1, periph)
/* pa4_tc1wo1_out */
#define PA4_TC1WO1_OUT   MCHP_PINMUX(a, 4, 0x224, 20, periph)
/* pa4_tc2wo0g3_in */
#define PA4_TC2WO0G3_IN  MCHP_PINMUX(a, 4, 0xcc, 8, periph)
/* pa4_tc2wo0_out */
#define PA4_TC2WO0_OUT   MCHP_PINMUX(a, 4, 0x228, 21, periph)
/* pa4_tc2wo1g2_in */
#define PA4_TC2WO1G2_IN  MCHP_PINMUX(a, 4, 0xd0, 1, periph)
/* pa4_tc2wo1_out */
#define PA4_TC2WO1_OUT   MCHP_PINMUX(a, 4, 0x224, 21, periph)
/* pa4_tc3wo0g3_in */
#define PA4_TC3WO0G3_IN  MCHP_PINMUX(a, 4, 0xdc, 8, periph)
/* pa4_tc3wo0_out */
#define PA4_TC3WO0_OUT   MCHP_PINMUX(a, 4, 0x228, 22, periph)
/* pa4_tc3wo1g2_in */
#define PA4_TC3WO1G2_IN  MCHP_PINMUX(a, 4, 0xe0, 1, periph)
/* pa4_tc3wo1_out */
#define PA4_TC3WO1_OUT   MCHP_PINMUX(a, 4, 0x224, 22, periph)
/* pa4_tcc0wo0_out */
#define PA4_TCC0WO0_OUT  MCHP_PINMUX(a, 4, 0x228, 12, periph)
/* pa4_tcc0wo1_out */
#define PA4_TCC0WO1_OUT  MCHP_PINMUX(a, 4, 0x224, 11, periph)
/* pa4_tcc0wo2_out */
#define PA4_TCC0WO2_OUT  MCHP_PINMUX(a, 4, 0x228, 11, periph)
/* pa4_tcc0wo3_out */
#define PA4_TCC0WO3_OUT  MCHP_PINMUX(a, 4, 0x224, 13, periph)
/* pa4_tcc0wo4_out */
#define PA4_TCC0WO4_OUT  MCHP_PINMUX(a, 4, 0x228, 13, periph)
/* pa4_tcc0wo5_out */
#define PA4_TCC0WO5_OUT  MCHP_PINMUX(a, 4, 0x224, 12, periph)
/* pa4_tcc1wo0_out */
#define PA4_TCC1WO0_OUT  MCHP_PINMUX(a, 4, 0x228, 15, periph)
/* pa4_tcc1wo1_out */
#define PA4_TCC1WO1_OUT  MCHP_PINMUX(a, 4, 0x224, 14, periph)
/* pa4_tcc1wo2_out */
#define PA4_TCC1WO2_OUT  MCHP_PINMUX(a, 4, 0x228, 14, periph)
/* pa4_tcc1wo3_out */
#define PA4_TCC1WO3_OUT  MCHP_PINMUX(a, 4, 0x224, 16, periph)
/* pa4_tcc1wo4_out */
#define PA4_TCC1WO4_OUT  MCHP_PINMUX(a, 4, 0x228, 16, periph)
/* pa4_tcc1wo5_out */
#define PA4_TCC1WO5_OUT  MCHP_PINMUX(a, 4, 0x224, 15, periph)
/* pa4_tcc2wo0_out */
#define PA4_TCC2WO0_OUT  MCHP_PINMUX(a, 4, 0x228, 17, periph)
/* pa4_tcc2wo1_out */
#define PA4_TCC2WO1_OUT  MCHP_PINMUX(a, 4, 0x224, 17, periph)
/* pa5_cclin2_in */
#define PA5_CCLIN2_IN    MCHP_PINMUX(a, 5, 0xa0, 1, periph)
/* pa5_cclin5_in */
#define PA5_CCLIN5_IN    MCHP_PINMUX(a, 5, 0xac, 1, periph)
/* pa5_cclout0_out */
#define PA5_CCLOUT0_OUT  MCHP_PINMUX(a, 5, 0x230, 28, periph)
/* pa5_cclout1_out */
#define PA5_CCLOUT1_OUT  MCHP_PINMUX(a, 5, 0x238, 28, periph)
/* pa5_extint2_in */
#define PA5_EXTINT2_IN   MCHP_PINMUX(a, 5, 0x8, 1, periph)
/* pa5_extint3_in */
#define PA5_EXTINT3_IN   MCHP_PINMUX(a, 5, 0xc, 8, periph)
/* pa5_nmi_in */
#define PA5_NMI_IN       MCHP_PINMUX(a, 5, 0x3c, 8, periph)
/* pa5_qcs_out */
#define PA5_QCS_OUT      MCHP_PINMUX(a, 5, 0x230, 24, periph)
/* pa5_qd0_in */
#define PA5_QD0_IN       MCHP_PINMUX(a, 5, 0x84, 8, periph)
/* pa5_qd0_out */
#define PA5_QD0_OUT      MCHP_PINMUX(a, 5, 0x234, 26, periph)
/* pa5_qd1_out */
#define PA5_QD1_OUT      MCHP_PINMUX(a, 5, 0x230, 27, periph)
/* pa5_qd2_out */
#define PA5_QD2_OUT      MCHP_PINMUX(a, 5, 0x230, 26, periph)
/* pa5_qd3_in */
#define PA5_QD3_IN       MCHP_PINMUX(a, 5, 0x90, 1, periph)
/* pa5_qd3_out */
#define PA5_QD3_OUT      MCHP_PINMUX(a, 5, 0x230, 25, periph)
/* pa5_qsck_out */
#define PA5_QSCK_OUT     MCHP_PINMUX(a, 5, 0x230, 23, periph)
/* pa5_refo1_out */
#define PA5_REFO1_OUT    MCHP_PINMUX(a, 5, 0x230, 19, periph)
/* pa5_refo3_out */
#define PA5_REFO3_OUT    MCHP_PINMUX(a, 5, 0x234, 19, periph)
/* pa5_refo4_out */
#define PA5_REFO4_OUT    MCHP_PINMUX(a, 5, 0x238, 19, periph)
/* pa5_scom0p0_out */
#define PA5_SCOM0P0_OUT  MCHP_PINMUX(a, 5, 0x234, 2, periph)
/* pa5_scom0p1_in */
#define PA5_SCOM0P1_IN   MCHP_PINMUX(a, 5, 0x44, 1, periph)
/* pa5_scom0p1_out */
#define PA5_SCOM0P1_OUT  MCHP_PINMUX(a, 5, 0x230, 3, periph)
/* pa5_scom0p2_in */
#define PA5_SCOM0P2_IN   MCHP_PINMUX(a, 5, 0x48, 8, periph)
/* pa5_scom0p2_out */
#define PA5_SCOM0P2_OUT  MCHP_PINMUX(a, 5, 0x230, 2, periph)
/* pa5_scom0p3_out */
#define PA5_SCOM0P3_OUT  MCHP_PINMUX(a, 5, 0x230, 1, periph)
/* pa5_scom1p0_in */
#define PA5_SCOM1P0_IN   MCHP_PINMUX(a, 5, 0x50, 1, periph)
/* pa5_scom1p0_out */
#define PA5_SCOM1P0_OUT  MCHP_PINMUX(a, 5, 0x230, 4, periph)
/* pa5_scom1p1_in */
#define PA5_SCOM1P1_IN   MCHP_PINMUX(a, 5, 0x54, 8, periph)
/* pa5_scom1p1_out */
#define PA5_SCOM1P1_OUT  MCHP_PINMUX(a, 5, 0x230, 6, periph)
/* pa5_scom1p2_out */
#define PA5_SCOM1P2_OUT  MCHP_PINMUX(a, 5, 0x230, 5, periph)
/* pa5_scom1p3_out */
#define PA5_SCOM1P3_OUT  MCHP_PINMUX(a, 5, 0x234, 6, periph)
/* pa5_tc0wo0_out */
#define PA5_TC0WO0_OUT   MCHP_PINMUX(a, 5, 0x234, 18, periph)
/* pa5_tc0wo1g3_in */
#define PA5_TC0WO1G3_IN  MCHP_PINMUX(a, 5, 0xb8, 1, periph)
/* pa5_tc0wo1g4_in */
#define PA5_TC0WO1G4_IN  MCHP_PINMUX(a, 5, 0xbc, 8, periph)
/* pa5_tc0wo1_out */
#define PA5_TC0WO1_OUT   MCHP_PINMUX(a, 5, 0x230, 18, periph)
/* pa5_tc1wo0_out */
#define PA5_TC1WO0_OUT   MCHP_PINMUX(a, 5, 0x230, 20, periph)
/* pa5_tc1wo1_out */
#define PA5_TC1WO1_OUT   MCHP_PINMUX(a, 5, 0x238, 20, periph)
/* pa5_tc2wo0g3_in */
#define PA5_TC2WO0G3_IN  MCHP_PINMUX(a, 5, 0xcc, 1, periph)
/* pa5_tc2wo0_out */
#define PA5_TC2WO0_OUT   MCHP_PINMUX(a, 5, 0x230, 21, periph)
/* pa5_tc2wo1g4_in */
#define PA5_TC2WO1G4_IN  MCHP_PINMUX(a, 5, 0xd4, 8, periph)
/* pa5_tc2wo1_out */
#define PA5_TC2WO1_OUT   MCHP_PINMUX(a, 5, 0x238, 21, periph)
/* pa5_tc3wo0g3_in */
#define PA5_TC3WO0G3_IN  MCHP_PINMUX(a, 5, 0xdc, 1, periph)
/* pa5_tc3wo0_out */
#define PA5_TC3WO0_OUT   MCHP_PINMUX(a, 5, 0x230, 22, periph)
/* pa5_tc3wo1g4_in */
#define PA5_TC3WO1G4_IN  MCHP_PINMUX(a, 5, 0xe4, 8, periph)
/* pa5_tc3wo1_out */
#define PA5_TC3WO1_OUT   MCHP_PINMUX(a, 5, 0x238, 22, periph)
/* pa5_tcc0wo0_out */
#define PA5_TCC0WO0_OUT  MCHP_PINMUX(a, 5, 0x230, 11, periph)
/* pa5_tcc0wo1_out */
#define PA5_TCC0WO1_OUT  MCHP_PINMUX(a, 5, 0x238, 12, periph)
/* pa5_tcc0wo2_out */
#define PA5_TCC0WO2_OUT  MCHP_PINMUX(a, 5, 0x230, 13, periph)
/* pa5_tcc0wo3_out */
#define PA5_TCC0WO3_OUT  MCHP_PINMUX(a, 5, 0x238, 11, periph)
/* pa5_tcc0wo4_out */
#define PA5_TCC0WO4_OUT  MCHP_PINMUX(a, 5, 0x230, 12, periph)
/* pa5_tcc0wo5_out */
#define PA5_TCC0WO5_OUT  MCHP_PINMUX(a, 5, 0x238, 13, periph)
/* pa5_tcc1wo0_out */
#define PA5_TCC1WO0_OUT  MCHP_PINMUX(a, 5, 0x230, 14, periph)
/* pa5_tcc1wo1_out */
#define PA5_TCC1WO1_OUT  MCHP_PINMUX(a, 5, 0x238, 15, periph)
/* pa5_tcc1wo2_out */
#define PA5_TCC1WO2_OUT  MCHP_PINMUX(a, 5, 0x230, 16, periph)
/* pa5_tcc1wo3_out */
#define PA5_TCC1WO3_OUT  MCHP_PINMUX(a, 5, 0x238, 14, periph)
/* pa5_tcc1wo4_out */
#define PA5_TCC1WO4_OUT  MCHP_PINMUX(a, 5, 0x230, 15, periph)
/* pa5_tcc1wo5_out */
#define PA5_TCC1WO5_OUT  MCHP_PINMUX(a, 5, 0x238, 16, periph)
/* pa5_tcc2wo0_out */
#define PA5_TCC2WO0_OUT  MCHP_PINMUX(a, 5, 0x230, 17, periph)
/* pa5_tcc2wo1_out */
#define PA5_TCC2WO1_OUT  MCHP_PINMUX(a, 5, 0x238, 17, periph)
/* pa6_cclin0_in */
#define PA6_CCLIN0_IN    MCHP_PINMUX(a, 6, 0x98, 9, periph)
/* pa6_cclin3_in */
#define PA6_CCLIN3_IN    MCHP_PINMUX(a, 6, 0xa4, 9, periph)
/* pa6_cclout0_out */
#define PA6_CCLOUT0_OUT  MCHP_PINMUX(a, 6, 0x23c, 28, periph)
/* pa6_cclout1_out */
#define PA6_CCLOUT1_OUT  MCHP_PINMUX(a, 6, 0x240, 28, periph)
/* pa6_extint0_in */
#define PA6_EXTINT0_IN   MCHP_PINMUX(a, 6, 0x0, 9, periph)
/* pa6_extint3_in */
#define PA6_EXTINT3_IN   MCHP_PINMUX(a, 6, 0xc, 1, periph)
/* pa6_nmi_in */
#define PA6_NMI_IN       MCHP_PINMUX(a, 6, 0x3c, 1, periph)
/* pa6_qcs_out */
#define PA6_QCS_OUT      MCHP_PINMUX(a, 6, 0x23c, 24, periph)
/* pa6_qd0_in */
#define PA6_QD0_IN       MCHP_PINMUX(a, 6, 0x84, 1, periph)
/* pa6_qd0_out */
#define PA6_QD0_OUT      MCHP_PINMUX(a, 6, 0x240, 25, periph)
/* pa6_qd1_in */
#define PA6_QD1_IN       MCHP_PINMUX(a, 6, 0x88, 9, periph)
/* pa6_qd1_out */
#define PA6_QD1_OUT      MCHP_PINMUX(a, 6, 0x23c, 27, periph)
/* pa6_qd2_out */
#define PA6_QD2_OUT      MCHP_PINMUX(a, 6, 0x23c, 26, periph)
/* pa6_qd3_out */
#define PA6_QD3_OUT      MCHP_PINMUX(a, 6, 0x23c, 25, periph)
/* pa6_qsck_in */
#define PA6_QSCK_IN      MCHP_PINMUX(a, 6, 0x80, 9, periph)
/* pa6_qsck_out */
#define PA6_QSCK_OUT     MCHP_PINMUX(a, 6, 0x23c, 23, periph)
/* pa6_refi_in */
#define PA6_REFI_IN      MCHP_PINMUX(a, 6, 0x94, 9, periph)
/* pa6_refo1_out */
#define PA6_REFO1_OUT    MCHP_PINMUX(a, 6, 0x23c, 19, periph)
/* pa6_refo2_out */
#define PA6_REFO2_OUT    MCHP_PINMUX(a, 6, 0x240, 19, periph)
/* pa6_refo4_out */
#define PA6_REFO4_OUT    MCHP_PINMUX(a, 6, 0x244, 19, periph)
/* pa6_scom0p0_out */
#define PA6_SCOM0P0_OUT  MCHP_PINMUX(a, 6, 0x240, 1, periph)
/* pa6_scom0p1_out */
#define PA6_SCOM0P1_OUT  MCHP_PINMUX(a, 6, 0x23c, 3, periph)
/* pa6_scom0p2_in */
#define PA6_SCOM0P2_IN   MCHP_PINMUX(a, 6, 0x48, 1, periph)
/* pa6_scom0p2_out */
#define PA6_SCOM0P2_OUT  MCHP_PINMUX(a, 6, 0x23c, 2, periph)
/* pa6_scom0p3_in */
#define PA6_SCOM0P3_IN   MCHP_PINMUX(a, 6, 0x4c, 9, periph)
/* pa6_scom0p3_out */
#define PA6_SCOM0P3_OUT  MCHP_PINMUX(a, 6, 0x23c, 1, periph)
/* pa6_scom1p0_out */
#define PA6_SCOM1P0_OUT  MCHP_PINMUX(a, 6, 0x23c, 4, periph)
/* pa6_scom1p1_in */
#define PA6_SCOM1P1_IN   MCHP_PINMUX(a, 6, 0x54, 1, periph)
/* pa6_scom1p1_out */
#define PA6_SCOM1P1_OUT  MCHP_PINMUX(a, 6, 0x23c, 6, periph)
/* pa6_scom1p2_in */
#define PA6_SCOM1P2_IN   MCHP_PINMUX(a, 6, 0x58, 9, periph)
/* pa6_scom1p2_out */
#define PA6_SCOM1P2_OUT  MCHP_PINMUX(a, 6, 0x23c, 5, periph)
/* pa6_scom1p3_out */
#define PA6_SCOM1P3_OUT  MCHP_PINMUX(a, 6, 0x240, 5, periph)
/* pa6_tc0wo0g1_in */
#define PA6_TC0WO0G1_IN  MCHP_PINMUX(a, 6, 0xb0, 9, periph)
/* pa6_tc0wo0_out */
#define PA6_TC0WO0_OUT   MCHP_PINMUX(a, 6, 0x244, 18, periph)
/* pa6_tc0wo1g4_in */
#define PA6_TC0WO1G4_IN  MCHP_PINMUX(a, 6, 0xbc, 1, periph)
/* pa6_tc0wo1_out */
#define PA6_TC0WO1_OUT   MCHP_PINMUX(a, 6, 0x23c, 18, periph)
/* pa6_tc1wo0g1_in */
#define PA6_TC1WO0G1_IN  MCHP_PINMUX(a, 6, 0xc0, 9, periph)
/* pa6_tc1wo0_out */
#define PA6_TC1WO0_OUT   MCHP_PINMUX(a, 6, 0x23c, 20, periph)
/* pa6_tc1wo1_out */
#define PA6_TC1WO1_OUT   MCHP_PINMUX(a, 6, 0x240, 20, periph)
/* pa6_tc2wo0g1_in */
#define PA6_TC2WO0G1_IN  MCHP_PINMUX(a, 6, 0xc8, 9, periph)
/* pa6_tc2wo0_out */
#define PA6_TC2WO0_OUT   MCHP_PINMUX(a, 6, 0x23c, 21, periph)
/* pa6_tc2wo1g4_in */
#define PA6_TC2WO1G4_IN  MCHP_PINMUX(a, 6, 0xd4, 1, periph)
/* pa6_tc2wo1_out */
#define PA6_TC2WO1_OUT   MCHP_PINMUX(a, 6, 0x240, 21, periph)
/* pa6_tc3wo0g1_in */
#define PA6_TC3WO0G1_IN  MCHP_PINMUX(a, 6, 0xd8, 9, periph)
/* pa6_tc3wo0_out */
#define PA6_TC3WO0_OUT   MCHP_PINMUX(a, 6, 0x23c, 22, periph)
/* pa6_tc3wo1g4_in */
#define PA6_TC3WO1G4_IN  MCHP_PINMUX(a, 6, 0xe4, 1, periph)
/* pa6_tc3wo1_out */
#define PA6_TC3WO1_OUT   MCHP_PINMUX(a, 6, 0x240, 22, periph)
/* pa6_tcc0wo0_out */
#define PA6_TCC0WO0_OUT  MCHP_PINMUX(a, 6, 0x23c, 11, periph)
/* pa6_tcc0wo1_out */
#define PA6_TCC0WO1_OUT  MCHP_PINMUX(a, 6, 0x240, 11, periph)
/* pa6_tcc0wo2_out */
#define PA6_TCC0WO2_OUT  MCHP_PINMUX(a, 6, 0x23c, 13, periph)
/* pa6_tcc0wo3_out */
#define PA6_TCC0WO3_OUT  MCHP_PINMUX(a, 6, 0x240, 13, periph)
/* pa6_tcc0wo4_out */
#define PA6_TCC0WO4_OUT  MCHP_PINMUX(a, 6, 0x23c, 12, periph)
/* pa6_tcc0wo5_out */
#define PA6_TCC0WO5_OUT  MCHP_PINMUX(a, 6, 0x240, 12, periph)
/* pa6_tcc1wo0_out */
#define PA6_TCC1WO0_OUT  MCHP_PINMUX(a, 6, 0x23c, 14, periph)
/* pa6_tcc1wo1_out */
#define PA6_TCC1WO1_OUT  MCHP_PINMUX(a, 6, 0x240, 14, periph)
/* pa6_tcc1wo2_out */
#define PA6_TCC1WO2_OUT  MCHP_PINMUX(a, 6, 0x23c, 16, periph)
/* pa6_tcc1wo3_out */
#define PA6_TCC1WO3_OUT  MCHP_PINMUX(a, 6, 0x240, 16, periph)
/* pa6_tcc1wo4_out */
#define PA6_TCC1WO4_OUT  MCHP_PINMUX(a, 6, 0x23c, 15, periph)
/* pa6_tcc1wo5_out */
#define PA6_TCC1WO5_OUT  MCHP_PINMUX(a, 6, 0x240, 15, periph)
/* pa6_tcc2wo0_out */
#define PA6_TCC2WO0_OUT  MCHP_PINMUX(a, 6, 0x23c, 17, periph)
/* pa6_tcc2wo1_out */
#define PA6_TCC2WO1_OUT  MCHP_PINMUX(a, 6, 0x240, 17, periph)
/* pa7_cclin0_in */
#define PA7_CCLIN0_IN    MCHP_PINMUX(a, 7, 0x98, 2, periph)
/* pa7_cclin1_in */
#define PA7_CCLIN1_IN    MCHP_PINMUX(a, 7, 0x9c, 9, periph)
/* pa7_cclin3_in */
#define PA7_CCLIN3_IN    MCHP_PINMUX(a, 7, 0xa4, 2, periph)
/* pa7_cclin4_in */
#define PA7_CCLIN4_IN    MCHP_PINMUX(a, 7, 0xa8, 9, periph)
/* pa7_cclout0_out */
#define PA7_CCLOUT0_OUT  MCHP_PINMUX(a, 7, 0x248, 28, periph)
/* pa7_cclout1_out */
#define PA7_CCLOUT1_OUT  MCHP_PINMUX(a, 7, 0x24c, 28, periph)
/* pa7_extint0_in */
#define PA7_EXTINT0_IN   MCHP_PINMUX(a, 7, 0x0, 2, periph)
/* pa7_extint1_in */
#define PA7_EXTINT1_IN   MCHP_PINMUX(a, 7, 0x4, 9, periph)
/* pa7_qcs_out */
#define PA7_QCS_OUT      MCHP_PINMUX(a, 7, 0x248, 24, periph)
/* pa7_qd0_out */
#define PA7_QD0_OUT      MCHP_PINMUX(a, 7, 0x24c, 25, periph)
/* pa7_qd1_in */
#define PA7_QD1_IN       MCHP_PINMUX(a, 7, 0x88, 2, periph)
/* pa7_qd1_out */
#define PA7_QD1_OUT      MCHP_PINMUX(a, 7, 0x248, 27, periph)
/* pa7_qd2_in */
#define PA7_QD2_IN       MCHP_PINMUX(a, 7, 0x8c, 9, periph)
/* pa7_qd2_out */
#define PA7_QD2_OUT      MCHP_PINMUX(a, 7, 0x248, 26, periph)
/* pa7_qd3_out */
#define PA7_QD3_OUT      MCHP_PINMUX(a, 7, 0x248, 25, periph)
/* pa7_qsck_in */
#define PA7_QSCK_IN      MCHP_PINMUX(a, 7, 0x80, 2, periph)
/* pa7_qsck_out */
#define PA7_QSCK_OUT     MCHP_PINMUX(a, 7, 0x248, 23, periph)
/* pa7_refi_in */
#define PA7_REFI_IN      MCHP_PINMUX(a, 7, 0x94, 2, periph)
/* pa7_refo1_out */
#define PA7_REFO1_OUT    MCHP_PINMUX(a, 7, 0x248, 19, periph)
/* pa7_refo2_out */
#define PA7_REFO2_OUT    MCHP_PINMUX(a, 7, 0x24c, 19, periph)
/* pa7_scom0p0_in */
#define PA7_SCOM0P0_IN   MCHP_PINMUX(a, 7, 0x40, 9, periph)
/* pa7_scom0p0_out */
#define PA7_SCOM0P0_OUT  MCHP_PINMUX(a, 7, 0x24c, 1, periph)
/* pa7_scom0p1_out */
#define PA7_SCOM0P1_OUT  MCHP_PINMUX(a, 7, 0x248, 3, periph)
/* pa7_scom0p2_out */
#define PA7_SCOM0P2_OUT  MCHP_PINMUX(a, 7, 0x248, 2, periph)
/* pa7_scom0p3_in */
#define PA7_SCOM0P3_IN   MCHP_PINMUX(a, 7, 0x4c, 2, periph)
/* pa7_scom0p3_out */
#define PA7_SCOM0P3_OUT  MCHP_PINMUX(a, 7, 0x248, 1, periph)
/* pa7_scom1p0_out */
#define PA7_SCOM1P0_OUT  MCHP_PINMUX(a, 7, 0x248, 4, periph)
/* pa7_scom1p1_out */
#define PA7_SCOM1P1_OUT  MCHP_PINMUX(a, 7, 0x248, 6, periph)
/* pa7_scom1p2_in */
#define PA7_SCOM1P2_IN   MCHP_PINMUX(a, 7, 0x58, 2, periph)
/* pa7_scom1p2_out */
#define PA7_SCOM1P2_OUT  MCHP_PINMUX(a, 7, 0x248, 5, periph)
/* pa7_scom1p3_in */
#define PA7_SCOM1P3_IN   MCHP_PINMUX(a, 7, 0x5c, 9, periph)
/* pa7_scom1p3_out */
#define PA7_SCOM1P3_OUT  MCHP_PINMUX(a, 7, 0x24c, 5, periph)
/* pa7_tc0wo0g1_in */
#define PA7_TC0WO0G1_IN  MCHP_PINMUX(a, 7, 0xb0, 2, periph)
/* pa7_tc0wo0g2_in */
#define PA7_TC0WO0G2_IN  MCHP_PINMUX(a, 7, 0xb4, 9, periph)
/* pa7_tc0wo1_out */
#define PA7_TC0WO1_OUT   MCHP_PINMUX(a, 7, 0x248, 18, periph)
/* pa7_tc1wo0g1_in */
#define PA7_TC1WO0G1_IN  MCHP_PINMUX(a, 7, 0xc0, 2, periph)
/* pa7_tc1wo0_out */
#define PA7_TC1WO0_OUT   MCHP_PINMUX(a, 7, 0x248, 20, periph)
/* pa7_tc1wo1g2_in */
#define PA7_TC1WO1G2_IN  MCHP_PINMUX(a, 7, 0xc4, 9, periph)
/* pa7_tc1wo1_out */
#define PA7_TC1WO1_OUT   MCHP_PINMUX(a, 7, 0x24c, 20, periph)
/* pa7_tc2wo0g1_in */
#define PA7_TC2WO0G1_IN  MCHP_PINMUX(a, 7, 0xc8, 2, periph)
/* pa7_tc2wo0_out */
#define PA7_TC2WO0_OUT   MCHP_PINMUX(a, 7, 0x248, 21, periph)
/* pa7_tc2wo1g2_in */
#define PA7_TC2WO1G2_IN  MCHP_PINMUX(a, 7, 0xd0, 9, periph)
/* pa7_tc2wo1_out */
#define PA7_TC2WO1_OUT   MCHP_PINMUX(a, 7, 0x24c, 21, periph)
/* pa7_tc3wo0g1_in */
#define PA7_TC3WO0G1_IN  MCHP_PINMUX(a, 7, 0xd8, 2, periph)
/* pa7_tc3wo0_out */
#define PA7_TC3WO0_OUT   MCHP_PINMUX(a, 7, 0x248, 22, periph)
/* pa7_tc3wo1g2_in */
#define PA7_TC3WO1G2_IN  MCHP_PINMUX(a, 7, 0xe0, 9, periph)
/* pa7_tc3wo1_out */
#define PA7_TC3WO1_OUT   MCHP_PINMUX(a, 7, 0x24c, 22, periph)
/* pa7_tcc0wo0_out */
#define PA7_TCC0WO0_OUT  MCHP_PINMUX(a, 7, 0x248, 11, periph)
/* pa7_tcc0wo1_out */
#define PA7_TCC0WO1_OUT  MCHP_PINMUX(a, 7, 0x24c, 11, periph)
/* pa7_tcc0wo2_out */
#define PA7_TCC0WO2_OUT  MCHP_PINMUX(a, 7, 0x248, 13, periph)
/* pa7_tcc0wo3_out */
#define PA7_TCC0WO3_OUT  MCHP_PINMUX(a, 7, 0x24c, 13, periph)
/* pa7_tcc0wo4_out */
#define PA7_TCC0WO4_OUT  MCHP_PINMUX(a, 7, 0x248, 12, periph)
/* pa7_tcc0wo5_out */
#define PA7_TCC0WO5_OUT  MCHP_PINMUX(a, 7, 0x24c, 12, periph)
/* pa7_tcc1wo0_out */
#define PA7_TCC1WO0_OUT  MCHP_PINMUX(a, 7, 0x248, 14, periph)
/* pa7_tcc1wo1_out */
#define PA7_TCC1WO1_OUT  MCHP_PINMUX(a, 7, 0x24c, 14, periph)
/* pa7_tcc1wo2_out */
#define PA7_TCC1WO2_OUT  MCHP_PINMUX(a, 7, 0x248, 16, periph)
/* pa7_tcc1wo3_out */
#define PA7_TCC1WO3_OUT  MCHP_PINMUX(a, 7, 0x24c, 16, periph)
/* pa7_tcc1wo4_out */
#define PA7_TCC1WO4_OUT  MCHP_PINMUX(a, 7, 0x248, 15, periph)
/* pa7_tcc1wo5_out */
#define PA7_TCC1WO5_OUT  MCHP_PINMUX(a, 7, 0x24c, 15, periph)
/* pa7_tcc2wo0_out */
#define PA7_TCC2WO0_OUT  MCHP_PINMUX(a, 7, 0x248, 17, periph)
/* pa7_tcc2wo1_out */
#define PA7_TCC2WO1_OUT  MCHP_PINMUX(a, 7, 0x24c, 17, periph)
/* pa8_cclin1_in */
#define PA8_CCLIN1_IN    MCHP_PINMUX(a, 8, 0x9c, 2, periph)
/* pa8_cclin2_in */
#define PA8_CCLIN2_IN    MCHP_PINMUX(a, 8, 0xa0, 9, periph)
/* pa8_cclin4_in */
#define PA8_CCLIN4_IN    MCHP_PINMUX(a, 8, 0xa8, 2, periph)
/* pa8_cclin5_in */
#define PA8_CCLIN5_IN    MCHP_PINMUX(a, 8, 0xac, 9, periph)
/* pa8_cclout0_out */
#define PA8_CCLOUT0_OUT  MCHP_PINMUX(a, 8, 0x254, 28, periph)
/* pa8_cclout1_out */
#define PA8_CCLOUT1_OUT  MCHP_PINMUX(a, 8, 0x250, 28, periph)
/* pa8_extint1_in */
#define PA8_EXTINT1_IN   MCHP_PINMUX(a, 8, 0x4, 2, periph)
/* pa8_extint2_in */
#define PA8_EXTINT2_IN   MCHP_PINMUX(a, 8, 0x8, 9, periph)
/* pa8_extint3_in */
#define PA8_EXTINT3_IN   MCHP_PINMUX(a, 8, 0xc, 14, periph)
/* pa8_nmi_in */
#define PA8_NMI_IN       MCHP_PINMUX(a, 8, 0x3c, 14, periph)
/* pa8_qcs_out */
#define PA8_QCS_OUT      MCHP_PINMUX(a, 8, 0x250, 24, periph)
/* pa8_qd0_in */
#define PA8_QD0_IN       MCHP_PINMUX(a, 8, 0x84, 14, periph)
/* pa8_qd0_out */
#define PA8_QD0_OUT      MCHP_PINMUX(a, 8, 0x250, 25, periph)
/* pa8_qd1_out */
#define PA8_QD1_OUT      MCHP_PINMUX(a, 8, 0x254, 25, periph)
/* pa8_qd2_in */
#define PA8_QD2_IN       MCHP_PINMUX(a, 8, 0x8c, 2, periph)
/* pa8_qd2_out */
#define PA8_QD2_OUT      MCHP_PINMUX(a, 8, 0x250, 27, periph)
/* pa8_qd3_in */
#define PA8_QD3_IN       MCHP_PINMUX(a, 8, 0x90, 9, periph)
/* pa8_qd3_out */
#define PA8_QD3_OUT      MCHP_PINMUX(a, 8, 0x250, 26, periph)
/* pa8_qsck_out */
#define PA8_QSCK_OUT     MCHP_PINMUX(a, 8, 0x250, 23, periph)
/* pa8_refo2_out */
#define PA8_REFO2_OUT    MCHP_PINMUX(a, 8, 0x250, 19, periph)
/* pa8_refo3_out */
#define PA8_REFO3_OUT    MCHP_PINMUX(a, 8, 0x254, 19, periph)
/* pa8_refo4_out */
#define PA8_REFO4_OUT    MCHP_PINMUX(a, 8, 0x258, 19, periph)
/* pa8_scom0p0_in */
#define PA8_SCOM0P0_IN   MCHP_PINMUX(a, 8, 0x40, 2, periph)
/* pa8_scom0p0_out */
#define PA8_SCOM0P0_OUT  MCHP_PINMUX(a, 8, 0x250, 1, periph)
/* pa8_scom0p1_in */
#define PA8_SCOM0P1_IN   MCHP_PINMUX(a, 8, 0x44, 9, periph)
/* pa8_scom0p1_out */
#define PA8_SCOM0P1_OUT  MCHP_PINMUX(a, 8, 0x254, 1, periph)
/* pa8_scom0p2_in */
#define PA8_SCOM0P2_IN   MCHP_PINMUX(a, 8, 0x48, 14, periph)
/* pa8_scom0p2_out */
#define PA8_SCOM0P2_OUT  MCHP_PINMUX(a, 8, 0x250, 3, periph)
/* pa8_scom0p3_out */
#define PA8_SCOM0P3_OUT  MCHP_PINMUX(a, 8, 0x250, 2, periph)
/* pa8_scom1p0_in */
#define PA8_SCOM1P0_IN   MCHP_PINMUX(a, 8, 0x50, 9, periph)
/* pa8_scom1p0_out */
#define PA8_SCOM1P0_OUT  MCHP_PINMUX(a, 8, 0x254, 5, periph)
/* pa8_scom1p1_in */
#define PA8_SCOM1P1_IN   MCHP_PINMUX(a, 8, 0x54, 14, periph)
/* pa8_scom1p1_out */
#define PA8_SCOM1P1_OUT  MCHP_PINMUX(a, 8, 0x250, 4, periph)
/* pa8_scom1p2_out */
#define PA8_SCOM1P2_OUT  MCHP_PINMUX(a, 8, 0x250, 6, periph)
/* pa8_scom1p3_in */
#define PA8_SCOM1P3_IN   MCHP_PINMUX(a, 8, 0x5c, 2, periph)
/* pa8_scom1p3_out */
#define PA8_SCOM1P3_OUT  MCHP_PINMUX(a, 8, 0x250, 5, periph)
/* pa8_tc0wo0g2_in */
#define PA8_TC0WO0G2_IN  MCHP_PINMUX(a, 8, 0xb4, 2, periph)
/* pa8_tc0wo0_out */
#define PA8_TC0WO0_OUT   MCHP_PINMUX(a, 8, 0x254, 18, periph)
/* pa8_tc0wo1g3_in */
#define PA8_TC0WO1G3_IN  MCHP_PINMUX(a, 8, 0xb8, 9, periph)
/* pa8_tc0wo1g4_in */
#define PA8_TC0WO1G4_IN  MCHP_PINMUX(a, 8, 0xbc, 14, periph)
/* pa8_tc0wo1_out */
#define PA8_TC0WO1_OUT   MCHP_PINMUX(a, 8, 0x250, 18, periph)
/* pa8_tc1wo0_out */
#define PA8_TC1WO0_OUT   MCHP_PINMUX(a, 8, 0x254, 20, periph)
/* pa8_tc1wo1g2_in */
#define PA8_TC1WO1G2_IN  MCHP_PINMUX(a, 8, 0xc4, 2, periph)
/* pa8_tc1wo1_out */
#define PA8_TC1WO1_OUT   MCHP_PINMUX(a, 8, 0x250, 20, periph)
/* pa8_tc2wo0g3_in */
#define PA8_TC2WO0G3_IN  MCHP_PINMUX(a, 8, 0xcc, 9, periph)
/* pa8_tc2wo0_out */
#define PA8_TC2WO0_OUT   MCHP_PINMUX(a, 8, 0x254, 21, periph)
/* pa8_tc2wo1g2_in */
#define PA8_TC2WO1G2_IN  MCHP_PINMUX(a, 8, 0xd0, 2, periph)
/* pa8_tc2wo1g4_in */
#define PA8_TC2WO1G4_IN  MCHP_PINMUX(a, 8, 0xd4, 14, periph)
/* pa8_tc2wo1_out */
#define PA8_TC2WO1_OUT   MCHP_PINMUX(a, 8, 0x250, 21, periph)
/* pa8_tc3wo0g3_in */
#define PA8_TC3WO0G3_IN  MCHP_PINMUX(a, 8, 0xdc, 9, periph)
/* pa8_tc3wo0_out */
#define PA8_TC3WO0_OUT   MCHP_PINMUX(a, 8, 0x254, 22, periph)
/* pa8_tc3wo1g2_in */
#define PA8_TC3WO1G2_IN  MCHP_PINMUX(a, 8, 0xe0, 2, periph)
/* pa8_tc3wo1g4_in */
#define PA8_TC3WO1G4_IN  MCHP_PINMUX(a, 8, 0xe4, 14, periph)
/* pa8_tc3wo1_out */
#define PA8_TC3WO1_OUT   MCHP_PINMUX(a, 8, 0x250, 22, periph)
/* pa8_tcc0wo0_out */
#define PA8_TCC0WO0_OUT  MCHP_PINMUX(a, 8, 0x254, 12, periph)
/* pa8_tcc0wo1_out */
#define PA8_TCC0WO1_OUT  MCHP_PINMUX(a, 8, 0x250, 11, periph)
/* pa8_tcc0wo2_out */
#define PA8_TCC0WO2_OUT  MCHP_PINMUX(a, 8, 0x254, 11, periph)
/* pa8_tcc0wo3_out */
#define PA8_TCC0WO3_OUT  MCHP_PINMUX(a, 8, 0x250, 13, periph)
/* pa8_tcc0wo4_out */
#define PA8_TCC0WO4_OUT  MCHP_PINMUX(a, 8, 0x254, 13, periph)
/* pa8_tcc0wo5_out */
#define PA8_TCC0WO5_OUT  MCHP_PINMUX(a, 8, 0x250, 12, periph)
/* pa8_tcc1wo0_out */
#define PA8_TCC1WO0_OUT  MCHP_PINMUX(a, 8, 0x254, 15, periph)
/* pa8_tcc1wo1_out */
#define PA8_TCC1WO1_OUT  MCHP_PINMUX(a, 8, 0x250, 14, periph)
/* pa8_tcc1wo2_out */
#define PA8_TCC1WO2_OUT  MCHP_PINMUX(a, 8, 0x254, 14, periph)
/* pa8_tcc1wo3_out */
#define PA8_TCC1WO3_OUT  MCHP_PINMUX(a, 8, 0x250, 16, periph)
/* pa8_tcc1wo4_out */
#define PA8_TCC1WO4_OUT  MCHP_PINMUX(a, 8, 0x254, 16, periph)
/* pa8_tcc1wo5_out */
#define PA8_TCC1WO5_OUT  MCHP_PINMUX(a, 8, 0x250, 15, periph)
/* pa8_tcc2wo0_out */
#define PA8_TCC2WO0_OUT  MCHP_PINMUX(a, 8, 0x254, 17, periph)
/* pa8_tcc2wo1_out */
#define PA8_TCC2WO1_OUT  MCHP_PINMUX(a, 8, 0x250, 17, periph)
/* pa9_cclin0_in */
#define PA9_CCLIN0_IN    MCHP_PINMUX(a, 9, 0x98, 15, periph)
/* pa9_cclin2_in */
#define PA9_CCLIN2_IN    MCHP_PINMUX(a, 9, 0xa0, 2, periph)
/* pa9_cclin3_in */
#define PA9_CCLIN3_IN    MCHP_PINMUX(a, 9, 0xa4, 15, periph)
/* pa9_cclin5_in */
#define PA9_CCLIN5_IN    MCHP_PINMUX(a, 9, 0xac, 2, periph)
/* pa9_cclout0_out */
#define PA9_CCLOUT0_OUT  MCHP_PINMUX(a, 9, 0x25c, 28, periph)
/* pa9_cclout1_out */
#define PA9_CCLOUT1_OUT  MCHP_PINMUX(a, 9, 0x264, 28, periph)
/* pa9_extint0_in */
#define PA9_EXTINT0_IN   MCHP_PINMUX(a, 9, 0x0, 15, periph)
/* pa9_extint2_in */
#define PA9_EXTINT2_IN   MCHP_PINMUX(a, 9, 0x8, 2, periph)
/* pa9_extint3_in */
#define PA9_EXTINT3_IN   MCHP_PINMUX(a, 9, 0xc, 9, periph)
/* pa9_nmi_in */
#define PA9_NMI_IN       MCHP_PINMUX(a, 9, 0x3c, 9, periph)
/* pa9_qcs_out */
#define PA9_QCS_OUT      MCHP_PINMUX(a, 9, 0x25c, 24, periph)
/* pa9_qd0_in */
#define PA9_QD0_IN       MCHP_PINMUX(a, 9, 0x84, 9, periph)
/* pa9_qd0_out */
#define PA9_QD0_OUT      MCHP_PINMUX(a, 9, 0x260, 26, periph)
/* pa9_qd1_in */
#define PA9_QD1_IN       MCHP_PINMUX(a, 9, 0x88, 15, periph)
/* pa9_qd1_out */
#define PA9_QD1_OUT      MCHP_PINMUX(a, 9, 0x25c, 27, periph)
/* pa9_qd2_out */
#define PA9_QD2_OUT      MCHP_PINMUX(a, 9, 0x25c, 26, periph)
/* pa9_qd3_in */
#define PA9_QD3_IN       MCHP_PINMUX(a, 9, 0x90, 2, periph)
/* pa9_qd3_out */
#define PA9_QD3_OUT      MCHP_PINMUX(a, 9, 0x25c, 25, periph)
/* pa9_qsck_in */
#define PA9_QSCK_IN      MCHP_PINMUX(a, 9, 0x80, 15, periph)
/* pa9_qsck_out */
#define PA9_QSCK_OUT     MCHP_PINMUX(a, 9, 0x25c, 23, periph)
/* pa9_refi_in */
#define PA9_REFI_IN      MCHP_PINMUX(a, 9, 0x94, 15, periph)
/* pa9_refo1_out */
#define PA9_REFO1_OUT    MCHP_PINMUX(a, 9, 0x25c, 19, periph)
/* pa9_refo3_out */
#define PA9_REFO3_OUT    MCHP_PINMUX(a, 9, 0x260, 19, periph)
/* pa9_refo4_out */
#define PA9_REFO4_OUT    MCHP_PINMUX(a, 9, 0x264, 19, periph)
/* pa9_scom0p0_out */
#define PA9_SCOM0P0_OUT  MCHP_PINMUX(a, 9, 0x260, 2, periph)
/* pa9_scom0p1_in */
#define PA9_SCOM0P1_IN   MCHP_PINMUX(a, 9, 0x44, 2, periph)
/* pa9_scom0p1_out */
#define PA9_SCOM0P1_OUT  MCHP_PINMUX(a, 9, 0x25c, 3, periph)
/* pa9_scom0p2_in */
#define PA9_SCOM0P2_IN   MCHP_PINMUX(a, 9, 0x48, 9, periph)
/* pa9_scom0p2_out */
#define PA9_SCOM0P2_OUT  MCHP_PINMUX(a, 9, 0x25c, 2, periph)
/* pa9_scom0p3_in */
#define PA9_SCOM0P3_IN   MCHP_PINMUX(a, 9, 0x4c, 15, periph)
/* pa9_scom0p3_out */
#define PA9_SCOM0P3_OUT  MCHP_PINMUX(a, 9, 0x25c, 1, periph)
/* pa9_scom1p0_in */
#define PA9_SCOM1P0_IN   MCHP_PINMUX(a, 9, 0x50, 2, periph)
/* pa9_scom1p0_out */
#define PA9_SCOM1P0_OUT  MCHP_PINMUX(a, 9, 0x25c, 4, periph)
/* pa9_scom1p1_in */
#define PA9_SCOM1P1_IN   MCHP_PINMUX(a, 9, 0x54, 9, periph)
/* pa9_scom1p1_out */
#define PA9_SCOM1P1_OUT  MCHP_PINMUX(a, 9, 0x25c, 6, periph)
/* pa9_scom1p2_in */
#define PA9_SCOM1P2_IN   MCHP_PINMUX(a, 9, 0x58, 15, periph)
/* pa9_scom1p2_out */
#define PA9_SCOM1P2_OUT  MCHP_PINMUX(a, 9, 0x25c, 5, periph)
/* pa9_scom1p3_out */
#define PA9_SCOM1P3_OUT  MCHP_PINMUX(a, 9, 0x260, 6, periph)
/* pa9_tc0wo0g1_in */
#define PA9_TC0WO0G1_IN  MCHP_PINMUX(a, 9, 0xb0, 15, periph)
/* pa9_tc0wo0_out */
#define PA9_TC0WO0_OUT   MCHP_PINMUX(a, 9, 0x260, 18, periph)
/* pa9_tc0wo1g3_in */
#define PA9_TC0WO1G3_IN  MCHP_PINMUX(a, 9, 0xb8, 2, periph)
/* pa9_tc0wo1g4_in */
#define PA9_TC0WO1G4_IN  MCHP_PINMUX(a, 9, 0xbc, 9, periph)
/* pa9_tc0wo1_out */
#define PA9_TC0WO1_OUT   MCHP_PINMUX(a, 9, 0x25c, 18, periph)
/* pa9_tc1wo0g1_in */
#define PA9_TC1WO0G1_IN  MCHP_PINMUX(a, 9, 0xc0, 15, periph)
/* pa9_tc1wo0_out */
#define PA9_TC1WO0_OUT   MCHP_PINMUX(a, 9, 0x25c, 20, periph)
/* pa9_tc1wo1_out */
#define PA9_TC1WO1_OUT   MCHP_PINMUX(a, 9, 0x264, 20, periph)
/* pa9_tc2wo0g1_in */
#define PA9_TC2WO0G1_IN  MCHP_PINMUX(a, 9, 0xc8, 15, periph)
/* pa9_tc2wo0g3_in */
#define PA9_TC2WO0G3_IN  MCHP_PINMUX(a, 9, 0xcc, 2, periph)
/* pa9_tc2wo0_out */
#define PA9_TC2WO0_OUT   MCHP_PINMUX(a, 9, 0x25c, 21, periph)
/* pa9_tc2wo1g4_in */
#define PA9_TC2WO1G4_IN  MCHP_PINMUX(a, 9, 0xd4, 9, periph)
/* pa9_tc2wo1_out */
#define PA9_TC2WO1_OUT   MCHP_PINMUX(a, 9, 0x264, 21, periph)
/* pa9_tc3wo0g1_in */
#define PA9_TC3WO0G1_IN  MCHP_PINMUX(a, 9, 0xd8, 15, periph)
/* pa9_tc3wo0g3_in */
#define PA9_TC3WO0G3_IN  MCHP_PINMUX(a, 9, 0xdc, 2, periph)
/* pa9_tc3wo0_out */
#define PA9_TC3WO0_OUT   MCHP_PINMUX(a, 9, 0x25c, 22, periph)
/* pa9_tc3wo1g4_in */
#define PA9_TC3WO1G4_IN  MCHP_PINMUX(a, 9, 0xe4, 9, periph)
/* pa9_tc3wo1_out */
#define PA9_TC3WO1_OUT   MCHP_PINMUX(a, 9, 0x264, 22, periph)
/* pa9_tcc0wo0_out */
#define PA9_TCC0WO0_OUT  MCHP_PINMUX(a, 9, 0x25c, 11, periph)
/* pa9_tcc0wo1_out */
#define PA9_TCC0WO1_OUT  MCHP_PINMUX(a, 9, 0x264, 12, periph)
/* pa9_tcc0wo2_out */
#define PA9_TCC0WO2_OUT  MCHP_PINMUX(a, 9, 0x25c, 13, periph)
/* pa9_tcc0wo3_out */
#define PA9_TCC0WO3_OUT  MCHP_PINMUX(a, 9, 0x264, 11, periph)
/* pa9_tcc0wo4_out */
#define PA9_TCC0WO4_OUT  MCHP_PINMUX(a, 9, 0x25c, 12, periph)
/* pa9_tcc0wo5_out */
#define PA9_TCC0WO5_OUT  MCHP_PINMUX(a, 9, 0x264, 13, periph)
/* pa9_tcc1wo0_out */
#define PA9_TCC1WO0_OUT  MCHP_PINMUX(a, 9, 0x25c, 14, periph)
/* pa9_tcc1wo1_out */
#define PA9_TCC1WO1_OUT  MCHP_PINMUX(a, 9, 0x264, 15, periph)
/* pa9_tcc1wo2_out */
#define PA9_TCC1WO2_OUT  MCHP_PINMUX(a, 9, 0x25c, 16, periph)
/* pa9_tcc1wo3_out */
#define PA9_TCC1WO3_OUT  MCHP_PINMUX(a, 9, 0x264, 14, periph)
/* pa9_tcc1wo4_out */
#define PA9_TCC1WO4_OUT  MCHP_PINMUX(a, 9, 0x25c, 15, periph)
/* pa9_tcc1wo5_out */
#define PA9_TCC1WO5_OUT  MCHP_PINMUX(a, 9, 0x264, 16, periph)
/* pa9_tcc2wo0_out */
#define PA9_TCC2WO0_OUT  MCHP_PINMUX(a, 9, 0x25c, 17, periph)
/* pa9_tcc2wo1_out */
#define PA9_TCC2WO1_OUT  MCHP_PINMUX(a, 9, 0x264, 17, periph)
/* pa10_cclin0_in */
#define PA10_CCLIN0_IN   MCHP_PINMUX(a, 10, 0x98, 10, periph)
/* pa10_cclin3_in */
#define PA10_CCLIN3_IN   MCHP_PINMUX(a, 10, 0xa4, 10, periph)
/* pa10_cclout0_out */
#define PA10_CCLOUT0_OUT MCHP_PINMUX(a, 10, 0x268, 28, periph)
/* pa10_cclout1_out */
#define PA10_CCLOUT1_OUT MCHP_PINMUX(a, 10, 0x26c, 28, periph)
/* pa10_extint0_in */
#define PA10_EXTINT0_IN  MCHP_PINMUX(a, 10, 0x0, 10, periph)
/* pa10_extint3_in */
#define PA10_EXTINT3_IN  MCHP_PINMUX(a, 10, 0xc, 2, periph)
/* pa10_nmi_in */
#define PA10_NMI_IN      MCHP_PINMUX(a, 10, 0x3c, 2, periph)
/* pa10_qcs_out */
#define PA10_QCS_OUT     MCHP_PINMUX(a, 10, 0x268, 24, periph)
/* pa10_qd0_in */
#define PA10_QD0_IN      MCHP_PINMUX(a, 10, 0x84, 2, periph)
/* pa10_qd0_out */
#define PA10_QD0_OUT     MCHP_PINMUX(a, 10, 0x26c, 27, periph)
/* pa10_qd1_in */
#define PA10_QD1_IN      MCHP_PINMUX(a, 10, 0x88, 10, periph)
/* pa10_qd1_out */
#define PA10_QD1_OUT     MCHP_PINMUX(a, 10, 0x268, 27, periph)
/* pa10_qd2_out */
#define PA10_QD2_OUT     MCHP_PINMUX(a, 10, 0x268, 26, periph)
/* pa10_qd3_out */
#define PA10_QD3_OUT     MCHP_PINMUX(a, 10, 0x268, 25, periph)
/* pa10_qsck_in */
#define PA10_QSCK_IN     MCHP_PINMUX(a, 10, 0x80, 10, periph)
/* pa10_qsck_out */
#define PA10_QSCK_OUT    MCHP_PINMUX(a, 10, 0x268, 23, periph)
/* pa10_refi_in */
#define PA10_REFI_IN     MCHP_PINMUX(a, 10, 0x94, 10, periph)
/* pa10_refo1_out */
#define PA10_REFO1_OUT   MCHP_PINMUX(a, 10, 0x268, 19, periph)
/* pa10_refo4_out */
#define PA10_REFO4_OUT   MCHP_PINMUX(a, 10, 0x26c, 19, periph)
/* pa10_scom0p0_out */
#define PA10_SCOM0P0_OUT MCHP_PINMUX(a, 10, 0x26c, 3, periph)
/* pa10_scom0p1_out */
#define PA10_SCOM0P1_OUT MCHP_PINMUX(a, 10, 0x268, 3, periph)
/* pa10_scom0p2_in */
#define PA10_SCOM0P2_IN  MCHP_PINMUX(a, 10, 0x48, 2, periph)
/* pa10_scom0p2_out */
#define PA10_SCOM0P2_OUT MCHP_PINMUX(a, 10, 0x268, 2, periph)
/* pa10_scom0p3_in */
#define PA10_SCOM0P3_IN  MCHP_PINMUX(a, 10, 0x4c, 10, periph)
/* pa10_scom0p3_out */
#define PA10_SCOM0P3_OUT MCHP_PINMUX(a, 10, 0x268, 1, periph)
/* pa10_scom1p0_out */
#define PA10_SCOM1P0_OUT MCHP_PINMUX(a, 10, 0x268, 4, periph)
/* pa10_scom1p1_in */
#define PA10_SCOM1P1_IN  MCHP_PINMUX(a, 10, 0x54, 2, periph)
/* pa10_scom1p1_out */
#define PA10_SCOM1P1_OUT MCHP_PINMUX(a, 10, 0x268, 6, periph)
/* pa10_scom1p2_in */
#define PA10_SCOM1P2_IN  MCHP_PINMUX(a, 10, 0x58, 10, periph)
/* pa10_scom1p2_out */
#define PA10_SCOM1P2_OUT MCHP_PINMUX(a, 10, 0x268, 5, periph)
/* pa10_scom1p3_out */
#define PA10_SCOM1P3_OUT MCHP_PINMUX(a, 10, 0x26c, 4, periph)
/* pa10_tc0wo0g1_in */
#define PA10_TC0WO0G1_IN MCHP_PINMUX(a, 10, 0xb0, 10, periph)
/* pa10_tc0wo0_out */
#define PA10_TC0WO0_OUT  MCHP_PINMUX(a, 10, 0x26c, 18, periph)
/* pa10_tc0wo1g4_in */
#define PA10_TC0WO1G4_IN MCHP_PINMUX(a, 10, 0xbc, 2, periph)
/* pa10_tc0wo1_out */
#define PA10_TC0WO1_OUT  MCHP_PINMUX(a, 10, 0x268, 18, periph)
/* pa10_tc1wo0g1_in */
#define PA10_TC1WO0G1_IN MCHP_PINMUX(a, 10, 0xc0, 10, periph)
/* pa10_tc1wo0_out */
#define PA10_TC1WO0_OUT  MCHP_PINMUX(a, 10, 0x268, 20, periph)
/* pa10_tc1wo1_out */
#define PA10_TC1WO1_OUT  MCHP_PINMUX(a, 10, 0x26c, 20, periph)
/* pa10_tc2wo0g1_in */
#define PA10_TC2WO0G1_IN MCHP_PINMUX(a, 10, 0xc8, 10, periph)
/* pa10_tc2wo0_out */
#define PA10_TC2WO0_OUT  MCHP_PINMUX(a, 10, 0x268, 21, periph)
/* pa10_tc2wo1g4_in */
#define PA10_TC2WO1G4_IN MCHP_PINMUX(a, 10, 0xd4, 2, periph)
/* pa10_tc2wo1_out */
#define PA10_TC2WO1_OUT  MCHP_PINMUX(a, 10, 0x26c, 21, periph)
/* pa10_tc3wo0g1_in */
#define PA10_TC3WO0G1_IN MCHP_PINMUX(a, 10, 0xd8, 10, periph)
/* pa10_tc3wo0_out */
#define PA10_TC3WO0_OUT  MCHP_PINMUX(a, 10, 0x268, 22, periph)
/* pa10_tc3wo1g4_in */
#define PA10_TC3WO1G4_IN MCHP_PINMUX(a, 10, 0xe4, 2, periph)
/* pa10_tc3wo1_out */
#define PA10_TC3WO1_OUT  MCHP_PINMUX(a, 10, 0x26c, 22, periph)
/* pa10_tcc0wo0_out */
#define PA10_TCC0WO0_OUT MCHP_PINMUX(a, 10, 0x268, 11, periph)
/* pa10_tcc0wo1_out */
#define PA10_TCC0WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 12, periph)
/* pa10_tcc0wo2_out */
#define PA10_TCC0WO2_OUT MCHP_PINMUX(a, 10, 0x268, 13, periph)
/* pa10_tcc0wo3_out */
#define PA10_TCC0WO3_OUT MCHP_PINMUX(a, 10, 0x26c, 11, periph)
/* pa10_tcc0wo4_out */
#define PA10_TCC0WO4_OUT MCHP_PINMUX(a, 10, 0x268, 12, periph)
/* pa10_tcc0wo5_out */
#define PA10_TCC0WO5_OUT MCHP_PINMUX(a, 10, 0x26c, 13, periph)
/* pa10_tcc1wo0_out */
#define PA10_TCC1WO0_OUT MCHP_PINMUX(a, 10, 0x268, 14, periph)
/* pa10_tcc1wo1_out */
#define PA10_TCC1WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 15, periph)
/* pa10_tcc1wo2_out */
#define PA10_TCC1WO2_OUT MCHP_PINMUX(a, 10, 0x268, 16, periph)
/* pa10_tcc1wo3_out */
#define PA10_TCC1WO3_OUT MCHP_PINMUX(a, 10, 0x26c, 14, periph)
/* pa10_tcc1wo4_out */
#define PA10_TCC1WO4_OUT MCHP_PINMUX(a, 10, 0x268, 15, periph)
/* pa10_tcc1wo5_out */
#define PA10_TCC1WO5_OUT MCHP_PINMUX(a, 10, 0x26c, 16, periph)
/* pa10_tcc2wo0_out */
#define PA10_TCC2WO0_OUT MCHP_PINMUX(a, 10, 0x268, 17, periph)
/* pa10_tcc2wo1_out */
#define PA10_TCC2WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 17, periph)
/* pb4_cclin0_in */
#define PB4_CCLIN0_IN    MCHP_PINMUX(b, 4, 0x98, 5, periph)
/* pb4_cclin1_in */
#define PB4_CCLIN1_IN    MCHP_PINMUX(b, 4, 0x9c, 12, periph)
/* pb4_cclin3_in */
#define PB4_CCLIN3_IN    MCHP_PINMUX(b, 4, 0xa4, 5, periph)
/* pb4_cclin4_in */
#define PB4_CCLIN4_IN    MCHP_PINMUX(b, 4, 0xa8, 12, periph)
/* pb4_cclout0_out */
#define PB4_CCLOUT0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 28, periph)
/* pb4_cclout1_out */
#define PB4_CCLOUT1_OUT  MCHP_PINMUX(b, 4, 0x2b0, 28, periph)
/* pb4_extint0_in */
#define PB4_EXTINT0_IN   MCHP_PINMUX(b, 4, 0x0, 5, periph)
/* pb4_extint1_in */
#define PB4_EXTINT1_IN   MCHP_PINMUX(b, 4, 0x4, 12, periph)
/* pb4_qcs_out */
#define PB4_QCS_OUT      MCHP_PINMUX(b, 4, 0x2ac, 24, periph)
/* pb4_qd0_out */
#define PB4_QD0_OUT      MCHP_PINMUX(b, 4, 0x2b0, 25, periph)
/* pb4_qd1_in */
#define PB4_QD1_IN       MCHP_PINMUX(b, 4, 0x88, 5, periph)
/* pb4_qd1_out */
#define PB4_QD1_OUT      MCHP_PINMUX(b, 4, 0x2ac, 27, periph)
/* pb4_qd2_in */
#define PB4_QD2_IN       MCHP_PINMUX(b, 4, 0x8c, 12, periph)
/* pb4_qd2_out */
#define PB4_QD2_OUT      MCHP_PINMUX(b, 4, 0x2ac, 26, periph)
/* pb4_qd3_out */
#define PB4_QD3_OUT      MCHP_PINMUX(b, 4, 0x2ac, 25, periph)
/* pb4_qsck_in */
#define PB4_QSCK_IN      MCHP_PINMUX(b, 4, 0x80, 5, periph)
/* pb4_qsck_out */
#define PB4_QSCK_OUT     MCHP_PINMUX(b, 4, 0x2ac, 23, periph)
/* pb4_refi_in */
#define PB4_REFI_IN      MCHP_PINMUX(b, 4, 0x94, 5, periph)
/* pb4_refo1_out */
#define PB4_REFO1_OUT    MCHP_PINMUX(b, 4, 0x2ac, 19, periph)
/* pb4_refo2_out */
#define PB4_REFO2_OUT    MCHP_PINMUX(b, 4, 0x2b0, 19, periph)
/* pb4_scom0p0_in */
#define PB4_SCOM0P0_IN   MCHP_PINMUX(b, 4, 0x40, 12, periph)
/* pb4_scom0p0_out */
#define PB4_SCOM0P0_OUT  MCHP_PINMUX(b, 4, 0x2b0, 1, periph)
/* pb4_scom0p1_out */
#define PB4_SCOM0P1_OUT  MCHP_PINMUX(b, 4, 0x2ac, 3, periph)
/* pb4_scom0p2_out */
#define PB4_SCOM0P2_OUT  MCHP_PINMUX(b, 4, 0x2ac, 2, periph)
/* pb4_scom0p3_in */
#define PB4_SCOM0P3_IN   MCHP_PINMUX(b, 4, 0x4c, 5, periph)
/* pb4_scom0p3_out */
#define PB4_SCOM0P3_OUT  MCHP_PINMUX(b, 4, 0x2ac, 1, periph)
/* pb4_scom1p0_out */
#define PB4_SCOM1P0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 4, periph)
/* pb4_scom1p1_out */
#define PB4_SCOM1P1_OUT  MCHP_PINMUX(b, 4, 0x2ac, 6, periph)
/* pb4_scom1p2_in */
#define PB4_SCOM1P2_IN   MCHP_PINMUX(b, 4, 0x58, 5, periph)
/* pb4_scom1p2_out */
#define PB4_SCOM1P2_OUT  MCHP_PINMUX(b, 4, 0x2ac, 5, periph)
/* pb4_scom1p3_in */
#define PB4_SCOM1P3_IN   MCHP_PINMUX(b, 4, 0x5c, 12, periph)
/* pb4_scom1p3_out */
#define PB4_SCOM1P3_OUT  MCHP_PINMUX(b, 4, 0x2b0, 5, periph)
/* pb4_tc0wo0g1_in */
#define PB4_TC0WO0G1_IN  MCHP_PINMUX(b, 4, 0xb0, 5, periph)
/* pb4_tc0wo0g2_in */
#define PB4_TC0WO0G2_IN  MCHP_PINMUX(b, 4, 0xb4, 12, periph)
/* pb4_tc0wo1_out */
#define PB4_TC0WO1_OUT   MCHP_PINMUX(b, 4, 0x2ac, 18, periph)
/* pb4_tc1wo0g1_in */
#define PB4_TC1WO0G1_IN  MCHP_PINMUX(b, 4, 0xc0, 5, periph)
/* pb4_tc1wo0_out */
#define PB4_TC1WO0_OUT   MCHP_PINMUX(b, 4, 0x2ac, 20, periph)
/* pb4_tc1wo1g2_in */
#define PB4_TC1WO1G2_IN  MCHP_PINMUX(b, 4, 0xc4, 12, periph)
/* pb4_tc1wo1_out */
#define PB4_TC1WO1_OUT   MCHP_PINMUX(b, 4, 0x2b0, 20, periph)
/* pb4_tc2wo0g1_in */
#define PB4_TC2WO0G1_IN  MCHP_PINMUX(b, 4, 0xc8, 5, periph)
/* pb4_tc2wo0_out */
#define PB4_TC2WO0_OUT   MCHP_PINMUX(b, 4, 0x2ac, 21, periph)
/* pb4_tc2wo1g2_in */
#define PB4_TC2WO1G2_IN  MCHP_PINMUX(b, 4, 0xd0, 12, periph)
/* pb4_tc2wo1_out */
#define PB4_TC2WO1_OUT   MCHP_PINMUX(b, 4, 0x2b0, 21, periph)
/* pb4_tc3wo0g1_in */
#define PB4_TC3WO0G1_IN  MCHP_PINMUX(b, 4, 0xd8, 5, periph)
/* pb4_tc3wo0_out */
#define PB4_TC3WO0_OUT   MCHP_PINMUX(b, 4, 0x2ac, 22, periph)
/* pb4_tc3wo1g2_in */
#define PB4_TC3WO1G2_IN  MCHP_PINMUX(b, 4, 0xe0, 12, periph)
/* pb4_tc3wo1_out */
#define PB4_TC3WO1_OUT   MCHP_PINMUX(b, 4, 0x2b0, 22, periph)
/* pb4_tcc0wo0_out */
#define PB4_TCC0WO0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 11, periph)
/* pb4_tcc0wo1_out */
#define PB4_TCC0WO1_OUT  MCHP_PINMUX(b, 4, 0x2b0, 11, periph)
/* pb4_tcc0wo2_out */
#define PB4_TCC0WO2_OUT  MCHP_PINMUX(b, 4, 0x2ac, 13, periph)
/* pb4_tcc0wo3_out */
#define PB4_TCC0WO3_OUT  MCHP_PINMUX(b, 4, 0x2b0, 13, periph)
/* pb4_tcc0wo4_out */
#define PB4_TCC0WO4_OUT  MCHP_PINMUX(b, 4, 0x2ac, 12, periph)
/* pb4_tcc0wo5_out */
#define PB4_TCC0WO5_OUT  MCHP_PINMUX(b, 4, 0x2b0, 12, periph)
/* pb4_tcc1wo0_out */
#define PB4_TCC1WO0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 14, periph)
/* pb4_tcc1wo1_out */
#define PB4_TCC1WO1_OUT  MCHP_PINMUX(b, 4, 0x2b0, 14, periph)
/* pb4_tcc1wo2_out */
#define PB4_TCC1WO2_OUT  MCHP_PINMUX(b, 4, 0x2ac, 16, periph)
/* pb4_tcc1wo3_out */
#define PB4_TCC1WO3_OUT  MCHP_PINMUX(b, 4, 0x2b0, 16, periph)
/* pb4_tcc1wo4_out */
#define PB4_TCC1WO4_OUT  MCHP_PINMUX(b, 4, 0x2ac, 15, periph)
/* pb4_tcc1wo5_out */
#define PB4_TCC1WO5_OUT  MCHP_PINMUX(b, 4, 0x2b0, 15, periph)
/* pb4_tcc2wo0_out */
#define PB4_TCC2WO0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 17, periph)
/* pb4_tcc2wo1_out */
#define PB4_TCC2WO1_OUT  MCHP_PINMUX(b, 4, 0x2b0, 17, periph)
/* pb5_cclin1_in */
#define PB5_CCLIN1_IN    MCHP_PINMUX(b, 5, 0x9c, 5, periph)
/* pb5_cclin2_in */
#define PB5_CCLIN2_IN    MCHP_PINMUX(b, 5, 0xa0, 12, periph)
/* pb5_cclin4_in */
#define PB5_CCLIN4_IN    MCHP_PINMUX(b, 5, 0xa8, 5, periph)
/* pb5_cclin5_in */
#define PB5_CCLIN5_IN    MCHP_PINMUX(b, 5, 0xac, 12, periph)
/* pb5_cclout0_out */
#define PB5_CCLOUT0_OUT  MCHP_PINMUX(b, 5, 0x2b8, 28, periph)
/* pb5_cclout1_out */
#define PB5_CCLOUT1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 28, periph)
/* pb5_extint1_in */
#define PB5_EXTINT1_IN   MCHP_PINMUX(b, 5, 0x4, 5, periph)
/* pb5_extint2_in */
#define PB5_EXTINT2_IN   MCHP_PINMUX(b, 5, 0x8, 12, periph)
/* pb5_qcs_out */
#define PB5_QCS_OUT      MCHP_PINMUX(b, 5, 0x2b4, 24, periph)
/* pb5_qd0_out */
#define PB5_QD0_OUT      MCHP_PINMUX(b, 5, 0x2b4, 25, periph)
/* pb5_qd1_out */
#define PB5_QD1_OUT      MCHP_PINMUX(b, 5, 0x2b8, 25, periph)
/* pb5_qd2_in */
#define PB5_QD2_IN       MCHP_PINMUX(b, 5, 0x8c, 5, periph)
/* pb5_qd2_out */
#define PB5_QD2_OUT      MCHP_PINMUX(b, 5, 0x2b4, 27, periph)
/* pb5_qd3_in */
#define PB5_QD3_IN       MCHP_PINMUX(b, 5, 0x90, 12, periph)
/* pb5_qd3_out */
#define PB5_QD3_OUT      MCHP_PINMUX(b, 5, 0x2b4, 26, periph)
/* pb5_qsck_out */
#define PB5_QSCK_OUT     MCHP_PINMUX(b, 5, 0x2b4, 23, periph)
/* pb5_refo2_out */
#define PB5_REFO2_OUT    MCHP_PINMUX(b, 5, 0x2b4, 19, periph)
/* pb5_refo3_out */
#define PB5_REFO3_OUT    MCHP_PINMUX(b, 5, 0x2b8, 19, periph)
/* pb5_scom0p0_in */
#define PB5_SCOM0P0_IN   MCHP_PINMUX(b, 5, 0x40, 5, periph)
/* pb5_scom0p0_out */
#define PB5_SCOM0P0_OUT  MCHP_PINMUX(b, 5, 0x2b4, 1, periph)
/* pb5_scom0p1_in */
#define PB5_SCOM0P1_IN   MCHP_PINMUX(b, 5, 0x44, 12, periph)
/* pb5_scom0p1_out */
#define PB5_SCOM0P1_OUT  MCHP_PINMUX(b, 5, 0x2b8, 1, periph)
/* pb5_scom0p2_out */
#define PB5_SCOM0P2_OUT  MCHP_PINMUX(b, 5, 0x2b4, 3, periph)
/* pb5_scom0p3_out */
#define PB5_SCOM0P3_OUT  MCHP_PINMUX(b, 5, 0x2b4, 2, periph)
/* pb5_scom1p0_in */
#define PB5_SCOM1P0_IN   MCHP_PINMUX(b, 5, 0x50, 12, periph)
/* pb5_scom1p0_out */
#define PB5_SCOM1P0_OUT  MCHP_PINMUX(b, 5, 0x2b8, 5, periph)
/* pb5_scom1p1_out */
#define PB5_SCOM1P1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 4, periph)
/* pb5_scom1p2_out */
#define PB5_SCOM1P2_OUT  MCHP_PINMUX(b, 5, 0x2b4, 6, periph)
/* pb5_scom1p3_in */
#define PB5_SCOM1P3_IN   MCHP_PINMUX(b, 5, 0x5c, 5, periph)
/* pb5_scom1p3_out */
#define PB5_SCOM1P3_OUT  MCHP_PINMUX(b, 5, 0x2b4, 5, periph)
/* pb5_tc0wo0g2_in */
#define PB5_TC0WO0G2_IN  MCHP_PINMUX(b, 5, 0xb4, 5, periph)
/* pb5_tc0wo0_out */
#define PB5_TC0WO0_OUT   MCHP_PINMUX(b, 5, 0x2b8, 18, periph)
/* pb5_tc0wo1g3_in */
#define PB5_TC0WO1G3_IN  MCHP_PINMUX(b, 5, 0xb8, 12, periph)
/* pb5_tc0wo1_out */
#define PB5_TC0WO1_OUT   MCHP_PINMUX(b, 5, 0x2b4, 18, periph)
/* pb5_tc1wo0_out */
#define PB5_TC1WO0_OUT   MCHP_PINMUX(b, 5, 0x2b8, 20, periph)
/* pb5_tc1wo1g2_in */
#define PB5_TC1WO1G2_IN  MCHP_PINMUX(b, 5, 0xc4, 5, periph)
/* pb5_tc1wo1_out */
#define PB5_TC1WO1_OUT   MCHP_PINMUX(b, 5, 0x2b4, 20, periph)
/* pb5_tc2wo0g3_in */
#define PB5_TC2WO0G3_IN  MCHP_PINMUX(b, 5, 0xcc, 12, periph)
/* pb5_tc2wo0_out */
#define PB5_TC2WO0_OUT   MCHP_PINMUX(b, 5, 0x2b8, 21, periph)
/* pb5_tc2wo1g2_in */
#define PB5_TC2WO1G2_IN  MCHP_PINMUX(b, 5, 0xd0, 5, periph)
/* pb5_tc2wo1_out */
#define PB5_TC2WO1_OUT   MCHP_PINMUX(b, 5, 0x2b4, 21, periph)
/* pb5_tc3wo0g3_in */
#define PB5_TC3WO0G3_IN  MCHP_PINMUX(b, 5, 0xdc, 12, periph)
/* pb5_tc3wo0_out */
#define PB5_TC3WO0_OUT   MCHP_PINMUX(b, 5, 0x2b8, 22, periph)
/* pb5_tc3wo1g2_in */
#define PB5_TC3WO1G2_IN  MCHP_PINMUX(b, 5, 0xe0, 5, periph)
/* pb5_tc3wo1_out */
#define PB5_TC3WO1_OUT   MCHP_PINMUX(b, 5, 0x2b4, 22, periph)
/* pb5_tcc0wo0_out */
#define PB5_TCC0WO0_OUT  MCHP_PINMUX(b, 5, 0x2b8, 12, periph)
/* pb5_tcc0wo1_out */
#define PB5_TCC0WO1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 11, periph)
/* pb5_tcc0wo2_out */
#define PB5_TCC0WO2_OUT  MCHP_PINMUX(b, 5, 0x2b8, 11, periph)
/* pb5_tcc0wo3_out */
#define PB5_TCC0WO3_OUT  MCHP_PINMUX(b, 5, 0x2b4, 13, periph)
/* pb5_tcc0wo4_out */
#define PB5_TCC0WO4_OUT  MCHP_PINMUX(b, 5, 0x2b8, 13, periph)
/* pb5_tcc0wo5_out */
#define PB5_TCC0WO5_OUT  MCHP_PINMUX(b, 5, 0x2b4, 12, periph)
/* pb5_tcc1wo0_out */
#define PB5_TCC1WO0_OUT  MCHP_PINMUX(b, 5, 0x2b8, 15, periph)
/* pb5_tcc1wo1_out */
#define PB5_TCC1WO1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 14, periph)
/* pb5_tcc1wo2_out */
#define PB5_TCC1WO2_OUT  MCHP_PINMUX(b, 5, 0x2b8, 14, periph)
/* pb5_tcc1wo3_out */
#define PB5_TCC1WO3_OUT  MCHP_PINMUX(b, 5, 0x2b4, 16, periph)
/* pb5_tcc1wo4_out */
#define PB5_TCC1WO4_OUT  MCHP_PINMUX(b, 5, 0x2b8, 16, periph)
/* pb5_tcc1wo5_out */
#define PB5_TCC1WO5_OUT  MCHP_PINMUX(b, 5, 0x2b4, 15, periph)
/* pb5_tcc2wo0_out */
#define PB5_TCC2WO0_OUT  MCHP_PINMUX(b, 5, 0x2b8, 17, periph)
/* pb5_tcc2wo1_out */
#define PB5_TCC2WO1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 17, periph)
/* pb6_cclin2_in */
#define PB6_CCLIN2_IN    MCHP_PINMUX(b, 6, 0xa0, 5, periph)
/* pb6_cclin5_in */
#define PB6_CCLIN5_IN    MCHP_PINMUX(b, 6, 0xac, 5, periph)
/* pb6_cclout0_out */
#define PB6_CCLOUT0_OUT  MCHP_PINMUX(b, 6, 0x2bc, 28, periph)
/* pb6_cclout1_out */
#define PB6_CCLOUT1_OUT  MCHP_PINMUX(b, 6, 0x2c0, 28, periph)
/* pb6_extint2_in */
#define PB6_EXTINT2_IN   MCHP_PINMUX(b, 6, 0x8, 5, periph)
/* pb6_extint3_in */
#define PB6_EXTINT3_IN   MCHP_PINMUX(b, 6, 0xc, 12, periph)
/* pb6_nmi_in */
#define PB6_NMI_IN       MCHP_PINMUX(b, 6, 0x3c, 12, periph)
/* pb6_qcs_out */
#define PB6_QCS_OUT      MCHP_PINMUX(b, 6, 0x2bc, 24, periph)
/* pb6_qd0_in */
#define PB6_QD0_IN       MCHP_PINMUX(b, 6, 0x84, 12, periph)
/* pb6_qd0_out */
#define PB6_QD0_OUT      MCHP_PINMUX(b, 6, 0x2bc, 26, periph)
/* pb6_qd1_out */
#define PB6_QD1_OUT      MCHP_PINMUX(b, 6, 0x2bc, 25, periph)
/* pb6_qd2_out */
#define PB6_QD2_OUT      MCHP_PINMUX(b, 6, 0x2c0, 25, periph)
/* pb6_qd3_in */
#define PB6_QD3_IN       MCHP_PINMUX(b, 6, 0x90, 5, periph)
/* pb6_qd3_out */
#define PB6_QD3_OUT      MCHP_PINMUX(b, 6, 0x2bc, 27, periph)
/* pb6_qsck_out */
#define PB6_QSCK_OUT     MCHP_PINMUX(b, 6, 0x2bc, 23, periph)
/* pb6_refo3_out */
#define PB6_REFO3_OUT    MCHP_PINMUX(b, 6, 0x2bc, 19, periph)
/* pb6_refo4_out */
#define PB6_REFO4_OUT    MCHP_PINMUX(b, 6, 0x2c0, 19, periph)
/* pb6_scom0p0_out */
#define PB6_SCOM0P0_OUT  MCHP_PINMUX(b, 6, 0x2bc, 2, periph)
/* pb6_scom0p1_in */
#define PB6_SCOM0P1_IN   MCHP_PINMUX(b, 6, 0x44, 5, periph)
/* pb6_scom0p1_out */
#define PB6_SCOM0P1_OUT  MCHP_PINMUX(b, 6, 0x2bc, 1, periph)
/* pb6_scom0p2_in */
#define PB6_SCOM0P2_IN   MCHP_PINMUX(b, 6, 0x48, 12, periph)
/* pb6_scom0p2_out */
#define PB6_SCOM0P2_OUT  MCHP_PINMUX(b, 6, 0x2c0, 1, periph)
/* pb6_scom0p3_out */
#define PB6_SCOM0P3_OUT  MCHP_PINMUX(b, 6, 0x2bc, 3, periph)
/* pb6_scom1p0_in */
#define PB6_SCOM1P0_IN   MCHP_PINMUX(b, 6, 0x50, 5, periph)
/* pb6_scom1p0_out */
#define PB6_SCOM1P0_OUT  MCHP_PINMUX(b, 6, 0x2bc, 5, periph)
/* pb6_scom1p1_in */
#define PB6_SCOM1P1_IN   MCHP_PINMUX(b, 6, 0x54, 12, periph)
/* pb6_scom1p1_out */
#define PB6_SCOM1P1_OUT  MCHP_PINMUX(b, 6, 0x2c0, 5, periph)
/* pb6_scom1p2_out */
#define PB6_SCOM1P2_OUT  MCHP_PINMUX(b, 6, 0x2bc, 4, periph)
/* pb6_scom1p3_out */
#define PB6_SCOM1P3_OUT  MCHP_PINMUX(b, 6, 0x2bc, 6, periph)
/* pb6_tc0wo0_out */
#define PB6_TC0WO0_OUT   MCHP_PINMUX(b, 6, 0x2bc, 18, periph)
/* pb6_tc0wo1g3_in */
#define PB6_TC0WO1G3_IN  MCHP_PINMUX(b, 6, 0xb8, 5, periph)
/* pb6_tc0wo1g4_in */
#define PB6_TC0WO1G4_IN  MCHP_PINMUX(b, 6, 0xbc, 12, periph)
/* pb6_tc1wo0_out */
#define PB6_TC1WO0_OUT   MCHP_PINMUX(b, 6, 0x2bc, 20, periph)
/* pb6_tc1wo1_out */
#define PB6_TC1WO1_OUT   MCHP_PINMUX(b, 6, 0x2c0, 20, periph)
/* pb6_tc2wo0g3_in */
#define PB6_TC2WO0G3_IN  MCHP_PINMUX(b, 6, 0xcc, 5, periph)
/* pb6_tc2wo0_out */
#define PB6_TC2WO0_OUT   MCHP_PINMUX(b, 6, 0x2bc, 21, periph)
/* pb6_tc2wo1g4_in */
#define PB6_TC2WO1G4_IN  MCHP_PINMUX(b, 6, 0xd4, 12, periph)
/* pb6_tc2wo1_out */
#define PB6_TC2WO1_OUT   MCHP_PINMUX(b, 6, 0x2c0, 21, periph)
/* pb6_tc3wo0g3_in */
#define PB6_TC3WO0G3_IN  MCHP_PINMUX(b, 6, 0xdc, 5, periph)
/* pb6_tc3wo0_out */
#define PB6_TC3WO0_OUT   MCHP_PINMUX(b, 6, 0x2bc, 22, periph)
/* pb6_tc3wo1g4_in */
#define PB6_TC3WO1G4_IN  MCHP_PINMUX(b, 6, 0xe4, 12, periph)
/* pb6_tc3wo1_out */
#define PB6_TC3WO1_OUT   MCHP_PINMUX(b, 6, 0x2c0, 22, periph)
/* pb6_tcc0wo0_out */
#define PB6_TCC0WO0_OUT  MCHP_PINMUX(b, 6, 0x2bc, 12, periph)
/* pb6_tcc0wo1_out */
#define PB6_TCC0WO1_OUT  MCHP_PINMUX(b, 6, 0x2c0, 12, periph)
/* pb6_tcc0wo2_out */
#define PB6_TCC0WO2_OUT  MCHP_PINMUX(b, 6, 0x2bc, 11, periph)
/* pb6_tcc0wo3_out */
#define PB6_TCC0WO3_OUT  MCHP_PINMUX(b, 6, 0x2c0, 11, periph)
/* pb6_tcc0wo4_out */
#define PB6_TCC0WO4_OUT  MCHP_PINMUX(b, 6, 0x2bc, 13, periph)
/* pb6_tcc0wo5_out */
#define PB6_TCC0WO5_OUT  MCHP_PINMUX(b, 6, 0x2c0, 13, periph)
/* pb6_tcc1wo0_out */
#define PB6_TCC1WO0_OUT  MCHP_PINMUX(b, 6, 0x2bc, 15, periph)
/* pb6_tcc1wo1_out */
#define PB6_TCC1WO1_OUT  MCHP_PINMUX(b, 6, 0x2c0, 15, periph)
/* pb6_tcc1wo2_out */
#define PB6_TCC1WO2_OUT  MCHP_PINMUX(b, 6, 0x2bc, 14, periph)
/* pb6_tcc1wo3_out */
#define PB6_TCC1WO3_OUT  MCHP_PINMUX(b, 6, 0x2c0, 14, periph)
/* pb6_tcc1wo4_out */
#define PB6_TCC1WO4_OUT  MCHP_PINMUX(b, 6, 0x2bc, 16, periph)
/* pb6_tcc1wo5_out */
#define PB6_TCC1WO5_OUT  MCHP_PINMUX(b, 6, 0x2c0, 16, periph)
/* pb6_tcc2wo0_out */
#define PB6_TCC2WO0_OUT  MCHP_PINMUX(b, 6, 0x2bc, 17, periph)
/* pb6_tcc2wo1_out */
#define PB6_TCC2WO1_OUT  MCHP_PINMUX(b, 6, 0x2c0, 17, periph)
/* pb7_cclin0_in */
#define PB7_CCLIN0_IN    MCHP_PINMUX(b, 7, 0x98, 13, periph)
/* pb7_cclin3_in */
#define PB7_CCLIN3_IN    MCHP_PINMUX(b, 7, 0xa4, 13, periph)
/* pb7_cclout0_out */
#define PB7_CCLOUT0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 28, periph)
/* pb7_cclout1_out */
#define PB7_CCLOUT1_OUT  MCHP_PINMUX(b, 7, 0x2c8, 28, periph)
/* pb7_extint0_in */
#define PB7_EXTINT0_IN   MCHP_PINMUX(b, 7, 0x0, 13, periph)
/* pb7_extint3_in */
#define PB7_EXTINT3_IN   MCHP_PINMUX(b, 7, 0xc, 5, periph)
/* pb7_nmi_in */
#define PB7_NMI_IN       MCHP_PINMUX(b, 7, 0x3c, 5, periph)
/* pb7_qcs_out */
#define PB7_QCS_OUT      MCHP_PINMUX(b, 7, 0x2c4, 24, periph)
/* pb7_qd0_in */
#define PB7_QD0_IN       MCHP_PINMUX(b, 7, 0x84, 5, periph)
/* pb7_qd0_out */
#define PB7_QD0_OUT      MCHP_PINMUX(b, 7, 0x2c8, 27, periph)
/* pb7_qd1_in */
#define PB7_QD1_IN       MCHP_PINMUX(b, 7, 0x88, 13, periph)
/* pb7_qd1_out */
#define PB7_QD1_OUT      MCHP_PINMUX(b, 7, 0x2c4, 27, periph)
/* pb7_qd2_out */
#define PB7_QD2_OUT      MCHP_PINMUX(b, 7, 0x2c4, 26, periph)
/* pb7_qd3_out */
#define PB7_QD3_OUT      MCHP_PINMUX(b, 7, 0x2c4, 25, periph)
/* pb7_qsck_in */
#define PB7_QSCK_IN      MCHP_PINMUX(b, 7, 0x80, 13, periph)
/* pb7_qsck_out */
#define PB7_QSCK_OUT     MCHP_PINMUX(b, 7, 0x2c4, 23, periph)
/* pb7_refi_in */
#define PB7_REFI_IN      MCHP_PINMUX(b, 7, 0x94, 13, periph)
/* pb7_refo1_out */
#define PB7_REFO1_OUT    MCHP_PINMUX(b, 7, 0x2c4, 19, periph)
/* pb7_refo4_out */
#define PB7_REFO4_OUT    MCHP_PINMUX(b, 7, 0x2c8, 19, periph)
/* pb7_scom0p0_out */
#define PB7_SCOM0P0_OUT  MCHP_PINMUX(b, 7, 0x2c8, 3, periph)
/* pb7_scom0p1_out */
#define PB7_SCOM0P1_OUT  MCHP_PINMUX(b, 7, 0x2c4, 3, periph)
/* pb7_scom0p2_in */
#define PB7_SCOM0P2_IN   MCHP_PINMUX(b, 7, 0x48, 5, periph)
/* pb7_scom0p2_out */
#define PB7_SCOM0P2_OUT  MCHP_PINMUX(b, 7, 0x2c4, 2, periph)
/* pb7_scom0p3_in */
#define PB7_SCOM0P3_IN   MCHP_PINMUX(b, 7, 0x4c, 13, periph)
/* pb7_scom0p3_out */
#define PB7_SCOM0P3_OUT  MCHP_PINMUX(b, 7, 0x2c4, 1, periph)
/* pb7_scom1p0_out */
#define PB7_SCOM1P0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 4, periph)
/* pb7_scom1p1_in */
#define PB7_SCOM1P1_IN   MCHP_PINMUX(b, 7, 0x54, 5, periph)
/* pb7_scom1p1_out */
#define PB7_SCOM1P1_OUT  MCHP_PINMUX(b, 7, 0x2c4, 6, periph)
/* pb7_scom1p2_in */
#define PB7_SCOM1P2_IN   MCHP_PINMUX(b, 7, 0x58, 13, periph)
/* pb7_scom1p2_out */
#define PB7_SCOM1P2_OUT  MCHP_PINMUX(b, 7, 0x2c4, 5, periph)
/* pb7_scom1p3_out */
#define PB7_SCOM1P3_OUT  MCHP_PINMUX(b, 7, 0x2c8, 4, periph)
/* pb7_tc0wo0g1_in */
#define PB7_TC0WO0G1_IN  MCHP_PINMUX(b, 7, 0xb0, 13, periph)
/* pb7_tc0wo0_out */
#define PB7_TC0WO0_OUT   MCHP_PINMUX(b, 7, 0x2c8, 18, periph)
/* pb7_tc0wo1g4_in */
#define PB7_TC0WO1G4_IN  MCHP_PINMUX(b, 7, 0xbc, 5, periph)
/* pb7_tc0wo1_out */
#define PB7_TC0WO1_OUT   MCHP_PINMUX(b, 7, 0x2c4, 18, periph)
/* pb7_tc1wo0g1_in */
#define PB7_TC1WO0G1_IN  MCHP_PINMUX(b, 7, 0xc0, 13, periph)
/* pb7_tc1wo0_out */
#define PB7_TC1WO0_OUT   MCHP_PINMUX(b, 7, 0x2c4, 20, periph)
/* pb7_tc1wo1_out */
#define PB7_TC1WO1_OUT   MCHP_PINMUX(b, 7, 0x2c8, 20, periph)
/* pb7_tc2wo0g1_in */
#define PB7_TC2WO0G1_IN  MCHP_PINMUX(b, 7, 0xc8, 13, periph)
/* pb7_tc2wo0_out */
#define PB7_TC2WO0_OUT   MCHP_PINMUX(b, 7, 0x2c4, 21, periph)
/* pb7_tc2wo1g4_in */
#define PB7_TC2WO1G4_IN  MCHP_PINMUX(b, 7, 0xd4, 5, periph)
/* pb7_tc2wo1_out */
#define PB7_TC2WO1_OUT   MCHP_PINMUX(b, 7, 0x2c8, 21, periph)
/* pb7_tc3wo0g1_in */
#define PB7_TC3WO0G1_IN  MCHP_PINMUX(b, 7, 0xd8, 13, periph)
/* pb7_tc3wo0_out */
#define PB7_TC3WO0_OUT   MCHP_PINMUX(b, 7, 0x2c4, 22, periph)
/* pb7_tc3wo1g4_in */
#define PB7_TC3WO1G4_IN  MCHP_PINMUX(b, 7, 0xe4, 5, periph)
/* pb7_tc3wo1_out */
#define PB7_TC3WO1_OUT   MCHP_PINMUX(b, 7, 0x2c8, 22, periph)
/* pb7_tcc0wo0_out */
#define PB7_TCC0WO0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 11, periph)
/* pb7_tcc0wo1_out */
#define PB7_TCC0WO1_OUT  MCHP_PINMUX(b, 7, 0x2c8, 12, periph)
/* pb7_tcc0wo2_out */
#define PB7_TCC0WO2_OUT  MCHP_PINMUX(b, 7, 0x2c4, 13, periph)
/* pb7_tcc0wo3_out */
#define PB7_TCC0WO3_OUT  MCHP_PINMUX(b, 7, 0x2c8, 11, periph)
/* pb7_tcc0wo4_out */
#define PB7_TCC0WO4_OUT  MCHP_PINMUX(b, 7, 0x2c4, 12, periph)
/* pb7_tcc0wo5_out */
#define PB7_TCC0WO5_OUT  MCHP_PINMUX(b, 7, 0x2c8, 13, periph)
/* pb7_tcc1wo0_out */
#define PB7_TCC1WO0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 14, periph)
/* pb7_tcc1wo1_out */
#define PB7_TCC1WO1_OUT  MCHP_PINMUX(b, 7, 0x2c8, 15, periph)
/* pb7_tcc1wo2_out */
#define PB7_TCC1WO2_OUT  MCHP_PINMUX(b, 7, 0x2c4, 16, periph)
/* pb7_tcc1wo3_out */
#define PB7_TCC1WO3_OUT  MCHP_PINMUX(b, 7, 0x2c8, 14, periph)
/* pb7_tcc1wo4_out */
#define PB7_TCC1WO4_OUT  MCHP_PINMUX(b, 7, 0x2c4, 15, periph)
/* pb7_tcc1wo5_out */
#define PB7_TCC1WO5_OUT  MCHP_PINMUX(b, 7, 0x2c8, 16, periph)
/* pb7_tcc2wo0_out */
#define PB7_TCC2WO0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 17, periph)
/* pb7_tcc2wo1_out */
#define PB7_TCC2WO1_OUT  MCHP_PINMUX(b, 7, 0x2c8, 17, periph)
/* pb8_cclin0_in */
#define PB8_CCLIN0_IN    MCHP_PINMUX(b, 8, 0x98, 6, periph)
/* pb8_cclin1_in */
#define PB8_CCLIN1_IN    MCHP_PINMUX(b, 8, 0x9c, 13, periph)
/* pb8_cclin3_in */
#define PB8_CCLIN3_IN    MCHP_PINMUX(b, 8, 0xa4, 6, periph)
/* pb8_cclin4_in */
#define PB8_CCLIN4_IN    MCHP_PINMUX(b, 8, 0xa8, 13, periph)
/* pb8_cclout0_out */
#define PB8_CCLOUT0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 28, periph)
/* pb8_cclout1_out */
#define PB8_CCLOUT1_OUT  MCHP_PINMUX(b, 8, 0x2d0, 28, periph)
/* pb8_extint0_in */
#define PB8_EXTINT0_IN   MCHP_PINMUX(b, 8, 0x0, 6, periph)
/* pb8_extint1_in */
#define PB8_EXTINT1_IN   MCHP_PINMUX(b, 8, 0x4, 13, periph)
/* pb8_qcs_out */
#define PB8_QCS_OUT      MCHP_PINMUX(b, 8, 0x2cc, 24, periph)
/* pb8_qd0_out */
#define PB8_QD0_OUT      MCHP_PINMUX(b, 8, 0x2d0, 25, periph)
/* pb8_qd1_in */
#define PB8_QD1_IN       MCHP_PINMUX(b, 8, 0x88, 6, periph)
/* pb8_qd1_out */
#define PB8_QD1_OUT      MCHP_PINMUX(b, 8, 0x2cc, 27, periph)
/* pb8_qd2_in */
#define PB8_QD2_IN       MCHP_PINMUX(b, 8, 0x8c, 13, periph)
/* pb8_qd2_out */
#define PB8_QD2_OUT      MCHP_PINMUX(b, 8, 0x2cc, 26, periph)
/* pb8_qd3_out */
#define PB8_QD3_OUT      MCHP_PINMUX(b, 8, 0x2cc, 25, periph)
/* pb8_qsck_in */
#define PB8_QSCK_IN      MCHP_PINMUX(b, 8, 0x80, 6, periph)
/* pb8_qsck_out */
#define PB8_QSCK_OUT     MCHP_PINMUX(b, 8, 0x2cc, 23, periph)
/* pb8_refi_in */
#define PB8_REFI_IN      MCHP_PINMUX(b, 8, 0x94, 6, periph)
/* pb8_refo1_out */
#define PB8_REFO1_OUT    MCHP_PINMUX(b, 8, 0x2cc, 19, periph)
/* pb8_refo2_out */
#define PB8_REFO2_OUT    MCHP_PINMUX(b, 8, 0x2d0, 19, periph)
/* pb8_scom0p0_in */
#define PB8_SCOM0P0_IN   MCHP_PINMUX(b, 8, 0x40, 13, periph)
/* pb8_scom0p0_out */
#define PB8_SCOM0P0_OUT  MCHP_PINMUX(b, 8, 0x2d0, 1, periph)
/* pb8_scom0p1_out */
#define PB8_SCOM0P1_OUT  MCHP_PINMUX(b, 8, 0x2cc, 3, periph)
/* pb8_scom0p2_out */
#define PB8_SCOM0P2_OUT  MCHP_PINMUX(b, 8, 0x2cc, 2, periph)
/* pb8_scom0p3_in */
#define PB8_SCOM0P3_IN   MCHP_PINMUX(b, 8, 0x4c, 6, periph)
/* pb8_scom0p3_out */
#define PB8_SCOM0P3_OUT  MCHP_PINMUX(b, 8, 0x2cc, 1, periph)
/* pb8_scom1p0_out */
#define PB8_SCOM1P0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 4, periph)
/* pb8_scom1p1_out */
#define PB8_SCOM1P1_OUT  MCHP_PINMUX(b, 8, 0x2cc, 6, periph)
/* pb8_scom1p2_in */
#define PB8_SCOM1P2_IN   MCHP_PINMUX(b, 8, 0x58, 6, periph)
/* pb8_scom1p2_out */
#define PB8_SCOM1P2_OUT  MCHP_PINMUX(b, 8, 0x2cc, 5, periph)
/* pb8_scom1p3_in */
#define PB8_SCOM1P3_IN   MCHP_PINMUX(b, 8, 0x5c, 13, periph)
/* pb8_scom1p3_out */
#define PB8_SCOM1P3_OUT  MCHP_PINMUX(b, 8, 0x2d0, 5, periph)
/* pb8_tc0wo0g1_in */
#define PB8_TC0WO0G1_IN  MCHP_PINMUX(b, 8, 0xb0, 6, periph)
/* pb8_tc0wo0g2_in */
#define PB8_TC0WO0G2_IN  MCHP_PINMUX(b, 8, 0xb4, 13, periph)
/* pb8_tc0wo1_out */
#define PB8_TC0WO1_OUT   MCHP_PINMUX(b, 8, 0x2cc, 18, periph)
/* pb8_tc1wo0g1_in */
#define PB8_TC1WO0G1_IN  MCHP_PINMUX(b, 8, 0xc0, 6, periph)
/* pb8_tc1wo0_out */
#define PB8_TC1WO0_OUT   MCHP_PINMUX(b, 8, 0x2cc, 20, periph)
/* pb8_tc1wo1g2_in */
#define PB8_TC1WO1G2_IN  MCHP_PINMUX(b, 8, 0xc4, 13, periph)
/* pb8_tc1wo1_out */
#define PB8_TC1WO1_OUT   MCHP_PINMUX(b, 8, 0x2d0, 20, periph)
/* pb8_tc2wo0g1_in */
#define PB8_TC2WO0G1_IN  MCHP_PINMUX(b, 8, 0xc8, 6, periph)
/* pb8_tc2wo0_out */
#define PB8_TC2WO0_OUT   MCHP_PINMUX(b, 8, 0x2cc, 21, periph)
/* pb8_tc2wo1g2_in */
#define PB8_TC2WO1G2_IN  MCHP_PINMUX(b, 8, 0xd0, 13, periph)
/* pb8_tc2wo1_out */
#define PB8_TC2WO1_OUT   MCHP_PINMUX(b, 8, 0x2d0, 21, periph)
/* pb8_tc3wo0g1_in */
#define PB8_TC3WO0G1_IN  MCHP_PINMUX(b, 8, 0xd8, 6, periph)
/* pb8_tc3wo0_out */
#define PB8_TC3WO0_OUT   MCHP_PINMUX(b, 8, 0x2cc, 22, periph)
/* pb8_tc3wo1g2_in */
#define PB8_TC3WO1G2_IN  MCHP_PINMUX(b, 8, 0xe0, 13, periph)
/* pb8_tc3wo1_out */
#define PB8_TC3WO1_OUT   MCHP_PINMUX(b, 8, 0x2d0, 22, periph)
/* pb8_tcc0wo0_out */
#define PB8_TCC0WO0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 11, periph)
/* pb8_tcc0wo1_out */
#define PB8_TCC0WO1_OUT  MCHP_PINMUX(b, 8, 0x2d0, 11, periph)
/* pb8_tcc0wo2_out */
#define PB8_TCC0WO2_OUT  MCHP_PINMUX(b, 8, 0x2cc, 13, periph)
/* pb8_tcc0wo3_out */
#define PB8_TCC0WO3_OUT  MCHP_PINMUX(b, 8, 0x2d0, 13, periph)
/* pb8_tcc0wo4_out */
#define PB8_TCC0WO4_OUT  MCHP_PINMUX(b, 8, 0x2cc, 12, periph)
/* pb8_tcc0wo5_out */
#define PB8_TCC0WO5_OUT  MCHP_PINMUX(b, 8, 0x2d0, 12, periph)
/* pb8_tcc1wo0_out */
#define PB8_TCC1WO0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 14, periph)
/* pb8_tcc1wo1_out */
#define PB8_TCC1WO1_OUT  MCHP_PINMUX(b, 8, 0x2d0, 14, periph)
/* pb8_tcc1wo2_out */
#define PB8_TCC1WO2_OUT  MCHP_PINMUX(b, 8, 0x2cc, 16, periph)
/* pb8_tcc1wo3_out */
#define PB8_TCC1WO3_OUT  MCHP_PINMUX(b, 8, 0x2d0, 16, periph)
/* pb8_tcc1wo4_out */
#define PB8_TCC1WO4_OUT  MCHP_PINMUX(b, 8, 0x2cc, 15, periph)
/* pb8_tcc1wo5_out */
#define PB8_TCC1WO5_OUT  MCHP_PINMUX(b, 8, 0x2d0, 15, periph)
/* pb8_tcc2wo0_out */
#define PB8_TCC2WO0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 17, periph)
/* pb8_tcc2wo1_out */
#define PB8_TCC2WO1_OUT  MCHP_PINMUX(b, 8, 0x2d0, 17, periph)
/* pb9_cclin1_in */
#define PB9_CCLIN1_IN    MCHP_PINMUX(b, 9, 0x9c, 6, periph)
/* pb9_cclin2_in */
#define PB9_CCLIN2_IN    MCHP_PINMUX(b, 9, 0xa0, 13, periph)
/* pb9_cclin4_in */
#define PB9_CCLIN4_IN    MCHP_PINMUX(b, 9, 0xa8, 6, periph)
/* pb9_cclin5_in */
#define PB9_CCLIN5_IN    MCHP_PINMUX(b, 9, 0xac, 13, periph)
/* pb9_cclout0_out */
#define PB9_CCLOUT0_OUT  MCHP_PINMUX(b, 9, 0x2d8, 28, periph)
/* pb9_cclout1_out */
#define PB9_CCLOUT1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 28, periph)
/* pb9_extint1_in */
#define PB9_EXTINT1_IN   MCHP_PINMUX(b, 9, 0x4, 6, periph)
/* pb9_extint2_in */
#define PB9_EXTINT2_IN   MCHP_PINMUX(b, 9, 0x8, 13, periph)
/* pb9_qcs_out */
#define PB9_QCS_OUT      MCHP_PINMUX(b, 9, 0x2d4, 24, periph)
/* pb9_qd0_out */
#define PB9_QD0_OUT      MCHP_PINMUX(b, 9, 0x2d4, 25, periph)
/* pb9_qd1_out */
#define PB9_QD1_OUT      MCHP_PINMUX(b, 9, 0x2d8, 25, periph)
/* pb9_qd2_in */
#define PB9_QD2_IN       MCHP_PINMUX(b, 9, 0x8c, 6, periph)
/* pb9_qd2_out */
#define PB9_QD2_OUT      MCHP_PINMUX(b, 9, 0x2d4, 27, periph)
/* pb9_qd3_in */
#define PB9_QD3_IN       MCHP_PINMUX(b, 9, 0x90, 13, periph)
/* pb9_qd3_out */
#define PB9_QD3_OUT      MCHP_PINMUX(b, 9, 0x2d4, 26, periph)
/* pb9_qsck_out */
#define PB9_QSCK_OUT     MCHP_PINMUX(b, 9, 0x2d4, 23, periph)
/* pb9_refo2_out */
#define PB9_REFO2_OUT    MCHP_PINMUX(b, 9, 0x2d4, 19, periph)
/* pb9_refo3_out */
#define PB9_REFO3_OUT    MCHP_PINMUX(b, 9, 0x2d8, 19, periph)
/* pb9_scom0p0_in */
#define PB9_SCOM0P0_IN   MCHP_PINMUX(b, 9, 0x40, 6, periph)
/* pb9_scom0p0_out */
#define PB9_SCOM0P0_OUT  MCHP_PINMUX(b, 9, 0x2d4, 1, periph)
/* pb9_scom0p1_in */
#define PB9_SCOM0P1_IN   MCHP_PINMUX(b, 9, 0x44, 13, periph)
/* pb9_scom0p1_out */
#define PB9_SCOM0P1_OUT  MCHP_PINMUX(b, 9, 0x2d8, 1, periph)
/* pb9_scom0p2_out */
#define PB9_SCOM0P2_OUT  MCHP_PINMUX(b, 9, 0x2d4, 3, periph)
/* pb9_scom0p3_out */
#define PB9_SCOM0P3_OUT  MCHP_PINMUX(b, 9, 0x2d4, 2, periph)
/* pb9_scom1p0_in */
#define PB9_SCOM1P0_IN   MCHP_PINMUX(b, 9, 0x50, 13, periph)
/* pb9_scom1p0_out */
#define PB9_SCOM1P0_OUT  MCHP_PINMUX(b, 9, 0x2d8, 5, periph)
/* pb9_scom1p1_out */
#define PB9_SCOM1P1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 4, periph)
/* pb9_scom1p2_out */
#define PB9_SCOM1P2_OUT  MCHP_PINMUX(b, 9, 0x2d4, 6, periph)
/* pb9_scom1p3_in */
#define PB9_SCOM1P3_IN   MCHP_PINMUX(b, 9, 0x5c, 6, periph)
/* pb9_scom1p3_out */
#define PB9_SCOM1P3_OUT  MCHP_PINMUX(b, 9, 0x2d4, 5, periph)
/* pb9_tc0wo0g2_in */
#define PB9_TC0WO0G2_IN  MCHP_PINMUX(b, 9, 0xb4, 6, periph)
/* pb9_tc0wo0_out */
#define PB9_TC0WO0_OUT   MCHP_PINMUX(b, 9, 0x2d8, 18, periph)
/* pb9_tc0wo1g3_in */
#define PB9_TC0WO1G3_IN  MCHP_PINMUX(b, 9, 0xb8, 13, periph)
/* pb9_tc0wo1_out */
#define PB9_TC0WO1_OUT   MCHP_PINMUX(b, 9, 0x2d4, 18, periph)
/* pb9_tc1wo0_out */
#define PB9_TC1WO0_OUT   MCHP_PINMUX(b, 9, 0x2d8, 20, periph)
/* pb9_tc1wo1g2_in */
#define PB9_TC1WO1G2_IN  MCHP_PINMUX(b, 9, 0xc4, 6, periph)
/* pb9_tc1wo1_out */
#define PB9_TC1WO1_OUT   MCHP_PINMUX(b, 9, 0x2d4, 20, periph)
/* pb9_tc2wo0g3_in */
#define PB9_TC2WO0G3_IN  MCHP_PINMUX(b, 9, 0xcc, 13, periph)
/* pb9_tc2wo0_out */
#define PB9_TC2WO0_OUT   MCHP_PINMUX(b, 9, 0x2d8, 21, periph)
/* pb9_tc2wo1g2_in */
#define PB9_TC2WO1G2_IN  MCHP_PINMUX(b, 9, 0xd0, 6, periph)
/* pb9_tc2wo1_out */
#define PB9_TC2WO1_OUT   MCHP_PINMUX(b, 9, 0x2d4, 21, periph)
/* pb9_tc3wo0g3_in */
#define PB9_TC3WO0G3_IN  MCHP_PINMUX(b, 9, 0xdc, 13, periph)
/* pb9_tc3wo0_out */
#define PB9_TC3WO0_OUT   MCHP_PINMUX(b, 9, 0x2d8, 22, periph)
/* pb9_tc3wo1g2_in */
#define PB9_TC3WO1G2_IN  MCHP_PINMUX(b, 9, 0xe0, 6, periph)
/* pb9_tc3wo1_out */
#define PB9_TC3WO1_OUT   MCHP_PINMUX(b, 9, 0x2d4, 22, periph)
/* pb9_tcc0wo0_out */
#define PB9_TCC0WO0_OUT  MCHP_PINMUX(b, 9, 0x2d8, 12, periph)
/* pb9_tcc0wo1_out */
#define PB9_TCC0WO1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 11, periph)
/* pb9_tcc0wo2_out */
#define PB9_TCC0WO2_OUT  MCHP_PINMUX(b, 9, 0x2d8, 11, periph)
/* pb9_tcc0wo3_out */
#define PB9_TCC0WO3_OUT  MCHP_PINMUX(b, 9, 0x2d4, 13, periph)
/* pb9_tcc0wo4_out */
#define PB9_TCC0WO4_OUT  MCHP_PINMUX(b, 9, 0x2d8, 13, periph)
/* pb9_tcc0wo5_out */
#define PB9_TCC0WO5_OUT  MCHP_PINMUX(b, 9, 0x2d4, 12, periph)
/* pb9_tcc1wo0_out */
#define PB9_TCC1WO0_OUT  MCHP_PINMUX(b, 9, 0x2d8, 15, periph)
/* pb9_tcc1wo1_out */
#define PB9_TCC1WO1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 14, periph)
/* pb9_tcc1wo2_out */
#define PB9_TCC1WO2_OUT  MCHP_PINMUX(b, 9, 0x2d8, 14, periph)
/* pb9_tcc1wo3_out */
#define PB9_TCC1WO3_OUT  MCHP_PINMUX(b, 9, 0x2d4, 16, periph)
/* pb9_tcc1wo4_out */
#define PB9_TCC1WO4_OUT  MCHP_PINMUX(b, 9, 0x2d8, 16, periph)
/* pb9_tcc1wo5_out */
#define PB9_TCC1WO5_OUT  MCHP_PINMUX(b, 9, 0x2d4, 15, periph)
/* pb9_tcc2wo0_out */
#define PB9_TCC2WO0_OUT  MCHP_PINMUX(b, 9, 0x2d8, 17, periph)
/* pb9_tcc2wo1_out */
#define PB9_TCC2WO1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 17, periph)

#endif /* MICROCHIP_PIC32CX1012BZ24032_PINCTRL_H_ */
