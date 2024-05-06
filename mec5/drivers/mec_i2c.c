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

#define MEC_I2C_SMB0_ECIA_INFO MEC5_ECIA_INFO(13, 0, 5, 20)
#define MEC_I2C_SMB1_ECIA_INFO MEC5_ECIA_INFO(13, 1, 5, 21)
#define MEC_I2C_SMB2_ECIA_INFO MEC5_ECIA_INFO(13, 2, 5, 22)
#define MEC_I2C_SMB3_ECIA_INFO MEC5_ECIA_INFO(13, 3, 5, 23)
#define MEC_I2C_SMB4_ECIA_INFO MEC5_ECIA_INFO(13, 4, 5, 158)

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
    {I2C_SMB0_BASE, MEC_I2C_SMB0_ECIA_INFO, MEC_PCR_I2C_SMB0 },
    {I2C_SMB1_BASE, MEC_I2C_SMB1_ECIA_INFO, MEC_PCR_I2C_SMB1 },
    {I2C_SMB2_BASE, MEC_I2C_SMB2_ECIA_INFO, MEC_PCR_I2C_SMB2 },
    {I2C_SMB3_BASE, MEC_I2C_SMB3_ECIA_INFO, MEC_PCR_I2C_SMB3 },
    {I2C_SMB4_BASE, MEC_I2C_SMB4_ECIA_INFO, MEC_PCR_I2C_SMB4 },
};

static struct mec_i2c_info const *get_i2c_smb_info(struct i2c_smb_regs *base)
{
    for (int i = 0; i < MEC5_I2C_SMB_INSTANCES; i++) {
        const struct mec_i2c_info *p = &i2c_instances[i];

        if (p->base_addr == (uintptr_t)base) {
            return p;
        }
    }

    return NULL;
}

int mec_i2c_smb_reset(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    const struct mec_i2c_info *info = get_i2c_smb_info(ctx->base);

    if (!info) {
        return MEC_RET_ERR_INVAL;
    }

    mec_pcr_blk_reset(info->pcr_id);

    return MEC_RET_OK;
}

static void i2c_timing(struct i2c_smb_regs *base, const struct mec_i2c_freq_cfg *freq_cfg)
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
    struct i2c_smb_regs *base = ctx->base;
    uint8_t control = MEC_BIT(I2C_SMB_CTRL_PIN_Pos); /* clear low level HW status */

    /* disable and set port MUX */
    base->CONFIG = (((uint32_t)config->port << I2C_SMB_CONFIG_PORT_SEL_Pos) & I2C_SMB_CONFIG_PORT_SEL_Msk);
    base->CONFIG |= MEC_BIT(I2C_SMB_CONFIG_FEN_Pos); /* enable digital filter */

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
    control = (MEC_BIT(I2C_SMB_CTRL_PIN_Pos) | MEC_BIT(I2C_SMB_CTRL_ESO_Pos)
               | MEC_BIT(I2C_SMB_CTRL_ACK_Pos));
    ctx->i2c_ctrl_cached = control;
    base->CTRL = control;

    base->CONFIG |= MEC_BIT(I2C_SMB_CONFIG_ENAB_Pos);
    for (int i = 0; i < 8; i++) {
        base->EXTLEN = 0;
    }
    base->COMPL |= MEC_I2C_SMB_COMPL_STS_RW1C_MSK;
}

int mec_i2c_smb_init(struct mec_i2c_smb_ctx *ctx, struct mec_i2c_smb_cfg *config,
                     struct mec_i2c_freq_cfg *custom_freq_cfg)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    const struct mec_i2c_info *info = get_i2c_smb_info(ctx->base);

    if (!info || !config) {
        return MEC_RET_ERR_INVAL;
    }

    ctx->devi = info->devi;

    mec_pcr_clr_blk_slp_en(info->pcr_id);
    mec_pcr_blk_reset(info->pcr_id);

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
    mec_girq_clr_src(ctx->devi);

    return MEC_RET_OK;
}

int mec_i2c_smb_girq_status_clr(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    mec_girq_clr_src(ctx->devi);

    return MEC_RET_OK;
}

/* Enable/disable I2C controller interrupt signal from propagating to NVIC */
int mec_i2c_smb_girq_ctrl(struct mec_i2c_smb_ctx *ctx, int flags)
{
    if (!ctx) {
        return MEC_RET_ERR_INVAL;
    }

    if (flags & MEC_I2C_SMB_GIRQ_DIS) {
        mec_girq_ctrl(ctx->devi, 0);
    }

    if (flags & MEC_I2C_SMB_GIRQ_CLR_STS) {
        mec_girq_clr_src(ctx->devi);
    }

    if (flags & MEC_I2C_SMB_GIRQ_EN) {
        mec_girq_ctrl(ctx->devi, 1);
    }

    return MEC_RET_OK;
}

int mec_i2c_smb_girq_status(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0;
    }

    return (int)mec_girq_src(ctx->devi);
}

int mec_i2c_smb_girq_result(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0;
    }

    return (int)mec_girq_result(ctx->devi);
}

/* check I2C.Status Not Busy bit. If set the bus is NOT owned by this controller.
 * Returns 0 if not owned or the parameter check fails.
 *         1 if bus is owned by this controller.
 */
int mec_i2c_smb_is_bus_owned(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;

    if (base->STATUS & MEC_BIT(I2C_SMB_STATUS_NBB_Pos)) {
        return 0;
    }

    return 1;
}

int mec_i2c_smb_ctrl_set(struct mec_i2c_smb_ctx * ctx, uint8_t ctrl)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;

    ctx->i2c_ctrl_cached = ctrl;
    base->CTRL = ctrl;

    return MEC_RET_OK;
}

uint8_t mec_i2c_smb_ctrl_get(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0u;
    }

    return ctx->i2c_ctrl_cached;
}

/* Re-arm Target mode receive after an external STOP.  */
int mec_i2c_smb_rearm_target_rx(struct mec_i2c_smb_ctx *ctx)
{
    uint8_t ctr = (MEC_BIT(I2C_SMB_CTRL_PIN_Pos) | MEC_BIT(I2C_SMB_CTRL_ESO_Pos)
                   | MEC_BIT(I2C_SMB_CTRL_ACK_Pos));

    return mec_i2c_smb_ctrl_set(ctx, ctr);
}

int mec_i2c_smb_auto_ack_enable(struct mec_i2c_smb_ctx *ctx, uint8_t ien)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint8_t ctr = MEC_BIT(I2C_SMB_CTRL_ESO_Pos) | MEC_BIT(I2C_SMB_CTRL_ACK_Pos);

    if (ien) {
        ctr |= MEC_BIT(I2C_SMB_CTRL_ENI_Pos);
    }

    ctx->i2c_ctrl_cached = ctr;
    base->CTRL = ctr;
    return MEC_RET_OK;
}

int mec_i2c_smb_auto_ack_disable(struct mec_i2c_smb_ctx *ctx, uint8_t ien)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint8_t ctr = MEC_BIT(I2C_SMB_CTRL_ESO_Pos);

    if (ien) {
        ctr |= MEC_BIT(I2C_SMB_CTRL_ENI_Pos);
    }

    ctx->i2c_ctrl_cached = ctr;
    base->CTRL = ctr;
    return MEC_RET_OK;
}

int mec_i2c_smb_idle_intr_enable(struct mec_i2c_smb_ctx *ctx, uint8_t enable)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    struct i2c_smb_regs *base = ctx->base;

    if (enable) {
        base->CONFIG |= MEC_BIT(I2C_SMB_COMPL_IDLE_Pos);
    } else {
        base->CONFIG &= (uint32_t)~MEC_BIT(I2C_SMB_COMPL_IDLE_Pos);
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
uint32_t mec_i2c_smb_status(struct mec_i2c_smb_ctx *ctx, uint8_t clear)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint32_t status = base->STATUS;
    uint32_t compl = base->COMPL;

    if (clear) {
        base->COMPL = compl;
    }

    return (status | (compl & 0xffffff00u));
}

uint32_t mec_i2c_smb_wake_status(struct mec_i2c_smb_ctx *ctx)
{
    if (!ctx) {
        return 0;
    }

    struct i2c_smb_regs *base = ctx->base;

    return base->WAKE_STS;
}

void mec_i2c_smb_wake_status_clr(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return;
    }
#endif

    struct i2c_smb_regs *base = ctx->base;

    base->WAKE_STS = MEC_BIT(I2C_SMB_WAKE_STS_START_DET_Pos);
}

int mec_i2c_smb_is_idle_intr(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint32_t cfg = base->CONFIG & MEC_BIT(I2C_SMB_CONFIG_ENI_IDLE_Pos);
    uint32_t compl = base->COMPL & MEC_BIT(I2C_SMB_COMPL_IDLE_Pos);

    if (cfg && compl) {
        return 1;
    }

    return 0;
}

int mec_i2c_smb_idle_status_clr(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;

    base->COMPL |= MEC_BIT(I2C_SMB_COMPL_IDLE_Pos);

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
int mec_i2c_smb_start_gen(struct mec_i2c_smb_ctx *ctx, uint8_t target_addr, int flags)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint8_t ctr = (MEC_BIT(I2C_SMB_CTRL_ESO_Pos) | MEC_BIT(I2C_SMB_CTRL_STA_Pos)
                   | MEC_BIT(I2C_SMB_CTRL_ACK_Pos));

    if (flags & MEC_I2C_SMB_BYTE_ENI) {
        ctr |= MEC_BIT(I2C_SMB_CTRL_ENI_Pos);
    }

    if (base->STATUS & MEC_BIT(I2C_SMB_STATUS_NBB_Pos)) {
        ctr |= MEC_BIT(I2C_SMB_CTRL_PIN_Pos);
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

int mec_i2c_smb_stop_gen(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint8_t control = (MEC_BIT(I2C_SMB_CTRL_PIN_Pos) | MEC_BIT(I2C_SMB_CTRL_ESO_Pos)
                       | MEC_BIT(I2C_SMB_CTRL_ACK_Pos) | MEC_BIT(I2C_SMB_CTRL_STO_Pos));

    /* Nothing to do. Controller does not own the bus at this time */
    if (base->STATUS & MEC_BIT(I2C_SMB_STATUS_NBB_Pos)) {
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
int mec_i2c_smb_xmit_byte(struct mec_i2c_smb_ctx *ctx, uint8_t msg_byte)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;

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
int mec_i2c_smb_read_byte(struct mec_i2c_smb_ctx *ctx, uint8_t *msg_byte)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint8_t b = base->DATA;

    if (msg_byte) {
        *msg_byte = b;
    }

    return MEC_RET_OK;
}

int mec_i2c_smb_bbctrl(struct mec_i2c_smb_ctx *ctx, uint8_t enable, uint8_t pin_drive)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;
    uint8_t bbctr = 0u;

    if (enable) {
        bbctr |= MEC_BIT(I2C_SMB_BBCTRL_BBEN_Pos);
        if (!(pin_drive & MEC_BIT(MEC_I2C_BB_SCL_POS))) { /* drive low? */
            bbctr |= MEC_BIT(I2C_SMB_BBCTRL_CLDIR_Pos);
        }
        if (!(pin_drive & MEC_BIT(MEC_I2C_BB_SDA_POS))) { /* drive low? */
            bbctr |= MEC_BIT(I2C_SMB_BBCTRL_DADIR_Pos);
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
uint8_t mec_i2c_smb_bbctrl_pin_states(struct mec_i2c_smb_ctx *ctx)
{
#ifdef MEC_I2C_BASE_CHECK
    if (!ctx || !ctx->base) {
        return 0x3u;
    }
#endif
    struct i2c_smb_regs *base = ctx->base;

    return (base->BBCTRL >> I2C_SMB_BBCTRL_BBCLKI_Pos) & 0x3u;
}
/* end mec_i2c.c */
