/*
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */
 
#ifndef MICROCHIP_PIC32CX5109BZ31048_PINCTRL_H_
#define MICROCHIP_PIC32CX5109BZ31048_PINCTRL_H_

#include <dt-bindings/pic32c/pic32cx_bz/common/mchp_pinctrl_pinmux_pic32cxbz.h>

/* Indicates that direct mode is enabled; use this macro when configuring for direct mode
 * instead of PPS. */
#define PIN_DIRECT_MODE MCHP_PINMUX(direct, NA, NA, NA, directmode)
/* pa0_cclin1_in */
#define PA0_CCLIN1_IN MCHP_PINMUX(a, 0, 0x9c, 15, periph)
/* pa0_cclin2_in */
#define PA0_CCLIN2_IN MCHP_PINMUX(a, 0, 0xa0, 7, periph)
/* pa0_cclin4_in */
#define PA0_CCLIN4_IN MCHP_PINMUX(a, 0, 0xa8, 15, periph)
/* pa0_cclin5_in */
#define PA0_CCLIN5_IN MCHP_PINMUX(a, 0, 0xac, 7, periph)
/* pa0_cclout0_out */
#define PA0_CCLOUT0_OUT MCHP_PINMUX(a, 0, 0x204, 27, periph)
/* pa0_cclout1_out */
#define PA0_CCLOUT1_OUT MCHP_PINMUX(a, 0, 0x200, 27, periph)
/* pa0_extint1_in */
#define PA0_EXTINT1_IN MCHP_PINMUX(a, 0, 0x4, 15, periph)
/* pa0_extint2_in */
#define PA0_EXTINT2_IN MCHP_PINMUX(a, 0, 0x8, 7, periph)
/* pa0_qcs_out */
#define PA0_QCS_OUT MCHP_PINMUX(a, 0, 0x204, 23, periph)
/* pa0_qd0_out */
#define PA0_QD0_OUT MCHP_PINMUX(a, 0, 0x200, 24, periph)
/* pa0_qd1_out */
#define PA0_QD1_OUT MCHP_PINMUX(a, 0, 0x204, 24, periph)
/* pa0_qd2_in */
#define PA0_QD2_IN MCHP_PINMUX(a, 0, 0x8c, 15, periph)
/* pa0_qd2_out */
#define PA0_QD2_OUT MCHP_PINMUX(a, 0, 0x200, 26, periph)
/* pa0_qd3_in */
#define PA0_QD3_IN MCHP_PINMUX(a, 0, 0x90, 7, periph)
/* pa0_qd3_out */
#define PA0_QD3_OUT MCHP_PINMUX(a, 0, 0x200, 25, periph)
/* pa0_qspics_out */
#define PA0_QSPICS_OUT MCHP_PINMUX(a, 0, 0x200, 23, periph)
/* pa0_scom0p0_in */
#define PA0_SCOM0P0_IN MCHP_PINMUX(a, 0, 0x40, 15, periph)
/* pa0_scom0p0_out */
#define PA0_SCOM0P0_OUT MCHP_PINMUX(a, 0, 0x200, 1, periph)
/* pa0_scom0p2_out */
#define PA0_SCOM0P2_OUT MCHP_PINMUX(a, 0, 0x200, 3, periph)
/* pa0_scom0p3_out */
#define PA0_SCOM0P3_OUT MCHP_PINMUX(a, 0, 0x200, 2, periph)
/* pa0_scom1p0_in */
#define PA0_SCOM1P0_IN MCHP_PINMUX(a, 0, 0x50, 7, periph)
/* pa0_scom1p2_out */
#define PA0_SCOM1P2_OUT MCHP_PINMUX(a, 0, 0x200, 6, periph)
/* pa0_scom1p3_in */
#define PA0_SCOM1P3_IN MCHP_PINMUX(a, 0, 0x5c, 15, periph)
/* pa0_scom1p3_out */
#define PA0_SCOM1P3_OUT MCHP_PINMUX(a, 0, 0x200, 5, periph)
/* pa0_tc0wo0g2_in */
#define PA0_TC0WO0G2_IN MCHP_PINMUX(a, 0, 0xb4, 15, periph)
/* pa0_tc0wo0_out */
#define PA0_TC0WO0_OUT MCHP_PINMUX(a, 0, 0x204, 15, periph)
/* pa0_tc0wo1g3_in */
#define PA0_TC0WO1G3_IN MCHP_PINMUX(a, 0, 0xb8, 7, periph)
/* pa0_tc0wo1_out */
#define PA0_TC0WO1_OUT MCHP_PINMUX(a, 0, 0x200, 15, periph)
/* pa0_tc1wo0_out */
#define PA0_TC1WO0_OUT MCHP_PINMUX(a, 0, 0x204, 16, periph)
/* pa0_tc1wo1g2_in */
#define PA0_TC1WO1G2_IN MCHP_PINMUX(a, 0, 0xc4, 15, periph)
/* pa0_tc1wo1_out */
#define PA0_TC1WO1_OUT MCHP_PINMUX(a, 0, 0x200, 16, periph)
/* pa0_tc2wo0g3_in */
#define PA0_TC2WO0G3_IN MCHP_PINMUX(a, 0, 0xcc, 7, periph)
/* pa0_tc2wo0_out */
#define PA0_TC2WO0_OUT MCHP_PINMUX(a, 0, 0x204, 17, periph)
/* pa0_tc2wo1g2_in */
#define PA0_TC2WO1G2_IN MCHP_PINMUX(a, 0, 0xd0, 15, periph)
/* pa0_tc2wo1_out */
#define PA0_TC2WO1_OUT MCHP_PINMUX(a, 0, 0x200, 17, periph)
/* pa0_tc3wo0g3_in */
#define PA0_TC3WO0G3_IN MCHP_PINMUX(a, 0, 0xdc, 7, periph)
/* pa0_tc3wo0_out */
#define PA0_TC3WO0_OUT MCHP_PINMUX(a, 0, 0x204, 18, periph)
/* pa0_tc3wo1g2_in */
#define PA0_TC3WO1G2_IN MCHP_PINMUX(a, 0, 0xe0, 15, periph)
/* pa0_tc3wo1_out */
#define PA0_TC3WO1_OUT MCHP_PINMUX(a, 0, 0x200, 18, periph)
/* pa0_tc4wo0g3_in */
#define PA0_TC4WO0G3_IN MCHP_PINMUX(a, 0, 0xec, 7, periph)
/* pa0_tc4wo0_out */
#define PA0_TC4WO0_OUT MCHP_PINMUX(a, 0, 0x204, 19, periph)
/* pa0_tc4wo1g2_in */
#define PA0_TC4WO1G2_IN MCHP_PINMUX(a, 0, 0xf0, 15, periph)
/* pa0_tc4wo1_out */
#define PA0_TC4WO1_OUT MCHP_PINMUX(a, 0, 0x200, 19, periph)
/* pa0_tc5wo0g3_in */
#define PA0_TC5WO0G3_IN MCHP_PINMUX(a, 0, 0xfc, 7, periph)
/* pa0_tc5wo0_out */
#define PA0_TC5WO0_OUT MCHP_PINMUX(a, 0, 0x204, 20, periph)
/* pa0_tc5wo1g2_in */
#define PA0_TC5WO1G2_IN MCHP_PINMUX(a, 0, 0x100, 15, periph)
/* pa0_tc5wo1_out */
#define PA0_TC5WO1_OUT MCHP_PINMUX(a, 0, 0x200, 20, periph)
/* pa0_tc6wo0g3_in */
#define PA0_TC6WO0G3_IN MCHP_PINMUX(a, 0, 0x10c, 7, periph)
/* pa0_tc6wo0_out */
#define PA0_TC6WO0_OUT MCHP_PINMUX(a, 0, 0x204, 21, periph)
/* pa0_tc6wo1g2_in */
#define PA0_TC6WO1G2_IN MCHP_PINMUX(a, 0, 0x110, 15, periph)
/* pa0_tc6wo1_out */
#define PA0_TC6WO1_OUT MCHP_PINMUX(a, 0, 0x200, 21, periph)
/* pa0_tc7wo0g3_in */
#define PA0_TC7WO0G3_IN MCHP_PINMUX(a, 0, 0x11c, 7, periph)
/* pa0_tc7wo0_out */
#define PA0_TC7WO0_OUT MCHP_PINMUX(a, 0, 0x204, 22, periph)
/* pa0_tc7wo1g2_in */
#define PA0_TC7WO1G2_IN MCHP_PINMUX(a, 0, 0x120, 15, periph)
/* pa0_tc7wo1_out */
#define PA0_TC7WO1_OUT MCHP_PINMUX(a, 0, 0x200, 22, periph)
/* pa0_tcc0wo0_out */
#define PA0_TCC0WO0_OUT MCHP_PINMUX(a, 0, 0x204, 8, periph)
/* pa0_tcc0wo1_out */
#define PA0_TCC0WO1_OUT MCHP_PINMUX(a, 0, 0x200, 7, periph)
/* pa0_tcc0wo2_out */
#define PA0_TCC0WO2_OUT MCHP_PINMUX(a, 0, 0x204, 7, periph)
/* pa0_tcc0wo3_out */
#define PA0_TCC0WO3_OUT MCHP_PINMUX(a, 0, 0x200, 9, periph)
/* pa0_tcc0wo4_out */
#define PA0_TCC0WO4_OUT MCHP_PINMUX(a, 0, 0x204, 9, periph)
/* pa0_tcc0wo5_out */
#define PA0_TCC0WO5_OUT MCHP_PINMUX(a, 0, 0x200, 8, periph)
/* pa0_tcc1wo0_out */
#define PA0_TCC1WO0_OUT MCHP_PINMUX(a, 0, 0x204, 11, periph)
/* pa0_tcc1wo1_out */
#define PA0_TCC1WO1_OUT MCHP_PINMUX(a, 0, 0x200, 10, periph)
/* pa0_tcc1wo2_out */
#define PA0_TCC1WO2_OUT MCHP_PINMUX(a, 0, 0x204, 10, periph)
/* pa0_tcc1wo3_out */
#define PA0_TCC1WO3_OUT MCHP_PINMUX(a, 0, 0x200, 12, periph)
/* pa0_tcc1wo4_out */
#define PA0_TCC1WO4_OUT MCHP_PINMUX(a, 0, 0x204, 12, periph)
/* pa0_tcc1wo5_out */
#define PA0_TCC1WO5_OUT MCHP_PINMUX(a, 0, 0x200, 11, periph)
/* pa0_tcc2wo0_out */
#define PA0_TCC2WO0_OUT MCHP_PINMUX(a, 0, 0x204, 13, periph)
/* pa0_tcc2wo1_out */
#define PA0_TCC2WO1_OUT MCHP_PINMUX(a, 0, 0x200, 13, periph)
/* pa1_cclin2_in */
#define PA1_CCLIN2_IN MCHP_PINMUX(a, 1, 0xa0, 15, periph)
/* pa1_cclin5_in */
#define PA1_CCLIN5_IN MCHP_PINMUX(a, 1, 0xac, 15, periph)
/* pa1_cclout0_out */
#define PA1_CCLOUT0_OUT MCHP_PINMUX(a, 1, 0x208, 27, periph)
/* pa1_cclout1_out */
#define PA1_CCLOUT1_OUT MCHP_PINMUX(a, 1, 0x20c, 27, periph)
/* pa1_extint2_in */
#define PA1_EXTINT2_IN MCHP_PINMUX(a, 1, 0x8, 15, periph)
/* pa1_extint3_in */
#define PA1_EXTINT3_IN MCHP_PINMUX(a, 1, 0xc, 7, periph)
/* pa1_nmi_in */
#define PA1_NMI_IN MCHP_PINMUX(a, 1, 0x3c, 7, periph)
/* pa1_qcs_out */
#define PA1_QCS_OUT MCHP_PINMUX(a, 1, 0x208, 23, periph)
/* pa1_qd0_in */
#define PA1_QD0_IN MCHP_PINMUX(a, 1, 0x84, 7, periph)
/* pa1_qd0_out */
#define PA1_QD0_OUT MCHP_PINMUX(a, 1, 0x208, 25, periph)
/* pa1_qd1_out */
#define PA1_QD1_OUT MCHP_PINMUX(a, 1, 0x208, 24, periph)
/* pa1_qd2_out */
#define PA1_QD2_OUT MCHP_PINMUX(a, 1, 0x20c, 24, periph)
/* pa1_qd3_in */
#define PA1_QD3_IN MCHP_PINMUX(a, 1, 0x90, 15, periph)
/* pa1_qd3_out */
#define PA1_QD3_OUT MCHP_PINMUX(a, 1, 0x208, 26, periph)
/* pa1_scom0p0_out */
#define PA1_SCOM0P0_OUT MCHP_PINMUX(a, 1, 0x208, 2, periph)
/* pa1_scom0p2_in */
#define PA1_SCOM0P2_IN MCHP_PINMUX(a, 1, 0x48, 7, periph)
/* pa1_scom0p2_out */
#define PA1_SCOM0P2_OUT MCHP_PINMUX(a, 1, 0x20c, 1, periph)
/* pa1_scom0p3_out */
#define PA1_SCOM0P3_OUT MCHP_PINMUX(a, 1, 0x208, 3, periph)
/* pa1_scom1p0_in */
#define PA1_SCOM1P0_IN MCHP_PINMUX(a, 1, 0x50, 15, periph)
/* pa1_scom1p0_out */
#define PA1_SCOM1P0_OUT MCHP_PINMUX(a, 1, 0x20c, 6, periph)
/* pa1_scom1p2_out */
#define PA1_SCOM1P2_OUT MCHP_PINMUX(a, 1, 0x208, 4, periph)
/* pa1_scom1p3_out */
#define PA1_SCOM1P3_OUT MCHP_PINMUX(a, 1, 0x208, 6, periph)
/* pa1_tc0wo0_out */
#define PA1_TC0WO0_OUT MCHP_PINMUX(a, 1, 0x208, 15, periph)
/* pa1_tc0wo1g3_in */
#define PA1_TC0WO1G3_IN MCHP_PINMUX(a, 1, 0xb8, 15, periph)
/* pa1_tc0wo1g4_in */
#define PA1_TC0WO1G4_IN MCHP_PINMUX(a, 1, 0xbc, 7, periph)
/* pa1_tc1wo0_out */
#define PA1_TC1WO0_OUT MCHP_PINMUX(a, 1, 0x208, 16, periph)
/* pa1_tc1wo1_out */
#define PA1_TC1WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 16, periph)
/* pa1_tc2wo0g3_in */
#define PA1_TC2WO0G3_IN MCHP_PINMUX(a, 1, 0xcc, 15, periph)
/* pa1_tc2wo0_out */
#define PA1_TC2WO0_OUT MCHP_PINMUX(a, 1, 0x208, 17, periph)
/* pa1_tc2wo1g4_in */
#define PA1_TC2WO1G4_IN MCHP_PINMUX(a, 1, 0xd4, 7, periph)
/* pa1_tc2wo1_out */
#define PA1_TC2WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 17, periph)
/* pa1_tc3wo0g3_in */
#define PA1_TC3WO0G3_IN MCHP_PINMUX(a, 1, 0xdc, 15, periph)
/* pa1_tc3wo0_out */
#define PA1_TC3WO0_OUT MCHP_PINMUX(a, 1, 0x208, 18, periph)
/* pa1_tc3wo1g4_in */
#define PA1_TC3WO1G4_IN MCHP_PINMUX(a, 1, 0xe4, 7, periph)
/* pa1_tc3wo1_out */
#define PA1_TC3WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 18, periph)
/* pa1_tc4wo0g3_in */
#define PA1_TC4WO0G3_IN MCHP_PINMUX(a, 1, 0xec, 15, periph)
/* pa1_tc4wo0_out */
#define PA1_TC4WO0_OUT MCHP_PINMUX(a, 1, 0x208, 19, periph)
/* pa1_tc4wo1g4_in */
#define PA1_TC4WO1G4_IN MCHP_PINMUX(a, 1, 0xf4, 7, periph)
/* pa1_tc4wo1_out */
#define PA1_TC4WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 19, periph)
/* pa1_tc5wo0g3_in */
#define PA1_TC5WO0G3_IN MCHP_PINMUX(a, 1, 0xfc, 15, periph)
/* pa1_tc5wo0_out */
#define PA1_TC5WO0_OUT MCHP_PINMUX(a, 1, 0x208, 20, periph)
/* pa1_tc5wo1g4_in */
#define PA1_TC5WO1G4_IN MCHP_PINMUX(a, 1, 0x104, 7, periph)
/* pa1_tc5wo1_out */
#define PA1_TC5WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 20, periph)
/* pa1_tc6wo0g3_in */
#define PA1_TC6WO0G3_IN MCHP_PINMUX(a, 1, 0x10c, 15, periph)
/* pa1_tc6wo0_out */
#define PA1_TC6WO0_OUT MCHP_PINMUX(a, 1, 0x208, 21, periph)
/* pa1_tc6wo1g4_in */
#define PA1_TC6WO1G4_IN MCHP_PINMUX(a, 1, 0x114, 7, periph)
/* pa1_tc6wo1_out */
#define PA1_TC6WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 21, periph)
/* pa1_tc7wo0g3_in */
#define PA1_TC7WO0G3_IN MCHP_PINMUX(a, 1, 0x11c, 15, periph)
/* pa1_tc7wo0_out */
#define PA1_TC7WO0_OUT MCHP_PINMUX(a, 1, 0x208, 22, periph)
/* pa1_tc7wo1g4_in */
#define PA1_TC7WO1G4_IN MCHP_PINMUX(a, 1, 0x124, 7, periph)
/* pa1_tc7wo1_out */
#define PA1_TC7WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 22, periph)
/* pa1_tcc0wo0_out */
#define PA1_TCC0WO0_OUT MCHP_PINMUX(a, 1, 0x208, 8, periph)
/* pa1_tcc0wo1_out */
#define PA1_TCC0WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 8, periph)
/* pa1_tcc0wo2_out */
#define PA1_TCC0WO2_OUT MCHP_PINMUX(a, 1, 0x208, 7, periph)
/* pa1_tcc0wo3_out */
#define PA1_TCC0WO3_OUT MCHP_PINMUX(a, 1, 0x20c, 7, periph)
/* pa1_tcc0wo4_out */
#define PA1_TCC0WO4_OUT MCHP_PINMUX(a, 1, 0x208, 9, periph)
/* pa1_tcc0wo5_out */
#define PA1_TCC0WO5_OUT MCHP_PINMUX(a, 1, 0x20c, 9, periph)
/* pa1_tcc1wo0_out */
#define PA1_TCC1WO0_OUT MCHP_PINMUX(a, 1, 0x208, 11, periph)
/* pa1_tcc1wo1_out */
#define PA1_TCC1WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 11, periph)
/* pa1_tcc1wo2_out */
#define PA1_TCC1WO2_OUT MCHP_PINMUX(a, 1, 0x208, 10, periph)
/* pa1_tcc1wo3_out */
#define PA1_TCC1WO3_OUT MCHP_PINMUX(a, 1, 0x20c, 10, periph)
/* pa1_tcc1wo4_out */
#define PA1_TCC1WO4_OUT MCHP_PINMUX(a, 1, 0x208, 12, periph)
/* pa1_tcc1wo5_out */
#define PA1_TCC1WO5_OUT MCHP_PINMUX(a, 1, 0x20c, 12, periph)
/* pa1_tcc2wo0_out */
#define PA1_TCC2WO0_OUT MCHP_PINMUX(a, 1, 0x208, 13, periph)
/* pa1_tcc2wo1_out */
#define PA1_TCC2WO1_OUT MCHP_PINMUX(a, 1, 0x20c, 13, periph)
/* pa2_cclin0_in */
#define PA2_CCLIN0_IN MCHP_PINMUX(a, 2, 0x98, 8, periph)
/* pa2_cclin3_in */
#define PA2_CCLIN3_IN MCHP_PINMUX(a, 2, 0xa4, 8, periph)
/* pa2_cclout1_out */
#define PA2_CCLOUT1_OUT MCHP_PINMUX(a, 2, 0x214, 27, periph)
/* pa2_extint0_in */
#define PA2_EXTINT0_IN MCHP_PINMUX(a, 2, 0x0, 8, periph)
/* pa2_extint3_in */
#define PA2_EXTINT3_IN MCHP_PINMUX(a, 2, 0xc, 15, periph)
/* pa2_nmi_in */
#define PA2_NMI_IN MCHP_PINMUX(a, 2, 0x3c, 15, periph)
/* pa2_qcs_out */
#define PA2_QCS_OUT MCHP_PINMUX(a, 2, 0x214, 23, periph)
/* pa2_qd0_in */
#define PA2_QD0_IN MCHP_PINMUX(a, 2, 0x84, 15, periph)
/* pa2_qd0_out */
#define PA2_QD0_OUT MCHP_PINMUX(a, 2, 0x214, 26, periph)
/* pa2_qd1_in */
#define PA2_QD1_IN MCHP_PINMUX(a, 2, 0x88, 8, periph)
/* pa2_qd1_out */
#define PA2_QD1_OUT MCHP_PINMUX(a, 2, 0x214, 25, periph)
/* pa2_qd2_out */
#define PA2_QD2_OUT MCHP_PINMUX(a, 2, 0x214, 24, periph)
/* pa2_scom0p0_out */
#define PA2_SCOM0P0_OUT MCHP_PINMUX(a, 2, 0x214, 3, periph)
/* pa2_scom0p2_in */
#define PA2_SCOM0P2_IN MCHP_PINMUX(a, 2, 0x48, 15, periph)
/* pa2_scom0p2_out */
#define PA2_SCOM0P2_OUT MCHP_PINMUX(a, 2, 0x214, 1, periph)
/* pa2_scom0p3_in */
#define PA2_SCOM0P3_IN MCHP_PINMUX(a, 2, 0x4c, 8, periph)
/* pa2_scom1p0_out */
#define PA2_SCOM1P0_OUT MCHP_PINMUX(a, 2, 0x214, 6, periph)
/* pa2_scom1p2_in */
#define PA2_SCOM1P2_IN MCHP_PINMUX(a, 2, 0x58, 8, periph)
/* pa2_scom1p3_out */
#define PA2_SCOM1P3_OUT MCHP_PINMUX(a, 2, 0x214, 4, periph)
/* pa2_tc0wo0g1_in */
#define PA2_TC0WO0G1_IN MCHP_PINMUX(a, 2, 0xb0, 8, periph)
/* pa2_tc0wo0_out */
#define PA2_TC0WO0_OUT MCHP_PINMUX(a, 2, 0x214, 15, periph)
/* pa2_tc0wo1g4_in */
#define PA2_TC0WO1G4_IN MCHP_PINMUX(a, 2, 0xbc, 15, periph)
/* pa2_tc1wo0g1_in */
#define PA2_TC1WO0G1_IN MCHP_PINMUX(a, 2, 0xc0, 8, periph)
/* pa2_tc1wo1_out */
#define PA2_TC1WO1_OUT MCHP_PINMUX(a, 2, 0x214, 16, periph)
/* pa2_tc2wo0g1_in */
#define PA2_TC2WO0G1_IN MCHP_PINMUX(a, 2, 0xc8, 8, periph)
/* pa2_tc2wo1g4_in */
#define PA2_TC2WO1G4_IN MCHP_PINMUX(a, 2, 0xd4, 15, periph)
/* pa2_tc2wo1_out */
#define PA2_TC2WO1_OUT MCHP_PINMUX(a, 2, 0x214, 17, periph)
/* pa2_tc3wo0g1_in */
#define PA2_TC3WO0G1_IN MCHP_PINMUX(a, 2, 0xd8, 8, periph)
/* pa2_tc3wo1g4_in */
#define PA2_TC3WO1G4_IN MCHP_PINMUX(a, 2, 0xe4, 15, periph)
/* pa2_tc3wo1_out */
#define PA2_TC3WO1_OUT MCHP_PINMUX(a, 2, 0x214, 18, periph)
/* pa2_tc4wo0g1_in */
#define PA2_TC4WO0G1_IN MCHP_PINMUX(a, 2, 0xe8, 8, periph)
/* pa2_tc4wo1g4_in */
#define PA2_TC4WO1G4_IN MCHP_PINMUX(a, 2, 0xf4, 15, periph)
/* pa2_tc4wo1_out */
#define PA2_TC4WO1_OUT MCHP_PINMUX(a, 2, 0x214, 19, periph)
/* pa2_tc5wo0g1_in */
#define PA2_TC5WO0G1_IN MCHP_PINMUX(a, 2, 0xf8, 8, periph)
/* pa2_tc5wo1g4_in */
#define PA2_TC5WO1G4_IN MCHP_PINMUX(a, 2, 0x104, 15, periph)
/* pa2_tc5wo1_out */
#define PA2_TC5WO1_OUT MCHP_PINMUX(a, 2, 0x214, 20, periph)
/* pa2_tc6wo0g1_in */
#define PA2_TC6WO0G1_IN MCHP_PINMUX(a, 2, 0x108, 8, periph)
/* pa2_tc6wo1g4_in */
#define PA2_TC6WO1G4_IN MCHP_PINMUX(a, 2, 0x114, 15, periph)
/* pa2_tc6wo1_out */
#define PA2_TC6WO1_OUT MCHP_PINMUX(a, 2, 0x214, 21, periph)
/* pa2_tc7wo0g1_in */
#define PA2_TC7WO0G1_IN MCHP_PINMUX(a, 2, 0x118, 8, periph)
/* pa2_tc7wo1g4_in */
#define PA2_TC7WO1G4_IN MCHP_PINMUX(a, 2, 0x124, 15, periph)
/* pa2_tc7wo1_out */
#define PA2_TC7WO1_OUT MCHP_PINMUX(a, 2, 0x214, 22, periph)
/* pa2_tcc0wo1_out */
#define PA2_TCC0WO1_OUT MCHP_PINMUX(a, 2, 0x214, 8, periph)
/* pa2_tcc0wo3_out */
#define PA2_TCC0WO3_OUT MCHP_PINMUX(a, 2, 0x214, 7, periph)
/* pa2_tcc0wo5_out */
#define PA2_TCC0WO5_OUT MCHP_PINMUX(a, 2, 0x214, 9, periph)
/* pa2_tcc1wo1_out */
#define PA2_TCC1WO1_OUT MCHP_PINMUX(a, 2, 0x214, 11, periph)
/* pa2_tcc1wo3_out */
#define PA2_TCC1WO3_OUT MCHP_PINMUX(a, 2, 0x214, 10, periph)
/* pa2_tcc1wo5_out */
#define PA2_TCC1WO5_OUT MCHP_PINMUX(a, 2, 0x214, 12, periph)
/* pa2_tcc2wo1_out */
#define PA2_TCC2WO1_OUT MCHP_PINMUX(a, 2, 0x214, 13, periph)
/* pa3_cclin0_in */
#define PA3_CCLIN0_IN MCHP_PINMUX(a, 3, 0x98, 1, periph)
/* pa3_cclin1_in */
#define PA3_CCLIN1_IN MCHP_PINMUX(a, 3, 0x9c, 8, periph)
/* pa3_cclin3_in */
#define PA3_CCLIN3_IN MCHP_PINMUX(a, 3, 0xa4, 1, periph)
/* pa3_cclin4_in */
#define PA3_CCLIN4_IN MCHP_PINMUX(a, 3, 0xa8, 8, periph)
/* pa3_cclout0_out */
#define PA3_CCLOUT0_OUT MCHP_PINMUX(a, 3, 0x220, 27, periph)
/* pa3_cclout1_out */
#define PA3_CCLOUT1_OUT MCHP_PINMUX(a, 3, 0x21c, 27, periph)
/* pa3_extint0_in */
#define PA3_EXTINT0_IN MCHP_PINMUX(a, 3, 0x0, 1, periph)
/* pa3_extint1_in */
#define PA3_EXTINT1_IN MCHP_PINMUX(a, 3, 0x4, 8, periph)
/* pa3_qcs_out */
#define PA3_QCS_OUT MCHP_PINMUX(a, 3, 0x220, 23, periph)
/* pa3_qd0_out */
#define PA3_QD0_OUT MCHP_PINMUX(a, 3, 0x21c, 24, periph)
/* pa3_qd1_in */
#define PA3_QD1_IN MCHP_PINMUX(a, 3, 0x88, 1, periph)
/* pa3_qd1_out */
#define PA3_QD1_OUT MCHP_PINMUX(a, 3, 0x220, 24, periph)
/* pa3_qd2_in */
#define PA3_QD2_IN MCHP_PINMUX(a, 3, 0x8c, 8, periph)
/* pa3_qd2_out */
#define PA3_QD2_OUT MCHP_PINMUX(a, 3, 0x21c, 26, periph)
/* pa3_qd3_out */
#define PA3_QD3_OUT MCHP_PINMUX(a, 3, 0x21c, 25, periph)
/* pa3_qsck_out */
#define PA3_QSCK_OUT MCHP_PINMUX(a, 3, 0x218, 7, periph)
/* pa3_qspics_out */
#define PA3_QSPICS_OUT MCHP_PINMUX(a, 3, 0x21c, 23, periph)
/* pa3_refi_in */
#define PA3_REFI_IN MCHP_PINMUX(a, 3, 0x94, 1, periph)
/* pa3_refo1_out */
#define PA3_REFO1_OUT MCHP_PINMUX(a, 3, 0x218, 3, periph)
/* pa3_refo2_out */
#define PA3_REFO2_OUT MCHP_PINMUX(a, 3, 0x218, 4, periph)
/* pa3_refo3_out */
#define PA3_REFO3_OUT MCHP_PINMUX(a, 3, 0x218, 5, periph)
/* pa3_refo4_out */
#define PA3_REFO4_OUT MCHP_PINMUX(a, 3, 0x218, 6, periph)
/* pa3_scom0p0_in */
#define PA3_SCOM0P0_IN MCHP_PINMUX(a, 3, 0x40, 8, periph)
/* pa3_scom0p0_out */
#define PA3_SCOM0P0_OUT MCHP_PINMUX(a, 3, 0x21c, 1, periph)
/* pa3_scom0p1_in */
#define PA3_SCOM0P1_IN MCHP_PINMUX(a, 3, 0x44, 1, periph)
/* pa3_scom0p1_out */
#define PA3_SCOM0P1_OUT MCHP_PINMUX(a, 3, 0x218, 1, periph)
/* pa3_scom0p2_out */
#define PA3_SCOM0P2_OUT MCHP_PINMUX(a, 3, 0x21c, 3, periph)
/* pa3_scom0p3_in */
#define PA3_SCOM0P3_IN MCHP_PINMUX(a, 3, 0x4c, 1, periph)
/* pa3_scom0p3_out */
#define PA3_SCOM0P3_OUT MCHP_PINMUX(a, 3, 0x21c, 2, periph)
/* pa3_scom1p1_in */
#define PA3_SCOM1P1_IN MCHP_PINMUX(a, 3, 0x54, 1, periph)
/* pa3_scom1p1_out */
#define PA3_SCOM1P1_OUT MCHP_PINMUX(a, 3, 0x218, 2, periph)
/* pa3_scom1p2_in */
#define PA3_SCOM1P2_IN MCHP_PINMUX(a, 3, 0x58, 1, periph)
/* pa3_scom1p2_out */
#define PA3_SCOM1P2_OUT MCHP_PINMUX(a, 3, 0x21c, 6, periph)
/* pa3_scom1p3_in */
#define PA3_SCOM1P3_IN MCHP_PINMUX(a, 3, 0x5c, 8, periph)
/* pa3_scom1p3_out */
#define PA3_SCOM1P3_OUT MCHP_PINMUX(a, 3, 0x21c, 5, periph)
/* pa3_tc0wo0g1_in */
#define PA3_TC0WO0G1_IN MCHP_PINMUX(a, 3, 0xb0, 1, periph)
/* pa3_tc0wo0g2_in */
#define PA3_TC0WO0G2_IN MCHP_PINMUX(a, 3, 0xb4, 8, periph)
/* pa3_tc0wo0_out */
#define PA3_TC0WO0_OUT MCHP_PINMUX(a, 3, 0x220, 15, periph)
/* pa3_tc0wo1_out */
#define PA3_TC0WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 15, periph)
/* pa3_tc1wo0g1_in */
#define PA3_TC1WO0G1_IN MCHP_PINMUX(a, 3, 0xc0, 1, periph)
/* pa3_tc1wo0_out */
#define PA3_TC1WO0_OUT MCHP_PINMUX(a, 3, 0x220, 16, periph)
/* pa3_tc1wo1g2_in */
#define PA3_TC1WO1G2_IN MCHP_PINMUX(a, 3, 0xc4, 8, periph)
/* pa3_tc1wo1_out */
#define PA3_TC1WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 16, periph)
/* pa3_tc2wo0g1_in */
#define PA3_TC2WO0G1_IN MCHP_PINMUX(a, 3, 0xc8, 1, periph)
/* pa3_tc2wo0_out */
#define PA3_TC2WO0_OUT MCHP_PINMUX(a, 3, 0x220, 17, periph)
/* pa3_tc2wo1g2_in */
#define PA3_TC2WO1G2_IN MCHP_PINMUX(a, 3, 0xd0, 8, periph)
/* pa3_tc2wo1_out */
#define PA3_TC2WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 17, periph)
/* pa3_tc3wo0g1_in */
#define PA3_TC3WO0G1_IN MCHP_PINMUX(a, 3, 0xd8, 1, periph)
/* pa3_tc3wo0_out */
#define PA3_TC3WO0_OUT MCHP_PINMUX(a, 3, 0x220, 18, periph)
/* pa3_tc3wo1g2_in */
#define PA3_TC3WO1G2_IN MCHP_PINMUX(a, 3, 0xe0, 8, periph)
/* pa3_tc3wo1_out */
#define PA3_TC3WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 18, periph)
/* pa3_tc4wo0g1_in */
#define PA3_TC4WO0G1_IN MCHP_PINMUX(a, 3, 0xe8, 1, periph)
/* pa3_tc4wo0_out */
#define PA3_TC4WO0_OUT MCHP_PINMUX(a, 3, 0x220, 19, periph)
/* pa3_tc4wo1g2_in */
#define PA3_TC4WO1G2_IN MCHP_PINMUX(a, 3, 0xf0, 8, periph)
/* pa3_tc4wo1_out */
#define PA3_TC4WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 19, periph)
/* pa3_tc5wo0g1_in */
#define PA3_TC5WO0G1_IN MCHP_PINMUX(a, 3, 0xf8, 1, periph)
/* pa3_tc5wo0_out */
#define PA3_TC5WO0_OUT MCHP_PINMUX(a, 3, 0x220, 20, periph)
/* pa3_tc5wo1g2_in */
#define PA3_TC5WO1G2_IN MCHP_PINMUX(a, 3, 0x100, 8, periph)
/* pa3_tc5wo1_out */
#define PA3_TC5WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 20, periph)
/* pa3_tc6wo0g1_in */
#define PA3_TC6WO0G1_IN MCHP_PINMUX(a, 3, 0x108, 1, periph)
/* pa3_tc6wo0_out */
#define PA3_TC6WO0_OUT MCHP_PINMUX(a, 3, 0x220, 21, periph)
/* pa3_tc6wo1g2_in */
#define PA3_TC6WO1G2_IN MCHP_PINMUX(a, 3, 0x110, 8, periph)
/* pa3_tc6wo1_out */
#define PA3_TC6WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 21, periph)
/* pa3_tc7wo0g1_in */
#define PA3_TC7WO0G1_IN MCHP_PINMUX(a, 3, 0x118, 1, periph)
/* pa3_tc7wo0_out */
#define PA3_TC7WO0_OUT MCHP_PINMUX(a, 3, 0x220, 22, periph)
/* pa3_tc7wo1g2_in */
#define PA3_TC7WO1G2_IN MCHP_PINMUX(a, 3, 0x120, 8, periph)
/* pa3_tc7wo1_out */
#define PA3_TC7WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 22, periph)
/* pa3_tcc0wo0_out */
#define PA3_TCC0WO0_OUT MCHP_PINMUX(a, 3, 0x220, 8, periph)
/* pa3_tcc0wo1_out */
#define PA3_TCC0WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 7, periph)
/* pa3_tcc0wo2_out */
#define PA3_TCC0WO2_OUT MCHP_PINMUX(a, 3, 0x220, 7, periph)
/* pa3_tcc0wo3_out */
#define PA3_TCC0WO3_OUT MCHP_PINMUX(a, 3, 0x21c, 9, periph)
/* pa3_tcc0wo4_out */
#define PA3_TCC0WO4_OUT MCHP_PINMUX(a, 3, 0x220, 9, periph)
/* pa3_tcc0wo5_out */
#define PA3_TCC0WO5_OUT MCHP_PINMUX(a, 3, 0x21c, 8, periph)
/* pa3_tcc1wo0_out */
#define PA3_TCC1WO0_OUT MCHP_PINMUX(a, 3, 0x220, 11, periph)
/* pa3_tcc1wo1_out */
#define PA3_TCC1WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 10, periph)
/* pa3_tcc1wo2_out */
#define PA3_TCC1WO2_OUT MCHP_PINMUX(a, 3, 0x220, 10, periph)
/* pa3_tcc1wo3_out */
#define PA3_TCC1WO3_OUT MCHP_PINMUX(a, 3, 0x21c, 12, periph)
/* pa3_tcc1wo4_out */
#define PA3_TCC1WO4_OUT MCHP_PINMUX(a, 3, 0x220, 12, periph)
/* pa3_tcc1wo5_out */
#define PA3_TCC1WO5_OUT MCHP_PINMUX(a, 3, 0x21c, 11, periph)
/* pa3_tcc2wo0_out */
#define PA3_TCC2WO0_OUT MCHP_PINMUX(a, 3, 0x220, 13, periph)
/* pa3_tcc2wo1_out */
#define PA3_TCC2WO1_OUT MCHP_PINMUX(a, 3, 0x21c, 13, periph)
/* pa4_cclin1_in */
#define PA4_CCLIN1_IN MCHP_PINMUX(a, 4, 0x9c, 1, periph)
/* pa4_cclin2_in */
#define PA4_CCLIN2_IN MCHP_PINMUX(a, 4, 0xa0, 8, periph)
/* pa4_cclin4_in */
#define PA4_CCLIN4_IN MCHP_PINMUX(a, 4, 0xa8, 1, periph)
/* pa4_cclin5_in */
#define PA4_CCLIN5_IN MCHP_PINMUX(a, 4, 0xac, 8, periph)
/* pa4_cclout0_out */
#define PA4_CCLOUT0_OUT MCHP_PINMUX(a, 4, 0x228, 27, periph)
/* pa4_cclout1_out */
#define PA4_CCLOUT1_OUT MCHP_PINMUX(a, 4, 0x224, 27, periph)
/* pa4_extint1_in */
#define PA4_EXTINT1_IN MCHP_PINMUX(a, 4, 0x4, 1, periph)
/* pa4_extint2_in */
#define PA4_EXTINT2_IN MCHP_PINMUX(a, 4, 0x8, 8, periph)
/* pa4_qcs_out */
#define PA4_QCS_OUT MCHP_PINMUX(a, 4, 0x228, 23, periph)
/* pa4_qd0_out */
#define PA4_QD0_OUT MCHP_PINMUX(a, 4, 0x224, 24, periph)
/* pa4_qd1_out */
#define PA4_QD1_OUT MCHP_PINMUX(a, 4, 0x228, 24, periph)
/* pa4_qd2_in */
#define PA4_QD2_IN MCHP_PINMUX(a, 4, 0x8c, 1, periph)
/* pa4_qd2_out */
#define PA4_QD2_OUT MCHP_PINMUX(a, 4, 0x224, 26, periph)
/* pa4_qd3_in */
#define PA4_QD3_IN MCHP_PINMUX(a, 4, 0x90, 8, periph)
/* pa4_qd3_out */
#define PA4_QD3_OUT MCHP_PINMUX(a, 4, 0x224, 25, periph)
/* pa4_qspics_out */
#define PA4_QSPICS_OUT MCHP_PINMUX(a, 4, 0x224, 23, periph)
/* pa4_scom0p0_in */
#define PA4_SCOM0P0_IN MCHP_PINMUX(a, 4, 0x40, 1, periph)
/* pa4_scom0p0_out */
#define PA4_SCOM0P0_OUT MCHP_PINMUX(a, 4, 0x224, 1, periph)
/* pa4_scom0p2_out */
#define PA4_SCOM0P2_OUT MCHP_PINMUX(a, 4, 0x224, 3, periph)
/* pa4_scom0p3_out */
#define PA4_SCOM0P3_OUT MCHP_PINMUX(a, 4, 0x224, 2, periph)
/* pa4_scom1p0_in */
#define PA4_SCOM1P0_IN MCHP_PINMUX(a, 4, 0x50, 8, periph)
/* pa4_scom1p0_out */
#define PA4_SCOM1P0_OUT MCHP_PINMUX(a, 4, 0x22c, 6, periph)
/* pa4_scom1p2_out */
#define PA4_SCOM1P2_OUT MCHP_PINMUX(a, 4, 0x224, 6, periph)
/* pa4_scom1p3_in */
#define PA4_SCOM1P3_IN MCHP_PINMUX(a, 4, 0x5c, 1, periph)
/* pa4_scom1p3_out */
#define PA4_SCOM1P3_OUT MCHP_PINMUX(a, 4, 0x224, 5, periph)
/* pa4_tc0wo0g2_in */
#define PA4_TC0WO0G2_IN MCHP_PINMUX(a, 4, 0xb4, 1, periph)
/* pa4_tc0wo0_out */
#define PA4_TC0WO0_OUT MCHP_PINMUX(a, 4, 0x228, 15, periph)
/* pa4_tc0wo1g3_in */
#define PA4_TC0WO1G3_IN MCHP_PINMUX(a, 4, 0xb8, 8, periph)
/* pa4_tc0wo1_out */
#define PA4_TC0WO1_OUT MCHP_PINMUX(a, 4, 0x224, 15, periph)
/* pa4_tc1wo0_out */
#define PA4_TC1WO0_OUT MCHP_PINMUX(a, 4, 0x228, 16, periph)
/* pa4_tc1wo1g2_in */
#define PA4_TC1WO1G2_IN MCHP_PINMUX(a, 4, 0xc4, 1, periph)
/* pa4_tc1wo1_out */
#define PA4_TC1WO1_OUT MCHP_PINMUX(a, 4, 0x224, 16, periph)
/* pa4_tc2wo0g3_in */
#define PA4_TC2WO0G3_IN MCHP_PINMUX(a, 4, 0xcc, 8, periph)
/* pa4_tc2wo0_out */
#define PA4_TC2WO0_OUT MCHP_PINMUX(a, 4, 0x228, 17, periph)
/* pa4_tc2wo1g2_in */
#define PA4_TC2WO1G2_IN MCHP_PINMUX(a, 4, 0xd0, 1, periph)
/* pa4_tc2wo1_out */
#define PA4_TC2WO1_OUT MCHP_PINMUX(a, 4, 0x224, 17, periph)
/* pa4_tc3wo0g3_in */
#define PA4_TC3WO0G3_IN MCHP_PINMUX(a, 4, 0xdc, 8, periph)
/* pa4_tc3wo0_out */
#define PA4_TC3WO0_OUT MCHP_PINMUX(a, 4, 0x228, 18, periph)
/* pa4_tc3wo1g2_in */
#define PA4_TC3WO1G2_IN MCHP_PINMUX(a, 4, 0xe0, 1, periph)
/* pa4_tc3wo1_out */
#define PA4_TC3WO1_OUT MCHP_PINMUX(a, 4, 0x224, 18, periph)
/* pa4_tc4wo0g3_in */
#define PA4_TC4WO0G3_IN MCHP_PINMUX(a, 4, 0xec, 8, periph)
/* pa4_tc4wo0_out */
#define PA4_TC4WO0_OUT MCHP_PINMUX(a, 4, 0x228, 19, periph)
/* pa4_tc4wo1g2_in */
#define PA4_TC4WO1G2_IN MCHP_PINMUX(a, 4, 0xf0, 1, periph)
/* pa4_tc4wo1_out */
#define PA4_TC4WO1_OUT MCHP_PINMUX(a, 4, 0x224, 19, periph)
/* pa4_tc5wo0g3_in */
#define PA4_TC5WO0G3_IN MCHP_PINMUX(a, 4, 0xfc, 8, periph)
/* pa4_tc5wo0_out */
#define PA4_TC5WO0_OUT MCHP_PINMUX(a, 4, 0x228, 20, periph)
/* pa4_tc5wo1g2_in */
#define PA4_TC5WO1G2_IN MCHP_PINMUX(a, 4, 0x100, 1, periph)
/* pa4_tc5wo1_out */
#define PA4_TC5WO1_OUT MCHP_PINMUX(a, 4, 0x224, 20, periph)
/* pa4_tc6wo0g3_in */
#define PA4_TC6WO0G3_IN MCHP_PINMUX(a, 4, 0x10c, 8, periph)
/* pa4_tc6wo0_out */
#define PA4_TC6WO0_OUT MCHP_PINMUX(a, 4, 0x228, 21, periph)
/* pa4_tc6wo1g2_in */
#define PA4_TC6WO1G2_IN MCHP_PINMUX(a, 4, 0x110, 1, periph)
/* pa4_tc6wo1_out */
#define PA4_TC6WO1_OUT MCHP_PINMUX(a, 4, 0x224, 21, periph)
/* pa4_tc7wo0g3_in */
#define PA4_TC7WO0G3_IN MCHP_PINMUX(a, 4, 0x11c, 8, periph)
/* pa4_tc7wo0_out */
#define PA4_TC7WO0_OUT MCHP_PINMUX(a, 4, 0x228, 22, periph)
/* pa4_tc7wo1g2_in */
#define PA4_TC7WO1G2_IN MCHP_PINMUX(a, 4, 0x120, 1, periph)
/* pa4_tc7wo1_out */
#define PA4_TC7WO1_OUT MCHP_PINMUX(a, 4, 0x224, 22, periph)
/* pa4_tcc0wo0_out */
#define PA4_TCC0WO0_OUT MCHP_PINMUX(a, 4, 0x228, 8, periph)
/* pa4_tcc0wo1_out */
#define PA4_TCC0WO1_OUT MCHP_PINMUX(a, 4, 0x224, 7, periph)
/* pa4_tcc0wo2_out */
#define PA4_TCC0WO2_OUT MCHP_PINMUX(a, 4, 0x228, 7, periph)
/* pa4_tcc0wo3_out */
#define PA4_TCC0WO3_OUT MCHP_PINMUX(a, 4, 0x224, 9, periph)
/* pa4_tcc0wo4_out */
#define PA4_TCC0WO4_OUT MCHP_PINMUX(a, 4, 0x228, 9, periph)
/* pa4_tcc0wo5_out */
#define PA4_TCC0WO5_OUT MCHP_PINMUX(a, 4, 0x224, 8, periph)
/* pa4_tcc1wo0_out */
#define PA4_TCC1WO0_OUT MCHP_PINMUX(a, 4, 0x228, 11, periph)
/* pa4_tcc1wo1_out */
#define PA4_TCC1WO1_OUT MCHP_PINMUX(a, 4, 0x224, 10, periph)
/* pa4_tcc1wo2_out */
#define PA4_TCC1WO2_OUT MCHP_PINMUX(a, 4, 0x228, 10, periph)
/* pa4_tcc1wo3_out */
#define PA4_TCC1WO3_OUT MCHP_PINMUX(a, 4, 0x224, 12, periph)
/* pa4_tcc1wo4_out */
#define PA4_TCC1WO4_OUT MCHP_PINMUX(a, 4, 0x228, 12, periph)
/* pa4_tcc1wo5_out */
#define PA4_TCC1WO5_OUT MCHP_PINMUX(a, 4, 0x224, 11, periph)
/* pa4_tcc2wo0_out */
#define PA4_TCC2WO0_OUT MCHP_PINMUX(a, 4, 0x228, 13, periph)
/* pa4_tcc2wo1_out */
#define PA4_TCC2WO1_OUT MCHP_PINMUX(a, 4, 0x224, 13, periph)
/* pa5_cclin2_in */
#define PA5_CCLIN2_IN MCHP_PINMUX(a, 5, 0xa0, 1, periph)
/* pa5_cclin5_in */
#define PA5_CCLIN5_IN MCHP_PINMUX(a, 5, 0xac, 1, periph)
/* pa5_cclout0_out */
#define PA5_CCLOUT0_OUT MCHP_PINMUX(a, 5, 0x234, 27, periph)
/* pa5_cclout1_out */
#define PA5_CCLOUT1_OUT MCHP_PINMUX(a, 5, 0x238, 27, periph)
/* pa5_extint2_in */
#define PA5_EXTINT2_IN MCHP_PINMUX(a, 5, 0x8, 1, periph)
/* pa5_extint3_in */
#define PA5_EXTINT3_IN MCHP_PINMUX(a, 5, 0xc, 8, periph)
/* pa5_nmi_in */
#define PA5_NMI_IN MCHP_PINMUX(a, 5, 0x3c, 8, periph)
/* pa5_qcs_out */
#define PA5_QCS_OUT MCHP_PINMUX(a, 5, 0x234, 23, periph)
/* pa5_qd0_in */
#define PA5_QD0_IN MCHP_PINMUX(a, 5, 0x84, 8, periph)
/* pa5_qd0_out */
#define PA5_QD0_OUT MCHP_PINMUX(a, 5, 0x234, 25, periph)
/* pa5_qd1_out */
#define PA5_QD1_OUT MCHP_PINMUX(a, 5, 0x234, 24, periph)
/* pa5_qd2_out */
#define PA5_QD2_OUT MCHP_PINMUX(a, 5, 0x238, 24, periph)
/* pa5_qd3_in */
#define PA5_QD3_IN MCHP_PINMUX(a, 5, 0x90, 1, periph)
/* pa5_qd3_out */
#define PA5_QD3_OUT MCHP_PINMUX(a, 5, 0x234, 26, periph)
/* pa5_qsck_out */
#define PA5_QSCK_OUT MCHP_PINMUX(a, 5, 0x230, 7, periph)
/* pa5_refi_in */
#define PA5_REFI_IN MCHP_PINMUX(a, 5, 0x94, 2, periph)
/* pa5_refo1_out */
#define PA5_REFO1_OUT MCHP_PINMUX(a, 5, 0x230, 3, periph)
/* pa5_refo2_out */
#define PA5_REFO2_OUT MCHP_PINMUX(a, 5, 0x230, 4, periph)
/* pa5_refo3_out */
#define PA5_REFO3_OUT MCHP_PINMUX(a, 5, 0x230, 5, periph)
/* pa5_refo4_out */
#define PA5_REFO4_OUT MCHP_PINMUX(a, 5, 0x230, 6, periph)
/* pa5_scom0p0_out */
#define PA5_SCOM0P0_OUT MCHP_PINMUX(a, 5, 0x234, 2, periph)
/* pa5_scom0p1_in */
#define PA5_SCOM0P1_IN MCHP_PINMUX(a, 5, 0x44, 2, periph)
/* pa5_scom0p1_out */
#define PA5_SCOM0P1_OUT MCHP_PINMUX(a, 5, 0x230, 1, periph)
/* pa5_scom0p2_in */
#define PA5_SCOM0P2_IN MCHP_PINMUX(a, 5, 0x48, 8, periph)
/* pa5_scom0p2_out */
#define PA5_SCOM0P2_OUT MCHP_PINMUX(a, 5, 0x238, 1, periph)
/* pa5_scom0p3_out */
#define PA5_SCOM0P3_OUT MCHP_PINMUX(a, 5, 0x234, 3, periph)
/* pa5_scom1p0_in */
#define PA5_SCOM1P0_IN MCHP_PINMUX(a, 5, 0x50, 1, periph)
/* pa5_scom1p0_out */
#define PA5_SCOM1P0_OUT MCHP_PINMUX(a, 5, 0x238, 6, periph)
/* pa5_scom1p1_in */
#define PA5_SCOM1P1_IN MCHP_PINMUX(a, 5, 0x54, 2, periph)
/* pa5_scom1p1_out */
#define PA5_SCOM1P1_OUT MCHP_PINMUX(a, 5, 0x230, 2, periph)
/* pa5_scom1p2_out */
#define PA5_SCOM1P2_OUT MCHP_PINMUX(a, 5, 0x234, 4, periph)
/* pa5_scom1p3_out */
#define PA5_SCOM1P3_OUT MCHP_PINMUX(a, 5, 0x234, 6, periph)
/* pa5_tc0wo0_out */
#define PA5_TC0WO0_OUT MCHP_PINMUX(a, 5, 0x234, 15, periph)
/* pa5_tc0wo1g3_in */
#define PA5_TC0WO1G3_IN MCHP_PINMUX(a, 5, 0xb8, 1, periph)
/* pa5_tc0wo1g4_in */
#define PA5_TC0WO1G4_IN MCHP_PINMUX(a, 5, 0xbc, 8, periph)
/* pa5_tc1wo0_out */
#define PA5_TC1WO0_OUT MCHP_PINMUX(a, 5, 0x234, 16, periph)
/* pa5_tc1wo1_out */
#define PA5_TC1WO1_OUT MCHP_PINMUX(a, 5, 0x238, 16, periph)
/* pa5_tc2wo0g3_in */
#define PA5_TC2WO0G3_IN MCHP_PINMUX(a, 5, 0xcc, 1, periph)
/* pa5_tc2wo0_out */
#define PA5_TC2WO0_OUT MCHP_PINMUX(a, 5, 0x234, 17, periph)
/* pa5_tc2wo1g4_in */
#define PA5_TC2WO1G4_IN MCHP_PINMUX(a, 5, 0xd4, 8, periph)
/* pa5_tc2wo1_out */
#define PA5_TC2WO1_OUT MCHP_PINMUX(a, 5, 0x238, 17, periph)
/* pa5_tc3wo0g3_in */
#define PA5_TC3WO0G3_IN MCHP_PINMUX(a, 5, 0xdc, 1, periph)
/* pa5_tc3wo0_out */
#define PA5_TC3WO0_OUT MCHP_PINMUX(a, 5, 0x234, 18, periph)
/* pa5_tc3wo1g4_in */
#define PA5_TC3WO1G4_IN MCHP_PINMUX(a, 5, 0xe4, 8, periph)
/* pa5_tc3wo1_out */
#define PA5_TC3WO1_OUT MCHP_PINMUX(a, 5, 0x238, 18, periph)
/* pa5_tc4wo0g3_in */
#define PA5_TC4WO0G3_IN MCHP_PINMUX(a, 5, 0xec, 1, periph)
/* pa5_tc4wo0_out */
#define PA5_TC4WO0_OUT MCHP_PINMUX(a, 5, 0x234, 19, periph)
/* pa5_tc4wo1g4_in */
#define PA5_TC4WO1G4_IN MCHP_PINMUX(a, 5, 0xf4, 8, periph)
/* pa5_tc4wo1_out */
#define PA5_TC4WO1_OUT MCHP_PINMUX(a, 5, 0x238, 19, periph)
/* pa5_tc5wo0g3_in */
#define PA5_TC5WO0G3_IN MCHP_PINMUX(a, 5, 0xfc, 1, periph)
/* pa5_tc5wo0_out */
#define PA5_TC5WO0_OUT MCHP_PINMUX(a, 5, 0x234, 20, periph)
/* pa5_tc5wo1g4_in */
#define PA5_TC5WO1G4_IN MCHP_PINMUX(a, 5, 0x104, 8, periph)
/* pa5_tc5wo1_out */
#define PA5_TC5WO1_OUT MCHP_PINMUX(a, 5, 0x238, 20, periph)
/* pa5_tc6wo0g3_in */
#define PA5_TC6WO0G3_IN MCHP_PINMUX(a, 5, 0x10c, 1, periph)
/* pa5_tc6wo0_out */
#define PA5_TC6WO0_OUT MCHP_PINMUX(a, 5, 0x234, 21, periph)
/* pa5_tc6wo1g4_in */
#define PA5_TC6WO1G4_IN MCHP_PINMUX(a, 5, 0x114, 8, periph)
/* pa5_tc6wo1_out */
#define PA5_TC6WO1_OUT MCHP_PINMUX(a, 5, 0x238, 21, periph)
/* pa5_tc7wo0g3_in */
#define PA5_TC7WO0G3_IN MCHP_PINMUX(a, 5, 0x11c, 1, periph)
/* pa5_tc7wo0_out */
#define PA5_TC7WO0_OUT MCHP_PINMUX(a, 5, 0x234, 22, periph)
/* pa5_tc7wo1g4_in */
#define PA5_TC7WO1G4_IN MCHP_PINMUX(a, 5, 0x124, 8, periph)
/* pa5_tc7wo1_out */
#define PA5_TC7WO1_OUT MCHP_PINMUX(a, 5, 0x238, 22, periph)
/* pa5_tcc0wo0_out */
#define PA5_TCC0WO0_OUT MCHP_PINMUX(a, 5, 0x234, 8, periph)
/* pa5_tcc0wo1_out */
#define PA5_TCC0WO1_OUT MCHP_PINMUX(a, 5, 0x238, 8, periph)
/* pa5_tcc0wo2_out */
#define PA5_TCC0WO2_OUT MCHP_PINMUX(a, 5, 0x234, 7, periph)
/* pa5_tcc0wo3_out */
#define PA5_TCC0WO3_OUT MCHP_PINMUX(a, 5, 0x238, 7, periph)
/* pa5_tcc0wo4_out */
#define PA5_TCC0WO4_OUT MCHP_PINMUX(a, 5, 0x234, 9, periph)
/* pa5_tcc0wo5_out */
#define PA5_TCC0WO5_OUT MCHP_PINMUX(a, 5, 0x238, 9, periph)
/* pa5_tcc1wo0_out */
#define PA5_TCC1WO0_OUT MCHP_PINMUX(a, 5, 0x234, 11, periph)
/* pa5_tcc1wo1_out */
#define PA5_TCC1WO1_OUT MCHP_PINMUX(a, 5, 0x238, 11, periph)
/* pa5_tcc1wo2_out */
#define PA5_TCC1WO2_OUT MCHP_PINMUX(a, 5, 0x234, 10, periph)
/* pa5_tcc1wo3_out */
#define PA5_TCC1WO3_OUT MCHP_PINMUX(a, 5, 0x238, 10, periph)
/* pa5_tcc1wo4_out */
#define PA5_TCC1WO4_OUT MCHP_PINMUX(a, 5, 0x234, 12, periph)
/* pa5_tcc1wo5_out */
#define PA5_TCC1WO5_OUT MCHP_PINMUX(a, 5, 0x238, 12, periph)
/* pa5_tcc2wo0_out */
#define PA5_TCC2WO0_OUT MCHP_PINMUX(a, 5, 0x234, 13, periph)
/* pa5_tcc2wo1_out */
#define PA5_TCC2WO1_OUT MCHP_PINMUX(a, 5, 0x238, 13, periph)
/* pa6_cclin0_in */
#define PA6_CCLIN0_IN MCHP_PINMUX(a, 6, 0x98, 9, periph)
/* pa6_cclin3_in */
#define PA6_CCLIN3_IN MCHP_PINMUX(a, 6, 0xa4, 9, periph)
/* pa6_cclout1_out */
#define PA6_CCLOUT1_OUT MCHP_PINMUX(a, 6, 0x240, 27, periph)
/* pa6_extint0_in */
#define PA6_EXTINT0_IN MCHP_PINMUX(a, 6, 0x0, 9, periph)
/* pa6_extint3_in */
#define PA6_EXTINT3_IN MCHP_PINMUX(a, 6, 0xc, 1, periph)
/* pa6_nmi_in */
#define PA6_NMI_IN MCHP_PINMUX(a, 6, 0x3c, 1, periph)
/* pa6_qcs_out */
#define PA6_QCS_OUT MCHP_PINMUX(a, 6, 0x244, 23, periph)
/* pa6_qd0_in */
#define PA6_QD0_IN MCHP_PINMUX(a, 6, 0x84, 1, periph)
/* pa6_qd0_out */
#define PA6_QD0_OUT MCHP_PINMUX(a, 6, 0x240, 24, periph)
/* pa6_qd1_in */
#define PA6_QD1_IN MCHP_PINMUX(a, 6, 0x88, 9, periph)
/* pa6_qd1_out */
#define PA6_QD1_OUT MCHP_PINMUX(a, 6, 0x244, 25, periph)
/* pa6_qd2_out */
#define PA6_QD2_OUT MCHP_PINMUX(a, 6, 0x240, 26, periph)
/* pa6_qd3_out */
#define PA6_QD3_OUT MCHP_PINMUX(a, 6, 0x240, 25, periph)
/* pa6_qsck_out */
#define PA6_QSCK_OUT MCHP_PINMUX(a, 6, 0x23c, 7, periph)
/* pa6_qspics_out */
#define PA6_QSPICS_OUT MCHP_PINMUX(a, 6, 0x240, 23, periph)
/* pa6_refi_in */
#define PA6_REFI_IN MCHP_PINMUX(a, 6, 0x94, 3, periph)
/* pa6_refo1_out */
#define PA6_REFO1_OUT MCHP_PINMUX(a, 6, 0x23c, 3, periph)
/* pa6_refo2_out */
#define PA6_REFO2_OUT MCHP_PINMUX(a, 6, 0x23c, 4, periph)
/* pa6_refo3_out */
#define PA6_REFO3_OUT MCHP_PINMUX(a, 6, 0x23c, 5, periph)
/* pa6_refo4_out */
#define PA6_REFO4_OUT MCHP_PINMUX(a, 6, 0x23c, 6, periph)
/* pa6_scom0p0_out */
#define PA6_SCOM0P0_OUT MCHP_PINMUX(a, 6, 0x240, 1, periph)
/* pa6_scom0p1_in */
#define PA6_SCOM0P1_IN MCHP_PINMUX(a, 6, 0x44, 3, periph)
/* pa6_scom0p1_out */
#define PA6_SCOM0P1_OUT MCHP_PINMUX(a, 6, 0x23c, 1, periph)
/* pa6_scom0p2_in */
#define PA6_SCOM0P2_IN MCHP_PINMUX(a, 6, 0x48, 1, periph)
/* pa6_scom0p2_out */
#define PA6_SCOM0P2_OUT MCHP_PINMUX(a, 6, 0x240, 3, periph)
/* pa6_scom0p3_in */
#define PA6_SCOM0P3_IN MCHP_PINMUX(a, 6, 0x4c, 9, periph)
/* pa6_scom0p3_out */
#define PA6_SCOM0P3_OUT MCHP_PINMUX(a, 6, 0x240, 2, periph)
/* pa6_scom1p0_out */
#define PA6_SCOM1P0_OUT MCHP_PINMUX(a, 6, 0x244, 6, periph)
/* pa6_scom1p1_in */
#define PA6_SCOM1P1_IN MCHP_PINMUX(a, 6, 0x54, 3, periph)
/* pa6_scom1p1_out */
#define PA6_SCOM1P1_OUT MCHP_PINMUX(a, 6, 0x23c, 2, periph)
/* pa6_scom1p2_in */
#define PA6_SCOM1P2_IN MCHP_PINMUX(a, 6, 0x58, 9, periph)
/* pa6_scom1p2_out */
#define PA6_SCOM1P2_OUT MCHP_PINMUX(a, 6, 0x240, 6, periph)
/* pa6_scom1p3_out */
#define PA6_SCOM1P3_OUT MCHP_PINMUX(a, 6, 0x240, 5, periph)
/* pa6_tc0wo0g1_in */
#define PA6_TC0WO0G1_IN MCHP_PINMUX(a, 6, 0xb0, 9, periph)
/* pa6_tc0wo0_out */
#define PA6_TC0WO0_OUT MCHP_PINMUX(a, 6, 0x244, 15, periph)
/* pa6_tc0wo1g4_in */
#define PA6_TC0WO1G4_IN MCHP_PINMUX(a, 6, 0xbc, 1, periph)
/* pa6_tc0wo1_out */
#define PA6_TC0WO1_OUT MCHP_PINMUX(a, 6, 0x240, 15, periph)
/* pa6_tc1wo0g1_in */
#define PA6_TC1WO0G1_IN MCHP_PINMUX(a, 6, 0xc0, 9, periph)
/* pa6_tc1wo1_out */
#define PA6_TC1WO1_OUT MCHP_PINMUX(a, 6, 0x240, 16, periph)
/* pa6_tc2wo0g1_in */
#define PA6_TC2WO0G1_IN MCHP_PINMUX(a, 6, 0xc8, 9, periph)
/* pa6_tc2wo1g4_in */
#define PA6_TC2WO1G4_IN MCHP_PINMUX(a, 6, 0xd4, 1, periph)
/* pa6_tc2wo1_out */
#define PA6_TC2WO1_OUT MCHP_PINMUX(a, 6, 0x240, 17, periph)
/* pa6_tc3wo0g1_in */
#define PA6_TC3WO0G1_IN MCHP_PINMUX(a, 6, 0xd8, 9, periph)
/* pa6_tc3wo1g4_in */
#define PA6_TC3WO1G4_IN MCHP_PINMUX(a, 6, 0xe4, 1, periph)
/* pa6_tc3wo1_out */
#define PA6_TC3WO1_OUT MCHP_PINMUX(a, 6, 0x240, 18, periph)
/* pa6_tc4wo0g1_in */
#define PA6_TC4WO0G1_IN MCHP_PINMUX(a, 6, 0xe8, 9, periph)
/* pa6_tc4wo1g4_in */
#define PA6_TC4WO1G4_IN MCHP_PINMUX(a, 6, 0xf4, 1, periph)
/* pa6_tc4wo1_out */
#define PA6_TC4WO1_OUT MCHP_PINMUX(a, 6, 0x240, 19, periph)
/* pa6_tc5wo0g1_in */
#define PA6_TC5WO0G1_IN MCHP_PINMUX(a, 6, 0xf8, 9, periph)
/* pa6_tc5wo1g4_in */
#define PA6_TC5WO1G4_IN MCHP_PINMUX(a, 6, 0x104, 1, periph)
/* pa6_tc5wo1_out */
#define PA6_TC5WO1_OUT MCHP_PINMUX(a, 6, 0x240, 20, periph)
/* pa6_tc6wo0g1_in */
#define PA6_TC6WO0G1_IN MCHP_PINMUX(a, 6, 0x108, 9, periph)
/* pa6_tc6wo1g4_in */
#define PA6_TC6WO1G4_IN MCHP_PINMUX(a, 6, 0x114, 1, periph)
/* pa6_tc6wo1_out */
#define PA6_TC6WO1_OUT MCHP_PINMUX(a, 6, 0x240, 21, periph)
/* pa6_tc7wo0g1_in */
#define PA6_TC7WO0G1_IN MCHP_PINMUX(a, 6, 0x118, 9, periph)
/* pa6_tc7wo1g4_in */
#define PA6_TC7WO1G4_IN MCHP_PINMUX(a, 6, 0x124, 1, periph)
/* pa6_tc7wo1_out */
#define PA6_TC7WO1_OUT MCHP_PINMUX(a, 6, 0x240, 22, periph)
/* pa6_tcc0wo1_out */
#define PA6_TCC0WO1_OUT MCHP_PINMUX(a, 6, 0x240, 7, periph)
/* pa6_tcc0wo3_out */
#define PA6_TCC0WO3_OUT MCHP_PINMUX(a, 6, 0x240, 9, periph)
/* pa6_tcc0wo5_out */
#define PA6_TCC0WO5_OUT MCHP_PINMUX(a, 6, 0x240, 8, periph)
/* pa6_tcc1wo1_out */
#define PA6_TCC1WO1_OUT MCHP_PINMUX(a, 6, 0x240, 10, periph)
/* pa6_tcc1wo3_out */
#define PA6_TCC1WO3_OUT MCHP_PINMUX(a, 6, 0x240, 12, periph)
/* pa6_tcc1wo5_out */
#define PA6_TCC1WO5_OUT MCHP_PINMUX(a, 6, 0x240, 11, periph)
/* pa6_tcc2wo1_out */
#define PA6_TCC2WO1_OUT MCHP_PINMUX(a, 6, 0x240, 13, periph)
/* pa7_cclin0_in */
#define PA7_CCLIN0_IN MCHP_PINMUX(a, 7, 0x98, 2, periph)
/* pa7_cclin1_in */
#define PA7_CCLIN1_IN MCHP_PINMUX(a, 7, 0x9c, 9, periph)
/* pa7_cclin3_in */
#define PA7_CCLIN3_IN MCHP_PINMUX(a, 7, 0xa4, 2, periph)
/* pa7_cclin4_in */
#define PA7_CCLIN4_IN MCHP_PINMUX(a, 7, 0xa8, 9, periph)
/* pa7_cclout1_out */
#define PA7_CCLOUT1_OUT MCHP_PINMUX(a, 7, 0x24c, 27, periph)
/* pa7_extint0_in */
#define PA7_EXTINT0_IN MCHP_PINMUX(a, 7, 0x0, 2, periph)
/* pa7_extint1_in */
#define PA7_EXTINT1_IN MCHP_PINMUX(a, 7, 0x4, 9, periph)
/* pa7_qd0_out */
#define PA7_QD0_OUT MCHP_PINMUX(a, 7, 0x24c, 24, periph)
/* pa7_qd1_in */
#define PA7_QD1_IN MCHP_PINMUX(a, 7, 0x88, 2, periph)
/* pa7_qd2_in */
#define PA7_QD2_IN MCHP_PINMUX(a, 7, 0x8c, 9, periph)
/* pa7_qd2_out */
#define PA7_QD2_OUT MCHP_PINMUX(a, 7, 0x24c, 26, periph)
/* pa7_qd3_out */
#define PA7_QD3_OUT MCHP_PINMUX(a, 7, 0x24c, 25, periph)
/* pa7_qsck_out */
#define PA7_QSCK_OUT MCHP_PINMUX(a, 7, 0x248, 7, periph)
/* pa7_qspics_out */
#define PA7_QSPICS_OUT MCHP_PINMUX(a, 7, 0x24c, 23, periph)
/* pa7_refi_in */
#define PA7_REFI_IN MCHP_PINMUX(a, 7, 0x94, 4, periph)
/* pa7_refo1_out */
#define PA7_REFO1_OUT MCHP_PINMUX(a, 7, 0x248, 3, periph)
/* pa7_refo2_out */
#define PA7_REFO2_OUT MCHP_PINMUX(a, 7, 0x248, 4, periph)
/* pa7_refo3_out */
#define PA7_REFO3_OUT MCHP_PINMUX(a, 7, 0x248, 5, periph)
/* pa7_refo4_out */
#define PA7_REFO4_OUT MCHP_PINMUX(a, 7, 0x248, 6, periph)
/* pa7_scom0p0_in */
#define PA7_SCOM0P0_IN MCHP_PINMUX(a, 7, 0x40, 9, periph)
/* pa7_scom0p0_out */
#define PA7_SCOM0P0_OUT MCHP_PINMUX(a, 7, 0x24c, 1, periph)
/* pa7_scom0p1_in */
#define PA7_SCOM0P1_IN MCHP_PINMUX(a, 7, 0x44, 4, periph)
/* pa7_scom0p1_out */
#define PA7_SCOM0P1_OUT MCHP_PINMUX(a, 7, 0x248, 1, periph)
/* pa7_scom0p2_out */
#define PA7_SCOM0P2_OUT MCHP_PINMUX(a, 7, 0x24c, 3, periph)
/* pa7_scom0p3_in */
#define PA7_SCOM0P3_IN MCHP_PINMUX(a, 7, 0x4c, 2, periph)
/* pa7_scom0p3_out */
#define PA7_SCOM0P3_OUT MCHP_PINMUX(a, 7, 0x24c, 2, periph)
/* pa7_scom1p1_in */
#define PA7_SCOM1P1_IN MCHP_PINMUX(a, 7, 0x54, 4, periph)
/* pa7_scom1p1_out */
#define PA7_SCOM1P1_OUT MCHP_PINMUX(a, 7, 0x248, 2, periph)
/* pa7_scom1p2_in */
#define PA7_SCOM1P2_IN MCHP_PINMUX(a, 7, 0x58, 2, periph)
/* pa7_scom1p2_out */
#define PA7_SCOM1P2_OUT MCHP_PINMUX(a, 7, 0x24c, 6, periph)
/* pa7_scom1p3_in */
#define PA7_SCOM1P3_IN MCHP_PINMUX(a, 7, 0x5c, 9, periph)
/* pa7_scom1p3_out */
#define PA7_SCOM1P3_OUT MCHP_PINMUX(a, 7, 0x24c, 5, periph)
/* pa7_tc0wo0g1_in */
#define PA7_TC0WO0G1_IN MCHP_PINMUX(a, 7, 0xb0, 2, periph)
/* pa7_tc0wo0g2_in */
#define PA7_TC0WO0G2_IN MCHP_PINMUX(a, 7, 0xb4, 9, periph)
/* pa7_tc0wo1_out */
#define PA7_TC0WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 15, periph)
/* pa7_tc1wo0g1_in */
#define PA7_TC1WO0G1_IN MCHP_PINMUX(a, 7, 0xc0, 2, periph)
/* pa7_tc1wo1g2_in */
#define PA7_TC1WO1G2_IN MCHP_PINMUX(a, 7, 0xc4, 9, periph)
/* pa7_tc1wo1_out */
#define PA7_TC1WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 16, periph)
/* pa7_tc2wo0g1_in */
#define PA7_TC2WO0G1_IN MCHP_PINMUX(a, 7, 0xc8, 2, periph)
/* pa7_tc2wo1g2_in */
#define PA7_TC2WO1G2_IN MCHP_PINMUX(a, 7, 0xd0, 9, periph)
/* pa7_tc2wo1_out */
#define PA7_TC2WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 17, periph)
/* pa7_tc3wo0g1_in */
#define PA7_TC3WO0G1_IN MCHP_PINMUX(a, 7, 0xd8, 2, periph)
/* pa7_tc3wo1g2_in */
#define PA7_TC3WO1G2_IN MCHP_PINMUX(a, 7, 0xe0, 9, periph)
/* pa7_tc3wo1_out */
#define PA7_TC3WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 18, periph)
/* pa7_tc4wo0g1_in */
#define PA7_TC4WO0G1_IN MCHP_PINMUX(a, 7, 0xe8, 2, periph)
/* pa7_tc4wo1g2_in */
#define PA7_TC4WO1G2_IN MCHP_PINMUX(a, 7, 0xf0, 9, periph)
/* pa7_tc4wo1_out */
#define PA7_TC4WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 19, periph)
/* pa7_tc5wo0g1_in */
#define PA7_TC5WO0G1_IN MCHP_PINMUX(a, 7, 0xf8, 2, periph)
/* pa7_tc5wo1g2_in */
#define PA7_TC5WO1G2_IN MCHP_PINMUX(a, 7, 0x100, 9, periph)
/* pa7_tc5wo1_out */
#define PA7_TC5WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 20, periph)
/* pa7_tc6wo0g1_in */
#define PA7_TC6WO0G1_IN MCHP_PINMUX(a, 7, 0x108, 2, periph)
/* pa7_tc6wo1g2_in */
#define PA7_TC6WO1G2_IN MCHP_PINMUX(a, 7, 0x110, 9, periph)
/* pa7_tc6wo1_out */
#define PA7_TC6WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 21, periph)
/* pa7_tc7wo0g1_in */
#define PA7_TC7WO0G1_IN MCHP_PINMUX(a, 7, 0x118, 2, periph)
/* pa7_tc7wo1g2_in */
#define PA7_TC7WO1G2_IN MCHP_PINMUX(a, 7, 0x120, 9, periph)
/* pa7_tc7wo1_out */
#define PA7_TC7WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 22, periph)
/* pa7_tcc0wo1_out */
#define PA7_TCC0WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 7, periph)
/* pa7_tcc0wo3_out */
#define PA7_TCC0WO3_OUT MCHP_PINMUX(a, 7, 0x24c, 9, periph)
/* pa7_tcc0wo5_out */
#define PA7_TCC0WO5_OUT MCHP_PINMUX(a, 7, 0x24c, 8, periph)
/* pa7_tcc1wo1_out */
#define PA7_TCC1WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 10, periph)
/* pa7_tcc1wo3_out */
#define PA7_TCC1WO3_OUT MCHP_PINMUX(a, 7, 0x24c, 12, periph)
/* pa7_tcc1wo5_out */
#define PA7_TCC1WO5_OUT MCHP_PINMUX(a, 7, 0x24c, 11, periph)
/* pa7_tcc2wo1_out */
#define PA7_TCC2WO1_OUT MCHP_PINMUX(a, 7, 0x24c, 13, periph)
/* pa8_cclin1_in */
#define PA8_CCLIN1_IN MCHP_PINMUX(a, 8, 0x9c, 2, periph)
/* pa8_cclin2_in */
#define PA8_CCLIN2_IN MCHP_PINMUX(a, 8, 0xa0, 9, periph)
/* pa8_cclin4_in */
#define PA8_CCLIN4_IN MCHP_PINMUX(a, 8, 0xa8, 2, periph)
/* pa8_cclin5_in */
#define PA8_CCLIN5_IN MCHP_PINMUX(a, 8, 0xac, 9, periph)
/* pa8_cclout0_out */
#define PA8_CCLOUT0_OUT MCHP_PINMUX(a, 8, 0x254, 27, periph)
/* pa8_cclout1_out */
#define PA8_CCLOUT1_OUT MCHP_PINMUX(a, 8, 0x250, 27, periph)
/* pa8_extint1_in */
#define PA8_EXTINT1_IN MCHP_PINMUX(a, 8, 0x4, 2, periph)
/* pa8_extint2_in */
#define PA8_EXTINT2_IN MCHP_PINMUX(a, 8, 0x8, 9, periph)
/* pa8_extint3_in */
#define PA8_EXTINT3_IN MCHP_PINMUX(a, 8, 0xc, 14, periph)
/* pa8_nmi_in */
#define PA8_NMI_IN MCHP_PINMUX(a, 8, 0x3c, 14, periph)
/* pa8_qcs_out */
#define PA8_QCS_OUT MCHP_PINMUX(a, 8, 0x254, 23, periph)
/* pa8_qd0_in */
#define PA8_QD0_IN MCHP_PINMUX(a, 8, 0x84, 14, periph)
/* pa8_qd0_out */
#define PA8_QD0_OUT MCHP_PINMUX(a, 8, 0x250, 24, periph)
/* pa8_qd1_out */
#define PA8_QD1_OUT MCHP_PINMUX(a, 8, 0x254, 24, periph)
/* pa8_qd2_in */
#define PA8_QD2_IN MCHP_PINMUX(a, 8, 0x8c, 2, periph)
/* pa8_qd2_out */
#define PA8_QD2_OUT MCHP_PINMUX(a, 8, 0x250, 26, periph)
/* pa8_qd3_in */
#define PA8_QD3_IN MCHP_PINMUX(a, 8, 0x90, 9, periph)
/* pa8_qd3_out */
#define PA8_QD3_OUT MCHP_PINMUX(a, 8, 0x250, 25, periph)
/* pa8_qspics_out */
#define PA8_QSPICS_OUT MCHP_PINMUX(a, 8, 0x250, 23, periph)
/* pa8_scom0p0_in */
#define PA8_SCOM0P0_IN MCHP_PINMUX(a, 8, 0x40, 2, periph)
/* pa8_scom0p0_out */
#define PA8_SCOM0P0_OUT MCHP_PINMUX(a, 8, 0x250, 1, periph)
/* pa8_scom0p2_in */
#define PA8_SCOM0P2_IN MCHP_PINMUX(a, 8, 0x48, 14, periph)
/* pa8_scom0p2_out */
#define PA8_SCOM0P2_OUT MCHP_PINMUX(a, 8, 0x250, 3, periph)
/* pa8_scom0p3_out */
#define PA8_SCOM0P3_OUT MCHP_PINMUX(a, 8, 0x250, 2, periph)
/* pa8_scom1p0_in */
#define PA8_SCOM1P0_IN MCHP_PINMUX(a, 8, 0x50, 9, periph)
/* pa8_scom1p0_out */
#define PA8_SCOM1P0_OUT MCHP_PINMUX(a, 8, 0x258, 6, periph)
/* pa8_scom1p2_out */
#define PA8_SCOM1P2_OUT MCHP_PINMUX(a, 8, 0x250, 6, periph)
/* pa8_scom1p3_in */
#define PA8_SCOM1P3_IN MCHP_PINMUX(a, 8, 0x5c, 2, periph)
/* pa8_scom1p3_out */
#define PA8_SCOM1P3_OUT MCHP_PINMUX(a, 8, 0x250, 5, periph)
/* pa8_tc0wo0g2_in */
#define PA8_TC0WO0G2_IN MCHP_PINMUX(a, 8, 0xb4, 2, periph)
/* pa8_tc0wo0_out */
#define PA8_TC0WO0_OUT MCHP_PINMUX(a, 8, 0x254, 15, periph)
/* pa8_tc0wo1g3_in */
#define PA8_TC0WO1G3_IN MCHP_PINMUX(a, 8, 0xb8, 9, periph)
/* pa8_tc0wo1g4_in */
#define PA8_TC0WO1G4_IN MCHP_PINMUX(a, 8, 0xbc, 14, periph)
/* pa8_tc0wo1_out */
#define PA8_TC0WO1_OUT MCHP_PINMUX(a, 8, 0x250, 15, periph)
/* pa8_tc1wo0_out */
#define PA8_TC1WO0_OUT MCHP_PINMUX(a, 8, 0x254, 16, periph)
/* pa8_tc1wo1g2_in */
#define PA8_TC1WO1G2_IN MCHP_PINMUX(a, 8, 0xc4, 2, periph)
/* pa8_tc1wo1_out */
#define PA8_TC1WO1_OUT MCHP_PINMUX(a, 8, 0x250, 16, periph)
/* pa8_tc2wo0g3_in */
#define PA8_TC2WO0G3_IN MCHP_PINMUX(a, 8, 0xcc, 9, periph)
/* pa8_tc2wo0_out */
#define PA8_TC2WO0_OUT MCHP_PINMUX(a, 8, 0x254, 17, periph)
/* pa8_tc2wo1g2_in */
#define PA8_TC2WO1G2_IN MCHP_PINMUX(a, 8, 0xd0, 2, periph)
/* pa8_tc2wo1g4_in */
#define PA8_TC2WO1G4_IN MCHP_PINMUX(a, 8, 0xd4, 14, periph)
/* pa8_tc2wo1_out */
#define PA8_TC2WO1_OUT MCHP_PINMUX(a, 8, 0x250, 17, periph)
/* pa8_tc3wo0g3_in */
#define PA8_TC3WO0G3_IN MCHP_PINMUX(a, 8, 0xdc, 9, periph)
/* pa8_tc3wo0_out */
#define PA8_TC3WO0_OUT MCHP_PINMUX(a, 8, 0x254, 18, periph)
/* pa8_tc3wo1g2_in */
#define PA8_TC3WO1G2_IN MCHP_PINMUX(a, 8, 0xe0, 2, periph)
/* pa8_tc3wo1g4_in */
#define PA8_TC3WO1G4_IN MCHP_PINMUX(a, 8, 0xe4, 14, periph)
/* pa8_tc3wo1_out */
#define PA8_TC3WO1_OUT MCHP_PINMUX(a, 8, 0x250, 18, periph)
/* pa8_tc4wo0g3_in */
#define PA8_TC4WO0G3_IN MCHP_PINMUX(a, 8, 0xec, 9, periph)
/* pa8_tc4wo0_out */
#define PA8_TC4WO0_OUT MCHP_PINMUX(a, 8, 0x254, 19, periph)
/* pa8_tc4wo1g2_in */
#define PA8_TC4WO1G2_IN MCHP_PINMUX(a, 8, 0xf0, 2, periph)
/* pa8_tc4wo1g4_in */
#define PA8_TC4WO1G4_IN MCHP_PINMUX(a, 8, 0xf4, 14, periph)
/* pa8_tc4wo1_out */
#define PA8_TC4WO1_OUT MCHP_PINMUX(a, 8, 0x250, 19, periph)
/* pa8_tc5wo0g3_in */
#define PA8_TC5WO0G3_IN MCHP_PINMUX(a, 8, 0xfc, 9, periph)
/* pa8_tc5wo0_out */
#define PA8_TC5WO0_OUT MCHP_PINMUX(a, 8, 0x254, 20, periph)
/* pa8_tc5wo1g2_in */
#define PA8_TC5WO1G2_IN MCHP_PINMUX(a, 8, 0x100, 2, periph)
/* pa8_tc5wo1g4_in */
#define PA8_TC5WO1G4_IN MCHP_PINMUX(a, 8, 0x104, 14, periph)
/* pa8_tc5wo1_out */
#define PA8_TC5WO1_OUT MCHP_PINMUX(a, 8, 0x250, 20, periph)
/* pa8_tc6wo0g3_in */
#define PA8_TC6WO0G3_IN MCHP_PINMUX(a, 8, 0x10c, 9, periph)
/* pa8_tc6wo0_out */
#define PA8_TC6WO0_OUT MCHP_PINMUX(a, 8, 0x254, 21, periph)
/* pa8_tc6wo1g2_in */
#define PA8_TC6WO1G2_IN MCHP_PINMUX(a, 8, 0x110, 2, periph)
/* pa8_tc6wo1g4_in */
#define PA8_TC6WO1G4_IN MCHP_PINMUX(a, 8, 0x114, 14, periph)
/* pa8_tc6wo1_out */
#define PA8_TC6WO1_OUT MCHP_PINMUX(a, 8, 0x250, 21, periph)
/* pa8_tc7wo0g3_in */
#define PA8_TC7WO0G3_IN MCHP_PINMUX(a, 8, 0x11c, 9, periph)
/* pa8_tc7wo0_out */
#define PA8_TC7WO0_OUT MCHP_PINMUX(a, 8, 0x254, 22, periph)
/* pa8_tc7wo1g2_in */
#define PA8_TC7WO1G2_IN MCHP_PINMUX(a, 8, 0x120, 2, periph)
/* pa8_tc7wo1g4_in */
#define PA8_TC7WO1G4_IN MCHP_PINMUX(a, 8, 0x124, 14, periph)
/* pa8_tc7wo1_out */
#define PA8_TC7WO1_OUT MCHP_PINMUX(a, 8, 0x250, 22, periph)
/* pa8_tcc0wo0_out */
#define PA8_TCC0WO0_OUT MCHP_PINMUX(a, 8, 0x254, 8, periph)
/* pa8_tcc0wo1_out */
#define PA8_TCC0WO1_OUT MCHP_PINMUX(a, 8, 0x250, 7, periph)
/* pa8_tcc0wo2_out */
#define PA8_TCC0WO2_OUT MCHP_PINMUX(a, 8, 0x254, 7, periph)
/* pa8_tcc0wo3_out */
#define PA8_TCC0WO3_OUT MCHP_PINMUX(a, 8, 0x250, 9, periph)
/* pa8_tcc0wo4_out */
#define PA8_TCC0WO4_OUT MCHP_PINMUX(a, 8, 0x254, 9, periph)
/* pa8_tcc0wo5_out */
#define PA8_TCC0WO5_OUT MCHP_PINMUX(a, 8, 0x250, 8, periph)
/* pa8_tcc1wo0_out */
#define PA8_TCC1WO0_OUT MCHP_PINMUX(a, 8, 0x254, 11, periph)
/* pa8_tcc1wo1_out */
#define PA8_TCC1WO1_OUT MCHP_PINMUX(a, 8, 0x250, 10, periph)
/* pa8_tcc1wo2_out */
#define PA8_TCC1WO2_OUT MCHP_PINMUX(a, 8, 0x254, 10, periph)
/* pa8_tcc1wo3_out */
#define PA8_TCC1WO3_OUT MCHP_PINMUX(a, 8, 0x250, 12, periph)
/* pa8_tcc1wo4_out */
#define PA8_TCC1WO4_OUT MCHP_PINMUX(a, 8, 0x254, 12, periph)
/* pa8_tcc1wo5_out */
#define PA8_TCC1WO5_OUT MCHP_PINMUX(a, 8, 0x250, 11, periph)
/* pa8_tcc2wo0_out */
#define PA8_TCC2WO0_OUT MCHP_PINMUX(a, 8, 0x254, 13, periph)
/* pa8_tcc2wo1_out */
#define PA8_TCC2WO1_OUT MCHP_PINMUX(a, 8, 0x250, 13, periph)
/* pa9_cclin0_in */
#define PA9_CCLIN0_IN MCHP_PINMUX(a, 9, 0x98, 15, periph)
/* pa9_cclin2_in */
#define PA9_CCLIN2_IN MCHP_PINMUX(a, 9, 0xa0, 2, periph)
/* pa9_cclin3_in */
#define PA9_CCLIN3_IN MCHP_PINMUX(a, 9, 0xa4, 15, periph)
/* pa9_cclin5_in */
#define PA9_CCLIN5_IN MCHP_PINMUX(a, 9, 0xac, 2, periph)
/* pa9_cclout0_out */
#define PA9_CCLOUT0_OUT MCHP_PINMUX(a, 9, 0x260, 27, periph)
/* pa9_cclout1_out */
#define PA9_CCLOUT1_OUT MCHP_PINMUX(a, 9, 0x264, 27, periph)
/* pa9_extint0_in */
#define PA9_EXTINT0_IN MCHP_PINMUX(a, 9, 0x0, 15, periph)
/* pa9_extint2_in */
#define PA9_EXTINT2_IN MCHP_PINMUX(a, 9, 0x8, 2, periph)
/* pa9_extint3_in */
#define PA9_EXTINT3_IN MCHP_PINMUX(a, 9, 0xc, 9, periph)
/* pa9_nmi_in */
#define PA9_NMI_IN MCHP_PINMUX(a, 9, 0x3c, 9, periph)
/* pa9_qcs_out */
#define PA9_QCS_OUT MCHP_PINMUX(a, 9, 0x260, 23, periph)
/* pa9_qd0_in */
#define PA9_QD0_IN MCHP_PINMUX(a, 9, 0x84, 9, periph)
/* pa9_qd0_out */
#define PA9_QD0_OUT MCHP_PINMUX(a, 9, 0x260, 25, periph)
/* pa9_qd1_in */
#define PA9_QD1_IN MCHP_PINMUX(a, 9, 0x88, 15, periph)
/* pa9_qd1_out */
#define PA9_QD1_OUT MCHP_PINMUX(a, 9, 0x260, 24, periph)
/* pa9_qd2_out */
#define PA9_QD2_OUT MCHP_PINMUX(a, 9, 0x264, 24, periph)
/* pa9_qd3_in */
#define PA9_QD3_IN MCHP_PINMUX(a, 9, 0x90, 2, periph)
/* pa9_qd3_out */
#define PA9_QD3_OUT MCHP_PINMUX(a, 9, 0x260, 26, periph)
/* pa9_scom0p0_out */
#define PA9_SCOM0P0_OUT MCHP_PINMUX(a, 9, 0x260, 2, periph)
/* pa9_scom0p2_in */
#define PA9_SCOM0P2_IN MCHP_PINMUX(a, 9, 0x48, 9, periph)
/* pa9_scom0p2_out */
#define PA9_SCOM0P2_OUT MCHP_PINMUX(a, 9, 0x264, 1, periph)
/* pa9_scom0p3_in */
#define PA9_SCOM0P3_IN MCHP_PINMUX(a, 9, 0x4c, 15, periph)
/* pa9_scom0p3_out */
#define PA9_SCOM0P3_OUT MCHP_PINMUX(a, 9, 0x260, 3, periph)
/* pa9_scom1p0_in */
#define PA9_SCOM1P0_IN MCHP_PINMUX(a, 9, 0x50, 2, periph)
/* pa9_scom1p0_out */
#define PA9_SCOM1P0_OUT MCHP_PINMUX(a, 9, 0x264, 6, periph)
/* pa9_scom1p2_in */
#define PA9_SCOM1P2_IN MCHP_PINMUX(a, 9, 0x58, 15, periph)
/* pa9_scom1p2_out */
#define PA9_SCOM1P2_OUT MCHP_PINMUX(a, 9, 0x260, 4, periph)
/* pa9_scom1p3_out */
#define PA9_SCOM1P3_OUT MCHP_PINMUX(a, 9, 0x260, 6, periph)
/* pa9_tc0wo0g1_in */
#define PA9_TC0WO0G1_IN MCHP_PINMUX(a, 9, 0xb0, 15, periph)
/* pa9_tc0wo0_out */
#define PA9_TC0WO0_OUT MCHP_PINMUX(a, 9, 0x260, 15, periph)
/* pa9_tc0wo1g3_in */
#define PA9_TC0WO1G3_IN MCHP_PINMUX(a, 9, 0xb8, 2, periph)
/* pa9_tc0wo1g4_in */
#define PA9_TC0WO1G4_IN MCHP_PINMUX(a, 9, 0xbc, 9, periph)
/* pa9_tc1wo0g1_in */
#define PA9_TC1WO0G1_IN MCHP_PINMUX(a, 9, 0xc0, 15, periph)
/* pa9_tc1wo0_out */
#define PA9_TC1WO0_OUT MCHP_PINMUX(a, 9, 0x260, 16, periph)
/* pa9_tc1wo1_out */
#define PA9_TC1WO1_OUT MCHP_PINMUX(a, 9, 0x264, 16, periph)
/* pa9_tc2wo0g1_in */
#define PA9_TC2WO0G1_IN MCHP_PINMUX(a, 9, 0xc8, 15, periph)
/* pa9_tc2wo0g3_in */
#define PA9_TC2WO0G3_IN MCHP_PINMUX(a, 9, 0xcc, 2, periph)
/* pa9_tc2wo0_out */
#define PA9_TC2WO0_OUT MCHP_PINMUX(a, 9, 0x260, 17, periph)
/* pa9_tc2wo1g4_in */
#define PA9_TC2WO1G4_IN MCHP_PINMUX(a, 9, 0xd4, 9, periph)
/* pa9_tc2wo1_out */
#define PA9_TC2WO1_OUT MCHP_PINMUX(a, 9, 0x264, 17, periph)
/* pa9_tc3wo0g1_in */
#define PA9_TC3WO0G1_IN MCHP_PINMUX(a, 9, 0xd8, 15, periph)
/* pa9_tc3wo0g3_in */
#define PA9_TC3WO0G3_IN MCHP_PINMUX(a, 9, 0xdc, 2, periph)
/* pa9_tc3wo0_out */
#define PA9_TC3WO0_OUT MCHP_PINMUX(a, 9, 0x260, 18, periph)
/* pa9_tc3wo1g4_in */
#define PA9_TC3WO1G4_IN MCHP_PINMUX(a, 9, 0xe4, 9, periph)
/* pa9_tc3wo1_out */
#define PA9_TC3WO1_OUT MCHP_PINMUX(a, 9, 0x264, 18, periph)
/* pa9_tc4wo0g1_in */
#define PA9_TC4WO0G1_IN MCHP_PINMUX(a, 9, 0xe8, 15, periph)
/* pa9_tc4wo0g3_in */
#define PA9_TC4WO0G3_IN MCHP_PINMUX(a, 9, 0xec, 2, periph)
/* pa9_tc4wo0_out */
#define PA9_TC4WO0_OUT MCHP_PINMUX(a, 9, 0x260, 19, periph)
/* pa9_tc4wo1g4_in */
#define PA9_TC4WO1G4_IN MCHP_PINMUX(a, 9, 0xf4, 9, periph)
/* pa9_tc4wo1_out */
#define PA9_TC4WO1_OUT MCHP_PINMUX(a, 9, 0x264, 19, periph)
/* pa9_tc5wo0g1_in */
#define PA9_TC5WO0G1_IN MCHP_PINMUX(a, 9, 0xf8, 15, periph)
/* pa9_tc5wo0g3_in */
#define PA9_TC5WO0G3_IN MCHP_PINMUX(a, 9, 0xfc, 2, periph)
/* pa9_tc5wo0_out */
#define PA9_TC5WO0_OUT MCHP_PINMUX(a, 9, 0x260, 20, periph)
/* pa9_tc5wo1g4_in */
#define PA9_TC5WO1G4_IN MCHP_PINMUX(a, 9, 0x104, 9, periph)
/* pa9_tc5wo1_out */
#define PA9_TC5WO1_OUT MCHP_PINMUX(a, 9, 0x264, 20, periph)
/* pa9_tc6wo0g1_in */
#define PA9_TC6WO0G1_IN MCHP_PINMUX(a, 9, 0x108, 15, periph)
/* pa9_tc6wo0g3_in */
#define PA9_TC6WO0G3_IN MCHP_PINMUX(a, 9, 0x10c, 2, periph)
/* pa9_tc6wo0_out */
#define PA9_TC6WO0_OUT MCHP_PINMUX(a, 9, 0x260, 21, periph)
/* pa9_tc6wo1g4_in */
#define PA9_TC6WO1G4_IN MCHP_PINMUX(a, 9, 0x114, 9, periph)
/* pa9_tc6wo1_out */
#define PA9_TC6WO1_OUT MCHP_PINMUX(a, 9, 0x264, 21, periph)
/* pa9_tc7wo0g1_in */
#define PA9_TC7WO0G1_IN MCHP_PINMUX(a, 9, 0x118, 15, periph)
/* pa9_tc7wo0g3_in */
#define PA9_TC7WO0G3_IN MCHP_PINMUX(a, 9, 0x11c, 2, periph)
/* pa9_tc7wo0_out */
#define PA9_TC7WO0_OUT MCHP_PINMUX(a, 9, 0x260, 22, periph)
/* pa9_tc7wo1g4_in */
#define PA9_TC7WO1G4_IN MCHP_PINMUX(a, 9, 0x124, 9, periph)
/* pa9_tc7wo1_out */
#define PA9_TC7WO1_OUT MCHP_PINMUX(a, 9, 0x264, 22, periph)
/* pa9_tcc0wo0_out */
#define PA9_TCC0WO0_OUT MCHP_PINMUX(a, 9, 0x260, 8, periph)
/* pa9_tcc0wo1_out */
#define PA9_TCC0WO1_OUT MCHP_PINMUX(a, 9, 0x264, 8, periph)
/* pa9_tcc0wo2_out */
#define PA9_TCC0WO2_OUT MCHP_PINMUX(a, 9, 0x260, 7, periph)
/* pa9_tcc0wo3_out */
#define PA9_TCC0WO3_OUT MCHP_PINMUX(a, 9, 0x264, 7, periph)
/* pa9_tcc0wo4_out */
#define PA9_TCC0WO4_OUT MCHP_PINMUX(a, 9, 0x260, 9, periph)
/* pa9_tcc0wo5_out */
#define PA9_TCC0WO5_OUT MCHP_PINMUX(a, 9, 0x264, 9, periph)
/* pa9_tcc1wo0_out */
#define PA9_TCC1WO0_OUT MCHP_PINMUX(a, 9, 0x260, 11, periph)
/* pa9_tcc1wo1_out */
#define PA9_TCC1WO1_OUT MCHP_PINMUX(a, 9, 0x264, 11, periph)
/* pa9_tcc1wo2_out */
#define PA9_TCC1WO2_OUT MCHP_PINMUX(a, 9, 0x260, 10, periph)
/* pa9_tcc1wo3_out */
#define PA9_TCC1WO3_OUT MCHP_PINMUX(a, 9, 0x264, 10, periph)
/* pa9_tcc1wo4_out */
#define PA9_TCC1WO4_OUT MCHP_PINMUX(a, 9, 0x260, 12, periph)
/* pa9_tcc1wo5_out */
#define PA9_TCC1WO5_OUT MCHP_PINMUX(a, 9, 0x264, 12, periph)
/* pa9_tcc2wo0_out */
#define PA9_TCC2WO0_OUT MCHP_PINMUX(a, 9, 0x260, 13, periph)
/* pa9_tcc2wo1_out */
#define PA9_TCC2WO1_OUT MCHP_PINMUX(a, 9, 0x264, 13, periph)
/* pa10_cclin0_in */
#define PA10_CCLIN0_IN MCHP_PINMUX(a, 10, 0x98, 10, periph)
/* pa10_cclin3_in */
#define PA10_CCLIN3_IN MCHP_PINMUX(a, 10, 0xa4, 10, periph)
/* pa10_cclout1_out */
#define PA10_CCLOUT1_OUT MCHP_PINMUX(a, 10, 0x26c, 27, periph)
/* pa10_extint0_in */
#define PA10_EXTINT0_IN MCHP_PINMUX(a, 10, 0x0, 10, periph)
/* pa10_extint3_in */
#define PA10_EXTINT3_IN MCHP_PINMUX(a, 10, 0xc, 2, periph)
/* pa10_nmi_in */
#define PA10_NMI_IN MCHP_PINMUX(a, 10, 0x3c, 2, periph)
/* pa10_qcs_out */
#define PA10_QCS_OUT MCHP_PINMUX(a, 10, 0x26c, 23, periph)
/* pa10_qd0_in */
#define PA10_QD0_IN MCHP_PINMUX(a, 10, 0x84, 2, periph)
/* pa10_qd0_out */
#define PA10_QD0_OUT MCHP_PINMUX(a, 10, 0x26c, 26, periph)
/* pa10_qd1_in */
#define PA10_QD1_IN MCHP_PINMUX(a, 10, 0x88, 10, periph)
/* pa10_qd1_out */
#define PA10_QD1_OUT MCHP_PINMUX(a, 10, 0x26c, 25, periph)
/* pa10_qd2_out */
#define PA10_QD2_OUT MCHP_PINMUX(a, 10, 0x26c, 24, periph)
/* pa10_scom0p0_out */
#define PA10_SCOM0P0_OUT MCHP_PINMUX(a, 10, 0x26c, 3, periph)
/* pa10_scom0p2_in */
#define PA10_SCOM0P2_IN MCHP_PINMUX(a, 10, 0x48, 2, periph)
/* pa10_scom0p2_out */
#define PA10_SCOM0P2_OUT MCHP_PINMUX(a, 10, 0x26c, 1, periph)
/* pa10_scom0p3_in */
#define PA10_SCOM0P3_IN MCHP_PINMUX(a, 10, 0x4c, 10, periph)
/* pa10_scom1p0_out */
#define PA10_SCOM1P0_OUT MCHP_PINMUX(a, 10, 0x26c, 6, periph)
/* pa10_scom1p2_in */
#define PA10_SCOM1P2_IN MCHP_PINMUX(a, 10, 0x58, 10, periph)
/* pa10_scom1p3_out */
#define PA10_SCOM1P3_OUT MCHP_PINMUX(a, 10, 0x26c, 4, periph)
/* pa10_tc0wo0g1_in */
#define PA10_TC0WO0G1_IN MCHP_PINMUX(a, 10, 0xb0, 10, periph)
/* pa10_tc0wo0_out */
#define PA10_TC0WO0_OUT MCHP_PINMUX(a, 10, 0x26c, 15, periph)
/* pa10_tc0wo1g4_in */
#define PA10_TC0WO1G4_IN MCHP_PINMUX(a, 10, 0xbc, 2, periph)
/* pa10_tc1wo0g1_in */
#define PA10_TC1WO0G1_IN MCHP_PINMUX(a, 10, 0xc0, 10, periph)
/* pa10_tc1wo1_out */
#define PA10_TC1WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 16, periph)
/* pa10_tc2wo0g1_in */
#define PA10_TC2WO0G1_IN MCHP_PINMUX(a, 10, 0xc8, 10, periph)
/* pa10_tc2wo1g4_in */
#define PA10_TC2WO1G4_IN MCHP_PINMUX(a, 10, 0xd4, 2, periph)
/* pa10_tc2wo1_out */
#define PA10_TC2WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 17, periph)
/* pa10_tc3wo0g1_in */
#define PA10_TC3WO0G1_IN MCHP_PINMUX(a, 10, 0xd8, 10, periph)
/* pa10_tc3wo1g4_in */
#define PA10_TC3WO1G4_IN MCHP_PINMUX(a, 10, 0xe4, 2, periph)
/* pa10_tc3wo1_out */
#define PA10_TC3WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 18, periph)
/* pa10_tc4wo0g1_in */
#define PA10_TC4WO0G1_IN MCHP_PINMUX(a, 10, 0xe8, 10, periph)
/* pa10_tc4wo1g4_in */
#define PA10_TC4WO1G4_IN MCHP_PINMUX(a, 10, 0xf4, 2, periph)
/* pa10_tc4wo1_out */
#define PA10_TC4WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 19, periph)
/* pa10_tc5wo0g1_in */
#define PA10_TC5WO0G1_IN MCHP_PINMUX(a, 10, 0xf8, 10, periph)
/* pa10_tc5wo1g4_in */
#define PA10_TC5WO1G4_IN MCHP_PINMUX(a, 10, 0x104, 2, periph)
/* pa10_tc5wo1_out */
#define PA10_TC5WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 20, periph)
/* pa10_tc6wo0g1_in */
#define PA10_TC6WO0G1_IN MCHP_PINMUX(a, 10, 0x108, 10, periph)
/* pa10_tc6wo1g4_in */
#define PA10_TC6WO1G4_IN MCHP_PINMUX(a, 10, 0x114, 2, periph)
/* pa10_tc6wo1_out */
#define PA10_TC6WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 21, periph)
/* pa10_tc7wo0g1_in */
#define PA10_TC7WO0G1_IN MCHP_PINMUX(a, 10, 0x118, 10, periph)
/* pa10_tc7wo1g4_in */
#define PA10_TC7WO1G4_IN MCHP_PINMUX(a, 10, 0x124, 2, periph)
/* pa10_tc7wo1_out */
#define PA10_TC7WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 22, periph)
/* pa10_tcc0wo1_out */
#define PA10_TCC0WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 8, periph)
/* pa10_tcc0wo3_out */
#define PA10_TCC0WO3_OUT MCHP_PINMUX(a, 10, 0x26c, 7, periph)
/* pa10_tcc0wo5_out */
#define PA10_TCC0WO5_OUT MCHP_PINMUX(a, 10, 0x26c, 9, periph)
/* pa10_tcc1wo1_out */
#define PA10_TCC1WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 11, periph)
/* pa10_tcc1wo3_out */
#define PA10_TCC1WO3_OUT MCHP_PINMUX(a, 10, 0x26c, 10, periph)
/* pa10_tcc1wo5_out */
#define PA10_TCC1WO5_OUT MCHP_PINMUX(a, 10, 0x26c, 12, periph)
/* pa10_tcc2wo1_out */
#define PA10_TCC2WO1_OUT MCHP_PINMUX(a, 10, 0x26c, 13, periph)
/* pa11_cclin0_in */
#define PA11_CCLIN0_IN MCHP_PINMUX(a, 11, 0x98, 3, periph)
/* pa11_cclin1_in */
#define PA11_CCLIN1_IN MCHP_PINMUX(a, 11, 0x9c, 10, periph)
/* pa11_cclin3_in */
#define PA11_CCLIN3_IN MCHP_PINMUX(a, 11, 0xa4, 3, periph)
/* pa11_cclin4_in */
#define PA11_CCLIN4_IN MCHP_PINMUX(a, 11, 0xa8, 10, periph)
/* pa11_extint0_in */
#define PA11_EXTINT0_IN MCHP_PINMUX(a, 11, 0x0, 3, periph)
/* pa11_extint1_in */
#define PA11_EXTINT1_IN MCHP_PINMUX(a, 11, 0x4, 10, periph)
/* pa11_qd1_in */
#define PA11_QD1_IN MCHP_PINMUX(a, 11, 0x88, 3, periph)
/* pa11_qd2_in */
#define PA11_QD2_IN MCHP_PINMUX(a, 11, 0x8c, 10, periph)
/* pa11_scom0p0_in */
#define PA11_SCOM0P0_IN MCHP_PINMUX(a, 11, 0x40, 10, periph)
/* pa11_scom0p3_in */
#define PA11_SCOM0P3_IN MCHP_PINMUX(a, 11, 0x4c, 3, periph)
/* pa11_scom1p2_in */
#define PA11_SCOM1P2_IN MCHP_PINMUX(a, 11, 0x58, 3, periph)
/* pa11_scom1p3_in */
#define PA11_SCOM1P3_IN MCHP_PINMUX(a, 11, 0x5c, 10, periph)
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
/* pa11_tc4wo0g1_in */
#define PA11_TC4WO0G1_IN MCHP_PINMUX(a, 11, 0xe8, 3, periph)
/* pa11_tc4wo1g2_in */
#define PA11_TC4WO1G2_IN MCHP_PINMUX(a, 11, 0xf0, 10, periph)
/* pa11_tc5wo0g1_in */
#define PA11_TC5WO0G1_IN MCHP_PINMUX(a, 11, 0xf8, 3, periph)
/* pa11_tc5wo1g2_in */
#define PA11_TC5WO1G2_IN MCHP_PINMUX(a, 11, 0x100, 10, periph)
/* pa11_tc6wo0g1_in */
#define PA11_TC6WO0G1_IN MCHP_PINMUX(a, 11, 0x108, 3, periph)
/* pa11_tc6wo1g2_in */
#define PA11_TC6WO1G2_IN MCHP_PINMUX(a, 11, 0x110, 10, periph)
/* pa11_tc7wo0g1_in */
#define PA11_TC7WO0G1_IN MCHP_PINMUX(a, 11, 0x118, 3, periph)
/* pa11_tc7wo1g2_in */
#define PA11_TC7WO1G2_IN MCHP_PINMUX(a, 11, 0x120, 10, periph)
/* pa12_cclin1_in */
#define PA12_CCLIN1_IN MCHP_PINMUX(a, 12, 0x9c, 3, periph)
/* pa12_cclin2_in */
#define PA12_CCLIN2_IN MCHP_PINMUX(a, 12, 0xa0, 10, periph)
/* pa12_cclin4_in */
#define PA12_CCLIN4_IN MCHP_PINMUX(a, 12, 0xa8, 3, periph)
/* pa12_cclin5_in */
#define PA12_CCLIN5_IN MCHP_PINMUX(a, 12, 0xac, 10, periph)
/* pa12_extint1_in */
#define PA12_EXTINT1_IN MCHP_PINMUX(a, 12, 0x4, 3, periph)
/* pa12_extint2_in */
#define PA12_EXTINT2_IN MCHP_PINMUX(a, 12, 0x8, 10, periph)
/* pa12_qd2_in */
#define PA12_QD2_IN MCHP_PINMUX(a, 12, 0x8c, 3, periph)
/* pa12_qd3_in */
#define PA12_QD3_IN MCHP_PINMUX(a, 12, 0x90, 10, periph)
/* pa12_scom0p0_in */
#define PA12_SCOM0P0_IN MCHP_PINMUX(a, 12, 0x40, 3, periph)
/* pa12_scom1p0_in */
#define PA12_SCOM1P0_IN MCHP_PINMUX(a, 12, 0x50, 10, periph)
/* pa12_scom1p3_in */
#define PA12_SCOM1P3_IN MCHP_PINMUX(a, 12, 0x5c, 3, periph)
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
/* pa12_tc4wo0g3_in */
#define PA12_TC4WO0G3_IN MCHP_PINMUX(a, 12, 0xec, 10, periph)
/* pa12_tc4wo1g2_in */
#define PA12_TC4WO1G2_IN MCHP_PINMUX(a, 12, 0xf0, 3, periph)
/* pa12_tc5wo0g3_in */
#define PA12_TC5WO0G3_IN MCHP_PINMUX(a, 12, 0xfc, 10, periph)
/* pa12_tc5wo1g2_in */
#define PA12_TC5WO1G2_IN MCHP_PINMUX(a, 12, 0x100, 3, periph)
/* pa12_tc6wo0g3_in */
#define PA12_TC6WO0G3_IN MCHP_PINMUX(a, 12, 0x10c, 10, periph)
/* pa12_tc6wo1g2_in */
#define PA12_TC6WO1G2_IN MCHP_PINMUX(a, 12, 0x110, 3, periph)
/* pa12_tc7wo0g3_in */
#define PA12_TC7WO0G3_IN MCHP_PINMUX(a, 12, 0x11c, 10, periph)
/* pa12_tc7wo1g2_in */
#define PA12_TC7WO1G2_IN MCHP_PINMUX(a, 12, 0x120, 3, periph)
/* pa13_cclin2_in */
#define PA13_CCLIN2_IN MCHP_PINMUX(a, 13, 0xa0, 3, periph)
/* pa13_cclin5_in */
#define PA13_CCLIN5_IN MCHP_PINMUX(a, 13, 0xac, 3, periph)
/* pa13_cclout0_out */
#define PA13_CCLOUT0_OUT MCHP_PINMUX(a, 13, 0x278, 27, periph)
/* pa13_cclout1_out */
#define PA13_CCLOUT1_OUT MCHP_PINMUX(a, 13, 0x27c, 27, periph)
/* pa13_extint2_in */
#define PA13_EXTINT2_IN MCHP_PINMUX(a, 13, 0x8, 3, periph)
/* pa13_extint3_in */
#define PA13_EXTINT3_IN MCHP_PINMUX(a, 13, 0xc, 10, periph)
/* pa13_nmi_in */
#define PA13_NMI_IN MCHP_PINMUX(a, 13, 0x3c, 10, periph)
/* pa13_qcs_out */
#define PA13_QCS_OUT MCHP_PINMUX(a, 13, 0x278, 23, periph)
/* pa13_qd0_in */
#define PA13_QD0_IN MCHP_PINMUX(a, 13, 0x84, 10, periph)
/* pa13_qd0_out */
#define PA13_QD0_OUT MCHP_PINMUX(a, 13, 0x278, 25, periph)
/* pa13_qd1_out */
#define PA13_QD1_OUT MCHP_PINMUX(a, 13, 0x278, 24, periph)
/* pa13_qd2_out */
#define PA13_QD2_OUT MCHP_PINMUX(a, 13, 0x27c, 24, periph)
/* pa13_qd3_in */
#define PA13_QD3_IN MCHP_PINMUX(a, 13, 0x90, 3, periph)
/* pa13_qd3_out */
#define PA13_QD3_OUT MCHP_PINMUX(a, 13, 0x278, 26, periph)
/* pa13_scom0p0_out */
#define PA13_SCOM0P0_OUT MCHP_PINMUX(a, 13, 0x278, 2, periph)
/* pa13_scom0p2_in */
#define PA13_SCOM0P2_IN MCHP_PINMUX(a, 13, 0x48, 10, periph)
/* pa13_scom0p2_out */
#define PA13_SCOM0P2_OUT MCHP_PINMUX(a, 13, 0x27c, 1, periph)
/* pa13_scom0p3_out */
#define PA13_SCOM0P3_OUT MCHP_PINMUX(a, 13, 0x278, 3, periph)
/* pa13_scom1p0_in */
#define PA13_SCOM1P0_IN MCHP_PINMUX(a, 13, 0x50, 3, periph)
/* pa13_scom1p0_out */
#define PA13_SCOM1P0_OUT MCHP_PINMUX(a, 13, 0x27c, 6, periph)
/* pa13_scom1p2_out */
#define PA13_SCOM1P2_OUT MCHP_PINMUX(a, 13, 0x278, 4, periph)
/* pa13_scom1p3_out */
#define PA13_SCOM1P3_OUT MCHP_PINMUX(a, 13, 0x278, 6, periph)
/* pa13_tc0wo0_out */
#define PA13_TC0WO0_OUT MCHP_PINMUX(a, 13, 0x278, 15, periph)
/* pa13_tc0wo1g3_in */
#define PA13_TC0WO1G3_IN MCHP_PINMUX(a, 13, 0xb8, 3, periph)
/* pa13_tc0wo1g4_in */
#define PA13_TC0WO1G4_IN MCHP_PINMUX(a, 13, 0xbc, 10, periph)
/* pa13_tc1wo0_out */
#define PA13_TC1WO0_OUT MCHP_PINMUX(a, 13, 0x278, 16, periph)
/* pa13_tc1wo1_out */
#define PA13_TC1WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 16, periph)
/* pa13_tc2wo0g3_in */
#define PA13_TC2WO0G3_IN MCHP_PINMUX(a, 13, 0xcc, 3, periph)
/* pa13_tc2wo0_out */
#define PA13_TC2WO0_OUT MCHP_PINMUX(a, 13, 0x278, 17, periph)
/* pa13_tc2wo1g4_in */
#define PA13_TC2WO1G4_IN MCHP_PINMUX(a, 13, 0xd4, 10, periph)
/* pa13_tc2wo1_out */
#define PA13_TC2WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 17, periph)
/* pa13_tc3wo0g3_in */
#define PA13_TC3WO0G3_IN MCHP_PINMUX(a, 13, 0xdc, 3, periph)
/* pa13_tc3wo0_out */
#define PA13_TC3WO0_OUT MCHP_PINMUX(a, 13, 0x278, 18, periph)
/* pa13_tc3wo1g4_in */
#define PA13_TC3WO1G4_IN MCHP_PINMUX(a, 13, 0xe4, 10, periph)
/* pa13_tc3wo1_out */
#define PA13_TC3WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 18, periph)
/* pa13_tc4wo0g3_in */
#define PA13_TC4WO0G3_IN MCHP_PINMUX(a, 13, 0xec, 3, periph)
/* pa13_tc4wo0_out */
#define PA13_TC4WO0_OUT MCHP_PINMUX(a, 13, 0x278, 19, periph)
/* pa13_tc4wo1g4_in */
#define PA13_TC4WO1G4_IN MCHP_PINMUX(a, 13, 0xf4, 10, periph)
/* pa13_tc4wo1_out */
#define PA13_TC4WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 19, periph)
/* pa13_tc5wo0g3_in */
#define PA13_TC5WO0G3_IN MCHP_PINMUX(a, 13, 0xfc, 3, periph)
/* pa13_tc5wo0_out */
#define PA13_TC5WO0_OUT MCHP_PINMUX(a, 13, 0x278, 20, periph)
/* pa13_tc5wo1g4_in */
#define PA13_TC5WO1G4_IN MCHP_PINMUX(a, 13, 0x104, 10, periph)
/* pa13_tc5wo1_out */
#define PA13_TC5WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 20, periph)
/* pa13_tc6wo0g3_in */
#define PA13_TC6WO0G3_IN MCHP_PINMUX(a, 13, 0x10c, 3, periph)
/* pa13_tc6wo0_out */
#define PA13_TC6WO0_OUT MCHP_PINMUX(a, 13, 0x278, 21, periph)
/* pa13_tc6wo1g4_in */
#define PA13_TC6WO1G4_IN MCHP_PINMUX(a, 13, 0x114, 10, periph)
/* pa13_tc6wo1_out */
#define PA13_TC6WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 21, periph)
/* pa13_tc7wo0g3_in */
#define PA13_TC7WO0G3_IN MCHP_PINMUX(a, 13, 0x11c, 3, periph)
/* pa13_tc7wo0_out */
#define PA13_TC7WO0_OUT MCHP_PINMUX(a, 13, 0x278, 22, periph)
/* pa13_tc7wo1g4_in */
#define PA13_TC7WO1G4_IN MCHP_PINMUX(a, 13, 0x124, 10, periph)
/* pa13_tc7wo1_out */
#define PA13_TC7WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 22, periph)
/* pa13_tcc0wo0_out */
#define PA13_TCC0WO0_OUT MCHP_PINMUX(a, 13, 0x278, 8, periph)
/* pa13_tcc0wo1_out */
#define PA13_TCC0WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 8, periph)
/* pa13_tcc0wo2_out */
#define PA13_TCC0WO2_OUT MCHP_PINMUX(a, 13, 0x278, 7, periph)
/* pa13_tcc0wo3_out */
#define PA13_TCC0WO3_OUT MCHP_PINMUX(a, 13, 0x27c, 7, periph)
/* pa13_tcc0wo4_out */
#define PA13_TCC0WO4_OUT MCHP_PINMUX(a, 13, 0x278, 9, periph)
/* pa13_tcc0wo5_out */
#define PA13_TCC0WO5_OUT MCHP_PINMUX(a, 13, 0x27c, 9, periph)
/* pa13_tcc1wo0_out */
#define PA13_TCC1WO0_OUT MCHP_PINMUX(a, 13, 0x278, 11, periph)
/* pa13_tcc1wo1_out */
#define PA13_TCC1WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 11, periph)
/* pa13_tcc1wo2_out */
#define PA13_TCC1WO2_OUT MCHP_PINMUX(a, 13, 0x278, 10, periph)
/* pa13_tcc1wo3_out */
#define PA13_TCC1WO3_OUT MCHP_PINMUX(a, 13, 0x27c, 10, periph)
/* pa13_tcc1wo4_out */
#define PA13_TCC1WO4_OUT MCHP_PINMUX(a, 13, 0x278, 12, periph)
/* pa13_tcc1wo5_out */
#define PA13_TCC1WO5_OUT MCHP_PINMUX(a, 13, 0x27c, 12, periph)
/* pa13_tcc2wo0_out */
#define PA13_TCC2WO0_OUT MCHP_PINMUX(a, 13, 0x278, 13, periph)
/* pa13_tcc2wo1_out */
#define PA13_TCC2WO1_OUT MCHP_PINMUX(a, 13, 0x27c, 13, periph)
/* pa14_cclin0_in */
#define PA14_CCLIN0_IN MCHP_PINMUX(a, 14, 0x98, 11, periph)
/* pa14_cclin3_in */
#define PA14_CCLIN3_IN MCHP_PINMUX(a, 14, 0xa4, 11, periph)
/* pa14_cclout1_out */
#define PA14_CCLOUT1_OUT MCHP_PINMUX(a, 14, 0x284, 27, periph)
/* pa14_extint0_in */
#define PA14_EXTINT0_IN MCHP_PINMUX(a, 14, 0x0, 11, periph)
/* pa14_extint3_in */
#define PA14_EXTINT3_IN MCHP_PINMUX(a, 14, 0xc, 3, periph)
/* pa14_nmi_in */
#define PA14_NMI_IN MCHP_PINMUX(a, 14, 0x3c, 3, periph)
/* pa14_qcs_out */
#define PA14_QCS_OUT MCHP_PINMUX(a, 14, 0x284, 23, periph)
/* pa14_qd0_in */
#define PA14_QD0_IN MCHP_PINMUX(a, 14, 0x84, 3, periph)
/* pa14_qd0_out */
#define PA14_QD0_OUT MCHP_PINMUX(a, 14, 0x284, 26, periph)
/* pa14_qd1_in */
#define PA14_QD1_IN MCHP_PINMUX(a, 14, 0x88, 11, periph)
/* pa14_qd1_out */
#define PA14_QD1_OUT MCHP_PINMUX(a, 14, 0x284, 25, periph)
/* pa14_qd2_out */
#define PA14_QD2_OUT MCHP_PINMUX(a, 14, 0x284, 24, periph)
/* pa14_scom0p0_out */
#define PA14_SCOM0P0_OUT MCHP_PINMUX(a, 14, 0x284, 3, periph)
/* pa14_scom0p2_in */
#define PA14_SCOM0P2_IN MCHP_PINMUX(a, 14, 0x48, 3, periph)
/* pa14_scom0p2_out */
#define PA14_SCOM0P2_OUT MCHP_PINMUX(a, 14, 0x284, 1, periph)
/* pa14_scom0p3_in */
#define PA14_SCOM0P3_IN MCHP_PINMUX(a, 14, 0x4c, 11, periph)
/* pa14_scom1p0_out */
#define PA14_SCOM1P0_OUT MCHP_PINMUX(a, 14, 0x284, 6, periph)
/* pa14_scom1p2_in */
#define PA14_SCOM1P2_IN MCHP_PINMUX(a, 14, 0x58, 11, periph)
/* pa14_scom1p3_out */
#define PA14_SCOM1P3_OUT MCHP_PINMUX(a, 14, 0x284, 4, periph)
/* pa14_tc0wo0g1_in */
#define PA14_TC0WO0G1_IN MCHP_PINMUX(a, 14, 0xb0, 11, periph)
/* pa14_tc0wo0_out */
#define PA14_TC0WO0_OUT MCHP_PINMUX(a, 14, 0x284, 15, periph)
/* pa14_tc0wo1g4_in */
#define PA14_TC0WO1G4_IN MCHP_PINMUX(a, 14, 0xbc, 3, periph)
/* pa14_tc1wo0g1_in */
#define PA14_TC1WO0G1_IN MCHP_PINMUX(a, 14, 0xc0, 11, periph)
/* pa14_tc1wo1_out */
#define PA14_TC1WO1_OUT MCHP_PINMUX(a, 14, 0x284, 16, periph)
/* pa14_tc2wo0g1_in */
#define PA14_TC2WO0G1_IN MCHP_PINMUX(a, 14, 0xc8, 11, periph)
/* pa14_tc2wo1g4_in */
#define PA14_TC2WO1G4_IN MCHP_PINMUX(a, 14, 0xd4, 3, periph)
/* pa14_tc2wo1_out */
#define PA14_TC2WO1_OUT MCHP_PINMUX(a, 14, 0x284, 17, periph)
/* pa14_tc3wo0g1_in */
#define PA14_TC3WO0G1_IN MCHP_PINMUX(a, 14, 0xd8, 11, periph)
/* pa14_tc3wo1g4_in */
#define PA14_TC3WO1G4_IN MCHP_PINMUX(a, 14, 0xe4, 3, periph)
/* pa14_tc3wo1_out */
#define PA14_TC3WO1_OUT MCHP_PINMUX(a, 14, 0x284, 18, periph)
/* pa14_tc4wo0g1_in */
#define PA14_TC4WO0G1_IN MCHP_PINMUX(a, 14, 0xe8, 11, periph)
/* pa14_tc4wo1g4_in */
#define PA14_TC4WO1G4_IN MCHP_PINMUX(a, 14, 0xf4, 3, periph)
/* pa14_tc4wo1_out */
#define PA14_TC4WO1_OUT MCHP_PINMUX(a, 14, 0x284, 19, periph)
/* pa14_tc5wo0g1_in */
#define PA14_TC5WO0G1_IN MCHP_PINMUX(a, 14, 0xf8, 11, periph)
/* pa14_tc5wo1g4_in */
#define PA14_TC5WO1G4_IN MCHP_PINMUX(a, 14, 0x104, 3, periph)
/* pa14_tc5wo1_out */
#define PA14_TC5WO1_OUT MCHP_PINMUX(a, 14, 0x284, 20, periph)
/* pa14_tc6wo0g1_in */
#define PA14_TC6WO0G1_IN MCHP_PINMUX(a, 14, 0x108, 11, periph)
/* pa14_tc6wo1g4_in */
#define PA14_TC6WO1G4_IN MCHP_PINMUX(a, 14, 0x114, 3, periph)
/* pa14_tc6wo1_out */
#define PA14_TC6WO1_OUT MCHP_PINMUX(a, 14, 0x284, 21, periph)
/* pa14_tc7wo0g1_in */
#define PA14_TC7WO0G1_IN MCHP_PINMUX(a, 14, 0x118, 11, periph)
/* pa14_tc7wo1g4_in */
#define PA14_TC7WO1G4_IN MCHP_PINMUX(a, 14, 0x124, 3, periph)
/* pa14_tc7wo1_out */
#define PA14_TC7WO1_OUT MCHP_PINMUX(a, 14, 0x284, 22, periph)
/* pa14_tcc0wo1_out */
#define PA14_TCC0WO1_OUT MCHP_PINMUX(a, 14, 0x284, 8, periph)
/* pa14_tcc0wo3_out */
#define PA14_TCC0WO3_OUT MCHP_PINMUX(a, 14, 0x284, 7, periph)
/* pa14_tcc0wo5_out */
#define PA14_TCC0WO5_OUT MCHP_PINMUX(a, 14, 0x284, 9, periph)
/* pa14_tcc1wo1_out */
#define PA14_TCC1WO1_OUT MCHP_PINMUX(a, 14, 0x284, 11, periph)
/* pa14_tcc1wo3_out */
#define PA14_TCC1WO3_OUT MCHP_PINMUX(a, 14, 0x284, 10, periph)
/* pa14_tcc1wo5_out */
#define PA14_TCC1WO5_OUT MCHP_PINMUX(a, 14, 0x284, 12, periph)
/* pa14_tcc2wo1_out */
#define PA14_TCC2WO1_OUT MCHP_PINMUX(a, 14, 0x284, 13, periph)
/* pb0_cclin0_in */
#define PB0_CCLIN0_IN MCHP_PINMUX(b, 0, 0x98, 4, periph)
/* pb0_cclin1_in */
#define PB0_CCLIN1_IN MCHP_PINMUX(b, 0, 0x9c, 11, periph)
/* pb0_cclin3_in */
#define PB0_CCLIN3_IN MCHP_PINMUX(b, 0, 0xa4, 4, periph)
/* pb0_cclin4_in */
#define PB0_CCLIN4_IN MCHP_PINMUX(b, 0, 0xa8, 11, periph)
/* pb0_cclout1_out */
#define PB0_CCLOUT1_OUT MCHP_PINMUX(b, 0, 0x290, 27, periph)
/* pb0_extint0_in */
#define PB0_EXTINT0_IN MCHP_PINMUX(b, 0, 0x0, 4, periph)
/* pb0_extint1_in */
#define PB0_EXTINT1_IN MCHP_PINMUX(b, 0, 0x4, 11, periph)
/* pb0_qd0_out */
#define PB0_QD0_OUT MCHP_PINMUX(b, 0, 0x290, 24, periph)
/* pb0_qd1_in */
#define PB0_QD1_IN MCHP_PINMUX(b, 0, 0x88, 4, periph)
/* pb0_qd2_in */
#define PB0_QD2_IN MCHP_PINMUX(b, 0, 0x8c, 11, periph)
/* pb0_qd2_out */
#define PB0_QD2_OUT MCHP_PINMUX(b, 0, 0x290, 26, periph)
/* pb0_qd3_out */
#define PB0_QD3_OUT MCHP_PINMUX(b, 0, 0x290, 25, periph)
/* pb0_qspics_out */
#define PB0_QSPICS_OUT MCHP_PINMUX(b, 0, 0x290, 23, periph)
/* pb0_scom0p0_in */
#define PB0_SCOM0P0_IN MCHP_PINMUX(b, 0, 0x40, 11, periph)
/* pb0_scom0p0_out */
#define PB0_SCOM0P0_OUT MCHP_PINMUX(b, 0, 0x290, 1, periph)
/* pb0_scom0p2_out */
#define PB0_SCOM0P2_OUT MCHP_PINMUX(b, 0, 0x290, 3, periph)
/* pb0_scom0p3_in */
#define PB0_SCOM0P3_IN MCHP_PINMUX(b, 0, 0x4c, 4, periph)
/* pb0_scom0p3_out */
#define PB0_SCOM0P3_OUT MCHP_PINMUX(b, 0, 0x290, 2, periph)
/* pb0_scom1p2_in */
#define PB0_SCOM1P2_IN MCHP_PINMUX(b, 0, 0x58, 4, periph)
/* pb0_scom1p2_out */
#define PB0_SCOM1P2_OUT MCHP_PINMUX(b, 0, 0x290, 6, periph)
/* pb0_scom1p3_in */
#define PB0_SCOM1P3_IN MCHP_PINMUX(b, 0, 0x5c, 11, periph)
/* pb0_scom1p3_out */
#define PB0_SCOM1P3_OUT MCHP_PINMUX(b, 0, 0x290, 5, periph)
/* pb0_tc0wo0g1_in */
#define PB0_TC0WO0G1_IN MCHP_PINMUX(b, 0, 0xb0, 4, periph)
/* pb0_tc0wo0g2_in */
#define PB0_TC0WO0G2_IN MCHP_PINMUX(b, 0, 0xb4, 11, periph)
/* pb0_tc0wo1_out */
#define PB0_TC0WO1_OUT MCHP_PINMUX(b, 0, 0x290, 15, periph)
/* pb0_tc1wo0g1_in */
#define PB0_TC1WO0G1_IN MCHP_PINMUX(b, 0, 0xc0, 4, periph)
/* pb0_tc1wo1g2_in */
#define PB0_TC1WO1G2_IN MCHP_PINMUX(b, 0, 0xc4, 11, periph)
/* pb0_tc1wo1_out */
#define PB0_TC1WO1_OUT MCHP_PINMUX(b, 0, 0x290, 16, periph)
/* pb0_tc2wo0g1_in */
#define PB0_TC2WO0G1_IN MCHP_PINMUX(b, 0, 0xc8, 4, periph)
/* pb0_tc2wo1g2_in */
#define PB0_TC2WO1G2_IN MCHP_PINMUX(b, 0, 0xd0, 11, periph)
/* pb0_tc2wo1_out */
#define PB0_TC2WO1_OUT MCHP_PINMUX(b, 0, 0x290, 17, periph)
/* pb0_tc3wo0g1_in */
#define PB0_TC3WO0G1_IN MCHP_PINMUX(b, 0, 0xd8, 4, periph)
/* pb0_tc3wo1g2_in */
#define PB0_TC3WO1G2_IN MCHP_PINMUX(b, 0, 0xe0, 11, periph)
/* pb0_tc3wo1_out */
#define PB0_TC3WO1_OUT MCHP_PINMUX(b, 0, 0x290, 18, periph)
/* pb0_tc4wo0g1_in */
#define PB0_TC4WO0G1_IN MCHP_PINMUX(b, 0, 0xe8, 4, periph)
/* pb0_tc4wo1g2_in */
#define PB0_TC4WO1G2_IN MCHP_PINMUX(b, 0, 0xf0, 11, periph)
/* pb0_tc4wo1_out */
#define PB0_TC4WO1_OUT MCHP_PINMUX(b, 0, 0x290, 19, periph)
/* pb0_tc5wo0g1_in */
#define PB0_TC5WO0G1_IN MCHP_PINMUX(b, 0, 0xf8, 4, periph)
/* pb0_tc5wo1g2_in */
#define PB0_TC5WO1G2_IN MCHP_PINMUX(b, 0, 0x100, 11, periph)
/* pb0_tc5wo1_out */
#define PB0_TC5WO1_OUT MCHP_PINMUX(b, 0, 0x290, 20, periph)
/* pb0_tc6wo0g1_in */
#define PB0_TC6WO0G1_IN MCHP_PINMUX(b, 0, 0x108, 4, periph)
/* pb0_tc6wo1g2_in */
#define PB0_TC6WO1G2_IN MCHP_PINMUX(b, 0, 0x110, 11, periph)
/* pb0_tc6wo1_out */
#define PB0_TC6WO1_OUT MCHP_PINMUX(b, 0, 0x290, 21, periph)
/* pb0_tc7wo0g1_in */
#define PB0_TC7WO0G1_IN MCHP_PINMUX(b, 0, 0x118, 4, periph)
/* pb0_tc7wo1g2_in */
#define PB0_TC7WO1G2_IN MCHP_PINMUX(b, 0, 0x120, 11, periph)
/* pb0_tc7wo1_out */
#define PB0_TC7WO1_OUT MCHP_PINMUX(b, 0, 0x290, 22, periph)
/* pb0_tcc0wo1_out */
#define PB0_TCC0WO1_OUT MCHP_PINMUX(b, 0, 0x290, 7, periph)
/* pb0_tcc0wo3_out */
#define PB0_TCC0WO3_OUT MCHP_PINMUX(b, 0, 0x290, 9, periph)
/* pb0_tcc0wo5_out */
#define PB0_TCC0WO5_OUT MCHP_PINMUX(b, 0, 0x290, 8, periph)
/* pb0_tcc1wo1_out */
#define PB0_TCC1WO1_OUT MCHP_PINMUX(b, 0, 0x290, 10, periph)
/* pb0_tcc1wo3_out */
#define PB0_TCC1WO3_OUT MCHP_PINMUX(b, 0, 0x290, 12, periph)
/* pb0_tcc1wo5_out */
#define PB0_TCC1WO5_OUT MCHP_PINMUX(b, 0, 0x290, 11, periph)
/* pb0_tcc2wo1_out */
#define PB0_TCC2WO1_OUT MCHP_PINMUX(b, 0, 0x290, 13, periph)
/* pb1_cclin1_in */
#define PB1_CCLIN1_IN MCHP_PINMUX(b, 1, 0x9c, 4, periph)
/* pb1_cclin2_in */
#define PB1_CCLIN2_IN MCHP_PINMUX(b, 1, 0xa0, 11, periph)
/* pb1_cclin4_in */
#define PB1_CCLIN4_IN MCHP_PINMUX(b, 1, 0xa8, 4, periph)
/* pb1_cclin5_in */
#define PB1_CCLIN5_IN MCHP_PINMUX(b, 1, 0xac, 11, periph)
/* pb1_cclout0_out */
#define PB1_CCLOUT0_OUT MCHP_PINMUX(b, 1, 0x298, 27, periph)
/* pb1_cclout1_out */
#define PB1_CCLOUT1_OUT MCHP_PINMUX(b, 1, 0x294, 27, periph)
/* pb1_extint1_in */
#define PB1_EXTINT1_IN MCHP_PINMUX(b, 1, 0x4, 4, periph)
/* pb1_extint2_in */
#define PB1_EXTINT2_IN MCHP_PINMUX(b, 1, 0x8, 11, periph)
/* pb1_qcs_out */
#define PB1_QCS_OUT MCHP_PINMUX(b, 1, 0x298, 23, periph)
/* pb1_qd0_out */
#define PB1_QD0_OUT MCHP_PINMUX(b, 1, 0x294, 24, periph)
/* pb1_qd1_out */
#define PB1_QD1_OUT MCHP_PINMUX(b, 1, 0x298, 24, periph)
/* pb1_qd2_in */
#define PB1_QD2_IN MCHP_PINMUX(b, 1, 0x8c, 4, periph)
/* pb1_qd2_out */
#define PB1_QD2_OUT MCHP_PINMUX(b, 1, 0x294, 26, periph)
/* pb1_qd3_in */
#define PB1_QD3_IN MCHP_PINMUX(b, 1, 0x90, 11, periph)
/* pb1_qd3_out */
#define PB1_QD3_OUT MCHP_PINMUX(b, 1, 0x294, 25, periph)
/* pb1_qspics_out */
#define PB1_QSPICS_OUT MCHP_PINMUX(b, 1, 0x294, 23, periph)
/* pb1_scom0p0_in */
#define PB1_SCOM0P0_IN MCHP_PINMUX(b, 1, 0x40, 4, periph)
/* pb1_scom0p0_out */
#define PB1_SCOM0P0_OUT MCHP_PINMUX(b, 1, 0x294, 1, periph)
/* pb1_scom0p2_out */
#define PB1_SCOM0P2_OUT MCHP_PINMUX(b, 1, 0x294, 3, periph)
/* pb1_scom0p3_out */
#define PB1_SCOM0P3_OUT MCHP_PINMUX(b, 1, 0x294, 2, periph)
/* pb1_scom1p0_in */
#define PB1_SCOM1P0_IN MCHP_PINMUX(b, 1, 0x50, 11, periph)
/* pb1_scom1p2_out */
#define PB1_SCOM1P2_OUT MCHP_PINMUX(b, 1, 0x294, 6, periph)
/* pb1_scom1p3_in */
#define PB1_SCOM1P3_IN MCHP_PINMUX(b, 1, 0x5c, 4, periph)
/* pb1_scom1p3_out */
#define PB1_SCOM1P3_OUT MCHP_PINMUX(b, 1, 0x294, 5, periph)
/* pb1_tc0wo0g2_in */
#define PB1_TC0WO0G2_IN MCHP_PINMUX(b, 1, 0xb4, 4, periph)
/* pb1_tc0wo0_out */
#define PB1_TC0WO0_OUT MCHP_PINMUX(b, 1, 0x298, 15, periph)
/* pb1_tc0wo1g3_in */
#define PB1_TC0WO1G3_IN MCHP_PINMUX(b, 1, 0xb8, 11, periph)
/* pb1_tc0wo1_out */
#define PB1_TC0WO1_OUT MCHP_PINMUX(b, 1, 0x294, 15, periph)
/* pb1_tc1wo0_out */
#define PB1_TC1WO0_OUT MCHP_PINMUX(b, 1, 0x298, 16, periph)
/* pb1_tc1wo1g2_in */
#define PB1_TC1WO1G2_IN MCHP_PINMUX(b, 1, 0xc4, 4, periph)
/* pb1_tc1wo1_out */
#define PB1_TC1WO1_OUT MCHP_PINMUX(b, 1, 0x294, 16, periph)
/* pb1_tc2wo0g3_in */
#define PB1_TC2WO0G3_IN MCHP_PINMUX(b, 1, 0xcc, 11, periph)
/* pb1_tc2wo0_out */
#define PB1_TC2WO0_OUT MCHP_PINMUX(b, 1, 0x298, 17, periph)
/* pb1_tc2wo1g2_in */
#define PB1_TC2WO1G2_IN MCHP_PINMUX(b, 1, 0xd0, 4, periph)
/* pb1_tc2wo1_out */
#define PB1_TC2WO1_OUT MCHP_PINMUX(b, 1, 0x294, 17, periph)
/* pb1_tc3wo0g3_in */
#define PB1_TC3WO0G3_IN MCHP_PINMUX(b, 1, 0xdc, 11, periph)
/* pb1_tc3wo0_out */
#define PB1_TC3WO0_OUT MCHP_PINMUX(b, 1, 0x298, 18, periph)
/* pb1_tc3wo1g2_in */
#define PB1_TC3WO1G2_IN MCHP_PINMUX(b, 1, 0xe0, 4, periph)
/* pb1_tc3wo1_out */
#define PB1_TC3WO1_OUT MCHP_PINMUX(b, 1, 0x294, 18, periph)
/* pb1_tc4wo0g3_in */
#define PB1_TC4WO0G3_IN MCHP_PINMUX(b, 1, 0xec, 11, periph)
/* pb1_tc4wo0_out */
#define PB1_TC4WO0_OUT MCHP_PINMUX(b, 1, 0x298, 19, periph)
/* pb1_tc4wo1g2_in */
#define PB1_TC4WO1G2_IN MCHP_PINMUX(b, 1, 0xf0, 4, periph)
/* pb1_tc4wo1_out */
#define PB1_TC4WO1_OUT MCHP_PINMUX(b, 1, 0x294, 19, periph)
/* pb1_tc5wo0g3_in */
#define PB1_TC5WO0G3_IN MCHP_PINMUX(b, 1, 0xfc, 11, periph)
/* pb1_tc5wo0_out */
#define PB1_TC5WO0_OUT MCHP_PINMUX(b, 1, 0x298, 20, periph)
/* pb1_tc5wo1g2_in */
#define PB1_TC5WO1G2_IN MCHP_PINMUX(b, 1, 0x100, 4, periph)
/* pb1_tc5wo1_out */
#define PB1_TC5WO1_OUT MCHP_PINMUX(b, 1, 0x294, 20, periph)
/* pb1_tc6wo0g3_in */
#define PB1_TC6WO0G3_IN MCHP_PINMUX(b, 1, 0x10c, 11, periph)
/* pb1_tc6wo0_out */
#define PB1_TC6WO0_OUT MCHP_PINMUX(b, 1, 0x298, 21, periph)
/* pb1_tc6wo1g2_in */
#define PB1_TC6WO1G2_IN MCHP_PINMUX(b, 1, 0x110, 4, periph)
/* pb1_tc6wo1_out */
#define PB1_TC6WO1_OUT MCHP_PINMUX(b, 1, 0x294, 21, periph)
/* pb1_tc7wo0g3_in */
#define PB1_TC7WO0G3_IN MCHP_PINMUX(b, 1, 0x11c, 11, periph)
/* pb1_tc7wo0_out */
#define PB1_TC7WO0_OUT MCHP_PINMUX(b, 1, 0x298, 22, periph)
/* pb1_tc7wo1g2_in */
#define PB1_TC7WO1G2_IN MCHP_PINMUX(b, 1, 0x120, 4, periph)
/* pb1_tc7wo1_out */
#define PB1_TC7WO1_OUT MCHP_PINMUX(b, 1, 0x294, 22, periph)
/* pb1_tcc0wo0_out */
#define PB1_TCC0WO0_OUT MCHP_PINMUX(b, 1, 0x298, 8, periph)
/* pb1_tcc0wo1_out */
#define PB1_TCC0WO1_OUT MCHP_PINMUX(b, 1, 0x294, 7, periph)
/* pb1_tcc0wo2_out */
#define PB1_TCC0WO2_OUT MCHP_PINMUX(b, 1, 0x298, 7, periph)
/* pb1_tcc0wo3_out */
#define PB1_TCC0WO3_OUT MCHP_PINMUX(b, 1, 0x294, 9, periph)
/* pb1_tcc0wo4_out */
#define PB1_TCC0WO4_OUT MCHP_PINMUX(b, 1, 0x298, 9, periph)
/* pb1_tcc0wo5_out */
#define PB1_TCC0WO5_OUT MCHP_PINMUX(b, 1, 0x294, 8, periph)
/* pb1_tcc1wo0_out */
#define PB1_TCC1WO0_OUT MCHP_PINMUX(b, 1, 0x298, 11, periph)
/* pb1_tcc1wo1_out */
#define PB1_TCC1WO1_OUT MCHP_PINMUX(b, 1, 0x294, 10, periph)
/* pb1_tcc1wo2_out */
#define PB1_TCC1WO2_OUT MCHP_PINMUX(b, 1, 0x298, 10, periph)
/* pb1_tcc1wo3_out */
#define PB1_TCC1WO3_OUT MCHP_PINMUX(b, 1, 0x294, 12, periph)
/* pb1_tcc1wo4_out */
#define PB1_TCC1WO4_OUT MCHP_PINMUX(b, 1, 0x298, 12, periph)
/* pb1_tcc1wo5_out */
#define PB1_TCC1WO5_OUT MCHP_PINMUX(b, 1, 0x294, 11, periph)
/* pb1_tcc2wo0_out */
#define PB1_TCC2WO0_OUT MCHP_PINMUX(b, 1, 0x298, 13, periph)
/* pb1_tcc2wo1_out */
#define PB1_TCC2WO1_OUT MCHP_PINMUX(b, 1, 0x294, 13, periph)
/* pb2_cclin2_in */
#define PB2_CCLIN2_IN MCHP_PINMUX(b, 2, 0xa0, 4, periph)
/* pb2_cclin5_in */
#define PB2_CCLIN5_IN MCHP_PINMUX(b, 2, 0xac, 4, periph)
/* pb2_cclout0_out */
#define PB2_CCLOUT0_OUT MCHP_PINMUX(b, 2, 0x29c, 27, periph)
/* pb2_cclout1_out */
#define PB2_CCLOUT1_OUT MCHP_PINMUX(b, 2, 0x2a0, 27, periph)
/* pb2_extint2_in */
#define PB2_EXTINT2_IN MCHP_PINMUX(b, 2, 0x8, 4, periph)
/* pb2_extint3_in */
#define PB2_EXTINT3_IN MCHP_PINMUX(b, 2, 0xc, 11, periph)
/* pb2_nmi_in */
#define PB2_NMI_IN MCHP_PINMUX(b, 2, 0x3c, 11, periph)
/* pb2_qcs_out */
#define PB2_QCS_OUT MCHP_PINMUX(b, 2, 0x29c, 23, periph)
/* pb2_qd0_in */
#define PB2_QD0_IN MCHP_PINMUX(b, 2, 0x84, 11, periph)
/* pb2_qd0_out */
#define PB2_QD0_OUT MCHP_PINMUX(b, 2, 0x29c, 25, periph)
/* pb2_qd1_out */
#define PB2_QD1_OUT MCHP_PINMUX(b, 2, 0x29c, 24, periph)
/* pb2_qd2_out */
#define PB2_QD2_OUT MCHP_PINMUX(b, 2, 0x2a0, 24, periph)
/* pb2_qd3_in */
#define PB2_QD3_IN MCHP_PINMUX(b, 2, 0x90, 4, periph)
/* pb2_qd3_out */
#define PB2_QD3_OUT MCHP_PINMUX(b, 2, 0x29c, 26, periph)
/* pb2_scom0p0_out */
#define PB2_SCOM0P0_OUT MCHP_PINMUX(b, 2, 0x29c, 2, periph)
/* pb2_scom0p2_in */
#define PB2_SCOM0P2_IN MCHP_PINMUX(b, 2, 0x48, 11, periph)
/* pb2_scom0p2_out */
#define PB2_SCOM0P2_OUT MCHP_PINMUX(b, 2, 0x2a0, 1, periph)
/* pb2_scom0p3_out */
#define PB2_SCOM0P3_OUT MCHP_PINMUX(b, 2, 0x29c, 3, periph)
/* pb2_scom1p0_in */
#define PB2_SCOM1P0_IN MCHP_PINMUX(b, 2, 0x50, 4, periph)
/* pb2_scom1p0_out */
#define PB2_SCOM1P0_OUT MCHP_PINMUX(b, 2, 0x2a0, 6, periph)
/* pb2_scom1p2_out */
#define PB2_SCOM1P2_OUT MCHP_PINMUX(b, 2, 0x29c, 4, periph)
/* pb2_scom1p3_out */
#define PB2_SCOM1P3_OUT MCHP_PINMUX(b, 2, 0x29c, 6, periph)
/* pb2_tc0wo0_out */
#define PB2_TC0WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 15, periph)
/* pb2_tc0wo1g3_in */
#define PB2_TC0WO1G3_IN MCHP_PINMUX(b, 2, 0xb8, 4, periph)
/* pb2_tc0wo1g4_in */
#define PB2_TC0WO1G4_IN MCHP_PINMUX(b, 2, 0xbc, 11, periph)
/* pb2_tc1wo0_out */
#define PB2_TC1WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 16, periph)
/* pb2_tc1wo1_out */
#define PB2_TC1WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 16, periph)
/* pb2_tc2wo0g3_in */
#define PB2_TC2WO0G3_IN MCHP_PINMUX(b, 2, 0xcc, 4, periph)
/* pb2_tc2wo0_out */
#define PB2_TC2WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 17, periph)
/* pb2_tc2wo1g4_in */
#define PB2_TC2WO1G4_IN MCHP_PINMUX(b, 2, 0xd4, 11, periph)
/* pb2_tc2wo1_out */
#define PB2_TC2WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 17, periph)
/* pb2_tc3wo0g3_in */
#define PB2_TC3WO0G3_IN MCHP_PINMUX(b, 2, 0xdc, 4, periph)
/* pb2_tc3wo0_out */
#define PB2_TC3WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 18, periph)
/* pb2_tc3wo1g4_in */
#define PB2_TC3WO1G4_IN MCHP_PINMUX(b, 2, 0xe4, 11, periph)
/* pb2_tc3wo1_out */
#define PB2_TC3WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 18, periph)
/* pb2_tc4wo0g3_in */
#define PB2_TC4WO0G3_IN MCHP_PINMUX(b, 2, 0xec, 4, periph)
/* pb2_tc4wo0_out */
#define PB2_TC4WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 19, periph)
/* pb2_tc4wo1g4_in */
#define PB2_TC4WO1G4_IN MCHP_PINMUX(b, 2, 0xf4, 11, periph)
/* pb2_tc4wo1_out */
#define PB2_TC4WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 19, periph)
/* pb2_tc5wo0g3_in */
#define PB2_TC5WO0G3_IN MCHP_PINMUX(b, 2, 0xfc, 4, periph)
/* pb2_tc5wo0_out */
#define PB2_TC5WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 20, periph)
/* pb2_tc5wo1g4_in */
#define PB2_TC5WO1G4_IN MCHP_PINMUX(b, 2, 0x104, 11, periph)
/* pb2_tc5wo1_out */
#define PB2_TC5WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 20, periph)
/* pb2_tc6wo0g3_in */
#define PB2_TC6WO0G3_IN MCHP_PINMUX(b, 2, 0x10c, 4, periph)
/* pb2_tc6wo0_out */
#define PB2_TC6WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 21, periph)
/* pb2_tc6wo1g4_in */
#define PB2_TC6WO1G4_IN MCHP_PINMUX(b, 2, 0x114, 11, periph)
/* pb2_tc6wo1_out */
#define PB2_TC6WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 21, periph)
/* pb2_tc7wo0g3_in */
#define PB2_TC7WO0G3_IN MCHP_PINMUX(b, 2, 0x11c, 4, periph)
/* pb2_tc7wo0_out */
#define PB2_TC7WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 22, periph)
/* pb2_tc7wo1g4_in */
#define PB2_TC7WO1G4_IN MCHP_PINMUX(b, 2, 0x124, 11, periph)
/* pb2_tc7wo1_out */
#define PB2_TC7WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 22, periph)
/* pb2_tcc0wo0_out */
#define PB2_TCC0WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 8, periph)
/* pb2_tcc0wo1_out */
#define PB2_TCC0WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 8, periph)
/* pb2_tcc0wo2_out */
#define PB2_TCC0WO2_OUT MCHP_PINMUX(b, 2, 0x29c, 7, periph)
/* pb2_tcc0wo3_out */
#define PB2_TCC0WO3_OUT MCHP_PINMUX(b, 2, 0x2a0, 7, periph)
/* pb2_tcc0wo4_out */
#define PB2_TCC0WO4_OUT MCHP_PINMUX(b, 2, 0x29c, 9, periph)
/* pb2_tcc0wo5_out */
#define PB2_TCC0WO5_OUT MCHP_PINMUX(b, 2, 0x2a0, 9, periph)
/* pb2_tcc1wo0_out */
#define PB2_TCC1WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 11, periph)
/* pb2_tcc1wo1_out */
#define PB2_TCC1WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 11, periph)
/* pb2_tcc1wo2_out */
#define PB2_TCC1WO2_OUT MCHP_PINMUX(b, 2, 0x29c, 10, periph)
/* pb2_tcc1wo3_out */
#define PB2_TCC1WO3_OUT MCHP_PINMUX(b, 2, 0x2a0, 10, periph)
/* pb2_tcc1wo4_out */
#define PB2_TCC1WO4_OUT MCHP_PINMUX(b, 2, 0x29c, 12, periph)
/* pb2_tcc1wo5_out */
#define PB2_TCC1WO5_OUT MCHP_PINMUX(b, 2, 0x2a0, 12, periph)
/* pb2_tcc2wo0_out */
#define PB2_TCC2WO0_OUT MCHP_PINMUX(b, 2, 0x29c, 13, periph)
/* pb2_tcc2wo1_out */
#define PB2_TCC2WO1_OUT MCHP_PINMUX(b, 2, 0x2a0, 13, periph)
/* pb3_cclin0_in */
#define PB3_CCLIN0_IN MCHP_PINMUX(b, 3, 0x98, 12, periph)
/* pb3_cclin3_in */
#define PB3_CCLIN3_IN MCHP_PINMUX(b, 3, 0xa4, 12, periph)
/* pb3_cclout1_out */
#define PB3_CCLOUT1_OUT MCHP_PINMUX(b, 3, 0x2a8, 27, periph)
/* pb3_extint0_in */
#define PB3_EXTINT0_IN MCHP_PINMUX(b, 3, 0x0, 12, periph)
/* pb3_extint3_in */
#define PB3_EXTINT3_IN MCHP_PINMUX(b, 3, 0xc, 4, periph)
/* pb3_nmi_in */
#define PB3_NMI_IN MCHP_PINMUX(b, 3, 0x3c, 4, periph)
/* pb3_qcs_out */
#define PB3_QCS_OUT MCHP_PINMUX(b, 3, 0x2a8, 23, periph)
/* pb3_qd0_in */
#define PB3_QD0_IN MCHP_PINMUX(b, 3, 0x84, 4, periph)
/* pb3_qd0_out */
#define PB3_QD0_OUT MCHP_PINMUX(b, 3, 0x2a8, 26, periph)
/* pb3_qd1_in */
#define PB3_QD1_IN MCHP_PINMUX(b, 3, 0x88, 12, periph)
/* pb3_qd1_out */
#define PB3_QD1_OUT MCHP_PINMUX(b, 3, 0x2a8, 25, periph)
/* pb3_qd2_out */
#define PB3_QD2_OUT MCHP_PINMUX(b, 3, 0x2a8, 24, periph)
/* pb3_scom0p0_out */
#define PB3_SCOM0P0_OUT MCHP_PINMUX(b, 3, 0x2a8, 3, periph)
/* pb3_scom0p2_in */
#define PB3_SCOM0P2_IN MCHP_PINMUX(b, 3, 0x48, 4, periph)
/* pb3_scom0p2_out */
#define PB3_SCOM0P2_OUT MCHP_PINMUX(b, 3, 0x2a8, 1, periph)
/* pb3_scom0p3_in */
#define PB3_SCOM0P3_IN MCHP_PINMUX(b, 3, 0x4c, 12, periph)
/* pb3_scom1p0_out */
#define PB3_SCOM1P0_OUT MCHP_PINMUX(b, 3, 0x2a8, 6, periph)
/* pb3_scom1p2_in */
#define PB3_SCOM1P2_IN MCHP_PINMUX(b, 3, 0x58, 12, periph)
/* pb3_scom1p3_out */
#define PB3_SCOM1P3_OUT MCHP_PINMUX(b, 3, 0x2a8, 4, periph)
/* pb3_tc0wo0g1_in */
#define PB3_TC0WO0G1_IN MCHP_PINMUX(b, 3, 0xb0, 12, periph)
/* pb3_tc0wo0_out */
#define PB3_TC0WO0_OUT MCHP_PINMUX(b, 3, 0x2a8, 15, periph)
/* pb3_tc0wo1g4_in */
#define PB3_TC0WO1G4_IN MCHP_PINMUX(b, 3, 0xbc, 4, periph)
/* pb3_tc1wo0g1_in */
#define PB3_TC1WO0G1_IN MCHP_PINMUX(b, 3, 0xc0, 12, periph)
/* pb3_tc1wo1_out */
#define PB3_TC1WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 16, periph)
/* pb3_tc2wo0g1_in */
#define PB3_TC2WO0G1_IN MCHP_PINMUX(b, 3, 0xc8, 12, periph)
/* pb3_tc2wo1g4_in */
#define PB3_TC2WO1G4_IN MCHP_PINMUX(b, 3, 0xd4, 4, periph)
/* pb3_tc2wo1_out */
#define PB3_TC2WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 17, periph)
/* pb3_tc3wo0g1_in */
#define PB3_TC3WO0G1_IN MCHP_PINMUX(b, 3, 0xd8, 12, periph)
/* pb3_tc3wo1g4_in */
#define PB3_TC3WO1G4_IN MCHP_PINMUX(b, 3, 0xe4, 4, periph)
/* pb3_tc3wo1_out */
#define PB3_TC3WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 18, periph)
/* pb3_tc4wo0g1_in */
#define PB3_TC4WO0G1_IN MCHP_PINMUX(b, 3, 0xe8, 12, periph)
/* pb3_tc4wo1g4_in */
#define PB3_TC4WO1G4_IN MCHP_PINMUX(b, 3, 0xf4, 4, periph)
/* pb3_tc4wo1_out */
#define PB3_TC4WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 19, periph)
/* pb3_tc5wo0g1_in */
#define PB3_TC5WO0G1_IN MCHP_PINMUX(b, 3, 0xf8, 12, periph)
/* pb3_tc5wo1g4_in */
#define PB3_TC5WO1G4_IN MCHP_PINMUX(b, 3, 0x104, 4, periph)
/* pb3_tc5wo1_out */
#define PB3_TC5WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 20, periph)
/* pb3_tc6wo0g1_in */
#define PB3_TC6WO0G1_IN MCHP_PINMUX(b, 3, 0x108, 12, periph)
/* pb3_tc6wo1g4_in */
#define PB3_TC6WO1G4_IN MCHP_PINMUX(b, 3, 0x114, 4, periph)
/* pb3_tc6wo1_out */
#define PB3_TC6WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 21, periph)
/* pb3_tc7wo0g1_in */
#define PB3_TC7WO0G1_IN MCHP_PINMUX(b, 3, 0x118, 12, periph)
/* pb3_tc7wo1g4_in */
#define PB3_TC7WO1G4_IN MCHP_PINMUX(b, 3, 0x124, 4, periph)
/* pb3_tc7wo1_out */
#define PB3_TC7WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 22, periph)
/* pb3_tcc0wo1_out */
#define PB3_TCC0WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 8, periph)
/* pb3_tcc0wo3_out */
#define PB3_TCC0WO3_OUT MCHP_PINMUX(b, 3, 0x2a8, 7, periph)
/* pb3_tcc0wo5_out */
#define PB3_TCC0WO5_OUT MCHP_PINMUX(b, 3, 0x2a8, 9, periph)
/* pb3_tcc1wo1_out */
#define PB3_TCC1WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 11, periph)
/* pb3_tcc1wo3_out */
#define PB3_TCC1WO3_OUT MCHP_PINMUX(b, 3, 0x2a8, 10, periph)
/* pb3_tcc1wo5_out */
#define PB3_TCC1WO5_OUT MCHP_PINMUX(b, 3, 0x2a8, 12, periph)
/* pb3_tcc2wo1_out */
#define PB3_TCC2WO1_OUT MCHP_PINMUX(b, 3, 0x2a8, 13, periph)
/* pb4_cclin0_in */
#define PB4_CCLIN0_IN MCHP_PINMUX(b, 4, 0x98, 5, periph)
/* pb4_cclin1_in */
#define PB4_CCLIN1_IN MCHP_PINMUX(b, 4, 0x9c, 12, periph)
/* pb4_cclin3_in */
#define PB4_CCLIN3_IN MCHP_PINMUX(b, 4, 0xa4, 5, periph)
/* pb4_cclin4_in */
#define PB4_CCLIN4_IN MCHP_PINMUX(b, 4, 0xa8, 12, periph)
/* pb4_cclout1_out */
#define PB4_CCLOUT1_OUT MCHP_PINMUX(b, 4, 0x2b0, 27, periph)
/* pb4_extint0_in */
#define PB4_EXTINT0_IN MCHP_PINMUX(b, 4, 0x0, 5, periph)
/* pb4_extint1_in */
#define PB4_EXTINT1_IN MCHP_PINMUX(b, 4, 0x4, 12, periph)
/* pb4_qd0_out */
#define PB4_QD0_OUT MCHP_PINMUX(b, 4, 0x2b0, 24, periph)
/* pb4_qd1_in */
#define PB4_QD1_IN MCHP_PINMUX(b, 4, 0x88, 5, periph)
/* pb4_qd2_in */
#define PB4_QD2_IN MCHP_PINMUX(b, 4, 0x8c, 12, periph)
/* pb4_qd2_out */
#define PB4_QD2_OUT MCHP_PINMUX(b, 4, 0x2b0, 26, periph)
/* pb4_qd3_out */
#define PB4_QD3_OUT MCHP_PINMUX(b, 4, 0x2b0, 25, periph)
/* pb4_qspics_out */
#define PB4_QSPICS_OUT MCHP_PINMUX(b, 4, 0x2b0, 23, periph)
/* pb4_scom0p0_in */
#define PB4_SCOM0P0_IN MCHP_PINMUX(b, 4, 0x40, 12, periph)
/* pb4_scom0p0_out */
#define PB4_SCOM0P0_OUT MCHP_PINMUX(b, 4, 0x2b0, 1, periph)
/* pb4_scom0p2_out */
#define PB4_SCOM0P2_OUT MCHP_PINMUX(b, 4, 0x2b0, 3, periph)
/* pb4_scom0p3_in */
#define PB4_SCOM0P3_IN MCHP_PINMUX(b, 4, 0x4c, 5, periph)
/* pb4_scom0p3_out */
#define PB4_SCOM0P3_OUT MCHP_PINMUX(b, 4, 0x2b0, 2, periph)
/* pb4_scom1p2_in */
#define PB4_SCOM1P2_IN MCHP_PINMUX(b, 4, 0x58, 5, periph)
/* pb4_scom1p2_out */
#define PB4_SCOM1P2_OUT MCHP_PINMUX(b, 4, 0x2b0, 6, periph)
/* pb4_scom1p3_in */
#define PB4_SCOM1P3_IN MCHP_PINMUX(b, 4, 0x5c, 12, periph)
/* pb4_scom1p3_out */
#define PB4_SCOM1P3_OUT MCHP_PINMUX(b, 4, 0x2b0, 5, periph)
/* pb4_tc0wo0g1_in */
#define PB4_TC0WO0G1_IN MCHP_PINMUX(b, 4, 0xb0, 5, periph)
/* pb4_tc0wo0g2_in */
#define PB4_TC0WO0G2_IN MCHP_PINMUX(b, 4, 0xb4, 12, periph)
/* pb4_tc0wo1_out */
#define PB4_TC0WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 15, periph)
/* pb4_tc1wo0g1_in */
#define PB4_TC1WO0G1_IN MCHP_PINMUX(b, 4, 0xc0, 5, periph)
/* pb4_tc1wo1g2_in */
#define PB4_TC1WO1G2_IN MCHP_PINMUX(b, 4, 0xc4, 12, periph)
/* pb4_tc1wo1_out */
#define PB4_TC1WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 16, periph)
/* pb4_tc2wo0g1_in */
#define PB4_TC2WO0G1_IN MCHP_PINMUX(b, 4, 0xc8, 5, periph)
/* pb4_tc2wo1g2_in */
#define PB4_TC2WO1G2_IN MCHP_PINMUX(b, 4, 0xd0, 12, periph)
/* pb4_tc2wo1_out */
#define PB4_TC2WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 17, periph)
/* pb4_tc3wo0g1_in */
#define PB4_TC3WO0G1_IN MCHP_PINMUX(b, 4, 0xd8, 5, periph)
/* pb4_tc3wo1g2_in */
#define PB4_TC3WO1G2_IN MCHP_PINMUX(b, 4, 0xe0, 12, periph)
/* pb4_tc3wo1_out */
#define PB4_TC3WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 18, periph)
/* pb4_tc4wo0g1_in */
#define PB4_TC4WO0G1_IN MCHP_PINMUX(b, 4, 0xe8, 5, periph)
/* pb4_tc4wo1g2_in */
#define PB4_TC4WO1G2_IN MCHP_PINMUX(b, 4, 0xf0, 12, periph)
/* pb4_tc4wo1_out */
#define PB4_TC4WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 19, periph)
/* pb4_tc5wo0g1_in */
#define PB4_TC5WO0G1_IN MCHP_PINMUX(b, 4, 0xf8, 5, periph)
/* pb4_tc5wo1g2_in */
#define PB4_TC5WO1G2_IN MCHP_PINMUX(b, 4, 0x100, 12, periph)
/* pb4_tc5wo1_out */
#define PB4_TC5WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 20, periph)
/* pb4_tc6wo0g1_in */
#define PB4_TC6WO0G1_IN MCHP_PINMUX(b, 4, 0x108, 5, periph)
/* pb4_tc6wo1g2_in */
#define PB4_TC6WO1G2_IN MCHP_PINMUX(b, 4, 0x110, 12, periph)
/* pb4_tc6wo1_out */
#define PB4_TC6WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 21, periph)
/* pb4_tc7wo0g1_in */
#define PB4_TC7WO0G1_IN MCHP_PINMUX(b, 4, 0x118, 5, periph)
/* pb4_tc7wo1g2_in */
#define PB4_TC7WO1G2_IN MCHP_PINMUX(b, 4, 0x120, 12, periph)
/* pb4_tc7wo1_out */
#define PB4_TC7WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 22, periph)
/* pb4_tcc0wo1_out */
#define PB4_TCC0WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 7, periph)
/* pb4_tcc0wo3_out */
#define PB4_TCC0WO3_OUT MCHP_PINMUX(b, 4, 0x2b0, 9, periph)
/* pb4_tcc0wo5_out */
#define PB4_TCC0WO5_OUT MCHP_PINMUX(b, 4, 0x2b0, 8, periph)
/* pb4_tcc1wo1_out */
#define PB4_TCC1WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 10, periph)
/* pb4_tcc1wo3_out */
#define PB4_TCC1WO3_OUT MCHP_PINMUX(b, 4, 0x2b0, 12, periph)
/* pb4_tcc1wo5_out */
#define PB4_TCC1WO5_OUT MCHP_PINMUX(b, 4, 0x2b0, 11, periph)
/* pb4_tcc2wo1_out */
#define PB4_TCC2WO1_OUT MCHP_PINMUX(b, 4, 0x2b0, 13, periph)
/* pb5_cclin1_in */
#define PB5_CCLIN1_IN MCHP_PINMUX(b, 5, 0x9c, 5, periph)
/* pb5_cclin2_in */
#define PB5_CCLIN2_IN MCHP_PINMUX(b, 5, 0xa0, 12, periph)
/* pb5_cclin4_in */
#define PB5_CCLIN4_IN MCHP_PINMUX(b, 5, 0xa8, 5, periph)
/* pb5_cclin5_in */
#define PB5_CCLIN5_IN MCHP_PINMUX(b, 5, 0xac, 12, periph)
/* pb5_cclout1_out */
#define PB5_CCLOUT1_OUT MCHP_PINMUX(b, 5, 0x2b4, 27, periph)
/* pb5_extint1_in */
#define PB5_EXTINT1_IN MCHP_PINMUX(b, 5, 0x4, 5, periph)
/* pb5_extint2_in */
#define PB5_EXTINT2_IN MCHP_PINMUX(b, 5, 0x8, 12, periph)
/* pb5_qd0_out */
#define PB5_QD0_OUT MCHP_PINMUX(b, 5, 0x2b4, 24, periph)
/* pb5_qd2_in */
#define PB5_QD2_IN MCHP_PINMUX(b, 5, 0x8c, 5, periph)
/* pb5_qd2_out */
#define PB5_QD2_OUT MCHP_PINMUX(b, 5, 0x2b4, 26, periph)
/* pb5_qd3_in */
#define PB5_QD3_IN MCHP_PINMUX(b, 5, 0x90, 12, periph)
/* pb5_qd3_out */
#define PB5_QD3_OUT MCHP_PINMUX(b, 5, 0x2b4, 25, periph)
/* pb5_qsck_out */
#define PB5_QSCK_OUT MCHP_PINMUX(b, 5, 0x2b8, 7, periph)
/* pb5_qspics_out */
#define PB5_QSPICS_OUT MCHP_PINMUX(b, 5, 0x2b4, 23, periph)
/* pb5_refi_in */
#define PB5_REFI_IN MCHP_PINMUX(b, 5, 0x94, 5, periph)
/* pb5_refo1_out */
#define PB5_REFO1_OUT MCHP_PINMUX(b, 5, 0x2b8, 3, periph)
/* pb5_refo2_out */
#define PB5_REFO2_OUT MCHP_PINMUX(b, 5, 0x2b8, 4, periph)
/* pb5_refo3_out */
#define PB5_REFO3_OUT MCHP_PINMUX(b, 5, 0x2b8, 5, periph)
/* pb5_refo4_out */
#define PB5_REFO4_OUT MCHP_PINMUX(b, 5, 0x2b8, 6, periph)
/* pb5_scom0p0_in */
#define PB5_SCOM0P0_IN MCHP_PINMUX(b, 5, 0x40, 5, periph)
/* pb5_scom0p0_out */
#define PB5_SCOM0P0_OUT MCHP_PINMUX(b, 5, 0x2b4, 1, periph)
/* pb5_scom0p1_in */
#define PB5_SCOM0P1_IN MCHP_PINMUX(b, 5, 0x44, 5, periph)
/* pb5_scom0p1_out */
#define PB5_SCOM0P1_OUT MCHP_PINMUX(b, 5, 0x2b8, 1, periph)
/* pb5_scom0p2_out */
#define PB5_SCOM0P2_OUT MCHP_PINMUX(b, 5, 0x2b4, 3, periph)
/* pb5_scom0p3_out */
#define PB5_SCOM0P3_OUT MCHP_PINMUX(b, 5, 0x2b4, 2, periph)
/* pb5_scom1p0_in */
#define PB5_SCOM1P0_IN MCHP_PINMUX(b, 5, 0x50, 12, periph)
/* pb5_scom1p1_in */
#define PB5_SCOM1P1_IN MCHP_PINMUX(b, 5, 0x54, 5, periph)
/* pb5_scom1p1_out */
#define PB5_SCOM1P1_OUT MCHP_PINMUX(b, 5, 0x2b8, 2, periph)
/* pb5_scom1p2_out */
#define PB5_SCOM1P2_OUT MCHP_PINMUX(b, 5, 0x2b4, 6, periph)
/* pb5_scom1p3_in */
#define PB5_SCOM1P3_IN MCHP_PINMUX(b, 5, 0x5c, 5, periph)
/* pb5_scom1p3_out */
#define PB5_SCOM1P3_OUT MCHP_PINMUX(b, 5, 0x2b4, 5, periph)
/* pb5_tc0wo0g2_in */
#define PB5_TC0WO0G2_IN MCHP_PINMUX(b, 5, 0xb4, 5, periph)
/* pb5_tc0wo1g3_in */
#define PB5_TC0WO1G3_IN MCHP_PINMUX(b, 5, 0xb8, 12, periph)
/* pb5_tc0wo1_out */
#define PB5_TC0WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 15, periph)
/* pb5_tc1wo1g2_in */
#define PB5_TC1WO1G2_IN MCHP_PINMUX(b, 5, 0xc4, 5, periph)
/* pb5_tc1wo1_out */
#define PB5_TC1WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 16, periph)
/* pb5_tc2wo0g3_in */
#define PB5_TC2WO0G3_IN MCHP_PINMUX(b, 5, 0xcc, 12, periph)
/* pb5_tc2wo1g2_in */
#define PB5_TC2WO1G2_IN MCHP_PINMUX(b, 5, 0xd0, 5, periph)
/* pb5_tc2wo1_out */
#define PB5_TC2WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 17, periph)
/* pb5_tc3wo0g3_in */
#define PB5_TC3WO0G3_IN MCHP_PINMUX(b, 5, 0xdc, 12, periph)
/* pb5_tc3wo1g2_in */
#define PB5_TC3WO1G2_IN MCHP_PINMUX(b, 5, 0xe0, 5, periph)
/* pb5_tc3wo1_out */
#define PB5_TC3WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 18, periph)
/* pb5_tc4wo0g3_in */
#define PB5_TC4WO0G3_IN MCHP_PINMUX(b, 5, 0xec, 12, periph)
/* pb5_tc4wo1g2_in */
#define PB5_TC4WO1G2_IN MCHP_PINMUX(b, 5, 0xf0, 5, periph)
/* pb5_tc4wo1_out */
#define PB5_TC4WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 19, periph)
/* pb5_tc5wo0g3_in */
#define PB5_TC5WO0G3_IN MCHP_PINMUX(b, 5, 0xfc, 12, periph)
/* pb5_tc5wo1g2_in */
#define PB5_TC5WO1G2_IN MCHP_PINMUX(b, 5, 0x100, 5, periph)
/* pb5_tc5wo1_out */
#define PB5_TC5WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 20, periph)
/* pb5_tc6wo0g3_in */
#define PB5_TC6WO0G3_IN MCHP_PINMUX(b, 5, 0x10c, 12, periph)
/* pb5_tc6wo1g2_in */
#define PB5_TC6WO1G2_IN MCHP_PINMUX(b, 5, 0x110, 5, periph)
/* pb5_tc6wo1_out */
#define PB5_TC6WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 21, periph)
/* pb5_tc7wo0g3_in */
#define PB5_TC7WO0G3_IN MCHP_PINMUX(b, 5, 0x11c, 12, periph)
/* pb5_tc7wo1g2_in */
#define PB5_TC7WO1G2_IN MCHP_PINMUX(b, 5, 0x120, 5, periph)
/* pb5_tc7wo1_out */
#define PB5_TC7WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 22, periph)
/* pb5_tcc0wo1_out */
#define PB5_TCC0WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 7, periph)
/* pb5_tcc0wo3_out */
#define PB5_TCC0WO3_OUT MCHP_PINMUX(b, 5, 0x2b4, 9, periph)
/* pb5_tcc0wo5_out */
#define PB5_TCC0WO5_OUT MCHP_PINMUX(b, 5, 0x2b4, 8, periph)
/* pb5_tcc1wo1_out */
#define PB5_TCC1WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 10, periph)
/* pb5_tcc1wo3_out */
#define PB5_TCC1WO3_OUT MCHP_PINMUX(b, 5, 0x2b4, 12, periph)
/* pb5_tcc1wo5_out */
#define PB5_TCC1WO5_OUT MCHP_PINMUX(b, 5, 0x2b4, 11, periph)
/* pb5_tcc2wo1_out */
#define PB5_TCC2WO1_OUT MCHP_PINMUX(b, 5, 0x2b4, 13, periph)
/* pb6_cclin2_in */
#define PB6_CCLIN2_IN MCHP_PINMUX(b, 6, 0xa0, 5, periph)
/* pb6_cclin5_in */
#define PB6_CCLIN5_IN MCHP_PINMUX(b, 6, 0xac, 5, periph)
/* pb6_cclout0_out */
#define PB6_CCLOUT0_OUT MCHP_PINMUX(b, 6, 0x2bc, 27, periph)
/* pb6_extint2_in */
#define PB6_EXTINT2_IN MCHP_PINMUX(b, 6, 0x8, 5, periph)
/* pb6_extint3_in */
#define PB6_EXTINT3_IN MCHP_PINMUX(b, 6, 0xc, 12, periph)
/* pb6_nmi_in */
#define PB6_NMI_IN MCHP_PINMUX(b, 6, 0x3c, 12, periph)
/* pb6_qcs_out */
#define PB6_QCS_OUT MCHP_PINMUX(b, 6, 0x2bc, 23, periph)
/* pb6_qd0_in */
#define PB6_QD0_IN MCHP_PINMUX(b, 6, 0x84, 12, periph)
/* pb6_qd0_out */
#define PB6_QD0_OUT MCHP_PINMUX(b, 6, 0x2bc, 25, periph)
/* pb6_qd1_out */
#define PB6_QD1_OUT MCHP_PINMUX(b, 6, 0x2bc, 24, periph)
/* pb6_qd3_in */
#define PB6_QD3_IN MCHP_PINMUX(b, 6, 0x90, 5, periph)
/* pb6_qd3_out */
#define PB6_QD3_OUT MCHP_PINMUX(b, 6, 0x2bc, 26, periph)
/* pb6_qsck_out */
#define PB6_QSCK_OUT MCHP_PINMUX(b, 6, 0x2c0, 7, periph)
/* pb6_refi_in */
#define PB6_REFI_IN MCHP_PINMUX(b, 6, 0x94, 6, periph)
/* pb6_refo1_out */
#define PB6_REFO1_OUT MCHP_PINMUX(b, 6, 0x2c0, 3, periph)
/* pb6_refo2_out */
#define PB6_REFO2_OUT MCHP_PINMUX(b, 6, 0x2c0, 4, periph)
/* pb6_refo3_out */
#define PB6_REFO3_OUT MCHP_PINMUX(b, 6, 0x2c0, 5, periph)
/* pb6_refo4_out */
#define PB6_REFO4_OUT MCHP_PINMUX(b, 6, 0x2c0, 6, periph)
/* pb6_scom0p0_out */
#define PB6_SCOM0P0_OUT MCHP_PINMUX(b, 6, 0x2bc, 2, periph)
/* pb6_scom0p1_in */
#define PB6_SCOM0P1_IN MCHP_PINMUX(b, 6, 0x44, 6, periph)
/* pb6_scom0p1_out */
#define PB6_SCOM0P1_OUT MCHP_PINMUX(b, 6, 0x2c0, 1, periph)
/* pb6_scom0p2_in */
#define PB6_SCOM0P2_IN MCHP_PINMUX(b, 6, 0x48, 12, periph)
/* pb6_scom0p3_out */
#define PB6_SCOM0P3_OUT MCHP_PINMUX(b, 6, 0x2bc, 3, periph)
/* pb6_scom1p0_in */
#define PB6_SCOM1P0_IN MCHP_PINMUX(b, 6, 0x50, 5, periph)
/* pb6_scom1p1_in */
#define PB6_SCOM1P1_IN MCHP_PINMUX(b, 6, 0x54, 6, periph)
/* pb6_scom1p1_out */
#define PB6_SCOM1P1_OUT MCHP_PINMUX(b, 6, 0x2c0, 2, periph)
/* pb6_scom1p2_out */
#define PB6_SCOM1P2_OUT MCHP_PINMUX(b, 6, 0x2bc, 4, periph)
/* pb6_scom1p3_out */
#define PB6_SCOM1P3_OUT MCHP_PINMUX(b, 6, 0x2bc, 6, periph)
/* pb6_tc0wo0_out */
#define PB6_TC0WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 15, periph)
/* pb6_tc0wo1g3_in */
#define PB6_TC0WO1G3_IN MCHP_PINMUX(b, 6, 0xb8, 5, periph)
/* pb6_tc0wo1g4_in */
#define PB6_TC0WO1G4_IN MCHP_PINMUX(b, 6, 0xbc, 12, periph)
/* pb6_tc1wo0_out */
#define PB6_TC1WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 16, periph)
/* pb6_tc2wo0g3_in */
#define PB6_TC2WO0G3_IN MCHP_PINMUX(b, 6, 0xcc, 5, periph)
/* pb6_tc2wo0_out */
#define PB6_TC2WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 17, periph)
/* pb6_tc2wo1g4_in */
#define PB6_TC2WO1G4_IN MCHP_PINMUX(b, 6, 0xd4, 12, periph)
/* pb6_tc3wo0g3_in */
#define PB6_TC3WO0G3_IN MCHP_PINMUX(b, 6, 0xdc, 5, periph)
/* pb6_tc3wo0_out */
#define PB6_TC3WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 18, periph)
/* pb6_tc3wo1g4_in */
#define PB6_TC3WO1G4_IN MCHP_PINMUX(b, 6, 0xe4, 12, periph)
/* pb6_tc4wo0g3_in */
#define PB6_TC4WO0G3_IN MCHP_PINMUX(b, 6, 0xec, 5, periph)
/* pb6_tc4wo0_out */
#define PB6_TC4WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 19, periph)
/* pb6_tc4wo1g4_in */
#define PB6_TC4WO1G4_IN MCHP_PINMUX(b, 6, 0xf4, 12, periph)
/* pb6_tc5wo0g3_in */
#define PB6_TC5WO0G3_IN MCHP_PINMUX(b, 6, 0xfc, 5, periph)
/* pb6_tc5wo0_out */
#define PB6_TC5WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 20, periph)
/* pb6_tc5wo1g4_in */
#define PB6_TC5WO1G4_IN MCHP_PINMUX(b, 6, 0x104, 12, periph)
/* pb6_tc6wo0g3_in */
#define PB6_TC6WO0G3_IN MCHP_PINMUX(b, 6, 0x10c, 5, periph)
/* pb6_tc6wo0_out */
#define PB6_TC6WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 21, periph)
/* pb6_tc6wo1g4_in */
#define PB6_TC6WO1G4_IN MCHP_PINMUX(b, 6, 0x114, 12, periph)
/* pb6_tc7wo0g3_in */
#define PB6_TC7WO0G3_IN MCHP_PINMUX(b, 6, 0x11c, 5, periph)
/* pb6_tc7wo0_out */
#define PB6_TC7WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 22, periph)
/* pb6_tc7wo1g4_in */
#define PB6_TC7WO1G4_IN MCHP_PINMUX(b, 6, 0x124, 12, periph)
/* pb6_tcc0wo0_out */
#define PB6_TCC0WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 8, periph)
/* pb6_tcc0wo2_out */
#define PB6_TCC0WO2_OUT MCHP_PINMUX(b, 6, 0x2bc, 7, periph)
/* pb6_tcc0wo4_out */
#define PB6_TCC0WO4_OUT MCHP_PINMUX(b, 6, 0x2bc, 9, periph)
/* pb6_tcc1wo0_out */
#define PB6_TCC1WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 11, periph)
/* pb6_tcc1wo2_out */
#define PB6_TCC1WO2_OUT MCHP_PINMUX(b, 6, 0x2bc, 10, periph)
/* pb6_tcc1wo4_out */
#define PB6_TCC1WO4_OUT MCHP_PINMUX(b, 6, 0x2bc, 12, periph)
/* pb6_tcc2wo0_out */
#define PB6_TCC2WO0_OUT MCHP_PINMUX(b, 6, 0x2bc, 13, periph)
/* pb7_cclin0_in */
#define PB7_CCLIN0_IN MCHP_PINMUX(b, 7, 0x98, 13, periph)
/* pb7_cclin3_in */
#define PB7_CCLIN3_IN MCHP_PINMUX(b, 7, 0xa4, 13, periph)
/* pb7_cclout1_out */
#define PB7_CCLOUT1_OUT MCHP_PINMUX(b, 7, 0x2c8, 27, periph)
/* pb7_extint0_in */
#define PB7_EXTINT0_IN MCHP_PINMUX(b, 7, 0x0, 13, periph)
/* pb7_extint3_in */
#define PB7_EXTINT3_IN MCHP_PINMUX(b, 7, 0xc, 5, periph)
/* pb7_nmi_in */
#define PB7_NMI_IN MCHP_PINMUX(b, 7, 0x3c, 5, periph)
/* pb7_qcs_out */
#define PB7_QCS_OUT MCHP_PINMUX(b, 7, 0x2c8, 23, periph)
/* pb7_qd0_in */
#define PB7_QD0_IN MCHP_PINMUX(b, 7, 0x84, 5, periph)
/* pb7_qd0_out */
#define PB7_QD0_OUT MCHP_PINMUX(b, 7, 0x2c8, 26, periph)
/* pb7_qd1_in */
#define PB7_QD1_IN MCHP_PINMUX(b, 7, 0x88, 13, periph)
/* pb7_qd1_out */
#define PB7_QD1_OUT MCHP_PINMUX(b, 7, 0x2c8, 25, periph)
/* pb7_qd2_out */
#define PB7_QD2_OUT MCHP_PINMUX(b, 7, 0x2c8, 24, periph)
/* pb7_qsck_out */
#define PB7_QSCK_OUT MCHP_PINMUX(b, 7, 0x2c4, 7, periph)
/* pb7_refo1_out */
#define PB7_REFO1_OUT MCHP_PINMUX(b, 7, 0x2c4, 3, periph)
/* pb7_refo2_out */
#define PB7_REFO2_OUT MCHP_PINMUX(b, 7, 0x2c4, 4, periph)
/* pb7_refo3_out */
#define PB7_REFO3_OUT MCHP_PINMUX(b, 7, 0x2c4, 5, periph)
/* pb7_refo4_out */
#define PB7_REFO4_OUT MCHP_PINMUX(b, 7, 0x2c4, 6, periph)
/* pb7_scom0p0_out */
#define PB7_SCOM0P0_OUT MCHP_PINMUX(b, 7, 0x2c8, 3, periph)
/* pb7_scom0p1_out */
#define PB7_SCOM0P1_OUT MCHP_PINMUX(b, 7, 0x2c4, 1, periph)
/* pb7_scom0p2_in */
#define PB7_SCOM0P2_IN MCHP_PINMUX(b, 7, 0x48, 5, periph)
/* pb7_scom0p2_out */
#define PB7_SCOM0P2_OUT MCHP_PINMUX(b, 7, 0x2c8, 1, periph)
/* pb7_scom0p3_in */
#define PB7_SCOM0P3_IN MCHP_PINMUX(b, 7, 0x4c, 13, periph)
/* pb7_scom1p0_out */
#define PB7_SCOM1P0_OUT MCHP_PINMUX(b, 7, 0x2c8, 6, periph)
/* pb7_scom1p1_out */
#define PB7_SCOM1P1_OUT MCHP_PINMUX(b, 7, 0x2c4, 2, periph)
/* pb7_scom1p2_in */
#define PB7_SCOM1P2_IN MCHP_PINMUX(b, 7, 0x58, 13, periph)
/* pb7_scom1p3_out */
#define PB7_SCOM1P3_OUT MCHP_PINMUX(b, 7, 0x2c8, 4, periph)
/* pb7_tc0wo0g1_in */
#define PB7_TC0WO0G1_IN MCHP_PINMUX(b, 7, 0xb0, 13, periph)
/* pb7_tc0wo0_out */
#define PB7_TC0WO0_OUT MCHP_PINMUX(b, 7, 0x2c8, 15, periph)
/* pb7_tc0wo1g4_in */
#define PB7_TC0WO1G4_IN MCHP_PINMUX(b, 7, 0xbc, 5, periph)
/* pb7_tc1wo0g1_in */
#define PB7_TC1WO0G1_IN MCHP_PINMUX(b, 7, 0xc0, 13, periph)
/* pb7_tc1wo1_out */
#define PB7_TC1WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 16, periph)
/* pb7_tc2wo0g1_in */
#define PB7_TC2WO0G1_IN MCHP_PINMUX(b, 7, 0xc8, 13, periph)
/* pb7_tc2wo1g4_in */
#define PB7_TC2WO1G4_IN MCHP_PINMUX(b, 7, 0xd4, 5, periph)
/* pb7_tc2wo1_out */
#define PB7_TC2WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 17, periph)
/* pb7_tc3wo0g1_in */
#define PB7_TC3WO0G1_IN MCHP_PINMUX(b, 7, 0xd8, 13, periph)
/* pb7_tc3wo1g4_in */
#define PB7_TC3WO1G4_IN MCHP_PINMUX(b, 7, 0xe4, 5, periph)
/* pb7_tc3wo1_out */
#define PB7_TC3WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 18, periph)
/* pb7_tc4wo0g1_in */
#define PB7_TC4WO0G1_IN MCHP_PINMUX(b, 7, 0xe8, 13, periph)
/* pb7_tc4wo1g4_in */
#define PB7_TC4WO1G4_IN MCHP_PINMUX(b, 7, 0xf4, 5, periph)
/* pb7_tc4wo1_out */
#define PB7_TC4WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 19, periph)
/* pb7_tc5wo0g1_in */
#define PB7_TC5WO0G1_IN MCHP_PINMUX(b, 7, 0xf8, 13, periph)
/* pb7_tc5wo1g4_in */
#define PB7_TC5WO1G4_IN MCHP_PINMUX(b, 7, 0x104, 5, periph)
/* pb7_tc5wo1_out */
#define PB7_TC5WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 20, periph)
/* pb7_tc6wo0g1_in */
#define PB7_TC6WO0G1_IN MCHP_PINMUX(b, 7, 0x108, 13, periph)
/* pb7_tc6wo1g4_in */
#define PB7_TC6WO1G4_IN MCHP_PINMUX(b, 7, 0x114, 5, periph)
/* pb7_tc6wo1_out */
#define PB7_TC6WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 21, periph)
/* pb7_tc7wo0g1_in */
#define PB7_TC7WO0G1_IN MCHP_PINMUX(b, 7, 0x118, 13, periph)
/* pb7_tc7wo1g4_in */
#define PB7_TC7WO1G4_IN MCHP_PINMUX(b, 7, 0x124, 5, periph)
/* pb7_tc7wo1_out */
#define PB7_TC7WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 22, periph)
/* pb7_tcc0wo1_out */
#define PB7_TCC0WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 8, periph)
/* pb7_tcc0wo3_out */
#define PB7_TCC0WO3_OUT MCHP_PINMUX(b, 7, 0x2c8, 7, periph)
/* pb7_tcc0wo5_out */
#define PB7_TCC0WO5_OUT MCHP_PINMUX(b, 7, 0x2c8, 9, periph)
/* pb7_tcc1wo1_out */
#define PB7_TCC1WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 11, periph)
/* pb7_tcc1wo3_out */
#define PB7_TCC1WO3_OUT MCHP_PINMUX(b, 7, 0x2c8, 10, periph)
/* pb7_tcc1wo5_out */
#define PB7_TCC1WO5_OUT MCHP_PINMUX(b, 7, 0x2c8, 12, periph)
/* pb7_tcc2wo1_out */
#define PB7_TCC2WO1_OUT MCHP_PINMUX(b, 7, 0x2c8, 13, periph)
/* pb8_cclin0_in */
#define PB8_CCLIN0_IN MCHP_PINMUX(b, 8, 0x98, 6, periph)
/* pb8_cclin1_in */
#define PB8_CCLIN1_IN MCHP_PINMUX(b, 8, 0x9c, 13, periph)
/* pb8_cclin3_in */
#define PB8_CCLIN3_IN MCHP_PINMUX(b, 8, 0xa4, 6, periph)
/* pb8_cclin4_in */
#define PB8_CCLIN4_IN MCHP_PINMUX(b, 8, 0xa8, 13, periph)
/* pb8_cclout1_out */
#define PB8_CCLOUT1_OUT MCHP_PINMUX(b, 8, 0x2d0, 27, periph)
/* pb8_extint0_in */
#define PB8_EXTINT0_IN MCHP_PINMUX(b, 8, 0x0, 6, periph)
/* pb8_extint1_in */
#define PB8_EXTINT1_IN MCHP_PINMUX(b, 8, 0x4, 13, periph)
/* pb8_qd0_out */
#define PB8_QD0_OUT MCHP_PINMUX(b, 8, 0x2d0, 24, periph)
/* pb8_qd1_in */
#define PB8_QD1_IN MCHP_PINMUX(b, 8, 0x88, 6, periph)
/* pb8_qd2_in */
#define PB8_QD2_IN MCHP_PINMUX(b, 8, 0x8c, 13, periph)
/* pb8_qd2_out */
#define PB8_QD2_OUT MCHP_PINMUX(b, 8, 0x2d0, 26, periph)
/* pb8_qd3_out */
#define PB8_QD3_OUT MCHP_PINMUX(b, 8, 0x2d0, 25, periph)
/* pb8_qsck_out */
#define PB8_QSCK_OUT MCHP_PINMUX(b, 8, 0x2cc, 7, periph)
/* pb8_qspics_out */
#define PB8_QSPICS_OUT MCHP_PINMUX(b, 8, 0x2d0, 23, periph)
/* pb8_refi_in */
#define PB8_REFI_IN MCHP_PINMUX(b, 8, 0x94, 7, periph)
/* pb8_refo1_out */
#define PB8_REFO1_OUT MCHP_PINMUX(b, 8, 0x2cc, 3, periph)
/* pb8_refo2_out */
#define PB8_REFO2_OUT MCHP_PINMUX(b, 8, 0x2cc, 4, periph)
/* pb8_refo3_out */
#define PB8_REFO3_OUT MCHP_PINMUX(b, 8, 0x2cc, 5, periph)
/* pb8_refo4_out */
#define PB8_REFO4_OUT MCHP_PINMUX(b, 8, 0x2cc, 6, periph)
/* pb8_scom0p0_in */
#define PB8_SCOM0P0_IN MCHP_PINMUX(b, 8, 0x40, 13, periph)
/* pb8_scom0p0_out */
#define PB8_SCOM0P0_OUT MCHP_PINMUX(b, 8, 0x2d0, 1, periph)
/* pb8_scom0p1_in */
#define PB8_SCOM0P1_IN MCHP_PINMUX(b, 8, 0x44, 7, periph)
/* pb8_scom0p1_out */
#define PB8_SCOM0P1_OUT MCHP_PINMUX(b, 8, 0x2cc, 1, periph)
/* pb8_scom0p2_out */
#define PB8_SCOM0P2_OUT MCHP_PINMUX(b, 8, 0x2d0, 3, periph)
/* pb8_scom0p3_in */
#define PB8_SCOM0P3_IN MCHP_PINMUX(b, 8, 0x4c, 6, periph)
/* pb8_scom0p3_out */
#define PB8_SCOM0P3_OUT MCHP_PINMUX(b, 8, 0x2d0, 2, periph)
/* pb8_scom1p1_in */
#define PB8_SCOM1P1_IN MCHP_PINMUX(b, 8, 0x54, 7, periph)
/* pb8_scom1p1_out */
#define PB8_SCOM1P1_OUT MCHP_PINMUX(b, 8, 0x2cc, 2, periph)
/* pb8_scom1p2_in */
#define PB8_SCOM1P2_IN MCHP_PINMUX(b, 8, 0x58, 6, periph)
/* pb8_scom1p2_out */
#define PB8_SCOM1P2_OUT MCHP_PINMUX(b, 8, 0x2d0, 6, periph)
/* pb8_scom1p3_in */
#define PB8_SCOM1P3_IN MCHP_PINMUX(b, 8, 0x5c, 13, periph)
/* pb8_scom1p3_out */
#define PB8_SCOM1P3_OUT MCHP_PINMUX(b, 8, 0x2d0, 5, periph)
/* pb8_tc0wo0g1_in */
#define PB8_TC0WO0G1_IN MCHP_PINMUX(b, 8, 0xb0, 6, periph)
/* pb8_tc0wo0g2_in */
#define PB8_TC0WO0G2_IN MCHP_PINMUX(b, 8, 0xb4, 13, periph)
/* pb8_tc0wo1_out */
#define PB8_TC0WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 15, periph)
/* pb8_tc1wo0g1_in */
#define PB8_TC1WO0G1_IN MCHP_PINMUX(b, 8, 0xc0, 6, periph)
/* pb8_tc1wo1g2_in */
#define PB8_TC1WO1G2_IN MCHP_PINMUX(b, 8, 0xc4, 13, periph)
/* pb8_tc1wo1_out */
#define PB8_TC1WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 16, periph)
/* pb8_tc2wo0g1_in */
#define PB8_TC2WO0G1_IN MCHP_PINMUX(b, 8, 0xc8, 6, periph)
/* pb8_tc2wo1g2_in */
#define PB8_TC2WO1G2_IN MCHP_PINMUX(b, 8, 0xd0, 13, periph)
/* pb8_tc2wo1_out */
#define PB8_TC2WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 17, periph)
/* pb8_tc3wo0g1_in */
#define PB8_TC3WO0G1_IN MCHP_PINMUX(b, 8, 0xd8, 6, periph)
/* pb8_tc3wo1g2_in */
#define PB8_TC3WO1G2_IN MCHP_PINMUX(b, 8, 0xe0, 13, periph)
/* pb8_tc3wo1_out */
#define PB8_TC3WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 18, periph)
/* pb8_tc4wo0g1_in */
#define PB8_TC4WO0G1_IN MCHP_PINMUX(b, 8, 0xe8, 6, periph)
/* pb8_tc4wo1g2_in */
#define PB8_TC4WO1G2_IN MCHP_PINMUX(b, 8, 0xf0, 13, periph)
/* pb8_tc4wo1_out */
#define PB8_TC4WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 19, periph)
/* pb8_tc5wo0g1_in */
#define PB8_TC5WO0G1_IN MCHP_PINMUX(b, 8, 0xf8, 6, periph)
/* pb8_tc5wo1g2_in */
#define PB8_TC5WO1G2_IN MCHP_PINMUX(b, 8, 0x100, 13, periph)
/* pb8_tc5wo1_out */
#define PB8_TC5WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 20, periph)
/* pb8_tc6wo0g1_in */
#define PB8_TC6WO0G1_IN MCHP_PINMUX(b, 8, 0x108, 6, periph)
/* pb8_tc6wo1g2_in */
#define PB8_TC6WO1G2_IN MCHP_PINMUX(b, 8, 0x110, 13, periph)
/* pb8_tc6wo1_out */
#define PB8_TC6WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 21, periph)
/* pb8_tc7wo0g1_in */
#define PB8_TC7WO0G1_IN MCHP_PINMUX(b, 8, 0x118, 6, periph)
/* pb8_tc7wo1g2_in */
#define PB8_TC7WO1G2_IN MCHP_PINMUX(b, 8, 0x120, 13, periph)
/* pb8_tc7wo1_out */
#define PB8_TC7WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 22, periph)
/* pb8_tcc0wo1_out */
#define PB8_TCC0WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 7, periph)
/* pb8_tcc0wo3_out */
#define PB8_TCC0WO3_OUT MCHP_PINMUX(b, 8, 0x2d0, 9, periph)
/* pb8_tcc0wo5_out */
#define PB8_TCC0WO5_OUT MCHP_PINMUX(b, 8, 0x2d0, 8, periph)
/* pb8_tcc1wo1_out */
#define PB8_TCC1WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 10, periph)
/* pb8_tcc1wo3_out */
#define PB8_TCC1WO3_OUT MCHP_PINMUX(b, 8, 0x2d0, 12, periph)
/* pb8_tcc1wo5_out */
#define PB8_TCC1WO5_OUT MCHP_PINMUX(b, 8, 0x2d0, 11, periph)
/* pb8_tcc2wo1_out */
#define PB8_TCC2WO1_OUT MCHP_PINMUX(b, 8, 0x2d0, 13, periph)
/* pb9_cclin1_in */
#define PB9_CCLIN1_IN MCHP_PINMUX(b, 9, 0x9c, 6, periph)
/* pb9_cclin2_in */
#define PB9_CCLIN2_IN MCHP_PINMUX(b, 9, 0xa0, 13, periph)
/* pb9_cclin4_in */
#define PB9_CCLIN4_IN MCHP_PINMUX(b, 9, 0xa8, 6, periph)
/* pb9_cclin5_in */
#define PB9_CCLIN5_IN MCHP_PINMUX(b, 9, 0xac, 13, periph)
/* pb9_cclout0_out */
#define PB9_CCLOUT0_OUT MCHP_PINMUX(b, 9, 0x2d8, 27, periph)
/* pb9_extint1_in */
#define PB9_EXTINT1_IN MCHP_PINMUX(b, 9, 0x4, 6, periph)
/* pb9_extint2_in */
#define PB9_EXTINT2_IN MCHP_PINMUX(b, 9, 0x8, 13, periph)
/* pb9_qcs_out */
#define PB9_QCS_OUT MCHP_PINMUX(b, 9, 0x2d8, 23, periph)
/* pb9_qd0_out */
#define PB9_QD0_OUT MCHP_PINMUX(b, 9, 0x2d8, 25, periph)
/* pb9_qd1_out */
#define PB9_QD1_OUT MCHP_PINMUX(b, 9, 0x2d8, 24, periph)
/* pb9_qd2_in */
#define PB9_QD2_IN MCHP_PINMUX(b, 9, 0x8c, 6, periph)
/* pb9_qd3_in */
#define PB9_QD3_IN MCHP_PINMUX(b, 9, 0x90, 13, periph)
/* pb9_qd3_out */
#define PB9_QD3_OUT MCHP_PINMUX(b, 9, 0x2d8, 26, periph)
/* pb9_qsck_out */
#define PB9_QSCK_OUT MCHP_PINMUX(b, 9, 0x2d4, 7, periph)
/* pb9_refi_in */
#define PB9_REFI_IN MCHP_PINMUX(b, 9, 0x94, 8, periph)
/* pb9_refo1_out */
#define PB9_REFO1_OUT MCHP_PINMUX(b, 9, 0x2d4, 3, periph)
/* pb9_refo2_out */
#define PB9_REFO2_OUT MCHP_PINMUX(b, 9, 0x2d4, 4, periph)
/* pb9_refo3_out */
#define PB9_REFO3_OUT MCHP_PINMUX(b, 9, 0x2d4, 5, periph)
/* pb9_refo4_out */
#define PB9_REFO4_OUT MCHP_PINMUX(b, 9, 0x2d4, 6, periph)
/* pb9_scom0p0_in */
#define PB9_SCOM0P0_IN MCHP_PINMUX(b, 9, 0x40, 6, periph)
/* pb9_scom0p0_out */
#define PB9_SCOM0P0_OUT MCHP_PINMUX(b, 9, 0x2d8, 2, periph)
/* pb9_scom0p1_in */
#define PB9_SCOM0P1_IN MCHP_PINMUX(b, 9, 0x44, 8, periph)
/* pb9_scom0p1_out */
#define PB9_SCOM0P1_OUT MCHP_PINMUX(b, 9, 0x2d4, 1, periph)
/* pb9_scom0p3_out */
#define PB9_SCOM0P3_OUT MCHP_PINMUX(b, 9, 0x2d8, 3, periph)
/* pb9_scom1p0_in */
#define PB9_SCOM1P0_IN MCHP_PINMUX(b, 9, 0x50, 13, periph)
/* pb9_scom1p1_in */
#define PB9_SCOM1P1_IN MCHP_PINMUX(b, 9, 0x54, 8, periph)
/* pb9_scom1p1_out */
#define PB9_SCOM1P1_OUT MCHP_PINMUX(b, 9, 0x2d4, 2, periph)
/* pb9_scom1p2_out */
#define PB9_SCOM1P2_OUT MCHP_PINMUX(b, 9, 0x2d8, 4, periph)
/* pb9_scom1p3_in */
#define PB9_SCOM1P3_IN MCHP_PINMUX(b, 9, 0x5c, 6, periph)
/* pb9_scom1p3_out */
#define PB9_SCOM1P3_OUT MCHP_PINMUX(b, 9, 0x2d8, 6, periph)
/* pb9_tc0wo0g2_in */
#define PB9_TC0WO0G2_IN MCHP_PINMUX(b, 9, 0xb4, 6, periph)
/* pb9_tc0wo0_out */
#define PB9_TC0WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 15, periph)
/* pb9_tc0wo1g3_in */
#define PB9_TC0WO1G3_IN MCHP_PINMUX(b, 9, 0xb8, 13, periph)
/* pb9_tc1wo0_out */
#define PB9_TC1WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 16, periph)
/* pb9_tc1wo1g2_in */
#define PB9_TC1WO1G2_IN MCHP_PINMUX(b, 9, 0xc4, 6, periph)
/* pb9_tc2wo0g3_in */
#define PB9_TC2WO0G3_IN MCHP_PINMUX(b, 9, 0xcc, 13, periph)
/* pb9_tc2wo0_out */
#define PB9_TC2WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 17, periph)
/* pb9_tc2wo1g2_in */
#define PB9_TC2WO1G2_IN MCHP_PINMUX(b, 9, 0xd0, 6, periph)
/* pb9_tc3wo0g3_in */
#define PB9_TC3WO0G3_IN MCHP_PINMUX(b, 9, 0xdc, 13, periph)
/* pb9_tc3wo0_out */
#define PB9_TC3WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 18, periph)
/* pb9_tc3wo1g2_in */
#define PB9_TC3WO1G2_IN MCHP_PINMUX(b, 9, 0xe0, 6, periph)
/* pb9_tc4wo0g3_in */
#define PB9_TC4WO0G3_IN MCHP_PINMUX(b, 9, 0xec, 13, periph)
/* pb9_tc4wo0_out */
#define PB9_TC4WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 19, periph)
/* pb9_tc4wo1g2_in */
#define PB9_TC4WO1G2_IN MCHP_PINMUX(b, 9, 0xf0, 6, periph)
/* pb9_tc5wo0g3_in */
#define PB9_TC5WO0G3_IN MCHP_PINMUX(b, 9, 0xfc, 13, periph)
/* pb9_tc5wo0_out */
#define PB9_TC5WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 20, periph)
/* pb9_tc5wo1g2_in */
#define PB9_TC5WO1G2_IN MCHP_PINMUX(b, 9, 0x100, 6, periph)
/* pb9_tc6wo0g3_in */
#define PB9_TC6WO0G3_IN MCHP_PINMUX(b, 9, 0x10c, 13, periph)
/* pb9_tc6wo0_out */
#define PB9_TC6WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 21, periph)
/* pb9_tc6wo1g2_in */
#define PB9_TC6WO1G2_IN MCHP_PINMUX(b, 9, 0x110, 6, periph)
/* pb9_tc7wo0g3_in */
#define PB9_TC7WO0G3_IN MCHP_PINMUX(b, 9, 0x11c, 13, periph)
/* pb9_tc7wo0_out */
#define PB9_TC7WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 22, periph)
/* pb9_tc7wo1g2_in */
#define PB9_TC7WO1G2_IN MCHP_PINMUX(b, 9, 0x120, 6, periph)
/* pb9_tcc0wo0_out */
#define PB9_TCC0WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 8, periph)
/* pb9_tcc0wo2_out */
#define PB9_TCC0WO2_OUT MCHP_PINMUX(b, 9, 0x2d8, 7, periph)
/* pb9_tcc0wo4_out */
#define PB9_TCC0WO4_OUT MCHP_PINMUX(b, 9, 0x2d8, 9, periph)
/* pb9_tcc1wo0_out */
#define PB9_TCC1WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 11, periph)
/* pb9_tcc1wo2_out */
#define PB9_TCC1WO2_OUT MCHP_PINMUX(b, 9, 0x2d8, 10, periph)
/* pb9_tcc1wo4_out */
#define PB9_TCC1WO4_OUT MCHP_PINMUX(b, 9, 0x2d8, 12, periph)
/* pb9_tcc2wo0_out */
#define PB9_TCC2WO0_OUT MCHP_PINMUX(b, 9, 0x2d8, 13, periph)
/* pb10_cclin2_in */
#define PB10_CCLIN2_IN MCHP_PINMUX(b, 10, 0xa0, 6, periph)
/* pb10_cclin5_in */
#define PB10_CCLIN5_IN MCHP_PINMUX(b, 10, 0xac, 6, periph)
/* pb10_cclout0_out */
#define PB10_CCLOUT0_OUT MCHP_PINMUX(b, 10, 0x2dc, 27, periph)
/* pb10_cclout1_out */
#define PB10_CCLOUT1_OUT MCHP_PINMUX(b, 10, 0x2e0, 27, periph)
/* pb10_extint2_in */
#define PB10_EXTINT2_IN MCHP_PINMUX(b, 10, 0x8, 6, periph)
/* pb10_extint3_in */
#define PB10_EXTINT3_IN MCHP_PINMUX(b, 10, 0xc, 13, periph)
/* pb10_nmi_in */
#define PB10_NMI_IN MCHP_PINMUX(b, 10, 0x3c, 13, periph)
/* pb10_qcs_out */
#define PB10_QCS_OUT MCHP_PINMUX(b, 10, 0x2dc, 23, periph)
/* pb10_qd0_in */
#define PB10_QD0_IN MCHP_PINMUX(b, 10, 0x84, 13, periph)
/* pb10_qd0_out */
#define PB10_QD0_OUT MCHP_PINMUX(b, 10, 0x2dc, 25, periph)
/* pb10_qd1_out */
#define PB10_QD1_OUT MCHP_PINMUX(b, 10, 0x2dc, 24, periph)
/* pb10_qd2_out */
#define PB10_QD2_OUT MCHP_PINMUX(b, 10, 0x2e0, 24, periph)
/* pb10_qd3_in */
#define PB10_QD3_IN MCHP_PINMUX(b, 10, 0x90, 6, periph)
/* pb10_qd3_out */
#define PB10_QD3_OUT MCHP_PINMUX(b, 10, 0x2dc, 26, periph)
/* pb10_scom0p0_out */
#define PB10_SCOM0P0_OUT MCHP_PINMUX(b, 10, 0x2dc, 2, periph)
/* pb10_scom0p2_in */
#define PB10_SCOM0P2_IN MCHP_PINMUX(b, 10, 0x48, 13, periph)
/* pb10_scom0p2_out */
#define PB10_SCOM0P2_OUT MCHP_PINMUX(b, 10, 0x2e0, 1, periph)
/* pb10_scom0p3_out */
#define PB10_SCOM0P3_OUT MCHP_PINMUX(b, 10, 0x2dc, 3, periph)
/* pb10_scom1p0_in */
#define PB10_SCOM1P0_IN MCHP_PINMUX(b, 10, 0x50, 6, periph)
/* pb10_scom1p0_out */
#define PB10_SCOM1P0_OUT MCHP_PINMUX(b, 10, 0x2e0, 6, periph)
/* pb10_scom1p2_out */
#define PB10_SCOM1P2_OUT MCHP_PINMUX(b, 10, 0x2dc, 4, periph)
/* pb10_scom1p3_out */
#define PB10_SCOM1P3_OUT MCHP_PINMUX(b, 10, 0x2dc, 6, periph)
/* pb10_tc0wo0_out */
#define PB10_TC0WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 15, periph)
/* pb10_tc0wo1g3_in */
#define PB10_TC0WO1G3_IN MCHP_PINMUX(b, 10, 0xb8, 6, periph)
/* pb10_tc0wo1g4_in */
#define PB10_TC0WO1G4_IN MCHP_PINMUX(b, 10, 0xbc, 13, periph)
/* pb10_tc1wo0_out */
#define PB10_TC1WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 16, periph)
/* pb10_tc1wo1_out */
#define PB10_TC1WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 16, periph)
/* pb10_tc2wo0g3_in */
#define PB10_TC2WO0G3_IN MCHP_PINMUX(b, 10, 0xcc, 6, periph)
/* pb10_tc2wo0_out */
#define PB10_TC2WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 17, periph)
/* pb10_tc2wo1g4_in */
#define PB10_TC2WO1G4_IN MCHP_PINMUX(b, 10, 0xd4, 13, periph)
/* pb10_tc2wo1_out */
#define PB10_TC2WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 17, periph)
/* pb10_tc3wo0g3_in */
#define PB10_TC3WO0G3_IN MCHP_PINMUX(b, 10, 0xdc, 6, periph)
/* pb10_tc3wo0_out */
#define PB10_TC3WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 18, periph)
/* pb10_tc3wo1g4_in */
#define PB10_TC3WO1G4_IN MCHP_PINMUX(b, 10, 0xe4, 13, periph)
/* pb10_tc3wo1_out */
#define PB10_TC3WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 18, periph)
/* pb10_tc4wo0g3_in */
#define PB10_TC4WO0G3_IN MCHP_PINMUX(b, 10, 0xec, 6, periph)
/* pb10_tc4wo0_out */
#define PB10_TC4WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 19, periph)
/* pb10_tc4wo1g4_in */
#define PB10_TC4WO1G4_IN MCHP_PINMUX(b, 10, 0xf4, 13, periph)
/* pb10_tc4wo1_out */
#define PB10_TC4WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 19, periph)
/* pb10_tc5wo0g3_in */
#define PB10_TC5WO0G3_IN MCHP_PINMUX(b, 10, 0xfc, 6, periph)
/* pb10_tc5wo0_out */
#define PB10_TC5WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 20, periph)
/* pb10_tc5wo1g4_in */
#define PB10_TC5WO1G4_IN MCHP_PINMUX(b, 10, 0x104, 13, periph)
/* pb10_tc5wo1_out */
#define PB10_TC5WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 20, periph)
/* pb10_tc6wo0g3_in */
#define PB10_TC6WO0G3_IN MCHP_PINMUX(b, 10, 0x10c, 6, periph)
/* pb10_tc6wo0_out */
#define PB10_TC6WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 21, periph)
/* pb10_tc6wo1g4_in */
#define PB10_TC6WO1G4_IN MCHP_PINMUX(b, 10, 0x114, 13, periph)
/* pb10_tc6wo1_out */
#define PB10_TC6WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 21, periph)
/* pb10_tc7wo0g3_in */
#define PB10_TC7WO0G3_IN MCHP_PINMUX(b, 10, 0x11c, 6, periph)
/* pb10_tc7wo0_out */
#define PB10_TC7WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 22, periph)
/* pb10_tc7wo1g4_in */
#define PB10_TC7WO1G4_IN MCHP_PINMUX(b, 10, 0x124, 13, periph)
/* pb10_tc7wo1_out */
#define PB10_TC7WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 22, periph)
/* pb10_tcc0wo0_out */
#define PB10_TCC0WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 8, periph)
/* pb10_tcc0wo1_out */
#define PB10_TCC0WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 8, periph)
/* pb10_tcc0wo2_out */
#define PB10_TCC0WO2_OUT MCHP_PINMUX(b, 10, 0x2dc, 7, periph)
/* pb10_tcc0wo3_out */
#define PB10_TCC0WO3_OUT MCHP_PINMUX(b, 10, 0x2e0, 7, periph)
/* pb10_tcc0wo4_out */
#define PB10_TCC0WO4_OUT MCHP_PINMUX(b, 10, 0x2dc, 9, periph)
/* pb10_tcc0wo5_out */
#define PB10_TCC0WO5_OUT MCHP_PINMUX(b, 10, 0x2e0, 9, periph)
/* pb10_tcc1wo0_out */
#define PB10_TCC1WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 11, periph)
/* pb10_tcc1wo1_out */
#define PB10_TCC1WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 11, periph)
/* pb10_tcc1wo2_out */
#define PB10_TCC1WO2_OUT MCHP_PINMUX(b, 10, 0x2dc, 10, periph)
/* pb10_tcc1wo3_out */
#define PB10_TCC1WO3_OUT MCHP_PINMUX(b, 10, 0x2e0, 10, periph)
/* pb10_tcc1wo4_out */
#define PB10_TCC1WO4_OUT MCHP_PINMUX(b, 10, 0x2dc, 12, periph)
/* pb10_tcc1wo5_out */
#define PB10_TCC1WO5_OUT MCHP_PINMUX(b, 10, 0x2e0, 12, periph)
/* pb10_tcc2wo0_out */
#define PB10_TCC2WO0_OUT MCHP_PINMUX(b, 10, 0x2dc, 13, periph)
/* pb10_tcc2wo1_out */
#define PB10_TCC2WO1_OUT MCHP_PINMUX(b, 10, 0x2e0, 13, periph)
/* pb11_cclin0_in */
#define PB11_CCLIN0_IN MCHP_PINMUX(b, 11, 0x98, 14, periph)
/* pb11_cclin3_in */
#define PB11_CCLIN3_IN MCHP_PINMUX(b, 11, 0xa4, 14, periph)
/* pb11_cclout1_out */
#define PB11_CCLOUT1_OUT MCHP_PINMUX(b, 11, 0x2e8, 27, periph)
/* pb11_extint0_in */
#define PB11_EXTINT0_IN MCHP_PINMUX(b, 11, 0x0, 14, periph)
/* pb11_extint3_in */
#define PB11_EXTINT3_IN MCHP_PINMUX(b, 11, 0xc, 6, periph)
/* pb11_nmi_in */
#define PB11_NMI_IN MCHP_PINMUX(b, 11, 0x3c, 6, periph)
/* pb11_qcs_out */
#define PB11_QCS_OUT MCHP_PINMUX(b, 11, 0x2e8, 23, periph)
/* pb11_qd0_in */
#define PB11_QD0_IN MCHP_PINMUX(b, 11, 0x84, 6, periph)
/* pb11_qd0_out */
#define PB11_QD0_OUT MCHP_PINMUX(b, 11, 0x2e8, 26, periph)
/* pb11_qd1_in */
#define PB11_QD1_IN MCHP_PINMUX(b, 11, 0x88, 14, periph)
/* pb11_qd1_out */
#define PB11_QD1_OUT MCHP_PINMUX(b, 11, 0x2e8, 25, periph)
/* pb11_qd2_out */
#define PB11_QD2_OUT MCHP_PINMUX(b, 11, 0x2e8, 24, periph)
/* pb11_scom0p0_out */
#define PB11_SCOM0P0_OUT MCHP_PINMUX(b, 11, 0x2e8, 3, periph)
/* pb11_scom0p2_in */
#define PB11_SCOM0P2_IN MCHP_PINMUX(b, 11, 0x48, 6, periph)
/* pb11_scom0p2_out */
#define PB11_SCOM0P2_OUT MCHP_PINMUX(b, 11, 0x2e8, 1, periph)
/* pb11_scom0p3_in */
#define PB11_SCOM0P3_IN MCHP_PINMUX(b, 11, 0x4c, 14, periph)
/* pb11_scom1p0_out */
#define PB11_SCOM1P0_OUT MCHP_PINMUX(b, 11, 0x2e8, 6, periph)
/* pb11_scom1p2_in */
#define PB11_SCOM1P2_IN MCHP_PINMUX(b, 11, 0x58, 14, periph)
/* pb11_scom1p3_out */
#define PB11_SCOM1P3_OUT MCHP_PINMUX(b, 11, 0x2e8, 4, periph)
/* pb11_tc0wo0g1_in */
#define PB11_TC0WO0G1_IN MCHP_PINMUX(b, 11, 0xb0, 14, periph)
/* pb11_tc0wo0_out */
#define PB11_TC0WO0_OUT MCHP_PINMUX(b, 11, 0x2e8, 15, periph)
/* pb11_tc0wo1g4_in */
#define PB11_TC0WO1G4_IN MCHP_PINMUX(b, 11, 0xbc, 6, periph)
/* pb11_tc1wo0g1_in */
#define PB11_TC1WO0G1_IN MCHP_PINMUX(b, 11, 0xc0, 14, periph)
/* pb11_tc1wo1_out */
#define PB11_TC1WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 16, periph)
/* pb11_tc2wo0g1_in */
#define PB11_TC2WO0G1_IN MCHP_PINMUX(b, 11, 0xc8, 14, periph)
/* pb11_tc2wo1g4_in */
#define PB11_TC2WO1G4_IN MCHP_PINMUX(b, 11, 0xd4, 6, periph)
/* pb11_tc2wo1_out */
#define PB11_TC2WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 17, periph)
/* pb11_tc3wo0g1_in */
#define PB11_TC3WO0G1_IN MCHP_PINMUX(b, 11, 0xd8, 14, periph)
/* pb11_tc3wo1g4_in */
#define PB11_TC3WO1G4_IN MCHP_PINMUX(b, 11, 0xe4, 6, periph)
/* pb11_tc3wo1_out */
#define PB11_TC3WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 18, periph)
/* pb11_tc4wo0g1_in */
#define PB11_TC4WO0G1_IN MCHP_PINMUX(b, 11, 0xe8, 14, periph)
/* pb11_tc4wo1g4_in */
#define PB11_TC4WO1G4_IN MCHP_PINMUX(b, 11, 0xf4, 6, periph)
/* pb11_tc4wo1_out */
#define PB11_TC4WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 19, periph)
/* pb11_tc5wo0g1_in */
#define PB11_TC5WO0G1_IN MCHP_PINMUX(b, 11, 0xf8, 14, periph)
/* pb11_tc5wo1g4_in */
#define PB11_TC5WO1G4_IN MCHP_PINMUX(b, 11, 0x104, 6, periph)
/* pb11_tc5wo1_out */
#define PB11_TC5WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 20, periph)
/* pb11_tc6wo0g1_in */
#define PB11_TC6WO0G1_IN MCHP_PINMUX(b, 11, 0x108, 14, periph)
/* pb11_tc6wo1g4_in */
#define PB11_TC6WO1G4_IN MCHP_PINMUX(b, 11, 0x114, 6, periph)
/* pb11_tc6wo1_out */
#define PB11_TC6WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 21, periph)
/* pb11_tc7wo0g1_in */
#define PB11_TC7WO0G1_IN MCHP_PINMUX(b, 11, 0x118, 14, periph)
/* pb11_tc7wo1g4_in */
#define PB11_TC7WO1G4_IN MCHP_PINMUX(b, 11, 0x124, 6, periph)
/* pb11_tc7wo1_out */
#define PB11_TC7WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 22, periph)
/* pb11_tcc0wo1_out */
#define PB11_TCC0WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 8, periph)
/* pb11_tcc0wo3_out */
#define PB11_TCC0WO3_OUT MCHP_PINMUX(b, 11, 0x2e8, 7, periph)
/* pb11_tcc0wo5_out */
#define PB11_TCC0WO5_OUT MCHP_PINMUX(b, 11, 0x2e8, 9, periph)
/* pb11_tcc1wo1_out */
#define PB11_TCC1WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 11, periph)
/* pb11_tcc1wo3_out */
#define PB11_TCC1WO3_OUT MCHP_PINMUX(b, 11, 0x2e8, 10, periph)
/* pb11_tcc1wo5_out */
#define PB11_TCC1WO5_OUT MCHP_PINMUX(b, 11, 0x2e8, 12, periph)
/* pb11_tcc2wo1_out */
#define PB11_TCC2WO1_OUT MCHP_PINMUX(b, 11, 0x2e8, 13, periph)
/* pb12_cclin0_in */
#define PB12_CCLIN0_IN MCHP_PINMUX(b, 12, 0x98, 7, periph)
/* pb12_cclin1_in */
#define PB12_CCLIN1_IN MCHP_PINMUX(b, 12, 0x9c, 14, periph)
/* pb12_cclin3_in */
#define PB12_CCLIN3_IN MCHP_PINMUX(b, 12, 0xa4, 7, periph)
/* pb12_cclin4_in */
#define PB12_CCLIN4_IN MCHP_PINMUX(b, 12, 0xa8, 14, periph)
/* pb12_cclout1_out */
#define PB12_CCLOUT1_OUT MCHP_PINMUX(b, 12, 0x2f0, 27, periph)
/* pb12_extint0_in */
#define PB12_EXTINT0_IN MCHP_PINMUX(b, 12, 0x0, 7, periph)
/* pb12_extint1_in */
#define PB12_EXTINT1_IN MCHP_PINMUX(b, 12, 0x4, 14, periph)
/* pb12_qd0_out */
#define PB12_QD0_OUT MCHP_PINMUX(b, 12, 0x2f0, 24, periph)
/* pb12_qd1_in */
#define PB12_QD1_IN MCHP_PINMUX(b, 12, 0x88, 7, periph)
/* pb12_qd2_in */
#define PB12_QD2_IN MCHP_PINMUX(b, 12, 0x8c, 14, periph)
/* pb12_qd2_out */
#define PB12_QD2_OUT MCHP_PINMUX(b, 12, 0x2f0, 26, periph)
/* pb12_qd3_out */
#define PB12_QD3_OUT MCHP_PINMUX(b, 12, 0x2f0, 25, periph)
/* pb12_qspics_out */
#define PB12_QSPICS_OUT MCHP_PINMUX(b, 12, 0x2f0, 23, periph)
/* pb12_scom0p0_in */
#define PB12_SCOM0P0_IN MCHP_PINMUX(b, 12, 0x40, 14, periph)
/* pb12_scom0p0_out */
#define PB12_SCOM0P0_OUT MCHP_PINMUX(b, 12, 0x2f0, 1, periph)
/* pb12_scom0p2_out */
#define PB12_SCOM0P2_OUT MCHP_PINMUX(b, 12, 0x2f0, 3, periph)
/* pb12_scom0p3_in */
#define PB12_SCOM0P3_IN MCHP_PINMUX(b, 12, 0x4c, 7, periph)
/* pb12_scom0p3_out */
#define PB12_SCOM0P3_OUT MCHP_PINMUX(b, 12, 0x2f0, 2, periph)
/* pb12_scom1p2_in */
#define PB12_SCOM1P2_IN MCHP_PINMUX(b, 12, 0x58, 7, periph)
/* pb12_scom1p2_out */
#define PB12_SCOM1P2_OUT MCHP_PINMUX(b, 12, 0x2f0, 6, periph)
/* pb12_scom1p3_in */
#define PB12_SCOM1P3_IN MCHP_PINMUX(b, 12, 0x5c, 14, periph)
/* pb12_scom1p3_out */
#define PB12_SCOM1P3_OUT MCHP_PINMUX(b, 12, 0x2f0, 5, periph)
/* pb12_tc0wo0g1_in */
#define PB12_TC0WO0G1_IN MCHP_PINMUX(b, 12, 0xb0, 7, periph)
/* pb12_tc0wo0g2_in */
#define PB12_TC0WO0G2_IN MCHP_PINMUX(b, 12, 0xb4, 14, periph)
/* pb12_tc0wo1_out */
#define PB12_TC0WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 15, periph)
/* pb12_tc1wo0g1_in */
#define PB12_TC1WO0G1_IN MCHP_PINMUX(b, 12, 0xc0, 7, periph)
/* pb12_tc1wo1g2_in */
#define PB12_TC1WO1G2_IN MCHP_PINMUX(b, 12, 0xc4, 14, periph)
/* pb12_tc1wo1_out */
#define PB12_TC1WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 16, periph)
/* pb12_tc2wo0g1_in */
#define PB12_TC2WO0G1_IN MCHP_PINMUX(b, 12, 0xc8, 7, periph)
/* pb12_tc2wo1g2_in */
#define PB12_TC2WO1G2_IN MCHP_PINMUX(b, 12, 0xd0, 14, periph)
/* pb12_tc2wo1_out */
#define PB12_TC2WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 17, periph)
/* pb12_tc3wo0g1_in */
#define PB12_TC3WO0G1_IN MCHP_PINMUX(b, 12, 0xd8, 7, periph)
/* pb12_tc3wo1g2_in */
#define PB12_TC3WO1G2_IN MCHP_PINMUX(b, 12, 0xe0, 14, periph)
/* pb12_tc3wo1_out */
#define PB12_TC3WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 18, periph)
/* pb12_tc4wo0g1_in */
#define PB12_TC4WO0G1_IN MCHP_PINMUX(b, 12, 0xe8, 7, periph)
/* pb12_tc4wo1g2_in */
#define PB12_TC4WO1G2_IN MCHP_PINMUX(b, 12, 0xf0, 14, periph)
/* pb12_tc4wo1_out */
#define PB12_TC4WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 19, periph)
/* pb12_tc5wo0g1_in */
#define PB12_TC5WO0G1_IN MCHP_PINMUX(b, 12, 0xf8, 7, periph)
/* pb12_tc5wo1g2_in */
#define PB12_TC5WO1G2_IN MCHP_PINMUX(b, 12, 0x100, 14, periph)
/* pb12_tc5wo1_out */
#define PB12_TC5WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 20, periph)
/* pb12_tc6wo0g1_in */
#define PB12_TC6WO0G1_IN MCHP_PINMUX(b, 12, 0x108, 7, periph)
/* pb12_tc6wo1g2_in */
#define PB12_TC6WO1G2_IN MCHP_PINMUX(b, 12, 0x110, 14, periph)
/* pb12_tc6wo1_out */
#define PB12_TC6WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 21, periph)
/* pb12_tc7wo0g1_in */
#define PB12_TC7WO0G1_IN MCHP_PINMUX(b, 12, 0x118, 7, periph)
/* pb12_tc7wo1g2_in */
#define PB12_TC7WO1G2_IN MCHP_PINMUX(b, 12, 0x120, 14, periph)
/* pb12_tc7wo1_out */
#define PB12_TC7WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 22, periph)
/* pb12_tcc0wo1_out */
#define PB12_TCC0WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 7, periph)
/* pb12_tcc0wo3_out */
#define PB12_TCC0WO3_OUT MCHP_PINMUX(b, 12, 0x2f0, 9, periph)
/* pb12_tcc0wo5_out */
#define PB12_TCC0WO5_OUT MCHP_PINMUX(b, 12, 0x2f0, 8, periph)
/* pb12_tcc1wo1_out */
#define PB12_TCC1WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 10, periph)
/* pb12_tcc1wo3_out */
#define PB12_TCC1WO3_OUT MCHP_PINMUX(b, 12, 0x2f0, 12, periph)
/* pb12_tcc1wo5_out */
#define PB12_TCC1WO5_OUT MCHP_PINMUX(b, 12, 0x2f0, 11, periph)
/* pb12_tcc2wo1_out */
#define PB12_TCC2WO1_OUT MCHP_PINMUX(b, 12, 0x2f0, 13, periph)
/* pb13_cclin1_in */
#define PB13_CCLIN1_IN MCHP_PINMUX(b, 13, 0x9c, 7, periph)
/* pb13_cclin2_in */
#define PB13_CCLIN2_IN MCHP_PINMUX(b, 13, 0xa0, 14, periph)
/* pb13_cclin4_in */
#define PB13_CCLIN4_IN MCHP_PINMUX(b, 13, 0xa8, 7, periph)
/* pb13_cclin5_in */
#define PB13_CCLIN5_IN MCHP_PINMUX(b, 13, 0xac, 14, periph)
/* pb13_cclout0_out */
#define PB13_CCLOUT0_OUT MCHP_PINMUX(b, 13, 0x2f8, 27, periph)
/* pb13_cclout1_out */
#define PB13_CCLOUT1_OUT MCHP_PINMUX(b, 13, 0x2f4, 27, periph)
/* pb13_extint1_in */
#define PB13_EXTINT1_IN MCHP_PINMUX(b, 13, 0x4, 7, periph)
/* pb13_extint2_in */
#define PB13_EXTINT2_IN MCHP_PINMUX(b, 13, 0x8, 14, periph)
/* pb13_qcs_out */
#define PB13_QCS_OUT MCHP_PINMUX(b, 13, 0x2f8, 23, periph)
/* pb13_qd0_out */
#define PB13_QD0_OUT MCHP_PINMUX(b, 13, 0x2f4, 24, periph)
/* pb13_qd1_out */
#define PB13_QD1_OUT MCHP_PINMUX(b, 13, 0x2f8, 24, periph)
/* pb13_qd2_in */
#define PB13_QD2_IN MCHP_PINMUX(b, 13, 0x8c, 7, periph)
/* pb13_qd2_out */
#define PB13_QD2_OUT MCHP_PINMUX(b, 13, 0x2f4, 26, periph)
/* pb13_qd3_in */
#define PB13_QD3_IN MCHP_PINMUX(b, 13, 0x90, 14, periph)
/* pb13_qd3_out */
#define PB13_QD3_OUT MCHP_PINMUX(b, 13, 0x2f4, 25, periph)
/* pb13_qspics_out */
#define PB13_QSPICS_OUT MCHP_PINMUX(b, 13, 0x2f4, 23, periph)
/* pb13_scom0p0_in */
#define PB13_SCOM0P0_IN MCHP_PINMUX(b, 13, 0x40, 7, periph)
/* pb13_scom0p0_out */
#define PB13_SCOM0P0_OUT MCHP_PINMUX(b, 13, 0x2f4, 1, periph)
/* pb13_scom0p2_out */
#define PB13_SCOM0P2_OUT MCHP_PINMUX(b, 13, 0x2f4, 3, periph)
/* pb13_scom0p3_out */
#define PB13_SCOM0P3_OUT MCHP_PINMUX(b, 13, 0x2f4, 2, periph)
/* pb13_scom1p0_in */
#define PB13_SCOM1P0_IN MCHP_PINMUX(b, 13, 0x50, 14, periph)
/* pb13_scom1p2_out */
#define PB13_SCOM1P2_OUT MCHP_PINMUX(b, 13, 0x2f4, 6, periph)
/* pb13_scom1p3_in */
#define PB13_SCOM1P3_IN MCHP_PINMUX(b, 13, 0x5c, 7, periph)
/* pb13_scom1p3_out */
#define PB13_SCOM1P3_OUT MCHP_PINMUX(b, 13, 0x2f4, 5, periph)
/* pb13_tc0wo0g2_in */
#define PB13_TC0WO0G2_IN MCHP_PINMUX(b, 13, 0xb4, 7, periph)
/* pb13_tc0wo0_out */
#define PB13_TC0WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 15, periph)
/* pb13_tc0wo1g3_in */
#define PB13_TC0WO1G3_IN MCHP_PINMUX(b, 13, 0xb8, 14, periph)
/* pb13_tc0wo1_out */
#define PB13_TC0WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 15, periph)
/* pb13_tc1wo0_out */
#define PB13_TC1WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 16, periph)
/* pb13_tc1wo1g2_in */
#define PB13_TC1WO1G2_IN MCHP_PINMUX(b, 13, 0xc4, 7, periph)
/* pb13_tc1wo1_out */
#define PB13_TC1WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 16, periph)
/* pb13_tc2wo0g3_in */
#define PB13_TC2WO0G3_IN MCHP_PINMUX(b, 13, 0xcc, 14, periph)
/* pb13_tc2wo0_out */
#define PB13_TC2WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 17, periph)
/* pb13_tc2wo1g2_in */
#define PB13_TC2WO1G2_IN MCHP_PINMUX(b, 13, 0xd0, 7, periph)
/* pb13_tc2wo1_out */
#define PB13_TC2WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 17, periph)
/* pb13_tc3wo0g3_in */
#define PB13_TC3WO0G3_IN MCHP_PINMUX(b, 13, 0xdc, 14, periph)
/* pb13_tc3wo0_out */
#define PB13_TC3WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 18, periph)
/* pb13_tc3wo1g2_in */
#define PB13_TC3WO1G2_IN MCHP_PINMUX(b, 13, 0xe0, 7, periph)
/* pb13_tc3wo1_out */
#define PB13_TC3WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 18, periph)
/* pb13_tc4wo0g3_in */
#define PB13_TC4WO0G3_IN MCHP_PINMUX(b, 13, 0xec, 14, periph)
/* pb13_tc4wo0_out */
#define PB13_TC4WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 19, periph)
/* pb13_tc4wo1g2_in */
#define PB13_TC4WO1G2_IN MCHP_PINMUX(b, 13, 0xf0, 7, periph)
/* pb13_tc4wo1_out */
#define PB13_TC4WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 19, periph)
/* pb13_tc5wo0g3_in */
#define PB13_TC5WO0G3_IN MCHP_PINMUX(b, 13, 0xfc, 14, periph)
/* pb13_tc5wo0_out */
#define PB13_TC5WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 20, periph)
/* pb13_tc5wo1g2_in */
#define PB13_TC5WO1G2_IN MCHP_PINMUX(b, 13, 0x100, 7, periph)
/* pb13_tc5wo1_out */
#define PB13_TC5WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 20, periph)
/* pb13_tc6wo0g3_in */
#define PB13_TC6WO0G3_IN MCHP_PINMUX(b, 13, 0x10c, 14, periph)
/* pb13_tc6wo0_out */
#define PB13_TC6WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 21, periph)
/* pb13_tc6wo1g2_in */
#define PB13_TC6WO1G2_IN MCHP_PINMUX(b, 13, 0x110, 7, periph)
/* pb13_tc6wo1_out */
#define PB13_TC6WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 21, periph)
/* pb13_tc7wo0g3_in */
#define PB13_TC7WO0G3_IN MCHP_PINMUX(b, 13, 0x11c, 14, periph)
/* pb13_tc7wo0_out */
#define PB13_TC7WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 22, periph)
/* pb13_tc7wo1g2_in */
#define PB13_TC7WO1G2_IN MCHP_PINMUX(b, 13, 0x120, 7, periph)
/* pb13_tc7wo1_out */
#define PB13_TC7WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 22, periph)
/* pb13_tcc0wo0_out */
#define PB13_TCC0WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 8, periph)
/* pb13_tcc0wo1_out */
#define PB13_TCC0WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 7, periph)
/* pb13_tcc0wo2_out */
#define PB13_TCC0WO2_OUT MCHP_PINMUX(b, 13, 0x2f8, 7, periph)
/* pb13_tcc0wo3_out */
#define PB13_TCC0WO3_OUT MCHP_PINMUX(b, 13, 0x2f4, 9, periph)
/* pb13_tcc0wo4_out */
#define PB13_TCC0WO4_OUT MCHP_PINMUX(b, 13, 0x2f8, 9, periph)
/* pb13_tcc0wo5_out */
#define PB13_TCC0WO5_OUT MCHP_PINMUX(b, 13, 0x2f4, 8, periph)
/* pb13_tcc1wo0_out */
#define PB13_TCC1WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 11, periph)
/* pb13_tcc1wo1_out */
#define PB13_TCC1WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 10, periph)
/* pb13_tcc1wo2_out */
#define PB13_TCC1WO2_OUT MCHP_PINMUX(b, 13, 0x2f8, 10, periph)
/* pb13_tcc1wo3_out */
#define PB13_TCC1WO3_OUT MCHP_PINMUX(b, 13, 0x2f4, 12, periph)
/* pb13_tcc1wo4_out */
#define PB13_TCC1WO4_OUT MCHP_PINMUX(b, 13, 0x2f8, 12, periph)
/* pb13_tcc1wo5_out */
#define PB13_TCC1WO5_OUT MCHP_PINMUX(b, 13, 0x2f4, 11, periph)
/* pb13_tcc2wo0_out */
#define PB13_TCC2WO0_OUT MCHP_PINMUX(b, 13, 0x2f8, 13, periph)
/* pb13_tcc2wo1_out */
#define PB13_TCC2WO1_OUT MCHP_PINMUX(b, 13, 0x2f4, 13, periph)

#endif /* MICROCHIP_PIC32CX5109BZ31048_PINCTRL_H_ */