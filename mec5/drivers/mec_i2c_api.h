/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_I2C_API_H
#define _MEC_I2C_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_I2C_SMB_CFG_CUST_FREQ 0x01u

enum mec_i2c_status {
    MEC_I2C_STS_LL_NBB_POS = 0,
    MEC_I2C_STS_LL_LAB_POS,
    MEC_I2C_STS_LL_AAS_POS,
    MEC_I2C_STS_LL_LRB_AD0_POS,
    MEC_I2C_STS_LL_BER_POS,
    MEC_I2C_STS_LL_STO_POS,
    MEC_I2C_STS_LL_SAD_POS,
    MEC_I2C_STS_LL_NIPEND_POS,
    MEC_I2C_STS_DEV_TMOUT_POS = 8, /* device timeout */
    MEC_I2C_STS_CM_CUM_TMOUT_POS, /* controller mode cumulative timeout */
    MEC_I2C_STS_TM_CUM_TMOUT_POS, /* target mode cumulative timeout */
    MEC_I2C_STS_CHDL_POS,
    MEC_I2C_STS_CHDH_POS,
    MEC_I2C_STS_BERR_POS,
    MEC_I2C_STS_LAB_POS,
    MEC_I2C_STS_TM_NACK_POS = 16,
    MEC_I2C_STS_TM_RX_DONE_RO_POS,
    MEC_I2C_STS_TM_PERR_POS = 19, /* Target mode protocol error */
    MEC_I2C_STS_TM_RPTS_RD_POS, /* Target mode repeated start with read address detected */
    MEC_I2C_STS_TM_RPTS_WR_POS, /* Target mode repeated start with write address detected */
    MEC_I2C_STS_CM_TX_NACK_POS = 24, /* Controller mode transmit received NACK from target */
    MEC_I2C_STS_CM_TX_DONE_RO_POS,
    MEC_I2C_STS_IDLE_POS = 29,
    MEC_I2C_STS_CM_DONE,
    MEC_I2C_STS_TM_DONE,
};

enum mec_i2c_ctrl {
    MEC_I2C_CTRL_ACK_EN_POS = 0,
    MEC_I2C_CTRL_STO_GEN_POS,
    MEC_I2C_CTRL_STA_EN_POS,
    MEC_I2C_CTRL_ENI_POS,
    MEC_I2C_CTRL_ESO_POS = 6,
    MEC_I2C_CTRL_STS_CLR_POS,
};

enum mec_i2c_std_freq {
    MEC_I2C_STD_FREQ_100K = 0,
    MEC_I2C_STD_FREQ_400K,
    MEC_I2C_STD_FREQ_1M,
    MEC_I2C_STD_FREQ_MAX
};

enum mec_i2c_start {
    MEC_I2C_NO_START = 0,
    MEC_I2C_NORM_START,
    MEC_I2C_RPT_START,
};

enum mec_i2c_ien {
    MEC_I2C_IEN_BYTE_MODE_POS = 0,
    MEC_I2C_IEN_IDLE_POS,
};

struct mec_i2c_freq_cfg {
    uint32_t freqhz;
    uint32_t idle_scaling;
    uint32_t timeout_scaling;
    uint32_t data_timing;
    uint16_t bus_clk;
    uint8_t rpt_start_hold_time;
};

struct mec_i2c_smb_cfg {
    uint8_t std_freq;
    uint8_t cfg_flags;
    uint8_t port;
    uint8_t target_addr1;
    uint8_t target_addr2;
};

/* forward declaration */
struct i2c_smb_regs;

/* MEC I2C-SMB Control structure required by API */
struct mec_i2c_smb_ctx {
    struct i2c_smb_regs *base;
    uint32_t devi;
    uint8_t i2c_ctrl_cached;
    uint8_t rsvd[3];
};

int mec_i2c_smb_reset(struct mec_i2c_smb_ctx *ctx);

int mec_i2c_smb_init(struct mec_i2c_smb_ctx *ctx, struct mec_i2c_smb_cfg *config,
                     struct mec_i2c_freq_cfg *custom_freq_cfg);

int mec_i2c_smb_ctrl_set(struct mec_i2c_smb_ctx *ctx, uint8_t ctrl);
uint8_t mec_i2c_smb_ctrl_get(struct mec_i2c_smb_ctx *ctx);

int mec_i2c_smb_is_bus_owned(struct mec_i2c_smb_ctx *ctx);

int mec_i2c_smb_auto_ack_enable(struct mec_i2c_smb_ctx *ctx, uint8_t ien);
int mec_i2c_smb_auto_ack_disable(struct mec_i2c_smb_ctx *ctx, uint8_t ien);

#define MEC_I2C_SMB_GIRQ_EN 0x1
#define MEC_I2C_SMB_GIRQ_DIS 0x2
#define MEC_I2C_SMB_GIRQ_CLR_STS 0x4

int mec_i2c_smb_girq_ctrl(struct mec_i2c_smb_ctx *ctx, int flags);
int mec_i2c_smb_girq_status_clr(struct mec_i2c_smb_ctx *ctx);
int mec_i2c_smb_girq_status(struct mec_i2c_smb_ctx *ctx);
int mec_i2c_smb_girq_result(struct mec_i2c_smb_ctx *ctx);

uint32_t mec_i2c_smb_wake_status(struct mec_i2c_smb_ctx *ctx);
void mec_i2c_smb_wake_status_clr(struct mec_i2c_smb_ctx *ctx);

int mec_i2c_smb_idle_intr_enable(struct mec_i2c_smb_ctx *ctx, uint8_t enable);

uint32_t mec_i2c_smb_status(struct mec_i2c_smb_ctx *ctx, uint8_t clear);
int mec_i2c_smb_is_idle_intr(struct mec_i2c_smb_ctx *ctx);
int mec_i2c_smb_idle_status_clr(struct mec_i2c_smb_ctx *ctx);

/* enable per byte interrupt */
#define MEC_I2C_SMB_BYTE_ENI 0x01

int mec_i2c_smb_start_gen(struct mec_i2c_smb_ctx *ctx, uint8_t target_addr, int flags);

/* Generate an I2C STOP only if the bus owned by this controller */
int mec_i2c_smb_stop_gen(struct mec_i2c_smb_ctx *ctx);

int mec_i2c_smb_rearm_target_rx(struct mec_i2c_smb_ctx *ctx);

int mec_i2c_smb_xmit_byte(struct mec_i2c_smb_ctx *ctx, uint8_t msg_byte);

int mec_i2c_smb_read_byte(struct mec_i2c_smb_ctx *ctx, uint8_t *msg_byte);

#define MEC_I2C_BB_SCL_POS 0
#define MEC_I2C_BB_SDA_POS 1

int mec_i2c_smb_bbctrl(struct mec_i2c_smb_ctx *ctx, uint8_t enable, uint8_t pin_drive);
uint8_t mec_i2c_smb_bbctrl_pin_states(struct mec_i2c_smb_ctx *ctx);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_I2C_API_H */
