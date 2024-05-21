/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_I3C_API_H_
#define _MEC_I3C_API_H_

#include "mec_defs.h"
#include "mec_i3c_pvt.h"

/* MEC I3C Control structure required by API */
struct mec_i3c_ctx {
    uintptr_t base;
    uint32_t devi;
};

#define MAX_I3C_MSGS                    32U
#define I3C_HOT_JOIN_ADDR               0x2U
#define IBI_QUEUE_STATUS_IBI_ID(x)      (((x) & GENMASK(15, 8)) >> 8U)
#define IBI_QUEUE_STATUS_DATA_LEN(x)    ((x) & GENMASK(7, 0))
#define IBI_QUEUE_IBI_ADDR(x)           (IBI_QUEUE_STATUS_IBI_ID(x) >> 1U)
#define IBI_QUEUE_IBI_RNW(x)            (IBI_QUEUE_STATUS_IBI_ID(x) & MEC_BIT(0))
#define IBI_TYPE_MR(x)                                                         \
    ((IBI_QUEUE_IBI_ADDR(x) != I3C_HOT_JOIN_ADDR) && !IBI_QUEUE_IBI_RNW(x))
#define IBI_TYPE_HJ(x)                                                         \
    ((IBI_QUEUE_IBI_ADDR(x) == I3C_HOT_JOIN_ADDR) && !IBI_QUEUE_IBI_RNW(x))
#define IBI_TYPE_SIRQ(x)                                                        \
    ((IBI_QUEUE_IBI_ADDR(x) != I3C_HOT_JOIN_ADDR) && IBI_QUEUE_IBI_RNW(x))

#define RESPONSE_NO_ERROR               0U
#define RESPONSE_ERROR_CRC              1U
#define RESPONSE_ERROR_PARITY           2U
#define RESPONSE_ERROR_FRAME            3U
#define RESPONSE_ERROR_IBA_NACK         4U
#define RESPONSE_ERROR_ADDRESS_NACK     5U
#define RESPONSE_ERROR_OVER_UNDER_FLOW  6U
#define RESPONSE_ERROR_TRANSF_ABORT     8U
#define RESPONSE_ERROR_I2C_W_NACK_ERR   9U

#define TGT_MIPI_MFG_ID(x)              ((x & MEC_GENMASK64(47, 33)) >> 33U)
#define TGT_PROV_ID_SEL(x)              ((x & MEC_GENMASK64(32, 32)) >> 32U)

#define TGT_PART_ID(x)                  ((x & MEC_GENMASK64(31, 16)) >> 16U)
#define TGT_INST_ID(x)                  ((x & MEC_GENMASK64(15, 12)) >> 12U)
#define TGT_PID_DCR(x)                  ((x & MEC_GENMASK64(11, 0))  >> 0U)

#define MEC_I3C_GIRQ_EN 0x1
#define MEC_I3C_GIRQ_DIS 0x2
#define MEC_I3C_GIRQ_CLR_STS 0x4

enum mec_i3c_channels
{
    MEC_I3C_PRIM_CTRLR,
    MEC_I3C_SEC_CTRLR,
    MEC_I3C_CHAN_0 = MEC_I3C_PRIM_CTRLR,
    MEC_I3C_CHAN_1 = MEC_I3C_SEC_CTRLR,
    MEC_I3C_MAX_CHAN
};

enum mec_i3c_role_cfg
{
    MEC_I3C_ROLE_CFG_PRIM_CTRLR = 1U,
    MEC_I3C_ROLE_CFG_SEC_CTRLR = 3U,
    MEC_I3C_ROLE_CFG_TGT = 4U,
    MEC_I3C_MAX_ROLES
};

/* configuration bit definitions */
enum mec_config_bits
{
     sbit_CONFG_ENABLE                  = (1U << 0) // BIT_0_MASK
    ,sbit_MODE_TARGET                   = (1U << 1) // BIT_1_MASK
    ,sbit_HOTJOIN_DISABLE               = (1U << 2) // BIT_2_MASK
    ,sbit_DMA_MODE                      = (1U << 3) // BIT_3_MASK
};

enum mec_i3c_xfer_speeds {
    MEC_XFER_SPEED_SDR0 = 0 /* 12.5 MHz (~12.5Mbps)*/
   ,MEC_XFER_SPEED_SDR1     /* 8MHz                */
   ,MEC_XFER_SPEED_SDR2     /* 6MHz                */
   ,MEC_XFER_SPEED_SDR3     /* 4MHz                */
   ,MEC_XFER_SPEED_SDR4     /* 2MHz                */
   ,MEC_XFER_SPEED_HDR_TS   /* Not supported on KF */
   ,MEC_XFER_SPEED_HDR_DDR  /* 12.5MHz  (~25Mbps)  */
};

enum mec_i2c_xfer_speeds {
    MEC_XFER_SPEED_FM    = 0
   ,MEC_XFER_SPEED_FMP
};

enum mec_mxds_max_wr_speed {
     MEC_MXDS_MAX_WR_SPEED_12P5MHZ = 0
    ,MEC_MXDS_MAX_WR_SPEED_8MHZ
    ,MEC_MXDS_MAX_WR_SPEED_6MHZ
    ,MEC_MXDS_MAX_WR_SPEED_4MHZ
    ,MEC_MXDS_MAX_WR_SPEED_2MHZ
};

enum mec_mxds_max_rd_speed {
     MEC_MXDS_MAX_RD_SPEED_12P5MHZ = 0
    ,MEC_MXDS_MAX_RD_SPEED_8MHZ
    ,MEC_MXDS_MAX_RD_SPEED_6MHZ
    ,MEC_MXDS_MAX_RD_SPEED_4MHZ
    ,MEC_MXDS_MAX_RD_SPEED_2MHZ
};

enum mec_mxds_tsco {
     MEC_MXDS_TSCO_8NS = 0
    ,MEC_MXDS_TSCO_9NS
    ,MEC_MXDS_TSCO_10NS
    ,MEC_MXDS_TSCO_11NS
    ,MEC_MXDS_TSCO_12NS
};

/**
 * @brief Structure to use by target to raise Target Interrupt Request (SIR)
 */
struct mec_i3c_raise_IBI_SIR {

    /** Pointer to buffer for SIR Data */
    uint8_t *data_buf;

    /** SIR data length */
    uint8_t data_len;

    /** Mandatory Byte */
    uint8_t mdb;

};

/**
 * @brief Structure to use for DO CCC procedure
 */
struct mec_i3c_DO_CCC {

    /** Pointer to buffer for TX/RX Data */
    uint8_t *data_buf;

    /** Number of bytes to read/write */
    uint16_t data_len;

    /** CCC Id */
    uint8_t ccc_id;

    /** Target index */
    uint8_t tgt_idx;

    /** Defining Byte (optional) */
    uint8_t defining_byte;

    /** Set True for Read */
    bool read;

    /** Set True if defining byte is valid */
    bool defining_byte_valid;
};

/**
 * @brief Structure to use for Enable IBI procedure
 */
struct mec_i3c_IBI_SIR {

    /** DAT start address */
    uint16_t DAT_start;

    /** Target index in DAT */
    uint8_t tgt_dat_idx;

    /** True if target's IBI has payload */
    bool ibi_has_payload;
};

/* Single command/transfer */
struct mec_i3c_dw_cmd {

    uint32_t cmd;

    uint32_t arg;

    /** Pointer to buffer for TX/RX Data */
    uint8_t *data_buf;

    /** Number of bytes to read/write */
    uint16_t data_len;

#if CONFIG_I3C_ENABLE_THRESHOLDS_INTR
    /** Remaining data length - used with thresholds */
    uint16_t rem_data_len;
#endif

    /** Target index */
    uint8_t tgt_idx;

    /** Set True for Read */
    bool read;

    /** Set True to enable PEC */
    bool pec_en;

    /** Set True for STOP */
    bool stop;

    /** Xfer speed */
    uint8_t xfer_speed;
};

/**
 * @brief Structure to use for DO XFER procedure
 */
struct mec_i3c_XFER {

    struct mec_i3c_dw_cmd cmds[MAX_I3C_MSGS];
};

typedef  void (*MEC_I3C_CALLBACK) (uintptr_t context);

typedef struct
{
    MEC_I3C_CALLBACK callback;
    uintptr_t context;
} MEC_I3C_OBJECT;

void MEC_HAL_I3C_Soft_Reset(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Controller_Clk_Init(struct mec_i3c_ctx *ctx, uint32_t core_clk_rate_mhz,
                                     uint32_t i3c_freq);

void MEC_HAL_I3C_Controller_Clk_Cfg(struct mec_i3c_ctx *ctx, uint32_t core_clk_rate_mhz,
                                    uint32_t i3c_freq);

void MEC_HAL_I3C_Controller_Clk_I2C_Init(struct mec_i3c_ctx *ctx, uint32_t core_clk_rate_mhz);

void MEC_HAL_I3C_Target_Init(struct mec_i3c_ctx *ctx, uint32_t core_clk_rate_mhz,
                             uint16_t *max_rd_len, uint16_t *max_wr_len);

void MEC_HAL_I3C_Controller_Interrupts_Init(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Thresholds_Init(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Thresholds_Response_buf_set(struct mec_i3c_ctx *ctx, uint8_t threshold);

void MEC_HAL_I3C_Host_Config(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Sec_Host_Config(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Enable(struct mec_i3c_ctx *ctx, uint8_t address, uint8_t config);

void MEC_HAL_I3C_DO_DAA(struct mec_i3c_ctx *ctx, uint8_t tgt_idx, uint8_t tgts_count,
                        uint8_t *tid_xfer);

void MEC_HAL_I3C_DO_CCC(struct mec_i3c_ctx *ctx, struct mec_i3c_DO_CCC *tgt, uint8_t *tid_xfer);

void MEC_HAL_I3C_CallbackRegister(uint32_t channel, MEC_I3C_CALLBACK callback, uintptr_t context);

void MEC_HAL_I3C_Xfer_Error_Resume(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Xfer_Reset(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_DAT_info_get(struct mec_i3c_ctx *ctx, uint16_t *start_addr, uint16_t *depth);

void MEC_HAL_I3C_DCT_info_get(struct mec_i3c_ctx *ctx, uint16_t *start_addr, uint16_t *depth);

void MEC_HAL_I3C_DCT_read(struct mec_i3c_ctx *ctx, uint16_t DCT_start, uint16_t DCT_idx,
                          struct mec_i3c_DCT_info *info);

bool MEC_HAL_I3C_Is_Current_Role_Primary(struct mec_i3c_ctx *ctx);

bool MEC_HAL_I3C_Is_Current_Role_Master(struct mec_i3c_ctx *ctx);

bool MEC_HAL_I3C_Is_Current_Role_BusMaster(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_DAT_DynamicAddrAssign_write(struct mec_i3c_ctx *ctx, uint16_t DAT_start,
                                             uint16_t DAT_idx, uint8_t address);

void MEC_HAL_I3C_DAT_DynamicAddr_write(struct mec_i3c_ctx *ctx, uint16_t DAT_start,
                                       uint16_t DAT_idx, uint8_t address);

void MEC_HAL_I3C_queue_depths_get(struct mec_i3c_ctx *ctx, uint8_t *tx_depth, uint8_t *rx_depth,
                                  uint8_t *cmd_depth, uint8_t *resp_depth, uint8_t *ibi_depth);

void MEC_HAL_I3C_DO_Xfer_Prep(struct mec_i3c_ctx *ctx, struct mec_i3c_dw_cmd *cmd,
                              uint8_t *tid_xfer);

void MEC_HAL_I3C_DO_Xfer(struct mec_i3c_ctx *ctx, struct mec_i3c_dw_cmd *tgt);

void MEC_HAL_I3C_IBI_SIR_Enable(struct mec_i3c_ctx *ctx, struct mec_i3c_IBI_SIR *ibi_sir_info,
                                bool enable_ibi_interrupt);

void MEC_HAL_I3C_IBI_SIR_Disable(struct mec_i3c_ctx *ctx, struct mec_i3c_IBI_SIR *ibi_sir_info,
                                 bool disable_ibi_interrupt);

void MEC_HAL_I3C_TGT_PID_set(struct mec_i3c_ctx *ctx, uint64_t pid, bool pid_random);

bool MEC_HAL_I3C_TGT_is_dyn_addr_valid(struct mec_i3c_ctx *ctx);

uint8_t MEC_HAL_I3C_TGT_dyn_addr_get(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_TGT_MRL_set(struct mec_i3c_ctx *ctx, uint16_t mrl);

void MEC_HAL_I3C_TGT_MWL_set(struct mec_i3c_ctx *ctx, uint16_t mwl);

void MEC_HAL_I3C_TGT_MXDS_set(struct mec_i3c_ctx *ctx,
                              uint8_t wr_speed,
                              uint8_t rd_speed,
                              uint8_t tsco,
                              uint32_t rd_trnd_us);

int MEC_HAL_I3C_TGT_IBI_SIR_Raise(struct mec_i3c_ctx *ctx,
                                  struct mec_i3c_raise_IBI_SIR *ibi_sir_request);

int MEC_HAL_I3C_TGT_IBI_MR_Raise(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_Target_Interrupts_Init(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_TGT_IBI_SIR_Residual_handle(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_TGT_Error_Recovery(struct mec_i3c_ctx *ctx, uint8_t err_sts);

#if CONFIG_I3C_ENABLE_THRESHOLDS_INTR
void MEC_HAL_I3C_DO_TGT_Xfer(struct mec_i3c_ctx *ctx,  uint8_t *data_buf, uint16_t data_len,
                             uint16_t rem_data_len);
#else
void MEC_HAL_I3C_DO_TGT_Xfer(struct mec_i3c_ctx *ctx, uint8_t *data_buf, uint16_t data_len);
#endif

void MEC_HAL_I3C_Target_MRL_MWL_update(struct mec_i3c_ctx *ctx, uint16_t *max_rd_len,
                                       uint16_t *max_wr_len);

void MEC_HAL_I3C_Target_MRL_MWL_set(struct mec_i3c_ctx *ctx, uint16_t max_rd_len,
                                    uint16_t max_wr_len);

void MEC_HAL_I3C_SDCT_read(struct mec_i3c_ctx *ctx, uint16_t DCT_start, uint16_t idx,
                           struct mec_i3c_SDCT_info *info);

void MEC_HAL_I3C_TGT_DEFTGTS_DAT_write(struct mec_i3c_ctx *ctx, uint16_t DCT_start,
                                       uint16_t DAT_start, uint8_t targets_count);

void MEC_HAL_I3C_TGT_RoleSwitch_Resume(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_GIRQ_Status_Clr(struct mec_i3c_ctx *ctx);

void MEC_HAL_I3C_GIRQ_CTRL(struct mec_i3c_ctx *ctx, int flags);

int MEC_HAL_I3C_GIRQ_Status(struct mec_i3c_ctx *ctx);

int MEC_HAL_I3C_GIRQ_Result(struct mec_i3c_ctx *ctx);

#endif /* _MEC_I3C_API_H_ */
