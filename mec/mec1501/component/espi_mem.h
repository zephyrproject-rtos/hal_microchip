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

/** @file espi_mem.h
 *MEC1501 eSPI Memory Component definitions
 */
/** @defgroup MEC1501 Peripherals eSPI MEM
 */

#ifndef _ESPI_MEM_H
#define _ESPI_MEM_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/*------------------------------------------------------------------*/

/* =========================================================================*/
/* ================	      eSPI Memory Component	   ================ */
/* =========================================================================*/

/*
 * eSPI Memory Component Bus Master registers @ 0x400f3a00
 */

/* BM_STS */
#define MCHP_ESPI_BM_STS_DONE_1_POS	0u
#define MCHP_ESPI_BM_STS_DONE_1		(1u << 0)	/* RW1C */
#define MCHP_ESPI_BM_STS_BUSY_1_POS	1u
#define MCHP_ESPI_BM_STS_BUSY_1		(1u << 1)	/* RO */
#define MCHP_ESPI_BM_STS_AB_EC_1_POS	2u
#define MCHP_ESPI_BM_STS_AB_EC_1	(1u << 2)	/* RW1C */
#define MCHP_ESPI_BM_STS_AB_HOST_1_POS	3u
#define MCHP_ESPI_BM_STS_AB_HOST_1	(1u << 3)	/* RW1C */
#define MCHP_ESPI_BM_STS_AB_CH2_1_POS	4u
#define MCHP_ESPI_BM_STS_CH2_AB_1	(1u << 4)	/* RW1C */
#define MCHP_ESPI_BM_STS_OVFL_1_POS	5u
#define MCHP_ESPI_BM_STS_OVFL_1_CH2	(1u << 5)	/* RW1C */
#define MCHP_ESPI_BM_STS_OVRUN_1_POS	6u
#define MCHP_ESPI_BM_STS_OVRUN_1_CH2	(1u << 6)	/* RW1C */
#define MCHP_ESPI_BM_STS_INC_1_POS	7u
#define MCHP_ESPI_BM_STS_INC_1		(1u << 7)	/* RW1C */
#define MCHP_ESPI_BM_STS_FAIL_1_POS	8u
#define MCHP_ESPI_BM_STS_FAIL_1		(1u << 8)	/* RW1C */
#define MCHP_ESPI_BM_STS_IBERR_1_POS	9u
#define MCHP_ESPI_BM_STS_IBERR_1	(1u << 9)	/* RW1C */
#define MCHP_ESPI_BM_STS_BADREQ_1_POS	11u
#define MCHP_ESPI_BM_STS_BADREQ_1	(1u << 11)	/* RW1C */
#define MCHP_ESPI_BM_STS_DONE_2_POS	16u
#define MCHP_ESPI_BM_STS_DONE_2		(1u << 16)	/* RW1C */
#define MCHP_ESPI_BM_STS_BUSY_2_POS	17u
#define MCHP_ESPI_BM_STS_BUSY_2		(1u << 17)	/* RO */
#define MCHP_ESPI_BM_STS_AB_EC_2_POS	18u
#define MCHP_ESPI_BM_STS_AB_EC_2	(1u << 18)	/* RW1C */
#define MCHP_ESPI_BM_STS_AB_HOST_2_POS	19u
#define MCHP_ESPI_BM_STS_AB_HOST_2	(1u << 19)	/* RW1C */
#define MCHP_ESPI_BM_STS_AB_CH1_2_POS	20u
#define MCHP_ESPI_BM_STS_AB_CH1_2	(1u << 20)	/* RW1C */
#define MCHP_ESPI_BM_STS_OVFL_2_POS	21u
#define MCHP_ESPI_BM_STS_OVFL_2_CH2	(1u << 21)	/* RW1C */
#define MCHP_ESPI_BM_STS_OVRUN_2_POS	22u
#define MCHP_ESPI_BM_STS_OVRUN_CH2_2	(1u << 22)	/* RW1C */
#define MCHP_ESPI_BM_STS_INC_2_POS	23u
#define MCHP_ESPI_BM_STS_INC_2		(1u << 23)	/* RW1C */
#define MCHP_ESPI_BM_STS_FAIL_2_POS	24u
#define MCHP_ESPI_BM_STS_FAIL_2		(1u << 24)	/* RW1C */
#define MCHP_ESPI_BM_STS_IBERR_2_POS	25u
#define MCHP_ESPI_BM_STS_IBERR_2	(1u << 25)	/* RW1C */
#define MCHP_ESPI_BM_STS_BADREQ_2_POS	27u
#define MCHP_ESPI_BM_STS_BADREQ_2	(1u << 27)	/* RW1C */

#define MCHP_ESPI_BM_STS_ALL_RW1C_1	0x0bfdu
#define MCHP_ESPI_BM_STS_ALL_RW1C_2	(0x0bfdu << 16)

/* BM_IEN */
#define MCHP_ESPI_BM1_IEN_DONE_POS	0u
#define MCHP_ESPI_BM1_IEN_DONE		(1u << 0)
#define MCHP_ESPI_BM2_IEN_DONE_POS	16u
#define MCHP_ESPI_BM2_IEN_DONE		(1u << 16)

/* BM_CFG */
#define MCHP_ESPI_BM1_CFG_TAG_POS	0u
#define MCHP_ESPI_BM1_CFG_TAG_MASK0	0x0fu
#define MCHP_ESPI_BM1_CFG_TAG_MASK	(0x0fu << 0)
#define MCHP_ESPI_BM2_CFG_TAG_POS	16u
#define MCHP_ESPI_BM2_CFG_TAG_MASK0	0x0fu
#define MCHP_ESPI_BM2_CFG_TAG_MASK	(0x0fu << 16)

/* BM1_CTRL */
#define MCHP_ESPI_BM1_CTRL_START_POS	0u
#define MCHP_ESPI_BM1_CTRL_START	(1u << 0)	/* WO */
#define MCHP_ESPI_BM1_CTRL_ABORT_POS	1u
#define MCHP_ESPI_BM1_CTRL_ABORT	(1u << 1)	/* WO */
#define MCHP_ESPI_BM1_CTRL_EN_INC_POS	2u
#define MCHP_ESPI_BM1_CTRL_EN_INC	(1u << 2)	/* RW */
#define MCHP_ESPI_BM1_CTRL_WAIT_NB2_POS	3u
#define MCHP_ESPI_BM1_CTRL_WAIT_NB2	(1u << 3)	/* RW */
#define MCHP_ESPI_BM1_CTRL_CTYPE_POS	8u
#define MCHP_ESPI_BM1_CTRL_CTYPE_MASK0	0x03u
#define MCHP_ESPI_BM1_CTRL_CTYPE_MASK	(0x03u << 8)
#define MCHP_ESPI_BM1_CTRL_CTYPE_RD_ADDR32	(0x00u << 8)
#define MCHP_ESPI_BM1_CTRL_CTYPE_WR_ADDR32	(0x01u << 8)
#define MCHP_ESPI_BM1_CTRL_CTYPE_RD_ADDR64	(0x02u << 8)
#define MCHP_ESPI_BM1_CTRL_CTYPE_WR_ADDR64	(0x03u << 8)
#define MCHP_ESPI_BM1_CTRL_LEN_POS	16u
#define MCHP_ESPI_BM1_CTRL_LEN_MASK0	0x1fffu
#define MCHP_ESPI_BM1_CTRL_LEN_MASK	(0x1fffu << 16)

/* BM1_EC_ADDR_LSW */
#define MCHP_ESPI_BM1_EC_ADDR_LSW_MASK	0xfffffffcu

/* BM2_CTRL */
#define MCHP_ESPI_BM2_CTRL_START_POS	0u
#define MCHP_ESPI_BM2_CTRL_START	(1u << 0)	/* WO */
#define MCHP_ESPI_BM2_CTRL_ABORT_POS	1u
#define MCHP_ESPI_BM2_CTRL_ABORT	(1u << 1)	/* WO */
#define MCHP_ESPI_BM2_CTRL_EN_INC_POS	2u
#define MCHP_ESPI_BM2_CTRL_EN_INC	(1u << 2)	/* RW */
#define MCHP_ESPI_BM2_CTRL_WAIT_NB2_POS	3u
#define MCHP_ESPI_BM2_CTRL_WAIT_NB2	(1u << 3)	/* RW */
#define MCHP_ESPI_BM2_CTRL_CTYPE_POS	8u
#define MCHP_ESPI_BM2_CTRL_CTYPE_MASK0	0x03u
#define MCHP_ESPI_BM2_CTRL_CTYPE_MASK	(0x03u << 8)
#define MCHP_ESPI_BM2_CTRL_CTYPE_RD_ADDR32	(0x00u << 8)
#define MCHP_ESPI_BM2_CTRL_CTYPE_WR_ADDR32	(0x01u << 8)
#define MCHP_ESPI_BM2_CTRL_CTYPE_RD_ADDR64	(0x02u << 8)
#define MCHP_ESPI_BM2_CTRL_CTYPE_WR_ADDR64	(0x03u << 8)
#define MCHP_ESPI_BM2_CTRL_LEN_POS	16u
#define MCHP_ESPI_BM2_CTRL_LEN_MASK0	0x1fffu
#define MCHP_ESPI_BM2_CTRL_LEN_MASK	(0x1fffu << 16)

/* BM2_EC_ADDR_LSW */
#define MCHP_ESPI_BM2_EC_ADDR_LSW_MASK	0xfffffffcu

typedef struct espi_mem_bm_regs
{
	__IOM uint32_t BM_STS;	/*! (@ 0x0000) Bus Master Status */
	__IOM uint32_t BM_IEN;	/*! (@ 0x0004) Bus Master interrupt enable */
	__IOM uint32_t BM_CFG;	/*! (@ 0x0008) Bus Master configuration */
	uint8_t RSVD1[4];
	__IOM uint32_t BM1_CTRL;	/*! (@ 0x0010) Bus Master 1 control */
	__IOM uint32_t BM1_HOST_ADDR_LSW;	/*! (@ 0x0014) Bus Master 1 host address bits[31:0] */
	__IOM uint32_t BM1_HOST_ADDR_MSW;	/*! (@ 0x0018) Bus Master 1 host address bits[63:32] */
	__IOM uint32_t BM1_EC_ADDR_LSW;	/*! (@ 0x001c) Bus Master 1 EC address bits[31:0] */
	__IOM uint32_t BM1_EC_ADDR_MSW;	/*! (@ 0x0020) Bus Master 1 EC address bits[63:32] */
	__IOM uint32_t BM2_CTRL;	/*! (@ 0x0024) Bus Master 2 control */
	__IOM uint32_t BM2_HOST_ADDR_LSW;	/*! (@ 0x0028) Bus Master 2 host address bits[31:0] */
	__IOM uint32_t BM2_HOST_ADDR_MSW;	/*! (@ 0x002c) Bus Master 2 host address bits[63:32] */
	__IOM uint32_t BM2_EC_ADDR_LSW;	/*! (@ 0x0030) Bus Master 2 EC address bits[31:0] */
	__IOM uint32_t BM2_EC_ADDR_MSW;	/*! (@ 0x0034) Bus Master 2 EC address bits[63:32] */
} ESPI_MEM_BM_Type;

/*
 * MCHP_ESPI_MEM_BAR_EC @ 0x400f3930
 *
 * Half-word H0 of each EC Memory BAR contains
 * Memory BAR memory address mask bits in bits[7:0]
 * Logical Device Number in bits[13:8]
 */
#define MCHP_ESPI_EBAR_H0_MEM_MASK_POS	0u
#define MCHP_ESPI_EBAR_H0_MEM_MASK_MASK	0xffu
#define MCHP_ESPI_EBAR_H0_LDN_POS	8u
#define MCHP_ESPI_EBAR_H0_LDN_MASK0	0x3fu
#define MCHP_ESPI_EBAR_H0_LDN_MASK	(0x3fu << 8u)

typedef struct espi_mem_bar_ec_regs
{
	__IOM uint16_t EBAR_MBX_H0;	/*! (@ 0x0000) Mailbox Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_MBX_H1;	/*! (@ 0x0002) Mailbox Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_MBX_H2;	/*! (@ 0x0004) Mailbox Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_MBX_H3;	/*! (@ 0x0006) Mailbox Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_MBX_H4;	/*! (@ 0x0008) Mailbox Logical Device BAR Internal b[79:64] */
	__IOM uint16_t EBAR_ACPI_EC_0_H0;	/*! (@ 0x000a) ACPI EC0 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_ACPI_EC_0_H1;	/*! (@ 0x000c) ACPI EC0 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_ACPI_EC_0_H2;	/*! (@ 0x000e) ACPI EC0 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_ACPI_EC_0_H3;	/*! (@ 0x0010) ACPI EC0 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_ACPI_EC_0_H4;	/*! (@ 0x0012) ACPI EC0 Logical Device BAR Internal b[79:64] */
	__IOM uint16_t EBAR_ACPI_EC_1_H0;	/*! (@ 0x0014) ACPI EC1 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_ACPI_EC_1_H1;	/*! (@ 0x0016) ACPI EC1 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_ACPI_EC_1_H2;	/*! (@ 0x0018) ACPI EC1 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_ACPI_EC_1_H3;	/*! (@ 0x001a) ACPI EC1 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_ACPI_EC_1_H4;	/*! (@ 0x001c) ACPI EC1 Logical Device BAR Internal b[79:64] */
	__IOM uint16_t EBAR_ACPI_EC_2_H0;	/*! (@ 0x001e) ACPI EC2 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_ACPI_EC_2_H1;	/*! (@ 0x0020) ACPI EC2 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_ACPI_EC_2_H2;	/*! (@ 0x0022) ACPI EC2 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_ACPI_EC_2_H3;	/*! (@ 0x0024) ACPI EC2 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_ACPI_EC_2_H4;	/*! (@ 0x0026) ACPI EC2 Logical Device BAR Internal b[79:64] */
	__IOM uint16_t EBAR_ACPI_EC_3_H0;	/*! (@ 0x0028) ACPI EC3 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_ACPI_EC_3_H1;	/*! (@ 0x002a) ACPI EC3 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_ACPI_EC_3_H2;	/*! (@ 0x002c) ACPI EC3 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_ACPI_EC_3_H3;	/*! (@ 0x002e) ACPI EC3 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_ACPI_EC_3_H4;	/*! (@ 0x0030) ACPI EC3 Logical Device BAR Internal b[79:64] */
	uint8_t RSVD1[10];
	__IOM uint16_t EBAR_EMI_0_H0;	/*! (@ 0x003c) EMI0 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_EMI_0_H1;	/*! (@ 0x003e) EMI0 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_EMI_0_H2;	/*! (@ 0x0040) EMI0 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_EMI_0_H3;	/*! (@ 0x0042) EMI0 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_EMI_0_H4;	/*! (@ 0x0044) EMI0 Logical Device BAR Internal b[79:64] */
	__IOM uint16_t EBAR_EMI_1_H0;	/*! (@ 0x0046) EMI1 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t EBAR_EMI_1_H1;	/*! (@ 0x0048) EMI1 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t EBAR_EMI_1_H2;	/*! (@ 0x004a) EMI1 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t EBAR_EMI_1_H3;	/*! (@ 0x004c) EMI1 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t EBAR_EMI_1_H4;	/*! (@ 0x004e) EMI1 Logical Device BAR Internal b[79:64] */
} ESPI_MEM_BAR_EC_Type;

/*
 * MCHP_ESPI_MEM_BAR_HOST @ 0x400f3b30
 *
 * Each Host BAR contains:
 * bit[0] (RW) = Valid bit
 * bits[15:1] = Reserved, read-only 0
 * bits[47:16] (RW) = bits[31:0] of the Host Memory address.
 */

/* Memory BAR Host address valid */
#define MCHP_ESPI_HBAR_VALID_POS	0u
#define MCHP_ESPI_HBAR_VALID_MASK	0x01u
/*
 * Host address is in bits[47:16] of the HBAR
 * HBAR's are spaced every 10 bytes (80 bits) but
 * only implement bits[47:0]
 */
#define MCHP_ESPI_HBAR_VALID_OFS	0x00u	/* byte 0 */
/* 32-bit Host Address */
#define MCHP_ESPI_HBAR_ADDR_B0_OFS	0x02u	/* byte 2 */
#define MCHP_ESPI_HBAR_ADDR_B1_OFS	0x03u	/* byte 3 */
#define MCHP_ESPI_HBAR_ADDR_B2_OFS	0x04u	/* byte 4 */
#define MCHP_ESPI_HBAR_ADDR_B3_OFS	0x05u	/* byte 5 */

typedef struct espi_mem_bar_host_regs
{
	__IOM uint16_t HBAR_MBX_H0;	/*! (@ 0x0000) Mailbox Logical Device BAR Host b[15:0] */
	__IOM uint16_t HBAR_MBX_H1;	/*! (@ 0x0002) Mailbox Logical Device BAR Host b[31:16] */
	__IOM uint16_t HBAR_MBX_H2;	/*! (@ 0x0004) Mailbox Logical Device BAR Host b[47:32] */
	__IOM uint16_t HBAR_MBX_H3;	/*! (@ 0x0006) Mailbox Logical Device BAR Host b[63:48] */
	__IOM uint16_t HBAR_MBX_H4;	/*! (@ 0x0008) Mailbox Logical Device BAR Host b[79:64] */
	__IOM uint16_t HBAR_ACPI_EC_0_H0;	/*! (@ 0x000a) ACPI EC0 Logical Device BAR Host b[15:0] */
	__IOM uint16_t HBAR_ACPI_EC_0_H1;	/*! (@ 0x000c) ACPI EC0 Logical Device BAR Host b[31:16] */
	__IOM uint16_t HBAR_ACPI_EC_0_H2;	/*! (@ 0x000e) ACPI EC0 Logical Device BAR Host b[47:32] */
	__IOM uint16_t HBAR_ACPI_EC_0_H3;	/*! (@ 0x0010) ACPI EC0 Logical Device BAR Host b[63:48] */
	__IOM uint16_t HBAR_ACPI_EC_0_H4;	/*! (@ 0x0012) ACPI EC0 Logical Device BAR Host b[79:64] */
	__IOM uint16_t HBAR_ACPI_EC_1_H0;	/*! (@ 0x0014) ACPI EC1 Logical Device BAR Host b[15:0] */
	__IOM uint16_t HBAR_ACPI_EC_1_H1;	/*! (@ 0x0016) ACPI EC1 Logical Device BAR Host b[31:16] */
	__IOM uint16_t HBAR_ACPI_EC_1_H2;	/*! (@ 0x0018) ACPI EC1 Logical Device BAR Host b[47:32] */
	__IOM uint16_t HBAR_ACPI_EC_1_H3;	/*! (@ 0x001a) ACPI EC1 Logical Device BAR Host b[63:48] */
	__IOM uint16_t HBAR_ACPI_EC_1_H4;	/*! (@ 0x001c) ACPI EC1 Logical Device BAR Host b[79:64] */
	__IOM uint16_t HBAR_ACPI_EC_2_H0;	/*! (@ 0x001e) ACPI EC2 Logical Device BAR Host b[15:0] */
	__IOM uint16_t HBAR_ACPI_EC_2_H1;	/*! (@ 0x0020) ACPI EC2 Logical Device BAR Host b[31:16] */
	__IOM uint16_t HBAR_ACPI_EC_2_H2;	/*! (@ 0x0022) ACPI EC2 Logical Device BAR Host b[47:32] */
	__IOM uint16_t HBAR_ACPI_EC_2_H3;	/*! (@ 0x0024) ACPI EC2 Logical Device BAR Host b[63:48] */
	__IOM uint16_t HBAR_ACPI_EC_2_H4;	/*! (@ 0x0026) ACPI EC2 Logical Device BAR Host b[79:64] */
	__IOM uint16_t HBAR_ACPI_EC_3_H0;	/*! (@ 0x0028) ACPI EC3 Logical Device BAR Host b[15:0] */
	__IOM uint16_t HBAR_ACPI_EC_3_H1;	/*! (@ 0x002a) ACPI EC3 Logical Device BAR Host b[31:16] */
	__IOM uint16_t HBAR_ACPI_EC_3_H2;	/*! (@ 0x002c) ACPI EC3 Logical Device BAR Host b[47:32] */
	__IOM uint16_t HBAR_ACPI_EC_3_H3;	/*! (@ 0x002e) ACPI EC3 Logical Device BAR Host b[63:48] */
	__IOM uint16_t HBAR_ACPI_EC_3_H4;	/*! (@ 0x0030) ACPI EC3 Logical Device BAR Host b[79:64] */
	uint8_t RSVD1[10];
	__IOM uint16_t HBAR_EMI_0_H0;	/*! (@ 0x003c) EMI0 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t HBAR_EMI_0_H1;	/*! (@ 0x003e) EMI0 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t HBAR_EMI_0_H2;	/*! (@ 0x0040) EMI0 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t HBAR_EMI_0_H3;	/*! (@ 0x0042) EMI0 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t HBAR_EMI_0_H4;	/*! (@ 0x0044) EMI0 Logical Device BAR Internal b[79:64] */
	__IOM uint16_t HBAR_EMI_1_H0;	/*! (@ 0x0046) EMI1 Logical Device BAR Internal b[15:0] */
	__IOM uint16_t HBAR_EMI_1_H1;	/*! (@ 0x0048) EMI1 Logical Device BAR Internal b[31:16] */
	__IOM uint16_t HBAR_EMI_1_H2;	/*! (@ 0x004a) EMI1 Logical Device BAR Internal b[47:32] */
	__IOM uint16_t HBAR_EMI_1_H3;	/*! (@ 0x004c) EMI1 Logical Device BAR Internal b[63:48] */
	__IOM uint16_t HBAR_EMI_1_H4;	/*! (@ 0x004e) EMI1 Logical Device BAR Internal b[79:64] */
} ESPI_MEM_BAR_HOST_Type;

/*
 * eSPI Memory Component SRAM 0 and 1 EC BAR's @ 0x400f39a0
 * bit[0] = Valid
 * bits[2:1] = Access
 * bit[3] = reserved, read-only 0
 * bits[7:4] = Size as power of 2
 * bits[15:8] = reserved, read-only 0
 * bits[47:16] = Base address of EC SRAM mapped to this BAR must be
 * aligned on Size boundary.
 */
#define MCHP_EC_SRAM_BAR_H0_VALID_POS	0u
#define MCHP_EC_SRAM_BAR_H0_VALID_MASK0	0x01u
#define MCHP_EC_SRAM_BAR_H0_VALID_MASK	0x01u
#define MCHP_EC_SRAM_BAR_H0_VALID	0x01u
#define MCHP_EC_SRAM_BAR_H0_ACCESS_POS	1u
#define MCHP_EC_SRAM_BAR_H0_ACCESS_MASK0	0x03u
#define MCHP_EC_SRAM_BAR_H0_ACCESS_MASK	(0x03u << 1u)
#define MCHP_EC_SRAM_BAR_H0_ACCESS_NONE	(0x00u << 1u)
#define MCHP_EC_SRAM_BAR_H0_ACCESS_RO	(0x01u << 1u)
#define MCHP_EC_SRAM_BAR_H0_ACCESS_WO	(0x02u << 1u)
#define MCHP_EC_SRAM_BAR_H0_ACCESS_RW	(0x03u << 1u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_POS	4u
#define MCHP_EC_SRAM_BAR_H0_SIZE_MASK0	0x0fu
#define MCHP_EC_SRAM_BAR_H0_SIZE_MASK	(0x0fu << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_1B	(0x00u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_2B	(0x01u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_4B	(0x02u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_8B	(0x03u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_16B	(0x04u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_32B	(0x05u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_64B	(0x06u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_128B	(0x07u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_256B	(0x08u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_512B	(0x09u << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_1KB	(0x0au << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_2KB	(0x0bu << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_4KB	(0x0cu << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_8KB	(0x0du << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_16KB	(0x0eu << 4u)
#define MCHP_EC_SRAM_BAR_H0_SIZE_32KB	(0x0fu << 4u)
/* EC and Host SRAM BAR start offset of EC or Host memory address */
#define MCHP_EC_SRAM_BAR_MADDR_OFS1	2u
#define MCHP_EC_SRAM_BAR_MADDR_OFS2	4u

typedef struct espi_mem_sram_bar_ec_regs {
	uint8_t RSVD1[12];
	__IOM uint16_t EC_SRAM_0_H0;	/*! (@ 0x000c) SRAM0 BAR Internal b[15:0] */
	__IOM uint16_t EC_SRAM_0_H1;	/*! (@ 0x000e) SRAM0 BAR Internal b[31:16] */
	__IOM uint16_t EC_SRAM_0_H2;	/*! (@ 0x0010) SRAM0 BAR Internal b[47:32] */
	__IOM uint16_t EC_SRAM_0_H3;	/*! (@ 0x0012) SRAM0 BAR Internal b[63:48] */
	__IOM uint16_t EC_SRAM_0_H4;	/*! (@ 0x0014) SRAM0 BAR Internal b[79:64] */
	__IOM uint16_t EC_SRAM_1_H0;	/*! (@ 0x0016) SRAM1 BAR Internal b[15:0] */
	__IOM uint16_t EC_SRAM_1_H1;	/*! (@ 0x0018) SRAM1 BAR Internal b[31:16] */
	__IOM uint16_t EC_SRAM_1_H2;	/*! (@ 0x001a) SRAM1 BAR Internal b[47:32] */
	__IOM uint16_t EC_SRAM_1_H3;	/*! (@ 0x001c) SRAM1 BAR Internal b[63:48] */
	__IOM uint16_t EC_SRAM_1_H4;	/*! (@ 0x001e) SRAM1 BAR Internal b[79:64] */
} ESPI_MEM_SRAM_BAR_EC_Type;

/*
 * eSPI Memory Component SRAM 0 and 1 Host BAR's @ 0x400f3ba0
 * bit[0] = Read-Only copy of EC BAR Valid bit
 * bits[2:1] = Read-Only copy of EC BAR Access field
 * bit[3] = reserved, read-only 0
 * bits[7:4] = Read-Only copy of EC Size field
 * bits[15:8] = reserved, read-only 0
 * bits[47:16] = R/W. Base address in Host memory space for this BAR.
 */
typedef struct espi_mem_sram_bar_host_regs {
	uint8_t RSVD1[12];
	__IOM uint16_t HOST_SRAM_0_H0;	/*! (@ 0x03ac) SRAM0 BAR Host b[15:0] */
	__IOM uint16_t HOST_SRAM_0_H1;	/*! (@ 0x03ae) SRAM0 BAR Host b[31:16] */
	__IOM uint16_t HOST_SRAM_0_H2;	/*! (@ 0x03b0) SRAM0 BAR Host b[47:32] */
	__IOM uint16_t HOST_SRAM_0_H3;	/*! (@ 0x03b2) SRAM0 BAR Host b[63:48] */
	__IOM uint16_t HOST_SRAM_0_H4;	/*! (@ 0x03b4) SRAM0 BAR Host b[79:64] */
	__IOM uint16_t HOST_SRAM_1_H0;	/*! (@ 0x03b6) SRAM1 BAR Host b[15:0] */
	__IOM uint16_t HOST_SRAM_1_H1;	/*! (@ 0x03b8) SRAM1 BAR Host b[31:16] */
	__IOM uint16_t HOST_SRAM_1_H2;	/*! (@ 0x03ba) SRAM1 BAR Host b[47:32] */
	__IOM uint16_t HOST_SRAM_1_H3;	/*! (@ 0x03bc) SRAM1 BAR Host b[63:48] */
	__IOM uint16_t HOST_SRAM_1_H4;	/*! (@ 0x03be) SRAM1 BAR Host b[79:64] */
} ESPI_MEM_SRAM_BAR_HOST;

enum mec_espi_sram_bar_size {
	MCHP_ESPI_SRAM_SZ_1B = 0,
	MCHP_ESPI_SRAM_SZ_2B,
	MCHP_ESPI_SRAM_SZ_4B,
	MCHP_ESPI_SRAM_SZ_8B,
	MCHP_ESPI_SRAM_SZ_16B,
	MCHP_ESPI_SRAM_SZ_32B,
	MCHP_ESPI_SRAM_SZ_64B,
	MCHP_ESPI_SRAM_SZ_128B,
	MCHP_ESPI_SRAM_SZ_256B,
	MCHP_ESPI_SRAM_SZ_512B,
	MCHP_ESPI_SRAM_SZ_1KB,
	MCHP_ESPI_SRAM_SZ_2KB,
	MCHP_ESPI_SRAM_SZ_4KB,
	MCHP_ESPI_SRAM_SZ_8KB,
	MCHP_ESPI_SRAM_SZ_16KB,
	MCHP_ESPI_SRAM_SZ_32KB
};

enum mec_espi_sram_bar_access {
	MCHP_ESPI_SRAM_ACCESS_NONE = 0,
	MCHP_ESPI_SRAM_ACCESS_RO,
	MCHP_ESPI_SRAM_ACCESS_WO,
	MCHP_ESPI_SRAM_ACCESS_RW
};

enum mec_espi_sram_bar_valid {
	MCHP_ESPI_SRAM_BAR_NOT_VALID = 0,
	MCHP_ESPI_SRAM_BAR_VALID
};

static __attribute__ ((always_inline)) inline uint32_t
mchp_espi_sram_bar_valid_get(uintptr_t bar_addr)
{
	return (REG16(bar_addr) >> MCHP_EC_SRAM_BAR_H0_VALID_POS)
		& MCHP_EC_SRAM_BAR_H0_VALID_MASK0;
}

static __attribute__ ((always_inline)) inline void
mchp_espi_sram_bar_valid_set(uintptr_t bar_addr,
				enum mec_espi_sram_bar_valid valid)
{
	REG16(bar_addr) =
		(REG16(bar_addr) & ~(MCHP_EC_SRAM_BAR_H0_VALID_MASK))
		| (((uint32_t) valid << MCHP_EC_SRAM_BAR_H0_VALID_POS)
		& MCHP_EC_SRAM_BAR_H0_VALID_MASK);
}

static __attribute__ ((always_inline)) inline uint32_t
mchp_espi_sram_bar_access_get(uintptr_t bar_addr)
{
	return (REG16(bar_addr) >> MCHP_EC_SRAM_BAR_H0_ACCESS_POS)
		& MCHP_EC_SRAM_BAR_H0_ACCESS_MASK0;
}

static __attribute__ ((always_inline)) inline void
mchp_espi_sram_bar_access_set(uintptr_t bar_addr, enum mec_espi_sram_bar_size sz)
{
	REG16(bar_addr) =
		(REG16(bar_addr) & ~(MCHP_EC_SRAM_BAR_H0_ACCESS_MASK))
		| (((uint32_t) sz << MCHP_EC_SRAM_BAR_H0_ACCESS_POS)
		& MCHP_EC_SRAM_BAR_H0_ACCESS_MASK);
}

static __attribute__ ((always_inline)) inline uint32_t
mchp_espi_sram_bar_size_get(uintptr_t bar_addr)
{
	return (REG16(bar_addr) >> MCHP_EC_SRAM_BAR_H0_SIZE_POS)
		& MCHP_EC_SRAM_BAR_H0_SIZE_MASK0;
}

static __attribute__ ((always_inline)) inline void
mchp_espi_sram_bar_size_set(uintptr_t bar_addr, enum mec_espi_sram_bar_size sz)
{
	REG16(bar_addr) =
		(REG16(bar_addr) & ~(MCHP_EC_SRAM_BAR_H0_SIZE_MASK))
		| (((uint32_t) sz << MCHP_EC_SRAM_BAR_H0_SIZE_POS)
		& MCHP_EC_SRAM_BAR_H0_SIZE_MASK);
}

/*
 * 32-bit EC or Host memory space address is in bits[47:16] of BAR
 */
static __attribute__ ((always_inline)) inline uint32_t
mchp_espi_sram_bar_maddr_get(uintptr_t bar_addr)
{
	uint32_t maddr;

	maddr = (uint32_t) REG16(bar_addr + 4u);
	maddr <<= 16u;
	maddr += (uint32_t) REG16(bar_addr + 2u);

	return maddr;
}

static __attribute__ ((always_inline)) inline void
mchp_espi_sram_bar_maddr_set(uintptr_t bar_addr, uint32_t maddr)
{
	REG16(bar_addr + 2u) = (uint16_t) maddr;
	REG16(bar_addr + 4u) = (uint16_t) (maddr >> 16u);
}

#endif				/* #ifndef _ESPI_MEM_H */
/* end espi_mem.h */
/**   @}
 */
