/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
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
  (BIT(TAF_MON_STS_TMOUT_ERR_Pos) | BIT(TAF_MON_STS_OOR_ERR_Pos) | BIT(TAF_MON_STS_ACCV_ERR_Pos) \
   | BIT(TAF_MON_STS_4KB_ERR_Pos)  | BIT(TAF_MON_STS_ERSZ_ERR_Pos))


#define MEC_TAF_DFLT_FREQ_HZ 24000000u

/* Protection region register address and limit are in 4KB units */
#define MEC_TAF_PR_UNIT_SHIFT     12
#define MEC_TAF_PR_UNIT_SIZE      0x1000
#define MEC_TAF_PR_UNIT_MASK      0xfffu
#define MEC_TAF_PR_START_LIM_MASK 0xfffffu /* b[19:0] */
#define MEC_TAF_PR_START_DFLT     0x7fffu
#define MEC_TAF_PR_LIMIT_DFLT     0

#ifdef MEC_ESPI_TAF_CHECK_REG_ADDR
static inline bool taf_regs_valid(struct espi_taf_regs *regs)
{
    if (((uintptr_t)regs != (uintptr_t)ESPI_TAF_BASE)) {
        return false;
    }
    return true;
}
#else
static inline bool taf_regs_valid(struct espi_taf_regs *regs) { return true; }
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

static bool pr_is_dirty(struct espi_taf_regs *regs, uint8_t pridx)
{
   if (regs->PR_DIRTY & MEC_BIT(pridx)) {
       return true;
    }
    return false;
}

static void taf_disable_clear_intr(struct espi_taf_regs *regs)
{
    uint32_t girq_bm = MEC_BIT(MEC_ESPI_TAF_ECP_GIRQ_POS) | MEC_BIT(MEC_ESPI_TAF_HWMON_GIRQ_POS);
    regs->FC_MISC = 0u;
    regs->ECP_IEN = 0;
    regs->MON_IEN = 0;

    mec_girq_bm_en(MEC_ESPI_TAF_GIRQ, girq_bm, 0);

    regs->ECP_STS = UINT32_MAX;
    regs->MON_STS = UINT32_MAX;
    regs->PR_DIRTY = UINT32_MAX;

    mec_girq_bm_clr_src(MEC_ESPI_TAF_GIRQ, girq_bm);
    NVIC_ClearPendingIRQ(MEC_ESPI_TAF_DONE_NVIC);
    NVIC_ClearPendingIRQ(MEC_ESPI_TAF_ERR_NVIC);
}

/* ---- Public API ---- */

void mec_espi_taf_girq_ctrl(uint8_t enable, uint32_t flags)
{
    uint32_t bitmap = iflags_to_bitmap(flags);

    if (bitmap) {
        mec_girq_bm_en(MEC_ESPI_TAF_GIRQ, bitmap, enable);
    }
}

void mec_espi_taf_girq_status_clr(uint32_t flags)
{
    uint32_t bitmap = iflags_to_bitmap(flags);

    if (bitmap) {
        mec_girq_bm_clr_src(MEC_ESPI_TAF_GIRQ, bitmap);
    }
}

uint32_t mec_espi_taf_girq_status(void)
{
    uint32_t bitmap = 0;
    uint32_t src = mec_girq_source_get(MEC_ESPI_TAF_GIRQ);

    if (src & MEC_BIT(MEC_ESPI_TAF_ECP_GIRQ_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_INTR_ECP_DONE_POS);
    }
    if (src & MEC_BIT(MEC_ESPI_TAF_HWMON_GIRQ_POS)) {
        bitmap |= MEC_BIT(MEC_ESPI_TAF_INTR_HWMON_ERR_POS);
    }

    return bitmap;
}

uint32_t mec_espi_taf_girq_result(void)
{
    uint32_t bitmap = 0;
    uint32_t src = mec_girq_result_get(MEC_ESPI_TAF_GIRQ);

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
bool mec_espi_taf_is_activated(void)
{
    struct espi_taf_regs *regs = (struct espi_taf_regs *)(ESPI_TAF_BASE);

    if (regs->FC_MISC & MEC_BIT(TAF_FC_MISC_TAF_EN_Pos)) {
        return true;
    }

    return false;
}

/* Activate eSPI TAF hardware. Once activated the QSPI0 controller used by TAF is no longer
 * accessible.
 */
void mec_espi_taf_activate(uint8_t enable)
{
    struct espi_taf_regs *regs = (struct espi_taf_regs *)(ESPI_TAF_BASE);

    if (enable) {
        regs->FC_MISC |= MEC_BIT(TAF_FC_MISC_TAF_EN_Pos);
    } else {
        regs->FC_MISC &= (uint32_t)~MEC_BIT(TAF_FC_MISC_TAF_EN_Pos);
    }
}

int mec_espi_taf_init(struct espi_taf_regs *regs, uint32_t initflags)
{
    struct espi_io_regs *ioregs = (struct espi_io_regs *)(ESPI_IO_BASE);

    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_clr_blk_slp_en(MEC_PCR_ESPI_TAF);
    if (initflags & MEC_BIT(MEC_ESPI_TAF_INIT_RESET_POS)) {
        mec_pcr_blk_reset(MEC_PCR_ESPI_TAF);
    }

    taf_disable_clear_intr(regs);

    if (!(ioregs->CAP0 & MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos))) {
        return MEC_RET_ERR_HW_NOT_SUPP;
    }

    /* TAF only or TAF plus CAF sharing */
    ioregs->CAPFC |= MEC_BIT(ESPI_IO_CAPFC_TAF_SHARING_Pos);

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
static void taf_qspi_freq_timing(struct qspi_regs *qregs, const struct espi_taf_hw_cfg *thwcfg)
{
    uint32_t qfreq = MEC_TAF_DFLT_FREQ_HZ;
    uint8_t clk_tap = 0, ctrl_tap = 0;

    if (mec_qspi_is_enabled(qregs)) {
        qfreq = mec_qspi_get_freq(qregs);
    }

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_FREQ_POS)) {
        qfreq = (uint32_t)thwcfg->qspi_freq_mhz * 1000u * 1000u;
    }

    /* save and restore signalling mode, cs timing and timing taps */
    mec_qspi_reset_sr(qregs);
    mec_qspi_set_freq(qregs, qfreq);

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_CPHA_POS)) {
        mec_qspi_sampling_phase_pol(qregs, thwcfg->qspi_cpha);
    }

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_CSTM_POS)) {
        mec_qspi_cs_timing(qregs, thwcfg->qspi_cs_timing);
    }

    if (thwcfg->flags & MEC_BIT(MEC_ESPI_TAF_HW_CFG_FLAG_TAPS_POS)) {
        clk_tap = (uint8_t)(thwcfg->qtaps_sel & 0xffu);
        ctrl_tap = (uint8_t)((thwcfg->qtaps_sel >> 8) & 0xffu);
        mec_qspi_tap_select(qregs, clk_tap, ctrl_tap);
    }
}

int mec_espi_taf_qspi_init(struct espi_taf_regs *tregs, struct qspi_regs *qregs,
                           const struct espi_taf_hw_cfg *thwcfg)
{
    int ret = 0;
    uint32_t flags = 0;
    uint16_t qfdiv = 0;

    if (!taf_regs_valid(tregs) || ((uintptr_t)qregs != (uintptr_t)(QSPI0_BASE)) || !thwcfg) {
        return MEC_RET_ERR_INVAL;
    }

    taf_qspi_freq_timing(qregs, thwcfg);

    /* copy raw QSPI frequency divider field into TAF CS0/CS1 freq divider regs */
    qfdiv = mec_qspi_freq_div_raw(qregs);
    qfdiv = qfdiv | (qfdiv << 16);
    tregs->CLKDIV_CS0 = qfdiv;
    tregs->CLKDIV_CS1 = qfdiv;

    /* load continous mode enter/exit and status polling descriptors */
    ret = mec_qspi_load_descrs_at(qregs, thwcfg->generic_descr,
                                  MEC_ESPI_TAF_GENERIC_DESCR_MAX,
                                  MCHP_TAF_CM_EXIT_START_DESCR);
    if (ret != MEC_RET_OK) {
        return ret;
    }

    /* TODO: MEC172x do we need to set QSPI.TX_LDMA[0].CTRL enable, restart-enable, and
     * access size = 4?
     */

    mec_qspi_intr_ctrl_msk(qregs, 1, MEC_QSPI_IEN_XFR_DONE);
    flags = MEC_BIT(MEC_QSPI_OPT_ACTV_EN_POS) | MEC_BIT(MEC_QSPI_OPT_TAF_DMA_EN_POS)
            | MEC_BIT(MEC_QSPI_OPT_RX_LDMA_EN_POS) | MEC_BIT(MEC_QSPI_OPT_TX_LDMA_EN_POS);
    mec_qspi_options(qregs, 1, flags);

    return MEC_RET_OK;
}

bool mec_espi_taf_pr_is_dirty(struct espi_taf_regs *regs, uint8_t pr_idx)
{
    if (!taf_regs_valid(regs) || (pr_idx >= MEC_ESPI_TAF_PROT_REG_MAX)) {
        return false;
    }

    return pr_is_dirty(regs, pr_idx);
}

int mec_espi_taf_pr_dirty_clr(struct espi_taf_regs *regs, uint8_t pr_idx)
{
    if (!taf_regs_valid(regs) || (pr_idx >= MEC_ESPI_TAF_PROT_REG_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PR_DIRTY = MEC_BIT(pr_idx);

    return MEC_RET_OK;
}


int mec_espi_taf_pr_dirty_clr_mask(struct espi_taf_regs *regs, uint32_t mask)
{
    if (!taf_regs_valid(regs)) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PR_DIRTY = mask;

    return MEC_RET_OK;
}

uint32_t mec_espi_taf_pr_lock_get(struct espi_taf_regs *regs)
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
int mec_espi_taf_pr_lock(struct espi_taf_regs *regs, uint32_t lockmap)
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
int mec_espi_taf_pr_set(struct espi_taf_regs *regs, struct espi_taf_pr *pr)
{
    if (!taf_regs_valid(regs) || !pr || (pr->pr_num >= MEC_ESPI_TAF_PROT_REG_MAX)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!MEC_IS_PTR_ALIGNED4K(pr->start) || !MEC_IS_PTR_ALIGNED4K(pr->size)) {
        return MEC_RET_ERR_DATA_ALIGN;
    }

    volatile struct espi_taf_pr_regs *pregs = &regs->PR[pr->pr_num];

    if (pr->flags & MEC_BIT(MCHP_SAF_PR_FLAG_ENABLE)) {
        pregs->START =  (pr->start >> MEC_TAF_PR_UNIT_SHIFT) & MEC_TAF_PR_START_LIM_MASK;
        pregs->LIMIT = (((pr->start + pr->size - 1u) >> MEC_TAF_PR_UNIT_SHIFT)
                    & MEC_TAF_PR_START_LIM_MASK);
        pregs->WRBM = pr->req_bm_we;
        pregs->RDBM = pr->req_bm_rd;

        regs->PR_DIRTY = MEC_BIT(pr->pr_num);

        if (pr->flags & MEC_BIT(MCHP_SAF_PR_FLAG_LOCK)) {
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
/* end mec_espi_taf.c */
