/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_I3C_PVT_H_
#define _MEC_I3C_PVT_H_

#include <stdint.h>
#include <stdbool.h>
#include "mec_defs.h"

struct mec_i3c_DCT_info {

    /* 64 bit provisional id */
    uint64_t pid;

    /* Bus Characteristics Register */
    uint8_t bcr;

    /* Device Characteristics Register */
    uint8_t dcr;

    /* 7-bit dynamic address */
    uint8_t dynamic_addr;
};

struct mec_i3c_SDCT_info {

    /* 7-bit dynamic address */
    uint8_t dynamic_addr;

    /* Device Characteristics Register Value */
    uint8_t dcr;

    /* Bus Characteristics Register Value */
    uint8_t bcr;

    /* 7-bit static address */
    uint8_t static_addr;

};

/* Enter Dynamic Address Assignment (Broadcast) */
#define MEC_I3C_CCC_ENTDAA                      0x07U

#define DO_CCC_SHORT_CMD_DATA_SIZE_MAX          3U

#define I3C_PUSH_PULL_SCL_MIN_LOW_PERIOD_NS     33U
#define I3C_PUSH_PULL_SCL_MIN_HIGH_PERIOD_NS    41U

#define I3C_OPEN_DRAIN_SCL_MIN_LOW_PERIOD_NS     200U
#define I3C_OPEN_DRAIN_SCL_MIN_HIGH_PERIOD_NS    41U

#define I3C_BUS_SDR1_SCL_PERIOD_NS              2000U
#define I3C_BUS_SDR2_SCL_PERIOD_NS              2625U
#define I3C_BUS_SDR3_SCL_PERIOD_NS              4000U
#define I3C_BUS_SDR4_SCL_PERIOD_NS              8000U

#define I3C_BUS_SDR1_SCL_PERIOD_BITPOS          0U
#define I3C_BUS_SDR2_SCL_PERIOD_BITPOS          8U
#define I3C_BUS_SDR3_SCL_PERIOD_BITPOS          16U
#define I3C_BUS_SDR4_SCL_PERIOD_BITPOS          24U

#define I3C_BUS_MAX_SKEW_PERIOD_NS              12.8F

#define I3C_BUS_READ_TERM_LCNT_BITPOS           0U
#define I3C_BUS_HDR_TS_SKEW_CNT_BITPOS          16U
#define I3C_BUS_STOP_HOLD_CNT                   28U

#define I3C_SCL_TIMING_COUNT_MIN                7U
#define I3C_SCL_12_5MHZ_PERIOD_NS               80U

/* Need to review and tweak */
#define I2C_FM_SCL_MIN_LOW_PERIOD_NS            1300U
#define I2C_FM_SCL_MIN_HIGH_PERIOD_NS           680U

#define I2C_FMP_SCL_MIN_LOW_PERIOD_NS           500U
#define I2C_FMP_SCL_MIN_HIGH_PERIOD_NS          260U

#define I3C_RESPONSE_BUFFER_DEPTH               32U


/*----------------------------------TIMING PARAMETERS------------------*/
#define TGT_MAX_RD_DATA_SPEED  MAX_DATA_SPEED_RD_12_5_MHZ

#define TGT_MAX_WR_DATA_SPEED  MAX_DATA_SPEED_WR_12_5_MHZ

#define TGT_CLK_TO_DATA_TURN  MAX_CLK_DATA_TURN_8_ns

#define TGT_BUS_AVAIL_COND_ns  (13*1000)
#define TGT_BUS_IDLE_COND_ns   (13*1000)
#define TGT_BUS_FREE_DURATION_ns   (13*1000)



/*----------------------------DEVICE CONTROL----------------------------------*/

enum device_control_reg_bits
{
    sbit_IBA_INCLUDE            = (1U << 0)  // BIT_0_MASK
   ,sbit_I2C_TGT_PRESENT        = (1U << 7)  // BIT_7_MASK
   ,sbit_HOT_JOIN_CTRL          = (1U << 8)  // BIT_8_MASK
   ,sbit_IDLE_CNT_MULTIPLIER    = (1U << 24) // BIT_24_MASK
   ,sbit_ADAPTIVE_I2C_I3C       = (1U << 27) // BIT_27_MASK
   ,sbit_DMA_ENABLE             = (1U << 28) // BIT_28_MASK
   ,sbit_ABORT                  = (1U << 29) // BIT_29_MASK
   ,sbit_RESUME                 = (1U << 30) // BIT_30_MASK
   ,sbit_ENABLE                 = (1U << 31) // BIT_31_MASK
};

/*----------------------------Target Event Status----------------------------------*/

enum tgt_evt_sts_reg_bits
{
    sbit_SIR_ENABLE             = (1U << 0)
   ,sbit_MR_ENABLE              = (1U << 1)
   ,sbit_HJ_ENABLE              = (1U << 3)
};

/*----------------------------FIFO LIMITS----------------------------------*/
#define Q_CAP_TX_FIFO_DEPTH_BITPOS      0U
#define Q_CAP_RX_FIFO_DEPTH_BITPOS      4U
#define Q_CAP_CMD_FIFO_DEPTH_BITPOS     8U
#define Q_CAP_RESP_FIFO_DEPTH_BITPOS    12U
#define Q_CAP_IBI_FIFO_DEPTH_BITPOS     16U

#define FIFO_DEPTH_MIN_DWORD            2U // minimum 2 DWORDS for each FIFO
/*----------------------------DEVICE ADDRESS----------------------------------*/

#define sbit_DEVICE_ADDR_STATIC_ADDR_VALID      (1U << 15) // BIT_15_MASK
#define sbit_DEVICE_ADDR_DYNAMIC_ADDR_VALID     (1U << 31) // BIT_31_MASK
#define DEVICE_ADDR_DYNAMIC_ADDR_BITPOS         16U

/*--------------------------------COMMAND QUEUE--------------------------------*/

#define COMMAND_TID_BITPOS                      3U
#define COMMAND_CMD_BITPOS                      7U
#define COMMAND_DEV_IDX_BITPOS                  16U
#define COMMAND_SPEED_BITPOS                    21U

#define COMMAND_HDR_DDR_READ_BITPOS           (1U << 14)
#define COMMAND_HDR_DDR_WRITE_BITPOS          (1U << 13)

#define COMMAND_CMD_PRESENT                    (1U << 15) // BIT_15_MASK
#define COMMAND_DEF_BYTE_PRESENT               (1U << 25) // BIT_25_MASK
#define COMMAND_RESPONSE_ON_COMPLETION         (1U << 26) // BIT_26_MASK
#define COMMAND_READ_XFER                      (1U << 28) // BIT_28_MASK
#define COMMAND_STOP_ON_COMPLETION             (1U << 30) // BIT_30_MASK
#define COMMAND_PACKET_ERROR_CHECK             (1U << 31) // BIT_30_MASK

#define COMMAND_XFER_ARG_DATA_LEN_BITPOS        16U
#define COMMAND_XFER_DEF_BYTE_BITPOS            8U

#define COMMAND_AA_TID_BITPOS                   3U
#define COMMAND_AA_CMD_BITPOS                   7U
#define COMMAND_AA_DEV_IDX_BITPOS               16U
#define COMMAND_AA_DEV_CNT_BITPOS               21U

#define COMMAND_AA_RESPONSE_ON_COMPLETION       (1U << 26) // BIT_26_MASK
#define COMMAND_AA_STOP_ON_COMPLETION           (1U << 30) // BIT_30_MASK

#define COMMAND_ATTR_XFER_CMD                   0U
#define COMMAND_ATTR_XFER_ARG                   1U
#define COMMAND_ATTR_SHORT_DATA_ARG             2U
#define COMMAND_ATTR_ADDR_ASSGN_CMD             3U

/*--------------------------------RESPONSE QUEUE------------------------------*/

#define RESPONSE_TID_BITPOS             24U
#define RESPONSE_TID_BITMASK            0x0FFFFFFF // Bits 24:27

#define RESPONSE_ERR_STS_BITPOS         28U
#define RESPONSE_ERR_STS_BITMASK        0xF0FFFFFF

/* For Target Response */
#define RESPONSE_TID_TGT_BITMASK        0x07FFFFFF // Bits 24:26
#define RESPONSE_RX_RESP_BITPOS          27U
#define RESPONSE_RX_RESP_BITMASK        0x0FFFFFFF // Bit 27

#define RESPONSE_TID_DEFTGTS            0x7 /* TID 26:24 all 1 indicate DEFTGTS response */

/*************************TARGET RESPONSE ERROR STATUS-------------------------*/

#define TARGET_RESP_ERR_NO_ERROR                0U
#define TARGET_RESP_ERR_CRC                     1U
#define TARGET_RESP_ERR_PARITY                  2U
#define TARGET_RESP_ERR_FRAME                   3U
#define TARGET_RESP_ERR_UNDERFLOW_OVERFLOW      6U
#define TARGET_RESP_ERR_EARLY_TERM              10U


/*----------------------------IBI QUEUE STATUS---------------------------------*/

#define IBI_QUEUE_STS_IBI_STS_BITPOS    28U
#define IBI_QUEUE_STS_IBI_ID            8U

/*----------------------------IBI QUEUE CONTROL-------------------------------*/

#define IBI_QUEUE_CTRL_SIR_REJ_BITPOS   3U
#define IBI_QUEUE_CTRL_MR_REJ_BITPOS    1U
#define IBI_QUEUE_CTRL_HJ_REJ_BITPOS    0U

/*----------------------------QUEUE THRESHOLD---------------------------------*/

/* 1 empty location in command queue to trigger CMD_QUEUE_READY_STAT Interrupt*/
#define QUEUE_THLD_CMD_QUEUE_EMPTY_1        1U
#define QUEUE_THLD_CMD_QUEUE_BITPOS         0U

/* 1 entry in the Response Queue to trigger RESP_READY_STAT_INTR Interrupt */
#define QUEUE_THLD_RES_QUEUE_1              0U
#define QUEUE_THLD_RESP_QUEUE_BITPOS        8U

/* 1 entry in the Response Queue to trigger RESP_READY_STAT_INTR Interrupt */
#define QUEUE_THLD_IBI_DATA_1               0U
#define QUEUE_THLD_IBI_DATA_BITPOS          16U

/* 1 entry in the Response Queue to trigger RESP_READY_STAT_INTR Interrupt */
#define QUEUE_THLD_IBI_STATUS_1             0U
#define QUEUE_THLD_IBI_STATUS_BITPOS        24U

/*----------------------------DATA BUFFER THRESHOLD---------------------------*/
/* Transmit FIFO Threshold values
 * - Number of empty locations (or above) in the Transmit FIFO that
 *   triggers the TX_THLD_STAT Interrupt */
#define DATA_BUF_THLD_TX_FIFO_EMPTY_1       0U
#define DATA_BUF_THLD_TX_FIFO_EMPTY_4       1U
#define DATA_BUF_THLD_TX_FIFO_EMPTY_8       2U
#define DATA_BUF_THLD_TX_FIFO_EMPTY_16      3U
#define DATA_BUF_THLD_TX_FIFO_EMPTY_32      4U
#define DATA_BUF_THLD_TX_FIFO_EMPTY_64      5U

#define DATA_BUF_THLD_TX_FIFO_EMPTY_BITPOS  0U

/* Receive FIFO Threshold values
 * - Number of empty locations (or above) in the Receive FIFO that
 *   triggers the RX_THLD_STAT Interrupt */
#define DATA_BUF_THLD_RX_FIFO_1             0U
#define DATA_BUF_THLD_RX_FIFO_4             1U
#define DATA_BUF_THLD_RX_FIFO_8             2U
#define DATA_BUF_THLD_RX_FIFO_16            3U
#define DATA_BUF_THLD_RX_FIFO_32            4U
#define DATA_BUF_THLD_RX_FIFO_64            5U

#define DATA_BUF_THLD_RX_FIFO_BITPOS        8U

/* Transfer Start Threshold values
 * - Minimum number of entries in the Transmit FIFO for
 *   controller mode write transfer or target to ACK read request */
#define DATA_BUF_THLD_TX_FIFO_START_1       0U
#define DATA_BUF_THLD_TX_FIFO_START_4       1U
#define DATA_BUF_THLD_TX_FIFO_START_8       2U
#define DATA_BUF_THLD_TX_FIFO_START_16      3U
#define DATA_BUF_THLD_TX_FIFO_START_32      4U
#define DATA_BUF_THLD_TX_FIFO_START_64      5U

#define DATA_BUF_THLD_TX_FIFO_START_BITPOS  16U

/* Receive Start Threshold values
 * - Minimum number of entries in the Receive FIFO for
 *   controller mode read transfer or target to ACK write request */
#define DATA_BUF_THLD_RX_FIFO_START_1       0U
#define DATA_BUF_THLD_RX_FIFO_START_4       1U
#define DATA_BUF_THLD_RX_FIFO_START_8       2U
#define DATA_BUF_THLD_RX_FIFO_START_16      3U
#define DATA_BUF_THLD_RX_FIFO_START_32      4U
#define DATA_BUF_THLD_RX_FIFO_START_64      5U

#define DATA_BUF_THLD_RX_FIFO_START_BITPOS  24U

/*--------------------------------RESET CONTROL-------------------------------*/

#define RESET_CTRL_SOFT_RST                 (1U << 0)
#define RESET_CTRL_CMD_Q_RST                (1U << 1)
#define RESET_CTRL_RES_Q_RST                (1U << 2)
#define RESET_CTRL_TX_FIFO_RST              (1U << 3)
#define RESET_CTRL_RX_FIFO_RST              (1U << 4)
#define RESET_CTRL_IBI_Q_RST                (1U << 5)
#define RESET_CTRL_BUS_RST_TYPE_EXIT        (0)
#define RESET_CTRL_BUS_RST_TYPE_SCL_LOW_RST (3U << 29)
#define RESET_CTRL_BUS_RST                  (1U << 31)

/*-----------------------------TARGET EVENT STATUS-----------------------------*/

#define TGT_EVT_STS_SIR_EN                (1U << 0)
#define TGT_EVT_STS_MIR_EN                (1U << 1)
#define TGT_EVT_STS_HJEN                  (1U << 3)
#define TGT_EVT_STS_MRL_UPDATED           (1U << 6)
#define TGT_EVT_STS_MWL_UPDATED           (1U << 7)


/*---------------------------TARGET INTERRUPT REQUEST--------------------------*/

#define TGT_INTR_REQ_SIR                  (1U << 0)

#define TGT_INTR_REQ_MR                   (1U << 3)
#define TGT_INTR_REQ_TS                   (1U << 4)

#define TGT_INTR_REQ_SIR_CTRL_BITPOS       1U
#define TGT_INTR_REQ_MDB_BITPOS            8U
#define TGT_INTR_REQ_SIR_DATALEN_BITPOS    16U

/*-----------------------------TARGET IBI RESPONSE-----------------------------*/

#define TGT_IBI_RESP_SUCCESS                  0x01
#define TGT_IBI_RESP_EARLY_TERMINATE          0x10
#define TGT_IBI_RESP_NOT_ATTEMPTED            0x11

#define TGT_IBI_RESP_DATALEN_BITPOS           8U


/*-------------------------------QUEUE STATUS LEVEL---------------------------*/

#define Q_STS_LVL_RESP_BUFFER_BIT_POS       8U
#define Q_STS_LVL_IBI_STS_CNT_BIT_POS       24U

/*----------------------------DEVICE CONTROL EXTENDED-------------------------*/

#define DEV_OPERATION_MODE_CTL          0U
#define DEV_OPERATION_MODE_TGT          1U

#define DEV_REQMST_ACK_CTRL_NACK        (1U << 3)

/*----------------------------HOST REGISTER CONFIGS---------------------------*/
#define HOST_CFG_PORT_SEL_I3C0                      0U
#define HOST_CFG_PORT_SEL_I3C1                      1U
#define HOST_CFG_PORT_SEL_I3C2                      2U
#define HOST_CFG_PORT_SEL_I2C0                      3U
#define HOST_CFG_PORT_SEL_BIT_POS                   0U

#define HOST_CFG_DMA_TX_BURST_LENGTH_1              0U
#define HOST_CFG_DMA_TX_BURST_LENGTH_4              1U
#define HOST_CFG_DMA_TX_BURST_LENGTH_8              2U
#define HOST_CFG_DMA_TX_BURST_LENGTH_16             3U
#define HOST_CFG_DMA_TX_BURST_LENGTH_BIT_POS        8U

#define HOST_CFG_TX_DMA_TOUT_DISABLE                0U
#define HOST_CFG_TX_DMA_TOUT_ENABLE                 1U
#define HOST_CFG_TX_DMA_TOUT_BITPOS                 12U

#define HOST_CFG_TX_DMA_CONT_TX                     0U
#define HOST_CFG_TX_DMA_ABORT_TX                    1U
#define HOST_CFG_TX_DMA_ABORT_BITPOS                13U

#define HOST_CFG_DMA_RX_BURST_LENGTH_1              0U
#define HOST_CFG_DMA_RX_BURST_LENGTH_4              1U
#define HOST_CFG_DMA_RX_BURST_LENGTH_8              2U
#define HOST_CFG_DMA_RX_BURST_LENGTH_16             3U
#define HOST_CFG_DMA_RX_BURST_LENGTH_BIT_POS        16U

#define HOST_CFG_RX_DMA_TOUT_DISABLE                0U
#define HOST_CFG_RX_DMA_TOUT_ENABLE                 1U
#define HOST_CFG_RX_DMA_TOUT_BITPOS                 20U

#define HOST_CFG_RX_DMA_CONT_TX                     0U
#define HOST_CFG_RX_DMA_ABORT_TX                    1U
#define HOST_CFG_RX_DMA_ABORT_BITPOS                21U

#define HOST_CFG_STUCK_SDA_DISABLE                  0U
#define HOST_CFG_STUCK_SDA_ENABLE                   1U
#define HOST_CFG_STUCK_SDA_EN_BIT_POS               24U

#define HOST_RST_SOFT_RESET                         1U
#define HOST_RST_SOFT_RESET_BITPOS                  0U

#define HOST_RST_DMA_TX_IF_RESET                    1U
#define HOST_RST_DMA_TX_IF_RESET_BITPOS             4U

#define HOST_RST_DMA_RX_IF_RESET                    1U
#define HOST_RST_DMA_RX_IF_RESET_BITPOS             5U
/************************************************************************/
#define SEC_HOST_CFG_PORT_SEL_I3C0                      0U
#define SEC_HOST_CFG_PORT_SEL_I3C1                      1U
#define SEC_HOST_CFG_PORT_SEL_I3C2                      2U
#define SEC_HOST_CFG_PORT_SEL_BIT_POS                   0U

#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_1              0U
#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_4              1U
#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_8              2U
#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_16             3U
#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_32             4U
#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_64             5U
#define SEC_HOST_CFG_DMA_TX_BURST_LENGTH_BIT_POS        8U

#define SEC_HOST_CFG_TX_DMA_FSM_DISABLE                 0U
#define SEC_HOST_CFG_TX_DMA_FSM_ENABLE                  1U
#define SEC_HOST_CFG_TX_DMA_FSM_BITPOS                 11U

#define SEC_HOST_CFG_TX_DMA_CONT_TX                     0U
#define SEC_HOST_CFG_TX_DMA_ABORT_TX                    1U
#define SEC_HOST_CFG_TX_DMA_ABORT_BITPOS                13U

#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_1              0U
#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_4              1U
#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_8              2U
#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_16             3U
#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_32             4U
#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_64             5U
#define SEC_HOST_CFG_DMA_RX_BURST_LENGTH_BIT_POS        16U

#define SEC_HOST_CFG_RX_DMA_FSM_DISABLE                 0U
#define SEC_HOST_CFG_RX_DMA_FSM_ENABLE                  1U
#define SEC_HOST_CFG_RX_DMA_FSM_BITPOS                 19U

#define SEC_HOST_CFG_RX_DMA_CONT_TX                     0U
#define SEC_HOST_CFG_RX_DMA_ABORT_TX                    1U
#define SEC_HOST_CFG_RX_DMA_ABORT_BITPOS                21U

#define SEC_HOST_CFG_STUCK_SDA_SCL_DISABLE              0U
#define SEC_HOST_CFG_STUCK_SDA_SCL_ENABLE               1U
#define SEC_HOST_CFG_STUCK_SDA_EN_BIT_POS               24U

#define SEC_HOST_CFG_STUCK_SDA_CLK_SEL_2MHZ             0U
#define SEC_HOST_CFG_STUCK_SDA_CLK_SEL_32KHZ            1U
#define SEC_HOST_CFG_STUCK_SDA_CLK_SEL_BITPOS           25U

#define SEC_HOST_CFG_SCL_LOW_DET_DISABLE                0U
#define SEC_HOST_CFG_SCL_LOW_DET_ENABLE                 1U
#define SEC_HOST_CFG_SCL_LOW_DET_EN_BITPOS              28U

#define SEC_HOST_RST_SOFT_RESET                         1U
#define SEC_HOST_RST_SOFT_RESET_BITPOS                  0U

#define SEC_HOST_RST_DMA_TX_IF_RESET                    1U
#define SEC_HOST_RST_DMA_TX_IF_RESET_BITPOS             4U

#define SEC_HOST_RST_DMA_RX_IF_RESET                    1U
#define SEC_HOST_RST_DMA_RX_IF_RESET_BITPOS             5U

#define SEC_HOST_CFG_STUCK_SDA_TOUT_BITPOS              0U
#define SEC_HOST_CFG_STUCK_SCL_TOUT_BITPOS              16U
/******************************************************************************/


#define RD_TERM_BIT_LCNT_0                              0U
#define RD_TERM_BIT_LCNT_1                              1U
#define RD_TERM_BIT_LCNT_2                              2U
#define RD_TERM_BIT_LCNT_3                              3U
#define RD_TERM_BIT_LCNT_4                              4U
#define RD_TERM_BIT_LCNT_5                              5U
#define RD_TERM_BIT_LCNT_6                              6U
#define RD_TERM_BIT_LCNT_7                              7U

/*-------------------SDA HOLD SWITCH DLY TIMING-----------------*/
#define SDA_OD_PP_SWITCH_DLY_0                          0U
#define SDA_OD_PP_SWITCH_DLY_1                          1U
#define SDA_OD_PP_SWITCH_DLY_2                          2U
#define SDA_OD_PP_SWITCH_DLY_3                          3U
#define SDA_OD_PP_SWITCH_DLY_4                          4U
#define SDA_OD_PP_SWITCH_DLY_BITPOS                     0U

#define SDA_PP_OD_SWITCH_DLY_0                          0U
#define SDA_PP_OD_SWITCH_DLY_1                          1U
#define SDA_PP_OD_SWITCH_DLY_2                          2U
#define SDA_PP_OD_SWITCH_DLY_3                          3U
#define SDA_PP_OD_SWITCH_DLY_4                          4U
#define SDA_PP_OD_SWITCH_DLY_BITPOS                     8U

#define SDA_TX_HOLD_1                                   1U
#define SDA_TX_HOLD_2                                   2U
#define SDA_TX_HOLD_3                                   3U
#define SDA_TX_HOLD_4                                   4U
#define SDA_TX_HOLD_5                                   5U
#define SDA_TX_HOLD_6                                   6U
#define SDA_TX_HOLD_7                                   7U
#define SDA_TX_HOLD_BITPOS                              16U

/*-------------------SCL HOLD SWITCH DLY TIMING-----------------*/

/*--------------TGT_PID_VALUE and TGT_MIPI_ID_VALUE-------------*/
#define TGT_PID_DCR_BITPOS                              0U
#define TGT_INST_ID_BITPOS                              12U
#define TGT_PART_ID_BITPOS                              16U

#define TGT_PROV_ID_SEL_BITPOS                          0U
#define TGT_MIPI_MFG_ID_BITPOS                          1U
/*--------------TGT_PID_VALUE and TGT_MIPI_ID_VALUE-------------*/

/*------------------------------MXDS----------------------------*/
#define MXDS_MAX_WR_SPEED_12P5_MHZ                       0U
#define MXDS_MAX_WR_SPEED_8_MHZ                          1U
#define MXDS_MAX_WR_SPEED_6_MHZ                          2U
#define MXDS_MAX_WR_SPEED_4_MHZ                          3U
#define MXDS_MAX_WR_SPEED_2_MHZ                          4U
#define MXDS_MAX_WR_SPEED_BITPOS                         0U

#define MXDS_MAX_RD_SPEED_12P5_MHZ                       0U
#define MXDS_MAX_RD_SPEED_8_MHZ                          1U
#define MXDS_MAX_RD_SPEED_6_MHZ                          2U
#define MXDS_MAX_RD_SPEED_4_MHZ                          3U
#define MXDS_MAX_RD_SPEED_2_MHZ                          4U
#define MXDS_MAX_RD_SPEED_BITPOS                         8U

#define MXDS_TSCO_8_NS                                   0U
#define MXDS_TSCO_9_NS                                   1U
#define MXDS_TSCO_10_NS                                  2U
#define MXDS_TSCO_11_NS                                  3U
#define MXDS_TSCO_12_NS                                  4U
#define MXDS_TSCO_BITPOS                                 16U

#define MXDS_MAX_RD_TURN_MASK(x)                        (x & MEC_GENMASK(23, 0))
/*------------------------------MXDS----------------------------*/

/*------------------------------MRL AND MWL----------------------------*/
#define MWL_BITPOS                                         0U
#define MRL_BITPOS                                         16U
/*------------------------------MRL AND MWL----------------------------*/

/*-------------------Device Address Table Location of Device1-----------------*/

#define DEV_ADDR_TABLE1_LOC1_DEVICE_I2C             (1U << 31) // BIT_31_MASK
#define DEV_ADDR_TABLE1_LOC1_NACK_RETRY_COUNT(n)    ((uint32_t)(n & 0x3) << 29)
#define DEV_ADDR_TABLE1_LOC1_PARITY                 (1U << 23) // BIT_23_MASK
#define DEV_ADDR_TABLE1_LOC1_DYNAMIC_ADDR(addr)     ((uint32_t)(addr & 0x7F) << 16)
#define DEV_ADDR_TABLE1_LOC1_MR_REJECT              (1U << 14) // BIT_14_MASK
#define DEV_ADDR_TABLE1_LOC1_SIR_REJECT             (1U << 13) // BIT_13_MASK
#define DEV_ADDR_TABLE1_LOC1_IBI_WITH_DATA          (1U << 12) // BIT_12_MASK
#define DEV_ADDR_TABLE1_LOC1_IBI_PEC_EN             (1U << 11) // BIT_11_MASK
#define DEV_ADDR_TABLE1_LOC1_STATIC_ADDR(addr)      (uint32_t)(addr & 0x7F)

/*----------------------------INTERRUPT STATUS BITS---------------------------*/

enum interrupt_status_reg_bits
{
    sbit_TX_THLD_STS            = (1U << 0)  // BIT_0_MASK
   ,sbit_RX_THLD_STS            = (1U << 1)  // BIT_1_MASK
   ,sbit_IBI_THLD_STS           = (1U << 2)  // BIT_2_MASK
   ,sbit_CMD_QUEUE_READY_STS    = (1U << 3)  // BIT_3_MASK
   ,sbit_RESP_READY_STS         = (1U << 4)  // BIT_4_MASK
   ,sbit_TRANSFER_ABORT_STS     = (1U << 5)  // BIT_5_MASK
   ,sbit_CCC_UPDATED_STS        = (1U << 6)  // BIT_6_MASK
   ,sbit_DYN_ADDR_ASSIGN_STS    = (1U << 8)  // BIT_8_MASK
   ,sbit_TRANSFER_ERR_STS       = (1U << 9)  // BIT_9_MASK
   ,sbit_DEFTGT_STS             = (1U << 10) // BIT_10_MASK
   ,sbit_READ_REQ_RECV_STS      = (1U << 11) // BIT_11_MASK
   ,sbit_IBI_UPDATED_STS        = (1U << 12) // BIT_12_MASK
   ,sbit_BUSOWNER_UPDATED_STS   = (1U << 13) // BIT_13_MASK
   ,sbit_BUS_RESET_DONE_STS     = (1U << 15) // BIT_15_MASK
};

//MAX_DATA_SPEED register
#define TGT_MAX_WR_DATA_SPEED_POS 0
#define TGT_MAX_RD_DATA_SPEED_POS 8
#define TGT_CLK_TO_DATA_TURN_POS 16

#define TGT_MAX_WR_DATA_SPEED_MASK 7
#define TGT_MAX_RD_DATA_SPEED_MASK 7
#define TGT_CLK_TO_DATA_TURN_MASK 7

/*------------------------------MXDS_MAX_RD_SPEED----------------------*/
#define MAX_DATA_SPEED_RD_12_5_MHZ    0U
#define MAX_DATA_SPEED_RD_8_MHZ       1U
#define MAX_DATA_SPEED_RD_6_MHZ       2U
#define MAX_DATA_SPEED_RD_4_MHZ       3U
#define MAX_DATA_SPEED_RD_2_MHZ       4U
/*------------------------------MXDS_MAX_RD_SPEED----------------------*/

/*------------------------------MXDS_MAX_WR_SPEED----------------------*/
#define MAX_DATA_SPEED_WR_12_5_MHZ    0U
#define MAX_DATA_SPEED_WR_8_MHZ       1U
#define MAX_DATA_SPEED_WR_6_MHZ       2U
#define MAX_DATA_SPEED_WR_4_MHZ       3U
#define MAX_DATA_SPEED_WR_2_MHZ       4U
/*------------------------------MXDS_MAX_WR_SPEED----------------------*/

/*------------------------------MXDS_CLK_DATA_TURN----------------------*/
#define MAX_CLK_DATA_TURN_8_ns    0U
#define MAX_CLK_DATA_TURN_9_ns    1U
#define MAX_CLK_DATA_TURN_10_ns   2U
#define MAX_CLK_DATA_TURN_11_ns   3U
#define MAX_CLK_DATA_TURN_12_ns   4U
/*------------------------------MXDS_CLK_DATA_TURN----------------------*/

/* forward declarations */
struct mec_i3c_host_regs;
struct mec_i3c_sec_regs;

uint32_t _i3c_intr_sts_get(struct mec_i3c_host_regs *regs);
void _i3c_intr_sts_clear(struct mec_i3c_host_regs *regs, uint32_t mask);
void _i3c_intr_sts_enable(struct mec_i3c_host_regs *regs, uint32_t mask);
void _i3c_intr_sgnl_enable(struct mec_i3c_host_regs *regs, uint32_t mask);
void _i3c_intr_IBI_enable(struct mec_i3c_host_regs *regs);
void _i3c_intr_IBI_disable(struct mec_i3c_host_regs *regs);

void _i3c_resp_buf_threshold_set(struct mec_i3c_host_regs *regs, uint8_t threshold);
void _i3c_cmd_queue_buf_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_tx_fifo_empty_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_rx_buf_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_tx_buf_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_tx_start_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_rx_start_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);

void _i3c_notify_sir_reject(struct mec_i3c_host_regs *regs, bool opt);
void _i3c_notify_mr_reject(struct mec_i3c_host_regs *regs, bool opt);
void _i3c_notify_hj_reject(struct mec_i3c_host_regs *regs, bool opt);

void _i3c_resp_queue_threshold_set(struct mec_i3c_host_regs *regs, uint8_t threshold);
void _i3c_cmd_queue_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_ibi_data_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_ibi_status_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val);
uint32_t _i3c_ibi_queue_status_get(struct mec_i3c_host_regs *regs);

void _i3c_dynamic_addr_set(struct mec_i3c_host_regs *regs, uint8_t address);
void _i3c_static_addr_set(struct mec_i3c_host_regs *regs, uint8_t address);

void _i3c_operation_mode_set(struct mec_i3c_host_regs *regs, uint8_t mode);

void _i3c_hot_join_disable(struct mec_i3c_host_regs *regs);
void _i3c_hot_join_enable(struct mec_i3c_host_regs *regs);

/* controller mode (cm) or target mode (tm) request reject internal API */
void _i3c_ibi_cm_req_reject(struct mec_i3c_host_regs *regs);
void _i3c_ibi_tm_intr_req_reject(struct mec_i3c_host_regs *regs);

void _i3c_enable(struct mec_i3c_host_regs *regs, uint8_t mode, bool enable_dma);
void _i3c_disable(struct mec_i3c_host_regs *regs);
void _i3c_resume(struct mec_i3c_host_regs *regs);

void _i3c_push_pull_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns,
                               uint32_t i3c_freq_ns);

void _i3c_open_drain_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns,
                                uint32_t i3c_freq_ns);

void _i3c_bus_free_timing_set(struct mec_i3c_sec_regs *regs, uint32_t core_clk_freq_ns);
void _i3c_bus_available_timing_set(struct mec_i3c_sec_regs *regs, uint32_t core_clk_freq_ns);
void _i3c_bus_idle_timing_set(struct mec_i3c_sec_regs *regs, uint32_t core_clk_freq_ns);
void _i3c_read_term_bit_low_count_set(struct mec_i3c_host_regs *regs,
                                            uint8_t read_term_low_count);
void _i3c_sda_hld_timing_set(struct mec_i3c_host_regs *regs,
                                            uint8_t sda_tx_hold);
void _i3c_sda_hld_switch_delay_timing_set(struct mec_i3c_sec_regs *regs,
                                            uint8_t sda_od_pp_switch_dly,
                                            uint8_t sda_pp_od_switch_dly,
                                            uint8_t sda_tx_hold);
void _i3c_scl_low_mst_tout_set(struct mec_i3c_sec_regs *regs, uint32_t tout_val);

void _i2c_fm_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns);
void _i2c_fmp_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns);
void _i2c_target_present_set (struct mec_i3c_host_regs *regs);
void _i2c_target_present_reset (struct mec_i3c_host_regs *regs);

void _i3c_host_dma_tx_burst_length_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_host_dma_rx_burst_length_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_host_port_set(struct mec_i3c_host_regs *regs, uint32_t val);
void _i3c_host_stuck_sda_config(struct mec_i3c_host_regs *regs, uint32_t val,
                                uint32_t tout_val);
void _i3c_host_tx_dma_tout_config(struct mec_i3c_host_regs *regs, uint32_t val,
                                  uint32_t tout_val);
void _i3c_host_rx_dma_tout_config(struct mec_i3c_host_regs *regs, uint32_t val,
                                  uint32_t tout_val);

void _i3c_sec_host_dma_tx_burst_length_set(struct mec_i3c_sec_regs *regs, uint32_t val);
void _i3c_sec_host_dma_rx_burst_length_set(struct mec_i3c_sec_regs *regs, uint32_t val);
void _i3c_sec_host_port_set(struct mec_i3c_sec_regs *regs, uint32_t val);
void _i3c_sec_host_stuck_sda_scl_config(struct mec_i3c_sec_regs *regs, uint32_t en,
                                        uint32_t sda_tout_val, uint32_t scl_tout_val);
void _i3c_sec_host_tx_dma_tout_config(struct mec_i3c_sec_regs *regs, uint32_t val,
                                      uint32_t tout_val);
void _i3c_sec_host_rx_dma_tout_config(struct mec_i3c_sec_regs *regs, uint32_t val,
                                      uint32_t tout_val);
void _i3c_sec_host_dma_fsm_enable(struct mec_i3c_sec_regs *regs);

void _i3c_dev_addr_table_ptr_get(struct mec_i3c_host_regs *regs, uint16_t *start_addr,
                                 uint16_t *depth);
void _i3c_dev_char_table_ptr_get(struct mec_i3c_host_regs *regs, uint16_t *start_addr,
                                 uint16_t *depth);

uint8_t _i3c_dev_operation_mode_get(struct mec_i3c_host_regs *regs);

uint8_t _i3c_dev_controller_role_get(struct mec_i3c_host_regs *regs);

uint8_t _i3c_dev_role_config_get(struct mec_i3c_host_regs *regs);

void _i3c_DAT_write(struct mec_i3c_host_regs *regs, uint16_t DAT_start, uint8_t DAT_idx,
                    uint32_t val);
uint32_t _i3c_DAT_read(struct mec_i3c_host_regs *regs, uint16_t DAT_start, uint8_t DAT_idx);
void _i3c_DCT_read(struct mec_i3c_host_regs *regs, uint16_t DCT_start, uint8_t DCT_idx,
                   struct mec_i3c_DCT_info *info);

void _i3c_fifo_write(struct mec_i3c_host_regs *regs, uint8_t *buffer, uint16_t len);
void _i3c_command_write(struct mec_i3c_host_regs *regs, uint32_t cmd);

uint8_t _i3c_resp_buf_level_get(struct mec_i3c_host_regs *regs);
uint8_t _i3c_ibi_status_count_get(struct mec_i3c_host_regs *regs);

uint8_t _i3c_response_sts_get(struct mec_i3c_host_regs *regs, uint16_t *len, uint8_t *tid);
void _i3c_fifo_read(struct mec_i3c_host_regs *regs, uint8_t *buffer, uint16_t len);
void _i3c_ibi_data_read(struct mec_i3c_host_regs *regs, uint8_t *buffer, uint16_t len);

void _i3c_xfers_reset(struct mec_i3c_host_regs *regs);
void _i3c_soft_reset(struct mec_i3c_host_regs *regs);

void _i3c_xfer_err_sts_clr(struct mec_i3c_host_regs *regs);

uint8_t _i3c_cmd_fifo_depth_get(struct mec_i3c_host_regs *regs);
uint8_t _i3c_tx_fifo_depth_get(struct mec_i3c_host_regs *regs);
uint8_t _i3c_rx_fifo_depth_get(struct mec_i3c_host_regs *regs);
uint8_t _i3c_resp_fifo_depth_get(struct mec_i3c_host_regs *regs);
uint8_t _i3c_ibi_fifo_depth_get(struct mec_i3c_host_regs *regs);


void _i3c_tx_fifo_rst(struct mec_i3c_host_regs *regs);
void _i3c_rx_fifo_rst(struct mec_i3c_host_regs *regs);
void _i3c_cmd_queue_rst(struct mec_i3c_host_regs *regs);

void _i3c_SDCT_read(struct mec_i3c_host_regs *regs, uint16_t DCT_start, uint8_t DCT_idx,
                    struct mec_i3c_SDCT_info *info);

void _i3c_intr_thresholds_tx_enable(struct mec_i3c_host_regs *regs);
void _i3c_intr_thresholds_tx_disable(struct mec_i3c_host_regs *regs);
void _i3c_intr_thresholds_rx_enable(struct mec_i3c_host_regs *regs);
void _i3c_intr_thresholds_rx_disable(struct mec_i3c_host_regs *regs);

/* Secondary Controller specific functions */

void _i3c_tgt_pid_set(struct mec_i3c_sec_regs *regs,
                        uint16_t tgt_mipi_mfg_id,
                        bool is_random_prov_id,
                        uint16_t tgt_part_id,
                        uint8_t tgt_inst_id,
                        uint16_t tgt_pid_dcr);
bool _i3c_tgt_dyn_addr_valid_get(struct mec_i3c_sec_regs *regs);
uint8_t _i3c_tgt_dyn_addr_get(struct mec_i3c_sec_regs *regs);
void _i3c_tgt_mrl_set(struct mec_i3c_sec_regs *regs, uint16_t mrl);
void _i3c_tgt_mwl_set(struct mec_i3c_sec_regs *regs, uint16_t mwl);
void _i3c_tgt_mxds_set(struct mec_i3c_sec_regs *regs,
                        uint8_t wr_speed,
                        uint8_t rd_speed,
                        uint8_t tsco,
                        uint32_t rd_trnd_us);
bool _i3c_tgt_SIR_enabled(struct mec_i3c_sec_regs *regs);
bool _i3c_tgt_MR_enabled(struct mec_i3c_sec_regs *regs);
void _i3c_tgt_raise_ibi_SIR(struct mec_i3c_sec_regs *regs, uint8_t *sir_data, uint8_t sir_datalen,
                            uint8_t mdb);
void _i3c_tgt_raise_ibi_MR(struct mec_i3c_sec_regs *regs);
bool _i3c_tgt_ibi_resp_get(struct mec_i3c_sec_regs *regs, uint8_t *sir_rem_datalen);

uint8_t _i3c_tgt_response_sts_get(struct mec_i3c_sec_regs *regs, uint16_t *len, uint8_t *tid,
                                  bool *rx_response);

void _i3c_tgt_MRL_get(struct mec_i3c_sec_regs *regs, uint16_t *max_rd_len);
void _i3c_tgt_MWL_get(struct mec_i3c_sec_regs *regs, uint16_t *max_wr_len);
void _i3c_tgt_MRL_MWL_set(struct mec_i3c_sec_regs *regs, uint16_t max_rd_len,
                          uint16_t max_wr_len);

bool _i3c_tgt_MRL_updated(struct mec_i3c_sec_regs *regs);
bool _i3c_tgt_MWL_updated(struct mec_i3c_sec_regs *regs);
void _i3c_tgt_hot_join_disable(struct mec_i3c_sec_regs *regs);

void _i3c_tgt_max_speed_update(struct mec_i3c_sec_regs *regs, uint8_t max_rd_speed,
                               uint8_t max_wr_speed);
void _i3c_tgt_clk_to_data_turn_update(struct mec_i3c_sec_regs *regs, uint8_t clk_data_turn_time);


#endif /* _MEC_I3C_PVT_H_ */
