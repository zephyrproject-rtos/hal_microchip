/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_espi_api.h"
#include "mec_retval.h"

/* Logical device to BAR index table. Note: not all logical devices have
 * a memory BAR. BAR indices are stored +1. A value of zero indicates no
 * BAR of that type exists for the logical device.
 */
struct ld_info {
    uint8_t ldn;
    uint8_t io_bar_idx;
    uint8_t mem_bar_idx;
    uint8_t num_sirqs;
    uint8_t sirq_idx;
    uint8_t rsvd[3];
};

const struct ld_info ld_table[] = {
    { MEC_ESPI_LDN_MBOX, 3, 1, 2, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_KBC, 4, 0, 2, 2, {0, 0, 0} },
    { MEC_ESPI_LDN_ACPI_EC0, 5, 2, 1, 4, {0, 0, 0} },
    { MEC_ESPI_LDN_ACPI_EC1, 6, 3, 1, 5, {0, 0, 0} },
    { MEC_ESPI_LDN_ACPI_EC2, 7, 4, 1, 6, {0, 0, 0} },
    { MEC_ESPI_LDN_ACPI_EC3, 8, 5, 1, 7, {0, 0, 0} },
    { MEC_ESPI_LDN_ACPI_EC4, 9, 6, 1, 8, {0, 0, 0} },
    { MEC_ESPI_LDN_ACPI_PM1, 10, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_KB_PORT92, 11, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_UART0, 12, 0, 1, 9, {0, 0, 0} },
    { MEC_ESPI_LDN_UART1, 13, 0, 1, 10, {0, 0, 0} },
    { MEC_ESPI_LDN_UART2, 22, 0, 1, 19, {0, 0, 0} },
    { MEC_ESPI_LDN_UART3, 24, 0, 1, 21, {0, 0, 0} },
    { MEC_ESPI_LDN_IOC, 1, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_IOMC, 2, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_GLUE, 23, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_EMI0, 14, 7, 2, 11, {0, 0, 0} },
    { MEC_ESPI_LDN_EMI1, 15, 8, 2, 13, {0, 0, 0} },
    { MEC_ESPI_LDN_EMI2, 16, 9, 2, 15, {0, 0, 0} },
    { MEC_ESPI_LDN_RTC, 19, 0, 1, 17, {0, 0, 0} },
    { MEC_ESPI_LDN_PP0, 25, 0, 0, 0, {0, 0, 0} }, /* desktop devices */
    { MEC_ESPI_LDN_BDBG0, 17, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_BDBG0_ALIAS, 18, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_TB32, 21, 0, 0, 0, {0, 0, 0} },
    { MEC_ESPI_LDN_EC, 0, 0, 1, 18, {0, 0, 0} },
};
#define LD_TBL_NUM_ENTRIES (sizeof(ld_table) / sizeof(struct ld_info))

static struct ld_info const *find_bar(uint8_t ldn)
{
    if (ldn >= MEC_ESPI_LDN_MAX) {
        return NULL;
    }

    for (size_t i = 0; i < LD_TBL_NUM_ENTRIES; i++) {
        if (ld_table[i].ldn == ldn) {
            return &ld_table[i];
        }
    }

    return NULL;
}

static inline int ldn_has_iob(uint8_t ldn)
{
    if (ldn < 32) {
        return (int)(MEC_BIT(ldn) & (uint32_t)(MEC5_ESPI_LDN_IOB_MSK_LO));
    } else {
        ldn = ldn - (uint8_t)32u;
        return (int)(MEC_BIT(ldn) & (uint32_t)(MEC5_ESPI_LDN_IOB_MSK_HI));
    }
}

static inline int ldn_has_memb(uint8_t ldn)
{
    if (ldn < 32) {
        return (int)(MEC_BIT(ldn) & (uint32_t)(MEC5_ESPI_LDN_MEMB_MSK_LO));
    } else {
        ldn = ldn - (uint8_t)32u;
        return (int)(MEC_BIT(ldn) & (uint32_t)(MEC5_ESPI_LDN_MEMB_MSK_HI));
    }
}

static uint8_t mec_espi_sirq_get(struct mec_espi_io_regs *iobase, uint8_t sirq_idx)
{
    if ((sirq_idx > 31) || !(MEC_BIT(sirq_idx) & MEC5_ESPI_PC_SIRQ_BITMAP)) {
        return MEC_ESPI_SIRQ_SLOT_DIS;
    }

    return iobase->SERIRQ[sirq_idx];
}

/* Set SERIRQ slot number for specified SERIRQ index */
static void espi_sirq_set(struct mec_espi_io_regs *iobase, uint8_t sirq_idx, uint8_t slot)
{
    if ((sirq_idx > 31) || !(MEC_BIT(sirq_idx) & MEC5_ESPI_PC_SIRQ_BITMAP)) {
        return;
    }

    iobase->SERIRQ[sirq_idx] = slot;
}

/*-----------------------------------------------------------------------*/

int mec_hal_espi_iobar_cfg(struct mec_espi_io_regs *base, uint8_t ldn,
                           uint16_t io_base, uint8_t enable)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint32_t bar_val = (uint32_t)io_base << 16;
    uint8_t idx = 0;

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->io_bar_idx) { /* Logical device does not implement an I/O BAR */
        return MEC_RET_ERR_INVAL;
    }

    idx = (uint8_t)(ldi->io_bar_idx - 1u);

    /* disable and update */
    base->HOST_BAR[idx] = bar_val;

    if (enable) {
        base->HOST_BAR[idx] |= MEC_BIT(MEC_ESPI_IO_HOST_BAR_VALID_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_iobar_enable(struct mec_espi_io_regs *base, uint8_t ldn, uint8_t enable)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx;

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->io_bar_idx) { /* Logical device does not implement an I/O BAR */
        return MEC_RET_ERR_INVAL;
    }

    idx = (uint8_t)(ldi->io_bar_idx - 1u);

    if (enable) {
        base->HOST_BAR[idx] |= MEC_BIT(MEC_ESPI_IO_HOST_BAR_VALID_Pos);
    } else {
        base->HOST_BAR[idx] &= (uint32_t)~MEC_BIT(MEC_ESPI_IO_HOST_BAR_VALID_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_iobar_is_enabled(struct mec_espi_io_regs *base, uint8_t ldn)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx;

    if (!base || !ldi) {
        return 0;
    }

    if (!ldi->io_bar_idx) { /* Logical device does not implement an I/O BAR */
        return 0;
    }

    idx = (uint8_t)(ldi->io_bar_idx - 1u);
    if (base->HOST_BAR[idx] & MEC_BIT(MEC_ESPI_IO_HOST_BAR_VALID_Pos)) {
        return 1;
    }

    return 0;
}

uint32_t mec_hal_espi_iobar_mask(struct mec_espi_io_regs *base, uint8_t ldn)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx;

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->io_bar_idx) { /* Logical device does not implement an I/O BAR */
        return MEC_RET_ERR_INVAL;
    }

    idx = (uint8_t)(ldi->io_bar_idx - 1u);

    return (base->EC_LDN_MSK[idx] & 0xffu);
}

/* Set the logical device's I/O BAR mask field.
 * NOTE1: Only the ACPI_EC logical devices mask fiels is writable.
 * NOTE2: The mask field is only writable when the I/O BAR is not in reset
 * and the valid bit in the corresponding LDN's Host I/O BAR is not set.
 */
int mec_hal_espi_iobar_mask_set(struct mec_espi_io_regs *base, uint8_t ldn, uint8_t mask)
{
    const struct ld_info *ldi = find_bar(ldn);

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->io_bar_idx) { /* Logical device does not implement an I/O BAR */
        return MEC_RET_ERR_INVAL;
    }

    uint8_t idx = (uint8_t)(ldi->io_bar_idx - 1u);
    uint32_t temp = base->EC_LDN_MSK[idx];

    temp &= ~(MEC_ESPI_IO_EC_LDN_MSK_MSK_Msk << MEC_ESPI_IO_EC_LDN_MSK_MSK_Pos);
    temp |= (((uint32_t)mask << MEC_ESPI_IO_EC_LDN_MSK_MSK_Pos) | MEC_ESPI_IO_EC_LDN_MSK_MSK_Msk);

    *((volatile uint32_t *)&base->EC_LDN_MSK[idx]) = temp;

    return MEC_RET_OK;
}

/* eSPI logical device memory BAR's are 80-bit registers packed in address space
 * resulting 16-bit alignment.
 * b[0] = 0(disabled), 1(enabled/valid)
 * b[47:16] = bits[31:0] of the Host address.
 * NOTE: If Host requires more than a 32-bit memory address, all eSPI I/O memory
 * BAR's must be located in the same 4GB region and the upper address bits are
 * specified in the MBAR Host Extended Address register.
 */
int mec_hal_espi_mbar_cfg(struct mec_espi_mem_regs *base, uint8_t ldn,
                          uint32_t mem_base, uint8_t enable)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx;

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->mem_bar_idx) { /* Logical device does not implement a memory BAR */
        return MEC_RET_ERR_INVAL;
    }

    idx = (uint8_t)(ldi->mem_bar_idx - 1u);

    volatile struct mec_espi_mem_host_mem_bar_regs *mbar = &base->HOST_MEM_BAR[idx];

    mbar->VALID &= (uint16_t)~MEC_BIT(MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Pos);
    mbar->HOST_MEM_ADDR_B15_0 = (uint16_t)mem_base;
    mbar->HOST_MEM_ADDR_B31_16 = (uint16_t)(mem_base >> 16);

    if (enable) {
        mbar->VALID |= MEC_BIT(MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_sram_bar_ec_mem_cfg(struct mec_espi_mem_regs *regs, uint8_t sram_bar_id,
                                     uint32_t maddr, uint16_t size, uint8_t access,
                                     uint8_t enable)
{
    uint16_t vasz = 0;
    uint8_t nz = 0;

    if (!regs || !size) {
        return MEC_RET_ERR_INVAL;
    }

    if ((size & (size - 1)) != 0) { /* not power of 2 */
        return MEC_RET_ERR_INVAL;
    }

    nz = 31u - __CLZ((uint32_t)size);
    if (nz > 15u) {
        nz = 15u;
    }

    vasz = (uint16_t)nz << MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Pos;
    vasz |= (((uint16_t)access << MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Pos)
             & MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Msk);
    if (enable) {
        vasz |= MEC_BIT(MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Pos);
    }

    regs->EC_SRAM_BAR[sram_bar_id].VASZ = 0;
    regs->EC_SRAM_BAR[sram_bar_id].EC_SRAM_ADDR_15_0 = maddr & 0xffffu;
    regs->EC_SRAM_BAR[sram_bar_id].EC_SRAM_ADDR_31_16 = (uint16_t)(maddr >> 16);
    regs->EC_SRAM_BAR[sram_bar_id].VASZ = vasz;

    return MEC_RET_OK;
}

int mec_hal_espi_sram_bar_cfg(struct mec_espi_mem_regs *base,
                              const struct espi_mec5_sram_bar_cfg *barcfg,
                              uint8_t sram_bar_id, uint8_t enable)
{
    uint32_t temp;

    if (!base || !barcfg || (sram_bar_id >= MEC_ESPI_SRAM_BAR_MAX)
        || (barcfg->access > MEC_ESPI_SRAM_HOST_ACCESS_RW)
        || (barcfg->size > MEC_ESPI_SRAM_BAR_SIZE_32KB)) {
            return MEC_RET_ERR_INVAL;
    }

    base->EC_SRAM_BAR[sram_bar_id].VASZ = 0; /* disable before modification */
    temp = barcfg->size;
    temp = (temp << MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Pos)
           & MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Msk;
    temp |= (((uint32_t)barcfg->access << MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Pos) &
            MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Msk);
    base->EC_SRAM_BAR[sram_bar_id].VASZ = (uint16_t)temp;

    base->EC_SRAM_BAR[sram_bar_id].EC_SRAM_ADDR_15_0 = barcfg->maddr & 0xffffu;
    base->EC_SRAM_BAR[sram_bar_id].EC_SRAM_ADDR_31_16 = (uint16_t)(barcfg->maddr >> 16);

    base->HOST_SRAM_BAR[sram_bar_id].HOST_ADDR_15_0 = barcfg->haddr & 0xffffu;
    base->HOST_SRAM_BAR[sram_bar_id].HOST_ADDR_31_16 = (uint16_t)(barcfg->haddr >> 16);

    if (enable) {
        base->EC_SRAM_BAR[sram_bar_id].VASZ |= MEC_BIT(MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_sram_bar_host_addr_set(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                        uint32_t host_addr_lsw, uint32_t host_addr_msw)
{
    if (!base || (sram_bar_id >= MEC_ESPI_SRAM_BAR_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    base->SRAM_BAR_HOST_EXTEND = host_addr_msw;
    base->HOST_SRAM_BAR[sram_bar_id].HOST_ADDR_15_0 = (uint16_t)host_addr_lsw;
    base->HOST_SRAM_BAR[sram_bar_id].HOST_ADDR_31_16 = (uint16_t)(host_addr_lsw >> 16);

    return MEC_RET_OK;
}

int mec_hal_espi_sram_bar_enable(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                 uint8_t enable)
{
    if (!base || (sram_bar_id >= MEC_ESPI_SRAM_BAR_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        base->EC_SRAM_BAR[sram_bar_id].VASZ |= MEC_BIT(MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Pos);
    } else {
        base->EC_SRAM_BAR[sram_bar_id].VASZ &=
            (uint16_t)~MEC_BIT(MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_sram_bar_size_get(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                   size_t *size)
{
    uint16_t temp = 0;

    if (!base || !size || (sram_bar_id >= MEC_ESPI_SRAM_BAR_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    /* size of power of 2 */
    temp = base->EC_SRAM_BAR[sram_bar_id].VASZ & MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Msk;
    temp >>= MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Pos;
    *size = (1u << temp);

    return MEC_RET_OK;
}

int mec_hal_espi_sram_bar_access_get(struct mec_espi_mem_regs *base, uint8_t sram_bar_id,
                                     int *access)
{
    uint16_t temp = 0;

    if (!base || !access || (sram_bar_id >= MEC_ESPI_SRAM_BAR_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    /* size of power of 2 */
    temp = base->EC_SRAM_BAR[sram_bar_id].VASZ & MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Msk;
    temp >>= MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Pos;
    *access = (int)temp;

    return MEC_RET_OK;
}

/* Set host address bits[47:32] for memory BAR's
 * Each Logical device implementing a memory BAR includes Host address bits [31:0].
 * Host address bits [47:32] are the same for all memory BAR's. Therefore all memory
 * BAR's must be located in the same 4GB host address space range.
 * NOTE: this register is held in reset by chip reset, ESPI_nRESET, and nPLTRST.
 */
int mec_hal_espi_mbar_extended_addr_set(struct mec_espi_mem_regs *base, uint32_t extended_addr)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->MBAR_HOST_EXTEND = extended_addr;

    return MEC_RET_OK;
}

/* Program eSPI Peripheral Channel SRAM BAR extended Host address register.
 * This register contains Host memory space address bits[47:32] and applies
 * to both SRAM BARs.
 * NOTE: this register is held in reset by by chip reset, ESPI_nRESET, and nPLTRST.
 */
int mec_hal_espi_sram_bar_extended_addr_set(struct mec_espi_mem_regs *base,
                                            uint32_t extended_addr)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    base->SRAM_BAR_HOST_EXTEND = extended_addr;

    return MEC_RET_OK;
}

int mec_hal_espi_mbar_enable(struct mec_espi_mem_regs *base, uint8_t ldn, uint8_t enable)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx;

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->mem_bar_idx) { /* Logical device does not implement a memory BAR */
        return MEC_RET_ERR_INVAL;
    }

    idx = (uint8_t)(ldi->mem_bar_idx - 1u);

    volatile struct mec_espi_mem_host_mem_bar_regs *mbar = &base->HOST_MEM_BAR[idx];

    if (enable) {
        mbar->VALID |= MEC_BIT(MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Pos);
    } else {
        mbar->VALID &= (uint16_t)~MEC_BIT(MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_espi_mbar_is_enabled(struct mec_espi_mem_regs *base, uint8_t ldn)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx;

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->mem_bar_idx) { /* Logical device does not implement a memory BAR */
        return MEC_RET_ERR_INVAL;
    }

    idx = (uint8_t)(ldi->mem_bar_idx - 1u);

    volatile struct mec_espi_mem_host_mem_bar_regs *mbar = &base->HOST_MEM_BAR[idx];

    if (mbar->VALID & MEC_BIT(MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Pos)) {
        return 1;
    }

    return 0;
}

/* Disable I/O and Memory BARs for a logical device */
int mec_hal_espi_bar_inhibit(struct mec_espi_io_regs *base, uint8_t ldn, uint8_t inhibit)
{
    const struct ld_info *ldi = find_bar(ldn);

    if (!base || !ldi) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ldi->io_bar_idx && !ldi->mem_bar_idx) { /* Logical device does not implement any BAR */
        return MEC_RET_ERR_INVAL;
    }

    if (ldn < 32) {
        if (inhibit) {
            base->PCBINH[0] |= MEC_BIT(ldn);
        } else {
            base->PCBINH[0] &= (uint32_t)~MEC_BIT(ldn);
        }
    } else {
        ldn = ldn - (uint8_t)32u;
        if (inhibit) {
            base->PCBINH[1] |= MEC_BIT(ldn);
        } else {
            base->PCBINH[1] &= (uint32_t)~MEC_BIT(ldn);
        }
    }

    return MEC_RET_OK;
}

int mec_hal_espi_bar_inhibit_msk(struct mec_espi_io_regs *base, uint8_t inhibit,
                                 uint32_t msklo, uint32_t mskhi)
{
    if (!base) {
        return MEC_RET_ERR_INVAL;
    }

    if (inhibit) {
        base->PCBINH[0] |= msklo;
        base->PCBINH[1] |= mskhi;
    } else {
        base->PCBINH[0] &= ~msklo;
        base->PCBINH[1] &= ~mskhi;
    }

    return MEC_RET_OK;
}

/* ---- Logical Device Serial IRQ ---- */

/* Return the number of Serial IRQs a logical device implements */
uint8_t mec_hal_espi_ld_sirq_num(struct mec_espi_io_regs *iobase, uint8_t ldn)
{
    const struct ld_info *ldi = find_bar(ldn);

    if (!iobase || !ldi) {
        return 0;
    }

    return ldi->num_sirqs;
}

/* get current slot number the specified logical device SIRQ instance is programmed to.
 * NOTE: a value of 255 (0xff) indicates this SIRQ is disabled.
 */
uint8_t mec_hal_espi_ld_sirq_get(struct mec_espi_io_regs *iobase, uint8_t ldn, uint8_t ldn_sirq_id)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx = 0;

    if (!iobase || !ldi) {
        return 0;
    }

    if ((!ldi->num_sirqs) || (ldn_sirq_id > ldi->num_sirqs)) {
        return 0xffu;
    }

    idx = ldi->sirq_idx + ldn_sirq_id;

    return mec_espi_sirq_get(iobase, idx);
}

void mec_hal_espi_ld_sirq_set(struct mec_espi_io_regs *iobase, uint8_t ldn,
                             uint8_t ldn_sirq_id, uint8_t slot)
{
    const struct ld_info *ldi = find_bar(ldn);
    uint8_t idx = 0;

    if (!iobase || !ldi) {
        return;
    }

    if ((!ldi->num_sirqs) || (ldn_sirq_id > ldi->num_sirqs)) {
        return;
    }

    idx = ldi->sirq_idx + ldn_sirq_id;

    espi_sirq_set(iobase, idx, slot);
}

/* Generate EC_IRQ Serial IRQ to the Host using the Serial IRQ slot
 * number previously programmed by mec_espi_ld_sirq_set().
 */
int mec_hal_espi_gen_ec_sirq(struct mec_espi_io_regs *iobase, uint8_t val)
{
    if (!iobase) {
        return MEC_RET_ERR_INVAL;
    }

    if (val) {
        iobase->PCECIRQ |= MEC_BIT(MEC_ESPI_IO_PCECIRQ_GEN_EC_IRQ_Pos);
    } else {
        iobase->PCECIRQ &= (uint32_t)~MEC_BIT(MEC_ESPI_IO_PCECIRQ_GEN_EC_IRQ_Pos);
    }

    return MEC_RET_OK;
}

/* end mec_espi_host_dev.c */
