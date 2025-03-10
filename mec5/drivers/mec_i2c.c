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
#include "mec_ecia_api.h"
#include "mec_i2c_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

/* MEC5 I2C controller notes:
 * The I2C byte mode Control(WO) and Status(RO) register are both located at offset 0.
 * I2C.STATUS register is an 8-bit read-only status register:
 * bit[0] = Not Bus Busy(NBB) 0 indicates the bus is owned by this controller.
 * bit[1] = Lost Arbitration(LAB) 1 indicates controller lost arbitration to another
 *          controller on the bus. LAB detection is performed during data transfer,
 *          ackowledgement, START, and Repeated-START phases of the transfer. LAB
 *          is not checked during a STOP phase. If LAB occurs this controller will tri-state
 *          its pins and continue to clock in the address/data from the external controller.
 *          On the 9th clock NIPEND and LAB will both assert.
 *          I2C-NL CM FSM will transition to IDLE state after 9th clock (n)ACK bit and
 *          clear the PIN bit to 1(de-asserted).
 * bit[2] = AAS = 1 indicates an external Controller issued (RPT)-START + target address
 *          the target address matches one of the two target addresses in this controller's
 *          own address register or the I2C generate call address(0x00). NOTE: general
 *          call address detction can be enabled/disabled in the Configuration register.
 * bit[3] = LRB_AD0 value interpretation depends upon the AAS status bit.
 *          AAS==0: LRB is the last received bit on the bus. Usually this is the value
 *          of SDA on the 9th I2C clock (0=ACK, 1=NACK).
 *          AAS==1: AD0=1 if received target address was the I2C GC(0x00) address else
 *          0 if the target address matched one of the controller's own addresses.
 * bit[4] = BER 1 = Controller detected a bus error. Assertion of BER cause the controller
 *          to de-assert NBB and NPIPEND: NBB=1 and NIPEND=1.
 * bit[5] = STS 1 = externally generated STOP was detected. BROKEN in MEC520x. A HW fix
 *          implemented in MEC540x.
 * bit[6] = SAD 1 = SMBus address decode asserted if enabled in the Configuration register.
 * bit[7] = NIPEND 1 = No Interrupt Pending(de-asserted). 1 = Interrupt is Pending(asserted).
 *          NIPEND is asserted(0) after the 9th I2C clock or on detection of a bus error.
 *          TX direction: NIPEND de-asserted when I2C.Data register is written.
 *          RX direction: NIPEND de-asserted when I2C.Data is read.
 *          NOTE: In Controller Mode reading I2C.Data when direction is RX and I2C.CTRL.STO=0
 *          returns current data byte and generates clocks for the next byte (read-ahead).
 *          HW determines direction based on the W/nR bit which is bit[0] of the I2C target
 *          address.
 *
 * I2C.CTRL register is an 8-bit write-only control register:
 * bit[0] = ACK = 1 HW will generate an ACK on the 9th after receiving a
 * data byte from an external Controller.
 * bit[1] = STO = 1 generate a STOP
 * bit[2] = STA = 1 generate a START and transmit the address in the I2C.DATA register.
 * bit[3] = ENI = 1 Assert the I2C controller's interrupt active signal to the corresponding
 *          GIRQ Source bit. Interrupt signal asserted when I2C.STATUS.NIPEND -> 0.
 * bits[5:4] = reserved
 * bit[6] = ESO = 1 Enable SDA outout. 0 = SDA disabled.
 * bit[7] = NIPEND_RST = Not Pending Interrupt. A software reset de-asserting all status
 *          except the Not Bus Busy status bit. WARNING: Behaviour of this bit
 *          depends upon the I2C FSM state.
 *
 * Controller clears I2C.CTRL.STA write-only bit after 7th clock of I2C address.
 * Controller clears I2C.CTRL.STO write-only bit when it drives SDA low at
 * the beginning of generating the STOP sequence on the bus. This occurs
 * a minimum 1/2 I2C clock period after the 9th clock pulse of the previous
 * data on the bus.
 */
#define MEC_I2C_SMB_COMPL_STS_RW1C_MSK 0xe1397f00u
#define MEC_I2C_SMB_COMPL_STS_RO_MSK   0x02020040u
#define MEC_I2C_SMB_COMPL_EN_RW_MSK    0x3cu
#define MEC_I2C_SMB_COMPL_TM_STS_RW1C_MSK 0x80390000u
#define MEC_I2C_SMB_COMPL_TM_STS_ALL_MSK 0x803b0000u

#define MEC_I2C_SMB0_ECIA_INFO MEC5_ECIA_INFO(13, 0, 5, 20)
#define MEC_I2C_SMB1_ECIA_INFO MEC5_ECIA_INFO(13, 1, 5, 21)
#define MEC_I2C_SMB2_ECIA_INFO MEC5_ECIA_INFO(13, 2, 5, 22)
#define MEC_I2C_SMB3_ECIA_INFO MEC5_ECIA_INFO(13, 3, 5, 23)
#define MEC_I2C_SMB4_ECIA_INFO MEC5_ECIA_INFO(13, 4, 5, 158)

/* #define MEC_I2C_NL_DEBUG_SAVE_CM_CMD */

struct mec_i2c_info {
    uintptr_t base_addr;
    uint32_t devi;
    uint16_t pcr_id;
};

static const struct mec_i2c_freq_cfg freq_cfg_dflt[MEC_I2C_STD_FREQ_MAX] = {
    [MEC_I2C_STD_FREQ_100K] = {
        .freqhz = 100000u,
        .idle_scaling = 0x01fc01edu,
        .timeout_scaling = 0x4b9cc2c7u,
        .data_timing = 0x0c4d5006u,
        .bus_clk = 0x4f4fu,
        .rpt_start_hold_time = 0x4du,
    },
    [MEC_I2C_STD_FREQ_400K] = {
        .freqhz = 400000u,
        .idle_scaling = 0x01000050u,
        .timeout_scaling = 0x159cc2c7u,
        .data_timing = 0x040a0a06u,
        .bus_clk = 0xf17u,
        .rpt_start_hold_time = 0x0au,
    },
    [MEC_I2C_STD_FREQ_1M] = {
        .freqhz = 1000000u,
        .idle_scaling = 0x10000050u,
        .timeout_scaling = 0x089cc2c7u,
        .data_timing = 0x04060601u,
        .bus_clk = 0x509u,
        .rpt_start_hold_time = 0x06u,
    },
};

static const struct mec_i2c_info i2c_instances[MEC5_I2C_SMB_INSTANCES] = {
    {MEC_I2C_SMB0_BASE, MEC_I2C_SMB0_ECIA_INFO, MEC_PCR_I2C_SMB0 },
    {MEC_I2C_SMB1_BASE, MEC_I2C_SMB1_ECIA_INFO, MEC_PCR_I2C_SMB1 },
    {MEC_I2C_SMB2_BASE, MEC_I2C_SMB2_ECIA_INFO, MEC_PCR_I2C_SMB2 },
    {MEC_I2C_SMB3_BASE, MEC_I2C_SMB3_ECIA_INFO, MEC_PCR_I2C_SMB3 },
    {MEC_I2C_SMB4_BASE, MEC_I2C_SMB4_ECIA_INFO, MEC_PCR_I2C_SMB4 },
};

static struct mec_i2c_info const *get_i2c_smb_info(struct mec_i2c_smb_regs *base)
{
    for (int i = 0; i < MEC5_I2C_SMB_INSTANCES; i++) {
        const struct mec_i2c_info *p = &i2c_instances[i];

        if (p->base_addr == (uintptr_t)base) {
            return p;
        }
    }

    return NULL;
}

int mec_hal_i2c_smb_reset(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    const struct mec_i2c_info *info = get_i2c_smb_info(ctx->base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_blk_reset(info->pcr_id);

    return MEC_RET_OK;
}

static void i2c_timing(struct mec_i2c_smb_regs *base, const struct mec_i2c_freq_cfg *freq_cfg)
{
    base->BUSCLK = freq_cfg->bus_clk;
    base->RSHT = freq_cfg->rpt_start_hold_time;
    base->DATATM = freq_cfg->data_timing;
    base->IDLESC = freq_cfg->idle_scaling;
    base->TMOUTSC = freq_cfg->timeout_scaling;
}

static void i2c_config(struct mec_i2c_smb_ctx *ctx, struct mec_i2c_smb_cfg *config,
                       struct mec_i2c_freq_cfg *custom_freq_cfg)
{
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t control = MEC_BIT(MEC_I2C_SMB_CTRL_PIN_Pos); /* clear low level HW status */

    /* disable and set port MUX */
    base->CONFIG = (((uint32_t)config->port << MEC_I2C_SMB_CONFIG_PORT_SEL_Pos)
                    & MEC_I2C_SMB_CONFIG_PORT_SEL_Msk);
    base->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_FEN_Pos); /* enable digital filter */

    base->CTRL = control;
    ctx->i2c_ctrl_cached = control;

    /* GCC 12 is generating a 16-bit load from an odd aligned address!
     * base->OWN_ADDR = (uint32_t)config->target_addr1 | ((uint32_t)config->target_addr2 << 8);
     * Try forcing it not to do that.
     */
    base->OWN_ADDR = config->target_addr2;
    base->OWN_ADDR = (base->OWN_ADDR << 8) | config->target_addr1;

    if (config->cfg_flags & MEC_I2C_SMB_CFG_CUST_FREQ) {
        i2c_timing(base, custom_freq_cfg);
    } else {
        i2c_timing(base, &freq_cfg_dflt[config->std_freq]);
    }

    base->COMPL = MEC_I2C_SMB_COMPL_STS_RW1C_MSK;

    /* Enable output drive and HW ACK generation */
    control = (MEC_BIT(MEC_I2C_SMB_CTRL_PIN_Pos) | MEC_BIT(MEC_I2C_SMB_CTRL_ESO_Pos)
               | MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos));
    ctx->i2c_ctrl_cached = control;
    base->CTRL = control;

    base->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENAB_Pos);
    for (int i = 0; i < 8; i++) {
        base->EXTLEN = 0;
    }
    base->COMPL |= MEC_I2C_SMB_COMPL_STS_RW1C_MSK;
}

uint8_t mec_hal_i2c_smb_port_get(struct mec_i2c_smb_regs *regs)
{
    if (!regs) {
        return MEC_I2C_PORT_MAX;
    }

    return (uint8_t)((regs->CONFIG & MEC_I2C_SMB_CONFIG_PORT_SEL_Msk)
                     >> MEC_I2C_SMB_CONFIG_PORT_SEL_Pos);
}

uint8_t mec_hal_i2c_smb_port_set(struct mec_i2c_smb_regs *regs, uint8_t port)
{
    if (!regs || (port >= MEC_I2C_PORT_MAX)) {
        return MEC_I2C_PORT_MAX;
    }

    uint32_t temp = (((uint32_t)port << MEC_I2C_SMB_CONFIG_PORT_SEL_Pos)
                     | MEC_I2C_SMB_CONFIG_PORT_SEL_Msk);

    regs->CONFIG = (regs->CONFIG & (uint32_t)~MEC_I2C_SMB_CONFIG_PORT_SEL_Msk) | temp;

    return port;
}

int mec_hal_i2c_smb_get_id(struct mec_i2c_smb_regs *regs, uint8_t *ctrl_id)
{
    if (!ctrl_id) {
        return MEC_RET_ERR_INVAL;
    }

    for (uint8_t i = 0; i < MEC5_I2C_SMB_INSTANCES; i++) {
        if (i2c_instances[i].base_addr == (uintptr_t)regs) {
            *ctrl_id = i;
            return MEC_RET_OK;
        }
    }

    return MEC_RET_ERR_INVAL;
}

int mec_hal_i2c_smb_bus_freq_get(struct mec_i2c_smb_regs *regs, uint32_t *bus_freq_hz)
{
    uint32_t busclk = 0, lcnt = 0, hcnt = 0;

    if (!regs || !bus_freq_hz) {
        return MEC_RET_ERR_INVAL;
    }

    busclk = regs->BUSCLK;
    lcnt = busclk & 0xffu;
    hcnt = (busclk >> 8) & 0xffu;

    *bus_freq_hz = MEC_I2C_SMB_BAUD_CLK_FREQ_HZ / ((lcnt + 1u) + (hcnt + 1u));

    return MEC_RET_OK;
}

/* I2C-SMB bus clock frequency =
 * Fixed HW BAUD clock freq / ((low_period+1) + (high_period+1))
 */
int mec_hal_i2c_smb_bus_freq_get_by_ctx(struct mec_i2c_smb_ctx *ctx, uint32_t *bus_freq_hz)
{
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_i2c_smb_regs *regs = ctx->base;

    return mec_hal_i2c_smb_bus_freq_get(regs, bus_freq_hz);
}

int mec_hal_i2c_smb_bus_freq_get_by_id(uint8_t i2c_id, uint32_t *bus_freq_hz)
{
    struct mec_i2c_smb_regs *regs = NULL;

    if (i2c_id >= MEC5_I2C_SMB_INSTANCES) {
        return MEC_RET_ERR_INVAL;
    }

    regs = (struct mec_i2c_smb_regs *)MEC_I2C_SMB_BASE(i2c_id);

    return mec_hal_i2c_smb_bus_freq_get(regs, bus_freq_hz);
}

int mec_hal_i2c_smb_init(struct mec_i2c_smb_ctx *ctx, struct mec_i2c_smb_cfg *config,
                         struct mec_i2c_freq_cfg *custom_freq_cfg)
{
    uint32_t own_addrs = 0;

    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    const struct mec_i2c_info *info = get_i2c_smb_info(ctx->base);

    if (!info || !config) {
        return MEC_RET_ERR_INVAL;
    }

    ctx->devi = info->devi;

    if (config->cfg_flags & MEC_I2C_SMB_CFG_PRESERVE_TARGET_ADDRS) {
        own_addrs = ctx->base->OWN_ADDR;
        config->target_addr1 = (uint8_t)(own_addrs & 0x7fu);
        config->target_addr2 = (uint8_t)((own_addrs >> 8) & 0x7fu);
    }

    mec_hal_pcr_clr_blk_slp_en(info->pcr_id);
    mec_hal_pcr_blk_reset(info->pcr_id);

    if (!(MEC_BIT(config->port) & MEC5_I2C_SMB_PORT_MAP)) {
        return MEC_RET_ERR_INVAL;
    }

    if ((config->cfg_flags & MEC_I2C_SMB_CFG_CUST_FREQ) && !custom_freq_cfg) {
        return MEC_RET_ERR_INVAL;
    } else if (config->std_freq >= MEC_I2C_STD_FREQ_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    /* configure controller and cache last value written to write-only control register */
    i2c_config(ctx, config, custom_freq_cfg);

    /* clear GIRQ latched status */
    mec_hal_girq_clr_src(ctx->devi);

    return MEC_RET_OK;
}

/* Helper to set/get specified own (target mode) I2C 7-bit address.
 * If curr_addr pointer is non-NULL then we get the current value else
 * set own address to new_addr.
 */
static int mec_hal_i2c_smb_own_addr(struct mec_i2c_smb_ctx *ctx, uint8_t tid,
                                    uint16_t new_addr, uint16_t *curr_addr)
{
    uint32_t msk = 0;
    uint8_t pos = 0;

    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    const struct mec_i2c_info *info = get_i2c_smb_info(ctx->base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    switch (tid) {
    case MEC_I2C_TARGET_ADDR_0:
        msk = MEC_I2C_SMB_OWN_ADDR_OAD0_Msk;
        pos = MEC_I2C_SMB_OWN_ADDR_OAD0_Pos;
        break;
    case MEC_I2C_TARGET_ADDR_1:
        msk = MEC_I2C_SMB_OWN_ADDR_OAD1_Msk;
        pos = MEC_I2C_SMB_OWN_ADDR_OAD1_Pos;
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    struct mec_i2c_smb_regs *regs = ctx->base;

    if (curr_addr) {
        *curr_addr = (uint16_t)((regs->OWN_ADDR & msk) >> pos);
    } else {
        regs->OWN_ADDR = ((regs->OWN_ADDR & (uint32_t)~msk)
                          | (((uint32_t)new_addr << pos) & msk));
    }

    return MEC_RET_OK;
}

int mec_hal_i2c_smb_get_target_addr(struct mec_i2c_smb_ctx *ctx, uint8_t target_id,
                                    uint16_t *target_addr)
{
    if (!target_addr) {
        return MEC_RET_ERR_INVAL;
    }

    return mec_hal_i2c_smb_own_addr(ctx, target_id, 0u, target_addr);
}

int mec_hal_i2c_smb_set_target_addr(struct mec_i2c_smb_ctx *ctx, uint8_t target_id,
                                    uint16_t target_addr)
{
    return mec_hal_i2c_smb_own_addr(ctx, target_id, target_addr, NULL);
}

int mec_hal_i2c_smb_clr_target_addr(struct mec_i2c_smb_ctx *ctx, uint16_t target_addr)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_i2c_smb_regs *regs = ctx->base;
    uint32_t oaddr = regs->OWN_ADDR;
    uint32_t taddr = (oaddr & MEC_I2C_SMB_OWN_ADDR_OAD0_Msk) >> MEC_I2C_SMB_OWN_ADDR_OAD0_Pos;

    if (taddr == (uint32_t)target_addr) {
        regs->OWN_ADDR &= (uint32_t)~MEC_I2C_SMB_OWN_ADDR_OAD0_Msk;
    } else {
        taddr = (oaddr & MEC_I2C_SMB_OWN_ADDR_OAD1_Msk) >> MEC_I2C_SMB_OWN_ADDR_OAD1_Pos;
        if (taddr == (uint32_t)target_addr) {
            regs->OWN_ADDR &= (uint32_t)~MEC_I2C_SMB_OWN_ADDR_OAD1_Msk;
        }
    }

    return MEC_RET_OK;
}

int mec_hal_i2c_smb_girq_status_clr(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(ctx->devi);

    return MEC_RET_OK;
}

/* Enable/disable I2C controller interrupt signal from propagating to NVIC */
int mec_hal_i2c_smb_girq_ctrl(struct mec_i2c_smb_ctx *ctx, int flags)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    if (flags & MEC_I2C_SMB_GIRQ_DIS) {
        mec_hal_girq_ctrl(ctx->devi, 0);
    }

    if (flags & MEC_I2C_SMB_GIRQ_CLR_STS) {
        mec_hal_girq_clr_src(ctx->devi);
    }

    if (flags & MEC_I2C_SMB_GIRQ_EN) {
        mec_hal_girq_ctrl(ctx->devi, 1);
    }

    return MEC_RET_OK;
}

uint32_t mec_hal_i2c_smb_get_nvic_id(uint8_t i2c_ctrl_id)
{
    if (i2c_ctrl_id >= MEC5_I2C_SMB_INSTANCES) {
        return 0xffffffffu;
    }

    return MEC5_ECIA_INFO_NVIC_DIRECT(i2c_instances[i2c_ctrl_id].devi);
}

int mec_hal_i2c_smb_girq_status(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0;
    }

    return (int)mec_hal_girq_src(ctx->devi);
}

int mec_hal_i2c_smb_girq_result(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0;
    }

    return (int)mec_hal_girq_result(ctx->devi);
}

/* check I2C.Status Not Busy bit. If set the bus is NOT owned by this controller.
 * Returns 0 if not owned or the parameter check fails.
 *         1 if bus is owned by this controller.
 */
int mec_hal_i2c_smb_is_bus_owned(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;

    if (base->STATUS & MEC_BIT(MEC_I2C_SMB_STATUS_NBB_Pos)) {
        return 0;
    }

    return 1;
}

int mec_hal_i2c_smb_ctrl_set(struct mec_i2c_smb_ctx *ctx, uint8_t ctrl)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;

    ctx->i2c_ctrl_cached = ctrl;
    base->CTRL = ctrl;

    return MEC_RET_OK;
}

uint8_t mec_hal_i2c_smb_ctrl_get(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0u;
    }

    return ctx->i2c_ctrl_cached;
}

int mec_hal_i2c_cmd_ack_ctrl(struct mec_i2c_smb_ctx *ctx, uint8_t ack_en)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t ctrl = ctx->i2c_ctrl_cached;

    if (ack_en) {
        ctrl |= MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos);
    } else {
        ctrl &= (uint8_t)~MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos);
    }

    ctx->i2c_ctrl_cached = ctrl;
    base->CTRL = ctrl;

    return MEC_RET_OK;
}

/* Re-arm Target mode receive after an external STOP.  */
int mec_hal_i2c_smb_rearm_target_rx(struct mec_i2c_smb_ctx *ctx)
{
    uint8_t ctr = (MEC_BIT(MEC_I2C_SMB_CTRL_PIN_Pos) | MEC_BIT(MEC_I2C_SMB_CTRL_ESO_Pos)
                   | MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos));

    return mec_hal_i2c_smb_ctrl_set(ctx, ctr);
}

int mec_hal_i2c_smb_auto_ack_enable(struct mec_i2c_smb_ctx *ctx, uint8_t ien)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t ctr = MEC_BIT(MEC_I2C_SMB_CTRL_ESO_Pos) | MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos);

    if (ien) {
        ctr |= MEC_BIT(MEC_I2C_SMB_CTRL_ENI_Pos);
    }

    ctx->i2c_ctrl_cached = ctr;
    base->CTRL = ctr;
    return MEC_RET_OK;
}

int mec_hal_i2c_smb_auto_ack_disable(struct mec_i2c_smb_ctx *ctx, uint8_t ien)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t ctr = MEC_BIT(MEC_I2C_SMB_CTRL_ESO_Pos);

    if (ien) {
        ctr |= MEC_BIT(MEC_I2C_SMB_CTRL_ENI_Pos);
    }

    ctx->i2c_ctrl_cached = ctr;
    base->CTRL = ctr;
    return MEC_RET_OK;
}

int mec_hal_i2c_smb_idle_intr_enable(struct mec_i2c_smb_ctx *ctx, uint8_t enable)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    struct mec_i2c_smb_regs *base = ctx->base;

    if (enable) {
        base->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_IDLE_Pos);
    } else {
        base->CONFIG &= (uint32_t)~MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_IDLE_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_i2c_smb_intr_ctrl(struct mec_i2c_smb_ctx *ctx, uint32_t mask, uint8_t enable)
{
    uint32_t cfg = 0;

#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    struct mec_i2c_smb_regs *regs = ctx->base;

    if (mask & MEC_BIT(MEC_I2C_IEN_BYTE_MODE_POS)) {
        if (enable) {
            ctx->i2c_ctrl_cached |= MEC_BIT(MEC_I2C_SMB_CTRL_ENI_Pos);
        } else {
            ctx->i2c_ctrl_cached &= (uint8_t)~MEC_BIT(MEC_I2C_SMB_CTRL_ENI_Pos);
        }
        regs->CTRL = ctx->i2c_ctrl_cached;
    }

    if (mask & MEC_BIT(MEC_I2C_IEN_IDLE_POS)) {
        cfg |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_IDLE_Pos);
    }
    if (mask & MEC_BIT(MEC_I2C_NL_IEN_CM_DONE_POS)) {
        cfg |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_HOST_Pos);
    }
    if (mask & MEC_BIT(MEC_I2C_NL_IEN_TM_DONE_POS)) {
        cfg |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_TARG_Pos);
    }
    if (mask & MEC_BIT(MEC_I2C_NL_IEN_AAT_POS)) {
        cfg |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_AAT_Pos);
    }

    if (enable) {
        regs->CONFIG |= cfg;
    } else {
        regs->CONFIG &= (uint32_t)~cfg;
    }

    return MEC_RET_OK;
}

/* Returns 32-bit unsigned containing combined I2C status
 * b[7:0] = I2C.Status read-only register (byte status)
 * b[31:8] = I2C.Completion status bits.
 * We lose I2C.Completion bit[6] = TIMERR but this bit is
 * a logical OR of bits[12:8].
 * If parameter clear != 0 this routine will clear the R/W1C
 * bits in I2C.Completion after reading them.
 */
uint32_t mec_hal_i2c_smb_status(struct mec_i2c_smb_ctx *ctx, uint8_t clear)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint32_t compl = 0, status = 0;

    /* Read completion first. Not sure if low-level read-only I2C.STATUS has read side-effects. */
    compl = base->COMPL;
    status = base->STATUS;

    if (clear) {
        base->COMPL = compl;
    }

    /* completion b[7:0] are control not status bits. Store 8-bit I2C status there */
    compl &= 0xffffff00u;
    compl |= (status & 0xffu);

    return compl;
}

uint32_t mec_hal_i2c_smb_wake_status(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0;
    }

    struct mec_i2c_smb_regs *base = ctx->base;

    return base->WAKE_STS;
}

void mec_hal_i2c_smb_wake_status_clr(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return;
    }
#endif

    struct mec_i2c_smb_regs *base = ctx->base;

    base->WAKE_STS = MEC_BIT(MEC_I2C_SMB_WAKE_STS_START_DET_Pos);
}

int mec_hal_i2c_smb_is_idle_ien(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *regs = ctx->base;

    if (regs->CONFIG & MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_IDLE_Pos)) {
        return 1;
    }

    return 0;
}

int mec_hal_i2c_smb_is_idle_intr(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint32_t cfg = base->CONFIG & MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_IDLE_Pos);
    uint32_t compl = base->COMPL & MEC_BIT(MEC_I2C_SMB_COMPL_IDLE_Pos);

    if (cfg && compl) {
        return 1;
    }

    return 0;
}

/* Return 1 if AAT interrupt is enabled else 0.
 * NOTE we can't condition this with AAT read-only status from the
 * I2C.Status register because that value is dynamic, it can change
 * due to Network layer causing the status to be cleared.
 */
bool mec_hal_i2c_smb_is_aat_ien(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return false;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint32_t cfg = base->CONFIG & MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_AAT_Pos);

    if (cfg) {
        return true;
    }

    return false;
}

int mec_hal_i2c_smb_idle_status_clr(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;

    base->COMPL |= MEC_BIT(MEC_I2C_SMB_COMPL_IDLE_Pos);

    return 0;
}

/* Controller specification sequence:
 * START + addr. Bus is idle (I2C.STATUS.NBB == 1)
 *    write addr to I2C.Data
 *    write 0xC5 to I2C.Control or 0xCb if interrupts are enabled
 * RPT-START + addr. Bus must we owned by this controller (I2C.STATUS.NBB == 0)
 *    write 0x45 or 0x4b to I2C.Control
 *    write addr I2C.Data
 */
int mec_hal_i2c_smb_start_gen(struct mec_i2c_smb_ctx *ctx, uint8_t target_addr, int flags)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t ctr = (MEC_BIT(MEC_I2C_SMB_CTRL_ESO_Pos) | MEC_BIT(MEC_I2C_SMB_CTRL_STA_Pos)
                   | MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos));

    if (flags & MEC_I2C_SMB_BYTE_ENI) {
        ctr |= MEC_BIT(MEC_I2C_SMB_CTRL_ENI_Pos);
    }

    if (base->STATUS & MEC_BIT(MEC_I2C_SMB_STATUS_NBB_Pos)) {
        ctr |= MEC_BIT(MEC_I2C_SMB_CTRL_PIN_Pos);
        ctx->i2c_ctrl_cached = ctr;
        base->DATA = target_addr;
        base->CTRL = ctr;
    } else {
        ctx->i2c_ctrl_cached = ctr;
        base->CTRL = ctr;
        base->DATA = target_addr;
    }

    return MEC_RET_OK;
}

int mec_hal_i2c_smb_stop_gen(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t control = (MEC_BIT(MEC_I2C_SMB_CTRL_PIN_Pos) | MEC_BIT(MEC_I2C_SMB_CTRL_ESO_Pos)
                       | MEC_BIT(MEC_I2C_SMB_CTRL_ACK_Pos) | MEC_BIT(MEC_I2C_SMB_CTRL_STO_Pos));

    /* Nothing to do. Controller does not own the bus at this time */
    if (base->STATUS & MEC_BIT(MEC_I2C_SMB_STATUS_NBB_Pos)) {
        return MEC_RET_ERR_NOP;
    }

    ctx->i2c_ctrl_cached = control;
    base->CTRL = control;

    return MEC_RET_OK;
}

/* Write byte to I2C.DATA for transmit
 * Prerequisites: Bus is owned by this controller and a START or Rpt-START plus
 * target write address has been sent by the controller.
 * If byte mode interrupts are required they should be enabled in the (Rpt)START
 * generation API.
 */
int mec_hal_i2c_smb_xmit_byte(struct mec_i2c_smb_ctx *ctx, uint8_t msg_byte)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;

    /* TODO should we check for NBB==1 and return error?
     * Only for data bytes. In the case of START we write target
     * address to I2C.DATA before writing I2C.Control.
     * If this function is only used for data then we can add the
     * check of NBB.
     */

    base->DATA = msg_byte;

    return MEC_RET_OK;
}

/* Read byte currently in receive buffer and generate clocks for next
 * byte if CTRL.STO == 0.
 */
int mec_hal_i2c_smb_read_byte(struct mec_i2c_smb_ctx *ctx, uint8_t *msg_byte)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t b = base->DATA;

    if (msg_byte) {
        *msg_byte = b;
    }

    return MEC_RET_OK;
}

int mec_hal_i2c_smb_bbctrl(struct mec_i2c_smb_ctx *ctx, uint8_t enable, uint8_t pin_drive)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;
    uint8_t bbctr = 0u;

    if (enable) {
        bbctr |= MEC_BIT(MEC_I2C_SMB_BBCTRL_BBEN_Pos);
        if (!(pin_drive & MEC_BIT(MEC_I2C_BB_SCL_POS))) { /* drive low? */
            bbctr |= MEC_BIT(MEC_I2C_SMB_BBCTRL_CLDIR_Pos);
        }
        if (!(pin_drive & MEC_BIT(MEC_I2C_BB_SDA_POS))) { /* drive low? */
            bbctr |= MEC_BIT(MEC_I2C_SMB_BBCTRL_DADIR_Pos);
        }
    }

    base->BBCTRL = bbctr;

    return MEC_RET_OK;
}

/* Read SCL and SDA pin states using bit-bang control register.
 * NOTE 1: Bit-bang mode must be enabled otherwise HW will return
 * both pin states as high.
 * NOTE 2: Enabling bit-bang switches the SCL and SDA lines away from
 * I2C logic to BB logic. When bit-bang is is disabled one must allow
 * time for I2C logic to resync to pins.
 */
uint8_t mec_hal_i2c_smb_bbctrl_pin_states(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0x3u;
    }
#endif
    struct mec_i2c_smb_regs *base = ctx->base;

    return (base->BBCTRL >> MEC_I2C_SMB_BBCTRL_BBCLKI_Pos) & 0x3u;
}

/* -------- I2C-NL -------- */

#ifdef MEC_I2C_NL_DEBUG_SAVE_CM_CMD
static volatile uint32_t mec_i2c_nl_dbg_save[4];
#endif

int mec_hal_i2c_nl_cm_cfg_start(struct mec_i2c_smb_ctx *ctx, uint16_t ntx, uint16_t nrx,
                                uint32_t flags)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct mec_i2c_smb_regs *regs = ctx->base;
    uint32_t cmd = 0, primask = 0;

    if (!ntx) { /* Any I2C transaction requires transmit of target address! */
        return MEC_RET_ERR_INVAL;
    }

    ctx->wrcnt = ntx;
    ctx->rdcnt = nrx;

    regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_HOST_Pos);
    if (flags & MEC_I2C_NL_FLAG_FLUSH_BUF) {
        regs->CONFIG |= (MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_CTXB_Pos)
                         | MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_CRXB_Pos));
    }
    regs->COMPL |= MEC_BIT(MEC_I2C_SMB_COMPL_CM_DONE_Pos);

    regs->EXTLEN = ((ntx >> 8) & 0xffu) | (nrx & 0xff00u);

    cmd = (uint32_t)(ntx & 0xffu) << MEC_I2C_SMB_CM_CMD_WRCNT_LSB_Pos;
    cmd |= ((uint32_t)(nrx & 0xffu) << MEC_I2C_SMB_CM_CMD_RDCNT_LSB_Pos);
    cmd |= (MEC_BIT(MEC_I2C_SMB_CM_CMD_RUN_Pos) | MEC_BIT(MEC_I2C_SMB_CM_CMD_PROCEED_Pos));

    if (flags & MEC_I2C_NL_FLAG_START) {
        cmd |= MEC_BIT(MEC_I2C_SMB_CM_CMD_START0_Pos);
    }

    if (flags & MEC_I2C_NL_FLAG_RPT_START) {
        cmd |= MEC_BIT(MEC_I2C_SMB_CM_CMD_STARTN_Pos);
    }

    if (flags & MEC_I2C_NL_FLAG_STOP) {
        cmd |= MEC_BIT(MEC_I2C_SMB_CM_CMD_STOP_Pos);
    }

    if (flags & MEC_I2C_NL_FLAG_CM_DONE_IEN) {
        regs->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_HOST_Pos);
    }

#ifdef MEC_I2C_NL_DEBUG_SAVE_CM_CMD
    mec_i2c_nl_dbg_save[0] = cmd;
    mec_i2c_nl_dbg_save[1] = regs->CONFIG;
    mec_i2c_nl_dbg_save[2] = regs->COMPL;
    mec_i2c_nl_dbg_save[3] = regs->EXTLEN;
#endif

    /* save CM_CMD in context */
    ctx->cmdctrl = (uint16_t)(cmd & 0xffffu);

    /* clear IDLE status just before starting HW
     * It may be futile because the bus is idle before starting and the status
     * bit may immediately be set by HW again.
     */
    regs->COMPL |= MEC_BIT(MEC_I2C_SMB_COMPL_IDLE_Pos);
    if (flags & MEC_I2C_NL_FLAG_IDLE_IEN) {
        primask = __get_PRIMASK();
        __disable_irq();
        regs->CM_CMD = cmd;
        MEC_CPU_STALL->STALL = 1u; /* 2 us = 32 16 MHz I2C BAUD clocks */
        regs->COMPL |= MEC_BIT(MEC_I2C_SMB_COMPL_IDLE_Pos);
        regs->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_IDLE_Pos);
        if (!primask) {
            __enable_irq();
        }
    } else {
        regs->CM_CMD = cmd;
    }

    return MEC_RET_OK;
}

int mec_hal_i2c_nl_cm_start(struct mec_i2c_smb_regs *i2c_regs, uint16_t ntx, uint16_t nrx,
                            uint32_t flags, uint32_t *cm_cmd_val)
{
    uint32_t cmd = 0;

    if (!i2c_regs) {
        return MEC_RET_ERR_INVAL;
    }

    i2c_regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_HOST_Pos);
    if (flags & MEC_I2C_NL_FLAG_FLUSH_BUF) {
        i2c_regs->CONFIG |= (MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_CTXB_Pos)
                             | MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_CRXB_Pos));
    }

    /* clear CM R/W1C status bits */
    i2c_regs->COMPL |= (MEC_BIT(MEC_I2C_SMB_COMPL_CM_DONE_Pos)
                        | MEC_BIT(MEC_I2C_SMB_COMPL_IDLE_Pos)
                        | MEC_BIT(MEC_I2C_SMB_COMPL_CM_NAKX_Pos)
                        | MEC_BIT(MEC_I2C_SMB_COMPL_LABSTS_Pos)
                        | MEC_BIT(MEC_I2C_SMB_COMPL_BUSERR_Pos));

    /* upper 8-bits of write and read counts */
    i2c_regs->EXTLEN = ((ntx >> 8) & 0xffu) | (nrx & 0xff00u);

    cmd = (uint32_t)(ntx & 0xffu) << MEC_I2C_SMB_CM_CMD_WRCNT_LSB_Pos;
    cmd |= ((uint32_t)(nrx & 0xffu) << MEC_I2C_SMB_CM_CMD_RDCNT_LSB_Pos);
    cmd |= (MEC_BIT(MEC_I2C_SMB_CM_CMD_RUN_Pos) | MEC_BIT(MEC_I2C_SMB_CM_CMD_PROCEED_Pos));

    if (flags & MEC_I2C_NL_FLAG_START) {
        cmd |= MEC_BIT(MEC_I2C_SMB_CM_CMD_START0_Pos);
    }

    if (flags & MEC_I2C_NL_FLAG_RPT_START) {
        cmd |= MEC_BIT(MEC_I2C_SMB_CM_CMD_STARTN_Pos);
    }

    if (flags & MEC_I2C_NL_FLAG_STOP) {
        cmd |= MEC_BIT(MEC_I2C_SMB_CM_CMD_STOP_Pos);
    }

    if (flags & MEC_I2C_NL_FLAG_CM_DONE_IEN) {
        i2c_regs->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_HOST_Pos);
    }

    if (cm_cmd_val) {
        *cm_cmd_val = cmd;
    }

    /* write I2C CM_CMD triggering HW FSM to begin processing */
    i2c_regs->CM_CMD = cmd;

    return MEC_RET_OK;
}

int mec_hal_i2c_nl_cm_start_by_id(uint8_t i2c_ctrl_id, uint16_t ntx, uint16_t nrx, uint32_t flags,
                                  uint32_t *cm_cmd_val)
{
    struct mec_i2c_smb_regs *regs = NULL;

    if (i2c_ctrl_id >= MEC5_I2C_SMB_INSTANCES) {
        return MEC_RET_ERR_INVAL;
    }

    regs = (struct mec_i2c_smb_regs *)MEC_I2C_SMB_BASE(i2c_ctrl_id);

    return mec_hal_i2c_nl_cm_start(regs, ntx, nrx, flags, cm_cmd_val);
}

/* I2C-NL FSM clears MRUN and MPROCEED when both wrCnt and rdCnt transition to
 * 0. MRUN==1 and MPROCEED is cleared to 0 when FSM requires software to
 * reconfigure DMA for the direction change from write to read. After the
 * Rpt-Start and rdAddr are transmitted and (n)ACK'd the FSM clears MPROCEED
 * only. NOTE: any error should clear MRUN and MPROCEED.
 */
uint32_t mec_hal_i2c_nl_get_events(struct mec_i2c_smb_ctx *ctx, uint8_t is_tm)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *regs = ctx->base;
    uint32_t cfg = 0, cmd = 0, sts = 0, events = 0, extlen = 0;
    uint32_t rdcnt = 0, wrcnt = 0;

    cmd = regs->CM_CMD;
    if (is_tm) {
        cmd = regs->TM_CMD;
    }

    extlen = regs->EXTLEN;
    wrcnt = ((extlen & 0xffu) << 8) | ((cmd >> 16) & 0xffu);
    rdcnt = (extlen & 0xff00u) | ((cmd >> 24) & 0xffu);

    cfg = regs->CONFIG;
    sts = (regs->COMPL & 0xffffff00u) | (regs->STATUS & 0xffu);

    if ((cfg & sts) & MEC_BIT(MEC_I2C_SMB_COMPL_IDLE_Pos)) { /* same bit position */
        events |= MEC_BIT(MEC_I2C_NL_EVENT_IDLE_POS);
    }

    if (sts & MEC_BIT(4)) {
        events |= MEC_BIT(MEC_I2C_NL_EVENT_BERR_POS);
    }

    if (sts & MEC_BIT(1)) {
        events |= MEC_BIT(MEC_I2C_NL_EVENT_LAB_POS);
    }

    if (sts & MEC_BIT(24)) {
        events |= MEC_BIT(MEC_I2C_NL_EVENT_NACK_POS);
    }

    /* Write-to-Read turn around is wrcnt==0, rdcnd!=0, and cmd[1:0]==01b */
    if ((cmd & 0x03u) == 0x01u) {
        events |= MEC_BIT(MEC_I2C_NL_EVENT_PAUSE_POS);
    }

    if (!rdcnt && !wrcnt && !(cmd & 0x03u)) {
        events |= MEC_BIT(MEC_I2C_NL_EVENT_DONE_POS);
    }

	return events;
}

int mec_hal_i2c_nl_cmd_clear(struct mec_i2c_smb_ctx *ctx, uint8_t is_tm)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (is_tm) {
        ctx->base->TM_CMD = 0;
    } else {
        ctx->base->CM_CMD = 0;
    }
    ctx->base->EXTLEN = 0;

    return MEC_RET_OK;
}

int mec_hal_i2c_nl_cm_proceed(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    ctx->base->CM_CMD |= (MEC_BIT(MEC_I2C_SMB_CM_CMD_RUN_Pos)
                          | MEC_BIT(MEC_I2C_SMB_CM_CMD_PROCEED_Pos));
    return MEC_RET_OK;
}

int mec_hal_i2c_nl_tm_proceed(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    ctx->base->TM_CMD |= (MEC_BIT(MEC_I2C_SMB_TM_CMD_RUN_Pos)
                          | MEC_BIT(MEC_I2C_SMB_TM_CMD_PROCEED_Pos));
    return MEC_RET_OK;
}

int mec_hal_i2c_nl_state_get(struct mec_i2c_smb_regs *regs, struct mec_i2c_smb_nl_state *state,
                             uint8_t is_tm)
{
    uint32_t elen = 0, r = 0;

#ifdef MEC_I2C_BASE_CHECK
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!state) {
        return MEC_RET_ERR_INVAL;
    }

    elen = regs->EXTLEN;

    if (is_tm) {
        elen >>= 16; /* TM wrCnt_MSB shifted to b[7:0] and TM rdCnt_MSB to b[15:0] */
        r = regs->TM_CMD;
        state->wrcnt = (uint16_t)((r >> 8) & 0xffu);
        state->rdcnt = (uint16_t)((r >> 16) & 0xffu);
        state->ctrl = (uint16_t)(r & 0xffu);
    } else {
        r = regs->CM_CMD;
        state->wrcnt = (uint16_t)((r >> 16) & 0xffu);
        state->rdcnt = (uint16_t)((r >> 24) & 0xffu);
        state->ctrl = (uint16_t)(r & 0xffffu);
    }

    state->wrcnt |= (uint16_t)((elen & 0xffu) << 8);
    state->rdcnt |= (uint16_t)((elen & 0xff00u));

    return MEC_RET_OK;
}

uint32_t mec_hal_i2c_nl_cm_xfr_count_get(struct mec_i2c_smb_regs *regs, uint8_t is_read)
{
    uint32_t cnt = 0;

#ifdef MEC_I2C_BASE_CHECK
    if (!regs) {
        return cnt;
    }
#endif

    cnt = regs->EXTLEN;
    if (is_read) {
        cnt = (cnt & MEC_I2C_SMB_ELEN_CM_RDCNT_MSB_Msk) >> MEC_I2C_SMB_ELEN_CM_RDCNT_MSB_Pos;
        cnt <<= 8;
        cnt |= ((regs->CM_CMD & MEC_I2C_SMB_CM_CMD_RDCNT_LSB_Msk)
                >> MEC_I2C_SMB_CM_CMD_RDCNT_LSB_Pos);
    } else {
        cnt = (cnt & MEC_I2C_SMB_ELEN_CM_WRCNT_MSB_Msk) >> MEC_I2C_SMB_ELEN_CM_WRCNT_MSB_Pos;
        cnt <<= 8;
        cnt |= ((regs->CM_CMD & MEC_I2C_SMB_CM_CMD_WRCNT_LSB_Msk)
                >> MEC_I2C_SMB_CM_CMD_WRCNT_LSB_Pos);
    }

    return cnt;
}

/* Modify CM write or read byte count.
 * LSB's of the 16-bit counts are located in the CM_CMD register.
 * Bit[1:0] of this register should not be written with 0.
 * We access count LSB's using byte access.
 * write count LSB is in bits[15:8], read count LSB is in bits[32:26].
 */
int mec_hal_i2c_nl_cm_xfr_count_set(struct mec_i2c_smb_regs *regs, uint8_t is_read, uint32_t cnt)
{
    uint32_t cnt_lsb = 0, cnt_msb = 0;
    uint32_t cmsk = MEC_I2C_SMB_CM_CMD_WRCNT_LSB_Msk;
    uint32_t emsk = MEC_I2C_SMB_ELEN_CM_WRCNT_MSB_Msk;
    uint8_t cpos = MEC_I2C_SMB_CM_CMD_WRCNT_LSB_Pos;
    uint8_t epos = MEC_I2C_SMB_ELEN_CM_WRCNT_MSB_Pos;

#ifdef MEC_I2C_BASE_CHECK
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (cnt > MEC_I2C_SMB_NL_MAX_XFR_COUNT) {
        return MEC_RET_ERR_INVAL;
    }

    /* Set MSB first in case LSB is 0 */
    if (is_read) {
        cmsk = MEC_I2C_SMB_CM_CMD_RDCNT_LSB_Msk;
        emsk = MEC_I2C_SMB_ELEN_CM_RDCNT_MSB_Msk;
        cpos = MEC_I2C_SMB_CM_CMD_RDCNT_LSB_Pos;
        epos = MEC_I2C_SMB_ELEN_CM_RDCNT_MSB_Pos;
    }

    cnt_lsb = cnt & 0xffu;
    cnt_msb = (cnt >> 8) & 0xffu;

    regs->EXTLEN = (regs->EXTLEN & (uint32_t)~emsk) | ((cnt_msb << epos) & emsk);
    regs->CM_CMD = (regs->CM_CMD & (uint32_t)~cmsk) | ((cnt_lsb << cpos) & cmsk);

    return MEC_RET_OK;
}

uint32_t mec_hal_i2c_nl_cmd_get(struct mec_i2c_smb_ctx *ctx, uint8_t is_tm)
{
    if (!ctx || !ctx->base) {
        return 0;
    }

    if (!is_tm) {
        return ctx->base->CM_CMD;
    }

    return ctx->base->TM_CMD;
}


/* ---- Target Mode Network Layer ---- */

/* Configure I2C controller's target command register
 * b[23:16] = Read count. This reflects the number of bytes we are receiving from
 * the external I2C Controller. This value is decremented by 1 for each by the
 * Central DMA channel reads from the TM Receive Buffer register.
 * Read count represents the buffer size the driver implements. The buffer should
 * be large enought to receive the message data plus possible Rpt-START address byte.
 * Read Count MSB is located in b[31:24] of the EXTLEN register.
 *
 * b[15:8] = Write count. The number of bytes this target will send to the external
 * I2C Controller. If this field and TM_PEC are 0 when the External controller requests
 * data then the current contents of the TM Transmit Buffer are used and the SPROT
 * status bit is set in the Completion register.
 * Write count MSB is located in b[23:16] of the EXTLEN register.
 *
 * b[2] = TM_PEC. If this bit is 1 when Write count is decrement to 0 then HW FSM will
 * copy contents of the PEC register to the I2C.Data register. HW FSM then clears the PEC
 * register and this bit.
 *
 * b[1] = TM_PROCEED
 * b[0] = TM_RUN
 *
 */
/* Flags used by CM cfg_start
 * #define MEC_I2C_NL_FLAG_START       0x01
 * #define MEC_I2C_NL_FLAG_RPT_START   0x02
 * #define MEC_I2C_NL_FLAG_STOP        0x04
 * #define MEC_I2C_NL_FLAG_CM_DONE_IEN 0x100u
 *
 * New flags for TM config?
 * TM_CMD has no start, rpt-start, or stop flags.
 * TM_MODE has
 * Completion register status bits
 *   TM_DONE
 *   Rpt-START on matching target write address
 *   Rpt-START on matching target read address
 *   TM_PROTOCOL_WR_CNT_ERROR
 *   TM_TR(RO) = 0 TM finished rx phase, 1 = finished tx phase
 *   TM_NAKR TM sent a NAK while it was receiving data
 *
 * Configuration register
 *   TM_DONE interrupt enable
 *   AAT interrupt enable
 */
int mec_hal_i2c_nl_tm_config(struct mec_i2c_smb_ctx *ctx, uint16_t ntx, uint16_t nrx,
                             uint32_t flags)
{
    uint32_t tm_cmd = 0;
    uint32_t tm_ien = 0;
    uint32_t elen = 0;
    uint32_t tm_ien_msk = (MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_TARG_Pos)
                           | MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_AAT_Pos));

    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    struct mec_i2c_smb_regs *regs = ctx->base;

    ctx->wrcnt = ntx;
    ctx->rdcnt = nrx;

    regs->CONFIG &= (uint32_t)~tm_ien_msk;
    regs->COMPL |= (uint32_t)MEC_I2C_SMB_COMPL_TM_STS_ALL_MSK;

    if (flags & MEC_I2C_NL_TM_FLAG_DONE_IEN) {
        tm_ien |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_TARG_Pos);
    }

    if (flags & MEC_I2C_NL_TM_FLAG_AAT_IEN) {
        tm_ien |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_AAT_Pos);
    }

#ifdef MEC5_I2C_SMB_HAS_STOP_DETECT_IRQ
    if (flags & MEC_I2C_NL_TM_FLAG_STOP_IEN) {
        tm_ien |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENI_NL_STS_Pos);
    }
#endif

    tm_cmd = (((uint32_t)nrx << MEC_I2C_SMB_TM_CMD_RDCNT_LSB_Pos)
              & MEC_I2C_SMB_TM_CMD_RDCNT_LSB_Msk);
    tm_cmd |= (((uint32_t)ntx << MEC_I2C_SMB_TM_CMD_WRCNT_LSB_Pos)
               & MEC_I2C_SMB_TM_CMD_WRCNT_LSB_Msk);

    if (flags & MEC_I2C_NL_TM_FLAG_RUN) {
        tm_cmd |= (MEC_BIT(MEC_I2C_SMB_TM_CMD_RUN_Pos)
                   | MEC_BIT(MEC_I2C_SMB_TM_CMD_PROCEED_Pos));
    }

    /* save TM_CMD in context */
    ctx->cmdctrl = (uint16_t)(tm_cmd & 0xffu);

    /* b[23:16] = TM wrCnt MSB, b[31:24] = TM rdCnt MSB */
    elen = (ntx & 0xff00u) >> 8;
    elen |= nrx & 0xff00u;
    elen <<= 16;
    regs->EXTLEN = (regs->EXTLEN & 0xffffu) | elen;
    regs->TM_CMD = tm_cmd;
    regs->CONFIG |= tm_ien;

    return MEC_RET_OK;
}

uint32_t mec_hal_i2c_nl_tm_xfr_count_get(struct mec_i2c_smb_ctx *ctx, uint8_t is_rx)
{
    uint32_t cnt = 0;

#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct mec_i2c_smb_regs *regs = ctx->base;

    cnt = regs->EXTLEN;
    if (is_rx) { /* External Controller transmits clocks and data. We capture(receive) data */
        cnt = (cnt & MEC_I2C_SMB_ELEN_TM_RDCNT_MSB_Msk) >> MEC_I2C_SMB_ELEN_TM_RDCNT_MSB_Pos;
        cnt <<= 8;
        cnt |= ((regs->TM_CMD & MEC_I2C_SMB_TM_CMD_RDCNT_LSB_Msk)
                >> MEC_I2C_SMB_TM_CMD_RDCNT_LSB_Pos);
    } else { /* External Controller generates clocks and we supply(transmit) data */
        cnt = (cnt & MEC_I2C_SMB_ELEN_TM_WRCNT_MSB_Msk) >> MEC_I2C_SMB_ELEN_TM_WRCNT_MSB_Pos;
        cnt <<= 8;
        cnt |= ((regs->TM_CMD & MEC_I2C_SMB_TM_CMD_WRCNT_LSB_Msk)
                >> MEC_I2C_SMB_TM_CMD_WRCNT_LSB_Pos);
    }

    return cnt;
}

int mec_hal_i2c_nl_tm_xfr_count_set(struct mec_i2c_smb_regs *regs, uint8_t is_read, uint32_t cnt)
{
    uint32_t cnt_lsb = 0, cnt_msb = 0;
    uint32_t cmsk = MEC_I2C_SMB_TM_CMD_WRCNT_LSB_Msk;
    uint32_t emsk = MEC_I2C_SMB_ELEN_TM_WRCNT_MSB_Msk;
    uint8_t cpos = MEC_I2C_SMB_TM_CMD_WRCNT_LSB_Pos;
    uint8_t epos = MEC_I2C_SMB_ELEN_TM_WRCNT_MSB_Pos;

#ifdef MEC_I2C_BASE_CHECK
    if (!regs) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (cnt > MEC_I2C_SMB_NL_MAX_XFR_COUNT) {
        return MEC_RET_ERR_INVAL;
    }

    /* Set MSB first in case LSB is 0 */
    if (is_read) {
        cmsk = MEC_I2C_SMB_TM_CMD_RDCNT_LSB_Msk;
        emsk = MEC_I2C_SMB_ELEN_TM_RDCNT_MSB_Msk;
        cpos = MEC_I2C_SMB_TM_CMD_RDCNT_LSB_Pos;
        epos = MEC_I2C_SMB_ELEN_TM_RDCNT_MSB_Pos;
    }

    cnt_lsb = cnt & 0xffu;
    cnt_msb = (cnt >> 8) & 0xffu;

    regs->EXTLEN = (regs->EXTLEN & (uint32_t)~emsk) | ((cnt_msb << epos) & emsk);
    regs->TM_CMD = (regs->TM_CMD & (uint32_t)~cmsk) | ((cnt_lsb << cpos) & cmsk);

    return MEC_RET_OK;
}

uint32_t mec_hal_i2c_nl_tm_transfered(struct mec_i2c_smb_ctx *ctx, uint8_t is_rx)
{
    uint32_t nxfr = 0, hwcnt = 0;

#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif

    hwcnt = mec_hal_i2c_nl_tm_xfr_count_get(ctx, is_rx);

    if (is_rx) {
        if (ctx->rdcnt >= hwcnt) {
            nxfr = ctx->rdcnt - hwcnt;
        }
    } else {
        if (ctx->wrcnt >= hwcnt) {
            nxfr = ctx->wrcnt - hwcnt;
        }
    }

    return nxfr;
}


/* ---- Power Management ----
 * Each controller has a wake enable interrupt on detection of an
 * external I2C START. This is only required if the controller is
 * being used in target mode.
 */

static uint8_t i2c_pm_save_buf[MEC5_I2C_SMB_INSTANCES];

/* Save and disable the controller */
void mec_hal_i2c_pm_save_disable(void)
{
    for (int i = 0; i < MEC5_I2C_SMB_INSTANCES; i++) {
        struct mec_i2c_smb_regs *regs = (struct mec_i2c_smb_regs *)i2c_instances[i].base_addr;

        if (regs->CONFIG & MEC_BIT(MEC_I2C_SMB_CONFIG_ENAB_Pos)) {
            regs->CONFIG &= (uint32_t)~MEC_BIT(MEC_I2C_SMB_CONFIG_ENAB_Pos);
            i2c_pm_save_buf[i] = 1;
        } else {
            i2c_pm_save_buf[i] = 0;
        }
    }
}

void mec_hal_i2c_pm_restore(void)
{
    for (int i = 0; i < MEC5_I2C_SMB_INSTANCES; i++) {
        struct mec_i2c_smb_regs *regs = (struct mec_i2c_smb_regs *)i2c_instances[i].base_addr;

        if (i2c_pm_save_buf[i]) {
            regs->CONFIG |= MEC_BIT(MEC_I2C_SMB_CONFIG_ENAB_Pos);
        }
    }
}

/* end mec_i2c.c */
