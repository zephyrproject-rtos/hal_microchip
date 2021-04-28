/**
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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
 * MEC172x eSPI Memory Component definitions
 */
/** @defgroup MEC172x Peripherals eSPI MEM
 */

#ifndef _COMPONENT_ESPI_MEM_H
#define _COMPONENT_ESPI_MEM_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

/* eSPI Memory Component Bus Master registers @ 0x400F3A00 */

/* BM_STS */
#define MCHP_ESPI_BM_STS_DONE_1_POS	0u /* RW1C */
#define MCHP_ESPI_BM_STS_DONE_1		BIT(MCHP_ESPI_BM_STS_DONE_1_POS)
#define MCHP_ESPI_BM_STS_BUSY_1_POS	1u /* RO */
#define MCHP_ESPI_BM_STS_BUSY_1		BIT(MCHP_ESPI_BM_STS_BUSY_1_POS)
#define MCHP_ESPI_BM_STS_AB_EC_1_POS	2u /* RW1C */
#define MCHP_ESPI_BM_STS_AB_EC_1	BIT(MCHP_ESPI_BM_STS_AB_EC_1_POS)
#define MCHP_ESPI_BM_STS_AB_HOST_1_POS	3u /* RW1C */
#define MCHP_ESPI_BM_STS_AB_HOST_1	BIT(MCHP_ESPI_BM_STS_AB_HOST_1_POS)
#define MCHP_ESPI_BM_STS_AB_CH2_1_POS	4u /* RW1C */
#define MCHP_ESPI_BM_STS_CH2_AB_1	BIT(MCHP_ESPI_BM_STS_AB_CH2_1_POS)
#define MCHP_ESPI_BM_STS_OVFL_1_POS	5u /* RW1C */
#define MCHP_ESPI_BM_STS_OVFL_1_CH2	BIT(MCHP_ESPI_BM_STS_OVFL_1_POS)
#define MCHP_ESPI_BM_STS_OVRUN_1_POS	6u /* RW1C */
#define MCHP_ESPI_BM_STS_OVRUN_1_CH2	BIT(MCHP_ESPI_BM_STS_OVRUN_1_POS)
#define MCHP_ESPI_BM_STS_INC_1_POS	7u /* RW1C */
#define MCHP_ESPI_BM_STS_INC_1		BIT(MCHP_ESPI_BM_STS_INC_1_POS)
#define MCHP_ESPI_BM_STS_FAIL_1_POS	8u /* RW1C */
#define MCHP_ESPI_BM_STS_FAIL_1		BIT(MCHP_ESPI_BM_STS_FAIL_1_POS)
#define MCHP_ESPI_BM_STS_IBERR_1_POS	9u /* RW1C */
#define MCHP_ESPI_BM_STS_IBERR_1	BIT(MCHP_ESPI_BM_STS_IBERR_1_POS)
#define MCHP_ESPI_BM_STS_BADREQ_1_POS	11u /* RW1C */
#define MCHP_ESPI_BM_STS_BADREQ_1	BIT(MCHP_ESPI_BM_STS_BADREQ_1_POS)
#define MCHP_ESPI_BM_STS_DONE_2_POS	16u /* RW1C */
#define MCHP_ESPI_BM_STS_DONE_2		BIT(MCHP_ESPI_BM_STS_DONE_2_POS)
#define MCHP_ESPI_BM_STS_BUSY_2_POS	17u /* RO */
#define MCHP_ESPI_BM_STS_BUSY_2		BIT(MCHP_ESPI_BM_STS_BUSY_2_POS)
#define MCHP_ESPI_BM_STS_AB_EC_2_POS	18u /* RW1C */
#define MCHP_ESPI_BM_STS_AB_EC_2	BIT(MCHP_ESPI_BM_STS_AB_EC_2_POS)
#define MCHP_ESPI_BM_STS_AB_HOST_2_POS	19u /* RW1C */
#define MCHP_ESPI_BM_STS_AB_HOST_2	BIT(MCHP_ESPI_BM_STS_AB_HOST_2_POS)
#define MCHP_ESPI_BM_STS_AB_CH1_2_POS	20u /* RW1C */
#define MCHP_ESPI_BM_STS_AB_CH1_2	BIT(MCHP_ESPI_BM_STS_AB_CH1_2_POS)
#define MCHP_ESPI_BM_STS_OVFL_2_POS	21u /* RW1C */
#define MCHP_ESPI_BM_STS_OVFL_2_CH2	BIT(MCHP_ESPI_BM_STS_OVFL_2_POS)
#define MCHP_ESPI_BM_STS_OVRUN_2_POS	22u /* RW1C */
#define MCHP_ESPI_BM_STS_OVRUN_CH2_2	BIT(MCHP_ESPI_BM_STS_OVRUN_2_POS)
#define MCHP_ESPI_BM_STS_INC_2_POS	23u /* RW1C */
#define MCHP_ESPI_BM_STS_INC_2		BIT(MCHP_ESPI_BM_STS_INC_2_POS)
#define MCHP_ESPI_BM_STS_FAIL_2_POS	24u /* RW1C */
#define MCHP_ESPI_BM_STS_FAIL_2		BIT(MCHP_ESPI_BM_STS_FAIL_2_POS)
#define MCHP_ESPI_BM_STS_IBERR_2_POS	25u /* RW1C */
#define MCHP_ESPI_BM_STS_IBERR_2	BIT(MCHP_ESPI_BM_STS_IBERR_2_POS)
#define MCHP_ESPI_BM_STS_BADREQ_2_POS	27u /* RW1C */
#define MCHP_ESPI_BM_STS_BADREQ_2	BIT(MCHP_ESPI_BM_STS_BADREQ_2_POS)

#define MCHP_ESPI_BM_STS_ALL_RW1C_1	0x0BFDul
#define MCHP_ESPI_BM_STS_ALL_RW1C_2	0x0BFD0000ul

/* BM_IEN */
#define MCHP_ESPI_BM1_IEN_DONE_POS	0u
#define MCHP_ESPI_BM1_IEN_DONE		BIT(MCHP_ESPI_BM1_IEN_DONE_POS)
#define MCHP_ESPI_BM2_IEN_DONE_POS	16u
#define MCHP_ESPI_BM2_IEN_DONE		BIT(MCHP_ESPI_BM2_IEN_DONE_POS)

/* BM_CFG */
#define MCHP_ESPI_BM1_CFG_TAG_POS	0u
#define MCHP_ESPI_BM1_CFG_TAG_MASK0	0x0Ful
#define MCHP_ESPI_BM1_CFG_TAG_MASK	0x0Ful
#define MCHP_ESPI_BM2_CFG_TAG_POS	16u
#define MCHP_ESPI_BM2_CFG_TAG_MASK0	0x0Ful
#define MCHP_ESPI_BM2_CFG_TAG_MASK	0x0F0000ul

/* BM1_CTRL */
#define MCHP_ESPI_BM1_CTRL_START_POS	0u /* WO */
#define MCHP_ESPI_BM1_CTRL_START	BIT(MCHP_ESPI_BM1_CTRL_START_POS)
#define MCHP_ESPI_BM1_CTRL_ABORT_POS	1u /* WO */
#define MCHP_ESPI_BM1_CTRL_ABORT	BIT(MCHP_ESPI_BM1_CTRL_ABORT_POS)
#define MCHP_ESPI_BM1_CTRL_EN_INC_POS	2u /* RW */
#define MCHP_ESPI_BM1_CTRL_EN_INC	BIT(MCHP_ESPI_BM1_CTRL_EN_INC_POS)
#define MCHP_ESPI_BM1_CTRL_WAIT_NB2_POS 3u  /* RW */
#define MCHP_ESPI_BM1_CTRL_WAIT_NB2	BIT(MCHP_ESPI_BM1_CTRL_WAIT_NB2_POS)
#define MCHP_ESPI_BM1_CTRL_CTYPE_POS	8u
#define MCHP_ESPI_BM1_CTRL_CTYPE_MASK0	0x03ul
#define MCHP_ESPI_BM1_CTRL_CTYPE_MASK	\
	SHLU32(MCHP_ESPI_BM1_CTRL_CTYPE_MASK0, MCHP_ESPI_BM1_CTRL_CTYPE_POS)
#define MCHP_ESPI_BM1_CTRL_CTYPE_RD_ADDR32	0x00ul
#define MCHP_ESPI_BM1_CTRL_CTYPE_WR_ADDR32	\
	SHLU32(0x01ul, MCHP_ESPI_BM1_CTRL_CTYPE_POS)
#define MCHP_ESPI_BM1_CTRL_CTYPE_RD_ADDR64	\
	SHLU32(0x02ul, MCHP_ESPI_BM1_CTRL_CTYPE_POS)
#define MCHP_ESPI_BM1_CTRL_CTYPE_WR_ADDR64	\
	SHLU32(0x03ul, MCHP_ESPI_BM1_CTRL_CTYPE_POS)
#define MCHP_ESPI_BM1_CTRL_LEN_POS	16u
#define MCHP_ESPI_BM1_CTRL_LEN_MASK0	0x1FFFul
#define MCHP_ESPI_BM1_CTRL_LEN_MASK	0x1FFF0000ul

/* BM1_EC_ADDR_LSW */
#define MCHP_ESPI_BM1_EC_ADDR_LSW_MASK	0xFFFFFFFCul

/* BM2_CTRL */
#define MCHP_ESPI_BM2_CTRL_START_POS	0u /* WO */
#define MCHP_ESPI_BM2_CTRL_START	BIT(MCHP_ESPI_BM2_CTRL_START_POS)
#define MCHP_ESPI_BM2_CTRL_ABORT_POS	1u /* WO */
#define MCHP_ESPI_BM2_CTRL_ABORT	BIT(MCHP_ESPI_BM2_CTRL_ABORT_POS)
#define MCHP_ESPI_BM2_CTRL_EN_INC_POS	2u /* RW */
#define MCHP_ESPI_BM2_CTRL_EN_INC	BIT(MCHP_ESPI_BM2_CTRL_EN_INC_POS)
#define MCHP_ESPI_BM2_CTRL_WAIT_NB2_POS 3u /* RW */
#define MCHP_ESPI_BM2_CTRL_WAIT_NB2	BIT(MCHP_ESPI_BM2_CTRL_WAIT_NB2_POS)
#define MCHP_ESPI_BM2_CTRL_CTYPE_POS		8u
#define MCHP_ESPI_BM2_CTRL_CTYPE_MASK0		0x03ul
#define MCHP_ESPI_BM2_CTRL_CTYPE_MASK		0x0300ul
#define MCHP_ESPI_BM2_CTRL_CTYPE_RD_ADDR32	0x00ul
#define MCHP_ESPI_BM2_CTRL_CTYPE_WR_ADDR32	0x0100ul
#define MCHP_ESPI_BM2_CTRL_CTYPE_RD_ADDR64	0x0200ul
#define MCHP_ESPI_BM2_CTRL_CTYPE_WR_ADDR64	0x0300ul
#define MCHP_ESPI_BM2_CTRL_LEN_POS		16u
#define MCHP_ESPI_BM2_CTRL_LEN_MASK0		0x1FFFul
#define MCHP_ESPI_BM2_CTRL_LEN_MASK		0x1FFF0000ul

/* BM2_EC_ADDR_LSW */
#define MCHP_ESPI_BM2_EC_ADDR_LSW_MASK	0xFFFFFFFCul

/*
 * MCHP_ESPI_MEM_BAR_EC @ 0x400F3930
 *
 * Half-word H0 of each EC Memory BAR contains
 * Memory BAR memory address mask bits in bits[7:0]
 * Logical Device Number in bits[13:8]
 */
#define MCHP_ESPI_EBAR_H0_MEM_MASK_POS	0u
#define MCHP_ESPI_EBAR_H0_MEM_MASK_MASK 0xFFul
#define MCHP_ESPI_EBAR_H0_LDN_POS	8u
#define MCHP_ESPI_EBAR_H0_LDN_MASK0	0x3Ful
#define MCHP_ESPI_EBAR_H0_LDN_MASK	0x3F00ul

/*
 * MCHP_ESPI_MEM_BAR_HOST @ 0x400F3B30
 *
 * Each Host BAR contains:
 * bit[0] (RW) = Valid bit
 * bits[15:1] = Reserved, read-only 0
 * bits[47:16] (RW) = bits[31:0] of the Host Memory address.
 */

/* Memory BAR Host address valid */
#define MCHP_ESPI_HBAR_VALID_POS	0u
#define MCHP_ESPI_HBAR_VALID_MASK	0x01ul
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

#define MCHP_EC_SRAM_BAR_H0_VALID_POS		0u
#define MCHP_EC_SRAM_BAR_H0_VALID_MASK0		0x01ul
#define MCHP_EC_SRAM_BAR_H0_VALID_MASK		0x01ul
#define MCHP_EC_SRAM_BAR_H0_VALID		0x01ul
#define MCHP_EC_SRAM_BAR_H0_ACCESS_POS		1u
#define MCHP_EC_SRAM_BAR_H0_ACCESS_MASK0	0x03ul
#define MCHP_EC_SRAM_BAR_H0_ACCESS_MASK		0x06ul
#define MCHP_EC_SRAM_BAR_H0_ACCESS_NONE		0x00ul
#define MCHP_EC_SRAM_BAR_H0_ACCESS_RO		0x02ul
#define MCHP_EC_SRAM_BAR_H0_ACCESS_WO		0x04ul
#define MCHP_EC_SRAM_BAR_H0_ACCESS_RW		0x06ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_POS		4u
#define MCHP_EC_SRAM_BAR_H0_SIZE_MASK0		0x0Ful
#define MCHP_EC_SRAM_BAR_H0_SIZE_MASK		0xF0ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_1B		0x00ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_2B		0x10ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_4B		0x20ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_8B		0x30ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_16B		0x40ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_32B		0x50ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_64B		0x60ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_128B		0x70ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_256B		0x80ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_512B		0x90ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_1KB		0xA0ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_2KB		0xB0ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_4KB		0xC0ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_8KB		0xD0ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_16KB		0xE0ul
#define MCHP_EC_SRAM_BAR_H0_SIZE_32KB		0xF0ul
/* EC and Host SRAM BAR start offset of EC or Host memory address */
#define MCHP_EC_SRAM_BAR_MADDR_OFS1	2ul
#define MCHP_EC_SRAM_BAR_MADDR_OFS2	4ul

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C" {
#endif

/** @brief index values for eSPI Memory BAR EC-only and Host register banks
 * Memory BAR's are 80 bits (10 bytes) and are packed. Safe access is 16-bit.
 * These index values are for an array of 16-bit registers.
 */
enum espi_mbar_idx {
	MBAR_MBX_H0 = 0,	/*! (@ 0x0000) Mailbox LD Mem BAR b[15:0] */
	MBAR_MBX_H1,		/*! (@ 0x0002) Mailbox LD Mem BAR b[31:16] */
	MBAR_MBX_H2,		/*! (@ 0x0004) Mailbox LD Mem BAR b[47:32] */
	MBAR_MBX_H3,		/*! (@ 0x0006) Mailbox LD Mem BAR b[63:48] */
	MBAR_MBX_H4,		/*! (@ 0x0008) Mailbox LD Mem BAR b[79:64] */
	MBAR_ACPI_EC_0_H0,	/*! (@ 0x000A) ACPI EC0 LD Mem BAR b[15:0] */
	MBAR_ACPI_EC_0_H1,	/*! (@ 0x000C) ACPI EC0 LD Mem BAR b[31:16] */
	MBAR_ACPI_EC_0_H2,	/*! (@ 0x000E) ACPI EC0 LD Mem BAR b[47:32] */
	MBAR_ACPI_EC_0_H3,	/*! (@ 0x0010) ACPI EC0 LD Mem BAR b[63:48] */
	MBAR_ACPI_EC_0_H4,	/*! (@ 0x0012) ACPI EC0 LD Mem BAR b[79:64] */
	MBAR_ACPI_EC_1_H0,	/*! (@ 0x0014) ACPI EC1 LD Mem BAR b[15:0] */
	MBAR_ACPI_EC_1_H1,	/*! (@ 0x0016) ACPI EC1 LD Mem BAR b[31:16] */
	MBAR_ACPI_EC_1_H2,	/*! (@ 0x0018) ACPI EC1 LD Mem BAR b[47:32] */
	MBAR_ACPI_EC_1_H3,	/*! (@ 0x001A) ACPI EC1 LD Mem BAR b[63:48] */
	MBAR_ACPI_EC_1_H4,	/*! (@ 0x001C) ACPI EC1 LD Mem BAR b[79:64] */
	MBAR_ACPI_EC_2_H0,	/*! (@ 0x001E) ACPI EC2 LD Mem BAR b[15:0] */
	MBAR_ACPI_EC_2_H1,	/*! (@ 0x0020) ACPI EC2 LD Mem BAR b[31:16] */
	MBAR_ACPI_EC_2_H2,	/*! (@ 0x0022) ACPI EC2 LD Mem BAR b[47:32] */
	MBAR_ACPI_EC_2_H3,	/*! (@ 0x0024) ACPI EC2 LD Mem BAR b[63:48] */
	MBAR_ACPI_EC_2_H4,	/*! (@ 0x0026) ACPI EC2 LD Mem BAR b[79:64] */
	MBAR_ACPI_EC_3_H0,	/*! (@ 0x0028) ACPI EC3 LD Mem BAR b[15:0] */
	MBAR_ACPI_EC_3_H1,	/*! (@ 0x002A) ACPI EC3 LD Mem BAR b[31:16] */
	MBAR_ACPI_EC_3_H2,	/*! (@ 0x002C) ACPI EC3 LD Mem BAR b[47:32] */
	MBAR_ACPI_EC_3_H3,	/*! (@ 0x002E) ACPI EC3 LD Mem BAR b[63:48] */
	MBAR_ACPI_EC_3_H4,	/*! (@ 0x0030) ACPI EC3 LD Mem BAR b[79:64] */
	MBAR_ACPI_EC_4_H0,	/*! (@ 0x0032) ACPI EC4 LD Mem BAR b[15:0] */
	MBAR_ACPI_EC_4_H1,	/*! (@ 0x0034) ACPI EC4 LD Mem BAR b[31:16] */
	MBAR_ACPI_EC_4_H2,	/*! (@ 0x0036) ACPI EC4 LD Mem BAR b[47:32] */
	MBAR_ACPI_EC_4_H3,	/*! (@ 0x0038) ACPI EC4 LD Mem BAR b[63:48] */
	MBAR_ACPI_EC_4_H4,	/*! (@ 0x003A) ACPI EC4 LD Mem BAR b[79:64] */
	MBAR_EMI_0_H0,		/*! (@ 0x003C) EMI0 LD Mem BAR b[15:0] */
	MBAR_EMI_0_H1,		/*! (@ 0x003E) EMI0 LD Mem BAR b[31:16] */
	MBAR_EMI_0_H2,		/*! (@ 0x0040) EMI0 LD Mem BAR b[47:32] */
	MBAR_EMI_0_H3,		/*! (@ 0x0042) EMI0 LD Mem BAR b[63:48] */
	MBAR_EMI_0_H4,		/*! (@ 0x0044) EMI0 LD Mem BAR b[79:64] */
	MBAR_EMI_1_H0,		/*! (@ 0x0046) EMI1 LD Mem BAR b[15:0] */
	MBAR_EMI_1_H1,		/*! (@ 0x0048) EMI1 LD Mem BAR b[31:16] */
	MBAR_EMI_1_H2,		/*! (@ 0x004A) EMI1 LD Mem BAR b[47:32] */
	MBAR_EMI_1_H3,		/*! (@ 0x004C) EMI1 LD Mem BAR b[63:48] */
	MBAR_EMI_1_H4,		/*! (@ 0x004E) EMI1 LD Mem BAR b[79:64] */
	MBAR_EMI_2_H0,		/*! (@ 0x0050) EMI1 LD Mem BAR b[15:0] */
	MBAR_EMI_2_H1,		/*! (@ 0x0052) EMI1 LD Mem BAR b[31:16] */
	MBAR_EMI_2_H2,		/*! (@ 0x0054) EMI1 LD Mem BAR b[47:32] */
	MBAR_EMI_2_H3,		/*! (@ 0x0058) EMI1 LD Mem BAR b[63:48] */
	MBAR_EMI_2_H4,		/*! (@ 0x005A) EMI1 LD Mem BAR b[79:64] */
	MBAR_MAX
};

/*
 * eSPI Memory Component SRAM 0 and 1 EC BAR's @ 0x400F39A0
 * bit[0] = Valid
 * bits[2:1] = Access
 * bit[3] = reserved, read-only 0
 * bits[7:4] = Size as power of 2
 * bits[15:8] = reserved, read-only 0
 * bits[47:16] = Base address of EC SRAM mapped to this BAR must be
 * aligned on Size boundary.
 */
enum espi_sram_bar_index {
	MBAR_SRAM_0_H0 = 0,	/*! (@ 0x000C) SRAM0 BAR Internal b[15:0] */
	MBAR_SRAM_0_H1,		/*! (@ 0x000E) SRAM0 BAR Internal b[31:16] */
	MBAR_SRAM_0_H2,		/*! (@ 0x0010) SRAM0 BAR Internal b[47:32] */
	MBAR_SRAM_0_H3,		/*! (@ 0x0012) SRAM0 BAR Internal b[63:48] */
	MBAR_SRAM_0_H4,		/*! (@ 0x0014) SRAM0 BAR Internal b[79:64] */
	MBAR_SRAM_1_H0,		/*! (@ 0x0016) SRAM1 BAR Internal b[15:0] */
	MBAR_SRAM_1_H1,		/*! (@ 0x0018) SRAM1 BAR Internal b[31:16] */
	MBAR_SRAM_1_H2,		/*! (@ 0x001A) SRAM1 BAR Internal b[47:32] */
	MBAR_SRAM_1_H3,		/*! (@ 0x001C) SRAM1 BAR Internal b[63:48] */
	MBAR_SRAM_1_H4,		/*! (@ 0x001E) SRAM1 BAR Internal b[79:64] */
	MBAR_SRAM_MAX
};

/*
 * eSPI Memory Component SRAM 0 and 1 Host BAR's @ 0x400F3BA0
 * bit[0] = Read-Only copy of EC BAR Valid bit
 * bits[2:1] = Read-Only copy of EC BAR Access field
 * bit[3] = reserved, read-only 0
 * bits[7:4] = Read-Only copy of EC Size field
 * bits[15:8] = reserved, read-only 0
 * bits[47:16] = R/W. Base address in Host memory space for this BAR.
 */

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

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _COMPONENT_ESPI_MEM_H */
/* end espi_mem.h */
/**   @}
 */
