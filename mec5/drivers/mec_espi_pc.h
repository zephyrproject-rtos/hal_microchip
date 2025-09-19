/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_PC_H
#define _MEC_ESPI_PC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* forward declarations */
struct mec_espi_io_regs;
struct mec_espi_mem_regs;
struct mec_espi_vw_regs;

/* ---- eSPI Peripheral Channel ---- */

/* eSPI Host Logical Device numbers */
enum mec_espi_ldn {
    MEC_ESPI_LDN_MBOX = 0,
    MEC_ESPI_LDN_KBC,
    MEC_ESPI_LDN_ACPI_EC0,
    MEC_ESPI_LDN_ACPI_EC1,
    MEC_ESPI_LDN_ACPI_EC2,
    MEC_ESPI_LDN_ACPI_EC3,
    MEC_ESPI_LDN_ACPI_EC4,
    MEC_ESPI_LDN_ACPI_PM1,
    MEC_ESPI_LDN_KB_PORT92,
    MEC_ESPI_LDN_UART0,
    MEC_ESPI_LDN_UART1,
    MEC_ESPI_LDN_UART2,
    MEC_ESPI_LDN_UART3,
    MEC_ESPI_LDN_IOC,
    MEC_ESPI_LDN_IOMC,
    MEC_ESPI_LDN_GLUE,
    MEC_ESPI_LDN_EMI0,
    MEC_ESPI_LDN_EMI1,
    MEC_ESPI_LDN_EMI2,
    MEC_ESPI_LDN_RTC = 20,
    MEC_ESPI_LDN_PP0,
    MEC_ESPI_LDN_BDBG0 = 32,
    MEC_ESPI_LDN_BDBG0_ALIAS,
    MEC_ESPI_LDN_TB32 = 47,
    MEC_ESPI_LDN_EC = 66,
    MEC_ESPI_LDN_MAX,
};

/* Logical devices using Serial IRQ implement one SIRQ except:
 * Mailbox, KBC, and EMI implement two Serial IRQs each.
 * Use these enumerated types for the instance parameter of
 * sirq get/set.
 */
enum mec_espi_ld_sirq_mbox {
    MEC_ESPI_LD_MBOX_HOST_SIRQ = 0,
    MEC_ESPI_LD_MBOX_HOST_SMI,
};

enum mec_espi_ld_sirq_kbc {
    MEC_ESPI_LD_KBC_KIRQ = 0,
    MEC_ESPI_LD_KBC_MIRQ,
};

enum mec_espi_ld_sirq_emi {
    MEC_ESPI_LD_EMI_HOST_EVENT = 0,
    MEC_ESPI_LD_EMI_E2H,
};

/* ---- Peripheral channel (PC) ---- */
#define MEC_ESPI_PC_BM_EN_CHG 0x1
#define MEC_ESPI_PC_BM_EN_STATE_HI 0x2
#define MEC_ESPI_PC_EN_CHG 0x1
#define MEC_ESPI_PC_EN_STATE_HI 0x2

enum mec_espi_pc_intr_pos {
    MEC_ESPI_PC_INTR_CHEN_CHG_POS = 0,
    MEC_ESPI_PC_INTR_BMEN_CHG_POS,
    MEC_ESPI_PC_INTR_BERR_POS,
    MEC_ESPI_PC_INTR_POS_MAX
};

enum mec_espi_pc_sts_pos {
    MEC_ESPI_PC_ISTS_CHEN_STATE_POS = 0,
    MEC_ESPI_PC_ISTS_CHEN_CHG_POS,
    MEC_ESPI_PC_ISTS_BMEN_STATE_POS,
    MEC_ESPI_PC_ISTS_BMEN_CHG_POS,
    MEC_ESPI_PC_ISTS_BERR_POS,
    MEC_ESPI_PC_ISTS_POS_MAX,
};

struct mec_espi_pc_last_cycle {
    uint32_t host_pc_addr_lsw;
    uint32_t host_pc_addr_msw;
    uint16_t len;
    uint8_t cycle_type;
    uint8_t tag;
};

void mec_hal_espi_pc_ready_set(struct mec_espi_io_regs *iobase);
/* return 1 is ready else 0 */
int mec_hal_espi_pc_is_ready(struct mec_espi_io_regs *iobase);

/* return bits indicating eSPI peripheral channel enable has changed and the
 * channel enable's current state.
 */
uint32_t mec_hal_espi_pc_en_status(struct mec_espi_io_regs *iobase);
uint32_t mec_hal_espi_pc_bm_status(struct mec_espi_io_regs *iobase);

/* return status bit map interpreted using mec_espi_pc_status_pos bit positions */
uint32_t mec_hal_espi_pc_status(struct mec_espi_io_regs *iobase);
void mec_hal_espi_pc_status_clr(struct mec_espi_io_regs *iobase, uint32_t bitmap);
void mec_hal_espi_pc_status_clr_all(struct mec_espi_io_regs *iobase);

void mec_hal_espi_pc_intr_en(struct mec_espi_io_regs *iobase, uint32_t bitmap);
void mec_hal_espi_pc_intr_dis(struct mec_espi_io_regs *iobase, uint32_t bitmap);

/* Get 64-bit address sent by Host which caused an error */
uint64_t mec_hal_espi_pc_error_addr(struct mec_espi_io_regs *iobase);

void mec_hal_espi_pc_last_cycle(struct mec_espi_io_regs *iobase,
                            struct mec_espi_pc_last_cycle *lc);

void mec_hal_espi_pc_girq_ctrl(uint8_t enable);
void mec_hal_espi_pc_girq_status_clr(void);
uint32_t mec_hal_espi_pc_girq_status(void);
uint32_t mec_hal_espi_pc_girq_result(void);

/* PC LTR */
enum mec_espi_pc_ltr_intr_pos {
    MEC_ESPI_PC_LTR_INTR_TX_DONE_POS = 0,
    MEC_ESPI_PC_LTR_INTR_START_OVR_POS = 3,
    MEC_ESPI_PC_LTR_INTR_DIS_BY_HOST_POS,
    MEC_ESPI_PC_LTR_INTR_TX_BUSY_POS = 8
};

uint32_t mec_hal_espi_pc_ltr_status(struct mec_espi_io_regs *iobase);
void mec_hal_espi_pc_ltr_intr_en(struct mec_espi_io_regs *iobase, uint32_t enmask);
void mec_hal_espi_pc_ltr_ctrl(struct mec_espi_io_regs *iobase, uint8_t tag, uint8_t start);
void mec_hal_espi_pc_ltr_msg(struct mec_espi_io_regs *iobase, uint16_t nunits, uint8_t time_unit,
                             uint8_t rsvd_bits, uint8_t max_lat);
void mec_hal_espi_pc_ltr_girq_ctrl(uint8_t enable);
void mec_hal_espi_pc_ltr_girq_status_clr(void);
uint32_t mec_hal_espi_pc_ltr_girq_status(void);
uint32_t mec_hal_espi_pc_ltr_girq_result(void);

/* ---- Peripheral Channel Logical Device I/O and Memory BARs ---- */

/* NOTE: refer to chip documentation. Most I/O and memory BARs are held
 * in reset by the SoC's VCC Power Good signal and the state of the nPLTRST signal.
 * nPLTRST can be a virtual wire or an external signal (legacy systems).
 */
int mec_hal_espi_iobar_cfg(struct mec_espi_io_regs *base, uint8_t ldn, uint16_t io_base,
                           uint8_t enable);
int mec_hal_espi_iobar_enable(struct mec_espi_io_regs *base, uint8_t ldn, uint8_t enable);
int mec_hal_espi_iobar_is_enabled(struct mec_espi_io_regs *base, uint8_t ldn);
uint32_t mec_hal_espi_iobar_mask(struct mec_espi_io_regs *base, uint8_t ldn);
int mec_hal_espi_iobar_mask_set(struct mec_espi_io_regs *base, uint8_t ldn, uint8_t mask);

/* Inhibit both I/O and Memory BAR for a logical device or a bit map of LDNs */
int mec_hal_espi_bar_inhibit(struct mec_espi_io_regs *base, uint8_t ldn, uint8_t inhibit);
int mec_hal_espi_bar_inhibit_msk(struct mec_espi_io_regs *base, uint8_t inhibit,
                                 uint32_t msklo, uint32_t mskhi);

int mec_hal_espi_mbar_enable(struct mec_espi_mem_regs *base, uint8_t ldn, uint8_t enable);
int mec_hal_espi_mbar_is_enabled(struct mec_espi_mem_regs *base, uint8_t ldn);
int mec_hal_espi_mbar_cfg(struct mec_espi_mem_regs *base, uint8_t ldn, uint32_t mem_base,
                          uint8_t enable);
int mec_hal_espi_mbar_extended_addr_set(struct mec_espi_mem_regs *base, uint32_t extended_addr);

enum espi_mec5_sram_bar_id {
    MEC_ESPI_SRAM_BAR_0 = 0,
    MEC_ESPI_SRAM_BAR_1,
    MEC_ESPI_SRAM_BAR_MAX,
};

enum espi_mec5_sram_host_access {
    MEC_ESPI_SRAM_HOST_ACCESS_NONE = 0,
    MEC_ESPI_SRAM_HOST_ACCESS_RO,
    MEC_ESPI_SRAM_HOST_ACCESS_WO,
    MEC_ESPI_SRAM_HOST_ACCESS_RW,
};

enum espi_mec5_sram_bar_size {
    MEC_ESPI_SRAM_BAR_SIZE_1B = 0,
    MEC_ESPI_SRAM_BAR_SIZE_2B,
    MEC_ESPI_SRAM_BAR_SIZE_4B,
    MEC_ESPI_SRAM_BAR_SIZE_8B,
    MEC_ESPI_SRAM_BAR_SIZE_16B,
    MEC_ESPI_SRAM_BAR_SIZE_32B,
    MEC_ESPI_SRAM_BAR_SIZE_64B,
    MEC_ESPI_SRAM_BAR_SIZE_128B,
    MEC_ESPI_SRAM_BAR_SIZE_256B,
    MEC_ESPI_SRAM_BAR_SIZE_512B,
    MEC_ESPI_SRAM_BAR_SIZE_1KB,
    MEC_ESPI_SRAM_BAR_SIZE_2KB,
    MEC_ESPI_SRAM_BAR_SIZE_4KB,
    MEC_ESPI_SRAM_BAR_SIZE_8KB,
    MEC_ESPI_SRAM_BAR_SIZE_16KB,
    MEC_ESPI_SRAM_BAR_SIZE_32KB,
    MEC_ESPI_SRAM_BAR_SIZE_MAX,
};

struct espi_mec5_sram_bar_cfg {
    uint32_t haddr;
    uint32_t maddr;
    uint8_t size;
    uint8_t access;
};

int mec_hal_espi_sram_bar_cfg(struct mec_espi_mem_regs *base,
                              const struct espi_mec5_sram_bar_cfg *barcfg,
                              uint8_t sram_bar_id, uint8_t enable);
int mec_hal_espi_sram_bar_extended_addr_set(struct mec_espi_mem_regs *base,
                                            uint32_t extended_addr);

/* eSPI SRAM BARs EC memory location, size, access, and enable can be programmed
 * while ESPI_nRESET or nPLTRST are active. Host address cannot.
 */
int mec_hal_espi_sram_bar_ec_mem_cfg(struct mec_espi_mem_regs *regs, uint8_t sram_bar_id,
                                     uint32_t maddr, uint16_t size, uint8_t access,
                                     uint8_t enable);

int mec_hal_espi_sram_bar_enable(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                 uint8_t enable);

int mec_hal_espi_sram_bar_host_addr_set(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                        uint32_t host_addr_lsw, uint32_t host_addr_msw);

/* get specified SRAM BAR size in bytes */
int mec_hal_espi_sram_bar_size_get(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                   size_t *size);

/* get access mode */
int mec_hal_espi_sram_bar_access_get(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                     int *access);

/* Return the number of Serial IRQ's a logical device implements */
uint8_t mec_hal_espi_ld_sirq_num(struct mec_espi_io_regs *iobase, uint8_t ldn);

/* Get/set Serial IRQ slot(interrupt) number for a logical device.
 * Some logical devices implement more than one SIRQ selected by ldn_sirq_id (zero based)
 */
uint8_t mec_hal_espi_ld_sirq_get(struct mec_espi_io_regs *iobase, uint8_t ldn,
                                 uint8_t ldn_sirq_id);
void mec_hal_espi_ld_sirq_set(struct mec_espi_io_regs *iobase, uint8_t ldn,
                              uint8_t ldn_sirq_id, uint8_t slot);

/* Generate EC_IRQ Serial IRQ to the Host using the Serial IRQ slot
 * number previously programmed by mec_espi_ld_sirq_set().
 */
int mec_hal_espi_gen_ec_sirq(struct mec_espi_io_regs *iobase, uint8_t val);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ESPI_PC_H */
