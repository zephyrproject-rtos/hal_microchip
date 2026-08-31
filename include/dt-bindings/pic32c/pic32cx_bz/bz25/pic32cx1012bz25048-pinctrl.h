/*
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_PIC32CX1012BZ25048_PINCTRL_H_
#define MICROCHIP_PIC32CX1012BZ25048_PINCTRL_H_

#include <dt-bindings/pic32c/pic32cx_bz/common/mchp_pinctrl_pinmux_pic32cxbz.h>

/* Indicates that direct mode is enabled; use this macro when configuring for direct mode
 * instead of PPS.
 */
#define PIN_DIRECT_MODE  MCHP_PINMUX(direct, NA, NA, NA, directmode)
/* pa0_cclin1_in */
#define PA0_CCLIN1_IN    MCHP_PINMUX(a, 0, 0x9c, 15, periph)
/* pa0_cclin2_in */
#define PA0_CCLIN2_IN    MCHP_PINMUX(a, 0, 0xa0, 7, periph)
/* pa0_cclin4_in */
#define PA0_CCLIN4_IN    MCHP_PINMUX(a, 0, 0xa8, 15, periph)
/* pa0_cclin5_in */
#define PA0_CCLIN5_IN    MCHP_PINMUX(a, 0, 0xac, 7, periph)
/* pa0_cclout0_out */
#define PA0_CCLOUT0_OUT  MCHP_PINMUX(a, 0, 0x204, 28, periph)
/* pa0_cclout1_out */
#define PA0_CCLOUT1_OUT  MCHP_PINMUX(a, 0, 0x200, 28, periph)
/* pa0_extint1_in */
#define PA0_EXTINT1_IN   MCHP_PINMUX(a, 0, 0x4, 15, periph)
/* pa0_extint2_in */
#define PA0_EXTINT2_IN   MCHP_PINMUX(a, 0, 0x8, 7, periph)
/* pa0_qcs_out */
#define PA0_QCS_OUT      MCHP_PINMUX(a, 0, 0x200, 24, periph)
/* pa0_qd0_out */
#define PA0_QD0_OUT      MCHP_PINMUX(a, 0, 0x200, 25, periph)
/* pa0_qd1_out */
#define PA0_QD1_OUT      MCHP_PINMUX(a, 0, 0x204, 25, periph)
/* pa0_qd2_in */
#define PA0_QD2_IN       MCHP_PINMUX(a, 0, 0x8c, 15, periph)
/* pa0_qd2_out */
#define PA0_QD2_OUT      MCHP_PINMUX(a, 0, 0x200, 27, periph)
/* pa0_qd3_in */
#define PA0_QD3_IN       MCHP_PINMUX(a, 0, 0x90, 7, periph)
/* pa0_qd3_out */
#define PA0_QD3_OUT      MCHP_PINMUX(a, 0, 0x200, 26, periph)
/* pa0_qsck_out */
#define PA0_QSCK_OUT     MCHP_PINMUX(a, 0, 0x200, 23, periph)
/* pa0_refo2_out */
#define PA0_REFO2_OUT    MCHP_PINMUX(a, 0, 0x200, 19, periph)
/* pa0_refo3_out */
#define PA0_REFO3_OUT    MCHP_PINMUX(a, 0, 0x204, 19, periph)
/* pa0_scom0p0_in */
#define PA0_SCOM0P0_IN   MCHP_PINMUX(a, 0, 0x40, 15, periph)
/* pa0_scom0p0_out */
#define PA0_SCOM0P0_OUT  MCHP_PINMUX(a, 0, 0x200, 1, periph)
/* pa0_scom0p1_in */
#define PA0_SCOM0P1_IN   MCHP_PINMUX(a, 0, 0x44, 7, periph)
/* pa0_scom0p1_out */
#define PA0_SCOM0P1_OUT  MCHP_PINMUX(a, 0, 0x204, 1, periph)
/* pa0_scom0p2_out */
#define PA0_SCOM0P2_OUT  MCHP_PINMUX(a, 0, 0x200, 3, periph)
/* pa0_scom0p3_out */
#define PA0_SCOM0P3_OUT  MCHP_PINMUX(a, 0, 0x200, 2, periph)
/* pa0_scom1p0_in */
#define PA0_SCOM1P0_IN   MCHP_PINMUX(a, 0, 0x50, 7, periph)
/* pa0_scom1p0_out */
#define PA0_SCOM1P0_OUT  MCHP_PINMUX(a, 0, 0x204, 5, periph)
/* pa0_scom1p1_out */
#define PA0_SCOM1P1_OUT  MCHP_PINMUX(a, 0, 0x200, 4, periph)
/* pa0_scom1p2_out */
#define PA0_SCOM1P2_OUT  MCHP_PINMUX(a, 0, 0x200, 6, periph)
/* pa0_scom1p3_in */
#define PA0_SCOM1P3_IN   MCHP_PINMUX(a, 0, 0x5c, 15, periph)
/* pa0_scom1p3_out */
#define PA0_SCOM1P3_OUT  MCHP_PINMUX(a, 0, 0x200, 5, periph)
/* pa0_scom2p1_out */
#define PA0_SCOM2P1_OUT  MCHP_PINMUX(a, 0, 0x200, 7, periph)
/* pa0_scom2p2_in */
#define PA0_SCOM2P2_IN   MCHP_PINMUX(a, 0, 0x68, 15, periph)
/* pa0_scom2p2_out */
#define PA0_SCOM2P2_OUT  MCHP_PINMUX(a, 0, 0x200, 8, periph)
/* pa0_scom2p3_in */
#define PA0_SCOM2P3_IN   MCHP_PINMUX(a, 0, 0x6c, 7, periph)
/* pa0_scom2p3_out */
#define PA0_SCOM2P3_OUT  MCHP_PINMUX(a, 0, 0x204, 8, periph)
/* pa0_scom3p0_out */
#define PA0_SCOM3P0_OUT  MCHP_PINMUX(a, 0, 0x200, 10, periph)
/* pa0_scom3p1_in */
#define PA0_SCOM3P1_IN   MCHP_PINMUX(a, 0, 0x74, 15, periph)
/* pa0_scom3p1_out */
#define PA0_SCOM3P1_OUT  MCHP_PINMUX(a, 0, 0x200, 9, periph)
/* pa0_scom3p2_in */
#define PA0_SCOM3P2_IN   MCHP_PINMUX(a, 0, 0x78, 7, periph)
/* pa0_scom3p2_out */
#define PA0_SCOM3P2_OUT  MCHP_PINMUX(a, 0, 0x204, 9, periph)
/* pa0_tc0wo0g2_in */
#define PA0_TC0WO0G2_IN  MCHP_PINMUX(a, 0, 0xb4, 15, periph)
/* pa0_tc0wo0_out */
#define PA0_TC0WO0_OUT   MCHP_PINMUX(a, 0, 0x204, 18, periph)
/* pa0_tc0wo1g3_in */
#define PA0_TC0WO1G3_IN  MCHP_PINMUX(a, 0, 0xb8, 7, periph)
/* pa0_tc0wo1_out */
#define PA0_TC0WO1_OUT   MCHP_PINMUX(a, 0, 0x200, 18, periph)
/* pa0_tc1wo0_out */
#define PA0_TC1WO0_OUT   MCHP_PINMUX(a, 0, 0x204, 20, periph)
/* pa0_tc1wo1g2_in */
#define PA0_TC1WO1G2_IN  MCHP_PINMUX(a, 0, 0xc4, 15, periph)
/* pa0_tc1wo1_out */
#define PA0_TC1WO1_OUT   MCHP_PINMUX(a, 0, 0x200, 20, periph)
/* pa0_tc2wo0g3_in */
#define PA0_TC2WO0G3_IN  MCHP_PINMUX(a, 0, 0xcc, 7, periph)
/* pa0_tc2wo0_out */
#define PA0_TC2WO0_OUT   MCHP_PINMUX(a, 0, 0x204, 21, periph)
/* pa0_tc2wo1g2_in */
#define PA0_TC2WO1G2_IN  MCHP_PINMUX(a, 0, 0xd0, 15, periph)
/* pa0_tc2wo1_out */
#define PA0_TC2WO1_OUT   MCHP_PINMUX(a, 0, 0x200, 21, periph)
/* pa0_tc3wo0g3_in */
#define PA0_TC3WO0G3_IN  MCHP_PINMUX(a, 0, 0xdc, 7, periph)
/* pa0_tc3wo0_out */
#define PA0_TC3WO0_OUT   MCHP_PINMUX(a, 0, 0x204, 22, periph)
/* pa0_tc3wo1g2_in */
#define PA0_TC3WO1G2_IN  MCHP_PINMUX(a, 0, 0xe0, 15, periph)
/* pa0_tc3wo1_out */
#define PA0_TC3WO1_OUT   MCHP_PINMUX(a, 0, 0x200, 22, periph)
/* pa0_tcc0wo0_out */
#define PA0_TCC0WO0_OUT  MCHP_PINMUX(a, 0, 0x204, 12, periph)
/* pa0_tcc0wo1_out */
#define PA0_TCC0WO1_OUT  MCHP_PINMUX(a, 0, 0x200, 11, periph)
/* pa0_tcc0wo2_out */
#define PA0_TCC0WO2_OUT  MCHP_PINMUX(a, 0, 0x204, 11, periph)
/* pa0_tcc0wo3_out */
#define PA0_TCC0WO3_OUT  MCHP_PINMUX(a, 0, 0x200, 13, periph)
/* pa0_tcc0wo4_out */
#define PA0_TCC0WO4_OUT  MCHP_PINMUX(a, 0, 0x204, 13, periph)
/* pa0_tcc0wo5_out */
#define PA0_TCC0WO5_OUT  MCHP_PINMUX(a, 0, 0x200, 12, periph)
/* pa0_tcc1wo0_out */
#define PA0_TCC1WO0_OUT  MCHP_PINMUX(a, 0, 0x204, 15, periph)
/* pa0_tcc1wo1_out */
#define PA0_TCC1WO1_OUT  MCHP_PINMUX(a, 0, 0x200, 14, periph)
/* pa0_tcc1wo2_out */
#define PA0_TCC1WO2_OUT  MCHP_PINMUX(a, 0, 0x204, 14, periph)
/* pa0_tcc1wo3_out */
#define PA0_TCC1WO3_OUT  MCHP_PINMUX(a, 0, 0x200, 16, periph)
/* pa0_tcc1wo4_out */
#define PA0_TCC1WO4_OUT  MCHP_PINMUX(a, 0, 0x204, 16, periph)
/* pa0_tcc1wo5_out */
#define PA0_TCC1WO5_OUT  MCHP_PINMUX(a, 0, 0x200, 15, periph)
/* pa0_tcc2wo0_out */
#define PA0_TCC2WO0_OUT  MCHP_PINMUX(a, 0, 0x204, 17, periph)
/* pa0_tcc2wo1_out */
#define PA0_TCC2WO1_OUT  MCHP_PINMUX(a, 0, 0x200, 17, periph)
/* pa1_cclin2_in */
#define PA1_CCLIN2_IN    MCHP_PINMUX(a, 1, 0xa0, 15, periph)
/* pa1_cclin5_in */
#define PA1_CCLIN5_IN    MCHP_PINMUX(a, 1, 0xac, 15, periph)
/* pa1_cclout0_out */
#define PA1_CCLOUT0_OUT  MCHP_PINMUX(a, 1, 0x208, 28, periph)
/* pa1_cclout1_out */
#define PA1_CCLOUT1_OUT  MCHP_PINMUX(a, 1, 0x20c, 28, periph)
/* pa1_extint2_in */
#define PA1_EXTINT2_IN   MCHP_PINMUX(a, 1, 0x8, 15, periph)
/* pa1_extint3_in */
#define PA1_EXTINT3_IN   MCHP_PINMUX(a, 1, 0xc, 7, periph)
/* pa1_nmi_in */
#define PA1_NMI_IN       MCHP_PINMUX(a, 1, 0x3c, 7, periph)
/* pa1_qcs_out */
#define PA1_QCS_OUT      MCHP_PINMUX(a, 1, 0x208, 24, periph)
/* pa1_qd0_in */
#define PA1_QD0_IN       MCHP_PINMUX(a, 1, 0x84, 7, periph)
/* pa1_qd0_out */
#define PA1_QD0_OUT      MCHP_PINMUX(a, 1, 0x208, 26, periph)
/* pa1_qd1_out */
#define PA1_QD1_OUT      MCHP_PINMUX(a, 1, 0x208, 25, periph)
/* pa1_qd2_out */
#define PA1_QD2_OUT      MCHP_PINMUX(a, 1, 0x20c, 25, periph)
/* pa1_qd3_in */
#define PA1_QD3_IN       MCHP_PINMUX(a, 1, 0x90, 15, periph)
/* pa1_qd3_out */
#define PA1_QD3_OUT      MCHP_PINMUX(a, 1, 0x208, 27, periph)
/* pa1_qsck_out */
#define PA1_QSCK_OUT     MCHP_PINMUX(a, 1, 0x208, 23, periph)
/* pa1_refo3_out */
#define PA1_REFO3_OUT    MCHP_PINMUX(a, 1, 0x208, 19, periph)
/* pa1_refo4_out */
#define PA1_REFO4_OUT    MCHP_PINMUX(a, 1, 0x20c, 19, periph)
/* pa1_scom0p0_out */
#define PA1_SCOM0P0_OUT  MCHP_PINMUX(a, 1, 0x208, 2, periph)
/* pa1_scom0p1_in */
#define PA1_SCOM0P1_IN   MCHP_PINMUX(a, 1, 0x44, 15, periph)
/* pa1_scom0p1_out */
#define PA1_SCOM0P1_OUT  MCHP_PINMUX(a, 1, 0x208, 1, periph)
/* pa1_scom0p2_in */
#define PA1_SCOM0P2_IN   MCHP_PINMUX(a, 1, 0x48, 7, periph)
/* pa1_scom0p2_out */
#define PA1_SCOM0P2_OUT  MCHP_PINMUX(a, 1, 0x20c, 1, periph)
/* pa1_scom0p3_out */
#define PA1_SCOM0P3_OUT  MCHP_PINMUX(a, 1, 0x208, 3, periph)
/* pa1_scom1p0_in */
#define PA1_SCOM1P0_IN   MCHP_PINMUX(a, 1, 0x50, 15, periph)
/* pa1_scom1p0_out */
#define PA1_SCOM1P0_OUT  MCHP_PINMUX(a, 1, 0x208, 5, periph)
/* pa1_scom1p1_in */
#define PA1_SCOM1P1_IN   MCHP_PINMUX(a, 1, 0x54, 7, periph)
/* pa1_scom1p1_out */
#define PA1_SCOM1P1_OUT  MCHP_PINMUX(a, 1, 0x20c, 5, periph)
/* pa1_scom1p2_out */
#define PA1_SCOM1P2_OUT  MCHP_PINMUX(a, 1, 0x208, 4, periph)
/* pa1_scom1p3_out */
#define PA1_SCOM1P3_OUT  MCHP_PINMUX(a, 1, 0x208, 6, periph)
/* pa1_scom2p0_in */
#define PA1_SCOM2P0_IN   MCHP_PINMUX(a, 1, 0x60, 7, periph)
/* pa1_scom2p0_out */
#define PA1_SCOM2P0_OUT  MCHP_PINMUX(a, 1, 0x20c, 8, periph)
/* pa1_scom2p2_out */
#define PA1_SCOM2P2_OUT  MCHP_PINMUX(a, 1, 0x208, 7, periph)
/* pa1_scom2p3_in */
#define PA1_SCOM2P3_IN   MCHP_PINMUX(a, 1, 0x6c, 15, periph)
/* pa1_scom2p3_out */
#define PA1_SCOM2P3_OUT  MCHP_PINMUX(a, 1, 0x208, 8, periph)
/* pa1_scom3p1_out */
#define PA1_SCOM3P1_OUT  MCHP_PINMUX(a, 1, 0x208, 10, periph)
/* pa1_scom3p2_in */
#define PA1_SCOM3P2_IN   MCHP_PINMUX(a, 1, 0x78, 15, periph)
/* pa1_scom3p2_out */
#define PA1_SCOM3P2_OUT  MCHP_PINMUX(a, 1, 0x208, 9, periph)
/* pa1_scom3p3_in */
#define PA1_SCOM3P3_IN   MCHP_PINMUX(a, 1, 0x7c, 7, periph)
/* pa1_scom3p3_out */
#define PA1_SCOM3P3_OUT  MCHP_PINMUX(a, 1, 0x20c, 9, periph)
/* pa1_tc0wo0_out */
#define PA1_TC0WO0_OUT   MCHP_PINMUX(a, 1, 0x208, 18, periph)
/* pa1_tc0wo1g3_in */
#define PA1_TC0WO1G3_IN  MCHP_PINMUX(a, 1, 0xb8, 15, periph)
/* pa1_tc0wo1g4_in */
#define PA1_TC0WO1G4_IN  MCHP_PINMUX(a, 1, 0xbc, 7, periph)
/* pa1_tc1wo0_out */
#define PA1_TC1WO0_OUT   MCHP_PINMUX(a, 1, 0x208, 20, periph)
/* pa1_tc1wo1_out */
#define PA1_TC1WO1_OUT   MCHP_PINMUX(a, 1, 0x20c, 20, periph)
/* pa1_tc2wo0g3_in */
#define PA1_TC2WO0G3_IN  MCHP_PINMUX(a, 1, 0xcc, 15, periph)
/* pa1_tc2wo0_out */
#define PA1_TC2WO0_OUT   MCHP_PINMUX(a, 1, 0x208, 21, periph)
/* pa1_tc2wo1g4_in */
#define PA1_TC2WO1G4_IN  MCHP_PINMUX(a, 1, 0xd4, 7, periph)
/* pa1_tc2wo1_out */
#define PA1_TC2WO1_OUT   MCHP_PINMUX(a, 1, 0x20c, 21, periph)
/* pa1_tc3wo0g3_in */
#define PA1_TC3WO0G3_IN  MCHP_PINMUX(a, 1, 0xdc, 15, periph)
/* pa1_tc3wo0_out */
#define PA1_TC3WO0_OUT   MCHP_PINMUX(a, 1, 0x208, 22, periph)
/* pa1_tc3wo1g4_in */
#define PA1_TC3WO1G4_IN  MCHP_PINMUX(a, 1, 0xe4, 7, periph)
/* pa1_tc3wo1_out */
#define PA1_TC3WO1_OUT   MCHP_PINMUX(a, 1, 0x20c, 22, periph)
/* pa1_tcc0wo0_out */
#define PA1_TCC0WO0_OUT  MCHP_PINMUX(a, 1, 0x208, 12, periph)
/* pa1_tcc0wo1_out */
#define PA1_TCC0WO1_OUT  MCHP_PINMUX(a, 1, 0x20c, 12, periph)
/* pa1_tcc0wo2_out */
#define PA1_TCC0WO2_OUT  MCHP_PINMUX(a, 1, 0x208, 11, periph)
/* pa1_tcc0wo3_out */
#define PA1_TCC0WO3_OUT  MCHP_PINMUX(a, 1, 0x20c, 11, periph)
/* pa1_tcc0wo4_out */
#define PA1_TCC0WO4_OUT  MCHP_PINMUX(a, 1, 0x208, 13, periph)
/* pa1_tcc0wo5_out */
#define PA1_TCC0WO5_OUT  MCHP_PINMUX(a, 1, 0x20c, 13, periph)
/* pa1_tcc1wo0_out */
#define PA1_TCC1WO0_OUT  MCHP_PINMUX(a, 1, 0x208, 15, periph)
/* pa1_tcc1wo1_out */
#define PA1_TCC1WO1_OUT  MCHP_PINMUX(a, 1, 0x20c, 15, periph)
/* pa1_tcc1wo2_out */
#define PA1_TCC1WO2_OUT  MCHP_PINMUX(a, 1, 0x208, 14, periph)
/* pa1_tcc1wo3_out */
#define PA1_TCC1WO3_OUT  MCHP_PINMUX(a, 1, 0x20c, 14, periph)
/* pa1_tcc1wo4_out */
#define PA1_TCC1WO4_OUT  MCHP_PINMUX(a, 1, 0x208, 16, periph)
/* pa1_tcc1wo5_out */
#define PA1_TCC1WO5_OUT  MCHP_PINMUX(a, 1, 0x20c, 16, periph)
/* pa1_tcc2wo0_out */
#define PA1_TCC2WO0_OUT  MCHP_PINMUX(a, 1, 0x208, 17, periph)
/* pa1_tcc2wo1_out */
#define PA1_TCC2WO1_OUT  MCHP_PINMUX(a, 1, 0x20c, 17, periph)
/* pa2_cclin0_in */
#define PA2_CCLIN0_IN    MCHP_PINMUX(a, 2, 0x98, 8, periph)
/* pa2_cclin3_in */
#define PA2_CCLIN3_IN    MCHP_PINMUX(a, 2, 0xa4, 8, periph)
/* pa2_cclout0_out */
#define PA2_CCLOUT0_OUT  MCHP_PINMUX(a, 2, 0x210, 28, periph)
/* pa2_cclout1_out */
#define PA2_CCLOUT1_OUT  MCHP_PINMUX(a, 2, 0x214, 28, periph)
/* pa2_extint0_in */
#define PA2_EXTINT0_IN   MCHP_PINMUX(a, 2, 0x0, 8, periph)
/* pa2_extint3_in */
#define PA2_EXTINT3_IN   MCHP_PINMUX(a, 2, 0xc, 15, periph)
/* pa2_nmi_in */
#define PA2_NMI_IN       MCHP_PINMUX(a, 2, 0x3c, 15, periph)
/* pa2_qcs_out */
#define PA2_QCS_OUT      MCHP_PINMUX(a, 2, 0x210, 24, periph)
/* pa2_qd0_in */
#define PA2_QD0_IN       MCHP_PINMUX(a, 2, 0x84, 15, periph)
/* pa2_qd0_out */
#define PA2_QD0_OUT      MCHP_PINMUX(a, 2, 0x214, 27, periph)
/* pa2_qd1_in */
#define PA2_QD1_IN       MCHP_PINMUX(a, 2, 0x88, 8, periph)
/* pa2_qd1_out */
#define PA2_QD1_OUT      MCHP_PINMUX(a, 2, 0x210, 27, periph)
/* pa2_qd2_out */
#define PA2_QD2_OUT      MCHP_PINMUX(a, 2, 0x210, 26, periph)
/* pa2_qd3_out */
#define PA2_QD3_OUT      MCHP_PINMUX(a, 2, 0x210, 25, periph)
/* pa2_qsck_in */
#define PA2_QSCK_IN      MCHP_PINMUX(a, 2, 0x80, 8, periph)
/* pa2_qsck_out */
#define PA2_QSCK_OUT     MCHP_PINMUX(a, 2, 0x210, 23, periph)
/* pa2_refi_in */
#define PA2_REFI_IN      MCHP_PINMUX(a, 2, 0x94, 8, periph)
/* pa2_refo1_out */
#define PA2_REFO1_OUT    MCHP_PINMUX(a, 2, 0x210, 19, periph)
/* pa2_refo4_out */
#define PA2_REFO4_OUT    MCHP_PINMUX(a, 2, 0x214, 19, periph)
/* pa2_scom0p0_out */
#define PA2_SCOM0P0_OUT  MCHP_PINMUX(a, 2, 0x214, 3, periph)
/* pa2_scom0p1_out */
#define PA2_SCOM0P1_OUT  MCHP_PINMUX(a, 2, 0x210, 3, periph)
/* pa2_scom0p2_in */
#define PA2_SCOM0P2_IN   MCHP_PINMUX(a, 2, 0x48, 15, periph)
/* pa2_scom0p2_out */
#define PA2_SCOM0P2_OUT  MCHP_PINMUX(a, 2, 0x210, 2, periph)
/* pa2_scom0p3_in */
#define PA2_SCOM0P3_IN   MCHP_PINMUX(a, 2, 0x4c, 8, periph)
/* pa2_scom0p3_out */
#define PA2_SCOM0P3_OUT  MCHP_PINMUX(a, 2, 0x210, 1, periph)
/* pa2_scom1p0_out */
#define PA2_SCOM1P0_OUT  MCHP_PINMUX(a, 2, 0x210, 4, periph)
/* pa2_scom1p1_in */
#define PA2_SCOM1P1_IN   MCHP_PINMUX(a, 2, 0x54, 15, periph)
/* pa2_scom1p1_out */
#define PA2_SCOM1P1_OUT  MCHP_PINMUX(a, 2, 0x210, 6, periph)
/* pa2_scom1p2_in */
#define PA2_SCOM1P2_IN   MCHP_PINMUX(a, 2, 0x58, 8, periph)
/* pa2_scom1p2_out */
#define PA2_SCOM1P2_OUT  MCHP_PINMUX(a, 2, 0x210, 5, periph)
/* pa2_scom1p3_out */
#define PA2_SCOM1P3_OUT  MCHP_PINMUX(a, 2, 0x214, 4, periph)
/* pa2_scom2p0_in */
#define PA2_SCOM2P0_IN   MCHP_PINMUX(a, 2, 0x60, 15, periph)
/* pa2_scom2p0_out */
#define PA2_SCOM2P0_OUT  MCHP_PINMUX(a, 2, 0x210, 7, periph)
/* pa2_scom2p1_in */
#define PA2_SCOM2P1_IN   MCHP_PINMUX(a, 2, 0x64, 8, periph)
/* pa2_scom2p1_out */
#define PA2_SCOM2P1_OUT  MCHP_PINMUX(a, 2, 0x210, 8, periph)
/* pa2_scom2p3_out */
#define PA2_SCOM2P3_OUT  MCHP_PINMUX(a, 2, 0x214, 7, periph)
/* pa2_scom3p0_in */
#define PA2_SCOM3P0_IN   MCHP_PINMUX(a, 2, 0x70, 8, periph)
/* pa2_scom3p0_out */
#define PA2_SCOM3P0_OUT  MCHP_PINMUX(a, 2, 0x210, 9, periph)
/* pa2_scom3p2_out */
#define PA2_SCOM3P2_OUT  MCHP_PINMUX(a, 2, 0x214, 10, periph)
/* pa2_scom3p3_in */
#define PA2_SCOM3P3_IN   MCHP_PINMUX(a, 2, 0x7c, 15, periph)
/* pa2_scom3p3_out */
#define PA2_SCOM3P3_OUT  MCHP_PINMUX(a, 2, 0x210, 10, periph)
/* pa2_tc0wo0g1_in */
#define PA2_TC0WO0G1_IN  MCHP_PINMUX(a, 2, 0xb0, 8, periph)
/* pa2_tc0wo0_out */
#define PA2_TC0WO0_OUT   MCHP_PINMUX(a, 2, 0x214, 18, periph)
/* pa2_tc0wo1g4_in */
#define PA2_TC0WO1G4_IN  MCHP_PINMUX(a, 2, 0xbc, 15, periph)
/* pa2_tc0wo1_out */
#define PA2_TC0WO1_OUT   MCHP_PINMUX(a, 2, 0x210, 18, periph)
/* pa2_tc1wo0g1_in */
#define PA2_TC1WO0G1_IN  MCHP_PINMUX(a, 2, 0xc0, 8, periph)
/* pa2_tc1wo0_out */
#define PA2_TC1WO0_OUT   MCHP_PINMUX(a, 2, 0x210, 20, periph)
/* pa2_tc1wo1_out */
#define PA2_TC1WO1_OUT   MCHP_PINMUX(a, 2, 0x214, 20, periph)
/* pa2_tc2wo0g1_in */
#define PA2_TC2WO0G1_IN  MCHP_PINMUX(a, 2, 0xc8, 8, periph)
/* pa2_tc2wo0_out */
#define PA2_TC2WO0_OUT   MCHP_PINMUX(a, 2, 0x210, 21, periph)
/* pa2_tc2wo1g4_in */
#define PA2_TC2WO1G4_IN  MCHP_PINMUX(a, 2, 0xd4, 15, periph)
/* pa2_tc2wo1_out */
#define PA2_TC2WO1_OUT   MCHP_PINMUX(a, 2, 0x214, 21, periph)
/* pa2_tc3wo0g1_in */
#define PA2_TC3WO0G1_IN  MCHP_PINMUX(a, 2, 0xd8, 8, periph)
/* pa2_tc3wo0_out */
#define PA2_TC3WO0_OUT   MCHP_PINMUX(a, 2, 0x210, 22, periph)
/* pa2_tc3wo1g4_in */
#define PA2_TC3WO1G4_IN  MCHP_PINMUX(a, 2, 0xe4, 15, periph)
/* pa2_tc3wo1_out */
#define PA2_TC3WO1_OUT   MCHP_PINMUX(a, 2, 0x214, 22, periph)
/* pa2_tcc0wo0_out */
#define PA2_TCC0WO0_OUT  MCHP_PINMUX(a, 2, 0x210, 11, periph)
/* pa2_tcc0wo1_out */
#define PA2_TCC0WO1_OUT  MCHP_PINMUX(a, 2, 0x214, 12, periph)
/* pa2_tcc0wo2_out */
#define PA2_TCC0WO2_OUT  MCHP_PINMUX(a, 2, 0x210, 13, periph)
/* pa2_tcc0wo3_out */
#define PA2_TCC0WO3_OUT  MCHP_PINMUX(a, 2, 0x214, 11, periph)
/* pa2_tcc0wo4_out */
#define PA2_TCC0WO4_OUT  MCHP_PINMUX(a, 2, 0x210, 12, periph)
/* pa2_tcc0wo5_out */
#define PA2_TCC0WO5_OUT  MCHP_PINMUX(a, 2, 0x214, 13, periph)
/* pa2_tcc1wo0_out */
#define PA2_TCC1WO0_OUT  MCHP_PINMUX(a, 2, 0x210, 14, periph)
/* pa2_tcc1wo1_out */
#define PA2_TCC1WO1_OUT  MCHP_PINMUX(a, 2, 0x214, 15, periph)
/* pa2_tcc1wo2_out */
#define PA2_TCC1WO2_OUT  MCHP_PINMUX(a, 2, 0x210, 16, periph)
/* pa2_tcc1wo3_out */
#define PA2_TCC1WO3_OUT  MCHP_PINMUX(a, 2, 0x214, 14, periph)
/* pa2_tcc1wo4_out */
#define PA2_TCC1WO4_OUT  MCHP_PINMUX(a, 2, 0x210, 15, periph)
/* pa2_tcc1wo5_out */
#define PA2_TCC1WO5_OUT  MCHP_PINMUX(a, 2, 0x214, 16, periph)
/* pa2_tcc2wo0_out */
#define PA2_TCC2WO0_OUT  MCHP_PINMUX(a, 2, 0x210, 17, periph)
/* pa2_tcc2wo1_out */
#define PA2_TCC2WO1_OUT  MCHP_PINMUX(a, 2, 0x214, 17, periph)
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
/* pa3_scom2p0_out */
#define PA3_SCOM2P0_OUT  MCHP_PINMUX(a, 3, 0x218, 7, periph)
/* pa3_scom2p1_in */
#define PA3_SCOM2P1_IN   MCHP_PINMUX(a, 3, 0x64, 1, periph)
/* pa3_scom2p1_out */
#define PA3_SCOM2P1_OUT  MCHP_PINMUX(a, 3, 0x218, 8, periph)
/* pa3_scom2p2_in */
#define PA3_SCOM2P2_IN   MCHP_PINMUX(a, 3, 0x68, 8, periph)
/* pa3_scom2p2_out */
#define PA3_SCOM2P2_OUT  MCHP_PINMUX(a, 3, 0x21c, 8, periph)
/* pa3_scom2p3_out */
#define PA3_SCOM2P3_OUT  MCHP_PINMUX(a, 3, 0x220, 8, periph)
/* pa3_scom3p0_in */
#define PA3_SCOM3P0_IN   MCHP_PINMUX(a, 3, 0x70, 1, periph)
/* pa3_scom3p0_out */
#define PA3_SCOM3P0_OUT  MCHP_PINMUX(a, 3, 0x218, 9, periph)
/* pa3_scom3p1_in */
#define PA3_SCOM3P1_IN   MCHP_PINMUX(a, 3, 0x74, 8, periph)
/* pa3_scom3p1_out */
#define PA3_SCOM3P1_OUT  MCHP_PINMUX(a, 3, 0x21c, 9, periph)
/* pa3_scom3p2_out */
#define PA3_SCOM3P2_OUT  MCHP_PINMUX(a, 3, 0x220, 9, periph)
/* pa3_scom3p3_out */
#define PA3_SCOM3P3_OUT  MCHP_PINMUX(a, 3, 0x218, 10, periph)
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
/* pa4_scom2p0_out */
#define PA4_SCOM2P0_OUT  MCHP_PINMUX(a, 4, 0x22c, 8, periph)
/* pa4_scom2p1_out */
#define PA4_SCOM2P1_OUT  MCHP_PINMUX(a, 4, 0x224, 7, periph)
/* pa4_scom2p2_in */
#define PA4_SCOM2P2_IN   MCHP_PINMUX(a, 4, 0x68, 1, periph)
/* pa4_scom2p2_out */
#define PA4_SCOM2P2_OUT  MCHP_PINMUX(a, 4, 0x224, 8, periph)
/* pa4_scom2p3_in */
#define PA4_SCOM2P3_IN   MCHP_PINMUX(a, 4, 0x6c, 8, periph)
/* pa4_scom2p3_out */
#define PA4_SCOM2P3_OUT  MCHP_PINMUX(a, 4, 0x228, 8, periph)
/* pa4_scom3p0_out */
#define PA4_SCOM3P0_OUT  MCHP_PINMUX(a, 4, 0x224, 10, periph)
/* pa4_scom3p1_in */
#define PA4_SCOM3P1_IN   MCHP_PINMUX(a, 4, 0x74, 1, periph)
/* pa4_scom3p1_out */
#define PA4_SCOM3P1_OUT  MCHP_PINMUX(a, 4, 0x224, 9, periph)
/* pa4_scom3p2_in */
#define PA4_SCOM3P2_IN   MCHP_PINMUX(a, 4, 0x78, 8, periph)
/* pa4_scom3p2_out */
#define PA4_SCOM3P2_OUT  MCHP_PINMUX(a, 4, 0x228, 9, periph)
/* pa4_scom3p3_out */
#define PA4_SCOM3P3_OUT  MCHP_PINMUX(a, 4, 0x22c, 9, periph)
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
/* pa5_scom2p0_in */
#define PA5_SCOM2P0_IN   MCHP_PINMUX(a, 5, 0x60, 8, periph)
/* pa5_scom2p0_out */
#define PA5_SCOM2P0_OUT  MCHP_PINMUX(a, 5, 0x230, 7, periph)
/* pa5_scom2p1_out */
#define PA5_SCOM2P1_OUT  MCHP_PINMUX(a, 5, 0x230, 8, periph)
/* pa5_scom2p2_out */
#define PA5_SCOM2P2_OUT  MCHP_PINMUX(a, 5, 0x234, 7, periph)
/* pa5_scom2p3_in */
#define PA5_SCOM2P3_IN   MCHP_PINMUX(a, 5, 0x6c, 1, periph)
/* pa5_scom2p3_out */
#define PA5_SCOM2P3_OUT  MCHP_PINMUX(a, 5, 0x234, 8, periph)
/* pa5_scom3p0_out */
#define PA5_SCOM3P0_OUT  MCHP_PINMUX(a, 5, 0x230, 9, periph)
/* pa5_scom3p1_out */
#define PA5_SCOM3P1_OUT  MCHP_PINMUX(a, 5, 0x234, 10, periph)
/* pa5_scom3p2_in */
#define PA5_SCOM3P2_IN   MCHP_PINMUX(a, 5, 0x78, 1, periph)
/* pa5_scom3p2_out */
#define PA5_SCOM3P2_OUT  MCHP_PINMUX(a, 5, 0x234, 9, periph)
/* pa5_scom3p3_in */
#define PA5_SCOM3P3_IN   MCHP_PINMUX(a, 5, 0x7c, 8, periph)
/* pa5_scom3p3_out */
#define PA5_SCOM3P3_OUT  MCHP_PINMUX(a, 5, 0x230, 10, periph)
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
/* pa6_scom2p0_in */
#define PA6_SCOM2P0_IN   MCHP_PINMUX(a, 6, 0x60, 1, periph)
/* pa6_scom2p0_out */
#define PA6_SCOM2P0_OUT  MCHP_PINMUX(a, 6, 0x23c, 7, periph)
/* pa6_scom2p1_in */
#define PA6_SCOM2P1_IN   MCHP_PINMUX(a, 6, 0x64, 9, periph)
/* pa6_scom2p1_out */
#define PA6_SCOM2P1_OUT  MCHP_PINMUX(a, 6, 0x23c, 8, periph)
/* pa6_scom2p2_out */
#define PA6_SCOM2P2_OUT  MCHP_PINMUX(a, 6, 0x240, 8, periph)
/* pa6_scom2p3_out */
#define PA6_SCOM2P3_OUT  MCHP_PINMUX(a, 6, 0x244, 7, periph)
/* pa6_scom3p0_in */
#define PA6_SCOM3P0_IN   MCHP_PINMUX(a, 6, 0x70, 9, periph)
/* pa6_scom3p0_out */
#define PA6_SCOM3P0_OUT  MCHP_PINMUX(a, 6, 0x23c, 9, periph)
/* pa6_scom3p1_out */
#define PA6_SCOM3P1_OUT  MCHP_PINMUX(a, 6, 0x240, 9, periph)
/* pa6_scom3p2_out */
#define PA6_SCOM3P2_OUT  MCHP_PINMUX(a, 6, 0x244, 10, periph)
/* pa6_scom3p3_in */
#define PA6_SCOM3P3_IN   MCHP_PINMUX(a, 6, 0x7c, 1, periph)
/* pa6_scom3p3_out */
#define PA6_SCOM3P3_OUT  MCHP_PINMUX(a, 6, 0x23c, 10, periph)
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
/* pa7_scom2p0_out */
#define PA7_SCOM2P0_OUT  MCHP_PINMUX(a, 7, 0x248, 7, periph)
/* pa7_scom2p1_in */
#define PA7_SCOM2P1_IN   MCHP_PINMUX(a, 7, 0x64, 2, periph)
/* pa7_scom2p1_out */
#define PA7_SCOM2P1_OUT  MCHP_PINMUX(a, 7, 0x248, 8, periph)
/* pa7_scom2p2_in */
#define PA7_SCOM2P2_IN   MCHP_PINMUX(a, 7, 0x68, 9, periph)
/* pa7_scom2p2_out */
#define PA7_SCOM2P2_OUT  MCHP_PINMUX(a, 7, 0x24c, 8, periph)
/* pa7_scom3p0_in */
#define PA7_SCOM3P0_IN   MCHP_PINMUX(a, 7, 0x70, 2, periph)
/* pa7_scom3p0_out */
#define PA7_SCOM3P0_OUT  MCHP_PINMUX(a, 7, 0x248, 9, periph)
/* pa7_scom3p1_in */
#define PA7_SCOM3P1_IN   MCHP_PINMUX(a, 7, 0x74, 9, periph)
/* pa7_scom3p1_out */
#define PA7_SCOM3P1_OUT  MCHP_PINMUX(a, 7, 0x24c, 9, periph)
/* pa7_scom3p3_out */
#define PA7_SCOM3P3_OUT  MCHP_PINMUX(a, 7, 0x248, 10, periph)
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
/* pa8_scom2p0_in */
#define PA8_SCOM2P0_IN   MCHP_PINMUX(a, 8, 0x60, 14, periph)
/* pa8_scom2p0_out */
#define PA8_SCOM2P0_OUT  MCHP_PINMUX(a, 8, 0x258, 8, periph)
/* pa8_scom2p1_out */
#define PA8_SCOM2P1_OUT  MCHP_PINMUX(a, 8, 0x250, 7, periph)
/* pa8_scom2p2_in */
#define PA8_SCOM2P2_IN   MCHP_PINMUX(a, 8, 0x68, 2, periph)
/* pa8_scom2p2_out */
#define PA8_SCOM2P2_OUT  MCHP_PINMUX(a, 8, 0x250, 8, periph)
/* pa8_scom2p3_in */
#define PA8_SCOM2P3_IN   MCHP_PINMUX(a, 8, 0x6c, 9, periph)
/* pa8_scom2p3_out */
#define PA8_SCOM2P3_OUT  MCHP_PINMUX(a, 8, 0x254, 8, periph)
/* pa8_scom3p0_out */
#define PA8_SCOM3P0_OUT  MCHP_PINMUX(a, 8, 0x250, 10, periph)
/* pa8_scom3p1_in */
#define PA8_SCOM3P1_IN   MCHP_PINMUX(a, 8, 0x74, 2, periph)
/* pa8_scom3p1_out */
#define PA8_SCOM3P1_OUT  MCHP_PINMUX(a, 8, 0x250, 9, periph)
/* pa8_scom3p2_in */
#define PA8_SCOM3P2_IN   MCHP_PINMUX(a, 8, 0x78, 9, periph)
/* pa8_scom3p2_out */
#define PA8_SCOM3P2_OUT  MCHP_PINMUX(a, 8, 0x254, 9, periph)
/* pa8_scom3p3_in */
#define PA8_SCOM3P3_IN   MCHP_PINMUX(a, 8, 0x7c, 14, periph)
/* pa8_scom3p3_out */
#define PA8_SCOM3P3_OUT  MCHP_PINMUX(a, 8, 0x258, 9, periph)
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
/* pa9_scom2p0_in */
#define PA9_SCOM2P0_IN   MCHP_PINMUX(a, 9, 0x60, 9, periph)
/* pa9_scom2p0_out */
#define PA9_SCOM2P0_OUT  MCHP_PINMUX(a, 9, 0x25c, 7, periph)
/* pa9_scom2p1_in */
#define PA9_SCOM2P1_IN   MCHP_PINMUX(a, 9, 0x64, 15, periph)
/* pa9_scom2p1_out */
#define PA9_SCOM2P1_OUT  MCHP_PINMUX(a, 9, 0x25c, 8, periph)
/* pa9_scom2p2_out */
#define PA9_SCOM2P2_OUT  MCHP_PINMUX(a, 9, 0x260, 7, periph)
/* pa9_scom2p3_in */
#define PA9_SCOM2P3_IN   MCHP_PINMUX(a, 9, 0x6c, 2, periph)
/* pa9_scom2p3_out */
#define PA9_SCOM2P3_OUT  MCHP_PINMUX(a, 9, 0x260, 8, periph)
/* pa9_scom3p0_in */
#define PA9_SCOM3P0_IN   MCHP_PINMUX(a, 9, 0x70, 15, periph)
/* pa9_scom3p0_out */
#define PA9_SCOM3P0_OUT  MCHP_PINMUX(a, 9, 0x25c, 9, periph)
/* pa9_scom3p1_out */
#define PA9_SCOM3P1_OUT  MCHP_PINMUX(a, 9, 0x260, 10, periph)
/* pa9_scom3p2_in */
#define PA9_SCOM3P2_IN   MCHP_PINMUX(a, 9, 0x78, 2, periph)
/* pa9_scom3p2_out */
#define PA9_SCOM3P2_OUT  MCHP_PINMUX(a, 9, 0x260, 9, periph)
/* pa9_scom3p3_in */
#define PA9_SCOM3P3_IN   MCHP_PINMUX(a, 9, 0x7c, 9, periph)
/* pa9_scom3p3_out */
#define PA9_SCOM3P3_OUT  MCHP_PINMUX(a, 9, 0x25c, 10, periph)
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
/* pa10_scom2p0_in */
#define PA10_SCOM2P0_IN  MCHP_PINMUX(a, 10, 0x60, 2, periph)
/* pa10_scom2p0_out */
#define PA10_SCOM2P0_OUT MCHP_PINMUX(a, 10, 0x268, 7, periph)
/* pa10_scom2p1_in */
#define PA10_SCOM2P1_IN  MCHP_PINMUX(a, 10, 0x64, 10, periph)
/* pa10_scom2p1_out */
#define PA10_SCOM2P1_OUT MCHP_PINMUX(a, 10, 0x268, 8, periph)
/* pa10_scom2p3_out */
#define PA10_SCOM2P3_OUT MCHP_PINMUX(a, 10, 0x26c, 7, periph)
/* pa10_scom3p0_in */
#define PA10_SCOM3P0_IN  MCHP_PINMUX(a, 10, 0x70, 10, periph)
/* pa10_scom3p0_out */
#define PA10_SCOM3P0_OUT MCHP_PINMUX(a, 10, 0x268, 9, periph)
/* pa10_scom3p2_out */
#define PA10_SCOM3P2_OUT MCHP_PINMUX(a, 10, 0x26c, 10, periph)
/* pa10_scom3p3_in */
#define PA10_SCOM3P3_IN  MCHP_PINMUX(a, 10, 0x7c, 2, periph)
/* pa10_scom3p3_out */
#define PA10_SCOM3P3_OUT MCHP_PINMUX(a, 10, 0x268, 10, periph)
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
/* pa11_cclin0_in */
#define PA11_CCLIN0_IN   MCHP_PINMUX(a, 11, 0x98, 3, periph)
/* pa11_cclin1_in */
#define PA11_CCLIN1_IN   MCHP_PINMUX(a, 11, 0x9c, 10, periph)
/* pa11_cclin3_in */
#define PA11_CCLIN3_IN   MCHP_PINMUX(a, 11, 0xa4, 3, periph)
/* pa11_cclin4_in */
#define PA11_CCLIN4_IN   MCHP_PINMUX(a, 11, 0xa8, 10, periph)
/* pa11_extint0_in */
#define PA11_EXTINT0_IN  MCHP_PINMUX(a, 11, 0x0, 3, periph)
/* pa11_extint1_in */
#define PA11_EXTINT1_IN  MCHP_PINMUX(a, 11, 0x4, 10, periph)
/* pa11_qd1_in */
#define PA11_QD1_IN      MCHP_PINMUX(a, 11, 0x88, 3, periph)
/* pa11_qd2_in */
#define PA11_QD2_IN      MCHP_PINMUX(a, 11, 0x8c, 10, periph)
/* pa11_qsck_in */
#define PA11_QSCK_IN     MCHP_PINMUX(a, 11, 0x80, 3, periph)
/* pa11_refi_in */
#define PA11_REFI_IN     MCHP_PINMUX(a, 11, 0x94, 3, periph)
/* pa11_scom0p0_in */
#define PA11_SCOM0P0_IN  MCHP_PINMUX(a, 11, 0x40, 10, periph)
/* pa11_scom0p3_in */
#define PA11_SCOM0P3_IN  MCHP_PINMUX(a, 11, 0x4c, 3, periph)
/* pa11_scom1p2_in */
#define PA11_SCOM1P2_IN  MCHP_PINMUX(a, 11, 0x58, 3, periph)
/* pa11_scom1p3_in */
#define PA11_SCOM1P3_IN  MCHP_PINMUX(a, 11, 0x5c, 10, periph)
/* pa11_scom2p1_in */
#define PA11_SCOM2P1_IN  MCHP_PINMUX(a, 11, 0x64, 3, periph)
/* pa11_scom2p2_in */
#define PA11_SCOM2P2_IN  MCHP_PINMUX(a, 11, 0x68, 10, periph)
/* pa11_scom3p0_in */
#define PA11_SCOM3P0_IN  MCHP_PINMUX(a, 11, 0x70, 3, periph)
/* pa11_scom3p1_in */
#define PA11_SCOM3P1_IN  MCHP_PINMUX(a, 11, 0x74, 10, periph)
/* pa11_tc0wo0g1_in */
#define PA11_TC0WO0G1_IN MCHP_PINMUX(a, 11, 0xb0, 3, periph)
/* pa11_tc0wo0g2_in */
#define PA11_TC0WO0G2_IN MCHP_PINMUX(a, 11, 0xb4, 10, periph)
/* pa11_tc1wo0g1_in */
#define PA11_TC1WO0G1_IN MCHP_PINMUX(a, 11, 0xc0, 3, periph)
/* pa11_tc1wo1g2_in */
#define PA11_TC1WO1G2_IN MCHP_PINMUX(a, 11, 0xc4, 10, periph)
/* pa11_tc2wo0g1_in */
#define PA11_TC2WO0G1_IN MCHP_PINMUX(a, 11, 0xc8, 3, periph)
/* pa11_tc2wo1g2_in */
#define PA11_TC2WO1G2_IN MCHP_PINMUX(a, 11, 0xd0, 10, periph)
/* pa11_tc3wo0g1_in */
#define PA11_TC3WO0G1_IN MCHP_PINMUX(a, 11, 0xd8, 3, periph)
/* pa11_tc3wo1g2_in */
#define PA11_TC3WO1G2_IN MCHP_PINMUX(a, 11, 0xe0, 10, periph)
/* pa12_cclin1_in */
#define PA12_CCLIN1_IN   MCHP_PINMUX(a, 12, 0x9c, 3, periph)
/* pa12_cclin2_in */
#define PA12_CCLIN2_IN   MCHP_PINMUX(a, 12, 0xa0, 10, periph)
/* pa12_cclin4_in */
#define PA12_CCLIN4_IN   MCHP_PINMUX(a, 12, 0xa8, 3, periph)
/* pa12_cclin5_in */
#define PA12_CCLIN5_IN   MCHP_PINMUX(a, 12, 0xac, 10, periph)
/* pa12_extint1_in */
#define PA12_EXTINT1_IN  MCHP_PINMUX(a, 12, 0x4, 3, periph)
/* pa12_extint2_in */
#define PA12_EXTINT2_IN  MCHP_PINMUX(a, 12, 0x8, 10, periph)
/* pa12_qd2_in */
#define PA12_QD2_IN      MCHP_PINMUX(a, 12, 0x8c, 3, periph)
/* pa12_qd3_in */
#define PA12_QD3_IN      MCHP_PINMUX(a, 12, 0x90, 10, periph)
/* pa12_scom0p0_in */
#define PA12_SCOM0P0_IN  MCHP_PINMUX(a, 12, 0x40, 3, periph)
/* pa12_scom0p1_in */
#define PA12_SCOM0P1_IN  MCHP_PINMUX(a, 12, 0x44, 10, periph)
/* pa12_scom1p0_in */
#define PA12_SCOM1P0_IN  MCHP_PINMUX(a, 12, 0x50, 10, periph)
/* pa12_scom1p3_in */
#define PA12_SCOM1P3_IN  MCHP_PINMUX(a, 12, 0x5c, 3, periph)
/* pa12_scom2p2_in */
#define PA12_SCOM2P2_IN  MCHP_PINMUX(a, 12, 0x68, 3, periph)
/* pa12_scom2p3_in */
#define PA12_SCOM2P3_IN  MCHP_PINMUX(a, 12, 0x6c, 10, periph)
/* pa12_scom3p1_in */
#define PA12_SCOM3P1_IN  MCHP_PINMUX(a, 12, 0x74, 3, periph)
/* pa12_scom3p2_in */
#define PA12_SCOM3P2_IN  MCHP_PINMUX(a, 12, 0x78, 10, periph)
/* pa12_tc0wo0g2_in */
#define PA12_TC0WO0G2_IN MCHP_PINMUX(a, 12, 0xb4, 3, periph)
/* pa12_tc0wo1g3_in */
#define PA12_TC0WO1G3_IN MCHP_PINMUX(a, 12, 0xb8, 10, periph)
/* pa12_tc1wo1g2_in */
#define PA12_TC1WO1G2_IN MCHP_PINMUX(a, 12, 0xc4, 3, periph)
/* pa12_tc2wo0g3_in */
#define PA12_TC2WO0G3_IN MCHP_PINMUX(a, 12, 0xcc, 10, periph)
/* pa12_tc2wo1g2_in */
#define PA12_TC2WO1G2_IN MCHP_PINMUX(a, 12, 0xd0, 3, periph)
/* pa12_tc3wo0g3_in */
#define PA12_TC3WO0G3_IN MCHP_PINMUX(a, 12, 0xdc, 10, periph)
/* pa12_tc3wo1g2_in */
#define PA12_TC3WO1G2_IN MCHP_PINMUX(a, 12, 0xe0, 3, periph)
/* pa13_cclin2_in */
#define PA13_CCLIN2_IN   MCHP_PINMUX(a, 13, 0xa0, 3, periph)
/* pa13_cclin5_in */
#define PA13_CCLIN5_IN   MCHP_PINMUX(a, 13, 0xac, 3, periph)
/* pa13_cclout0_out */
#define PA13_CCLOUT0_OUT MCHP_PINMUX(a, 13, 0x278, 28, periph)
/* pa13_cclout1_out */
#define PA13_CCLOUT1_OUT MCHP_PINMUX(a, 13, 0x27c, 28, periph)
/* pa13_extint2_in */
#define PA13_EXTINT2_IN  MCHP_PINMUX(a, 13, 0x8, 3, periph)
/* pa13_extint3_in */
#define PA13_EXTINT3_IN  MCHP_PINMUX(a, 13, 0xc, 10, periph)
/* pa13_nmi_in */
#define PA13_NMI_IN      MCHP_PINMUX(a, 13, 0x3c, 10, periph)
/* pa13_qcs_out */
#define PA13_QCS_OUT     MCHP_PINMUX(a, 13, 0x278, 24, periph)
/* pa13_qd0_in */
#define PA13_QD0_IN      MCHP_PINMUX(a, 13, 0x84, 10, periph)
/* pa13_qd0_out */
#define PA13_QD0_OUT     MCHP_PINMUX(a, 13, 0x278, 26, periph)
/* pa13_qd1_out */
#define PA13_QD1_OUT     MCHP_PINMUX(a, 13, 0x278, 25, periph)
/* pa13_qd2_out */
#define PA13_QD2_OUT     MCHP_PINMUX(a, 13, 0x27c, 25, periph)
/* pa13_qd3_in */
#define PA13_QD3_IN      MCHP_PINMUX(a, 13, 0x90, 3, periph)
/* pa13_qd3_out */
#define PA13_QD3_OUT     MCHP_PINMUX(a, 13, 0x278, 27, periph)
/* pa13_qsck_out */
#define PA13_QSCK_OUT    MCHP_PINMUX(a, 13, 0x278, 23, periph)
/* pa13_refo3_out */
#define PA13_REFO3_OUT   MCHP_PINMUX(a, 13, 0x278, 19, periph)
/* pa13_refo4_out */
#define PA13_REFO4_OUT   MCHP_PINMUX(a, 13, 0x27c, 19, periph)
/* pa13_scom0p0_out */
#define PA13_SCOM0P0_OUT MCHP_PINMUX(a, 13, 0x278, 2, periph)
/* pa13_scom0p1_in */
#define PA13_SCOM0P1_IN  MCHP_PINMUX(a, 13, 0x44, 3, periph)
/* pa13_scom0p1_out */
#define PA13_SCOM0P1_OUT MCHP_PINMUX(a, 13, 0x278, 1, periph)
/* pa13_scom0p2_in */
#define PA13_SCOM0P2_IN  MCHP_PINMUX(a, 13, 0x48, 10, periph)
/* pa13_scom0p2_out */
#define PA13_SCOM0P2_OUT MCHP_PINMUX(a, 13, 0x27c, 1, periph)
/* pa13_scom0p3_out */
#define PA13_SCOM0P3_OUT MCHP_PINMUX(a, 13, 0x278, 3, periph)
/* pa13_scom1p0_in */
#define PA13_SCOM1P0_IN  MCHP_PINMUX(a, 13, 0x50, 3, periph)
/* pa13_scom1p0_out */
#define PA13_SCOM1P0_OUT MCHP_PINMUX(a, 13, 0x278, 5, periph)
/* pa13_scom1p1_in */
#define PA13_SCOM1P1_IN  MCHP_PINMUX(a, 13, 0x54, 10, periph)
/* pa13_scom1p1_out */
#define PA13_SCOM1P1_OUT MCHP_PINMUX(a, 13, 0x27c, 5, periph)
/* pa13_scom1p2_out */
#define PA13_SCOM1P2_OUT MCHP_PINMUX(a, 13, 0x278, 4, periph)
/* pa13_scom1p3_out */
#define PA13_SCOM1P3_OUT MCHP_PINMUX(a, 13, 0x278, 6, periph)
/* pa13_scom2p0_in */
#define PA13_SCOM2P0_IN  MCHP_PINMUX(a, 13, 0x60, 10, periph)
/* pa13_scom2p0_out */
#define PA13_SCOM2P0_OUT MCHP_PINMUX(a, 13, 0x27c, 8, periph)
/* pa13_scom2p2_out */
#define PA13_SCOM2P2_OUT MCHP_PINMUX(a, 13, 0x278, 7, periph)
/* pa13_scom2p3_in */
#define PA13_SCOM2P3_IN  MCHP_PINMUX(a, 13, 0x6c, 3, periph)
/* pa13_scom2p3_out */
#define PA13_SCOM2P3_OUT MCHP_PINMUX(a, 13, 0x278, 8, periph)
/* pa13_scom3p1_out */
#define PA13_SCOM3P1_OUT MCHP_PINMUX(a, 13, 0x278, 10, periph)
/* pa13_scom3p2_in */
#define PA13_SCOM3P2_IN  MCHP_PINMUX(a, 13, 0x78, 3, periph)
/* pa13_scom3p2_out */
#define PA13_SCOM3P2_OUT MCHP_PINMUX(a, 13, 0x278, 9, periph)
/* pa13_scom3p3_in */
#define PA13_SCOM3P3_IN  MCHP_PINMUX(a, 13, 0x7c, 10, periph)
/* pa13_scom3p3_out */
#define PA13_SCOM3P3_OUT MCHP_PINMUX(a, 13, 0x27c, 9, periph)
/* pa13_tc0wo0_out */
#define PA13_TC0WO0_OUT  MCHP_PINMUX(a, 13, 0x278, 18, periph)
/* pa13_tc0wo1g3_in */
#define PA13_TC0WO1G3_IN MCHP_PINMUX(a, 13, 0xb8, 3, periph)
/* pa13_tc0wo1g4_in */
#define PA13_TC0WO1G4_IN MCHP_PINMUX(a, 13, 0xbc, 10, periph)
/* pa13_tc1wo0_out */
#define PA13_TC1WO0_OUT  MCHP_PINMUX(a, 13, 0x278, 20, periph)
/* pa13_tc1wo1_out */
#define PA13_TC1WO1_OUT  MCHP_PINMUX(a, 13, 0x27c, 20, periph)
/* pa13_tc2wo0g3_in */
#define PA13_TC2WO0G3_IN MCHP_PINMUX(a, 13, 0xcc, 3, periph)
/* pa13_tc2wo0_out */
#define PA13_TC2WO0_OUT  MCHP_PINMUX(a, 13, 0x278, 21, periph)
/* pa13_tc2wo1g4_in */
#define PA13_TC2WO1G4_IN MCHP_PINMUX(a, 13, 0xd4, 10, periph)
/* pa13_tc2wo1_out */
#define PA13_TC2WO1_OUT  MCHP_PINMUX(a, 13, 0x27c, 21, periph)
/* pa13_tc3wo0g3_in */
#define PA13_TC3WO0G3_IN MCHP_PINMUX(a, 13, 0xdc, 3, periph)
/* pa13_tc3wo0_out */
#define PA13_TC3WO0_OUT  MCHP_PINMUX(a, 13, 0x278, 22, periph)
/* pa13_tc3wo1g4_in */
#define PA13_TC3WO1G4_IN MCHP_PINMUX(a, 13, 0xe4, 10, periph)
/* pa13_tc3wo1_out */
#define PA13_TC3WO1_OUT  MCHP_PINMUX(a, 13, 0x27c, 22, periph)
/* pa13_tcc0wo0_out */
#define PA13_TCC0WO0_OUT MCHP_PINMUX(a, 13, 0x278, 12, periph)
/* pa13_tcc0wo1_out */
#define PA13_TCC0WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 12, periph)
/* pa13_tcc0wo2_out */
#define PA13_TCC0WO2_OUT MCHP_PINMUX(a, 13, 0x278, 11, periph)
/* pa13_tcc0wo3_out */
#define PA13_TCC0WO3_OUT MCHP_PINMUX(a, 13, 0x27c, 11, periph)
/* pa13_tcc0wo4_out */
#define PA13_TCC0WO4_OUT MCHP_PINMUX(a, 13, 0x278, 13, periph)
/* pa13_tcc0wo5_out */
#define PA13_TCC0WO5_OUT MCHP_PINMUX(a, 13, 0x27c, 13, periph)
/* pa13_tcc1wo0_out */
#define PA13_TCC1WO0_OUT MCHP_PINMUX(a, 13, 0x278, 15, periph)
/* pa13_tcc1wo1_out */
#define PA13_TCC1WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 15, periph)
/* pa13_tcc1wo2_out */
#define PA13_TCC1WO2_OUT MCHP_PINMUX(a, 13, 0x278, 14, periph)
/* pa13_tcc1wo3_out */
#define PA13_TCC1WO3_OUT MCHP_PINMUX(a, 13, 0x27c, 14, periph)
/* pa13_tcc1wo4_out */
#define PA13_TCC1WO4_OUT MCHP_PINMUX(a, 13, 0x278, 16, periph)
/* pa13_tcc1wo5_out */
#define PA13_TCC1WO5_OUT MCHP_PINMUX(a, 13, 0x27c, 16, periph)
/* pa13_tcc2wo0_out */
#define PA13_TCC2WO0_OUT MCHP_PINMUX(a, 13, 0x278, 17, periph)
/* pa13_tcc2wo1_out */
#define PA13_TCC2WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 17, periph)
/* pa14_cclin0_in */
#define PA14_CCLIN0_IN   MCHP_PINMUX(a, 14, 0x98, 11, periph)
/* pa14_cclin3_in */
#define PA14_CCLIN3_IN   MCHP_PINMUX(a, 14, 0xa4, 11, periph)
/* pa14_cclout0_out */
#define PA14_CCLOUT0_OUT MCHP_PINMUX(a, 14, 0x280, 28, periph)
/* pa14_cclout1_out */
#define PA14_CCLOUT1_OUT MCHP_PINMUX(a, 14, 0x284, 28, periph)
/* pa14_extint0_in */
#define PA14_EXTINT0_IN  MCHP_PINMUX(a, 14, 0x0, 11, periph)
/* pa14_extint3_in */
#define PA14_EXTINT3_IN  MCHP_PINMUX(a, 14, 0xc, 3, periph)
/* pa14_nmi_in */
#define PA14_NMI_IN      MCHP_PINMUX(a, 14, 0x3c, 3, periph)
/* pa14_qcs_out */
#define PA14_QCS_OUT     MCHP_PINMUX(a, 14, 0x280, 24, periph)
/* pa14_qd0_in */
#define PA14_QD0_IN      MCHP_PINMUX(a, 14, 0x84, 3, periph)
/* pa14_qd0_out */
#define PA14_QD0_OUT     MCHP_PINMUX(a, 14, 0x284, 27, periph)
/* pa14_qd1_in */
#define PA14_QD1_IN      MCHP_PINMUX(a, 14, 0x88, 11, periph)
/* pa14_qd1_out */
#define PA14_QD1_OUT     MCHP_PINMUX(a, 14, 0x280, 27, periph)
/* pa14_qd2_out */
#define PA14_QD2_OUT     MCHP_PINMUX(a, 14, 0x280, 26, periph)
/* pa14_qd3_out */
#define PA14_QD3_OUT     MCHP_PINMUX(a, 14, 0x280, 25, periph)
/* pa14_qsck_in */
#define PA14_QSCK_IN     MCHP_PINMUX(a, 14, 0x80, 11, periph)
/* pa14_qsck_out */
#define PA14_QSCK_OUT    MCHP_PINMUX(a, 14, 0x280, 23, periph)
/* pa14_refi_in */
#define PA14_REFI_IN     MCHP_PINMUX(a, 14, 0x94, 11, periph)
/* pa14_refo1_out */
#define PA14_REFO1_OUT   MCHP_PINMUX(a, 14, 0x280, 19, periph)
/* pa14_refo4_out */
#define PA14_REFO4_OUT   MCHP_PINMUX(a, 14, 0x284, 19, periph)
/* pa14_scom0p0_out */
#define PA14_SCOM0P0_OUT MCHP_PINMUX(a, 14, 0x284, 3, periph)
/* pa14_scom0p1_out */
#define PA14_SCOM0P1_OUT MCHP_PINMUX(a, 14, 0x280, 3, periph)
/* pa14_scom0p2_in */
#define PA14_SCOM0P2_IN  MCHP_PINMUX(a, 14, 0x48, 3, periph)
/* pa14_scom0p2_out */
#define PA14_SCOM0P2_OUT MCHP_PINMUX(a, 14, 0x280, 2, periph)
/* pa14_scom0p3_in */
#define PA14_SCOM0P3_IN  MCHP_PINMUX(a, 14, 0x4c, 11, periph)
/* pa14_scom0p3_out */
#define PA14_SCOM0P3_OUT MCHP_PINMUX(a, 14, 0x280, 1, periph)
/* pa14_scom1p0_out */
#define PA14_SCOM1P0_OUT MCHP_PINMUX(a, 14, 0x280, 4, periph)
/* pa14_scom1p1_in */
#define PA14_SCOM1P1_IN  MCHP_PINMUX(a, 14, 0x54, 3, periph)
/* pa14_scom1p1_out */
#define PA14_SCOM1P1_OUT MCHP_PINMUX(a, 14, 0x280, 6, periph)
/* pa14_scom1p2_in */
#define PA14_SCOM1P2_IN  MCHP_PINMUX(a, 14, 0x58, 11, periph)
/* pa14_scom1p2_out */
#define PA14_SCOM1P2_OUT MCHP_PINMUX(a, 14, 0x280, 5, periph)
/* pa14_scom1p3_out */
#define PA14_SCOM1P3_OUT MCHP_PINMUX(a, 14, 0x284, 4, periph)
/* pa14_scom2p0_in */
#define PA14_SCOM2P0_IN  MCHP_PINMUX(a, 14, 0x60, 3, periph)
/* pa14_scom2p0_out */
#define PA14_SCOM2P0_OUT MCHP_PINMUX(a, 14, 0x280, 7, periph)
/* pa14_scom2p1_in */
#define PA14_SCOM2P1_IN  MCHP_PINMUX(a, 14, 0x64, 11, periph)
/* pa14_scom2p1_out */
#define PA14_SCOM2P1_OUT MCHP_PINMUX(a, 14, 0x280, 8, periph)
/* pa14_scom2p3_out */
#define PA14_SCOM2P3_OUT MCHP_PINMUX(a, 14, 0x284, 7, periph)
/* pa14_scom3p0_in */
#define PA14_SCOM3P0_IN  MCHP_PINMUX(a, 14, 0x70, 11, periph)
/* pa14_scom3p0_out */
#define PA14_SCOM3P0_OUT MCHP_PINMUX(a, 14, 0x280, 9, periph)
/* pa14_scom3p2_out */
#define PA14_SCOM3P2_OUT MCHP_PINMUX(a, 14, 0x284, 10, periph)
/* pa14_scom3p3_in */
#define PA14_SCOM3P3_IN  MCHP_PINMUX(a, 14, 0x7c, 3, periph)
/* pa14_scom3p3_out */
#define PA14_SCOM3P3_OUT MCHP_PINMUX(a, 14, 0x280, 10, periph)
/* pa14_tc0wo0g1_in */
#define PA14_TC0WO0G1_IN MCHP_PINMUX(a, 14, 0xb0, 11, periph)
/* pa14_tc0wo0_out */
#define PA14_TC0WO0_OUT  MCHP_PINMUX(a, 14, 0x284, 18, periph)
/* pa14_tc0wo1g4_in */
#define PA14_TC0WO1G4_IN MCHP_PINMUX(a, 14, 0xbc, 3, periph)
/* pa14_tc0wo1_out */
#define PA14_TC0WO1_OUT  MCHP_PINMUX(a, 14, 0x280, 18, periph)
/* pa14_tc1wo0g1_in */
#define PA14_TC1WO0G1_IN MCHP_PINMUX(a, 14, 0xc0, 11, periph)
/* pa14_tc1wo0_out */
#define PA14_TC1WO0_OUT  MCHP_PINMUX(a, 14, 0x280, 20, periph)
/* pa14_tc1wo1_out */
#define PA14_TC1WO1_OUT  MCHP_PINMUX(a, 14, 0x284, 20, periph)
/* pa14_tc2wo0g1_in */
#define PA14_TC2WO0G1_IN MCHP_PINMUX(a, 14, 0xc8, 11, periph)
/* pa14_tc2wo0_out */
#define PA14_TC2WO0_OUT  MCHP_PINMUX(a, 14, 0x280, 21, periph)
/* pa14_tc2wo1g4_in */
#define PA14_TC2WO1G4_IN MCHP_PINMUX(a, 14, 0xd4, 3, periph)
/* pa14_tc2wo1_out */
#define PA14_TC2WO1_OUT  MCHP_PINMUX(a, 14, 0x284, 21, periph)
/* pa14_tc3wo0g1_in */
#define PA14_TC3WO0G1_IN MCHP_PINMUX(a, 14, 0xd8, 11, periph)
/* pa14_tc3wo0_out */
#define PA14_TC3WO0_OUT  MCHP_PINMUX(a, 14, 0x280, 22, periph)
/* pa14_tc3wo1g4_in */
#define PA14_TC3WO1G4_IN MCHP_PINMUX(a, 14, 0xe4, 3, periph)
/* pa14_tc3wo1_out */
#define PA14_TC3WO1_OUT  MCHP_PINMUX(a, 14, 0x284, 22, periph)
/* pa14_tcc0wo0_out */
#define PA14_TCC0WO0_OUT MCHP_PINMUX(a, 14, 0x280, 11, periph)
/* pa14_tcc0wo1_out */
#define PA14_TCC0WO1_OUT MCHP_PINMUX(a, 14, 0x284, 12, periph)
/* pa14_tcc0wo2_out */
#define PA14_TCC0WO2_OUT MCHP_PINMUX(a, 14, 0x280, 13, periph)
/* pa14_tcc0wo3_out */
#define PA14_TCC0WO3_OUT MCHP_PINMUX(a, 14, 0x284, 11, periph)
/* pa14_tcc0wo4_out */
#define PA14_TCC0WO4_OUT MCHP_PINMUX(a, 14, 0x280, 12, periph)
/* pa14_tcc0wo5_out */
#define PA14_TCC0WO5_OUT MCHP_PINMUX(a, 14, 0x284, 13, periph)
/* pa14_tcc1wo0_out */
#define PA14_TCC1WO0_OUT MCHP_PINMUX(a, 14, 0x280, 14, periph)
/* pa14_tcc1wo1_out */
#define PA14_TCC1WO1_OUT MCHP_PINMUX(a, 14, 0x284, 15, periph)
/* pa14_tcc1wo2_out */
#define PA14_TCC1WO2_OUT MCHP_PINMUX(a, 14, 0x280, 16, periph)
/* pa14_tcc1wo3_out */
#define PA14_TCC1WO3_OUT MCHP_PINMUX(a, 14, 0x284, 14, periph)
/* pa14_tcc1wo4_out */
#define PA14_TCC1WO4_OUT MCHP_PINMUX(a, 14, 0x280, 15, periph)
/* pa14_tcc1wo5_out */
#define PA14_TCC1WO5_OUT MCHP_PINMUX(a, 14, 0x284, 16, periph)
/* pa14_tcc2wo0_out */
#define PA14_TCC2WO0_OUT MCHP_PINMUX(a, 14, 0x280, 17, periph)
/* pa14_tcc2wo1_out */
#define PA14_TCC2WO1_OUT MCHP_PINMUX(a, 14, 0x284, 17, periph)
/* pb0_cclin0_in */
#define PB0_CCLIN0_IN    MCHP_PINMUX(b, 0, 0x98, 4, periph)
/* pb0_cclin1_in */
#define PB0_CCLIN1_IN    MCHP_PINMUX(b, 0, 0x9c, 11, periph)
/* pb0_cclin3_in */
#define PB0_CCLIN3_IN    MCHP_PINMUX(b, 0, 0xa4, 4, periph)
/* pb0_cclin4_in */
#define PB0_CCLIN4_IN    MCHP_PINMUX(b, 0, 0xa8, 11, periph)
/* pb0_cclout0_out */
#define PB0_CCLOUT0_OUT  MCHP_PINMUX(b, 0, 0x28c, 28, periph)
/* pb0_cclout1_out */
#define PB0_CCLOUT1_OUT  MCHP_PINMUX(b, 0, 0x290, 28, periph)
/* pb0_extint0_in */
#define PB0_EXTINT0_IN   MCHP_PINMUX(b, 0, 0x0, 4, periph)
/* pb0_extint1_in */
#define PB0_EXTINT1_IN   MCHP_PINMUX(b, 0, 0x4, 11, periph)
/* pb0_qcs_out */
#define PB0_QCS_OUT      MCHP_PINMUX(b, 0, 0x28c, 24, periph)
/* pb0_qd0_out */
#define PB0_QD0_OUT      MCHP_PINMUX(b, 0, 0x290, 25, periph)
/* pb0_qd1_in */
#define PB0_QD1_IN       MCHP_PINMUX(b, 0, 0x88, 4, periph)
/* pb0_qd1_out */
#define PB0_QD1_OUT      MCHP_PINMUX(b, 0, 0x28c, 27, periph)
/* pb0_qd2_in */
#define PB0_QD2_IN       MCHP_PINMUX(b, 0, 0x8c, 11, periph)
/* pb0_qd2_out */
#define PB0_QD2_OUT      MCHP_PINMUX(b, 0, 0x28c, 26, periph)
/* pb0_qd3_out */
#define PB0_QD3_OUT      MCHP_PINMUX(b, 0, 0x28c, 25, periph)
/* pb0_qsck_in */
#define PB0_QSCK_IN      MCHP_PINMUX(b, 0, 0x80, 4, periph)
/* pb0_qsck_out */
#define PB0_QSCK_OUT     MCHP_PINMUX(b, 0, 0x28c, 23, periph)
/* pb0_refi_in */
#define PB0_REFI_IN      MCHP_PINMUX(b, 0, 0x94, 4, periph)
/* pb0_refo1_out */
#define PB0_REFO1_OUT    MCHP_PINMUX(b, 0, 0x28c, 19, periph)
/* pb0_refo2_out */
#define PB0_REFO2_OUT    MCHP_PINMUX(b, 0, 0x290, 19, periph)
/* pb0_scom0p0_in */
#define PB0_SCOM0P0_IN   MCHP_PINMUX(b, 0, 0x40, 11, periph)
/* pb0_scom0p0_out */
#define PB0_SCOM0P0_OUT  MCHP_PINMUX(b, 0, 0x290, 1, periph)
/* pb0_scom0p1_out */
#define PB0_SCOM0P1_OUT  MCHP_PINMUX(b, 0, 0x28c, 3, periph)
/* pb0_scom0p2_out */
#define PB0_SCOM0P2_OUT  MCHP_PINMUX(b, 0, 0x28c, 2, periph)
/* pb0_scom0p3_in */
#define PB0_SCOM0P3_IN   MCHP_PINMUX(b, 0, 0x4c, 4, periph)
/* pb0_scom0p3_out */
#define PB0_SCOM0P3_OUT  MCHP_PINMUX(b, 0, 0x28c, 1, periph)
/* pb0_scom1p0_out */
#define PB0_SCOM1P0_OUT  MCHP_PINMUX(b, 0, 0x28c, 4, periph)
/* pb0_scom1p1_out */
#define PB0_SCOM1P1_OUT  MCHP_PINMUX(b, 0, 0x28c, 6, periph)
/* pb0_scom1p2_in */
#define PB0_SCOM1P2_IN   MCHP_PINMUX(b, 0, 0x58, 4, periph)
/* pb0_scom1p2_out */
#define PB0_SCOM1P2_OUT  MCHP_PINMUX(b, 0, 0x28c, 5, periph)
/* pb0_scom1p3_in */
#define PB0_SCOM1P3_IN   MCHP_PINMUX(b, 0, 0x5c, 11, periph)
/* pb0_scom1p3_out */
#define PB0_SCOM1P3_OUT  MCHP_PINMUX(b, 0, 0x290, 5, periph)
/* pb0_scom2p0_out */
#define PB0_SCOM2P0_OUT  MCHP_PINMUX(b, 0, 0x28c, 7, periph)
/* pb0_scom2p1_in */
#define PB0_SCOM2P1_IN   MCHP_PINMUX(b, 0, 0x64, 4, periph)
/* pb0_scom2p1_out */
#define PB0_SCOM2P1_OUT  MCHP_PINMUX(b, 0, 0x28c, 8, periph)
/* pb0_scom2p2_in */
#define PB0_SCOM2P2_IN   MCHP_PINMUX(b, 0, 0x68, 11, periph)
/* pb0_scom2p2_out */
#define PB0_SCOM2P2_OUT  MCHP_PINMUX(b, 0, 0x290, 8, periph)
/* pb0_scom3p0_in */
#define PB0_SCOM3P0_IN   MCHP_PINMUX(b, 0, 0x70, 4, periph)
/* pb0_scom3p0_out */
#define PB0_SCOM3P0_OUT  MCHP_PINMUX(b, 0, 0x28c, 9, periph)
/* pb0_scom3p1_in */
#define PB0_SCOM3P1_IN   MCHP_PINMUX(b, 0, 0x74, 11, periph)
/* pb0_scom3p1_out */
#define PB0_SCOM3P1_OUT  MCHP_PINMUX(b, 0, 0x290, 9, periph)
/* pb0_scom3p3_out */
#define PB0_SCOM3P3_OUT  MCHP_PINMUX(b, 0, 0x28c, 10, periph)
/* pb0_tc0wo0g1_in */
#define PB0_TC0WO0G1_IN  MCHP_PINMUX(b, 0, 0xb0, 4, periph)
/* pb0_tc0wo0g2_in */
#define PB0_TC0WO0G2_IN  MCHP_PINMUX(b, 0, 0xb4, 11, periph)
/* pb0_tc0wo1_out */
#define PB0_TC0WO1_OUT   MCHP_PINMUX(b, 0, 0x28c, 18, periph)
/* pb0_tc1wo0g1_in */
#define PB0_TC1WO0G1_IN  MCHP_PINMUX(b, 0, 0xc0, 4, periph)
/* pb0_tc1wo0_out */
#define PB0_TC1WO0_OUT   MCHP_PINMUX(b, 0, 0x28c, 20, periph)
/* pb0_tc1wo1g2_in */
#define PB0_TC1WO1G2_IN  MCHP_PINMUX(b, 0, 0xc4, 11, periph)
/* pb0_tc1wo1_out */
#define PB0_TC1WO1_OUT   MCHP_PINMUX(b, 0, 0x290, 20, periph)
/* pb0_tc2wo0g1_in */
#define PB0_TC2WO0G1_IN  MCHP_PINMUX(b, 0, 0xc8, 4, periph)
/* pb0_tc2wo0_out */
#define PB0_TC2WO0_OUT   MCHP_PINMUX(b, 0, 0x28c, 21, periph)
/* pb0_tc2wo1g2_in */
#define PB0_TC2WO1G2_IN  MCHP_PINMUX(b, 0, 0xd0, 11, periph)
/* pb0_tc2wo1_out */
#define PB0_TC2WO1_OUT   MCHP_PINMUX(b, 0, 0x290, 21, periph)
/* pb0_tc3wo0g1_in */
#define PB0_TC3WO0G1_IN  MCHP_PINMUX(b, 0, 0xd8, 4, periph)
/* pb0_tc3wo0_out */
#define PB0_TC3WO0_OUT   MCHP_PINMUX(b, 0, 0x28c, 22, periph)
/* pb0_tc3wo1g2_in */
#define PB0_TC3WO1G2_IN  MCHP_PINMUX(b, 0, 0xe0, 11, periph)
/* pb0_tc3wo1_out */
#define PB0_TC3WO1_OUT   MCHP_PINMUX(b, 0, 0x290, 22, periph)
/* pb0_tcc0wo0_out */
#define PB0_TCC0WO0_OUT  MCHP_PINMUX(b, 0, 0x28c, 11, periph)
/* pb0_tcc0wo1_out */
#define PB0_TCC0WO1_OUT  MCHP_PINMUX(b, 0, 0x290, 11, periph)
/* pb0_tcc0wo2_out */
#define PB0_TCC0WO2_OUT  MCHP_PINMUX(b, 0, 0x28c, 13, periph)
/* pb0_tcc0wo3_out */
#define PB0_TCC0WO3_OUT  MCHP_PINMUX(b, 0, 0x290, 13, periph)
/* pb0_tcc0wo4_out */
#define PB0_TCC0WO4_OUT  MCHP_PINMUX(b, 0, 0x28c, 12, periph)
/* pb0_tcc0wo5_out */
#define PB0_TCC0WO5_OUT  MCHP_PINMUX(b, 0, 0x290, 12, periph)
/* pb0_tcc1wo0_out */
#define PB0_TCC1WO0_OUT  MCHP_PINMUX(b, 0, 0x28c, 14, periph)
/* pb0_tcc1wo1_out */
#define PB0_TCC1WO1_OUT  MCHP_PINMUX(b, 0, 0x290, 14, periph)
/* pb0_tcc1wo2_out */
#define PB0_TCC1WO2_OUT  MCHP_PINMUX(b, 0, 0x28c, 16, periph)
/* pb0_tcc1wo3_out */
#define PB0_TCC1WO3_OUT  MCHP_PINMUX(b, 0, 0x290, 16, periph)
/* pb0_tcc1wo4_out */
#define PB0_TCC1WO4_OUT  MCHP_PINMUX(b, 0, 0x28c, 15, periph)
/* pb0_tcc1wo5_out */
#define PB0_TCC1WO5_OUT  MCHP_PINMUX(b, 0, 0x290, 15, periph)
/* pb0_tcc2wo0_out */
#define PB0_TCC2WO0_OUT  MCHP_PINMUX(b, 0, 0x28c, 17, periph)
/* pb0_tcc2wo1_out */
#define PB0_TCC2WO1_OUT  MCHP_PINMUX(b, 0, 0x290, 17, periph)
/* pb1_cclin1_in */
#define PB1_CCLIN1_IN    MCHP_PINMUX(b, 1, 0x9c, 4, periph)
/* pb1_cclin2_in */
#define PB1_CCLIN2_IN    MCHP_PINMUX(b, 1, 0xa0, 11, periph)
/* pb1_cclin4_in */
#define PB1_CCLIN4_IN    MCHP_PINMUX(b, 1, 0xa8, 4, periph)
/* pb1_cclin5_in */
#define PB1_CCLIN5_IN    MCHP_PINMUX(b, 1, 0xac, 11, periph)
/* pb1_cclout0_out */
#define PB1_CCLOUT0_OUT  MCHP_PINMUX(b, 1, 0x298, 28, periph)
/* pb1_cclout1_out */
#define PB1_CCLOUT1_OUT  MCHP_PINMUX(b, 1, 0x294, 28, periph)
/* pb1_extint1_in */
#define PB1_EXTINT1_IN   MCHP_PINMUX(b, 1, 0x4, 4, periph)
/* pb1_extint2_in */
#define PB1_EXTINT2_IN   MCHP_PINMUX(b, 1, 0x8, 11, periph)
/* pb1_qcs_out */
#define PB1_QCS_OUT      MCHP_PINMUX(b, 1, 0x294, 24, periph)
/* pb1_qd0_out */
#define PB1_QD0_OUT      MCHP_PINMUX(b, 1, 0x294, 25, periph)
/* pb1_qd1_out */
#define PB1_QD1_OUT      MCHP_PINMUX(b, 1, 0x298, 25, periph)
/* pb1_qd2_in */
#define PB1_QD2_IN       MCHP_PINMUX(b, 1, 0x8c, 4, periph)
/* pb1_qd2_out */
#define PB1_QD2_OUT      MCHP_PINMUX(b, 1, 0x294, 27, periph)
/* pb1_qd3_in */
#define PB1_QD3_IN       MCHP_PINMUX(b, 1, 0x90, 11, periph)
/* pb1_qd3_out */
#define PB1_QD3_OUT      MCHP_PINMUX(b, 1, 0x294, 26, periph)
/* pb1_qsck_out */
#define PB1_QSCK_OUT     MCHP_PINMUX(b, 1, 0x294, 23, periph)
/* pb1_refo2_out */
#define PB1_REFO2_OUT    MCHP_PINMUX(b, 1, 0x294, 19, periph)
/* pb1_refo3_out */
#define PB1_REFO3_OUT    MCHP_PINMUX(b, 1, 0x298, 19, periph)
/* pb1_scom0p0_in */
#define PB1_SCOM0P0_IN   MCHP_PINMUX(b, 1, 0x40, 4, periph)
/* pb1_scom0p0_out */
#define PB1_SCOM0P0_OUT  MCHP_PINMUX(b, 1, 0x294, 1, periph)
/* pb1_scom0p1_in */
#define PB1_SCOM0P1_IN   MCHP_PINMUX(b, 1, 0x44, 11, periph)
/* pb1_scom0p1_out */
#define PB1_SCOM0P1_OUT  MCHP_PINMUX(b, 1, 0x298, 1, periph)
/* pb1_scom0p2_out */
#define PB1_SCOM0P2_OUT  MCHP_PINMUX(b, 1, 0x294, 3, periph)
/* pb1_scom0p3_out */
#define PB1_SCOM0P3_OUT  MCHP_PINMUX(b, 1, 0x294, 2, periph)
/* pb1_scom1p0_in */
#define PB1_SCOM1P0_IN   MCHP_PINMUX(b, 1, 0x50, 11, periph)
/* pb1_scom1p0_out */
#define PB1_SCOM1P0_OUT  MCHP_PINMUX(b, 1, 0x298, 5, periph)
/* pb1_scom1p1_out */
#define PB1_SCOM1P1_OUT  MCHP_PINMUX(b, 1, 0x294, 4, periph)
/* pb1_scom1p2_out */
#define PB1_SCOM1P2_OUT  MCHP_PINMUX(b, 1, 0x294, 6, periph)
/* pb1_scom1p3_in */
#define PB1_SCOM1P3_IN   MCHP_PINMUX(b, 1, 0x5c, 4, periph)
/* pb1_scom1p3_out */
#define PB1_SCOM1P3_OUT  MCHP_PINMUX(b, 1, 0x294, 5, periph)
/* pb1_scom2p1_out */
#define PB1_SCOM2P1_OUT  MCHP_PINMUX(b, 1, 0x294, 7, periph)
/* pb1_scom2p2_in */
#define PB1_SCOM2P2_IN   MCHP_PINMUX(b, 1, 0x68, 4, periph)
/* pb1_scom2p2_out */
#define PB1_SCOM2P2_OUT  MCHP_PINMUX(b, 1, 0x294, 8, periph)
/* pb1_scom2p3_in */
#define PB1_SCOM2P3_IN   MCHP_PINMUX(b, 1, 0x6c, 11, periph)
/* pb1_scom2p3_out */
#define PB1_SCOM2P3_OUT  MCHP_PINMUX(b, 1, 0x298, 8, periph)
/* pb1_scom3p0_out */
#define PB1_SCOM3P0_OUT  MCHP_PINMUX(b, 1, 0x294, 10, periph)
/* pb1_scom3p1_in */
#define PB1_SCOM3P1_IN   MCHP_PINMUX(b, 1, 0x74, 4, periph)
/* pb1_scom3p1_out */
#define PB1_SCOM3P1_OUT  MCHP_PINMUX(b, 1, 0x294, 9, periph)
/* pb1_scom3p2_in */
#define PB1_SCOM3P2_IN   MCHP_PINMUX(b, 1, 0x78, 11, periph)
/* pb1_scom3p2_out */
#define PB1_SCOM3P2_OUT  MCHP_PINMUX(b, 1, 0x298, 9, periph)
/* pb1_tc0wo0g2_in */
#define PB1_TC0WO0G2_IN  MCHP_PINMUX(b, 1, 0xb4, 4, periph)
/* pb1_tc0wo0_out */
#define PB1_TC0WO0_OUT   MCHP_PINMUX(b, 1, 0x298, 18, periph)
/* pb1_tc0wo1g3_in */
#define PB1_TC0WO1G3_IN  MCHP_PINMUX(b, 1, 0xb8, 11, periph)
/* pb1_tc0wo1_out */
#define PB1_TC0WO1_OUT   MCHP_PINMUX(b, 1, 0x294, 18, periph)
/* pb1_tc1wo0_out */
#define PB1_TC1WO0_OUT   MCHP_PINMUX(b, 1, 0x298, 20, periph)
/* pb1_tc1wo1g2_in */
#define PB1_TC1WO1G2_IN  MCHP_PINMUX(b, 1, 0xc4, 4, periph)
/* pb1_tc1wo1_out */
#define PB1_TC1WO1_OUT   MCHP_PINMUX(b, 1, 0x294, 20, periph)
/* pb1_tc2wo0g3_in */
#define PB1_TC2WO0G3_IN  MCHP_PINMUX(b, 1, 0xcc, 11, periph)
/* pb1_tc2wo0_out */
#define PB1_TC2WO0_OUT   MCHP_PINMUX(b, 1, 0x298, 21, periph)
/* pb1_tc2wo1g2_in */
#define PB1_TC2WO1G2_IN  MCHP_PINMUX(b, 1, 0xd0, 4, periph)
/* pb1_tc2wo1_out */
#define PB1_TC2WO1_OUT   MCHP_PINMUX(b, 1, 0x294, 21, periph)
/* pb1_tc3wo0g3_in */
#define PB1_TC3WO0G3_IN  MCHP_PINMUX(b, 1, 0xdc, 11, periph)
/* pb1_tc3wo0_out */
#define PB1_TC3WO0_OUT   MCHP_PINMUX(b, 1, 0x298, 22, periph)
/* pb1_tc3wo1g2_in */
#define PB1_TC3WO1G2_IN  MCHP_PINMUX(b, 1, 0xe0, 4, periph)
/* pb1_tc3wo1_out */
#define PB1_TC3WO1_OUT   MCHP_PINMUX(b, 1, 0x294, 22, periph)
/* pb1_tcc0wo0_out */
#define PB1_TCC0WO0_OUT  MCHP_PINMUX(b, 1, 0x298, 12, periph)
/* pb1_tcc0wo1_out */
#define PB1_TCC0WO1_OUT  MCHP_PINMUX(b, 1, 0x294, 11, periph)
/* pb1_tcc0wo2_out */
#define PB1_TCC0WO2_OUT  MCHP_PINMUX(b, 1, 0x298, 11, periph)
/* pb1_tcc0wo3_out */
#define PB1_TCC0WO3_OUT  MCHP_PINMUX(b, 1, 0x294, 13, periph)
/* pb1_tcc0wo4_out */
#define PB1_TCC0WO4_OUT  MCHP_PINMUX(b, 1, 0x298, 13, periph)
/* pb1_tcc0wo5_out */
#define PB1_TCC0WO5_OUT  MCHP_PINMUX(b, 1, 0x294, 12, periph)
/* pb1_tcc1wo0_out */
#define PB1_TCC1WO0_OUT  MCHP_PINMUX(b, 1, 0x298, 15, periph)
/* pb1_tcc1wo1_out */
#define PB1_TCC1WO1_OUT  MCHP_PINMUX(b, 1, 0x294, 14, periph)
/* pb1_tcc1wo2_out */
#define PB1_TCC1WO2_OUT  MCHP_PINMUX(b, 1, 0x298, 14, periph)
/* pb1_tcc1wo3_out */
#define PB1_TCC1WO3_OUT  MCHP_PINMUX(b, 1, 0x294, 16, periph)
/* pb1_tcc1wo4_out */
#define PB1_TCC1WO4_OUT  MCHP_PINMUX(b, 1, 0x298, 16, periph)
/* pb1_tcc1wo5_out */
#define PB1_TCC1WO5_OUT  MCHP_PINMUX(b, 1, 0x294, 15, periph)
/* pb1_tcc2wo0_out */
#define PB1_TCC2WO0_OUT  MCHP_PINMUX(b, 1, 0x298, 17, periph)
/* pb1_tcc2wo1_out */
#define PB1_TCC2WO1_OUT  MCHP_PINMUX(b, 1, 0x294, 17, periph)
/* pb2_cclin2_in */
#define PB2_CCLIN2_IN    MCHP_PINMUX(b, 2, 0xa0, 4, periph)
/* pb2_cclin5_in */
#define PB2_CCLIN5_IN    MCHP_PINMUX(b, 2, 0xac, 4, periph)
/* pb2_cclout0_out */
#define PB2_CCLOUT0_OUT  MCHP_PINMUX(b, 2, 0x29c, 28, periph)
/* pb2_cclout1_out */
#define PB2_CCLOUT1_OUT  MCHP_PINMUX(b, 2, 0x2a0, 28, periph)
/* pb2_extint2_in */
#define PB2_EXTINT2_IN   MCHP_PINMUX(b, 2, 0x8, 4, periph)
/* pb2_extint3_in */
#define PB2_EXTINT3_IN   MCHP_PINMUX(b, 2, 0xc, 11, periph)
/* pb2_nmi_in */
#define PB2_NMI_IN       MCHP_PINMUX(b, 2, 0x3c, 11, periph)
/* pb2_qcs_out */
#define PB2_QCS_OUT      MCHP_PINMUX(b, 2, 0x29c, 24, periph)
/* pb2_qd0_in */
#define PB2_QD0_IN       MCHP_PINMUX(b, 2, 0x84, 11, periph)
/* pb2_qd0_out */
#define PB2_QD0_OUT      MCHP_PINMUX(b, 2, 0x29c, 26, periph)
/* pb2_qd1_out */
#define PB2_QD1_OUT      MCHP_PINMUX(b, 2, 0x29c, 25, periph)
/* pb2_qd2_out */
#define PB2_QD2_OUT      MCHP_PINMUX(b, 2, 0x2a0, 25, periph)
/* pb2_qd3_in */
#define PB2_QD3_IN       MCHP_PINMUX(b, 2, 0x90, 4, periph)
/* pb2_qd3_out */
#define PB2_QD3_OUT      MCHP_PINMUX(b, 2, 0x29c, 27, periph)
/* pb2_qsck_out */
#define PB2_QSCK_OUT     MCHP_PINMUX(b, 2, 0x29c, 23, periph)
/* pb2_refo3_out */
#define PB2_REFO3_OUT    MCHP_PINMUX(b, 2, 0x29c, 19, periph)
/* pb2_refo4_out */
#define PB2_REFO4_OUT    MCHP_PINMUX(b, 2, 0x2a0, 19, periph)
/* pb2_scom0p0_out */
#define PB2_SCOM0P0_OUT  MCHP_PINMUX(b, 2, 0x29c, 2, periph)
/* pb2_scom0p1_in */
#define PB2_SCOM0P1_IN   MCHP_PINMUX(b, 2, 0x44, 4, periph)
/* pb2_scom0p1_out */
#define PB2_SCOM0P1_OUT  MCHP_PINMUX(b, 2, 0x29c, 1, periph)
/* pb2_scom0p2_in */
#define PB2_SCOM0P2_IN   MCHP_PINMUX(b, 2, 0x48, 11, periph)
/* pb2_scom0p2_out */
#define PB2_SCOM0P2_OUT  MCHP_PINMUX(b, 2, 0x2a0, 1, periph)
/* pb2_scom0p3_out */
#define PB2_SCOM0P3_OUT  MCHP_PINMUX(b, 2, 0x29c, 3, periph)
/* pb2_scom1p0_in */
#define PB2_SCOM1P0_IN   MCHP_PINMUX(b, 2, 0x50, 4, periph)
/* pb2_scom1p0_out */
#define PB2_SCOM1P0_OUT  MCHP_PINMUX(b, 2, 0x29c, 5, periph)
/* pb2_scom1p1_in */
#define PB2_SCOM1P1_IN   MCHP_PINMUX(b, 2, 0x54, 11, periph)
/* pb2_scom1p1_out */
#define PB2_SCOM1P1_OUT  MCHP_PINMUX(b, 2, 0x2a0, 5, periph)
/* pb2_scom1p2_out */
#define PB2_SCOM1P2_OUT  MCHP_PINMUX(b, 2, 0x29c, 4, periph)
/* pb2_scom1p3_out */
#define PB2_SCOM1P3_OUT  MCHP_PINMUX(b, 2, 0x29c, 6, periph)
/* pb2_scom2p0_in */
#define PB2_SCOM2P0_IN   MCHP_PINMUX(b, 2, 0x60, 11, periph)
/* pb2_scom2p0_out */
#define PB2_SCOM2P0_OUT  MCHP_PINMUX(b, 2, 0x2a0, 8, periph)
/* pb2_scom2p2_out */
#define PB2_SCOM2P2_OUT  MCHP_PINMUX(b, 2, 0x29c, 7, periph)
/* pb2_scom2p3_in */
#define PB2_SCOM2P3_IN   MCHP_PINMUX(b, 2, 0x6c, 4, periph)
/* pb2_scom2p3_out */
#define PB2_SCOM2P3_OUT  MCHP_PINMUX(b, 2, 0x29c, 8, periph)
/* pb2_scom3p1_out */
#define PB2_SCOM3P1_OUT  MCHP_PINMUX(b, 2, 0x29c, 10, periph)
/* pb2_scom3p2_in */
#define PB2_SCOM3P2_IN   MCHP_PINMUX(b, 2, 0x78, 4, periph)
/* pb2_scom3p2_out */
#define PB2_SCOM3P2_OUT  MCHP_PINMUX(b, 2, 0x29c, 9, periph)
/* pb2_scom3p3_in */
#define PB2_SCOM3P3_IN   MCHP_PINMUX(b, 2, 0x7c, 11, periph)
/* pb2_scom3p3_out */
#define PB2_SCOM3P3_OUT  MCHP_PINMUX(b, 2, 0x2a0, 9, periph)
/* pb2_tc0wo0_out */
#define PB2_TC0WO0_OUT   MCHP_PINMUX(b, 2, 0x29c, 18, periph)
/* pb2_tc0wo1g3_in */
#define PB2_TC0WO1G3_IN  MCHP_PINMUX(b, 2, 0xb8, 4, periph)
/* pb2_tc0wo1g4_in */
#define PB2_TC0WO1G4_IN  MCHP_PINMUX(b, 2, 0xbc, 11, periph)
/* pb2_tc1wo0_out */
#define PB2_TC1WO0_OUT   MCHP_PINMUX(b, 2, 0x29c, 20, periph)
/* pb2_tc1wo1_out */
#define PB2_TC1WO1_OUT   MCHP_PINMUX(b, 2, 0x2a0, 20, periph)
/* pb2_tc2wo0g3_in */
#define PB2_TC2WO0G3_IN  MCHP_PINMUX(b, 2, 0xcc, 4, periph)
/* pb2_tc2wo0_out */
#define PB2_TC2WO0_OUT   MCHP_PINMUX(b, 2, 0x29c, 21, periph)
/* pb2_tc2wo1g4_in */
#define PB2_TC2WO1G4_IN  MCHP_PINMUX(b, 2, 0xd4, 11, periph)
/* pb2_tc2wo1_out */
#define PB2_TC2WO1_OUT   MCHP_PINMUX(b, 2, 0x2a0, 21, periph)
/* pb2_tc3wo0g3_in */
#define PB2_TC3WO0G3_IN  MCHP_PINMUX(b, 2, 0xdc, 4, periph)
/* pb2_tc3wo0_out */
#define PB2_TC3WO0_OUT   MCHP_PINMUX(b, 2, 0x29c, 22, periph)
/* pb2_tc3wo1g4_in */
#define PB2_TC3WO1G4_IN  MCHP_PINMUX(b, 2, 0xe4, 11, periph)
/* pb2_tc3wo1_out */
#define PB2_TC3WO1_OUT   MCHP_PINMUX(b, 2, 0x2a0, 22, periph)
/* pb2_tcc0wo0_out */
#define PB2_TCC0WO0_OUT  MCHP_PINMUX(b, 2, 0x29c, 12, periph)
/* pb2_tcc0wo1_out */
#define PB2_TCC0WO1_OUT  MCHP_PINMUX(b, 2, 0x2a0, 12, periph)
/* pb2_tcc0wo2_out */
#define PB2_TCC0WO2_OUT  MCHP_PINMUX(b, 2, 0x29c, 11, periph)
/* pb2_tcc0wo3_out */
#define PB2_TCC0WO3_OUT  MCHP_PINMUX(b, 2, 0x2a0, 11, periph)
/* pb2_tcc0wo4_out */
#define PB2_TCC0WO4_OUT  MCHP_PINMUX(b, 2, 0x29c, 13, periph)
/* pb2_tcc0wo5_out */
#define PB2_TCC0WO5_OUT  MCHP_PINMUX(b, 2, 0x2a0, 13, periph)
/* pb2_tcc1wo0_out */
#define PB2_TCC1WO0_OUT  MCHP_PINMUX(b, 2, 0x29c, 15, periph)
/* pb2_tcc1wo1_out */
#define PB2_TCC1WO1_OUT  MCHP_PINMUX(b, 2, 0x2a0, 15, periph)
/* pb2_tcc1wo2_out */
#define PB2_TCC1WO2_OUT  MCHP_PINMUX(b, 2, 0x29c, 14, periph)
/* pb2_tcc1wo3_out */
#define PB2_TCC1WO3_OUT  MCHP_PINMUX(b, 2, 0x2a0, 14, periph)
/* pb2_tcc1wo4_out */
#define PB2_TCC1WO4_OUT  MCHP_PINMUX(b, 2, 0x29c, 16, periph)
/* pb2_tcc1wo5_out */
#define PB2_TCC1WO5_OUT  MCHP_PINMUX(b, 2, 0x2a0, 16, periph)
/* pb2_tcc2wo0_out */
#define PB2_TCC2WO0_OUT  MCHP_PINMUX(b, 2, 0x29c, 17, periph)
/* pb2_tcc2wo1_out */
#define PB2_TCC2WO1_OUT  MCHP_PINMUX(b, 2, 0x2a0, 17, periph)
/* pb3_cclin0_in */
#define PB3_CCLIN0_IN    MCHP_PINMUX(b, 3, 0x98, 12, periph)
/* pb3_cclin3_in */
#define PB3_CCLIN3_IN    MCHP_PINMUX(b, 3, 0xa4, 12, periph)
/* pb3_cclout0_out */
#define PB3_CCLOUT0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 28, periph)
/* pb3_cclout1_out */
#define PB3_CCLOUT1_OUT  MCHP_PINMUX(b, 3, 0x2a8, 28, periph)
/* pb3_extint0_in */
#define PB3_EXTINT0_IN   MCHP_PINMUX(b, 3, 0x0, 12, periph)
/* pb3_extint3_in */
#define PB3_EXTINT3_IN   MCHP_PINMUX(b, 3, 0xc, 4, periph)
/* pb3_nmi_in */
#define PB3_NMI_IN       MCHP_PINMUX(b, 3, 0x3c, 4, periph)
/* pb3_qcs_out */
#define PB3_QCS_OUT      MCHP_PINMUX(b, 3, 0x2a4, 24, periph)
/* pb3_qd0_in */
#define PB3_QD0_IN       MCHP_PINMUX(b, 3, 0x84, 4, periph)
/* pb3_qd0_out */
#define PB3_QD0_OUT      MCHP_PINMUX(b, 3, 0x2a8, 27, periph)
/* pb3_qd1_in */
#define PB3_QD1_IN       MCHP_PINMUX(b, 3, 0x88, 12, periph)
/* pb3_qd1_out */
#define PB3_QD1_OUT      MCHP_PINMUX(b, 3, 0x2a4, 27, periph)
/* pb3_qd2_out */
#define PB3_QD2_OUT      MCHP_PINMUX(b, 3, 0x2a4, 26, periph)
/* pb3_qd3_out */
#define PB3_QD3_OUT      MCHP_PINMUX(b, 3, 0x2a4, 25, periph)
/* pb3_qsck_in */
#define PB3_QSCK_IN      MCHP_PINMUX(b, 3, 0x80, 12, periph)
/* pb3_qsck_out */
#define PB3_QSCK_OUT     MCHP_PINMUX(b, 3, 0x2a4, 23, periph)
/* pb3_refi_in */
#define PB3_REFI_IN      MCHP_PINMUX(b, 3, 0x94, 12, periph)
/* pb3_refo1_out */
#define PB3_REFO1_OUT    MCHP_PINMUX(b, 3, 0x2a4, 19, periph)
/* pb3_refo4_out */
#define PB3_REFO4_OUT    MCHP_PINMUX(b, 3, 0x2a8, 19, periph)
/* pb3_scom0p0_out */
#define PB3_SCOM0P0_OUT  MCHP_PINMUX(b, 3, 0x2a8, 3, periph)
/* pb3_scom0p1_out */
#define PB3_SCOM0P1_OUT  MCHP_PINMUX(b, 3, 0x2a4, 3, periph)
/* pb3_scom0p2_in */
#define PB3_SCOM0P2_IN   MCHP_PINMUX(b, 3, 0x48, 4, periph)
/* pb3_scom0p2_out */
#define PB3_SCOM0P2_OUT  MCHP_PINMUX(b, 3, 0x2a4, 2, periph)
/* pb3_scom0p3_in */
#define PB3_SCOM0P3_IN   MCHP_PINMUX(b, 3, 0x4c, 12, periph)
/* pb3_scom0p3_out */
#define PB3_SCOM0P3_OUT  MCHP_PINMUX(b, 3, 0x2a4, 1, periph)
/* pb3_scom1p0_out */
#define PB3_SCOM1P0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 4, periph)
/* pb3_scom1p1_in */
#define PB3_SCOM1P1_IN   MCHP_PINMUX(b, 3, 0x54, 4, periph)
/* pb3_scom1p1_out */
#define PB3_SCOM1P1_OUT  MCHP_PINMUX(b, 3, 0x2a4, 6, periph)
/* pb3_scom1p2_in */
#define PB3_SCOM1P2_IN   MCHP_PINMUX(b, 3, 0x58, 12, periph)
/* pb3_scom1p2_out */
#define PB3_SCOM1P2_OUT  MCHP_PINMUX(b, 3, 0x2a4, 5, periph)
/* pb3_scom1p3_out */
#define PB3_SCOM1P3_OUT  MCHP_PINMUX(b, 3, 0x2a8, 4, periph)
/* pb3_scom2p0_in */
#define PB3_SCOM2P0_IN   MCHP_PINMUX(b, 3, 0x60, 4, periph)
/* pb3_scom2p0_out */
#define PB3_SCOM2P0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 7, periph)
/* pb3_scom2p1_in */
#define PB3_SCOM2P1_IN   MCHP_PINMUX(b, 3, 0x64, 12, periph)
/* pb3_scom2p1_out */
#define PB3_SCOM2P1_OUT  MCHP_PINMUX(b, 3, 0x2a4, 8, periph)
/* pb3_scom2p3_out */
#define PB3_SCOM2P3_OUT  MCHP_PINMUX(b, 3, 0x2a8, 7, periph)
/* pb3_scom3p0_in */
#define PB3_SCOM3P0_IN   MCHP_PINMUX(b, 3, 0x70, 12, periph)
/* pb3_scom3p0_out */
#define PB3_SCOM3P0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 9, periph)
/* pb3_scom3p2_out */
#define PB3_SCOM3P2_OUT  MCHP_PINMUX(b, 3, 0x2a8, 10, periph)
/* pb3_scom3p3_in */
#define PB3_SCOM3P3_IN   MCHP_PINMUX(b, 3, 0x7c, 4, periph)
/* pb3_scom3p3_out */
#define PB3_SCOM3P3_OUT  MCHP_PINMUX(b, 3, 0x2a4, 10, periph)
/* pb3_tc0wo0g1_in */
#define PB3_TC0WO0G1_IN  MCHP_PINMUX(b, 3, 0xb0, 12, periph)
/* pb3_tc0wo0_out */
#define PB3_TC0WO0_OUT   MCHP_PINMUX(b, 3, 0x2a8, 18, periph)
/* pb3_tc0wo1g4_in */
#define PB3_TC0WO1G4_IN  MCHP_PINMUX(b, 3, 0xbc, 4, periph)
/* pb3_tc0wo1_out */
#define PB3_TC0WO1_OUT   MCHP_PINMUX(b, 3, 0x2a4, 18, periph)
/* pb3_tc1wo0g1_in */
#define PB3_TC1WO0G1_IN  MCHP_PINMUX(b, 3, 0xc0, 12, periph)
/* pb3_tc1wo0_out */
#define PB3_TC1WO0_OUT   MCHP_PINMUX(b, 3, 0x2a4, 20, periph)
/* pb3_tc1wo1_out */
#define PB3_TC1WO1_OUT   MCHP_PINMUX(b, 3, 0x2a8, 20, periph)
/* pb3_tc2wo0g1_in */
#define PB3_TC2WO0G1_IN  MCHP_PINMUX(b, 3, 0xc8, 12, periph)
/* pb3_tc2wo0_out */
#define PB3_TC2WO0_OUT   MCHP_PINMUX(b, 3, 0x2a4, 21, periph)
/* pb3_tc2wo1g4_in */
#define PB3_TC2WO1G4_IN  MCHP_PINMUX(b, 3, 0xd4, 4, periph)
/* pb3_tc2wo1_out */
#define PB3_TC2WO1_OUT   MCHP_PINMUX(b, 3, 0x2a8, 21, periph)
/* pb3_tc3wo0g1_in */
#define PB3_TC3WO0G1_IN  MCHP_PINMUX(b, 3, 0xd8, 12, periph)
/* pb3_tc3wo0_out */
#define PB3_TC3WO0_OUT   MCHP_PINMUX(b, 3, 0x2a4, 22, periph)
/* pb3_tc3wo1g4_in */
#define PB3_TC3WO1G4_IN  MCHP_PINMUX(b, 3, 0xe4, 4, periph)
/* pb3_tc3wo1_out */
#define PB3_TC3WO1_OUT   MCHP_PINMUX(b, 3, 0x2a8, 22, periph)
/* pb3_tcc0wo0_out */
#define PB3_TCC0WO0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 11, periph)
/* pb3_tcc0wo1_out */
#define PB3_TCC0WO1_OUT  MCHP_PINMUX(b, 3, 0x2a8, 12, periph)
/* pb3_tcc0wo2_out */
#define PB3_TCC0WO2_OUT  MCHP_PINMUX(b, 3, 0x2a4, 13, periph)
/* pb3_tcc0wo3_out */
#define PB3_TCC0WO3_OUT  MCHP_PINMUX(b, 3, 0x2a8, 11, periph)
/* pb3_tcc0wo4_out */
#define PB3_TCC0WO4_OUT  MCHP_PINMUX(b, 3, 0x2a4, 12, periph)
/* pb3_tcc0wo5_out */
#define PB3_TCC0WO5_OUT  MCHP_PINMUX(b, 3, 0x2a8, 13, periph)
/* pb3_tcc1wo0_out */
#define PB3_TCC1WO0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 14, periph)
/* pb3_tcc1wo1_out */
#define PB3_TCC1WO1_OUT  MCHP_PINMUX(b, 3, 0x2a8, 15, periph)
/* pb3_tcc1wo2_out */
#define PB3_TCC1WO2_OUT  MCHP_PINMUX(b, 3, 0x2a4, 16, periph)
/* pb3_tcc1wo3_out */
#define PB3_TCC1WO3_OUT  MCHP_PINMUX(b, 3, 0x2a8, 14, periph)
/* pb3_tcc1wo4_out */
#define PB3_TCC1WO4_OUT  MCHP_PINMUX(b, 3, 0x2a4, 15, periph)
/* pb3_tcc1wo5_out */
#define PB3_TCC1WO5_OUT  MCHP_PINMUX(b, 3, 0x2a8, 16, periph)
/* pb3_tcc2wo0_out */
#define PB3_TCC2WO0_OUT  MCHP_PINMUX(b, 3, 0x2a4, 17, periph)
/* pb3_tcc2wo1_out */
#define PB3_TCC2WO1_OUT  MCHP_PINMUX(b, 3, 0x2a8, 17, periph)
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
/* pb4_scom2p0_out */
#define PB4_SCOM2P0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 7, periph)
/* pb4_scom2p1_in */
#define PB4_SCOM2P1_IN   MCHP_PINMUX(b, 4, 0x64, 5, periph)
/* pb4_scom2p1_out */
#define PB4_SCOM2P1_OUT  MCHP_PINMUX(b, 4, 0x2ac, 8, periph)
/* pb4_scom2p2_in */
#define PB4_SCOM2P2_IN   MCHP_PINMUX(b, 4, 0x68, 12, periph)
/* pb4_scom2p2_out */
#define PB4_SCOM2P2_OUT  MCHP_PINMUX(b, 4, 0x2b0, 8, periph)
/* pb4_scom3p0_in */
#define PB4_SCOM3P0_IN   MCHP_PINMUX(b, 4, 0x70, 5, periph)
/* pb4_scom3p0_out */
#define PB4_SCOM3P0_OUT  MCHP_PINMUX(b, 4, 0x2ac, 9, periph)
/* pb4_scom3p1_in */
#define PB4_SCOM3P1_IN   MCHP_PINMUX(b, 4, 0x74, 12, periph)
/* pb4_scom3p1_out */
#define PB4_SCOM3P1_OUT  MCHP_PINMUX(b, 4, 0x2b0, 9, periph)
/* pb4_scom3p3_out */
#define PB4_SCOM3P3_OUT  MCHP_PINMUX(b, 4, 0x2ac, 10, periph)
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
/* pb5_scom2p1_out */
#define PB5_SCOM2P1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 7, periph)
/* pb5_scom2p2_in */
#define PB5_SCOM2P2_IN   MCHP_PINMUX(b, 5, 0x68, 5, periph)
/* pb5_scom2p2_out */
#define PB5_SCOM2P2_OUT  MCHP_PINMUX(b, 5, 0x2b4, 8, periph)
/* pb5_scom2p3_in */
#define PB5_SCOM2P3_IN   MCHP_PINMUX(b, 5, 0x6c, 12, periph)
/* pb5_scom2p3_out */
#define PB5_SCOM2P3_OUT  MCHP_PINMUX(b, 5, 0x2b8, 8, periph)
/* pb5_scom3p0_out */
#define PB5_SCOM3P0_OUT  MCHP_PINMUX(b, 5, 0x2b4, 10, periph)
/* pb5_scom3p1_in */
#define PB5_SCOM3P1_IN   MCHP_PINMUX(b, 5, 0x74, 5, periph)
/* pb5_scom3p1_out */
#define PB5_SCOM3P1_OUT  MCHP_PINMUX(b, 5, 0x2b4, 9, periph)
/* pb5_scom3p2_in */
#define PB5_SCOM3P2_IN   MCHP_PINMUX(b, 5, 0x78, 12, periph)
/* pb5_scom3p2_out */
#define PB5_SCOM3P2_OUT  MCHP_PINMUX(b, 5, 0x2b8, 9, periph)
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
/* pb6_scom2p0_in */
#define PB6_SCOM2P0_IN   MCHP_PINMUX(b, 6, 0x60, 12, periph)
/* pb6_scom2p0_out */
#define PB6_SCOM2P0_OUT  MCHP_PINMUX(b, 6, 0x2c0, 8, periph)
/* pb6_scom2p2_out */
#define PB6_SCOM2P2_OUT  MCHP_PINMUX(b, 6, 0x2bc, 7, periph)
/* pb6_scom2p3_in */
#define PB6_SCOM2P3_IN   MCHP_PINMUX(b, 6, 0x6c, 5, periph)
/* pb6_scom2p3_out */
#define PB6_SCOM2P3_OUT  MCHP_PINMUX(b, 6, 0x2bc, 8, periph)
/* pb6_scom3p1_out */
#define PB6_SCOM3P1_OUT  MCHP_PINMUX(b, 6, 0x2bc, 10, periph)
/* pb6_scom3p2_in */
#define PB6_SCOM3P2_IN   MCHP_PINMUX(b, 6, 0x78, 5, periph)
/* pb6_scom3p2_out */
#define PB6_SCOM3P2_OUT  MCHP_PINMUX(b, 6, 0x2bc, 9, periph)
/* pb6_scom3p3_in */
#define PB6_SCOM3P3_IN   MCHP_PINMUX(b, 6, 0x7c, 12, periph)
/* pb6_scom3p3_out */
#define PB6_SCOM3P3_OUT  MCHP_PINMUX(b, 6, 0x2c0, 9, periph)
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
/* pb7_scom2p0_in */
#define PB7_SCOM2P0_IN   MCHP_PINMUX(b, 7, 0x60, 5, periph)
/* pb7_scom2p0_out */
#define PB7_SCOM2P0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 7, periph)
/* pb7_scom2p1_in */
#define PB7_SCOM2P1_IN   MCHP_PINMUX(b, 7, 0x64, 13, periph)
/* pb7_scom2p1_out */
#define PB7_SCOM2P1_OUT  MCHP_PINMUX(b, 7, 0x2c4, 8, periph)
/* pb7_scom2p3_out */
#define PB7_SCOM2P3_OUT  MCHP_PINMUX(b, 7, 0x2c8, 7, periph)
/* pb7_scom3p0_in */
#define PB7_SCOM3P0_IN   MCHP_PINMUX(b, 7, 0x70, 13, periph)
/* pb7_scom3p0_out */
#define PB7_SCOM3P0_OUT  MCHP_PINMUX(b, 7, 0x2c4, 9, periph)
/* pb7_scom3p2_out */
#define PB7_SCOM3P2_OUT  MCHP_PINMUX(b, 7, 0x2c8, 10, periph)
/* pb7_scom3p3_in */
#define PB7_SCOM3P3_IN   MCHP_PINMUX(b, 7, 0x7c, 5, periph)
/* pb7_scom3p3_out */
#define PB7_SCOM3P3_OUT  MCHP_PINMUX(b, 7, 0x2c4, 10, periph)
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
/* pb8_scom2p0_out */
#define PB8_SCOM2P0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 7, periph)
/* pb8_scom2p1_in */
#define PB8_SCOM2P1_IN   MCHP_PINMUX(b, 8, 0x64, 6, periph)
/* pb8_scom2p1_out */
#define PB8_SCOM2P1_OUT  MCHP_PINMUX(b, 8, 0x2cc, 8, periph)
/* pb8_scom2p2_in */
#define PB8_SCOM2P2_IN   MCHP_PINMUX(b, 8, 0x68, 13, periph)
/* pb8_scom2p2_out */
#define PB8_SCOM2P2_OUT  MCHP_PINMUX(b, 8, 0x2d0, 8, periph)
/* pb8_scom3p0_in */
#define PB8_SCOM3P0_IN   MCHP_PINMUX(b, 8, 0x70, 6, periph)
/* pb8_scom3p0_out */
#define PB8_SCOM3P0_OUT  MCHP_PINMUX(b, 8, 0x2cc, 9, periph)
/* pb8_scom3p1_in */
#define PB8_SCOM3P1_IN   MCHP_PINMUX(b, 8, 0x74, 13, periph)
/* pb8_scom3p1_out */
#define PB8_SCOM3P1_OUT  MCHP_PINMUX(b, 8, 0x2d0, 9, periph)
/* pb8_scom3p3_out */
#define PB8_SCOM3P3_OUT  MCHP_PINMUX(b, 8, 0x2cc, 10, periph)
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
/* pb9_scom2p1_out */
#define PB9_SCOM2P1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 7, periph)
/* pb9_scom2p2_in */
#define PB9_SCOM2P2_IN   MCHP_PINMUX(b, 9, 0x68, 6, periph)
/* pb9_scom2p2_out */
#define PB9_SCOM2P2_OUT  MCHP_PINMUX(b, 9, 0x2d4, 8, periph)
/* pb9_scom2p3_in */
#define PB9_SCOM2P3_IN   MCHP_PINMUX(b, 9, 0x6c, 13, periph)
/* pb9_scom2p3_out */
#define PB9_SCOM2P3_OUT  MCHP_PINMUX(b, 9, 0x2d8, 8, periph)
/* pb9_scom3p0_out */
#define PB9_SCOM3P0_OUT  MCHP_PINMUX(b, 9, 0x2d4, 10, periph)
/* pb9_scom3p1_in */
#define PB9_SCOM3P1_IN   MCHP_PINMUX(b, 9, 0x74, 6, periph)
/* pb9_scom3p1_out */
#define PB9_SCOM3P1_OUT  MCHP_PINMUX(b, 9, 0x2d4, 9, periph)
/* pb9_scom3p2_in */
#define PB9_SCOM3P2_IN   MCHP_PINMUX(b, 9, 0x78, 13, periph)
/* pb9_scom3p2_out */
#define PB9_SCOM3P2_OUT  MCHP_PINMUX(b, 9, 0x2d8, 9, periph)
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
/* pb10_cclin2_in */
#define PB10_CCLIN2_IN   MCHP_PINMUX(b, 10, 0xa0, 6, periph)
/* pb10_cclin5_in */
#define PB10_CCLIN5_IN   MCHP_PINMUX(b, 10, 0xac, 6, periph)
/* pb10_cclout0_out */
#define PB10_CCLOUT0_OUT MCHP_PINMUX(b, 10, 0x2dc, 28, periph)
/* pb10_cclout1_out */
#define PB10_CCLOUT1_OUT MCHP_PINMUX(b, 10, 0x2e0, 28, periph)
/* pb10_extint2_in */
#define PB10_EXTINT2_IN  MCHP_PINMUX(b, 10, 0x8, 6, periph)
/* pb10_extint3_in */
#define PB10_EXTINT3_IN  MCHP_PINMUX(b, 10, 0xc, 13, periph)
/* pb10_nmi_in */
#define PB10_NMI_IN      MCHP_PINMUX(b, 10, 0x3c, 13, periph)
/* pb10_qcs_out */
#define PB10_QCS_OUT     MCHP_PINMUX(b, 10, 0x2dc, 24, periph)
/* pb10_qd0_in */
#define PB10_QD0_IN      MCHP_PINMUX(b, 10, 0x84, 13, periph)
/* pb10_qd0_out */
#define PB10_QD0_OUT     MCHP_PINMUX(b, 10, 0x2dc, 26, periph)
/* pb10_qd1_out */
#define PB10_QD1_OUT     MCHP_PINMUX(b, 10, 0x2dc, 25, periph)
/* pb10_qd2_out */
#define PB10_QD2_OUT     MCHP_PINMUX(b, 10, 0x2e0, 25, periph)
/* pb10_qd3_in */
#define PB10_QD3_IN      MCHP_PINMUX(b, 10, 0x90, 6, periph)
/* pb10_qd3_out */
#define PB10_QD3_OUT     MCHP_PINMUX(b, 10, 0x2dc, 27, periph)
/* pb10_qsck_out */
#define PB10_QSCK_OUT    MCHP_PINMUX(b, 10, 0x2dc, 23, periph)
/* pb10_refo3_out */
#define PB10_REFO3_OUT   MCHP_PINMUX(b, 10, 0x2dc, 19, periph)
/* pb10_refo4_out */
#define PB10_REFO4_OUT   MCHP_PINMUX(b, 10, 0x2e0, 19, periph)
/* pb10_scom0p0_out */
#define PB10_SCOM0P0_OUT MCHP_PINMUX(b, 10, 0x2dc, 2, periph)
/* pb10_scom0p1_in */
#define PB10_SCOM0P1_IN  MCHP_PINMUX(b, 10, 0x44, 6, periph)
/* pb10_scom0p1_out */
#define PB10_SCOM0P1_OUT MCHP_PINMUX(b, 10, 0x2dc, 1, periph)
/* pb10_scom0p2_in */
#define PB10_SCOM0P2_IN  MCHP_PINMUX(b, 10, 0x48, 13, periph)
/* pb10_scom0p2_out */
#define PB10_SCOM0P2_OUT MCHP_PINMUX(b, 10, 0x2e0, 1, periph)
/* pb10_scom0p3_out */
#define PB10_SCOM0P3_OUT MCHP_PINMUX(b, 10, 0x2dc, 3, periph)
/* pb10_scom1p0_in */
#define PB10_SCOM1P0_IN  MCHP_PINMUX(b, 10, 0x50, 6, periph)
/* pb10_scom1p0_out */
#define PB10_SCOM1P0_OUT MCHP_PINMUX(b, 10, 0x2dc, 5, periph)
/* pb10_scom1p1_in */
#define PB10_SCOM1P1_IN  MCHP_PINMUX(b, 10, 0x54, 13, periph)
/* pb10_scom1p1_out */
#define PB10_SCOM1P1_OUT MCHP_PINMUX(b, 10, 0x2e0, 5, periph)
/* pb10_scom1p2_out */
#define PB10_SCOM1P2_OUT MCHP_PINMUX(b, 10, 0x2dc, 4, periph)
/* pb10_scom1p3_out */
#define PB10_SCOM1P3_OUT MCHP_PINMUX(b, 10, 0x2dc, 6, periph)
/* pb10_scom2p0_in */
#define PB10_SCOM2P0_IN  MCHP_PINMUX(b, 10, 0x60, 13, periph)
/* pb10_scom2p0_out */
#define PB10_SCOM2P0_OUT MCHP_PINMUX(b, 10, 0x2e0, 8, periph)
/* pb10_scom2p2_out */
#define PB10_SCOM2P2_OUT MCHP_PINMUX(b, 10, 0x2dc, 7, periph)
/* pb10_scom2p3_in */
#define PB10_SCOM2P3_IN  MCHP_PINMUX(b, 10, 0x6c, 6, periph)
/* pb10_scom2p3_out */
#define PB10_SCOM2P3_OUT MCHP_PINMUX(b, 10, 0x2dc, 8, periph)
/* pb10_scom3p1_out */
#define PB10_SCOM3P1_OUT MCHP_PINMUX(b, 10, 0x2dc, 10, periph)
/* pb10_scom3p2_in */
#define PB10_SCOM3P2_IN  MCHP_PINMUX(b, 10, 0x78, 6, periph)
/* pb10_scom3p2_out */
#define PB10_SCOM3P2_OUT MCHP_PINMUX(b, 10, 0x2dc, 9, periph)
/* pb10_scom3p3_in */
#define PB10_SCOM3P3_IN  MCHP_PINMUX(b, 10, 0x7c, 13, periph)
/* pb10_scom3p3_out */
#define PB10_SCOM3P3_OUT MCHP_PINMUX(b, 10, 0x2e0, 9, periph)
/* pb10_tc0wo0_out */
#define PB10_TC0WO0_OUT  MCHP_PINMUX(b, 10, 0x2dc, 18, periph)
/* pb10_tc0wo1g3_in */
#define PB10_TC0WO1G3_IN MCHP_PINMUX(b, 10, 0xb8, 6, periph)
/* pb10_tc0wo1g4_in */
#define PB10_TC0WO1G4_IN MCHP_PINMUX(b, 10, 0xbc, 13, periph)
/* pb10_tc1wo0_out */
#define PB10_TC1WO0_OUT  MCHP_PINMUX(b, 10, 0x2dc, 20, periph)
/* pb10_tc1wo1_out */
#define PB10_TC1WO1_OUT  MCHP_PINMUX(b, 10, 0x2e0, 20, periph)
/* pb10_tc2wo0g3_in */
#define PB10_TC2WO0G3_IN MCHP_PINMUX(b, 10, 0xcc, 6, periph)
/* pb10_tc2wo0_out */
#define PB10_TC2WO0_OUT  MCHP_PINMUX(b, 10, 0x2dc, 21, periph)
/* pb10_tc2wo1g4_in */
#define PB10_TC2WO1G4_IN MCHP_PINMUX(b, 10, 0xd4, 13, periph)
/* pb10_tc2wo1_out */
#define PB10_TC2WO1_OUT  MCHP_PINMUX(b, 10, 0x2e0, 21, periph)
/* pb10_tc3wo0g3_in */
#define PB10_TC3WO0G3_IN MCHP_PINMUX(b, 10, 0xdc, 6, periph)
/* pb10_tc3wo0_out */
#define PB10_TC3WO0_OUT  MCHP_PINMUX(b, 10, 0x2dc, 22, periph)
/* pb10_tc3wo1g4_in */
#define PB10_TC3WO1G4_IN MCHP_PINMUX(b, 10, 0xe4, 13, periph)
/* pb10_tc3wo1_out */
#define PB10_TC3WO1_OUT  MCHP_PINMUX(b, 10, 0x2e0, 22, periph)
/* pb10_tcc0wo0_out */
#define PB10_TCC0WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 12, periph)
/* pb10_tcc0wo1_out */
#define PB10_TCC0WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 12, periph)
/* pb10_tcc0wo2_out */
#define PB10_TCC0WO2_OUT MCHP_PINMUX(b, 10, 0x2dc, 11, periph)
/* pb10_tcc0wo3_out */
#define PB10_TCC0WO3_OUT MCHP_PINMUX(b, 10, 0x2e0, 11, periph)
/* pb10_tcc0wo4_out */
#define PB10_TCC0WO4_OUT MCHP_PINMUX(b, 10, 0x2dc, 13, periph)
/* pb10_tcc0wo5_out */
#define PB10_TCC0WO5_OUT MCHP_PINMUX(b, 10, 0x2e0, 13, periph)
/* pb10_tcc1wo0_out */
#define PB10_TCC1WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 15, periph)
/* pb10_tcc1wo1_out */
#define PB10_TCC1WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 15, periph)
/* pb10_tcc1wo2_out */
#define PB10_TCC1WO2_OUT MCHP_PINMUX(b, 10, 0x2dc, 14, periph)
/* pb10_tcc1wo3_out */
#define PB10_TCC1WO3_OUT MCHP_PINMUX(b, 10, 0x2e0, 14, periph)
/* pb10_tcc1wo4_out */
#define PB10_TCC1WO4_OUT MCHP_PINMUX(b, 10, 0x2dc, 16, periph)
/* pb10_tcc1wo5_out */
#define PB10_TCC1WO5_OUT MCHP_PINMUX(b, 10, 0x2e0, 16, periph)
/* pb10_tcc2wo0_out */
#define PB10_TCC2WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 17, periph)
/* pb10_tcc2wo1_out */
#define PB10_TCC2WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 17, periph)
/* pb11_cclin0_in */
#define PB11_CCLIN0_IN   MCHP_PINMUX(b, 11, 0x98, 14, periph)
/* pb11_cclin3_in */
#define PB11_CCLIN3_IN   MCHP_PINMUX(b, 11, 0xa4, 14, periph)
/* pb11_cclout0_out */
#define PB11_CCLOUT0_OUT MCHP_PINMUX(b, 11, 0x2e4, 28, periph)
/* pb11_cclout1_out */
#define PB11_CCLOUT1_OUT MCHP_PINMUX(b, 11, 0x2e8, 28, periph)
/* pb11_extint0_in */
#define PB11_EXTINT0_IN  MCHP_PINMUX(b, 11, 0x0, 14, periph)
/* pb11_extint3_in */
#define PB11_EXTINT3_IN  MCHP_PINMUX(b, 11, 0xc, 6, periph)
/* pb11_nmi_in */
#define PB11_NMI_IN      MCHP_PINMUX(b, 11, 0x3c, 6, periph)
/* pb11_qcs_out */
#define PB11_QCS_OUT     MCHP_PINMUX(b, 11, 0x2e4, 24, periph)
/* pb11_qd0_in */
#define PB11_QD0_IN      MCHP_PINMUX(b, 11, 0x84, 6, periph)
/* pb11_qd0_out */
#define PB11_QD0_OUT     MCHP_PINMUX(b, 11, 0x2e8, 27, periph)
/* pb11_qd1_in */
#define PB11_QD1_IN      MCHP_PINMUX(b, 11, 0x88, 14, periph)
/* pb11_qd1_out */
#define PB11_QD1_OUT     MCHP_PINMUX(b, 11, 0x2e4, 27, periph)
/* pb11_qd2_out */
#define PB11_QD2_OUT     MCHP_PINMUX(b, 11, 0x2e4, 26, periph)
/* pb11_qd3_out */
#define PB11_QD3_OUT     MCHP_PINMUX(b, 11, 0x2e4, 25, periph)
/* pb11_qsck_in */
#define PB11_QSCK_IN     MCHP_PINMUX(b, 11, 0x80, 14, periph)
/* pb11_qsck_out */
#define PB11_QSCK_OUT    MCHP_PINMUX(b, 11, 0x2e4, 23, periph)
/* pb11_refi_in */
#define PB11_REFI_IN     MCHP_PINMUX(b, 11, 0x94, 14, periph)
/* pb11_refo1_out */
#define PB11_REFO1_OUT   MCHP_PINMUX(b, 11, 0x2e4, 19, periph)
/* pb11_refo4_out */
#define PB11_REFO4_OUT   MCHP_PINMUX(b, 11, 0x2e8, 19, periph)
/* pb11_scom0p0_out */
#define PB11_SCOM0P0_OUT MCHP_PINMUX(b, 11, 0x2e8, 3, periph)
/* pb11_scom0p1_out */
#define PB11_SCOM0P1_OUT MCHP_PINMUX(b, 11, 0x2e4, 3, periph)
/* pb11_scom0p2_in */
#define PB11_SCOM0P2_IN  MCHP_PINMUX(b, 11, 0x48, 6, periph)
/* pb11_scom0p2_out */
#define PB11_SCOM0P2_OUT MCHP_PINMUX(b, 11, 0x2e4, 2, periph)
/* pb11_scom0p3_in */
#define PB11_SCOM0P3_IN  MCHP_PINMUX(b, 11, 0x4c, 14, periph)
/* pb11_scom0p3_out */
#define PB11_SCOM0P3_OUT MCHP_PINMUX(b, 11, 0x2e4, 1, periph)
/* pb11_scom1p0_out */
#define PB11_SCOM1P0_OUT MCHP_PINMUX(b, 11, 0x2e4, 4, periph)
/* pb11_scom1p1_in */
#define PB11_SCOM1P1_IN  MCHP_PINMUX(b, 11, 0x54, 6, periph)
/* pb11_scom1p1_out */
#define PB11_SCOM1P1_OUT MCHP_PINMUX(b, 11, 0x2e4, 6, periph)
/* pb11_scom1p2_in */
#define PB11_SCOM1P2_IN  MCHP_PINMUX(b, 11, 0x58, 14, periph)
/* pb11_scom1p2_out */
#define PB11_SCOM1P2_OUT MCHP_PINMUX(b, 11, 0x2e4, 5, periph)
/* pb11_scom1p3_out */
#define PB11_SCOM1P3_OUT MCHP_PINMUX(b, 11, 0x2e8, 4, periph)
/* pb11_scom2p0_in */
#define PB11_SCOM2P0_IN  MCHP_PINMUX(b, 11, 0x60, 6, periph)
/* pb11_scom2p0_out */
#define PB11_SCOM2P0_OUT MCHP_PINMUX(b, 11, 0x2e4, 7, periph)
/* pb11_scom2p1_in */
#define PB11_SCOM2P1_IN  MCHP_PINMUX(b, 11, 0x64, 14, periph)
/* pb11_scom2p1_out */
#define PB11_SCOM2P1_OUT MCHP_PINMUX(b, 11, 0x2e4, 8, periph)
/* pb11_scom2p3_out */
#define PB11_SCOM2P3_OUT MCHP_PINMUX(b, 11, 0x2e8, 7, periph)
/* pb11_scom3p0_in */
#define PB11_SCOM3P0_IN  MCHP_PINMUX(b, 11, 0x70, 14, periph)
/* pb11_scom3p0_out */
#define PB11_SCOM3P0_OUT MCHP_PINMUX(b, 11, 0x2e4, 9, periph)
/* pb11_scom3p2_out */
#define PB11_SCOM3P2_OUT MCHP_PINMUX(b, 11, 0x2e8, 10, periph)
/* pb11_scom3p3_in */
#define PB11_SCOM3P3_IN  MCHP_PINMUX(b, 11, 0x7c, 6, periph)
/* pb11_scom3p3_out */
#define PB11_SCOM3P3_OUT MCHP_PINMUX(b, 11, 0x2e4, 10, periph)
/* pb11_tc0wo0g1_in */
#define PB11_TC0WO0G1_IN MCHP_PINMUX(b, 11, 0xb0, 14, periph)
/* pb11_tc0wo0_out */
#define PB11_TC0WO0_OUT  MCHP_PINMUX(b, 11, 0x2e8, 18, periph)
/* pb11_tc0wo1g4_in */
#define PB11_TC0WO1G4_IN MCHP_PINMUX(b, 11, 0xbc, 6, periph)
/* pb11_tc0wo1_out */
#define PB11_TC0WO1_OUT  MCHP_PINMUX(b, 11, 0x2e4, 18, periph)
/* pb11_tc1wo0g1_in */
#define PB11_TC1WO0G1_IN MCHP_PINMUX(b, 11, 0xc0, 14, periph)
/* pb11_tc1wo0_out */
#define PB11_TC1WO0_OUT  MCHP_PINMUX(b, 11, 0x2e4, 20, periph)
/* pb11_tc1wo1_out */
#define PB11_TC1WO1_OUT  MCHP_PINMUX(b, 11, 0x2e8, 20, periph)
/* pb11_tc2wo0g1_in */
#define PB11_TC2WO0G1_IN MCHP_PINMUX(b, 11, 0xc8, 14, periph)
/* pb11_tc2wo0_out */
#define PB11_TC2WO0_OUT  MCHP_PINMUX(b, 11, 0x2e4, 21, periph)
/* pb11_tc2wo1g4_in */
#define PB11_TC2WO1G4_IN MCHP_PINMUX(b, 11, 0xd4, 6, periph)
/* pb11_tc2wo1_out */
#define PB11_TC2WO1_OUT  MCHP_PINMUX(b, 11, 0x2e8, 21, periph)
/* pb11_tc3wo0g1_in */
#define PB11_TC3WO0G1_IN MCHP_PINMUX(b, 11, 0xd8, 14, periph)
/* pb11_tc3wo0_out */
#define PB11_TC3WO0_OUT  MCHP_PINMUX(b, 11, 0x2e4, 22, periph)
/* pb11_tc3wo1g4_in */
#define PB11_TC3WO1G4_IN MCHP_PINMUX(b, 11, 0xe4, 6, periph)
/* pb11_tc3wo1_out */
#define PB11_TC3WO1_OUT  MCHP_PINMUX(b, 11, 0x2e8, 22, periph)
/* pb11_tcc0wo0_out */
#define PB11_TCC0WO0_OUT MCHP_PINMUX(b, 11, 0x2e4, 11, periph)
/* pb11_tcc0wo1_out */
#define PB11_TCC0WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 12, periph)
/* pb11_tcc0wo2_out */
#define PB11_TCC0WO2_OUT MCHP_PINMUX(b, 11, 0x2e4, 13, periph)
/* pb11_tcc0wo3_out */
#define PB11_TCC0WO3_OUT MCHP_PINMUX(b, 11, 0x2e8, 11, periph)
/* pb11_tcc0wo4_out */
#define PB11_TCC0WO4_OUT MCHP_PINMUX(b, 11, 0x2e4, 12, periph)
/* pb11_tcc0wo5_out */
#define PB11_TCC0WO5_OUT MCHP_PINMUX(b, 11, 0x2e8, 13, periph)
/* pb11_tcc1wo0_out */
#define PB11_TCC1WO0_OUT MCHP_PINMUX(b, 11, 0x2e4, 14, periph)
/* pb11_tcc1wo1_out */
#define PB11_TCC1WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 15, periph)
/* pb11_tcc1wo2_out */
#define PB11_TCC1WO2_OUT MCHP_PINMUX(b, 11, 0x2e4, 16, periph)
/* pb11_tcc1wo3_out */
#define PB11_TCC1WO3_OUT MCHP_PINMUX(b, 11, 0x2e8, 14, periph)
/* pb11_tcc1wo4_out */
#define PB11_TCC1WO4_OUT MCHP_PINMUX(b, 11, 0x2e4, 15, periph)
/* pb11_tcc1wo5_out */
#define PB11_TCC1WO5_OUT MCHP_PINMUX(b, 11, 0x2e8, 16, periph)
/* pb11_tcc2wo0_out */
#define PB11_TCC2WO0_OUT MCHP_PINMUX(b, 11, 0x2e4, 17, periph)
/* pb11_tcc2wo1_out */
#define PB11_TCC2WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 17, periph)
/* pb12_cclin0_in */
#define PB12_CCLIN0_IN   MCHP_PINMUX(b, 12, 0x98, 7, periph)
/* pb12_cclin1_in */
#define PB12_CCLIN1_IN   MCHP_PINMUX(b, 12, 0x9c, 14, periph)
/* pb12_cclin3_in */
#define PB12_CCLIN3_IN   MCHP_PINMUX(b, 12, 0xa4, 7, periph)
/* pb12_cclin4_in */
#define PB12_CCLIN4_IN   MCHP_PINMUX(b, 12, 0xa8, 14, periph)
/* pb12_cclout0_out */
#define PB12_CCLOUT0_OUT MCHP_PINMUX(b, 12, 0x2ec, 28, periph)
/* pb12_cclout1_out */
#define PB12_CCLOUT1_OUT MCHP_PINMUX(b, 12, 0x2f0, 28, periph)
/* pb12_extint0_in */
#define PB12_EXTINT0_IN  MCHP_PINMUX(b, 12, 0x0, 7, periph)
/* pb12_extint1_in */
#define PB12_EXTINT1_IN  MCHP_PINMUX(b, 12, 0x4, 14, periph)
/* pb12_qcs_out */
#define PB12_QCS_OUT     MCHP_PINMUX(b, 12, 0x2ec, 24, periph)
/* pb12_qd0_out */
#define PB12_QD0_OUT     MCHP_PINMUX(b, 12, 0x2f0, 25, periph)
/* pb12_qd1_in */
#define PB12_QD1_IN      MCHP_PINMUX(b, 12, 0x88, 7, periph)
/* pb12_qd1_out */
#define PB12_QD1_OUT     MCHP_PINMUX(b, 12, 0x2ec, 27, periph)
/* pb12_qd2_in */
#define PB12_QD2_IN      MCHP_PINMUX(b, 12, 0x8c, 14, periph)
/* pb12_qd2_out */
#define PB12_QD2_OUT     MCHP_PINMUX(b, 12, 0x2ec, 26, periph)
/* pb12_qd3_out */
#define PB12_QD3_OUT     MCHP_PINMUX(b, 12, 0x2ec, 25, periph)
/* pb12_qsck_in */
#define PB12_QSCK_IN     MCHP_PINMUX(b, 12, 0x80, 7, periph)
/* pb12_qsck_out */
#define PB12_QSCK_OUT    MCHP_PINMUX(b, 12, 0x2ec, 23, periph)
/* pb12_refi_in */
#define PB12_REFI_IN     MCHP_PINMUX(b, 12, 0x94, 7, periph)
/* pb12_refo1_out */
#define PB12_REFO1_OUT   MCHP_PINMUX(b, 12, 0x2ec, 19, periph)
/* pb12_refo2_out */
#define PB12_REFO2_OUT   MCHP_PINMUX(b, 12, 0x2f0, 19, periph)
/* pb12_scom0p0_in */
#define PB12_SCOM0P0_IN  MCHP_PINMUX(b, 12, 0x40, 14, periph)
/* pb12_scom0p0_out */
#define PB12_SCOM0P0_OUT MCHP_PINMUX(b, 12, 0x2f0, 1, periph)
/* pb12_scom0p1_out */
#define PB12_SCOM0P1_OUT MCHP_PINMUX(b, 12, 0x2ec, 3, periph)
/* pb12_scom0p2_out */
#define PB12_SCOM0P2_OUT MCHP_PINMUX(b, 12, 0x2ec, 2, periph)
/* pb12_scom0p3_in */
#define PB12_SCOM0P3_IN  MCHP_PINMUX(b, 12, 0x4c, 7, periph)
/* pb12_scom0p3_out */
#define PB12_SCOM0P3_OUT MCHP_PINMUX(b, 12, 0x2ec, 1, periph)
/* pb12_scom1p0_out */
#define PB12_SCOM1P0_OUT MCHP_PINMUX(b, 12, 0x2ec, 4, periph)
/* pb12_scom1p1_out */
#define PB12_SCOM1P1_OUT MCHP_PINMUX(b, 12, 0x2ec, 6, periph)
/* pb12_scom1p2_in */
#define PB12_SCOM1P2_IN  MCHP_PINMUX(b, 12, 0x58, 7, periph)
/* pb12_scom1p2_out */
#define PB12_SCOM1P2_OUT MCHP_PINMUX(b, 12, 0x2ec, 5, periph)
/* pb12_scom1p3_in */
#define PB12_SCOM1P3_IN  MCHP_PINMUX(b, 12, 0x5c, 14, periph)
/* pb12_scom1p3_out */
#define PB12_SCOM1P3_OUT MCHP_PINMUX(b, 12, 0x2f0, 5, periph)
/* pb12_scom2p0_out */
#define PB12_SCOM2P0_OUT MCHP_PINMUX(b, 12, 0x2ec, 7, periph)
/* pb12_scom2p1_in */
#define PB12_SCOM2P1_IN  MCHP_PINMUX(b, 12, 0x64, 7, periph)
/* pb12_scom2p1_out */
#define PB12_SCOM2P1_OUT MCHP_PINMUX(b, 12, 0x2ec, 8, periph)
/* pb12_scom2p2_in */
#define PB12_SCOM2P2_IN  MCHP_PINMUX(b, 12, 0x68, 14, periph)
/* pb12_scom2p2_out */
#define PB12_SCOM2P2_OUT MCHP_PINMUX(b, 12, 0x2f0, 8, periph)
/* pb12_scom3p0_in */
#define PB12_SCOM3P0_IN  MCHP_PINMUX(b, 12, 0x70, 7, periph)
/* pb12_scom3p0_out */
#define PB12_SCOM3P0_OUT MCHP_PINMUX(b, 12, 0x2ec, 9, periph)
/* pb12_scom3p1_in */
#define PB12_SCOM3P1_IN  MCHP_PINMUX(b, 12, 0x74, 14, periph)
/* pb12_scom3p1_out */
#define PB12_SCOM3P1_OUT MCHP_PINMUX(b, 12, 0x2f0, 9, periph)
/* pb12_scom3p3_out */
#define PB12_SCOM3P3_OUT MCHP_PINMUX(b, 12, 0x2ec, 10, periph)
/* pb12_tc0wo0g1_in */
#define PB12_TC0WO0G1_IN MCHP_PINMUX(b, 12, 0xb0, 7, periph)
/* pb12_tc0wo0g2_in */
#define PB12_TC0WO0G2_IN MCHP_PINMUX(b, 12, 0xb4, 14, periph)
/* pb12_tc0wo1_out */
#define PB12_TC0WO1_OUT  MCHP_PINMUX(b, 12, 0x2ec, 18, periph)
/* pb12_tc1wo0g1_in */
#define PB12_TC1WO0G1_IN MCHP_PINMUX(b, 12, 0xc0, 7, periph)
/* pb12_tc1wo0_out */
#define PB12_TC1WO0_OUT  MCHP_PINMUX(b, 12, 0x2ec, 20, periph)
/* pb12_tc1wo1g2_in */
#define PB12_TC1WO1G2_IN MCHP_PINMUX(b, 12, 0xc4, 14, periph)
/* pb12_tc1wo1_out */
#define PB12_TC1WO1_OUT  MCHP_PINMUX(b, 12, 0x2f0, 20, periph)
/* pb12_tc2wo0g1_in */
#define PB12_TC2WO0G1_IN MCHP_PINMUX(b, 12, 0xc8, 7, periph)
/* pb12_tc2wo0_out */
#define PB12_TC2WO0_OUT  MCHP_PINMUX(b, 12, 0x2ec, 21, periph)
/* pb12_tc2wo1g2_in */
#define PB12_TC2WO1G2_IN MCHP_PINMUX(b, 12, 0xd0, 14, periph)
/* pb12_tc2wo1_out */
#define PB12_TC2WO1_OUT  MCHP_PINMUX(b, 12, 0x2f0, 21, periph)
/* pb12_tc3wo0g1_in */
#define PB12_TC3WO0G1_IN MCHP_PINMUX(b, 12, 0xd8, 7, periph)
/* pb12_tc3wo0_out */
#define PB12_TC3WO0_OUT  MCHP_PINMUX(b, 12, 0x2ec, 22, periph)
/* pb12_tc3wo1g2_in */
#define PB12_TC3WO1G2_IN MCHP_PINMUX(b, 12, 0xe0, 14, periph)
/* pb12_tc3wo1_out */
#define PB12_TC3WO1_OUT  MCHP_PINMUX(b, 12, 0x2f0, 22, periph)
/* pb12_tcc0wo0_out */
#define PB12_TCC0WO0_OUT MCHP_PINMUX(b, 12, 0x2ec, 11, periph)
/* pb12_tcc0wo1_out */
#define PB12_TCC0WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 11, periph)
/* pb12_tcc0wo2_out */
#define PB12_TCC0WO2_OUT MCHP_PINMUX(b, 12, 0x2ec, 13, periph)
/* pb12_tcc0wo3_out */
#define PB12_TCC0WO3_OUT MCHP_PINMUX(b, 12, 0x2f0, 13, periph)
/* pb12_tcc0wo4_out */
#define PB12_TCC0WO4_OUT MCHP_PINMUX(b, 12, 0x2ec, 12, periph)
/* pb12_tcc0wo5_out */
#define PB12_TCC0WO5_OUT MCHP_PINMUX(b, 12, 0x2f0, 12, periph)
/* pb12_tcc1wo0_out */
#define PB12_TCC1WO0_OUT MCHP_PINMUX(b, 12, 0x2ec, 14, periph)
/* pb12_tcc1wo1_out */
#define PB12_TCC1WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 14, periph)
/* pb12_tcc1wo2_out */
#define PB12_TCC1WO2_OUT MCHP_PINMUX(b, 12, 0x2ec, 16, periph)
/* pb12_tcc1wo3_out */
#define PB12_TCC1WO3_OUT MCHP_PINMUX(b, 12, 0x2f0, 16, periph)
/* pb12_tcc1wo4_out */
#define PB12_TCC1WO4_OUT MCHP_PINMUX(b, 12, 0x2ec, 15, periph)
/* pb12_tcc1wo5_out */
#define PB12_TCC1WO5_OUT MCHP_PINMUX(b, 12, 0x2f0, 15, periph)
/* pb12_tcc2wo0_out */
#define PB12_TCC2WO0_OUT MCHP_PINMUX(b, 12, 0x2ec, 17, periph)
/* pb12_tcc2wo1_out */
#define PB12_TCC2WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 17, periph)
/* pb13_cclin1_in */
#define PB13_CCLIN1_IN   MCHP_PINMUX(b, 13, 0x9c, 7, periph)
/* pb13_cclin2_in */
#define PB13_CCLIN2_IN   MCHP_PINMUX(b, 13, 0xa0, 14, periph)
/* pb13_cclin4_in */
#define PB13_CCLIN4_IN   MCHP_PINMUX(b, 13, 0xa8, 7, periph)
/* pb13_cclin5_in */
#define PB13_CCLIN5_IN   MCHP_PINMUX(b, 13, 0xac, 14, periph)
/* pb13_cclout0_out */
#define PB13_CCLOUT0_OUT MCHP_PINMUX(b, 13, 0x2f8, 28, periph)
/* pb13_cclout1_out */
#define PB13_CCLOUT1_OUT MCHP_PINMUX(b, 13, 0x2f4, 28, periph)
/* pb13_extint1_in */
#define PB13_EXTINT1_IN  MCHP_PINMUX(b, 13, 0x4, 7, periph)
/* pb13_extint2_in */
#define PB13_EXTINT2_IN  MCHP_PINMUX(b, 13, 0x8, 14, periph)
/* pb13_qcs_out */
#define PB13_QCS_OUT     MCHP_PINMUX(b, 13, 0x2f4, 24, periph)
/* pb13_qd0_out */
#define PB13_QD0_OUT     MCHP_PINMUX(b, 13, 0x2f4, 25, periph)
/* pb13_qd1_out */
#define PB13_QD1_OUT     MCHP_PINMUX(b, 13, 0x2f8, 25, periph)
/* pb13_qd2_in */
#define PB13_QD2_IN      MCHP_PINMUX(b, 13, 0x8c, 7, periph)
/* pb13_qd2_out */
#define PB13_QD2_OUT     MCHP_PINMUX(b, 13, 0x2f4, 27, periph)
/* pb13_qd3_in */
#define PB13_QD3_IN      MCHP_PINMUX(b, 13, 0x90, 14, periph)
/* pb13_qd3_out */
#define PB13_QD3_OUT     MCHP_PINMUX(b, 13, 0x2f4, 26, periph)
/* pb13_qsck_out */
#define PB13_QSCK_OUT    MCHP_PINMUX(b, 13, 0x2f4, 23, periph)
/* pb13_refo2_out */
#define PB13_REFO2_OUT   MCHP_PINMUX(b, 13, 0x2f4, 19, periph)
/* pb13_refo3_out */
#define PB13_REFO3_OUT   MCHP_PINMUX(b, 13, 0x2f8, 19, periph)
/* pb13_scom0p0_in */
#define PB13_SCOM0P0_IN  MCHP_PINMUX(b, 13, 0x40, 7, periph)
/* pb13_scom0p0_out */
#define PB13_SCOM0P0_OUT MCHP_PINMUX(b, 13, 0x2f4, 1, periph)
/* pb13_scom0p1_in */
#define PB13_SCOM0P1_IN  MCHP_PINMUX(b, 13, 0x44, 14, periph)
/* pb13_scom0p1_out */
#define PB13_SCOM0P1_OUT MCHP_PINMUX(b, 13, 0x2f8, 1, periph)
/* pb13_scom0p2_out */
#define PB13_SCOM0P2_OUT MCHP_PINMUX(b, 13, 0x2f4, 3, periph)
/* pb13_scom0p3_out */
#define PB13_SCOM0P3_OUT MCHP_PINMUX(b, 13, 0x2f4, 2, periph)
/* pb13_scom1p0_in */
#define PB13_SCOM1P0_IN  MCHP_PINMUX(b, 13, 0x50, 14, periph)
/* pb13_scom1p0_out */
#define PB13_SCOM1P0_OUT MCHP_PINMUX(b, 13, 0x2f8, 5, periph)
/* pb13_scom1p1_out */
#define PB13_SCOM1P1_OUT MCHP_PINMUX(b, 13, 0x2f4, 4, periph)
/* pb13_scom1p2_out */
#define PB13_SCOM1P2_OUT MCHP_PINMUX(b, 13, 0x2f4, 6, periph)
/* pb13_scom1p3_in */
#define PB13_SCOM1P3_IN  MCHP_PINMUX(b, 13, 0x5c, 7, periph)
/* pb13_scom1p3_out */
#define PB13_SCOM1P3_OUT MCHP_PINMUX(b, 13, 0x2f4, 5, periph)
/* pb13_scom2p1_out */
#define PB13_SCOM2P1_OUT MCHP_PINMUX(b, 13, 0x2f4, 7, periph)
/* pb13_scom2p2_in */
#define PB13_SCOM2P2_IN  MCHP_PINMUX(b, 13, 0x68, 7, periph)
/* pb13_scom2p2_out */
#define PB13_SCOM2P2_OUT MCHP_PINMUX(b, 13, 0x2f4, 8, periph)
/* pb13_scom2p3_in */
#define PB13_SCOM2P3_IN  MCHP_PINMUX(b, 13, 0x6c, 14, periph)
/* pb13_scom2p3_out */
#define PB13_SCOM2P3_OUT MCHP_PINMUX(b, 13, 0x2f8, 8, periph)
/* pb13_scom3p0_out */
#define PB13_SCOM3P0_OUT MCHP_PINMUX(b, 13, 0x2f4, 10, periph)
/* pb13_scom3p1_in */
#define PB13_SCOM3P1_IN  MCHP_PINMUX(b, 13, 0x74, 7, periph)
/* pb13_scom3p1_out */
#define PB13_SCOM3P1_OUT MCHP_PINMUX(b, 13, 0x2f4, 9, periph)
/* pb13_scom3p2_in */
#define PB13_SCOM3P2_IN  MCHP_PINMUX(b, 13, 0x78, 14, periph)
/* pb13_scom3p2_out */
#define PB13_SCOM3P2_OUT MCHP_PINMUX(b, 13, 0x2f8, 9, periph)
/* pb13_tc0wo0g2_in */
#define PB13_TC0WO0G2_IN MCHP_PINMUX(b, 13, 0xb4, 7, periph)
/* pb13_tc0wo0_out */
#define PB13_TC0WO0_OUT  MCHP_PINMUX(b, 13, 0x2f8, 18, periph)
/* pb13_tc0wo1g3_in */
#define PB13_TC0WO1G3_IN MCHP_PINMUX(b, 13, 0xb8, 14, periph)
/* pb13_tc0wo1_out */
#define PB13_TC0WO1_OUT  MCHP_PINMUX(b, 13, 0x2f4, 18, periph)
/* pb13_tc1wo0_out */
#define PB13_TC1WO0_OUT  MCHP_PINMUX(b, 13, 0x2f8, 20, periph)
/* pb13_tc1wo1g2_in */
#define PB13_TC1WO1G2_IN MCHP_PINMUX(b, 13, 0xc4, 7, periph)
/* pb13_tc1wo1_out */
#define PB13_TC1WO1_OUT  MCHP_PINMUX(b, 13, 0x2f4, 20, periph)
/* pb13_tc2wo0g3_in */
#define PB13_TC2WO0G3_IN MCHP_PINMUX(b, 13, 0xcc, 14, periph)
/* pb13_tc2wo0_out */
#define PB13_TC2WO0_OUT  MCHP_PINMUX(b, 13, 0x2f8, 21, periph)
/* pb13_tc2wo1g2_in */
#define PB13_TC2WO1G2_IN MCHP_PINMUX(b, 13, 0xd0, 7, periph)
/* pb13_tc2wo1_out */
#define PB13_TC2WO1_OUT  MCHP_PINMUX(b, 13, 0x2f4, 21, periph)
/* pb13_tc3wo0g3_in */
#define PB13_TC3WO0G3_IN MCHP_PINMUX(b, 13, 0xdc, 14, periph)
/* pb13_tc3wo0_out */
#define PB13_TC3WO0_OUT  MCHP_PINMUX(b, 13, 0x2f8, 22, periph)
/* pb13_tc3wo1g2_in */
#define PB13_TC3WO1G2_IN MCHP_PINMUX(b, 13, 0xe0, 7, periph)
/* pb13_tc3wo1_out */
#define PB13_TC3WO1_OUT  MCHP_PINMUX(b, 13, 0x2f4, 22, periph)
/* pb13_tcc0wo0_out */
#define PB13_TCC0WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 12, periph)
/* pb13_tcc0wo1_out */
#define PB13_TCC0WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 11, periph)
/* pb13_tcc0wo2_out */
#define PB13_TCC0WO2_OUT MCHP_PINMUX(b, 13, 0x2f8, 11, periph)
/* pb13_tcc0wo3_out */
#define PB13_TCC0WO3_OUT MCHP_PINMUX(b, 13, 0x2f4, 13, periph)
/* pb13_tcc0wo4_out */
#define PB13_TCC0WO4_OUT MCHP_PINMUX(b, 13, 0x2f8, 13, periph)
/* pb13_tcc0wo5_out */
#define PB13_TCC0WO5_OUT MCHP_PINMUX(b, 13, 0x2f4, 12, periph)
/* pb13_tcc1wo0_out */
#define PB13_TCC1WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 15, periph)
/* pb13_tcc1wo1_out */
#define PB13_TCC1WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 14, periph)
/* pb13_tcc1wo2_out */
#define PB13_TCC1WO2_OUT MCHP_PINMUX(b, 13, 0x2f8, 14, periph)
/* pb13_tcc1wo3_out */
#define PB13_TCC1WO3_OUT MCHP_PINMUX(b, 13, 0x2f4, 16, periph)
/* pb13_tcc1wo4_out */
#define PB13_TCC1WO4_OUT MCHP_PINMUX(b, 13, 0x2f8, 16, periph)
/* pb13_tcc1wo5_out */
#define PB13_TCC1WO5_OUT MCHP_PINMUX(b, 13, 0x2f4, 15, periph)
/* pb13_tcc2wo0_out */
#define PB13_TCC2WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 17, periph)
/* pb13_tcc2wo1_out */
#define PB13_TCC2WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 17, periph)

#endif /* MICROCHIP_PIC32CX1012BZ25048_PINCTRL_H_ */
