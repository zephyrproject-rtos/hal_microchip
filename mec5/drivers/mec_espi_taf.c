/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_espi_core.h"
#include "mec_espi_taf.h"
#include "mec_qspi_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

/* ---- eSPI Target-Attached-Flash (TAF) ----
 * eSPI target controller responds to flash read/erase/program/rpmc requests
 * from the Host eSPI controller.
 * Version 1.5 TAF hardware supports up to two SPI flash devices.
 * TAF hardware makes use of the QSPI controller for SPI access. When TAF is
 * activated the QSPI controller registers disappear from AHB memory space and
 * are owned by TAF. The Host application must configure the QSPI controller and
 * its pins before TAF is activated.
 */
#define MEC_ESPI_TAF_GIRQ           19
#define MEC_ESPI_TAF_GIRQ_AGGR_NVIC 11
#define MEC_ESPI_TAF_DONE_NVIC      166
#define MEC_ESPI_TAF_ERR_NVIC       167
#define MEC_ESPI_TAF_ECP_GIRQ_POS   9
#define MEC_ESPI_TAF_HWMON_GIRQ_POS 10
#define MEC_ESPI_TAF_DONE_ECIA_INFO \
    MEC5_ECIA_INFO(MEC_ESPI_TAF_GIRQ, MEC_ESPI_TAF_DONE_GIRQ_POS, MEC_ESPI_TAF_GIRQ_AGGR_NVIC,\
                   MEC_ESPI_TAF_DONE_NVIC)
#define MEC_ESPI_TAF_ERR_ECIA_INFO  \
    MEC5_ECIA_INFO(MEC_ESPI_TAF_GIRQ, MEC_ESPI_TAF_ERR_GIRQ_POS, MEC_ESPI_TAF_GIRQ_AGGR_NVIC,\
                   MEC_ESPI_TAF_ERR_NVIC)

/* Flash channel status errors */
#define MEC_ESPI_TAF_ERR_ALL \
  (BIT(MEC_ESPI_TAF_MON_STS_TMOUT_ERR_Pos) | BIT(MEC_ESPI_TAF_MON_STS_OOR_ERR_Pos) \
   | BIT(MEC_ESPI_TAF_MON_STS_ACCV_ERR_Pos) | BIT(MEC_ESPI_TAF_MON_STS_4KB_ERR_Pos) \
   | BIT(MEC_ESPI_TAF_MON_STS_ERSZ_ERR_Pos))


#define MEC_TAF_DFLT_FREQ_HZ 24000000u

/* Protection region register address and limit are in 4KB units */
#define MEC_TAF_PR_UNIT_SHIFT     12
#define MEC_TAF_PR_UNIT_SIZE      0x1000
#define MEC_TAF_PR_UNIT_MASK      0xfffu
#define MEC_TAF_PR_START_LIM_MASK 0xfffffu /* b[19:0] */
#define MEC_TAF_PR_START_DFLT     0x7fffu
#define MEC_TAF_PR_LIMIT_DFLT     0

#ifdef MEC_ESPI_TAF_CHECK_REG_ADDR
static inline bool taf_regs_valid(struct mec_espi_taf_regs *regs)
{
    if (((uintptr_t)regs != (uintptr_t)MEC_ESPI_TAF_BASE)) {
        return false;
    }
    return true;
}
#else
static inline bool taf_regs_valid(struct mec_espi_taf_regs *regs) { return true; }
#endif

static inline uint32_t iflags_to_bitmap(uint32_t flags)
{
    uint32_t bitmap = 0;

    if (flags & MEC_BIT(MEC_ESPI_TAF_INTR_ECP_DONE_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_ECP_GIRQ_POS);
    }
    if (flags & MEC_BIT(MEC_ESPI_TAF_INTR_HWMON_ERR_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_HWMON_GIRQ_POS);
    }
    return bitmap;
}

static bool pr_is_dirty(struct mec_espi_taf_regs *regs, uint8_t pridx)
{
   if (regs->PR_DIRTY & MEC_BIT(pridx)) {
       return true;
    }
    return false;
}

static void taf_disable_clear_intr(struct mec_espi_taf_regs *regs)
{
    uint32_t girq_bm = MEC_BIT(MEC_ESPI_TAF_ECP_GIRQ_POS) | MEC_BIT(MEC_ESPI_TAF_HWMON_GIRQ_POS);
    regs->FC_MISC = 0u;
    regs->ECP_IEN = 0;
    regs->MON_IEN = 0;

    mec_hal_girq_bm_en(MEC_ESPI_TAF_GIRQ, girq_bm, 0);

    regs->ECP_STS = UINT32_MAX;
    regs->MON_STS = UINT32_MAX;
    regs->PR_DIRTY = UINT32_MAX;

    mec_hal_girq_bm_clr_src(MEC_ESPI_TAF_GIRQ, girq_bm);
    NVIC_ClearPendingIRQ(MEC_ESPI_TAF_DONE_NVIC);
    NVIC_ClearPendingIRQ(MEC_ESPI_TAF_ERR_NVIC);
}

/* ---- Public API ---- */

void mec_hal_espi_taf_girq_ctrl(uint8_t enable, uint32_t flags)
{
    uint32_t bitmap = iflags_to_bitmap(flags);

    if (bitmap) {
        mec_hal_girq_bm_en(MEC_ESPI_TAF_GIRQ, bitmap, enable);
    }
}

void mec_hal_espi_taf_girq_status_clr(uint32_t flags)
{
    uint32_t bitmap = iflags_to_bitmap(flags);

    if (bitmap) {
        mec_hal_girq_bm_clr_src(MEC_ESPI_TAF_GIRQ, bitmap);
    }
}

uint32_t mec_hal_espi_taf_girq_status(void)
{
    uint32_t bitmap = 0;
    uint32_t src = mec_hal_girq_source_get(MEC_ESPI_TAF_GIRQ);

    if (src & MEC_BIT(MEC_ESPI_TAF_ECP_GIRQ_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_INTR_ECP_DONE_POS);
    }
    if (src & MEC_BIT(MEC_ESPI_TAF_HWMON_GIRQ_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_INTR_HWMON_ERR_POS);
    }

    return bitmap;
}

uint32_t mec_hal_espi_taf_girq_result(void)
{
    uint32_t bitmap = 0;
    uint32_t src = mec_hal_girq_result_get(MEC_ESPI_TAF_GIRQ);

    if (src & MEC_BIT(MEC_ESPI_TAF_ECP_GIRQ_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_INTR_ECP_DONE_POS);
    }
    if (src & MEC_BIT(MEC_ESPI_TAF_HWMON_GIRQ_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_INTR_HWMON_ERR_POS);
    }

    return bitmap;
}

/* returns 0 if eSPI TAF is not activated meaning QSPI controller is accessible else
 * returns non-zero if eSPI TAF is activated and QSPI is not accessible.
 */
bool mec_hal_espi_taf_is_activated(void)
{
    struct mec_espi_taf_regs *regs = (struct mec_espi_taf_regs *)(MEC_ESPI_TAF_BASE);

    if (regs->FC_MISC & MEC_BIT(MEC_ESPI_TAF_FC_MISC_TAF_EN_Pos)) {
        return true;
    }

    return false;
}

/* Activate eSPI TAF hardware. Once activated the QSPI0 controller used by TAF is no longer
 * accessible.
 */
void mec_hal_espi_taf_activate(uint8_t enable)
{
    struct mec_espi_taf_regs *regs = (struct mec_espi_taf_regs *)(MEC_ESPI_TAF_BASE);

    if (enable) {
        regs->FC_MISC |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_TAF_EN_Pos);
    } else {
        regs->FC_MISC &= (uint32_t)~MEC_BIT(MEC_ESPI_TAF_FC_MISC_TAF_EN_Pos);
    }
}

static void taf_soft_reset(struct mec_espi_taf_regs *regs)
{
    regs->FC_MISC = 0;
    regs->FC_SZ_LIM = 0;
    regs->FC_THR = 0;
    regs->PD_CTRL = 0;
    regs->PUD_TIMEOUT = 0;
    regs->CLKDIV_CS0 = 0;
    regs->CLKDIV_CS1 = 0;
    regs->PR_DIRTY = UINT32_MAX;
    regs->CS0_OP_DESCR = 0;
    regs->CS1_OP_DESCR = 0;
}

static void pr_init(struct mec_espi_taf_regs *regs)
{
    for (int i = 0; i < MEC_ESPI_TAF_PROT_REG_MAX; i++) {
        regs->PR[i].START = MEC_TAF_PR_START_DFLT;
        regs->PR[i].LIMIT = MEC_TAF_PR_START_DFLT;
        regs->PR[i].WRBM = 0;
        regs->PR[i].RDBM = 0;
    }

    regs->PR_DIRTY = UINT32_MAX;
}

int mec_hal_espi_taf_init(struct mec_espi_taf_regs *regs, uint32_t initflags)
{
    struct mec_espi_io_regs *ioregs = (struct mec_espi_io_regs *)(MEC_ESPI_IO_BASE);
    uint8_t capfc = ioregs->CAPFC;

    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_ESPI_TAF);
    if (initflags & MEC_BIT(MEC_ESPI_TAF_INIT_RESET_POS)) {
        mec_hal_pcr_blk_reset(MEC_PCR_ESPI_TAF);
    } else {
        taf_soft_reset(regs);
    }

    taf_disable_clear_intr(regs);

    pr_init(regs);

    if (!(ioregs->CAP0 & MEC_BIT(MEC_ESPI_IO_CAP0_FC_SUPP_Pos))) {
        return MEC_RET_ERR_HW_NOT_SUPP;
    }

    ioregs->TAFEBS = 0u;
    ioregs->RPMC_OP1_CFG = 0u;
    ioregs->RPMC_OP1_NCNTRS = 0u;

    capfc &= (uint8_t)~MEC_ESPI_IO_CAPFC_SHARING_SUPP_Msk;
    if (initflags & MEC_BIT(MEC_ESPI_TAF_CAF_SHARE_POS)) {
        capfc |= (MEC_ESPI_IO_CAPFC_SHARING_SUPP_CAF_TAF << MEC_ESPI_IO_CAPFC_SHARING_SUPP_Pos);
    } else {
        capfc |= (MEC_ESPI_IO_CAPFC_SHARING_SUPP_TAF << MEC_ESPI_IO_CAPFC_SHARING_SUPP_Pos);
    }
    ioregs->CAPFC = capfc;

    return MEC_RET_OK;
}

/* qfreq = MHZ(24)
 * qcpha = 0
 *
 * if cfg freq flag
 *   qfreq = thwcfg->qspi_freq_mhz * MHZ(1)
 * else if qspi enabled
 *   qfreq = read from QSPI
 *
 * if cfg cpha flag
 *   qcpha = thwcfg->qspi_cpha
 * else if qspi enabled
 *   qcpha = read from QSPI
 *
 */
static void taf_qspi_freq_timing(struct mec_qspi_regs *qregs,
                                 const struct espi_taf_hw_cfg *thwcfg)
{
    uint32_t qfreq = MEC_TAF_DFLT_FREQ_HZ;
    uint8_t clk_tap = 0, ctrl_tap = 0;

    if (mec_hal_qspi_is_enabled(qregs)) {
        qfreq = mec_hal_qspi_get_freq(qregs);
    }

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_FREQ_POS)) {
        qfreq = (uint32_t)thwcfg->qspi_freq_mhz * 1000u * 1000u;
    }

    /* save and restore signalling mode, cs timing and timing taps */
    mec_hal_qspi_reset_sr(qregs);
    mec_hal_qspi_set_freq(qregs, qfreq);

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_CPHA_POS)) {
        mec_hal_qspi_sampling_phase_pol(qregs, thwcfg->qspi_cpha);
    }

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_CSTM_POS)) {
        mec_hal_qspi_cs_timing(qregs, thwcfg->qspi_cs_timing);
    }

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_TAPS_POS)) {
        clk_tap = (uint8_t)(thwcfg->qtaps_sel & 0xffu);
        ctrl_tap = (uint8_t)((thwcfg->qtaps_sel >> 8) & 0xffu);
        mec_hal_qspi_tap_select(qregs, clk_tap, ctrl_tap);
    }
}

static void taf_qspi_descr_ldma_init(void)
{
    struct mec_qspi_regs *qregs = (struct mec_qspi_regs *)MEC_QSPI0_BASE;
    uint32_t descr = 0;
    uint8_t chan = 0;

    for (uint32_t i = 0; i < MEC5_QSPI_NUM_DESCRS; i++) {
        descr = qregs->DESCRS[i];
        if (descr == 0) {
            continue;
        }

        chan = (descr & MEC_QSPI_DESCR_RXDMA_Msk) >> MEC_QSPI_DESCR_RXDMA_Pos;
        if ((descr & MEC_BIT(MEC_QSPI_DESCR_RXEN_Pos)) && chan) {
            qregs->LDMA_RXEN |= MEC_BIT(i);
            qregs->RX_LDMA_CHAN[chan - 1u].CTRL = (MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos)
                | MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_RESTART_Pos)
                | (MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos));
        }
    }

    /* Corner case: Flash data write. All descriptors have been used up for Data Read,
     * CM entry/exit, and status polling. TAF HW engine uses QSPI.Control with TX LDMA Channnel 0
     * for flash write. We must program TX LDMA Channel 0 Control register. NOTE: do not set
     * LDMA_TXEN for channel 0 since it is not being used by a descriptor.
     */
    qregs->TX_LDMA_CHAN[0].CTRL = (MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_EN_Pos)
        | MEC_BIT(MEC_QSPI_LDMA_CHAN_CTRL_RESTART_Pos)
        | (MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_4B << MEC_QSPI_LDMA_CHAN_CTRL_ACCSZ_Pos));
}

/* QSPI nWP(IO2) and nHOLD(IO3) values keep high and disable drive(output enable) */
#define TAF_QSPI_IFC_VAL \
    (MEC_BIT(MEC_QSPI_IFC_WP_VAL_POS) | MEC_BIT(MEC_QSPI_IFC_HOLD_VAL_POS))

#define TAF_QSPI_IFC_MSK \
    (MEC_BIT(MEC_QSPI_IFC_WP_VAL_POS) | MEC_BIT(MEC_QSPI_IFC_WP_DRIVE_POS) |\
     MEC_BIT(MEC_QSPI_IFC_HOLD_VAL_POS) | MEC_BIT(MEC_QSPI_IFC_HOLD_DRIVE_POS))

/* Initialize QSPI register for use by TAF controller.
 * Once TAF is activate hardware hides the QSPI controller registers from
 * access by the ARM Cortex-M4. Only the TAF HW block can access the QSPI registers.
 * We configure QSPI based on the configuration passed by the application and requirements
 * in the MCHP eSPI block specification.
 */
int mec_hal_espi_taf_qspi_init(struct mec_espi_taf_regs *tregs,
                               const struct espi_taf_hw_cfg *hcfg,
                               const struct espi_taf_flash_cfg *fcfgs, uint8_t nflash_cfgs)
{
    struct mec_qspi_regs *qregs = (struct mec_qspi_regs *)MEC_QSPI0_BASE;
    int ret = 0;
    uint32_t flags = 0;
    uint32_t qfdiv = 0;

    if (!taf_regs_valid(tregs) || !hcfg || !fcfgs || !nflash_cfgs) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_qspi_girq_ctrl(qregs, 0);
    mec_hal_qspi_girq_clr(qregs);
    mec_hal_qspi_ifc(qregs, TAF_QSPI_IFC_VAL, TAF_QSPI_IFC_MSK);

    taf_qspi_freq_timing(qregs, hcfg);

    /* copy raw QSPI frequency divider field into TAF CS0/CS1 freq divider regs */
    qfdiv = mec_hal_qspi_freq_div_raw(qregs);
    qfdiv = qfdiv | (qfdiv << 16);
    tregs->CLKDIV_CS0 = qfdiv;
    tregs->CLKDIV_CS1 = qfdiv;

    ret = mec_hal_qspi_load_descrs_at(qregs, hcfg->qspi_descrs, 16u, 0);
    if (ret) {
        return ret;
    }

    /* scan descriptors for Local-DMA enables and set Local-DMA descriptor enable
     * bit map registers and individual channel enables.
     */
    taf_qspi_descr_ldma_init();

    mec_hal_qspi_intr_ctrl_msk(qregs, 1, MEC_QSPI_IEN_XFR_DONE);
    flags = MEC_BIT(MEC_QSPI_OPT_ACTV_EN_POS) | MEC_BIT(MEC_QSPI_OPT_TAF_DMA_EN_POS)
            | MEC_BIT(MEC_QSPI_OPT_RX_LDMA_EN_POS) | MEC_BIT(MEC_QSPI_OPT_TX_LDMA_EN_POS);
    mec_hal_qspi_options(qregs, 1, flags);

    return MEC_RET_OK;
}

/* Program TAF total flash array size and boundary.
 * Hardware requires total flash array size to be expressed as a limit, the address
 * of the last byte in the flash array. The limit register is 32-bit and requires the
 * lower 12 bits to be all 1 to match PCH descriptor mode.
 * The boundary between the two flash devices is expressed as the address of the first
 * byte of the second flash device programmed to the flash configuration threshold register.
 * If only one flash device is present program threshold to a value greater than the size
 * limit register.
 * For the case of one flash device address aliasing can be enabled as follows.
 * One flash on chip select 0, aliased over the full 32-bit address range:
 *  Size limit = 0xffff_ffff and threshold = 0xffff_ffff
 * One flash on chip select 1, aliased to multiple ranges in the 32-bit address space:
 *  Size limit = 0xffff_ffff and threshold = 0x0000_0000.
 */

#define MEC_ESPI_TAF_FSZ_ALIAS_EN_POS 0

static int mec_hal_espi_taf_flash_sizes_set(struct mec_espi_taf_regs *regs,
                                            uint32_t flash0_sz, uint32_t flash1_sz,
                                            uint32_t flags)
{
    uint64_t total_sz = flash0_sz + flash1_sz;
    uint32_t total_msk = 0;

    if (!regs || !total_sz || (total_sz > 0x100000000ULL)) {
        return MEC_RET_ERR_INVAL;
    }

    total_msk = (uint32_t)(--total_sz & 0xffffffffu);
    total_msk |= 0xfffu; /* HW requires b[11:0] are all 1 (4KB) */
    regs->FC_SZ_LIM = total_msk;
    /* threshold is offset of the first byte in the second flash device.
     * It is equal to the size of the first device. HW requires 4KB alignment.
     */
    regs->FC_THR = flash0_sz & 0xfffff000u;

    if ((flash0_sz == 0) || (flash1_sz == 0)) { /* only one flash device? */
        if (flags & MEC_BIT(MEC_ESPI_TAF_FSZ_ALIAS_EN_POS)) { /* allow aliasing? */
            if (flash0_sz) {
                regs->FC_SZ_LIM = UINT32_MAX;
                regs->FC_THR = UINT32_MAX;
            } else {
                regs->FC_SZ_LIM = UINT32_MAX;
                regs->FC_THR = 0u;
            }
        }
    }

    return MEC_RET_OK;
}

static int mec_hal_espi_taf_cfg_freq(struct mec_espi_taf_regs *regs,
                                     const struct espi_taf_hw_cfg *hcfg,
                                     const struct espi_taf_flash_cfg *fcfg,
                                     uint8_t cs)
{
    struct mec_qspi_regs *qregs = (struct mec_qspi_regs *)MEC_QSPI0_BASE;
    uint32_t qspi_freq_hz = 0, qspi_fdiv = 0, qspi_rd_fdiv = 0, tclkdiv = 0;

    if (!regs || !hcfg || !fcfg) {
        return MEC_RET_ERR_INVAL;
    }

    qspi_freq_hz = hcfg->qspi_freq_mhz * 1000000U;
    if (qspi_freq_hz) {
        qspi_fdiv = mec_hal_qspi_compute_freq_div(qspi_freq_hz);
    } else { /* get clock divider from QSPI */
        qspi_fdiv = mec_hal_qspi_freq_div(qregs);
    }
    qspi_rd_fdiv = qspi_fdiv;

    if (fcfg->freq_mhz) {
        qspi_freq_hz = fcfg->freq_mhz * 1000000U;
        qspi_fdiv = mec_hal_qspi_compute_freq_div(qspi_freq_hz);
    }

    if (fcfg->rd_freq_mhz) {
        qspi_freq_hz = fcfg->rd_freq_mhz * 1000000U;
        qspi_rd_fdiv = mec_hal_qspi_compute_freq_div(qspi_freq_hz);
    }

    tclkdiv = ((qspi_fdiv & 0xffffu) << 16) | (qspi_rd_fdiv & 0xffffu);
    if (cs == 0) {
        regs->CLKDIV_CS0 = tclkdiv;
    } else {
        regs->CLKDIV_CS1 = tclkdiv;
    }

    return MEC_RET_OK;
}

static int taf_config_activity_couter(struct mec_espi_taf_regs *regs,
                                      const struct espi_taf_hw_cfg *hcfg)
{
    uint32_t misc_cfg = 0, msk = 0;

    if (!regs || !hcfg) {
        return MEC_RET_ERR_INVAL;
    }

    regs->ACT_CNT_RLOAD = hcfg->flash_pd_timeout;
    regs->PUD_TIMEOUT = hcfg->flash_pd_min_interval;

    msk = MEC_BIT(MEC_ESPI_TAF_FC_MISC_RLD_SAC_EC0_Pos)
        | MEC_BIT(MEC_ESPI_TAF_FC_MISC_RLD_SAC_ESPI_Pos)
        | MEC_BIT(MEC_ESPI_TAF_FC_MISC_LPF_SAC_Pos);

    if (hcfg->flash_pd_timeout) {
        if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_AC_RELOAD_ON_EC_POS)) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_RLD_SAC_EC0_Pos);
        }
        if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_AC_RELOAD_ON_HOST_POS)) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_RLD_SAC_ESPI_Pos);
        }
        if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_AC_SLEEP_EN_POS)) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_LPF_SAC_Pos);
        }
    }

    regs->FC_MISC = (regs->FC_MISC & (uint32_t)~msk) | (misc_cfg & msk);

    return MEC_RET_OK;
}

static void taf_flash_power_down_config(struct mec_espi_taf_regs *regs, uint8_t cs,
                                        const struct espi_taf_flash_cfg *fcfg)
{
    uint32_t msk = 0, val = 0;

#ifdef MEC5_ESPI_HW_VER_15
    if (fcfg->flags & MCHP_FLASH_FLAG_RPMC_SR_DIS) {
        if (cs == 0) {
            msk = MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_RPMC_SUSM_Pos);
            val = MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_RPMC_SUSM_Pos);
        } else {
            msk = MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_RPMC_SUSM_Pos);
            val = MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_RPMC_SUSM_Pos);
        }
    }

    regs->FC_MISC = (regs->FC_MISC & (uint32_t)~msk) | (val & msk);
#endif

    msk = 0u;
    val = 0u;
    if (cs == 0) {
        msk = MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS0_PD_EN_Pos)
            | MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS0_WAKE_EN_Pos);
        if (fcfg->flags & MCHP_FLASH_FLAG_PD_EN) {
            val |= MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS0_PD_EN_Pos);
        }
        if (fcfg->flags & MCHP_FLASH_FLAG_PD_EC_WK_EN) {
            val |= MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS0_WAKE_EN_Pos);
        }
    } else {
        msk = MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS1_PD_EN_Pos)
            | MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS1_WAKE_EN_Pos);
        if (fcfg->flags & MCHP_FLASH_FLAG_PD_EN) {
            val |= MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS1_PD_EN_Pos);
        }
        if (fcfg->flags & MCHP_FLASH_FLAG_PD_EC_WK_EN) {
            val |= MEC_BIT(MEC_ESPI_TAF_PD_CTRL_CS1_WAKE_EN_Pos);
        }
    }

    regs->PD_CTRL = (regs->PD_CTRL & (uint32_t)~msk) | (val & msk);
}

int mec_hal_espi_taf_flash_rpmc_op1_config(struct mec_espi_taf_regs *regs,
                                           const struct espi_taf_hw_cfg *hcfg,
                                           const struct espi_taf_flash_cfg *fcfg,
                                           uint8_t nflashes)
{
#ifdef MEC5_ESPI_HW_VER_15
    struct mec_espi_io_regs *ioregs = (struct mec_espi_io_regs *)MEC_ESPI_IO_BASE;
    uint32_t nc = 0, total_nc = 0, nrpmc = 0, op1_dcfg = 0, op1_nc = 0, op1_opcode = 0;

    /* disable RPMC */
    ioregs->RPMC_OP1_CFG = 0u;
    ioregs->RPMC_OP1_NCNTRS = 0u;

    regs->RPMC_OP2_HOST_RESULT = MEC_ESPI_TAF_RPMC_OP2_HOST_MEM_BASE;
    regs->RPMC_OP2_EC0_RESULT =MEC_ESPI_TAF_RPMC_OP2_ECP_MEM_BASE;

    for (uint8_t n = 0; n < nflashes; n++) {
        const struct espi_taf_flash_cfg *f = &fcfg[n];

        if (!fcfg->rpmc_info) {
            continue;
        }

        op1_opcode = ((fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_OPCODE_MSK) >>
                      MCHP_FLASH_RPMC_OP1_OPCODE_POS);
        nc = (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_NCTR_MSK) >> MCHP_FLASH_RPMC_OP1_NCTR_POS;

        if (!op1_opcode || !nc) {
            return MEC_RET_ERR_INVAL;
        }

        total_nc += nc;
        nrpmc++;

        if (f->cs == 0) {
            op1_nc |= ((nc & 0x1fu) << 8);
            op1_nc |= (op1_opcode & 0xffu);
            if (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS0_040) {
                op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_CS0_040_Pos);
            }
            if (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS0_848) {
                op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_CS0_848_Pos);
            }
            if (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS0_PNP) {
                op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_CS0_PNP_Pos);
            }
        } else {
            op1_nc |= ((nc & 0x1fu) << 24);
            op1_nc |= ((op1_opcode & 0xffu) << 16);
            if (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS1_048) {
                op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_CS1_048_Pos);
            }
            if (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS1_848) {
                op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_CS1_848_Pos);
            }
            if (fcfg->rpmc_info & MCHP_FLASH_RPMC_OP1_FLAG_DISP_CS1_PNP) {
                op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_CS1_PNP_Pos);
            }
        }
    }

    if (!total_nc) { /* no counters do nothing */
        return MEC_RET_OK;
    }

    /* total number of counters for all RPMC flash devices */
    op1_dcfg |= ((total_nc << MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_Pos)
                 & MEC_ESPI_IO_RPMC_OP1_CFG_TOTAL_NCNTR_Msk);

    /* encoded number of RPMC flash devices: 0=1, 1=2, 2,3=rsvd */
    if (nrpmc == 2u) {
        op1_dcfg |= (1u << MEC_ESPI_IO_RPMC_OP1_CFG_NUM_RPMC_DEV_Pos);
    }

    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_RPMC_STRICT_CYCLE_TYPE_POS)) {
        op1_dcfg |= MEC_BIT(MEC_ESPI_IO_RPMC_OP1_CFG_STRICT_RCT_Pos);
    }

    ioregs->RPMC_OP1_CFG = op1_dcfg;
    ioregs->RPMC_OP1_NCNTRS = op1_nc;

    return MEC_RET_OK;
#else /* HW version 1.4 */
    return MEC_RET_ERR_HW_NOT_SUPP;
#endif
}

static void taf_flash_opcode_config(struct mec_espi_taf_regs *regs, uint8_t cs,
                                    const struct espi_taf_flash_cfg *fcfg)
{
    if (cs == 0) {
        regs->CS0_OPA = fcfg->opa;
        regs->CS0_OPB = fcfg->opb;
        regs->CS0_OPC = fcfg->opc;
        regs->CS0_OPD = fcfg->opd;
    } else {
        regs->CS1_OPA = fcfg->opa;
        regs->CS1_OPB = fcfg->opb;
        regs->CS1_OPC = fcfg->opc;
        regs->CS1_OPD = fcfg->opd;
    }
}

static uint8_t taf_flash_erase_size_bitmap(struct mec_espi_taf_regs *regs,
                                           const struct espi_taf_flash_cfg *fcfg)
{
    uint8_t erase_bitmap = 0u;
    (void)regs;

    if (fcfg->opb & 0xffu) { /* bits[7:0] = 4KB erase opcode */
        erase_bitmap |= MEC_BIT(MEC_ESPI_IO_TAFEBS_4KB_Pos);
    }
    if (fcfg->opb & 0xff00u) { /* bits[15:0] = 32KB erase opcode */
        erase_bitmap |= MEC_BIT(MEC_ESPI_IO_TAFEBS_32KB_Pos);
    }
    if (fcfg->opb & 0xff0000u) { /* bits[23:16] = 64KB erase opcode */
        erase_bitmap |= MEC_BIT(MEC_ESPI_IO_TAFEBS_64KB_Pos);
    }

    return erase_bitmap;
}

static void taf_flash_cm_prefix(struct mec_espi_taf_regs *regs, uint8_t cs, uint16_t cm_prefix)
{
    uint32_t cmpfx = cm_prefix;
    uint32_t msk = 0xffffu;

    if (cs) {
        cmpfx <<= 16u;
        msk <<= 16u;
    }

    regs->FC_CM_PREFIX = (regs->FC_CM_PREFIX & (uint32_t)~msk) | cmpfx;
}

static void taf_flash_poll2_mask(struct mec_espi_taf_regs *regs, uint8_t cs, uint16_t poll2_mask)
{
    uint32_t p2msk = poll2_mask;
    uint32_t regmsk = 0xffffu;

    if (cs) {
        p2msk <<= 16;
        regmsk <<= 16;
    }

    regs->POLL2_MSKS = (regs->POLL2_MSKS & (uint32_t)~regmsk) | p2msk;
}

static void taf_flash_descr_ids(struct mec_espi_taf_regs *regs, uint8_t cs, uint32_t descr_idx)
{
    if (cs) {
        regs->CS1_OP_DESCR = descr_idx;
    } else {
        regs->CS0_OP_DESCR = descr_idx;
    }
}

int mec_hal_espi_flash_config(struct mec_espi_taf_regs *regs,
                              const struct espi_taf_hw_cfg *hcfg,
                              const struct espi_taf_flash_cfg *fcfg)
{
    uint32_t descr_ids = 0, misc_cfg = 0, msk = 0;
    int ret = 0;

    if (!regs || !hcfg || !fcfg) {
        return MEC_RET_ERR_INVAL;
    }

    ret = mec_hal_espi_taf_cfg_freq(regs, hcfg, fcfg, fcfg->cs);
    if (ret) {
        return ret;
    }

    msk = (MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_4B_ADDR_MODE_Pos)
           | MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_CONT_PREFIX_Pos));

    if (fcfg->cs) {
        msk = (MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_4B_ADDR_MODE_Pos)
                | MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_CONT_PREFIX_Pos));
    }

    if (fcfg->flags & MCHP_FLASH_FLAG_ADDR32) {
        if (fcfg->cs == 0) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_4B_ADDR_MODE_Pos);
        } else {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_4B_ADDR_MODE_Pos);
        }
    }

    if (fcfg->flags & MCHP_FLASH_FLAG_CS_CONT_PRFX_EN) {
        if (fcfg->cs == 0) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_CONT_PREFIX_Pos);
        } else {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_CONT_PREFIX_Pos);
        }
    }

    regs->FC_MISC = (regs->FC_MISC & (uint32_t)~msk) | (misc_cfg & msk);

    descr_ids = hcfg->cs0_descr_ids;
    if (fcfg->cs) {
        descr_ids = hcfg->cs1_descr_ids;
    }

    taf_flash_descr_ids(regs, fcfg->cs, descr_ids);
    taf_flash_poll2_mask(regs, fcfg->cs, fcfg->poll2_mask);
    taf_flash_cm_prefix(regs, fcfg->cs, fcfg->cont_prefix);
    taf_flash_opcode_config(regs, fcfg->cs, fcfg);
    taf_flash_power_down_config(regs, fcfg->cs, fcfg);

    return MEC_RET_OK;
}

static int mec_hal_espi_flash_cfg2(struct mec_espi_taf_regs *regs,
                                   const struct espi_taf_hw_cfg *hcfg,
                                   const struct espi_taf_flash_cfg *fcfg,
                                   uint8_t cs)
{
    uint32_t descr_ids = 0, misc_cfg = 0, msk = 0;
    int ret = mec_hal_espi_taf_cfg_freq(regs, hcfg, fcfg, cs);
    if (ret) {
        return ret;
    }

    msk = (MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_4B_ADDR_MODE_Pos)
           | MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_CONT_PREFIX_Pos));

    if (cs) {
        msk = (MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_4B_ADDR_MODE_Pos)
                | MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_CONT_PREFIX_Pos));
    }

    if (fcfg->flags & MCHP_FLASH_FLAG_ADDR32) {
        if (cs == 0) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_4B_ADDR_MODE_Pos);
        } else {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_4B_ADDR_MODE_Pos);
        }
    }

    if (fcfg->flags & MCHP_FLASH_FLAG_CS_CONT_PRFX_EN) {
        if (cs == 0) {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS0_CONT_PREFIX_Pos);
        } else {
            misc_cfg |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_CS1_CONT_PREFIX_Pos);
        }
    }

    regs->FC_MISC = (regs->FC_MISC & (uint32_t)~msk) | (misc_cfg & msk);

    descr_ids = hcfg->cs0_descr_ids;
    if (cs) {
        descr_ids = hcfg->cs1_descr_ids;
    }

    taf_flash_descr_ids(regs, cs, descr_ids);
    taf_flash_poll2_mask(regs, cs, fcfg->poll2_mask);
    taf_flash_cm_prefix(regs, cs, fcfg->cont_prefix);
    taf_flash_opcode_config(regs, cs, fcfg);
    taf_flash_power_down_config(regs, cs, fcfg);

    return MEC_RET_OK;
}

/* Configure TAF protection region 0 allowing access to whole flash
 * array for EC and all host entities. Do not lock the PR's so the
 * EC application can update the PR's using the TAF API.
 * NOTE: PR's require 4KB alignment of location and the size must be a multiple of 4KB.
 * The special case of a single flash with aliasing enabled has FC_SZ_LIM register
 * value of 0xffff_ffff.
 */
static int config_default_pr(struct mec_espi_taf_regs *regs)
{
    int ret = 0;
    struct espi_taf_pr pr = {0};

    pr.start = 0u;
    pr.size = regs->FC_SZ_LIM;
    pr.req_bm_we = MCHP_TAG_REQ_FROM_ALL;
    pr.req_bm_rd = MCHP_TAG_REQ_FROM_ALL;
    pr.pr_num = 0;
    pr.flags = MCHP_TAF_PR_FLAG_ENABLE;

    if (pr.size) {
        pr.size++;
    } else {
        pr.size = UINT32_MAX;
    }

    /* works for start == 0 and size == 0xffff_ffff because the value is
     * shifted right by 12 (aligned on 4KB).
     */
    ret = mec_hal_espi_taf_pr_set(regs, &pr);

    return ret;
}

/* Configure TAF controller.
 * NOTE: if only one flash device is specified we must clone its settings
 * into the other chip select register fields.
 */
int mec_hal_espi_taf_config(struct mec_espi_taf_regs *regs,
                            const struct espi_taf_hw_cfg *hcfg,
                            const struct espi_taf_flash_cfg *fcfgs, uint8_t nflashes)
{
    struct mec_espi_io_regs *ioregs = (struct mec_espi_io_regs *)MEC_ESPI_IO_BASE;
    struct espi_taf_flash_cfg const *f = NULL;
    uint32_t flash0_sz = 0, flash1_sz = 0, flags = 0, msk = 0, rval = 0;
    int ret = 0;
    uint8_t cs = 0;
    uint8_t flash_exist_bm = 0u;
    uint8_t erase_size_bm = 0xffu;

    if (!regs || !hcfg || !fcfgs || !nflashes || (nflashes > 2u)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->GEN_DESCR = hcfg->gen_descr_ids;

    for (uint8_t n = 0; n < 2u; n++) {
        if (n < nflashes) {
            f = &fcfgs[n];
            cs = (f->cs) ? 1 : 0;
            flash_exist_bm |= MEC_BIT(cs);
            if (cs == 0) {
                flash0_sz = f->flashsz;
            } else {
                flash1_sz = f->flashsz;
            }
            erase_size_bm &= taf_flash_erase_size_bitmap(regs, f);
        } else {
            cs = (cs ^ 1u) & 1u;
        }

        mec_hal_espi_flash_cfg2(regs, hcfg, f, cs);
    }

    ioregs->TAFEBS = erase_size_bm;

    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_FLASH_4KB_ALIGN_POS)) {
        flags |= MEC_BIT(MEC_ESPI_TAF_FSZ_ALIAS_EN_POS);
    }

    ret = mec_hal_espi_taf_flash_sizes_set(regs, flash0_sz, flash1_sz, flags);
    if (ret) {
        return ret;
    }

    taf_config_activity_couter(regs, hcfg);

    rval = MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_DEFAULT;
#ifdef MEC5_ESPI_HW_VER_15
    msk = MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_Msk | MEC_ESPI_TAF_FC_MISC_FORCE_RPMC_SUCC_Msk
        | MEC_ESPI_TAF_FC_MISC_LPF_HSLP_Msk | MEC_ESPI_TAF_FC_MISC_LPF_LSLP_Msk;
#else
    msk = MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_Msk | MEC_ESPI_TAF_FC_MISC_LPF_HSLP_Msk
        | MEC_ESPI_TAF_FC_MISC_LPF_LSLP_Msk;
#endif

    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_PFEXP_POS)) {
        rval = MEC_ESPI_TAF_FC_MISC_PREFETCH_MODE_EXPEDITED;
    }

#ifdef MEC5_ESPI_HW_VER_15
    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_FORCE_RPMC_OP1_POS)) {
        rval |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_FORCE_RPMC_SUCC_Pos);
    }
#endif

    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_FL_DEEP_SLEEP_EN_POS)) {
        rval |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_LPF_HSLP_Pos);
    }
    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_FL_LIGHT_SLEEP_EN_POS)) {
        rval |= MEC_BIT(MEC_ESPI_TAF_FC_MISC_LPF_LSLP_Pos);
    }

    regs->FC_MISC = (regs->FC_MISC & (uint32_t)~msk) | rval;

    if (hcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_PFEN_POS)) {
        /* comms register */
        MEC_ESPI_TAF_COMM->COMM_MODE |= MEC_BIT(MEC_ESPI_TAF_COMM_COMM_MODE_PREFETCH_EN_Pos);
    } else {
        MEC_ESPI_TAF_COMM->COMM_MODE &=
            (uint32_t)~MEC_BIT(MEC_ESPI_TAF_COMM_COMM_MODE_PREFETCH_EN_Pos);
    }

    /* TAF protection regions */
    pr_init(regs);
    ret = mec_hal_espi_taf_pr_tag_maps_load(regs, hcfg->tag_map, 0x7u);
    if (ret) {
        return ret;
    }

    /* configure PR0 to allow EC access to whole flash array */
    ret = config_default_pr(regs);

    return ret;
}

/*
 * HW poll_timeout is in 32KHz units (30.5 us)
 * HW poll_interval is in 48MHz units (20.8 ns)
 */
int mec_hal_espi_taf_poll_timing(struct mec_espi_taf_regs *regs, uint32_t poll_timeout_us,
                                 uint32_t poll_interval_ns)
{
    uint32_t temp = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    temp = 2u * (poll_timeout_us / 61u);
    if (temp > 0x3ffffu) {
        temp = 0x3ffffu;
    }

    regs->POLL_TIMEOUT = (regs->POLL_TIMEOUT & (uint32_t)~0xffffu) | (temp & 0xffffu);

    temp = 10u * (poll_interval_ns / 208u);
    if (temp > 0xffffu) {
        temp = 0xffffu;
    }

    regs->POLL_INTERVAL = (regs->POLL_INTERVAL & (uint32_t)~MEC_ESPI_TAF_POLL_TIMEOUT_VAL_Msk)
        | (temp & MEC_ESPI_TAF_POLL_TIMEOUT_VAL_Msk);

    return MEC_RET_OK;
}

int mec_hal_espi_taf_read_timeout(struct mec_espi_taf_regs *regs, uint32_t timeout_ns)
{
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t temp = 10u * (timeout_ns / 208u);

    if (temp > 0xfffffu) {
        temp = 0xfffffu;
    }

    regs->CRD_TIMEOUT = (regs->CRD_TIMEOUT & (uint32_t)~0xfffffu) | temp;

    return MEC_RET_OK;
}

int mec_hal_espi_taf_sus_timeout(struct mec_espi_taf_regs *regs, uint32_t sus_rsm_ival_us,
                                 uint32_t sus_chk_delay_ns)
{
    uint32_t temp = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    temp = (2u * sus_rsm_ival_us) / 61u;
    if (temp > 0xffffu) {
        temp = 0xffffu;
    }

    regs->SR_INTERVAL = (regs->SR_INTERVAL & (uint32_t)~0xffffu) | temp;

    temp = (10u * sus_chk_delay_ns) / 208u;
    if (temp > 0x3fffffu) {
        temp = 0x3fffffu;
    }

    regs->SUS_CHK_DLY = (regs->SUS_CHK_DLY & (uint32_t)~0x3fffffu) | temp;

    return MEC_RET_OK;
}

int mec_hal_espi_taf_pr_tag_map_get(struct mec_espi_taf_regs *regs,
                                    uint8_t *tag_map, uint8_t pr_idx)
{
    uint32_t r = 0;

    if (!regs || !tag_map || (pr_idx >= MEC_TAF_PR_IDX_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (pr_idx < MEC_TAF_PR8_IDX) {
        r = regs->TAG_MAP0;
    } else if (pr_idx < MEC_TAF_PREC_IDX) {
        r = regs->TAG_MAP1;
        pr_idx -= MEC_TAF_PR8_IDX;
    } else {
        r = regs->TAG_MAP2;
        pr_idx -= MEC_TAF_PREC_IDX;
    }

    *tag_map = (uint8_t)((r >> (pr_idx * 4u)) & 0x7u);

    return MEC_RET_OK;
}

int mec_hal_espi_taf_set_erase_block_sizes(uint8_t size_bitmap)
{
    struct mec_espi_io_regs *iobase = (struct mec_espi_io_regs *)MEC_ESPI_IO_BASE;

    iobase->TAFEBS = size_bitmap;

    return MEC_RET_OK;
}

int mec_hal_espi_taf_tag_map_set(struct mec_espi_taf_regs *regs,
                                 uint8_t tag_map, uint8_t pr_idx)
{
    uint32_t r = 0, bitpos = 0;

    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }

    if (regs->TAG_MAP2 & MEC_BIT(MEC_ESPI_TAF_TAG_MAP2_LOCK_Pos)) {
        return MEC_RET_ERR_HW;
    }

    if (pr_idx < MEC_TAF_PR8_IDX) {
        r = regs->TAG_MAP0;
        bitpos = pr_idx * 4u;
        r &= ((uint32_t)~(0x7u << bitpos));
        r |= ((uint32_t)(tag_map & 0x7u) << bitpos);
        regs->TAG_MAP0 = r;
    } else if (pr_idx < MEC_TAF_PREC_IDX) {
        r = regs->TAG_MAP1;
        bitpos = (pr_idx - MEC_TAF_PR8_IDX) * 4u;
        r &= ((uint32_t)~(0x7u << bitpos));
        r |= ((uint32_t)(tag_map & 0x7u) << bitpos);
        regs->TAG_MAP1 = r;
    } else {
        r = regs->TAG_MAP2;
        bitpos = (pr_idx - MEC_TAF_PREC_IDX) * 4u;
        r &= ((uint32_t)~(0x7u << bitpos));
        r |= ((uint32_t)(tag_map & 0x7u) << bitpos);
        regs->TAG_MAP2 = r;
    }

    return MEC_RET_OK;
}

int mec_hal_espi_taf_pr_tag_maps_load(struct mec_espi_taf_regs *regs,
                                      const uint32_t *tag_maps, uint8_t bitmap)
{
    if (!regs || !tag_maps) {
        return MEC_RET_ERR_INVAL;
    }

    if (bitmap & MEC_BIT(0)) {
        regs->TAG_MAP0 = tag_maps[0];
    }
    if (bitmap & MEC_BIT(1)) {
        regs->TAG_MAP1 = tag_maps[1];
    }
    if (bitmap & MEC_BIT(2)) {
        regs->TAG_MAP1 = tag_maps[2];
    }

    return MEC_RET_OK;
}

bool mec_hal_espi_taf_pr_is_dirty(struct mec_espi_taf_regs *regs, uint8_t pr_idx)
{
    if (!taf_regs_valid(regs) || (pr_idx >= MEC_ESPI_TAF_PROT_REG_MAX)) {
        return false;
    }

    return pr_is_dirty(regs, pr_idx);
}

int mec_hal_espi_taf_pr_dirty_clr(struct mec_espi_taf_regs *regs, uint8_t pr_idx)
{
    if (!taf_regs_valid(regs) || (pr_idx >= MEC_ESPI_TAF_PROT_REG_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PR_DIRTY = MEC_BIT(pr_idx);

    return MEC_RET_OK;
}


int mec_hal_espi_taf_pr_dirty_clr_mask(struct mec_espi_taf_regs *regs, uint32_t mask)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PR_DIRTY = mask;

    return MEC_RET_OK;
}

uint32_t mec_hal_espi_taf_pr_lock_get(struct mec_espi_taf_regs *regs)
{
    if (!taf_regs_valid(regs)) {
        return 0;
    }

    return regs->PR_LOCK;
}

/* TAF protection region lock bits are read/write-once.
 * Lock bits are only cleared on RESET_SYS therefore we aren't required
 * to perform a read-modify-write.
 */
int mec_hal_espi_taf_pr_lock(struct mec_espi_taf_regs *regs, uint32_t lockmap)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PR_LOCK = lockmap;

    return MEC_RET_OK;
}

/* TAF has 17 protection regions:
 * Each region must be aligned on >= 4KB boundary.
 * Region size must be a multiple of 4KB.
 * Read and write permissions for each of eight requester IDs.
 * If protection region is to be enabled program registers if start
 * is aligned >= 4KB and size is a multiple of 4KB.
 * If PR not enabled program with disable defaults.
 *
 */
int mec_hal_espi_taf_pr_set(struct mec_espi_taf_regs *regs, const struct espi_taf_pr *pr)
{
    if (!taf_regs_valid(regs) || !pr || (pr->pr_num >= MEC_ESPI_TAF_PROT_REG_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!MEC_IS_PTR_ALIGNED4K(pr->start) || !MEC_IS_PTR_ALIGNED4K(pr->size)) {
        return MEC_RET_ERR_DATA_ALIGN;
    }

    volatile struct mec_espi_taf_pr_regs *pregs = &regs->PR[pr->pr_num];

    if (pr->flags & MCHP_TAF_PR_FLAG_ENABLE) {
        pregs->START =  (pr->start >> MEC_TAF_PR_UNIT_SHIFT) & MEC_TAF_PR_START_LIM_MASK;
        pregs->LIMIT = (((pr->start + pr->size - 1u) >> MEC_TAF_PR_UNIT_SHIFT)
                    & MEC_TAF_PR_START_LIM_MASK);
        pregs->WRBM = pr->req_bm_we;
        pregs->RDBM = pr->req_bm_rd;

        regs->PR_DIRTY = MEC_BIT(pr->pr_num);

        if (pr->flags & MCHP_TAF_PR_FLAG_LOCK) {
            regs->PR_LOCK |= MEC_BIT(pr->pr_num);
        }
    } else {
        pregs->START = MEC_TAF_PR_START_DFLT;
        pregs->LIMIT = MEC_TAF_PR_LIMIT_DFLT;
        pregs->WRBM = 0;
        pregs->RDBM = 0;
        regs->PR_DIRTY = MEC_BIT(pr->pr_num);
    }

    return MEC_RET_OK;
}

/* TAF EC Portal */
int mec_hal_espi_taf_ecp_ictrl(struct mec_espi_taf_regs *regs, uint8_t enable)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        regs->ECP_IEN = MEC_BIT(MEC_ESPI_TAF_ECP_IEN_DONE_Pos);
    } else {
        regs->ECP_IEN = 0u;
    }

    return MEC_RET_OK;
}

int mec_hal_espi_taf_ecp_istatus(struct mec_espi_taf_regs *regs, uint32_t *istatus)
{
    if (!taf_regs_valid(regs) || !istatus) {
        return MEC_RET_ERR_INVAL;
    }

    *istatus = regs->ECP_STS;

    return MEC_RET_OK;
}

int mec_hal_espi_taf_ecp_istatus_clr(struct mec_espi_taf_regs *regs, uint32_t istatus)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->ECP_STS = istatus;

    return MEC_RET_OK;
}

bool mec_hal_espi_taf_ecp_busy(struct mec_espi_taf_regs *regs)
{
    if (!taf_regs_valid(regs)) {
        return false;
    }

    if (regs->ECP_BUSY_STS) {
        return true;
    }

    return false;
}

static void start_ecp(struct mec_espi_taf_regs *regs, uint32_t flags)
{
    regs->ECP_IEN = 0u;
    regs->ECP_STS = UINT32_MAX;

    if (flags & MEC_BIT(MEC_ESPI_TAF_ECP_CMD_FLAG_IEN_POS)) {
        regs->ECP_IEN = MEC_BIT(MEC_ESPI_TAF_ECP_IEN_DONE_Pos);
    }

    regs->ECP_START = MEC_BIT(MEC_ESPI_TAF_ECP_START_START_Pos);
}

/* check cmd_pkt->dataptr is valid
 * check cmd_pkt->dlen is valid (1 <= dlen <= 0x40)
 * check cmd_pkt->flash_addr
 */
static int start_taf_ecp_rw(struct mec_espi_taf_regs *regs, enum mec_taf_ecp_command cmd,
                            struct mec_taf_ecp_cmd_pkt *cmd_pkt, uint32_t flags)
{
    uint32_t ecp_cmd = MEC_TAF_ECP_CMD_TYPE;

    if (!cmd_pkt->dataptr || !MEC_IS_PTR_ALIGNED32(cmd_pkt->dataptr)) {
        return MEC_RET_ERR_DATA_ALIGN;
    }

    if ((cmd_pkt->dlen < MEC_TAF_ECP_MIN_RW_PKT_SIZE)
        || (cmd_pkt->dlen > MEC_TAF_ECP_MAX_RW_PKT_SIZE)) {
        return MEC_RET_ERR_DATA_LEN;
    }

    ecp_cmd |= (cmd_pkt->dlen << MEC_ESPI_TAF_ECP_CMD_LEN_Pos) & MEC_ESPI_TAF_ECP_CMD_LEN_Msk;

    if (cmd == MEC_TAF_ECP_CMD_READ) {
        ecp_cmd |= (MEC_ESPI_TAF_ECP_CMD_EC_CMD_READ << MEC_ESPI_TAF_ECP_CMD_EC_CMD_Pos);
    } else {
        ecp_cmd |= (MEC_ESPI_TAF_ECP_CMD_EC_CMD_WRITE << MEC_ESPI_TAF_ECP_CMD_EC_CMD_Pos);
    }

    regs->ECP_FADDR = cmd_pkt->flash_addr;
    regs->ECP_BADDR = (uint32_t)cmd_pkt->dataptr;
    regs->ECP_CMD = ecp_cmd;

    start_ecp(regs, flags);

    return MEC_RET_OK;
}

/* cmd_pkt->dataptr is a don't care
 * cmd_pkt->dlen must be 4KB, 32KB, or 64KB
 * cmd_pkt->flash_addr specifies the region. It can be any address
 * inside the region.
 */
static int start_taf_ecp_erase(struct mec_espi_taf_regs *regs, struct mec_taf_ecp_cmd_pkt *cmd_pkt,
                               uint32_t flags)
{
    uint32_t ecp_cmd = (MEC_TAF_ECP_CMD_TYPE
                        | (MEC_ESPI_TAF_ECP_CMD_EC_CMD_ERASE << MEC_ESPI_TAF_ECP_CMD_EC_CMD_Pos));
    uint32_t erase_len_encoding = 0; /* 4KB */

    switch (cmd_pkt->dlen) {
    case (1024U * 4U):
        break;
    case (1024U * 32U):
        erase_len_encoding = 1u;
        break;
    case (1024U * 64U):
        erase_len_encoding = 2u;
        break;
    default:
        return MEC_RET_ERR_DATA_LEN;
    }

    ecp_cmd |= (erase_len_encoding << MEC_ESPI_TAF_ECP_CMD_LEN_Pos);

    regs->ECP_FADDR = cmd_pkt->flash_addr;
    regs->ECP_BADDR = 0u;
    regs->ECP_CMD = ecp_cmd;

    start_ecp(regs, flags);

    return MEC_RET_OK;
}

#ifdef MEC5_ESPI_HW_VER_15
static int start_taf_ecp_rpmc(struct mec_espi_taf_regs *regs, uint8_t taf_rpmc_op,
                              struct mec_taf_ecp_cmd_pkt *cmd_pkt, uint32_t flags)
{
    uint32_t ecp_cmd = MEC_TAF_ECP_CMD_TYPE;

    ecp_cmd |= ((uint32_t)taf_rpmc_op << MEC_ESPI_TAF_ECP_CMD_EC_CMD_Pos);
    ecp_cmd |= (cmd_pkt->dlen << MEC_ESPI_TAF_ECP_CMD_LEN_Pos) & MEC_ESPI_TAF_ECP_CMD_LEN_Msk;

    regs->ECP_FADDR = cmd_pkt->flash_addr;
    regs->ECP_BADDR = (uint32_t)cmd_pkt->dataptr;
    regs->ECP_CMD = ecp_cmd;

    start_ecp(regs, flags);

    return MEC_RET_OK;
}
#endif

int mec_hal_espi_taf_ecp_cmd_start(struct mec_espi_taf_regs *regs, enum mec_taf_ecp_command cmd,
                                   struct mec_taf_ecp_cmd_pkt *cmd_pkt, uint32_t flags)
{
    int ret = 0;

    if (!taf_regs_valid(regs) || !cmd_pkt) {
        return MEC_RET_ERR_INVAL;
    }

    switch (cmd) {
    case MEC_TAF_ECP_CMD_READ:
    case MEC_TAF_ECP_CMD_WRITE:
        ret = start_taf_ecp_rw(regs, cmd, cmd_pkt, flags);
        break;
    case MEC_TAF_ECP_CMD_ERASE:
        ret = start_taf_ecp_erase(regs, cmd_pkt, flags);
        break;
#ifdef MEC5_ESPI_HW_VER_15
    case MEC_TAF_ECP_CMD_RPMC_OP1_CS0:
        ret = start_taf_ecp_rpmc(regs, MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP1_CS0, cmd_pkt, flags);
        break;
    case MEC_TAF_ECP_CMD_RPMC_OP2_CS0:
        ret = start_taf_ecp_rpmc(regs, MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP2_CS0, cmd_pkt, flags);
        break;
    case MEC_TAF_ECP_CMD_RPMC_OP1_CS1:
        ret = start_taf_ecp_rpmc(regs, MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP1_CS1, cmd_pkt, flags);
        break;
    case MEC_TAF_ECP_CMD_RPMC_OP2_CS1:
        ret = start_taf_ecp_rpmc(regs, MEC_ESPI_TAF_ECP_CMD_EC_CMD_RPMC_OP2_CS1, cmd_pkt, flags);
        break;
#endif
    default:
        ret = MEC_RET_ERR_INVAL;
    }

    return ret;
}

/* TAF eSPI Monitor */
int mec_hal_espi_taf_mon_ictrl(struct mec_espi_taf_regs *regs, uint32_t ibm, uint8_t enable)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!ibm) {
        return MEC_RET_OK;
    }

    if (enable) {
        regs->MON_IEN |= ibm;
    } else {
        regs->MON_IEN &= (uint32_t)~ibm;
    }

    return MEC_RET_OK;
}

int mec_hal_espi_taf_mon_istatus(struct mec_espi_taf_regs *regs, uint32_t *istatus)
{
    if (!taf_regs_valid(regs) || !istatus) {
        return MEC_RET_ERR_INVAL;
    }

    *istatus = regs->MON_STS;

    return MEC_RET_OK;
}

int mec_hal_espi_taf_mon_istatus_clr(struct mec_espi_taf_regs *regs, uint32_t istatus)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->MON_STS = istatus;

    return MEC_RET_OK;
}

/* end mec_espi_taf.c */
