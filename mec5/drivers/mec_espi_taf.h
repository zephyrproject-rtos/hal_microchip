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

#include "mec_qspi_api.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* forward declarations */
struct mec_espi_io_regs;
struct mec_espi_mem_regs;
struct mec_espi_vw_regs;
struct mec_espi_taf_regs;

/* ---- eSPI Target Attached Flash (TAF) ---- */
enum mec_espi_taf_intr {
    MEC_ESPI_TAF_INTR_ECP_DONE_POS = 0,
    MEC_ESPI_TAF_INTR_HWMON_ERR_POS,
    MEC_ESPI_TAF_INTR_POS_MAX,
};

#define MEC_ESPI_TAF_HW_CFG_FLAG_FREQ_POS 0
#define MEC_ESPI_TAF_HW_CFG_FLAG_CPHA_POS 1
#define MEC_ESPI_TAF_HW_CFG_FLAG_CSTM_POS 2
#define MEC_ESPI_TAF_HW_CFG_FLAG_TAPS_POS 3

/* enable TAF prefetch */
#define MEC_ESPI_TAF_HW_CFG_FLAG_PFEN_POS 4
/* Use expedited prefetch instead of default */
#define MEC_ESPI_TAF_HW_CFG_FLAG_PFEXP_POS 5

#define MEC_ESPI_TAF_VERSION            3
#define MEC_ESPI_TAF_GENERIC_DESCR_MAX  4
#define MEC_ESPI_TAF_TAGMAP_MAX         3
#define MEC_ESPI_TAF_PROT_REG_MAX       17

/* TAF engine start indices of descriptor chains */
#define MCHP_TAF_CM_EXIT_START_DESCR    12u
#define MCHP_TAF_CM_EXIT_LAST_DESCR     13u
#define MCHP_TAF_POLL_STS_START_DESCR   14u
#define MCHP_TAF_POLL_STS_END_DESCR     15u

struct espi_taf_hw_cfg {
    uint8_t  version;
    uint8_t  flags;
    uint8_t  qspi_freq_mhz;
    uint8_t  qspi_cpha;
    uint16_t qtaps_sel;
    uint32_t qspi_cs_timing;
    uint16_t flash_pd_timeout;
    uint16_t flash_pd_min_interval;
    uint32_t generic_descr[MEC_ESPI_TAF_GENERIC_DESCR_MAX];
    uint32_t tag_map[MEC_ESPI_TAF_TAGMAP_MAX];
};

/* Until Zephyr renames SAF to TAF we need this hack */
#define espi_saf_hw_cfg espi_taf_hw_cfg

/* Flags */
#define MCHP_FLASH_FLAG_ADDR32              MEC_BIT(0)
#define MCHP_FLASH_FLAG_V1_MSK              0xffu
#define MCHP_FLASH_FLAG_V2_MSK              0xff00u
#define MCHP_FLASH_FLAG_V2_PD_CS0_EN        MEC_BIT(8)
#define MCHP_FLASH_FLAG_V2_PD_CS1_EN        MEC_BIT(9)
#define MCHP_FLASH_FLAG_V2_PD_CS0_EC_WK_EN  MEC_BIT(10)
#define MCHP_FLASH_FLAG_V2_PD_CS1_EC_WK_EN  MEC_BIT(11)

#define MEC_ESPI_TAF_QSPI_FLASH_DESCR_MAX   6u

struct espi_taf_flash_cfg {
    uint8_t  version;
    uint8_t  rsvd1;
    uint16_t flags;
    uint32_t flashsz;
    uint8_t  rd_freq_mhz;
    uint8_t  freq_mhz;
    uint8_t  rsvd2[2];
    uint32_t opa;
    uint32_t opb;
    uint32_t opc;
    uint32_t opd;
    uint32_t rpmc_op1;
    uint16_t poll2_mask;
    uint16_t cont_prefix;
    uint16_t cs_cfg_descr_ids;
    uint16_t rsvd3;
    uint32_t descr[MEC_ESPI_TAF_QSPI_FLASH_DESCR_MAX];
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

/* Host monitor error interrupt status and enables */
enum mec_taf_hmon_intr_status {
    MEC_TAF_HMON_STS_TIMEOUT_POS = 0,
    MEC_TAF_HMON_STS_OOR_POS,
    MEC_TAF_HMON_STS_AVL_POS,
    MEC_TAF_HMON_STS_CROSS_4KB_POS,
    MEC_TAF_HMON_STS_INVAL_ERSZ_POS,
};

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
    MEC_TAF_PR16_IDX,
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

/* future eSPI name change */
#define espi_saf_protection espi_taf_protection

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
int mec_hal_espi_taf_qspi_init(struct mec_espi_taf_regs *tregs, struct mec_qspi_regs *qregs,
                               const struct espi_taf_hw_cfg *thwcfg);

/* TAF protection regions */
bool mec_hal_espi_taf_pr_is_dirty(struct mec_espi_taf_regs *regs, uint8_t pr_idx);
int mec_hal_espi_taf_pr_dirty_clr(struct mec_espi_taf_regs *regs, uint8_t pr_idx);
int mec_hal_espi_taf_pr_dirty_clr_mask(struct mec_espi_taf_regs *regs, uint32_t mask);

uint32_t mec_hal_espi_taf_pr_lock_get(struct mec_espi_taf_regs *regs);
int mec_hal_espi_taf_pr_lock(struct mec_espi_taf_regs *regs, uint32_t lockmap);

int mec_hal_espi_taf_pr_set(struct mec_espi_taf_regs *regs, struct espi_taf_pr *pr);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_TAF_H */
