/**
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

/** @file smb.h
 *MEC1501 SMB register definitions
 */
/** @defgroup MEC1501 Peripherals SMB
 */

#ifndef _SMB_H
#define _SMB_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

#define MCHP_I2C_SMB_MAX_INSTANCES	4u
#define MCHP_I2C_SMB_INST_SPACING	0x400u
#define MCHP_I2C_SMB_INST_SPACING_P2	10u

#define MCHP_I2C_SMB0_BASE_ADDR		0x40004000u
#define MCHP_I2C_SMB1_BASE_ADDR		0x40004400u
#define MCHP_I2C_SMB2_BASE_ADDR		0x40004800u
#define MCHP_I2C_SMB3_BASE_ADDR		0x40004c00u
#define MCHP_I2C_SMB4_BASE_ADDR		0x40005000u

/* 0 <= n < MCHP_I2C_SMB_MAX_INSTANCES */
#define MCHP_I2C_SMB_BASE_ADDR(n) \
	((MCHP_I2C_SMB0_BASE_ADDR) +\
	((uint32_t)(n) << (MCHP_I2C_SMB_INST_SPACING_P2)))

/*
 * Offset 0x00
 * Control and Status register
 * Write to Control
 * Read from Status
 * Size 8-bit
 */
#define MCHP_I2C_SMB_CTRL_OFS	0x00u
#define MCHP_I2C_SMB_CTRL_MASK	0xcfu
#define MCHP_I2C_SMB_CTRL_ACK	(1u << 0)
#define MCHP_I2C_SMB_CTRL_STO	(1u << 1)
#define MCHP_I2C_SMB_CTRL_STA	(1u << 2)
#define MCHP_I2C_SMB_CTRL_ENI	(1u << 3)
/* bits [5:4] reserved */
#define MCHP_I2C_SMB_CTRL_ESO	(1u << 6)
#define MCHP_I2C_SMB_CTRL_PIN	(1u << 7)
/* Status Read-only */
#define MCHP_I2C_SMB_STS_OFS	0x00u
#define MCHP_I2C_SMB_STS_NBB	(1u << 0)
#define MCHP_I2C_SMB_STS_LAB	(1u << 1)
#define MCHP_I2C_SMB_STS_AAS	(1u << 2)
#define MCHP_I2C_SMB_STS_LRB_AD0	(1u << 3)
#define MCHP_I2C_SMB_STS_BER	(1u << 4)
#define MCHP_I2C_SMB_STS_EXT_STOP	(1u << 5)
#define MCHP_I2C_SMB_STS_SAD	(1u << 6)
#define MCHP_I2C_SMB_STS_PIN	(1u << 7)

/*
 * Offset 0x04
 * Own Address b[7:0] = Slave address 1
 * b[14:8] = Slave address 2
 */
#define MCHP_I2C_SMB_OWN_ADDR_OFS	0x04u
#define MCHP_I2C_SMB_OWN_ADDR2_OFS	0x05u
#define MCHP_I2C_SMB_OWN_ADDR_MASK	0x7f7fu

/*
 * Offset 0x08
 * Data register, 8-bit
 * Data to be shifted out or shifted in.
 */
#define MCHP_I2C_SMB_DATA_OFS	0x08u

/*
 * Offset 0x0c
 * Master Command register
 */
#define MCHP_I2C_SMB_MSTR_CMD_OFS		0x0cu
#define MCHP_I2C_SMB_MSTR_CMD_RD_CNT_OFS	0x0fu	/* byte 3 */
#define MCHP_I2C_SMB_MSTR_CMD_WR_CNT_OFS	0x0eu	/* byte 2 */
#define MCHP_I2C_SMB_MSTR_CMD_OP_OFS		0x0du	/* byte 1 */
#define MCHP_I2C_SMB_MSTR_CMD_M_OFS		0x0cu	/* byte 0 */
#define MCHP_I2C_SMB_MSTR_CMD_MASK		0xffff3ff3u
/* 32-bit definitions */
#define MCHP_I2C_SMB_MSTR_CMD_MRUN	(1u << 0)
#define MCHP_I2C_SMB_MSTR_CMD_MPROCEED	(1u << 1)
#define MCHP_I2C_SMB_MSTR_CMD_START0	(1u << 8)
#define MCHP_I2C_SMB_MSTR_CMD_STARTN	(1u << 9)
#define MCHP_I2C_SMB_MSTR_CMD_STOP	(1u << 10)
#define MCHP_I2C_SMB_MSTR_CMD_PEC_TERM	(1u << 11)
#define MCHP_I2C_SMB_MSTR_CMD_READM	(1u << 12)
#define MCHP_I2C_SMB_MSTR_CMD_READ_PEC	(1u << 13)
#define MCHP_I2C_SMB_MSTR_CMD_RD_CNT_POS	24u
#define MCHP_I2C_SMB_MSTR_CMD_WR_CNT_POS	16u
/* byte 0 definitions */
#define MCHP_I2C_SMB_MSTR_CMD_B0_MRUN		(1u << 0)
#define MCHP_I2C_SMB_MSTR_CMD_B0_MPROCEED	(1u << 1)
/* byte 1 definitions */
#define MCHP_I2C_SMB_MSTR_CMD_B1_START0		(1u << (8-8))
#define MCHP_I2C_SMB_MSTR_CMD_B1_STARTN		(1u << (9-8))
#define MCHP_I2C_SMB_MSTR_CMD_B1_STOP		(1u << (10-8))
#define MCHP_I2C_SMB_MSTR_CMD_B1_PEC_TERM	(1u << (11-8))
#define MCHP_I2C_SMB_MSTR_CMD_B1_READM		(1u << (12-8))
#define MCHP_I2C_SMB_MSTR_CMD_B1_READ_PEC	(1u << (13-8))

/*
 * Offset 0x10
 * Slave Command register
 */
#define MCHP_I2C_SMB_SLV_CMD_OFS	0x10u
#define MCHP_I2C_SMB_SLV_CMD_MASK	0x00ffff07u
#define MCHP_I2C_SMB_SLV_CMD_SRUN	(1u << 0)
#define MCHP_I2C_SMB_SLV_CMD_SPROCEED	(1u << 1)
#define MCHP_I2C_SMB_SLV_CMD_SEND_PEC	(1u << 2)
#define MCHP_I2C_SMB_SLV_WR_CNT_POS	8u
#define MCHP_I2C_SMB_SLV_RD_CNT_POS	16u

/*
 * Offset 0x14
 * PEC CRC register, 8-bit read-write
 */
#define MCHP_I2C_SMB_PEC_CRC_OFS	0x14u

/*
 * Offset 0x18
 * Repeated Start Hold Time register, 8-bit read-write
 */
#define MCHP_I2C_SMB_RSHT_OFS		0x18u

/*
 * Offset 0x20
 * Complettion register, 32-bit
 */
#define MCHP_I2C_SMB_CMPL_OFS		0x20u
#define MCHP_I2C_SMB_CMPL_MASK		0xe33b7f7cu
#define MCHP_I2C_SMB_CMPL_RW1C_MASK	0xe1397f00u
#define MCHP_I2C_SMB_CMPL_DTEN		(1u << 2)
#define MCHP_I2C_SMB_CMPL_MCEN		(1u << 3)
#define MCHP_I2C_SMB_CMPL_SCEN		(1u << 4)
#define MCHP_I2C_SMB_CMPL_BIDEN		(1u << 5)
#define MCHP_I2C_SMB_CMPL_TIMERR	(1u << 6)
#define MCHP_I2C_SMB_CMPL_DTO_RWC	(1u << 8)
#define MCHP_I2C_SMB_CMPL_MCTO_RWC	(1u << 9)
#define MCHP_I2C_SMB_CMPL_SCTO_RWC	(1u << 10)
#define MCHP_I2C_SMB_CMPL_CHDL_RWC	(1u << 11)
#define MCHP_I2C_SMB_CMPL_CHDH_RWC	(1u << 12)
#define MCHP_I2C_SMB_CMPL_BER_RWC	(1u << 13)
#define MCHP_I2C_SMB_CMPL_LAB_RWC	(1u << 14)
#define MCHP_I2C_SMB_CMPL_SNAKR_RWC	(1u << 16)
#define MCHP_I2C_SMB_CMPL_STR_RO	(1u << 17)
#define MCHP_I2C_SMB_CMPL_SPROT_RWC	(1u << 19)
#define MCHP_I2C_SMB_CMPL_RPT_RD_RWC	(1u << 20)
#define MCHP_I2C_SMB_CMPL_RPT_WR_RWC	(1u << 21)
#define MCHP_I2C_SMB_CMPL_MNAKX_RWC	(1u << 24)
#define MCHP_I2C_SMB_CMPL_MTR_RO	(1u << 25)
#define MCHP_I2C_SMB_CMPL_IDLE_RWC	(1u << 29)
#define MCHP_I2C_SMB_CMPL_MDONE_RWC	(1u << 30)
#define MCHP_I2C_SMB_CMPL_SDONE_RWC	(1u << 31)

/*
 * Offset 0x24
 * Idle Scaling register
 */
#define MCHP_I2C_SMB_IDLSC_OFS		0x24u
#define MCHP_I2C_SMB_IDLSC_DLY_OFS	0x24u
#define MCHP_I2C_SMB_IDLSC_BUS_OFS	0x26u
#define MCHP_I2C_SMB_IDLSC_MASK		0x0fff0fffu
#define MCHP_I2C_SMB_IDLSC_BUS_MIN_POS	0u
#define MCHP_I2C_SMB_IDLSC_DLY_POS	16u

/*
 * Offset 0x28
 * Configure register
 */
#define MCHP_I2C_SMB_CFG_OFS		0x28u
#define MCHP_I2C_SMB_CFG_MASK		0xf00f5fbfu
#define MCHP_I2C_SMB_CFG_PORT_SEL_MASK	0x0fu
#define MCHP_I2C_SMB_CFG_TCEN		(1u << 4)
#define MCHP_I2C_SMB_CFG_SLOW_CLK	(1u << 5)
#define MCHP_I2C_SMB_CFG_PCEN		(1u << 7)
#define MCHP_I2C_SMB_CFG_FEN		(1u << 8)
#define MCHP_I2C_SMB_CFG_RESET		(1u << 9)
#define MCHP_I2C_SMB_CFG_ENAB		(1u << 10)
#define MCHP_I2C_SMB_CFG_DSA		(1u << 11)
#define MCHP_I2C_SMB_CFG_FAIR		(1u << 12)
#define MCHP_I2C_SMB_CFG_GC_EN		(1u << 14)
#define MCHP_I2C_SMB_CFG_FLUSH_SXBUF_WO	(1u << 16)
#define MCHP_I2C_SMB_CFG_FLUSH_SRBUF_WO	(1u << 17)
#define MCHP_I2C_SMB_CFG_FLUSH_MXBUF_WO	(1u << 18)
#define MCHP_I2C_SMB_CFG_FLUSH_MRBUF_WO	(1u << 19)
#define MCHP_I2C_SMB_CFG_EN_AAS		(1u << 28)
#define MCHP_I2C_SMB_CFG_ENIDI		(1u << 29)
#define MCHP_I2C_SMB_CFG_ENMI		(1u << 30)
#define MCHP_I2C_SMB_CFG_ENSI		(1u << 31)

/*
 * Offset 0x2c
 * Bus Clock register
 */
#define MCHP_I2C_SMB_BUS_CLK_OFS	0x2cu
#define MCHP_I2C_SMB_BUS_CLK_MASK	0x0000ffffu
#define MCHP_I2C_SMB_BUS_CLK_LO_POS	0u
#define MCHP_I2C_SMB_BUS_CLK_HI_POS	8u

/*
 * Offset 0x30
 * Block ID register, 8-bit read-only
 */
#define MCHP_I2C_SMB_BLOCK_ID_OFS	0x30u
#define MCHP_I2C_SMB_BLOCK_ID_MASK	0xffu

/*
 * Offset 0x34
 * Block Revision register, 8-bit read-only
 */
#define MCHP_I2C_SMB_BLOCK_REV_OFS	0x34u
#define MCHP_I2C_SMB_BLOCK_REV_MASK	0xffu

/*
 * Offset 0x38
 * Bit-Bang Control register, 8-bit read-write
 */
#define MCHP_I2C_SMB_BB_OFS		0x38u
#define MCHP_I2C_SMB_BB_MASK		0x7fu
#define MCHP_I2C_SMB_BB_EN		(1u << 0)
#define MCHP_I2C_SMB_BB_SCL_DIR_IN	(0u << 1)
#define MCHP_I2C_SMB_BB_SCL_DIR_OUT	(1u << 1)
#define MCHP_I2C_SMB_BB_SDA_DIR_IN	(0u << 2)
#define MCHP_I2C_SMB_BB_SDA_DIR_OUT	(1u << 2)
#define MCHP_I2C_SMB_BB_CL		(1u << 3)
#define MCHP_I2C_SMB_BB_DAT		(1u << 4)
#define MCHP_I2C_SMB_BB_IN_POS		5u
#define MCHP_I2C_SMB_BB_IN_MASK0	0x03u
#define MCHP_I2C_SMB_BB_IN_MASK		(0x03u << 5)
#define MCHP_I2C_SMB_BB_CLKI_RO		(1u << 5)
#define MCHP_I2C_SMB_BB_DATI_RO		(1u << 6)

/*
 * Offset 0x40
 * Data Timing register
 */
#define MCHP_I2C_SMB_DATA_TM_OFS		0x40u
#define MCHP_I2C_SMB_DATA_TM_MASK		0xffffffffu
#define MCHP_I2C_SMB_DATA_TM_DATA_HOLD_POS	0u
#define MCHP_I2C_SMB_DATA_TM_DATA_HOLD_MASK	0xffu
#define MCHP_I2C_SMB_DATA_TM_DATA_HOLD_MASK0	0xffu
#define MCHP_I2C_SMB_DATA_TM_RESTART_POS	8u
#define MCHP_I2C_SMB_DATA_TM_RESTART_MASK	0xff00u
#define MCHP_I2C_SMB_DATA_TM_RESTART_MASK0	0xffu
#define MCHP_I2C_SMB_DATA_TM_STOP_POS		16u
#define MCHP_I2C_SMB_DATA_TM_STOP_MASK		0xff0000u
#define MCHP_I2C_SMB_DATA_TM_STOP_MASK0		0xffu
#define MCHP_I2C_SMB_DATA_TM_FSTART_POS		24u
#define MCHP_I2C_SMB_DATA_TM_FSTART_MASK	0xff000000u
#define MCHP_I2C_SMB_DATA_TM_FSTART_MASK0	0xffu

/*
 * Offset 0x44
 * Time-out Scaling register
 */
#define MCHP_I2C_SMB_TMTSC_OFS		0x44u
#define MCHP_I2C_SMB_TMTSC_MASK		0xffffffffu
#define MCHP_I2C_SMB_TMTSC_CLK_HI_POS	0u
#define MCHP_I2C_SMB_TMTSC_CLK_HI_MASK	0xffu
#define MCHP_I2C_SMB_TMTSC_CLK_HI_MASK0	0xffu
#define MCHP_I2C_SMB_TMTSC_SLV_POS	8u
#define MCHP_I2C_SMB_TMTSC_SLV_MASK	0xff00u
#define MCHP_I2C_SMB_TMTSC_SLV_MASK0	0xffu
#define MCHP_I2C_SMB_TMTSC_MSTR_POS	16u
#define MCHP_I2C_SMB_TMTSC_MSTR_MASK	0xff0000u
#define MCHP_I2C_SMB_TMTSC_MSTR_MASK0	0xffu
#define MCHP_I2C_SMB_TMTSC_BUS_POS	24u
#define MCHP_I2C_SMB_TMTSC_BUS_MASK	0xff000000u
#define MCHP_I2C_SMB_TMTSC_BUS_MASK0	0xffu

/*
 * Offset 0x48
 * Slave Transmit Buffer register
 * 8-bit read-write
 */
#define MCHP_I2C_SMB_SLV_TX_BUF_OFS	0x48u

/*
 * Offset 0x4c
 * Slave Receive Buffer register
 * 8-bit read-write
 */
#define MCHP_I2C_SMB_SLV_RX_BUF_OFS	0x4cu

/*
 * Offset 0x50
 * Master Transmit Buffer register
 * 8-bit read-write
 */
#define MCHP_I2C_SMB_MTR_TX_BUF_OFS	0x50u

/*
 * Offset 0x54
 * Master Receive Buffer register
 * 8-bit read-write
 */
#define MCHP_I2C_SMB_MTR_RX_BUF_OFS	0x54u

/*
 * Offset 0x58
 * I2C FSM read-only
 */
#define MCHP_I2C_SMB_I2C_FSM_OFS	0x58u

/*
 * Offset 0x5c
 * SMB Netork layer FSM read-only
 */
#define MCHP_I2C_SMB_FSM_OFS	0x5cu

/*
 * Offset 0x60
 * Wake Status register
 */
#define MCHP_I2C_SMB_WAKE_STS_OFS	0x60u
#define MCHP_I2C_SMB_WAKE_STS_START_RWC	(1u << 0)

/*
 * Offset 0x64
 * Wake Enable register
 */
#define MCHP_I2C_SMB_WAKE_EN_OFS	0x64u
#define MCHP_I2C_SMB_WAKE_EN		(1u << 0)

/*
 * Offset 0x68
 */
#define MCHP_I2C_SMB_WAKE_SYNC_OFS		0x68u
#define MCHP_I2C_SMB_WAKE_FAST_RESYNC_EN	(1u << 0)

/*
 * I2C GIRQ and NVIC mapping
 */
#define MCHP_I2C_SMB_GIRQ		13u
#define MCHP_I2C_SMB_GIRQ_IDX		(13u - 8u)
#define MCHP_I2C_SMB_NVIC_GIRQ		5u
#define MCHP_I2C_SMB0_NVIC_DIRECT	20u
#define MCHP_I2C_SMB1_NVIC_DIRECT	21u
#define MCHP_I2C_SMB2_NVIC_DIRECT	22u
#define MCHP_I2C_SMB3_NVIC_DIRECT	23u
#define MCHP_I2C_SMB4_NVIC_DIRECT	158u

#define MCHP_I2C_SMB_GIRQ_SRC_ADDR	0x4000e064u
#define MCHP_I2C_SMB_GIRQ_SET_EN_ADDR	0x4000e068u
#define MCHP_I2C_SMB_GIRQ_RESULT_ADDR	0x4000e06cu
#define MCHP_I2C_SMB_GIRQ_CLR_EN_ADDR	0x4000e070u

#define MCHP_I2C_SMB0_GIRQ_POS	0u
#define MCHP_I2C_SMB1_GIRQ_POS	1u
#define MCHP_I2C_SMB2_GIRQ_POS	2u
#define MCHP_I2C_SMB3_GIRQ_POS	3u
#define MCHP_I2C_SMB4_GIRQ_POS	4u

#define MCHP_I2C_SMB0_GIRQ_VAL	(1u << 0)
#define MCHP_I2C_SMB1_GIRQ_VAL	(1u << 1)
#define MCHP_I2C_SMB2_GIRQ_VAL	(1u << 2)
#define MCHP_I2C_SMB3_GIRQ_VAL	(1u << 3)
#define MCHP_I2C_SMB4_GIRQ_VAL	(1u << 4)

/*
 * Register access by controller base address
 */

/* I2C Control register, write-only */
#define MCHP_I2C_SMB_CTRL_WO(ba) REG8(ba)
/* I2C Status register, read-only */
#define MCHP_I2C_SMB_STS_RO(ba)  REG8(ba)

#define MCHP_I2C_SMB_CTRL(ba) REG8_OFS(ba, MCHP_I2C_SMB_CTRL_OFS)

/* Own Address register (slave addresses) */
#define MCHP_I2C_SMB_OWN_ADDR(ba) \
	REG16_OFS(ba, MCHP_I2C_SMB_OWN_ADDR_OFS)
/* access bits[7:0] OWN_ADDRESS_1 */
#define MCHP_I2C_SMB_OWN_ADDR1(ba) \
	REG8_OFS(ba, MCHP_I2C_SMB_OWN_ADDR_OFS)
/* access bits[15:8] OWN_ADDRESS_2 */
#define MCHP_I2C_SMB_OWN_ADDR2(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_OWN_ADDR_OFS + 1))

/* I2C Data register */
#define MCHP_I2C_SMB_DATA(ba) \
	REG8_OFS(ba, MCHP_I2C_SMB_DATA_OFS)

/* Network layer Master Command register */
#define MCHP_I2C_SMB_MCMD(ba)  REG32_OFS(ba, MCHP_I2C_SMB_MSTR_CMD_OFS)
#define MCHP_I2C_SMB_MCMD_MRP(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_MSTR_CMD_OFS + 0u))
#define MCHP_I2C_SMB_MCMD_CTRL(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_MSTR_CMD_OFS + 1u))
#define MCHP_I2C_SMB_MCMD_WCNT(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_MSTR_CMD_OFS + 2u))
#define MCHP_I2C_SMB_MCMD_RCNT(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_MSTR_CMD_OFS + 3u))

/* Network layer Slave Command register */
#define MCHP_I2C_SMB_SCMD(ba) REG32_OFS(ba, MCHP_I2C_SMB_SLV_CMD_OFS)
#define MCHP_I2C_SMB_SCMD_SRP(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_SLV_CMD_OFS + 0u))
#define MCHP_I2C_SMB_SCMD_WCNT(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_SLV_CMD_OFS + 1u))
#define MCHP_I2C_SMB_SCMD_RCNT(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_SLV_CMD_OFS + 2u))

/* PEC register */
#define MCHP_I2C_SMB_PEC(ba) REG8_OFS(ba, MCHP_I2C_SMB_PEC_CRC_OFS)

/* Repeated Start Hold Time register */
#define MCHP_I2C_SMB_RSHT(ba) REG8_OFS(ba, MCHP_I2C_SMB_RSHT_OFS)

/* Completion register */
#define MCHP_I2C_SMB_CMPL(ba) REG32_OFS(ba, MCHP_I2C_SMB_CMPL_OFS)
/* access only bits[7:0] R/W timeout enables */
#define MCHP_I2C_SMB_CMPL_B0(ba) REG8_OFS(ba, MCHP_I2C_SMB_CMPL_OFS)

/* Idle Scaling register */
#define MCHP_I2C_SMB_IDLSC(ba) REG32_OFS(ba, MCHP_I2C_SMB_IDLSC_OFS)

/* Configuration register */
#define MCHP_I2C_SMB_CFG(ba) REG32_OFS(ba, MCHP_I2C_SMB_CFG_OFS)
/* access each byte */
#define MCHP_I2C_SMB_CFG_B0(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_CFG_OFS + 0x00u))
#define MCHP_I2C_SMB_CFG_B1(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_CFG_OFS + 0x01u))
#define MCHP_I2C_SMB_CFG_B2(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_CFG_OFS + 0x02u))
#define MCHP_I2C_SMB_CFG_B3(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_CFG_OFS + 0x03u))

/* Bus Clock register */
#define MCHP_I2C_SMB_BUS_CLK(ba) REG32_OFS(ba, MCHP_I2C_SMB_BUS_CLK_OFS)
#define MCHP_I2C_SMB_BUS_CLK_LO_PERIOD(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_BUS_CLK_OFS + 0x00u))
#define MCHP_I2C_SMB_BUS_CLK_HI_PERIOD(ba) \
	REG8_OFS(ba, (MCHP_I2C_SMB_BUS_CLK_OFS + 0x01u))

/* Bit-Bang Control register */
#define MCHP_I2C_SMB_BB_CTRL(ba) REG8_OFS(ba, MCHP_I2C_SMB_BB_OFS)

/* MCHP Reserved 0x3c register */
#define MCHP_I2C_SMB_RSVD_3C(ba) REG8_OFS(ba, MCHP_I2C_SMB_RSVD_3C)

/* Data Timing register */
#define MCHP_I2C_SMB_DATA_TM(ba) REG32_OFS(ba, MCHP_I2C_SMB_DATA_TM_OFS)

/* Timeout Scaling register */
#define MCHP_I2C_SMB_TMTSC(ba) REG32_OFS(ba, MCHP_I2C_SMB_TMTSC_OFS)

/* Network layer Slave Transmit Buffer register */
#define MCHP_I2C_SMB_SLV_TXB(ba) REG8_OFS(ba, MCHP_I2C_SMB_SLV_TX_BUF_OFS)

/* Network layer Slave Receive Buffer register */
#define MCHP_I2C_SMB_SLV_RXB(ba) REG8_OFS(ba, MCHP_I2C_SMB_SLV_RX_BUF_OFS)

/* Network layer Master Transmit Buffer register */
#define MCHP_I2C_SMB_MTR_TXB(ba) REG8_OFS(ba, MCHP_I2C_SMB_MTR_TX_BUF_OFS)

/* Network layer Master Receive Buffer register */
#define MCHP_I2C_SMB_MTR_RXB(ba) REG8_OFS(ba, MCHP_I2C_SMB_MTR_RX_BUF_OFS)

/* Wake Status register */
#define MCHP_I2C_SMB_WAKE_STS(ba) REG8_OFS(ba, MCHP_I2C_SMB_WAKE_STS_OFS)

/* Wake Enable register */
#define MCHP_I2C_SMB_WAKE_ENABLE(ba) REG8_OFS(ba, MCHP_SMB_WAKE_EN_OFS)

/* =========================================================================*/
/* ================	       SMB			   ================ */
/* =========================================================================*/

/**
  * @brief SMBus Network Layer Block (SMB)
  */
typedef struct i2c_smb_regs
{		/*!< (@ 0x40004000) SMB Structure	 */
	__IOM uint8_t CTRLSTS;	/*!< (@ 0x00000000) SMB Status(RO), Control(WO) */
	uint8_t RSVD1[3];
	__IOM uint32_t OWN_ADDR;	/*!< (@ 0x00000004) SMB Own address 1 */
	__IOM uint8_t I2CDATA;	/*!< (@ 0x00000008) SMB I2C Data */
	uint8_t RSVD2[3];
	__IOM uint32_t MCMD;	/*!< (@ 0x0000000c) SMB SMB master command */
	__IOM uint32_t SCMD;	/*!< (@ 0x00000010) SMB SMB slave command */
	__IOM uint8_t PEC;	/*!< (@ 0x00000014) SMB PEC value */
	uint8_t RSVD3[3];
	__IOM uint8_t RSHTM;	/*!< (@ 0x00000018) SMB Repeated-Start hold time */
	uint8_t RSVD4[7];
	__IOM uint32_t COMPL;	/*!< (@ 0x00000020) SMB Completion */
	__IOM uint32_t IDLSC;	/*!< (@ 0x00000024) SMB Idle scaling */
	__IOM uint32_t CFG;	/*!< (@ 0x00000028) SMB Configuration */
	__IOM uint32_t BUSCLK;	/*!< (@ 0x0000002c) SMB Bus Clock */
	__IOM uint8_t BLKID;	/*!< (@ 0x00000030) SMB Block ID */
	uint8_t RSVD5[3];
	__IOM uint8_t BLKREV;	/*!< (@ 0x00000034) SMB Block revision */
	uint8_t RSVD6[3];
	__IOM uint8_t BBCTRL;	/*!< (@ 0x00000038) SMB Bit-Bang control */
	uint8_t RSVD7[3];
	__IOM uint32_t CLKSYNC;	/*!< (@ 0x0000003c) SMB Clock Sync */
	__IOM uint32_t DATATM;	/*!< (@ 0x00000040) SMB Data timing */
	__IOM uint32_t TMOUTSC;	/*!< (@ 0x00000044) SMB Time-out scaling */
	__IOM uint8_t SLV_TXB;	/*!< (@ 0x00000048) SMB SMB slave TX buffer */
	uint8_t RSVD8[3];
	__IOM uint8_t SLV_RXB;	/*!< (@ 0x0000004c) SMB SMB slave RX buffer */
	uint8_t RSVD9[3];
	__IOM uint8_t MTR_TXB;	/*!< (@ 0x00000050) SMB SMB Master TX buffer */
	uint8_t RSVD10[3];
	__IOM uint8_t MTR_RXB;	/*!< (@ 0x00000054) SMB SMB Master RX buffer */
	uint8_t RSVD11[3];
	__IOM uint32_t FSM;	/*!< (@ 0x00000058) SMB FSM (RO) */
	__IOM uint32_t FSM_SMB;	/*!< (@ 0x0000005c) SMB FSM SMB (RO) */
	__IOM uint8_t WAKE_STS;	/*!< (@ 0x00000060) SMB Wake status */
	uint8_t RSVD12[3];
	__IOM uint8_t WAKE_EN;	/*!< (@ 0x00000064) SMB Wake enable */
} I2C_SMB_Type;

#endif				// #ifndef _SMB_H
/* end smb.h */
/**   @}
 */
