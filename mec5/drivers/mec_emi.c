/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_espi_pc.h"
#include "mec_pcr_api.h"
#include "mec_emi_api.h"
#include "mec_retval.h"

#define MEC_EMI_GIRQ 15

#define MEC_EMI0_GIRQ_POS 2
#define MEC_EMI1_GIRQ_POS 3
#define MEC_EMI2_GIRQ_POS 4

#define MEC_EMI0_ECIA_INFO MEC5_ECIA_INFO(15, 2, 7, 42)
#define MEC_EMI1_ECIA_INFO MEC5_ECIA_INFO(15, 3, 7, 43)
#define MEC_EMI2_ECIA_INFO MEC5_ECIA_INFO(15, 4, 7, 44)


struct mec_emi_info {
    uintptr_t base_addr;
    uint16_t pcr_id;
    uint8_t ldn;
    uint32_t devi;
};

static const struct mec_emi_info emi_instances[] = {
    { MEC_EMI0_BASE, MEC_PCR_EMI0, MEC_ESPI_LDN_EMI0, MEC_EMI0_ECIA_INFO },
    { MEC_EMI1_BASE, MEC_PCR_EMI1, MEC_ESPI_LDN_EMI1, MEC_EMI1_ECIA_INFO },
    { MEC_EMI2_BASE, MEC_PCR_EMI2, MEC_ESPI_LDN_EMI2, MEC_EMI2_ECIA_INFO },
};
#define NUM_EMI_INSTANCES \
    (sizeof(emi_instances) / sizeof(struct mec_emi_info))

static struct mec_emi_info const *find_emi_info(uintptr_t base_addr)
{
    for (size_t i = 0; i < NUM_EMI_INSTANCES; i++) {
        if (base_addr == emi_instances[i].base_addr) {
            return &emi_instances[i];
        }
    }

    return NULL;
}

/* Each EMI contains:
 * One 8-bit Host-to-EC mailbox register.
 * One 8-bit EC-to-Host mailbox register.
 * Two memory regions BAR's. Each BAR allows the Host to access
 * the SRAM via a Host facing EC-Index/Data registers with
 * auto-increment of the index. Access size can be 8, 16, or 32-bit.
 * Application ID registers.
 *
 */

/* ---- Public API ---- */

int mec_hal_emi_girq_ctrl(struct mec_emi_regs *base, uint8_t enable)
{
    const struct mec_emi_info *info = find_emi_info((uintptr_t)base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, enable);

    return MEC_RET_OK;
}

int mec_hal_emi_girq_clr(struct mec_emi_regs *base)
{
    const struct mec_emi_info *info = find_emi_info((uintptr_t)base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(info->devi);

    return MEC_RET_OK;
}

uint32_t mec_hal_emi_girq_result(struct mec_emi_regs *base)
{
    const struct mec_emi_info *info = find_emi_info((uintptr_t)base);

    if (!info) {
        return 0;
    }

    return mec_hal_girq_result(info->devi);
}

/* Initialize an EMI controller.
 * This peripheral is reset by chip reset (RESET_SYS).
 * The Host I/O and Memory BAR's in the eSPI I/O component are reset by
 * RESET_VCC and RESET_HOST (PCI_RESET# or PLTRST#).
 */
int mec_hal_emi_init(struct mec_emi_regs *regs, uint32_t flags)
{
    const struct mec_emi_info *info = find_emi_info((uintptr_t)regs);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(info->devi, 0);
    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);

    if (flags & MEC_EMI_RESET) {
        mec_hal_pcr_blk_reset(info->pcr_id);
    }

    mec_hal_girq_clr_src(info->devi);

    return MEC_RET_OK;
}

/* Configure one of an EMI's memory access regions.
 * region: 0 or 1. Each EMI has two sets of memory region access registers.
 * mbase: physical address of region start in EC SRAM memory. Hardware ignores
 *   bits[1:0] resulting in minimal 4-byte alignment.
 * rwlimits: b[15:0] is the read limit and b[31:16] is the write limit. The limit
 *   values are offsets from the base not actual EC SRAM address values. The Host
 *   writes an offset into the region to the host facing EC-Address register.
 *   If bits[14:2] of EC-Address are less than the read or write limit then the access
 *   occurs (bus cycles to actual EC SRAM).
 *   Hardware implementation allows
 *   1. read_size == write_size == 0. Region disabled
 *
 *   2. read_size != 0, write_size == 0: Region is read-only
 *      read-only: 0 <= offset < read_size
 *
 *   3. read_size == 0, write_size != 0: Region is write-only
 *      write-only: 0 <= offset < write_size
 *
 *   4. write_size < read_size: Lower section read/write, upper section read-only
 *      read/write: 0 <= offset < write_size
 *      read-only:  write_size <= offset < read_size
 *
 *   5. read_size < write_size: Lower section read/write, upper section write-only
 *      read/write: 0 <= offset < read_size
 *      write-only: read_size <= offset < write_size
 */
int mec_hal_emi_mem_region_config(struct mec_emi_regs *regs, uint8_t region,
                                  uint32_t mbase, uint32_t rwszs)
{
    const struct mec_emi_info *info = find_emi_info((uintptr_t)regs);
    uint32_t mend, rlim, wlim;

    if (!info || (region >= MEC_EMI_MEM_REGION_NUM) || (mbase < MEC5_CODE_SRAM_BASE)
        || (mbase > (MEC5_DATA_SRAM_BASE + MEC5_DATA_SRAM_SIZE))
        || (mbase & 0x3u) || (rwszs & 0x30003u)) {
        return MEC_RET_ERR_INVAL;
    }

    rlim = rwszs & MEC_EMI_MEMR_CFG_RDSZ_MSK;
    wlim = (rwszs >> MEC_EMI_MEMR_CFG_WRSZ_POS) & MEC_EMI_MEMR_CFG_RDSZ_MSK;
    mend = (rlim > wlim) ? rlim : wlim;
    if ((mbase + mend) > (MEC5_DATA_SRAM_BASE + MEC5_DATA_SRAM_SIZE)) {
        return MEC_RET_ERR_INVAL;
    }

    if (region == MEC_EMI_MEM_REGION_0) {
        regs->MR0L = 0u;
        regs->MR0B = mbase;
        regs->MR0L = rwszs;
    } else {
        regs->MR1L = 0u;
        regs->MR1B = mbase;
        regs->MR1L = rwszs;
    }

    return MEC_RET_OK;
}

/* Write 8-bit value to the Host-to-EC or EC-to-Host mailbox register.
 * Write of 1-bits to Host-to-EC clears the respective bits.
 * A write to EC-to-Host generates an event to the system Host if configured.
 * Events are Serial IRQ or SMI.
 */
int mec_hal_emi_mbox_wr(struct mec_emi_regs *regs, uint8_t host_to_ec, uint8_t val)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (host_to_ec) {
        regs->H2EMB = val;
    } else {
        regs->E2HMB = val;
    }

    return MEC_RET_OK;
}

uint8_t mec_hal_emi_mbox_rd(struct mec_emi_regs *regs, uint8_t host_to_ec)
{
    uint8_t mbox_val;

    if (host_to_ec) {
        mbox_val = regs->H2EMB;
    } else {
        mbox_val = regs->E2HMB;
    }

    return mbox_val;
}

/* Set one software interrupt bit [1:15] which is reflected in the
 * Host visible Interrupt Source LSB and MSB registers.
 */
int mec_hal_emi_swi_set_one(struct mec_emi_regs *regs, uint8_t swi_pos)
{
    if ((!regs) || (swi_pos == 0) || (swi_pos > 15)) {
        return MEC_RET_ERR_INVAL;
    }

    /* read/write-one-to-set register. 0 bits have no effect */
    regs->ISEN = MEC_BIT(swi_pos);

    return MEC_RET_OK;
}

int mec_hal_emi_swi_set(struct mec_emi_regs *regs, uint16_t swi_bit_map)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    /* read/write-one-to-set register. 0 bits have no effect */
    regs->ISEN = swi_bit_map;

    return MEC_RET_OK;
}

/* Specify the bit map of SWI bits the Host can clear via Host Interrupt Source
 * register. By default the Host is unable to clear any SWI bits set by the EC.
 * Allowing the Host to clear SWI interrupt status makes the SWI status bits
 * behave as "edge" status.
 */
int mec_hal_emi_swi_host_clear_enable(struct mec_emi_regs *regs, uint16_t mask, uint16_t enable)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    regs->IHCEN = (regs->IHCEN & ~mask) | (enable & mask);

    return MEC_RET_OK;
}

/* Application ID mechanism
 * EMI hardware implements in incrementing 8-bit Application ID
 * value for software to use as an ownership token. The value 0
 * is not used and signifies all the remaining 255 ApplicationID
 * values (1 - 255) are in use.
 * EMI has two Host facing 8-bit Application ID registers.
 * Host_AppID register.
 *  Read: 0, Indicates AppID has been cleared.
 *  Read: non-zero, AppID value currently owning the EMI HW.
 *  Write: 0 non-effect
 *  Write: non-zero, a write of the current value clears that value.
 *         This is how the Host application clears the AppID it was
 *         granted.
 * Host_AppID_Assign register.
 *  Read: allocates the next AppID value. If 0 was read it indicates
 *        all AppID's are in use. The application should continue polling
 *        this register until it reads a non-zero (valid AppID).
 *        !!! Each read of this register causes the hardware to increment
 *        !!! the AppID value.
 *  Write: Increments AppID value.
 *
 * Usage scenario:
 * Host:
 * 1. AppId = read Host_AppID_Assign register
 * 2. If AppID == 0 goto 1
 * 3. Host makes use of EMI: mailbox and/or access to EMI memory regions.
 * 4. Host write AppID to Host_AppID register to signal it is done.
 *    EMI hardware internally frees the AppID allowing another Host thread
 *    to use the EMI instance.
 *
 */

int mec_hal_emi_is_appid(struct mec_emi_regs *regs, uint8_t appid)
{
    if (!regs) {
        return 0;
    }

    uint8_t idx = (appid >> 5);
    uint8_t pos = (appid & 0x1fu);

    if (regs->AIDS[idx] & MEC_BIT(pos)) {
        return 1;
    }

    return 0;
}

/* Clear specified ApplicationID */
int mec_hal_emi_clear_appid(struct mec_emi_regs *regs, uint8_t appid)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t idx = (appid >> 5);
    uint8_t pos = (appid & 0x1fu);

    regs->AIDS[idx] &= ~MEC_BIT(pos);

    return MEC_RET_OK;
}

int mec_hal_emi_clear_all_appid(struct mec_emi_regs *regs)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    for (int i = 0; i < 8; i++) {
        regs->AIDS[i] = 0u;
    }

    return MEC_RET_OK;
}

/* end mec_emi.c */
