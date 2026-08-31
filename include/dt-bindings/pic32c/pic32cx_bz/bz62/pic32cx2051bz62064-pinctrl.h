/*
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_PIC32CX2051BZ62064_PINCTRL_H_
#define MICROCHIP_PIC32CX2051BZ62064_PINCTRL_H_

#include <dt-bindings/pic32c/pic32cx_bz/common/mchp_pinctrl_pinmux_pic32cxbz.h>

/* pa0_accmpten_in */
#define PA0_ACCMPTEN_IN        MCHP_PINMUX(a, 0, 0x18c, 1, periph)
/* pa0_ac_cmp0_out */
#define PA0_AC_CMP0_OUT        MCHP_PINMUX(a, 0, 0x208, 40, periph)
/* pa0_ac_cmp1_out */
#define PA0_AC_CMP1_OUT        MCHP_PINMUX(a, 0, 0x20c, 36, periph)
/* pa0_ac_cmptout_out */
#define PA0_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 0, 0x20c, 37, periph)
/* pa0_ac_cmptrdy_out */
#define PA0_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 0, 0x208, 41, periph)
/* pa0_can1rx_in */
#define PA0_CAN1RX_IN          MCHP_PINMUX(a, 0, 0x190, 19, periph)
/* pa0_can1_tx_out */
#define PA0_CAN1_TX_OUT        MCHP_PINMUX(a, 0, 0x20c, 38, periph)
/* pa0_cclin0_in */
#define PA0_CCLIN0_IN          MCHP_PINMUX(a, 0, 0xb4, 1, periph)
/* pa0_cclin1_in */
#define PA0_CCLIN1_IN          MCHP_PINMUX(a, 0, 0xb8, 24, periph)
/* pa0_cclin2_in */
#define PA0_CCLIN2_IN          MCHP_PINMUX(a, 0, 0xbc, 19, periph)
/* pa0_cclin3_in */
#define PA0_CCLIN3_IN          MCHP_PINMUX(a, 0, 0xc0, 1, periph)
/* pa0_cclin4_in */
#define PA0_CCLIN4_IN          MCHP_PINMUX(a, 0, 0xc4, 24, periph)
/* pa0_cclin5_in */
#define PA0_CCLIN5_IN          MCHP_PINMUX(a, 0, 0xc8, 19, periph)
/* pa0_cclo0_out */
#define PA0_CCLO0_OUT          MCHP_PINMUX(a, 0, 0x208, 1, periph)
/* pa0_cclo1_out */
#define PA0_CCLO1_OUT          MCHP_PINMUX(a, 0, 0x204, 1, periph)
/* pa0_coexwlanact_in */
#define PA0_COEXWLANACT_IN     MCHP_PINMUX(a, 0, 0x194, 8, periph)
/* pa0_coex_bt_state_out */
#define PA0_COEX_BT_STATE_OUT  MCHP_PINMUX(a, 0, 0x200, 37, periph)
/* pa0_coex_rf_act_out */
#define PA0_COEX_RF_ACT_OUT    MCHP_PINMUX(a, 0, 0x204, 41, periph)
/* pa0_extint0_in */
#define PA0_EXTINT0_IN         MCHP_PINMUX(a, 0, 0x0, 1, periph)
/* pa0_extint1_in */
#define PA0_EXTINT1_IN         MCHP_PINMUX(a, 0, 0x4, 24, periph)
/* pa0_extint2_in */
#define PA0_EXTINT2_IN         MCHP_PINMUX(a, 0, 0x8, 19, periph)
/* pa0_extint3_in */
#define PA0_EXTINT3_IN         MCHP_PINMUX(a, 0, 0xc, 8, periph)
/* pa0_fectrl0_out */
#define PA0_FECTRL0_OUT        MCHP_PINMUX(a, 0, 0x204, 40, periph)
/* pa0_fectrl1_out */
#define PA0_FECTRL1_OUT        MCHP_PINMUX(a, 0, 0x200, 35, periph)
/* pa0_fectrl2_out */
#define PA0_FECTRL2_OUT        MCHP_PINMUX(a, 0, 0x200, 36, periph)
/* pa0_fectrl3_out */
#define PA0_FECTRL3_OUT        MCHP_PINMUX(a, 0, 0x20c, 39, periph)
/* pa0_fectrl4_out */
#define PA0_FECTRL4_OUT        MCHP_PINMUX(a, 0, 0x208, 42, periph)
/* pa0_fectrl5_out */
#define PA0_FECTRL5_OUT        MCHP_PINMUX(a, 0, 0x20c, 40, periph)
/* pa0_nmi_in */
#define PA0_NMI_IN             MCHP_PINMUX(a, 0, 0x3c, 8, periph)
/* pa0_qd0_in */
#define PA0_QD0_IN             MCHP_PINMUX(a, 0, 0xa0, 8, periph)
/* pa0_qd0_out */
#define PA0_QD0_OUT            MCHP_PINMUX(a, 0, 0x204, 35, periph)
/* pa0_qd1_in */
#define PA0_QD1_IN             MCHP_PINMUX(a, 0, 0xa4, 1, periph)
/* pa0_qd1_out */
#define PA0_QD1_OUT            MCHP_PINMUX(a, 0, 0x200, 30, periph)
/* pa0_qd2_in */
#define PA0_QD2_IN             MCHP_PINMUX(a, 0, 0xa8, 24, periph)
/* pa0_qd2_out */
#define PA0_QD2_OUT            MCHP_PINMUX(a, 0, 0x200, 29, periph)
/* pa0_qd3_in */
#define PA0_QD3_IN             MCHP_PINMUX(a, 0, 0xac, 19, periph)
/* pa0_qd3_out */
#define PA0_QD3_OUT            MCHP_PINMUX(a, 0, 0x200, 28, periph)
/* pa0_qeiccmp0_out */
#define PA0_QEICCMP0_OUT       MCHP_PINMUX(a, 0, 0x200, 31, periph)
/* pa0_qeihome0g1_in */
#define PA0_QEIHOME0G1_IN      MCHP_PINMUX(a, 0, 0x16c, 1, periph)
/* pa0_qeihome0g2_in */
#define PA0_QEIHOME0G2_IN      MCHP_PINMUX(a, 0, 0x170, 24, periph)
/* pa0_qeiindx0g2_in */
#define PA0_QEIINDX0G2_IN      MCHP_PINMUX(a, 0, 0x174, 24, periph)
/* pa0_qeiindx0g3_in */
#define PA0_QEIINDX0G3_IN      MCHP_PINMUX(a, 0, 0x178, 19, periph)
/* pa0_qeiqea0g3_in */
#define PA0_QEIQEA0G3_IN       MCHP_PINMUX(a, 0, 0x17c, 19, periph)
/* pa0_qeiqea0g4_in */
#define PA0_QEIQEA0G4_IN       MCHP_PINMUX(a, 0, 0x180, 8, periph)
/* pa0_qeiqeb0g4_in */
#define PA0_QEIQEB0G4_IN       MCHP_PINMUX(a, 0, 0x184, 8, periph)
/* pa0_qspics_out */
#define PA0_QSPICS_OUT         MCHP_PINMUX(a, 0, 0x200, 27, periph)
/* pa0_scom0p0_in */
#define PA0_SCOM0P0_IN         MCHP_PINMUX(a, 0, 0x40, 24, periph)
/* pa0_scom0p0_out */
#define PA0_SCOM0P0_OUT        MCHP_PINMUX(a, 0, 0x204, 2, periph)
/* pa0_scom0p2_in */
#define PA0_SCOM0P2_IN         MCHP_PINMUX(a, 0, 0x48, 8, periph)
/* pa0_scom0p2_out */
#define PA0_SCOM0P2_OUT        MCHP_PINMUX(a, 0, 0x200, 2, periph)
/* pa0_scom0p3_in */
#define PA0_SCOM0P3_IN         MCHP_PINMUX(a, 0, 0x4c, 1, periph)
/* pa0_scom0p3_out */
#define PA0_SCOM0P3_OUT        MCHP_PINMUX(a, 0, 0x200, 1, periph)
/* pa0_scom1p0_in */
#define PA0_SCOM1P0_IN         MCHP_PINMUX(a, 0, 0x50, 19, periph)
/* pa0_scom1p0_out */
#define PA0_SCOM1P0_OUT        MCHP_PINMUX(a, 0, 0x200, 3, periph)
/* pa0_scom1p2_in */
#define PA0_SCOM1P2_IN         MCHP_PINMUX(a, 0, 0x58, 1, periph)
/* pa0_scom1p2_out */
#define PA0_SCOM1P2_OUT        MCHP_PINMUX(a, 0, 0x200, 4, periph)
/* pa0_scom1p3_in */
#define PA0_SCOM1P3_IN         MCHP_PINMUX(a, 0, 0x5c, 24, periph)
/* pa0_scom1p3_out */
#define PA0_SCOM1P3_OUT        MCHP_PINMUX(a, 0, 0x204, 5, periph)
/* pa0_scom2p0_in */
#define PA0_SCOM2P0_IN         MCHP_PINMUX(a, 0, 0x60, 24, periph)
/* pa0_scom2p0_out */
#define PA0_SCOM2P0_OUT        MCHP_PINMUX(a, 0, 0x204, 7, periph)
/* pa0_scom2p2_in */
#define PA0_SCOM2P2_IN         MCHP_PINMUX(a, 0, 0x68, 8, periph)
/* pa0_scom2p2_out */
#define PA0_SCOM2P2_OUT        MCHP_PINMUX(a, 0, 0x200, 6, periph)
/* pa0_scom2p3_in */
#define PA0_SCOM2P3_IN         MCHP_PINMUX(a, 0, 0x6c, 1, periph)
/* pa0_scom2p3_out */
#define PA0_SCOM2P3_OUT        MCHP_PINMUX(a, 0, 0x200, 5, periph)
/* pa0_scom3p0_in */
#define PA0_SCOM3P0_IN         MCHP_PINMUX(a, 0, 0x70, 19, periph)
/* pa0_scom3p0_out */
#define PA0_SCOM3P0_OUT        MCHP_PINMUX(a, 0, 0x200, 7, periph)
/* pa0_scom3p2_in */
#define PA0_SCOM3P2_IN         MCHP_PINMUX(a, 0, 0x78, 1, periph)
/* pa0_scom3p2_out */
#define PA0_SCOM3P2_OUT        MCHP_PINMUX(a, 0, 0x200, 8, periph)
/* pa0_scom3p3_in */
#define PA0_SCOM3P3_IN         MCHP_PINMUX(a, 0, 0x7c, 24, periph)
/* pa0_scom3p3_out */
#define PA0_SCOM3P3_OUT        MCHP_PINMUX(a, 0, 0x204, 10, periph)
/* pa0_scom4p0_in */
#define PA0_SCOM4P0_IN         MCHP_PINMUX(a, 0, 0x80, 24, periph)
/* pa0_scom4p0_out */
#define PA0_SCOM4P0_OUT        MCHP_PINMUX(a, 0, 0x204, 12, periph)
/* pa0_scom4p2_in */
#define PA0_SCOM4P2_IN         MCHP_PINMUX(a, 0, 0x88, 8, periph)
/* pa0_scom4p2_out */
#define PA0_SCOM4P2_OUT        MCHP_PINMUX(a, 0, 0x200, 10, periph)
/* pa0_scom4p3_in */
#define PA0_SCOM4P3_IN         MCHP_PINMUX(a, 0, 0x8c, 1, periph)
/* pa0_scom4p3_out */
#define PA0_SCOM4P3_OUT        MCHP_PINMUX(a, 0, 0x200, 9, periph)
/* pa0_scom5p0_in */
#define PA0_SCOM5P0_IN         MCHP_PINMUX(a, 0, 0x90, 19, periph)
/* pa0_scom5p0_out */
#define PA0_SCOM5P0_OUT        MCHP_PINMUX(a, 0, 0x200, 11, periph)
/* pa0_scom5p2_in */
#define PA0_SCOM5P2_IN         MCHP_PINMUX(a, 0, 0x98, 1, periph)
/* pa0_scom5p2_out */
#define PA0_SCOM5P2_OUT        MCHP_PINMUX(a, 0, 0x200, 12, periph)
/* pa0_scom5p3_in */
#define PA0_SCOM5P3_IN         MCHP_PINMUX(a, 0, 0x9c, 24, periph)
/* pa0_scom5p3_out */
#define PA0_SCOM5P3_OUT        MCHP_PINMUX(a, 0, 0x204, 15, periph)
/* pa0_tc0wo0g1_in */
#define PA0_TC0WO0G1_IN        MCHP_PINMUX(a, 0, 0xcc, 1, periph)
/* pa0_tc0wo0g2_in */
#define PA0_TC0WO0G2_IN        MCHP_PINMUX(a, 0, 0xd0, 24, periph)
/* pa0_tc0wo0_out */
#define PA0_TC0WO0_OUT         MCHP_PINMUX(a, 0, 0x208, 24, periph)
/* pa0_tc0wo1g3_in */
#define PA0_TC0WO1G3_IN        MCHP_PINMUX(a, 0, 0xd4, 19, periph)
/* pa0_tc0wo1g4_in */
#define PA0_TC0WO1G4_IN        MCHP_PINMUX(a, 0, 0xd8, 8, periph)
/* pa0_tc0wo1_out */
#define PA0_TC0WO1_OUT         MCHP_PINMUX(a, 0, 0x200, 18, periph)
/* pa0_tc1wo0g1_in */
#define PA0_TC1WO0G1_IN        MCHP_PINMUX(a, 0, 0xdc, 1, periph)
/* pa0_tc1wo0_out */
#define PA0_TC1WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 19, periph)
/* pa0_tc1wo1g2_in */
#define PA0_TC1WO1G2_IN        MCHP_PINMUX(a, 0, 0xe4, 24, periph)
/* pa0_tc1wo1_out */
#define PA0_TC1WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 25, periph)
/* pa0_tc2wo0g1_in */
#define PA0_TC2WO0G1_IN        MCHP_PINMUX(a, 0, 0xec, 1, periph)
/* pa0_tc2wo0g3_in */
#define PA0_TC2WO0G3_IN        MCHP_PINMUX(a, 0, 0xf0, 19, periph)
/* pa0_tc2wo0_out */
#define PA0_TC2WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 20, periph)
/* pa0_tc2wo1g2_in */
#define PA0_TC2WO1G2_IN        MCHP_PINMUX(a, 0, 0xf4, 24, periph)
/* pa0_tc2wo1g4_in */
#define PA0_TC2WO1G4_IN        MCHP_PINMUX(a, 0, 0xf8, 8, periph)
/* pa0_tc2wo1_out */
#define PA0_TC2WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 26, periph)
/* pa0_tc3wo0g1_in */
#define PA0_TC3WO0G1_IN        MCHP_PINMUX(a, 0, 0xfc, 1, periph)
/* pa0_tc3wo0g3_in */
#define PA0_TC3WO0G3_IN        MCHP_PINMUX(a, 0, 0x100, 19, periph)
/* pa0_tc3wo0_out */
#define PA0_TC3WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 21, periph)
/* pa0_tc3wo1g2_in */
#define PA0_TC3WO1G2_IN        MCHP_PINMUX(a, 0, 0x104, 24, periph)
/* pa0_tc3wo1g4_in */
#define PA0_TC3WO1G4_IN        MCHP_PINMUX(a, 0, 0x108, 8, periph)
/* pa0_tc3wo1_out */
#define PA0_TC3WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 27, periph)
/* pa0_tc4wo0g1_in */
#define PA0_TC4WO0G1_IN        MCHP_PINMUX(a, 0, 0x10c, 1, periph)
/* pa0_tc4wo0g3_in */
#define PA0_TC4WO0G3_IN        MCHP_PINMUX(a, 0, 0x110, 19, periph)
/* pa0_tc4wo0_out */
#define PA0_TC4WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 22, periph)
/* pa0_tc4wo1g2_in */
#define PA0_TC4WO1G2_IN        MCHP_PINMUX(a, 0, 0x114, 24, periph)
/* pa0_tc4wo1g4_in */
#define PA0_TC4WO1G4_IN        MCHP_PINMUX(a, 0, 0x118, 8, periph)
/* pa0_tc4wo1_out */
#define PA0_TC4WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 28, periph)
/* pa0_tc5wo0g1_in */
#define PA0_TC5WO0G1_IN        MCHP_PINMUX(a, 0, 0x11c, 1, periph)
/* pa0_tc5wo0g3_in */
#define PA0_TC5WO0G3_IN        MCHP_PINMUX(a, 0, 0x120, 19, periph)
/* pa0_tc5wo0_out */
#define PA0_TC5WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 23, periph)
/* pa0_tc5wo1g2_in */
#define PA0_TC5WO1G2_IN        MCHP_PINMUX(a, 0, 0x124, 24, periph)
/* pa0_tc5wo1g4_in */
#define PA0_TC5WO1G4_IN        MCHP_PINMUX(a, 0, 0x128, 8, periph)
/* pa0_tc5wo1_out */
#define PA0_TC5WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 29, periph)
/* pa0_tc6wo0g1_in */
#define PA0_TC6WO0G1_IN        MCHP_PINMUX(a, 0, 0x12c, 1, periph)
/* pa0_tc6wo0g3_in */
#define PA0_TC6WO0G3_IN        MCHP_PINMUX(a, 0, 0x130, 19, periph)
/* pa0_tc6wo0_out */
#define PA0_TC6WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 24, periph)
/* pa0_tc6wo1g2_in */
#define PA0_TC6WO1G2_IN        MCHP_PINMUX(a, 0, 0x134, 24, periph)
/* pa0_tc6wo1g4_in */
#define PA0_TC6WO1G4_IN        MCHP_PINMUX(a, 0, 0x138, 8, periph)
/* pa0_tc6wo1_out */
#define PA0_TC6WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 30, periph)
/* pa0_tc7wo0g1_in */
#define PA0_TC7WO0G1_IN        MCHP_PINMUX(a, 0, 0x13c, 1, periph)
/* pa0_tc7wo0g3_in */
#define PA0_TC7WO0G3_IN        MCHP_PINMUX(a, 0, 0x140, 19, periph)
/* pa0_tc7wo0_out */
#define PA0_TC7WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 25, periph)
/* pa0_tc7wo1g2_in */
#define PA0_TC7WO1G2_IN        MCHP_PINMUX(a, 0, 0x144, 24, periph)
/* pa0_tc7wo1g4_in */
#define PA0_TC7WO1G4_IN        MCHP_PINMUX(a, 0, 0x148, 8, periph)
/* pa0_tc7wo1_out */
#define PA0_TC7WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 31, periph)
/* pa0_tc8wo0g1_in */
#define PA0_TC8WO0G1_IN        MCHP_PINMUX(a, 0, 0x14c, 1, periph)
/* pa0_tc8wo0g3_in */
#define PA0_TC8WO0G3_IN        MCHP_PINMUX(a, 0, 0x150, 19, periph)
/* pa0_tc8wo0_out */
#define PA0_TC8WO0_OUT         MCHP_PINMUX(a, 0, 0x200, 26, periph)
/* pa0_tc8wo1g2_in */
#define PA0_TC8WO1G2_IN        MCHP_PINMUX(a, 0, 0x154, 24, periph)
/* pa0_tc8wo1_out */
#define PA0_TC8WO1_OUT         MCHP_PINMUX(a, 0, 0x204, 32, periph)
/* pa0_tc9wo0g2_in */
#define PA0_TC9WO0G2_IN        MCHP_PINMUX(a, 0, 0x15c, 24, periph)
/* pa0_tc9wo0g4_in */
#define PA0_TC9WO0G4_IN        MCHP_PINMUX(a, 0, 0x160, 8, periph)
/* pa0_tc9wo0_out */
#define PA0_TC9WO0_OUT         MCHP_PINMUX(a, 0, 0x204, 33, periph)
/* pa0_tc9wo1g3_in */
#define PA0_TC9WO1G3_IN        MCHP_PINMUX(a, 0, 0x164, 19, periph)
/* pa0_tc9wo1_out */
#define PA0_TC9WO1_OUT         MCHP_PINMUX(a, 0, 0x208, 33, periph)
/* pa0_tcc0wo0_out */
#define PA0_TCC0WO0_OUT        MCHP_PINMUX(a, 0, 0x200, 13, periph)
/* pa0_tcc0wo1_out */
#define PA0_TCC0WO1_OUT        MCHP_PINMUX(a, 0, 0x204, 17, periph)
/* pa0_tcc0wo2_out */
#define PA0_TCC0WO2_OUT        MCHP_PINMUX(a, 0, 0x208, 17, periph)
/* pa0_tcc0wo3_out */
#define PA0_TCC0WO3_OUT        MCHP_PINMUX(a, 0, 0x204, 19, periph)
/* pa0_tcc0wo4_out */
#define PA0_TCC0WO4_OUT        MCHP_PINMUX(a, 0, 0x200, 14, periph)
/* pa0_tcc0wo5_out */
#define PA0_TCC0WO5_OUT        MCHP_PINMUX(a, 0, 0x204, 18, periph)
/* pa0_tcc1wo0_out */
#define PA0_TCC1WO0_OUT        MCHP_PINMUX(a, 0, 0x200, 15, periph)
/* pa0_tcc1wo1_out */
#define PA0_TCC1WO1_OUT        MCHP_PINMUX(a, 0, 0x204, 20, periph)
/* pa0_tcc1wo2_out */
#define PA0_TCC1WO2_OUT        MCHP_PINMUX(a, 0, 0x208, 20, periph)
/* pa0_tcc1wo3_out */
#define PA0_TCC1WO3_OUT        MCHP_PINMUX(a, 0, 0x204, 22, periph)
/* pa0_tcc1wo4_out */
#define PA0_TCC1WO4_OUT        MCHP_PINMUX(a, 0, 0x200, 16, periph)
/* pa0_tcc1wo5_out */
#define PA0_TCC1WO5_OUT        MCHP_PINMUX(a, 0, 0x204, 21, periph)
/* pa0_tcc2wo0_out */
#define PA0_TCC2WO0_OUT        MCHP_PINMUX(a, 0, 0x200, 17, periph)
/* pa0_tcc2wo1_out */
#define PA0_TCC2WO1_OUT        MCHP_PINMUX(a, 0, 0x204, 23, periph)
/* pa0_tstbus0_out */
#define PA0_TSTBUS0_OUT        MCHP_PINMUX(a, 0, 0x200, 32, periph)
/* pa0_tstbus1_out */
#define PA0_TSTBUS1_OUT        MCHP_PINMUX(a, 0, 0x208, 38, periph)
/* pa0_tstbus2_out */
#define PA0_TSTBUS2_OUT        MCHP_PINMUX(a, 0, 0x20c, 34, periph)
/* pa0_tstbus4_out */
#define PA0_TSTBUS4_OUT        MCHP_PINMUX(a, 0, 0x200, 33, periph)
/* pa0_tstbus5_out */
#define PA0_TSTBUS5_OUT        MCHP_PINMUX(a, 0, 0x204, 38, periph)
/* pa0_tstbus6_out */
#define PA0_TSTBUS6_OUT        MCHP_PINMUX(a, 0, 0x20c, 35, periph)
/* pa0_tstbus8_out */
#define PA0_TSTBUS8_OUT        MCHP_PINMUX(a, 0, 0x200, 34, periph)
/* pa0_tstbus9_out */
#define PA0_TSTBUS9_OUT        MCHP_PINMUX(a, 0, 0x204, 39, periph)
/* pa0_tstbus10_out */
#define PA0_TSTBUS10_OUT       MCHP_PINMUX(a, 0, 0x208, 39, periph)
/* pa1_ac_cmp0_out */
#define PA1_AC_CMP0_OUT        MCHP_PINMUX(a, 1, 0x214, 40, periph)
/* pa1_ac_cmp1_out */
#define PA1_AC_CMP1_OUT        MCHP_PINMUX(a, 1, 0x218, 36, periph)
/* pa1_ac_cmptout_out */
#define PA1_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 1, 0x218, 37, periph)
/* pa1_ac_cmptrdy_out */
#define PA1_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 1, 0x214, 41, periph)
/* pa1_can1rx_in */
#define PA1_CAN1RX_IN          MCHP_PINMUX(a, 1, 0x190, 23, periph)
/* pa1_can1_tx_out */
#define PA1_CAN1_TX_OUT        MCHP_PINMUX(a, 1, 0x218, 38, periph)
/* pa1_cclin1_in */
#define PA1_CCLIN1_IN          MCHP_PINMUX(a, 1, 0xb8, 1, periph)
/* pa1_cclin2_in */
#define PA1_CCLIN2_IN          MCHP_PINMUX(a, 1, 0xbc, 23, periph)
/* pa1_cclin4_in */
#define PA1_CCLIN4_IN          MCHP_PINMUX(a, 1, 0xc4, 1, periph)
/* pa1_cclin5_in */
#define PA1_CCLIN5_IN          MCHP_PINMUX(a, 1, 0xc8, 23, periph)
/* pa1_cclo0_out */
#define PA1_CCLO0_OUT          MCHP_PINMUX(a, 1, 0x214, 1, periph)
/* pa1_cclo1_out */
#define PA1_CCLO1_OUT          MCHP_PINMUX(a, 1, 0x210, 1, periph)
/* pa1_coexwlanact_in */
#define PA1_COEXWLANACT_IN     MCHP_PINMUX(a, 1, 0x194, 17, periph)
/* pa1_coex_rf_act_out */
#define PA1_COEX_RF_ACT_OUT    MCHP_PINMUX(a, 1, 0x210, 41, periph)
/* pa1_extint1_in */
#define PA1_EXTINT1_IN         MCHP_PINMUX(a, 1, 0x4, 1, periph)
/* pa1_extint2_in */
#define PA1_EXTINT2_IN         MCHP_PINMUX(a, 1, 0x8, 23, periph)
/* pa1_extint3_in */
#define PA1_EXTINT3_IN         MCHP_PINMUX(a, 1, 0xc, 17, periph)
/* pa1_fectrl0_out */
#define PA1_FECTRL0_OUT        MCHP_PINMUX(a, 1, 0x210, 40, periph)
/* pa1_fectrl3_out */
#define PA1_FECTRL3_OUT        MCHP_PINMUX(a, 1, 0x218, 39, periph)
/* pa1_fectrl4_out */
#define PA1_FECTRL4_OUT        MCHP_PINMUX(a, 1, 0x214, 42, periph)
/* pa1_fectrl5_out */
#define PA1_FECTRL5_OUT        MCHP_PINMUX(a, 1, 0x218, 40, periph)
/* pa1_gmac_tsucomp_out */
#define PA1_GMAC_TSUCOMP_OUT   MCHP_PINMUX(a, 1, 0x21c, 14, periph)
/* pa1_nmi_in */
#define PA1_NMI_IN             MCHP_PINMUX(a, 1, 0x3c, 17, periph)
/* pa1_qd0_in */
#define PA1_QD0_IN             MCHP_PINMUX(a, 1, 0xa0, 17, periph)
/* pa1_qd0_out */
#define PA1_QD0_OUT            MCHP_PINMUX(a, 1, 0x210, 35, periph)
/* pa1_qd1_out */
#define PA1_QD1_OUT            MCHP_PINMUX(a, 1, 0x214, 35, periph)
/* pa1_qd2_in */
#define PA1_QD2_IN             MCHP_PINMUX(a, 1, 0xa8, 1, periph)
/* pa1_qd2_out */
#define PA1_QD2_OUT            MCHP_PINMUX(a, 1, 0x210, 37, periph)
/* pa1_qd3_in */
#define PA1_QD3_IN             MCHP_PINMUX(a, 1, 0xac, 23, periph)
/* pa1_qd3_out */
#define PA1_QD3_OUT            MCHP_PINMUX(a, 1, 0x210, 36, periph)
/* pa1_qeiccmp0_out */
#define PA1_QEICCMP0_OUT       MCHP_PINMUX(a, 1, 0x21c, 13, periph)
/* pa1_qeihome0g2_in */
#define PA1_QEIHOME0G2_IN      MCHP_PINMUX(a, 1, 0x170, 1, periph)
/* pa1_qeiindx0g2_in */
#define PA1_QEIINDX0G2_IN      MCHP_PINMUX(a, 1, 0x174, 1, periph)
/* pa1_qeiindx0g3_in */
#define PA1_QEIINDX0G3_IN      MCHP_PINMUX(a, 1, 0x178, 23, periph)
/* pa1_qeiqea0g3_in */
#define PA1_QEIQEA0G3_IN       MCHP_PINMUX(a, 1, 0x17c, 23, periph)
/* pa1_qeiqea0g4_in */
#define PA1_QEIQEA0G4_IN       MCHP_PINMUX(a, 1, 0x180, 17, periph)
/* pa1_qeiqeb0g4_in */
#define PA1_QEIQEB0G4_IN       MCHP_PINMUX(a, 1, 0x184, 17, periph)
/* pa1_qeiqeb0g5_in */
#define PA1_QEIQEB0G5_IN       MCHP_PINMUX(a, 1, 0x188, 7, periph)
/* pa1_qspics_out */
#define PA1_QSPICS_OUT         MCHP_PINMUX(a, 1, 0x210, 34, periph)
/* pa1_scom0p0_in */
#define PA1_SCOM0P0_IN         MCHP_PINMUX(a, 1, 0x40, 1, periph)
/* pa1_scom0p0_out */
#define PA1_SCOM0P0_OUT        MCHP_PINMUX(a, 1, 0x210, 2, periph)
/* pa1_scom0p2_in */
#define PA1_SCOM0P2_IN         MCHP_PINMUX(a, 1, 0x48, 17, periph)
/* pa1_scom0p2_out */
#define PA1_SCOM0P2_OUT        MCHP_PINMUX(a, 1, 0x210, 4, periph)
/* pa1_scom0p3_out */
#define PA1_SCOM0P3_OUT        MCHP_PINMUX(a, 1, 0x210, 3, periph)
/* pa1_scom1p0_in */
#define PA1_SCOM1P0_IN         MCHP_PINMUX(a, 1, 0x50, 23, periph)
/* pa1_scom1p0_out */
#define PA1_SCOM1P0_OUT        MCHP_PINMUX(a, 1, 0x214, 5, periph)
/* pa1_scom1p2_out */
#define PA1_SCOM1P2_OUT        MCHP_PINMUX(a, 1, 0x210, 6, periph)
/* pa1_scom1p3_in */
#define PA1_SCOM1P3_IN         MCHP_PINMUX(a, 1, 0x5c, 1, periph)
/* pa1_scom1p3_out */
#define PA1_SCOM1P3_OUT        MCHP_PINMUX(a, 1, 0x210, 5, periph)
/* pa1_scom2p0_in */
#define PA1_SCOM2P0_IN         MCHP_PINMUX(a, 1, 0x60, 1, periph)
/* pa1_scom2p0_out */
#define PA1_SCOM2P0_OUT        MCHP_PINMUX(a, 1, 0x210, 7, periph)
/* pa1_scom2p2_in */
#define PA1_SCOM2P2_IN         MCHP_PINMUX(a, 1, 0x68, 17, periph)
/* pa1_scom2p2_out */
#define PA1_SCOM2P2_OUT        MCHP_PINMUX(a, 1, 0x210, 9, periph)
/* pa1_scom2p3_out */
#define PA1_SCOM2P3_OUT        MCHP_PINMUX(a, 1, 0x210, 8, periph)
/* pa1_scom3p0_in */
#define PA1_SCOM3P0_IN         MCHP_PINMUX(a, 1, 0x70, 23, periph)
/* pa1_scom3p0_out */
#define PA1_SCOM3P0_OUT        MCHP_PINMUX(a, 1, 0x214, 10, periph)
/* pa1_scom3p2_out */
#define PA1_SCOM3P2_OUT        MCHP_PINMUX(a, 1, 0x210, 11, periph)
/* pa1_scom3p3_in */
#define PA1_SCOM3P3_IN         MCHP_PINMUX(a, 1, 0x7c, 1, periph)
/* pa1_scom3p3_out */
#define PA1_SCOM3P3_OUT        MCHP_PINMUX(a, 1, 0x210, 10, periph)
/* pa1_scom4p0_in */
#define PA1_SCOM4P0_IN         MCHP_PINMUX(a, 1, 0x80, 1, periph)
/* pa1_scom4p0_out */
#define PA1_SCOM4P0_OUT        MCHP_PINMUX(a, 1, 0x210, 12, periph)
/* pa1_scom4p2_in */
#define PA1_SCOM4P2_IN         MCHP_PINMUX(a, 1, 0x88, 17, periph)
/* pa1_scom4p2_out */
#define PA1_SCOM4P2_OUT        MCHP_PINMUX(a, 1, 0x210, 14, periph)
/* pa1_scom4p3_out */
#define PA1_SCOM4P3_OUT        MCHP_PINMUX(a, 1, 0x210, 13, periph)
/* pa1_scom5p0_in */
#define PA1_SCOM5P0_IN         MCHP_PINMUX(a, 1, 0x90, 23, periph)
/* pa1_scom5p0_out */
#define PA1_SCOM5P0_OUT        MCHP_PINMUX(a, 1, 0x214, 15, periph)
/* pa1_scom5p2_out */
#define PA1_SCOM5P2_OUT        MCHP_PINMUX(a, 1, 0x210, 16, periph)
/* pa1_scom5p3_in */
#define PA1_SCOM5P3_IN         MCHP_PINMUX(a, 1, 0x9c, 1, periph)
/* pa1_scom5p3_out */
#define PA1_SCOM5P3_OUT        MCHP_PINMUX(a, 1, 0x210, 15, periph)
/* pa1_tc0wo0g2_in */
#define PA1_TC0WO0G2_IN        MCHP_PINMUX(a, 1, 0xd0, 1, periph)
/* pa1_tc0wo0_out */
#define PA1_TC0WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 24, periph)
/* pa1_tc0wo1g3_in */
#define PA1_TC0WO1G3_IN        MCHP_PINMUX(a, 1, 0xd4, 23, periph)
/* pa1_tc0wo1g4_in */
#define PA1_TC0WO1G4_IN        MCHP_PINMUX(a, 1, 0xd8, 17, periph)
/* pa1_tc0wo1_out */
#define PA1_TC0WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 24, periph)
/* pa1_tc1wo0_out */
#define PA1_TC1WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 25, periph)
/* pa1_tc1wo1g2_in */
#define PA1_TC1WO1G2_IN        MCHP_PINMUX(a, 1, 0xe4, 1, periph)
/* pa1_tc1wo1_out */
#define PA1_TC1WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 25, periph)
/* pa1_tc2wo0g3_in */
#define PA1_TC2WO0G3_IN        MCHP_PINMUX(a, 1, 0xf0, 23, periph)
/* pa1_tc2wo0_out */
#define PA1_TC2WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 26, periph)
/* pa1_tc2wo1g2_in */
#define PA1_TC2WO1G2_IN        MCHP_PINMUX(a, 1, 0xf4, 1, periph)
/* pa1_tc2wo1g4_in */
#define PA1_TC2WO1G4_IN        MCHP_PINMUX(a, 1, 0xf8, 17, periph)
/* pa1_tc2wo1_out */
#define PA1_TC2WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 26, periph)
/* pa1_tc3wo0g3_in */
#define PA1_TC3WO0G3_IN        MCHP_PINMUX(a, 1, 0x100, 23, periph)
/* pa1_tc3wo0_out */
#define PA1_TC3WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 27, periph)
/* pa1_tc3wo1g2_in */
#define PA1_TC3WO1G2_IN        MCHP_PINMUX(a, 1, 0x104, 1, periph)
/* pa1_tc3wo1g4_in */
#define PA1_TC3WO1G4_IN        MCHP_PINMUX(a, 1, 0x108, 17, periph)
/* pa1_tc3wo1_out */
#define PA1_TC3WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 27, periph)
/* pa1_tc4wo0g3_in */
#define PA1_TC4WO0G3_IN        MCHP_PINMUX(a, 1, 0x110, 23, periph)
/* pa1_tc4wo0_out */
#define PA1_TC4WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 28, periph)
/* pa1_tc4wo1g2_in */
#define PA1_TC4WO1G2_IN        MCHP_PINMUX(a, 1, 0x114, 1, periph)
/* pa1_tc4wo1g4_in */
#define PA1_TC4WO1G4_IN        MCHP_PINMUX(a, 1, 0x118, 17, periph)
/* pa1_tc4wo1_out */
#define PA1_TC4WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 28, periph)
/* pa1_tc5wo0g3_in */
#define PA1_TC5WO0G3_IN        MCHP_PINMUX(a, 1, 0x120, 23, periph)
/* pa1_tc5wo0_out */
#define PA1_TC5WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 29, periph)
/* pa1_tc5wo1g2_in */
#define PA1_TC5WO1G2_IN        MCHP_PINMUX(a, 1, 0x124, 1, periph)
/* pa1_tc5wo1g4_in */
#define PA1_TC5WO1G4_IN        MCHP_PINMUX(a, 1, 0x128, 17, periph)
/* pa1_tc5wo1_out */
#define PA1_TC5WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 29, periph)
/* pa1_tc6wo0g3_in */
#define PA1_TC6WO0G3_IN        MCHP_PINMUX(a, 1, 0x130, 23, periph)
/* pa1_tc6wo0_out */
#define PA1_TC6WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 30, periph)
/* pa1_tc6wo1g2_in */
#define PA1_TC6WO1G2_IN        MCHP_PINMUX(a, 1, 0x134, 1, periph)
/* pa1_tc6wo1g4_in */
#define PA1_TC6WO1G4_IN        MCHP_PINMUX(a, 1, 0x138, 17, periph)
/* pa1_tc6wo1_out */
#define PA1_TC6WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 30, periph)
/* pa1_tc7wo0g3_in */
#define PA1_TC7WO0G3_IN        MCHP_PINMUX(a, 1, 0x140, 23, periph)
/* pa1_tc7wo0_out */
#define PA1_TC7WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 31, periph)
/* pa1_tc7wo1g2_in */
#define PA1_TC7WO1G2_IN        MCHP_PINMUX(a, 1, 0x144, 1, periph)
/* pa1_tc7wo1g4_in */
#define PA1_TC7WO1G4_IN        MCHP_PINMUX(a, 1, 0x148, 17, periph)
/* pa1_tc7wo1_out */
#define PA1_TC7WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 31, periph)
/* pa1_tc8wo0g3_in */
#define PA1_TC8WO0G3_IN        MCHP_PINMUX(a, 1, 0x150, 23, periph)
/* pa1_tc8wo0_out */
#define PA1_TC8WO0_OUT         MCHP_PINMUX(a, 1, 0x214, 32, periph)
/* pa1_tc8wo1g2_in */
#define PA1_TC8WO1G2_IN        MCHP_PINMUX(a, 1, 0x154, 1, periph)
/* pa1_tc8wo1g5_in */
#define PA1_TC8WO1G5_IN        MCHP_PINMUX(a, 1, 0x158, 7, periph)
/* pa1_tc8wo1_out */
#define PA1_TC8WO1_OUT         MCHP_PINMUX(a, 1, 0x210, 32, periph)
/* pa1_tc9wo0g2_in */
#define PA1_TC9WO0G2_IN        MCHP_PINMUX(a, 1, 0x15c, 1, periph)
/* pa1_tc9wo0g4_in */
#define PA1_TC9WO0G4_IN        MCHP_PINMUX(a, 1, 0x160, 17, periph)
/* pa1_tc9wo0_out */
#define PA1_TC9WO0_OUT         MCHP_PINMUX(a, 1, 0x210, 33, periph)
/* pa1_tc9wo1g3_in */
#define PA1_TC9WO1G3_IN        MCHP_PINMUX(a, 1, 0x164, 23, periph)
/* pa1_tc9wo1g5_in */
#define PA1_TC9WO1G5_IN        MCHP_PINMUX(a, 1, 0x168, 7, periph)
/* pa1_tc9wo1_out */
#define PA1_TC9WO1_OUT         MCHP_PINMUX(a, 1, 0x214, 33, periph)
/* pa1_tcc0wo0_out */
#define PA1_TCC0WO0_OUT        MCHP_PINMUX(a, 1, 0x214, 18, periph)
/* pa1_tcc0wo1_out */
#define PA1_TCC0WO1_OUT        MCHP_PINMUX(a, 1, 0x210, 17, periph)
/* pa1_tcc0wo2_out */
#define PA1_TCC0WO2_OUT        MCHP_PINMUX(a, 1, 0x214, 17, periph)
/* pa1_tcc0wo3_out */
#define PA1_TCC0WO3_OUT        MCHP_PINMUX(a, 1, 0x210, 19, periph)
/* pa1_tcc0wo4_out */
#define PA1_TCC0WO4_OUT        MCHP_PINMUX(a, 1, 0x214, 19, periph)
/* pa1_tcc0wo5_out */
#define PA1_TCC0WO5_OUT        MCHP_PINMUX(a, 1, 0x210, 18, periph)
/* pa1_tcc1wo0_out */
#define PA1_TCC1WO0_OUT        MCHP_PINMUX(a, 1, 0x214, 21, periph)
/* pa1_tcc1wo1_out */
#define PA1_TCC1WO1_OUT        MCHP_PINMUX(a, 1, 0x210, 20, periph)
/* pa1_tcc1wo2_out */
#define PA1_TCC1WO2_OUT        MCHP_PINMUX(a, 1, 0x214, 20, periph)
/* pa1_tcc1wo3_out */
#define PA1_TCC1WO3_OUT        MCHP_PINMUX(a, 1, 0x210, 22, periph)
/* pa1_tcc1wo4_out */
#define PA1_TCC1WO4_OUT        MCHP_PINMUX(a, 1, 0x214, 22, periph)
/* pa1_tcc1wo5_out */
#define PA1_TCC1WO5_OUT        MCHP_PINMUX(a, 1, 0x210, 21, periph)
/* pa1_tcc2wo0_out */
#define PA1_TCC2WO0_OUT        MCHP_PINMUX(a, 1, 0x214, 23, periph)
/* pa1_tcc2wo1_out */
#define PA1_TCC2WO1_OUT        MCHP_PINMUX(a, 1, 0x210, 23, periph)
/* pa1_tstbus1_out */
#define PA1_TSTBUS1_OUT        MCHP_PINMUX(a, 1, 0x214, 38, periph)
/* pa1_tstbus2_out */
#define PA1_TSTBUS2_OUT        MCHP_PINMUX(a, 1, 0x218, 34, periph)
/* pa1_tstbus3_out */
#define PA1_TSTBUS3_OUT        MCHP_PINMUX(a, 1, 0x21c, 15, periph)
/* pa1_tstbus5_out */
#define PA1_TSTBUS5_OUT        MCHP_PINMUX(a, 1, 0x210, 38, periph)
/* pa1_tstbus6_out */
#define PA1_TSTBUS6_OUT        MCHP_PINMUX(a, 1, 0x218, 35, periph)
/* pa1_tstbus7_out */
#define PA1_TSTBUS7_OUT        MCHP_PINMUX(a, 1, 0x21c, 16, periph)
/* pa1_tstbus9_out */
#define PA1_TSTBUS9_OUT        MCHP_PINMUX(a, 1, 0x210, 39, periph)
/* pa1_tstbus10_out */
#define PA1_TSTBUS10_OUT       MCHP_PINMUX(a, 1, 0x214, 39, periph)
/* pa1_tstbus11_out */
#define PA1_TSTBUS11_OUT       MCHP_PINMUX(a, 1, 0x21c, 17, periph)
/* pa2_accmpten_in */
#define PA2_ACCMPTEN_IN        MCHP_PINMUX(a, 2, 0x18c, 20, periph)
/* pa2_ac_cmp0_out */
#define PA2_AC_CMP0_OUT        MCHP_PINMUX(a, 2, 0x224, 40, periph)
/* pa2_ac_cmp1_out */
#define PA2_AC_CMP1_OUT        MCHP_PINMUX(a, 2, 0x228, 36, periph)
/* pa2_ac_cmptout_out */
#define PA2_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 2, 0x228, 37, periph)
/* pa2_ac_cmptrdy_out */
#define PA2_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 2, 0x224, 41, periph)
/* pa2_can1rx_in */
#define PA2_CAN1RX_IN          MCHP_PINMUX(a, 2, 0x190, 1, periph)
/* pa2_can1_tx_out */
#define PA2_CAN1_TX_OUT        MCHP_PINMUX(a, 2, 0x228, 38, periph)
/* pa2_cclin0_in */
#define PA2_CCLIN0_IN          MCHP_PINMUX(a, 2, 0xb4, 20, periph)
/* pa2_cclin2_in */
#define PA2_CCLIN2_IN          MCHP_PINMUX(a, 2, 0xbc, 1, periph)
/* pa2_cclin3_in */
#define PA2_CCLIN3_IN          MCHP_PINMUX(a, 2, 0xc0, 20, periph)
/* pa2_cclin5_in */
#define PA2_CCLIN5_IN          MCHP_PINMUX(a, 2, 0xc8, 1, periph)
/* pa2_cclo0_out */
#define PA2_CCLO0_OUT          MCHP_PINMUX(a, 2, 0x224, 1, periph)
/* pa2_cclo1_out */
#define PA2_CCLO1_OUT          MCHP_PINMUX(a, 2, 0x228, 1, periph)
/* pa2_coexwlanact_in */
#define PA2_COEXWLANACT_IN     MCHP_PINMUX(a, 2, 0x194, 24, periph)
/* pa2_coex_bt_state_out */
#define PA2_COEX_BT_STATE_OUT  MCHP_PINMUX(a, 2, 0x220, 37, periph)
/* pa2_extint0_in */
#define PA2_EXTINT0_IN         MCHP_PINMUX(a, 2, 0x0, 20, periph)
/* pa2_extint2_in */
#define PA2_EXTINT2_IN         MCHP_PINMUX(a, 2, 0x8, 1, periph)
/* pa2_extint3_in */
#define PA2_EXTINT3_IN         MCHP_PINMUX(a, 2, 0xc, 24, periph)
/* pa2_fectrl1_out */
#define PA2_FECTRL1_OUT        MCHP_PINMUX(a, 2, 0x220, 35, periph)
/* pa2_fectrl2_out */
#define PA2_FECTRL2_OUT        MCHP_PINMUX(a, 2, 0x220, 36, periph)
/* pa2_fectrl3_out */
#define PA2_FECTRL3_OUT        MCHP_PINMUX(a, 2, 0x228, 39, periph)
/* pa2_fectrl4_out */
#define PA2_FECTRL4_OUT        MCHP_PINMUX(a, 2, 0x224, 42, periph)
/* pa2_fectrl5_out */
#define PA2_FECTRL5_OUT        MCHP_PINMUX(a, 2, 0x228, 40, periph)
/* pa2_nmi_in */
#define PA2_NMI_IN             MCHP_PINMUX(a, 2, 0x3c, 24, periph)
/* pa2_qd0_in */
#define PA2_QD0_IN             MCHP_PINMUX(a, 2, 0xa0, 24, periph)
/* pa2_qd0_out */
#define PA2_QD0_OUT            MCHP_PINMUX(a, 2, 0x224, 36, periph)
/* pa2_qd1_in */
#define PA2_QD1_IN             MCHP_PINMUX(a, 2, 0xa4, 20, periph)
/* pa2_qd1_out */
#define PA2_QD1_OUT            MCHP_PINMUX(a, 2, 0x220, 30, periph)
/* pa2_qd2_out */
#define PA2_QD2_OUT            MCHP_PINMUX(a, 2, 0x220, 29, periph)
/* pa2_qd3_in */
#define PA2_QD3_IN             MCHP_PINMUX(a, 2, 0xac, 1, periph)
/* pa2_qd3_out */
#define PA2_QD3_OUT            MCHP_PINMUX(a, 2, 0x220, 28, periph)
/* pa2_qeiccmp0_out */
#define PA2_QEICCMP0_OUT       MCHP_PINMUX(a, 2, 0x220, 31, periph)
/* pa2_qeihome0g1_in */
#define PA2_QEIHOME0G1_IN      MCHP_PINMUX(a, 2, 0x16c, 20, periph)
/* pa2_qeiindx0g3_in */
#define PA2_QEIINDX0G3_IN      MCHP_PINMUX(a, 2, 0x178, 1, periph)
/* pa2_qeiqea0g3_in */
#define PA2_QEIQEA0G3_IN       MCHP_PINMUX(a, 2, 0x17c, 1, periph)
/* pa2_qeiqea0g4_in */
#define PA2_QEIQEA0G4_IN       MCHP_PINMUX(a, 2, 0x180, 24, periph)
/* pa2_qeiqeb0g4_in */
#define PA2_QEIQEB0G4_IN       MCHP_PINMUX(a, 2, 0x184, 24, periph)
/* pa2_qspics_out */
#define PA2_QSPICS_OUT         MCHP_PINMUX(a, 2, 0x220, 27, periph)
/* pa2_scom0p0_out */
#define PA2_SCOM0P0_OUT        MCHP_PINMUX(a, 2, 0x224, 2, periph)
/* pa2_scom0p2_in */
#define PA2_SCOM0P2_IN         MCHP_PINMUX(a, 2, 0x48, 24, periph)
/* pa2_scom0p2_out */
#define PA2_SCOM0P2_OUT        MCHP_PINMUX(a, 2, 0x220, 2, periph)
/* pa2_scom0p3_in */
#define PA2_SCOM0P3_IN         MCHP_PINMUX(a, 2, 0x4c, 20, periph)
/* pa2_scom0p3_out */
#define PA2_SCOM0P3_OUT        MCHP_PINMUX(a, 2, 0x220, 1, periph)
/* pa2_scom1p0_in */
#define PA2_SCOM1P0_IN         MCHP_PINMUX(a, 2, 0x50, 1, periph)
/* pa2_scom1p0_out */
#define PA2_SCOM1P0_OUT        MCHP_PINMUX(a, 2, 0x220, 3, periph)
/* pa2_scom1p2_in */
#define PA2_SCOM1P2_IN         MCHP_PINMUX(a, 2, 0x58, 20, periph)
/* pa2_scom1p2_out */
#define PA2_SCOM1P2_OUT        MCHP_PINMUX(a, 2, 0x220, 4, periph)
/* pa2_scom1p3_out */
#define PA2_SCOM1P3_OUT        MCHP_PINMUX(a, 2, 0x224, 6, periph)
/* pa2_scom2p0_out */
#define PA2_SCOM2P0_OUT        MCHP_PINMUX(a, 2, 0x224, 7, periph)
/* pa2_scom2p2_in */
#define PA2_SCOM2P2_IN         MCHP_PINMUX(a, 2, 0x68, 24, periph)
/* pa2_scom2p2_out */
#define PA2_SCOM2P2_OUT        MCHP_PINMUX(a, 2, 0x220, 6, periph)
/* pa2_scom2p3_in */
#define PA2_SCOM2P3_IN         MCHP_PINMUX(a, 2, 0x6c, 20, periph)
/* pa2_scom2p3_out */
#define PA2_SCOM2P3_OUT        MCHP_PINMUX(a, 2, 0x220, 5, periph)
/* pa2_scom3p0_in */
#define PA2_SCOM3P0_IN         MCHP_PINMUX(a, 2, 0x70, 1, periph)
/* pa2_scom3p0_out */
#define PA2_SCOM3P0_OUT        MCHP_PINMUX(a, 2, 0x220, 7, periph)
/* pa2_scom3p2_in */
#define PA2_SCOM3P2_IN         MCHP_PINMUX(a, 2, 0x78, 20, periph)
/* pa2_scom3p2_out */
#define PA2_SCOM3P2_OUT        MCHP_PINMUX(a, 2, 0x220, 8, periph)
/* pa2_scom3p3_out */
#define PA2_SCOM3P3_OUT        MCHP_PINMUX(a, 2, 0x224, 11, periph)
/* pa2_scom4p0_out */
#define PA2_SCOM4P0_OUT        MCHP_PINMUX(a, 2, 0x224, 12, periph)
/* pa2_scom4p2_in */
#define PA2_SCOM4P2_IN         MCHP_PINMUX(a, 2, 0x88, 24, periph)
/* pa2_scom4p2_out */
#define PA2_SCOM4P2_OUT        MCHP_PINMUX(a, 2, 0x220, 10, periph)
/* pa2_scom4p3_in */
#define PA2_SCOM4P3_IN         MCHP_PINMUX(a, 2, 0x8c, 20, periph)
/* pa2_scom4p3_out */
#define PA2_SCOM4P3_OUT        MCHP_PINMUX(a, 2, 0x220, 9, periph)
/* pa2_scom5p0_in */
#define PA2_SCOM5P0_IN         MCHP_PINMUX(a, 2, 0x90, 1, periph)
/* pa2_scom5p0_out */
#define PA2_SCOM5P0_OUT        MCHP_PINMUX(a, 2, 0x220, 11, periph)
/* pa2_scom5p2_in */
#define PA2_SCOM5P2_IN         MCHP_PINMUX(a, 2, 0x98, 20, periph)
/* pa2_scom5p2_out */
#define PA2_SCOM5P2_OUT        MCHP_PINMUX(a, 2, 0x220, 12, periph)
/* pa2_scom5p3_out */
#define PA2_SCOM5P3_OUT        MCHP_PINMUX(a, 2, 0x224, 16, periph)
/* pa2_tc0wo0g1_in */
#define PA2_TC0WO0G1_IN        MCHP_PINMUX(a, 2, 0xcc, 20, periph)
/* pa2_tc0wo0_out */
#define PA2_TC0WO0_OUT         MCHP_PINMUX(a, 2, 0x224, 24, periph)
/* pa2_tc0wo1g3_in */
#define PA2_TC0WO1G3_IN        MCHP_PINMUX(a, 2, 0xd4, 1, periph)
/* pa2_tc0wo1g4_in */
#define PA2_TC0WO1G4_IN        MCHP_PINMUX(a, 2, 0xd8, 24, periph)
/* pa2_tc0wo1_out */
#define PA2_TC0WO1_OUT         MCHP_PINMUX(a, 2, 0x220, 18, periph)
/* pa2_tc1wo0g1_in */
#define PA2_TC1WO0G1_IN        MCHP_PINMUX(a, 2, 0xdc, 20, periph)
/* pa2_tc1wo0_out */
#define PA2_TC1WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 19, periph)
/* pa2_tc1wo1_out */
#define PA2_TC1WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 22, periph)
/* pa2_tc2wo0g1_in */
#define PA2_TC2WO0G1_IN        MCHP_PINMUX(a, 2, 0xec, 20, periph)
/* pa2_tc2wo0g3_in */
#define PA2_TC2WO0G3_IN        MCHP_PINMUX(a, 2, 0xf0, 1, periph)
/* pa2_tc2wo0_out */
#define PA2_TC2WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 20, periph)
/* pa2_tc2wo1g4_in */
#define PA2_TC2WO1G4_IN        MCHP_PINMUX(a, 2, 0xf8, 24, periph)
/* pa2_tc2wo1_out */
#define PA2_TC2WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 23, periph)
/* pa2_tc3wo0g1_in */
#define PA2_TC3WO0G1_IN        MCHP_PINMUX(a, 2, 0xfc, 20, periph)
/* pa2_tc3wo0g3_in */
#define PA2_TC3WO0G3_IN        MCHP_PINMUX(a, 2, 0x100, 1, periph)
/* pa2_tc3wo0_out */
#define PA2_TC3WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 21, periph)
/* pa2_tc3wo1g4_in */
#define PA2_TC3WO1G4_IN        MCHP_PINMUX(a, 2, 0x108, 24, periph)
/* pa2_tc3wo1_out */
#define PA2_TC3WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 24, periph)
/* pa2_tc4wo0g1_in */
#define PA2_TC4WO0G1_IN        MCHP_PINMUX(a, 2, 0x10c, 20, periph)
/* pa2_tc4wo0g3_in */
#define PA2_TC4WO0G3_IN        MCHP_PINMUX(a, 2, 0x110, 1, periph)
/* pa2_tc4wo0_out */
#define PA2_TC4WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 22, periph)
/* pa2_tc4wo1g4_in */
#define PA2_TC4WO1G4_IN        MCHP_PINMUX(a, 2, 0x118, 24, periph)
/* pa2_tc4wo1_out */
#define PA2_TC4WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 25, periph)
/* pa2_tc5wo0g1_in */
#define PA2_TC5WO0G1_IN        MCHP_PINMUX(a, 2, 0x11c, 20, periph)
/* pa2_tc5wo0g3_in */
#define PA2_TC5WO0G3_IN        MCHP_PINMUX(a, 2, 0x120, 1, periph)
/* pa2_tc5wo0_out */
#define PA2_TC5WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 23, periph)
/* pa2_tc5wo1g4_in */
#define PA2_TC5WO1G4_IN        MCHP_PINMUX(a, 2, 0x128, 24, periph)
/* pa2_tc5wo1_out */
#define PA2_TC5WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 26, periph)
/* pa2_tc6wo0g1_in */
#define PA2_TC6WO0G1_IN        MCHP_PINMUX(a, 2, 0x12c, 20, periph)
/* pa2_tc6wo0g3_in */
#define PA2_TC6WO0G3_IN        MCHP_PINMUX(a, 2, 0x130, 1, periph)
/* pa2_tc6wo0_out */
#define PA2_TC6WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 24, periph)
/* pa2_tc6wo1g4_in */
#define PA2_TC6WO1G4_IN        MCHP_PINMUX(a, 2, 0x138, 24, periph)
/* pa2_tc6wo1_out */
#define PA2_TC6WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 27, periph)
/* pa2_tc7wo0g1_in */
#define PA2_TC7WO0G1_IN        MCHP_PINMUX(a, 2, 0x13c, 20, periph)
/* pa2_tc7wo0g3_in */
#define PA2_TC7WO0G3_IN        MCHP_PINMUX(a, 2, 0x140, 1, periph)
/* pa2_tc7wo0_out */
#define PA2_TC7WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 25, periph)
/* pa2_tc7wo1g4_in */
#define PA2_TC7WO1G4_IN        MCHP_PINMUX(a, 2, 0x148, 24, periph)
/* pa2_tc7wo1_out */
#define PA2_TC7WO1_OUT         MCHP_PINMUX(a, 2, 0x228, 28, periph)
/* pa2_tc8wo0g1_in */
#define PA2_TC8WO0G1_IN        MCHP_PINMUX(a, 2, 0x14c, 20, periph)
/* pa2_tc8wo0g3_in */
#define PA2_TC8WO0G3_IN        MCHP_PINMUX(a, 2, 0x150, 1, periph)
/* pa2_tc8wo0_out */
#define PA2_TC8WO0_OUT         MCHP_PINMUX(a, 2, 0x220, 26, periph)
/* pa2_tc9wo0g4_in */
#define PA2_TC9WO0G4_IN        MCHP_PINMUX(a, 2, 0x160, 24, periph)
/* pa2_tc9wo0_out */
#define PA2_TC9WO0_OUT         MCHP_PINMUX(a, 2, 0x228, 29, periph)
/* pa2_tc9wo1g3_in */
#define PA2_TC9WO1G3_IN        MCHP_PINMUX(a, 2, 0x164, 1, periph)
/* pa2_tc9wo1_out */
#define PA2_TC9WO1_OUT         MCHP_PINMUX(a, 2, 0x224, 33, periph)
/* pa2_tcc0wo0_out */
#define PA2_TCC0WO0_OUT        MCHP_PINMUX(a, 2, 0x220, 13, periph)
/* pa2_tcc0wo1_out */
#define PA2_TCC0WO1_OUT        MCHP_PINMUX(a, 2, 0x228, 15, periph)
/* pa2_tcc0wo2_out */
#define PA2_TCC0WO2_OUT        MCHP_PINMUX(a, 2, 0x224, 17, periph)
/* pa2_tcc0wo3_out */
#define PA2_TCC0WO3_OUT        MCHP_PINMUX(a, 2, 0x228, 14, periph)
/* pa2_tcc0wo4_out */
#define PA2_TCC0WO4_OUT        MCHP_PINMUX(a, 2, 0x220, 14, periph)
/* pa2_tcc0wo5_out */
#define PA2_TCC0WO5_OUT        MCHP_PINMUX(a, 2, 0x228, 16, periph)
/* pa2_tcc1wo0_out */
#define PA2_TCC1WO0_OUT        MCHP_PINMUX(a, 2, 0x220, 15, periph)
/* pa2_tcc1wo1_out */
#define PA2_TCC1WO1_OUT        MCHP_PINMUX(a, 2, 0x228, 18, periph)
/* pa2_tcc1wo2_out */
#define PA2_TCC1WO2_OUT        MCHP_PINMUX(a, 2, 0x224, 20, periph)
/* pa2_tcc1wo3_out */
#define PA2_TCC1WO3_OUT        MCHP_PINMUX(a, 2, 0x228, 17, periph)
/* pa2_tcc1wo4_out */
#define PA2_TCC1WO4_OUT        MCHP_PINMUX(a, 2, 0x220, 16, periph)
/* pa2_tcc1wo5_out */
#define PA2_TCC1WO5_OUT        MCHP_PINMUX(a, 2, 0x228, 19, periph)
/* pa2_tcc2wo0_out */
#define PA2_TCC2WO0_OUT        MCHP_PINMUX(a, 2, 0x220, 17, periph)
/* pa2_tcc2wo1_out */
#define PA2_TCC2WO1_OUT        MCHP_PINMUX(a, 2, 0x228, 20, periph)
/* pa2_tstbus0_out */
#define PA2_TSTBUS0_OUT        MCHP_PINMUX(a, 2, 0x220, 32, periph)
/* pa2_tstbus1_out */
#define PA2_TSTBUS1_OUT        MCHP_PINMUX(a, 2, 0x224, 38, periph)
/* pa2_tstbus2_out */
#define PA2_TSTBUS2_OUT        MCHP_PINMUX(a, 2, 0x228, 34, periph)
/* pa2_tstbus4_out */
#define PA2_TSTBUS4_OUT        MCHP_PINMUX(a, 2, 0x220, 33, periph)
/* pa2_tstbus6_out */
#define PA2_TSTBUS6_OUT        MCHP_PINMUX(a, 2, 0x228, 35, periph)
/* pa2_tstbus8_out */
#define PA2_TSTBUS8_OUT        MCHP_PINMUX(a, 2, 0x220, 34, periph)
/* pa2_tstbus10_out */
#define PA2_TSTBUS10_OUT       MCHP_PINMUX(a, 2, 0x224, 39, periph)
/* pa3_accmpten_in */
#define PA3_ACCMPTEN_IN        MCHP_PINMUX(a, 3, 0x18c, 15, periph)
/* pa3_ac_cmp1_out */
#define PA3_AC_CMP1_OUT        MCHP_PINMUX(a, 3, 0x234, 36, periph)
/* pa3_ac_cmptout_out */
#define PA3_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 3, 0x234, 37, periph)
/* pa3_can1_tx_out */
#define PA3_CAN1_TX_OUT        MCHP_PINMUX(a, 3, 0x234, 38, periph)
/* pa3_cclin0_in */
#define PA3_CCLIN0_IN          MCHP_PINMUX(a, 3, 0xb4, 15, periph)
/* pa3_cclin1_in */
#define PA3_CCLIN1_IN          MCHP_PINMUX(a, 3, 0xb8, 10, periph)
/* pa3_cclin3_in */
#define PA3_CCLIN3_IN          MCHP_PINMUX(a, 3, 0xc0, 15, periph)
/* pa3_cclin4_in */
#define PA3_CCLIN4_IN          MCHP_PINMUX(a, 3, 0xc4, 10, periph)
/* pa3_cclo1_out */
#define PA3_CCLO1_OUT          MCHP_PINMUX(a, 3, 0x230, 1, periph)
/* pa3_coexwlanact_in */
#define PA3_COEXWLANACT_IN     MCHP_PINMUX(a, 3, 0x194, 1, periph)
/* pa3_coex_bt_state_out */
#define PA3_COEX_BT_STATE_OUT  MCHP_PINMUX(a, 3, 0x22c, 37, periph)
/* pa3_coex_rf_act_out */
#define PA3_COEX_RF_ACT_OUT    MCHP_PINMUX(a, 3, 0x230, 41, periph)
/* pa3_extint0_in */
#define PA3_EXTINT0_IN         MCHP_PINMUX(a, 3, 0x0, 15, periph)
/* pa3_extint1_in */
#define PA3_EXTINT1_IN         MCHP_PINMUX(a, 3, 0x4, 10, periph)
/* pa3_extint3_in */
#define PA3_EXTINT3_IN         MCHP_PINMUX(a, 3, 0xc, 1, periph)
/* pa3_fectrl0_out */
#define PA3_FECTRL0_OUT        MCHP_PINMUX(a, 3, 0x230, 40, periph)
/* pa3_fectrl1_out */
#define PA3_FECTRL1_OUT        MCHP_PINMUX(a, 3, 0x22c, 35, periph)
/* pa3_fectrl2_out */
#define PA3_FECTRL2_OUT        MCHP_PINMUX(a, 3, 0x22c, 36, periph)
/* pa3_fectrl3_out */
#define PA3_FECTRL3_OUT        MCHP_PINMUX(a, 3, 0x234, 39, periph)
/* pa3_fectrl5_out */
#define PA3_FECTRL5_OUT        MCHP_PINMUX(a, 3, 0x234, 40, periph)
/* pa3_nmi_in */
#define PA3_NMI_IN             MCHP_PINMUX(a, 3, 0x3c, 1, periph)
/* pa3_qd0_in */
#define PA3_QD0_IN             MCHP_PINMUX(a, 3, 0xa0, 1, periph)
/* pa3_qd0_out */
#define PA3_QD0_OUT            MCHP_PINMUX(a, 3, 0x230, 35, periph)
/* pa3_qd1_in */
#define PA3_QD1_IN             MCHP_PINMUX(a, 3, 0xa4, 15, periph)
/* pa3_qd1_out */
#define PA3_QD1_OUT            MCHP_PINMUX(a, 3, 0x22c, 30, periph)
/* pa3_qd2_in */
#define PA3_QD2_IN             MCHP_PINMUX(a, 3, 0xa8, 10, periph)
/* pa3_qd2_out */
#define PA3_QD2_OUT            MCHP_PINMUX(a, 3, 0x22c, 29, periph)
/* pa3_qd3_out */
#define PA3_QD3_OUT            MCHP_PINMUX(a, 3, 0x22c, 28, periph)
/* pa3_qeiccmp0_out */
#define PA3_QEICCMP0_OUT       MCHP_PINMUX(a, 3, 0x22c, 31, periph)
/* pa3_qeihome0g1_in */
#define PA3_QEIHOME0G1_IN      MCHP_PINMUX(a, 3, 0x16c, 15, periph)
/* pa3_qeihome0g2_in */
#define PA3_QEIHOME0G2_IN      MCHP_PINMUX(a, 3, 0x170, 10, periph)
/* pa3_qeiindx0g2_in */
#define PA3_QEIINDX0G2_IN      MCHP_PINMUX(a, 3, 0x174, 10, periph)
/* pa3_qeiqea0g4_in */
#define PA3_QEIQEA0G4_IN       MCHP_PINMUX(a, 3, 0x180, 1, periph)
/* pa3_qeiqeb0g4_in */
#define PA3_QEIQEB0G4_IN       MCHP_PINMUX(a, 3, 0x184, 1, periph)
/* pa3_qspics_out */
#define PA3_QSPICS_OUT         MCHP_PINMUX(a, 3, 0x22c, 27, periph)
/* pa3_qspi_sck_out */
#define PA3_QSPI_SCK_OUT       MCHP_PINMUX(a, 3, 0x238, 7, periph)
/* pa3_refi_in */
#define PA3_REFI_IN            MCHP_PINMUX(a, 3, 0xb0, 6, periph)
/* pa3_refo1_out */
#define PA3_REFO1_OUT          MCHP_PINMUX(a, 3, 0x238, 8, periph)
/* pa3_refo2_out */
#define PA3_REFO2_OUT          MCHP_PINMUX(a, 3, 0x238, 9, periph)
/* pa3_refo3_out */
#define PA3_REFO3_OUT          MCHP_PINMUX(a, 3, 0x238, 10, periph)
/* pa3_refo4_out */
#define PA3_REFO4_OUT          MCHP_PINMUX(a, 3, 0x238, 11, periph)
/* pa3_scom0p0_in */
#define PA3_SCOM0P0_IN         MCHP_PINMUX(a, 3, 0x40, 10, periph)
/* pa3_scom0p0_out */
#define PA3_SCOM0P0_OUT        MCHP_PINMUX(a, 3, 0x230, 2, periph)
/* pa3_scom0p1_in */
#define PA3_SCOM0P1_IN         MCHP_PINMUX(a, 3, 0x44, 6, periph)
/* pa3_scom0p1_out */
#define PA3_SCOM0P1_OUT        MCHP_PINMUX(a, 3, 0x238, 1, periph)
/* pa3_scom0p2_in */
#define PA3_SCOM0P2_IN         MCHP_PINMUX(a, 3, 0x48, 1, periph)
/* pa3_scom0p2_out */
#define PA3_SCOM0P2_OUT        MCHP_PINMUX(a, 3, 0x22c, 2, periph)
/* pa3_scom0p3_in */
#define PA3_SCOM0P3_IN         MCHP_PINMUX(a, 3, 0x4c, 15, periph)
/* pa3_scom0p3_out */
#define PA3_SCOM0P3_OUT        MCHP_PINMUX(a, 3, 0x22c, 1, periph)
/* pa3_scom1p0_out */
#define PA3_SCOM1P0_OUT        MCHP_PINMUX(a, 3, 0x22c, 3, periph)
/* pa3_scom1p1_in */
#define PA3_SCOM1P1_IN         MCHP_PINMUX(a, 3, 0x54, 6, periph)
/* pa3_scom1p1_out */
#define PA3_SCOM1P1_OUT        MCHP_PINMUX(a, 3, 0x238, 2, periph)
/* pa3_scom1p2_in */
#define PA3_SCOM1P2_IN         MCHP_PINMUX(a, 3, 0x58, 15, periph)
/* pa3_scom1p2_out */
#define PA3_SCOM1P2_OUT        MCHP_PINMUX(a, 3, 0x22c, 4, periph)
/* pa3_scom1p3_in */
#define PA3_SCOM1P3_IN         MCHP_PINMUX(a, 3, 0x5c, 10, periph)
/* pa3_scom1p3_out */
#define PA3_SCOM1P3_OUT        MCHP_PINMUX(a, 3, 0x230, 5, periph)
/* pa3_scom2p0_in */
#define PA3_SCOM2P0_IN         MCHP_PINMUX(a, 3, 0x60, 10, periph)
/* pa3_scom2p0_out */
#define PA3_SCOM2P0_OUT        MCHP_PINMUX(a, 3, 0x230, 7, periph)
/* pa3_scom2p1_in */
#define PA3_SCOM2P1_IN         MCHP_PINMUX(a, 3, 0x64, 6, periph)
/* pa3_scom2p1_out */
#define PA3_SCOM2P1_OUT        MCHP_PINMUX(a, 3, 0x238, 3, periph)
/* pa3_scom2p2_in */
#define PA3_SCOM2P2_IN         MCHP_PINMUX(a, 3, 0x68, 1, periph)
/* pa3_scom2p2_out */
#define PA3_SCOM2P2_OUT        MCHP_PINMUX(a, 3, 0x22c, 6, periph)
/* pa3_scom2p3_in */
#define PA3_SCOM2P3_IN         MCHP_PINMUX(a, 3, 0x6c, 15, periph)
/* pa3_scom2p3_out */
#define PA3_SCOM2P3_OUT        MCHP_PINMUX(a, 3, 0x22c, 5, periph)
/* pa3_scom3p0_out */
#define PA3_SCOM3P0_OUT        MCHP_PINMUX(a, 3, 0x22c, 7, periph)
/* pa3_scom3p1_in */
#define PA3_SCOM3P1_IN         MCHP_PINMUX(a, 3, 0x74, 6, periph)
/* pa3_scom3p1_out */
#define PA3_SCOM3P1_OUT        MCHP_PINMUX(a, 3, 0x238, 4, periph)
/* pa3_scom3p2_in */
#define PA3_SCOM3P2_IN         MCHP_PINMUX(a, 3, 0x78, 15, periph)
/* pa3_scom3p2_out */
#define PA3_SCOM3P2_OUT        MCHP_PINMUX(a, 3, 0x22c, 8, periph)
/* pa3_scom3p3_in */
#define PA3_SCOM3P3_IN         MCHP_PINMUX(a, 3, 0x7c, 10, periph)
/* pa3_scom3p3_out */
#define PA3_SCOM3P3_OUT        MCHP_PINMUX(a, 3, 0x230, 10, periph)
/* pa3_scom4p0_in */
#define PA3_SCOM4P0_IN         MCHP_PINMUX(a, 3, 0x80, 10, periph)
/* pa3_scom4p0_out */
#define PA3_SCOM4P0_OUT        MCHP_PINMUX(a, 3, 0x230, 12, periph)
/* pa3_scom4p1_in */
#define PA3_SCOM4P1_IN         MCHP_PINMUX(a, 3, 0x84, 6, periph)
/* pa3_scom4p1_out */
#define PA3_SCOM4P1_OUT        MCHP_PINMUX(a, 3, 0x238, 5, periph)
/* pa3_scom4p2_in */
#define PA3_SCOM4P2_IN         MCHP_PINMUX(a, 3, 0x88, 1, periph)
/* pa3_scom4p2_out */
#define PA3_SCOM4P2_OUT        MCHP_PINMUX(a, 3, 0x22c, 10, periph)
/* pa3_scom4p3_in */
#define PA3_SCOM4P3_IN         MCHP_PINMUX(a, 3, 0x8c, 15, periph)
/* pa3_scom4p3_out */
#define PA3_SCOM4P3_OUT        MCHP_PINMUX(a, 3, 0x22c, 9, periph)
/* pa3_scom5p0_out */
#define PA3_SCOM5P0_OUT        MCHP_PINMUX(a, 3, 0x22c, 11, periph)
/* pa3_scom5p1_in */
#define PA3_SCOM5P1_IN         MCHP_PINMUX(a, 3, 0x94, 6, periph)
/* pa3_scom5p1_out */
#define PA3_SCOM5P1_OUT        MCHP_PINMUX(a, 3, 0x238, 6, periph)
/* pa3_scom5p2_in */
#define PA3_SCOM5P2_IN         MCHP_PINMUX(a, 3, 0x98, 15, periph)
/* pa3_scom5p2_out */
#define PA3_SCOM5P2_OUT        MCHP_PINMUX(a, 3, 0x22c, 12, periph)
/* pa3_scom5p3_in */
#define PA3_SCOM5P3_IN         MCHP_PINMUX(a, 3, 0x9c, 10, periph)
/* pa3_scom5p3_out */
#define PA3_SCOM5P3_OUT        MCHP_PINMUX(a, 3, 0x230, 15, periph)
/* pa3_tc0wo0g1_in */
#define PA3_TC0WO0G1_IN        MCHP_PINMUX(a, 3, 0xcc, 15, periph)
/* pa3_tc0wo0g2_in */
#define PA3_TC0WO0G2_IN        MCHP_PINMUX(a, 3, 0xd0, 10, periph)
/* pa3_tc0wo0_out */
#define PA3_TC0WO0_OUT         MCHP_PINMUX(a, 3, 0x234, 21, periph)
/* pa3_tc0wo1g4_in */
#define PA3_TC0WO1G4_IN        MCHP_PINMUX(a, 3, 0xd8, 1, periph)
/* pa3_tc0wo1_out */
#define PA3_TC0WO1_OUT         MCHP_PINMUX(a, 3, 0x22c, 18, periph)
/* pa3_tc1wo0g1_in */
#define PA3_TC1WO0G1_IN        MCHP_PINMUX(a, 3, 0xdc, 15, periph)
/* pa3_tc1wo0_out */
#define PA3_TC1WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 19, periph)
/* pa3_tc1wo1g2_in */
#define PA3_TC1WO1G2_IN        MCHP_PINMUX(a, 3, 0xe4, 10, periph)
/* pa3_tc1wo1_out */
#define PA3_TC1WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 25, periph)
/* pa3_tc2wo0g1_in */
#define PA3_TC2WO0G1_IN        MCHP_PINMUX(a, 3, 0xec, 15, periph)
/* pa3_tc2wo0_out */
#define PA3_TC2WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 20, periph)
/* pa3_tc2wo1g2_in */
#define PA3_TC2WO1G2_IN        MCHP_PINMUX(a, 3, 0xf4, 10, periph)
/* pa3_tc2wo1g4_in */
#define PA3_TC2WO1G4_IN        MCHP_PINMUX(a, 3, 0xf8, 1, periph)
/* pa3_tc2wo1_out */
#define PA3_TC2WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 26, periph)
/* pa3_tc3wo0g1_in */
#define PA3_TC3WO0G1_IN        MCHP_PINMUX(a, 3, 0xfc, 15, periph)
/* pa3_tc3wo0_out */
#define PA3_TC3WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 21, periph)
/* pa3_tc3wo1g2_in */
#define PA3_TC3WO1G2_IN        MCHP_PINMUX(a, 3, 0x104, 10, periph)
/* pa3_tc3wo1g4_in */
#define PA3_TC3WO1G4_IN        MCHP_PINMUX(a, 3, 0x108, 1, periph)
/* pa3_tc3wo1_out */
#define PA3_TC3WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 27, periph)
/* pa3_tc4wo0g1_in */
#define PA3_TC4WO0G1_IN        MCHP_PINMUX(a, 3, 0x10c, 15, periph)
/* pa3_tc4wo0_out */
#define PA3_TC4WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 22, periph)
/* pa3_tc4wo1g2_in */
#define PA3_TC4WO1G2_IN        MCHP_PINMUX(a, 3, 0x114, 10, periph)
/* pa3_tc4wo1g4_in */
#define PA3_TC4WO1G4_IN        MCHP_PINMUX(a, 3, 0x118, 1, periph)
/* pa3_tc4wo1_out */
#define PA3_TC4WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 28, periph)
/* pa3_tc5wo0g1_in */
#define PA3_TC5WO0G1_IN        MCHP_PINMUX(a, 3, 0x11c, 15, periph)
/* pa3_tc5wo0_out */
#define PA3_TC5WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 23, periph)
/* pa3_tc5wo1g2_in */
#define PA3_TC5WO1G2_IN        MCHP_PINMUX(a, 3, 0x124, 10, periph)
/* pa3_tc5wo1g4_in */
#define PA3_TC5WO1G4_IN        MCHP_PINMUX(a, 3, 0x128, 1, periph)
/* pa3_tc5wo1_out */
#define PA3_TC5WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 29, periph)
/* pa3_tc6wo0g1_in */
#define PA3_TC6WO0G1_IN        MCHP_PINMUX(a, 3, 0x12c, 15, periph)
/* pa3_tc6wo0_out */
#define PA3_TC6WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 24, periph)
/* pa3_tc6wo1g2_in */
#define PA3_TC6WO1G2_IN        MCHP_PINMUX(a, 3, 0x134, 10, periph)
/* pa3_tc6wo1g4_in */
#define PA3_TC6WO1G4_IN        MCHP_PINMUX(a, 3, 0x138, 1, periph)
/* pa3_tc6wo1_out */
#define PA3_TC6WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 30, periph)
/* pa3_tc7wo0g1_in */
#define PA3_TC7WO0G1_IN        MCHP_PINMUX(a, 3, 0x13c, 15, periph)
/* pa3_tc7wo0_out */
#define PA3_TC7WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 25, periph)
/* pa3_tc7wo1g2_in */
#define PA3_TC7WO1G2_IN        MCHP_PINMUX(a, 3, 0x144, 10, periph)
/* pa3_tc7wo1g4_in */
#define PA3_TC7WO1G4_IN        MCHP_PINMUX(a, 3, 0x148, 1, periph)
/* pa3_tc7wo1_out */
#define PA3_TC7WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 31, periph)
/* pa3_tc8wo0g1_in */
#define PA3_TC8WO0G1_IN        MCHP_PINMUX(a, 3, 0x14c, 15, periph)
/* pa3_tc8wo0_out */
#define PA3_TC8WO0_OUT         MCHP_PINMUX(a, 3, 0x22c, 26, periph)
/* pa3_tc8wo1g2_in */
#define PA3_TC8WO1G2_IN        MCHP_PINMUX(a, 3, 0x154, 10, periph)
/* pa3_tc8wo1_out */
#define PA3_TC8WO1_OUT         MCHP_PINMUX(a, 3, 0x230, 32, periph)
/* pa3_tc9wo0g2_in */
#define PA3_TC9WO0G2_IN        MCHP_PINMUX(a, 3, 0x15c, 10, periph)
/* pa3_tc9wo0g4_in */
#define PA3_TC9WO0G4_IN        MCHP_PINMUX(a, 3, 0x160, 1, periph)
/* pa3_tc9wo0_out */
#define PA3_TC9WO0_OUT         MCHP_PINMUX(a, 3, 0x230, 33, periph)
/* pa3_tcc0wo0_out */
#define PA3_TCC0WO0_OUT        MCHP_PINMUX(a, 3, 0x22c, 13, periph)
/* pa3_tcc0wo1_out */
#define PA3_TCC0WO1_OUT        MCHP_PINMUX(a, 3, 0x230, 17, periph)
/* pa3_tcc0wo3_out */
#define PA3_TCC0WO3_OUT        MCHP_PINMUX(a, 3, 0x230, 19, periph)
/* pa3_tcc0wo4_out */
#define PA3_TCC0WO4_OUT        MCHP_PINMUX(a, 3, 0x22c, 14, periph)
/* pa3_tcc0wo5_out */
#define PA3_TCC0WO5_OUT        MCHP_PINMUX(a, 3, 0x230, 18, periph)
/* pa3_tcc1wo0_out */
#define PA3_TCC1WO0_OUT        MCHP_PINMUX(a, 3, 0x22c, 15, periph)
/* pa3_tcc1wo1_out */
#define PA3_TCC1WO1_OUT        MCHP_PINMUX(a, 3, 0x230, 20, periph)
/* pa3_tcc1wo3_out */
#define PA3_TCC1WO3_OUT        MCHP_PINMUX(a, 3, 0x230, 22, periph)
/* pa3_tcc1wo4_out */
#define PA3_TCC1WO4_OUT        MCHP_PINMUX(a, 3, 0x22c, 16, periph)
/* pa3_tcc1wo5_out */
#define PA3_TCC1WO5_OUT        MCHP_PINMUX(a, 3, 0x230, 21, periph)
/* pa3_tcc2wo0_out */
#define PA3_TCC2WO0_OUT        MCHP_PINMUX(a, 3, 0x22c, 17, periph)
/* pa3_tcc2wo1_out */
#define PA3_TCC2WO1_OUT        MCHP_PINMUX(a, 3, 0x230, 23, periph)
/* pa3_tstbus0_out */
#define PA3_TSTBUS0_OUT        MCHP_PINMUX(a, 3, 0x22c, 32, periph)
/* pa3_tstbus2_out */
#define PA3_TSTBUS2_OUT        MCHP_PINMUX(a, 3, 0x234, 34, periph)
/* pa3_tstbus4_out */
#define PA3_TSTBUS4_OUT        MCHP_PINMUX(a, 3, 0x22c, 33, periph)
/* pa3_tstbus5_out */
#define PA3_TSTBUS5_OUT        MCHP_PINMUX(a, 3, 0x230, 38, periph)
/* pa3_tstbus6_out */
#define PA3_TSTBUS6_OUT        MCHP_PINMUX(a, 3, 0x234, 35, periph)
/* pa3_tstbus8_out */
#define PA3_TSTBUS8_OUT        MCHP_PINMUX(a, 3, 0x22c, 34, periph)
/* pa3_tstbus9_out */
#define PA3_TSTBUS9_OUT        MCHP_PINMUX(a, 3, 0x230, 39, periph)
/* pa4_ac_cmp0_out */
#define PA4_AC_CMP0_OUT        MCHP_PINMUX(a, 4, 0x240, 40, periph)
/* pa4_ac_cmptrdy_out */
#define PA4_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 4, 0x240, 41, periph)
/* pa4_can1rx_in */
#define PA4_CAN1RX_IN          MCHP_PINMUX(a, 4, 0x190, 10, periph)
/* pa4_cclin1_in */
#define PA4_CCLIN1_IN          MCHP_PINMUX(a, 4, 0xb8, 15, periph)
/* pa4_cclin2_in */
#define PA4_CCLIN2_IN          MCHP_PINMUX(a, 4, 0xbc, 10, periph)
/* pa4_cclin4_in */
#define PA4_CCLIN4_IN          MCHP_PINMUX(a, 4, 0xc4, 15, periph)
/* pa4_cclin5_in */
#define PA4_CCLIN5_IN          MCHP_PINMUX(a, 4, 0xc8, 10, periph)
/* pa4_cclo0_out */
#define PA4_CCLO0_OUT          MCHP_PINMUX(a, 4, 0x240, 1, periph)
/* pa4_cclo1_out */
#define PA4_CCLO1_OUT          MCHP_PINMUX(a, 4, 0x23c, 1, periph)
/* pa4_coex_rf_act_out */
#define PA4_COEX_RF_ACT_OUT    MCHP_PINMUX(a, 4, 0x23c, 41, periph)
/* pa4_extint1_in */
#define PA4_EXTINT1_IN         MCHP_PINMUX(a, 4, 0x4, 15, periph)
/* pa4_extint2_in */
#define PA4_EXTINT2_IN         MCHP_PINMUX(a, 4, 0x8, 10, periph)
/* pa4_fectrl0_out */
#define PA4_FECTRL0_OUT        MCHP_PINMUX(a, 4, 0x23c, 40, periph)
/* pa4_fectrl4_out */
#define PA4_FECTRL4_OUT        MCHP_PINMUX(a, 4, 0x240, 42, periph)
/* pa4_gmac_tsucomp_out */
#define PA4_GMAC_TSUCOMP_OUT   MCHP_PINMUX(a, 4, 0x244, 14, periph)
/* pa4_qd0_out */
#define PA4_QD0_OUT            MCHP_PINMUX(a, 4, 0x23c, 35, periph)
/* pa4_qd1_out */
#define PA4_QD1_OUT            MCHP_PINMUX(a, 4, 0x240, 35, periph)
/* pa4_qd2_in */
#define PA4_QD2_IN             MCHP_PINMUX(a, 4, 0xa8, 15, periph)
/* pa4_qd2_out */
#define PA4_QD2_OUT            MCHP_PINMUX(a, 4, 0x23c, 37, periph)
/* pa4_qd3_in */
#define PA4_QD3_IN             MCHP_PINMUX(a, 4, 0xac, 10, periph)
/* pa4_qd3_out */
#define PA4_QD3_OUT            MCHP_PINMUX(a, 4, 0x23c, 36, periph)
/* pa4_qeiccmp0_out */
#define PA4_QEICCMP0_OUT       MCHP_PINMUX(a, 4, 0x244, 13, periph)
/* pa4_qeihome0g2_in */
#define PA4_QEIHOME0G2_IN      MCHP_PINMUX(a, 4, 0x170, 15, periph)
/* pa4_qeiindx0g2_in */
#define PA4_QEIINDX0G2_IN      MCHP_PINMUX(a, 4, 0x174, 15, periph)
/* pa4_qeiindx0g3_in */
#define PA4_QEIINDX0G3_IN      MCHP_PINMUX(a, 4, 0x178, 10, periph)
/* pa4_qeiqea0g3_in */
#define PA4_QEIQEA0G3_IN       MCHP_PINMUX(a, 4, 0x17c, 10, periph)
/* pa4_qeiqeb0g5_in */
#define PA4_QEIQEB0G5_IN       MCHP_PINMUX(a, 4, 0x188, 1, periph)
/* pa4_qspics_out */
#define PA4_QSPICS_OUT         MCHP_PINMUX(a, 4, 0x23c, 34, periph)
/* pa4_scom0p0_in */
#define PA4_SCOM0P0_IN         MCHP_PINMUX(a, 4, 0x40, 15, periph)
/* pa4_scom0p0_out */
#define PA4_SCOM0P0_OUT        MCHP_PINMUX(a, 4, 0x23c, 2, periph)
/* pa4_scom0p2_out */
#define PA4_SCOM0P2_OUT        MCHP_PINMUX(a, 4, 0x23c, 4, periph)
/* pa4_scom0p3_out */
#define PA4_SCOM0P3_OUT        MCHP_PINMUX(a, 4, 0x23c, 3, periph)
/* pa4_scom1p0_in */
#define PA4_SCOM1P0_IN         MCHP_PINMUX(a, 4, 0x50, 10, periph)
/* pa4_scom1p0_out */
#define PA4_SCOM1P0_OUT        MCHP_PINMUX(a, 4, 0x240, 5, periph)
/* pa4_scom1p2_out */
#define PA4_SCOM1P2_OUT        MCHP_PINMUX(a, 4, 0x23c, 6, periph)
/* pa4_scom1p3_in */
#define PA4_SCOM1P3_IN         MCHP_PINMUX(a, 4, 0x5c, 15, periph)
/* pa4_scom1p3_out */
#define PA4_SCOM1P3_OUT        MCHP_PINMUX(a, 4, 0x23c, 5, periph)
/* pa4_scom2p0_in */
#define PA4_SCOM2P0_IN         MCHP_PINMUX(a, 4, 0x60, 15, periph)
/* pa4_scom2p0_out */
#define PA4_SCOM2P0_OUT        MCHP_PINMUX(a, 4, 0x23c, 7, periph)
/* pa4_scom2p2_out */
#define PA4_SCOM2P2_OUT        MCHP_PINMUX(a, 4, 0x23c, 9, periph)
/* pa4_scom2p3_out */
#define PA4_SCOM2P3_OUT        MCHP_PINMUX(a, 4, 0x23c, 8, periph)
/* pa4_scom3p0_in */
#define PA4_SCOM3P0_IN         MCHP_PINMUX(a, 4, 0x70, 10, periph)
/* pa4_scom3p0_out */
#define PA4_SCOM3P0_OUT        MCHP_PINMUX(a, 4, 0x240, 10, periph)
/* pa4_scom3p2_out */
#define PA4_SCOM3P2_OUT        MCHP_PINMUX(a, 4, 0x23c, 11, periph)
/* pa4_scom3p3_in */
#define PA4_SCOM3P3_IN         MCHP_PINMUX(a, 4, 0x7c, 15, periph)
/* pa4_scom3p3_out */
#define PA4_SCOM3P3_OUT        MCHP_PINMUX(a, 4, 0x23c, 10, periph)
/* pa4_scom4p0_in */
#define PA4_SCOM4P0_IN         MCHP_PINMUX(a, 4, 0x80, 15, periph)
/* pa4_scom4p0_out */
#define PA4_SCOM4P0_OUT        MCHP_PINMUX(a, 4, 0x23c, 12, periph)
/* pa4_scom4p2_out */
#define PA4_SCOM4P2_OUT        MCHP_PINMUX(a, 4, 0x23c, 14, periph)
/* pa4_scom4p3_out */
#define PA4_SCOM4P3_OUT        MCHP_PINMUX(a, 4, 0x23c, 13, periph)
/* pa4_scom5p0_in */
#define PA4_SCOM5P0_IN         MCHP_PINMUX(a, 4, 0x90, 10, periph)
/* pa4_scom5p0_out */
#define PA4_SCOM5P0_OUT        MCHP_PINMUX(a, 4, 0x240, 15, periph)
/* pa4_scom5p2_out */
#define PA4_SCOM5P2_OUT        MCHP_PINMUX(a, 4, 0x23c, 16, periph)
/* pa4_scom5p3_in */
#define PA4_SCOM5P3_IN         MCHP_PINMUX(a, 4, 0x9c, 15, periph)
/* pa4_scom5p3_out */
#define PA4_SCOM5P3_OUT        MCHP_PINMUX(a, 4, 0x23c, 15, periph)
/* pa4_tc0wo0g2_in */
#define PA4_TC0WO0G2_IN        MCHP_PINMUX(a, 4, 0xd0, 15, periph)
/* pa4_tc0wo0_out */
#define PA4_TC0WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 24, periph)
/* pa4_tc0wo1g3_in */
#define PA4_TC0WO1G3_IN        MCHP_PINMUX(a, 4, 0xd4, 10, periph)
/* pa4_tc0wo1_out */
#define PA4_TC0WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 24, periph)
/* pa4_tc1wo0_out */
#define PA4_TC1WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 25, periph)
/* pa4_tc1wo1g2_in */
#define PA4_TC1WO1G2_IN        MCHP_PINMUX(a, 4, 0xe4, 15, periph)
/* pa4_tc1wo1_out */
#define PA4_TC1WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 25, periph)
/* pa4_tc2wo0g3_in */
#define PA4_TC2WO0G3_IN        MCHP_PINMUX(a, 4, 0xf0, 10, periph)
/* pa4_tc2wo0_out */
#define PA4_TC2WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 26, periph)
/* pa4_tc2wo1g2_in */
#define PA4_TC2WO1G2_IN        MCHP_PINMUX(a, 4, 0xf4, 15, periph)
/* pa4_tc2wo1_out */
#define PA4_TC2WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 26, periph)
/* pa4_tc3wo0g3_in */
#define PA4_TC3WO0G3_IN        MCHP_PINMUX(a, 4, 0x100, 10, periph)
/* pa4_tc3wo0_out */
#define PA4_TC3WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 27, periph)
/* pa4_tc3wo1g2_in */
#define PA4_TC3WO1G2_IN        MCHP_PINMUX(a, 4, 0x104, 15, periph)
/* pa4_tc3wo1_out */
#define PA4_TC3WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 27, periph)
/* pa4_tc4wo0g3_in */
#define PA4_TC4WO0G3_IN        MCHP_PINMUX(a, 4, 0x110, 10, periph)
/* pa4_tc4wo0_out */
#define PA4_TC4WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 28, periph)
/* pa4_tc4wo1g2_in */
#define PA4_TC4WO1G2_IN        MCHP_PINMUX(a, 4, 0x114, 15, periph)
/* pa4_tc4wo1_out */
#define PA4_TC4WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 28, periph)
/* pa4_tc5wo0g3_in */
#define PA4_TC5WO0G3_IN        MCHP_PINMUX(a, 4, 0x120, 10, periph)
/* pa4_tc5wo0_out */
#define PA4_TC5WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 29, periph)
/* pa4_tc5wo1g2_in */
#define PA4_TC5WO1G2_IN        MCHP_PINMUX(a, 4, 0x124, 15, periph)
/* pa4_tc5wo1_out */
#define PA4_TC5WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 29, periph)
/* pa4_tc6wo0g3_in */
#define PA4_TC6WO0G3_IN        MCHP_PINMUX(a, 4, 0x130, 10, periph)
/* pa4_tc6wo0_out */
#define PA4_TC6WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 30, periph)
/* pa4_tc6wo1g2_in */
#define PA4_TC6WO1G2_IN        MCHP_PINMUX(a, 4, 0x134, 15, periph)
/* pa4_tc6wo1_out */
#define PA4_TC6WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 30, periph)
/* pa4_tc7wo0g3_in */
#define PA4_TC7WO0G3_IN        MCHP_PINMUX(a, 4, 0x140, 10, periph)
/* pa4_tc7wo0_out */
#define PA4_TC7WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 31, periph)
/* pa4_tc7wo1g2_in */
#define PA4_TC7WO1G2_IN        MCHP_PINMUX(a, 4, 0x144, 15, periph)
/* pa4_tc7wo1_out */
#define PA4_TC7WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 31, periph)
/* pa4_tc8wo0g3_in */
#define PA4_TC8WO0G3_IN        MCHP_PINMUX(a, 4, 0x150, 10, periph)
/* pa4_tc8wo0_out */
#define PA4_TC8WO0_OUT         MCHP_PINMUX(a, 4, 0x240, 32, periph)
/* pa4_tc8wo1g2_in */
#define PA4_TC8WO1G2_IN        MCHP_PINMUX(a, 4, 0x154, 15, periph)
/* pa4_tc8wo1g5_in */
#define PA4_TC8WO1G5_IN        MCHP_PINMUX(a, 4, 0x158, 1, periph)
/* pa4_tc8wo1_out */
#define PA4_TC8WO1_OUT         MCHP_PINMUX(a, 4, 0x23c, 32, periph)
/* pa4_tc9wo0g2_in */
#define PA4_TC9WO0G2_IN        MCHP_PINMUX(a, 4, 0x15c, 15, periph)
/* pa4_tc9wo0_out */
#define PA4_TC9WO0_OUT         MCHP_PINMUX(a, 4, 0x23c, 33, periph)
/* pa4_tc9wo1g3_in */
#define PA4_TC9WO1G3_IN        MCHP_PINMUX(a, 4, 0x164, 10, periph)
/* pa4_tc9wo1g5_in */
#define PA4_TC9WO1G5_IN        MCHP_PINMUX(a, 4, 0x168, 1, periph)
/* pa4_tc9wo1_out */
#define PA4_TC9WO1_OUT         MCHP_PINMUX(a, 4, 0x240, 33, periph)
/* pa4_tcc0wo0_out */
#define PA4_TCC0WO0_OUT        MCHP_PINMUX(a, 4, 0x240, 18, periph)
/* pa4_tcc0wo1_out */
#define PA4_TCC0WO1_OUT        MCHP_PINMUX(a, 4, 0x23c, 17, periph)
/* pa4_tcc0wo2_out */
#define PA4_TCC0WO2_OUT        MCHP_PINMUX(a, 4, 0x240, 17, periph)
/* pa4_tcc0wo3_out */
#define PA4_TCC0WO3_OUT        MCHP_PINMUX(a, 4, 0x23c, 19, periph)
/* pa4_tcc0wo4_out */
#define PA4_TCC0WO4_OUT        MCHP_PINMUX(a, 4, 0x240, 19, periph)
/* pa4_tcc0wo5_out */
#define PA4_TCC0WO5_OUT        MCHP_PINMUX(a, 4, 0x23c, 18, periph)
/* pa4_tcc1wo0_out */
#define PA4_TCC1WO0_OUT        MCHP_PINMUX(a, 4, 0x240, 21, periph)
/* pa4_tcc1wo1_out */
#define PA4_TCC1WO1_OUT        MCHP_PINMUX(a, 4, 0x23c, 20, periph)
/* pa4_tcc1wo2_out */
#define PA4_TCC1WO2_OUT        MCHP_PINMUX(a, 4, 0x240, 20, periph)
/* pa4_tcc1wo3_out */
#define PA4_TCC1WO3_OUT        MCHP_PINMUX(a, 4, 0x23c, 22, periph)
/* pa4_tcc1wo4_out */
#define PA4_TCC1WO4_OUT        MCHP_PINMUX(a, 4, 0x240, 22, periph)
/* pa4_tcc1wo5_out */
#define PA4_TCC1WO5_OUT        MCHP_PINMUX(a, 4, 0x23c, 21, periph)
/* pa4_tcc2wo0_out */
#define PA4_TCC2WO0_OUT        MCHP_PINMUX(a, 4, 0x240, 23, periph)
/* pa4_tcc2wo1_out */
#define PA4_TCC2WO1_OUT        MCHP_PINMUX(a, 4, 0x23c, 23, periph)
/* pa4_tstbus1_out */
#define PA4_TSTBUS1_OUT        MCHP_PINMUX(a, 4, 0x240, 38, periph)
/* pa4_tstbus3_out */
#define PA4_TSTBUS3_OUT        MCHP_PINMUX(a, 4, 0x244, 15, periph)
/* pa4_tstbus5_out */
#define PA4_TSTBUS5_OUT        MCHP_PINMUX(a, 4, 0x23c, 38, periph)
/* pa4_tstbus7_out */
#define PA4_TSTBUS7_OUT        MCHP_PINMUX(a, 4, 0x244, 16, periph)
/* pa4_tstbus9_out */
#define PA4_TSTBUS9_OUT        MCHP_PINMUX(a, 4, 0x23c, 39, periph)
/* pa4_tstbus10_out */
#define PA4_TSTBUS10_OUT       MCHP_PINMUX(a, 4, 0x240, 39, periph)
/* pa4_tstbus11_out */
#define PA4_TSTBUS11_OUT       MCHP_PINMUX(a, 4, 0x244, 17, periph)
/* pa5_ac_cmp0_out */
#define PA5_AC_CMP0_OUT        MCHP_PINMUX(a, 5, 0x248, 40, periph)
/* pa5_ac_cmp1_out */
#define PA5_AC_CMP1_OUT        MCHP_PINMUX(a, 5, 0x24c, 36, periph)
/* pa5_ac_cmptout_out */
#define PA5_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 5, 0x24c, 37, periph)
/* pa5_ac_cmptrdy_out */
#define PA5_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 5, 0x248, 41, periph)
/* pa5_can1rx_in */
#define PA5_CAN1RX_IN          MCHP_PINMUX(a, 5, 0x190, 15, periph)
/* pa5_can1_tx_out */
#define PA5_CAN1_TX_OUT        MCHP_PINMUX(a, 5, 0x24c, 38, periph)
/* pa5_cclin2_in */
#define PA5_CCLIN2_IN          MCHP_PINMUX(a, 5, 0xbc, 15, periph)
/* pa5_cclin5_in */
#define PA5_CCLIN5_IN          MCHP_PINMUX(a, 5, 0xc8, 15, periph)
/* pa5_cclo0_out */
#define PA5_CCLO0_OUT          MCHP_PINMUX(a, 5, 0x248, 1, periph)
/* pa5_cclo1_out */
#define PA5_CCLO1_OUT          MCHP_PINMUX(a, 5, 0x24c, 1, periph)
/* pa5_coexwlanact_in */
#define PA5_COEXWLANACT_IN     MCHP_PINMUX(a, 5, 0x194, 18, periph)
/* pa5_extint2_in */
#define PA5_EXTINT2_IN         MCHP_PINMUX(a, 5, 0x8, 15, periph)
/* pa5_extint3_in */
#define PA5_EXTINT3_IN         MCHP_PINMUX(a, 5, 0xc, 18, periph)
/* pa5_fectrl3_out */
#define PA5_FECTRL3_OUT        MCHP_PINMUX(a, 5, 0x24c, 39, periph)
/* pa5_fectrl4_out */
#define PA5_FECTRL4_OUT        MCHP_PINMUX(a, 5, 0x248, 42, periph)
/* pa5_fectrl5_out */
#define PA5_FECTRL5_OUT        MCHP_PINMUX(a, 5, 0x24c, 40, periph)
/* pa5_nmi_in */
#define PA5_NMI_IN             MCHP_PINMUX(a, 5, 0x3c, 18, periph)
/* pa5_qd0_in */
#define PA5_QD0_IN             MCHP_PINMUX(a, 5, 0xa0, 18, periph)
/* pa5_qd0_out */
#define PA5_QD0_OUT            MCHP_PINMUX(a, 5, 0x248, 36, periph)
/* pa5_qd1_out */
#define PA5_QD1_OUT            MCHP_PINMUX(a, 5, 0x248, 35, periph)
/* pa5_qd2_out */
#define PA5_QD2_OUT            MCHP_PINMUX(a, 5, 0x24c, 31, periph)
/* pa5_qd3_in */
#define PA5_QD3_IN             MCHP_PINMUX(a, 5, 0xac, 15, periph)
/* pa5_qd3_out */
#define PA5_QD3_OUT            MCHP_PINMUX(a, 5, 0x248, 37, periph)
/* pa5_qeiindx0g3_in */
#define PA5_QEIINDX0G3_IN      MCHP_PINMUX(a, 5, 0x178, 15, periph)
/* pa5_qeiqea0g3_in */
#define PA5_QEIQEA0G3_IN       MCHP_PINMUX(a, 5, 0x17c, 15, periph)
/* pa5_qeiqea0g4_in */
#define PA5_QEIQEA0G4_IN       MCHP_PINMUX(a, 5, 0x180, 18, periph)
/* pa5_qeiqeb0g4_in */
#define PA5_QEIQEB0G4_IN       MCHP_PINMUX(a, 5, 0x184, 18, periph)
/* pa5_qspics_out */
#define PA5_QSPICS_OUT         MCHP_PINMUX(a, 5, 0x248, 34, periph)
/* pa5_qspi_sck_out */
#define PA5_QSPI_SCK_OUT       MCHP_PINMUX(a, 5, 0x250, 7, periph)
/* pa5_refi_in */
#define PA5_REFI_IN            MCHP_PINMUX(a, 5, 0xb0, 1, periph)
/* pa5_refo1_out */
#define PA5_REFO1_OUT          MCHP_PINMUX(a, 5, 0x250, 8, periph)
/* pa5_refo2_out */
#define PA5_REFO2_OUT          MCHP_PINMUX(a, 5, 0x250, 9, periph)
/* pa5_refo3_out */
#define PA5_REFO3_OUT          MCHP_PINMUX(a, 5, 0x250, 10, periph)
/* pa5_refo4_out */
#define PA5_REFO4_OUT          MCHP_PINMUX(a, 5, 0x250, 11, periph)
/* pa5_scom0p0_out */
#define PA5_SCOM0P0_OUT        MCHP_PINMUX(a, 5, 0x248, 2, periph)
/* pa5_scom0p1_in */
#define PA5_SCOM0P1_IN         MCHP_PINMUX(a, 5, 0x44, 1, periph)
/* pa5_scom0p1_out */
#define PA5_SCOM0P1_OUT        MCHP_PINMUX(a, 5, 0x250, 1, periph)
/* pa5_scom0p2_in */
#define PA5_SCOM0P2_IN         MCHP_PINMUX(a, 5, 0x48, 18, periph)
/* pa5_scom0p2_out */
#define PA5_SCOM0P2_OUT        MCHP_PINMUX(a, 5, 0x24c, 2, periph)
/* pa5_scom0p3_out */
#define PA5_SCOM0P3_OUT        MCHP_PINMUX(a, 5, 0x248, 3, periph)
/* pa5_scom1p0_in */
#define PA5_SCOM1P0_IN         MCHP_PINMUX(a, 5, 0x50, 15, periph)
/* pa5_scom1p0_out */
#define PA5_SCOM1P0_OUT        MCHP_PINMUX(a, 5, 0x248, 5, periph)
/* pa5_scom1p1_in */
#define PA5_SCOM1P1_IN         MCHP_PINMUX(a, 5, 0x54, 1, periph)
/* pa5_scom1p1_out */
#define PA5_SCOM1P1_OUT        MCHP_PINMUX(a, 5, 0x250, 2, periph)
/* pa5_scom1p2_out */
#define PA5_SCOM1P2_OUT        MCHP_PINMUX(a, 5, 0x248, 4, periph)
/* pa5_scom1p3_out */
#define PA5_SCOM1P3_OUT        MCHP_PINMUX(a, 5, 0x248, 6, periph)
/* pa5_scom2p0_out */
#define PA5_SCOM2P0_OUT        MCHP_PINMUX(a, 5, 0x248, 7, periph)
/* pa5_scom2p1_in */
#define PA5_SCOM2P1_IN         MCHP_PINMUX(a, 5, 0x64, 1, periph)
/* pa5_scom2p1_out */
#define PA5_SCOM2P1_OUT        MCHP_PINMUX(a, 5, 0x250, 3, periph)
/* pa5_scom2p2_in */
#define PA5_SCOM2P2_IN         MCHP_PINMUX(a, 5, 0x68, 18, periph)
/* pa5_scom2p2_out */
#define PA5_SCOM2P2_OUT        MCHP_PINMUX(a, 5, 0x24c, 6, periph)
/* pa5_scom2p3_out */
#define PA5_SCOM2P3_OUT        MCHP_PINMUX(a, 5, 0x248, 8, periph)
/* pa5_scom3p0_in */
#define PA5_SCOM3P0_IN         MCHP_PINMUX(a, 5, 0x70, 15, periph)
/* pa5_scom3p0_out */
#define PA5_SCOM3P0_OUT        MCHP_PINMUX(a, 5, 0x248, 10, periph)
/* pa5_scom3p1_in */
#define PA5_SCOM3P1_IN         MCHP_PINMUX(a, 5, 0x74, 1, periph)
/* pa5_scom3p1_out */
#define PA5_SCOM3P1_OUT        MCHP_PINMUX(a, 5, 0x250, 4, periph)
/* pa5_scom3p2_out */
#define PA5_SCOM3P2_OUT        MCHP_PINMUX(a, 5, 0x248, 9, periph)
/* pa5_scom3p3_out */
#define PA5_SCOM3P3_OUT        MCHP_PINMUX(a, 5, 0x248, 11, periph)
/* pa5_scom4p0_out */
#define PA5_SCOM4P0_OUT        MCHP_PINMUX(a, 5, 0x248, 12, periph)
/* pa5_scom4p1_in */
#define PA5_SCOM4P1_IN         MCHP_PINMUX(a, 5, 0x84, 1, periph)
/* pa5_scom4p1_out */
#define PA5_SCOM4P1_OUT        MCHP_PINMUX(a, 5, 0x250, 5, periph)
/* pa5_scom4p2_in */
#define PA5_SCOM4P2_IN         MCHP_PINMUX(a, 5, 0x88, 18, periph)
/* pa5_scom4p2_out */
#define PA5_SCOM4P2_OUT        MCHP_PINMUX(a, 5, 0x24c, 10, periph)
/* pa5_scom4p3_out */
#define PA5_SCOM4P3_OUT        MCHP_PINMUX(a, 5, 0x248, 13, periph)
/* pa5_scom5p0_in */
#define PA5_SCOM5P0_IN         MCHP_PINMUX(a, 5, 0x90, 15, periph)
/* pa5_scom5p0_out */
#define PA5_SCOM5P0_OUT        MCHP_PINMUX(a, 5, 0x248, 15, periph)
/* pa5_scom5p1_in */
#define PA5_SCOM5P1_IN         MCHP_PINMUX(a, 5, 0x94, 1, periph)
/* pa5_scom5p1_out */
#define PA5_SCOM5P1_OUT        MCHP_PINMUX(a, 5, 0x250, 6, periph)
/* pa5_scom5p2_out */
#define PA5_SCOM5P2_OUT        MCHP_PINMUX(a, 5, 0x248, 14, periph)
/* pa5_scom5p3_out */
#define PA5_SCOM5P3_OUT        MCHP_PINMUX(a, 5, 0x248, 16, periph)
/* pa5_tc0wo0_out */
#define PA5_TC0WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 24, periph)
/* pa5_tc0wo1g3_in */
#define PA5_TC0WO1G3_IN        MCHP_PINMUX(a, 5, 0xd4, 15, periph)
/* pa5_tc0wo1g4_in */
#define PA5_TC0WO1G4_IN        MCHP_PINMUX(a, 5, 0xd8, 18, periph)
/* pa5_tc1wo0_out */
#define PA5_TC1WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 25, periph)
/* pa5_tc1wo1_out */
#define PA5_TC1WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 22, periph)
/* pa5_tc2wo0g3_in */
#define PA5_TC2WO0G3_IN        MCHP_PINMUX(a, 5, 0xf0, 15, periph)
/* pa5_tc2wo0_out */
#define PA5_TC2WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 26, periph)
/* pa5_tc2wo1g4_in */
#define PA5_TC2WO1G4_IN        MCHP_PINMUX(a, 5, 0xf8, 18, periph)
/* pa5_tc2wo1_out */
#define PA5_TC2WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 23, periph)
/* pa5_tc3wo0g3_in */
#define PA5_TC3WO0G3_IN        MCHP_PINMUX(a, 5, 0x100, 15, periph)
/* pa5_tc3wo0_out */
#define PA5_TC3WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 27, periph)
/* pa5_tc3wo1g4_in */
#define PA5_TC3WO1G4_IN        MCHP_PINMUX(a, 5, 0x108, 18, periph)
/* pa5_tc3wo1_out */
#define PA5_TC3WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 24, periph)
/* pa5_tc4wo0g3_in */
#define PA5_TC4WO0G3_IN        MCHP_PINMUX(a, 5, 0x110, 15, periph)
/* pa5_tc4wo0_out */
#define PA5_TC4WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 28, periph)
/* pa5_tc4wo1g4_in */
#define PA5_TC4WO1G4_IN        MCHP_PINMUX(a, 5, 0x118, 18, periph)
/* pa5_tc4wo1_out */
#define PA5_TC4WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 25, periph)
/* pa5_tc5wo0g3_in */
#define PA5_TC5WO0G3_IN        MCHP_PINMUX(a, 5, 0x120, 15, periph)
/* pa5_tc5wo0_out */
#define PA5_TC5WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 29, periph)
/* pa5_tc5wo1g4_in */
#define PA5_TC5WO1G4_IN        MCHP_PINMUX(a, 5, 0x128, 18, periph)
/* pa5_tc5wo1_out */
#define PA5_TC5WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 26, periph)
/* pa5_tc6wo0g3_in */
#define PA5_TC6WO0G3_IN        MCHP_PINMUX(a, 5, 0x130, 15, periph)
/* pa5_tc6wo0_out */
#define PA5_TC6WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 30, periph)
/* pa5_tc6wo1g4_in */
#define PA5_TC6WO1G4_IN        MCHP_PINMUX(a, 5, 0x138, 18, periph)
/* pa5_tc6wo1_out */
#define PA5_TC6WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 27, periph)
/* pa5_tc7wo0g3_in */
#define PA5_TC7WO0G3_IN        MCHP_PINMUX(a, 5, 0x140, 15, periph)
/* pa5_tc7wo0_out */
#define PA5_TC7WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 31, periph)
/* pa5_tc7wo1g4_in */
#define PA5_TC7WO1G4_IN        MCHP_PINMUX(a, 5, 0x148, 18, periph)
/* pa5_tc7wo1_out */
#define PA5_TC7WO1_OUT         MCHP_PINMUX(a, 5, 0x24c, 28, periph)
/* pa5_tc8wo0g3_in */
#define PA5_TC8WO0G3_IN        MCHP_PINMUX(a, 5, 0x150, 15, periph)
/* pa5_tc8wo0_out */
#define PA5_TC8WO0_OUT         MCHP_PINMUX(a, 5, 0x248, 32, periph)
/* pa5_tc9wo0g4_in */
#define PA5_TC9WO0G4_IN        MCHP_PINMUX(a, 5, 0x160, 18, periph)
/* pa5_tc9wo0_out */
#define PA5_TC9WO0_OUT         MCHP_PINMUX(a, 5, 0x24c, 29, periph)
/* pa5_tc9wo1g3_in */
#define PA5_TC9WO1G3_IN        MCHP_PINMUX(a, 5, 0x164, 15, periph)
/* pa5_tc9wo1_out */
#define PA5_TC9WO1_OUT         MCHP_PINMUX(a, 5, 0x248, 33, periph)
/* pa5_tcc0wo0_out */
#define PA5_TCC0WO0_OUT        MCHP_PINMUX(a, 5, 0x248, 18, periph)
/* pa5_tcc0wo1_out */
#define PA5_TCC0WO1_OUT        MCHP_PINMUX(a, 5, 0x24c, 15, periph)
/* pa5_tcc0wo2_out */
#define PA5_TCC0WO2_OUT        MCHP_PINMUX(a, 5, 0x248, 17, periph)
/* pa5_tcc0wo3_out */
#define PA5_TCC0WO3_OUT        MCHP_PINMUX(a, 5, 0x24c, 14, periph)
/* pa5_tcc0wo4_out */
#define PA5_TCC0WO4_OUT        MCHP_PINMUX(a, 5, 0x248, 19, periph)
/* pa5_tcc0wo5_out */
#define PA5_TCC0WO5_OUT        MCHP_PINMUX(a, 5, 0x24c, 16, periph)
/* pa5_tcc1wo0_out */
#define PA5_TCC1WO0_OUT        MCHP_PINMUX(a, 5, 0x248, 21, periph)
/* pa5_tcc1wo1_out */
#define PA5_TCC1WO1_OUT        MCHP_PINMUX(a, 5, 0x24c, 18, periph)
/* pa5_tcc1wo2_out */
#define PA5_TCC1WO2_OUT        MCHP_PINMUX(a, 5, 0x248, 20, periph)
/* pa5_tcc1wo3_out */
#define PA5_TCC1WO3_OUT        MCHP_PINMUX(a, 5, 0x24c, 17, periph)
/* pa5_tcc1wo4_out */
#define PA5_TCC1WO4_OUT        MCHP_PINMUX(a, 5, 0x248, 22, periph)
/* pa5_tcc1wo5_out */
#define PA5_TCC1WO5_OUT        MCHP_PINMUX(a, 5, 0x24c, 19, periph)
/* pa5_tcc2wo0_out */
#define PA5_TCC2WO0_OUT        MCHP_PINMUX(a, 5, 0x248, 23, periph)
/* pa5_tcc2wo1_out */
#define PA5_TCC2WO1_OUT        MCHP_PINMUX(a, 5, 0x24c, 20, periph)
/* pa5_tstbus1_out */
#define PA5_TSTBUS1_OUT        MCHP_PINMUX(a, 5, 0x248, 38, periph)
/* pa5_tstbus2_out */
#define PA5_TSTBUS2_OUT        MCHP_PINMUX(a, 5, 0x24c, 34, periph)
/* pa5_tstbus6_out */
#define PA5_TSTBUS6_OUT        MCHP_PINMUX(a, 5, 0x24c, 35, periph)
/* pa5_tstbus10_out */
#define PA5_TSTBUS10_OUT       MCHP_PINMUX(a, 5, 0x248, 39, periph)
/* pa6_accmpten_in */
#define PA6_ACCMPTEN_IN        MCHP_PINMUX(a, 6, 0x18c, 2, periph)
/* pa6_ac_cmp1_out */
#define PA6_AC_CMP1_OUT        MCHP_PINMUX(a, 6, 0x258, 36, periph)
/* pa6_ac_cmptout_out */
#define PA6_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 6, 0x258, 37, periph)
/* pa6_can1_tx_out */
#define PA6_CAN1_TX_OUT        MCHP_PINMUX(a, 6, 0x258, 38, periph)
/* pa6_cclin0_in */
#define PA6_CCLIN0_IN          MCHP_PINMUX(a, 6, 0xb4, 2, periph)
/* pa6_cclin3_in */
#define PA6_CCLIN3_IN          MCHP_PINMUX(a, 6, 0xc0, 2, periph)
/* pa6_cclo1_out */
#define PA6_CCLO1_OUT          MCHP_PINMUX(a, 6, 0x258, 1, periph)
/* pa6_coexwlanact_in */
#define PA6_COEXWLANACT_IN     MCHP_PINMUX(a, 6, 0x194, 13, periph)
/* pa6_coex_bt_state_out */
#define PA6_COEX_BT_STATE_OUT  MCHP_PINMUX(a, 6, 0x254, 37, periph)
/* pa6_extint0_in */
#define PA6_EXTINT0_IN         MCHP_PINMUX(a, 6, 0x0, 2, periph)
/* pa6_extint3_in */
#define PA6_EXTINT3_IN         MCHP_PINMUX(a, 6, 0xc, 13, periph)
/* pa6_fectrl1_out */
#define PA6_FECTRL1_OUT        MCHP_PINMUX(a, 6, 0x254, 35, periph)
/* pa6_fectrl2_out */
#define PA6_FECTRL2_OUT        MCHP_PINMUX(a, 6, 0x254, 36, periph)
/* pa6_fectrl3_out */
#define PA6_FECTRL3_OUT        MCHP_PINMUX(a, 6, 0x258, 39, periph)
/* pa6_fectrl5_out */
#define PA6_FECTRL5_OUT        MCHP_PINMUX(a, 6, 0x258, 40, periph)
/* pa6_nmi_in */
#define PA6_NMI_IN             MCHP_PINMUX(a, 6, 0x3c, 13, periph)
/* pa6_qd0_in */
#define PA6_QD0_IN             MCHP_PINMUX(a, 6, 0xa0, 13, periph)
/* pa6_qd0_out */
#define PA6_QD0_OUT            MCHP_PINMUX(a, 6, 0x258, 33, periph)
/* pa6_qd1_in */
#define PA6_QD1_IN             MCHP_PINMUX(a, 6, 0xa4, 2, periph)
/* pa6_qd1_out */
#define PA6_QD1_OUT            MCHP_PINMUX(a, 6, 0x254, 30, periph)
/* pa6_qd2_out */
#define PA6_QD2_OUT            MCHP_PINMUX(a, 6, 0x254, 29, periph)
/* pa6_qd3_out */
#define PA6_QD3_OUT            MCHP_PINMUX(a, 6, 0x254, 28, periph)
/* pa6_qeiccmp0_out */
#define PA6_QEICCMP0_OUT       MCHP_PINMUX(a, 6, 0x254, 31, periph)
/* pa6_qeihome0g1_in */
#define PA6_QEIHOME0G1_IN      MCHP_PINMUX(a, 6, 0x16c, 2, periph)
/* pa6_qeiqea0g4_in */
#define PA6_QEIQEA0G4_IN       MCHP_PINMUX(a, 6, 0x180, 13, periph)
/* pa6_qeiqeb0g4_in */
#define PA6_QEIQEB0G4_IN       MCHP_PINMUX(a, 6, 0x184, 13, periph)
/* pa6_qspics_out */
#define PA6_QSPICS_OUT         MCHP_PINMUX(a, 6, 0x254, 27, periph)
/* pa6_qspi_sck_out */
#define PA6_QSPI_SCK_OUT       MCHP_PINMUX(a, 6, 0x25c, 7, periph)
/* pa6_refi_in */
#define PA6_REFI_IN            MCHP_PINMUX(a, 6, 0xb0, 7, periph)
/* pa6_refo1_out */
#define PA6_REFO1_OUT          MCHP_PINMUX(a, 6, 0x25c, 8, periph)
/* pa6_refo2_out */
#define PA6_REFO2_OUT          MCHP_PINMUX(a, 6, 0x25c, 9, periph)
/* pa6_refo3_out */
#define PA6_REFO3_OUT          MCHP_PINMUX(a, 6, 0x25c, 10, periph)
/* pa6_refo4_out */
#define PA6_REFO4_OUT          MCHP_PINMUX(a, 6, 0x25c, 11, periph)
/* pa6_scom0p0_out */
#define PA6_SCOM0P0_OUT        MCHP_PINMUX(a, 6, 0x258, 3, periph)
/* pa6_scom0p1_in */
#define PA6_SCOM0P1_IN         MCHP_PINMUX(a, 6, 0x44, 7, periph)
/* pa6_scom0p1_out */
#define PA6_SCOM0P1_OUT        MCHP_PINMUX(a, 6, 0x25c, 1, periph)
/* pa6_scom0p2_in */
#define PA6_SCOM0P2_IN         MCHP_PINMUX(a, 6, 0x48, 13, periph)
/* pa6_scom0p2_out */
#define PA6_SCOM0P2_OUT        MCHP_PINMUX(a, 6, 0x254, 2, periph)
/* pa6_scom0p3_in */
#define PA6_SCOM0P3_IN         MCHP_PINMUX(a, 6, 0x4c, 2, periph)
/* pa6_scom0p3_out */
#define PA6_SCOM0P3_OUT        MCHP_PINMUX(a, 6, 0x254, 1, periph)
/* pa6_scom1p0_out */
#define PA6_SCOM1P0_OUT        MCHP_PINMUX(a, 6, 0x254, 3, periph)
/* pa6_scom1p1_in */
#define PA6_SCOM1P1_IN         MCHP_PINMUX(a, 6, 0x54, 7, periph)
/* pa6_scom1p1_out */
#define PA6_SCOM1P1_OUT        MCHP_PINMUX(a, 6, 0x25c, 2, periph)
/* pa6_scom1p2_in */
#define PA6_SCOM1P2_IN         MCHP_PINMUX(a, 6, 0x58, 2, periph)
/* pa6_scom1p2_out */
#define PA6_SCOM1P2_OUT        MCHP_PINMUX(a, 6, 0x254, 4, periph)
/* pa6_scom1p3_out */
#define PA6_SCOM1P3_OUT        MCHP_PINMUX(a, 6, 0x258, 4, periph)
/* pa6_scom2p0_out */
#define PA6_SCOM2P0_OUT        MCHP_PINMUX(a, 6, 0x258, 7, periph)
/* pa6_scom2p1_in */
#define PA6_SCOM2P1_IN         MCHP_PINMUX(a, 6, 0x64, 7, periph)
/* pa6_scom2p1_out */
#define PA6_SCOM2P1_OUT        MCHP_PINMUX(a, 6, 0x25c, 3, periph)
/* pa6_scom2p2_in */
#define PA6_SCOM2P2_IN         MCHP_PINMUX(a, 6, 0x68, 13, periph)
/* pa6_scom2p2_out */
#define PA6_SCOM2P2_OUT        MCHP_PINMUX(a, 6, 0x254, 6, periph)
/* pa6_scom2p3_in */
#define PA6_SCOM2P3_IN         MCHP_PINMUX(a, 6, 0x6c, 2, periph)
/* pa6_scom2p3_out */
#define PA6_SCOM2P3_OUT        MCHP_PINMUX(a, 6, 0x254, 5, periph)
/* pa6_scom3p0_out */
#define PA6_SCOM3P0_OUT        MCHP_PINMUX(a, 6, 0x254, 7, periph)
/* pa6_scom3p1_in */
#define PA6_SCOM3P1_IN         MCHP_PINMUX(a, 6, 0x74, 7, periph)
/* pa6_scom3p1_out */
#define PA6_SCOM3P1_OUT        MCHP_PINMUX(a, 6, 0x25c, 4, periph)
/* pa6_scom3p2_in */
#define PA6_SCOM3P2_IN         MCHP_PINMUX(a, 6, 0x78, 2, periph)
/* pa6_scom3p2_out */
#define PA6_SCOM3P2_OUT        MCHP_PINMUX(a, 6, 0x254, 8, periph)
/* pa6_scom3p3_out */
#define PA6_SCOM3P3_OUT        MCHP_PINMUX(a, 6, 0x258, 8, periph)
/* pa6_scom4p0_out */
#define PA6_SCOM4P0_OUT        MCHP_PINMUX(a, 6, 0x258, 11, periph)
/* pa6_scom4p1_in */
#define PA6_SCOM4P1_IN         MCHP_PINMUX(a, 6, 0x84, 7, periph)
/* pa6_scom4p1_out */
#define PA6_SCOM4P1_OUT        MCHP_PINMUX(a, 6, 0x25c, 5, periph)
/* pa6_scom4p2_in */
#define PA6_SCOM4P2_IN         MCHP_PINMUX(a, 6, 0x88, 13, periph)
/* pa6_scom4p2_out */
#define PA6_SCOM4P2_OUT        MCHP_PINMUX(a, 6, 0x254, 10, periph)
/* pa6_scom4p3_in */
#define PA6_SCOM4P3_IN         MCHP_PINMUX(a, 6, 0x8c, 2, periph)
/* pa6_scom4p3_out */
#define PA6_SCOM4P3_OUT        MCHP_PINMUX(a, 6, 0x254, 9, periph)
/* pa6_scom5p0_out */
#define PA6_SCOM5P0_OUT        MCHP_PINMUX(a, 6, 0x254, 11, periph)
/* pa6_scom5p1_in */
#define PA6_SCOM5P1_IN         MCHP_PINMUX(a, 6, 0x94, 7, periph)
/* pa6_scom5p1_out */
#define PA6_SCOM5P1_OUT        MCHP_PINMUX(a, 6, 0x25c, 6, periph)
/* pa6_scom5p2_in */
#define PA6_SCOM5P2_IN         MCHP_PINMUX(a, 6, 0x98, 2, periph)
/* pa6_scom5p2_out */
#define PA6_SCOM5P2_OUT        MCHP_PINMUX(a, 6, 0x254, 12, periph)
/* pa6_scom5p3_out */
#define PA6_SCOM5P3_OUT        MCHP_PINMUX(a, 6, 0x258, 12, periph)
/* pa6_tc0wo0g1_in */
#define PA6_TC0WO0G1_IN        MCHP_PINMUX(a, 6, 0xcc, 2, periph)
/* pa6_tc0wo0_out */
#define PA6_TC0WO0_OUT         MCHP_PINMUX(a, 6, 0x258, 21, periph)
/* pa6_tc0wo1g4_in */
#define PA6_TC0WO1G4_IN        MCHP_PINMUX(a, 6, 0xd8, 13, periph)
/* pa6_tc0wo1_out */
#define PA6_TC0WO1_OUT         MCHP_PINMUX(a, 6, 0x254, 18, periph)
/* pa6_tc1wo0g1_in */
#define PA6_TC1WO0G1_IN        MCHP_PINMUX(a, 6, 0xdc, 2, periph)
/* pa6_tc1wo0_out */
#define PA6_TC1WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 19, periph)
/* pa6_tc1wo1_out */
#define PA6_TC1WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 22, periph)
/* pa6_tc2wo0g1_in */
#define PA6_TC2WO0G1_IN        MCHP_PINMUX(a, 6, 0xec, 2, periph)
/* pa6_tc2wo0_out */
#define PA6_TC2WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 20, periph)
/* pa6_tc2wo1g4_in */
#define PA6_TC2WO1G4_IN        MCHP_PINMUX(a, 6, 0xf8, 13, periph)
/* pa6_tc2wo1_out */
#define PA6_TC2WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 23, periph)
/* pa6_tc3wo0g1_in */
#define PA6_TC3WO0G1_IN        MCHP_PINMUX(a, 6, 0xfc, 2, periph)
/* pa6_tc3wo0_out */
#define PA6_TC3WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 21, periph)
/* pa6_tc3wo1g4_in */
#define PA6_TC3WO1G4_IN        MCHP_PINMUX(a, 6, 0x108, 13, periph)
/* pa6_tc3wo1_out */
#define PA6_TC3WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 24, periph)
/* pa6_tc4wo0g1_in */
#define PA6_TC4WO0G1_IN        MCHP_PINMUX(a, 6, 0x10c, 2, periph)
/* pa6_tc4wo0_out */
#define PA6_TC4WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 22, periph)
/* pa6_tc4wo1g4_in */
#define PA6_TC4WO1G4_IN        MCHP_PINMUX(a, 6, 0x118, 13, periph)
/* pa6_tc4wo1_out */
#define PA6_TC4WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 25, periph)
/* pa6_tc5wo0g1_in */
#define PA6_TC5WO0G1_IN        MCHP_PINMUX(a, 6, 0x11c, 2, periph)
/* pa6_tc5wo0_out */
#define PA6_TC5WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 23, periph)
/* pa6_tc5wo1g4_in */
#define PA6_TC5WO1G4_IN        MCHP_PINMUX(a, 6, 0x128, 13, periph)
/* pa6_tc5wo1_out */
#define PA6_TC5WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 26, periph)
/* pa6_tc6wo0g1_in */
#define PA6_TC6WO0G1_IN        MCHP_PINMUX(a, 6, 0x12c, 2, periph)
/* pa6_tc6wo0_out */
#define PA6_TC6WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 24, periph)
/* pa6_tc6wo1g4_in */
#define PA6_TC6WO1G4_IN        MCHP_PINMUX(a, 6, 0x138, 13, periph)
/* pa6_tc6wo1_out */
#define PA6_TC6WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 27, periph)
/* pa6_tc7wo0g1_in */
#define PA6_TC7WO0G1_IN        MCHP_PINMUX(a, 6, 0x13c, 2, periph)
/* pa6_tc7wo0_out */
#define PA6_TC7WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 25, periph)
/* pa6_tc7wo1g4_in */
#define PA6_TC7WO1G4_IN        MCHP_PINMUX(a, 6, 0x148, 13, periph)
/* pa6_tc7wo1_out */
#define PA6_TC7WO1_OUT         MCHP_PINMUX(a, 6, 0x258, 28, periph)
/* pa6_tc8wo0g1_in */
#define PA6_TC8WO0G1_IN        MCHP_PINMUX(a, 6, 0x14c, 2, periph)
/* pa6_tc8wo0_out */
#define PA6_TC8WO0_OUT         MCHP_PINMUX(a, 6, 0x254, 26, periph)
/* pa6_tc9wo0g4_in */
#define PA6_TC9WO0G4_IN        MCHP_PINMUX(a, 6, 0x160, 13, periph)
/* pa6_tc9wo0_out */
#define PA6_TC9WO0_OUT         MCHP_PINMUX(a, 6, 0x258, 29, periph)
/* pa6_tcc0wo0_out */
#define PA6_TCC0WO0_OUT        MCHP_PINMUX(a, 6, 0x254, 13, periph)
/* pa6_tcc0wo1_out */
#define PA6_TCC0WO1_OUT        MCHP_PINMUX(a, 6, 0x258, 15, periph)
/* pa6_tcc0wo3_out */
#define PA6_TCC0WO3_OUT        MCHP_PINMUX(a, 6, 0x258, 14, periph)
/* pa6_tcc0wo4_out */
#define PA6_TCC0WO4_OUT        MCHP_PINMUX(a, 6, 0x254, 14, periph)
/* pa6_tcc0wo5_out */
#define PA6_TCC0WO5_OUT        MCHP_PINMUX(a, 6, 0x258, 16, periph)
/* pa6_tcc1wo0_out */
#define PA6_TCC1WO0_OUT        MCHP_PINMUX(a, 6, 0x254, 15, periph)
/* pa6_tcc1wo1_out */
#define PA6_TCC1WO1_OUT        MCHP_PINMUX(a, 6, 0x258, 18, periph)
/* pa6_tcc1wo3_out */
#define PA6_TCC1WO3_OUT        MCHP_PINMUX(a, 6, 0x258, 17, periph)
/* pa6_tcc1wo4_out */
#define PA6_TCC1WO4_OUT        MCHP_PINMUX(a, 6, 0x254, 16, periph)
/* pa6_tcc1wo5_out */
#define PA6_TCC1WO5_OUT        MCHP_PINMUX(a, 6, 0x258, 19, periph)
/* pa6_tcc2wo0_out */
#define PA6_TCC2WO0_OUT        MCHP_PINMUX(a, 6, 0x254, 17, periph)
/* pa6_tcc2wo1_out */
#define PA6_TCC2WO1_OUT        MCHP_PINMUX(a, 6, 0x258, 20, periph)
/* pa6_tstbus0_out */
#define PA6_TSTBUS0_OUT        MCHP_PINMUX(a, 6, 0x254, 32, periph)
/* pa6_tstbus2_out */
#define PA6_TSTBUS2_OUT        MCHP_PINMUX(a, 6, 0x258, 34, periph)
/* pa6_tstbus4_out */
#define PA6_TSTBUS4_OUT        MCHP_PINMUX(a, 6, 0x254, 33, periph)
/* pa6_tstbus6_out */
#define PA6_TSTBUS6_OUT        MCHP_PINMUX(a, 6, 0x258, 35, periph)
/* pa6_tstbus8_out */
#define PA6_TSTBUS8_OUT        MCHP_PINMUX(a, 6, 0x254, 34, periph)
/* pa7_accmpten_in */
#define PA7_ACCMPTEN_IN        MCHP_PINMUX(a, 7, 0x18c, 16, periph)
/* pa7_cclin0_in */
#define PA7_CCLIN0_IN          MCHP_PINMUX(a, 7, 0xb4, 16, periph)
/* pa7_cclin1_in */
#define PA7_CCLIN1_IN          MCHP_PINMUX(a, 7, 0xb8, 2, periph)
/* pa7_cclin3_in */
#define PA7_CCLIN3_IN          MCHP_PINMUX(a, 7, 0xc0, 16, periph)
/* pa7_cclin4_in */
#define PA7_CCLIN4_IN          MCHP_PINMUX(a, 7, 0xc4, 2, periph)
/* pa7_cclo1_out */
#define PA7_CCLO1_OUT          MCHP_PINMUX(a, 7, 0x264, 1, periph)
/* pa7_coex_bt_state_out */
#define PA7_COEX_BT_STATE_OUT  MCHP_PINMUX(a, 7, 0x260, 37, periph)
/* pa7_coex_rf_act_out */
#define PA7_COEX_RF_ACT_OUT    MCHP_PINMUX(a, 7, 0x264, 41, periph)
/* pa7_extint0_in */
#define PA7_EXTINT0_IN         MCHP_PINMUX(a, 7, 0x0, 16, periph)
/* pa7_extint1_in */
#define PA7_EXTINT1_IN         MCHP_PINMUX(a, 7, 0x4, 2, periph)
/* pa7_fectrl0_out */
#define PA7_FECTRL0_OUT        MCHP_PINMUX(a, 7, 0x264, 40, periph)
/* pa7_fectrl1_out */
#define PA7_FECTRL1_OUT        MCHP_PINMUX(a, 7, 0x260, 35, periph)
/* pa7_fectrl2_out */
#define PA7_FECTRL2_OUT        MCHP_PINMUX(a, 7, 0x260, 36, periph)
/* pa7_qd0_out */
#define PA7_QD0_OUT            MCHP_PINMUX(a, 7, 0x264, 35, periph)
/* pa7_qd1_in */
#define PA7_QD1_IN             MCHP_PINMUX(a, 7, 0xa4, 16, periph)
/* pa7_qd1_out */
#define PA7_QD1_OUT            MCHP_PINMUX(a, 7, 0x260, 30, periph)
/* pa7_qd2_in */
#define PA7_QD2_IN             MCHP_PINMUX(a, 7, 0xa8, 2, periph)
/* pa7_qd2_out */
#define PA7_QD2_OUT            MCHP_PINMUX(a, 7, 0x260, 29, periph)
/* pa7_qd3_out */
#define PA7_QD3_OUT            MCHP_PINMUX(a, 7, 0x260, 28, periph)
/* pa7_qeiccmp0_out */
#define PA7_QEICCMP0_OUT       MCHP_PINMUX(a, 7, 0x260, 31, periph)
/* pa7_qeihome0g1_in */
#define PA7_QEIHOME0G1_IN      MCHP_PINMUX(a, 7, 0x16c, 16, periph)
/* pa7_qeihome0g2_in */
#define PA7_QEIHOME0G2_IN      MCHP_PINMUX(a, 7, 0x170, 2, periph)
/* pa7_qeiindx0g2_in */
#define PA7_QEIINDX0G2_IN      MCHP_PINMUX(a, 7, 0x174, 2, periph)
/* pa7_qspics_out */
#define PA7_QSPICS_OUT         MCHP_PINMUX(a, 7, 0x260, 27, periph)
/* pa7_qspi_sck_out */
#define PA7_QSPI_SCK_OUT       MCHP_PINMUX(a, 7, 0x268, 7, periph)
/* pa7_refi_in */
#define PA7_REFI_IN            MCHP_PINMUX(a, 7, 0xb0, 8, periph)
/* pa7_refo1_out */
#define PA7_REFO1_OUT          MCHP_PINMUX(a, 7, 0x268, 8, periph)
/* pa7_refo2_out */
#define PA7_REFO2_OUT          MCHP_PINMUX(a, 7, 0x268, 9, periph)
/* pa7_refo3_out */
#define PA7_REFO3_OUT          MCHP_PINMUX(a, 7, 0x268, 10, periph)
/* pa7_refo4_out */
#define PA7_REFO4_OUT          MCHP_PINMUX(a, 7, 0x268, 11, periph)
/* pa7_scom0p0_in */
#define PA7_SCOM0P0_IN         MCHP_PINMUX(a, 7, 0x40, 2, periph)
/* pa7_scom0p0_out */
#define PA7_SCOM0P0_OUT        MCHP_PINMUX(a, 7, 0x264, 2, periph)
/* pa7_scom0p1_in */
#define PA7_SCOM0P1_IN         MCHP_PINMUX(a, 7, 0x44, 8, periph)
/* pa7_scom0p1_out */
#define PA7_SCOM0P1_OUT        MCHP_PINMUX(a, 7, 0x268, 1, periph)
/* pa7_scom0p2_out */
#define PA7_SCOM0P2_OUT        MCHP_PINMUX(a, 7, 0x260, 2, periph)
/* pa7_scom0p3_in */
#define PA7_SCOM0P3_IN         MCHP_PINMUX(a, 7, 0x4c, 16, periph)
/* pa7_scom0p3_out */
#define PA7_SCOM0P3_OUT        MCHP_PINMUX(a, 7, 0x260, 1, periph)
/* pa7_scom1p0_out */
#define PA7_SCOM1P0_OUT        MCHP_PINMUX(a, 7, 0x260, 3, periph)
/* pa7_scom1p1_in */
#define PA7_SCOM1P1_IN         MCHP_PINMUX(a, 7, 0x54, 8, periph)
/* pa7_scom1p1_out */
#define PA7_SCOM1P1_OUT        MCHP_PINMUX(a, 7, 0x268, 2, periph)
/* pa7_scom1p2_in */
#define PA7_SCOM1P2_IN         MCHP_PINMUX(a, 7, 0x58, 16, periph)
/* pa7_scom1p2_out */
#define PA7_SCOM1P2_OUT        MCHP_PINMUX(a, 7, 0x260, 4, periph)
/* pa7_scom1p3_in */
#define PA7_SCOM1P3_IN         MCHP_PINMUX(a, 7, 0x5c, 2, periph)
/* pa7_scom1p3_out */
#define PA7_SCOM1P3_OUT        MCHP_PINMUX(a, 7, 0x264, 5, periph)
/* pa7_scom2p0_in */
#define PA7_SCOM2P0_IN         MCHP_PINMUX(a, 7, 0x60, 2, periph)
/* pa7_scom2p0_out */
#define PA7_SCOM2P0_OUT        MCHP_PINMUX(a, 7, 0x264, 7, periph)
/* pa7_scom2p1_in */
#define PA7_SCOM2P1_IN         MCHP_PINMUX(a, 7, 0x64, 8, periph)
/* pa7_scom2p1_out */
#define PA7_SCOM2P1_OUT        MCHP_PINMUX(a, 7, 0x268, 3, periph)
/* pa7_scom2p2_out */
#define PA7_SCOM2P2_OUT        MCHP_PINMUX(a, 7, 0x260, 6, periph)
/* pa7_scom2p3_in */
#define PA7_SCOM2P3_IN         MCHP_PINMUX(a, 7, 0x6c, 16, periph)
/* pa7_scom2p3_out */
#define PA7_SCOM2P3_OUT        MCHP_PINMUX(a, 7, 0x260, 5, periph)
/* pa7_scom3p0_out */
#define PA7_SCOM3P0_OUT        MCHP_PINMUX(a, 7, 0x260, 7, periph)
/* pa7_scom3p1_in */
#define PA7_SCOM3P1_IN         MCHP_PINMUX(a, 7, 0x74, 8, periph)
/* pa7_scom3p1_out */
#define PA7_SCOM3P1_OUT        MCHP_PINMUX(a, 7, 0x268, 4, periph)
/* pa7_scom3p2_in */
#define PA7_SCOM3P2_IN         MCHP_PINMUX(a, 7, 0x78, 16, periph)
/* pa7_scom3p2_out */
#define PA7_SCOM3P2_OUT        MCHP_PINMUX(a, 7, 0x260, 8, periph)
/* pa7_scom3p3_in */
#define PA7_SCOM3P3_IN         MCHP_PINMUX(a, 7, 0x7c, 2, periph)
/* pa7_scom3p3_out */
#define PA7_SCOM3P3_OUT        MCHP_PINMUX(a, 7, 0x264, 10, periph)
/* pa7_scom4p0_in */
#define PA7_SCOM4P0_IN         MCHP_PINMUX(a, 7, 0x80, 2, periph)
/* pa7_scom4p0_out */
#define PA7_SCOM4P0_OUT        MCHP_PINMUX(a, 7, 0x264, 12, periph)
/* pa7_scom4p1_in */
#define PA7_SCOM4P1_IN         MCHP_PINMUX(a, 7, 0x84, 8, periph)
/* pa7_scom4p1_out */
#define PA7_SCOM4P1_OUT        MCHP_PINMUX(a, 7, 0x268, 5, periph)
/* pa7_scom4p2_out */
#define PA7_SCOM4P2_OUT        MCHP_PINMUX(a, 7, 0x260, 10, periph)
/* pa7_scom4p3_in */
#define PA7_SCOM4P3_IN         MCHP_PINMUX(a, 7, 0x8c, 16, periph)
/* pa7_scom4p3_out */
#define PA7_SCOM4P3_OUT        MCHP_PINMUX(a, 7, 0x260, 9, periph)
/* pa7_scom5p0_out */
#define PA7_SCOM5P0_OUT        MCHP_PINMUX(a, 7, 0x260, 11, periph)
/* pa7_scom5p1_in */
#define PA7_SCOM5P1_IN         MCHP_PINMUX(a, 7, 0x94, 8, periph)
/* pa7_scom5p1_out */
#define PA7_SCOM5P1_OUT        MCHP_PINMUX(a, 7, 0x268, 6, periph)
/* pa7_scom5p2_in */
#define PA7_SCOM5P2_IN         MCHP_PINMUX(a, 7, 0x98, 16, periph)
/* pa7_scom5p2_out */
#define PA7_SCOM5P2_OUT        MCHP_PINMUX(a, 7, 0x260, 12, periph)
/* pa7_scom5p3_in */
#define PA7_SCOM5P3_IN         MCHP_PINMUX(a, 7, 0x9c, 2, periph)
/* pa7_scom5p3_out */
#define PA7_SCOM5P3_OUT        MCHP_PINMUX(a, 7, 0x264, 15, periph)
/* pa7_tc0wo0g1_in */
#define PA7_TC0WO0G1_IN        MCHP_PINMUX(a, 7, 0xcc, 16, periph)
/* pa7_tc0wo0g2_in */
#define PA7_TC0WO0G2_IN        MCHP_PINMUX(a, 7, 0xd0, 2, periph)
/* pa7_tc0wo1_out */
#define PA7_TC0WO1_OUT         MCHP_PINMUX(a, 7, 0x260, 18, periph)
/* pa7_tc1wo0g1_in */
#define PA7_TC1WO0G1_IN        MCHP_PINMUX(a, 7, 0xdc, 16, periph)
/* pa7_tc1wo0_out */
#define PA7_TC1WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 19, periph)
/* pa7_tc1wo1g2_in */
#define PA7_TC1WO1G2_IN        MCHP_PINMUX(a, 7, 0xe4, 2, periph)
/* pa7_tc1wo1_out */
#define PA7_TC1WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 25, periph)
/* pa7_tc2wo0g1_in */
#define PA7_TC2WO0G1_IN        MCHP_PINMUX(a, 7, 0xec, 16, periph)
/* pa7_tc2wo0_out */
#define PA7_TC2WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 20, periph)
/* pa7_tc2wo1g2_in */
#define PA7_TC2WO1G2_IN        MCHP_PINMUX(a, 7, 0xf4, 2, periph)
/* pa7_tc2wo1_out */
#define PA7_TC2WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 26, periph)
/* pa7_tc3wo0g1_in */
#define PA7_TC3WO0G1_IN        MCHP_PINMUX(a, 7, 0xfc, 16, periph)
/* pa7_tc3wo0_out */
#define PA7_TC3WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 21, periph)
/* pa7_tc3wo1g2_in */
#define PA7_TC3WO1G2_IN        MCHP_PINMUX(a, 7, 0x104, 2, periph)
/* pa7_tc3wo1_out */
#define PA7_TC3WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 27, periph)
/* pa7_tc4wo0g1_in */
#define PA7_TC4WO0G1_IN        MCHP_PINMUX(a, 7, 0x10c, 16, periph)
/* pa7_tc4wo0_out */
#define PA7_TC4WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 22, periph)
/* pa7_tc4wo1g2_in */
#define PA7_TC4WO1G2_IN        MCHP_PINMUX(a, 7, 0x114, 2, periph)
/* pa7_tc4wo1_out */
#define PA7_TC4WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 28, periph)
/* pa7_tc5wo0g1_in */
#define PA7_TC5WO0G1_IN        MCHP_PINMUX(a, 7, 0x11c, 16, periph)
/* pa7_tc5wo0_out */
#define PA7_TC5WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 23, periph)
/* pa7_tc5wo1g2_in */
#define PA7_TC5WO1G2_IN        MCHP_PINMUX(a, 7, 0x124, 2, periph)
/* pa7_tc5wo1_out */
#define PA7_TC5WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 29, periph)
/* pa7_tc6wo0g1_in */
#define PA7_TC6WO0G1_IN        MCHP_PINMUX(a, 7, 0x12c, 16, periph)
/* pa7_tc6wo0_out */
#define PA7_TC6WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 24, periph)
/* pa7_tc6wo1g2_in */
#define PA7_TC6WO1G2_IN        MCHP_PINMUX(a, 7, 0x134, 2, periph)
/* pa7_tc6wo1_out */
#define PA7_TC6WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 30, periph)
/* pa7_tc7wo0g1_in */
#define PA7_TC7WO0G1_IN        MCHP_PINMUX(a, 7, 0x13c, 16, periph)
/* pa7_tc7wo0_out */
#define PA7_TC7WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 25, periph)
/* pa7_tc7wo1g2_in */
#define PA7_TC7WO1G2_IN        MCHP_PINMUX(a, 7, 0x144, 2, periph)
/* pa7_tc7wo1_out */
#define PA7_TC7WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 31, periph)
/* pa7_tc8wo0g1_in */
#define PA7_TC8WO0G1_IN        MCHP_PINMUX(a, 7, 0x14c, 16, periph)
/* pa7_tc8wo0_out */
#define PA7_TC8WO0_OUT         MCHP_PINMUX(a, 7, 0x260, 26, periph)
/* pa7_tc8wo1g2_in */
#define PA7_TC8WO1G2_IN        MCHP_PINMUX(a, 7, 0x154, 2, periph)
/* pa7_tc8wo1_out */
#define PA7_TC8WO1_OUT         MCHP_PINMUX(a, 7, 0x264, 32, periph)
/* pa7_tc9wo0g2_in */
#define PA7_TC9WO0G2_IN        MCHP_PINMUX(a, 7, 0x15c, 2, periph)
/* pa7_tc9wo0_out */
#define PA7_TC9WO0_OUT         MCHP_PINMUX(a, 7, 0x264, 33, periph)
/* pa7_tcc0wo0_out */
#define PA7_TCC0WO0_OUT        MCHP_PINMUX(a, 7, 0x260, 13, periph)
/* pa7_tcc0wo1_out */
#define PA7_TCC0WO1_OUT        MCHP_PINMUX(a, 7, 0x264, 17, periph)
/* pa7_tcc0wo3_out */
#define PA7_TCC0WO3_OUT        MCHP_PINMUX(a, 7, 0x264, 19, periph)
/* pa7_tcc0wo4_out */
#define PA7_TCC0WO4_OUT        MCHP_PINMUX(a, 7, 0x260, 14, periph)
/* pa7_tcc0wo5_out */
#define PA7_TCC0WO5_OUT        MCHP_PINMUX(a, 7, 0x264, 18, periph)
/* pa7_tcc1wo0_out */
#define PA7_TCC1WO0_OUT        MCHP_PINMUX(a, 7, 0x260, 15, periph)
/* pa7_tcc1wo1_out */
#define PA7_TCC1WO1_OUT        MCHP_PINMUX(a, 7, 0x264, 20, periph)
/* pa7_tcc1wo3_out */
#define PA7_TCC1WO3_OUT        MCHP_PINMUX(a, 7, 0x264, 22, periph)
/* pa7_tcc1wo4_out */
#define PA7_TCC1WO4_OUT        MCHP_PINMUX(a, 7, 0x260, 16, periph)
/* pa7_tcc1wo5_out */
#define PA7_TCC1WO5_OUT        MCHP_PINMUX(a, 7, 0x264, 21, periph)
/* pa7_tcc2wo0_out */
#define PA7_TCC2WO0_OUT        MCHP_PINMUX(a, 7, 0x260, 17, periph)
/* pa7_tcc2wo1_out */
#define PA7_TCC2WO1_OUT        MCHP_PINMUX(a, 7, 0x264, 23, periph)
/* pa7_tstbus0_out */
#define PA7_TSTBUS0_OUT        MCHP_PINMUX(a, 7, 0x260, 32, periph)
/* pa7_tstbus4_out */
#define PA7_TSTBUS4_OUT        MCHP_PINMUX(a, 7, 0x260, 33, periph)
/* pa7_tstbus5_out */
#define PA7_TSTBUS5_OUT        MCHP_PINMUX(a, 7, 0x264, 38, periph)
/* pa7_tstbus8_out */
#define PA7_TSTBUS8_OUT        MCHP_PINMUX(a, 7, 0x260, 34, periph)
/* pa7_tstbus9_out */
#define PA7_TSTBUS9_OUT        MCHP_PINMUX(a, 7, 0x264, 39, periph)
/* pa8_ac_cmp0_out */
#define PA8_AC_CMP0_OUT        MCHP_PINMUX(a, 8, 0x270, 40, periph)
/* pa8_ac_cmp1_out */
#define PA8_AC_CMP1_OUT        MCHP_PINMUX(a, 8, 0x274, 36, periph)
/* pa8_ac_cmptout_out */
#define PA8_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 8, 0x274, 37, periph)
/* pa8_ac_cmptrdy_out */
#define PA8_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 8, 0x270, 41, periph)
/* pa8_can1rx_in */
#define PA8_CAN1RX_IN          MCHP_PINMUX(a, 8, 0x190, 2, periph)
/* pa8_can1_tx_out */
#define PA8_CAN1_TX_OUT        MCHP_PINMUX(a, 8, 0x274, 38, periph)
/* pa8_cclin1_in */
#define PA8_CCLIN1_IN          MCHP_PINMUX(a, 8, 0xb8, 16, periph)
/* pa8_cclin2_in */
#define PA8_CCLIN2_IN          MCHP_PINMUX(a, 8, 0xbc, 2, periph)
/* pa8_cclin4_in */
#define PA8_CCLIN4_IN          MCHP_PINMUX(a, 8, 0xc4, 16, periph)
/* pa8_cclin5_in */
#define PA8_CCLIN5_IN          MCHP_PINMUX(a, 8, 0xc8, 2, periph)
/* pa8_cclo0_out */
#define PA8_CCLO0_OUT          MCHP_PINMUX(a, 8, 0x270, 1, periph)
/* pa8_cclo1_out */
#define PA8_CCLO1_OUT          MCHP_PINMUX(a, 8, 0x26c, 1, periph)
/* pa8_coexwlanact_in */
#define PA8_COEXWLANACT_IN     MCHP_PINMUX(a, 8, 0x194, 23, periph)
/* pa8_coex_rf_act_out */
#define PA8_COEX_RF_ACT_OUT    MCHP_PINMUX(a, 8, 0x26c, 41, periph)
/* pa8_extint1_in */
#define PA8_EXTINT1_IN         MCHP_PINMUX(a, 8, 0x4, 16, periph)
/* pa8_extint2_in */
#define PA8_EXTINT2_IN         MCHP_PINMUX(a, 8, 0x8, 2, periph)
/* pa8_extint3_in */
#define PA8_EXTINT3_IN         MCHP_PINMUX(a, 8, 0xc, 23, periph)
/* pa8_fectrl0_out */
#define PA8_FECTRL0_OUT        MCHP_PINMUX(a, 8, 0x26c, 40, periph)
/* pa8_fectrl3_out */
#define PA8_FECTRL3_OUT        MCHP_PINMUX(a, 8, 0x274, 39, periph)
/* pa8_fectrl4_out */
#define PA8_FECTRL4_OUT        MCHP_PINMUX(a, 8, 0x270, 42, periph)
/* pa8_fectrl5_out */
#define PA8_FECTRL5_OUT        MCHP_PINMUX(a, 8, 0x274, 40, periph)
/* pa8_nmi_in */
#define PA8_NMI_IN             MCHP_PINMUX(a, 8, 0x3c, 23, periph)
/* pa8_qd0_in */
#define PA8_QD0_IN             MCHP_PINMUX(a, 8, 0xa0, 23, periph)
/* pa8_qd0_out */
#define PA8_QD0_OUT            MCHP_PINMUX(a, 8, 0x26c, 35, periph)
/* pa8_qd1_out */
#define PA8_QD1_OUT            MCHP_PINMUX(a, 8, 0x270, 35, periph)
/* pa8_qd2_in */
#define PA8_QD2_IN             MCHP_PINMUX(a, 8, 0xa8, 16, periph)
/* pa8_qd2_out */
#define PA8_QD2_OUT            MCHP_PINMUX(a, 8, 0x26c, 37, periph)
/* pa8_qd3_in */
#define PA8_QD3_IN             MCHP_PINMUX(a, 8, 0xac, 2, periph)
/* pa8_qd3_out */
#define PA8_QD3_OUT            MCHP_PINMUX(a, 8, 0x26c, 36, periph)
/* pa8_qeihome0g2_in */
#define PA8_QEIHOME0G2_IN      MCHP_PINMUX(a, 8, 0x170, 16, periph)
/* pa8_qeiindx0g2_in */
#define PA8_QEIINDX0G2_IN      MCHP_PINMUX(a, 8, 0x174, 16, periph)
/* pa8_qeiindx0g3_in */
#define PA8_QEIINDX0G3_IN      MCHP_PINMUX(a, 8, 0x178, 2, periph)
/* pa8_qeiqea0g3_in */
#define PA8_QEIQEA0G3_IN       MCHP_PINMUX(a, 8, 0x17c, 2, periph)
/* pa8_qeiqea0g4_in */
#define PA8_QEIQEA0G4_IN       MCHP_PINMUX(a, 8, 0x180, 23, periph)
/* pa8_qeiqeb0g4_in */
#define PA8_QEIQEB0G4_IN       MCHP_PINMUX(a, 8, 0x184, 23, periph)
/* pa8_qspics_out */
#define PA8_QSPICS_OUT         MCHP_PINMUX(a, 8, 0x26c, 34, periph)
/* pa8_scom0p0_in */
#define PA8_SCOM0P0_IN         MCHP_PINMUX(a, 8, 0x40, 16, periph)
/* pa8_scom0p0_out */
#define PA8_SCOM0P0_OUT        MCHP_PINMUX(a, 8, 0x26c, 2, periph)
/* pa8_scom0p2_in */
#define PA8_SCOM0P2_IN         MCHP_PINMUX(a, 8, 0x48, 23, periph)
/* pa8_scom0p2_out */
#define PA8_SCOM0P2_OUT        MCHP_PINMUX(a, 8, 0x26c, 4, periph)
/* pa8_scom0p3_out */
#define PA8_SCOM0P3_OUT        MCHP_PINMUX(a, 8, 0x26c, 3, periph)
/* pa8_scom1p0_in */
#define PA8_SCOM1P0_IN         MCHP_PINMUX(a, 8, 0x50, 2, periph)
/* pa8_scom1p0_out */
#define PA8_SCOM1P0_OUT        MCHP_PINMUX(a, 8, 0x270, 5, periph)
/* pa8_scom1p2_out */
#define PA8_SCOM1P2_OUT        MCHP_PINMUX(a, 8, 0x26c, 6, periph)
/* pa8_scom1p3_in */
#define PA8_SCOM1P3_IN         MCHP_PINMUX(a, 8, 0x5c, 16, periph)
/* pa8_scom1p3_out */
#define PA8_SCOM1P3_OUT        MCHP_PINMUX(a, 8, 0x26c, 5, periph)
/* pa8_scom2p0_in */
#define PA8_SCOM2P0_IN         MCHP_PINMUX(a, 8, 0x60, 16, periph)
/* pa8_scom2p0_out */
#define PA8_SCOM2P0_OUT        MCHP_PINMUX(a, 8, 0x26c, 7, periph)
/* pa8_scom2p2_in */
#define PA8_SCOM2P2_IN         MCHP_PINMUX(a, 8, 0x68, 23, periph)
/* pa8_scom2p2_out */
#define PA8_SCOM2P2_OUT        MCHP_PINMUX(a, 8, 0x26c, 9, periph)
/* pa8_scom2p3_out */
#define PA8_SCOM2P3_OUT        MCHP_PINMUX(a, 8, 0x26c, 8, periph)
/* pa8_scom3p0_in */
#define PA8_SCOM3P0_IN         MCHP_PINMUX(a, 8, 0x70, 2, periph)
/* pa8_scom3p0_out */
#define PA8_SCOM3P0_OUT        MCHP_PINMUX(a, 8, 0x270, 10, periph)
/* pa8_scom3p2_out */
#define PA8_SCOM3P2_OUT        MCHP_PINMUX(a, 8, 0x26c, 11, periph)
/* pa8_scom3p3_in */
#define PA8_SCOM3P3_IN         MCHP_PINMUX(a, 8, 0x7c, 16, periph)
/* pa8_scom3p3_out */
#define PA8_SCOM3P3_OUT        MCHP_PINMUX(a, 8, 0x26c, 10, periph)
/* pa8_scom4p0_in */
#define PA8_SCOM4P0_IN         MCHP_PINMUX(a, 8, 0x80, 16, periph)
/* pa8_scom4p0_out */
#define PA8_SCOM4P0_OUT        MCHP_PINMUX(a, 8, 0x26c, 12, periph)
/* pa8_scom4p2_in */
#define PA8_SCOM4P2_IN         MCHP_PINMUX(a, 8, 0x88, 23, periph)
/* pa8_scom4p2_out */
#define PA8_SCOM4P2_OUT        MCHP_PINMUX(a, 8, 0x26c, 14, periph)
/* pa8_scom4p3_out */
#define PA8_SCOM4P3_OUT        MCHP_PINMUX(a, 8, 0x26c, 13, periph)
/* pa8_scom5p0_in */
#define PA8_SCOM5P0_IN         MCHP_PINMUX(a, 8, 0x90, 2, periph)
/* pa8_scom5p0_out */
#define PA8_SCOM5P0_OUT        MCHP_PINMUX(a, 8, 0x270, 15, periph)
/* pa8_scom5p2_out */
#define PA8_SCOM5P2_OUT        MCHP_PINMUX(a, 8, 0x26c, 16, periph)
/* pa8_scom5p3_in */
#define PA8_SCOM5P3_IN         MCHP_PINMUX(a, 8, 0x9c, 16, periph)
/* pa8_scom5p3_out */
#define PA8_SCOM5P3_OUT        MCHP_PINMUX(a, 8, 0x26c, 15, periph)
/* pa8_tc0wo0g2_in */
#define PA8_TC0WO0G2_IN        MCHP_PINMUX(a, 8, 0xd0, 16, periph)
/* pa8_tc0wo0_out */
#define PA8_TC0WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 24, periph)
/* pa8_tc0wo1g3_in */
#define PA8_TC0WO1G3_IN        MCHP_PINMUX(a, 8, 0xd4, 2, periph)
/* pa8_tc0wo1g4_in */
#define PA8_TC0WO1G4_IN        MCHP_PINMUX(a, 8, 0xd8, 23, periph)
/* pa8_tc0wo1_out */
#define PA8_TC0WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 24, periph)
/* pa8_tc1wo0_out */
#define PA8_TC1WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 25, periph)
/* pa8_tc1wo1g2_in */
#define PA8_TC1WO1G2_IN        MCHP_PINMUX(a, 8, 0xe4, 16, periph)
/* pa8_tc1wo1_out */
#define PA8_TC1WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 25, periph)
/* pa8_tc2wo0g3_in */
#define PA8_TC2WO0G3_IN        MCHP_PINMUX(a, 8, 0xf0, 2, periph)
/* pa8_tc2wo0_out */
#define PA8_TC2WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 26, periph)
/* pa8_tc2wo1g2_in */
#define PA8_TC2WO1G2_IN        MCHP_PINMUX(a, 8, 0xf4, 16, periph)
/* pa8_tc2wo1g4_in */
#define PA8_TC2WO1G4_IN        MCHP_PINMUX(a, 8, 0xf8, 23, periph)
/* pa8_tc2wo1_out */
#define PA8_TC2WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 26, periph)
/* pa8_tc3wo0g3_in */
#define PA8_TC3WO0G3_IN        MCHP_PINMUX(a, 8, 0x100, 2, periph)
/* pa8_tc3wo0_out */
#define PA8_TC3WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 27, periph)
/* pa8_tc3wo1g2_in */
#define PA8_TC3WO1G2_IN        MCHP_PINMUX(a, 8, 0x104, 16, periph)
/* pa8_tc3wo1g4_in */
#define PA8_TC3WO1G4_IN        MCHP_PINMUX(a, 8, 0x108, 23, periph)
/* pa8_tc3wo1_out */
#define PA8_TC3WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 27, periph)
/* pa8_tc4wo0g3_in */
#define PA8_TC4WO0G3_IN        MCHP_PINMUX(a, 8, 0x110, 2, periph)
/* pa8_tc4wo0_out */
#define PA8_TC4WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 28, periph)
/* pa8_tc4wo1g2_in */
#define PA8_TC4WO1G2_IN        MCHP_PINMUX(a, 8, 0x114, 16, periph)
/* pa8_tc4wo1g4_in */
#define PA8_TC4WO1G4_IN        MCHP_PINMUX(a, 8, 0x118, 23, periph)
/* pa8_tc4wo1_out */
#define PA8_TC4WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 28, periph)
/* pa8_tc5wo0g3_in */
#define PA8_TC5WO0G3_IN        MCHP_PINMUX(a, 8, 0x120, 2, periph)
/* pa8_tc5wo0_out */
#define PA8_TC5WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 29, periph)
/* pa8_tc5wo1g2_in */
#define PA8_TC5WO1G2_IN        MCHP_PINMUX(a, 8, 0x124, 16, periph)
/* pa8_tc5wo1g4_in */
#define PA8_TC5WO1G4_IN        MCHP_PINMUX(a, 8, 0x128, 23, periph)
/* pa8_tc5wo1_out */
#define PA8_TC5WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 29, periph)
/* pa8_tc6wo0g3_in */
#define PA8_TC6WO0G3_IN        MCHP_PINMUX(a, 8, 0x130, 2, periph)
/* pa8_tc6wo0_out */
#define PA8_TC6WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 30, periph)
/* pa8_tc6wo1g2_in */
#define PA8_TC6WO1G2_IN        MCHP_PINMUX(a, 8, 0x134, 16, periph)
/* pa8_tc6wo1g4_in */
#define PA8_TC6WO1G4_IN        MCHP_PINMUX(a, 8, 0x138, 23, periph)
/* pa8_tc6wo1_out */
#define PA8_TC6WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 30, periph)
/* pa8_tc7wo0g3_in */
#define PA8_TC7WO0G3_IN        MCHP_PINMUX(a, 8, 0x140, 2, periph)
/* pa8_tc7wo0_out */
#define PA8_TC7WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 31, periph)
/* pa8_tc7wo1g2_in */
#define PA8_TC7WO1G2_IN        MCHP_PINMUX(a, 8, 0x144, 16, periph)
/* pa8_tc7wo1g4_in */
#define PA8_TC7WO1G4_IN        MCHP_PINMUX(a, 8, 0x148, 23, periph)
/* pa8_tc7wo1_out */
#define PA8_TC7WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 31, periph)
/* pa8_tc8wo0g3_in */
#define PA8_TC8WO0G3_IN        MCHP_PINMUX(a, 8, 0x150, 2, periph)
/* pa8_tc8wo0_out */
#define PA8_TC8WO0_OUT         MCHP_PINMUX(a, 8, 0x270, 32, periph)
/* pa8_tc8wo1g2_in */
#define PA8_TC8WO1G2_IN        MCHP_PINMUX(a, 8, 0x154, 16, periph)
/* pa8_tc8wo1_out */
#define PA8_TC8WO1_OUT         MCHP_PINMUX(a, 8, 0x26c, 32, periph)
/* pa8_tc9wo0g2_in */
#define PA8_TC9WO0G2_IN        MCHP_PINMUX(a, 8, 0x15c, 16, periph)
/* pa8_tc9wo0g4_in */
#define PA8_TC9WO0G4_IN        MCHP_PINMUX(a, 8, 0x160, 23, periph)
/* pa8_tc9wo0_out */
#define PA8_TC9WO0_OUT         MCHP_PINMUX(a, 8, 0x26c, 33, periph)
/* pa8_tc9wo1g3_in */
#define PA8_TC9WO1G3_IN        MCHP_PINMUX(a, 8, 0x164, 2, periph)
/* pa8_tc9wo1_out */
#define PA8_TC9WO1_OUT         MCHP_PINMUX(a, 8, 0x270, 33, periph)
/* pa8_tcc0wo0_out */
#define PA8_TCC0WO0_OUT        MCHP_PINMUX(a, 8, 0x270, 18, periph)
/* pa8_tcc0wo1_out */
#define PA8_TCC0WO1_OUT        MCHP_PINMUX(a, 8, 0x26c, 17, periph)
/* pa8_tcc0wo2_out */
#define PA8_TCC0WO2_OUT        MCHP_PINMUX(a, 8, 0x270, 17, periph)
/* pa8_tcc0wo3_out */
#define PA8_TCC0WO3_OUT        MCHP_PINMUX(a, 8, 0x26c, 19, periph)
/* pa8_tcc0wo4_out */
#define PA8_TCC0WO4_OUT        MCHP_PINMUX(a, 8, 0x270, 19, periph)
/* pa8_tcc0wo5_out */
#define PA8_TCC0WO5_OUT        MCHP_PINMUX(a, 8, 0x26c, 18, periph)
/* pa8_tcc1wo0_out */
#define PA8_TCC1WO0_OUT        MCHP_PINMUX(a, 8, 0x270, 21, periph)
/* pa8_tcc1wo1_out */
#define PA8_TCC1WO1_OUT        MCHP_PINMUX(a, 8, 0x26c, 20, periph)
/* pa8_tcc1wo2_out */
#define PA8_TCC1WO2_OUT        MCHP_PINMUX(a, 8, 0x270, 20, periph)
/* pa8_tcc1wo3_out */
#define PA8_TCC1WO3_OUT        MCHP_PINMUX(a, 8, 0x26c, 22, periph)
/* pa8_tcc1wo4_out */
#define PA8_TCC1WO4_OUT        MCHP_PINMUX(a, 8, 0x270, 22, periph)
/* pa8_tcc1wo5_out */
#define PA8_TCC1WO5_OUT        MCHP_PINMUX(a, 8, 0x26c, 21, periph)
/* pa8_tcc2wo0_out */
#define PA8_TCC2WO0_OUT        MCHP_PINMUX(a, 8, 0x270, 23, periph)
/* pa8_tcc2wo1_out */
#define PA8_TCC2WO1_OUT        MCHP_PINMUX(a, 8, 0x26c, 23, periph)
/* pa8_tstbus1_out */
#define PA8_TSTBUS1_OUT        MCHP_PINMUX(a, 8, 0x270, 38, periph)
/* pa8_tstbus2_out */
#define PA8_TSTBUS2_OUT        MCHP_PINMUX(a, 8, 0x274, 34, periph)
/* pa8_tstbus5_out */
#define PA8_TSTBUS5_OUT        MCHP_PINMUX(a, 8, 0x26c, 38, periph)
/* pa8_tstbus6_out */
#define PA8_TSTBUS6_OUT        MCHP_PINMUX(a, 8, 0x274, 35, periph)
/* pa8_tstbus9_out */
#define PA8_TSTBUS9_OUT        MCHP_PINMUX(a, 8, 0x26c, 39, periph)
/* pa8_tstbus10_out */
#define PA8_TSTBUS10_OUT       MCHP_PINMUX(a, 8, 0x270, 39, periph)
/* pa9_accmpten_in */
#define PA9_ACCMPTEN_IN        MCHP_PINMUX(a, 9, 0x18c, 25, periph)
/* pa9_ac_cmp0_out */
#define PA9_AC_CMP0_OUT        MCHP_PINMUX(a, 9, 0x27c, 40, periph)
/* pa9_ac_cmp1_out */
#define PA9_AC_CMP1_OUT        MCHP_PINMUX(a, 9, 0x280, 36, periph)
/* pa9_ac_cmptout_out */
#define PA9_AC_CMPTOUT_OUT     MCHP_PINMUX(a, 9, 0x280, 37, periph)
/* pa9_ac_cmptrdy_out */
#define PA9_AC_CMPTRDY_OUT     MCHP_PINMUX(a, 9, 0x27c, 41, periph)
/* pa9_can1rx_in */
#define PA9_CAN1RX_IN          MCHP_PINMUX(a, 9, 0x190, 16, periph)
/* pa9_can1_tx_out */
#define PA9_CAN1_TX_OUT        MCHP_PINMUX(a, 9, 0x280, 38, periph)
/* pa9_cclin0_in */
#define PA9_CCLIN0_IN          MCHP_PINMUX(a, 9, 0xb4, 25, periph)
/* pa9_cclin2_in */
#define PA9_CCLIN2_IN          MCHP_PINMUX(a, 9, 0xbc, 16, periph)
/* pa9_cclin3_in */
#define PA9_CCLIN3_IN          MCHP_PINMUX(a, 9, 0xc0, 25, periph)
/* pa9_cclin5_in */
#define PA9_CCLIN5_IN          MCHP_PINMUX(a, 9, 0xc8, 16, periph)
/* pa9_cclo0_out */
#define PA9_CCLO0_OUT          MCHP_PINMUX(a, 9, 0x27c, 1, periph)
/* pa9_cclo1_out */
#define PA9_CCLO1_OUT          MCHP_PINMUX(a, 9, 0x280, 1, periph)
/* pa9_coexwlanact_in */
#define PA9_COEXWLANACT_IN     MCHP_PINMUX(a, 9, 0x194, 2, periph)
/* pa9_coex_bt_state_out */
#define PA9_COEX_BT_STATE_OUT  MCHP_PINMUX(a, 9, 0x278, 37, periph)
/* pa9_extint0_in */
#define PA9_EXTINT0_IN         MCHP_PINMUX(a, 9, 0x0, 25, periph)
/* pa9_extint2_in */
#define PA9_EXTINT2_IN         MCHP_PINMUX(a, 9, 0x8, 16, periph)
/* pa9_extint3_in */
#define PA9_EXTINT3_IN         MCHP_PINMUX(a, 9, 0xc, 2, periph)
/* pa9_fectrl1_out */
#define PA9_FECTRL1_OUT        MCHP_PINMUX(a, 9, 0x278, 35, periph)
/* pa9_fectrl2_out */
#define PA9_FECTRL2_OUT        MCHP_PINMUX(a, 9, 0x278, 36, periph)
/* pa9_fectrl3_out */
#define PA9_FECTRL3_OUT        MCHP_PINMUX(a, 9, 0x280, 39, periph)
/* pa9_fectrl4_out */
#define PA9_FECTRL4_OUT        MCHP_PINMUX(a, 9, 0x27c, 42, periph)
/* pa9_fectrl5_out */
#define PA9_FECTRL5_OUT        MCHP_PINMUX(a, 9, 0x280, 40, periph)
/* pa9_nmi_in */
#define PA9_NMI_IN             MCHP_PINMUX(a, 9, 0x3c, 2, periph)
/* pa9_qd0_in */
#define PA9_QD0_IN             MCHP_PINMUX(a, 9, 0xa0, 2, periph)
/* pa9_qd0_out */
#define PA9_QD0_OUT            MCHP_PINMUX(a, 9, 0x27c, 36, periph)
/* pa9_qd1_in */
#define PA9_QD1_IN             MCHP_PINMUX(a, 9, 0xa4, 25, periph)
/* pa9_qd1_out */
#define PA9_QD1_OUT            MCHP_PINMUX(a, 9, 0x278, 30, periph)
/* pa9_qd2_out */
#define PA9_QD2_OUT            MCHP_PINMUX(a, 9, 0x278, 29, periph)
/* pa9_qd3_in */
#define PA9_QD3_IN             MCHP_PINMUX(a, 9, 0xac, 16, periph)
/* pa9_qd3_out */
#define PA9_QD3_OUT            MCHP_PINMUX(a, 9, 0x278, 28, periph)
/* pa9_qeiccmp0_out */
#define PA9_QEICCMP0_OUT       MCHP_PINMUX(a, 9, 0x278, 31, periph)
/* pa9_qeihome0g1_in */
#define PA9_QEIHOME0G1_IN      MCHP_PINMUX(a, 9, 0x16c, 25, periph)
/* pa9_qeiindx0g3_in */
#define PA9_QEIINDX0G3_IN      MCHP_PINMUX(a, 9, 0x178, 16, periph)
/* pa9_qeiqea0g3_in */
#define PA9_QEIQEA0G3_IN       MCHP_PINMUX(a, 9, 0x17c, 16, periph)
/* pa9_qeiqea0g4_in */
#define PA9_QEIQEA0G4_IN       MCHP_PINMUX(a, 9, 0x180, 2, periph)
/* pa9_qeiqeb0g4_in */
#define PA9_QEIQEB0G4_IN       MCHP_PINMUX(a, 9, 0x184, 2, periph)
/* pa9_qspics_out */
#define PA9_QSPICS_OUT         MCHP_PINMUX(a, 9, 0x278, 27, periph)
/* pa9_scom0p0_out */
#define PA9_SCOM0P0_OUT        MCHP_PINMUX(a, 9, 0x27c, 2, periph)
/* pa9_scom0p2_in */
#define PA9_SCOM0P2_IN         MCHP_PINMUX(a, 9, 0x48, 2, periph)
/* pa9_scom0p2_out */
#define PA9_SCOM0P2_OUT        MCHP_PINMUX(a, 9, 0x278, 2, periph)
/* pa9_scom0p3_in */
#define PA9_SCOM0P3_IN         MCHP_PINMUX(a, 9, 0x4c, 25, periph)
/* pa9_scom0p3_out */
#define PA9_SCOM0P3_OUT        MCHP_PINMUX(a, 9, 0x278, 1, periph)
/* pa9_scom1p0_in */
#define PA9_SCOM1P0_IN         MCHP_PINMUX(a, 9, 0x50, 16, periph)
/* pa9_scom1p0_out */
#define PA9_SCOM1P0_OUT        MCHP_PINMUX(a, 9, 0x278, 3, periph)
/* pa9_scom1p2_in */
#define PA9_SCOM1P2_IN         MCHP_PINMUX(a, 9, 0x58, 25, periph)
/* pa9_scom1p2_out */
#define PA9_SCOM1P2_OUT        MCHP_PINMUX(a, 9, 0x278, 4, periph)
/* pa9_scom1p3_out */
#define PA9_SCOM1P3_OUT        MCHP_PINMUX(a, 9, 0x27c, 6, periph)
/* pa9_scom2p0_out */
#define PA9_SCOM2P0_OUT        MCHP_PINMUX(a, 9, 0x27c, 7, periph)
/* pa9_scom2p2_in */
#define PA9_SCOM2P2_IN         MCHP_PINMUX(a, 9, 0x68, 2, periph)
/* pa9_scom2p2_out */
#define PA9_SCOM2P2_OUT        MCHP_PINMUX(a, 9, 0x278, 6, periph)
/* pa9_scom2p3_in */
#define PA9_SCOM2P3_IN         MCHP_PINMUX(a, 9, 0x6c, 25, periph)
/* pa9_scom2p3_out */
#define PA9_SCOM2P3_OUT        MCHP_PINMUX(a, 9, 0x278, 5, periph)
/* pa9_scom3p0_in */
#define PA9_SCOM3P0_IN         MCHP_PINMUX(a, 9, 0x70, 16, periph)
/* pa9_scom3p0_out */
#define PA9_SCOM3P0_OUT        MCHP_PINMUX(a, 9, 0x278, 7, periph)
/* pa9_scom3p2_in */
#define PA9_SCOM3P2_IN         MCHP_PINMUX(a, 9, 0x78, 25, periph)
/* pa9_scom3p2_out */
#define PA9_SCOM3P2_OUT        MCHP_PINMUX(a, 9, 0x278, 8, periph)
/* pa9_scom3p3_out */
#define PA9_SCOM3P3_OUT        MCHP_PINMUX(a, 9, 0x27c, 11, periph)
/* pa9_scom4p0_out */
#define PA9_SCOM4P0_OUT        MCHP_PINMUX(a, 9, 0x27c, 12, periph)
/* pa9_scom4p2_in */
#define PA9_SCOM4P2_IN         MCHP_PINMUX(a, 9, 0x88, 2, periph)
/* pa9_scom4p2_out */
#define PA9_SCOM4P2_OUT        MCHP_PINMUX(a, 9, 0x278, 10, periph)
/* pa9_scom4p3_in */
#define PA9_SCOM4P3_IN         MCHP_PINMUX(a, 9, 0x8c, 25, periph)
/* pa9_scom4p3_out */
#define PA9_SCOM4P3_OUT        MCHP_PINMUX(a, 9, 0x278, 9, periph)
/* pa9_scom5p0_in */
#define PA9_SCOM5P0_IN         MCHP_PINMUX(a, 9, 0x90, 16, periph)
/* pa9_scom5p0_out */
#define PA9_SCOM5P0_OUT        MCHP_PINMUX(a, 9, 0x278, 11, periph)
/* pa9_scom5p2_in */
#define PA9_SCOM5P2_IN         MCHP_PINMUX(a, 9, 0x98, 25, periph)
/* pa9_scom5p2_out */
#define PA9_SCOM5P2_OUT        MCHP_PINMUX(a, 9, 0x278, 12, periph)
/* pa9_scom5p3_out */
#define PA9_SCOM5P3_OUT        MCHP_PINMUX(a, 9, 0x27c, 16, periph)
/* pa9_tc0wo0g1_in */
#define PA9_TC0WO0G1_IN        MCHP_PINMUX(a, 9, 0xcc, 25, periph)
/* pa9_tc0wo0_out */
#define PA9_TC0WO0_OUT         MCHP_PINMUX(a, 9, 0x27c, 24, periph)
/* pa9_tc0wo1g3_in */
#define PA9_TC0WO1G3_IN        MCHP_PINMUX(a, 9, 0xd4, 16, periph)
/* pa9_tc0wo1g4_in */
#define PA9_TC0WO1G4_IN        MCHP_PINMUX(a, 9, 0xd8, 2, periph)
/* pa9_tc0wo1_out */
#define PA9_TC0WO1_OUT         MCHP_PINMUX(a, 9, 0x278, 18, periph)
/* pa9_tc1wo0g1_in */
#define PA9_TC1WO0G1_IN        MCHP_PINMUX(a, 9, 0xdc, 25, periph)
/* pa9_tc1wo0_out */
#define PA9_TC1WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 19, periph)
/* pa9_tc1wo1_out */
#define PA9_TC1WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 22, periph)
/* pa9_tc2wo0g1_in */
#define PA9_TC2WO0G1_IN        MCHP_PINMUX(a, 9, 0xec, 25, periph)
/* pa9_tc2wo0g3_in */
#define PA9_TC2WO0G3_IN        MCHP_PINMUX(a, 9, 0xf0, 16, periph)
/* pa9_tc2wo0_out */
#define PA9_TC2WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 20, periph)
/* pa9_tc2wo1g4_in */
#define PA9_TC2WO1G4_IN        MCHP_PINMUX(a, 9, 0xf8, 2, periph)
/* pa9_tc2wo1_out */
#define PA9_TC2WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 23, periph)
/* pa9_tc3wo0g1_in */
#define PA9_TC3WO0G1_IN        MCHP_PINMUX(a, 9, 0xfc, 25, periph)
/* pa9_tc3wo0g3_in */
#define PA9_TC3WO0G3_IN        MCHP_PINMUX(a, 9, 0x100, 16, periph)
/* pa9_tc3wo0_out */
#define PA9_TC3WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 21, periph)
/* pa9_tc3wo1g4_in */
#define PA9_TC3WO1G4_IN        MCHP_PINMUX(a, 9, 0x108, 2, periph)
/* pa9_tc3wo1_out */
#define PA9_TC3WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 24, periph)
/* pa9_tc4wo0g1_in */
#define PA9_TC4WO0G1_IN        MCHP_PINMUX(a, 9, 0x10c, 25, periph)
/* pa9_tc4wo0g3_in */
#define PA9_TC4WO0G3_IN        MCHP_PINMUX(a, 9, 0x110, 16, periph)
/* pa9_tc4wo0_out */
#define PA9_TC4WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 22, periph)
/* pa9_tc4wo1g4_in */
#define PA9_TC4WO1G4_IN        MCHP_PINMUX(a, 9, 0x118, 2, periph)
/* pa9_tc4wo1_out */
#define PA9_TC4WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 25, periph)
/* pa9_tc5wo0g1_in */
#define PA9_TC5WO0G1_IN        MCHP_PINMUX(a, 9, 0x11c, 25, periph)
/* pa9_tc5wo0g3_in */
#define PA9_TC5WO0G3_IN        MCHP_PINMUX(a, 9, 0x120, 16, periph)
/* pa9_tc5wo0_out */
#define PA9_TC5WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 23, periph)
/* pa9_tc5wo1g4_in */
#define PA9_TC5WO1G4_IN        MCHP_PINMUX(a, 9, 0x128, 2, periph)
/* pa9_tc5wo1_out */
#define PA9_TC5WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 26, periph)
/* pa9_tc6wo0g1_in */
#define PA9_TC6WO0G1_IN        MCHP_PINMUX(a, 9, 0x12c, 25, periph)
/* pa9_tc6wo0g3_in */
#define PA9_TC6WO0G3_IN        MCHP_PINMUX(a, 9, 0x130, 16, periph)
/* pa9_tc6wo0_out */
#define PA9_TC6WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 24, periph)
/* pa9_tc6wo1g4_in */
#define PA9_TC6WO1G4_IN        MCHP_PINMUX(a, 9, 0x138, 2, periph)
/* pa9_tc6wo1_out */
#define PA9_TC6WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 27, periph)
/* pa9_tc7wo0g1_in */
#define PA9_TC7WO0G1_IN        MCHP_PINMUX(a, 9, 0x13c, 25, periph)
/* pa9_tc7wo0g3_in */
#define PA9_TC7WO0G3_IN        MCHP_PINMUX(a, 9, 0x140, 16, periph)
/* pa9_tc7wo0_out */
#define PA9_TC7WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 25, periph)
/* pa9_tc7wo1g4_in */
#define PA9_TC7WO1G4_IN        MCHP_PINMUX(a, 9, 0x148, 2, periph)
/* pa9_tc7wo1_out */
#define PA9_TC7WO1_OUT         MCHP_PINMUX(a, 9, 0x280, 28, periph)
/* pa9_tc8wo0g1_in */
#define PA9_TC8WO0G1_IN        MCHP_PINMUX(a, 9, 0x14c, 25, periph)
/* pa9_tc8wo0g3_in */
#define PA9_TC8WO0G3_IN        MCHP_PINMUX(a, 9, 0x150, 16, periph)
/* pa9_tc8wo0_out */
#define PA9_TC8WO0_OUT         MCHP_PINMUX(a, 9, 0x278, 26, periph)
/* pa9_tc9wo0g4_in */
#define PA9_TC9WO0G4_IN        MCHP_PINMUX(a, 9, 0x160, 2, periph)
/* pa9_tc9wo0_out */
#define PA9_TC9WO0_OUT         MCHP_PINMUX(a, 9, 0x280, 29, periph)
/* pa9_tc9wo1g3_in */
#define PA9_TC9WO1G3_IN        MCHP_PINMUX(a, 9, 0x164, 16, periph)
/* pa9_tc9wo1_out */
#define PA9_TC9WO1_OUT         MCHP_PINMUX(a, 9, 0x27c, 33, periph)
/* pa9_tcc0wo0_out */
#define PA9_TCC0WO0_OUT        MCHP_PINMUX(a, 9, 0x278, 13, periph)
/* pa9_tcc0wo1_out */
#define PA9_TCC0WO1_OUT        MCHP_PINMUX(a, 9, 0x280, 15, periph)
/* pa9_tcc0wo2_out */
#define PA9_TCC0WO2_OUT        MCHP_PINMUX(a, 9, 0x27c, 17, periph)
/* pa9_tcc0wo3_out */
#define PA9_TCC0WO3_OUT        MCHP_PINMUX(a, 9, 0x280, 14, periph)
/* pa9_tcc0wo4_out */
#define PA9_TCC0WO4_OUT        MCHP_PINMUX(a, 9, 0x278, 14, periph)
/* pa9_tcc0wo5_out */
#define PA9_TCC0WO5_OUT        MCHP_PINMUX(a, 9, 0x280, 16, periph)
/* pa9_tcc1wo0_out */
#define PA9_TCC1WO0_OUT        MCHP_PINMUX(a, 9, 0x278, 15, periph)
/* pa9_tcc1wo1_out */
#define PA9_TCC1WO1_OUT        MCHP_PINMUX(a, 9, 0x280, 18, periph)
/* pa9_tcc1wo2_out */
#define PA9_TCC1WO2_OUT        MCHP_PINMUX(a, 9, 0x27c, 20, periph)
/* pa9_tcc1wo3_out */
#define PA9_TCC1WO3_OUT        MCHP_PINMUX(a, 9, 0x280, 17, periph)
/* pa9_tcc1wo4_out */
#define PA9_TCC1WO4_OUT        MCHP_PINMUX(a, 9, 0x278, 16, periph)
/* pa9_tcc1wo5_out */
#define PA9_TCC1WO5_OUT        MCHP_PINMUX(a, 9, 0x280, 19, periph)
/* pa9_tcc2wo0_out */
#define PA9_TCC2WO0_OUT        MCHP_PINMUX(a, 9, 0x278, 17, periph)
/* pa9_tcc2wo1_out */
#define PA9_TCC2WO1_OUT        MCHP_PINMUX(a, 9, 0x280, 20, periph)
/* pa9_tstbus0_out */
#define PA9_TSTBUS0_OUT        MCHP_PINMUX(a, 9, 0x278, 32, periph)
/* pa9_tstbus1_out */
#define PA9_TSTBUS1_OUT        MCHP_PINMUX(a, 9, 0x27c, 38, periph)
/* pa9_tstbus2_out */
#define PA9_TSTBUS2_OUT        MCHP_PINMUX(a, 9, 0x280, 34, periph)
/* pa9_tstbus4_out */
#define PA9_TSTBUS4_OUT        MCHP_PINMUX(a, 9, 0x278, 33, periph)
/* pa9_tstbus6_out */
#define PA9_TSTBUS6_OUT        MCHP_PINMUX(a, 9, 0x280, 35, periph)
/* pa9_tstbus8_out */
#define PA9_TSTBUS8_OUT        MCHP_PINMUX(a, 9, 0x278, 34, periph)
/* pa9_tstbus10_out */
#define PA9_TSTBUS10_OUT       MCHP_PINMUX(a, 9, 0x27c, 39, periph)
/* pa10_accmpten_in */
#define PA10_ACCMPTEN_IN       MCHP_PINMUX(a, 10, 0x18c, 21, periph)
/* pa10_ac_cmp1_out */
#define PA10_AC_CMP1_OUT       MCHP_PINMUX(a, 10, 0x288, 36, periph)
/* pa10_ac_cmptout_out */
#define PA10_AC_CMPTOUT_OUT    MCHP_PINMUX(a, 10, 0x288, 37, periph)
/* pa10_can1_tx_out */
#define PA10_CAN1_TX_OUT       MCHP_PINMUX(a, 10, 0x288, 38, periph)
/* pa10_cclin0_in */
#define PA10_CCLIN0_IN         MCHP_PINMUX(a, 10, 0xb4, 21, periph)
/* pa10_cclin3_in */
#define PA10_CCLIN3_IN         MCHP_PINMUX(a, 10, 0xc0, 21, periph)
/* pa10_cclo0_out */
#define PA10_CCLO0_OUT         MCHP_PINMUX(a, 10, 0x28c, 1, periph)
/* pa10_cclo1_out */
#define PA10_CCLO1_OUT         MCHP_PINMUX(a, 10, 0x288, 1, periph)
/* pa10_coexwlanact_in */
#define PA10_COEXWLANACT_IN    MCHP_PINMUX(a, 10, 0x194, 14, periph)
/* pa10_coex_bt_state_out */
#define PA10_COEX_BT_STATE_OUT MCHP_PINMUX(a, 10, 0x284, 37, periph)
/* pa10_extint0_in */
#define PA10_EXTINT0_IN        MCHP_PINMUX(a, 10, 0x0, 21, periph)
/* pa10_extint3_in */
#define PA10_EXTINT3_IN        MCHP_PINMUX(a, 10, 0xc, 14, periph)
/* pa10_fectrl1_out */
#define PA10_FECTRL1_OUT       MCHP_PINMUX(a, 10, 0x284, 35, periph)
/* pa10_fectrl2_out */
#define PA10_FECTRL2_OUT       MCHP_PINMUX(a, 10, 0x284, 36, periph)
/* pa10_fectrl3_out */
#define PA10_FECTRL3_OUT       MCHP_PINMUX(a, 10, 0x288, 39, periph)
/* pa10_fectrl5_out */
#define PA10_FECTRL5_OUT       MCHP_PINMUX(a, 10, 0x288, 40, periph)
/* pa10_gmac_tsucomp_out */
#define PA10_GMAC_TSUCOMP_OUT  MCHP_PINMUX(a, 10, 0x28c, 14, periph)
/* pa10_nmi_in */
#define PA10_NMI_IN            MCHP_PINMUX(a, 10, 0x3c, 14, periph)
/* pa10_qd0_in */
#define PA10_QD0_IN            MCHP_PINMUX(a, 10, 0xa0, 14, periph)
/* pa10_qd0_out */
#define PA10_QD0_OUT           MCHP_PINMUX(a, 10, 0x288, 33, periph)
/* pa10_qd1_in */
#define PA10_QD1_IN            MCHP_PINMUX(a, 10, 0xa4, 21, periph)
/* pa10_qd1_out */
#define PA10_QD1_OUT           MCHP_PINMUX(a, 10, 0x284, 30, periph)
/* pa10_qd2_out */
#define PA10_QD2_OUT           MCHP_PINMUX(a, 10, 0x284, 29, periph)
/* pa10_qd3_out */
#define PA10_QD3_OUT           MCHP_PINMUX(a, 10, 0x284, 28, periph)
/* pa10_qeiccmp0_out */
#define PA10_QEICCMP0_OUT      MCHP_PINMUX(a, 10, 0x284, 31, periph)
/* pa10_qeihome0g1_in */
#define PA10_QEIHOME0G1_IN     MCHP_PINMUX(a, 10, 0x16c, 21, periph)
/* pa10_qeiqea0g4_in */
#define PA10_QEIQEA0G4_IN      MCHP_PINMUX(a, 10, 0x180, 14, periph)
/* pa10_qeiqeb0g4_in */
#define PA10_QEIQEB0G4_IN      MCHP_PINMUX(a, 10, 0x184, 14, periph)
/* pa10_qeiqeb0g5_in */
#define PA10_QEIQEB0G5_IN      MCHP_PINMUX(a, 10, 0x188, 2, periph)
/* pa10_qspics_out */
#define PA10_QSPICS_OUT        MCHP_PINMUX(a, 10, 0x284, 27, periph)
/* pa10_scom0p0_out */
#define PA10_SCOM0P0_OUT       MCHP_PINMUX(a, 10, 0x288, 3, periph)
/* pa10_scom0p2_in */
#define PA10_SCOM0P2_IN        MCHP_PINMUX(a, 10, 0x48, 14, periph)
/* pa10_scom0p2_out */
#define PA10_SCOM0P2_OUT       MCHP_PINMUX(a, 10, 0x284, 2, periph)
/* pa10_scom0p3_in */
#define PA10_SCOM0P3_IN        MCHP_PINMUX(a, 10, 0x4c, 21, periph)
/* pa10_scom0p3_out */
#define PA10_SCOM0P3_OUT       MCHP_PINMUX(a, 10, 0x284, 1, periph)
/* pa10_scom1p0_out */
#define PA10_SCOM1P0_OUT       MCHP_PINMUX(a, 10, 0x284, 3, periph)
/* pa10_scom1p2_in */
#define PA10_SCOM1P2_IN        MCHP_PINMUX(a, 10, 0x58, 21, periph)
/* pa10_scom1p2_out */
#define PA10_SCOM1P2_OUT       MCHP_PINMUX(a, 10, 0x284, 4, periph)
/* pa10_scom1p3_out */
#define PA10_SCOM1P3_OUT       MCHP_PINMUX(a, 10, 0x288, 4, periph)
/* pa10_scom2p0_out */
#define PA10_SCOM2P0_OUT       MCHP_PINMUX(a, 10, 0x288, 7, periph)
/* pa10_scom2p2_in */
#define PA10_SCOM2P2_IN        MCHP_PINMUX(a, 10, 0x68, 14, periph)
/* pa10_scom2p2_out */
#define PA10_SCOM2P2_OUT       MCHP_PINMUX(a, 10, 0x284, 6, periph)
/* pa10_scom2p3_in */
#define PA10_SCOM2P3_IN        MCHP_PINMUX(a, 10, 0x6c, 21, periph)
/* pa10_scom2p3_out */
#define PA10_SCOM2P3_OUT       MCHP_PINMUX(a, 10, 0x284, 5, periph)
/* pa10_scom3p0_out */
#define PA10_SCOM3P0_OUT       MCHP_PINMUX(a, 10, 0x284, 7, periph)
/* pa10_scom3p2_in */
#define PA10_SCOM3P2_IN        MCHP_PINMUX(a, 10, 0x78, 21, periph)
/* pa10_scom3p2_out */
#define PA10_SCOM3P2_OUT       MCHP_PINMUX(a, 10, 0x284, 8, periph)
/* pa10_scom3p3_out */
#define PA10_SCOM3P3_OUT       MCHP_PINMUX(a, 10, 0x288, 8, periph)
/* pa10_scom4p0_out */
#define PA10_SCOM4P0_OUT       MCHP_PINMUX(a, 10, 0x288, 11, periph)
/* pa10_scom4p2_in */
#define PA10_SCOM4P2_IN        MCHP_PINMUX(a, 10, 0x88, 14, periph)
/* pa10_scom4p2_out */
#define PA10_SCOM4P2_OUT       MCHP_PINMUX(a, 10, 0x284, 10, periph)
/* pa10_scom4p3_in */
#define PA10_SCOM4P3_IN        MCHP_PINMUX(a, 10, 0x8c, 21, periph)
/* pa10_scom4p3_out */
#define PA10_SCOM4P3_OUT       MCHP_PINMUX(a, 10, 0x284, 9, periph)
/* pa10_scom5p0_out */
#define PA10_SCOM5P0_OUT       MCHP_PINMUX(a, 10, 0x284, 11, periph)
/* pa10_scom5p2_in */
#define PA10_SCOM5P2_IN        MCHP_PINMUX(a, 10, 0x98, 21, periph)
/* pa10_scom5p2_out */
#define PA10_SCOM5P2_OUT       MCHP_PINMUX(a, 10, 0x284, 12, periph)
/* pa10_scom5p3_out */
#define PA10_SCOM5P3_OUT       MCHP_PINMUX(a, 10, 0x288, 12, periph)
/* pa10_tc0wo0g1_in */
#define PA10_TC0WO0G1_IN       MCHP_PINMUX(a, 10, 0xcc, 21, periph)
/* pa10_tc0wo0_out */
#define PA10_TC0WO0_OUT        MCHP_PINMUX(a, 10, 0x288, 21, periph)
/* pa10_tc0wo1g4_in */
#define PA10_TC0WO1G4_IN       MCHP_PINMUX(a, 10, 0xd8, 14, periph)
/* pa10_tc0wo1_out */
#define PA10_TC0WO1_OUT        MCHP_PINMUX(a, 10, 0x284, 18, periph)
/* pa10_tc1wo0g1_in */
#define PA10_TC1WO0G1_IN       MCHP_PINMUX(a, 10, 0xdc, 21, periph)
/* pa10_tc1wo0_out */
#define PA10_TC1WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 19, periph)
/* pa10_tc1wo1_out */
#define PA10_TC1WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 22, periph)
/* pa10_tc2wo0g1_in */
#define PA10_TC2WO0G1_IN       MCHP_PINMUX(a, 10, 0xec, 21, periph)
/* pa10_tc2wo0_out */
#define PA10_TC2WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 20, periph)
/* pa10_tc2wo1g4_in */
#define PA10_TC2WO1G4_IN       MCHP_PINMUX(a, 10, 0xf8, 14, periph)
/* pa10_tc2wo1_out */
#define PA10_TC2WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 23, periph)
/* pa10_tc3wo0g1_in */
#define PA10_TC3WO0G1_IN       MCHP_PINMUX(a, 10, 0xfc, 21, periph)
/* pa10_tc3wo0_out */
#define PA10_TC3WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 21, periph)
/* pa10_tc3wo1g4_in */
#define PA10_TC3WO1G4_IN       MCHP_PINMUX(a, 10, 0x108, 14, periph)
/* pa10_tc3wo1_out */
#define PA10_TC3WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 24, periph)
/* pa10_tc4wo0g1_in */
#define PA10_TC4WO0G1_IN       MCHP_PINMUX(a, 10, 0x10c, 21, periph)
/* pa10_tc4wo0_out */
#define PA10_TC4WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 22, periph)
/* pa10_tc4wo1g4_in */
#define PA10_TC4WO1G4_IN       MCHP_PINMUX(a, 10, 0x118, 14, periph)
/* pa10_tc4wo1_out */
#define PA10_TC4WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 25, periph)
/* pa10_tc5wo0g1_in */
#define PA10_TC5WO0G1_IN       MCHP_PINMUX(a, 10, 0x11c, 21, periph)
/* pa10_tc5wo0_out */
#define PA10_TC5WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 23, periph)
/* pa10_tc5wo1g4_in */
#define PA10_TC5WO1G4_IN       MCHP_PINMUX(a, 10, 0x128, 14, periph)
/* pa10_tc5wo1_out */
#define PA10_TC5WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 26, periph)
/* pa10_tc6wo0g1_in */
#define PA10_TC6WO0G1_IN       MCHP_PINMUX(a, 10, 0x12c, 21, periph)
/* pa10_tc6wo0_out */
#define PA10_TC6WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 24, periph)
/* pa10_tc6wo1g4_in */
#define PA10_TC6WO1G4_IN       MCHP_PINMUX(a, 10, 0x138, 14, periph)
/* pa10_tc6wo1_out */
#define PA10_TC6WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 27, periph)
/* pa10_tc7wo0g1_in */
#define PA10_TC7WO0G1_IN       MCHP_PINMUX(a, 10, 0x13c, 21, periph)
/* pa10_tc7wo0_out */
#define PA10_TC7WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 25, periph)
/* pa10_tc7wo1g4_in */
#define PA10_TC7WO1G4_IN       MCHP_PINMUX(a, 10, 0x148, 14, periph)
/* pa10_tc7wo1_out */
#define PA10_TC7WO1_OUT        MCHP_PINMUX(a, 10, 0x288, 28, periph)
/* pa10_tc8wo0g1_in */
#define PA10_TC8WO0G1_IN       MCHP_PINMUX(a, 10, 0x14c, 21, periph)
/* pa10_tc8wo0_out */
#define PA10_TC8WO0_OUT        MCHP_PINMUX(a, 10, 0x284, 26, periph)
/* pa10_tc8wo1g5_in */
#define PA10_TC8WO1G5_IN       MCHP_PINMUX(a, 10, 0x158, 2, periph)
/* pa10_tc8wo1_out */
#define PA10_TC8WO1_OUT        MCHP_PINMUX(a, 10, 0x28c, 10, periph)
/* pa10_tc9wo0g4_in */
#define PA10_TC9WO0G4_IN       MCHP_PINMUX(a, 10, 0x160, 14, periph)
/* pa10_tc9wo0_out */
#define PA10_TC9WO0_OUT        MCHP_PINMUX(a, 10, 0x288, 29, periph)
/* pa10_tc9wo1g5_in */
#define PA10_TC9WO1G5_IN       MCHP_PINMUX(a, 10, 0x168, 2, periph)
/* pa10_tc9wo1_out */
#define PA10_TC9WO1_OUT        MCHP_PINMUX(a, 10, 0x28c, 11, periph)
/* pa10_tcc0wo0_out */
#define PA10_TCC0WO0_OUT       MCHP_PINMUX(a, 10, 0x284, 13, periph)
/* pa10_tcc0wo1_out */
#define PA10_TCC0WO1_OUT       MCHP_PINMUX(a, 10, 0x288, 15, periph)
/* pa10_tcc0wo2_out */
#define PA10_TCC0WO2_OUT       MCHP_PINMUX(a, 10, 0x28c, 5, periph)
/* pa10_tcc0wo3_out */
#define PA10_TCC0WO3_OUT       MCHP_PINMUX(a, 10, 0x288, 14, periph)
/* pa10_tcc0wo4_out */
#define PA10_TCC0WO4_OUT       MCHP_PINMUX(a, 10, 0x284, 14, periph)
/* pa10_tcc0wo5_out */
#define PA10_TCC0WO5_OUT       MCHP_PINMUX(a, 10, 0x288, 16, periph)
/* pa10_tcc1wo0_out */
#define PA10_TCC1WO0_OUT       MCHP_PINMUX(a, 10, 0x284, 15, periph)
/* pa10_tcc1wo1_out */
#define PA10_TCC1WO1_OUT       MCHP_PINMUX(a, 10, 0x288, 18, periph)
/* pa10_tcc1wo2_out */
#define PA10_TCC1WO2_OUT       MCHP_PINMUX(a, 10, 0x28c, 8, periph)
/* pa10_tcc1wo3_out */
#define PA10_TCC1WO3_OUT       MCHP_PINMUX(a, 10, 0x288, 17, periph)
/* pa10_tcc1wo4_out */
#define PA10_TCC1WO4_OUT       MCHP_PINMUX(a, 10, 0x284, 16, periph)
/* pa10_tcc1wo5_out */
#define PA10_TCC1WO5_OUT       MCHP_PINMUX(a, 10, 0x288, 19, periph)
/* pa10_tcc2wo0_out */
#define PA10_TCC2WO0_OUT       MCHP_PINMUX(a, 10, 0x284, 17, periph)
/* pa10_tcc2wo1_out */
#define PA10_TCC2WO1_OUT       MCHP_PINMUX(a, 10, 0x288, 20, periph)
/* pa10_tstbus0_out */
#define PA10_TSTBUS0_OUT       MCHP_PINMUX(a, 10, 0x284, 32, periph)
/* pa10_tstbus2_out */
#define PA10_TSTBUS2_OUT       MCHP_PINMUX(a, 10, 0x288, 34, periph)
/* pa10_tstbus3_out */
#define PA10_TSTBUS3_OUT       MCHP_PINMUX(a, 10, 0x28c, 15, periph)
/* pa10_tstbus4_out */
#define PA10_TSTBUS4_OUT       MCHP_PINMUX(a, 10, 0x284, 33, periph)
/* pa10_tstbus6_out */
#define PA10_TSTBUS6_OUT       MCHP_PINMUX(a, 10, 0x288, 35, periph)
/* pa10_tstbus7_out */
#define PA10_TSTBUS7_OUT       MCHP_PINMUX(a, 10, 0x28c, 16, periph)
/* pa10_tstbus8_out */
#define PA10_TSTBUS8_OUT       MCHP_PINMUX(a, 10, 0x284, 34, periph)
/* pa10_tstbus11_out */
#define PA10_TSTBUS11_OUT      MCHP_PINMUX(a, 10, 0x28c, 17, periph)
/* pa11_accmpten_in */
#define PA11_ACCMPTEN_IN       MCHP_PINMUX(a, 11, 0x18c, 3, periph)
/* pa11_cclin0_in */
#define PA11_CCLIN0_IN         MCHP_PINMUX(a, 11, 0xb4, 3, periph)
/* pa11_cclin1_in */
#define PA11_CCLIN1_IN         MCHP_PINMUX(a, 11, 0xb8, 25, periph)
/* pa11_cclin3_in */
#define PA11_CCLIN3_IN         MCHP_PINMUX(a, 11, 0xc0, 3, periph)
/* pa11_cclin4_in */
#define PA11_CCLIN4_IN         MCHP_PINMUX(a, 11, 0xc4, 25, periph)
/* pa11_extint0_in */
#define PA11_EXTINT0_IN        MCHP_PINMUX(a, 11, 0x0, 3, periph)
/* pa11_extint1_in */
#define PA11_EXTINT1_IN        MCHP_PINMUX(a, 11, 0x4, 25, periph)
/* pa11_qd1_in */
#define PA11_QD1_IN            MCHP_PINMUX(a, 11, 0xa4, 3, periph)
/* pa11_qd2_in */
#define PA11_QD2_IN            MCHP_PINMUX(a, 11, 0xa8, 25, periph)
/* pa11_qeihome0g1_in */
#define PA11_QEIHOME0G1_IN     MCHP_PINMUX(a, 11, 0x16c, 3, periph)
/* pa11_qeihome0g2_in */
#define PA11_QEIHOME0G2_IN     MCHP_PINMUX(a, 11, 0x170, 25, periph)
/* pa11_qeiindx0g2_in */
#define PA11_QEIINDX0G2_IN     MCHP_PINMUX(a, 11, 0x174, 25, periph)
/* pa11_scom0p0_in */
#define PA11_SCOM0P0_IN        MCHP_PINMUX(a, 11, 0x40, 25, periph)
/* pa11_scom0p3_in */
#define PA11_SCOM0P3_IN        MCHP_PINMUX(a, 11, 0x4c, 3, periph)
/* pa11_scom1p2_in */
#define PA11_SCOM1P2_IN        MCHP_PINMUX(a, 11, 0x58, 3, periph)
/* pa11_scom1p3_in */
#define PA11_SCOM1P3_IN        MCHP_PINMUX(a, 11, 0x5c, 25, periph)
/* pa11_scom2p0_in */
#define PA11_SCOM2P0_IN        MCHP_PINMUX(a, 11, 0x60, 25, periph)
/* pa11_scom2p3_in */
#define PA11_SCOM2P3_IN        MCHP_PINMUX(a, 11, 0x6c, 3, periph)
/* pa11_scom3p2_in */
#define PA11_SCOM3P2_IN        MCHP_PINMUX(a, 11, 0x78, 3, periph)
/* pa11_scom3p3_in */
#define PA11_SCOM3P3_IN        MCHP_PINMUX(a, 11, 0x7c, 25, periph)
/* pa11_scom4p0_in */
#define PA11_SCOM4P0_IN        MCHP_PINMUX(a, 11, 0x80, 25, periph)
/* pa11_scom4p3_in */
#define PA11_SCOM4P3_IN        MCHP_PINMUX(a, 11, 0x8c, 3, periph)
/* pa11_scom5p2_in */
#define PA11_SCOM5P2_IN        MCHP_PINMUX(a, 11, 0x98, 3, periph)
/* pa11_scom5p3_in */
#define PA11_SCOM5P3_IN        MCHP_PINMUX(a, 11, 0x9c, 25, periph)
/* pa11_tc0wo0g1_in */
#define PA11_TC0WO0G1_IN       MCHP_PINMUX(a, 11, 0xcc, 3, periph)
/* pa11_tc0wo0g2_in */
#define PA11_TC0WO0G2_IN       MCHP_PINMUX(a, 11, 0xd0, 25, periph)
/* pa11_tc1wo0g1_in */
#define PA11_TC1WO0G1_IN       MCHP_PINMUX(a, 11, 0xdc, 3, periph)
/* pa11_tc1wo1g2_in */
#define PA11_TC1WO1G2_IN       MCHP_PINMUX(a, 11, 0xe4, 25, periph)
/* pa11_tc2wo0g1_in */
#define PA11_TC2WO0G1_IN       MCHP_PINMUX(a, 11, 0xec, 3, periph)
/* pa11_tc2wo1g2_in */
#define PA11_TC2WO1G2_IN       MCHP_PINMUX(a, 11, 0xf4, 25, periph)
/* pa11_tc3wo0g1_in */
#define PA11_TC3WO0G1_IN       MCHP_PINMUX(a, 11, 0xfc, 3, periph)
/* pa11_tc3wo1g2_in */
#define PA11_TC3WO1G2_IN       MCHP_PINMUX(a, 11, 0x104, 25, periph)
/* pa11_tc4wo0g1_in */
#define PA11_TC4WO0G1_IN       MCHP_PINMUX(a, 11, 0x10c, 3, periph)
/* pa11_tc4wo1g2_in */
#define PA11_TC4WO1G2_IN       MCHP_PINMUX(a, 11, 0x114, 25, periph)
/* pa11_tc5wo0g1_in */
#define PA11_TC5WO0G1_IN       MCHP_PINMUX(a, 11, 0x11c, 3, periph)
/* pa11_tc5wo1g2_in */
#define PA11_TC5WO1G2_IN       MCHP_PINMUX(a, 11, 0x124, 25, periph)
/* pa11_tc6wo0g1_in */
#define PA11_TC6WO0G1_IN       MCHP_PINMUX(a, 11, 0x12c, 3, periph)
/* pa11_tc6wo1g2_in */
#define PA11_TC6WO1G2_IN       MCHP_PINMUX(a, 11, 0x134, 25, periph)
/* pa11_tc7wo0g1_in */
#define PA11_TC7WO0G1_IN       MCHP_PINMUX(a, 11, 0x13c, 3, periph)
/* pa11_tc7wo1g2_in */
#define PA11_TC7WO1G2_IN       MCHP_PINMUX(a, 11, 0x144, 25, periph)
/* pa11_tc8wo0g1_in */
#define PA11_TC8WO0G1_IN       MCHP_PINMUX(a, 11, 0x14c, 3, periph)
/* pa11_tc8wo1g2_in */
#define PA11_TC8WO1G2_IN       MCHP_PINMUX(a, 11, 0x154, 25, periph)
/* pa11_tc9wo0g2_in */
#define PA11_TC9WO0G2_IN       MCHP_PINMUX(a, 11, 0x15c, 25, periph)
/* pa12_can1rx_in */
#define PA12_CAN1RX_IN         MCHP_PINMUX(a, 12, 0x190, 24, periph)
/* pa12_cclin1_in */
#define PA12_CCLIN1_IN         MCHP_PINMUX(a, 12, 0xb8, 3, periph)
/* pa12_cclin2_in */
#define PA12_CCLIN2_IN         MCHP_PINMUX(a, 12, 0xbc, 24, periph)
/* pa12_cclin4_in */
#define PA12_CCLIN4_IN         MCHP_PINMUX(a, 12, 0xc4, 3, periph)
/* pa12_cclin5_in */
#define PA12_CCLIN5_IN         MCHP_PINMUX(a, 12, 0xc8, 24, periph)
/* pa12_extint1_in */
#define PA12_EXTINT1_IN        MCHP_PINMUX(a, 12, 0x4, 3, periph)
/* pa12_extint2_in */
#define PA12_EXTINT2_IN        MCHP_PINMUX(a, 12, 0x8, 24, periph)
/* pa12_qd2_in */
#define PA12_QD2_IN            MCHP_PINMUX(a, 12, 0xa8, 3, periph)
/* pa12_qd3_in */
#define PA12_QD3_IN            MCHP_PINMUX(a, 12, 0xac, 24, periph)
/* pa12_qeihome0g2_in */
#define PA12_QEIHOME0G2_IN     MCHP_PINMUX(a, 12, 0x170, 3, periph)
/* pa12_qeiindx0g2_in */
#define PA12_QEIINDX0G2_IN     MCHP_PINMUX(a, 12, 0x174, 3, periph)
/* pa12_qeiindx0g3_in */
#define PA12_QEIINDX0G3_IN     MCHP_PINMUX(a, 12, 0x178, 24, periph)
/* pa12_qeiqea0g3_in */
#define PA12_QEIQEA0G3_IN      MCHP_PINMUX(a, 12, 0x17c, 24, periph)
/* pa12_scom0p0_in */
#define PA12_SCOM0P0_IN        MCHP_PINMUX(a, 12, 0x40, 3, periph)
/* pa12_scom1p0_in */
#define PA12_SCOM1P0_IN        MCHP_PINMUX(a, 12, 0x50, 24, periph)
/* pa12_scom1p3_in */
#define PA12_SCOM1P3_IN        MCHP_PINMUX(a, 12, 0x5c, 3, periph)
/* pa12_scom2p0_in */
#define PA12_SCOM2P0_IN        MCHP_PINMUX(a, 12, 0x60, 3, periph)
/* pa12_scom3p0_in */
#define PA12_SCOM3P0_IN        MCHP_PINMUX(a, 12, 0x70, 24, periph)
/* pa12_scom3p3_in */
#define PA12_SCOM3P3_IN        MCHP_PINMUX(a, 12, 0x7c, 3, periph)
/* pa12_scom4p0_in */
#define PA12_SCOM4P0_IN        MCHP_PINMUX(a, 12, 0x80, 3, periph)
/* pa12_scom5p0_in */
#define PA12_SCOM5P0_IN        MCHP_PINMUX(a, 12, 0x90, 24, periph)
/* pa12_scom5p3_in */
#define PA12_SCOM5P3_IN        MCHP_PINMUX(a, 12, 0x9c, 3, periph)
/* pa12_tc0wo0g2_in */
#define PA12_TC0WO0G2_IN       MCHP_PINMUX(a, 12, 0xd0, 3, periph)
/* pa12_tc0wo1g3_in */
#define PA12_TC0WO1G3_IN       MCHP_PINMUX(a, 12, 0xd4, 24, periph)
/* pa12_tc1wo1g2_in */
#define PA12_TC1WO1G2_IN       MCHP_PINMUX(a, 12, 0xe4, 3, periph)
/* pa12_tc2wo0g3_in */
#define PA12_TC2WO0G3_IN       MCHP_PINMUX(a, 12, 0xf0, 24, periph)
/* pa12_tc2wo1g2_in */
#define PA12_TC2WO1G2_IN       MCHP_PINMUX(a, 12, 0xf4, 3, periph)
/* pa12_tc3wo0g3_in */
#define PA12_TC3WO0G3_IN       MCHP_PINMUX(a, 12, 0x100, 24, periph)
/* pa12_tc3wo1g2_in */
#define PA12_TC3WO1G2_IN       MCHP_PINMUX(a, 12, 0x104, 3, periph)
/* pa12_tc4wo0g3_in */
#define PA12_TC4WO0G3_IN       MCHP_PINMUX(a, 12, 0x110, 24, periph)
/* pa12_tc4wo1g2_in */
#define PA12_TC4WO1G2_IN       MCHP_PINMUX(a, 12, 0x114, 3, periph)
/* pa12_tc5wo0g3_in */
#define PA12_TC5WO0G3_IN       MCHP_PINMUX(a, 12, 0x120, 24, periph)
/* pa12_tc5wo1g2_in */
#define PA12_TC5WO1G2_IN       MCHP_PINMUX(a, 12, 0x124, 3, periph)
/* pa12_tc6wo0g3_in */
#define PA12_TC6WO0G3_IN       MCHP_PINMUX(a, 12, 0x130, 24, periph)
/* pa12_tc6wo1g2_in */
#define PA12_TC6WO1G2_IN       MCHP_PINMUX(a, 12, 0x134, 3, periph)
/* pa12_tc7wo0g3_in */
#define PA12_TC7WO0G3_IN       MCHP_PINMUX(a, 12, 0x140, 24, periph)
/* pa12_tc7wo1g2_in */
#define PA12_TC7WO1G2_IN       MCHP_PINMUX(a, 12, 0x144, 3, periph)
/* pa12_tc8wo0g3_in */
#define PA12_TC8WO0G3_IN       MCHP_PINMUX(a, 12, 0x150, 24, periph)
/* pa12_tc8wo1g2_in */
#define PA12_TC8WO1G2_IN       MCHP_PINMUX(a, 12, 0x154, 3, periph)
/* pa12_tc9wo0g2_in */
#define PA12_TC9WO0G2_IN       MCHP_PINMUX(a, 12, 0x15c, 3, periph)
/* pa12_tc9wo1g3_in */
#define PA12_TC9WO1G3_IN       MCHP_PINMUX(a, 12, 0x164, 24, periph)
/* pa13_ac_cmp0_out */
#define PA13_AC_CMP0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 40, periph)
/* pa13_ac_cmp1_out */
#define PA13_AC_CMP1_OUT       MCHP_PINMUX(a, 13, 0x2a4, 36, periph)
/* pa13_ac_cmptout_out */
#define PA13_AC_CMPTOUT_OUT    MCHP_PINMUX(a, 13, 0x2a4, 37, periph)
/* pa13_ac_cmptrdy_out */
#define PA13_AC_CMPTRDY_OUT    MCHP_PINMUX(a, 13, 0x2a0, 41, periph)
/* pa13_can1rx_in */
#define PA13_CAN1RX_IN         MCHP_PINMUX(a, 13, 0x190, 3, periph)
/* pa13_can1_tx_out */
#define PA13_CAN1_TX_OUT       MCHP_PINMUX(a, 13, 0x2a4, 38, periph)
/* pa13_cclin2_in */
#define PA13_CCLIN2_IN         MCHP_PINMUX(a, 13, 0xbc, 3, periph)
/* pa13_cclin5_in */
#define PA13_CCLIN5_IN         MCHP_PINMUX(a, 13, 0xc8, 3, periph)
/* pa13_cclo0_out */
#define PA13_CCLO0_OUT         MCHP_PINMUX(a, 13, 0x2a0, 1, periph)
/* pa13_cclo1_out */
#define PA13_CCLO1_OUT         MCHP_PINMUX(a, 13, 0x2a4, 1, periph)
/* pa13_coexwlanact_in */
#define PA13_COEXWLANACT_IN    MCHP_PINMUX(a, 13, 0x194, 19, periph)
/* pa13_extint2_in */
#define PA13_EXTINT2_IN        MCHP_PINMUX(a, 13, 0x8, 3, periph)
/* pa13_extint3_in */
#define PA13_EXTINT3_IN        MCHP_PINMUX(a, 13, 0xc, 19, periph)
/* pa13_fectrl3_out */
#define PA13_FECTRL3_OUT       MCHP_PINMUX(a, 13, 0x2a4, 39, periph)
/* pa13_fectrl4_out */
#define PA13_FECTRL4_OUT       MCHP_PINMUX(a, 13, 0x2a0, 42, periph)
/* pa13_fectrl5_out */
#define PA13_FECTRL5_OUT       MCHP_PINMUX(a, 13, 0x2a4, 40, periph)
/* pa13_nmi_in */
#define PA13_NMI_IN            MCHP_PINMUX(a, 13, 0x3c, 19, periph)
/* pa13_qd0_in */
#define PA13_QD0_IN            MCHP_PINMUX(a, 13, 0xa0, 19, periph)
/* pa13_qd0_out */
#define PA13_QD0_OUT           MCHP_PINMUX(a, 13, 0x2a0, 36, periph)
/* pa13_qd1_out */
#define PA13_QD1_OUT           MCHP_PINMUX(a, 13, 0x2a0, 35, periph)
/* pa13_qd2_out */
#define PA13_QD2_OUT           MCHP_PINMUX(a, 13, 0x2a4, 31, periph)
/* pa13_qd3_in */
#define PA13_QD3_IN            MCHP_PINMUX(a, 13, 0xac, 3, periph)
/* pa13_qd3_out */
#define PA13_QD3_OUT           MCHP_PINMUX(a, 13, 0x2a0, 37, periph)
/* pa13_qeiindx0g3_in */
#define PA13_QEIINDX0G3_IN     MCHP_PINMUX(a, 13, 0x178, 3, periph)
/* pa13_qeiqea0g3_in */
#define PA13_QEIQEA0G3_IN      MCHP_PINMUX(a, 13, 0x17c, 3, periph)
/* pa13_qeiqea0g4_in */
#define PA13_QEIQEA0G4_IN      MCHP_PINMUX(a, 13, 0x180, 19, periph)
/* pa13_qeiqeb0g4_in */
#define PA13_QEIQEB0G4_IN      MCHP_PINMUX(a, 13, 0x184, 19, periph)
/* pa13_qspics_out */
#define PA13_QSPICS_OUT        MCHP_PINMUX(a, 13, 0x2a0, 34, periph)
/* pa13_scom0p0_out */
#define PA13_SCOM0P0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 2, periph)
/* pa13_scom0p2_in */
#define PA13_SCOM0P2_IN        MCHP_PINMUX(a, 13, 0x48, 19, periph)
/* pa13_scom0p2_out */
#define PA13_SCOM0P2_OUT       MCHP_PINMUX(a, 13, 0x2a4, 2, periph)
/* pa13_scom0p3_out */
#define PA13_SCOM0P3_OUT       MCHP_PINMUX(a, 13, 0x2a0, 3, periph)
/* pa13_scom1p0_in */
#define PA13_SCOM1P0_IN        MCHP_PINMUX(a, 13, 0x50, 3, periph)
/* pa13_scom1p0_out */
#define PA13_SCOM1P0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 5, periph)
/* pa13_scom1p2_out */
#define PA13_SCOM1P2_OUT       MCHP_PINMUX(a, 13, 0x2a0, 4, periph)
/* pa13_scom1p3_out */
#define PA13_SCOM1P3_OUT       MCHP_PINMUX(a, 13, 0x2a0, 6, periph)
/* pa13_scom2p0_out */
#define PA13_SCOM2P0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 7, periph)
/* pa13_scom2p2_in */
#define PA13_SCOM2P2_IN        MCHP_PINMUX(a, 13, 0x68, 19, periph)
/* pa13_scom2p2_out */
#define PA13_SCOM2P2_OUT       MCHP_PINMUX(a, 13, 0x2a4, 6, periph)
/* pa13_scom2p3_out */
#define PA13_SCOM2P3_OUT       MCHP_PINMUX(a, 13, 0x2a0, 8, periph)
/* pa13_scom3p0_in */
#define PA13_SCOM3P0_IN        MCHP_PINMUX(a, 13, 0x70, 3, periph)
/* pa13_scom3p0_out */
#define PA13_SCOM3P0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 10, periph)
/* pa13_scom3p2_out */
#define PA13_SCOM3P2_OUT       MCHP_PINMUX(a, 13, 0x2a0, 9, periph)
/* pa13_scom3p3_out */
#define PA13_SCOM3P3_OUT       MCHP_PINMUX(a, 13, 0x2a0, 11, periph)
/* pa13_scom4p0_out */
#define PA13_SCOM4P0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 12, periph)
/* pa13_scom4p2_in */
#define PA13_SCOM4P2_IN        MCHP_PINMUX(a, 13, 0x88, 19, periph)
/* pa13_scom4p2_out */
#define PA13_SCOM4P2_OUT       MCHP_PINMUX(a, 13, 0x2a4, 10, periph)
/* pa13_scom4p3_out */
#define PA13_SCOM4P3_OUT       MCHP_PINMUX(a, 13, 0x2a0, 13, periph)
/* pa13_scom5p0_in */
#define PA13_SCOM5P0_IN        MCHP_PINMUX(a, 13, 0x90, 3, periph)
/* pa13_scom5p0_out */
#define PA13_SCOM5P0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 15, periph)
/* pa13_scom5p2_out */
#define PA13_SCOM5P2_OUT       MCHP_PINMUX(a, 13, 0x2a0, 14, periph)
/* pa13_scom5p3_out */
#define PA13_SCOM5P3_OUT       MCHP_PINMUX(a, 13, 0x2a0, 16, periph)
/* pa13_tc0wo0_out */
#define PA13_TC0WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 24, periph)
/* pa13_tc0wo1g3_in */
#define PA13_TC0WO1G3_IN       MCHP_PINMUX(a, 13, 0xd4, 3, periph)
/* pa13_tc0wo1g4_in */
#define PA13_TC0WO1G4_IN       MCHP_PINMUX(a, 13, 0xd8, 19, periph)
/* pa13_tc1wo0_out */
#define PA13_TC1WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 25, periph)
/* pa13_tc1wo1_out */
#define PA13_TC1WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 22, periph)
/* pa13_tc2wo0g3_in */
#define PA13_TC2WO0G3_IN       MCHP_PINMUX(a, 13, 0xf0, 3, periph)
/* pa13_tc2wo0_out */
#define PA13_TC2WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 26, periph)
/* pa13_tc2wo1g4_in */
#define PA13_TC2WO1G4_IN       MCHP_PINMUX(a, 13, 0xf8, 19, periph)
/* pa13_tc2wo1_out */
#define PA13_TC2WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 23, periph)
/* pa13_tc3wo0g3_in */
#define PA13_TC3WO0G3_IN       MCHP_PINMUX(a, 13, 0x100, 3, periph)
/* pa13_tc3wo0_out */
#define PA13_TC3WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 27, periph)
/* pa13_tc3wo1g4_in */
#define PA13_TC3WO1G4_IN       MCHP_PINMUX(a, 13, 0x108, 19, periph)
/* pa13_tc3wo1_out */
#define PA13_TC3WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 24, periph)
/* pa13_tc4wo0g3_in */
#define PA13_TC4WO0G3_IN       MCHP_PINMUX(a, 13, 0x110, 3, periph)
/* pa13_tc4wo0_out */
#define PA13_TC4WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 28, periph)
/* pa13_tc4wo1g4_in */
#define PA13_TC4WO1G4_IN       MCHP_PINMUX(a, 13, 0x118, 19, periph)
/* pa13_tc4wo1_out */
#define PA13_TC4WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 25, periph)
/* pa13_tc5wo0g3_in */
#define PA13_TC5WO0G3_IN       MCHP_PINMUX(a, 13, 0x120, 3, periph)
/* pa13_tc5wo0_out */
#define PA13_TC5WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 29, periph)
/* pa13_tc5wo1g4_in */
#define PA13_TC5WO1G4_IN       MCHP_PINMUX(a, 13, 0x128, 19, periph)
/* pa13_tc5wo1_out */
#define PA13_TC5WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 26, periph)
/* pa13_tc6wo0g3_in */
#define PA13_TC6WO0G3_IN       MCHP_PINMUX(a, 13, 0x130, 3, periph)
/* pa13_tc6wo0_out */
#define PA13_TC6WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 30, periph)
/* pa13_tc6wo1g4_in */
#define PA13_TC6WO1G4_IN       MCHP_PINMUX(a, 13, 0x138, 19, periph)
/* pa13_tc6wo1_out */
#define PA13_TC6WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 27, periph)
/* pa13_tc7wo0g3_in */
#define PA13_TC7WO0G3_IN       MCHP_PINMUX(a, 13, 0x140, 3, periph)
/* pa13_tc7wo0_out */
#define PA13_TC7WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 31, periph)
/* pa13_tc7wo1g4_in */
#define PA13_TC7WO1G4_IN       MCHP_PINMUX(a, 13, 0x148, 19, periph)
/* pa13_tc7wo1_out */
#define PA13_TC7WO1_OUT        MCHP_PINMUX(a, 13, 0x2a4, 28, periph)
/* pa13_tc8wo0g3_in */
#define PA13_TC8WO0G3_IN       MCHP_PINMUX(a, 13, 0x150, 3, periph)
/* pa13_tc8wo0_out */
#define PA13_TC8WO0_OUT        MCHP_PINMUX(a, 13, 0x2a0, 32, periph)
/* pa13_tc9wo0g4_in */
#define PA13_TC9WO0G4_IN       MCHP_PINMUX(a, 13, 0x160, 19, periph)
/* pa13_tc9wo0_out */
#define PA13_TC9WO0_OUT        MCHP_PINMUX(a, 13, 0x2a4, 29, periph)
/* pa13_tc9wo1g3_in */
#define PA13_TC9WO1G3_IN       MCHP_PINMUX(a, 13, 0x164, 3, periph)
/* pa13_tc9wo1_out */
#define PA13_TC9WO1_OUT        MCHP_PINMUX(a, 13, 0x2a0, 33, periph)
/* pa13_tcc0wo0_out */
#define PA13_TCC0WO0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 18, periph)
/* pa13_tcc0wo1_out */
#define PA13_TCC0WO1_OUT       MCHP_PINMUX(a, 13, 0x2a4, 15, periph)
/* pa13_tcc0wo2_out */
#define PA13_TCC0WO2_OUT       MCHP_PINMUX(a, 13, 0x2a0, 17, periph)
/* pa13_tcc0wo3_out */
#define PA13_TCC0WO3_OUT       MCHP_PINMUX(a, 13, 0x2a4, 14, periph)
/* pa13_tcc0wo4_out */
#define PA13_TCC0WO4_OUT       MCHP_PINMUX(a, 13, 0x2a0, 19, periph)
/* pa13_tcc0wo5_out */
#define PA13_TCC0WO5_OUT       MCHP_PINMUX(a, 13, 0x2a4, 16, periph)
/* pa13_tcc1wo0_out */
#define PA13_TCC1WO0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 21, periph)
/* pa13_tcc1wo1_out */
#define PA13_TCC1WO1_OUT       MCHP_PINMUX(a, 13, 0x2a4, 18, periph)
/* pa13_tcc1wo2_out */
#define PA13_TCC1WO2_OUT       MCHP_PINMUX(a, 13, 0x2a0, 20, periph)
/* pa13_tcc1wo3_out */
#define PA13_TCC1WO3_OUT       MCHP_PINMUX(a, 13, 0x2a4, 17, periph)
/* pa13_tcc1wo4_out */
#define PA13_TCC1WO4_OUT       MCHP_PINMUX(a, 13, 0x2a0, 22, periph)
/* pa13_tcc1wo5_out */
#define PA13_TCC1WO5_OUT       MCHP_PINMUX(a, 13, 0x2a4, 19, periph)
/* pa13_tcc2wo0_out */
#define PA13_TCC2WO0_OUT       MCHP_PINMUX(a, 13, 0x2a0, 23, periph)
/* pa13_tcc2wo1_out */
#define PA13_TCC2WO1_OUT       MCHP_PINMUX(a, 13, 0x2a4, 20, periph)
/* pa13_tstbus1_out */
#define PA13_TSTBUS1_OUT       MCHP_PINMUX(a, 13, 0x2a0, 38, periph)
/* pa13_tstbus2_out */
#define PA13_TSTBUS2_OUT       MCHP_PINMUX(a, 13, 0x2a4, 34, periph)
/* pa13_tstbus6_out */
#define PA13_TSTBUS6_OUT       MCHP_PINMUX(a, 13, 0x2a4, 35, periph)
/* pa13_tstbus10_out */
#define PA13_TSTBUS10_OUT      MCHP_PINMUX(a, 13, 0x2a0, 39, periph)
/* pa14_accmpten_in */
#define PA14_ACCMPTEN_IN       MCHP_PINMUX(a, 14, 0x18c, 22, periph)
/* pa14_ac_cmp1_out */
#define PA14_AC_CMP1_OUT       MCHP_PINMUX(a, 14, 0x2ac, 36, periph)
/* pa14_ac_cmptout_out */
#define PA14_AC_CMPTOUT_OUT    MCHP_PINMUX(a, 14, 0x2ac, 37, periph)
/* pa14_can1_tx_out */
#define PA14_CAN1_TX_OUT       MCHP_PINMUX(a, 14, 0x2ac, 38, periph)
/* pa14_cclin0_in */
#define PA14_CCLIN0_IN         MCHP_PINMUX(a, 14, 0xb4, 22, periph)
/* pa14_cclin3_in */
#define PA14_CCLIN3_IN         MCHP_PINMUX(a, 14, 0xc0, 22, periph)
/* pa14_cclo1_out */
#define PA14_CCLO1_OUT         MCHP_PINMUX(a, 14, 0x2ac, 1, periph)
/* pa14_coexwlanact_in */
#define PA14_COEXWLANACT_IN    MCHP_PINMUX(a, 14, 0x194, 3, periph)
/* pa14_coex_bt_state_out */
#define PA14_COEX_BT_STATE_OUT MCHP_PINMUX(a, 14, 0x2a8, 37, periph)
/* pa14_extint0_in */
#define PA14_EXTINT0_IN        MCHP_PINMUX(a, 14, 0x0, 22, periph)
/* pa14_extint3_in */
#define PA14_EXTINT3_IN        MCHP_PINMUX(a, 14, 0xc, 3, periph)
/* pa14_fectrl1_out */
#define PA14_FECTRL1_OUT       MCHP_PINMUX(a, 14, 0x2a8, 35, periph)
/* pa14_fectrl2_out */
#define PA14_FECTRL2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 36, periph)
/* pa14_fectrl3_out */
#define PA14_FECTRL3_OUT       MCHP_PINMUX(a, 14, 0x2ac, 39, periph)
/* pa14_fectrl5_out */
#define PA14_FECTRL5_OUT       MCHP_PINMUX(a, 14, 0x2ac, 40, periph)
/* pa14_nmi_in */
#define PA14_NMI_IN            MCHP_PINMUX(a, 14, 0x3c, 3, periph)
/* pa14_qd0_in */
#define PA14_QD0_IN            MCHP_PINMUX(a, 14, 0xa0, 3, periph)
/* pa14_qd0_out */
#define PA14_QD0_OUT           MCHP_PINMUX(a, 14, 0x2ac, 33, periph)
/* pa14_qd1_in */
#define PA14_QD1_IN            MCHP_PINMUX(a, 14, 0xa4, 22, periph)
/* pa14_qd1_out */
#define PA14_QD1_OUT           MCHP_PINMUX(a, 14, 0x2a8, 30, periph)
/* pa14_qd2_out */
#define PA14_QD2_OUT           MCHP_PINMUX(a, 14, 0x2a8, 29, periph)
/* pa14_qd3_out */
#define PA14_QD3_OUT           MCHP_PINMUX(a, 14, 0x2a8, 28, periph)
/* pa14_qeiccmp0_out */
#define PA14_QEICCMP0_OUT      MCHP_PINMUX(a, 14, 0x2a8, 31, periph)
/* pa14_qeihome0g1_in */
#define PA14_QEIHOME0G1_IN     MCHP_PINMUX(a, 14, 0x16c, 22, periph)
/* pa14_qeiqea0g4_in */
#define PA14_QEIQEA0G4_IN      MCHP_PINMUX(a, 14, 0x180, 3, periph)
/* pa14_qeiqeb0g4_in */
#define PA14_QEIQEB0G4_IN      MCHP_PINMUX(a, 14, 0x184, 3, periph)
/* pa14_qspics_out */
#define PA14_QSPICS_OUT        MCHP_PINMUX(a, 14, 0x2a8, 27, periph)
/* pa14_scom0p0_out */
#define PA14_SCOM0P0_OUT       MCHP_PINMUX(a, 14, 0x2ac, 3, periph)
/* pa14_scom0p2_in */
#define PA14_SCOM0P2_IN        MCHP_PINMUX(a, 14, 0x48, 3, periph)
/* pa14_scom0p2_out */
#define PA14_SCOM0P2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 2, periph)
/* pa14_scom0p3_in */
#define PA14_SCOM0P3_IN        MCHP_PINMUX(a, 14, 0x4c, 22, periph)
/* pa14_scom0p3_out */
#define PA14_SCOM0P3_OUT       MCHP_PINMUX(a, 14, 0x2a8, 1, periph)
/* pa14_scom1p0_out */
#define PA14_SCOM1P0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 3, periph)
/* pa14_scom1p2_in */
#define PA14_SCOM1P2_IN        MCHP_PINMUX(a, 14, 0x58, 22, periph)
/* pa14_scom1p2_out */
#define PA14_SCOM1P2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 4, periph)
/* pa14_scom1p3_out */
#define PA14_SCOM1P3_OUT       MCHP_PINMUX(a, 14, 0x2ac, 4, periph)
/* pa14_scom2p0_out */
#define PA14_SCOM2P0_OUT       MCHP_PINMUX(a, 14, 0x2ac, 7, periph)
/* pa14_scom2p2_in */
#define PA14_SCOM2P2_IN        MCHP_PINMUX(a, 14, 0x68, 3, periph)
/* pa14_scom2p2_out */
#define PA14_SCOM2P2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 6, periph)
/* pa14_scom2p3_in */
#define PA14_SCOM2P3_IN        MCHP_PINMUX(a, 14, 0x6c, 22, periph)
/* pa14_scom2p3_out */
#define PA14_SCOM2P3_OUT       MCHP_PINMUX(a, 14, 0x2a8, 5, periph)
/* pa14_scom3p0_out */
#define PA14_SCOM3P0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 7, periph)
/* pa14_scom3p2_in */
#define PA14_SCOM3P2_IN        MCHP_PINMUX(a, 14, 0x78, 22, periph)
/* pa14_scom3p2_out */
#define PA14_SCOM3P2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 8, periph)
/* pa14_scom3p3_out */
#define PA14_SCOM3P3_OUT       MCHP_PINMUX(a, 14, 0x2ac, 8, periph)
/* pa14_scom4p0_out */
#define PA14_SCOM4P0_OUT       MCHP_PINMUX(a, 14, 0x2ac, 11, periph)
/* pa14_scom4p2_in */
#define PA14_SCOM4P2_IN        MCHP_PINMUX(a, 14, 0x88, 3, periph)
/* pa14_scom4p2_out */
#define PA14_SCOM4P2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 10, periph)
/* pa14_scom4p3_in */
#define PA14_SCOM4P3_IN        MCHP_PINMUX(a, 14, 0x8c, 22, periph)
/* pa14_scom4p3_out */
#define PA14_SCOM4P3_OUT       MCHP_PINMUX(a, 14, 0x2a8, 9, periph)
/* pa14_scom5p0_out */
#define PA14_SCOM5P0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 11, periph)
/* pa14_scom5p2_in */
#define PA14_SCOM5P2_IN        MCHP_PINMUX(a, 14, 0x98, 22, periph)
/* pa14_scom5p2_out */
#define PA14_SCOM5P2_OUT       MCHP_PINMUX(a, 14, 0x2a8, 12, periph)
/* pa14_scom5p3_out */
#define PA14_SCOM5P3_OUT       MCHP_PINMUX(a, 14, 0x2ac, 12, periph)
/* pa14_tc0wo0g1_in */
#define PA14_TC0WO0G1_IN       MCHP_PINMUX(a, 14, 0xcc, 22, periph)
/* pa14_tc0wo0_out */
#define PA14_TC0WO0_OUT        MCHP_PINMUX(a, 14, 0x2ac, 21, periph)
/* pa14_tc0wo1g4_in */
#define PA14_TC0WO1G4_IN       MCHP_PINMUX(a, 14, 0xd8, 3, periph)
/* pa14_tc0wo1_out */
#define PA14_TC0WO1_OUT        MCHP_PINMUX(a, 14, 0x2a8, 18, periph)
/* pa14_tc1wo0g1_in */
#define PA14_TC1WO0G1_IN       MCHP_PINMUX(a, 14, 0xdc, 22, periph)
/* pa14_tc1wo0_out */
#define PA14_TC1WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 19, periph)
/* pa14_tc1wo1_out */
#define PA14_TC1WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 22, periph)
/* pa14_tc2wo0g1_in */
#define PA14_TC2WO0G1_IN       MCHP_PINMUX(a, 14, 0xec, 22, periph)
/* pa14_tc2wo0_out */
#define PA14_TC2WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 20, periph)
/* pa14_tc2wo1g4_in */
#define PA14_TC2WO1G4_IN       MCHP_PINMUX(a, 14, 0xf8, 3, periph)
/* pa14_tc2wo1_out */
#define PA14_TC2WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 23, periph)
/* pa14_tc3wo0g1_in */
#define PA14_TC3WO0G1_IN       MCHP_PINMUX(a, 14, 0xfc, 22, periph)
/* pa14_tc3wo0_out */
#define PA14_TC3WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 21, periph)
/* pa14_tc3wo1g4_in */
#define PA14_TC3WO1G4_IN       MCHP_PINMUX(a, 14, 0x108, 3, periph)
/* pa14_tc3wo1_out */
#define PA14_TC3WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 24, periph)
/* pa14_tc4wo0g1_in */
#define PA14_TC4WO0G1_IN       MCHP_PINMUX(a, 14, 0x10c, 22, periph)
/* pa14_tc4wo0_out */
#define PA14_TC4WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 22, periph)
/* pa14_tc4wo1g4_in */
#define PA14_TC4WO1G4_IN       MCHP_PINMUX(a, 14, 0x118, 3, periph)
/* pa14_tc4wo1_out */
#define PA14_TC4WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 25, periph)
/* pa14_tc5wo0g1_in */
#define PA14_TC5WO0G1_IN       MCHP_PINMUX(a, 14, 0x11c, 22, periph)
/* pa14_tc5wo0_out */
#define PA14_TC5WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 23, periph)
/* pa14_tc5wo1g4_in */
#define PA14_TC5WO1G4_IN       MCHP_PINMUX(a, 14, 0x128, 3, periph)
/* pa14_tc5wo1_out */
#define PA14_TC5WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 26, periph)
/* pa14_tc6wo0g1_in */
#define PA14_TC6WO0G1_IN       MCHP_PINMUX(a, 14, 0x12c, 22, periph)
/* pa14_tc6wo0_out */
#define PA14_TC6WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 24, periph)
/* pa14_tc6wo1g4_in */
#define PA14_TC6WO1G4_IN       MCHP_PINMUX(a, 14, 0x138, 3, periph)
/* pa14_tc6wo1_out */
#define PA14_TC6WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 27, periph)
/* pa14_tc7wo0g1_in */
#define PA14_TC7WO0G1_IN       MCHP_PINMUX(a, 14, 0x13c, 22, periph)
/* pa14_tc7wo0_out */
#define PA14_TC7WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 25, periph)
/* pa14_tc7wo1g4_in */
#define PA14_TC7WO1G4_IN       MCHP_PINMUX(a, 14, 0x148, 3, periph)
/* pa14_tc7wo1_out */
#define PA14_TC7WO1_OUT        MCHP_PINMUX(a, 14, 0x2ac, 28, periph)
/* pa14_tc8wo0g1_in */
#define PA14_TC8WO0G1_IN       MCHP_PINMUX(a, 14, 0x14c, 22, periph)
/* pa14_tc8wo0_out */
#define PA14_TC8WO0_OUT        MCHP_PINMUX(a, 14, 0x2a8, 26, periph)
/* pa14_tc9wo0g4_in */
#define PA14_TC9WO0G4_IN       MCHP_PINMUX(a, 14, 0x160, 3, periph)
/* pa14_tc9wo0_out */
#define PA14_TC9WO0_OUT        MCHP_PINMUX(a, 14, 0x2ac, 29, periph)
/* pa14_tcc0wo0_out */
#define PA14_TCC0WO0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 13, periph)
/* pa14_tcc0wo1_out */
#define PA14_TCC0WO1_OUT       MCHP_PINMUX(a, 14, 0x2ac, 15, periph)
/* pa14_tcc0wo3_out */
#define PA14_TCC0WO3_OUT       MCHP_PINMUX(a, 14, 0x2ac, 14, periph)
/* pa14_tcc0wo4_out */
#define PA14_TCC0WO4_OUT       MCHP_PINMUX(a, 14, 0x2a8, 14, periph)
/* pa14_tcc0wo5_out */
#define PA14_TCC0WO5_OUT       MCHP_PINMUX(a, 14, 0x2ac, 16, periph)
/* pa14_tcc1wo0_out */
#define PA14_TCC1WO0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 15, periph)
/* pa14_tcc1wo1_out */
#define PA14_TCC1WO1_OUT       MCHP_PINMUX(a, 14, 0x2ac, 18, periph)
/* pa14_tcc1wo3_out */
#define PA14_TCC1WO3_OUT       MCHP_PINMUX(a, 14, 0x2ac, 17, periph)
/* pa14_tcc1wo4_out */
#define PA14_TCC1WO4_OUT       MCHP_PINMUX(a, 14, 0x2a8, 16, periph)
/* pa14_tcc1wo5_out */
#define PA14_TCC1WO5_OUT       MCHP_PINMUX(a, 14, 0x2ac, 19, periph)
/* pa14_tcc2wo0_out */
#define PA14_TCC2WO0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 17, periph)
/* pa14_tcc2wo1_out */
#define PA14_TCC2WO1_OUT       MCHP_PINMUX(a, 14, 0x2ac, 20, periph)
/* pa14_tstbus0_out */
#define PA14_TSTBUS0_OUT       MCHP_PINMUX(a, 14, 0x2a8, 32, periph)
/* pa14_tstbus2_out */
#define PA14_TSTBUS2_OUT       MCHP_PINMUX(a, 14, 0x2ac, 34, periph)
/* pa14_tstbus4_out */
#define PA14_TSTBUS4_OUT       MCHP_PINMUX(a, 14, 0x2a8, 33, periph)
/* pa14_tstbus6_out */
#define PA14_TSTBUS6_OUT       MCHP_PINMUX(a, 14, 0x2ac, 35, periph)
/* pa14_tstbus8_out */
#define PA14_TSTBUS8_OUT       MCHP_PINMUX(a, 14, 0x2a8, 34, periph)
/* pb0_accmpten_in */
#define PB0_ACCMPTEN_IN        MCHP_PINMUX(b, 0, 0x18c, 4, periph)
/* pb0_cclin0_in */
#define PB0_CCLIN0_IN          MCHP_PINMUX(b, 0, 0xb4, 4, periph)
/* pb0_cclin1_in */
#define PB0_CCLIN1_IN          MCHP_PINMUX(b, 0, 0xb8, 21, periph)
/* pb0_cclin3_in */
#define PB0_CCLIN3_IN          MCHP_PINMUX(b, 0, 0xc0, 4, periph)
/* pb0_cclin4_in */
#define PB0_CCLIN4_IN          MCHP_PINMUX(b, 0, 0xc4, 21, periph)
/* pb0_cclo0_out */
#define PB0_CCLO0_OUT          MCHP_PINMUX(b, 0, 0x2bc, 1, periph)
/* pb0_cclo1_out */
#define PB0_CCLO1_OUT          MCHP_PINMUX(b, 0, 0x2b8, 1, periph)
/* pb0_coex_bt_state_out */
#define PB0_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 0, 0x2b4, 37, periph)
/* pb0_coex_rf_act_out */
#define PB0_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 0, 0x2b8, 41, periph)
/* pb0_extint0_in */
#define PB0_EXTINT0_IN         MCHP_PINMUX(b, 0, 0x0, 4, periph)
/* pb0_extint1_in */
#define PB0_EXTINT1_IN         MCHP_PINMUX(b, 0, 0x4, 21, periph)
/* pb0_fectrl0_out */
#define PB0_FECTRL0_OUT        MCHP_PINMUX(b, 0, 0x2b8, 40, periph)
/* pb0_fectrl1_out */
#define PB0_FECTRL1_OUT        MCHP_PINMUX(b, 0, 0x2b4, 35, periph)
/* pb0_fectrl2_out */
#define PB0_FECTRL2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 36, periph)
/* pb0_gmac_tsucomp_out */
#define PB0_GMAC_TSUCOMP_OUT   MCHP_PINMUX(b, 0, 0x2bc, 14, periph)
/* pb0_qd0_out */
#define PB0_QD0_OUT            MCHP_PINMUX(b, 0, 0x2b8, 35, periph)
/* pb0_qd1_in */
#define PB0_QD1_IN             MCHP_PINMUX(b, 0, 0xa4, 4, periph)
/* pb0_qd1_out */
#define PB0_QD1_OUT            MCHP_PINMUX(b, 0, 0x2b4, 30, periph)
/* pb0_qd2_in */
#define PB0_QD2_IN             MCHP_PINMUX(b, 0, 0xa8, 21, periph)
/* pb0_qd2_out */
#define PB0_QD2_OUT            MCHP_PINMUX(b, 0, 0x2b4, 29, periph)
/* pb0_qd3_out */
#define PB0_QD3_OUT            MCHP_PINMUX(b, 0, 0x2b4, 28, periph)
/* pb0_qeiccmp0_out */
#define PB0_QEICCMP0_OUT       MCHP_PINMUX(b, 0, 0x2b4, 31, periph)
/* pb0_qeihome0g1_in */
#define PB0_QEIHOME0G1_IN      MCHP_PINMUX(b, 0, 0x16c, 4, periph)
/* pb0_qeihome0g2_in */
#define PB0_QEIHOME0G2_IN      MCHP_PINMUX(b, 0, 0x170, 21, periph)
/* pb0_qeiindx0g2_in */
#define PB0_QEIINDX0G2_IN      MCHP_PINMUX(b, 0, 0x174, 21, periph)
/* pb0_qeiqeb0g5_in */
#define PB0_QEIQEB0G5_IN       MCHP_PINMUX(b, 0, 0x188, 8, periph)
/* pb0_qspics_out */
#define PB0_QSPICS_OUT         MCHP_PINMUX(b, 0, 0x2b4, 27, periph)
/* pb0_scom0p0_in */
#define PB0_SCOM0P0_IN         MCHP_PINMUX(b, 0, 0x40, 21, periph)
/* pb0_scom0p0_out */
#define PB0_SCOM0P0_OUT        MCHP_PINMUX(b, 0, 0x2b8, 2, periph)
/* pb0_scom0p2_out */
#define PB0_SCOM0P2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 2, periph)
/* pb0_scom0p3_in */
#define PB0_SCOM0P3_IN         MCHP_PINMUX(b, 0, 0x4c, 4, periph)
/* pb0_scom0p3_out */
#define PB0_SCOM0P3_OUT        MCHP_PINMUX(b, 0, 0x2b4, 1, periph)
/* pb0_scom1p0_out */
#define PB0_SCOM1P0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 3, periph)
/* pb0_scom1p2_in */
#define PB0_SCOM1P2_IN         MCHP_PINMUX(b, 0, 0x58, 4, periph)
/* pb0_scom1p2_out */
#define PB0_SCOM1P2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 4, periph)
/* pb0_scom1p3_in */
#define PB0_SCOM1P3_IN         MCHP_PINMUX(b, 0, 0x5c, 21, periph)
/* pb0_scom1p3_out */
#define PB0_SCOM1P3_OUT        MCHP_PINMUX(b, 0, 0x2b8, 5, periph)
/* pb0_scom2p0_in */
#define PB0_SCOM2P0_IN         MCHP_PINMUX(b, 0, 0x60, 21, periph)
/* pb0_scom2p0_out */
#define PB0_SCOM2P0_OUT        MCHP_PINMUX(b, 0, 0x2b8, 7, periph)
/* pb0_scom2p2_out */
#define PB0_SCOM2P2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 6, periph)
/* pb0_scom2p3_in */
#define PB0_SCOM2P3_IN         MCHP_PINMUX(b, 0, 0x6c, 4, periph)
/* pb0_scom2p3_out */
#define PB0_SCOM2P3_OUT        MCHP_PINMUX(b, 0, 0x2b4, 5, periph)
/* pb0_scom3p0_out */
#define PB0_SCOM3P0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 7, periph)
/* pb0_scom3p2_in */
#define PB0_SCOM3P2_IN         MCHP_PINMUX(b, 0, 0x78, 4, periph)
/* pb0_scom3p2_out */
#define PB0_SCOM3P2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 8, periph)
/* pb0_scom3p3_in */
#define PB0_SCOM3P3_IN         MCHP_PINMUX(b, 0, 0x7c, 21, periph)
/* pb0_scom3p3_out */
#define PB0_SCOM3P3_OUT        MCHP_PINMUX(b, 0, 0x2b8, 10, periph)
/* pb0_scom4p0_in */
#define PB0_SCOM4P0_IN         MCHP_PINMUX(b, 0, 0x80, 21, periph)
/* pb0_scom4p0_out */
#define PB0_SCOM4P0_OUT        MCHP_PINMUX(b, 0, 0x2b8, 12, periph)
/* pb0_scom4p2_out */
#define PB0_SCOM4P2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 10, periph)
/* pb0_scom4p3_in */
#define PB0_SCOM4P3_IN         MCHP_PINMUX(b, 0, 0x8c, 4, periph)
/* pb0_scom4p3_out */
#define PB0_SCOM4P3_OUT        MCHP_PINMUX(b, 0, 0x2b4, 9, periph)
/* pb0_scom5p0_out */
#define PB0_SCOM5P0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 11, periph)
/* pb0_scom5p2_in */
#define PB0_SCOM5P2_IN         MCHP_PINMUX(b, 0, 0x98, 4, periph)
/* pb0_scom5p2_out */
#define PB0_SCOM5P2_OUT        MCHP_PINMUX(b, 0, 0x2b4, 12, periph)
/* pb0_scom5p3_in */
#define PB0_SCOM5P3_IN         MCHP_PINMUX(b, 0, 0x9c, 21, periph)
/* pb0_scom5p3_out */
#define PB0_SCOM5P3_OUT        MCHP_PINMUX(b, 0, 0x2b8, 15, periph)
/* pb0_tc0wo0g1_in */
#define PB0_TC0WO0G1_IN        MCHP_PINMUX(b, 0, 0xcc, 4, periph)
/* pb0_tc0wo0g2_in */
#define PB0_TC0WO0G2_IN        MCHP_PINMUX(b, 0, 0xd0, 21, periph)
/* pb0_tc0wo1_out */
#define PB0_TC0WO1_OUT         MCHP_PINMUX(b, 0, 0x2b4, 18, periph)
/* pb0_tc1wo0g1_in */
#define PB0_TC1WO0G1_IN        MCHP_PINMUX(b, 0, 0xdc, 4, periph)
/* pb0_tc1wo0_out */
#define PB0_TC1WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 19, periph)
/* pb0_tc1wo1g2_in */
#define PB0_TC1WO1G2_IN        MCHP_PINMUX(b, 0, 0xe4, 21, periph)
/* pb0_tc1wo1_out */
#define PB0_TC1WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 25, periph)
/* pb0_tc2wo0g1_in */
#define PB0_TC2WO0G1_IN        MCHP_PINMUX(b, 0, 0xec, 4, periph)
/* pb0_tc2wo0_out */
#define PB0_TC2WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 20, periph)
/* pb0_tc2wo1g2_in */
#define PB0_TC2WO1G2_IN        MCHP_PINMUX(b, 0, 0xf4, 21, periph)
/* pb0_tc2wo1_out */
#define PB0_TC2WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 26, periph)
/* pb0_tc3wo0g1_in */
#define PB0_TC3WO0G1_IN        MCHP_PINMUX(b, 0, 0xfc, 4, periph)
/* pb0_tc3wo0_out */
#define PB0_TC3WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 21, periph)
/* pb0_tc3wo1g2_in */
#define PB0_TC3WO1G2_IN        MCHP_PINMUX(b, 0, 0x104, 21, periph)
/* pb0_tc3wo1_out */
#define PB0_TC3WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 27, periph)
/* pb0_tc4wo0g1_in */
#define PB0_TC4WO0G1_IN        MCHP_PINMUX(b, 0, 0x10c, 4, periph)
/* pb0_tc4wo0_out */
#define PB0_TC4WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 22, periph)
/* pb0_tc4wo1g2_in */
#define PB0_TC4WO1G2_IN        MCHP_PINMUX(b, 0, 0x114, 21, periph)
/* pb0_tc4wo1_out */
#define PB0_TC4WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 28, periph)
/* pb0_tc5wo0g1_in */
#define PB0_TC5WO0G1_IN        MCHP_PINMUX(b, 0, 0x11c, 4, periph)
/* pb0_tc5wo0_out */
#define PB0_TC5WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 23, periph)
/* pb0_tc5wo1g2_in */
#define PB0_TC5WO1G2_IN        MCHP_PINMUX(b, 0, 0x124, 21, periph)
/* pb0_tc5wo1_out */
#define PB0_TC5WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 29, periph)
/* pb0_tc6wo0g1_in */
#define PB0_TC6WO0G1_IN        MCHP_PINMUX(b, 0, 0x12c, 4, periph)
/* pb0_tc6wo0_out */
#define PB0_TC6WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 24, periph)
/* pb0_tc6wo1g2_in */
#define PB0_TC6WO1G2_IN        MCHP_PINMUX(b, 0, 0x134, 21, periph)
/* pb0_tc6wo1_out */
#define PB0_TC6WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 30, periph)
/* pb0_tc7wo0g1_in */
#define PB0_TC7WO0G1_IN        MCHP_PINMUX(b, 0, 0x13c, 4, periph)
/* pb0_tc7wo0_out */
#define PB0_TC7WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 25, periph)
/* pb0_tc7wo1g2_in */
#define PB0_TC7WO1G2_IN        MCHP_PINMUX(b, 0, 0x144, 21, periph)
/* pb0_tc7wo1_out */
#define PB0_TC7WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 31, periph)
/* pb0_tc8wo0g1_in */
#define PB0_TC8WO0G1_IN        MCHP_PINMUX(b, 0, 0x14c, 4, periph)
/* pb0_tc8wo0_out */
#define PB0_TC8WO0_OUT         MCHP_PINMUX(b, 0, 0x2b4, 26, periph)
/* pb0_tc8wo1g2_in */
#define PB0_TC8WO1G2_IN        MCHP_PINMUX(b, 0, 0x154, 21, periph)
/* pb0_tc8wo1g5_in */
#define PB0_TC8WO1G5_IN        MCHP_PINMUX(b, 0, 0x158, 8, periph)
/* pb0_tc8wo1_out */
#define PB0_TC8WO1_OUT         MCHP_PINMUX(b, 0, 0x2b8, 32, periph)
/* pb0_tc9wo0g2_in */
#define PB0_TC9WO0G2_IN        MCHP_PINMUX(b, 0, 0x15c, 21, periph)
/* pb0_tc9wo0_out */
#define PB0_TC9WO0_OUT         MCHP_PINMUX(b, 0, 0x2b8, 33, periph)
/* pb0_tc9wo1g5_in */
#define PB0_TC9WO1G5_IN        MCHP_PINMUX(b, 0, 0x168, 8, periph)
/* pb0_tc9wo1_out */
#define PB0_TC9WO1_OUT         MCHP_PINMUX(b, 0, 0x2bc, 11, periph)
/* pb0_tcc0wo0_out */
#define PB0_TCC0WO0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 13, periph)
/* pb0_tcc0wo1_out */
#define PB0_TCC0WO1_OUT        MCHP_PINMUX(b, 0, 0x2b8, 17, periph)
/* pb0_tcc0wo2_out */
#define PB0_TCC0WO2_OUT        MCHP_PINMUX(b, 0, 0x2bc, 5, periph)
/* pb0_tcc0wo3_out */
#define PB0_TCC0WO3_OUT        MCHP_PINMUX(b, 0, 0x2b8, 19, periph)
/* pb0_tcc0wo4_out */
#define PB0_TCC0WO4_OUT        MCHP_PINMUX(b, 0, 0x2b4, 14, periph)
/* pb0_tcc0wo5_out */
#define PB0_TCC0WO5_OUT        MCHP_PINMUX(b, 0, 0x2b8, 18, periph)
/* pb0_tcc1wo0_out */
#define PB0_TCC1WO0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 15, periph)
/* pb0_tcc1wo1_out */
#define PB0_TCC1WO1_OUT        MCHP_PINMUX(b, 0, 0x2b8, 20, periph)
/* pb0_tcc1wo2_out */
#define PB0_TCC1WO2_OUT        MCHP_PINMUX(b, 0, 0x2bc, 8, periph)
/* pb0_tcc1wo3_out */
#define PB0_TCC1WO3_OUT        MCHP_PINMUX(b, 0, 0x2b8, 22, periph)
/* pb0_tcc1wo4_out */
#define PB0_TCC1WO4_OUT        MCHP_PINMUX(b, 0, 0x2b4, 16, periph)
/* pb0_tcc1wo5_out */
#define PB0_TCC1WO5_OUT        MCHP_PINMUX(b, 0, 0x2b8, 21, periph)
/* pb0_tcc2wo0_out */
#define PB0_TCC2WO0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 17, periph)
/* pb0_tcc2wo1_out */
#define PB0_TCC2WO1_OUT        MCHP_PINMUX(b, 0, 0x2b8, 23, periph)
/* pb0_tstbus0_out */
#define PB0_TSTBUS0_OUT        MCHP_PINMUX(b, 0, 0x2b4, 32, periph)
/* pb0_tstbus3_out */
#define PB0_TSTBUS3_OUT        MCHP_PINMUX(b, 0, 0x2bc, 15, periph)
/* pb0_tstbus4_out */
#define PB0_TSTBUS4_OUT        MCHP_PINMUX(b, 0, 0x2b4, 33, periph)
/* pb0_tstbus5_out */
#define PB0_TSTBUS5_OUT        MCHP_PINMUX(b, 0, 0x2b8, 38, periph)
/* pb0_tstbus7_out */
#define PB0_TSTBUS7_OUT        MCHP_PINMUX(b, 0, 0x2bc, 16, periph)
/* pb0_tstbus8_out */
#define PB0_TSTBUS8_OUT        MCHP_PINMUX(b, 0, 0x2b4, 34, periph)
/* pb0_tstbus9_out */
#define PB0_TSTBUS9_OUT        MCHP_PINMUX(b, 0, 0x2b8, 39, periph)
/* pb0_tstbus11_out */
#define PB0_TSTBUS11_OUT       MCHP_PINMUX(b, 0, 0x2bc, 17, periph)
/* pb1_accmpten_in */
#define PB1_ACCMPTEN_IN        MCHP_PINMUX(b, 1, 0x18c, 11, periph)
/* pb1_ac_cmp0_out */
#define PB1_AC_CMP0_OUT        MCHP_PINMUX(b, 1, 0x2c8, 40, periph)
/* pb1_ac_cmptrdy_out */
#define PB1_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 1, 0x2c8, 41, periph)
/* pb1_can1rx_in */
#define PB1_CAN1RX_IN          MCHP_PINMUX(b, 1, 0x190, 20, periph)
/* pb1_cclin0_in */
#define PB1_CCLIN0_IN          MCHP_PINMUX(b, 1, 0xb4, 11, periph)
/* pb1_cclin1_in */
#define PB1_CCLIN1_IN          MCHP_PINMUX(b, 1, 0xb8, 4, periph)
/* pb1_cclin2_in */
#define PB1_CCLIN2_IN          MCHP_PINMUX(b, 1, 0xbc, 20, periph)
/* pb1_cclin3_in */
#define PB1_CCLIN3_IN          MCHP_PINMUX(b, 1, 0xc0, 11, periph)
/* pb1_cclin4_in */
#define PB1_CCLIN4_IN          MCHP_PINMUX(b, 1, 0xc4, 4, periph)
/* pb1_cclin5_in */
#define PB1_CCLIN5_IN          MCHP_PINMUX(b, 1, 0xc8, 20, periph)
/* pb1_cclo0_out */
#define PB1_CCLO0_OUT          MCHP_PINMUX(b, 1, 0x2c8, 1, periph)
/* pb1_cclo1_out */
#define PB1_CCLO1_OUT          MCHP_PINMUX(b, 1, 0x2c4, 1, periph)
/* pb1_coex_bt_state_out */
#define PB1_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 1, 0x2c0, 37, periph)
/* pb1_coex_rf_act_out */
#define PB1_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 1, 0x2c4, 41, periph)
/* pb1_extint0_in */
#define PB1_EXTINT0_IN         MCHP_PINMUX(b, 1, 0x0, 11, periph)
/* pb1_extint1_in */
#define PB1_EXTINT1_IN         MCHP_PINMUX(b, 1, 0x4, 4, periph)
/* pb1_extint2_in */
#define PB1_EXTINT2_IN         MCHP_PINMUX(b, 1, 0x8, 20, periph)
/* pb1_fectrl0_out */
#define PB1_FECTRL0_OUT        MCHP_PINMUX(b, 1, 0x2c4, 40, periph)
/* pb1_fectrl1_out */
#define PB1_FECTRL1_OUT        MCHP_PINMUX(b, 1, 0x2c0, 35, periph)
/* pb1_fectrl2_out */
#define PB1_FECTRL2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 36, periph)
/* pb1_fectrl4_out */
#define PB1_FECTRL4_OUT        MCHP_PINMUX(b, 1, 0x2c8, 42, periph)
/* pb1_qd0_out */
#define PB1_QD0_OUT            MCHP_PINMUX(b, 1, 0x2c4, 35, periph)
/* pb1_qd1_in */
#define PB1_QD1_IN             MCHP_PINMUX(b, 1, 0xa4, 11, periph)
/* pb1_qd1_out */
#define PB1_QD1_OUT            MCHP_PINMUX(b, 1, 0x2c0, 30, periph)
/* pb1_qd2_in */
#define PB1_QD2_IN             MCHP_PINMUX(b, 1, 0xa8, 4, periph)
/* pb1_qd2_out */
#define PB1_QD2_OUT            MCHP_PINMUX(b, 1, 0x2c0, 29, periph)
/* pb1_qd3_in */
#define PB1_QD3_IN             MCHP_PINMUX(b, 1, 0xac, 20, periph)
/* pb1_qd3_out */
#define PB1_QD3_OUT            MCHP_PINMUX(b, 1, 0x2c0, 28, periph)
/* pb1_qeiccmp0_out */
#define PB1_QEICCMP0_OUT       MCHP_PINMUX(b, 1, 0x2c0, 31, periph)
/* pb1_qeihome0g1_in */
#define PB1_QEIHOME0G1_IN      MCHP_PINMUX(b, 1, 0x16c, 11, periph)
/* pb1_qeihome0g2_in */
#define PB1_QEIHOME0G2_IN      MCHP_PINMUX(b, 1, 0x170, 4, periph)
/* pb1_qeiindx0g2_in */
#define PB1_QEIINDX0G2_IN      MCHP_PINMUX(b, 1, 0x174, 4, periph)
/* pb1_qeiindx0g3_in */
#define PB1_QEIINDX0G3_IN      MCHP_PINMUX(b, 1, 0x178, 20, periph)
/* pb1_qeiqea0g3_in */
#define PB1_QEIQEA0G3_IN       MCHP_PINMUX(b, 1, 0x17c, 20, periph)
/* pb1_qspics_out */
#define PB1_QSPICS_OUT         MCHP_PINMUX(b, 1, 0x2c0, 27, periph)
/* pb1_scom0p0_in */
#define PB1_SCOM0P0_IN         MCHP_PINMUX(b, 1, 0x40, 4, periph)
/* pb1_scom0p0_out */
#define PB1_SCOM0P0_OUT        MCHP_PINMUX(b, 1, 0x2c4, 2, periph)
/* pb1_scom0p2_out */
#define PB1_SCOM0P2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 2, periph)
/* pb1_scom0p3_in */
#define PB1_SCOM0P3_IN         MCHP_PINMUX(b, 1, 0x4c, 11, periph)
/* pb1_scom0p3_out */
#define PB1_SCOM0P3_OUT        MCHP_PINMUX(b, 1, 0x2c0, 1, periph)
/* pb1_scom1p0_in */
#define PB1_SCOM1P0_IN         MCHP_PINMUX(b, 1, 0x50, 20, periph)
/* pb1_scom1p0_out */
#define PB1_SCOM1P0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 3, periph)
/* pb1_scom1p2_in */
#define PB1_SCOM1P2_IN         MCHP_PINMUX(b, 1, 0x58, 11, periph)
/* pb1_scom1p2_out */
#define PB1_SCOM1P2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 4, periph)
/* pb1_scom1p3_in */
#define PB1_SCOM1P3_IN         MCHP_PINMUX(b, 1, 0x5c, 4, periph)
/* pb1_scom1p3_out */
#define PB1_SCOM1P3_OUT        MCHP_PINMUX(b, 1, 0x2c4, 5, periph)
/* pb1_scom2p0_in */
#define PB1_SCOM2P0_IN         MCHP_PINMUX(b, 1, 0x60, 4, periph)
/* pb1_scom2p0_out */
#define PB1_SCOM2P0_OUT        MCHP_PINMUX(b, 1, 0x2c4, 7, periph)
/* pb1_scom2p2_out */
#define PB1_SCOM2P2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 6, periph)
/* pb1_scom2p3_in */
#define PB1_SCOM2P3_IN         MCHP_PINMUX(b, 1, 0x6c, 11, periph)
/* pb1_scom2p3_out */
#define PB1_SCOM2P3_OUT        MCHP_PINMUX(b, 1, 0x2c0, 5, periph)
/* pb1_scom3p0_in */
#define PB1_SCOM3P0_IN         MCHP_PINMUX(b, 1, 0x70, 20, periph)
/* pb1_scom3p0_out */
#define PB1_SCOM3P0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 7, periph)
/* pb1_scom3p2_in */
#define PB1_SCOM3P2_IN         MCHP_PINMUX(b, 1, 0x78, 11, periph)
/* pb1_scom3p2_out */
#define PB1_SCOM3P2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 8, periph)
/* pb1_scom3p3_in */
#define PB1_SCOM3P3_IN         MCHP_PINMUX(b, 1, 0x7c, 4, periph)
/* pb1_scom3p3_out */
#define PB1_SCOM3P3_OUT        MCHP_PINMUX(b, 1, 0x2c4, 10, periph)
/* pb1_scom4p0_in */
#define PB1_SCOM4P0_IN         MCHP_PINMUX(b, 1, 0x80, 4, periph)
/* pb1_scom4p0_out */
#define PB1_SCOM4P0_OUT        MCHP_PINMUX(b, 1, 0x2c4, 12, periph)
/* pb1_scom4p2_out */
#define PB1_SCOM4P2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 10, periph)
/* pb1_scom4p3_in */
#define PB1_SCOM4P3_IN         MCHP_PINMUX(b, 1, 0x8c, 11, periph)
/* pb1_scom4p3_out */
#define PB1_SCOM4P3_OUT        MCHP_PINMUX(b, 1, 0x2c0, 9, periph)
/* pb1_scom5p0_in */
#define PB1_SCOM5P0_IN         MCHP_PINMUX(b, 1, 0x90, 20, periph)
/* pb1_scom5p0_out */
#define PB1_SCOM5P0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 11, periph)
/* pb1_scom5p2_in */
#define PB1_SCOM5P2_IN         MCHP_PINMUX(b, 1, 0x98, 11, periph)
/* pb1_scom5p2_out */
#define PB1_SCOM5P2_OUT        MCHP_PINMUX(b, 1, 0x2c0, 12, periph)
/* pb1_scom5p3_in */
#define PB1_SCOM5P3_IN         MCHP_PINMUX(b, 1, 0x9c, 4, periph)
/* pb1_scom5p3_out */
#define PB1_SCOM5P3_OUT        MCHP_PINMUX(b, 1, 0x2c4, 15, periph)
/* pb1_tc0wo0g1_in */
#define PB1_TC0WO0G1_IN        MCHP_PINMUX(b, 1, 0xcc, 11, periph)
/* pb1_tc0wo0g2_in */
#define PB1_TC0WO0G2_IN        MCHP_PINMUX(b, 1, 0xd0, 4, periph)
/* pb1_tc0wo0_out */
#define PB1_TC0WO0_OUT         MCHP_PINMUX(b, 1, 0x2c8, 24, periph)
/* pb1_tc0wo1g3_in */
#define PB1_TC0WO1G3_IN        MCHP_PINMUX(b, 1, 0xd4, 20, periph)
/* pb1_tc0wo1_out */
#define PB1_TC0WO1_OUT         MCHP_PINMUX(b, 1, 0x2c0, 18, periph)
/* pb1_tc1wo0g1_in */
#define PB1_TC1WO0G1_IN        MCHP_PINMUX(b, 1, 0xdc, 11, periph)
/* pb1_tc1wo0_out */
#define PB1_TC1WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 19, periph)
/* pb1_tc1wo1g2_in */
#define PB1_TC1WO1G2_IN        MCHP_PINMUX(b, 1, 0xe4, 4, periph)
/* pb1_tc1wo1_out */
#define PB1_TC1WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 25, periph)
/* pb1_tc2wo0g1_in */
#define PB1_TC2WO0G1_IN        MCHP_PINMUX(b, 1, 0xec, 11, periph)
/* pb1_tc2wo0g3_in */
#define PB1_TC2WO0G3_IN        MCHP_PINMUX(b, 1, 0xf0, 20, periph)
/* pb1_tc2wo0_out */
#define PB1_TC2WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 20, periph)
/* pb1_tc2wo1g2_in */
#define PB1_TC2WO1G2_IN        MCHP_PINMUX(b, 1, 0xf4, 4, periph)
/* pb1_tc2wo1_out */
#define PB1_TC2WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 26, periph)
/* pb1_tc3wo0g1_in */
#define PB1_TC3WO0G1_IN        MCHP_PINMUX(b, 1, 0xfc, 11, periph)
/* pb1_tc3wo0g3_in */
#define PB1_TC3WO0G3_IN        MCHP_PINMUX(b, 1, 0x100, 20, periph)
/* pb1_tc3wo0_out */
#define PB1_TC3WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 21, periph)
/* pb1_tc3wo1g2_in */
#define PB1_TC3WO1G2_IN        MCHP_PINMUX(b, 1, 0x104, 4, periph)
/* pb1_tc3wo1_out */
#define PB1_TC3WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 27, periph)
/* pb1_tc4wo0g1_in */
#define PB1_TC4WO0G1_IN        MCHP_PINMUX(b, 1, 0x10c, 11, periph)
/* pb1_tc4wo0g3_in */
#define PB1_TC4WO0G3_IN        MCHP_PINMUX(b, 1, 0x110, 20, periph)
/* pb1_tc4wo0_out */
#define PB1_TC4WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 22, periph)
/* pb1_tc4wo1g2_in */
#define PB1_TC4WO1G2_IN        MCHP_PINMUX(b, 1, 0x114, 4, periph)
/* pb1_tc4wo1_out */
#define PB1_TC4WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 28, periph)
/* pb1_tc5wo0g1_in */
#define PB1_TC5WO0G1_IN        MCHP_PINMUX(b, 1, 0x11c, 11, periph)
/* pb1_tc5wo0g3_in */
#define PB1_TC5WO0G3_IN        MCHP_PINMUX(b, 1, 0x120, 20, periph)
/* pb1_tc5wo0_out */
#define PB1_TC5WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 23, periph)
/* pb1_tc5wo1g2_in */
#define PB1_TC5WO1G2_IN        MCHP_PINMUX(b, 1, 0x124, 4, periph)
/* pb1_tc5wo1_out */
#define PB1_TC5WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 29, periph)
/* pb1_tc6wo0g1_in */
#define PB1_TC6WO0G1_IN        MCHP_PINMUX(b, 1, 0x12c, 11, periph)
/* pb1_tc6wo0g3_in */
#define PB1_TC6WO0G3_IN        MCHP_PINMUX(b, 1, 0x130, 20, periph)
/* pb1_tc6wo0_out */
#define PB1_TC6WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 24, periph)
/* pb1_tc6wo1g2_in */
#define PB1_TC6WO1G2_IN        MCHP_PINMUX(b, 1, 0x134, 4, periph)
/* pb1_tc6wo1_out */
#define PB1_TC6WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 30, periph)
/* pb1_tc7wo0g1_in */
#define PB1_TC7WO0G1_IN        MCHP_PINMUX(b, 1, 0x13c, 11, periph)
/* pb1_tc7wo0g3_in */
#define PB1_TC7WO0G3_IN        MCHP_PINMUX(b, 1, 0x140, 20, periph)
/* pb1_tc7wo0_out */
#define PB1_TC7WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 25, periph)
/* pb1_tc7wo1g2_in */
#define PB1_TC7WO1G2_IN        MCHP_PINMUX(b, 1, 0x144, 4, periph)
/* pb1_tc7wo1_out */
#define PB1_TC7WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 31, periph)
/* pb1_tc8wo0g1_in */
#define PB1_TC8WO0G1_IN        MCHP_PINMUX(b, 1, 0x14c, 11, periph)
/* pb1_tc8wo0g3_in */
#define PB1_TC8WO0G3_IN        MCHP_PINMUX(b, 1, 0x150, 20, periph)
/* pb1_tc8wo0_out */
#define PB1_TC8WO0_OUT         MCHP_PINMUX(b, 1, 0x2c0, 26, periph)
/* pb1_tc8wo1g2_in */
#define PB1_TC8WO1G2_IN        MCHP_PINMUX(b, 1, 0x154, 4, periph)
/* pb1_tc8wo1_out */
#define PB1_TC8WO1_OUT         MCHP_PINMUX(b, 1, 0x2c4, 32, periph)
/* pb1_tc9wo0g2_in */
#define PB1_TC9WO0G2_IN        MCHP_PINMUX(b, 1, 0x15c, 4, periph)
/* pb1_tc9wo0_out */
#define PB1_TC9WO0_OUT         MCHP_PINMUX(b, 1, 0x2c4, 33, periph)
/* pb1_tc9wo1g3_in */
#define PB1_TC9WO1G3_IN        MCHP_PINMUX(b, 1, 0x164, 20, periph)
/* pb1_tc9wo1_out */
#define PB1_TC9WO1_OUT         MCHP_PINMUX(b, 1, 0x2c8, 33, periph)
/* pb1_tcc0wo0_out */
#define PB1_TCC0WO0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 13, periph)
/* pb1_tcc0wo1_out */
#define PB1_TCC0WO1_OUT        MCHP_PINMUX(b, 1, 0x2c4, 17, periph)
/* pb1_tcc0wo2_out */
#define PB1_TCC0WO2_OUT        MCHP_PINMUX(b, 1, 0x2c8, 17, periph)
/* pb1_tcc0wo3_out */
#define PB1_TCC0WO3_OUT        MCHP_PINMUX(b, 1, 0x2c4, 19, periph)
/* pb1_tcc0wo4_out */
#define PB1_TCC0WO4_OUT        MCHP_PINMUX(b, 1, 0x2c0, 14, periph)
/* pb1_tcc0wo5_out */
#define PB1_TCC0WO5_OUT        MCHP_PINMUX(b, 1, 0x2c4, 18, periph)
/* pb1_tcc1wo0_out */
#define PB1_TCC1WO0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 15, periph)
/* pb1_tcc1wo1_out */
#define PB1_TCC1WO1_OUT        MCHP_PINMUX(b, 1, 0x2c4, 20, periph)
/* pb1_tcc1wo2_out */
#define PB1_TCC1WO2_OUT        MCHP_PINMUX(b, 1, 0x2c8, 20, periph)
/* pb1_tcc1wo3_out */
#define PB1_TCC1WO3_OUT        MCHP_PINMUX(b, 1, 0x2c4, 22, periph)
/* pb1_tcc1wo4_out */
#define PB1_TCC1WO4_OUT        MCHP_PINMUX(b, 1, 0x2c0, 16, periph)
/* pb1_tcc1wo5_out */
#define PB1_TCC1WO5_OUT        MCHP_PINMUX(b, 1, 0x2c4, 21, periph)
/* pb1_tcc2wo0_out */
#define PB1_TCC2WO0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 17, periph)
/* pb1_tcc2wo1_out */
#define PB1_TCC2WO1_OUT        MCHP_PINMUX(b, 1, 0x2c4, 23, periph)
/* pb1_tstbus0_out */
#define PB1_TSTBUS0_OUT        MCHP_PINMUX(b, 1, 0x2c0, 32, periph)
/* pb1_tstbus1_out */
#define PB1_TSTBUS1_OUT        MCHP_PINMUX(b, 1, 0x2c8, 38, periph)
/* pb1_tstbus4_out */
#define PB1_TSTBUS4_OUT        MCHP_PINMUX(b, 1, 0x2c0, 33, periph)
/* pb1_tstbus5_out */
#define PB1_TSTBUS5_OUT        MCHP_PINMUX(b, 1, 0x2c4, 38, periph)
/* pb1_tstbus8_out */
#define PB1_TSTBUS8_OUT        MCHP_PINMUX(b, 1, 0x2c0, 34, periph)
/* pb1_tstbus9_out */
#define PB1_TSTBUS9_OUT        MCHP_PINMUX(b, 1, 0x2c4, 39, periph)
/* pb1_tstbus10_out */
#define PB1_TSTBUS10_OUT       MCHP_PINMUX(b, 1, 0x2c8, 39, periph)
/* pb2_ac_cmp0_out */
#define PB2_AC_CMP0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 40, periph)
/* pb2_ac_cmp1_out */
#define PB2_AC_CMP1_OUT        MCHP_PINMUX(b, 2, 0x2d4, 36, periph)
/* pb2_ac_cmptout_out */
#define PB2_AC_CMPTOUT_OUT     MCHP_PINMUX(b, 2, 0x2d4, 37, periph)
/* pb2_ac_cmptrdy_out */
#define PB2_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 2, 0x2d0, 41, periph)
/* pb2_can1rx_in */
#define PB2_CAN1RX_IN          MCHP_PINMUX(b, 2, 0x190, 4, periph)
/* pb2_can1_tx_out */
#define PB2_CAN1_TX_OUT        MCHP_PINMUX(b, 2, 0x2d4, 38, periph)
/* pb2_cclin1_in */
#define PB2_CCLIN1_IN          MCHP_PINMUX(b, 2, 0xb8, 11, periph)
/* pb2_cclin2_in */
#define PB2_CCLIN2_IN          MCHP_PINMUX(b, 2, 0xbc, 4, periph)
/* pb2_cclin4_in */
#define PB2_CCLIN4_IN          MCHP_PINMUX(b, 2, 0xc4, 11, periph)
/* pb2_cclin5_in */
#define PB2_CCLIN5_IN          MCHP_PINMUX(b, 2, 0xc8, 4, periph)
/* pb2_cclo0_out */
#define PB2_CCLO0_OUT          MCHP_PINMUX(b, 2, 0x2d0, 1, periph)
/* pb2_cclo1_out */
#define PB2_CCLO1_OUT          MCHP_PINMUX(b, 2, 0x2cc, 1, periph)
/* pb2_coexwlanact_in */
#define PB2_COEXWLANACT_IN     MCHP_PINMUX(b, 2, 0x194, 20, periph)
/* pb2_coex_rf_act_out */
#define PB2_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 2, 0x2cc, 41, periph)
/* pb2_extint1_in */
#define PB2_EXTINT1_IN         MCHP_PINMUX(b, 2, 0x4, 11, periph)
/* pb2_extint2_in */
#define PB2_EXTINT2_IN         MCHP_PINMUX(b, 2, 0x8, 4, periph)
/* pb2_extint3_in */
#define PB2_EXTINT3_IN         MCHP_PINMUX(b, 2, 0xc, 20, periph)
/* pb2_fectrl0_out */
#define PB2_FECTRL0_OUT        MCHP_PINMUX(b, 2, 0x2cc, 40, periph)
/* pb2_fectrl3_out */
#define PB2_FECTRL3_OUT        MCHP_PINMUX(b, 2, 0x2d4, 39, periph)
/* pb2_fectrl4_out */
#define PB2_FECTRL4_OUT        MCHP_PINMUX(b, 2, 0x2d0, 42, periph)
/* pb2_fectrl5_out */
#define PB2_FECTRL5_OUT        MCHP_PINMUX(b, 2, 0x2d4, 40, periph)
/* pb2_nmi_in */
#define PB2_NMI_IN             MCHP_PINMUX(b, 2, 0x3c, 20, periph)
/* pb2_qd0_in */
#define PB2_QD0_IN             MCHP_PINMUX(b, 2, 0xa0, 20, periph)
/* pb2_qd0_out */
#define PB2_QD0_OUT            MCHP_PINMUX(b, 2, 0x2cc, 35, periph)
/* pb2_qd1_out */
#define PB2_QD1_OUT            MCHP_PINMUX(b, 2, 0x2d0, 35, periph)
/* pb2_qd2_in */
#define PB2_QD2_IN             MCHP_PINMUX(b, 2, 0xa8, 11, periph)
/* pb2_qd2_out */
#define PB2_QD2_OUT            MCHP_PINMUX(b, 2, 0x2cc, 37, periph)
/* pb2_qd3_in */
#define PB2_QD3_IN             MCHP_PINMUX(b, 2, 0xac, 4, periph)
/* pb2_qd3_out */
#define PB2_QD3_OUT            MCHP_PINMUX(b, 2, 0x2cc, 36, periph)
/* pb2_qeihome0g2_in */
#define PB2_QEIHOME0G2_IN      MCHP_PINMUX(b, 2, 0x170, 11, periph)
/* pb2_qeiindx0g2_in */
#define PB2_QEIINDX0G2_IN      MCHP_PINMUX(b, 2, 0x174, 11, periph)
/* pb2_qeiindx0g3_in */
#define PB2_QEIINDX0G3_IN      MCHP_PINMUX(b, 2, 0x178, 4, periph)
/* pb2_qeiqea0g3_in */
#define PB2_QEIQEA0G3_IN       MCHP_PINMUX(b, 2, 0x17c, 4, periph)
/* pb2_qeiqea0g4_in */
#define PB2_QEIQEA0G4_IN       MCHP_PINMUX(b, 2, 0x180, 20, periph)
/* pb2_qeiqeb0g4_in */
#define PB2_QEIQEB0G4_IN       MCHP_PINMUX(b, 2, 0x184, 20, periph)
/* pb2_qspics_out */
#define PB2_QSPICS_OUT         MCHP_PINMUX(b, 2, 0x2cc, 34, periph)
/* pb2_scom0p0_in */
#define PB2_SCOM0P0_IN         MCHP_PINMUX(b, 2, 0x40, 11, periph)
/* pb2_scom0p0_out */
#define PB2_SCOM0P0_OUT        MCHP_PINMUX(b, 2, 0x2cc, 2, periph)
/* pb2_scom0p2_in */
#define PB2_SCOM0P2_IN         MCHP_PINMUX(b, 2, 0x48, 20, periph)
/* pb2_scom0p2_out */
#define PB2_SCOM0P2_OUT        MCHP_PINMUX(b, 2, 0x2cc, 4, periph)
/* pb2_scom0p3_out */
#define PB2_SCOM0P3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 3, periph)
/* pb2_scom1p0_in */
#define PB2_SCOM1P0_IN         MCHP_PINMUX(b, 2, 0x50, 4, periph)
/* pb2_scom1p0_out */
#define PB2_SCOM1P0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 5, periph)
/* pb2_scom1p2_out */
#define PB2_SCOM1P2_OUT        MCHP_PINMUX(b, 2, 0x2cc, 6, periph)
/* pb2_scom1p3_in */
#define PB2_SCOM1P3_IN         MCHP_PINMUX(b, 2, 0x5c, 11, periph)
/* pb2_scom1p3_out */
#define PB2_SCOM1P3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 5, periph)
/* pb2_scom2p0_in */
#define PB2_SCOM2P0_IN         MCHP_PINMUX(b, 2, 0x60, 11, periph)
/* pb2_scom2p0_out */
#define PB2_SCOM2P0_OUT        MCHP_PINMUX(b, 2, 0x2cc, 7, periph)
/* pb2_scom2p2_in */
#define PB2_SCOM2P2_IN         MCHP_PINMUX(b, 2, 0x68, 20, periph)
/* pb2_scom2p2_out */
#define PB2_SCOM2P2_OUT        MCHP_PINMUX(b, 2, 0x2cc, 9, periph)
/* pb2_scom2p3_out */
#define PB2_SCOM2P3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 8, periph)
/* pb2_scom3p0_in */
#define PB2_SCOM3P0_IN         MCHP_PINMUX(b, 2, 0x70, 4, periph)
/* pb2_scom3p0_out */
#define PB2_SCOM3P0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 10, periph)
/* pb2_scom3p2_out */
#define PB2_SCOM3P2_OUT        MCHP_PINMUX(b, 2, 0x2cc, 11, periph)
/* pb2_scom3p3_in */
#define PB2_SCOM3P3_IN         MCHP_PINMUX(b, 2, 0x7c, 11, periph)
/* pb2_scom3p3_out */
#define PB2_SCOM3P3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 10, periph)
/* pb2_scom4p0_in */
#define PB2_SCOM4P0_IN         MCHP_PINMUX(b, 2, 0x80, 11, periph)
/* pb2_scom4p0_out */
#define PB2_SCOM4P0_OUT        MCHP_PINMUX(b, 2, 0x2cc, 12, periph)
/* pb2_scom4p2_in */
#define PB2_SCOM4P2_IN         MCHP_PINMUX(b, 2, 0x88, 20, periph)
/* pb2_scom4p2_out */
#define PB2_SCOM4P2_OUT        MCHP_PINMUX(b, 2, 0x2cc, 14, periph)
/* pb2_scom4p3_out */
#define PB2_SCOM4P3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 13, periph)
/* pb2_scom5p0_in */
#define PB2_SCOM5P0_IN         MCHP_PINMUX(b, 2, 0x90, 4, periph)
/* pb2_scom5p0_out */
#define PB2_SCOM5P0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 15, periph)
/* pb2_scom5p2_out */
#define PB2_SCOM5P2_OUT        MCHP_PINMUX(b, 2, 0x2cc, 16, periph)
/* pb2_scom5p3_in */
#define PB2_SCOM5P3_IN         MCHP_PINMUX(b, 2, 0x9c, 11, periph)
/* pb2_scom5p3_out */
#define PB2_SCOM5P3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 15, periph)
/* pb2_tc0wo0g2_in */
#define PB2_TC0WO0G2_IN        MCHP_PINMUX(b, 2, 0xd0, 11, periph)
/* pb2_tc0wo0_out */
#define PB2_TC0WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 24, periph)
/* pb2_tc0wo1g3_in */
#define PB2_TC0WO1G3_IN        MCHP_PINMUX(b, 2, 0xd4, 4, periph)
/* pb2_tc0wo1g4_in */
#define PB2_TC0WO1G4_IN        MCHP_PINMUX(b, 2, 0xd8, 20, periph)
/* pb2_tc0wo1_out */
#define PB2_TC0WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 24, periph)
/* pb2_tc1wo0_out */
#define PB2_TC1WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 25, periph)
/* pb2_tc1wo1g2_in */
#define PB2_TC1WO1G2_IN        MCHP_PINMUX(b, 2, 0xe4, 11, periph)
/* pb2_tc1wo1_out */
#define PB2_TC1WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 25, periph)
/* pb2_tc2wo0g3_in */
#define PB2_TC2WO0G3_IN        MCHP_PINMUX(b, 2, 0xf0, 4, periph)
/* pb2_tc2wo0_out */
#define PB2_TC2WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 26, periph)
/* pb2_tc2wo1g2_in */
#define PB2_TC2WO1G2_IN        MCHP_PINMUX(b, 2, 0xf4, 11, periph)
/* pb2_tc2wo1g4_in */
#define PB2_TC2WO1G4_IN        MCHP_PINMUX(b, 2, 0xf8, 20, periph)
/* pb2_tc2wo1_out */
#define PB2_TC2WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 26, periph)
/* pb2_tc3wo0g3_in */
#define PB2_TC3WO0G3_IN        MCHP_PINMUX(b, 2, 0x100, 4, periph)
/* pb2_tc3wo0_out */
#define PB2_TC3WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 27, periph)
/* pb2_tc3wo1g2_in */
#define PB2_TC3WO1G2_IN        MCHP_PINMUX(b, 2, 0x104, 11, periph)
/* pb2_tc3wo1g4_in */
#define PB2_TC3WO1G4_IN        MCHP_PINMUX(b, 2, 0x108, 20, periph)
/* pb2_tc3wo1_out */
#define PB2_TC3WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 27, periph)
/* pb2_tc4wo0g3_in */
#define PB2_TC4WO0G3_IN        MCHP_PINMUX(b, 2, 0x110, 4, periph)
/* pb2_tc4wo0_out */
#define PB2_TC4WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 28, periph)
/* pb2_tc4wo1g2_in */
#define PB2_TC4WO1G2_IN        MCHP_PINMUX(b, 2, 0x114, 11, periph)
/* pb2_tc4wo1g4_in */
#define PB2_TC4WO1G4_IN        MCHP_PINMUX(b, 2, 0x118, 20, periph)
/* pb2_tc4wo1_out */
#define PB2_TC4WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 28, periph)
/* pb2_tc5wo0g3_in */
#define PB2_TC5WO0G3_IN        MCHP_PINMUX(b, 2, 0x120, 4, periph)
/* pb2_tc5wo0_out */
#define PB2_TC5WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 29, periph)
/* pb2_tc5wo1g2_in */
#define PB2_TC5WO1G2_IN        MCHP_PINMUX(b, 2, 0x124, 11, periph)
/* pb2_tc5wo1g4_in */
#define PB2_TC5WO1G4_IN        MCHP_PINMUX(b, 2, 0x128, 20, periph)
/* pb2_tc5wo1_out */
#define PB2_TC5WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 29, periph)
/* pb2_tc6wo0g3_in */
#define PB2_TC6WO0G3_IN        MCHP_PINMUX(b, 2, 0x130, 4, periph)
/* pb2_tc6wo0_out */
#define PB2_TC6WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 30, periph)
/* pb2_tc6wo1g2_in */
#define PB2_TC6WO1G2_IN        MCHP_PINMUX(b, 2, 0x134, 11, periph)
/* pb2_tc6wo1g4_in */
#define PB2_TC6WO1G4_IN        MCHP_PINMUX(b, 2, 0x138, 20, periph)
/* pb2_tc6wo1_out */
#define PB2_TC6WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 30, periph)
/* pb2_tc7wo0g3_in */
#define PB2_TC7WO0G3_IN        MCHP_PINMUX(b, 2, 0x140, 4, periph)
/* pb2_tc7wo0_out */
#define PB2_TC7WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 31, periph)
/* pb2_tc7wo1g2_in */
#define PB2_TC7WO1G2_IN        MCHP_PINMUX(b, 2, 0x144, 11, periph)
/* pb2_tc7wo1g4_in */
#define PB2_TC7WO1G4_IN        MCHP_PINMUX(b, 2, 0x148, 20, periph)
/* pb2_tc7wo1_out */
#define PB2_TC7WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 31, periph)
/* pb2_tc8wo0g3_in */
#define PB2_TC8WO0G3_IN        MCHP_PINMUX(b, 2, 0x150, 4, periph)
/* pb2_tc8wo0_out */
#define PB2_TC8WO0_OUT         MCHP_PINMUX(b, 2, 0x2d0, 32, periph)
/* pb2_tc8wo1g2_in */
#define PB2_TC8WO1G2_IN        MCHP_PINMUX(b, 2, 0x154, 11, periph)
/* pb2_tc8wo1_out */
#define PB2_TC8WO1_OUT         MCHP_PINMUX(b, 2, 0x2cc, 32, periph)
/* pb2_tc9wo0g2_in */
#define PB2_TC9WO0G2_IN        MCHP_PINMUX(b, 2, 0x15c, 11, periph)
/* pb2_tc9wo0g4_in */
#define PB2_TC9WO0G4_IN        MCHP_PINMUX(b, 2, 0x160, 20, periph)
/* pb2_tc9wo0_out */
#define PB2_TC9WO0_OUT         MCHP_PINMUX(b, 2, 0x2cc, 33, periph)
/* pb2_tc9wo1g3_in */
#define PB2_TC9WO1G3_IN        MCHP_PINMUX(b, 2, 0x164, 4, periph)
/* pb2_tc9wo1_out */
#define PB2_TC9WO1_OUT         MCHP_PINMUX(b, 2, 0x2d0, 33, periph)
/* pb2_tcc0wo0_out */
#define PB2_TCC0WO0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 18, periph)
/* pb2_tcc0wo1_out */
#define PB2_TCC0WO1_OUT        MCHP_PINMUX(b, 2, 0x2cc, 17, periph)
/* pb2_tcc0wo2_out */
#define PB2_TCC0WO2_OUT        MCHP_PINMUX(b, 2, 0x2d0, 17, periph)
/* pb2_tcc0wo3_out */
#define PB2_TCC0WO3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 19, periph)
/* pb2_tcc0wo4_out */
#define PB2_TCC0WO4_OUT        MCHP_PINMUX(b, 2, 0x2d0, 19, periph)
/* pb2_tcc0wo5_out */
#define PB2_TCC0WO5_OUT        MCHP_PINMUX(b, 2, 0x2cc, 18, periph)
/* pb2_tcc1wo0_out */
#define PB2_TCC1WO0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 21, periph)
/* pb2_tcc1wo1_out */
#define PB2_TCC1WO1_OUT        MCHP_PINMUX(b, 2, 0x2cc, 20, periph)
/* pb2_tcc1wo2_out */
#define PB2_TCC1WO2_OUT        MCHP_PINMUX(b, 2, 0x2d0, 20, periph)
/* pb2_tcc1wo3_out */
#define PB2_TCC1WO3_OUT        MCHP_PINMUX(b, 2, 0x2cc, 22, periph)
/* pb2_tcc1wo4_out */
#define PB2_TCC1WO4_OUT        MCHP_PINMUX(b, 2, 0x2d0, 22, periph)
/* pb2_tcc1wo5_out */
#define PB2_TCC1WO5_OUT        MCHP_PINMUX(b, 2, 0x2cc, 21, periph)
/* pb2_tcc2wo0_out */
#define PB2_TCC2WO0_OUT        MCHP_PINMUX(b, 2, 0x2d0, 23, periph)
/* pb2_tcc2wo1_out */
#define PB2_TCC2WO1_OUT        MCHP_PINMUX(b, 2, 0x2cc, 23, periph)
/* pb2_tstbus1_out */
#define PB2_TSTBUS1_OUT        MCHP_PINMUX(b, 2, 0x2d0, 38, periph)
/* pb2_tstbus2_out */
#define PB2_TSTBUS2_OUT        MCHP_PINMUX(b, 2, 0x2d4, 34, periph)
/* pb2_tstbus5_out */
#define PB2_TSTBUS5_OUT        MCHP_PINMUX(b, 2, 0x2cc, 38, periph)
/* pb2_tstbus6_out */
#define PB2_TSTBUS6_OUT        MCHP_PINMUX(b, 2, 0x2d4, 35, periph)
/* pb2_tstbus9_out */
#define PB2_TSTBUS9_OUT        MCHP_PINMUX(b, 2, 0x2cc, 39, periph)
/* pb2_tstbus10_out */
#define PB2_TSTBUS10_OUT       MCHP_PINMUX(b, 2, 0x2d0, 39, periph)
/* pb3_accmpten_in */
#define PB3_ACCMPTEN_IN        MCHP_PINMUX(b, 3, 0x18c, 23, periph)
/* pb3_ac_cmp0_out */
#define PB3_AC_CMP0_OUT        MCHP_PINMUX(b, 3, 0x2dc, 40, periph)
/* pb3_ac_cmp1_out */
#define PB3_AC_CMP1_OUT        MCHP_PINMUX(b, 3, 0x2e0, 36, periph)
/* pb3_ac_cmptout_out */
#define PB3_AC_CMPTOUT_OUT     MCHP_PINMUX(b, 3, 0x2e0, 37, periph)
/* pb3_ac_cmptrdy_out */
#define PB3_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 3, 0x2dc, 41, periph)
/* pb3_can1rx_in */
#define PB3_CAN1RX_IN          MCHP_PINMUX(b, 3, 0x190, 11, periph)
/* pb3_can1_tx_out */
#define PB3_CAN1_TX_OUT        MCHP_PINMUX(b, 3, 0x2e0, 38, periph)
/* pb3_cclin0_in */
#define PB3_CCLIN0_IN          MCHP_PINMUX(b, 3, 0xb4, 23, periph)
/* pb3_cclin2_in */
#define PB3_CCLIN2_IN          MCHP_PINMUX(b, 3, 0xbc, 11, periph)
/* pb3_cclin3_in */
#define PB3_CCLIN3_IN          MCHP_PINMUX(b, 3, 0xc0, 23, periph)
/* pb3_cclin5_in */
#define PB3_CCLIN5_IN          MCHP_PINMUX(b, 3, 0xc8, 11, periph)
/* pb3_cclo0_out */
#define PB3_CCLO0_OUT          MCHP_PINMUX(b, 3, 0x2dc, 1, periph)
/* pb3_cclo1_out */
#define PB3_CCLO1_OUT          MCHP_PINMUX(b, 3, 0x2e0, 1, periph)
/* pb3_coexwlanact_in */
#define PB3_COEXWLANACT_IN     MCHP_PINMUX(b, 3, 0x194, 4, periph)
/* pb3_coex_bt_state_out */
#define PB3_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 3, 0x2d8, 37, periph)
/* pb3_extint0_in */
#define PB3_EXTINT0_IN         MCHP_PINMUX(b, 3, 0x0, 23, periph)
/* pb3_extint2_in */
#define PB3_EXTINT2_IN         MCHP_PINMUX(b, 3, 0x8, 11, periph)
/* pb3_extint3_in */
#define PB3_EXTINT3_IN         MCHP_PINMUX(b, 3, 0xc, 4, periph)
/* pb3_fectrl1_out */
#define PB3_FECTRL1_OUT        MCHP_PINMUX(b, 3, 0x2d8, 35, periph)
/* pb3_fectrl2_out */
#define PB3_FECTRL2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 36, periph)
/* pb3_fectrl3_out */
#define PB3_FECTRL3_OUT        MCHP_PINMUX(b, 3, 0x2e0, 39, periph)
/* pb3_fectrl4_out */
#define PB3_FECTRL4_OUT        MCHP_PINMUX(b, 3, 0x2dc, 42, periph)
/* pb3_fectrl5_out */
#define PB3_FECTRL5_OUT        MCHP_PINMUX(b, 3, 0x2e0, 40, periph)
/* pb3_nmi_in */
#define PB3_NMI_IN             MCHP_PINMUX(b, 3, 0x3c, 4, periph)
/* pb3_qd0_in */
#define PB3_QD0_IN             MCHP_PINMUX(b, 3, 0xa0, 4, periph)
/* pb3_qd0_out */
#define PB3_QD0_OUT            MCHP_PINMUX(b, 3, 0x2dc, 36, periph)
/* pb3_qd1_in */
#define PB3_QD1_IN             MCHP_PINMUX(b, 3, 0xa4, 23, periph)
/* pb3_qd1_out */
#define PB3_QD1_OUT            MCHP_PINMUX(b, 3, 0x2d8, 30, periph)
/* pb3_qd2_out */
#define PB3_QD2_OUT            MCHP_PINMUX(b, 3, 0x2d8, 29, periph)
/* pb3_qd3_in */
#define PB3_QD3_IN             MCHP_PINMUX(b, 3, 0xac, 11, periph)
/* pb3_qd3_out */
#define PB3_QD3_OUT            MCHP_PINMUX(b, 3, 0x2d8, 28, periph)
/* pb3_qeiccmp0_out */
#define PB3_QEICCMP0_OUT       MCHP_PINMUX(b, 3, 0x2d8, 31, periph)
/* pb3_qeihome0g1_in */
#define PB3_QEIHOME0G1_IN      MCHP_PINMUX(b, 3, 0x16c, 23, periph)
/* pb3_qeiindx0g3_in */
#define PB3_QEIINDX0G3_IN      MCHP_PINMUX(b, 3, 0x178, 11, periph)
/* pb3_qeiqea0g3_in */
#define PB3_QEIQEA0G3_IN       MCHP_PINMUX(b, 3, 0x17c, 11, periph)
/* pb3_qeiqea0g4_in */
#define PB3_QEIQEA0G4_IN       MCHP_PINMUX(b, 3, 0x180, 4, periph)
/* pb3_qeiqeb0g4_in */
#define PB3_QEIQEB0G4_IN       MCHP_PINMUX(b, 3, 0x184, 4, periph)
/* pb3_qspics_out */
#define PB3_QSPICS_OUT         MCHP_PINMUX(b, 3, 0x2d8, 27, periph)
/* pb3_scom0p0_out */
#define PB3_SCOM0P0_OUT        MCHP_PINMUX(b, 3, 0x2dc, 2, periph)
/* pb3_scom0p2_in */
#define PB3_SCOM0P2_IN         MCHP_PINMUX(b, 3, 0x48, 4, periph)
/* pb3_scom0p2_out */
#define PB3_SCOM0P2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 2, periph)
/* pb3_scom0p3_in */
#define PB3_SCOM0P3_IN         MCHP_PINMUX(b, 3, 0x4c, 23, periph)
/* pb3_scom0p3_out */
#define PB3_SCOM0P3_OUT        MCHP_PINMUX(b, 3, 0x2d8, 1, periph)
/* pb3_scom1p0_in */
#define PB3_SCOM1P0_IN         MCHP_PINMUX(b, 3, 0x50, 11, periph)
/* pb3_scom1p0_out */
#define PB3_SCOM1P0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 3, periph)
/* pb3_scom1p2_in */
#define PB3_SCOM1P2_IN         MCHP_PINMUX(b, 3, 0x58, 23, periph)
/* pb3_scom1p2_out */
#define PB3_SCOM1P2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 4, periph)
/* pb3_scom1p3_out */
#define PB3_SCOM1P3_OUT        MCHP_PINMUX(b, 3, 0x2dc, 6, periph)
/* pb3_scom2p0_out */
#define PB3_SCOM2P0_OUT        MCHP_PINMUX(b, 3, 0x2dc, 7, periph)
/* pb3_scom2p2_in */
#define PB3_SCOM2P2_IN         MCHP_PINMUX(b, 3, 0x68, 4, periph)
/* pb3_scom2p2_out */
#define PB3_SCOM2P2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 6, periph)
/* pb3_scom2p3_in */
#define PB3_SCOM2P3_IN         MCHP_PINMUX(b, 3, 0x6c, 23, periph)
/* pb3_scom2p3_out */
#define PB3_SCOM2P3_OUT        MCHP_PINMUX(b, 3, 0x2d8, 5, periph)
/* pb3_scom3p0_in */
#define PB3_SCOM3P0_IN         MCHP_PINMUX(b, 3, 0x70, 11, periph)
/* pb3_scom3p0_out */
#define PB3_SCOM3P0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 7, periph)
/* pb3_scom3p2_in */
#define PB3_SCOM3P2_IN         MCHP_PINMUX(b, 3, 0x78, 23, periph)
/* pb3_scom3p2_out */
#define PB3_SCOM3P2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 8, periph)
/* pb3_scom3p3_out */
#define PB3_SCOM3P3_OUT        MCHP_PINMUX(b, 3, 0x2dc, 11, periph)
/* pb3_scom4p0_out */
#define PB3_SCOM4P0_OUT        MCHP_PINMUX(b, 3, 0x2dc, 12, periph)
/* pb3_scom4p2_in */
#define PB3_SCOM4P2_IN         MCHP_PINMUX(b, 3, 0x88, 4, periph)
/* pb3_scom4p2_out */
#define PB3_SCOM4P2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 10, periph)
/* pb3_scom4p3_in */
#define PB3_SCOM4P3_IN         MCHP_PINMUX(b, 3, 0x8c, 23, periph)
/* pb3_scom4p3_out */
#define PB3_SCOM4P3_OUT        MCHP_PINMUX(b, 3, 0x2d8, 9, periph)
/* pb3_scom5p0_in */
#define PB3_SCOM5P0_IN         MCHP_PINMUX(b, 3, 0x90, 11, periph)
/* pb3_scom5p0_out */
#define PB3_SCOM5P0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 11, periph)
/* pb3_scom5p2_in */
#define PB3_SCOM5P2_IN         MCHP_PINMUX(b, 3, 0x98, 23, periph)
/* pb3_scom5p2_out */
#define PB3_SCOM5P2_OUT        MCHP_PINMUX(b, 3, 0x2d8, 12, periph)
/* pb3_scom5p3_out */
#define PB3_SCOM5P3_OUT        MCHP_PINMUX(b, 3, 0x2dc, 16, periph)
/* pb3_tc0wo0g1_in */
#define PB3_TC0WO0G1_IN        MCHP_PINMUX(b, 3, 0xcc, 23, periph)
/* pb3_tc0wo0_out */
#define PB3_TC0WO0_OUT         MCHP_PINMUX(b, 3, 0x2dc, 24, periph)
/* pb3_tc0wo1g3_in */
#define PB3_TC0WO1G3_IN        MCHP_PINMUX(b, 3, 0xd4, 11, periph)
/* pb3_tc0wo1g4_in */
#define PB3_TC0WO1G4_IN        MCHP_PINMUX(b, 3, 0xd8, 4, periph)
/* pb3_tc0wo1_out */
#define PB3_TC0WO1_OUT         MCHP_PINMUX(b, 3, 0x2d8, 18, periph)
/* pb3_tc1wo0g1_in */
#define PB3_TC1WO0G1_IN        MCHP_PINMUX(b, 3, 0xdc, 23, periph)
/* pb3_tc1wo0_out */
#define PB3_TC1WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 19, periph)
/* pb3_tc1wo1_out */
#define PB3_TC1WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 22, periph)
/* pb3_tc2wo0g1_in */
#define PB3_TC2WO0G1_IN        MCHP_PINMUX(b, 3, 0xec, 23, periph)
/* pb3_tc2wo0g3_in */
#define PB3_TC2WO0G3_IN        MCHP_PINMUX(b, 3, 0xf0, 11, periph)
/* pb3_tc2wo0_out */
#define PB3_TC2WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 20, periph)
/* pb3_tc2wo1g4_in */
#define PB3_TC2WO1G4_IN        MCHP_PINMUX(b, 3, 0xf8, 4, periph)
/* pb3_tc2wo1_out */
#define PB3_TC2WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 23, periph)
/* pb3_tc3wo0g1_in */
#define PB3_TC3WO0G1_IN        MCHP_PINMUX(b, 3, 0xfc, 23, periph)
/* pb3_tc3wo0g3_in */
#define PB3_TC3WO0G3_IN        MCHP_PINMUX(b, 3, 0x100, 11, periph)
/* pb3_tc3wo0_out */
#define PB3_TC3WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 21, periph)
/* pb3_tc3wo1g4_in */
#define PB3_TC3WO1G4_IN        MCHP_PINMUX(b, 3, 0x108, 4, periph)
/* pb3_tc3wo1_out */
#define PB3_TC3WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 24, periph)
/* pb3_tc4wo0g1_in */
#define PB3_TC4WO0G1_IN        MCHP_PINMUX(b, 3, 0x10c, 23, periph)
/* pb3_tc4wo0g3_in */
#define PB3_TC4WO0G3_IN        MCHP_PINMUX(b, 3, 0x110, 11, periph)
/* pb3_tc4wo0_out */
#define PB3_TC4WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 22, periph)
/* pb3_tc4wo1g4_in */
#define PB3_TC4WO1G4_IN        MCHP_PINMUX(b, 3, 0x118, 4, periph)
/* pb3_tc4wo1_out */
#define PB3_TC4WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 25, periph)
/* pb3_tc5wo0g1_in */
#define PB3_TC5WO0G1_IN        MCHP_PINMUX(b, 3, 0x11c, 23, periph)
/* pb3_tc5wo0g3_in */
#define PB3_TC5WO0G3_IN        MCHP_PINMUX(b, 3, 0x120, 11, periph)
/* pb3_tc5wo0_out */
#define PB3_TC5WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 23, periph)
/* pb3_tc5wo1g4_in */
#define PB3_TC5WO1G4_IN        MCHP_PINMUX(b, 3, 0x128, 4, periph)
/* pb3_tc5wo1_out */
#define PB3_TC5WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 26, periph)
/* pb3_tc6wo0g1_in */
#define PB3_TC6WO0G1_IN        MCHP_PINMUX(b, 3, 0x12c, 23, periph)
/* pb3_tc6wo0g3_in */
#define PB3_TC6WO0G3_IN        MCHP_PINMUX(b, 3, 0x130, 11, periph)
/* pb3_tc6wo0_out */
#define PB3_TC6WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 24, periph)
/* pb3_tc6wo1g4_in */
#define PB3_TC6WO1G4_IN        MCHP_PINMUX(b, 3, 0x138, 4, periph)
/* pb3_tc6wo1_out */
#define PB3_TC6WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 27, periph)
/* pb3_tc7wo0g1_in */
#define PB3_TC7WO0G1_IN        MCHP_PINMUX(b, 3, 0x13c, 23, periph)
/* pb3_tc7wo0g3_in */
#define PB3_TC7WO0G3_IN        MCHP_PINMUX(b, 3, 0x140, 11, periph)
/* pb3_tc7wo0_out */
#define PB3_TC7WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 25, periph)
/* pb3_tc7wo1g4_in */
#define PB3_TC7WO1G4_IN        MCHP_PINMUX(b, 3, 0x148, 4, periph)
/* pb3_tc7wo1_out */
#define PB3_TC7WO1_OUT         MCHP_PINMUX(b, 3, 0x2e0, 28, periph)
/* pb3_tc8wo0g1_in */
#define PB3_TC8WO0G1_IN        MCHP_PINMUX(b, 3, 0x14c, 23, periph)
/* pb3_tc8wo0g3_in */
#define PB3_TC8WO0G3_IN        MCHP_PINMUX(b, 3, 0x150, 11, periph)
/* pb3_tc8wo0_out */
#define PB3_TC8WO0_OUT         MCHP_PINMUX(b, 3, 0x2d8, 26, periph)
/* pb3_tc9wo0g4_in */
#define PB3_TC9WO0G4_IN        MCHP_PINMUX(b, 3, 0x160, 4, periph)
/* pb3_tc9wo0_out */
#define PB3_TC9WO0_OUT         MCHP_PINMUX(b, 3, 0x2e0, 29, periph)
/* pb3_tc9wo1g3_in */
#define PB3_TC9WO1G3_IN        MCHP_PINMUX(b, 3, 0x164, 11, periph)
/* pb3_tc9wo1_out */
#define PB3_TC9WO1_OUT         MCHP_PINMUX(b, 3, 0x2dc, 33, periph)
/* pb3_tcc0wo0_out */
#define PB3_TCC0WO0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 13, periph)
/* pb3_tcc0wo1_out */
#define PB3_TCC0WO1_OUT        MCHP_PINMUX(b, 3, 0x2e0, 15, periph)
/* pb3_tcc0wo2_out */
#define PB3_TCC0WO2_OUT        MCHP_PINMUX(b, 3, 0x2dc, 17, periph)
/* pb3_tcc0wo3_out */
#define PB3_TCC0WO3_OUT        MCHP_PINMUX(b, 3, 0x2e0, 14, periph)
/* pb3_tcc0wo4_out */
#define PB3_TCC0WO4_OUT        MCHP_PINMUX(b, 3, 0x2d8, 14, periph)
/* pb3_tcc0wo5_out */
#define PB3_TCC0WO5_OUT        MCHP_PINMUX(b, 3, 0x2e0, 16, periph)
/* pb3_tcc1wo0_out */
#define PB3_TCC1WO0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 15, periph)
/* pb3_tcc1wo1_out */
#define PB3_TCC1WO1_OUT        MCHP_PINMUX(b, 3, 0x2e0, 18, periph)
/* pb3_tcc1wo2_out */
#define PB3_TCC1WO2_OUT        MCHP_PINMUX(b, 3, 0x2dc, 20, periph)
/* pb3_tcc1wo3_out */
#define PB3_TCC1WO3_OUT        MCHP_PINMUX(b, 3, 0x2e0, 17, periph)
/* pb3_tcc1wo4_out */
#define PB3_TCC1WO4_OUT        MCHP_PINMUX(b, 3, 0x2d8, 16, periph)
/* pb3_tcc1wo5_out */
#define PB3_TCC1WO5_OUT        MCHP_PINMUX(b, 3, 0x2e0, 19, periph)
/* pb3_tcc2wo0_out */
#define PB3_TCC2WO0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 17, periph)
/* pb3_tcc2wo1_out */
#define PB3_TCC2WO1_OUT        MCHP_PINMUX(b, 3, 0x2e0, 20, periph)
/* pb3_tstbus0_out */
#define PB3_TSTBUS0_OUT        MCHP_PINMUX(b, 3, 0x2d8, 32, periph)
/* pb3_tstbus1_out */
#define PB3_TSTBUS1_OUT        MCHP_PINMUX(b, 3, 0x2dc, 38, periph)
/* pb3_tstbus2_out */
#define PB3_TSTBUS2_OUT        MCHP_PINMUX(b, 3, 0x2e0, 34, periph)
/* pb3_tstbus4_out */
#define PB3_TSTBUS4_OUT        MCHP_PINMUX(b, 3, 0x2d8, 33, periph)
/* pb3_tstbus6_out */
#define PB3_TSTBUS6_OUT        MCHP_PINMUX(b, 3, 0x2e0, 35, periph)
/* pb3_tstbus8_out */
#define PB3_TSTBUS8_OUT        MCHP_PINMUX(b, 3, 0x2d8, 34, periph)
/* pb3_tstbus10_out */
#define PB3_TSTBUS10_OUT       MCHP_PINMUX(b, 3, 0x2dc, 39, periph)
/* pb4_accmpten_in */
#define PB4_ACCMPTEN_IN        MCHP_PINMUX(b, 4, 0x18c, 17, periph)
/* pb4_ac_cmp1_out */
#define PB4_AC_CMP1_OUT        MCHP_PINMUX(b, 4, 0x2ec, 36, periph)
/* pb4_ac_cmptout_out */
#define PB4_AC_CMPTOUT_OUT     MCHP_PINMUX(b, 4, 0x2ec, 37, periph)
/* pb4_can1_tx_out */
#define PB4_CAN1_TX_OUT        MCHP_PINMUX(b, 4, 0x2ec, 38, periph)
/* pb4_cclin0_in */
#define PB4_CCLIN0_IN          MCHP_PINMUX(b, 4, 0xb4, 17, periph)
/* pb4_cclin1_in */
#define PB4_CCLIN1_IN          MCHP_PINMUX(b, 4, 0xb8, 22, periph)
/* pb4_cclin3_in */
#define PB4_CCLIN3_IN          MCHP_PINMUX(b, 4, 0xc0, 17, periph)
/* pb4_cclin4_in */
#define PB4_CCLIN4_IN          MCHP_PINMUX(b, 4, 0xc4, 22, periph)
/* pb4_cclo0_out */
#define PB4_CCLO0_OUT          MCHP_PINMUX(b, 4, 0x2f0, 1, periph)
/* pb4_cclo1_out */
#define PB4_CCLO1_OUT          MCHP_PINMUX(b, 4, 0x2e8, 1, periph)
/* pb4_coexwlanact_in */
#define PB4_COEXWLANACT_IN     MCHP_PINMUX(b, 4, 0x194, 9, periph)
/* pb4_coex_bt_state_out */
#define PB4_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 4, 0x2e4, 37, periph)
/* pb4_coex_rf_act_out */
#define PB4_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 4, 0x2e8, 41, periph)
/* pb4_extint0_in */
#define PB4_EXTINT0_IN         MCHP_PINMUX(b, 4, 0x0, 17, periph)
/* pb4_extint1_in */
#define PB4_EXTINT1_IN         MCHP_PINMUX(b, 4, 0x4, 22, periph)
/* pb4_extint3_in */
#define PB4_EXTINT3_IN         MCHP_PINMUX(b, 4, 0xc, 9, periph)
/* pb4_fectrl0_out */
#define PB4_FECTRL0_OUT        MCHP_PINMUX(b, 4, 0x2e8, 40, periph)
/* pb4_fectrl1_out */
#define PB4_FECTRL1_OUT        MCHP_PINMUX(b, 4, 0x2e4, 35, periph)
/* pb4_fectrl2_out */
#define PB4_FECTRL2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 36, periph)
/* pb4_fectrl3_out */
#define PB4_FECTRL3_OUT        MCHP_PINMUX(b, 4, 0x2ec, 39, periph)
/* pb4_fectrl5_out */
#define PB4_FECTRL5_OUT        MCHP_PINMUX(b, 4, 0x2ec, 40, periph)
/* pb4_gmac_tsucomp_out */
#define PB4_GMAC_TSUCOMP_OUT   MCHP_PINMUX(b, 4, 0x2f0, 14, periph)
/* pb4_nmi_in */
#define PB4_NMI_IN             MCHP_PINMUX(b, 4, 0x3c, 9, periph)
/* pb4_qd0_in */
#define PB4_QD0_IN             MCHP_PINMUX(b, 4, 0xa0, 9, periph)
/* pb4_qd0_out */
#define PB4_QD0_OUT            MCHP_PINMUX(b, 4, 0x2e8, 35, periph)
/* pb4_qd1_in */
#define PB4_QD1_IN             MCHP_PINMUX(b, 4, 0xa4, 17, periph)
/* pb4_qd1_out */
#define PB4_QD1_OUT            MCHP_PINMUX(b, 4, 0x2e4, 30, periph)
/* pb4_qd2_in */
#define PB4_QD2_IN             MCHP_PINMUX(b, 4, 0xa8, 22, periph)
/* pb4_qd2_out */
#define PB4_QD2_OUT            MCHP_PINMUX(b, 4, 0x2e4, 29, periph)
/* pb4_qd3_out */
#define PB4_QD3_OUT            MCHP_PINMUX(b, 4, 0x2e4, 28, periph)
/* pb4_qeiccmp0_out */
#define PB4_QEICCMP0_OUT       MCHP_PINMUX(b, 4, 0x2e4, 31, periph)
/* pb4_qeihome0g1_in */
#define PB4_QEIHOME0G1_IN      MCHP_PINMUX(b, 4, 0x16c, 17, periph)
/* pb4_qeihome0g2_in */
#define PB4_QEIHOME0G2_IN      MCHP_PINMUX(b, 4, 0x170, 22, periph)
/* pb4_qeiindx0g2_in */
#define PB4_QEIINDX0G2_IN      MCHP_PINMUX(b, 4, 0x174, 22, periph)
/* pb4_qeiqea0g4_in */
#define PB4_QEIQEA0G4_IN       MCHP_PINMUX(b, 4, 0x180, 9, periph)
/* pb4_qeiqeb0g4_in */
#define PB4_QEIQEB0G4_IN       MCHP_PINMUX(b, 4, 0x184, 9, periph)
/* pb4_qeiqeb0g5_in */
#define PB4_QEIQEB0G5_IN       MCHP_PINMUX(b, 4, 0x188, 3, periph)
/* pb4_qspics_out */
#define PB4_QSPICS_OUT         MCHP_PINMUX(b, 4, 0x2e4, 27, periph)
/* pb4_scom0p0_in */
#define PB4_SCOM0P0_IN         MCHP_PINMUX(b, 4, 0x40, 22, periph)
/* pb4_scom0p0_out */
#define PB4_SCOM0P0_OUT        MCHP_PINMUX(b, 4, 0x2e8, 2, periph)
/* pb4_scom0p2_in */
#define PB4_SCOM0P2_IN         MCHP_PINMUX(b, 4, 0x48, 9, periph)
/* pb4_scom0p2_out */
#define PB4_SCOM0P2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 2, periph)
/* pb4_scom0p3_in */
#define PB4_SCOM0P3_IN         MCHP_PINMUX(b, 4, 0x4c, 17, periph)
/* pb4_scom0p3_out */
#define PB4_SCOM0P3_OUT        MCHP_PINMUX(b, 4, 0x2e4, 1, periph)
/* pb4_scom1p0_out */
#define PB4_SCOM1P0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 3, periph)
/* pb4_scom1p2_in */
#define PB4_SCOM1P2_IN         MCHP_PINMUX(b, 4, 0x58, 17, periph)
/* pb4_scom1p2_out */
#define PB4_SCOM1P2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 4, periph)
/* pb4_scom1p3_in */
#define PB4_SCOM1P3_IN         MCHP_PINMUX(b, 4, 0x5c, 22, periph)
/* pb4_scom1p3_out */
#define PB4_SCOM1P3_OUT        MCHP_PINMUX(b, 4, 0x2e8, 5, periph)
/* pb4_scom2p0_in */
#define PB4_SCOM2P0_IN         MCHP_PINMUX(b, 4, 0x60, 22, periph)
/* pb4_scom2p0_out */
#define PB4_SCOM2P0_OUT        MCHP_PINMUX(b, 4, 0x2e8, 7, periph)
/* pb4_scom2p2_in */
#define PB4_SCOM2P2_IN         MCHP_PINMUX(b, 4, 0x68, 9, periph)
/* pb4_scom2p2_out */
#define PB4_SCOM2P2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 6, periph)
/* pb4_scom2p3_in */
#define PB4_SCOM2P3_IN         MCHP_PINMUX(b, 4, 0x6c, 17, periph)
/* pb4_scom2p3_out */
#define PB4_SCOM2P3_OUT        MCHP_PINMUX(b, 4, 0x2e4, 5, periph)
/* pb4_scom3p0_out */
#define PB4_SCOM3P0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 7, periph)
/* pb4_scom3p2_in */
#define PB4_SCOM3P2_IN         MCHP_PINMUX(b, 4, 0x78, 17, periph)
/* pb4_scom3p2_out */
#define PB4_SCOM3P2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 8, periph)
/* pb4_scom3p3_in */
#define PB4_SCOM3P3_IN         MCHP_PINMUX(b, 4, 0x7c, 22, periph)
/* pb4_scom3p3_out */
#define PB4_SCOM3P3_OUT        MCHP_PINMUX(b, 4, 0x2e8, 10, periph)
/* pb4_scom4p0_in */
#define PB4_SCOM4P0_IN         MCHP_PINMUX(b, 4, 0x80, 22, periph)
/* pb4_scom4p0_out */
#define PB4_SCOM4P0_OUT        MCHP_PINMUX(b, 4, 0x2e8, 12, periph)
/* pb4_scom4p2_in */
#define PB4_SCOM4P2_IN         MCHP_PINMUX(b, 4, 0x88, 9, periph)
/* pb4_scom4p2_out */
#define PB4_SCOM4P2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 10, periph)
/* pb4_scom4p3_in */
#define PB4_SCOM4P3_IN         MCHP_PINMUX(b, 4, 0x8c, 17, periph)
/* pb4_scom4p3_out */
#define PB4_SCOM4P3_OUT        MCHP_PINMUX(b, 4, 0x2e4, 9, periph)
/* pb4_scom5p0_out */
#define PB4_SCOM5P0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 11, periph)
/* pb4_scom5p2_in */
#define PB4_SCOM5P2_IN         MCHP_PINMUX(b, 4, 0x98, 17, periph)
/* pb4_scom5p2_out */
#define PB4_SCOM5P2_OUT        MCHP_PINMUX(b, 4, 0x2e4, 12, periph)
/* pb4_scom5p3_in */
#define PB4_SCOM5P3_IN         MCHP_PINMUX(b, 4, 0x9c, 22, periph)
/* pb4_scom5p3_out */
#define PB4_SCOM5P3_OUT        MCHP_PINMUX(b, 4, 0x2e8, 15, periph)
/* pb4_tc0wo0g1_in */
#define PB4_TC0WO0G1_IN        MCHP_PINMUX(b, 4, 0xcc, 17, periph)
/* pb4_tc0wo0g2_in */
#define PB4_TC0WO0G2_IN        MCHP_PINMUX(b, 4, 0xd0, 22, periph)
/* pb4_tc0wo0_out */
#define PB4_TC0WO0_OUT         MCHP_PINMUX(b, 4, 0x2ec, 21, periph)
/* pb4_tc0wo1g4_in */
#define PB4_TC0WO1G4_IN        MCHP_PINMUX(b, 4, 0xd8, 9, periph)
/* pb4_tc0wo1_out */
#define PB4_TC0WO1_OUT         MCHP_PINMUX(b, 4, 0x2e4, 18, periph)
/* pb4_tc1wo0g1_in */
#define PB4_TC1WO0G1_IN        MCHP_PINMUX(b, 4, 0xdc, 17, periph)
/* pb4_tc1wo0_out */
#define PB4_TC1WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 19, periph)
/* pb4_tc1wo1g2_in */
#define PB4_TC1WO1G2_IN        MCHP_PINMUX(b, 4, 0xe4, 22, periph)
/* pb4_tc1wo1_out */
#define PB4_TC1WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 25, periph)
/* pb4_tc2wo0g1_in */
#define PB4_TC2WO0G1_IN        MCHP_PINMUX(b, 4, 0xec, 17, periph)
/* pb4_tc2wo0_out */
#define PB4_TC2WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 20, periph)
/* pb4_tc2wo1g2_in */
#define PB4_TC2WO1G2_IN        MCHP_PINMUX(b, 4, 0xf4, 22, periph)
/* pb4_tc2wo1g4_in */
#define PB4_TC2WO1G4_IN        MCHP_PINMUX(b, 4, 0xf8, 9, periph)
/* pb4_tc2wo1_out */
#define PB4_TC2WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 26, periph)
/* pb4_tc3wo0g1_in */
#define PB4_TC3WO0G1_IN        MCHP_PINMUX(b, 4, 0xfc, 17, periph)
/* pb4_tc3wo0_out */
#define PB4_TC3WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 21, periph)
/* pb4_tc3wo1g2_in */
#define PB4_TC3WO1G2_IN        MCHP_PINMUX(b, 4, 0x104, 22, periph)
/* pb4_tc3wo1g4_in */
#define PB4_TC3WO1G4_IN        MCHP_PINMUX(b, 4, 0x108, 9, periph)
/* pb4_tc3wo1_out */
#define PB4_TC3WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 27, periph)
/* pb4_tc4wo0g1_in */
#define PB4_TC4WO0G1_IN        MCHP_PINMUX(b, 4, 0x10c, 17, periph)
/* pb4_tc4wo0_out */
#define PB4_TC4WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 22, periph)
/* pb4_tc4wo1g2_in */
#define PB4_TC4WO1G2_IN        MCHP_PINMUX(b, 4, 0x114, 22, periph)
/* pb4_tc4wo1g4_in */
#define PB4_TC4WO1G4_IN        MCHP_PINMUX(b, 4, 0x118, 9, periph)
/* pb4_tc4wo1_out */
#define PB4_TC4WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 28, periph)
/* pb4_tc5wo0g1_in */
#define PB4_TC5WO0G1_IN        MCHP_PINMUX(b, 4, 0x11c, 17, periph)
/* pb4_tc5wo0_out */
#define PB4_TC5WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 23, periph)
/* pb4_tc5wo1g2_in */
#define PB4_TC5WO1G2_IN        MCHP_PINMUX(b, 4, 0x124, 22, periph)
/* pb4_tc5wo1g4_in */
#define PB4_TC5WO1G4_IN        MCHP_PINMUX(b, 4, 0x128, 9, periph)
/* pb4_tc5wo1_out */
#define PB4_TC5WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 29, periph)
/* pb4_tc6wo0g1_in */
#define PB4_TC6WO0G1_IN        MCHP_PINMUX(b, 4, 0x12c, 17, periph)
/* pb4_tc6wo0_out */
#define PB4_TC6WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 24, periph)
/* pb4_tc6wo1g2_in */
#define PB4_TC6WO1G2_IN        MCHP_PINMUX(b, 4, 0x134, 22, periph)
/* pb4_tc6wo1g4_in */
#define PB4_TC6WO1G4_IN        MCHP_PINMUX(b, 4, 0x138, 9, periph)
/* pb4_tc6wo1_out */
#define PB4_TC6WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 30, periph)
/* pb4_tc7wo0g1_in */
#define PB4_TC7WO0G1_IN        MCHP_PINMUX(b, 4, 0x13c, 17, periph)
/* pb4_tc7wo0_out */
#define PB4_TC7WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 25, periph)
/* pb4_tc7wo1g2_in */
#define PB4_TC7WO1G2_IN        MCHP_PINMUX(b, 4, 0x144, 22, periph)
/* pb4_tc7wo1g4_in */
#define PB4_TC7WO1G4_IN        MCHP_PINMUX(b, 4, 0x148, 9, periph)
/* pb4_tc7wo1_out */
#define PB4_TC7WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 31, periph)
/* pb4_tc8wo0g1_in */
#define PB4_TC8WO0G1_IN        MCHP_PINMUX(b, 4, 0x14c, 17, periph)
/* pb4_tc8wo0_out */
#define PB4_TC8WO0_OUT         MCHP_PINMUX(b, 4, 0x2e4, 26, periph)
/* pb4_tc8wo1g2_in */
#define PB4_TC8WO1G2_IN        MCHP_PINMUX(b, 4, 0x154, 22, periph)
/* pb4_tc8wo1g5_in */
#define PB4_TC8WO1G5_IN        MCHP_PINMUX(b, 4, 0x158, 3, periph)
/* pb4_tc8wo1_out */
#define PB4_TC8WO1_OUT         MCHP_PINMUX(b, 4, 0x2e8, 32, periph)
/* pb4_tc9wo0g2_in */
#define PB4_TC9WO0G2_IN        MCHP_PINMUX(b, 4, 0x15c, 22, periph)
/* pb4_tc9wo0g4_in */
#define PB4_TC9WO0G4_IN        MCHP_PINMUX(b, 4, 0x160, 9, periph)
/* pb4_tc9wo0_out */
#define PB4_TC9WO0_OUT         MCHP_PINMUX(b, 4, 0x2e8, 33, periph)
/* pb4_tc9wo1g5_in */
#define PB4_TC9WO1G5_IN        MCHP_PINMUX(b, 4, 0x168, 3, periph)
/* pb4_tc9wo1_out */
#define PB4_TC9WO1_OUT         MCHP_PINMUX(b, 4, 0x2f0, 11, periph)
/* pb4_tcc0wo0_out */
#define PB4_TCC0WO0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 13, periph)
/* pb4_tcc0wo1_out */
#define PB4_TCC0WO1_OUT        MCHP_PINMUX(b, 4, 0x2e8, 17, periph)
/* pb4_tcc0wo2_out */
#define PB4_TCC0WO2_OUT        MCHP_PINMUX(b, 4, 0x2f0, 5, periph)
/* pb4_tcc0wo3_out */
#define PB4_TCC0WO3_OUT        MCHP_PINMUX(b, 4, 0x2e8, 19, periph)
/* pb4_tcc0wo4_out */
#define PB4_TCC0WO4_OUT        MCHP_PINMUX(b, 4, 0x2e4, 14, periph)
/* pb4_tcc0wo5_out */
#define PB4_TCC0WO5_OUT        MCHP_PINMUX(b, 4, 0x2e8, 18, periph)
/* pb4_tcc1wo0_out */
#define PB4_TCC1WO0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 15, periph)
/* pb4_tcc1wo1_out */
#define PB4_TCC1WO1_OUT        MCHP_PINMUX(b, 4, 0x2e8, 20, periph)
/* pb4_tcc1wo2_out */
#define PB4_TCC1WO2_OUT        MCHP_PINMUX(b, 4, 0x2f0, 8, periph)
/* pb4_tcc1wo3_out */
#define PB4_TCC1WO3_OUT        MCHP_PINMUX(b, 4, 0x2e8, 22, periph)
/* pb4_tcc1wo4_out */
#define PB4_TCC1WO4_OUT        MCHP_PINMUX(b, 4, 0x2e4, 16, periph)
/* pb4_tcc1wo5_out */
#define PB4_TCC1WO5_OUT        MCHP_PINMUX(b, 4, 0x2e8, 21, periph)
/* pb4_tcc2wo0_out */
#define PB4_TCC2WO0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 17, periph)
/* pb4_tcc2wo1_out */
#define PB4_TCC2WO1_OUT        MCHP_PINMUX(b, 4, 0x2e8, 23, periph)
/* pb4_tstbus0_out */
#define PB4_TSTBUS0_OUT        MCHP_PINMUX(b, 4, 0x2e4, 32, periph)
/* pb4_tstbus2_out */
#define PB4_TSTBUS2_OUT        MCHP_PINMUX(b, 4, 0x2ec, 34, periph)
/* pb4_tstbus3_out */
#define PB4_TSTBUS3_OUT        MCHP_PINMUX(b, 4, 0x2f0, 15, periph)
/* pb4_tstbus4_out */
#define PB4_TSTBUS4_OUT        MCHP_PINMUX(b, 4, 0x2e4, 33, periph)
/* pb4_tstbus5_out */
#define PB4_TSTBUS5_OUT        MCHP_PINMUX(b, 4, 0x2e8, 38, periph)
/* pb4_tstbus6_out */
#define PB4_TSTBUS6_OUT        MCHP_PINMUX(b, 4, 0x2ec, 35, periph)
/* pb4_tstbus7_out */
#define PB4_TSTBUS7_OUT        MCHP_PINMUX(b, 4, 0x2f0, 16, periph)
/* pb4_tstbus8_out */
#define PB4_TSTBUS8_OUT        MCHP_PINMUX(b, 4, 0x2e4, 34, periph)
/* pb4_tstbus9_out */
#define PB4_TSTBUS9_OUT        MCHP_PINMUX(b, 4, 0x2e8, 39, periph)
/* pb4_tstbus11_out */
#define PB4_TSTBUS11_OUT       MCHP_PINMUX(b, 4, 0x2f0, 17, periph)
/* pb5_ac_cmp0_out */
#define PB5_AC_CMP0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 40, periph)
/* pb5_ac_cmptrdy_out */
#define PB5_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 5, 0x2f8, 41, periph)
/* pb5_can1rx_in */
#define PB5_CAN1RX_IN          MCHP_PINMUX(b, 5, 0x190, 21, periph)
/* pb5_cclin1_in */
#define PB5_CCLIN1_IN          MCHP_PINMUX(b, 5, 0xb8, 18, periph)
/* pb5_cclin2_in */
#define PB5_CCLIN2_IN          MCHP_PINMUX(b, 5, 0xbc, 21, periph)
/* pb5_cclin4_in */
#define PB5_CCLIN4_IN          MCHP_PINMUX(b, 5, 0xc4, 18, periph)
/* pb5_cclin5_in */
#define PB5_CCLIN5_IN          MCHP_PINMUX(b, 5, 0xc8, 21, periph)
/* pb5_cclo0_out */
#define PB5_CCLO0_OUT          MCHP_PINMUX(b, 5, 0x2f8, 1, periph)
/* pb5_cclo1_out */
#define PB5_CCLO1_OUT          MCHP_PINMUX(b, 5, 0x2f4, 1, periph)
/* pb5_coex_rf_act_out */
#define PB5_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 5, 0x2f4, 41, periph)
/* pb5_extint1_in */
#define PB5_EXTINT1_IN         MCHP_PINMUX(b, 5, 0x4, 18, periph)
/* pb5_extint2_in */
#define PB5_EXTINT2_IN         MCHP_PINMUX(b, 5, 0x8, 21, periph)
/* pb5_fectrl0_out */
#define PB5_FECTRL0_OUT        MCHP_PINMUX(b, 5, 0x2f4, 40, periph)
/* pb5_fectrl4_out */
#define PB5_FECTRL4_OUT        MCHP_PINMUX(b, 5, 0x2f8, 42, periph)
/* pb5_qd0_out */
#define PB5_QD0_OUT            MCHP_PINMUX(b, 5, 0x2f4, 35, periph)
/* pb5_qd1_out */
#define PB5_QD1_OUT            MCHP_PINMUX(b, 5, 0x2f8, 35, periph)
/* pb5_qd2_in */
#define PB5_QD2_IN             MCHP_PINMUX(b, 5, 0xa8, 18, periph)
/* pb5_qd2_out */
#define PB5_QD2_OUT            MCHP_PINMUX(b, 5, 0x2f4, 37, periph)
/* pb5_qd3_in */
#define PB5_QD3_IN             MCHP_PINMUX(b, 5, 0xac, 21, periph)
/* pb5_qd3_out */
#define PB5_QD3_OUT            MCHP_PINMUX(b, 5, 0x2f4, 36, periph)
/* pb5_qeihome0g2_in */
#define PB5_QEIHOME0G2_IN      MCHP_PINMUX(b, 5, 0x170, 18, periph)
/* pb5_qeiindx0g2_in */
#define PB5_QEIINDX0G2_IN      MCHP_PINMUX(b, 5, 0x174, 18, periph)
/* pb5_qeiindx0g3_in */
#define PB5_QEIINDX0G3_IN      MCHP_PINMUX(b, 5, 0x178, 21, periph)
/* pb5_qeiqea0g3_in */
#define PB5_QEIQEA0G3_IN       MCHP_PINMUX(b, 5, 0x17c, 21, periph)
/* pb5_qspics_out */
#define PB5_QSPICS_OUT         MCHP_PINMUX(b, 5, 0x2f4, 34, periph)
/* pb5_qspi_sck_out */
#define PB5_QSPI_SCK_OUT       MCHP_PINMUX(b, 5, 0x2fc, 7, periph)
/* pb5_refi_in */
#define PB5_REFI_IN            MCHP_PINMUX(b, 5, 0xb0, 2, periph)
/* pb5_refo1_out */
#define PB5_REFO1_OUT          MCHP_PINMUX(b, 5, 0x2fc, 8, periph)
/* pb5_refo2_out */
#define PB5_REFO2_OUT          MCHP_PINMUX(b, 5, 0x2fc, 9, periph)
/* pb5_refo3_out */
#define PB5_REFO3_OUT          MCHP_PINMUX(b, 5, 0x2fc, 10, periph)
/* pb5_refo4_out */
#define PB5_REFO4_OUT          MCHP_PINMUX(b, 5, 0x2fc, 11, periph)
/* pb5_scom0p0_in */
#define PB5_SCOM0P0_IN         MCHP_PINMUX(b, 5, 0x40, 18, periph)
/* pb5_scom0p0_out */
#define PB5_SCOM0P0_OUT        MCHP_PINMUX(b, 5, 0x2f4, 2, periph)
/* pb5_scom0p1_in */
#define PB5_SCOM0P1_IN         MCHP_PINMUX(b, 5, 0x44, 2, periph)
/* pb5_scom0p1_out */
#define PB5_SCOM0P1_OUT        MCHP_PINMUX(b, 5, 0x2fc, 1, periph)
/* pb5_scom0p2_out */
#define PB5_SCOM0P2_OUT        MCHP_PINMUX(b, 5, 0x2f4, 4, periph)
/* pb5_scom0p3_out */
#define PB5_SCOM0P3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 3, periph)
/* pb5_scom1p0_in */
#define PB5_SCOM1P0_IN         MCHP_PINMUX(b, 5, 0x50, 21, periph)
/* pb5_scom1p0_out */
#define PB5_SCOM1P0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 5, periph)
/* pb5_scom1p1_in */
#define PB5_SCOM1P1_IN         MCHP_PINMUX(b, 5, 0x54, 2, periph)
/* pb5_scom1p1_out */
#define PB5_SCOM1P1_OUT        MCHP_PINMUX(b, 5, 0x2fc, 2, periph)
/* pb5_scom1p2_out */
#define PB5_SCOM1P2_OUT        MCHP_PINMUX(b, 5, 0x2f4, 6, periph)
/* pb5_scom1p3_in */
#define PB5_SCOM1P3_IN         MCHP_PINMUX(b, 5, 0x5c, 18, periph)
/* pb5_scom1p3_out */
#define PB5_SCOM1P3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 5, periph)
/* pb5_scom2p0_in */
#define PB5_SCOM2P0_IN         MCHP_PINMUX(b, 5, 0x60, 18, periph)
/* pb5_scom2p0_out */
#define PB5_SCOM2P0_OUT        MCHP_PINMUX(b, 5, 0x2f4, 7, periph)
/* pb5_scom2p1_in */
#define PB5_SCOM2P1_IN         MCHP_PINMUX(b, 5, 0x64, 2, periph)
/* pb5_scom2p1_out */
#define PB5_SCOM2P1_OUT        MCHP_PINMUX(b, 5, 0x2fc, 3, periph)
/* pb5_scom2p2_out */
#define PB5_SCOM2P2_OUT        MCHP_PINMUX(b, 5, 0x2f4, 9, periph)
/* pb5_scom2p3_out */
#define PB5_SCOM2P3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 8, periph)
/* pb5_scom3p0_in */
#define PB5_SCOM3P0_IN         MCHP_PINMUX(b, 5, 0x70, 21, periph)
/* pb5_scom3p0_out */
#define PB5_SCOM3P0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 10, periph)
/* pb5_scom3p1_in */
#define PB5_SCOM3P1_IN         MCHP_PINMUX(b, 5, 0x74, 2, periph)
/* pb5_scom3p1_out */
#define PB5_SCOM3P1_OUT        MCHP_PINMUX(b, 5, 0x2fc, 4, periph)
/* pb5_scom3p2_out */
#define PB5_SCOM3P2_OUT        MCHP_PINMUX(b, 5, 0x2f4, 11, periph)
/* pb5_scom3p3_in */
#define PB5_SCOM3P3_IN         MCHP_PINMUX(b, 5, 0x7c, 18, periph)
/* pb5_scom3p3_out */
#define PB5_SCOM3P3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 10, periph)
/* pb5_scom4p0_in */
#define PB5_SCOM4P0_IN         MCHP_PINMUX(b, 5, 0x80, 18, periph)
/* pb5_scom4p0_out */
#define PB5_SCOM4P0_OUT        MCHP_PINMUX(b, 5, 0x2f4, 12, periph)
/* pb5_scom4p1_in */
#define PB5_SCOM4P1_IN         MCHP_PINMUX(b, 5, 0x84, 2, periph)
/* pb5_scom4p1_out */
#define PB5_SCOM4P1_OUT        MCHP_PINMUX(b, 5, 0x2fc, 5, periph)
/* pb5_scom4p2_out */
#define PB5_SCOM4P2_OUT        MCHP_PINMUX(b, 5, 0x2f4, 14, periph)
/* pb5_scom4p3_out */
#define PB5_SCOM4P3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 13, periph)
/* pb5_scom5p0_in */
#define PB5_SCOM5P0_IN         MCHP_PINMUX(b, 5, 0x90, 21, periph)
/* pb5_scom5p0_out */
#define PB5_SCOM5P0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 15, periph)
/* pb5_scom5p1_in */
#define PB5_SCOM5P1_IN         MCHP_PINMUX(b, 5, 0x94, 2, periph)
/* pb5_scom5p1_out */
#define PB5_SCOM5P1_OUT        MCHP_PINMUX(b, 5, 0x2fc, 6, periph)
/* pb5_scom5p2_out */
#define PB5_SCOM5P2_OUT        MCHP_PINMUX(b, 5, 0x2f4, 16, periph)
/* pb5_scom5p3_in */
#define PB5_SCOM5P3_IN         MCHP_PINMUX(b, 5, 0x9c, 18, periph)
/* pb5_scom5p3_out */
#define PB5_SCOM5P3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 15, periph)
/* pb5_tc0wo0g2_in */
#define PB5_TC0WO0G2_IN        MCHP_PINMUX(b, 5, 0xd0, 18, periph)
/* pb5_tc0wo0_out */
#define PB5_TC0WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 24, periph)
/* pb5_tc0wo1g3_in */
#define PB5_TC0WO1G3_IN        MCHP_PINMUX(b, 5, 0xd4, 21, periph)
/* pb5_tc0wo1_out */
#define PB5_TC0WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 24, periph)
/* pb5_tc1wo0_out */
#define PB5_TC1WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 25, periph)
/* pb5_tc1wo1g2_in */
#define PB5_TC1WO1G2_IN        MCHP_PINMUX(b, 5, 0xe4, 18, periph)
/* pb5_tc1wo1_out */
#define PB5_TC1WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 25, periph)
/* pb5_tc2wo0g3_in */
#define PB5_TC2WO0G3_IN        MCHP_PINMUX(b, 5, 0xf0, 21, periph)
/* pb5_tc2wo0_out */
#define PB5_TC2WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 26, periph)
/* pb5_tc2wo1g2_in */
#define PB5_TC2WO1G2_IN        MCHP_PINMUX(b, 5, 0xf4, 18, periph)
/* pb5_tc2wo1_out */
#define PB5_TC2WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 26, periph)
/* pb5_tc3wo0g3_in */
#define PB5_TC3WO0G3_IN        MCHP_PINMUX(b, 5, 0x100, 21, periph)
/* pb5_tc3wo0_out */
#define PB5_TC3WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 27, periph)
/* pb5_tc3wo1g2_in */
#define PB5_TC3WO1G2_IN        MCHP_PINMUX(b, 5, 0x104, 18, periph)
/* pb5_tc3wo1_out */
#define PB5_TC3WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 27, periph)
/* pb5_tc4wo0g3_in */
#define PB5_TC4WO0G3_IN        MCHP_PINMUX(b, 5, 0x110, 21, periph)
/* pb5_tc4wo0_out */
#define PB5_TC4WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 28, periph)
/* pb5_tc4wo1g2_in */
#define PB5_TC4WO1G2_IN        MCHP_PINMUX(b, 5, 0x114, 18, periph)
/* pb5_tc4wo1_out */
#define PB5_TC4WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 28, periph)
/* pb5_tc5wo0g3_in */
#define PB5_TC5WO0G3_IN        MCHP_PINMUX(b, 5, 0x120, 21, periph)
/* pb5_tc5wo0_out */
#define PB5_TC5WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 29, periph)
/* pb5_tc5wo1g2_in */
#define PB5_TC5WO1G2_IN        MCHP_PINMUX(b, 5, 0x124, 18, periph)
/* pb5_tc5wo1_out */
#define PB5_TC5WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 29, periph)
/* pb5_tc6wo0g3_in */
#define PB5_TC6WO0G3_IN        MCHP_PINMUX(b, 5, 0x130, 21, periph)
/* pb5_tc6wo0_out */
#define PB5_TC6WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 30, periph)
/* pb5_tc6wo1g2_in */
#define PB5_TC6WO1G2_IN        MCHP_PINMUX(b, 5, 0x134, 18, periph)
/* pb5_tc6wo1_out */
#define PB5_TC6WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 30, periph)
/* pb5_tc7wo0g3_in */
#define PB5_TC7WO0G3_IN        MCHP_PINMUX(b, 5, 0x140, 21, periph)
/* pb5_tc7wo0_out */
#define PB5_TC7WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 31, periph)
/* pb5_tc7wo1g2_in */
#define PB5_TC7WO1G2_IN        MCHP_PINMUX(b, 5, 0x144, 18, periph)
/* pb5_tc7wo1_out */
#define PB5_TC7WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 31, periph)
/* pb5_tc8wo0g3_in */
#define PB5_TC8WO0G3_IN        MCHP_PINMUX(b, 5, 0x150, 21, periph)
/* pb5_tc8wo0_out */
#define PB5_TC8WO0_OUT         MCHP_PINMUX(b, 5, 0x2f8, 32, periph)
/* pb5_tc8wo1g2_in */
#define PB5_TC8WO1G2_IN        MCHP_PINMUX(b, 5, 0x154, 18, periph)
/* pb5_tc8wo1_out */
#define PB5_TC8WO1_OUT         MCHP_PINMUX(b, 5, 0x2f4, 32, periph)
/* pb5_tc9wo0g2_in */
#define PB5_TC9WO0G2_IN        MCHP_PINMUX(b, 5, 0x15c, 18, periph)
/* pb5_tc9wo0_out */
#define PB5_TC9WO0_OUT         MCHP_PINMUX(b, 5, 0x2f4, 33, periph)
/* pb5_tc9wo1g3_in */
#define PB5_TC9WO1G3_IN        MCHP_PINMUX(b, 5, 0x164, 21, periph)
/* pb5_tc9wo1_out */
#define PB5_TC9WO1_OUT         MCHP_PINMUX(b, 5, 0x2f8, 33, periph)
/* pb5_tcc0wo0_out */
#define PB5_TCC0WO0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 18, periph)
/* pb5_tcc0wo1_out */
#define PB5_TCC0WO1_OUT        MCHP_PINMUX(b, 5, 0x2f4, 17, periph)
/* pb5_tcc0wo2_out */
#define PB5_TCC0WO2_OUT        MCHP_PINMUX(b, 5, 0x2f8, 17, periph)
/* pb5_tcc0wo3_out */
#define PB5_TCC0WO3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 19, periph)
/* pb5_tcc0wo4_out */
#define PB5_TCC0WO4_OUT        MCHP_PINMUX(b, 5, 0x2f8, 19, periph)
/* pb5_tcc0wo5_out */
#define PB5_TCC0WO5_OUT        MCHP_PINMUX(b, 5, 0x2f4, 18, periph)
/* pb5_tcc1wo0_out */
#define PB5_TCC1WO0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 21, periph)
/* pb5_tcc1wo1_out */
#define PB5_TCC1WO1_OUT        MCHP_PINMUX(b, 5, 0x2f4, 20, periph)
/* pb5_tcc1wo2_out */
#define PB5_TCC1WO2_OUT        MCHP_PINMUX(b, 5, 0x2f8, 20, periph)
/* pb5_tcc1wo3_out */
#define PB5_TCC1WO3_OUT        MCHP_PINMUX(b, 5, 0x2f4, 22, periph)
/* pb5_tcc1wo4_out */
#define PB5_TCC1WO4_OUT        MCHP_PINMUX(b, 5, 0x2f8, 22, periph)
/* pb5_tcc1wo5_out */
#define PB5_TCC1WO5_OUT        MCHP_PINMUX(b, 5, 0x2f4, 21, periph)
/* pb5_tcc2wo0_out */
#define PB5_TCC2WO0_OUT        MCHP_PINMUX(b, 5, 0x2f8, 23, periph)
/* pb5_tcc2wo1_out */
#define PB5_TCC2WO1_OUT        MCHP_PINMUX(b, 5, 0x2f4, 23, periph)
/* pb5_tstbus1_out */
#define PB5_TSTBUS1_OUT        MCHP_PINMUX(b, 5, 0x2f8, 38, periph)
/* pb5_tstbus5_out */
#define PB5_TSTBUS5_OUT        MCHP_PINMUX(b, 5, 0x2f4, 38, periph)
/* pb5_tstbus9_out */
#define PB5_TSTBUS9_OUT        MCHP_PINMUX(b, 5, 0x2f4, 39, periph)
/* pb5_tstbus10_out */
#define PB5_TSTBUS10_OUT       MCHP_PINMUX(b, 5, 0x2f8, 39, periph)
/* pb6_accmpten_in */
#define PB6_ACCMPTEN_IN        MCHP_PINMUX(b, 6, 0x18c, 5, periph)
/* pb6_ac_cmp0_out */
#define PB6_AC_CMP0_OUT        MCHP_PINMUX(b, 6, 0x304, 40, periph)
/* pb6_ac_cmp1_out */
#define PB6_AC_CMP1_OUT        MCHP_PINMUX(b, 6, 0x308, 36, periph)
/* pb6_ac_cmptout_out */
#define PB6_AC_CMPTOUT_OUT     MCHP_PINMUX(b, 6, 0x308, 37, periph)
/* pb6_ac_cmptrdy_out */
#define PB6_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 6, 0x304, 41, periph)
/* pb6_can1rx_in */
#define PB6_CAN1RX_IN          MCHP_PINMUX(b, 6, 0x190, 17, periph)
/* pb6_can1_tx_out */
#define PB6_CAN1_TX_OUT        MCHP_PINMUX(b, 6, 0x308, 38, periph)
/* pb6_cclin0_in */
#define PB6_CCLIN0_IN          MCHP_PINMUX(b, 6, 0xb4, 5, periph)
/* pb6_cclin2_in */
#define PB6_CCLIN2_IN          MCHP_PINMUX(b, 6, 0xbc, 17, periph)
/* pb6_cclin3_in */
#define PB6_CCLIN3_IN          MCHP_PINMUX(b, 6, 0xc0, 5, periph)
/* pb6_cclin5_in */
#define PB6_CCLIN5_IN          MCHP_PINMUX(b, 6, 0xc8, 17, periph)
/* pb6_cclo0_out */
#define PB6_CCLO0_OUT          MCHP_PINMUX(b, 6, 0x304, 1, periph)
/* pb6_cclo1_out */
#define PB6_CCLO1_OUT          MCHP_PINMUX(b, 6, 0x308, 1, periph)
/* pb6_coexwlanact_in */
#define PB6_COEXWLANACT_IN     MCHP_PINMUX(b, 6, 0x194, 21, periph)
/* pb6_coex_bt_state_out */
#define PB6_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 6, 0x300, 37, periph)
/* pb6_extint0_in */
#define PB6_EXTINT0_IN         MCHP_PINMUX(b, 6, 0x0, 5, periph)
/* pb6_extint2_in */
#define PB6_EXTINT2_IN         MCHP_PINMUX(b, 6, 0x8, 17, periph)
/* pb6_extint3_in */
#define PB6_EXTINT3_IN         MCHP_PINMUX(b, 6, 0xc, 21, periph)
/* pb6_fectrl1_out */
#define PB6_FECTRL1_OUT        MCHP_PINMUX(b, 6, 0x300, 35, periph)
/* pb6_fectrl2_out */
#define PB6_FECTRL2_OUT        MCHP_PINMUX(b, 6, 0x300, 36, periph)
/* pb6_fectrl3_out */
#define PB6_FECTRL3_OUT        MCHP_PINMUX(b, 6, 0x308, 39, periph)
/* pb6_fectrl4_out */
#define PB6_FECTRL4_OUT        MCHP_PINMUX(b, 6, 0x304, 42, periph)
/* pb6_fectrl5_out */
#define PB6_FECTRL5_OUT        MCHP_PINMUX(b, 6, 0x308, 40, periph)
/* pb6_nmi_in */
#define PB6_NMI_IN             MCHP_PINMUX(b, 6, 0x3c, 21, periph)
/* pb6_qd0_in */
#define PB6_QD0_IN             MCHP_PINMUX(b, 6, 0xa0, 21, periph)
/* pb6_qd0_out */
#define PB6_QD0_OUT            MCHP_PINMUX(b, 6, 0x304, 36, periph)
/* pb6_qd1_in */
#define PB6_QD1_IN             MCHP_PINMUX(b, 6, 0xa4, 5, periph)
/* pb6_qd1_out */
#define PB6_QD1_OUT            MCHP_PINMUX(b, 6, 0x300, 30, periph)
/* pb6_qd2_out */
#define PB6_QD2_OUT            MCHP_PINMUX(b, 6, 0x300, 29, periph)
/* pb6_qd3_in */
#define PB6_QD3_IN             MCHP_PINMUX(b, 6, 0xac, 17, periph)
/* pb6_qd3_out */
#define PB6_QD3_OUT            MCHP_PINMUX(b, 6, 0x300, 28, periph)
/* pb6_qeiccmp0_out */
#define PB6_QEICCMP0_OUT       MCHP_PINMUX(b, 6, 0x300, 31, periph)
/* pb6_qeihome0g1_in */
#define PB6_QEIHOME0G1_IN      MCHP_PINMUX(b, 6, 0x16c, 5, periph)
/* pb6_qeiindx0g3_in */
#define PB6_QEIINDX0G3_IN      MCHP_PINMUX(b, 6, 0x178, 17, periph)
/* pb6_qeiqea0g3_in */
#define PB6_QEIQEA0G3_IN       MCHP_PINMUX(b, 6, 0x17c, 17, periph)
/* pb6_qeiqea0g4_in */
#define PB6_QEIQEA0G4_IN       MCHP_PINMUX(b, 6, 0x180, 21, periph)
/* pb6_qeiqeb0g4_in */
#define PB6_QEIQEB0G4_IN       MCHP_PINMUX(b, 6, 0x184, 21, periph)
/* pb6_qspics_out */
#define PB6_QSPICS_OUT         MCHP_PINMUX(b, 6, 0x300, 27, periph)
/* pb6_qspi_sck_out */
#define PB6_QSPI_SCK_OUT       MCHP_PINMUX(b, 6, 0x30c, 7, periph)
/* pb6_refi_in */
#define PB6_REFI_IN            MCHP_PINMUX(b, 6, 0xb0, 9, periph)
/* pb6_refo1_out */
#define PB6_REFO1_OUT          MCHP_PINMUX(b, 6, 0x30c, 8, periph)
/* pb6_refo2_out */
#define PB6_REFO2_OUT          MCHP_PINMUX(b, 6, 0x30c, 9, periph)
/* pb6_refo3_out */
#define PB6_REFO3_OUT          MCHP_PINMUX(b, 6, 0x30c, 10, periph)
/* pb6_refo4_out */
#define PB6_REFO4_OUT          MCHP_PINMUX(b, 6, 0x30c, 11, periph)
/* pb6_scom0p0_out */
#define PB6_SCOM0P0_OUT        MCHP_PINMUX(b, 6, 0x304, 2, periph)
/* pb6_scom0p1_in */
#define PB6_SCOM0P1_IN         MCHP_PINMUX(b, 6, 0x44, 9, periph)
/* pb6_scom0p1_out */
#define PB6_SCOM0P1_OUT        MCHP_PINMUX(b, 6, 0x30c, 1, periph)
/* pb6_scom0p2_in */
#define PB6_SCOM0P2_IN         MCHP_PINMUX(b, 6, 0x48, 21, periph)
/* pb6_scom0p2_out */
#define PB6_SCOM0P2_OUT        MCHP_PINMUX(b, 6, 0x300, 2, periph)
/* pb6_scom0p3_in */
#define PB6_SCOM0P3_IN         MCHP_PINMUX(b, 6, 0x4c, 5, periph)
/* pb6_scom0p3_out */
#define PB6_SCOM0P3_OUT        MCHP_PINMUX(b, 6, 0x300, 1, periph)
/* pb6_scom1p0_in */
#define PB6_SCOM1P0_IN         MCHP_PINMUX(b, 6, 0x50, 17, periph)
/* pb6_scom1p0_out */
#define PB6_SCOM1P0_OUT        MCHP_PINMUX(b, 6, 0x300, 3, periph)
/* pb6_scom1p1_in */
#define PB6_SCOM1P1_IN         MCHP_PINMUX(b, 6, 0x54, 9, periph)
/* pb6_scom1p1_out */
#define PB6_SCOM1P1_OUT        MCHP_PINMUX(b, 6, 0x30c, 2, periph)
/* pb6_scom1p2_in */
#define PB6_SCOM1P2_IN         MCHP_PINMUX(b, 6, 0x58, 5, periph)
/* pb6_scom1p2_out */
#define PB6_SCOM1P2_OUT        MCHP_PINMUX(b, 6, 0x300, 4, periph)
/* pb6_scom1p3_out */
#define PB6_SCOM1P3_OUT        MCHP_PINMUX(b, 6, 0x304, 6, periph)
/* pb6_scom2p0_out */
#define PB6_SCOM2P0_OUT        MCHP_PINMUX(b, 6, 0x304, 7, periph)
/* pb6_scom2p1_in */
#define PB6_SCOM2P1_IN         MCHP_PINMUX(b, 6, 0x64, 9, periph)
/* pb6_scom2p1_out */
#define PB6_SCOM2P1_OUT        MCHP_PINMUX(b, 6, 0x30c, 3, periph)
/* pb6_scom2p2_in */
#define PB6_SCOM2P2_IN         MCHP_PINMUX(b, 6, 0x68, 21, periph)
/* pb6_scom2p2_out */
#define PB6_SCOM2P2_OUT        MCHP_PINMUX(b, 6, 0x300, 6, periph)
/* pb6_scom2p3_in */
#define PB6_SCOM2P3_IN         MCHP_PINMUX(b, 6, 0x6c, 5, periph)
/* pb6_scom2p3_out */
#define PB6_SCOM2P3_OUT        MCHP_PINMUX(b, 6, 0x300, 5, periph)
/* pb6_scom3p0_in */
#define PB6_SCOM3P0_IN         MCHP_PINMUX(b, 6, 0x70, 17, periph)
/* pb6_scom3p0_out */
#define PB6_SCOM3P0_OUT        MCHP_PINMUX(b, 6, 0x300, 7, periph)
/* pb6_scom3p1_in */
#define PB6_SCOM3P1_IN         MCHP_PINMUX(b, 6, 0x74, 9, periph)
/* pb6_scom3p1_out */
#define PB6_SCOM3P1_OUT        MCHP_PINMUX(b, 6, 0x30c, 4, periph)
/* pb6_scom3p2_in */
#define PB6_SCOM3P2_IN         MCHP_PINMUX(b, 6, 0x78, 5, periph)
/* pb6_scom3p2_out */
#define PB6_SCOM3P2_OUT        MCHP_PINMUX(b, 6, 0x300, 8, periph)
/* pb6_scom3p3_out */
#define PB6_SCOM3P3_OUT        MCHP_PINMUX(b, 6, 0x304, 11, periph)
/* pb6_scom4p0_out */
#define PB6_SCOM4P0_OUT        MCHP_PINMUX(b, 6, 0x304, 12, periph)
/* pb6_scom4p1_in */
#define PB6_SCOM4P1_IN         MCHP_PINMUX(b, 6, 0x84, 9, periph)
/* pb6_scom4p1_out */
#define PB6_SCOM4P1_OUT        MCHP_PINMUX(b, 6, 0x30c, 5, periph)
/* pb6_scom4p2_in */
#define PB6_SCOM4P2_IN         MCHP_PINMUX(b, 6, 0x88, 21, periph)
/* pb6_scom4p2_out */
#define PB6_SCOM4P2_OUT        MCHP_PINMUX(b, 6, 0x300, 10, periph)
/* pb6_scom4p3_in */
#define PB6_SCOM4P3_IN         MCHP_PINMUX(b, 6, 0x8c, 5, periph)
/* pb6_scom4p3_out */
#define PB6_SCOM4P3_OUT        MCHP_PINMUX(b, 6, 0x300, 9, periph)
/* pb6_scom5p0_in */
#define PB6_SCOM5P0_IN         MCHP_PINMUX(b, 6, 0x90, 17, periph)
/* pb6_scom5p0_out */
#define PB6_SCOM5P0_OUT        MCHP_PINMUX(b, 6, 0x300, 11, periph)
/* pb6_scom5p1_in */
#define PB6_SCOM5P1_IN         MCHP_PINMUX(b, 6, 0x94, 9, periph)
/* pb6_scom5p1_out */
#define PB6_SCOM5P1_OUT        MCHP_PINMUX(b, 6, 0x30c, 6, periph)
/* pb6_scom5p2_in */
#define PB6_SCOM5P2_IN         MCHP_PINMUX(b, 6, 0x98, 5, periph)
/* pb6_scom5p2_out */
#define PB6_SCOM5P2_OUT        MCHP_PINMUX(b, 6, 0x300, 12, periph)
/* pb6_scom5p3_out */
#define PB6_SCOM5P3_OUT        MCHP_PINMUX(b, 6, 0x304, 16, periph)
/* pb6_tc0wo0g1_in */
#define PB6_TC0WO0G1_IN        MCHP_PINMUX(b, 6, 0xcc, 5, periph)
/* pb6_tc0wo0_out */
#define PB6_TC0WO0_OUT         MCHP_PINMUX(b, 6, 0x304, 24, periph)
/* pb6_tc0wo1g3_in */
#define PB6_TC0WO1G3_IN        MCHP_PINMUX(b, 6, 0xd4, 17, periph)
/* pb6_tc0wo1g4_in */
#define PB6_TC0WO1G4_IN        MCHP_PINMUX(b, 6, 0xd8, 21, periph)
/* pb6_tc0wo1_out */
#define PB6_TC0WO1_OUT         MCHP_PINMUX(b, 6, 0x300, 18, periph)
/* pb6_tc1wo0g1_in */
#define PB6_TC1WO0G1_IN        MCHP_PINMUX(b, 6, 0xdc, 5, periph)
/* pb6_tc1wo0_out */
#define PB6_TC1WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 19, periph)
/* pb6_tc1wo1_out */
#define PB6_TC1WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 22, periph)
/* pb6_tc2wo0g1_in */
#define PB6_TC2WO0G1_IN        MCHP_PINMUX(b, 6, 0xec, 5, periph)
/* pb6_tc2wo0g3_in */
#define PB6_TC2WO0G3_IN        MCHP_PINMUX(b, 6, 0xf0, 17, periph)
/* pb6_tc2wo0_out */
#define PB6_TC2WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 20, periph)
/* pb6_tc2wo1g4_in */
#define PB6_TC2WO1G4_IN        MCHP_PINMUX(b, 6, 0xf8, 21, periph)
/* pb6_tc2wo1_out */
#define PB6_TC2WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 23, periph)
/* pb6_tc3wo0g1_in */
#define PB6_TC3WO0G1_IN        MCHP_PINMUX(b, 6, 0xfc, 5, periph)
/* pb6_tc3wo0g3_in */
#define PB6_TC3WO0G3_IN        MCHP_PINMUX(b, 6, 0x100, 17, periph)
/* pb6_tc3wo0_out */
#define PB6_TC3WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 21, periph)
/* pb6_tc3wo1g4_in */
#define PB6_TC3WO1G4_IN        MCHP_PINMUX(b, 6, 0x108, 21, periph)
/* pb6_tc3wo1_out */
#define PB6_TC3WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 24, periph)
/* pb6_tc4wo0g1_in */
#define PB6_TC4WO0G1_IN        MCHP_PINMUX(b, 6, 0x10c, 5, periph)
/* pb6_tc4wo0g3_in */
#define PB6_TC4WO0G3_IN        MCHP_PINMUX(b, 6, 0x110, 17, periph)
/* pb6_tc4wo0_out */
#define PB6_TC4WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 22, periph)
/* pb6_tc4wo1g4_in */
#define PB6_TC4WO1G4_IN        MCHP_PINMUX(b, 6, 0x118, 21, periph)
/* pb6_tc4wo1_out */
#define PB6_TC4WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 25, periph)
/* pb6_tc5wo0g1_in */
#define PB6_TC5WO0G1_IN        MCHP_PINMUX(b, 6, 0x11c, 5, periph)
/* pb6_tc5wo0g3_in */
#define PB6_TC5WO0G3_IN        MCHP_PINMUX(b, 6, 0x120, 17, periph)
/* pb6_tc5wo0_out */
#define PB6_TC5WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 23, periph)
/* pb6_tc5wo1g4_in */
#define PB6_TC5WO1G4_IN        MCHP_PINMUX(b, 6, 0x128, 21, periph)
/* pb6_tc5wo1_out */
#define PB6_TC5WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 26, periph)
/* pb6_tc6wo0g1_in */
#define PB6_TC6WO0G1_IN        MCHP_PINMUX(b, 6, 0x12c, 5, periph)
/* pb6_tc6wo0g3_in */
#define PB6_TC6WO0G3_IN        MCHP_PINMUX(b, 6, 0x130, 17, periph)
/* pb6_tc6wo0_out */
#define PB6_TC6WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 24, periph)
/* pb6_tc6wo1g4_in */
#define PB6_TC6WO1G4_IN        MCHP_PINMUX(b, 6, 0x138, 21, periph)
/* pb6_tc6wo1_out */
#define PB6_TC6WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 27, periph)
/* pb6_tc7wo0g1_in */
#define PB6_TC7WO0G1_IN        MCHP_PINMUX(b, 6, 0x13c, 5, periph)
/* pb6_tc7wo0g3_in */
#define PB6_TC7WO0G3_IN        MCHP_PINMUX(b, 6, 0x140, 17, periph)
/* pb6_tc7wo0_out */
#define PB6_TC7WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 25, periph)
/* pb6_tc7wo1g4_in */
#define PB6_TC7WO1G4_IN        MCHP_PINMUX(b, 6, 0x148, 21, periph)
/* pb6_tc7wo1_out */
#define PB6_TC7WO1_OUT         MCHP_PINMUX(b, 6, 0x308, 28, periph)
/* pb6_tc8wo0g1_in */
#define PB6_TC8WO0G1_IN        MCHP_PINMUX(b, 6, 0x14c, 5, periph)
/* pb6_tc8wo0g3_in */
#define PB6_TC8WO0G3_IN        MCHP_PINMUX(b, 6, 0x150, 17, periph)
/* pb6_tc8wo0_out */
#define PB6_TC8WO0_OUT         MCHP_PINMUX(b, 6, 0x300, 26, periph)
/* pb6_tc9wo0g4_in */
#define PB6_TC9WO0G4_IN        MCHP_PINMUX(b, 6, 0x160, 21, periph)
/* pb6_tc9wo0_out */
#define PB6_TC9WO0_OUT         MCHP_PINMUX(b, 6, 0x308, 29, periph)
/* pb6_tc9wo1g3_in */
#define PB6_TC9WO1G3_IN        MCHP_PINMUX(b, 6, 0x164, 17, periph)
/* pb6_tc9wo1_out */
#define PB6_TC9WO1_OUT         MCHP_PINMUX(b, 6, 0x304, 33, periph)
/* pb6_tcc0wo0_out */
#define PB6_TCC0WO0_OUT        MCHP_PINMUX(b, 6, 0x300, 13, periph)
/* pb6_tcc0wo1_out */
#define PB6_TCC0WO1_OUT        MCHP_PINMUX(b, 6, 0x308, 15, periph)
/* pb6_tcc0wo2_out */
#define PB6_TCC0WO2_OUT        MCHP_PINMUX(b, 6, 0x304, 17, periph)
/* pb6_tcc0wo3_out */
#define PB6_TCC0WO3_OUT        MCHP_PINMUX(b, 6, 0x308, 14, periph)
/* pb6_tcc0wo4_out */
#define PB6_TCC0WO4_OUT        MCHP_PINMUX(b, 6, 0x300, 14, periph)
/* pb6_tcc0wo5_out */
#define PB6_TCC0WO5_OUT        MCHP_PINMUX(b, 6, 0x308, 16, periph)
/* pb6_tcc1wo0_out */
#define PB6_TCC1WO0_OUT        MCHP_PINMUX(b, 6, 0x300, 15, periph)
/* pb6_tcc1wo1_out */
#define PB6_TCC1WO1_OUT        MCHP_PINMUX(b, 6, 0x308, 18, periph)
/* pb6_tcc1wo2_out */
#define PB6_TCC1WO2_OUT        MCHP_PINMUX(b, 6, 0x304, 20, periph)
/* pb6_tcc1wo3_out */
#define PB6_TCC1WO3_OUT        MCHP_PINMUX(b, 6, 0x308, 17, periph)
/* pb6_tcc1wo4_out */
#define PB6_TCC1WO4_OUT        MCHP_PINMUX(b, 6, 0x300, 16, periph)
/* pb6_tcc1wo5_out */
#define PB6_TCC1WO5_OUT        MCHP_PINMUX(b, 6, 0x308, 19, periph)
/* pb6_tcc2wo0_out */
#define PB6_TCC2WO0_OUT        MCHP_PINMUX(b, 6, 0x300, 17, periph)
/* pb6_tcc2wo1_out */
#define PB6_TCC2WO1_OUT        MCHP_PINMUX(b, 6, 0x308, 20, periph)
/* pb6_tstbus0_out */
#define PB6_TSTBUS0_OUT        MCHP_PINMUX(b, 6, 0x300, 32, periph)
/* pb6_tstbus1_out */
#define PB6_TSTBUS1_OUT        MCHP_PINMUX(b, 6, 0x304, 38, periph)
/* pb6_tstbus2_out */
#define PB6_TSTBUS2_OUT        MCHP_PINMUX(b, 6, 0x308, 34, periph)
/* pb6_tstbus4_out */
#define PB6_TSTBUS4_OUT        MCHP_PINMUX(b, 6, 0x300, 33, periph)
/* pb6_tstbus6_out */
#define PB6_TSTBUS6_OUT        MCHP_PINMUX(b, 6, 0x308, 35, periph)
/* pb6_tstbus8_out */
#define PB6_TSTBUS8_OUT        MCHP_PINMUX(b, 6, 0x300, 34, periph)
/* pb6_tstbus10_out */
#define PB6_TSTBUS10_OUT       MCHP_PINMUX(b, 6, 0x304, 39, periph)
/* pb7_accmpten_in */
#define PB7_ACCMPTEN_IN        MCHP_PINMUX(b, 7, 0x18c, 24, periph)
/* pb7_ac_cmp1_out */
#define PB7_AC_CMP1_OUT        MCHP_PINMUX(b, 7, 0x318, 36, periph)
/* pb7_ac_cmptout_out */
#define PB7_AC_CMPTOUT_OUT     MCHP_PINMUX(b, 7, 0x318, 37, periph)
/* pb7_can1_tx_out */
#define PB7_CAN1_TX_OUT        MCHP_PINMUX(b, 7, 0x318, 38, periph)
/* pb7_cclin0_in */
#define PB7_CCLIN0_IN          MCHP_PINMUX(b, 7, 0xb4, 24, periph)
/* pb7_cclin1_in */
#define PB7_CCLIN1_IN          MCHP_PINMUX(b, 7, 0xb8, 5, periph)
/* pb7_cclin3_in */
#define PB7_CCLIN3_IN          MCHP_PINMUX(b, 7, 0xc0, 24, periph)
/* pb7_cclin4_in */
#define PB7_CCLIN4_IN          MCHP_PINMUX(b, 7, 0xc4, 5, periph)
/* pb7_cclo1_out */
#define PB7_CCLO1_OUT          MCHP_PINMUX(b, 7, 0x314, 1, periph)
/* pb7_coexwlanact_in */
#define PB7_COEXWLANACT_IN     MCHP_PINMUX(b, 7, 0x194, 15, periph)
/* pb7_coex_bt_state_out */
#define PB7_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 7, 0x310, 37, periph)
/* pb7_coex_rf_act_out */
#define PB7_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 7, 0x314, 41, periph)
/* pb7_extint0_in */
#define PB7_EXTINT0_IN         MCHP_PINMUX(b, 7, 0x0, 24, periph)
/* pb7_extint1_in */
#define PB7_EXTINT1_IN         MCHP_PINMUX(b, 7, 0x4, 5, periph)
/* pb7_extint3_in */
#define PB7_EXTINT3_IN         MCHP_PINMUX(b, 7, 0xc, 15, periph)
/* pb7_fectrl0_out */
#define PB7_FECTRL0_OUT        MCHP_PINMUX(b, 7, 0x314, 40, periph)
/* pb7_fectrl1_out */
#define PB7_FECTRL1_OUT        MCHP_PINMUX(b, 7, 0x310, 35, periph)
/* pb7_fectrl2_out */
#define PB7_FECTRL2_OUT        MCHP_PINMUX(b, 7, 0x310, 36, periph)
/* pb7_fectrl3_out */
#define PB7_FECTRL3_OUT        MCHP_PINMUX(b, 7, 0x318, 39, periph)
/* pb7_fectrl5_out */
#define PB7_FECTRL5_OUT        MCHP_PINMUX(b, 7, 0x318, 40, periph)
/* pb7_nmi_in */
#define PB7_NMI_IN             MCHP_PINMUX(b, 7, 0x3c, 15, periph)
/* pb7_qd0_in */
#define PB7_QD0_IN             MCHP_PINMUX(b, 7, 0xa0, 15, periph)
/* pb7_qd0_out */
#define PB7_QD0_OUT            MCHP_PINMUX(b, 7, 0x314, 35, periph)
/* pb7_qd1_in */
#define PB7_QD1_IN             MCHP_PINMUX(b, 7, 0xa4, 24, periph)
/* pb7_qd1_out */
#define PB7_QD1_OUT            MCHP_PINMUX(b, 7, 0x310, 30, periph)
/* pb7_qd2_in */
#define PB7_QD2_IN             MCHP_PINMUX(b, 7, 0xa8, 5, periph)
/* pb7_qd2_out */
#define PB7_QD2_OUT            MCHP_PINMUX(b, 7, 0x310, 29, periph)
/* pb7_qd3_out */
#define PB7_QD3_OUT            MCHP_PINMUX(b, 7, 0x310, 28, periph)
/* pb7_qeiccmp0_out */
#define PB7_QEICCMP0_OUT       MCHP_PINMUX(b, 7, 0x310, 31, periph)
/* pb7_qeihome0g1_in */
#define PB7_QEIHOME0G1_IN      MCHP_PINMUX(b, 7, 0x16c, 24, periph)
/* pb7_qeihome0g2_in */
#define PB7_QEIHOME0G2_IN      MCHP_PINMUX(b, 7, 0x170, 5, periph)
/* pb7_qeiindx0g2_in */
#define PB7_QEIINDX0G2_IN      MCHP_PINMUX(b, 7, 0x174, 5, periph)
/* pb7_qeiqea0g4_in */
#define PB7_QEIQEA0G4_IN       MCHP_PINMUX(b, 7, 0x180, 15, periph)
/* pb7_qeiqeb0g4_in */
#define PB7_QEIQEB0G4_IN       MCHP_PINMUX(b, 7, 0x184, 15, periph)
/* pb7_qspics_out */
#define PB7_QSPICS_OUT         MCHP_PINMUX(b, 7, 0x310, 27, periph)
/* pb7_scom0p0_in */
#define PB7_SCOM0P0_IN         MCHP_PINMUX(b, 7, 0x40, 5, periph)
/* pb7_scom0p0_out */
#define PB7_SCOM0P0_OUT        MCHP_PINMUX(b, 7, 0x314, 2, periph)
/* pb7_scom0p2_in */
#define PB7_SCOM0P2_IN         MCHP_PINMUX(b, 7, 0x48, 15, periph)
/* pb7_scom0p2_out */
#define PB7_SCOM0P2_OUT        MCHP_PINMUX(b, 7, 0x310, 2, periph)
/* pb7_scom0p3_in */
#define PB7_SCOM0P3_IN         MCHP_PINMUX(b, 7, 0x4c, 24, periph)
/* pb7_scom0p3_out */
#define PB7_SCOM0P3_OUT        MCHP_PINMUX(b, 7, 0x310, 1, periph)
/* pb7_scom1p0_out */
#define PB7_SCOM1P0_OUT        MCHP_PINMUX(b, 7, 0x310, 3, periph)
/* pb7_scom1p2_in */
#define PB7_SCOM1P2_IN         MCHP_PINMUX(b, 7, 0x58, 24, periph)
/* pb7_scom1p2_out */
#define PB7_SCOM1P2_OUT        MCHP_PINMUX(b, 7, 0x310, 4, periph)
/* pb7_scom1p3_in */
#define PB7_SCOM1P3_IN         MCHP_PINMUX(b, 7, 0x5c, 5, periph)
/* pb7_scom1p3_out */
#define PB7_SCOM1P3_OUT        MCHP_PINMUX(b, 7, 0x314, 5, periph)
/* pb7_scom2p0_in */
#define PB7_SCOM2P0_IN         MCHP_PINMUX(b, 7, 0x60, 5, periph)
/* pb7_scom2p0_out */
#define PB7_SCOM2P0_OUT        MCHP_PINMUX(b, 7, 0x314, 7, periph)
/* pb7_scom2p2_in */
#define PB7_SCOM2P2_IN         MCHP_PINMUX(b, 7, 0x68, 15, periph)
/* pb7_scom2p2_out */
#define PB7_SCOM2P2_OUT        MCHP_PINMUX(b, 7, 0x310, 6, periph)
/* pb7_scom2p3_in */
#define PB7_SCOM2P3_IN         MCHP_PINMUX(b, 7, 0x6c, 24, periph)
/* pb7_scom2p3_out */
#define PB7_SCOM2P3_OUT        MCHP_PINMUX(b, 7, 0x310, 5, periph)
/* pb7_scom3p0_out */
#define PB7_SCOM3P0_OUT        MCHP_PINMUX(b, 7, 0x310, 7, periph)
/* pb7_scom3p2_in */
#define PB7_SCOM3P2_IN         MCHP_PINMUX(b, 7, 0x78, 24, periph)
/* pb7_scom3p2_out */
#define PB7_SCOM3P2_OUT        MCHP_PINMUX(b, 7, 0x310, 8, periph)
/* pb7_scom3p3_in */
#define PB7_SCOM3P3_IN         MCHP_PINMUX(b, 7, 0x7c, 5, periph)
/* pb7_scom3p3_out */
#define PB7_SCOM3P3_OUT        MCHP_PINMUX(b, 7, 0x314, 10, periph)
/* pb7_scom4p0_in */
#define PB7_SCOM4P0_IN         MCHP_PINMUX(b, 7, 0x80, 5, periph)
/* pb7_scom4p0_out */
#define PB7_SCOM4P0_OUT        MCHP_PINMUX(b, 7, 0x314, 12, periph)
/* pb7_scom4p2_in */
#define PB7_SCOM4P2_IN         MCHP_PINMUX(b, 7, 0x88, 15, periph)
/* pb7_scom4p2_out */
#define PB7_SCOM4P2_OUT        MCHP_PINMUX(b, 7, 0x310, 10, periph)
/* pb7_scom4p3_in */
#define PB7_SCOM4P3_IN         MCHP_PINMUX(b, 7, 0x8c, 24, periph)
/* pb7_scom4p3_out */
#define PB7_SCOM4P3_OUT        MCHP_PINMUX(b, 7, 0x310, 9, periph)
/* pb7_scom5p0_out */
#define PB7_SCOM5P0_OUT        MCHP_PINMUX(b, 7, 0x310, 11, periph)
/* pb7_scom5p2_in */
#define PB7_SCOM5P2_IN         MCHP_PINMUX(b, 7, 0x98, 24, periph)
/* pb7_scom5p2_out */
#define PB7_SCOM5P2_OUT        MCHP_PINMUX(b, 7, 0x310, 12, periph)
/* pb7_scom5p3_in */
#define PB7_SCOM5P3_IN         MCHP_PINMUX(b, 7, 0x9c, 5, periph)
/* pb7_scom5p3_out */
#define PB7_SCOM5P3_OUT        MCHP_PINMUX(b, 7, 0x314, 15, periph)
/* pb7_tc0wo0g1_in */
#define PB7_TC0WO0G1_IN        MCHP_PINMUX(b, 7, 0xcc, 24, periph)
/* pb7_tc0wo0g2_in */
#define PB7_TC0WO0G2_IN        MCHP_PINMUX(b, 7, 0xd0, 5, periph)
/* pb7_tc0wo0_out */
#define PB7_TC0WO0_OUT         MCHP_PINMUX(b, 7, 0x318, 21, periph)
/* pb7_tc0wo1g4_in */
#define PB7_TC0WO1G4_IN        MCHP_PINMUX(b, 7, 0xd8, 15, periph)
/* pb7_tc0wo1_out */
#define PB7_TC0WO1_OUT         MCHP_PINMUX(b, 7, 0x310, 18, periph)
/* pb7_tc1wo0g1_in */
#define PB7_TC1WO0G1_IN        MCHP_PINMUX(b, 7, 0xdc, 24, periph)
/* pb7_tc1wo0_out */
#define PB7_TC1WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 19, periph)
/* pb7_tc1wo1g2_in */
#define PB7_TC1WO1G2_IN        MCHP_PINMUX(b, 7, 0xe4, 5, periph)
/* pb7_tc1wo1_out */
#define PB7_TC1WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 25, periph)
/* pb7_tc2wo0g1_in */
#define PB7_TC2WO0G1_IN        MCHP_PINMUX(b, 7, 0xec, 24, periph)
/* pb7_tc2wo0_out */
#define PB7_TC2WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 20, periph)
/* pb7_tc2wo1g2_in */
#define PB7_TC2WO1G2_IN        MCHP_PINMUX(b, 7, 0xf4, 5, periph)
/* pb7_tc2wo1g4_in */
#define PB7_TC2WO1G4_IN        MCHP_PINMUX(b, 7, 0xf8, 15, periph)
/* pb7_tc2wo1_out */
#define PB7_TC2WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 26, periph)
/* pb7_tc3wo0g1_in */
#define PB7_TC3WO0G1_IN        MCHP_PINMUX(b, 7, 0xfc, 24, periph)
/* pb7_tc3wo0_out */
#define PB7_TC3WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 21, periph)
/* pb7_tc3wo1g2_in */
#define PB7_TC3WO1G2_IN        MCHP_PINMUX(b, 7, 0x104, 5, periph)
/* pb7_tc3wo1g4_in */
#define PB7_TC3WO1G4_IN        MCHP_PINMUX(b, 7, 0x108, 15, periph)
/* pb7_tc3wo1_out */
#define PB7_TC3WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 27, periph)
/* pb7_tc4wo0g1_in */
#define PB7_TC4WO0G1_IN        MCHP_PINMUX(b, 7, 0x10c, 24, periph)
/* pb7_tc4wo0_out */
#define PB7_TC4WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 22, periph)
/* pb7_tc4wo1g2_in */
#define PB7_TC4WO1G2_IN        MCHP_PINMUX(b, 7, 0x114, 5, periph)
/* pb7_tc4wo1g4_in */
#define PB7_TC4WO1G4_IN        MCHP_PINMUX(b, 7, 0x118, 15, periph)
/* pb7_tc4wo1_out */
#define PB7_TC4WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 28, periph)
/* pb7_tc5wo0g1_in */
#define PB7_TC5WO0G1_IN        MCHP_PINMUX(b, 7, 0x11c, 24, periph)
/* pb7_tc5wo0_out */
#define PB7_TC5WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 23, periph)
/* pb7_tc5wo1g2_in */
#define PB7_TC5WO1G2_IN        MCHP_PINMUX(b, 7, 0x124, 5, periph)
/* pb7_tc5wo1g4_in */
#define PB7_TC5WO1G4_IN        MCHP_PINMUX(b, 7, 0x128, 15, periph)
/* pb7_tc5wo1_out */
#define PB7_TC5WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 29, periph)
/* pb7_tc6wo0g1_in */
#define PB7_TC6WO0G1_IN        MCHP_PINMUX(b, 7, 0x12c, 24, periph)
/* pb7_tc6wo0_out */
#define PB7_TC6WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 24, periph)
/* pb7_tc6wo1g2_in */
#define PB7_TC6WO1G2_IN        MCHP_PINMUX(b, 7, 0x134, 5, periph)
/* pb7_tc6wo1g4_in */
#define PB7_TC6WO1G4_IN        MCHP_PINMUX(b, 7, 0x138, 15, periph)
/* pb7_tc6wo1_out */
#define PB7_TC6WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 30, periph)
/* pb7_tc7wo0g1_in */
#define PB7_TC7WO0G1_IN        MCHP_PINMUX(b, 7, 0x13c, 24, periph)
/* pb7_tc7wo0_out */
#define PB7_TC7WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 25, periph)
/* pb7_tc7wo1g2_in */
#define PB7_TC7WO1G2_IN        MCHP_PINMUX(b, 7, 0x144, 5, periph)
/* pb7_tc7wo1g4_in */
#define PB7_TC7WO1G4_IN        MCHP_PINMUX(b, 7, 0x148, 15, periph)
/* pb7_tc7wo1_out */
#define PB7_TC7WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 31, periph)
/* pb7_tc8wo0g1_in */
#define PB7_TC8WO0G1_IN        MCHP_PINMUX(b, 7, 0x14c, 24, periph)
/* pb7_tc8wo0_out */
#define PB7_TC8WO0_OUT         MCHP_PINMUX(b, 7, 0x310, 26, periph)
/* pb7_tc8wo1g2_in */
#define PB7_TC8WO1G2_IN        MCHP_PINMUX(b, 7, 0x154, 5, periph)
/* pb7_tc8wo1_out */
#define PB7_TC8WO1_OUT         MCHP_PINMUX(b, 7, 0x314, 32, periph)
/* pb7_tc9wo0g2_in */
#define PB7_TC9WO0G2_IN        MCHP_PINMUX(b, 7, 0x15c, 5, periph)
/* pb7_tc9wo0g4_in */
#define PB7_TC9WO0G4_IN        MCHP_PINMUX(b, 7, 0x160, 15, periph)
/* pb7_tc9wo0_out */
#define PB7_TC9WO0_OUT         MCHP_PINMUX(b, 7, 0x314, 33, periph)
/* pb7_tcc0wo0_out */
#define PB7_TCC0WO0_OUT        MCHP_PINMUX(b, 7, 0x310, 13, periph)
/* pb7_tcc0wo1_out */
#define PB7_TCC0WO1_OUT        MCHP_PINMUX(b, 7, 0x314, 17, periph)
/* pb7_tcc0wo3_out */
#define PB7_TCC0WO3_OUT        MCHP_PINMUX(b, 7, 0x314, 19, periph)
/* pb7_tcc0wo4_out */
#define PB7_TCC0WO4_OUT        MCHP_PINMUX(b, 7, 0x310, 14, periph)
/* pb7_tcc0wo5_out */
#define PB7_TCC0WO5_OUT        MCHP_PINMUX(b, 7, 0x314, 18, periph)
/* pb7_tcc1wo0_out */
#define PB7_TCC1WO0_OUT        MCHP_PINMUX(b, 7, 0x310, 15, periph)
/* pb7_tcc1wo1_out */
#define PB7_TCC1WO1_OUT        MCHP_PINMUX(b, 7, 0x314, 20, periph)
/* pb7_tcc1wo3_out */
#define PB7_TCC1WO3_OUT        MCHP_PINMUX(b, 7, 0x314, 22, periph)
/* pb7_tcc1wo4_out */
#define PB7_TCC1WO4_OUT        MCHP_PINMUX(b, 7, 0x310, 16, periph)
/* pb7_tcc1wo5_out */
#define PB7_TCC1WO5_OUT        MCHP_PINMUX(b, 7, 0x314, 21, periph)
/* pb7_tcc2wo0_out */
#define PB7_TCC2WO0_OUT        MCHP_PINMUX(b, 7, 0x310, 17, periph)
/* pb7_tcc2wo1_out */
#define PB7_TCC2WO1_OUT        MCHP_PINMUX(b, 7, 0x314, 23, periph)
/* pb7_tstbus0_out */
#define PB7_TSTBUS0_OUT        MCHP_PINMUX(b, 7, 0x310, 32, periph)
/* pb7_tstbus2_out */
#define PB7_TSTBUS2_OUT        MCHP_PINMUX(b, 7, 0x318, 34, periph)
/* pb7_tstbus4_out */
#define PB7_TSTBUS4_OUT        MCHP_PINMUX(b, 7, 0x310, 33, periph)
/* pb7_tstbus5_out */
#define PB7_TSTBUS5_OUT        MCHP_PINMUX(b, 7, 0x314, 38, periph)
/* pb7_tstbus6_out */
#define PB7_TSTBUS6_OUT        MCHP_PINMUX(b, 7, 0x318, 35, periph)
/* pb7_tstbus8_out */
#define PB7_TSTBUS8_OUT        MCHP_PINMUX(b, 7, 0x310, 34, periph)
/* pb7_tstbus9_out */
#define PB7_TSTBUS9_OUT        MCHP_PINMUX(b, 7, 0x314, 39, periph)
/* pb8_accmpten_in */
#define PB8_ACCMPTEN_IN        MCHP_PINMUX(b, 8, 0x18c, 18, periph)
/* pb8_ac_cmp0_out */
#define PB8_AC_CMP0_OUT        MCHP_PINMUX(b, 8, 0x324, 40, periph)
/* pb8_ac_cmptrdy_out */
#define PB8_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 8, 0x324, 41, periph)
/* pb8_can1rx_in */
#define PB8_CAN1RX_IN          MCHP_PINMUX(b, 8, 0x190, 5, periph)
/* pb8_cclin0_in */
#define PB8_CCLIN0_IN          MCHP_PINMUX(b, 8, 0xb4, 18, periph)
/* pb8_cclin1_in */
#define PB8_CCLIN1_IN          MCHP_PINMUX(b, 8, 0xb8, 23, periph)
/* pb8_cclin2_in */
#define PB8_CCLIN2_IN          MCHP_PINMUX(b, 8, 0xbc, 5, periph)
/* pb8_cclin3_in */
#define PB8_CCLIN3_IN          MCHP_PINMUX(b, 8, 0xc0, 18, periph)
/* pb8_cclin4_in */
#define PB8_CCLIN4_IN          MCHP_PINMUX(b, 8, 0xc4, 23, periph)
/* pb8_cclin5_in */
#define PB8_CCLIN5_IN          MCHP_PINMUX(b, 8, 0xc8, 5, periph)
/* pb8_cclo0_out */
#define PB8_CCLO0_OUT          MCHP_PINMUX(b, 8, 0x324, 1, periph)
/* pb8_cclo1_out */
#define PB8_CCLO1_OUT          MCHP_PINMUX(b, 8, 0x320, 1, periph)
/* pb8_coex_bt_state_out */
#define PB8_COEX_BT_STATE_OUT  MCHP_PINMUX(b, 8, 0x31c, 37, periph)
/* pb8_coex_rf_act_out */
#define PB8_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 8, 0x320, 41, periph)
/* pb8_extint0_in */
#define PB8_EXTINT0_IN         MCHP_PINMUX(b, 8, 0x0, 18, periph)
/* pb8_extint1_in */
#define PB8_EXTINT1_IN         MCHP_PINMUX(b, 8, 0x4, 23, periph)
/* pb8_extint2_in */
#define PB8_EXTINT2_IN         MCHP_PINMUX(b, 8, 0x8, 5, periph)
/* pb8_fectrl0_out */
#define PB8_FECTRL0_OUT        MCHP_PINMUX(b, 8, 0x320, 40, periph)
/* pb8_fectrl1_out */
#define PB8_FECTRL1_OUT        MCHP_PINMUX(b, 8, 0x31c, 35, periph)
/* pb8_fectrl2_out */
#define PB8_FECTRL2_OUT        MCHP_PINMUX(b, 8, 0x31c, 36, periph)
/* pb8_fectrl4_out */
#define PB8_FECTRL4_OUT        MCHP_PINMUX(b, 8, 0x324, 42, periph)
/* pb8_qd0_out */
#define PB8_QD0_OUT            MCHP_PINMUX(b, 8, 0x320, 35, periph)
/* pb8_qd1_in */
#define PB8_QD1_IN             MCHP_PINMUX(b, 8, 0xa4, 18, periph)
/* pb8_qd1_out */
#define PB8_QD1_OUT            MCHP_PINMUX(b, 8, 0x31c, 30, periph)
/* pb8_qd2_in */
#define PB8_QD2_IN             MCHP_PINMUX(b, 8, 0xa8, 23, periph)
/* pb8_qd2_out */
#define PB8_QD2_OUT            MCHP_PINMUX(b, 8, 0x31c, 29, periph)
/* pb8_qd3_in */
#define PB8_QD3_IN             MCHP_PINMUX(b, 8, 0xac, 5, periph)
/* pb8_qd3_out */
#define PB8_QD3_OUT            MCHP_PINMUX(b, 8, 0x31c, 28, periph)
/* pb8_qeiccmp0_out */
#define PB8_QEICCMP0_OUT       MCHP_PINMUX(b, 8, 0x31c, 31, periph)
/* pb8_qeihome0g1_in */
#define PB8_QEIHOME0G1_IN      MCHP_PINMUX(b, 8, 0x16c, 18, periph)
/* pb8_qeihome0g2_in */
#define PB8_QEIHOME0G2_IN      MCHP_PINMUX(b, 8, 0x170, 23, periph)
/* pb8_qeiindx0g2_in */
#define PB8_QEIINDX0G2_IN      MCHP_PINMUX(b, 8, 0x174, 23, periph)
/* pb8_qeiindx0g3_in */
#define PB8_QEIINDX0G3_IN      MCHP_PINMUX(b, 8, 0x178, 5, periph)
/* pb8_qeiqea0g3_in */
#define PB8_QEIQEA0G3_IN       MCHP_PINMUX(b, 8, 0x17c, 5, periph)
/* pb8_qspics_out */
#define PB8_QSPICS_OUT         MCHP_PINMUX(b, 8, 0x31c, 27, periph)
/* pb8_qspi_sck_out */
#define PB8_QSPI_SCK_OUT       MCHP_PINMUX(b, 8, 0x328, 7, periph)
/* pb8_refi_in */
#define PB8_REFI_IN            MCHP_PINMUX(b, 8, 0xb0, 10, periph)
/* pb8_refo1_out */
#define PB8_REFO1_OUT          MCHP_PINMUX(b, 8, 0x328, 8, periph)
/* pb8_refo2_out */
#define PB8_REFO2_OUT          MCHP_PINMUX(b, 8, 0x328, 9, periph)
/* pb8_refo3_out */
#define PB8_REFO3_OUT          MCHP_PINMUX(b, 8, 0x328, 10, periph)
/* pb8_refo4_out */
#define PB8_REFO4_OUT          MCHP_PINMUX(b, 8, 0x328, 11, periph)
/* pb8_scom0p0_in */
#define PB8_SCOM0P0_IN         MCHP_PINMUX(b, 8, 0x40, 23, periph)
/* pb8_scom0p0_out */
#define PB8_SCOM0P0_OUT        MCHP_PINMUX(b, 8, 0x320, 2, periph)
/* pb8_scom0p1_in */
#define PB8_SCOM0P1_IN         MCHP_PINMUX(b, 8, 0x44, 10, periph)
/* pb8_scom0p1_out */
#define PB8_SCOM0P1_OUT        MCHP_PINMUX(b, 8, 0x328, 1, periph)
/* pb8_scom0p2_out */
#define PB8_SCOM0P2_OUT        MCHP_PINMUX(b, 8, 0x31c, 2, periph)
/* pb8_scom0p3_in */
#define PB8_SCOM0P3_IN         MCHP_PINMUX(b, 8, 0x4c, 18, periph)
/* pb8_scom0p3_out */
#define PB8_SCOM0P3_OUT        MCHP_PINMUX(b, 8, 0x31c, 1, periph)
/* pb8_scom1p0_in */
#define PB8_SCOM1P0_IN         MCHP_PINMUX(b, 8, 0x50, 5, periph)
/* pb8_scom1p0_out */
#define PB8_SCOM1P0_OUT        MCHP_PINMUX(b, 8, 0x31c, 3, periph)
/* pb8_scom1p1_in */
#define PB8_SCOM1P1_IN         MCHP_PINMUX(b, 8, 0x54, 10, periph)
/* pb8_scom1p1_out */
#define PB8_SCOM1P1_OUT        MCHP_PINMUX(b, 8, 0x328, 2, periph)
/* pb8_scom1p2_in */
#define PB8_SCOM1P2_IN         MCHP_PINMUX(b, 8, 0x58, 18, periph)
/* pb8_scom1p2_out */
#define PB8_SCOM1P2_OUT        MCHP_PINMUX(b, 8, 0x31c, 4, periph)
/* pb8_scom1p3_in */
#define PB8_SCOM1P3_IN         MCHP_PINMUX(b, 8, 0x5c, 23, periph)
/* pb8_scom1p3_out */
#define PB8_SCOM1P3_OUT        MCHP_PINMUX(b, 8, 0x320, 5, periph)
/* pb8_scom2p0_in */
#define PB8_SCOM2P0_IN         MCHP_PINMUX(b, 8, 0x60, 23, periph)
/* pb8_scom2p0_out */
#define PB8_SCOM2P0_OUT        MCHP_PINMUX(b, 8, 0x320, 7, periph)
/* pb8_scom2p1_in */
#define PB8_SCOM2P1_IN         MCHP_PINMUX(b, 8, 0x64, 10, periph)
/* pb8_scom2p1_out */
#define PB8_SCOM2P1_OUT        MCHP_PINMUX(b, 8, 0x328, 3, periph)
/* pb8_scom2p2_out */
#define PB8_SCOM2P2_OUT        MCHP_PINMUX(b, 8, 0x31c, 6, periph)
/* pb8_scom2p3_in */
#define PB8_SCOM2P3_IN         MCHP_PINMUX(b, 8, 0x6c, 18, periph)
/* pb8_scom2p3_out */
#define PB8_SCOM2P3_OUT        MCHP_PINMUX(b, 8, 0x31c, 5, periph)
/* pb8_scom3p0_in */
#define PB8_SCOM3P0_IN         MCHP_PINMUX(b, 8, 0x70, 5, periph)
/* pb8_scom3p0_out */
#define PB8_SCOM3P0_OUT        MCHP_PINMUX(b, 8, 0x31c, 7, periph)
/* pb8_scom3p1_in */
#define PB8_SCOM3P1_IN         MCHP_PINMUX(b, 8, 0x74, 10, periph)
/* pb8_scom3p1_out */
#define PB8_SCOM3P1_OUT        MCHP_PINMUX(b, 8, 0x328, 4, periph)
/* pb8_scom3p2_in */
#define PB8_SCOM3P2_IN         MCHP_PINMUX(b, 8, 0x78, 18, periph)
/* pb8_scom3p2_out */
#define PB8_SCOM3P2_OUT        MCHP_PINMUX(b, 8, 0x31c, 8, periph)
/* pb8_scom3p3_in */
#define PB8_SCOM3P3_IN         MCHP_PINMUX(b, 8, 0x7c, 23, periph)
/* pb8_scom3p3_out */
#define PB8_SCOM3P3_OUT        MCHP_PINMUX(b, 8, 0x320, 10, periph)
/* pb8_scom4p0_in */
#define PB8_SCOM4P0_IN         MCHP_PINMUX(b, 8, 0x80, 23, periph)
/* pb8_scom4p0_out */
#define PB8_SCOM4P0_OUT        MCHP_PINMUX(b, 8, 0x320, 12, periph)
/* pb8_scom4p1_in */
#define PB8_SCOM4P1_IN         MCHP_PINMUX(b, 8, 0x84, 10, periph)
/* pb8_scom4p1_out */
#define PB8_SCOM4P1_OUT        MCHP_PINMUX(b, 8, 0x328, 5, periph)
/* pb8_scom4p2_out */
#define PB8_SCOM4P2_OUT        MCHP_PINMUX(b, 8, 0x31c, 10, periph)
/* pb8_scom4p3_in */
#define PB8_SCOM4P3_IN         MCHP_PINMUX(b, 8, 0x8c, 18, periph)
/* pb8_scom4p3_out */
#define PB8_SCOM4P3_OUT        MCHP_PINMUX(b, 8, 0x31c, 9, periph)
/* pb8_scom5p0_in */
#define PB8_SCOM5P0_IN         MCHP_PINMUX(b, 8, 0x90, 5, periph)
/* pb8_scom5p0_out */
#define PB8_SCOM5P0_OUT        MCHP_PINMUX(b, 8, 0x31c, 11, periph)
/* pb8_scom5p1_in */
#define PB8_SCOM5P1_IN         MCHP_PINMUX(b, 8, 0x94, 10, periph)
/* pb8_scom5p1_out */
#define PB8_SCOM5P1_OUT        MCHP_PINMUX(b, 8, 0x328, 6, periph)
/* pb8_scom5p2_in */
#define PB8_SCOM5P2_IN         MCHP_PINMUX(b, 8, 0x98, 18, periph)
/* pb8_scom5p2_out */
#define PB8_SCOM5P2_OUT        MCHP_PINMUX(b, 8, 0x31c, 12, periph)
/* pb8_scom5p3_in */
#define PB8_SCOM5P3_IN         MCHP_PINMUX(b, 8, 0x9c, 23, periph)
/* pb8_scom5p3_out */
#define PB8_SCOM5P3_OUT        MCHP_PINMUX(b, 8, 0x320, 15, periph)
/* pb8_tc0wo0g1_in */
#define PB8_TC0WO0G1_IN        MCHP_PINMUX(b, 8, 0xcc, 18, periph)
/* pb8_tc0wo0g2_in */
#define PB8_TC0WO0G2_IN        MCHP_PINMUX(b, 8, 0xd0, 23, periph)
/* pb8_tc0wo0_out */
#define PB8_TC0WO0_OUT         MCHP_PINMUX(b, 8, 0x324, 24, periph)
/* pb8_tc0wo1g3_in */
#define PB8_TC0WO1G3_IN        MCHP_PINMUX(b, 8, 0xd4, 5, periph)
/* pb8_tc0wo1_out */
#define PB8_TC0WO1_OUT         MCHP_PINMUX(b, 8, 0x31c, 18, periph)
/* pb8_tc1wo0g1_in */
#define PB8_TC1WO0G1_IN        MCHP_PINMUX(b, 8, 0xdc, 18, periph)
/* pb8_tc1wo0_out */
#define PB8_TC1WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 19, periph)
/* pb8_tc1wo1g2_in */
#define PB8_TC1WO1G2_IN        MCHP_PINMUX(b, 8, 0xe4, 23, periph)
/* pb8_tc1wo1_out */
#define PB8_TC1WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 25, periph)
/* pb8_tc2wo0g1_in */
#define PB8_TC2WO0G1_IN        MCHP_PINMUX(b, 8, 0xec, 18, periph)
/* pb8_tc2wo0g3_in */
#define PB8_TC2WO0G3_IN        MCHP_PINMUX(b, 8, 0xf0, 5, periph)
/* pb8_tc2wo0_out */
#define PB8_TC2WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 20, periph)
/* pb8_tc2wo1g2_in */
#define PB8_TC2WO1G2_IN        MCHP_PINMUX(b, 8, 0xf4, 23, periph)
/* pb8_tc2wo1_out */
#define PB8_TC2WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 26, periph)
/* pb8_tc3wo0g1_in */
#define PB8_TC3WO0G1_IN        MCHP_PINMUX(b, 8, 0xfc, 18, periph)
/* pb8_tc3wo0g3_in */
#define PB8_TC3WO0G3_IN        MCHP_PINMUX(b, 8, 0x100, 5, periph)
/* pb8_tc3wo0_out */
#define PB8_TC3WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 21, periph)
/* pb8_tc3wo1g2_in */
#define PB8_TC3WO1G2_IN        MCHP_PINMUX(b, 8, 0x104, 23, periph)
/* pb8_tc3wo1_out */
#define PB8_TC3WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 27, periph)
/* pb8_tc4wo0g1_in */
#define PB8_TC4WO0G1_IN        MCHP_PINMUX(b, 8, 0x10c, 18, periph)
/* pb8_tc4wo0g3_in */
#define PB8_TC4WO0G3_IN        MCHP_PINMUX(b, 8, 0x110, 5, periph)
/* pb8_tc4wo0_out */
#define PB8_TC4WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 22, periph)
/* pb8_tc4wo1g2_in */
#define PB8_TC4WO1G2_IN        MCHP_PINMUX(b, 8, 0x114, 23, periph)
/* pb8_tc4wo1_out */
#define PB8_TC4WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 28, periph)
/* pb8_tc5wo0g1_in */
#define PB8_TC5WO0G1_IN        MCHP_PINMUX(b, 8, 0x11c, 18, periph)
/* pb8_tc5wo0g3_in */
#define PB8_TC5WO0G3_IN        MCHP_PINMUX(b, 8, 0x120, 5, periph)
/* pb8_tc5wo0_out */
#define PB8_TC5WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 23, periph)
/* pb8_tc5wo1g2_in */
#define PB8_TC5WO1G2_IN        MCHP_PINMUX(b, 8, 0x124, 23, periph)
/* pb8_tc5wo1_out */
#define PB8_TC5WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 29, periph)
/* pb8_tc6wo0g1_in */
#define PB8_TC6WO0G1_IN        MCHP_PINMUX(b, 8, 0x12c, 18, periph)
/* pb8_tc6wo0g3_in */
#define PB8_TC6WO0G3_IN        MCHP_PINMUX(b, 8, 0x130, 5, periph)
/* pb8_tc6wo0_out */
#define PB8_TC6WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 24, periph)
/* pb8_tc6wo1g2_in */
#define PB8_TC6WO1G2_IN        MCHP_PINMUX(b, 8, 0x134, 23, periph)
/* pb8_tc6wo1_out */
#define PB8_TC6WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 30, periph)
/* pb8_tc7wo0g1_in */
#define PB8_TC7WO0G1_IN        MCHP_PINMUX(b, 8, 0x13c, 18, periph)
/* pb8_tc7wo0g3_in */
#define PB8_TC7WO0G3_IN        MCHP_PINMUX(b, 8, 0x140, 5, periph)
/* pb8_tc7wo0_out */
#define PB8_TC7WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 25, periph)
/* pb8_tc7wo1g2_in */
#define PB8_TC7WO1G2_IN        MCHP_PINMUX(b, 8, 0x144, 23, periph)
/* pb8_tc7wo1_out */
#define PB8_TC7WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 31, periph)
/* pb8_tc8wo0g1_in */
#define PB8_TC8WO0G1_IN        MCHP_PINMUX(b, 8, 0x14c, 18, periph)
/* pb8_tc8wo0g3_in */
#define PB8_TC8WO0G3_IN        MCHP_PINMUX(b, 8, 0x150, 5, periph)
/* pb8_tc8wo0_out */
#define PB8_TC8WO0_OUT         MCHP_PINMUX(b, 8, 0x31c, 26, periph)
/* pb8_tc8wo1g2_in */
#define PB8_TC8WO1G2_IN        MCHP_PINMUX(b, 8, 0x154, 23, periph)
/* pb8_tc8wo1_out */
#define PB8_TC8WO1_OUT         MCHP_PINMUX(b, 8, 0x320, 32, periph)
/* pb8_tc9wo0g2_in */
#define PB8_TC9WO0G2_IN        MCHP_PINMUX(b, 8, 0x15c, 23, periph)
/* pb8_tc9wo0_out */
#define PB8_TC9WO0_OUT         MCHP_PINMUX(b, 8, 0x320, 33, periph)
/* pb8_tc9wo1g3_in */
#define PB8_TC9WO1G3_IN        MCHP_PINMUX(b, 8, 0x164, 5, periph)
/* pb8_tc9wo1_out */
#define PB8_TC9WO1_OUT         MCHP_PINMUX(b, 8, 0x324, 33, periph)
/* pb8_tcc0wo0_out */
#define PB8_TCC0WO0_OUT        MCHP_PINMUX(b, 8, 0x31c, 13, periph)
/* pb8_tcc0wo1_out */
#define PB8_TCC0WO1_OUT        MCHP_PINMUX(b, 8, 0x320, 17, periph)
/* pb8_tcc0wo2_out */
#define PB8_TCC0WO2_OUT        MCHP_PINMUX(b, 8, 0x324, 17, periph)
/* pb8_tcc0wo3_out */
#define PB8_TCC0WO3_OUT        MCHP_PINMUX(b, 8, 0x320, 19, periph)
/* pb8_tcc0wo4_out */
#define PB8_TCC0WO4_OUT        MCHP_PINMUX(b, 8, 0x31c, 14, periph)
/* pb8_tcc0wo5_out */
#define PB8_TCC0WO5_OUT        MCHP_PINMUX(b, 8, 0x320, 18, periph)
/* pb8_tcc1wo0_out */
#define PB8_TCC1WO0_OUT        MCHP_PINMUX(b, 8, 0x31c, 15, periph)
/* pb8_tcc1wo1_out */
#define PB8_TCC1WO1_OUT        MCHP_PINMUX(b, 8, 0x320, 20, periph)
/* pb8_tcc1wo2_out */
#define PB8_TCC1WO2_OUT        MCHP_PINMUX(b, 8, 0x324, 20, periph)
/* pb8_tcc1wo3_out */
#define PB8_TCC1WO3_OUT        MCHP_PINMUX(b, 8, 0x320, 22, periph)
/* pb8_tcc1wo4_out */
#define PB8_TCC1WO4_OUT        MCHP_PINMUX(b, 8, 0x31c, 16, periph)
/* pb8_tcc1wo5_out */
#define PB8_TCC1WO5_OUT        MCHP_PINMUX(b, 8, 0x320, 21, periph)
/* pb8_tcc2wo0_out */
#define PB8_TCC2WO0_OUT        MCHP_PINMUX(b, 8, 0x31c, 17, periph)
/* pb8_tcc2wo1_out */
#define PB8_TCC2WO1_OUT        MCHP_PINMUX(b, 8, 0x320, 23, periph)
/* pb8_tstbus0_out */
#define PB8_TSTBUS0_OUT        MCHP_PINMUX(b, 8, 0x31c, 32, periph)
/* pb8_tstbus1_out */
#define PB8_TSTBUS1_OUT        MCHP_PINMUX(b, 8, 0x324, 38, periph)
/* pb8_tstbus4_out */
#define PB8_TSTBUS4_OUT        MCHP_PINMUX(b, 8, 0x31c, 33, periph)
/* pb8_tstbus5_out */
#define PB8_TSTBUS5_OUT        MCHP_PINMUX(b, 8, 0x320, 38, periph)
/* pb8_tstbus8_out */
#define PB8_TSTBUS8_OUT        MCHP_PINMUX(b, 8, 0x31c, 34, periph)
/* pb8_tstbus9_out */
#define PB8_TSTBUS9_OUT        MCHP_PINMUX(b, 8, 0x320, 39, periph)
/* pb8_tstbus10_out */
#define PB8_TSTBUS10_OUT       MCHP_PINMUX(b, 8, 0x324, 39, periph)
/* pb9_ac_cmp0_out */
#define PB9_AC_CMP0_OUT        MCHP_PINMUX(b, 9, 0x330, 40, periph)
/* pb9_ac_cmptrdy_out */
#define PB9_AC_CMPTRDY_OUT     MCHP_PINMUX(b, 9, 0x330, 41, periph)
/* pb9_can1rx_in */
#define PB9_CAN1RX_IN          MCHP_PINMUX(b, 9, 0x190, 22, periph)
/* pb9_cclin1_in */
#define PB9_CCLIN1_IN          MCHP_PINMUX(b, 9, 0xb8, 19, periph)
/* pb9_cclin2_in */
#define PB9_CCLIN2_IN          MCHP_PINMUX(b, 9, 0xbc, 22, periph)
/* pb9_cclin4_in */
#define PB9_CCLIN4_IN          MCHP_PINMUX(b, 9, 0xc4, 19, periph)
/* pb9_cclin5_in */
#define PB9_CCLIN5_IN          MCHP_PINMUX(b, 9, 0xc8, 22, periph)
/* pb9_cclo0_out */
#define PB9_CCLO0_OUT          MCHP_PINMUX(b, 9, 0x330, 1, periph)
/* pb9_cclo1_out */
#define PB9_CCLO1_OUT          MCHP_PINMUX(b, 9, 0x32c, 1, periph)
/* pb9_coex_rf_act_out */
#define PB9_COEX_RF_ACT_OUT    MCHP_PINMUX(b, 9, 0x32c, 41, periph)
/* pb9_extint1_in */
#define PB9_EXTINT1_IN         MCHP_PINMUX(b, 9, 0x4, 19, periph)
/* pb9_extint2_in */
#define PB9_EXTINT2_IN         MCHP_PINMUX(b, 9, 0x8, 22, periph)
/* pb9_fectrl0_out */
#define PB9_FECTRL0_OUT        MCHP_PINMUX(b, 9, 0x32c, 40, periph)
/* pb9_fectrl4_out */
#define PB9_FECTRL4_OUT        MCHP_PINMUX(b, 9, 0x330, 42, periph)
/* pb9_qd0_out */
#define PB9_QD0_OUT            MCHP_PINMUX(b, 9, 0x32c, 35, periph)
/* pb9_qd1_out */
#define PB9_QD1_OUT            MCHP_PINMUX(b, 9, 0x330, 35, periph)
/* pb9_qd2_in */
#define PB9_QD2_IN             MCHP_PINMUX(b, 9, 0xa8, 19, periph)
/* pb9_qd2_out */
#define PB9_QD2_OUT            MCHP_PINMUX(b, 9, 0x32c, 37, periph)
/* pb9_qd3_in */
#define PB9_QD3_IN             MCHP_PINMUX(b, 9, 0xac, 22, periph)
/* pb9_qd3_out */
#define PB9_QD3_OUT            MCHP_PINMUX(b, 9, 0x32c, 36, periph)
/* pb9_qeihome0g2_in */
#define PB9_QEIHOME0G2_IN      MCHP_PINMUX(b, 9, 0x170, 19, periph)
/* pb9_qeiindx0g2_in */
#define PB9_QEIINDX0G2_IN      MCHP_PINMUX(b, 9, 0x174, 19, periph)
/* pb9_qeiindx0g3_in */
#define PB9_QEIINDX0G3_IN      MCHP_PINMUX(b, 9, 0x178, 22, periph)
/* pb9_qeiqea0g3_in */
#define PB9_QEIQEA0G3_IN       MCHP_PINMUX(b, 9, 0x17c, 22, periph)
/* pb9_qspics_out */
#define PB9_QSPICS_OUT         MCHP_PINMUX(b, 9, 0x32c, 34, periph)
/* pb9_qspi_sck_out */
#define PB9_QSPI_SCK_OUT       MCHP_PINMUX(b, 9, 0x334, 7, periph)
/* pb9_refi_in */
#define PB9_REFI_IN            MCHP_PINMUX(b, 9, 0xb0, 3, periph)
/* pb9_refo1_out */
#define PB9_REFO1_OUT          MCHP_PINMUX(b, 9, 0x334, 8, periph)
/* pb9_refo2_out */
#define PB9_REFO2_OUT          MCHP_PINMUX(b, 9, 0x334, 9, periph)
/* pb9_refo3_out */
#define PB9_REFO3_OUT          MCHP_PINMUX(b, 9, 0x334, 10, periph)
/* pb9_refo4_out */
#define PB9_REFO4_OUT          MCHP_PINMUX(b, 9, 0x334, 11, periph)
/* pb9_scom0p0_in */
#define PB9_SCOM0P0_IN         MCHP_PINMUX(b, 9, 0x40, 19, periph)
/* pb9_scom0p0_out */
#define PB9_SCOM0P0_OUT        MCHP_PINMUX(b, 9, 0x32c, 2, periph)
/* pb9_scom0p1_in */
#define PB9_SCOM0P1_IN         MCHP_PINMUX(b, 9, 0x44, 3, periph)
/* pb9_scom0p1_out */
#define PB9_SCOM0P1_OUT        MCHP_PINMUX(b, 9, 0x334, 1, periph)
/* pb9_scom0p2_out */
#define PB9_SCOM0P2_OUT        MCHP_PINMUX(b, 9, 0x32c, 4, periph)
/* pb9_scom0p3_out */
#define PB9_SCOM0P3_OUT        MCHP_PINMUX(b, 9, 0x32c, 3, periph)
/* pb9_scom1p0_in */
#define PB9_SCOM1P0_IN         MCHP_PINMUX(b, 9, 0x50, 22, periph)
/* pb9_scom1p0_out */
#define PB9_SCOM1P0_OUT        MCHP_PINMUX(b, 9, 0x330, 5, periph)
/* pb9_scom1p1_in */
#define PB9_SCOM1P1_IN         MCHP_PINMUX(b, 9, 0x54, 3, periph)
/* pb9_scom1p1_out */
#define PB9_SCOM1P1_OUT        MCHP_PINMUX(b, 9, 0x334, 2, periph)
/* pb9_scom1p2_out */
#define PB9_SCOM1P2_OUT        MCHP_PINMUX(b, 9, 0x32c, 6, periph)
/* pb9_scom1p3_in */
#define PB9_SCOM1P3_IN         MCHP_PINMUX(b, 9, 0x5c, 19, periph)
/* pb9_scom1p3_out */
#define PB9_SCOM1P3_OUT        MCHP_PINMUX(b, 9, 0x32c, 5, periph)
/* pb9_scom2p0_in */
#define PB9_SCOM2P0_IN         MCHP_PINMUX(b, 9, 0x60, 19, periph)
/* pb9_scom2p0_out */
#define PB9_SCOM2P0_OUT        MCHP_PINMUX(b, 9, 0x32c, 7, periph)
/* pb9_scom2p1_in */
#define PB9_SCOM2P1_IN         MCHP_PINMUX(b, 9, 0x64, 3, periph)
/* pb9_scom2p1_out */
#define PB9_SCOM2P1_OUT        MCHP_PINMUX(b, 9, 0x334, 3, periph)
/* pb9_scom2p2_out */
#define PB9_SCOM2P2_OUT        MCHP_PINMUX(b, 9, 0x32c, 9, periph)
/* pb9_scom2p3_out */
#define PB9_SCOM2P3_OUT        MCHP_PINMUX(b, 9, 0x32c, 8, periph)
/* pb9_scom3p0_in */
#define PB9_SCOM3P0_IN         MCHP_PINMUX(b, 9, 0x70, 22, periph)
/* pb9_scom3p0_out */
#define PB9_SCOM3P0_OUT        MCHP_PINMUX(b, 9, 0x330, 10, periph)
/* pb9_scom3p1_in */
#define PB9_SCOM3P1_IN         MCHP_PINMUX(b, 9, 0x74, 3, periph)
/* pb9_scom3p1_out */
#define PB9_SCOM3P1_OUT        MCHP_PINMUX(b, 9, 0x334, 4, periph)
/* pb9_scom3p2_out */
#define PB9_SCOM3P2_OUT        MCHP_PINMUX(b, 9, 0x32c, 11, periph)
/* pb9_scom3p3_in */
#define PB9_SCOM3P3_IN         MCHP_PINMUX(b, 9, 0x7c, 19, periph)
/* pb9_scom3p3_out */
#define PB9_SCOM3P3_OUT        MCHP_PINMUX(b, 9, 0x32c, 10, periph)
/* pb9_scom4p0_in */
#define PB9_SCOM4P0_IN         MCHP_PINMUX(b, 9, 0x80, 19, periph)
/* pb9_scom4p0_out */
#define PB9_SCOM4P0_OUT        MCHP_PINMUX(b, 9, 0x32c, 12, periph)
/* pb9_scom4p1_in */
#define PB9_SCOM4P1_IN         MCHP_PINMUX(b, 9, 0x84, 3, periph)
/* pb9_scom4p1_out */
#define PB9_SCOM4P1_OUT        MCHP_PINMUX(b, 9, 0x334, 5, periph)
/* pb9_scom4p2_out */
#define PB9_SCOM4P2_OUT        MCHP_PINMUX(b, 9, 0x32c, 14, periph)
/* pb9_scom4p3_out */
#define PB9_SCOM4P3_OUT        MCHP_PINMUX(b, 9, 0x32c, 13, periph)
/* pb9_scom5p0_in */
#define PB9_SCOM5P0_IN         MCHP_PINMUX(b, 9, 0x90, 22, periph)
/* pb9_scom5p0_out */
#define PB9_SCOM5P0_OUT        MCHP_PINMUX(b, 9, 0x330, 15, periph)
/* pb9_scom5p1_in */
#define PB9_SCOM5P1_IN         MCHP_PINMUX(b, 9, 0x94, 3, periph)
/* pb9_scom5p1_out */
#define PB9_SCOM5P1_OUT        MCHP_PINMUX(b, 9, 0x334, 6, periph)
/* pb9_scom5p2_out */
#define PB9_SCOM5P2_OUT        MCHP_PINMUX(b, 9, 0x32c, 16, periph)
/* pb9_scom5p3_in */
#define PB9_SCOM5P3_IN         MCHP_PINMUX(b, 9, 0x9c, 19, periph)
/* pb9_scom5p3_out */
#define PB9_SCOM5P3_OUT        MCHP_PINMUX(b, 9, 0x32c, 15, periph)
/* pb9_tc0wo0g2_in */
#define PB9_TC0WO0G2_IN        MCHP_PINMUX(b, 9, 0xd0, 19, periph)
/* pb9_tc0wo0_out */
#define PB9_TC0WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 24, periph)
/* pb9_tc0wo1g3_in */
#define PB9_TC0WO1G3_IN        MCHP_PINMUX(b, 9, 0xd4, 22, periph)
/* pb9_tc0wo1_out */
#define PB9_TC0WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 24, periph)
/* pb9_tc1wo0_out */
#define PB9_TC1WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 25, periph)
/* pb9_tc1wo1g2_in */
#define PB9_TC1WO1G2_IN        MCHP_PINMUX(b, 9, 0xe4, 19, periph)
/* pb9_tc1wo1_out */
#define PB9_TC1WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 25, periph)
/* pb9_tc2wo0g3_in */
#define PB9_TC2WO0G3_IN        MCHP_PINMUX(b, 9, 0xf0, 22, periph)
/* pb9_tc2wo0_out */
#define PB9_TC2WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 26, periph)
/* pb9_tc2wo1g2_in */
#define PB9_TC2WO1G2_IN        MCHP_PINMUX(b, 9, 0xf4, 19, periph)
/* pb9_tc2wo1_out */
#define PB9_TC2WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 26, periph)
/* pb9_tc3wo0g3_in */
#define PB9_TC3WO0G3_IN        MCHP_PINMUX(b, 9, 0x100, 22, periph)
/* pb9_tc3wo0_out */
#define PB9_TC3WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 27, periph)
/* pb9_tc3wo1g2_in */
#define PB9_TC3WO1G2_IN        MCHP_PINMUX(b, 9, 0x104, 19, periph)
/* pb9_tc3wo1_out */
#define PB9_TC3WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 27, periph)
/* pb9_tc4wo0g3_in */
#define PB9_TC4WO0G3_IN        MCHP_PINMUX(b, 9, 0x110, 22, periph)
/* pb9_tc4wo0_out */
#define PB9_TC4WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 28, periph)
/* pb9_tc4wo1g2_in */
#define PB9_TC4WO1G2_IN        MCHP_PINMUX(b, 9, 0x114, 19, periph)
/* pb9_tc4wo1_out */
#define PB9_TC4WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 28, periph)
/* pb9_tc5wo0g3_in */
#define PB9_TC5WO0G3_IN        MCHP_PINMUX(b, 9, 0x120, 22, periph)
/* pb9_tc5wo0_out */
#define PB9_TC5WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 29, periph)
/* pb9_tc5wo1g2_in */
#define PB9_TC5WO1G2_IN        MCHP_PINMUX(b, 9, 0x124, 19, periph)
/* pb9_tc5wo1_out */
#define PB9_TC5WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 29, periph)
/* pb9_tc6wo0g3_in */
#define PB9_TC6WO0G3_IN        MCHP_PINMUX(b, 9, 0x130, 22, periph)
/* pb9_tc6wo0_out */
#define PB9_TC6WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 30, periph)
/* pb9_tc6wo1g2_in */
#define PB9_TC6WO1G2_IN        MCHP_PINMUX(b, 9, 0x134, 19, periph)
/* pb9_tc6wo1_out */
#define PB9_TC6WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 30, periph)
/* pb9_tc7wo0g3_in */
#define PB9_TC7WO0G3_IN        MCHP_PINMUX(b, 9, 0x140, 22, periph)
/* pb9_tc7wo0_out */
#define PB9_TC7WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 31, periph)
/* pb9_tc7wo1g2_in */
#define PB9_TC7WO1G2_IN        MCHP_PINMUX(b, 9, 0x144, 19, periph)
/* pb9_tc7wo1_out */
#define PB9_TC7WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 31, periph)
/* pb9_tc8wo0g3_in */
#define PB9_TC8WO0G3_IN        MCHP_PINMUX(b, 9, 0x150, 22, periph)
/* pb9_tc8wo0_out */
#define PB9_TC8WO0_OUT         MCHP_PINMUX(b, 9, 0x330, 32, periph)
/* pb9_tc8wo1g2_in */
#define PB9_TC8WO1G2_IN        MCHP_PINMUX(b, 9, 0x154, 19, periph)
/* pb9_tc8wo1_out */
#define PB9_TC8WO1_OUT         MCHP_PINMUX(b, 9, 0x32c, 32, periph)
/* pb9_tc9wo0g2_in */
#define PB9_TC9WO0G2_IN        MCHP_PINMUX(b, 9, 0x15c, 19, periph)
/* pb9_tc9wo0_out */
#define PB9_TC9WO0_OUT         MCHP_PINMUX(b, 9, 0x32c, 33, periph)
/* pb9_tc9wo1g3_in */
#define PB9_TC9WO1G3_IN        MCHP_PINMUX(b, 9, 0x164, 22, periph)
/* pb9_tc9wo1_out */
#define PB9_TC9WO1_OUT         MCHP_PINMUX(b, 9, 0x330, 33, periph)
/* pb9_tcc0wo0_out */
#define PB9_TCC0WO0_OUT        MCHP_PINMUX(b, 9, 0x330, 18, periph)
/* pb9_tcc0wo1_out */
#define PB9_TCC0WO1_OUT        MCHP_PINMUX(b, 9, 0x32c, 17, periph)
/* pb9_tcc0wo2_out */
#define PB9_TCC0WO2_OUT        MCHP_PINMUX(b, 9, 0x330, 17, periph)
/* pb9_tcc0wo3_out */
#define PB9_TCC0WO3_OUT        MCHP_PINMUX(b, 9, 0x32c, 19, periph)
/* pb9_tcc0wo4_out */
#define PB9_TCC0WO4_OUT        MCHP_PINMUX(b, 9, 0x330, 19, periph)
/* pb9_tcc0wo5_out */
#define PB9_TCC0WO5_OUT        MCHP_PINMUX(b, 9, 0x32c, 18, periph)
/* pb9_tcc1wo0_out */
#define PB9_TCC1WO0_OUT        MCHP_PINMUX(b, 9, 0x330, 21, periph)
/* pb9_tcc1wo1_out */
#define PB9_TCC1WO1_OUT        MCHP_PINMUX(b, 9, 0x32c, 20, periph)
/* pb9_tcc1wo2_out */
#define PB9_TCC1WO2_OUT        MCHP_PINMUX(b, 9, 0x330, 20, periph)
/* pb9_tcc1wo3_out */
#define PB9_TCC1WO3_OUT        MCHP_PINMUX(b, 9, 0x32c, 22, periph)
/* pb9_tcc1wo4_out */
#define PB9_TCC1WO4_OUT        MCHP_PINMUX(b, 9, 0x330, 22, periph)
/* pb9_tcc1wo5_out */
#define PB9_TCC1WO5_OUT        MCHP_PINMUX(b, 9, 0x32c, 21, periph)
/* pb9_tcc2wo0_out */
#define PB9_TCC2WO0_OUT        MCHP_PINMUX(b, 9, 0x330, 23, periph)
/* pb9_tcc2wo1_out */
#define PB9_TCC2WO1_OUT        MCHP_PINMUX(b, 9, 0x32c, 23, periph)
/* pb9_tstbus1_out */
#define PB9_TSTBUS1_OUT        MCHP_PINMUX(b, 9, 0x330, 38, periph)
/* pb9_tstbus5_out */
#define PB9_TSTBUS5_OUT        MCHP_PINMUX(b, 9, 0x32c, 38, periph)
/* pb9_tstbus9_out */
#define PB9_TSTBUS9_OUT        MCHP_PINMUX(b, 9, 0x32c, 39, periph)
/* pb9_tstbus10_out */
#define PB9_TSTBUS10_OUT       MCHP_PINMUX(b, 9, 0x330, 39, periph)
/* pb10_ac_cmp0_out */
#define PB10_AC_CMP0_OUT       MCHP_PINMUX(b, 10, 0x338, 40, periph)
/* pb10_ac_cmp1_out */
#define PB10_AC_CMP1_OUT       MCHP_PINMUX(b, 10, 0x33c, 36, periph)
/* pb10_ac_cmptout_out */
#define PB10_AC_CMPTOUT_OUT    MCHP_PINMUX(b, 10, 0x33c, 37, periph)
/* pb10_ac_cmptrdy_out */
#define PB10_AC_CMPTRDY_OUT    MCHP_PINMUX(b, 10, 0x338, 41, periph)
/* pb10_can1rx_in */
#define PB10_CAN1RX_IN         MCHP_PINMUX(b, 10, 0x190, 18, periph)
/* pb10_can1_tx_out */
#define PB10_CAN1_TX_OUT       MCHP_PINMUX(b, 10, 0x33c, 38, periph)
/* pb10_cclin2_in */
#define PB10_CCLIN2_IN         MCHP_PINMUX(b, 10, 0xbc, 18, periph)
/* pb10_cclin5_in */
#define PB10_CCLIN5_IN         MCHP_PINMUX(b, 10, 0xc8, 18, periph)
/* pb10_cclo0_out */
#define PB10_CCLO0_OUT         MCHP_PINMUX(b, 10, 0x338, 1, periph)
/* pb10_cclo1_out */
#define PB10_CCLO1_OUT         MCHP_PINMUX(b, 10, 0x33c, 1, periph)
/* pb10_coexwlanact_in */
#define PB10_COEXWLANACT_IN    MCHP_PINMUX(b, 10, 0x194, 22, periph)
/* pb10_extint2_in */
#define PB10_EXTINT2_IN        MCHP_PINMUX(b, 10, 0x8, 18, periph)
/* pb10_extint3_in */
#define PB10_EXTINT3_IN        MCHP_PINMUX(b, 10, 0xc, 22, periph)
/* pb10_fectrl3_out */
#define PB10_FECTRL3_OUT       MCHP_PINMUX(b, 10, 0x33c, 39, periph)
/* pb10_fectrl4_out */
#define PB10_FECTRL4_OUT       MCHP_PINMUX(b, 10, 0x338, 42, periph)
/* pb10_fectrl5_out */
#define PB10_FECTRL5_OUT       MCHP_PINMUX(b, 10, 0x33c, 40, periph)
/* pb10_gmac_tsucomp_out */
#define PB10_GMAC_TSUCOMP_OUT  MCHP_PINMUX(b, 10, 0x340, 14, periph)
/* pb10_nmi_in */
#define PB10_NMI_IN            MCHP_PINMUX(b, 10, 0x3c, 22, periph)
/* pb10_qd0_in */
#define PB10_QD0_IN            MCHP_PINMUX(b, 10, 0xa0, 22, periph)
/* pb10_qd0_out */
#define PB10_QD0_OUT           MCHP_PINMUX(b, 10, 0x338, 36, periph)
/* pb10_qd1_out */
#define PB10_QD1_OUT           MCHP_PINMUX(b, 10, 0x338, 35, periph)
/* pb10_qd2_out */
#define PB10_QD2_OUT           MCHP_PINMUX(b, 10, 0x33c, 31, periph)
/* pb10_qd3_in */
#define PB10_QD3_IN            MCHP_PINMUX(b, 10, 0xac, 18, periph)
/* pb10_qd3_out */
#define PB10_QD3_OUT           MCHP_PINMUX(b, 10, 0x338, 37, periph)
/* pb10_qeiccmp0_out */
#define PB10_QEICCMP0_OUT      MCHP_PINMUX(b, 10, 0x340, 13, periph)
/* pb10_qeiindx0g3_in */
#define PB10_QEIINDX0G3_IN     MCHP_PINMUX(b, 10, 0x178, 18, periph)
/* pb10_qeiqea0g3_in */
#define PB10_QEIQEA0G3_IN      MCHP_PINMUX(b, 10, 0x17c, 18, periph)
/* pb10_qeiqea0g4_in */
#define PB10_QEIQEA0G4_IN      MCHP_PINMUX(b, 10, 0x180, 22, periph)
/* pb10_qeiqeb0g4_in */
#define PB10_QEIQEB0G4_IN      MCHP_PINMUX(b, 10, 0x184, 22, periph)
/* pb10_qeiqeb0g5_in */
#define PB10_QEIQEB0G5_IN      MCHP_PINMUX(b, 10, 0x188, 4, periph)
/* pb10_qspics_out */
#define PB10_QSPICS_OUT        MCHP_PINMUX(b, 10, 0x338, 34, periph)
/* pb10_scom0p0_out */
#define PB10_SCOM0P0_OUT       MCHP_PINMUX(b, 10, 0x338, 2, periph)
/* pb10_scom0p2_in */
#define PB10_SCOM0P2_IN        MCHP_PINMUX(b, 10, 0x48, 22, periph)
/* pb10_scom0p2_out */
#define PB10_SCOM0P2_OUT       MCHP_PINMUX(b, 10, 0x33c, 2, periph)
/* pb10_scom0p3_out */
#define PB10_SCOM0P3_OUT       MCHP_PINMUX(b, 10, 0x338, 3, periph)
/* pb10_scom1p0_in */
#define PB10_SCOM1P0_IN        MCHP_PINMUX(b, 10, 0x50, 18, periph)
/* pb10_scom1p0_out */
#define PB10_SCOM1P0_OUT       MCHP_PINMUX(b, 10, 0x338, 5, periph)
/* pb10_scom1p2_out */
#define PB10_SCOM1P2_OUT       MCHP_PINMUX(b, 10, 0x338, 4, periph)
/* pb10_scom1p3_out */
#define PB10_SCOM1P3_OUT       MCHP_PINMUX(b, 10, 0x338, 6, periph)
/* pb10_scom2p0_out */
#define PB10_SCOM2P0_OUT       MCHP_PINMUX(b, 10, 0x338, 7, periph)
/* pb10_scom2p2_in */
#define PB10_SCOM2P2_IN        MCHP_PINMUX(b, 10, 0x68, 22, periph)
/* pb10_scom2p2_out */
#define PB10_SCOM2P2_OUT       MCHP_PINMUX(b, 10, 0x33c, 6, periph)
/* pb10_scom2p3_out */
#define PB10_SCOM2P3_OUT       MCHP_PINMUX(b, 10, 0x338, 8, periph)
/* pb10_scom3p0_in */
#define PB10_SCOM3P0_IN        MCHP_PINMUX(b, 10, 0x70, 18, periph)
/* pb10_scom3p0_out */
#define PB10_SCOM3P0_OUT       MCHP_PINMUX(b, 10, 0x338, 10, periph)
/* pb10_scom3p2_out */
#define PB10_SCOM3P2_OUT       MCHP_PINMUX(b, 10, 0x338, 9, periph)
/* pb10_scom3p3_out */
#define PB10_SCOM3P3_OUT       MCHP_PINMUX(b, 10, 0x338, 11, periph)
/* pb10_scom4p0_out */
#define PB10_SCOM4P0_OUT       MCHP_PINMUX(b, 10, 0x338, 12, periph)
/* pb10_scom4p2_in */
#define PB10_SCOM4P2_IN        MCHP_PINMUX(b, 10, 0x88, 22, periph)
/* pb10_scom4p2_out */
#define PB10_SCOM4P2_OUT       MCHP_PINMUX(b, 10, 0x33c, 10, periph)
/* pb10_scom4p3_out */
#define PB10_SCOM4P3_OUT       MCHP_PINMUX(b, 10, 0x338, 13, periph)
/* pb10_scom5p0_in */
#define PB10_SCOM5P0_IN        MCHP_PINMUX(b, 10, 0x90, 18, periph)
/* pb10_scom5p0_out */
#define PB10_SCOM5P0_OUT       MCHP_PINMUX(b, 10, 0x338, 15, periph)
/* pb10_scom5p2_out */
#define PB10_SCOM5P2_OUT       MCHP_PINMUX(b, 10, 0x338, 14, periph)
/* pb10_scom5p3_out */
#define PB10_SCOM5P3_OUT       MCHP_PINMUX(b, 10, 0x338, 16, periph)
/* pb10_tc0wo0_out */
#define PB10_TC0WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 24, periph)
/* pb10_tc0wo1g3_in */
#define PB10_TC0WO1G3_IN       MCHP_PINMUX(b, 10, 0xd4, 18, periph)
/* pb10_tc0wo1g4_in */
#define PB10_TC0WO1G4_IN       MCHP_PINMUX(b, 10, 0xd8, 22, periph)
/* pb10_tc1wo0_out */
#define PB10_TC1WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 25, periph)
/* pb10_tc1wo1_out */
#define PB10_TC1WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 22, periph)
/* pb10_tc2wo0g3_in */
#define PB10_TC2WO0G3_IN       MCHP_PINMUX(b, 10, 0xf0, 18, periph)
/* pb10_tc2wo0_out */
#define PB10_TC2WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 26, periph)
/* pb10_tc2wo1g4_in */
#define PB10_TC2WO1G4_IN       MCHP_PINMUX(b, 10, 0xf8, 22, periph)
/* pb10_tc2wo1_out */
#define PB10_TC2WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 23, periph)
/* pb10_tc3wo0g3_in */
#define PB10_TC3WO0G3_IN       MCHP_PINMUX(b, 10, 0x100, 18, periph)
/* pb10_tc3wo0_out */
#define PB10_TC3WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 27, periph)
/* pb10_tc3wo1g4_in */
#define PB10_TC3WO1G4_IN       MCHP_PINMUX(b, 10, 0x108, 22, periph)
/* pb10_tc3wo1_out */
#define PB10_TC3WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 24, periph)
/* pb10_tc4wo0g3_in */
#define PB10_TC4WO0G3_IN       MCHP_PINMUX(b, 10, 0x110, 18, periph)
/* pb10_tc4wo0_out */
#define PB10_TC4WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 28, periph)
/* pb10_tc4wo1g4_in */
#define PB10_TC4WO1G4_IN       MCHP_PINMUX(b, 10, 0x118, 22, periph)
/* pb10_tc4wo1_out */
#define PB10_TC4WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 25, periph)
/* pb10_tc5wo0g3_in */
#define PB10_TC5WO0G3_IN       MCHP_PINMUX(b, 10, 0x120, 18, periph)
/* pb10_tc5wo0_out */
#define PB10_TC5WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 29, periph)
/* pb10_tc5wo1g4_in */
#define PB10_TC5WO1G4_IN       MCHP_PINMUX(b, 10, 0x128, 22, periph)
/* pb10_tc5wo1_out */
#define PB10_TC5WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 26, periph)
/* pb10_tc6wo0g3_in */
#define PB10_TC6WO0G3_IN       MCHP_PINMUX(b, 10, 0x130, 18, periph)
/* pb10_tc6wo0_out */
#define PB10_TC6WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 30, periph)
/* pb10_tc6wo1g4_in */
#define PB10_TC6WO1G4_IN       MCHP_PINMUX(b, 10, 0x138, 22, periph)
/* pb10_tc6wo1_out */
#define PB10_TC6WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 27, periph)
/* pb10_tc7wo0g3_in */
#define PB10_TC7WO0G3_IN       MCHP_PINMUX(b, 10, 0x140, 18, periph)
/* pb10_tc7wo0_out */
#define PB10_TC7WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 31, periph)
/* pb10_tc7wo1g4_in */
#define PB10_TC7WO1G4_IN       MCHP_PINMUX(b, 10, 0x148, 22, periph)
/* pb10_tc7wo1_out */
#define PB10_TC7WO1_OUT        MCHP_PINMUX(b, 10, 0x33c, 28, periph)
/* pb10_tc8wo0g3_in */
#define PB10_TC8WO0G3_IN       MCHP_PINMUX(b, 10, 0x150, 18, periph)
/* pb10_tc8wo0_out */
#define PB10_TC8WO0_OUT        MCHP_PINMUX(b, 10, 0x338, 32, periph)
/* pb10_tc8wo1g5_in */
#define PB10_TC8WO1G5_IN       MCHP_PINMUX(b, 10, 0x158, 4, periph)
/* pb10_tc8wo1_out */
#define PB10_TC8WO1_OUT        MCHP_PINMUX(b, 10, 0x340, 10, periph)
/* pb10_tc9wo0g4_in */
#define PB10_TC9WO0G4_IN       MCHP_PINMUX(b, 10, 0x160, 22, periph)
/* pb10_tc9wo0_out */
#define PB10_TC9WO0_OUT        MCHP_PINMUX(b, 10, 0x33c, 29, periph)
/* pb10_tc9wo1g3_in */
#define PB10_TC9WO1G3_IN       MCHP_PINMUX(b, 10, 0x164, 18, periph)
/* pb10_tc9wo1g5_in */
#define PB10_TC9WO1G5_IN       MCHP_PINMUX(b, 10, 0x168, 4, periph)
/* pb10_tc9wo1_out */
#define PB10_TC9WO1_OUT        MCHP_PINMUX(b, 10, 0x338, 33, periph)
/* pb10_tcc0wo0_out */
#define PB10_TCC0WO0_OUT       MCHP_PINMUX(b, 10, 0x338, 18, periph)
/* pb10_tcc0wo1_out */
#define PB10_TCC0WO1_OUT       MCHP_PINMUX(b, 10, 0x33c, 15, periph)
/* pb10_tcc0wo2_out */
#define PB10_TCC0WO2_OUT       MCHP_PINMUX(b, 10, 0x338, 17, periph)
/* pb10_tcc0wo3_out */
#define PB10_TCC0WO3_OUT       MCHP_PINMUX(b, 10, 0x33c, 14, periph)
/* pb10_tcc0wo4_out */
#define PB10_TCC0WO4_OUT       MCHP_PINMUX(b, 10, 0x338, 19, periph)
/* pb10_tcc0wo5_out */
#define PB10_TCC0WO5_OUT       MCHP_PINMUX(b, 10, 0x33c, 16, periph)
/* pb10_tcc1wo0_out */
#define PB10_TCC1WO0_OUT       MCHP_PINMUX(b, 10, 0x338, 21, periph)
/* pb10_tcc1wo1_out */
#define PB10_TCC1WO1_OUT       MCHP_PINMUX(b, 10, 0x33c, 18, periph)
/* pb10_tcc1wo2_out */
#define PB10_TCC1WO2_OUT       MCHP_PINMUX(b, 10, 0x338, 20, periph)
/* pb10_tcc1wo3_out */
#define PB10_TCC1WO3_OUT       MCHP_PINMUX(b, 10, 0x33c, 17, periph)
/* pb10_tcc1wo4_out */
#define PB10_TCC1WO4_OUT       MCHP_PINMUX(b, 10, 0x338, 22, periph)
/* pb10_tcc1wo5_out */
#define PB10_TCC1WO5_OUT       MCHP_PINMUX(b, 10, 0x33c, 19, periph)
/* pb10_tcc2wo0_out */
#define PB10_TCC2WO0_OUT       MCHP_PINMUX(b, 10, 0x338, 23, periph)
/* pb10_tcc2wo1_out */
#define PB10_TCC2WO1_OUT       MCHP_PINMUX(b, 10, 0x33c, 20, periph)
/* pb10_tstbus1_out */
#define PB10_TSTBUS1_OUT       MCHP_PINMUX(b, 10, 0x338, 38, periph)
/* pb10_tstbus2_out */
#define PB10_TSTBUS2_OUT       MCHP_PINMUX(b, 10, 0x33c, 34, periph)
/* pb10_tstbus3_out */
#define PB10_TSTBUS3_OUT       MCHP_PINMUX(b, 10, 0x340, 15, periph)
/* pb10_tstbus6_out */
#define PB10_TSTBUS6_OUT       MCHP_PINMUX(b, 10, 0x33c, 35, periph)
/* pb10_tstbus7_out */
#define PB10_TSTBUS7_OUT       MCHP_PINMUX(b, 10, 0x340, 16, periph)
/* pb10_tstbus10_out */
#define PB10_TSTBUS10_OUT      MCHP_PINMUX(b, 10, 0x338, 39, periph)
/* pb10_tstbus11_out */
#define PB10_TSTBUS11_OUT      MCHP_PINMUX(b, 10, 0x340, 17, periph)
/* pb11_accmpten_in */
#define PB11_ACCMPTEN_IN       MCHP_PINMUX(b, 11, 0x18c, 6, periph)
/* pb11_ac_cmp1_out */
#define PB11_AC_CMP1_OUT       MCHP_PINMUX(b, 11, 0x348, 36, periph)
/* pb11_ac_cmptout_out */
#define PB11_AC_CMPTOUT_OUT    MCHP_PINMUX(b, 11, 0x348, 37, periph)
/* pb11_can1_tx_out */
#define PB11_CAN1_TX_OUT       MCHP_PINMUX(b, 11, 0x348, 38, periph)
/* pb11_cclin0_in */
#define PB11_CCLIN0_IN         MCHP_PINMUX(b, 11, 0xb4, 6, periph)
/* pb11_cclin3_in */
#define PB11_CCLIN3_IN         MCHP_PINMUX(b, 11, 0xc0, 6, periph)
/* pb11_cclo1_out */
#define PB11_CCLO1_OUT         MCHP_PINMUX(b, 11, 0x348, 1, periph)
/* pb11_coexwlanact_in */
#define PB11_COEXWLANACT_IN    MCHP_PINMUX(b, 11, 0x194, 16, periph)
/* pb11_coex_bt_state_out */
#define PB11_COEX_BT_STATE_OUT MCHP_PINMUX(b, 11, 0x344, 37, periph)
/* pb11_extint0_in */
#define PB11_EXTINT0_IN        MCHP_PINMUX(b, 11, 0x0, 6, periph)
/* pb11_extint3_in */
#define PB11_EXTINT3_IN        MCHP_PINMUX(b, 11, 0xc, 16, periph)
/* pb11_fectrl1_out */
#define PB11_FECTRL1_OUT       MCHP_PINMUX(b, 11, 0x344, 35, periph)
/* pb11_fectrl2_out */
#define PB11_FECTRL2_OUT       MCHP_PINMUX(b, 11, 0x344, 36, periph)
/* pb11_fectrl3_out */
#define PB11_FECTRL3_OUT       MCHP_PINMUX(b, 11, 0x348, 39, periph)
/* pb11_fectrl5_out */
#define PB11_FECTRL5_OUT       MCHP_PINMUX(b, 11, 0x348, 40, periph)
/* pb11_nmi_in */
#define PB11_NMI_IN            MCHP_PINMUX(b, 11, 0x3c, 16, periph)
/* pb11_qd0_in */
#define PB11_QD0_IN            MCHP_PINMUX(b, 11, 0xa0, 16, periph)
/* pb11_qd0_out */
#define PB11_QD0_OUT           MCHP_PINMUX(b, 11, 0x348, 33, periph)
/* pb11_qd1_in */
#define PB11_QD1_IN            MCHP_PINMUX(b, 11, 0xa4, 6, periph)
/* pb11_qd1_out */
#define PB11_QD1_OUT           MCHP_PINMUX(b, 11, 0x344, 30, periph)
/* pb11_qd2_out */
#define PB11_QD2_OUT           MCHP_PINMUX(b, 11, 0x344, 29, periph)
/* pb11_qd3_out */
#define PB11_QD3_OUT           MCHP_PINMUX(b, 11, 0x344, 28, periph)
/* pb11_qeiccmp0_out */
#define PB11_QEICCMP0_OUT      MCHP_PINMUX(b, 11, 0x344, 31, periph)
/* pb11_qeihome0g1_in */
#define PB11_QEIHOME0G1_IN     MCHP_PINMUX(b, 11, 0x16c, 6, periph)
/* pb11_qeiqea0g4_in */
#define PB11_QEIQEA0G4_IN      MCHP_PINMUX(b, 11, 0x180, 16, periph)
/* pb11_qeiqeb0g4_in */
#define PB11_QEIQEB0G4_IN      MCHP_PINMUX(b, 11, 0x184, 16, periph)
/* pb11_qspics_out */
#define PB11_QSPICS_OUT        MCHP_PINMUX(b, 11, 0x344, 27, periph)
/* pb11_scom0p0_out */
#define PB11_SCOM0P0_OUT       MCHP_PINMUX(b, 11, 0x348, 3, periph)
/* pb11_scom0p2_in */
#define PB11_SCOM0P2_IN        MCHP_PINMUX(b, 11, 0x48, 16, periph)
/* pb11_scom0p2_out */
#define PB11_SCOM0P2_OUT       MCHP_PINMUX(b, 11, 0x344, 2, periph)
/* pb11_scom0p3_in */
#define PB11_SCOM0P3_IN        MCHP_PINMUX(b, 11, 0x4c, 6, periph)
/* pb11_scom0p3_out */
#define PB11_SCOM0P3_OUT       MCHP_PINMUX(b, 11, 0x344, 1, periph)
/* pb11_scom1p0_out */
#define PB11_SCOM1P0_OUT       MCHP_PINMUX(b, 11, 0x344, 3, periph)
/* pb11_scom1p2_in */
#define PB11_SCOM1P2_IN        MCHP_PINMUX(b, 11, 0x58, 6, periph)
/* pb11_scom1p2_out */
#define PB11_SCOM1P2_OUT       MCHP_PINMUX(b, 11, 0x344, 4, periph)
/* pb11_scom1p3_out */
#define PB11_SCOM1P3_OUT       MCHP_PINMUX(b, 11, 0x348, 4, periph)
/* pb11_scom2p0_out */
#define PB11_SCOM2P0_OUT       MCHP_PINMUX(b, 11, 0x348, 7, periph)
/* pb11_scom2p2_in */
#define PB11_SCOM2P2_IN        MCHP_PINMUX(b, 11, 0x68, 16, periph)
/* pb11_scom2p2_out */
#define PB11_SCOM2P2_OUT       MCHP_PINMUX(b, 11, 0x344, 6, periph)
/* pb11_scom2p3_in */
#define PB11_SCOM2P3_IN        MCHP_PINMUX(b, 11, 0x6c, 6, periph)
/* pb11_scom2p3_out */
#define PB11_SCOM2P3_OUT       MCHP_PINMUX(b, 11, 0x344, 5, periph)
/* pb11_scom3p0_out */
#define PB11_SCOM3P0_OUT       MCHP_PINMUX(b, 11, 0x344, 7, periph)
/* pb11_scom3p2_in */
#define PB11_SCOM3P2_IN        MCHP_PINMUX(b, 11, 0x78, 6, periph)
/* pb11_scom3p2_out */
#define PB11_SCOM3P2_OUT       MCHP_PINMUX(b, 11, 0x344, 8, periph)
/* pb11_scom3p3_out */
#define PB11_SCOM3P3_OUT       MCHP_PINMUX(b, 11, 0x348, 8, periph)
/* pb11_scom4p0_out */
#define PB11_SCOM4P0_OUT       MCHP_PINMUX(b, 11, 0x348, 11, periph)
/* pb11_scom4p2_in */
#define PB11_SCOM4P2_IN        MCHP_PINMUX(b, 11, 0x88, 16, periph)
/* pb11_scom4p2_out */
#define PB11_SCOM4P2_OUT       MCHP_PINMUX(b, 11, 0x344, 10, periph)
/* pb11_scom4p3_in */
#define PB11_SCOM4P3_IN        MCHP_PINMUX(b, 11, 0x8c, 6, periph)
/* pb11_scom4p3_out */
#define PB11_SCOM4P3_OUT       MCHP_PINMUX(b, 11, 0x344, 9, periph)
/* pb11_scom5p0_out */
#define PB11_SCOM5P0_OUT       MCHP_PINMUX(b, 11, 0x344, 11, periph)
/* pb11_scom5p2_in */
#define PB11_SCOM5P2_IN        MCHP_PINMUX(b, 11, 0x98, 6, periph)
/* pb11_scom5p2_out */
#define PB11_SCOM5P2_OUT       MCHP_PINMUX(b, 11, 0x344, 12, periph)
/* pb11_scom5p3_out */
#define PB11_SCOM5P3_OUT       MCHP_PINMUX(b, 11, 0x348, 12, periph)
/* pb11_tc0wo0g1_in */
#define PB11_TC0WO0G1_IN       MCHP_PINMUX(b, 11, 0xcc, 6, periph)
/* pb11_tc0wo0_out */
#define PB11_TC0WO0_OUT        MCHP_PINMUX(b, 11, 0x348, 21, periph)
/* pb11_tc0wo1g4_in */
#define PB11_TC0WO1G4_IN       MCHP_PINMUX(b, 11, 0xd8, 16, periph)
/* pb11_tc0wo1_out */
#define PB11_TC0WO1_OUT        MCHP_PINMUX(b, 11, 0x344, 18, periph)
/* pb11_tc1wo0g1_in */
#define PB11_TC1WO0G1_IN       MCHP_PINMUX(b, 11, 0xdc, 6, periph)
/* pb11_tc1wo0_out */
#define PB11_TC1WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 19, periph)
/* pb11_tc1wo1_out */
#define PB11_TC1WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 22, periph)
/* pb11_tc2wo0g1_in */
#define PB11_TC2WO0G1_IN       MCHP_PINMUX(b, 11, 0xec, 6, periph)
/* pb11_tc2wo0_out */
#define PB11_TC2WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 20, periph)
/* pb11_tc2wo1g4_in */
#define PB11_TC2WO1G4_IN       MCHP_PINMUX(b, 11, 0xf8, 16, periph)
/* pb11_tc2wo1_out */
#define PB11_TC2WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 23, periph)
/* pb11_tc3wo0g1_in */
#define PB11_TC3WO0G1_IN       MCHP_PINMUX(b, 11, 0xfc, 6, periph)
/* pb11_tc3wo0_out */
#define PB11_TC3WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 21, periph)
/* pb11_tc3wo1g4_in */
#define PB11_TC3WO1G4_IN       MCHP_PINMUX(b, 11, 0x108, 16, periph)
/* pb11_tc3wo1_out */
#define PB11_TC3WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 24, periph)
/* pb11_tc4wo0g1_in */
#define PB11_TC4WO0G1_IN       MCHP_PINMUX(b, 11, 0x10c, 6, periph)
/* pb11_tc4wo0_out */
#define PB11_TC4WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 22, periph)
/* pb11_tc4wo1g4_in */
#define PB11_TC4WO1G4_IN       MCHP_PINMUX(b, 11, 0x118, 16, periph)
/* pb11_tc4wo1_out */
#define PB11_TC4WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 25, periph)
/* pb11_tc5wo0g1_in */
#define PB11_TC5WO0G1_IN       MCHP_PINMUX(b, 11, 0x11c, 6, periph)
/* pb11_tc5wo0_out */
#define PB11_TC5WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 23, periph)
/* pb11_tc5wo1g4_in */
#define PB11_TC5WO1G4_IN       MCHP_PINMUX(b, 11, 0x128, 16, periph)
/* pb11_tc5wo1_out */
#define PB11_TC5WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 26, periph)
/* pb11_tc6wo0g1_in */
#define PB11_TC6WO0G1_IN       MCHP_PINMUX(b, 11, 0x12c, 6, periph)
/* pb11_tc6wo0_out */
#define PB11_TC6WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 24, periph)
/* pb11_tc6wo1g4_in */
#define PB11_TC6WO1G4_IN       MCHP_PINMUX(b, 11, 0x138, 16, periph)
/* pb11_tc6wo1_out */
#define PB11_TC6WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 27, periph)
/* pb11_tc7wo0g1_in */
#define PB11_TC7WO0G1_IN       MCHP_PINMUX(b, 11, 0x13c, 6, periph)
/* pb11_tc7wo0_out */
#define PB11_TC7WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 25, periph)
/* pb11_tc7wo1g4_in */
#define PB11_TC7WO1G4_IN       MCHP_PINMUX(b, 11, 0x148, 16, periph)
/* pb11_tc7wo1_out */
#define PB11_TC7WO1_OUT        MCHP_PINMUX(b, 11, 0x348, 28, periph)
/* pb11_tc8wo0g1_in */
#define PB11_TC8WO0G1_IN       MCHP_PINMUX(b, 11, 0x14c, 6, periph)
/* pb11_tc8wo0_out */
#define PB11_TC8WO0_OUT        MCHP_PINMUX(b, 11, 0x344, 26, periph)
/* pb11_tc9wo0g4_in */
#define PB11_TC9WO0G4_IN       MCHP_PINMUX(b, 11, 0x160, 16, periph)
/* pb11_tc9wo0_out */
#define PB11_TC9WO0_OUT        MCHP_PINMUX(b, 11, 0x348, 29, periph)
/* pb11_tcc0wo0_out */
#define PB11_TCC0WO0_OUT       MCHP_PINMUX(b, 11, 0x344, 13, periph)
/* pb11_tcc0wo1_out */
#define PB11_TCC0WO1_OUT       MCHP_PINMUX(b, 11, 0x348, 15, periph)
/* pb11_tcc0wo3_out */
#define PB11_TCC0WO3_OUT       MCHP_PINMUX(b, 11, 0x348, 14, periph)
/* pb11_tcc0wo4_out */
#define PB11_TCC0WO4_OUT       MCHP_PINMUX(b, 11, 0x344, 14, periph)
/* pb11_tcc0wo5_out */
#define PB11_TCC0WO5_OUT       MCHP_PINMUX(b, 11, 0x348, 16, periph)
/* pb11_tcc1wo0_out */
#define PB11_TCC1WO0_OUT       MCHP_PINMUX(b, 11, 0x344, 15, periph)
/* pb11_tcc1wo1_out */
#define PB11_TCC1WO1_OUT       MCHP_PINMUX(b, 11, 0x348, 18, periph)
/* pb11_tcc1wo3_out */
#define PB11_TCC1WO3_OUT       MCHP_PINMUX(b, 11, 0x348, 17, periph)
/* pb11_tcc1wo4_out */
#define PB11_TCC1WO4_OUT       MCHP_PINMUX(b, 11, 0x344, 16, periph)
/* pb11_tcc1wo5_out */
#define PB11_TCC1WO5_OUT       MCHP_PINMUX(b, 11, 0x348, 19, periph)
/* pb11_tcc2wo0_out */
#define PB11_TCC2WO0_OUT       MCHP_PINMUX(b, 11, 0x344, 17, periph)
/* pb11_tcc2wo1_out */
#define PB11_TCC2WO1_OUT       MCHP_PINMUX(b, 11, 0x348, 20, periph)
/* pb11_tstbus0_out */
#define PB11_TSTBUS0_OUT       MCHP_PINMUX(b, 11, 0x344, 32, periph)
/* pb11_tstbus2_out */
#define PB11_TSTBUS2_OUT       MCHP_PINMUX(b, 11, 0x348, 34, periph)
/* pb11_tstbus4_out */
#define PB11_TSTBUS4_OUT       MCHP_PINMUX(b, 11, 0x344, 33, periph)
/* pb11_tstbus6_out */
#define PB11_TSTBUS6_OUT       MCHP_PINMUX(b, 11, 0x348, 35, periph)
/* pb11_tstbus8_out */
#define PB11_TSTBUS8_OUT       MCHP_PINMUX(b, 11, 0x344, 34, periph)
/* pb12_accmpten_in */
#define PB12_ACCMPTEN_IN       MCHP_PINMUX(b, 12, 0x18c, 19, periph)
/* pb12_cclin0_in */
#define PB12_CCLIN0_IN         MCHP_PINMUX(b, 12, 0xb4, 19, periph)
/* pb12_cclin1_in */
#define PB12_CCLIN1_IN         MCHP_PINMUX(b, 12, 0xb8, 17, periph)
/* pb12_cclin3_in */
#define PB12_CCLIN3_IN         MCHP_PINMUX(b, 12, 0xc0, 19, periph)
/* pb12_cclin4_in */
#define PB12_CCLIN4_IN         MCHP_PINMUX(b, 12, 0xc4, 17, periph)
/* pb12_cclo1_out */
#define PB12_CCLO1_OUT         MCHP_PINMUX(b, 12, 0x350, 1, periph)
/* pb12_coex_bt_state_out */
#define PB12_COEX_BT_STATE_OUT MCHP_PINMUX(b, 12, 0x34c, 37, periph)
/* pb12_coex_rf_act_out */
#define PB12_COEX_RF_ACT_OUT   MCHP_PINMUX(b, 12, 0x350, 41, periph)
/* pb12_extint0_in */
#define PB12_EXTINT0_IN        MCHP_PINMUX(b, 12, 0x0, 19, periph)
/* pb12_extint1_in */
#define PB12_EXTINT1_IN        MCHP_PINMUX(b, 12, 0x4, 17, periph)
/* pb12_fectrl0_out */
#define PB12_FECTRL0_OUT       MCHP_PINMUX(b, 12, 0x350, 40, periph)
/* pb12_fectrl1_out */
#define PB12_FECTRL1_OUT       MCHP_PINMUX(b, 12, 0x34c, 35, periph)
/* pb12_fectrl2_out */
#define PB12_FECTRL2_OUT       MCHP_PINMUX(b, 12, 0x34c, 36, periph)
/* pb12_qd0_out */
#define PB12_QD0_OUT           MCHP_PINMUX(b, 12, 0x350, 35, periph)
/* pb12_qd1_in */
#define PB12_QD1_IN            MCHP_PINMUX(b, 12, 0xa4, 19, periph)
/* pb12_qd1_out */
#define PB12_QD1_OUT           MCHP_PINMUX(b, 12, 0x34c, 30, periph)
/* pb12_qd2_in */
#define PB12_QD2_IN            MCHP_PINMUX(b, 12, 0xa8, 17, periph)
/* pb12_qd2_out */
#define PB12_QD2_OUT           MCHP_PINMUX(b, 12, 0x34c, 29, periph)
/* pb12_qd3_out */
#define PB12_QD3_OUT           MCHP_PINMUX(b, 12, 0x34c, 28, periph)
/* pb12_qeiccmp0_out */
#define PB12_QEICCMP0_OUT      MCHP_PINMUX(b, 12, 0x34c, 31, periph)
/* pb12_qeihome0g1_in */
#define PB12_QEIHOME0G1_IN     MCHP_PINMUX(b, 12, 0x16c, 19, periph)
/* pb12_qeihome0g2_in */
#define PB12_QEIHOME0G2_IN     MCHP_PINMUX(b, 12, 0x170, 17, periph)
/* pb12_qeiindx0g2_in */
#define PB12_QEIINDX0G2_IN     MCHP_PINMUX(b, 12, 0x174, 17, periph)
/* pb12_qspics_out */
#define PB12_QSPICS_OUT        MCHP_PINMUX(b, 12, 0x34c, 27, periph)
/* pb12_scom0p0_in */
#define PB12_SCOM0P0_IN        MCHP_PINMUX(b, 12, 0x40, 17, periph)
/* pb12_scom0p0_out */
#define PB12_SCOM0P0_OUT       MCHP_PINMUX(b, 12, 0x350, 2, periph)
/* pb12_scom0p2_out */
#define PB12_SCOM0P2_OUT       MCHP_PINMUX(b, 12, 0x34c, 2, periph)
/* pb12_scom0p3_in */
#define PB12_SCOM0P3_IN        MCHP_PINMUX(b, 12, 0x4c, 19, periph)
/* pb12_scom0p3_out */
#define PB12_SCOM0P3_OUT       MCHP_PINMUX(b, 12, 0x34c, 1, periph)
/* pb12_scom1p0_out */
#define PB12_SCOM1P0_OUT       MCHP_PINMUX(b, 12, 0x34c, 3, periph)
/* pb12_scom1p2_in */
#define PB12_SCOM1P2_IN        MCHP_PINMUX(b, 12, 0x58, 19, periph)
/* pb12_scom1p2_out */
#define PB12_SCOM1P2_OUT       MCHP_PINMUX(b, 12, 0x34c, 4, periph)
/* pb12_scom1p3_in */
#define PB12_SCOM1P3_IN        MCHP_PINMUX(b, 12, 0x5c, 17, periph)
/* pb12_scom1p3_out */
#define PB12_SCOM1P3_OUT       MCHP_PINMUX(b, 12, 0x350, 5, periph)
/* pb12_scom2p0_in */
#define PB12_SCOM2P0_IN        MCHP_PINMUX(b, 12, 0x60, 17, periph)
/* pb12_scom2p0_out */
#define PB12_SCOM2P0_OUT       MCHP_PINMUX(b, 12, 0x350, 7, periph)
/* pb12_scom2p2_out */
#define PB12_SCOM2P2_OUT       MCHP_PINMUX(b, 12, 0x34c, 6, periph)
/* pb12_scom2p3_in */
#define PB12_SCOM2P3_IN        MCHP_PINMUX(b, 12, 0x6c, 19, periph)
/* pb12_scom2p3_out */
#define PB12_SCOM2P3_OUT       MCHP_PINMUX(b, 12, 0x34c, 5, periph)
/* pb12_scom3p0_out */
#define PB12_SCOM3P0_OUT       MCHP_PINMUX(b, 12, 0x34c, 7, periph)
/* pb12_scom3p2_in */
#define PB12_SCOM3P2_IN        MCHP_PINMUX(b, 12, 0x78, 19, periph)
/* pb12_scom3p2_out */
#define PB12_SCOM3P2_OUT       MCHP_PINMUX(b, 12, 0x34c, 8, periph)
/* pb12_scom3p3_in */
#define PB12_SCOM3P3_IN        MCHP_PINMUX(b, 12, 0x7c, 17, periph)
/* pb12_scom3p3_out */
#define PB12_SCOM3P3_OUT       MCHP_PINMUX(b, 12, 0x350, 10, periph)
/* pb12_scom4p0_in */
#define PB12_SCOM4P0_IN        MCHP_PINMUX(b, 12, 0x80, 17, periph)
/* pb12_scom4p0_out */
#define PB12_SCOM4P0_OUT       MCHP_PINMUX(b, 12, 0x350, 12, periph)
/* pb12_scom4p2_out */
#define PB12_SCOM4P2_OUT       MCHP_PINMUX(b, 12, 0x34c, 10, periph)
/* pb12_scom4p3_in */
#define PB12_SCOM4P3_IN        MCHP_PINMUX(b, 12, 0x8c, 19, periph)
/* pb12_scom4p3_out */
#define PB12_SCOM4P3_OUT       MCHP_PINMUX(b, 12, 0x34c, 9, periph)
/* pb12_scom5p0_out */
#define PB12_SCOM5P0_OUT       MCHP_PINMUX(b, 12, 0x34c, 11, periph)
/* pb12_scom5p2_in */
#define PB12_SCOM5P2_IN        MCHP_PINMUX(b, 12, 0x98, 19, periph)
/* pb12_scom5p2_out */
#define PB12_SCOM5P2_OUT       MCHP_PINMUX(b, 12, 0x34c, 12, periph)
/* pb12_scom5p3_in */
#define PB12_SCOM5P3_IN        MCHP_PINMUX(b, 12, 0x9c, 17, periph)
/* pb12_scom5p3_out */
#define PB12_SCOM5P3_OUT       MCHP_PINMUX(b, 12, 0x350, 15, periph)
/* pb12_tc0wo0g1_in */
#define PB12_TC0WO0G1_IN       MCHP_PINMUX(b, 12, 0xcc, 19, periph)
/* pb12_tc0wo0g2_in */
#define PB12_TC0WO0G2_IN       MCHP_PINMUX(b, 12, 0xd0, 17, periph)
/* pb12_tc0wo1_out */
#define PB12_TC0WO1_OUT        MCHP_PINMUX(b, 12, 0x34c, 18, periph)
/* pb12_tc1wo0g1_in */
#define PB12_TC1WO0G1_IN       MCHP_PINMUX(b, 12, 0xdc, 19, periph)
/* pb12_tc1wo0_out */
#define PB12_TC1WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 19, periph)
/* pb12_tc1wo1g2_in */
#define PB12_TC1WO1G2_IN       MCHP_PINMUX(b, 12, 0xe4, 17, periph)
/* pb12_tc1wo1_out */
#define PB12_TC1WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 25, periph)
/* pb12_tc2wo0g1_in */
#define PB12_TC2WO0G1_IN       MCHP_PINMUX(b, 12, 0xec, 19, periph)
/* pb12_tc2wo0_out */
#define PB12_TC2WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 20, periph)
/* pb12_tc2wo1g2_in */
#define PB12_TC2WO1G2_IN       MCHP_PINMUX(b, 12, 0xf4, 17, periph)
/* pb12_tc2wo1_out */
#define PB12_TC2WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 26, periph)
/* pb12_tc3wo0g1_in */
#define PB12_TC3WO0G1_IN       MCHP_PINMUX(b, 12, 0xfc, 19, periph)
/* pb12_tc3wo0_out */
#define PB12_TC3WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 21, periph)
/* pb12_tc3wo1g2_in */
#define PB12_TC3WO1G2_IN       MCHP_PINMUX(b, 12, 0x104, 17, periph)
/* pb12_tc3wo1_out */
#define PB12_TC3WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 27, periph)
/* pb12_tc4wo0g1_in */
#define PB12_TC4WO0G1_IN       MCHP_PINMUX(b, 12, 0x10c, 19, periph)
/* pb12_tc4wo0_out */
#define PB12_TC4WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 22, periph)
/* pb12_tc4wo1g2_in */
#define PB12_TC4WO1G2_IN       MCHP_PINMUX(b, 12, 0x114, 17, periph)
/* pb12_tc4wo1_out */
#define PB12_TC4WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 28, periph)
/* pb12_tc5wo0g1_in */
#define PB12_TC5WO0G1_IN       MCHP_PINMUX(b, 12, 0x11c, 19, periph)
/* pb12_tc5wo0_out */
#define PB12_TC5WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 23, periph)
/* pb12_tc5wo1g2_in */
#define PB12_TC5WO1G2_IN       MCHP_PINMUX(b, 12, 0x124, 17, periph)
/* pb12_tc5wo1_out */
#define PB12_TC5WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 29, periph)
/* pb12_tc6wo0g1_in */
#define PB12_TC6WO0G1_IN       MCHP_PINMUX(b, 12, 0x12c, 19, periph)
/* pb12_tc6wo0_out */
#define PB12_TC6WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 24, periph)
/* pb12_tc6wo1g2_in */
#define PB12_TC6WO1G2_IN       MCHP_PINMUX(b, 12, 0x134, 17, periph)
/* pb12_tc6wo1_out */
#define PB12_TC6WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 30, periph)
/* pb12_tc7wo0g1_in */
#define PB12_TC7WO0G1_IN       MCHP_PINMUX(b, 12, 0x13c, 19, periph)
/* pb12_tc7wo0_out */
#define PB12_TC7WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 25, periph)
/* pb12_tc7wo1g2_in */
#define PB12_TC7WO1G2_IN       MCHP_PINMUX(b, 12, 0x144, 17, periph)
/* pb12_tc7wo1_out */
#define PB12_TC7WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 31, periph)
/* pb12_tc8wo0g1_in */
#define PB12_TC8WO0G1_IN       MCHP_PINMUX(b, 12, 0x14c, 19, periph)
/* pb12_tc8wo0_out */
#define PB12_TC8WO0_OUT        MCHP_PINMUX(b, 12, 0x34c, 26, periph)
/* pb12_tc8wo1g2_in */
#define PB12_TC8WO1G2_IN       MCHP_PINMUX(b, 12, 0x154, 17, periph)
/* pb12_tc8wo1_out */
#define PB12_TC8WO1_OUT        MCHP_PINMUX(b, 12, 0x350, 32, periph)
/* pb12_tc9wo0g2_in */
#define PB12_TC9WO0G2_IN       MCHP_PINMUX(b, 12, 0x15c, 17, periph)
/* pb12_tc9wo0_out */
#define PB12_TC9WO0_OUT        MCHP_PINMUX(b, 12, 0x350, 33, periph)
/* pb12_tcc0wo0_out */
#define PB12_TCC0WO0_OUT       MCHP_PINMUX(b, 12, 0x34c, 13, periph)
/* pb12_tcc0wo1_out */
#define PB12_TCC0WO1_OUT       MCHP_PINMUX(b, 12, 0x350, 17, periph)
/* pb12_tcc0wo3_out */
#define PB12_TCC0WO3_OUT       MCHP_PINMUX(b, 12, 0x350, 19, periph)
/* pb12_tcc0wo4_out */
#define PB12_TCC0WO4_OUT       MCHP_PINMUX(b, 12, 0x34c, 14, periph)
/* pb12_tcc0wo5_out */
#define PB12_TCC0WO5_OUT       MCHP_PINMUX(b, 12, 0x350, 18, periph)
/* pb12_tcc1wo0_out */
#define PB12_TCC1WO0_OUT       MCHP_PINMUX(b, 12, 0x34c, 15, periph)
/* pb12_tcc1wo1_out */
#define PB12_TCC1WO1_OUT       MCHP_PINMUX(b, 12, 0x350, 20, periph)
/* pb12_tcc1wo3_out */
#define PB12_TCC1WO3_OUT       MCHP_PINMUX(b, 12, 0x350, 22, periph)
/* pb12_tcc1wo4_out */
#define PB12_TCC1WO4_OUT       MCHP_PINMUX(b, 12, 0x34c, 16, periph)
/* pb12_tcc1wo5_out */
#define PB12_TCC1WO5_OUT       MCHP_PINMUX(b, 12, 0x350, 21, periph)
/* pb12_tcc2wo0_out */
#define PB12_TCC2WO0_OUT       MCHP_PINMUX(b, 12, 0x34c, 17, periph)
/* pb12_tcc2wo1_out */
#define PB12_TCC2WO1_OUT       MCHP_PINMUX(b, 12, 0x350, 23, periph)
/* pb12_tstbus0_out */
#define PB12_TSTBUS0_OUT       MCHP_PINMUX(b, 12, 0x34c, 32, periph)
/* pb12_tstbus4_out */
#define PB12_TSTBUS4_OUT       MCHP_PINMUX(b, 12, 0x34c, 33, periph)
/* pb12_tstbus5_out */
#define PB12_TSTBUS5_OUT       MCHP_PINMUX(b, 12, 0x350, 38, periph)
/* pb12_tstbus8_out */
#define PB12_TSTBUS8_OUT       MCHP_PINMUX(b, 12, 0x34c, 34, periph)
/* pb12_tstbus9_out */
#define PB12_TSTBUS9_OUT       MCHP_PINMUX(b, 12, 0x350, 39, periph)
/* pb13_ac_cmp0_out */
#define PB13_AC_CMP0_OUT       MCHP_PINMUX(b, 13, 0x358, 40, periph)
/* pb13_ac_cmptrdy_out */
#define PB13_AC_CMPTRDY_OUT    MCHP_PINMUX(b, 13, 0x358, 41, periph)
/* pb13_can1rx_in */
#define PB13_CAN1RX_IN         MCHP_PINMUX(b, 13, 0x190, 6, periph)
/* pb13_cclin1_in */
#define PB13_CCLIN1_IN         MCHP_PINMUX(b, 13, 0xb8, 20, periph)
/* pb13_cclin2_in */
#define PB13_CCLIN2_IN         MCHP_PINMUX(b, 13, 0xbc, 6, periph)
/* pb13_cclin4_in */
#define PB13_CCLIN4_IN         MCHP_PINMUX(b, 13, 0xc4, 20, periph)
/* pb13_cclin5_in */
#define PB13_CCLIN5_IN         MCHP_PINMUX(b, 13, 0xc8, 6, periph)
/* pb13_cclo0_out */
#define PB13_CCLO0_OUT         MCHP_PINMUX(b, 13, 0x358, 1, periph)
/* pb13_cclo1_out */
#define PB13_CCLO1_OUT         MCHP_PINMUX(b, 13, 0x354, 1, periph)
/* pb13_coex_rf_act_out */
#define PB13_COEX_RF_ACT_OUT   MCHP_PINMUX(b, 13, 0x354, 41, periph)
/* pb13_extint1_in */
#define PB13_EXTINT1_IN        MCHP_PINMUX(b, 13, 0x4, 20, periph)
/* pb13_extint2_in */
#define PB13_EXTINT2_IN        MCHP_PINMUX(b, 13, 0x8, 6, periph)
/* pb13_fectrl0_out */
#define PB13_FECTRL0_OUT       MCHP_PINMUX(b, 13, 0x354, 40, periph)
/* pb13_fectrl4_out */
#define PB13_FECTRL4_OUT       MCHP_PINMUX(b, 13, 0x358, 42, periph)
/* pb13_qd0_out */
#define PB13_QD0_OUT           MCHP_PINMUX(b, 13, 0x354, 35, periph)
/* pb13_qd1_out */
#define PB13_QD1_OUT           MCHP_PINMUX(b, 13, 0x358, 35, periph)
/* pb13_qd2_in */
#define PB13_QD2_IN            MCHP_PINMUX(b, 13, 0xa8, 20, periph)
/* pb13_qd2_out */
#define PB13_QD2_OUT           MCHP_PINMUX(b, 13, 0x354, 37, periph)
/* pb13_qd3_in */
#define PB13_QD3_IN            MCHP_PINMUX(b, 13, 0xac, 6, periph)
/* pb13_qd3_out */
#define PB13_QD3_OUT           MCHP_PINMUX(b, 13, 0x354, 36, periph)
/* pb13_qeihome0g2_in */
#define PB13_QEIHOME0G2_IN     MCHP_PINMUX(b, 13, 0x170, 20, periph)
/* pb13_qeiindx0g2_in */
#define PB13_QEIINDX0G2_IN     MCHP_PINMUX(b, 13, 0x174, 20, periph)
/* pb13_qeiindx0g3_in */
#define PB13_QEIINDX0G3_IN     MCHP_PINMUX(b, 13, 0x178, 6, periph)
/* pb13_qeiqea0g3_in */
#define PB13_QEIQEA0G3_IN      MCHP_PINMUX(b, 13, 0x17c, 6, periph)
/* pb13_qspics_out */
#define PB13_QSPICS_OUT        MCHP_PINMUX(b, 13, 0x354, 34, periph)
/* pb13_scom0p0_in */
#define PB13_SCOM0P0_IN        MCHP_PINMUX(b, 13, 0x40, 20, periph)
/* pb13_scom0p0_out */
#define PB13_SCOM0P0_OUT       MCHP_PINMUX(b, 13, 0x354, 2, periph)
/* pb13_scom0p2_out */
#define PB13_SCOM0P2_OUT       MCHP_PINMUX(b, 13, 0x354, 4, periph)
/* pb13_scom0p3_out */
#define PB13_SCOM0P3_OUT       MCHP_PINMUX(b, 13, 0x354, 3, periph)
/* pb13_scom1p0_in */
#define PB13_SCOM1P0_IN        MCHP_PINMUX(b, 13, 0x50, 6, periph)
/* pb13_scom1p0_out */
#define PB13_SCOM1P0_OUT       MCHP_PINMUX(b, 13, 0x358, 5, periph)
/* pb13_scom1p2_out */
#define PB13_SCOM1P2_OUT       MCHP_PINMUX(b, 13, 0x354, 6, periph)
/* pb13_scom1p3_in */
#define PB13_SCOM1P3_IN        MCHP_PINMUX(b, 13, 0x5c, 20, periph)
/* pb13_scom1p3_out */
#define PB13_SCOM1P3_OUT       MCHP_PINMUX(b, 13, 0x354, 5, periph)
/* pb13_scom2p0_in */
#define PB13_SCOM2P0_IN        MCHP_PINMUX(b, 13, 0x60, 20, periph)
/* pb13_scom2p0_out */
#define PB13_SCOM2P0_OUT       MCHP_PINMUX(b, 13, 0x354, 7, periph)
/* pb13_scom2p2_out */
#define PB13_SCOM2P2_OUT       MCHP_PINMUX(b, 13, 0x354, 9, periph)
/* pb13_scom2p3_out */
#define PB13_SCOM2P3_OUT       MCHP_PINMUX(b, 13, 0x354, 8, periph)
/* pb13_scom3p0_in */
#define PB13_SCOM3P0_IN        MCHP_PINMUX(b, 13, 0x70, 6, periph)
/* pb13_scom3p0_out */
#define PB13_SCOM3P0_OUT       MCHP_PINMUX(b, 13, 0x358, 10, periph)
/* pb13_scom3p2_out */
#define PB13_SCOM3P2_OUT       MCHP_PINMUX(b, 13, 0x354, 11, periph)
/* pb13_scom3p3_in */
#define PB13_SCOM3P3_IN        MCHP_PINMUX(b, 13, 0x7c, 20, periph)
/* pb13_scom3p3_out */
#define PB13_SCOM3P3_OUT       MCHP_PINMUX(b, 13, 0x354, 10, periph)
/* pb13_scom4p0_in */
#define PB13_SCOM4P0_IN        MCHP_PINMUX(b, 13, 0x80, 20, periph)
/* pb13_scom4p0_out */
#define PB13_SCOM4P0_OUT       MCHP_PINMUX(b, 13, 0x354, 12, periph)
/* pb13_scom4p2_out */
#define PB13_SCOM4P2_OUT       MCHP_PINMUX(b, 13, 0x354, 14, periph)
/* pb13_scom4p3_out */
#define PB13_SCOM4P3_OUT       MCHP_PINMUX(b, 13, 0x354, 13, periph)
/* pb13_scom5p0_in */
#define PB13_SCOM5P0_IN        MCHP_PINMUX(b, 13, 0x90, 6, periph)
/* pb13_scom5p0_out */
#define PB13_SCOM5P0_OUT       MCHP_PINMUX(b, 13, 0x358, 15, periph)
/* pb13_scom5p2_out */
#define PB13_SCOM5P2_OUT       MCHP_PINMUX(b, 13, 0x354, 16, periph)
/* pb13_scom5p3_in */
#define PB13_SCOM5P3_IN        MCHP_PINMUX(b, 13, 0x9c, 20, periph)
/* pb13_scom5p3_out */
#define PB13_SCOM5P3_OUT       MCHP_PINMUX(b, 13, 0x354, 15, periph)
/* pb13_tc0wo0g2_in */
#define PB13_TC0WO0G2_IN       MCHP_PINMUX(b, 13, 0xd0, 20, periph)
/* pb13_tc0wo0_out */
#define PB13_TC0WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 24, periph)
/* pb13_tc0wo1g3_in */
#define PB13_TC0WO1G3_IN       MCHP_PINMUX(b, 13, 0xd4, 6, periph)
/* pb13_tc0wo1_out */
#define PB13_TC0WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 24, periph)
/* pb13_tc1wo0_out */
#define PB13_TC1WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 25, periph)
/* pb13_tc1wo1g2_in */
#define PB13_TC1WO1G2_IN       MCHP_PINMUX(b, 13, 0xe4, 20, periph)
/* pb13_tc1wo1_out */
#define PB13_TC1WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 25, periph)
/* pb13_tc2wo0g3_in */
#define PB13_TC2WO0G3_IN       MCHP_PINMUX(b, 13, 0xf0, 6, periph)
/* pb13_tc2wo0_out */
#define PB13_TC2WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 26, periph)
/* pb13_tc2wo1g2_in */
#define PB13_TC2WO1G2_IN       MCHP_PINMUX(b, 13, 0xf4, 20, periph)
/* pb13_tc2wo1_out */
#define PB13_TC2WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 26, periph)
/* pb13_tc3wo0g3_in */
#define PB13_TC3WO0G3_IN       MCHP_PINMUX(b, 13, 0x100, 6, periph)
/* pb13_tc3wo0_out */
#define PB13_TC3WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 27, periph)
/* pb13_tc3wo1g2_in */
#define PB13_TC3WO1G2_IN       MCHP_PINMUX(b, 13, 0x104, 20, periph)
/* pb13_tc3wo1_out */
#define PB13_TC3WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 27, periph)
/* pb13_tc4wo0g3_in */
#define PB13_TC4WO0G3_IN       MCHP_PINMUX(b, 13, 0x110, 6, periph)
/* pb13_tc4wo0_out */
#define PB13_TC4WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 28, periph)
/* pb13_tc4wo1g2_in */
#define PB13_TC4WO1G2_IN       MCHP_PINMUX(b, 13, 0x114, 20, periph)
/* pb13_tc4wo1_out */
#define PB13_TC4WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 28, periph)
/* pb13_tc5wo0g3_in */
#define PB13_TC5WO0G3_IN       MCHP_PINMUX(b, 13, 0x120, 6, periph)
/* pb13_tc5wo0_out */
#define PB13_TC5WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 29, periph)
/* pb13_tc5wo1g2_in */
#define PB13_TC5WO1G2_IN       MCHP_PINMUX(b, 13, 0x124, 20, periph)
/* pb13_tc5wo1_out */
#define PB13_TC5WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 29, periph)
/* pb13_tc6wo0g3_in */
#define PB13_TC6WO0G3_IN       MCHP_PINMUX(b, 13, 0x130, 6, periph)
/* pb13_tc6wo0_out */
#define PB13_TC6WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 30, periph)
/* pb13_tc6wo1g2_in */
#define PB13_TC6WO1G2_IN       MCHP_PINMUX(b, 13, 0x134, 20, periph)
/* pb13_tc6wo1_out */
#define PB13_TC6WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 30, periph)
/* pb13_tc7wo0g3_in */
#define PB13_TC7WO0G3_IN       MCHP_PINMUX(b, 13, 0x140, 6, periph)
/* pb13_tc7wo0_out */
#define PB13_TC7WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 31, periph)
/* pb13_tc7wo1g2_in */
#define PB13_TC7WO1G2_IN       MCHP_PINMUX(b, 13, 0x144, 20, periph)
/* pb13_tc7wo1_out */
#define PB13_TC7WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 31, periph)
/* pb13_tc8wo0g3_in */
#define PB13_TC8WO0G3_IN       MCHP_PINMUX(b, 13, 0x150, 6, periph)
/* pb13_tc8wo0_out */
#define PB13_TC8WO0_OUT        MCHP_PINMUX(b, 13, 0x358, 32, periph)
/* pb13_tc8wo1g2_in */
#define PB13_TC8WO1G2_IN       MCHP_PINMUX(b, 13, 0x154, 20, periph)
/* pb13_tc8wo1_out */
#define PB13_TC8WO1_OUT        MCHP_PINMUX(b, 13, 0x354, 32, periph)
/* pb13_tc9wo0g2_in */
#define PB13_TC9WO0G2_IN       MCHP_PINMUX(b, 13, 0x15c, 20, periph)
/* pb13_tc9wo0_out */
#define PB13_TC9WO0_OUT        MCHP_PINMUX(b, 13, 0x354, 33, periph)
/* pb13_tc9wo1g3_in */
#define PB13_TC9WO1G3_IN       MCHP_PINMUX(b, 13, 0x164, 6, periph)
/* pb13_tc9wo1_out */
#define PB13_TC9WO1_OUT        MCHP_PINMUX(b, 13, 0x358, 33, periph)
/* pb13_tcc0wo0_out */
#define PB13_TCC0WO0_OUT       MCHP_PINMUX(b, 13, 0x358, 18, periph)
/* pb13_tcc0wo1_out */
#define PB13_TCC0WO1_OUT       MCHP_PINMUX(b, 13, 0x354, 17, periph)
/* pb13_tcc0wo2_out */
#define PB13_TCC0WO2_OUT       MCHP_PINMUX(b, 13, 0x358, 17, periph)
/* pb13_tcc0wo3_out */
#define PB13_TCC0WO3_OUT       MCHP_PINMUX(b, 13, 0x354, 19, periph)
/* pb13_tcc0wo4_out */
#define PB13_TCC0WO4_OUT       MCHP_PINMUX(b, 13, 0x358, 19, periph)
/* pb13_tcc0wo5_out */
#define PB13_TCC0WO5_OUT       MCHP_PINMUX(b, 13, 0x354, 18, periph)
/* pb13_tcc1wo0_out */
#define PB13_TCC1WO0_OUT       MCHP_PINMUX(b, 13, 0x358, 21, periph)
/* pb13_tcc1wo1_out */
#define PB13_TCC1WO1_OUT       MCHP_PINMUX(b, 13, 0x354, 20, periph)
/* pb13_tcc1wo2_out */
#define PB13_TCC1WO2_OUT       MCHP_PINMUX(b, 13, 0x358, 20, periph)
/* pb13_tcc1wo3_out */
#define PB13_TCC1WO3_OUT       MCHP_PINMUX(b, 13, 0x354, 22, periph)
/* pb13_tcc1wo4_out */
#define PB13_TCC1WO4_OUT       MCHP_PINMUX(b, 13, 0x358, 22, periph)
/* pb13_tcc1wo5_out */
#define PB13_TCC1WO5_OUT       MCHP_PINMUX(b, 13, 0x354, 21, periph)
/* pb13_tcc2wo0_out */
#define PB13_TCC2WO0_OUT       MCHP_PINMUX(b, 13, 0x358, 23, periph)
/* pb13_tcc2wo1_out */
#define PB13_TCC2WO1_OUT       MCHP_PINMUX(b, 13, 0x354, 23, periph)
/* pb13_tstbus1_out */
#define PB13_TSTBUS1_OUT       MCHP_PINMUX(b, 13, 0x358, 38, periph)
/* pb13_tstbus5_out */
#define PB13_TSTBUS5_OUT       MCHP_PINMUX(b, 13, 0x354, 38, periph)
/* pb13_tstbus9_out */
#define PB13_TSTBUS9_OUT       MCHP_PINMUX(b, 13, 0x354, 39, periph)
/* pb13_tstbus10_out */
#define PB13_TSTBUS10_OUT      MCHP_PINMUX(b, 13, 0x358, 39, periph)
/* pc0_accmpten_in */
#define PC0_ACCMPTEN_IN        MCHP_PINMUX(c, 0, 0x18c, 7, periph)
/* pc0_cclin0_in */
#define PC0_CCLIN0_IN          MCHP_PINMUX(c, 0, 0xb4, 7, periph)
/* pc0_cclin1_in */
#define PC0_CCLIN1_IN          MCHP_PINMUX(c, 0, 0xb8, 12, periph)
/* pc0_cclin3_in */
#define PC0_CCLIN3_IN          MCHP_PINMUX(c, 0, 0xc0, 7, periph)
/* pc0_cclin4_in */
#define PC0_CCLIN4_IN          MCHP_PINMUX(c, 0, 0xc4, 12, periph)
/* pc0_cclo1_out */
#define PC0_CCLO1_OUT          MCHP_PINMUX(c, 0, 0x368, 1, periph)
/* pc0_coex_bt_state_out */
#define PC0_COEX_BT_STATE_OUT  MCHP_PINMUX(c, 0, 0x364, 37, periph)
/* pc0_coex_rf_act_out */
#define PC0_COEX_RF_ACT_OUT    MCHP_PINMUX(c, 0, 0x368, 41, periph)
/* pc0_extint0_in */
#define PC0_EXTINT0_IN         MCHP_PINMUX(c, 0, 0x0, 7, periph)
/* pc0_extint1_in */
#define PC0_EXTINT1_IN         MCHP_PINMUX(c, 0, 0x4, 12, periph)
/* pc0_fectrl0_out */
#define PC0_FECTRL0_OUT        MCHP_PINMUX(c, 0, 0x368, 40, periph)
/* pc0_fectrl1_out */
#define PC0_FECTRL1_OUT        MCHP_PINMUX(c, 0, 0x364, 35, periph)
/* pc0_fectrl2_out */
#define PC0_FECTRL2_OUT        MCHP_PINMUX(c, 0, 0x364, 36, periph)
/* pc0_qd0_out */
#define PC0_QD0_OUT            MCHP_PINMUX(c, 0, 0x368, 35, periph)
/* pc0_qd1_in */
#define PC0_QD1_IN             MCHP_PINMUX(c, 0, 0xa4, 7, periph)
/* pc0_qd1_out */
#define PC0_QD1_OUT            MCHP_PINMUX(c, 0, 0x364, 30, periph)
/* pc0_qd2_in */
#define PC0_QD2_IN             MCHP_PINMUX(c, 0, 0xa8, 12, periph)
/* pc0_qd2_out */
#define PC0_QD2_OUT            MCHP_PINMUX(c, 0, 0x364, 29, periph)
/* pc0_qd3_out */
#define PC0_QD3_OUT            MCHP_PINMUX(c, 0, 0x364, 28, periph)
/* pc0_qeiccmp0_out */
#define PC0_QEICCMP0_OUT       MCHP_PINMUX(c, 0, 0x364, 31, periph)
/* pc0_qeihome0g1_in */
#define PC0_QEIHOME0G1_IN      MCHP_PINMUX(c, 0, 0x16c, 7, periph)
/* pc0_qeihome0g2_in */
#define PC0_QEIHOME0G2_IN      MCHP_PINMUX(c, 0, 0x170, 12, periph)
/* pc0_qeiindx0g2_in */
#define PC0_QEIINDX0G2_IN      MCHP_PINMUX(c, 0, 0x174, 12, periph)
/* pc0_qspics_out */
#define PC0_QSPICS_OUT         MCHP_PINMUX(c, 0, 0x364, 27, periph)
/* pc0_scom0p0_in */
#define PC0_SCOM0P0_IN         MCHP_PINMUX(c, 0, 0x40, 12, periph)
/* pc0_scom0p0_out */
#define PC0_SCOM0P0_OUT        MCHP_PINMUX(c, 0, 0x368, 2, periph)
/* pc0_scom0p2_out */
#define PC0_SCOM0P2_OUT        MCHP_PINMUX(c, 0, 0x364, 2, periph)
/* pc0_scom0p3_in */
#define PC0_SCOM0P3_IN         MCHP_PINMUX(c, 0, 0x4c, 7, periph)
/* pc0_scom0p3_out */
#define PC0_SCOM0P3_OUT        MCHP_PINMUX(c, 0, 0x364, 1, periph)
/* pc0_scom1p0_out */
#define PC0_SCOM1P0_OUT        MCHP_PINMUX(c, 0, 0x364, 3, periph)
/* pc0_scom1p2_in */
#define PC0_SCOM1P2_IN         MCHP_PINMUX(c, 0, 0x58, 7, periph)
/* pc0_scom1p2_out */
#define PC0_SCOM1P2_OUT        MCHP_PINMUX(c, 0, 0x364, 4, periph)
/* pc0_scom1p3_in */
#define PC0_SCOM1P3_IN         MCHP_PINMUX(c, 0, 0x5c, 12, periph)
/* pc0_scom1p3_out */
#define PC0_SCOM1P3_OUT        MCHP_PINMUX(c, 0, 0x368, 5, periph)
/* pc0_scom2p0_in */
#define PC0_SCOM2P0_IN         MCHP_PINMUX(c, 0, 0x60, 12, periph)
/* pc0_scom2p0_out */
#define PC0_SCOM2P0_OUT        MCHP_PINMUX(c, 0, 0x368, 7, periph)
/* pc0_scom2p2_out */
#define PC0_SCOM2P2_OUT        MCHP_PINMUX(c, 0, 0x364, 6, periph)
/* pc0_scom2p3_in */
#define PC0_SCOM2P3_IN         MCHP_PINMUX(c, 0, 0x6c, 7, periph)
/* pc0_scom2p3_out */
#define PC0_SCOM2P3_OUT        MCHP_PINMUX(c, 0, 0x364, 5, periph)
/* pc0_scom3p0_out */
#define PC0_SCOM3P0_OUT        MCHP_PINMUX(c, 0, 0x364, 7, periph)
/* pc0_scom3p2_in */
#define PC0_SCOM3P2_IN         MCHP_PINMUX(c, 0, 0x78, 7, periph)
/* pc0_scom3p2_out */
#define PC0_SCOM3P2_OUT        MCHP_PINMUX(c, 0, 0x364, 8, periph)
/* pc0_scom3p3_in */
#define PC0_SCOM3P3_IN         MCHP_PINMUX(c, 0, 0x7c, 12, periph)
/* pc0_scom3p3_out */
#define PC0_SCOM3P3_OUT        MCHP_PINMUX(c, 0, 0x368, 10, periph)
/* pc0_scom4p0_in */
#define PC0_SCOM4P0_IN         MCHP_PINMUX(c, 0, 0x80, 12, periph)
/* pc0_scom4p0_out */
#define PC0_SCOM4P0_OUT        MCHP_PINMUX(c, 0, 0x368, 12, periph)
/* pc0_scom4p2_out */
#define PC0_SCOM4P2_OUT        MCHP_PINMUX(c, 0, 0x364, 10, periph)
/* pc0_scom4p3_in */
#define PC0_SCOM4P3_IN         MCHP_PINMUX(c, 0, 0x8c, 7, periph)
/* pc0_scom4p3_out */
#define PC0_SCOM4P3_OUT        MCHP_PINMUX(c, 0, 0x364, 9, periph)
/* pc0_scom5p0_out */
#define PC0_SCOM5P0_OUT        MCHP_PINMUX(c, 0, 0x364, 11, periph)
/* pc0_scom5p2_in */
#define PC0_SCOM5P2_IN         MCHP_PINMUX(c, 0, 0x98, 7, periph)
/* pc0_scom5p2_out */
#define PC0_SCOM5P2_OUT        MCHP_PINMUX(c, 0, 0x364, 12, periph)
/* pc0_scom5p3_in */
#define PC0_SCOM5P3_IN         MCHP_PINMUX(c, 0, 0x9c, 12, periph)
/* pc0_scom5p3_out */
#define PC0_SCOM5P3_OUT        MCHP_PINMUX(c, 0, 0x368, 15, periph)
/* pc0_tc0wo0g1_in */
#define PC0_TC0WO0G1_IN        MCHP_PINMUX(c, 0, 0xcc, 7, periph)
/* pc0_tc0wo0g2_in */
#define PC0_TC0WO0G2_IN        MCHP_PINMUX(c, 0, 0xd0, 12, periph)
/* pc0_tc0wo1_out */
#define PC0_TC0WO1_OUT         MCHP_PINMUX(c, 0, 0x364, 18, periph)
/* pc0_tc1wo0g1_in */
#define PC0_TC1WO0G1_IN        MCHP_PINMUX(c, 0, 0xdc, 7, periph)
/* pc0_tc1wo0_out */
#define PC0_TC1WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 19, periph)
/* pc0_tc1wo1g2_in */
#define PC0_TC1WO1G2_IN        MCHP_PINMUX(c, 0, 0xe4, 12, periph)
/* pc0_tc1wo1_out */
#define PC0_TC1WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 25, periph)
/* pc0_tc2wo0g1_in */
#define PC0_TC2WO0G1_IN        MCHP_PINMUX(c, 0, 0xec, 7, periph)
/* pc0_tc2wo0_out */
#define PC0_TC2WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 20, periph)
/* pc0_tc2wo1g2_in */
#define PC0_TC2WO1G2_IN        MCHP_PINMUX(c, 0, 0xf4, 12, periph)
/* pc0_tc2wo1_out */
#define PC0_TC2WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 26, periph)
/* pc0_tc3wo0g1_in */
#define PC0_TC3WO0G1_IN        MCHP_PINMUX(c, 0, 0xfc, 7, periph)
/* pc0_tc3wo0_out */
#define PC0_TC3WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 21, periph)
/* pc0_tc3wo1g2_in */
#define PC0_TC3WO1G2_IN        MCHP_PINMUX(c, 0, 0x104, 12, periph)
/* pc0_tc3wo1_out */
#define PC0_TC3WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 27, periph)
/* pc0_tc4wo0g1_in */
#define PC0_TC4WO0G1_IN        MCHP_PINMUX(c, 0, 0x10c, 7, periph)
/* pc0_tc4wo0_out */
#define PC0_TC4WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 22, periph)
/* pc0_tc4wo1g2_in */
#define PC0_TC4WO1G2_IN        MCHP_PINMUX(c, 0, 0x114, 12, periph)
/* pc0_tc4wo1_out */
#define PC0_TC4WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 28, periph)
/* pc0_tc5wo0g1_in */
#define PC0_TC5WO0G1_IN        MCHP_PINMUX(c, 0, 0x11c, 7, periph)
/* pc0_tc5wo0_out */
#define PC0_TC5WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 23, periph)
/* pc0_tc5wo1g2_in */
#define PC0_TC5WO1G2_IN        MCHP_PINMUX(c, 0, 0x124, 12, periph)
/* pc0_tc5wo1_out */
#define PC0_TC5WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 29, periph)
/* pc0_tc6wo0g1_in */
#define PC0_TC6WO0G1_IN        MCHP_PINMUX(c, 0, 0x12c, 7, periph)
/* pc0_tc6wo0_out */
#define PC0_TC6WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 24, periph)
/* pc0_tc6wo1g2_in */
#define PC0_TC6WO1G2_IN        MCHP_PINMUX(c, 0, 0x134, 12, periph)
/* pc0_tc6wo1_out */
#define PC0_TC6WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 30, periph)
/* pc0_tc7wo0g1_in */
#define PC0_TC7WO0G1_IN        MCHP_PINMUX(c, 0, 0x13c, 7, periph)
/* pc0_tc7wo0_out */
#define PC0_TC7WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 25, periph)
/* pc0_tc7wo1g2_in */
#define PC0_TC7WO1G2_IN        MCHP_PINMUX(c, 0, 0x144, 12, periph)
/* pc0_tc7wo1_out */
#define PC0_TC7WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 31, periph)
/* pc0_tc8wo0g1_in */
#define PC0_TC8WO0G1_IN        MCHP_PINMUX(c, 0, 0x14c, 7, periph)
/* pc0_tc8wo0_out */
#define PC0_TC8WO0_OUT         MCHP_PINMUX(c, 0, 0x364, 26, periph)
/* pc0_tc8wo1g2_in */
#define PC0_TC8WO1G2_IN        MCHP_PINMUX(c, 0, 0x154, 12, periph)
/* pc0_tc8wo1_out */
#define PC0_TC8WO1_OUT         MCHP_PINMUX(c, 0, 0x368, 32, periph)
/* pc0_tc9wo0g2_in */
#define PC0_TC9WO0G2_IN        MCHP_PINMUX(c, 0, 0x15c, 12, periph)
/* pc0_tc9wo0_out */
#define PC0_TC9WO0_OUT         MCHP_PINMUX(c, 0, 0x368, 33, periph)
/* pc0_tcc0wo0_out */
#define PC0_TCC0WO0_OUT        MCHP_PINMUX(c, 0, 0x364, 13, periph)
/* pc0_tcc0wo1_out */
#define PC0_TCC0WO1_OUT        MCHP_PINMUX(c, 0, 0x368, 17, periph)
/* pc0_tcc0wo3_out */
#define PC0_TCC0WO3_OUT        MCHP_PINMUX(c, 0, 0x368, 19, periph)
/* pc0_tcc0wo4_out */
#define PC0_TCC0WO4_OUT        MCHP_PINMUX(c, 0, 0x364, 14, periph)
/* pc0_tcc0wo5_out */
#define PC0_TCC0WO5_OUT        MCHP_PINMUX(c, 0, 0x368, 18, periph)
/* pc0_tcc1wo0_out */
#define PC0_TCC1WO0_OUT        MCHP_PINMUX(c, 0, 0x364, 15, periph)
/* pc0_tcc1wo1_out */
#define PC0_TCC1WO1_OUT        MCHP_PINMUX(c, 0, 0x368, 20, periph)
/* pc0_tcc1wo3_out */
#define PC0_TCC1WO3_OUT        MCHP_PINMUX(c, 0, 0x368, 22, periph)
/* pc0_tcc1wo4_out */
#define PC0_TCC1WO4_OUT        MCHP_PINMUX(c, 0, 0x364, 16, periph)
/* pc0_tcc1wo5_out */
#define PC0_TCC1WO5_OUT        MCHP_PINMUX(c, 0, 0x368, 21, periph)
/* pc0_tcc2wo0_out */
#define PC0_TCC2WO0_OUT        MCHP_PINMUX(c, 0, 0x364, 17, periph)
/* pc0_tcc2wo1_out */
#define PC0_TCC2WO1_OUT        MCHP_PINMUX(c, 0, 0x368, 23, periph)
/* pc0_tstbus0_out */
#define PC0_TSTBUS0_OUT        MCHP_PINMUX(c, 0, 0x364, 32, periph)
/* pc0_tstbus4_out */
#define PC0_TSTBUS4_OUT        MCHP_PINMUX(c, 0, 0x364, 33, periph)
/* pc0_tstbus5_out */
#define PC0_TSTBUS5_OUT        MCHP_PINMUX(c, 0, 0x368, 38, periph)
/* pc0_tstbus8_out */
#define PC0_TSTBUS8_OUT        MCHP_PINMUX(c, 0, 0x364, 34, periph)
/* pc0_tstbus9_out */
#define PC0_TSTBUS9_OUT        MCHP_PINMUX(c, 0, 0x368, 39, periph)
/* pc1_ac_cmp0_out */
#define PC1_AC_CMP0_OUT        MCHP_PINMUX(c, 1, 0x370, 40, periph)
/* pc1_ac_cmptrdy_out */
#define PC1_AC_CMPTRDY_OUT     MCHP_PINMUX(c, 1, 0x370, 41, periph)
/* pc1_can1rx_in */
#define PC1_CAN1RX_IN          MCHP_PINMUX(c, 1, 0x190, 12, periph)
/* pc1_cclin1_in */
#define PC1_CCLIN1_IN          MCHP_PINMUX(c, 1, 0xb8, 6, periph)
/* pc1_cclin2_in */
#define PC1_CCLIN2_IN          MCHP_PINMUX(c, 1, 0xbc, 12, periph)
/* pc1_cclin4_in */
#define PC1_CCLIN4_IN          MCHP_PINMUX(c, 1, 0xc4, 6, periph)
/* pc1_cclin5_in */
#define PC1_CCLIN5_IN          MCHP_PINMUX(c, 1, 0xc8, 12, periph)
/* pc1_cclo0_out */
#define PC1_CCLO0_OUT          MCHP_PINMUX(c, 1, 0x370, 1, periph)
/* pc1_cclo1_out */
#define PC1_CCLO1_OUT          MCHP_PINMUX(c, 1, 0x36c, 1, periph)
/* pc1_coex_rf_act_out */
#define PC1_COEX_RF_ACT_OUT    MCHP_PINMUX(c, 1, 0x36c, 41, periph)
/* pc1_extint1_in */
#define PC1_EXTINT1_IN         MCHP_PINMUX(c, 1, 0x4, 6, periph)
/* pc1_extint2_in */
#define PC1_EXTINT2_IN         MCHP_PINMUX(c, 1, 0x8, 12, periph)
/* pc1_fectrl0_out */
#define PC1_FECTRL0_OUT        MCHP_PINMUX(c, 1, 0x36c, 40, periph)
/* pc1_fectrl4_out */
#define PC1_FECTRL4_OUT        MCHP_PINMUX(c, 1, 0x370, 42, periph)
/* pc1_qd0_out */
#define PC1_QD0_OUT            MCHP_PINMUX(c, 1, 0x36c, 35, periph)
/* pc1_qd1_out */
#define PC1_QD1_OUT            MCHP_PINMUX(c, 1, 0x370, 35, periph)
/* pc1_qd2_in */
#define PC1_QD2_IN             MCHP_PINMUX(c, 1, 0xa8, 6, periph)
/* pc1_qd2_out */
#define PC1_QD2_OUT            MCHP_PINMUX(c, 1, 0x36c, 37, periph)
/* pc1_qd3_in */
#define PC1_QD3_IN             MCHP_PINMUX(c, 1, 0xac, 12, periph)
/* pc1_qd3_out */
#define PC1_QD3_OUT            MCHP_PINMUX(c, 1, 0x36c, 36, periph)
/* pc1_qeihome0g2_in */
#define PC1_QEIHOME0G2_IN      MCHP_PINMUX(c, 1, 0x170, 6, periph)
/* pc1_qeiindx0g2_in */
#define PC1_QEIINDX0G2_IN      MCHP_PINMUX(c, 1, 0x174, 6, periph)
/* pc1_qeiindx0g3_in */
#define PC1_QEIINDX0G3_IN      MCHP_PINMUX(c, 1, 0x178, 12, periph)
/* pc1_qeiqea0g3_in */
#define PC1_QEIQEA0G3_IN       MCHP_PINMUX(c, 1, 0x17c, 12, periph)
/* pc1_qspics_out */
#define PC1_QSPICS_OUT         MCHP_PINMUX(c, 1, 0x36c, 34, periph)
/* pc1_scom0p0_in */
#define PC1_SCOM0P0_IN         MCHP_PINMUX(c, 1, 0x40, 6, periph)
/* pc1_scom0p0_out */
#define PC1_SCOM0P0_OUT        MCHP_PINMUX(c, 1, 0x36c, 2, periph)
/* pc1_scom0p2_out */
#define PC1_SCOM0P2_OUT        MCHP_PINMUX(c, 1, 0x36c, 4, periph)
/* pc1_scom0p3_out */
#define PC1_SCOM0P3_OUT        MCHP_PINMUX(c, 1, 0x36c, 3, periph)
/* pc1_scom1p0_in */
#define PC1_SCOM1P0_IN         MCHP_PINMUX(c, 1, 0x50, 12, periph)
/* pc1_scom1p0_out */
#define PC1_SCOM1P0_OUT        MCHP_PINMUX(c, 1, 0x370, 5, periph)
/* pc1_scom1p2_out */
#define PC1_SCOM1P2_OUT        MCHP_PINMUX(c, 1, 0x36c, 6, periph)
/* pc1_scom1p3_in */
#define PC1_SCOM1P3_IN         MCHP_PINMUX(c, 1, 0x5c, 6, periph)
/* pc1_scom1p3_out */
#define PC1_SCOM1P3_OUT        MCHP_PINMUX(c, 1, 0x36c, 5, periph)
/* pc1_scom2p0_in */
#define PC1_SCOM2P0_IN         MCHP_PINMUX(c, 1, 0x60, 6, periph)
/* pc1_scom2p0_out */
#define PC1_SCOM2P0_OUT        MCHP_PINMUX(c, 1, 0x36c, 7, periph)
/* pc1_scom2p2_out */
#define PC1_SCOM2P2_OUT        MCHP_PINMUX(c, 1, 0x36c, 9, periph)
/* pc1_scom2p3_out */
#define PC1_SCOM2P3_OUT        MCHP_PINMUX(c, 1, 0x36c, 8, periph)
/* pc1_scom3p0_in */
#define PC1_SCOM3P0_IN         MCHP_PINMUX(c, 1, 0x70, 12, periph)
/* pc1_scom3p0_out */
#define PC1_SCOM3P0_OUT        MCHP_PINMUX(c, 1, 0x370, 10, periph)
/* pc1_scom3p2_out */
#define PC1_SCOM3P2_OUT        MCHP_PINMUX(c, 1, 0x36c, 11, periph)
/* pc1_scom3p3_in */
#define PC1_SCOM3P3_IN         MCHP_PINMUX(c, 1, 0x7c, 6, periph)
/* pc1_scom3p3_out */
#define PC1_SCOM3P3_OUT        MCHP_PINMUX(c, 1, 0x36c, 10, periph)
/* pc1_scom4p0_in */
#define PC1_SCOM4P0_IN         MCHP_PINMUX(c, 1, 0x80, 6, periph)
/* pc1_scom4p0_out */
#define PC1_SCOM4P0_OUT        MCHP_PINMUX(c, 1, 0x36c, 12, periph)
/* pc1_scom4p2_out */
#define PC1_SCOM4P2_OUT        MCHP_PINMUX(c, 1, 0x36c, 14, periph)
/* pc1_scom4p3_out */
#define PC1_SCOM4P3_OUT        MCHP_PINMUX(c, 1, 0x36c, 13, periph)
/* pc1_scom5p0_in */
#define PC1_SCOM5P0_IN         MCHP_PINMUX(c, 1, 0x90, 12, periph)
/* pc1_scom5p0_out */
#define PC1_SCOM5P0_OUT        MCHP_PINMUX(c, 1, 0x370, 15, periph)
/* pc1_scom5p2_out */
#define PC1_SCOM5P2_OUT        MCHP_PINMUX(c, 1, 0x36c, 16, periph)
/* pc1_scom5p3_in */
#define PC1_SCOM5P3_IN         MCHP_PINMUX(c, 1, 0x9c, 6, periph)
/* pc1_scom5p3_out */
#define PC1_SCOM5P3_OUT        MCHP_PINMUX(c, 1, 0x36c, 15, periph)
/* pc1_tc0wo0g2_in */
#define PC1_TC0WO0G2_IN        MCHP_PINMUX(c, 1, 0xd0, 6, periph)
/* pc1_tc0wo0_out */
#define PC1_TC0WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 24, periph)
/* pc1_tc0wo1g3_in */
#define PC1_TC0WO1G3_IN        MCHP_PINMUX(c, 1, 0xd4, 12, periph)
/* pc1_tc0wo1_out */
#define PC1_TC0WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 24, periph)
/* pc1_tc1wo0_out */
#define PC1_TC1WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 25, periph)
/* pc1_tc1wo1g2_in */
#define PC1_TC1WO1G2_IN        MCHP_PINMUX(c, 1, 0xe4, 6, periph)
/* pc1_tc1wo1_out */
#define PC1_TC1WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 25, periph)
/* pc1_tc2wo0g3_in */
#define PC1_TC2WO0G3_IN        MCHP_PINMUX(c, 1, 0xf0, 12, periph)
/* pc1_tc2wo0_out */
#define PC1_TC2WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 26, periph)
/* pc1_tc2wo1g2_in */
#define PC1_TC2WO1G2_IN        MCHP_PINMUX(c, 1, 0xf4, 6, periph)
/* pc1_tc2wo1_out */
#define PC1_TC2WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 26, periph)
/* pc1_tc3wo0g3_in */
#define PC1_TC3WO0G3_IN        MCHP_PINMUX(c, 1, 0x100, 12, periph)
/* pc1_tc3wo0_out */
#define PC1_TC3WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 27, periph)
/* pc1_tc3wo1g2_in */
#define PC1_TC3WO1G2_IN        MCHP_PINMUX(c, 1, 0x104, 6, periph)
/* pc1_tc3wo1_out */
#define PC1_TC3WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 27, periph)
/* pc1_tc4wo0g3_in */
#define PC1_TC4WO0G3_IN        MCHP_PINMUX(c, 1, 0x110, 12, periph)
/* pc1_tc4wo0_out */
#define PC1_TC4WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 28, periph)
/* pc1_tc4wo1g2_in */
#define PC1_TC4WO1G2_IN        MCHP_PINMUX(c, 1, 0x114, 6, periph)
/* pc1_tc4wo1_out */
#define PC1_TC4WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 28, periph)
/* pc1_tc5wo0g3_in */
#define PC1_TC5WO0G3_IN        MCHP_PINMUX(c, 1, 0x120, 12, periph)
/* pc1_tc5wo0_out */
#define PC1_TC5WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 29, periph)
/* pc1_tc5wo1g2_in */
#define PC1_TC5WO1G2_IN        MCHP_PINMUX(c, 1, 0x124, 6, periph)
/* pc1_tc5wo1_out */
#define PC1_TC5WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 29, periph)
/* pc1_tc6wo0g3_in */
#define PC1_TC6WO0G3_IN        MCHP_PINMUX(c, 1, 0x130, 12, periph)
/* pc1_tc6wo0_out */
#define PC1_TC6WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 30, periph)
/* pc1_tc6wo1g2_in */
#define PC1_TC6WO1G2_IN        MCHP_PINMUX(c, 1, 0x134, 6, periph)
/* pc1_tc6wo1_out */
#define PC1_TC6WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 30, periph)
/* pc1_tc7wo0g3_in */
#define PC1_TC7WO0G3_IN        MCHP_PINMUX(c, 1, 0x140, 12, periph)
/* pc1_tc7wo0_out */
#define PC1_TC7WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 31, periph)
/* pc1_tc7wo1g2_in */
#define PC1_TC7WO1G2_IN        MCHP_PINMUX(c, 1, 0x144, 6, periph)
/* pc1_tc7wo1_out */
#define PC1_TC7WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 31, periph)
/* pc1_tc8wo0g3_in */
#define PC1_TC8WO0G3_IN        MCHP_PINMUX(c, 1, 0x150, 12, periph)
/* pc1_tc8wo0_out */
#define PC1_TC8WO0_OUT         MCHP_PINMUX(c, 1, 0x370, 32, periph)
/* pc1_tc8wo1g2_in */
#define PC1_TC8WO1G2_IN        MCHP_PINMUX(c, 1, 0x154, 6, periph)
/* pc1_tc8wo1_out */
#define PC1_TC8WO1_OUT         MCHP_PINMUX(c, 1, 0x36c, 32, periph)
/* pc1_tc9wo0g2_in */
#define PC1_TC9WO0G2_IN        MCHP_PINMUX(c, 1, 0x15c, 6, periph)
/* pc1_tc9wo0_out */
#define PC1_TC9WO0_OUT         MCHP_PINMUX(c, 1, 0x36c, 33, periph)
/* pc1_tc9wo1g3_in */
#define PC1_TC9WO1G3_IN        MCHP_PINMUX(c, 1, 0x164, 12, periph)
/* pc1_tc9wo1_out */
#define PC1_TC9WO1_OUT         MCHP_PINMUX(c, 1, 0x370, 33, periph)
/* pc1_tcc0wo0_out */
#define PC1_TCC0WO0_OUT        MCHP_PINMUX(c, 1, 0x370, 18, periph)
/* pc1_tcc0wo1_out */
#define PC1_TCC0WO1_OUT        MCHP_PINMUX(c, 1, 0x36c, 17, periph)
/* pc1_tcc0wo2_out */
#define PC1_TCC0WO2_OUT        MCHP_PINMUX(c, 1, 0x370, 17, periph)
/* pc1_tcc0wo3_out */
#define PC1_TCC0WO3_OUT        MCHP_PINMUX(c, 1, 0x36c, 19, periph)
/* pc1_tcc0wo4_out */
#define PC1_TCC0WO4_OUT        MCHP_PINMUX(c, 1, 0x370, 19, periph)
/* pc1_tcc0wo5_out */
#define PC1_TCC0WO5_OUT        MCHP_PINMUX(c, 1, 0x36c, 18, periph)
/* pc1_tcc1wo0_out */
#define PC1_TCC1WO0_OUT        MCHP_PINMUX(c, 1, 0x370, 21, periph)
/* pc1_tcc1wo1_out */
#define PC1_TCC1WO1_OUT        MCHP_PINMUX(c, 1, 0x36c, 20, periph)
/* pc1_tcc1wo2_out */
#define PC1_TCC1WO2_OUT        MCHP_PINMUX(c, 1, 0x370, 20, periph)
/* pc1_tcc1wo3_out */
#define PC1_TCC1WO3_OUT        MCHP_PINMUX(c, 1, 0x36c, 22, periph)
/* pc1_tcc1wo4_out */
#define PC1_TCC1WO4_OUT        MCHP_PINMUX(c, 1, 0x370, 22, periph)
/* pc1_tcc1wo5_out */
#define PC1_TCC1WO5_OUT        MCHP_PINMUX(c, 1, 0x36c, 21, periph)
/* pc1_tcc2wo0_out */
#define PC1_TCC2WO0_OUT        MCHP_PINMUX(c, 1, 0x370, 23, periph)
/* pc1_tcc2wo1_out */
#define PC1_TCC2WO1_OUT        MCHP_PINMUX(c, 1, 0x36c, 23, periph)
/* pc1_tstbus1_out */
#define PC1_TSTBUS1_OUT        MCHP_PINMUX(c, 1, 0x370, 38, periph)
/* pc1_tstbus5_out */
#define PC1_TSTBUS5_OUT        MCHP_PINMUX(c, 1, 0x36c, 38, periph)
/* pc1_tstbus9_out */
#define PC1_TSTBUS9_OUT        MCHP_PINMUX(c, 1, 0x36c, 39, periph)
/* pc1_tstbus10_out */
#define PC1_TSTBUS10_OUT       MCHP_PINMUX(c, 1, 0x370, 39, periph)
/* pc8_ac_cmp0_out */
#define PC8_AC_CMP0_OUT        MCHP_PINMUX(c, 8, 0x390, 40, periph)
/* pc8_ac_cmptrdy_out */
#define PC8_AC_CMPTRDY_OUT     MCHP_PINMUX(c, 8, 0x390, 41, periph)
/* pc8_can1rx_in */
#define PC8_CAN1RX_IN          MCHP_PINMUX(c, 8, 0x190, 7, periph)
/* pc8_cclin2_in */
#define PC8_CCLIN2_IN          MCHP_PINMUX(c, 8, 0xbc, 7, periph)
/* pc8_cclin5_in */
#define PC8_CCLIN5_IN          MCHP_PINMUX(c, 8, 0xc8, 7, periph)
/* pc8_cclo0_out */
#define PC8_CCLO0_OUT          MCHP_PINMUX(c, 8, 0x390, 1, periph)
/* pc8_extint2_in */
#define PC8_EXTINT2_IN         MCHP_PINMUX(c, 8, 0x8, 7, periph)
/* pc8_fectrl4_out */
#define PC8_FECTRL4_OUT        MCHP_PINMUX(c, 8, 0x390, 42, periph)
/* pc8_gmac_tsucomp_out */
#define PC8_GMAC_TSUCOMP_OUT   MCHP_PINMUX(c, 8, 0x394, 14, periph)
/* pc8_qd0_out */
#define PC8_QD0_OUT            MCHP_PINMUX(c, 8, 0x390, 36, periph)
/* pc8_qd1_out */
#define PC8_QD1_OUT            MCHP_PINMUX(c, 8, 0x390, 35, periph)
/* pc8_qd3_in */
#define PC8_QD3_IN             MCHP_PINMUX(c, 8, 0xac, 7, periph)
/* pc8_qd3_out */
#define PC8_QD3_OUT            MCHP_PINMUX(c, 8, 0x390, 37, periph)
/* pc8_qeiccmp0_out */
#define PC8_QEICCMP0_OUT       MCHP_PINMUX(c, 8, 0x394, 13, periph)
/* pc8_qeiindx0g3_in */
#define PC8_QEIINDX0G3_IN      MCHP_PINMUX(c, 8, 0x178, 7, periph)
/* pc8_qeiqea0g3_in */
#define PC8_QEIQEA0G3_IN       MCHP_PINMUX(c, 8, 0x17c, 7, periph)
/* pc8_qeiqeb0g5_in */
#define PC8_QEIQEB0G5_IN       MCHP_PINMUX(c, 8, 0x188, 9, periph)
/* pc8_qspics_out */
#define PC8_QSPICS_OUT         MCHP_PINMUX(c, 8, 0x390, 34, periph)
/* pc8_scom0p0_out */
#define PC8_SCOM0P0_OUT        MCHP_PINMUX(c, 8, 0x390, 2, periph)
/* pc8_scom0p3_out */
#define PC8_SCOM0P3_OUT        MCHP_PINMUX(c, 8, 0x390, 3, periph)
/* pc8_scom1p0_in */
#define PC8_SCOM1P0_IN         MCHP_PINMUX(c, 8, 0x50, 7, periph)
/* pc8_scom1p0_out */
#define PC8_SCOM1P0_OUT        MCHP_PINMUX(c, 8, 0x390, 5, periph)
/* pc8_scom1p2_out */
#define PC8_SCOM1P2_OUT        MCHP_PINMUX(c, 8, 0x390, 4, periph)
/* pc8_scom1p3_out */
#define PC8_SCOM1P3_OUT        MCHP_PINMUX(c, 8, 0x390, 6, periph)
/* pc8_scom2p0_out */
#define PC8_SCOM2P0_OUT        MCHP_PINMUX(c, 8, 0x390, 7, periph)
/* pc8_scom2p3_out */
#define PC8_SCOM2P3_OUT        MCHP_PINMUX(c, 8, 0x390, 8, periph)
/* pc8_scom3p0_in */
#define PC8_SCOM3P0_IN         MCHP_PINMUX(c, 8, 0x70, 7, periph)
/* pc8_scom3p0_out */
#define PC8_SCOM3P0_OUT        MCHP_PINMUX(c, 8, 0x390, 10, periph)
/* pc8_scom3p2_out */
#define PC8_SCOM3P2_OUT        MCHP_PINMUX(c, 8, 0x390, 9, periph)
/* pc8_scom3p3_out */
#define PC8_SCOM3P3_OUT        MCHP_PINMUX(c, 8, 0x390, 11, periph)
/* pc8_scom4p0_out */
#define PC8_SCOM4P0_OUT        MCHP_PINMUX(c, 8, 0x390, 12, periph)
/* pc8_scom4p3_out */
#define PC8_SCOM4P3_OUT        MCHP_PINMUX(c, 8, 0x390, 13, periph)
/* pc8_scom5p0_in */
#define PC8_SCOM5P0_IN         MCHP_PINMUX(c, 8, 0x90, 7, periph)
/* pc8_scom5p0_out */
#define PC8_SCOM5P0_OUT        MCHP_PINMUX(c, 8, 0x390, 15, periph)
/* pc8_scom5p2_out */
#define PC8_SCOM5P2_OUT        MCHP_PINMUX(c, 8, 0x390, 14, periph)
/* pc8_scom5p3_out */
#define PC8_SCOM5P3_OUT        MCHP_PINMUX(c, 8, 0x390, 16, periph)
/* pc8_tc0wo0_out */
#define PC8_TC0WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 24, periph)
/* pc8_tc0wo1g3_in */
#define PC8_TC0WO1G3_IN        MCHP_PINMUX(c, 8, 0xd4, 7, periph)
/* pc8_tc1wo0_out */
#define PC8_TC1WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 25, periph)
/* pc8_tc2wo0g3_in */
#define PC8_TC2WO0G3_IN        MCHP_PINMUX(c, 8, 0xf0, 7, periph)
/* pc8_tc2wo0_out */
#define PC8_TC2WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 26, periph)
/* pc8_tc3wo0g3_in */
#define PC8_TC3WO0G3_IN        MCHP_PINMUX(c, 8, 0x100, 7, periph)
/* pc8_tc3wo0_out */
#define PC8_TC3WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 27, periph)
/* pc8_tc4wo0g3_in */
#define PC8_TC4WO0G3_IN        MCHP_PINMUX(c, 8, 0x110, 7, periph)
/* pc8_tc4wo0_out */
#define PC8_TC4WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 28, periph)
/* pc8_tc5wo0g3_in */
#define PC8_TC5WO0G3_IN        MCHP_PINMUX(c, 8, 0x120, 7, periph)
/* pc8_tc5wo0_out */
#define PC8_TC5WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 29, periph)
/* pc8_tc6wo0g3_in */
#define PC8_TC6WO0G3_IN        MCHP_PINMUX(c, 8, 0x130, 7, periph)
/* pc8_tc6wo0_out */
#define PC8_TC6WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 30, periph)
/* pc8_tc7wo0g3_in */
#define PC8_TC7WO0G3_IN        MCHP_PINMUX(c, 8, 0x140, 7, periph)
/* pc8_tc7wo0_out */
#define PC8_TC7WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 31, periph)
/* pc8_tc8wo0g3_in */
#define PC8_TC8WO0G3_IN        MCHP_PINMUX(c, 8, 0x150, 7, periph)
/* pc8_tc8wo0_out */
#define PC8_TC8WO0_OUT         MCHP_PINMUX(c, 8, 0x390, 32, periph)
/* pc8_tc8wo1g5_in */
#define PC8_TC8WO1G5_IN        MCHP_PINMUX(c, 8, 0x158, 9, periph)
/* pc8_tc8wo1_out */
#define PC8_TC8WO1_OUT         MCHP_PINMUX(c, 8, 0x394, 10, periph)
/* pc8_tc9wo1g3_in */
#define PC8_TC9WO1G3_IN        MCHP_PINMUX(c, 8, 0x164, 7, periph)
/* pc8_tc9wo1g5_in */
#define PC8_TC9WO1G5_IN        MCHP_PINMUX(c, 8, 0x168, 9, periph)
/* pc8_tc9wo1_out */
#define PC8_TC9WO1_OUT         MCHP_PINMUX(c, 8, 0x390, 33, periph)
/* pc8_tcc0wo0_out */
#define PC8_TCC0WO0_OUT        MCHP_PINMUX(c, 8, 0x390, 18, periph)
/* pc8_tcc0wo1_out */
#define PC8_TCC0WO1_OUT        MCHP_PINMUX(c, 8, 0x394, 6, periph)
/* pc8_tcc0wo2_out */
#define PC8_TCC0WO2_OUT        MCHP_PINMUX(c, 8, 0x390, 17, periph)
/* pc8_tcc0wo4_out */
#define PC8_TCC0WO4_OUT        MCHP_PINMUX(c, 8, 0x390, 19, periph)
/* pc8_tcc1wo0_out */
#define PC8_TCC1WO0_OUT        MCHP_PINMUX(c, 8, 0x390, 21, periph)
/* pc8_tcc1wo1_out */
#define PC8_TCC1WO1_OUT        MCHP_PINMUX(c, 8, 0x394, 9, periph)
/* pc8_tcc1wo2_out */
#define PC8_TCC1WO2_OUT        MCHP_PINMUX(c, 8, 0x390, 20, periph)
/* pc8_tcc1wo4_out */
#define PC8_TCC1WO4_OUT        MCHP_PINMUX(c, 8, 0x390, 22, periph)
/* pc8_tcc2wo0_out */
#define PC8_TCC2WO0_OUT        MCHP_PINMUX(c, 8, 0x390, 23, periph)
/* pc8_tstbus1_out */
#define PC8_TSTBUS1_OUT        MCHP_PINMUX(c, 8, 0x390, 38, periph)
/* pc8_tstbus3_out */
#define PC8_TSTBUS3_OUT        MCHP_PINMUX(c, 8, 0x394, 15, periph)
/* pc8_tstbus7_out */
#define PC8_TSTBUS7_OUT        MCHP_PINMUX(c, 8, 0x394, 16, periph)
/* pc8_tstbus10_out */
#define PC8_TSTBUS10_OUT       MCHP_PINMUX(c, 8, 0x390, 39, periph)
/* pc8_tstbus11_out */
#define PC8_TSTBUS11_OUT       MCHP_PINMUX(c, 8, 0x394, 17, periph)
/* pc9_accmpten_in */
#define PC9_ACCMPTEN_IN        MCHP_PINMUX(c, 9, 0x18c, 12, periph)
/* pc9_ac_cmp1_out */
#define PC9_AC_CMP1_OUT        MCHP_PINMUX(c, 9, 0x39c, 36, periph)
/* pc9_ac_cmptout_out */
#define PC9_AC_CMPTOUT_OUT     MCHP_PINMUX(c, 9, 0x39c, 37, periph)
/* pc9_can1_tx_out */
#define PC9_CAN1_TX_OUT        MCHP_PINMUX(c, 9, 0x39c, 38, periph)
/* pc9_cclin0_in */
#define PC9_CCLIN0_IN          MCHP_PINMUX(c, 9, 0xb4, 12, periph)
/* pc9_cclin3_in */
#define PC9_CCLIN3_IN          MCHP_PINMUX(c, 9, 0xc0, 12, periph)
/* pc9_cclo1_out */
#define PC9_CCLO1_OUT          MCHP_PINMUX(c, 9, 0x39c, 1, periph)
/* pc9_coexwlanact_in */
#define PC9_COEXWLANACT_IN     MCHP_PINMUX(c, 9, 0x194, 5, periph)
/* pc9_coex_bt_state_out */
#define PC9_COEX_BT_STATE_OUT  MCHP_PINMUX(c, 9, 0x398, 37, periph)
/* pc9_extint0_in */
#define PC9_EXTINT0_IN         MCHP_PINMUX(c, 9, 0x0, 12, periph)
/* pc9_extint3_in */
#define PC9_EXTINT3_IN         MCHP_PINMUX(c, 9, 0xc, 5, periph)
/* pc9_fectrl1_out */
#define PC9_FECTRL1_OUT        MCHP_PINMUX(c, 9, 0x398, 35, periph)
/* pc9_fectrl2_out */
#define PC9_FECTRL2_OUT        MCHP_PINMUX(c, 9, 0x398, 36, periph)
/* pc9_fectrl3_out */
#define PC9_FECTRL3_OUT        MCHP_PINMUX(c, 9, 0x39c, 39, periph)
/* pc9_fectrl5_out */
#define PC9_FECTRL5_OUT        MCHP_PINMUX(c, 9, 0x39c, 40, periph)
/* pc9_nmi_in */
#define PC9_NMI_IN             MCHP_PINMUX(c, 9, 0x3c, 5, periph)
/* pc9_qd0_in */
#define PC9_QD0_IN             MCHP_PINMUX(c, 9, 0xa0, 5, periph)
/* pc9_qd0_out */
#define PC9_QD0_OUT            MCHP_PINMUX(c, 9, 0x39c, 33, periph)
/* pc9_qd1_in */
#define PC9_QD1_IN             MCHP_PINMUX(c, 9, 0xa4, 12, periph)
/* pc9_qd1_out */
#define PC9_QD1_OUT            MCHP_PINMUX(c, 9, 0x398, 30, periph)
/* pc9_qd2_out */
#define PC9_QD2_OUT            MCHP_PINMUX(c, 9, 0x398, 29, periph)
/* pc9_qd3_out */
#define PC9_QD3_OUT            MCHP_PINMUX(c, 9, 0x398, 28, periph)
/* pc9_qeiccmp0_out */
#define PC9_QEICCMP0_OUT       MCHP_PINMUX(c, 9, 0x398, 31, periph)
/* pc9_qeihome0g1_in */
#define PC9_QEIHOME0G1_IN      MCHP_PINMUX(c, 9, 0x16c, 12, periph)
/* pc9_qeiqea0g4_in */
#define PC9_QEIQEA0G4_IN       MCHP_PINMUX(c, 9, 0x180, 5, periph)
/* pc9_qeiqeb0g4_in */
#define PC9_QEIQEB0G4_IN       MCHP_PINMUX(c, 9, 0x184, 5, periph)
/* pc9_qspics_out */
#define PC9_QSPICS_OUT         MCHP_PINMUX(c, 9, 0x398, 27, periph)
/* pc9_scom0p0_out */
#define PC9_SCOM0P0_OUT        MCHP_PINMUX(c, 9, 0x39c, 3, periph)
/* pc9_scom0p2_in */
#define PC9_SCOM0P2_IN         MCHP_PINMUX(c, 9, 0x48, 5, periph)
/* pc9_scom0p2_out */
#define PC9_SCOM0P2_OUT        MCHP_PINMUX(c, 9, 0x398, 2, periph)
/* pc9_scom0p3_in */
#define PC9_SCOM0P3_IN         MCHP_PINMUX(c, 9, 0x4c, 12, periph)
/* pc9_scom0p3_out */
#define PC9_SCOM0P3_OUT        MCHP_PINMUX(c, 9, 0x398, 1, periph)
/* pc9_scom1p0_out */
#define PC9_SCOM1P0_OUT        MCHP_PINMUX(c, 9, 0x398, 3, periph)
/* pc9_scom1p2_in */
#define PC9_SCOM1P2_IN         MCHP_PINMUX(c, 9, 0x58, 12, periph)
/* pc9_scom1p2_out */
#define PC9_SCOM1P2_OUT        MCHP_PINMUX(c, 9, 0x398, 4, periph)
/* pc9_scom1p3_out */
#define PC9_SCOM1P3_OUT        MCHP_PINMUX(c, 9, 0x39c, 4, periph)
/* pc9_scom2p0_out */
#define PC9_SCOM2P0_OUT        MCHP_PINMUX(c, 9, 0x39c, 7, periph)
/* pc9_scom2p2_in */
#define PC9_SCOM2P2_IN         MCHP_PINMUX(c, 9, 0x68, 5, periph)
/* pc9_scom2p2_out */
#define PC9_SCOM2P2_OUT        MCHP_PINMUX(c, 9, 0x398, 6, periph)
/* pc9_scom2p3_in */
#define PC9_SCOM2P3_IN         MCHP_PINMUX(c, 9, 0x6c, 12, periph)
/* pc9_scom2p3_out */
#define PC9_SCOM2P3_OUT        MCHP_PINMUX(c, 9, 0x398, 5, periph)
/* pc9_scom3p0_out */
#define PC9_SCOM3P0_OUT        MCHP_PINMUX(c, 9, 0x398, 7, periph)
/* pc9_scom3p2_in */
#define PC9_SCOM3P2_IN         MCHP_PINMUX(c, 9, 0x78, 12, periph)
/* pc9_scom3p2_out */
#define PC9_SCOM3P2_OUT        MCHP_PINMUX(c, 9, 0x398, 8, periph)
/* pc9_scom3p3_out */
#define PC9_SCOM3P3_OUT        MCHP_PINMUX(c, 9, 0x39c, 8, periph)
/* pc9_scom4p0_out */
#define PC9_SCOM4P0_OUT        MCHP_PINMUX(c, 9, 0x39c, 11, periph)
/* pc9_scom4p2_in */
#define PC9_SCOM4P2_IN         MCHP_PINMUX(c, 9, 0x88, 5, periph)
/* pc9_scom4p2_out */
#define PC9_SCOM4P2_OUT        MCHP_PINMUX(c, 9, 0x398, 10, periph)
/* pc9_scom4p3_in */
#define PC9_SCOM4P3_IN         MCHP_PINMUX(c, 9, 0x8c, 12, periph)
/* pc9_scom4p3_out */
#define PC9_SCOM4P3_OUT        MCHP_PINMUX(c, 9, 0x398, 9, periph)
/* pc9_scom5p0_out */
#define PC9_SCOM5P0_OUT        MCHP_PINMUX(c, 9, 0x398, 11, periph)
/* pc9_scom5p2_in */
#define PC9_SCOM5P2_IN         MCHP_PINMUX(c, 9, 0x98, 12, periph)
/* pc9_scom5p2_out */
#define PC9_SCOM5P2_OUT        MCHP_PINMUX(c, 9, 0x398, 12, periph)
/* pc9_scom5p3_out */
#define PC9_SCOM5P3_OUT        MCHP_PINMUX(c, 9, 0x39c, 12, periph)
/* pc9_tc0wo0g1_in */
#define PC9_TC0WO0G1_IN        MCHP_PINMUX(c, 9, 0xcc, 12, periph)
/* pc9_tc0wo0_out */
#define PC9_TC0WO0_OUT         MCHP_PINMUX(c, 9, 0x39c, 21, periph)
/* pc9_tc0wo1g4_in */
#define PC9_TC0WO1G4_IN        MCHP_PINMUX(c, 9, 0xd8, 5, periph)
/* pc9_tc0wo1_out */
#define PC9_TC0WO1_OUT         MCHP_PINMUX(c, 9, 0x398, 18, periph)
/* pc9_tc1wo0g1_in */
#define PC9_TC1WO0G1_IN        MCHP_PINMUX(c, 9, 0xdc, 12, periph)
/* pc9_tc1wo0_out */
#define PC9_TC1WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 19, periph)
/* pc9_tc1wo1_out */
#define PC9_TC1WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 22, periph)
/* pc9_tc2wo0g1_in */
#define PC9_TC2WO0G1_IN        MCHP_PINMUX(c, 9, 0xec, 12, periph)
/* pc9_tc2wo0_out */
#define PC9_TC2WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 20, periph)
/* pc9_tc2wo1g4_in */
#define PC9_TC2WO1G4_IN        MCHP_PINMUX(c, 9, 0xf8, 5, periph)
/* pc9_tc2wo1_out */
#define PC9_TC2WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 23, periph)
/* pc9_tc3wo0g1_in */
#define PC9_TC3WO0G1_IN        MCHP_PINMUX(c, 9, 0xfc, 12, periph)
/* pc9_tc3wo0_out */
#define PC9_TC3WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 21, periph)
/* pc9_tc3wo1g4_in */
#define PC9_TC3WO1G4_IN        MCHP_PINMUX(c, 9, 0x108, 5, periph)
/* pc9_tc3wo1_out */
#define PC9_TC3WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 24, periph)
/* pc9_tc4wo0g1_in */
#define PC9_TC4WO0G1_IN        MCHP_PINMUX(c, 9, 0x10c, 12, periph)
/* pc9_tc4wo0_out */
#define PC9_TC4WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 22, periph)
/* pc9_tc4wo1g4_in */
#define PC9_TC4WO1G4_IN        MCHP_PINMUX(c, 9, 0x118, 5, periph)
/* pc9_tc4wo1_out */
#define PC9_TC4WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 25, periph)
/* pc9_tc5wo0g1_in */
#define PC9_TC5WO0G1_IN        MCHP_PINMUX(c, 9, 0x11c, 12, periph)
/* pc9_tc5wo0_out */
#define PC9_TC5WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 23, periph)
/* pc9_tc5wo1g4_in */
#define PC9_TC5WO1G4_IN        MCHP_PINMUX(c, 9, 0x128, 5, periph)
/* pc9_tc5wo1_out */
#define PC9_TC5WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 26, periph)
/* pc9_tc6wo0g1_in */
#define PC9_TC6WO0G1_IN        MCHP_PINMUX(c, 9, 0x12c, 12, periph)
/* pc9_tc6wo0_out */
#define PC9_TC6WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 24, periph)
/* pc9_tc6wo1g4_in */
#define PC9_TC6WO1G4_IN        MCHP_PINMUX(c, 9, 0x138, 5, periph)
/* pc9_tc6wo1_out */
#define PC9_TC6WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 27, periph)
/* pc9_tc7wo0g1_in */
#define PC9_TC7WO0G1_IN        MCHP_PINMUX(c, 9, 0x13c, 12, periph)
/* pc9_tc7wo0_out */
#define PC9_TC7WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 25, periph)
/* pc9_tc7wo1g4_in */
#define PC9_TC7WO1G4_IN        MCHP_PINMUX(c, 9, 0x148, 5, periph)
/* pc9_tc7wo1_out */
#define PC9_TC7WO1_OUT         MCHP_PINMUX(c, 9, 0x39c, 28, periph)
/* pc9_tc8wo0g1_in */
#define PC9_TC8WO0G1_IN        MCHP_PINMUX(c, 9, 0x14c, 12, periph)
/* pc9_tc8wo0_out */
#define PC9_TC8WO0_OUT         MCHP_PINMUX(c, 9, 0x398, 26, periph)
/* pc9_tc9wo0g4_in */
#define PC9_TC9WO0G4_IN        MCHP_PINMUX(c, 9, 0x160, 5, periph)
/* pc9_tc9wo0_out */
#define PC9_TC9WO0_OUT         MCHP_PINMUX(c, 9, 0x39c, 29, periph)
/* pc9_tcc0wo0_out */
#define PC9_TCC0WO0_OUT        MCHP_PINMUX(c, 9, 0x398, 13, periph)
/* pc9_tcc0wo1_out */
#define PC9_TCC0WO1_OUT        MCHP_PINMUX(c, 9, 0x39c, 15, periph)
/* pc9_tcc0wo3_out */
#define PC9_TCC0WO3_OUT        MCHP_PINMUX(c, 9, 0x39c, 14, periph)
/* pc9_tcc0wo4_out */
#define PC9_TCC0WO4_OUT        MCHP_PINMUX(c, 9, 0x398, 14, periph)
/* pc9_tcc0wo5_out */
#define PC9_TCC0WO5_OUT        MCHP_PINMUX(c, 9, 0x39c, 16, periph)
/* pc9_tcc1wo0_out */
#define PC9_TCC1WO0_OUT        MCHP_PINMUX(c, 9, 0x398, 15, periph)
/* pc9_tcc1wo1_out */
#define PC9_TCC1WO1_OUT        MCHP_PINMUX(c, 9, 0x39c, 18, periph)
/* pc9_tcc1wo3_out */
#define PC9_TCC1WO3_OUT        MCHP_PINMUX(c, 9, 0x39c, 17, periph)
/* pc9_tcc1wo4_out */
#define PC9_TCC1WO4_OUT        MCHP_PINMUX(c, 9, 0x398, 16, periph)
/* pc9_tcc1wo5_out */
#define PC9_TCC1WO5_OUT        MCHP_PINMUX(c, 9, 0x39c, 19, periph)
/* pc9_tcc2wo0_out */
#define PC9_TCC2WO0_OUT        MCHP_PINMUX(c, 9, 0x398, 17, periph)
/* pc9_tcc2wo1_out */
#define PC9_TCC2WO1_OUT        MCHP_PINMUX(c, 9, 0x39c, 20, periph)
/* pc9_tstbus0_out */
#define PC9_TSTBUS0_OUT        MCHP_PINMUX(c, 9, 0x398, 32, periph)
/* pc9_tstbus2_out */
#define PC9_TSTBUS2_OUT        MCHP_PINMUX(c, 9, 0x39c, 34, periph)
/* pc9_tstbus4_out */
#define PC9_TSTBUS4_OUT        MCHP_PINMUX(c, 9, 0x398, 33, periph)
/* pc9_tstbus6_out */
#define PC9_TSTBUS6_OUT        MCHP_PINMUX(c, 9, 0x39c, 35, periph)
/* pc9_tstbus8_out */
#define PC9_TSTBUS8_OUT        MCHP_PINMUX(c, 9, 0x398, 34, periph)
/* pc11_cclo0_out */
#define PC11_CCLO0_OUT         MCHP_PINMUX(c, 11, 0x3a4, 1, periph)
/* pc11_gmac_tsucomp_out */
#define PC11_GMAC_TSUCOMP_OUT  MCHP_PINMUX(c, 11, 0x3a4, 14, periph)
/* pc11_qeiccmp0_out */
#define PC11_QEICCMP0_OUT      MCHP_PINMUX(c, 11, 0x3a4, 13, periph)
/* pc11_qeiqeb0g5_in */
#define PC11_QEIQEB0G5_IN      MCHP_PINMUX(c, 11, 0x188, 13, periph)
/* pc11_qspics_out */
#define PC11_QSPICS_OUT        MCHP_PINMUX(c, 11, 0x3a4, 12, periph)
/* pc11_scom1p3_out */
#define PC11_SCOM1P3_OUT       MCHP_PINMUX(c, 11, 0x3a4, 2, periph)
/* pc11_scom2p0_out */
#define PC11_SCOM2P0_OUT       MCHP_PINMUX(c, 11, 0x3a4, 3, periph)
/* pc11_tc8wo1g5_in */
#define PC11_TC8WO1G5_IN       MCHP_PINMUX(c, 11, 0x158, 13, periph)
/* pc11_tc8wo1_out */
#define PC11_TC8WO1_OUT        MCHP_PINMUX(c, 11, 0x3a4, 10, periph)
/* pc11_tc9wo1g5_in */
#define PC11_TC9WO1G5_IN       MCHP_PINMUX(c, 11, 0x168, 13, periph)
/* pc11_tc9wo1_out */
#define PC11_TC9WO1_OUT        MCHP_PINMUX(c, 11, 0x3a4, 11, periph)
/* pc11_tcc0wo1_out */
#define PC11_TCC0WO1_OUT       MCHP_PINMUX(c, 11, 0x3a4, 6, periph)
/* pc11_tcc0wo2_out */
#define PC11_TCC0WO2_OUT       MCHP_PINMUX(c, 11, 0x3a4, 5, periph)
/* pc11_tcc0wo4_out */
#define PC11_TCC0WO4_OUT       MCHP_PINMUX(c, 11, 0x3a4, 4, periph)
/* pc11_tcc1wo1_out */
#define PC11_TCC1WO1_OUT       MCHP_PINMUX(c, 11, 0x3a4, 9, periph)
/* pc11_tcc1wo2_out */
#define PC11_TCC1WO2_OUT       MCHP_PINMUX(c, 11, 0x3a4, 8, periph)
/* pc11_tcc1wo4_out */
#define PC11_TCC1WO4_OUT       MCHP_PINMUX(c, 11, 0x3a4, 7, periph)
/* pc11_tstbus3_out */
#define PC11_TSTBUS3_OUT       MCHP_PINMUX(c, 11, 0x3a4, 15, periph)
/* pc11_tstbus7_out */
#define PC11_TSTBUS7_OUT       MCHP_PINMUX(c, 11, 0x3a4, 16, periph)
/* pc11_tstbus11_out */
#define PC11_TSTBUS11_OUT      MCHP_PINMUX(c, 11, 0x3a4, 17, periph)
/* pd3_accmpten_in */
#define PD3_ACCMPTEN_IN        MCHP_PINMUX(d, 3, 0x18c, 13, periph)
/* pd3_ac_cmp1_out */
#define PD3_AC_CMP1_OUT        MCHP_PINMUX(d, 3, 0x3cc, 36, periph)
/* pd3_ac_cmptout_out */
#define PD3_AC_CMPTOUT_OUT     MCHP_PINMUX(d, 3, 0x3cc, 37, periph)
/* pd3_can1_tx_out */
#define PD3_CAN1_TX_OUT        MCHP_PINMUX(d, 3, 0x3cc, 38, periph)
/* pd3_cclin0_in */
#define PD3_CCLIN0_IN          MCHP_PINMUX(d, 3, 0xb4, 13, periph)
/* pd3_cclin3_in */
#define PD3_CCLIN3_IN          MCHP_PINMUX(d, 3, 0xc0, 13, periph)
/* pd3_cclo1_out */
#define PD3_CCLO1_OUT          MCHP_PINMUX(d, 3, 0x3cc, 1, periph)
/* pd3_coexwlanact_in */
#define PD3_COEXWLANACT_IN     MCHP_PINMUX(d, 3, 0x194, 6, periph)
/* pd3_coex_bt_state_out */
#define PD3_COEX_BT_STATE_OUT  MCHP_PINMUX(d, 3, 0x3c8, 37, periph)
/* pd3_extint0_in */
#define PD3_EXTINT0_IN         MCHP_PINMUX(d, 3, 0x0, 13, periph)
/* pd3_extint3_in */
#define PD3_EXTINT3_IN         MCHP_PINMUX(d, 3, 0xc, 6, periph)
/* pd3_fectrl1_out */
#define PD3_FECTRL1_OUT        MCHP_PINMUX(d, 3, 0x3c8, 35, periph)
/* pd3_fectrl2_out */
#define PD3_FECTRL2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 36, periph)
/* pd3_fectrl3_out */
#define PD3_FECTRL3_OUT        MCHP_PINMUX(d, 3, 0x3cc, 39, periph)
/* pd3_fectrl5_out */
#define PD3_FECTRL5_OUT        MCHP_PINMUX(d, 3, 0x3cc, 40, periph)
/* pd3_nmi_in */
#define PD3_NMI_IN             MCHP_PINMUX(d, 3, 0x3c, 6, periph)
/* pd3_qd0_in */
#define PD3_QD0_IN             MCHP_PINMUX(d, 3, 0xa0, 6, periph)
/* pd3_qd0_out */
#define PD3_QD0_OUT            MCHP_PINMUX(d, 3, 0x3cc, 33, periph)
/* pd3_qd1_in */
#define PD3_QD1_IN             MCHP_PINMUX(d, 3, 0xa4, 13, periph)
/* pd3_qd1_out */
#define PD3_QD1_OUT            MCHP_PINMUX(d, 3, 0x3c8, 30, periph)
/* pd3_qd2_out */
#define PD3_QD2_OUT            MCHP_PINMUX(d, 3, 0x3c8, 29, periph)
/* pd3_qd3_out */
#define PD3_QD3_OUT            MCHP_PINMUX(d, 3, 0x3c8, 28, periph)
/* pd3_qeiccmp0_out */
#define PD3_QEICCMP0_OUT       MCHP_PINMUX(d, 3, 0x3c8, 31, periph)
/* pd3_qeihome0g1_in */
#define PD3_QEIHOME0G1_IN      MCHP_PINMUX(d, 3, 0x16c, 13, periph)
/* pd3_qeiqea0g4_in */
#define PD3_QEIQEA0G4_IN       MCHP_PINMUX(d, 3, 0x180, 6, periph)
/* pd3_qeiqeb0g4_in */
#define PD3_QEIQEB0G4_IN       MCHP_PINMUX(d, 3, 0x184, 6, periph)
/* pd3_qspics_out */
#define PD3_QSPICS_OUT         MCHP_PINMUX(d, 3, 0x3c8, 27, periph)
/* pd3_scom0p0_out */
#define PD3_SCOM0P0_OUT        MCHP_PINMUX(d, 3, 0x3cc, 3, periph)
/* pd3_scom0p2_in */
#define PD3_SCOM0P2_IN         MCHP_PINMUX(d, 3, 0x48, 6, periph)
/* pd3_scom0p2_out */
#define PD3_SCOM0P2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 2, periph)
/* pd3_scom0p3_in */
#define PD3_SCOM0P3_IN         MCHP_PINMUX(d, 3, 0x4c, 13, periph)
/* pd3_scom0p3_out */
#define PD3_SCOM0P3_OUT        MCHP_PINMUX(d, 3, 0x3c8, 1, periph)
/* pd3_scom1p0_out */
#define PD3_SCOM1P0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 3, periph)
/* pd3_scom1p2_in */
#define PD3_SCOM1P2_IN         MCHP_PINMUX(d, 3, 0x58, 13, periph)
/* pd3_scom1p2_out */
#define PD3_SCOM1P2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 4, periph)
/* pd3_scom1p3_out */
#define PD3_SCOM1P3_OUT        MCHP_PINMUX(d, 3, 0x3cc, 4, periph)
/* pd3_scom2p0_out */
#define PD3_SCOM2P0_OUT        MCHP_PINMUX(d, 3, 0x3cc, 7, periph)
/* pd3_scom2p2_in */
#define PD3_SCOM2P2_IN         MCHP_PINMUX(d, 3, 0x68, 6, periph)
/* pd3_scom2p2_out */
#define PD3_SCOM2P2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 6, periph)
/* pd3_scom2p3_in */
#define PD3_SCOM2P3_IN         MCHP_PINMUX(d, 3, 0x6c, 13, periph)
/* pd3_scom2p3_out */
#define PD3_SCOM2P3_OUT        MCHP_PINMUX(d, 3, 0x3c8, 5, periph)
/* pd3_scom3p0_out */
#define PD3_SCOM3P0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 7, periph)
/* pd3_scom3p2_in */
#define PD3_SCOM3P2_IN         MCHP_PINMUX(d, 3, 0x78, 13, periph)
/* pd3_scom3p2_out */
#define PD3_SCOM3P2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 8, periph)
/* pd3_scom3p3_out */
#define PD3_SCOM3P3_OUT        MCHP_PINMUX(d, 3, 0x3cc, 8, periph)
/* pd3_scom4p0_out */
#define PD3_SCOM4P0_OUT        MCHP_PINMUX(d, 3, 0x3cc, 11, periph)
/* pd3_scom4p2_in */
#define PD3_SCOM4P2_IN         MCHP_PINMUX(d, 3, 0x88, 6, periph)
/* pd3_scom4p2_out */
#define PD3_SCOM4P2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 10, periph)
/* pd3_scom4p3_in */
#define PD3_SCOM4P3_IN         MCHP_PINMUX(d, 3, 0x8c, 13, periph)
/* pd3_scom4p3_out */
#define PD3_SCOM4P3_OUT        MCHP_PINMUX(d, 3, 0x3c8, 9, periph)
/* pd3_scom5p0_out */
#define PD3_SCOM5P0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 11, periph)
/* pd3_scom5p2_in */
#define PD3_SCOM5P2_IN         MCHP_PINMUX(d, 3, 0x98, 13, periph)
/* pd3_scom5p2_out */
#define PD3_SCOM5P2_OUT        MCHP_PINMUX(d, 3, 0x3c8, 12, periph)
/* pd3_scom5p3_out */
#define PD3_SCOM5P3_OUT        MCHP_PINMUX(d, 3, 0x3cc, 12, periph)
/* pd3_tc0wo0g1_in */
#define PD3_TC0WO0G1_IN        MCHP_PINMUX(d, 3, 0xcc, 13, periph)
/* pd3_tc0wo0_out */
#define PD3_TC0WO0_OUT         MCHP_PINMUX(d, 3, 0x3cc, 21, periph)
/* pd3_tc0wo1g4_in */
#define PD3_TC0WO1G4_IN        MCHP_PINMUX(d, 3, 0xd8, 6, periph)
/* pd3_tc0wo1_out */
#define PD3_TC0WO1_OUT         MCHP_PINMUX(d, 3, 0x3c8, 18, periph)
/* pd3_tc1wo0g1_in */
#define PD3_TC1WO0G1_IN        MCHP_PINMUX(d, 3, 0xdc, 13, periph)
/* pd3_tc1wo0_out */
#define PD3_TC1WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 19, periph)
/* pd3_tc1wo1_out */
#define PD3_TC1WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 22, periph)
/* pd3_tc2wo0g1_in */
#define PD3_TC2WO0G1_IN        MCHP_PINMUX(d, 3, 0xec, 13, periph)
/* pd3_tc2wo0_out */
#define PD3_TC2WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 20, periph)
/* pd3_tc2wo1g4_in */
#define PD3_TC2WO1G4_IN        MCHP_PINMUX(d, 3, 0xf8, 6, periph)
/* pd3_tc2wo1_out */
#define PD3_TC2WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 23, periph)
/* pd3_tc3wo0g1_in */
#define PD3_TC3WO0G1_IN        MCHP_PINMUX(d, 3, 0xfc, 13, periph)
/* pd3_tc3wo0_out */
#define PD3_TC3WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 21, periph)
/* pd3_tc3wo1g4_in */
#define PD3_TC3WO1G4_IN        MCHP_PINMUX(d, 3, 0x108, 6, periph)
/* pd3_tc3wo1_out */
#define PD3_TC3WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 24, periph)
/* pd3_tc4wo0g1_in */
#define PD3_TC4WO0G1_IN        MCHP_PINMUX(d, 3, 0x10c, 13, periph)
/* pd3_tc4wo0_out */
#define PD3_TC4WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 22, periph)
/* pd3_tc4wo1g4_in */
#define PD3_TC4WO1G4_IN        MCHP_PINMUX(d, 3, 0x118, 6, periph)
/* pd3_tc4wo1_out */
#define PD3_TC4WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 25, periph)
/* pd3_tc5wo0g1_in */
#define PD3_TC5WO0G1_IN        MCHP_PINMUX(d, 3, 0x11c, 13, periph)
/* pd3_tc5wo0_out */
#define PD3_TC5WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 23, periph)
/* pd3_tc5wo1g4_in */
#define PD3_TC5WO1G4_IN        MCHP_PINMUX(d, 3, 0x128, 6, periph)
/* pd3_tc5wo1_out */
#define PD3_TC5WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 26, periph)
/* pd3_tc6wo0g1_in */
#define PD3_TC6WO0G1_IN        MCHP_PINMUX(d, 3, 0x12c, 13, periph)
/* pd3_tc6wo0_out */
#define PD3_TC6WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 24, periph)
/* pd3_tc6wo1g4_in */
#define PD3_TC6WO1G4_IN        MCHP_PINMUX(d, 3, 0x138, 6, periph)
/* pd3_tc6wo1_out */
#define PD3_TC6WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 27, periph)
/* pd3_tc7wo0g1_in */
#define PD3_TC7WO0G1_IN        MCHP_PINMUX(d, 3, 0x13c, 13, periph)
/* pd3_tc7wo0_out */
#define PD3_TC7WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 25, periph)
/* pd3_tc7wo1g4_in */
#define PD3_TC7WO1G4_IN        MCHP_PINMUX(d, 3, 0x148, 6, periph)
/* pd3_tc7wo1_out */
#define PD3_TC7WO1_OUT         MCHP_PINMUX(d, 3, 0x3cc, 28, periph)
/* pd3_tc8wo0g1_in */
#define PD3_TC8WO0G1_IN        MCHP_PINMUX(d, 3, 0x14c, 13, periph)
/* pd3_tc8wo0_out */
#define PD3_TC8WO0_OUT         MCHP_PINMUX(d, 3, 0x3c8, 26, periph)
/* pd3_tc9wo0g4_in */
#define PD3_TC9WO0G4_IN        MCHP_PINMUX(d, 3, 0x160, 6, periph)
/* pd3_tc9wo0_out */
#define PD3_TC9WO0_OUT         MCHP_PINMUX(d, 3, 0x3cc, 29, periph)
/* pd3_tcc0wo0_out */
#define PD3_TCC0WO0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 13, periph)
/* pd3_tcc0wo1_out */
#define PD3_TCC0WO1_OUT        MCHP_PINMUX(d, 3, 0x3cc, 15, periph)
/* pd3_tcc0wo3_out */
#define PD3_TCC0WO3_OUT        MCHP_PINMUX(d, 3, 0x3cc, 14, periph)
/* pd3_tcc0wo4_out */
#define PD3_TCC0WO4_OUT        MCHP_PINMUX(d, 3, 0x3c8, 14, periph)
/* pd3_tcc0wo5_out */
#define PD3_TCC0WO5_OUT        MCHP_PINMUX(d, 3, 0x3cc, 16, periph)
/* pd3_tcc1wo0_out */
#define PD3_TCC1WO0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 15, periph)
/* pd3_tcc1wo1_out */
#define PD3_TCC1WO1_OUT        MCHP_PINMUX(d, 3, 0x3cc, 18, periph)
/* pd3_tcc1wo3_out */
#define PD3_TCC1WO3_OUT        MCHP_PINMUX(d, 3, 0x3cc, 17, periph)
/* pd3_tcc1wo4_out */
#define PD3_TCC1WO4_OUT        MCHP_PINMUX(d, 3, 0x3c8, 16, periph)
/* pd3_tcc1wo5_out */
#define PD3_TCC1WO5_OUT        MCHP_PINMUX(d, 3, 0x3cc, 19, periph)
/* pd3_tcc2wo0_out */
#define PD3_TCC2WO0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 17, periph)
/* pd3_tcc2wo1_out */
#define PD3_TCC2WO1_OUT        MCHP_PINMUX(d, 3, 0x3cc, 20, periph)
/* pd3_tstbus0_out */
#define PD3_TSTBUS0_OUT        MCHP_PINMUX(d, 3, 0x3c8, 32, periph)
/* pd3_tstbus2_out */
#define PD3_TSTBUS2_OUT        MCHP_PINMUX(d, 3, 0x3cc, 34, periph)
/* pd3_tstbus4_out */
#define PD3_TSTBUS4_OUT        MCHP_PINMUX(d, 3, 0x3c8, 33, periph)
/* pd3_tstbus6_out */
#define PD3_TSTBUS6_OUT        MCHP_PINMUX(d, 3, 0x3cc, 35, periph)
/* pd3_tstbus8_out */
#define PD3_TSTBUS8_OUT        MCHP_PINMUX(d, 3, 0x3c8, 34, periph)
/* pd4_cclin1_in */
#define PD4_CCLIN1_IN          MCHP_PINMUX(d, 4, 0xb8, 13, periph)
/* pd4_cclin4_in */
#define PD4_CCLIN4_IN          MCHP_PINMUX(d, 4, 0xc4, 13, periph)
/* pd4_cclo0_out */
#define PD4_CCLO0_OUT          MCHP_PINMUX(d, 4, 0x3d4, 1, periph)
/* pd4_cclo1_out */
#define PD4_CCLO1_OUT          MCHP_PINMUX(d, 4, 0x3d0, 1, periph)
/* pd4_coex_rf_act_out */
#define PD4_COEX_RF_ACT_OUT    MCHP_PINMUX(d, 4, 0x3d0, 41, periph)
/* pd4_extint1_in */
#define PD4_EXTINT1_IN         MCHP_PINMUX(d, 4, 0x4, 13, periph)
/* pd4_fectrl0_out */
#define PD4_FECTRL0_OUT        MCHP_PINMUX(d, 4, 0x3d0, 40, periph)
/* pd4_gmac_tsucomp_out */
#define PD4_GMAC_TSUCOMP_OUT   MCHP_PINMUX(d, 4, 0x3d4, 14, periph)
/* pd4_qd0_out */
#define PD4_QD0_OUT            MCHP_PINMUX(d, 4, 0x3d0, 35, periph)
/* pd4_qd2_in */
#define PD4_QD2_IN             MCHP_PINMUX(d, 4, 0xa8, 13, periph)
/* pd4_qd2_out */
#define PD4_QD2_OUT            MCHP_PINMUX(d, 4, 0x3d0, 37, periph)
/* pd4_qd3_out */
#define PD4_QD3_OUT            MCHP_PINMUX(d, 4, 0x3d0, 36, periph)
/* pd4_qeiccmp0_out */
#define PD4_QEICCMP0_OUT       MCHP_PINMUX(d, 4, 0x3d4, 13, periph)
/* pd4_qeihome0g2_in */
#define PD4_QEIHOME0G2_IN      MCHP_PINMUX(d, 4, 0x170, 13, periph)
/* pd4_qeiindx0g2_in */
#define PD4_QEIINDX0G2_IN      MCHP_PINMUX(d, 4, 0x174, 13, periph)
/* pd4_qeiqeb0g5_in */
#define PD4_QEIQEB0G5_IN       MCHP_PINMUX(d, 4, 0x188, 5, periph)
/* pd4_qspics_out */
#define PD4_QSPICS_OUT         MCHP_PINMUX(d, 4, 0x3d0, 34, periph)
/* pd4_scom0p0_in */
#define PD4_SCOM0P0_IN         MCHP_PINMUX(d, 4, 0x40, 13, periph)
/* pd4_scom0p0_out */
#define PD4_SCOM0P0_OUT        MCHP_PINMUX(d, 4, 0x3d0, 2, periph)
/* pd4_scom0p2_out */
#define PD4_SCOM0P2_OUT        MCHP_PINMUX(d, 4, 0x3d0, 4, periph)
/* pd4_scom0p3_out */
#define PD4_SCOM0P3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 3, periph)
/* pd4_scom1p2_out */
#define PD4_SCOM1P2_OUT        MCHP_PINMUX(d, 4, 0x3d0, 6, periph)
/* pd4_scom1p3_in */
#define PD4_SCOM1P3_IN         MCHP_PINMUX(d, 4, 0x5c, 13, periph)
/* pd4_scom1p3_out */
#define PD4_SCOM1P3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 5, periph)
/* pd4_scom2p0_in */
#define PD4_SCOM2P0_IN         MCHP_PINMUX(d, 4, 0x60, 13, periph)
/* pd4_scom2p0_out */
#define PD4_SCOM2P0_OUT        MCHP_PINMUX(d, 4, 0x3d0, 7, periph)
/* pd4_scom2p2_out */
#define PD4_SCOM2P2_OUT        MCHP_PINMUX(d, 4, 0x3d0, 9, periph)
/* pd4_scom2p3_out */
#define PD4_SCOM2P3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 8, periph)
/* pd4_scom3p2_out */
#define PD4_SCOM3P2_OUT        MCHP_PINMUX(d, 4, 0x3d0, 11, periph)
/* pd4_scom3p3_in */
#define PD4_SCOM3P3_IN         MCHP_PINMUX(d, 4, 0x7c, 13, periph)
/* pd4_scom3p3_out */
#define PD4_SCOM3P3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 10, periph)
/* pd4_scom4p0_in */
#define PD4_SCOM4P0_IN         MCHP_PINMUX(d, 4, 0x80, 13, periph)
/* pd4_scom4p0_out */
#define PD4_SCOM4P0_OUT        MCHP_PINMUX(d, 4, 0x3d0, 12, periph)
/* pd4_scom4p2_out */
#define PD4_SCOM4P2_OUT        MCHP_PINMUX(d, 4, 0x3d0, 14, periph)
/* pd4_scom4p3_out */
#define PD4_SCOM4P3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 13, periph)
/* pd4_scom5p2_out */
#define PD4_SCOM5P2_OUT        MCHP_PINMUX(d, 4, 0x3d0, 16, periph)
/* pd4_scom5p3_in */
#define PD4_SCOM5P3_IN         MCHP_PINMUX(d, 4, 0x9c, 13, periph)
/* pd4_scom5p3_out */
#define PD4_SCOM5P3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 15, periph)
/* pd4_tc0wo0g2_in */
#define PD4_TC0WO0G2_IN        MCHP_PINMUX(d, 4, 0xd0, 13, periph)
/* pd4_tc0wo1_out */
#define PD4_TC0WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 24, periph)
/* pd4_tc1wo1g2_in */
#define PD4_TC1WO1G2_IN        MCHP_PINMUX(d, 4, 0xe4, 13, periph)
/* pd4_tc1wo1_out */
#define PD4_TC1WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 25, periph)
/* pd4_tc2wo1g2_in */
#define PD4_TC2WO1G2_IN        MCHP_PINMUX(d, 4, 0xf4, 13, periph)
/* pd4_tc2wo1_out */
#define PD4_TC2WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 26, periph)
/* pd4_tc3wo1g2_in */
#define PD4_TC3WO1G2_IN        MCHP_PINMUX(d, 4, 0x104, 13, periph)
/* pd4_tc3wo1_out */
#define PD4_TC3WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 27, periph)
/* pd4_tc4wo1g2_in */
#define PD4_TC4WO1G2_IN        MCHP_PINMUX(d, 4, 0x114, 13, periph)
/* pd4_tc4wo1_out */
#define PD4_TC4WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 28, periph)
/* pd4_tc5wo1g2_in */
#define PD4_TC5WO1G2_IN        MCHP_PINMUX(d, 4, 0x124, 13, periph)
/* pd4_tc5wo1_out */
#define PD4_TC5WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 29, periph)
/* pd4_tc6wo1g2_in */
#define PD4_TC6WO1G2_IN        MCHP_PINMUX(d, 4, 0x134, 13, periph)
/* pd4_tc6wo1_out */
#define PD4_TC6WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 30, periph)
/* pd4_tc7wo1g2_in */
#define PD4_TC7WO1G2_IN        MCHP_PINMUX(d, 4, 0x144, 13, periph)
/* pd4_tc7wo1_out */
#define PD4_TC7WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 31, periph)
/* pd4_tc8wo1g2_in */
#define PD4_TC8WO1G2_IN        MCHP_PINMUX(d, 4, 0x154, 13, periph)
/* pd4_tc8wo1g5_in */
#define PD4_TC8WO1G5_IN        MCHP_PINMUX(d, 4, 0x158, 5, periph)
/* pd4_tc8wo1_out */
#define PD4_TC8WO1_OUT         MCHP_PINMUX(d, 4, 0x3d0, 32, periph)
/* pd4_tc9wo0g2_in */
#define PD4_TC9WO0G2_IN        MCHP_PINMUX(d, 4, 0x15c, 13, periph)
/* pd4_tc9wo0_out */
#define PD4_TC9WO0_OUT         MCHP_PINMUX(d, 4, 0x3d0, 33, periph)
/* pd4_tc9wo1g5_in */
#define PD4_TC9WO1G5_IN        MCHP_PINMUX(d, 4, 0x168, 5, periph)
/* pd4_tc9wo1_out */
#define PD4_TC9WO1_OUT         MCHP_PINMUX(d, 4, 0x3d4, 11, periph)
/* pd4_tcc0wo1_out */
#define PD4_TCC0WO1_OUT        MCHP_PINMUX(d, 4, 0x3d0, 17, periph)
/* pd4_tcc0wo2_out */
#define PD4_TCC0WO2_OUT        MCHP_PINMUX(d, 4, 0x3d4, 5, periph)
/* pd4_tcc0wo3_out */
#define PD4_TCC0WO3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 19, periph)
/* pd4_tcc0wo4_out */
#define PD4_TCC0WO4_OUT        MCHP_PINMUX(d, 4, 0x3d4, 4, periph)
/* pd4_tcc0wo5_out */
#define PD4_TCC0WO5_OUT        MCHP_PINMUX(d, 4, 0x3d0, 18, periph)
/* pd4_tcc1wo1_out */
#define PD4_TCC1WO1_OUT        MCHP_PINMUX(d, 4, 0x3d0, 20, periph)
/* pd4_tcc1wo2_out */
#define PD4_TCC1WO2_OUT        MCHP_PINMUX(d, 4, 0x3d4, 8, periph)
/* pd4_tcc1wo3_out */
#define PD4_TCC1WO3_OUT        MCHP_PINMUX(d, 4, 0x3d0, 22, periph)
/* pd4_tcc1wo4_out */
#define PD4_TCC1WO4_OUT        MCHP_PINMUX(d, 4, 0x3d4, 7, periph)
/* pd4_tcc1wo5_out */
#define PD4_TCC1WO5_OUT        MCHP_PINMUX(d, 4, 0x3d0, 21, periph)
/* pd4_tcc2wo1_out */
#define PD4_TCC2WO1_OUT        MCHP_PINMUX(d, 4, 0x3d0, 23, periph)
/* pd4_tstbus3_out */
#define PD4_TSTBUS3_OUT        MCHP_PINMUX(d, 4, 0x3d4, 15, periph)
/* pd4_tstbus5_out */
#define PD4_TSTBUS5_OUT        MCHP_PINMUX(d, 4, 0x3d0, 38, periph)
/* pd4_tstbus7_out */
#define PD4_TSTBUS7_OUT        MCHP_PINMUX(d, 4, 0x3d4, 16, periph)
/* pd4_tstbus9_out */
#define PD4_TSTBUS9_OUT        MCHP_PINMUX(d, 4, 0x3d0, 39, periph)
/* pd4_tstbus11_out */
#define PD4_TSTBUS11_OUT       MCHP_PINMUX(d, 4, 0x3d4, 17, periph)
/* pd5_qspi_sck_out */
#define PD5_QSPI_SCK_OUT       MCHP_PINMUX(d, 5, 0x3d8, 7, periph)
/* pd5_refi_in */
#define PD5_REFI_IN            MCHP_PINMUX(d, 5, 0xb0, 4, periph)
/* pd5_refo1_out */
#define PD5_REFO1_OUT          MCHP_PINMUX(d, 5, 0x3d8, 8, periph)
/* pd5_refo2_out */
#define PD5_REFO2_OUT          MCHP_PINMUX(d, 5, 0x3d8, 9, periph)
/* pd5_refo3_out */
#define PD5_REFO3_OUT          MCHP_PINMUX(d, 5, 0x3d8, 10, periph)
/* pd5_refo4_out */
#define PD5_REFO4_OUT          MCHP_PINMUX(d, 5, 0x3d8, 11, periph)
/* pd5_scom0p1_in */
#define PD5_SCOM0P1_IN         MCHP_PINMUX(d, 5, 0x44, 4, periph)
/* pd5_scom0p1_out */
#define PD5_SCOM0P1_OUT        MCHP_PINMUX(d, 5, 0x3d8, 1, periph)
/* pd5_scom1p1_in */
#define PD5_SCOM1P1_IN         MCHP_PINMUX(d, 5, 0x54, 4, periph)
/* pd5_scom1p1_out */
#define PD5_SCOM1P1_OUT        MCHP_PINMUX(d, 5, 0x3d8, 2, periph)
/* pd5_scom2p1_in */
#define PD5_SCOM2P1_IN         MCHP_PINMUX(d, 5, 0x64, 4, periph)
/* pd5_scom2p1_out */
#define PD5_SCOM2P1_OUT        MCHP_PINMUX(d, 5, 0x3d8, 3, periph)
/* pd5_scom3p1_in */
#define PD5_SCOM3P1_IN         MCHP_PINMUX(d, 5, 0x74, 4, periph)
/* pd5_scom3p1_out */
#define PD5_SCOM3P1_OUT        MCHP_PINMUX(d, 5, 0x3d8, 4, periph)
/* pd5_scom4p1_in */
#define PD5_SCOM4P1_IN         MCHP_PINMUX(d, 5, 0x84, 4, periph)
/* pd5_scom4p1_out */
#define PD5_SCOM4P1_OUT        MCHP_PINMUX(d, 5, 0x3d8, 5, periph)
/* pd5_scom5p1_in */
#define PD5_SCOM5P1_IN         MCHP_PINMUX(d, 5, 0x94, 4, periph)
/* pd5_scom5p1_out */
#define PD5_SCOM5P1_OUT        MCHP_PINMUX(d, 5, 0x3d8, 6, periph)
/* pd6_accmpten_in */
#define PD6_ACCMPTEN_IN        MCHP_PINMUX(d, 6, 0x18c, 8, periph)
/* pd6_ac_cmp0_out */
#define PD6_AC_CMP0_OUT        MCHP_PINMUX(d, 6, 0x3e0, 40, periph)
/* pd6_ac_cmptrdy_out */
#define PD6_AC_CMPTRDY_OUT     MCHP_PINMUX(d, 6, 0x3e0, 41, periph)
/* pd6_can1rx_in */
#define PD6_CAN1RX_IN          MCHP_PINMUX(d, 6, 0x190, 13, periph)
/* pd6_cclin0_in */
#define PD6_CCLIN0_IN          MCHP_PINMUX(d, 6, 0xb4, 8, periph)
/* pd6_cclin2_in */
#define PD6_CCLIN2_IN          MCHP_PINMUX(d, 6, 0xbc, 13, periph)
/* pd6_cclin3_in */
#define PD6_CCLIN3_IN          MCHP_PINMUX(d, 6, 0xc0, 8, periph)
/* pd6_cclin5_in */
#define PD6_CCLIN5_IN          MCHP_PINMUX(d, 6, 0xc8, 13, periph)
/* pd6_cclo0_out */
#define PD6_CCLO0_OUT          MCHP_PINMUX(d, 6, 0x3e0, 1, periph)
/* pd6_coex_bt_state_out */
#define PD6_COEX_BT_STATE_OUT  MCHP_PINMUX(d, 6, 0x3dc, 37, periph)
/* pd6_extint0_in */
#define PD6_EXTINT0_IN         MCHP_PINMUX(d, 6, 0x0, 8, periph)
/* pd6_extint2_in */
#define PD6_EXTINT2_IN         MCHP_PINMUX(d, 6, 0x8, 13, periph)
/* pd6_fectrl1_out */
#define PD6_FECTRL1_OUT        MCHP_PINMUX(d, 6, 0x3dc, 35, periph)
/* pd6_fectrl2_out */
#define PD6_FECTRL2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 36, periph)
/* pd6_fectrl4_out */
#define PD6_FECTRL4_OUT        MCHP_PINMUX(d, 6, 0x3e0, 42, periph)
/* pd6_qd0_out */
#define PD6_QD0_OUT            MCHP_PINMUX(d, 6, 0x3e0, 36, periph)
/* pd6_qd1_in */
#define PD6_QD1_IN             MCHP_PINMUX(d, 6, 0xa4, 8, periph)
/* pd6_qd1_out */
#define PD6_QD1_OUT            MCHP_PINMUX(d, 6, 0x3dc, 30, periph)
/* pd6_qd2_out */
#define PD6_QD2_OUT            MCHP_PINMUX(d, 6, 0x3dc, 29, periph)
/* pd6_qd3_in */
#define PD6_QD3_IN             MCHP_PINMUX(d, 6, 0xac, 13, periph)
/* pd6_qd3_out */
#define PD6_QD3_OUT            MCHP_PINMUX(d, 6, 0x3dc, 28, periph)
/* pd6_qeiccmp0_out */
#define PD6_QEICCMP0_OUT       MCHP_PINMUX(d, 6, 0x3dc, 31, periph)
/* pd6_qeihome0g1_in */
#define PD6_QEIHOME0G1_IN      MCHP_PINMUX(d, 6, 0x16c, 8, periph)
/* pd6_qeiindx0g3_in */
#define PD6_QEIINDX0G3_IN      MCHP_PINMUX(d, 6, 0x178, 13, periph)
/* pd6_qeiqea0g3_in */
#define PD6_QEIQEA0G3_IN       MCHP_PINMUX(d, 6, 0x17c, 13, periph)
/* pd6_qspics_out */
#define PD6_QSPICS_OUT         MCHP_PINMUX(d, 6, 0x3dc, 27, periph)
/* pd6_scom0p0_out */
#define PD6_SCOM0P0_OUT        MCHP_PINMUX(d, 6, 0x3e0, 2, periph)
/* pd6_scom0p2_out */
#define PD6_SCOM0P2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 2, periph)
/* pd6_scom0p3_in */
#define PD6_SCOM0P3_IN         MCHP_PINMUX(d, 6, 0x4c, 8, periph)
/* pd6_scom0p3_out */
#define PD6_SCOM0P3_OUT        MCHP_PINMUX(d, 6, 0x3dc, 1, periph)
/* pd6_scom1p0_in */
#define PD6_SCOM1P0_IN         MCHP_PINMUX(d, 6, 0x50, 13, periph)
/* pd6_scom1p0_out */
#define PD6_SCOM1P0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 3, periph)
/* pd6_scom1p2_in */
#define PD6_SCOM1P2_IN         MCHP_PINMUX(d, 6, 0x58, 8, periph)
/* pd6_scom1p2_out */
#define PD6_SCOM1P2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 4, periph)
/* pd6_scom1p3_out */
#define PD6_SCOM1P3_OUT        MCHP_PINMUX(d, 6, 0x3e0, 6, periph)
/* pd6_scom2p0_out */
#define PD6_SCOM2P0_OUT        MCHP_PINMUX(d, 6, 0x3e0, 7, periph)
/* pd6_scom2p2_out */
#define PD6_SCOM2P2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 6, periph)
/* pd6_scom2p3_in */
#define PD6_SCOM2P3_IN         MCHP_PINMUX(d, 6, 0x6c, 8, periph)
/* pd6_scom2p3_out */
#define PD6_SCOM2P3_OUT        MCHP_PINMUX(d, 6, 0x3dc, 5, periph)
/* pd6_scom3p0_in */
#define PD6_SCOM3P0_IN         MCHP_PINMUX(d, 6, 0x70, 13, periph)
/* pd6_scom3p0_out */
#define PD6_SCOM3P0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 7, periph)
/* pd6_scom3p2_in */
#define PD6_SCOM3P2_IN         MCHP_PINMUX(d, 6, 0x78, 8, periph)
/* pd6_scom3p2_out */
#define PD6_SCOM3P2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 8, periph)
/* pd6_scom3p3_out */
#define PD6_SCOM3P3_OUT        MCHP_PINMUX(d, 6, 0x3e0, 11, periph)
/* pd6_scom4p0_out */
#define PD6_SCOM4P0_OUT        MCHP_PINMUX(d, 6, 0x3e0, 12, periph)
/* pd6_scom4p2_out */
#define PD6_SCOM4P2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 10, periph)
/* pd6_scom4p3_in */
#define PD6_SCOM4P3_IN         MCHP_PINMUX(d, 6, 0x8c, 8, periph)
/* pd6_scom4p3_out */
#define PD6_SCOM4P3_OUT        MCHP_PINMUX(d, 6, 0x3dc, 9, periph)
/* pd6_scom5p0_in */
#define PD6_SCOM5P0_IN         MCHP_PINMUX(d, 6, 0x90, 13, periph)
/* pd6_scom5p0_out */
#define PD6_SCOM5P0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 11, periph)
/* pd6_scom5p2_in */
#define PD6_SCOM5P2_IN         MCHP_PINMUX(d, 6, 0x98, 8, periph)
/* pd6_scom5p2_out */
#define PD6_SCOM5P2_OUT        MCHP_PINMUX(d, 6, 0x3dc, 12, periph)
/* pd6_scom5p3_out */
#define PD6_SCOM5P3_OUT        MCHP_PINMUX(d, 6, 0x3e0, 16, periph)
/* pd6_tc0wo0g1_in */
#define PD6_TC0WO0G1_IN        MCHP_PINMUX(d, 6, 0xcc, 8, periph)
/* pd6_tc0wo0_out */
#define PD6_TC0WO0_OUT         MCHP_PINMUX(d, 6, 0x3e0, 24, periph)
/* pd6_tc0wo1g3_in */
#define PD6_TC0WO1G3_IN        MCHP_PINMUX(d, 6, 0xd4, 13, periph)
/* pd6_tc0wo1_out */
#define PD6_TC0WO1_OUT         MCHP_PINMUX(d, 6, 0x3dc, 18, periph)
/* pd6_tc1wo0g1_in */
#define PD6_TC1WO0G1_IN        MCHP_PINMUX(d, 6, 0xdc, 8, periph)
/* pd6_tc1wo0_out */
#define PD6_TC1WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 19, periph)
/* pd6_tc2wo0g1_in */
#define PD6_TC2WO0G1_IN        MCHP_PINMUX(d, 6, 0xec, 8, periph)
/* pd6_tc2wo0g3_in */
#define PD6_TC2WO0G3_IN        MCHP_PINMUX(d, 6, 0xf0, 13, periph)
/* pd6_tc2wo0_out */
#define PD6_TC2WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 20, periph)
/* pd6_tc3wo0g1_in */
#define PD6_TC3WO0G1_IN        MCHP_PINMUX(d, 6, 0xfc, 8, periph)
/* pd6_tc3wo0g3_in */
#define PD6_TC3WO0G3_IN        MCHP_PINMUX(d, 6, 0x100, 13, periph)
/* pd6_tc3wo0_out */
#define PD6_TC3WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 21, periph)
/* pd6_tc4wo0g1_in */
#define PD6_TC4WO0G1_IN        MCHP_PINMUX(d, 6, 0x10c, 8, periph)
/* pd6_tc4wo0g3_in */
#define PD6_TC4WO0G3_IN        MCHP_PINMUX(d, 6, 0x110, 13, periph)
/* pd6_tc4wo0_out */
#define PD6_TC4WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 22, periph)
/* pd6_tc5wo0g1_in */
#define PD6_TC5WO0G1_IN        MCHP_PINMUX(d, 6, 0x11c, 8, periph)
/* pd6_tc5wo0g3_in */
#define PD6_TC5WO0G3_IN        MCHP_PINMUX(d, 6, 0x120, 13, periph)
/* pd6_tc5wo0_out */
#define PD6_TC5WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 23, periph)
/* pd6_tc6wo0g1_in */
#define PD6_TC6WO0G1_IN        MCHP_PINMUX(d, 6, 0x12c, 8, periph)
/* pd6_tc6wo0g3_in */
#define PD6_TC6WO0G3_IN        MCHP_PINMUX(d, 6, 0x130, 13, periph)
/* pd6_tc6wo0_out */
#define PD6_TC6WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 24, periph)
/* pd6_tc7wo0g1_in */
#define PD6_TC7WO0G1_IN        MCHP_PINMUX(d, 6, 0x13c, 8, periph)
/* pd6_tc7wo0g3_in */
#define PD6_TC7WO0G3_IN        MCHP_PINMUX(d, 6, 0x140, 13, periph)
/* pd6_tc7wo0_out */
#define PD6_TC7WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 25, periph)
/* pd6_tc8wo0g1_in */
#define PD6_TC8WO0G1_IN        MCHP_PINMUX(d, 6, 0x14c, 8, periph)
/* pd6_tc8wo0g3_in */
#define PD6_TC8WO0G3_IN        MCHP_PINMUX(d, 6, 0x150, 13, periph)
/* pd6_tc8wo0_out */
#define PD6_TC8WO0_OUT         MCHP_PINMUX(d, 6, 0x3dc, 26, periph)
/* pd6_tc9wo1g3_in */
#define PD6_TC9WO1G3_IN        MCHP_PINMUX(d, 6, 0x164, 13, periph)
/* pd6_tc9wo1_out */
#define PD6_TC9WO1_OUT         MCHP_PINMUX(d, 6, 0x3e0, 33, periph)
/* pd6_tcc0wo0_out */
#define PD6_TCC0WO0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 13, periph)
/* pd6_tcc0wo2_out */
#define PD6_TCC0WO2_OUT        MCHP_PINMUX(d, 6, 0x3e0, 17, periph)
/* pd6_tcc0wo4_out */
#define PD6_TCC0WO4_OUT        MCHP_PINMUX(d, 6, 0x3dc, 14, periph)
/* pd6_tcc1wo0_out */
#define PD6_TCC1WO0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 15, periph)
/* pd6_tcc1wo2_out */
#define PD6_TCC1WO2_OUT        MCHP_PINMUX(d, 6, 0x3e0, 20, periph)
/* pd6_tcc1wo4_out */
#define PD6_TCC1WO4_OUT        MCHP_PINMUX(d, 6, 0x3dc, 16, periph)
/* pd6_tcc2wo0_out */
#define PD6_TCC2WO0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 17, periph)
/* pd6_tstbus0_out */
#define PD6_TSTBUS0_OUT        MCHP_PINMUX(d, 6, 0x3dc, 32, periph)
/* pd6_tstbus1_out */
#define PD6_TSTBUS1_OUT        MCHP_PINMUX(d, 6, 0x3e0, 38, periph)
/* pd6_tstbus4_out */
#define PD6_TSTBUS4_OUT        MCHP_PINMUX(d, 6, 0x3dc, 33, periph)
/* pd6_tstbus8_out */
#define PD6_TSTBUS8_OUT        MCHP_PINMUX(d, 6, 0x3dc, 34, periph)
/* pd6_tstbus10_out */
#define PD6_TSTBUS10_OUT       MCHP_PINMUX(d, 6, 0x3e0, 39, periph)
/* pd7_ac_cmp1_out */
#define PD7_AC_CMP1_OUT        MCHP_PINMUX(d, 7, 0x3e8, 36, periph)
/* pd7_ac_cmptout_out */
#define PD7_AC_CMPTOUT_OUT     MCHP_PINMUX(d, 7, 0x3e8, 37, periph)
/* pd7_can1_tx_out */
#define PD7_CAN1_TX_OUT        MCHP_PINMUX(d, 7, 0x3e8, 38, periph)
/* pd7_cclin1_in */
#define PD7_CCLIN1_IN          MCHP_PINMUX(d, 7, 0xb8, 8, periph)
/* pd7_cclin4_in */
#define PD7_CCLIN4_IN          MCHP_PINMUX(d, 7, 0xc4, 8, periph)
/* pd7_cclo1_out */
#define PD7_CCLO1_OUT          MCHP_PINMUX(d, 7, 0x3e4, 1, periph)
/* pd7_coexwlanact_in */
#define PD7_COEXWLANACT_IN     MCHP_PINMUX(d, 7, 0x194, 11, periph)
/* pd7_coex_rf_act_out */
#define PD7_COEX_RF_ACT_OUT    MCHP_PINMUX(d, 7, 0x3e4, 41, periph)
/* pd7_extint1_in */
#define PD7_EXTINT1_IN         MCHP_PINMUX(d, 7, 0x4, 8, periph)
/* pd7_extint3_in */
#define PD7_EXTINT3_IN         MCHP_PINMUX(d, 7, 0xc, 11, periph)
/* pd7_fectrl0_out */
#define PD7_FECTRL0_OUT        MCHP_PINMUX(d, 7, 0x3e4, 40, periph)
/* pd7_fectrl3_out */
#define PD7_FECTRL3_OUT        MCHP_PINMUX(d, 7, 0x3e8, 39, periph)
/* pd7_fectrl5_out */
#define PD7_FECTRL5_OUT        MCHP_PINMUX(d, 7, 0x3e8, 40, periph)
/* pd7_nmi_in */
#define PD7_NMI_IN             MCHP_PINMUX(d, 7, 0x3c, 11, periph)
/* pd7_qd0_in */
#define PD7_QD0_IN             MCHP_PINMUX(d, 7, 0xa0, 11, periph)
/* pd7_qd0_out */
#define PD7_QD0_OUT            MCHP_PINMUX(d, 7, 0x3e4, 35, periph)
/* pd7_qd1_out */
#define PD7_QD1_OUT            MCHP_PINMUX(d, 7, 0x3e8, 32, periph)
/* pd7_qd2_in */
#define PD7_QD2_IN             MCHP_PINMUX(d, 7, 0xa8, 8, periph)
/* pd7_qd2_out */
#define PD7_QD2_OUT            MCHP_PINMUX(d, 7, 0x3e4, 37, periph)
/* pd7_qd3_out */
#define PD7_QD3_OUT            MCHP_PINMUX(d, 7, 0x3e4, 36, periph)
/* pd7_qeihome0g2_in */
#define PD7_QEIHOME0G2_IN      MCHP_PINMUX(d, 7, 0x170, 8, periph)
/* pd7_qeiindx0g2_in */
#define PD7_QEIINDX0G2_IN      MCHP_PINMUX(d, 7, 0x174, 8, periph)
/* pd7_qeiqea0g4_in */
#define PD7_QEIQEA0G4_IN       MCHP_PINMUX(d, 7, 0x180, 11, periph)
/* pd7_qeiqeb0g4_in */
#define PD7_QEIQEB0G4_IN       MCHP_PINMUX(d, 7, 0x184, 11, periph)
/* pd7_qspics_out */
#define PD7_QSPICS_OUT         MCHP_PINMUX(d, 7, 0x3e4, 34, periph)
/* pd7_scom0p0_in */
#define PD7_SCOM0P0_IN         MCHP_PINMUX(d, 7, 0x40, 8, periph)
/* pd7_scom0p0_out */
#define PD7_SCOM0P0_OUT        MCHP_PINMUX(d, 7, 0x3e4, 2, periph)
/* pd7_scom0p2_in */
#define PD7_SCOM0P2_IN         MCHP_PINMUX(d, 7, 0x48, 11, periph)
/* pd7_scom0p2_out */
#define PD7_SCOM0P2_OUT        MCHP_PINMUX(d, 7, 0x3e4, 4, periph)
/* pd7_scom0p3_out */
#define PD7_SCOM0P3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 3, periph)
/* pd7_scom1p0_out */
#define PD7_SCOM1P0_OUT        MCHP_PINMUX(d, 7, 0x3e8, 5, periph)
/* pd7_scom1p2_out */
#define PD7_SCOM1P2_OUT        MCHP_PINMUX(d, 7, 0x3e4, 6, periph)
/* pd7_scom1p3_in */
#define PD7_SCOM1P3_IN         MCHP_PINMUX(d, 7, 0x5c, 8, periph)
/* pd7_scom1p3_out */
#define PD7_SCOM1P3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 5, periph)
/* pd7_scom2p0_in */
#define PD7_SCOM2P0_IN         MCHP_PINMUX(d, 7, 0x60, 8, periph)
/* pd7_scom2p0_out */
#define PD7_SCOM2P0_OUT        MCHP_PINMUX(d, 7, 0x3e4, 7, periph)
/* pd7_scom2p2_in */
#define PD7_SCOM2P2_IN         MCHP_PINMUX(d, 7, 0x68, 11, periph)
/* pd7_scom2p2_out */
#define PD7_SCOM2P2_OUT        MCHP_PINMUX(d, 7, 0x3e4, 9, periph)
/* pd7_scom2p3_out */
#define PD7_SCOM2P3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 8, periph)
/* pd7_scom3p0_out */
#define PD7_SCOM3P0_OUT        MCHP_PINMUX(d, 7, 0x3e8, 9, periph)
/* pd7_scom3p2_out */
#define PD7_SCOM3P2_OUT        MCHP_PINMUX(d, 7, 0x3e4, 11, periph)
/* pd7_scom3p3_in */
#define PD7_SCOM3P3_IN         MCHP_PINMUX(d, 7, 0x7c, 8, periph)
/* pd7_scom3p3_out */
#define PD7_SCOM3P3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 10, periph)
/* pd7_scom4p0_in */
#define PD7_SCOM4P0_IN         MCHP_PINMUX(d, 7, 0x80, 8, periph)
/* pd7_scom4p0_out */
#define PD7_SCOM4P0_OUT        MCHP_PINMUX(d, 7, 0x3e4, 12, periph)
/* pd7_scom4p2_in */
#define PD7_SCOM4P2_IN         MCHP_PINMUX(d, 7, 0x88, 11, periph)
/* pd7_scom4p2_out */
#define PD7_SCOM4P2_OUT        MCHP_PINMUX(d, 7, 0x3e4, 14, periph)
/* pd7_scom4p3_out */
#define PD7_SCOM4P3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 13, periph)
/* pd7_scom5p0_out */
#define PD7_SCOM5P0_OUT        MCHP_PINMUX(d, 7, 0x3e8, 13, periph)
/* pd7_scom5p2_out */
#define PD7_SCOM5P2_OUT        MCHP_PINMUX(d, 7, 0x3e4, 16, periph)
/* pd7_scom5p3_in */
#define PD7_SCOM5P3_IN         MCHP_PINMUX(d, 7, 0x9c, 8, periph)
/* pd7_scom5p3_out */
#define PD7_SCOM5P3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 15, periph)
/* pd7_tc0wo0g2_in */
#define PD7_TC0WO0G2_IN        MCHP_PINMUX(d, 7, 0xd0, 8, periph)
/* pd7_tc0wo0_out */
#define PD7_TC0WO0_OUT         MCHP_PINMUX(d, 7, 0x3e8, 21, periph)
/* pd7_tc0wo1g4_in */
#define PD7_TC0WO1G4_IN        MCHP_PINMUX(d, 7, 0xd8, 11, periph)
/* pd7_tc0wo1_out */
#define PD7_TC0WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 24, periph)
/* pd7_tc1wo1g2_in */
#define PD7_TC1WO1G2_IN        MCHP_PINMUX(d, 7, 0xe4, 8, periph)
/* pd7_tc1wo1_out */
#define PD7_TC1WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 25, periph)
/* pd7_tc2wo1g2_in */
#define PD7_TC2WO1G2_IN        MCHP_PINMUX(d, 7, 0xf4, 8, periph)
/* pd7_tc2wo1g4_in */
#define PD7_TC2WO1G4_IN        MCHP_PINMUX(d, 7, 0xf8, 11, periph)
/* pd7_tc2wo1_out */
#define PD7_TC2WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 26, periph)
/* pd7_tc3wo1g2_in */
#define PD7_TC3WO1G2_IN        MCHP_PINMUX(d, 7, 0x104, 8, periph)
/* pd7_tc3wo1g4_in */
#define PD7_TC3WO1G4_IN        MCHP_PINMUX(d, 7, 0x108, 11, periph)
/* pd7_tc3wo1_out */
#define PD7_TC3WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 27, periph)
/* pd7_tc4wo1g2_in */
#define PD7_TC4WO1G2_IN        MCHP_PINMUX(d, 7, 0x114, 8, periph)
/* pd7_tc4wo1g4_in */
#define PD7_TC4WO1G4_IN        MCHP_PINMUX(d, 7, 0x118, 11, periph)
/* pd7_tc4wo1_out */
#define PD7_TC4WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 28, periph)
/* pd7_tc5wo1g2_in */
#define PD7_TC5WO1G2_IN        MCHP_PINMUX(d, 7, 0x124, 8, periph)
/* pd7_tc5wo1g4_in */
#define PD7_TC5WO1G4_IN        MCHP_PINMUX(d, 7, 0x128, 11, periph)
/* pd7_tc5wo1_out */
#define PD7_TC5WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 29, periph)
/* pd7_tc6wo1g2_in */
#define PD7_TC6WO1G2_IN        MCHP_PINMUX(d, 7, 0x134, 8, periph)
/* pd7_tc6wo1g4_in */
#define PD7_TC6WO1G4_IN        MCHP_PINMUX(d, 7, 0x138, 11, periph)
/* pd7_tc6wo1_out */
#define PD7_TC6WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 30, periph)
/* pd7_tc7wo1g2_in */
#define PD7_TC7WO1G2_IN        MCHP_PINMUX(d, 7, 0x144, 8, periph)
/* pd7_tc7wo1g4_in */
#define PD7_TC7WO1G4_IN        MCHP_PINMUX(d, 7, 0x148, 11, periph)
/* pd7_tc7wo1_out */
#define PD7_TC7WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 31, periph)
/* pd7_tc8wo1g2_in */
#define PD7_TC8WO1G2_IN        MCHP_PINMUX(d, 7, 0x154, 8, periph)
/* pd7_tc8wo1_out */
#define PD7_TC8WO1_OUT         MCHP_PINMUX(d, 7, 0x3e4, 32, periph)
/* pd7_tc9wo0g2_in */
#define PD7_TC9WO0G2_IN        MCHP_PINMUX(d, 7, 0x15c, 8, periph)
/* pd7_tc9wo0g4_in */
#define PD7_TC9WO0G4_IN        MCHP_PINMUX(d, 7, 0x160, 11, periph)
/* pd7_tc9wo0_out */
#define PD7_TC9WO0_OUT         MCHP_PINMUX(d, 7, 0x3e4, 33, periph)
/* pd7_tcc0wo1_out */
#define PD7_TCC0WO1_OUT        MCHP_PINMUX(d, 7, 0x3e4, 17, periph)
/* pd7_tcc0wo3_out */
#define PD7_TCC0WO3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 19, periph)
/* pd7_tcc0wo5_out */
#define PD7_TCC0WO5_OUT        MCHP_PINMUX(d, 7, 0x3e4, 18, periph)
/* pd7_tcc1wo1_out */
#define PD7_TCC1WO1_OUT        MCHP_PINMUX(d, 7, 0x3e4, 20, periph)
/* pd7_tcc1wo3_out */
#define PD7_TCC1WO3_OUT        MCHP_PINMUX(d, 7, 0x3e4, 22, periph)
/* pd7_tcc1wo5_out */
#define PD7_TCC1WO5_OUT        MCHP_PINMUX(d, 7, 0x3e4, 21, periph)
/* pd7_tcc2wo1_out */
#define PD7_TCC2WO1_OUT        MCHP_PINMUX(d, 7, 0x3e4, 23, periph)
/* pd7_tstbus2_out */
#define PD7_TSTBUS2_OUT        MCHP_PINMUX(d, 7, 0x3e8, 34, periph)
/* pd7_tstbus5_out */
#define PD7_TSTBUS5_OUT        MCHP_PINMUX(d, 7, 0x3e4, 38, periph)
/* pd7_tstbus6_out */
#define PD7_TSTBUS6_OUT        MCHP_PINMUX(d, 7, 0x3e8, 35, periph)
/* pd7_tstbus9_out */
#define PD7_TSTBUS9_OUT        MCHP_PINMUX(d, 7, 0x3e4, 39, periph)
/* pe0_accmpten_in */
#define PE0_ACCMPTEN_IN        MCHP_PINMUX(e, 0, 0x18c, 9, periph)
/* pe0_ac_cmp0_out */
#define PE0_AC_CMP0_OUT        MCHP_PINMUX(e, 0, 0x410, 40, periph)
/* pe0_ac_cmptrdy_out */
#define PE0_AC_CMPTRDY_OUT     MCHP_PINMUX(e, 0, 0x410, 41, periph)
/* pe0_can1rx_in */
#define PE0_CAN1RX_IN          MCHP_PINMUX(e, 0, 0x190, 14, periph)
/* pe0_cclin0_in */
#define PE0_CCLIN0_IN          MCHP_PINMUX(e, 0, 0xb4, 9, periph)
/* pe0_cclin2_in */
#define PE0_CCLIN2_IN          MCHP_PINMUX(e, 0, 0xbc, 14, periph)
/* pe0_cclin3_in */
#define PE0_CCLIN3_IN          MCHP_PINMUX(e, 0, 0xc0, 9, periph)
/* pe0_cclin5_in */
#define PE0_CCLIN5_IN          MCHP_PINMUX(e, 0, 0xc8, 14, periph)
/* pe0_cclo0_out */
#define PE0_CCLO0_OUT          MCHP_PINMUX(e, 0, 0x410, 1, periph)
/* pe0_coex_bt_state_out */
#define PE0_COEX_BT_STATE_OUT  MCHP_PINMUX(e, 0, 0x40c, 37, periph)
/* pe0_extint0_in */
#define PE0_EXTINT0_IN         MCHP_PINMUX(e, 0, 0x0, 9, periph)
/* pe0_extint2_in */
#define PE0_EXTINT2_IN         MCHP_PINMUX(e, 0, 0x8, 14, periph)
/* pe0_fectrl1_out */
#define PE0_FECTRL1_OUT        MCHP_PINMUX(e, 0, 0x40c, 35, periph)
/* pe0_fectrl2_out */
#define PE0_FECTRL2_OUT        MCHP_PINMUX(e, 0, 0x40c, 36, periph)
/* pe0_fectrl4_out */
#define PE0_FECTRL4_OUT        MCHP_PINMUX(e, 0, 0x410, 42, periph)
/* pe0_qd0_out */
#define PE0_QD0_OUT            MCHP_PINMUX(e, 0, 0x410, 36, periph)
/* pe0_qd1_in */
#define PE0_QD1_IN             MCHP_PINMUX(e, 0, 0xa4, 9, periph)
/* pe0_qd1_out */
#define PE0_QD1_OUT            MCHP_PINMUX(e, 0, 0x40c, 30, periph)
/* pe0_qd2_out */
#define PE0_QD2_OUT            MCHP_PINMUX(e, 0, 0x40c, 29, periph)
/* pe0_qd3_in */
#define PE0_QD3_IN             MCHP_PINMUX(e, 0, 0xac, 14, periph)
/* pe0_qd3_out */
#define PE0_QD3_OUT            MCHP_PINMUX(e, 0, 0x40c, 28, periph)
/* pe0_qeiccmp0_out */
#define PE0_QEICCMP0_OUT       MCHP_PINMUX(e, 0, 0x40c, 31, periph)
/* pe0_qeihome0g1_in */
#define PE0_QEIHOME0G1_IN      MCHP_PINMUX(e, 0, 0x16c, 9, periph)
/* pe0_qeiindx0g3_in */
#define PE0_QEIINDX0G3_IN      MCHP_PINMUX(e, 0, 0x178, 14, periph)
/* pe0_qeiqea0g3_in */
#define PE0_QEIQEA0G3_IN       MCHP_PINMUX(e, 0, 0x17c, 14, periph)
/* pe0_qspics_out */
#define PE0_QSPICS_OUT         MCHP_PINMUX(e, 0, 0x40c, 27, periph)
/* pe0_scom0p0_out */
#define PE0_SCOM0P0_OUT        MCHP_PINMUX(e, 0, 0x410, 2, periph)
/* pe0_scom0p2_out */
#define PE0_SCOM0P2_OUT        MCHP_PINMUX(e, 0, 0x40c, 2, periph)
/* pe0_scom0p3_in */
#define PE0_SCOM0P3_IN         MCHP_PINMUX(e, 0, 0x4c, 9, periph)
/* pe0_scom0p3_out */
#define PE0_SCOM0P3_OUT        MCHP_PINMUX(e, 0, 0x40c, 1, periph)
/* pe0_scom1p0_in */
#define PE0_SCOM1P0_IN         MCHP_PINMUX(e, 0, 0x50, 14, periph)
/* pe0_scom1p0_out */
#define PE0_SCOM1P0_OUT        MCHP_PINMUX(e, 0, 0x40c, 3, periph)
/* pe0_scom1p2_in */
#define PE0_SCOM1P2_IN         MCHP_PINMUX(e, 0, 0x58, 9, periph)
/* pe0_scom1p2_out */
#define PE0_SCOM1P2_OUT        MCHP_PINMUX(e, 0, 0x40c, 4, periph)
/* pe0_scom1p3_out */
#define PE0_SCOM1P3_OUT        MCHP_PINMUX(e, 0, 0x410, 6, periph)
/* pe0_scom2p0_out */
#define PE0_SCOM2P0_OUT        MCHP_PINMUX(e, 0, 0x410, 7, periph)
/* pe0_scom2p2_out */
#define PE0_SCOM2P2_OUT        MCHP_PINMUX(e, 0, 0x40c, 6, periph)
/* pe0_scom2p3_in */
#define PE0_SCOM2P3_IN         MCHP_PINMUX(e, 0, 0x6c, 9, periph)
/* pe0_scom2p3_out */
#define PE0_SCOM2P3_OUT        MCHP_PINMUX(e, 0, 0x40c, 5, periph)
/* pe0_scom3p0_in */
#define PE0_SCOM3P0_IN         MCHP_PINMUX(e, 0, 0x70, 14, periph)
/* pe0_scom3p0_out */
#define PE0_SCOM3P0_OUT        MCHP_PINMUX(e, 0, 0x40c, 7, periph)
/* pe0_scom3p2_in */
#define PE0_SCOM3P2_IN         MCHP_PINMUX(e, 0, 0x78, 9, periph)
/* pe0_scom3p2_out */
#define PE0_SCOM3P2_OUT        MCHP_PINMUX(e, 0, 0x40c, 8, periph)
/* pe0_scom3p3_out */
#define PE0_SCOM3P3_OUT        MCHP_PINMUX(e, 0, 0x410, 11, periph)
/* pe0_scom4p0_out */
#define PE0_SCOM4P0_OUT        MCHP_PINMUX(e, 0, 0x410, 12, periph)
/* pe0_scom4p2_out */
#define PE0_SCOM4P2_OUT        MCHP_PINMUX(e, 0, 0x40c, 10, periph)
/* pe0_scom4p3_in */
#define PE0_SCOM4P3_IN         MCHP_PINMUX(e, 0, 0x8c, 9, periph)
/* pe0_scom4p3_out */
#define PE0_SCOM4P3_OUT        MCHP_PINMUX(e, 0, 0x40c, 9, periph)
/* pe0_scom5p0_in */
#define PE0_SCOM5P0_IN         MCHP_PINMUX(e, 0, 0x90, 14, periph)
/* pe0_scom5p0_out */
#define PE0_SCOM5P0_OUT        MCHP_PINMUX(e, 0, 0x40c, 11, periph)
/* pe0_scom5p2_in */
#define PE0_SCOM5P2_IN         MCHP_PINMUX(e, 0, 0x98, 9, periph)
/* pe0_scom5p2_out */
#define PE0_SCOM5P2_OUT        MCHP_PINMUX(e, 0, 0x40c, 12, periph)
/* pe0_scom5p3_out */
#define PE0_SCOM5P3_OUT        MCHP_PINMUX(e, 0, 0x410, 16, periph)
/* pe0_tc0wo0g1_in */
#define PE0_TC0WO0G1_IN        MCHP_PINMUX(e, 0, 0xcc, 9, periph)
/* pe0_tc0wo0_out */
#define PE0_TC0WO0_OUT         MCHP_PINMUX(e, 0, 0x410, 24, periph)
/* pe0_tc0wo1g3_in */
#define PE0_TC0WO1G3_IN        MCHP_PINMUX(e, 0, 0xd4, 14, periph)
/* pe0_tc0wo1_out */
#define PE0_TC0WO1_OUT         MCHP_PINMUX(e, 0, 0x40c, 18, periph)
/* pe0_tc1wo0g1_in */
#define PE0_TC1WO0G1_IN        MCHP_PINMUX(e, 0, 0xdc, 9, periph)
/* pe0_tc1wo0_out */
#define PE0_TC1WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 19, periph)
/* pe0_tc2wo0g1_in */
#define PE0_TC2WO0G1_IN        MCHP_PINMUX(e, 0, 0xec, 9, periph)
/* pe0_tc2wo0g3_in */
#define PE0_TC2WO0G3_IN        MCHP_PINMUX(e, 0, 0xf0, 14, periph)
/* pe0_tc2wo0_out */
#define PE0_TC2WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 20, periph)
/* pe0_tc3wo0g1_in */
#define PE0_TC3WO0G1_IN        MCHP_PINMUX(e, 0, 0xfc, 9, periph)
/* pe0_tc3wo0g3_in */
#define PE0_TC3WO0G3_IN        MCHP_PINMUX(e, 0, 0x100, 14, periph)
/* pe0_tc3wo0_out */
#define PE0_TC3WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 21, periph)
/* pe0_tc4wo0g1_in */
#define PE0_TC4WO0G1_IN        MCHP_PINMUX(e, 0, 0x10c, 9, periph)
/* pe0_tc4wo0g3_in */
#define PE0_TC4WO0G3_IN        MCHP_PINMUX(e, 0, 0x110, 14, periph)
/* pe0_tc4wo0_out */
#define PE0_TC4WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 22, periph)
/* pe0_tc5wo0g1_in */
#define PE0_TC5WO0G1_IN        MCHP_PINMUX(e, 0, 0x11c, 9, periph)
/* pe0_tc5wo0g3_in */
#define PE0_TC5WO0G3_IN        MCHP_PINMUX(e, 0, 0x120, 14, periph)
/* pe0_tc5wo0_out */
#define PE0_TC5WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 23, periph)
/* pe0_tc6wo0g1_in */
#define PE0_TC6WO0G1_IN        MCHP_PINMUX(e, 0, 0x12c, 9, periph)
/* pe0_tc6wo0g3_in */
#define PE0_TC6WO0G3_IN        MCHP_PINMUX(e, 0, 0x130, 14, periph)
/* pe0_tc6wo0_out */
#define PE0_TC6WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 24, periph)
/* pe0_tc7wo0g1_in */
#define PE0_TC7WO0G1_IN        MCHP_PINMUX(e, 0, 0x13c, 9, periph)
/* pe0_tc7wo0g3_in */
#define PE0_TC7WO0G3_IN        MCHP_PINMUX(e, 0, 0x140, 14, periph)
/* pe0_tc7wo0_out */
#define PE0_TC7WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 25, periph)
/* pe0_tc8wo0g1_in */
#define PE0_TC8WO0G1_IN        MCHP_PINMUX(e, 0, 0x14c, 9, periph)
/* pe0_tc8wo0g3_in */
#define PE0_TC8WO0G3_IN        MCHP_PINMUX(e, 0, 0x150, 14, periph)
/* pe0_tc8wo0_out */
#define PE0_TC8WO0_OUT         MCHP_PINMUX(e, 0, 0x40c, 26, periph)
/* pe0_tc9wo1g3_in */
#define PE0_TC9WO1G3_IN        MCHP_PINMUX(e, 0, 0x164, 14, periph)
/* pe0_tc9wo1_out */
#define PE0_TC9WO1_OUT         MCHP_PINMUX(e, 0, 0x410, 33, periph)
/* pe0_tcc0wo0_out */
#define PE0_TCC0WO0_OUT        MCHP_PINMUX(e, 0, 0x40c, 13, periph)
/* pe0_tcc0wo2_out */
#define PE0_TCC0WO2_OUT        MCHP_PINMUX(e, 0, 0x410, 17, periph)
/* pe0_tcc0wo4_out */
#define PE0_TCC0WO4_OUT        MCHP_PINMUX(e, 0, 0x40c, 14, periph)
/* pe0_tcc1wo0_out */
#define PE0_TCC1WO0_OUT        MCHP_PINMUX(e, 0, 0x40c, 15, periph)
/* pe0_tcc1wo2_out */
#define PE0_TCC1WO2_OUT        MCHP_PINMUX(e, 0, 0x410, 20, periph)
/* pe0_tcc1wo4_out */
#define PE0_TCC1WO4_OUT        MCHP_PINMUX(e, 0, 0x40c, 16, periph)
/* pe0_tcc2wo0_out */
#define PE0_TCC2WO0_OUT        MCHP_PINMUX(e, 0, 0x40c, 17, periph)
/* pe0_tstbus0_out */
#define PE0_TSTBUS0_OUT        MCHP_PINMUX(e, 0, 0x40c, 32, periph)
/* pe0_tstbus1_out */
#define PE0_TSTBUS1_OUT        MCHP_PINMUX(e, 0, 0x410, 38, periph)
/* pe0_tstbus4_out */
#define PE0_TSTBUS4_OUT        MCHP_PINMUX(e, 0, 0x40c, 33, periph)
/* pe0_tstbus8_out */
#define PE0_TSTBUS8_OUT        MCHP_PINMUX(e, 0, 0x40c, 34, periph)
/* pe0_tstbus10_out */
#define PE0_TSTBUS10_OUT       MCHP_PINMUX(e, 0, 0x410, 39, periph)
/* pe1_ac_cmp1_out */
#define PE1_AC_CMP1_OUT        MCHP_PINMUX(e, 1, 0x418, 36, periph)
/* pe1_ac_cmptout_out */
#define PE1_AC_CMPTOUT_OUT     MCHP_PINMUX(e, 1, 0x418, 37, periph)
/* pe1_can1_tx_out */
#define PE1_CAN1_TX_OUT        MCHP_PINMUX(e, 1, 0x418, 38, periph)
/* pe1_cclin1_in */
#define PE1_CCLIN1_IN          MCHP_PINMUX(e, 1, 0xb8, 9, periph)
/* pe1_cclin4_in */
#define PE1_CCLIN4_IN          MCHP_PINMUX(e, 1, 0xc4, 9, periph)
/* pe1_cclo1_out */
#define PE1_CCLO1_OUT          MCHP_PINMUX(e, 1, 0x414, 1, periph)
/* pe1_coexwlanact_in */
#define PE1_COEXWLANACT_IN     MCHP_PINMUX(e, 1, 0x194, 12, periph)
/* pe1_coex_rf_act_out */
#define PE1_COEX_RF_ACT_OUT    MCHP_PINMUX(e, 1, 0x414, 41, periph)
/* pe1_extint1_in */
#define PE1_EXTINT1_IN         MCHP_PINMUX(e, 1, 0x4, 9, periph)
/* pe1_extint3_in */
#define PE1_EXTINT3_IN         MCHP_PINMUX(e, 1, 0xc, 12, periph)
/* pe1_fectrl0_out */
#define PE1_FECTRL0_OUT        MCHP_PINMUX(e, 1, 0x414, 40, periph)
/* pe1_fectrl3_out */
#define PE1_FECTRL3_OUT        MCHP_PINMUX(e, 1, 0x418, 39, periph)
/* pe1_fectrl5_out */
#define PE1_FECTRL5_OUT        MCHP_PINMUX(e, 1, 0x418, 40, periph)
/* pe1_nmi_in */
#define PE1_NMI_IN             MCHP_PINMUX(e, 1, 0x3c, 12, periph)
/* pe1_qd0_in */
#define PE1_QD0_IN             MCHP_PINMUX(e, 1, 0xa0, 12, periph)
/* pe1_qd0_out */
#define PE1_QD0_OUT            MCHP_PINMUX(e, 1, 0x414, 35, periph)
/* pe1_qd1_out */
#define PE1_QD1_OUT            MCHP_PINMUX(e, 1, 0x418, 32, periph)
/* pe1_qd2_in */
#define PE1_QD2_IN             MCHP_PINMUX(e, 1, 0xa8, 9, periph)
/* pe1_qd2_out */
#define PE1_QD2_OUT            MCHP_PINMUX(e, 1, 0x414, 37, periph)
/* pe1_qd3_out */
#define PE1_QD3_OUT            MCHP_PINMUX(e, 1, 0x414, 36, periph)
/* pe1_qeihome0g2_in */
#define PE1_QEIHOME0G2_IN      MCHP_PINMUX(e, 1, 0x170, 9, periph)
/* pe1_qeiindx0g2_in */
#define PE1_QEIINDX0G2_IN      MCHP_PINMUX(e, 1, 0x174, 9, periph)
/* pe1_qeiqea0g4_in */
#define PE1_QEIQEA0G4_IN       MCHP_PINMUX(e, 1, 0x180, 12, periph)
/* pe1_qeiqeb0g4_in */
#define PE1_QEIQEB0G4_IN       MCHP_PINMUX(e, 1, 0x184, 12, periph)
/* pe1_qspics_out */
#define PE1_QSPICS_OUT         MCHP_PINMUX(e, 1, 0x414, 34, periph)
/* pe1_scom0p0_in */
#define PE1_SCOM0P0_IN         MCHP_PINMUX(e, 1, 0x40, 9, periph)
/* pe1_scom0p0_out */
#define PE1_SCOM0P0_OUT        MCHP_PINMUX(e, 1, 0x414, 2, periph)
/* pe1_scom0p2_in */
#define PE1_SCOM0P2_IN         MCHP_PINMUX(e, 1, 0x48, 12, periph)
/* pe1_scom0p2_out */
#define PE1_SCOM0P2_OUT        MCHP_PINMUX(e, 1, 0x414, 4, periph)
/* pe1_scom0p3_out */
#define PE1_SCOM0P3_OUT        MCHP_PINMUX(e, 1, 0x414, 3, periph)
/* pe1_scom1p0_out */
#define PE1_SCOM1P0_OUT        MCHP_PINMUX(e, 1, 0x418, 5, periph)
/* pe1_scom1p2_out */
#define PE1_SCOM1P2_OUT        MCHP_PINMUX(e, 1, 0x414, 6, periph)
/* pe1_scom1p3_in */
#define PE1_SCOM1P3_IN         MCHP_PINMUX(e, 1, 0x5c, 9, periph)
/* pe1_scom1p3_out */
#define PE1_SCOM1P3_OUT        MCHP_PINMUX(e, 1, 0x414, 5, periph)
/* pe1_scom2p0_in */
#define PE1_SCOM2P0_IN         MCHP_PINMUX(e, 1, 0x60, 9, periph)
/* pe1_scom2p0_out */
#define PE1_SCOM2P0_OUT        MCHP_PINMUX(e, 1, 0x414, 7, periph)
/* pe1_scom2p2_in */
#define PE1_SCOM2P2_IN         MCHP_PINMUX(e, 1, 0x68, 12, periph)
/* pe1_scom2p2_out */
#define PE1_SCOM2P2_OUT        MCHP_PINMUX(e, 1, 0x414, 9, periph)
/* pe1_scom2p3_out */
#define PE1_SCOM2P3_OUT        MCHP_PINMUX(e, 1, 0x414, 8, periph)
/* pe1_scom3p0_out */
#define PE1_SCOM3P0_OUT        MCHP_PINMUX(e, 1, 0x418, 9, periph)
/* pe1_scom3p2_out */
#define PE1_SCOM3P2_OUT        MCHP_PINMUX(e, 1, 0x414, 11, periph)
/* pe1_scom3p3_in */
#define PE1_SCOM3P3_IN         MCHP_PINMUX(e, 1, 0x7c, 9, periph)
/* pe1_scom3p3_out */
#define PE1_SCOM3P3_OUT        MCHP_PINMUX(e, 1, 0x414, 10, periph)
/* pe1_scom4p0_in */
#define PE1_SCOM4P0_IN         MCHP_PINMUX(e, 1, 0x80, 9, periph)
/* pe1_scom4p0_out */
#define PE1_SCOM4P0_OUT        MCHP_PINMUX(e, 1, 0x414, 12, periph)
/* pe1_scom4p2_in */
#define PE1_SCOM4P2_IN         MCHP_PINMUX(e, 1, 0x88, 12, periph)
/* pe1_scom4p2_out */
#define PE1_SCOM4P2_OUT        MCHP_PINMUX(e, 1, 0x414, 14, periph)
/* pe1_scom4p3_out */
#define PE1_SCOM4P3_OUT        MCHP_PINMUX(e, 1, 0x414, 13, periph)
/* pe1_scom5p0_out */
#define PE1_SCOM5P0_OUT        MCHP_PINMUX(e, 1, 0x418, 13, periph)
/* pe1_scom5p2_out */
#define PE1_SCOM5P2_OUT        MCHP_PINMUX(e, 1, 0x414, 16, periph)
/* pe1_scom5p3_in */
#define PE1_SCOM5P3_IN         MCHP_PINMUX(e, 1, 0x9c, 9, periph)
/* pe1_scom5p3_out */
#define PE1_SCOM5P3_OUT        MCHP_PINMUX(e, 1, 0x414, 15, periph)
/* pe1_tc0wo0g2_in */
#define PE1_TC0WO0G2_IN        MCHP_PINMUX(e, 1, 0xd0, 9, periph)
/* pe1_tc0wo0_out */
#define PE1_TC0WO0_OUT         MCHP_PINMUX(e, 1, 0x418, 21, periph)
/* pe1_tc0wo1g4_in */
#define PE1_TC0WO1G4_IN        MCHP_PINMUX(e, 1, 0xd8, 12, periph)
/* pe1_tc0wo1_out */
#define PE1_TC0WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 24, periph)
/* pe1_tc1wo1g2_in */
#define PE1_TC1WO1G2_IN        MCHP_PINMUX(e, 1, 0xe4, 9, periph)
/* pe1_tc1wo1_out */
#define PE1_TC1WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 25, periph)
/* pe1_tc2wo1g2_in */
#define PE1_TC2WO1G2_IN        MCHP_PINMUX(e, 1, 0xf4, 9, periph)
/* pe1_tc2wo1g4_in */
#define PE1_TC2WO1G4_IN        MCHP_PINMUX(e, 1, 0xf8, 12, periph)
/* pe1_tc2wo1_out */
#define PE1_TC2WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 26, periph)
/* pe1_tc3wo1g2_in */
#define PE1_TC3WO1G2_IN        MCHP_PINMUX(e, 1, 0x104, 9, periph)
/* pe1_tc3wo1g4_in */
#define PE1_TC3WO1G4_IN        MCHP_PINMUX(e, 1, 0x108, 12, periph)
/* pe1_tc3wo1_out */
#define PE1_TC3WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 27, periph)
/* pe1_tc4wo1g2_in */
#define PE1_TC4WO1G2_IN        MCHP_PINMUX(e, 1, 0x114, 9, periph)
/* pe1_tc4wo1g4_in */
#define PE1_TC4WO1G4_IN        MCHP_PINMUX(e, 1, 0x118, 12, periph)
/* pe1_tc4wo1_out */
#define PE1_TC4WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 28, periph)
/* pe1_tc5wo1g2_in */
#define PE1_TC5WO1G2_IN        MCHP_PINMUX(e, 1, 0x124, 9, periph)
/* pe1_tc5wo1g4_in */
#define PE1_TC5WO1G4_IN        MCHP_PINMUX(e, 1, 0x128, 12, periph)
/* pe1_tc5wo1_out */
#define PE1_TC5WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 29, periph)
/* pe1_tc6wo1g2_in */
#define PE1_TC6WO1G2_IN        MCHP_PINMUX(e, 1, 0x134, 9, periph)
/* pe1_tc6wo1g4_in */
#define PE1_TC6WO1G4_IN        MCHP_PINMUX(e, 1, 0x138, 12, periph)
/* pe1_tc6wo1_out */
#define PE1_TC6WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 30, periph)
/* pe1_tc7wo1g2_in */
#define PE1_TC7WO1G2_IN        MCHP_PINMUX(e, 1, 0x144, 9, periph)
/* pe1_tc7wo1g4_in */
#define PE1_TC7WO1G4_IN        MCHP_PINMUX(e, 1, 0x148, 12, periph)
/* pe1_tc7wo1_out */
#define PE1_TC7WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 31, periph)
/* pe1_tc8wo1g2_in */
#define PE1_TC8WO1G2_IN        MCHP_PINMUX(e, 1, 0x154, 9, periph)
/* pe1_tc8wo1_out */
#define PE1_TC8WO1_OUT         MCHP_PINMUX(e, 1, 0x414, 32, periph)
/* pe1_tc9wo0g2_in */
#define PE1_TC9WO0G2_IN        MCHP_PINMUX(e, 1, 0x15c, 9, periph)
/* pe1_tc9wo0g4_in */
#define PE1_TC9WO0G4_IN        MCHP_PINMUX(e, 1, 0x160, 12, periph)
/* pe1_tc9wo0_out */
#define PE1_TC9WO0_OUT         MCHP_PINMUX(e, 1, 0x414, 33, periph)
/* pe1_tcc0wo1_out */
#define PE1_TCC0WO1_OUT        MCHP_PINMUX(e, 1, 0x414, 17, periph)
/* pe1_tcc0wo3_out */
#define PE1_TCC0WO3_OUT        MCHP_PINMUX(e, 1, 0x414, 19, periph)
/* pe1_tcc0wo5_out */
#define PE1_TCC0WO5_OUT        MCHP_PINMUX(e, 1, 0x414, 18, periph)
/* pe1_tcc1wo1_out */
#define PE1_TCC1WO1_OUT        MCHP_PINMUX(e, 1, 0x414, 20, periph)
/* pe1_tcc1wo3_out */
#define PE1_TCC1WO3_OUT        MCHP_PINMUX(e, 1, 0x414, 22, periph)
/* pe1_tcc1wo5_out */
#define PE1_TCC1WO5_OUT        MCHP_PINMUX(e, 1, 0x414, 21, periph)
/* pe1_tcc2wo1_out */
#define PE1_TCC2WO1_OUT        MCHP_PINMUX(e, 1, 0x414, 23, periph)
/* pe1_tstbus2_out */
#define PE1_TSTBUS2_OUT        MCHP_PINMUX(e, 1, 0x418, 34, periph)
/* pe1_tstbus5_out */
#define PE1_TSTBUS5_OUT        MCHP_PINMUX(e, 1, 0x414, 38, periph)
/* pe1_tstbus6_out */
#define PE1_TSTBUS6_OUT        MCHP_PINMUX(e, 1, 0x418, 35, periph)
/* pe1_tstbus9_out */
#define PE1_TSTBUS9_OUT        MCHP_PINMUX(e, 1, 0x414, 39, periph)
/* pe2_ac_cmp0_out */
#define PE2_AC_CMP0_OUT        MCHP_PINMUX(e, 2, 0x41c, 40, periph)
/* pe2_ac_cmptrdy_out */
#define PE2_AC_CMPTRDY_OUT     MCHP_PINMUX(e, 2, 0x41c, 41, periph)
/* pe2_can1rx_in */
#define PE2_CAN1RX_IN          MCHP_PINMUX(e, 2, 0x190, 9, periph)
/* pe2_cclin2_in */
#define PE2_CCLIN2_IN          MCHP_PINMUX(e, 2, 0xbc, 9, periph)
/* pe2_cclin5_in */
#define PE2_CCLIN5_IN          MCHP_PINMUX(e, 2, 0xc8, 9, periph)
/* pe2_cclo0_out */
#define PE2_CCLO0_OUT          MCHP_PINMUX(e, 2, 0x41c, 1, periph)
/* pe2_extint2_in */
#define PE2_EXTINT2_IN         MCHP_PINMUX(e, 2, 0x8, 9, periph)
/* pe2_fectrl4_out */
#define PE2_FECTRL4_OUT        MCHP_PINMUX(e, 2, 0x41c, 42, periph)
/* pe2_gmac_tsucomp_out */
#define PE2_GMAC_TSUCOMP_OUT   MCHP_PINMUX(e, 2, 0x420, 14, periph)
/* pe2_qd0_out */
#define PE2_QD0_OUT            MCHP_PINMUX(e, 2, 0x41c, 36, periph)
/* pe2_qd1_out */
#define PE2_QD1_OUT            MCHP_PINMUX(e, 2, 0x41c, 35, periph)
/* pe2_qd3_in */
#define PE2_QD3_IN             MCHP_PINMUX(e, 2, 0xac, 9, periph)
/* pe2_qd3_out */
#define PE2_QD3_OUT            MCHP_PINMUX(e, 2, 0x41c, 37, periph)
/* pe2_qeiccmp0_out */
#define PE2_QEICCMP0_OUT       MCHP_PINMUX(e, 2, 0x420, 13, periph)
/* pe2_qeiindx0g3_in */
#define PE2_QEIINDX0G3_IN      MCHP_PINMUX(e, 2, 0x178, 9, periph)
/* pe2_qeiqea0g3_in */
#define PE2_QEIQEA0G3_IN       MCHP_PINMUX(e, 2, 0x17c, 9, periph)
/* pe2_qeiqeb0g5_in */
#define PE2_QEIQEB0G5_IN       MCHP_PINMUX(e, 2, 0x188, 11, periph)
/* pe2_qspics_out */
#define PE2_QSPICS_OUT         MCHP_PINMUX(e, 2, 0x41c, 34, periph)
/* pe2_scom0p0_out */
#define PE2_SCOM0P0_OUT        MCHP_PINMUX(e, 2, 0x41c, 2, periph)
/* pe2_scom0p3_out */
#define PE2_SCOM0P3_OUT        MCHP_PINMUX(e, 2, 0x41c, 3, periph)
/* pe2_scom1p0_in */
#define PE2_SCOM1P0_IN         MCHP_PINMUX(e, 2, 0x50, 9, periph)
/* pe2_scom1p0_out */
#define PE2_SCOM1P0_OUT        MCHP_PINMUX(e, 2, 0x41c, 5, periph)
/* pe2_scom1p2_out */
#define PE2_SCOM1P2_OUT        MCHP_PINMUX(e, 2, 0x41c, 4, periph)
/* pe2_scom1p3_out */
#define PE2_SCOM1P3_OUT        MCHP_PINMUX(e, 2, 0x41c, 6, periph)
/* pe2_scom2p0_out */
#define PE2_SCOM2P0_OUT        MCHP_PINMUX(e, 2, 0x41c, 7, periph)
/* pe2_scom2p3_out */
#define PE2_SCOM2P3_OUT        MCHP_PINMUX(e, 2, 0x41c, 8, periph)
/* pe2_scom3p0_in */
#define PE2_SCOM3P0_IN         MCHP_PINMUX(e, 2, 0x70, 9, periph)
/* pe2_scom3p0_out */
#define PE2_SCOM3P0_OUT        MCHP_PINMUX(e, 2, 0x41c, 10, periph)
/* pe2_scom3p2_out */
#define PE2_SCOM3P2_OUT        MCHP_PINMUX(e, 2, 0x41c, 9, periph)
/* pe2_scom3p3_out */
#define PE2_SCOM3P3_OUT        MCHP_PINMUX(e, 2, 0x41c, 11, periph)
/* pe2_scom4p0_out */
#define PE2_SCOM4P0_OUT        MCHP_PINMUX(e, 2, 0x41c, 12, periph)
/* pe2_scom4p3_out */
#define PE2_SCOM4P3_OUT        MCHP_PINMUX(e, 2, 0x41c, 13, periph)
/* pe2_scom5p0_in */
#define PE2_SCOM5P0_IN         MCHP_PINMUX(e, 2, 0x90, 9, periph)
/* pe2_scom5p0_out */
#define PE2_SCOM5P0_OUT        MCHP_PINMUX(e, 2, 0x41c, 15, periph)
/* pe2_scom5p2_out */
#define PE2_SCOM5P2_OUT        MCHP_PINMUX(e, 2, 0x41c, 14, periph)
/* pe2_scom5p3_out */
#define PE2_SCOM5P3_OUT        MCHP_PINMUX(e, 2, 0x41c, 16, periph)
/* pe2_tc0wo0_out */
#define PE2_TC0WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 24, periph)
/* pe2_tc0wo1g3_in */
#define PE2_TC0WO1G3_IN        MCHP_PINMUX(e, 2, 0xd4, 9, periph)
/* pe2_tc1wo0_out */
#define PE2_TC1WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 25, periph)
/* pe2_tc2wo0g3_in */
#define PE2_TC2WO0G3_IN        MCHP_PINMUX(e, 2, 0xf0, 9, periph)
/* pe2_tc2wo0_out */
#define PE2_TC2WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 26, periph)
/* pe2_tc3wo0g3_in */
#define PE2_TC3WO0G3_IN        MCHP_PINMUX(e, 2, 0x100, 9, periph)
/* pe2_tc3wo0_out */
#define PE2_TC3WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 27, periph)
/* pe2_tc4wo0g3_in */
#define PE2_TC4WO0G3_IN        MCHP_PINMUX(e, 2, 0x110, 9, periph)
/* pe2_tc4wo0_out */
#define PE2_TC4WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 28, periph)
/* pe2_tc5wo0g3_in */
#define PE2_TC5WO0G3_IN        MCHP_PINMUX(e, 2, 0x120, 9, periph)
/* pe2_tc5wo0_out */
#define PE2_TC5WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 29, periph)
/* pe2_tc6wo0g3_in */
#define PE2_TC6WO0G3_IN        MCHP_PINMUX(e, 2, 0x130, 9, periph)
/* pe2_tc6wo0_out */
#define PE2_TC6WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 30, periph)
/* pe2_tc7wo0g3_in */
#define PE2_TC7WO0G3_IN        MCHP_PINMUX(e, 2, 0x140, 9, periph)
/* pe2_tc7wo0_out */
#define PE2_TC7WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 31, periph)
/* pe2_tc8wo0g3_in */
#define PE2_TC8WO0G3_IN        MCHP_PINMUX(e, 2, 0x150, 9, periph)
/* pe2_tc8wo0_out */
#define PE2_TC8WO0_OUT         MCHP_PINMUX(e, 2, 0x41c, 32, periph)
/* pe2_tc8wo1g5_in */
#define PE2_TC8WO1G5_IN        MCHP_PINMUX(e, 2, 0x158, 11, periph)
/* pe2_tc8wo1_out */
#define PE2_TC8WO1_OUT         MCHP_PINMUX(e, 2, 0x420, 10, periph)
/* pe2_tc9wo1g3_in */
#define PE2_TC9WO1G3_IN        MCHP_PINMUX(e, 2, 0x164, 9, periph)
/* pe2_tc9wo1g5_in */
#define PE2_TC9WO1G5_IN        MCHP_PINMUX(e, 2, 0x168, 11, periph)
/* pe2_tc9wo1_out */
#define PE2_TC9WO1_OUT         MCHP_PINMUX(e, 2, 0x41c, 33, periph)
/* pe2_tcc0wo0_out */
#define PE2_TCC0WO0_OUT        MCHP_PINMUX(e, 2, 0x41c, 18, periph)
/* pe2_tcc0wo1_out */
#define PE2_TCC0WO1_OUT        MCHP_PINMUX(e, 2, 0x420, 6, periph)
/* pe2_tcc0wo2_out */
#define PE2_TCC0WO2_OUT        MCHP_PINMUX(e, 2, 0x41c, 17, periph)
/* pe2_tcc0wo4_out */
#define PE2_TCC0WO4_OUT        MCHP_PINMUX(e, 2, 0x41c, 19, periph)
/* pe2_tcc1wo0_out */
#define PE2_TCC1WO0_OUT        MCHP_PINMUX(e, 2, 0x41c, 21, periph)
/* pe2_tcc1wo1_out */
#define PE2_TCC1WO1_OUT        MCHP_PINMUX(e, 2, 0x420, 9, periph)
/* pe2_tcc1wo2_out */
#define PE2_TCC1WO2_OUT        MCHP_PINMUX(e, 2, 0x41c, 20, periph)
/* pe2_tcc1wo4_out */
#define PE2_TCC1WO4_OUT        MCHP_PINMUX(e, 2, 0x41c, 22, periph)
/* pe2_tcc2wo0_out */
#define PE2_TCC2WO0_OUT        MCHP_PINMUX(e, 2, 0x41c, 23, periph)
/* pe2_tstbus1_out */
#define PE2_TSTBUS1_OUT        MCHP_PINMUX(e, 2, 0x41c, 38, periph)
/* pe2_tstbus3_out */
#define PE2_TSTBUS3_OUT        MCHP_PINMUX(e, 2, 0x420, 15, periph)
/* pe2_tstbus7_out */
#define PE2_TSTBUS7_OUT        MCHP_PINMUX(e, 2, 0x420, 16, periph)
/* pe2_tstbus10_out */
#define PE2_TSTBUS10_OUT       MCHP_PINMUX(e, 2, 0x41c, 39, periph)
/* pe2_tstbus11_out */
#define PE2_TSTBUS11_OUT       MCHP_PINMUX(e, 2, 0x420, 17, periph)

#endif /* MICROCHIP_PIC32CX2051BZ62064_PINCTRL_H_ */
