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
#include "mec_acpi_ec_api.h"
#include "mec_ecia_api.h"
#include "mec_espi_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

#define MEC_ACPI_EC_GIRQ 15

#define MEC_ACPI_EC0_IBF_GIRQ_POS 5
#define MEC_ACPI_EC0_OBE_GIRQ_POS 6
#define MEC_ACPI_EC1_IBF_GIRQ_POS 7
#define MEC_ACPI_EC1_OBE_GIRQ_POS 8
#define MEC_ACPI_EC2_IBF_GIRQ_POS 9
#define MEC_ACPI_EC2_OBE_GIRQ_POS 10
#define MEC_ACPI_EC3_IBF_GIRQ_POS 11
#define MEC_ACPI_EC3_OBE_GIRQ_POS 12
#define MEC_ACPI_EC4_IBF_GIRQ_POS 13
#define MEC_ACPI_EC4_OBE_GIRQ_POS 14

#define MEC_ACPI_EC0_IBF_ECIA_INFO MEC5_ECIA_INFO(15, 5, 7, 45)
#define MEC_ACPI_EC0_OBE_ECIA_INFO MEC5_ECIA_INFO(15, 6, 7, 46)
#define MEC_ACPI_EC1_IBF_ECIA_INFO MEC5_ECIA_INFO(15, 7, 7, 47)
#define MEC_ACPI_EC1_OBE_ECIA_INFO MEC5_ECIA_INFO(15, 8, 7, 48)
#define MEC_ACPI_EC2_IBF_ECIA_INFO MEC5_ECIA_INFO(15, 9, 7, 49)
#define MEC_ACPI_EC2_OBE_ECIA_INFO MEC5_ECIA_INFO(15, 10, 7, 50)
#define MEC_ACPI_EC3_IBF_ECIA_INFO MEC5_ECIA_INFO(15, 11, 7, 51)
#define MEC_ACPI_EC3_OBE_ECIA_INFO MEC5_ECIA_INFO(15, 12, 7, 52)
#define MEC_ACPI_EC4_IBF_ECIA_INFO MEC5_ECIA_INFO(15, 13, 7, 53)
#define MEC_ACPI_EC4_OBE_ECIA_INFO MEC5_ECIA_INFO(15, 14, 7, 54)

#define MEC_ACPI_EC_IBF_DEVI_IDX 0
#define MEC_ACPI_EC_OBE_DEVI_IDX 1

/* Hardware has a mode where each ACPI EC's IBF and OBE interrupt signal are
 * OR'd together and connected to the NVIC bypassing the aggregator (GIRQ)
 * hardware. Each ISR would determine IBF/OBE by looking at the ACPI EC
 * status register.
 */
#define MEC_ACPI_EC0_NVIC_NUM 175
#define MEC_ACPI_EC1_NVIC_NUM 176
#define MEC_ACPI_EC2_NVIC_NUM 177
#define MEC_ACPI_EC3_NVIC_NUM 178
#define MEC_ACPI_EC4_NVIC_NUM 179

#define MEC_ACPI_EC_STS_RW_MSK (MEC_BIT(2) | MEC_BIT(4) | MEC_BIT(5) | MEC_BIT(6) | MEC_BIT(7))
#define MEC_ACPI_EC_STS_RO_MSK (MEC_BIT(0) | MEC_BIT(1) | MEC_BIT(3))

struct mec_acpi_ec_info {
    uintptr_t base_addr;
    uint16_t pcr_id;
    uint8_t ldn;
    uint32_t devi[MEC_ACPI_EC_NUM_IRQS];
};

static const struct mec_acpi_ec_info acpi_ec_instances[] = {
    { MEC_ACPI_EC0_BASE, MEC_PCR_ACPI_EC0, MEC_ESPI_LDN_ACPI_EC0,
      {MEC_ACPI_EC0_IBF_ECIA_INFO, MEC_ACPI_EC0_OBE_ECIA_INFO} },
    { MEC_ACPI_EC1_BASE, MEC_PCR_ACPI_EC1, MEC_ESPI_LDN_ACPI_EC1,
      {MEC_ACPI_EC1_IBF_ECIA_INFO, MEC_ACPI_EC1_OBE_ECIA_INFO} },
    { MEC_ACPI_EC2_BASE, MEC_PCR_ACPI_EC2, MEC_ESPI_LDN_ACPI_EC2,
      {MEC_ACPI_EC2_IBF_ECIA_INFO, MEC_ACPI_EC2_OBE_ECIA_INFO} },
    { MEC_ACPI_EC3_BASE, MEC_PCR_ACPI_EC3, MEC_ESPI_LDN_ACPI_EC3,
      {MEC_ACPI_EC3_IBF_ECIA_INFO, MEC_ACPI_EC3_OBE_ECIA_INFO} },
    { MEC_ACPI_EC4_BASE, MEC_PCR_ACPI_EC4, MEC_ESPI_LDN_ACPI_EC4,
      {MEC_ACPI_EC4_IBF_ECIA_INFO, MEC_ACPI_EC4_OBE_ECIA_INFO} },
};
#define NUM_ACPI_EC_INSTANCES \
    (sizeof(acpi_ec_instances) / sizeof(struct mec_acpi_ec_info))

static struct mec_acpi_ec_info const *find_acpi_ec_info(uintptr_t base_addr)
{
    for (size_t i = 0; i < NUM_ACPI_EC_INSTANCES; i++) {
        if (base_addr == acpi_ec_instances[i].base_addr) {
            return &acpi_ec_instances[i];
        }
    }

    return NULL;
}

/* ---- Public API ---- */

/* Initialize an ACPI EC controller.
 * This peripheral is reset by chip reset (RESET_SYS).
 * The Host I/O and Memory BAR's in the eSPI I/O component are reset by
 * RESET_VCC and RESET_HOST (PCI_RESET# or PLTRST#).
 */
int mec_hal_acpi_ec_init(struct mec_acpi_ec_regs *regs, uint32_t flags)
{
    const struct mec_acpi_ec_info *info = find_acpi_ec_info((uintptr_t)regs);

#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!info) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    mec_hal_acpi_ec_girq_dis(regs, MEC_ACPI_EC_IBF_IRQ | MEC_ACPI_EC_OBE_IRQ);
    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);
    if (flags & MEC_ACPI_EC_RESET) {
        mec_hal_pcr_blk_reset(info->pcr_id);
    } else { /* clear IBF and OBE status */
        regs->AEC_H2E_DATA;
    }

    mec_hal_acpi_ec_girq_clr(regs, MEC_ACPI_EC_IBF_IRQ | MEC_ACPI_EC_OBE_IRQ);

    if (flags & MEC_ACPI_EC_4BYTE_MODE) {
        regs->AEC_BYTE_CTRL |= MEC_BIT(MEC_ACPI_EC_AEC_BYTE_CTRL_FOUR_BYTE_MODE_Pos);
    } else {
        regs->AEC_BYTE_CTRL &= (uint8_t)~MEC_BIT(MEC_ACPI_EC_AEC_BYTE_CTRL_FOUR_BYTE_MODE_Pos);
    }

    if (flags & MEC_ACPI_EC_UD0A_SET) {
        if (flags & MEC_ACPI_EC_UD0A_ONE) {
            regs->AEC_STATUS |= MEC_BIT(MEC_ACPI_EC_AEC_STATUS_UD0A_Pos);
        } else {
            regs->AEC_STATUS &= (uint8_t)~MEC_BIT(MEC_ACPI_EC_AEC_STATUS_UD0A_Pos);
        }
    }

    if (flags & MEC_ACPI_EC_UD1A_SET) {
        if (flags & MEC_ACPI_EC_UD1A_ONE) {
            regs->AEC_STATUS |= MEC_BIT(MEC_ACPI_EC_AEC_STATUS_UD1A_Pos);
        } else {
            regs->AEC_STATUS &= (uint8_t)~MEC_BIT(MEC_ACPI_EC_AEC_STATUS_UD1A_Pos);
        }
    }

    mec_hal_acpi_ec_girq_dis(regs, flags);

    return MEC_RET_OK;
}

static uint32_t acpi_ec_irq_bitmap(const struct mec_acpi_ec_info *info, uint32_t flags)
{
    uint32_t bm = 0;

    if (flags & MEC_ACPI_EC_IBF_IRQ) {
        bm |= MEC_BIT(MEC5_ECIA_INFO_GIRQ_POS(info->devi[MEC_ACPI_EC_IBF_DEVI_IDX]));
    }

    if (flags & MEC_ACPI_EC_OBE_IRQ) {
        bm |= MEC_BIT(MEC5_ECIA_INFO_GIRQ_POS(info->devi[MEC_ACPI_EC_OBE_DEVI_IDX]));
    }

    return bm;
}

int mec_hal_acpi_ec_girq_en(struct mec_acpi_ec_regs *regs, uint32_t flags)
{
    const struct mec_acpi_ec_info *info = find_acpi_ec_info((uintptr_t)regs);
    uint32_t bitmap = 0;

#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!info) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    bitmap = acpi_ec_irq_bitmap(info, flags);
    mec_hal_girq_bm_en(MEC_ACPI_EC_GIRQ, bitmap, 1u);

    return MEC_RET_OK;
}

int mec_hal_acpi_ec_girq_dis(struct mec_acpi_ec_regs *regs, uint32_t flags)
{
    const struct mec_acpi_ec_info *info = find_acpi_ec_info((uintptr_t)regs);
    uint32_t bitmap = 0;

#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!info) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    bitmap = acpi_ec_irq_bitmap(info, flags);
    mec_hal_girq_bm_en(MEC_ACPI_EC_GIRQ, bitmap, 0);

    return MEC_RET_OK;
}

int mec_hal_acpi_ec_girq_clr(struct mec_acpi_ec_regs *regs, uint32_t flags)
{
    const struct mec_acpi_ec_info *info = find_acpi_ec_info((uintptr_t)regs);

#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!info) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    uint32_t clr_bitmap = acpi_ec_irq_bitmap(info, flags);

    mec_hal_girq_bm_clr_src(MEC_ACPI_EC_GIRQ, clr_bitmap);

    return MEC_RET_OK;
}

uint32_t mec_hal_acpi_ec_girq_result(struct mec_acpi_ec_regs *regs)
{
    const struct mec_acpi_ec_info *info = find_acpi_ec_info((uintptr_t)regs);
    uint32_t temp = 0u, result = 0u, ibf_bit = 0, obe_bit = 0;

#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!info) {
        return result;
    }
#endif

    ibf_bit = MEC5_ECIA_INFO_GIRQ_POS(info->devi[MEC_ACPI_EC_IBF_DEVI_IDX]);
    obe_bit = MEC5_ECIA_INFO_GIRQ_POS(info->devi[MEC_ACPI_EC_OBE_DEVI_IDX]);
    temp = mec_hal_girq_result_get(MEC_ACPI_EC_GIRQ);
    if (temp & MEC_BIT(ibf_bit)) {
        result |= MEC_ACPI_EC_IBF_IRQ;
    }
    if (temp & MEC_BIT(obe_bit)) {
        result |= MEC_ACPI_EC_OBE_IRQ;
    }

    return result;
}

/* ACPI EC has no block enable. Check the eSPI BARs? If either of the I/O or Mem
 * BAR is enabled then report enabled.
 */
int mec_hal_acpi_ec_is_enabled(struct mec_acpi_ec_regs *regs)
{
    struct mec_espi_io_regs *espi_io_base = (struct mec_espi_io_regs *)MEC_ESPI_IO_BASE;
    struct mec_espi_mem_regs *espi_mem_base = (struct mec_espi_mem_regs *)MEC_ESPI_MEM_BASE;
    const struct mec_acpi_ec_info *info = find_acpi_ec_info((uintptr_t)regs);

#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!info) {
        return 0;
    }
#endif

    if (mec_hal_espi_iobar_is_enabled(espi_io_base, info->ldn)) {
        return 1;
    }

    if (mec_hal_espi_mbar_is_enabled(espi_mem_base, info->ldn)) {
        return 1;
    }

    return 0;
}

int mec_hal_acpi_ec_is_4byte_mode(struct mec_acpi_ec_regs *regs)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0u;
    }
#endif
    if (regs && (regs->AEC_BYTE_CTRL & MEC_BIT(MEC_ACPI_EC_AEC_BYTE_CTRL_FOUR_BYTE_MODE_Pos))) {
        return 1;
    }

    return 0;
}

uint8_t mec_hal_acpi_ec_status(struct mec_acpi_ec_regs *regs)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0u;
    }
#endif
    return regs->AEC_STATUS;
}

void mec_hal_acpi_ec_status_wr(struct mec_acpi_ec_regs *regs, uint8_t val)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    regs->AEC_STATUS = val;
}

void mec_hal_acpi_ec_status_set(struct mec_acpi_ec_regs *regs, uint8_t val)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    regs->AEC_STATUS |= val;
}

void mec_hal_acpi_ec_status_mask(struct mec_acpi_ec_regs *regs, uint8_t val, uint8_t msk)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    regs->AEC_STATUS = (regs->AEC_STATUS & ~msk) | (val & msk);
}

uint8_t mec_hal_acpi_ec_status_obf(struct mec_acpi_ec_regs *regs)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0;
    }
#endif
    return (regs->AEC_STATUS & MEC_ACPI_EC_AEC_STATUS_OBF_Msk) >> MEC_ACPI_EC_AEC_STATUS_OBF_Pos;
}

uint8_t mec_hal_acpi_ec_status_ibf(struct mec_acpi_ec_regs *regs)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0;
    }
#endif
    return (regs->AEC_STATUS & MEC_ACPI_EC_AEC_STATUS_IBF_Msk) >> MEC_ACPI_EC_AEC_STATUS_IBF_Pos;
}

uint32_t mec_hal_acpi_ec_host_to_ec_data_rd32(struct mec_acpi_ec_regs *regs)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0;
    }
#endif
    return regs->AEC_H2E_DATA;  /* defined as 32-bit register */
}

void mec_hal_acpi_ec_host_to_ec_data_wr32(struct mec_acpi_ec_regs *regs, uint32_t data)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    regs->AEC_H2E_DATA = data;
}

uint8_t mec_hal_acpi_ec_host_to_ec_data_rd8(struct mec_acpi_ec_regs *regs, uint8_t offset)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0u;
    }
#endif
    uint32_t addr = (uint32_t)&regs->AEC_H2E_DATA + (uint32_t)(offset & 0x3u);

    return MEC_MMCR8(addr);
}

void mec_hal_acpi_ec_host_to_ec_data_wr8(struct mec_acpi_ec_regs *regs, uint8_t offset,
                                         uint8_t data)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    uint32_t addr = (uint32_t)&regs->AEC_H2E_DATA + (uint32_t)(offset & 0x3u);

    MEC_MMCR8(addr) = data;
}

/* --- */
uint32_t mec_hal_acpi_ec_e2h_data_rd32(struct mec_acpi_ec_regs *regs)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0;
    }
#endif
    return regs->AEC_E2H_DATA;  /* defined as 32-bit register */
}

void mec_hal_acpi_ec_e2h_to_ec_data_wr32(struct mec_acpi_ec_regs *regs, uint32_t data)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    regs->AEC_E2H_DATA = data;
}

uint8_t mec_hal_acpi_ec_e2h_data_rd8(struct mec_acpi_ec_regs *regs, uint8_t offset)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return 0u;
    }
#endif
    uint32_t addr = (uint32_t)&regs->AEC_E2H_DATA + (uint32_t)(offset & 0x3u);

    return MEC_MMCR8(addr);
}

void mec_hal_acpi_ec_e2h_data_wr8(struct mec_acpi_ec_regs *regs, uint8_t offset, uint8_t data)
{
#ifdef MEC_ACPI_EC_BASE_CHECK
    if (!regs) {
        return;
    }
#endif
    uint32_t addr = (uint32_t)&regs->AEC_E2H_DATA + (uint32_t)(offset & 0x3u);

    MEC_MMCR8(addr) = data;
}

/* end mec_acpi_ec.c */
