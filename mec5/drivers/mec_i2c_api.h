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

#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

#define MEC_I2C_SMB_BASE(i) (MEC_I2C_SMB0_BASE + ((uint32_t)(i) * 0x400u))

#define MEC_I2C_SMB_BAUD_CLK_FREQ_HZ 16000000u

#define MEC_I2C_SMB_CFG_CUST_FREQ 0x01u
#define MEC_I2C_SMB_CFG_PRESERVE_TARGET_ADDRS 0x02u

/* I2C Network layer HW limited to 16-bit byte counts for TX and RX */
#define MEC_I2C_SMB_NL_MAX_XFR_COUNT 0xffffu

enum mec_i2c_status {
    MEC_I2C_STS_LL_NBB_POS = 0,
    MEC_I2C_STS_LL_LAB_POS,
    MEC_I2C_STS_LL_AAT_POS, /* addressed as target: match one of OWN_ADDR */
    MEC_I2C_STS_LL_LRB_AD0_POS,
    MEC_I2C_STS_LL_BER_POS,
    MEC_I2C_STS_LL_STO_POS,
    MEC_I2C_STS_LL_SAD_POS, /* SMBus address decoded */
    MEC_I2C_STS_LL_NIPEND_POS,
    MEC_I2C_STS_DEV_TMOUT_POS = 8, /* device timeout */
    MEC_I2C_STS_CM_CUM_TMOUT_POS, /* controller mode cumulative timeout */
    MEC_I2C_STS_TM_CUM_TMOUT_POS, /* target mode cumulative timeout */
    MEC_I2C_STS_CHDL_POS,
    MEC_I2C_STS_CHDH_POS,
    MEC_I2C_STS_BERR_POS,
    MEC_I2C_STS_LAB_POS,
    MEC_I2C_STS_TM_NACKR_POS = 16,
    MEC_I2C_STS_TM_RCV_DONE_RO_POS, /* Valid when TM_DONE=1. Receive phase finished else transmit phase finished */
    MEC_I2C_STS_TM_PERR_POS = 19, /* Target mode protocol error */
    MEC_I2C_STS_TM_RPTS_RD_POS, /* Target mode repeated start with read address detected */
    MEC_I2C_STS_TM_RPTS_WR_POS, /* Target mode repeated start with write address detected */
    MEC_I2C_STS_CM_TX_NACK_POS = 24, /* Controller mode transmit received NACK from target */
    MEC_I2C_STS_CM_TX_DONE_RO_POS,
    MEC_I2C_STS_IDLE_POS = 29,
    MEC_I2C_STS_CM_DONE_POS,
    MEC_I2C_STS_TM_DONE_POS,
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

enum mec_i2c_target_mode_addr {
    MEC_I2C_TARGET_ADDR_0 = 0,
    MEC_I2C_TARGET_ADDR_1,
    MEC_I2C_TARGET_ADDR_MAX,
};

enum mec_i2c_start {
    MEC_I2C_NO_START = 0,
    MEC_I2C_NORM_START,
    MEC_I2C_RPT_START,
};

enum mec_i2c_ien {
    MEC_I2C_IEN_BYTE_MODE_POS = 0,
    MEC_I2C_IEN_IDLE_POS,
    MEC_I2C_NL_IEN_CM_DONE_POS,
    MEC_I2C_NL_IEN_TM_DONE_POS,
    MEC_I2C_NL_IEN_AAT_POS,
};

enum mec_i2c_nl_events {
    MEC_I2C_NL_EVENT_NACK_POS,
    MEC_I2C_NL_EVENT_BERR_POS,
    MEC_I2C_NL_EVENT_LAB_POS,
    MEC_I2C_NL_EVENT_IDLE_POS,
    MEC_I2C_NL_EVENT_PAUSE_POS,
    MEC_I2C_NL_EVENT_DONE_POS,
    MEC_I2C_NL_EVENT_DMA_DONE_POS,
    MEC_I2C_NL_EVENT_DMA_ERR_POS,
};

enum mec_i2c_port {
    MEC_I2C_PORT_0 = 0,
    MEC_I2C_PORT_1,
    MEC_I2C_PORT_2,
    MEC_I2C_PORT_3,
    MEC_I2C_PORT_4,
    MEC_I2C_PORT_5,
    MEC_I2C_PORT_6,
    MEC_I2C_PORT_7,
    MEC_I2C_PORT_8,
    MEC_I2C_PORT_9,
    MEC_I2C_PORT_10,
    MEC_I2C_PORT_11,
    MEC_I2C_PORT_12,
    MEC_I2C_PORT_13,
    MEC_I2C_PORT_14,
    MEC_I2C_PORT_15,
    MEC_I2C_PORT_MAX,
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
struct mec_i2c_smb_regs;

/* MEC I2C-SMB Control structure required by API */
struct mec_i2c_smb_ctx {
    struct mec_i2c_smb_regs *base;
    uint32_t devi;
    uint16_t wrcnt;
    uint16_t rdcnt;
    uint16_t cmdctrl;
    uint8_t i2c_ctrl_cached;
    uint8_t rsvd[1];
};

int mec_hal_i2c_smb_reset(struct mec_i2c_smb_ctx *ctx);

int mec_hal_i2c_smb_init(struct mec_i2c_smb_ctx *ctx, struct mec_i2c_smb_cfg *config,
                         struct mec_i2c_freq_cfg *custom_freq_cfg);

int mec_hal_i2c_smb_get_id(struct mec_i2c_smb_regs *regs, uint8_t *ctrl_id);

int mec_hal_i2c_smb_bus_freq_get(struct mec_i2c_smb_regs *regs, uint32_t *bus_freq_hz);
int mec_hal_i2c_smb_bus_freq_get_by_ctx(struct mec_i2c_smb_ctx *ctx, uint32_t *bus_freq_hz);
int mec_hal_i2c_smb_bus_freq_get_by_id(uint8_t i2c_id, uint32_t *bus_freq_hz);

uint8_t mec_hal_i2c_smb_port_get(struct mec_i2c_smb_regs *regs);
uint8_t mec_hal_i2c_smb_port_set(struct mec_i2c_smb_regs *regs, uint8_t port);

int mec_hal_i2c_smb_ctrl_set(struct mec_i2c_smb_ctx *ctx, uint8_t ctrl);
uint8_t mec_hal_i2c_smb_ctrl_get(struct mec_i2c_smb_ctx *ctx);

int mec_hal_i2c_cmd_ack_ctrl(struct mec_i2c_smb_ctx *ctx, uint8_t ack_en);

int mec_hal_i2c_smb_is_bus_owned(struct mec_i2c_smb_ctx *ctx);

int mec_hal_i2c_smb_get_target_addr(struct mec_i2c_smb_ctx *ctx, uint8_t target_id,
                                    uint16_t *target_addr);
int mec_hal_i2c_smb_set_target_addr(struct mec_i2c_smb_ctx *ctx, uint8_t target_id,
                                    uint16_t target_addr);
int mec_hal_i2c_smb_clr_target_addr(struct mec_i2c_smb_ctx *ctx, uint16_t target_addr);

int mec_hal_i2c_smb_auto_ack_enable(struct mec_i2c_smb_ctx *ctx, uint8_t ien);
int mec_hal_i2c_smb_auto_ack_disable(struct mec_i2c_smb_ctx *ctx, uint8_t ien);

#define MEC_I2C_SMB_GIRQ_EN 0x1
#define MEC_I2C_SMB_GIRQ_DIS 0x2
#define MEC_I2C_SMB_GIRQ_CLR_STS 0x4

int mec_hal_i2c_smb_girq_ctrl(struct mec_i2c_smb_ctx *ctx, int flags);
int mec_hal_i2c_smb_girq_status_clr(struct mec_i2c_smb_ctx *ctx);
int mec_hal_i2c_smb_girq_status(struct mec_i2c_smb_ctx *ctx);
int mec_hal_i2c_smb_girq_result(struct mec_i2c_smb_ctx *ctx);

uint32_t mec_hal_i2c_smb_get_nvic_id(uint8_t i2c_ctrl_id);

uint32_t mec_hal_i2c_smb_wake_status(struct mec_i2c_smb_ctx *ctx);
void mec_hal_i2c_smb_wake_status_clr(struct mec_i2c_smb_ctx *ctx);

int mec_hal_i2c_smb_idle_intr_enable(struct mec_i2c_smb_ctx *ctx, uint8_t enable);

/* mask are enum mec_i2c_ien values */
int mec_hal_i2c_smb_intr_ctrl(struct mec_i2c_smb_ctx *ctx, uint32_t mask, uint8_t en);

uint32_t mec_hal_i2c_smb_status(struct mec_i2c_smb_ctx *ctx, uint8_t clear);
int mec_hal_i2c_smb_is_idle_intr(struct mec_i2c_smb_ctx *ctx);
int mec_hal_i2c_smb_is_idle_ien(struct mec_i2c_smb_ctx *ctx);
int mec_hal_i2c_smb_idle_status_clr(struct mec_i2c_smb_ctx *ctx);

bool mec_hal_i2c_smb_is_aat_ien(struct mec_i2c_smb_ctx *ctx);

/* enable per byte interrupt */
#define MEC_I2C_SMB_BYTE_ENI 0x01

int mec_hal_i2c_smb_start_gen(struct mec_i2c_smb_ctx *ctx, uint8_t target_addr, int flags);

/* Generate an I2C STOP only if the bus owned by this controller */
int mec_hal_i2c_smb_stop_gen(struct mec_i2c_smb_ctx *ctx);

int mec_hal_i2c_smb_rearm_target_rx(struct mec_i2c_smb_ctx *ctx);

int mec_hal_i2c_smb_xmit_byte(struct mec_i2c_smb_ctx *ctx, uint8_t msg_byte);

int mec_hal_i2c_smb_read_byte(struct mec_i2c_smb_ctx *ctx, uint8_t *msg_byte);

#define MEC_I2C_BB_SCL_POS 0
#define MEC_I2C_BB_SDA_POS 1

int mec_hal_i2c_smb_bbctrl(struct mec_i2c_smb_ctx *ctx, uint8_t enable, uint8_t pin_drive);
uint8_t mec_hal_i2c_smb_bbctrl_pin_states(struct mec_i2c_smb_ctx *ctx);

/* ---- I2C Network Layer ---- */
struct mec_i2c_smb_nl_state {
    uint16_t wrcnt;
    uint16_t rdcnt;
    uint16_t ctrl;
};

#define MEC_I2C_NL_FLAG_START       0x01
#define MEC_I2C_NL_FLAG_RPT_START   0x02
#define MEC_I2C_NL_FLAG_STOP        0x04
#define MEC_I2C_NL_FLAG_FLUSH_BUF   0x10u
#define MEC_I2C_NL_FLAG_CM_DONE_IEN 0x100u
#define MEC_I2C_NL_FLAG_IDLE_IEN    0x200u

int mec_hal_i2c_nl_cm_cfg_start(struct mec_i2c_smb_ctx *ctx, uint16_t ntx, uint16_t nrx,
                                uint32_t flags);

/* I2C-NL CM start without context. If cm_cm_val is not NULL it saves the synthesized
 * CM_CMD register value into cm_cm_val before writing HW CM_CMD register.
 */
int mec_hal_i2c_nl_cm_start(struct mec_i2c_smb_regs *i2c_regs, uint16_t ntx, uint16_t nrx,
                            uint32_t flags, uint32_t *cm_cmd_val);

int mec_hal_i2c_nl_cm_start_by_id(uint8_t i2c_ctrl_id, uint16_t ntx, uint16_t nrx, uint32_t flags,
                                  uint32_t *cm_cmd_val);

#define MEC_I2C_NL_CM_SEL 0
#define MEC_I2C_NL_TM_SEL 1

int mec_hal_i2c_nl_cmd_clear(struct mec_i2c_smb_ctx *ctx, uint8_t is_tm);
int mec_hal_i2c_nl_cm_proceed(struct mec_i2c_smb_ctx *ctx);
int mec_hal_i2c_nl_tm_proceed(struct mec_i2c_smb_ctx *ctx);

uint32_t mec_hal_i2c_nl_cmd_get(struct mec_i2c_smb_ctx *ctx, uint8_t is_tm);

int mec_hal_i2c_nl_state_get(struct mec_i2c_smb_regs *regs, struct mec_i2c_smb_nl_state *state,
                             uint8_t is_tm);

uint32_t mec_hal_i2c_nl_get_events(struct mec_i2c_smb_ctx *ctx, uint8_t is_tm);

#define MEC_I2C_NL_CM_DIR_WR 0
#define MEC_I2C_NL_CM_DIR_RD 1

uint32_t mec_hal_i2c_nl_cm_xfr_count_get(struct mec_i2c_smb_regs *regs, uint8_t is_read);
int mec_hal_i2c_nl_cm_xfr_count_set(struct mec_i2c_smb_regs *regs, uint8_t is_read, uint32_t cnt);

static inline void mec_hal_i2c_nl_flush_buffers(struct mec_i2c_smb_regs *regs)
{
    regs->CONFIG |= (MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_TM_TXB_Pos)
                     | MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_TM_RXB_Pos)
                     | MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_CTXB_Pos)
                     | MEC_BIT(MEC_I2C_SMB_CONFIG_FLUSH_CRXB_Pos));
}

/* Get copy of address transmitted by external controller.
 * b[0]=nW/R, b[7:1]=7-bit I2C target address.
 * Reading this register does not trigger HW FSM to change state.
 */
static inline uint8_t mec_hal_i2c_nl_shad_addr_get(struct mec_i2c_smb_regs *regs)
{
    return (uint8_t)(regs->SHAD_ADDR & 0xffu);
}

/* Get copy of last data byte transmitted or received.
 * Reading this register does not trigger HW FSM to change state.
 */
static inline uint8_t mec_hal_i2c_nl_shad_data_get(struct mec_i2c_smb_regs *regs)
{
    return (uint8_t)(regs->SHAD_DATA & 0xffu);
}

/* ---- I2C-NL Target Mode ---- */
#define MEC_I2C_NL_TM_FLAG_DONE_IEN 0x01
#define MEC_I2C_NL_TM_FLAG_AAT_IEN  0x02
#ifdef MEC5_I2C_SMB_HAS_STOP_DETECT_IRQ
#define MEC_I2C_NL_TM_FLAG_STOP_IEN  0x04
#endif
#define MEC_I2C_NL_TM_FLAG_RUN 0x08

int mec_hal_i2c_nl_tm_config(struct mec_i2c_smb_ctx *ctx, uint16_t ntx, uint16_t nrx,
                             uint32_t flags);

#define MEC_I2C_NL_TM_DIR_TX 0 /* We supply data to external Controller */
#define MEC_I2C_NL_TM_DIR_RX 1 /* We clock in data from external Controller */

uint32_t mec_hal_i2c_nl_tm_xfr_count_get(struct mec_i2c_smb_ctx *ctx, uint8_t is_rx);
int mec_hal_i2c_nl_tm_xfr_count_set(struct mec_i2c_smb_regs *regs, uint8_t is_read, uint32_t cnt);
uint32_t mec_hal_i2c_nl_tm_transfered(struct mec_i2c_smb_ctx *ctx, uint8_t is_rx);

/* ---- Power Management ---- */
void mec_hal_i2c_pm_save_disable(void);
void mec_hal_i2c_pm_restore(void);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_I2C_API_H */
