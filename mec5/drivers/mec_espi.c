/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_espi_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

/* ---- eSPI Reset interrupt ---- */
#define MEC_ESPI_RESET_ECIA_INFO MEC5_ECIA_INFO(19, 7, 11, 110)

static void set_supported_channels(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t mask = (ESPI_IO_CAP0_PC_SUPP_Msk | ESPI_IO_CAP0_VW_SUPP_Msk
                     | ESPI_IO_CAP0_OOB_SUPP_Msk | ESPI_IO_CAP0_FC_SUPP_Msk);
    uint32_t temp = 0;

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_PERIPH_CHAN_SUP_POS)) {
        temp |= MEC_BIT(ESPI_IO_CAP0_PC_SUPP_Pos);
    }

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_VW_CHAN_SUP_POS)) {
        temp |= MEC_BIT(ESPI_IO_CAP0_VW_SUPP_Pos);
    }

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_OOB_CHAN_SUP_POS)) {
        temp |= MEC_BIT(ESPI_IO_CAP0_OOB_SUPP_Pos);
    }

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_FLASH_CHAN_SUP_POS)) {
        temp |= MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos);
    }

    iobase->CAP0 = (iobase->CAP0 & ~mask) | temp;
}

static void set_supported_max_freq(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t mask = ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk;
    uint32_t temp = capabilities & MEC_ESPI_CFG_MAX_SUPP_FREQ_MSK;

    temp >>= MEC_ESPI_CFG_MAX_SUPP_FREQ_POS;
    temp = (temp << ESPI_IO_CAP1_MAX_FREQ_SUPP_Pos) & ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk;

    iobase->CAP1 = (iobase->CAP1 & ~mask) | temp;
}

/* eSPI capabilties 1 register has maximum supported frequency field.
 * The field values match the API enum mec_espi_max_freq values.
 */
static uint32_t get_max_freq(struct espi_io_regs *iobase)
{
    uint32_t hwfreq =
        ((iobase->CAP1 & ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk) >> ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk);

    return hwfreq;
}

static void set_supported_io_modes(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = iobase->CAP1 & ~(ESPI_IO_CAP1_IO_MODE_SUPP_Msk);

    temp |= ((((capabilities >> MEC_ESPI_CFG_IO_MODE_SUPP_POS)
             & MEC_ESPI_CFG_IO_MODE_SUPP_MSK0) << ESPI_IO_CAP1_IO_MODE_SUPP_Pos)
             & ESPI_IO_CAP1_IO_MODE_SUPP_Msk);

    iobase->CAP1 = (uint8_t)(temp & 0xffu);
}

/* eSPI capabilities 1 register contains a bitfield for supported I/O modes.
 * Our API enum mec_espi_io_mode values are indentical hardware bitfield values.
 */
static uint32_t get_supported_io_modes(struct espi_io_regs *iobase)
{
    uint32_t iom =
        ((iobase->CAP1 & ESPI_IO_CAP1_IO_MODE_SUPP_Msk) >> ESPI_IO_CAP1_IO_MODE_SUPP_Pos);

    return ((iom << MEC_ESPI_CFG_IO_MODE_SUPP_POS) & MEC_ESPI_CFG_IO_MODE_SUPP_MSK);
}

static void set_supported_alert_io_pin_mode(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = iobase->CAP1 & ~(ESPI_IO_CAP1_ALERT_OD_SUPP_Msk);

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_ALERT_OD_SUPP_POS)) {
        temp |= MEC_BIT(ESPI_IO_CAP1_ALERT_OD_SUPP_Pos);
    }

    iobase->CAP1 = (uint8_t)(temp & 0xffu);
}

static void set_pc_capabilities(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = iobase->CAPPC & ~(ESPI_IO_CAPPC_PC_MAX_PLD_Msk);

    temp |= ((((capabilities >> MEC_ESPI_CFG_PC_MAX_PLD_SZ_POS)
             & MEC_ESPI_CFG_PC_MAX_PLD_SZ_MSK0) << ESPI_IO_CAPPC_PC_MAX_PLD_Pos)
             & ESPI_IO_CAPPC_PC_MAX_PLD_Msk);

    iobase->CAPPC = (uint8_t)(temp & 0xffu);
}

static uint32_t get_pc_max_pld_size(struct espi_io_regs *iobase)
{
    uint32_t pldsz =
        ((iobase->CAPPC & ESPI_IO_CAPPC_PC_MAX_PLD_Msk) >> ESPI_IO_CAPPC_PC_MAX_PLD_Pos);

    return ((pldsz << MEC_ESPI_CFG_PC_MAX_PLD_SZ_POS) & MEC_ESPI_CFG_PC_MAX_PLD_SZ_MSK);
}

static void set_vw_capabilities(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = iobase->CAPVW & ~(ESPI_IO_CAPVW_MAX_VW_CNT_Msk);

    temp |= ((((capabilities >> MEC_ESPI_CFG_VW_CNT_MAX_POS)
             & MEC_ESPI_CFG_VW_CNT_MAX_MSK0) << ESPI_IO_CAPVW_MAX_VW_CNT_Pos)
             & ESPI_IO_CAPVW_MAX_VW_CNT_Msk);

    iobase->CAPVW = (uint8_t)(temp & 0xffu);
}

static uint32_t get_vw_groups_max_cnt(struct espi_io_regs *iobase)
{
    uint32_t nvwg =
        ((iobase->CAPVW & ESPI_IO_CAPVW_MAX_VW_CNT_Msk) >> ESPI_IO_CAPVW_MAX_VW_CNT_Pos);

    return ((nvwg << MEC_ESPI_CFG_VW_CNT_MAX_POS) & MEC_ESPI_CFG_VW_CNT_MAX_MSK);
}

static void set_oob_capabilities(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = iobase->CAPOOB & ~(ESPI_IO_CAPOOB_MAX_PLD_SIZE_Msk);

    temp |= ((((capabilities >> MEC_ESPI_CFG_OOB_MAX_PLD_SZ_POS)
             & MEC_ESPI_CFG_OOB_MAX_PLD_SZ_MSK0) << ESPI_IO_CAPOOB_MAX_PLD_SIZE_Pos)
             & ESPI_IO_CAPOOB_MAX_PLD_SIZE_Msk);

    iobase->CAPOOB = (uint8_t)(temp & 0xffu);
}

static uint32_t get_oob_pld_size(struct espi_io_regs *iobase)
{
    uint32_t pldsz =
        ((iobase->CAPOOB & ESPI_IO_CAPOOB_MAX_PLD_SIZE_Msk) >> ESPI_IO_CAPOOB_MAX_PLD_SIZE_Pos);

    return ((pldsz << MEC_ESPI_CFG_OOB_MAX_PLD_SZ_POS) & MEC_ESPI_CFG_OOB_MAX_PLD_SZ_MSK);
}

static void set_fc_max_pld(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = ((capabilities >> MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_POS)
                     & MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_MSK0);
    uint8_t msk = ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk;
    uint8_t regval = (uint8_t)((temp << ESPI_IO_CAPFC_MAX_PLD_SIZE_Pos)
                               & ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk);

    iobase->CAPFC = (iobase->CAPFC & ~msk) | regval;
}

static uint32_t get_fc_pld_size(struct espi_io_regs *iobase)
{
    uint32_t pldsz =
        ((iobase->CAPFC & ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk) >> ESPI_IO_CAPFC_MAX_PLD_SIZE_Pos);

    return ((pldsz << MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_POS) & MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_MSK);
}

static void set_fc_shared_mode(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint8_t msk = ESPI_IO_CAPFC_SHARING_SUPP_Msk;
    uint8_t regval = 0;

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS)) {
        regval |= MEC_BIT(ESPI_IO_CAPFC_CAF_SHARING_Pos);
    }

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_TAF_POS)) {
        regval |= MEC_BIT(ESPI_IO_CAPFC_TAF_SHARING_Pos);
    }

    iobase->CAPFC = (iobase->CAPFC & ~msk) | regval;
}

static uint32_t get_fc_shared_mode(struct espi_io_regs *iobase)
{
    uint32_t fcsh = 0;
    uint8_t capfc = iobase->CAPFC;

    if (capfc & MEC_BIT(ESPI_IO_CAPFC_TAF_SHARING_Pos)) {
        fcsh |= MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_TAF_POS);
        if (capfc & MEC_BIT(ESPI_IO_CAPFC_CAF_SHARING_Pos)) {
            fcsh |= MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS);
        }
    } else {
        fcsh |= MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS);
    }

    return fcsh;
}

static void set_fc_capabilities(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint32_t temp = ((capabilities >> MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_POS)
                     & MEC_ESPI_CFG_FLASH_MAX_PLD_SZ_MSK0);
    uint8_t msk = (ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk | ESPI_IO_CAPFC_SHARING_SUPP_Msk
                   | ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Msk);
    uint8_t regval = (uint8_t)((temp << ESPI_IO_CAPFC_MAX_PLD_SIZE_Pos) & ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk);

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_TAF_POS)) {
        regval |= MEC_BIT(ESPI_IO_CAPFC_TAF_SHARING_Pos);
    }

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS)) {
        regval |= MEC_BIT(ESPI_IO_CAPFC_CAF_SHARING_Pos);
    }

    iobase->CAPFC = (iobase->CAPFC & ~msk) | regval;
}

static uint32_t get_fc_taf_max_rdsz(struct espi_io_regs *iobase)
{
    uint32_t rdsz = 0;
    uint32_t capfc = iobase->CAPFC;

    rdsz = (capfc & ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Msk) >> ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Pos;
    rdsz &= MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_MSK0;
    rdsz <<= MEC_ESPI_CAP_FLASH_SHARED_MAX_RD_REQ_SZ_POS;

    return rdsz;
}

/* If Platform Reset is peformed is different way than eSPI PLTRST# virtual wire
 * we set a bit so our eSPI controller will ignore PLTRST# VWire.
 */
static void set_pltrst_source(struct espi_io_regs *iobase, uint32_t capabilities)
{
    uint8_t host_reset_sel = 0;

    if (capabilities & MEC_BIT(MEC_ESPI_CFG_PLTRST_EXT_POS)) {
        iobase->PLTRST_SRC |= MEC_BIT(ESPI_IO_PLTRST_SRC_SEL_Pos);
    } else { /* use PLTRST# virtual wire */
        iobase->PLTRST_SRC &= (uint8_t)~MEC_BIT(ESPI_IO_PLTRST_SRC_SEL_Pos);
        host_reset_sel = MEC_PCR_PLATFORM_RST_IS_ESPI_PLTRST;
    }

    mec_pcr_host_reset_select(host_reset_sel);
}

/* ---- Public API ---- */
void mec_espi_reset_change_clr(struct espi_io_regs *iobase)
{
    iobase->ERIS = MEC_BIT(ESPI_IO_ERIS_CHG_Pos);
    mec_girq_clr_src(MEC_ESPI_RESET_ECIA_INFO);
}

/* Return bits indicating ESPI_RESET# has changed and its current state */
uint32_t mec_espi_reset_state(struct espi_io_regs *iobase)
{
    return iobase->ERIS & (ESPI_IO_ERIS_CHG_Msk | ESPI_IO_ERIS_STATE_Msk);
}

void mec_espi_reset_change_intr_en(struct espi_io_regs *iobase, uint8_t enable)
{
    if (enable) {
        iobase->ERIE |= MEC_BIT(ESPI_IO_ERIE_CHG_INTR_Pos);
    } else {
        iobase->ERIE &= (uint8_t)~MEC_BIT(ESPI_IO_ERIE_CHG_INTR_Pos);
    }
}

/* ESPI_RESET edge interrupt ECIA control */
void mec_espi_reset_girq_ctrl(uint8_t enable)
{
    mec_girq_ctrl(MEC_ESPI_RESET_ECIA_INFO, (int)enable);
}

void mec_espi_reset_girq_status_clr(void)
{
    mec_girq_clr_src(MEC_ESPI_RESET_ECIA_INFO);
}

uint32_t mec_espi_reset_girq_status(void)
{
    return mec_girq_src(MEC_ESPI_RESET_ECIA_INFO);
}

uint32_t mec_espi_reset_girq_result(void)
{
    return mec_girq_result(MEC_ESPI_RESET_ECIA_INFO);
}

/* NOTE eSPI is only fully reset by a full chip reset or power cycle.
 * The external ESPI_RESET# signal when asserted does hold portions of the logic
 * in reset state. Please refer to the Microchip eSPI block document.
 */
int mec_espi_init(struct espi_config *cfg)
{
    if (!cfg) {
        return MEC_RET_ERR_INVAL;
    }

    struct espi_io_regs *iobase = cfg->iobase;
    uint32_t girq_en = 0u;

    set_supported_channels(iobase, cfg->capabilities);
    set_supported_max_freq(iobase, cfg->capabilities);
    set_supported_io_modes(iobase, cfg->capabilities);
    set_supported_alert_io_pin_mode(iobase, cfg->capabilities);
    set_pc_capabilities(iobase, cfg->capabilities);
    set_vw_capabilities(iobase, cfg->capabilities);
    set_oob_capabilities(iobase, cfg->capabilities);
    set_fc_capabilities(iobase, cfg->capabilities);
    set_pltrst_source(iobase, cfg->capabilities);

    mec_espi_reset_change_intr_en(iobase, 0);
    mec_espi_reset_change_clr(iobase);

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_VW_CT_GIRQ_EN_POS)) {
        ECIA0->GIRQ[GIRQS_IDX_GIRQ24].EN_SET = 0x0fffffffu;
        ECIA0->GIRQ[GIRQS_IDX_GIRQ25].EN_SET = 0x0000ffffu;
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_PC_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_PC_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_BM1_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_PC_BM1_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_BM2_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_PC_BM2_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_LTR_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_PC_LTR_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_OOB_UP_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_OOB_UP_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_OOB_DN_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_OOB_DN_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_FC_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_FC_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_VW_CHEN_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_VW_CHEN_GIRQ_POS);
    }

    if (cfg->cfg_flags & MEC_BIT(MEC_ESPI_CFG_FLAG_ERST_GIRQ_EN_POS)) {
        girq_en |= MEC_BIT(MEC_ESPI_RESET_GIRQ_POS);
    }

    ECIA0->GIRQ[GIRQS_IDX_GIRQ19].EN_SET = girq_en;

    return 0;
}

/* Enable eSPI controller after all static configuration has been performed.
 * MEC eSPI activate must be set before the Host de-asserts ESPI_RESET#.
 */
void mec_espi_activate(struct espi_io_regs *iobase, uint8_t enable)
{
    if (enable) {
        iobase->ACTV |= MEC_BIT(ESPI_IO_ACTV_EN_Pos);
    } else {
        iobase->ACTV &= (uint32_t)~MEC_BIT(ESPI_IO_ACTV_EN_Pos);
    }
}

int mec_espi_is_activated(struct espi_io_regs *iobase)
{
    if (iobase) {
        if (iobase->ACTV & MEC_BIT(ESPI_IO_ACTV_EN_Pos)) {
            return 1;
        }
    }

    return 0;
}

int mec_espi_capability_set(struct espi_io_regs *iobase,
                            enum mec_espi_global_cap cap, uint32_t cfg)
{
    if (!iobase) {
        return MEC_RET_ERR_INVAL;
    }

    switch (cap) {
    case MEC_ESPI_CAP_MAX_FREQ:
        set_supported_max_freq(iobase, cfg);
        break;
    case MEC_ESPI_CAP_IO_MODE:
        set_supported_io_modes(iobase, cfg);
        break;
    case MEC_ESPI_CAP_ALERT_OD:
        set_supported_alert_io_pin_mode(iobase, cfg);
        break;
    case MEC_ESPI_CAP_PERIPH_CHAN:
        if (cfg & MEC_BIT(MEC_ESPI_CFG_PERIPH_CHAN_SUP_POS)) {
            iobase->CAP0 |= MEC_BIT(ESPI_IO_CAP0_PC_SUPP_Pos);
        } else {
            iobase->CAP0 &= (uint8_t)~MEC_BIT(ESPI_IO_CAP0_PC_SUPP_Pos);
        }
        break;
    case MEC_ESPI_CAP_PC_MAX_PLD_SIZE:
        set_pc_capabilities(iobase, cfg);
        break;
    case  MEC_ESPI_CAP_VWIRE_CHAN:
        if (cfg & MEC_BIT(MEC_ESPI_CFG_VW_CHAN_SUP_POS)) {
            iobase->CAP0 |= MEC_BIT(ESPI_IO_CAP0_VW_SUPP_Pos);
        } else {
            iobase->CAP0 &= (uint8_t)~MEC_BIT(ESPI_IO_CAP0_VW_SUPP_Pos);
        }
        break;
    case MEC_ESPI_CAP_MAX_VW_COUNT:
        set_vw_capabilities(iobase, cfg);
        break;
    case MEC_ESPI_CAP_OOB_CHAN:
        if (cfg & MEC_BIT(MEC_ESPI_CFG_OOB_CHAN_SUP_POS)) {
            iobase->CAP0 |= MEC_BIT(ESPI_IO_CAP0_OOB_SUPP_Pos);
        } else {
            iobase->CAP0 &= (uint8_t)~MEC_BIT(ESPI_IO_CAP0_OOB_SUPP_Pos);
        }
        break;
    case MEC_ESPI_CAP_OOB_MAX_PLD_SIZE:
        set_oob_capabilities(iobase, cfg);
        break;
    case MEC_ESPI_CAP_FLASH_CHAN:
        if (cfg & MEC_BIT(MEC_ESPI_CFG_FLASH_CHAN_SUP_POS)) {
            iobase->CAP0 |= MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos);
        } else {
            iobase->CAP0 &= (uint8_t)~MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos);
        }
        break;
    case MEC_ESPI_CAP_FC_MAX_PLD_SIZE:
        set_fc_max_pld(iobase, cfg);
        break;
    case MEC_ESPI_CAP_FC_SHARING:
        set_fc_shared_mode(iobase, cfg);
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    return MEC_RET_OK;
}

int mec_espi_capabilities_get(struct espi_io_regs *iobase, uint32_t *cfg)
{
    uint32_t cv = 0;

    if (!iobase || !cfg) {
        return MEC_RET_ERR_INVAL;
    }

    /* Max frequency */
    cv |= ((get_max_freq(iobase) << MEC_ESPI_CFG_MAX_SUPP_FREQ_POS)
           & MEC_ESPI_CFG_MAX_SUPP_FREQ_MSK);

    /* IO Mode */
    cv |= get_supported_io_modes(iobase);

    /* Supports open-drain Alert pin */
    if (iobase->CAP1 & MEC_BIT(ESPI_IO_CAP1_ALERT_OD_SUPP_Pos)) {
        cv |= MEC_BIT(MEC_ESPI_CFG_ALERT_OD_SUPP_POS);
    }

    /* Peripheral channel */
    if (iobase->CAP0 & MEC_BIT(ESPI_IO_CAP0_PC_SUPP_Pos)) {
        cv |= MEC_BIT(MEC_ESPI_CFG_PERIPH_CHAN_SUP_POS);
    }
    cv |= get_pc_max_pld_size(iobase);

    /* VW channel */
    if (iobase->CAP0 & MEC_BIT(ESPI_IO_CAP0_VW_SUPP_Pos)) {
        cv |= MEC_BIT(MEC_ESPI_CFG_VW_CHAN_SUP_POS);
    }
    cv |= get_vw_groups_max_cnt(iobase);

    /* OOB channel */
    if (iobase->CAP0 & MEC_BIT(ESPI_IO_CAP0_OOB_SUPP_Pos)) {
        cv |= MEC_BIT(MEC_ESPI_CFG_OOB_CHAN_SUP_POS);
    }
    cv |= get_oob_pld_size(iobase);

    /* Flash channel */
    if (iobase->CAP0 & MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos)) {
        cv |= MEC_BIT(MEC_ESPI_CFG_FLASH_CHAN_SUP_POS);
    }
    cv |= get_fc_pld_size(iobase);
    cv |= get_fc_shared_mode(iobase);
    cv |= get_fc_taf_max_rdsz(iobase);

    *cfg = cv;

    return MEC_RET_OK;
}

static void set_espi_global_cap(struct espi_io_regs *iobase, uint32_t cfg)
{
    uint32_t msk = (ESPI_IO_CAP0_PC_SUPP_Msk | ESPI_IO_CAP0_VW_SUPP_Msk
                    | ESPI_IO_CAP0_OOB_SUPP_Msk | ESPI_IO_CAP0_FC_SUPP_Msk);
    uint32_t cap = 0;

    if (cfg & MEC_BIT(MEC_ESPI_CAP_GL_SUPP_PC_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAP0_PC_SUPP_Pos);
    }
    if (cfg & MEC_BIT(MEC_ESPI_CAP_GL_SUPP_VW_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAP0_VW_SUPP_Pos);
    }
    if (cfg & MEC_BIT(MEC_ESPI_CAP_GL_SUPP_OOB_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAP0_OOB_SUPP_Pos);
    }
    if (cfg & MEC_BIT(MEC_ESPI_CAP_GL_SUPP_FLASH_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos);
    }
    iobase->CAP0 = (iobase->CAP0 & (uint8_t)~msk) | (uint8_t)(cap & msk);

    cap = (cfg & MEC_ESPI_CAP_GL_MAX_FREQ_MSK) >> MEC_ESPI_CAP_GL_MAX_FREQ_POS;
    cap |= (((cfg & MEC_ESPI_CAP_GL_IOM_MSK) >> MEC_ESPI_CAP_GL_IOM_POS)
            << ESPI_IO_CAP1_IO_MODE_SUPP_Pos);

    if (cfg & MEC_BIT(MEC_ESPI_CAP_GL_SUPP_ALERT_OD_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAP1_ALERT_OD_SUPP_Pos);
    }

    msk = (ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk | ESPI_IO_CAP1_IO_MODE_SUPP_Msk
           | ESPI_IO_CAP1_ALERT_OD_SEL_Msk);
    iobase->CAP1 = (iobase->CAP1 & (uint8_t)~msk) | (uint8_t)(cap & msk);

    msk = ESPI_IO_PLTRST_SRC_SEL_Msk;
    cap = 0;
    if (cfg & MEC_BIT(MEC_ESPI_CAP_GL_PLTRST_EXT_POS)) {
        cap |= MEC_BIT(ESPI_IO_PLTRST_SRC_SEL_Pos);
    }

    iobase->PLTRST_SRC = (iobase->PLTRST_SRC & (uint8_t)~msk) | (uint8_t)(cap & msk);
}

static uint32_t get_espi_global_cap(struct espi_io_regs *iobase)
{
    uint32_t cfg = 0;
    uint32_t hwval = iobase->CAP0;

    if (hwval & MEC_BIT(ESPI_IO_CAP0_PC_SUPP_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CAP_GL_SUPP_PC_POS);
    }
    if (hwval & MEC_BIT(ESPI_IO_CAP0_VW_SUPP_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CAP_GL_SUPP_VW_POS);
    }
    if (hwval & MEC_BIT(ESPI_IO_CAP0_OOB_SUPP_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CAP_GL_SUPP_OOB_POS);
    }
    if (hwval & MEC_BIT(ESPI_IO_CAP0_FC_SUPP_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CAP_GL_SUPP_FLASH_POS);
    }

    hwval = iobase->CAP1;
    cfg |= (((hwval & ESPI_IO_CAP1_MAX_FREQ_SUPP_Msk) >> ESPI_IO_CAP1_MAX_FREQ_SUPP_Pos)
            << MEC_ESPI_CAP_GL_MAX_FREQ_POS);
    cfg |= (((hwval & ESPI_IO_CAP1_IO_MODE_SUPP_Msk) >> ESPI_IO_CAP1_IO_MODE_SUPP_Pos)
            << MEC_ESPI_CAP_GL_IOM_POS);
    if (hwval & MEC_BIT(ESPI_IO_CAP1_ALERT_OD_SUPP_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CAP_GL_SUPP_ALERT_OD_POS);
    }

    if (iobase->PLTRST_SRC & MEC_BIT(ESPI_IO_PLTRST_SRC_SEL_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CAP_GL_PLTRST_EXT_POS);
    }

    return cfg;
}

static void set_espi_pc_cap(struct espi_io_regs *iobase, uint32_t cfg)
{
    uint32_t msk = ESPI_IO_CAPPC_PC_MAX_PLD_Msk;
    uint32_t cap = (((cfg & MEC_ESPI_CAP_PC_MAX_PLD_SIZE_MSK) >> MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS)
                    << ESPI_IO_CAPPC_PC_MAX_PLD_Msk);

    iobase->CAPPC = (iobase->CAPPC & (uint8_t)~msk) | (cap & msk);
}

static uint32_t get_espi_pc_cap(struct espi_io_regs *iobase)
{
    uint32_t rval =
        ((iobase->CAPPC & ESPI_IO_CAPPC_PC_MAX_PLD_Msk) >> ESPI_IO_CAPPC_PC_MAX_PLD_Pos);

    return ((rval << MEC_ESPI_CAP_PC_MAX_PLD_SIZE_POS) & MEC_ESPI_CAP_PC_MAX_PLD_SIZE_MSK);
}

static void set_espi_vw_cap(struct espi_io_regs *iobase, uint32_t cfg)
{
    uint32_t msk = ESPI_IO_CAPVW_MAX_VW_CNT_Msk;
    uint32_t cap =
        (((cfg & MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_MSK) >> MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_POS)
         << ESPI_IO_CAPVW_MAX_VW_CNT_Pos);

    iobase->CAPVW = (iobase->CAPVW & (uint8_t)~msk) | (cap & msk);
}

static uint32_t get_espi_vw_cap(struct espi_io_regs *iobase)
{
    uint32_t rval =
        ((iobase->CAPVW & ESPI_IO_CAPVW_MAX_VW_CNT_Msk) >> ESPI_IO_CAPVW_MAX_VW_CNT_Pos);

    return ((rval << MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_POS) & MEC_ESPI_CAP_VW_MAX_VW_GRP_CNT_MSK);
}

static void set_espi_oob_cap(struct espi_io_regs *iobase, uint32_t cfg)
{
    uint32_t msk = ESPI_IO_CAPOOB_MAX_PLD_SIZE_Msk;
    uint32_t cap =
        (((cfg & MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_MSK) >> MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS)
         << ESPI_IO_CAPOOB_MAX_PLD_SIZE_Pos);

    iobase->CAPOOB = (iobase->CAPOOB & (uint8_t)~msk) | (cap | msk);
}

static uint32_t get_espi_oob_cap(struct espi_io_regs *iobase)
{
    uint32_t rval =
        ((iobase->CAPOOB & ESPI_IO_CAPOOB_MAX_PLD_SIZE_Msk) >> ESPI_IO_CAPOOB_MAX_PLD_SIZE_Pos);

    return ((rval << MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_POS) & MEC_ESPI_CAP_OOB_MAX_PLD_SIZE_MSK);
}

static void set_espi_fc_cap(struct espi_io_regs *iobase, uint32_t cfg)
{
    uint32_t msk = (ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk | ESPI_IO_CAPFC_SHARING_SUPP_Msk
                    | ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Msk);
    uint32_t cap = 0;

    iobase->TAFEBS =
        (uint8_t)((cfg & MEC_ESPI_CAP_FC_TAF_ERBSZ_MSK) >> MEC_ESPI_CAP_FC_TAF_ERBSZ_POS);

    cap = ((cfg & MEC_ESPI_CAP_FC_MAX_PLD_SIZE_MSK) >> MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS);
    cap <<= ESPI_IO_CAPFC_MAX_PLD_SIZE_Pos;
    cap |= (((cfg & MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_MSK)
             >> MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_POS) << ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Pos);

    if (cfg & MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_TAF_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAPFC_TAF_SHARING_Pos);
    }

    if (cfg & MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS)) {
        cap |= MEC_BIT(ESPI_IO_CAPFC_CAF_SHARING_Pos);
    }

    iobase->CAPFC = (iobase->CAPFC & (uint8_t)~msk) | (cap & msk);
}

static uint32_t get_espi_fc_cap(struct espi_io_regs *iobase)
{
    uint32_t rv = iobase->CAPFC;
    uint32_t cfg = (((rv & ESPI_IO_CAPFC_MAX_PLD_SIZE_Msk) >> ESPI_IO_CAPFC_MAX_PLD_SIZE_Pos)
                    << MEC_ESPI_CAP_FC_MAX_PLD_SIZE_POS);

    cfg |= (((rv & ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Msk) >> ESPI_IO_CAPFC_TAF_MAX_READ_SIZE_Pos)
            << MEC_ESPI_CAP_FC_TAF_MAX_RDREQ_SIZE_POS);

    if (cfg & MEC_BIT(ESPI_IO_CAPFC_TAF_SHARING_Pos)) {
        cfg |= MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_TAF_POS);
        if (cfg & MEC_BIT(ESPI_IO_CAPFC_CAF_SHARING_Pos)) {
            cfg |= MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS);
        }
    } else {
        cfg |= MEC_BIT(MEC_ESPI_CFG_FLASH_SHARED_CAF_POS);
    }

    cfg |= (((uint32_t)iobase->TAFEBS & 0xffu) << MEC_ESPI_CAP_FC_TAF_ERBSZ_POS);

    return cfg;
}

int mec_espi_cap_set(struct espi_io_regs *iobase, enum mec_espi_cap_id id, uint32_t cfg)
{
    if (!iobase) {
        return MEC_RET_ERR_INVAL;
    }

    switch (id) {
    case MEC_ESPI_CAP_ID_GLOBAL:
        set_espi_global_cap(iobase, cfg);
        break;
    case MEC_ESPI_CAP_ID_PC:
        set_espi_pc_cap(iobase, cfg);
        break;
    case MEC_ESPI_CAP_ID_VW:
        set_espi_vw_cap(iobase, cfg);
        break;
    case MEC_ESPI_CAP_ID_OOB:
        set_espi_oob_cap(iobase, cfg);
        break;
    case MEC_ESPI_CAP_ID_FC:
        set_espi_fc_cap(iobase, cfg);
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    return MEC_RET_OK;
}

uint32_t mec_espi_cap_get(struct espi_io_regs *iobase, enum mec_espi_cap_id id)
{
    uint32_t cap = 0u;

    switch (id) {
    case MEC_ESPI_CAP_ID_GLOBAL:
        cap = get_espi_global_cap(iobase);
        break;
    case MEC_ESPI_CAP_ID_PC:
        cap = get_espi_pc_cap(iobase);
        break;
    case MEC_ESPI_CAP_ID_VW:
        cap = get_espi_vw_cap(iobase);
        break;
    case MEC_ESPI_CAP_ID_OOB:
        cap = get_espi_oob_cap(iobase);
        break;
    case MEC_ESPI_CAP_ID_FC:
        cap = get_espi_fc_cap(iobase);
        break;
    default:
        break;
    }

    return cap;
}

/* end mec_espi.c */
