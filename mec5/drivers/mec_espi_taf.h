/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_TAF_H
#define _MEC_ESPI_TAF_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#include <device_mec5.h>
#include <mec_qspi_api.h>

#define MEC_ESPI_TAF_RPMC_OP2_HOST_MEM_BASE 0x40072000u
#define MEC_ESPI_TAF_RPMC_OP2_ECP_MEM_BASE 0x40072080u
#define MEC_ESPI_TAF_RPMC_EC_MEM_SIZE 0x40u

/* forward declarations */
struct mec_espi_io_regs;
struct mec_espi_mem_regs;
struct mec_espi_vw_regs;
struct mec_espi_taf_regs;

/* ---- eSPI Target Attached Flash (TAF) ---- */
enum mec_espi_taf_erase_size {
    MEC_ESPI_TAF_ERASE_SIZE_1K_POS = 0,
    MEC_ESPI_TAF_ERASE_SIZE_2K_POS = 1,
    MEC_ESPI_TAF_ERASE_SIZE_4K_POS = 2,
    MEC_ESPI_TAF_ERASE_SIZE_8K_POS = 3,
    MEC_ESPI_TAF_ERASE_SIZE_16K_POS = 4,
    MEC_ESPI_TAF_ERASE_SIZE_32K_POS = 5,
    MEC_ESPI_TAF_ERASE_SIZE_64K_POS = 6,
    MEC_ESPI_TAF_ERASE_SIZE_128K_POS = 7,
};

enum mec_espi_taf_intr {
    MEC_ESPI_TAF_INTR_ECP_DONE_POS = 0,
    MEC_ESPI_TAF_INTR_HWMON_ERR_POS,
    MEC_ESPI_TAF_INTR_POS_MAX,
};

#define MEC_ESPI_TAF_MAX_FLASH_DEVICES 2

#define MEC_ESPI_TAF_HW_CFG_FLAG_FREQ_POS 0
#define MEC_ESPI_TAF_HW_CFG_FLAG_CPHA_POS 1
#define MEC_ESPI_TAF_HW_CFG_FLAG_CSTM_POS 2
#define MEC_ESPI_TAF_HW_CFG_FLAG_TAPS_POS 3

/* enable TAF prefetch */
#define MEC_ESPI_TAF_HW_CFG_FLAG_PFEN_POS 4
/* Use expedited prefetch instead of default */
#define MEC_ESPI_TAF_HW_CFG_FLAG_PFEXP_POS 5
/* Force success on all RPMC OP1 operations */
#define MEC_ESPI_TAF_HW_CFG_FLAG_FORCE_RPMC_OP1_POS 6
/* Force flash size to nearest 4KB boundary */
#define MEC_ESPI_TAF_HW_CFG_FLAG_FLASH_4KB_ALIGN_POS 7
/* Activity counter reload if EC accesses TAF */
#define MEC_ESPI_TAF_AC_RELOAD_ON_EC_POS 8
/* Activity counter reload if eSPI Host accesses TAF */
#define MEC_ESPI_TAF_AC_RELOAD_ON_HOST_POS 9
/* Enable flash sleep if Activity counter reaches 0 */
#define MEC_ESPI_TAF_AC_SLEEP_EN_POS 10
/* Enable flash sleep when EC enters deep sleep */
#define MEC_ESPI_TAF_FL_DEEP_SLEEP_EN_POS 11
/* Enable flash sleep when EC enters lite sleep */
#define MEC_ESPI_TAF_FL_LIGHT_SLEEP_EN_POS 12
/* Strict interpretation of RPMC mode cycle type */
#define MEC_ESPI_TAF_RPMC_STRICT_CYCLE_TYPE_POS 13


#define MEC_ESPI_TAF_VERSION            3
#define MEC_ESPI_TAF_GENERIC_DESCR_MAX  4
#define MEC_ESPI_TAF_TAGMAP_MAX         3
#define MEC_ESPI_TAF_PROT_REG_MAX       17

/* TAF engine start indices of descriptor chains */
#define MEC_TAF_CS0_CONT_RD_START_DESCR    0u
#define MEC_TAF_CS0_CONT_RD_END_DESCR      2u
#define MEC_TAF_CS0_CONT_EN_START_DESCR    3u
#define MEC_TAF_CS0_CONT_EN_END_DESCR      5u
#define MEC_TAF_CS1_CONT_RD_START_DESCR    6u
#define MEC_TAF_CS1_CONT_RD_END_DESCR      8u
#define MEC_TAF_CS1_CONT_EN_START_DESCR    9u
#define MEC_TAF_CS1_CONT_EN_END_DESCR      11u
#define MEC_TAF_CM_EXIT_START_DESCR        12u
#define MEC_TAF_CM_EXIT_LAST_DESCR         13u
#define MEC_TAF_POLL_STS_START_DESCR       14u
#define MEC_TAF_POLL_STS_END_DESCR         15u

#define MEC_TAF_GEN_DESCR_IDS(excm, poll1, poll2) \
    (((uint32_t)(excm) & 0xfu) | (((uint32_t)(poll1) & 0xfu) << 8) |\
     (((uint32_t)(poll2) & 0xfu) << 12))

#define MEC_TAF_GEN_DESCR_GET_EXITCM(g) ((uint32_t)(g) & 0xfu)
#define MEC_TAF_GEN_DESCR_GET_POLL1(g) (((uint32_t)(g) >> 8) & 0xfu)
#define MEC_TAF_GEN_DESCR_GET_POLL2(g) (((uint32_t)(g) >> 12) & 0xfu)

#define MEC_TAF_PD_TIMEOUT_10MS 328u
#define MEC_TAF_PD_TIMEOUT_100MS 3279u
#define MEC_TAF_PD_TIMEOUT_1000MS 32787u

#define MEC_TAF_PD_MIN_INTERVAL_10US 480u
#define MEC_TAF_PD_MIN_INTERVAL_100US 4800u

struct espi_taf_hw_cfg {
    uint8_t  version;
    uint8_t  rsvd1;
    uint8_t  qspi_freq_mhz;
    uint8_t  qspi_cpha;
    uint16_t flags;
    uint16_t qtaps_sel;
    uint16_t flash_pd_timeout; /* Units of 32KHz (30.5 us) */
    uint16_t flash_pd_min_interval; /* Units of 48MHz (20.8 ns) */
    uint32_t qspi_cs_timing;
    uint32_t gen_descr_ids; /* MEC_TAF_GEN_DESCR_IDS(excm, poll1, poll2) */
    uint32_t cs0_descr_ids; /* MEC_TAF_FL_DCFG(rd_start, rd_data, cm_entry), */
    uint32_t cs1_descr_ids; /* MEC_TAF_FL_DCFG(rd_start, rd_data, cm_entry), */
    uint32_t tag_map[MEC_ESPI_TAF_TAGMAP_MAX];
    uint32_t qspi_descrs[16];
};

/* Until Zephyr renames SAF to TAF we need this hack */
#define espi_saf_hw_cfg espi_taf_hw_cfg

/* Flags */
#define MCHP_FLASH_FLAG_ADDR32              MEC_BIT(0)
#define MCHP_FLASH_FLAG_CS_CONT_PRFX_EN     MEC_BIT(1)
#define MCHP_FLASH_FLAG_RPMC_SR_DIS         MEC_BIT(2)
#define MCHP_FLASH_FLAG_PD_EN               MEC_BIT(4)
#define MCHP_FLASH_FLAG_PD_EC_WK_EN         MEC_BIT(5)

#define MEC_ESPI_TAF_QSPI_FLASH_DESCR_MAX   6u

#define MCHP_FLASH_RPMC_OP1_DFLT			0x9bu
#define MCHP_FLASH_RPMC_OP2_DFLT			0x96u

/* Positions in 32-bit rpmc_info word */
#define MCHP_FLASH_RPMC_OP1_OPCODE_POS		0
#define MCHP_FLASH_RPMC_OP1_OPCODE_MSK0		0xffU
#define MCHP_FLASH_RPMC_OP1_OPCODE_MSK		0xffU
#define MCHP_FLASH_RPMC_OP1_NCTR_POS		8
#define MCHP_FLASH_RPMC_OP1_NCTR_MSK0		0x1fU
#define MCHP_FLASH_RPMC_OP1_NCTR_MSK		0x1f00U
#define MCHP_FLASH_RPMC_OP1_FLAGS_POS		16
#define MCHP_FLASH_RPMC_OP1_FLAGS_MSK0		0xffffU
#define MCHP_FLASH_RPMC_OP1_FLAGS_MSK		0xffff0000U

#define MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS0_040 0x10000u
#define MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS0_848 0x20000u
#define MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS1_048 0x40000u
#define MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS1_848 0x80000u
#define MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS0_PNP 0x100000u
#define MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS1_PNP 0x200000u

struct espi_taf_flash_cfg {
    uint8_t  version;
    uint8_t  cs;
    uint16_t flags;
    uint32_t flashsz;
    uint8_t  rd_freq_mhz;
    uint8_t  freq_mhz;
    uint8_t  rsvd2[2];
    uint16_t poll2_mask;
    uint16_t cont_prefix;
    uint32_t opa;
    uint32_t opb;
    uint32_t opc;
    uint32_t opd;
    uint32_t rpmc_info;
};

/* eSPI TAF flash at nCS0/nCS1 descriptor indexes for flash operations.
 * Each fields is the 4-bit QSPI descriptor index.
 * ecm = index of start of Enter Continuous mode descriptor chain
 * rd_start = index of start of Read descriptor chain
 * rd_data = index of data read descriptor in Read descriptor chain.
 */
#define MEC_TAF_FL_DCFG(rd_start, rd_data, cm_entry) \
    (((uint16_t)(cm_entry) & 0xfu) |\
     (((uint16_t)(rd_start) & 0xfu) << 8) |\
     (((uint16_t)(rd_data) & 0xfu) << 12))

#define MEC_TAF_FL_DCFG_GET_CM_ENTRY(d) ((uint32_t)(d) & 0xfu)
#define MEC_TAF_FL_DCFG_GET_RD_START(d) (((uint32_t)(d) >> 8) & 0xfu)
#define MEC_TAF_FL_DCFG_GET_RD_DATA(d) (((uint32_t)(d) >> 12) & 0xfu)

/* TAF Opcode A register contains the 8-bit SPI flash command bytes for
 * Write-Enable, Suspend, Resume, and Poll flash status1
 */
#define MEC_TAF_OPCODE_A(we, susp, rsm, poll1) \
    (((uint32_t)(we) & 0xffu) | (((uint32_t)(susp) & 0xffu) << 8) |\
     (((uint32_t)(rsm) & 0xffu) << 16) | (((uint32_t)(poll1) & 0xffu) << 24))

/* TAF Opcode B register contains the 8-bit SPI flash command bytes for
 * erase 4KB sector, erase 32K sector, erase 64k sector, and page program.
 */
#define MEC_TAF_OPCODE_B(er4k, er32k, er64k, pp) \
    (((uint32_t)(er4k) & 0xffu) | (((uint32_t)(er32k) & 0xffu) << 8) |\
     (((uint32_t)(er64k) & 0xffu) << 16) | (((uint32_t)(pp) & 0xffu) << 24))

/* TAF Opcode C register contains the 8-bit SPI flash command bytes and mode byte values for
 * data read, non-continous mode byte, continuous mode byte, and poll flash status2.
 * Recommended non-continous mode byte = 0xff
 * Recommended continuous mode byte value = 0xA5
 */
#define MEC_TAF_OPCODE_C(rd, mnc, mc, poll2) \
    (((uint32_t)(rd) & 0xffu) | (((uint32_t)(mnc) & 0xffu) << 8) |\
     (((uint32_t)(mc) & 0xffu) << 16) | (((uint32_t)(poll2) & 0xffu) << 24))


/* TAF Opcode D register contains the 8-bit SPI flash command bytes for
 * enter power down, exit power down, RPMC OP2, and reserved.
 * non-continous mode recommendation = 0xff
 * continuous mode recommendation = 0xA5
 */
#define MEC_TAF_OPCODE_D(pd, pdx, op2, rsvd) \
    (((uint32_t)(pd) & 0xffu) | (((uint32_t)(pdx) & 0xffu) << 8) |\
     (((uint32_t)(op2) & 0xffu) << 16) | (((uint32_t)(rsvd) & 0xffu) << 24))


/* Example generic descriptors */

/* Exit Continuous Mode:
 * Descriptor 12: Drive I/O lines high for 10 clocks
 * Descriptor 13: Tri-state I/O lines for 10 clocks
 * Quad is 2 clocks / byte or 4 bits / clock
 * Dual is 4 clocks / byte or 2 bits / clock
 */
#define MEC_TAF_EXIT_CM_QUAD_D12 \
    (QD_IO_QUAD | QD_TX_EN_ONES | QD_UNITS_1B | QD_NU(5) | QD_NEXT_DESCR(13))

#define MEC_TAF_EXIT_CM_QUAD_D13 \
    (QD_IO_QUAD | QD_RX_EN | QD_UNITS_1B | QD_NU(5) | QD_NEXT_DESCR(0) | \
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_EXIT_CM_QUAD(didx) \
    (QD_IO_QUAD | QD_TX_EN_ONES | QD_UNITS_1B | QD_NU(5) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_QUAD | QD_RX_EN | QD_UNITS_1B | QD_NU(5) | QD_NEXT_DESCR(0) | \
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_EXIT_CM_DUAL_D12 \
    (QD_IO_DUAL | QD_TX_EN_ONES | QD_UNITS_BITS | QD_NU(20) | QD_NEXT_DESCR(13))

#define MEC_TAF_EXIT_CM_DUAL_D13 \
    (QD_IO_DUAL | QD_RX_EN | QD_UNITS_BITS | QD_NU(20) | QD_NEXT_DESCR(0) | \
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_EXIT_CM_DUAL(didx) \
    (QD_IO_DUAL | QD_TX_EN_ONES | QD_UNITS_BITS | QD_NU(20) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_DUAL | QD_RX_EN | QD_UNITS_BITS | QD_NU(20) | QD_NEXT_DESCR(0) |\
     QD_CLOSE_EN | QD_LAST_EN)

/* Poll 16-bit status
 * Descriptor 14: poll opcode from the TX FIFO as a single byte using full-duplex
 * Descriptor 15: read 16-bits (two bytes) into RX FIFO
 */
#define MEC_TAF_POLL_STATUS_D14 \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1) | QD_NEXT_DESCR(15))

#define MEC_TAF_POLL_STATUS_D15 \
    (QD_IO_FD | QD_RX_EN | QD_UNITS_1B | QD_NU(2) | QD_NEXT_DESCR(0) | QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_POLL_STATUS(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_FD | QD_RX_EN | QD_UNITS_1B | QD_NU(2) | QD_NEXT_DESCR(0) | QD_CLOSE_EN | QD_LAST_EN)

/* ---- Quad I/O 24-bit SPI address ---- */

/* Continuous Mode Read from flash device attached to nCS0/nCS1.
 * Descriptor 0/6: Transmit 24-bit address and mode bytes in Quad mode
 * Descriptor 1/7: Generate 4 SPI clocks with all I/O's tri-stated.
 * Descriptor 2/8: Read data in Quad mode using QSPI Local-DMA. eSPI HW patches in length.
 * didx = first descriptor of chain: 0 or 6
 */
#define MEC_TAF_CM_RD_ADDR24_QUAD_D1(didx) \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_RD_ADDR24_QUAD_D2(didx) \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(2) | QD_NEXT_DESCR((didx) + 2u))

#define MEC_TAF_CM_RD_ADDR24_QUAD_D3(didx) \
    (QD_IO_QUAD | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_UNITS_1B | QD_NEXT_DESCR((didx) + 3u) |\
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_CM_RD_ADDR24_QUAD(didx) \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(2) | QD_NEXT_DESCR((didx) + 2u)), \
    (QD_IO_QUAD | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_UNITS_1B | QD_NEXT_DESCR((didx) + 3u) |\
     QD_CLOSE_EN | QD_LAST_EN)

/* Continous Mode Entry for flash device attached to nCS0/nCS1.
 * Descriptor 3/9: transmit full-duplex mode: Quad I/O Fast Read opcode byte
 * Descriptor 4/10: transmit quad mode: 24-bit address and mode bytes
 * Descriptor 5/11: generate clocks with I/O's tri-stated as required by Quad I/O Fast Read(3 bytes)
 * didx = first descriptor of chain: 3 or 9
 */
#define MEC_TAF_CM_ENTRY_ADDR24_QUAD_D1(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1u) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_ENTRY_ADDR24_QUAD_D2(didx) \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4u) | QD_NEXT_DESCR((didx) + 2u))

#define MEC_TAF_CM_ENTRY_ADDR24_QUAD_D3(didx) \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(3u) | QD_NEXT_DESCR((didx) + 3u) | QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_CM_ENTRY_ADDR24_QUAD(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1u) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4u) | QD_NEXT_DESCR((didx) + 2u)), \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(3u) | QD_NEXT_DESCR((didx) + 3u) | QD_CLOSE_EN | QD_LAST_EN)

/* ---- Dual I/O 24-bit SPI address ---- */

/* Continuous Mode Read from flash device attached to nCS0/nCS1.
 * Descriptor 0/6: Transmit 24-bit address and mode bytes in Quad mode
 * Descriptor 1/7: Read data in Dual mode uisng QSPI Local-DMA. eSPI HW patches in length.
 * Descriptor 2/8: Dual does not need third descriptor
 * didx = first descriptor of chain: 0 or 6
 */
#define MEC_TAF_CM_RD_ADDR24_DUAL_D1(didx) \
    (QD_IO_DUAL | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_RD_ADDR24_DUAL_D2(didx) \
    (QD_IO_DUAL | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_UNITS_1B | QD_NEXT_DESCR((didx) + 2u) |\
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_CM_RD_ADDR24_DUAL_D3(didx) 0u

/* Continous Mode Entry for flash device attached to nCS0/nCS1.
 * Descriptor 3/9: transmit full-duplex mode: Dual I/O Fast Read opcode byte
 * Descriptor 4/10: transmit quad mode: 24-bit address and mode bytes
 * Descriptor 5/11: generate clocks with I/O's tri-stated as required by Dual I/O Fast Read(3 bytes)
 * didx = first descriptor of chain: 3 or 9
 */
#define MEC_TAF_CM_ENTRY_ADDR24_DUAL_D1(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1u) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_ENTRY_ADDR24_DUAL_D2(didx) \
    (QD_IO_DUAL | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4u) | QD_NEXT_DESCR((didx) + 2u))

#define MEC_TAF_CM_ENTRY_ADDR24_DUAL_D3(didx) \
    (QD_IO_DUAL | QD_UNITS_1B | QD_NU(3u) | QD_NEXT_DESCR((didx) + 3u) | QD_CLOSE_EN | QD_LAST_EN)

/* ---- Quad I/O 32-bit SPI address ---- */

/* Continuous Mode Read from flash device attached to nCS0/nCS1.
 * Descriptor 0/6: Transmit 32-bit address and mode bytes in Quad mode
 * Descriptor 1/7: Generate 4 SPI clocks with all I/O's tri-stated.
 * Descriptor 2/8: Read data in Quad mode using QSPI Local-DMA. eSPI HW patches in length.
 * didx = first descriptor of chain: 0 or 6
 */
#define MEC_TAF_CM_RD_ADDR32_QUAD_D1(didx) \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(5) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_RD_ADDR32_QUAD_D2(didx) \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(2) | QD_NEXT_DESCR((didx) + 2u))

#define MEC_TAF_CM_RD_ADDR32_QUAD_D3(didx) \
    (QD_IO_QUAD | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_UNITS_1B | QD_NEXT_DESCR((didx) + 3u) |\
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_CM_RD_ADDR32_QUAD(didx) \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(5) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(2) | QD_NEXT_DESCR((didx) + 2u)), \
    (QD_IO_QUAD | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_UNITS_1B | QD_NEXT_DESCR((didx) + 3u) |\
     QD_CLOSE_EN | QD_LAST_EN)

/* Continous Mode Entry for flash device attached to nCS0/nCS1.
 * Descriptor 3/9: transmit full-duplex mode: Quad I/O Fast Read opcode byte
 * Descriptor 4/10: transmit quad mode: 32-bit address and mode bytes
 * Descriptor 5/11: generate clocks with I/O's tri-stated as required by Quad I/O Fast Read(3 bytes)
 * didx = first descriptor of chain: 3 or 9
 */
#define MEC_TAF_CM_ENTRY_ADDR32_QUAD_D1(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1u) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_ENTRY_ADDR32_QUAD_D2(didx) \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(5u) | QD_NEXT_DESCR((didx) + 2u))

#define MEC_TAF_CM_ENTRY_ADDR32_QUAD_D3(didx) \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(3u) | QD_NEXT_DESCR((didx) + 3u) | QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_CM_ENTRY_ADDR32_QUAD(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1u) | QD_NEXT_DESCR((didx) + 1u)), \
    (QD_IO_QUAD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(5u) | QD_NEXT_DESCR((didx) + 2u)), \
    (QD_IO_QUAD | QD_UNITS_1B | QD_NU(3u) | QD_NEXT_DESCR((didx) + 3u) | QD_CLOSE_EN | QD_LAST_EN)

/* ---- Dual I/O 32-bit SPI address ---- */

/* Continuous Mode Read from flash device attached to nCS0/nCS1.
 * Descriptor 0/6: Transmit 32-bit address and mode bytes in Dual mode
 * Descriptor 1/7: Read data in Dual mode uisng QSPI Local-DMA. eSPI HW patches in length.
 * Descriptor 2/8: Dual does not need third descriptor
 * didx = first descriptor of chain: 0 or 6
 */
#define MEC_TAF_CM_RD_ADDR32_DUAL_D1(didx) \
    (QD_IO_DUAL | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(4) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_RD_ADDR32_DUAL_D2(didx) \
    (QD_IO_DUAL | QD_RX_EN | QD_RX_LDMA_EN_CH0 | QD_UNITS_1B | QD_NEXT_DESCR((didx) + 2u) |\
     QD_CLOSE_EN | QD_LAST_EN)

#define MEC_TAF_CM_RD_ADDR32_DUAL_D3(didx) 0u

/* Continous Mode Entry for flash device attached to nCS0/nCS1.
 * Descriptor 3/9: transmit full-duplex mode: Dual I/O Fast Read opcode byte
 * Descriptor 4/10: transmit dual mode: 32-bit address and mode bytes
 * Descriptor 5/11: generate clocks with I/O's tri-stated as required by Dual I/O Fast Read(3 bytes)
 * didx = first descriptor of chain: 3 or 9
 */
#define MEC_TAF_CM_ENTRY_ADDR32_DUAL_D1(didx) \
    (QD_IO_FD | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(1u) | QD_NEXT_DESCR((didx) + 1u))

#define MEC_TAF_CM_ENTRY_ADDR32_DUAL_D2(didx) \
    (QD_IO_DUAL | QD_TX_EN_DATA | QD_UNITS_1B | QD_NU(5u) | QD_NEXT_DESCR((didx) + 2u))

#define MEC_TAF_CM_ENTRY_ADDR32_DUAL_D3(didx) \
    (QD_IO_DUAL | QD_UNITS_1B | QD_NU(3u) | QD_NEXT_DESCR((didx) + 3u) | QD_CLOSE_EN | QD_LAST_EN)

/* ---- EC Portal commands ---- */
enum mec_taf_ecp_command {
    MEC_TAF_ECP_CMD_READ = 0,
    MEC_TAF_ECP_CMD_WRITE,
    MEC_TAF_ECP_CMD_ERASE,
    MEC_TAF_ECP_CMD_RPMC_OP1_CS0,
    MEC_TAF_ECP_CMD_RPMC_OP2_CS0,
    MEC_TAF_ECP_CMD_RPMC_OP1_CS1,
    MEC_TAF_ECP_CMD_RPMC_OP2_CS1,
    MEC_TAF_ECP_CMD_MAX,
};

/* EC Portal interrupt status and enables */
enum mec_taf_ecp_intr_status {
    MEC_TAF_ECP_STS_DONE_POS = 0, /* The only EC port interrupt enable */
    MEC_TAF_ECP_STS_DONE_AN_POS,
    MEC_TAF_ECP_STS_TIMEOUT_POS,
    MEC_TAF_ECP_STS_OOR_POS,
    MEC_TAF_ECP_STS_AVL_POS,
    MEC_TAF_ECP_STS_CROSS_4KB_POS,
    MEC_TAF_ECP_STS_INVAL_ERSZ_POS,
    MEC_TAF_ECP_STS_START_OVFL_POS,
    MEC_TAF_ECP_STS_BAD_REQ_POS,
};

#define MEC_TAF_ECP_STS_ERR_ALL 0x1fCu
#define MEC_TAF_ECP_STS_ALL 0x1ffu

/* ECP uses eSPI PUT_FLASH_NP command type */
#define MEC_TAF_ECP_CMD_TYPE 0x0Au

#define MEC_TAF_ECP_MIN_RW_PKT_SIZE 1u
#define MEC_TAF_ECP_MAX_RW_PKT_SIZE 64u

struct mec_taf_ecp_cmd_pkt {
    void *dataptr;
    size_t dlen;
    uint32_t flash_addr;
    uint32_t misc;
};

/* Host monitor error interrupt status and enables */
enum mec_taf_hmon_intr_status {
    MEC_TAF_HMON_STS_TIMEOUT_POS = 0,
    MEC_TAF_HMON_STS_OOR_POS,
    MEC_TAF_HMON_STS_AVL_POS,
    MEC_TAF_HMON_STS_CROSS_4KB_POS,
    MEC_TAF_HMON_STS_INVAL_ERSZ_POS,
};

#define MEC_TAF_HMON_STS_ERR_ALL 0x1fu
#define MEC_TAF_HMON_STS_ALL 0x1fu

enum mec_taf_protection_region_index {
    MEC_TAF_PR0_IDX = 0,
    MEC_TAF_PR1_IDX,
    MEC_TAF_PR2_IDX,
    MEC_TAF_PR3_IDX,
    MEC_TAF_PR4_IDX,
    MEC_TAF_PR5_IDX,
    MEC_TAF_PR6_IDX,
    MEC_TAF_PR7_IDX,
    MEC_TAF_PR8_IDX,
    MEC_TAF_PR9_IDX,
    MEC_TAF_PR10_IDX,
    MEC_TAF_PR11_IDX,
    MEC_TAF_PR12_IDX,
    MEC_TAF_PR13_IDX,
    MEC_TAF_PR14_IDX,
    MEC_TAF_PR15_IDX,
    MEC_TAF_PREC_IDX,
    MEC_TAF_PR_IDX_MAX,
};

/*
 * 17 flash protection regions
 * Each region is described by:
 * SPI start address. 20-bits = bits[31:12] of SPI address
 * SPI limit address. 20-bits = bits[31:12] of last SPI address
 * 8-bit bit map of eSPI master write-erase permission
 * 8-bit bit map of eSPI maste read permission
 * eSPI master numbers 0 - 7 correspond to bits 0 - 7.
 *
 * Protection region lock:
 *   One 32-bit register with bits[16:0] -> protection regions 16:0
 *
 * eSPI Host maps threads by a tag number to master numbers.
 * Thread numbers are 4-bit
 * Master numbers are 3-bit
 * Master number    Thread numbers    Description
 *     0                0h, 1h        Host PCH HW init
 *     1                2h, 3h        Host CPU access(HW/BIOS/SMM/SW)
 *     2                4h, 5h        Host PCH ME
 *     3                6h            Host PCH LAN
 *     4                N/A           Not defined/used
 *     5                N/A           EC Firmware portal access
 *     6                9h, Dh        Host PCH IE
 *     7                N/A           Not defined/used
 *
 * NOTE: eSPI SAF specification allows master 0 (Host PCH HW) full
 * access to all protection regions.
 *
 * SAF TAG Map registers 0 - 2 map eSPI TAG values 0h - Fh to
 * the three bit master number. Each 32-bit register contains 3-bit
 * fields aligned on nibble boundaries holding the master number
 * associated with the eSPI tag (thread) number.
 * A master value of 7h in a field indicates a non-existent map entry.
 *
 * bit map of registers to program
 * b[2:0] = TAG Map[2:0]
 * b[20:4] = ProtectionRegions[16:0]
 * bit map of PR's to lock
 * b[20:4] = ProtectionRegions[16:0]
 *
 */
#define MCHP_TAF_PR_FLAG_ENABLE 0x01U
#define MCHP_TAF_PR_FLAG_LOCK 0x02U

#define MCHP_TAF_REQ_FROM_HOST_PCH     0U
#define MCHP_TAF_REQ_FROM_HOST_CPU     1U
#define MCHP_TAF_REQ_FROM_HOST_PCH_ME  2U
#define MCHP_TAF_REQ_FROM_HOST_PCH_LAN 3U
#define MCHP_TAF_REQ_FROM_RSVD4        4U
#define MCHP_TAF_REQ_FROM_EC           5U
#define MCHP_TAF_REQ_FROM_HOST_PCH_IE  6U
#define MCHP_TAG_REQ_FROM_ALL 0xffu

struct espi_taf_pr {
    uint32_t start;
    uint32_t size;
    uint8_t  req_bm_we;
    uint8_t  req_bm_rd;
    uint8_t  pr_num;
    uint8_t  flags; /* bit[0]==1 is lock the region */
};

struct espi_taf_protection {
    size_t nregions;
    const struct espi_taf_pr *pregions;
};

/* API */
void mec_hal_espi_taf_girq_ctrl(uint8_t enable, uint32_t flags);
void mec_hal_espi_taf_girq_status_clr(uint32_t flags);
uint32_t mec_hal_espi_taf_girq_status(void);
uint32_t mec_hal_espi_taf_girq_result(void);

bool mec_hal_espi_taf_is_activated(void);
void mec_hal_espi_taf_activate(uint8_t enable);

/* TAF initialization */
#define MEC_ESPI_TAF_INIT_RESET_POS 0
#define MEC_ESPI_TAF_CAF_SHARE_POS 1

int mec_hal_espi_taf_init(struct mec_espi_taf_regs *regs, uint32_t initflags);

/* TAF configuration */

int mec_hal_espi_taf_qspi_init(struct mec_espi_taf_regs *regs,
                               const struct espi_taf_hw_cfg *hcfg,
                               const struct espi_taf_flash_cfg *fcfgs, uint8_t nflash_cfgs);

int mec_hal_espi_taf_config(struct mec_espi_taf_regs *regs,
                            const struct espi_taf_hw_cfg *hcfg,
                            const struct espi_taf_flash_cfg *fcfgs, uint8_t nflashes);

int mec_hal_espi_taf_flash_rpmc_op1_config(struct mec_espi_taf_regs *regs,
                                           const struct espi_taf_hw_cfg *hcfg,
                                           const struct espi_taf_flash_cfg *fcfg,
                                           uint8_t nflashes);

/* Timing for issuing SPI Poll-1 command to flash.
 * Poll timeout is the total amount of time to issue multiple Poll-1 commands waiting for
 * SPI flash BUSY status to clear. Recommended value is 5 seconds (5000000 us). Hardware uses
 * a 32KHz based counter for this value therefore poll_timeout_us should be a mutliple of 30.5 us.
 * Poll interval provides spacing between consecutive Poll-1 command to the flash. It is
 * recommened to keep this value at 0. Hardware uses 48MHz AHB clock for this counter. If
 * the value is non-zero it should be a multiple of 21 ns.
 */
int mec_hal_espi_taf_poll_timing(struct mec_espi_taf_regs *regs, uint32_t poll_timeout_us,
                                 uint32_t poll_interval_ns);

int mec_hal_espi_taf_read_timeout(struct mec_espi_taf_regs *regs, uint32_t timeout_ns);

int mec_hal_espi_taf_sus_timeout(struct mec_espi_taf_regs *regs, uint32_t sus_rsm_ival_us,
                                 uint32_t sus_chk_delay_ns);

/* TAF protection regions */
int mec_hal_espi_taf_pr_tag_map_get(struct mec_espi_taf_regs *regs,
                                    uint8_t *tag_map, uint8_t pr_idx);
int mec_hal_espi_taf_pr_tag_map_set(struct mec_espi_taf_regs *regs,
                                    uint8_t tag_map, uint8_t pr_idx);
int mec_hal_espi_taf_pr_tag_maps_load(struct mec_espi_taf_regs *regs,
                                      const uint32_t *tag_maps, uint8_t bitmap);
bool mec_hal_espi_taf_pr_is_dirty(struct mec_espi_taf_regs *regs, uint8_t pr_idx);
int mec_hal_espi_taf_pr_dirty_clr(struct mec_espi_taf_regs *regs, uint8_t pr_idx);
int mec_hal_espi_taf_pr_dirty_clr_mask(struct mec_espi_taf_regs *regs, uint32_t mask);

uint32_t mec_hal_espi_taf_pr_lock_get(struct mec_espi_taf_regs *regs);
int mec_hal_espi_taf_pr_lock(struct mec_espi_taf_regs *regs, uint32_t lockmap);

int mec_hal_espi_taf_pr_set(struct mec_espi_taf_regs *regs, const struct espi_taf_pr *pr);

/* TAF EC Portal */
int mec_hal_espi_taf_ecp_ictrl(struct mec_espi_taf_regs *regs, uint8_t enable);
int mec_hal_espi_taf_ecp_istatus(struct mec_espi_taf_regs *regs, uint32_t *istatus);
int mec_hal_espi_taf_ecp_istatus_clr(struct mec_espi_taf_regs *regs, uint32_t istatus);
bool mec_hal_espi_taf_ecp_busy(struct mec_espi_taf_regs *regs);

#define MEC_ESPI_TAF_ECP_CMD_FLAG_IEN_POS 0
int mec_hal_espi_taf_ecp_cmd_start(struct mec_espi_taf_regs *regs, enum mec_taf_ecp_command cmd,
                                   struct mec_taf_ecp_cmd_pkt *cmd_pkt, uint32_t flags);

/* TAF eSPI Monitor */
int mec_hal_espi_taf_mon_ictrl(struct mec_espi_taf_regs *regs, uint32_t ibm, uint8_t enable);
int mec_hal_espi_taf_mon_istatus(struct mec_espi_taf_regs *regs, uint32_t *istatus);
int mec_hal_espi_taf_mon_istatus_clr(struct mec_espi_taf_regs *regs, uint32_t istatus);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_TAF_H */
