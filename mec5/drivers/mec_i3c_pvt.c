/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <string.h>

#include <device_mec5.h>
#include "mec_defs.h"
#include "mec_pcfg.h"
#include "mec_ecia_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

#include "mec_i3c_pvt.h"


/**
 * @brief Get interrupt status
 *
 * @param regs Pointer to controller registers
 */
uint32_t _i3c_intr_sts_get(struct mec_i3c_host_regs *regs)
{
    return regs->INTR_STS;
}

/**
 * @brief clear all interrupt status
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_sts_clear(struct mec_i3c_host_regs *regs, uint32_t mask)
{
    regs->INTR_STS = mask;
}

/**
 * @brief Enable interrupt status
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_sts_enable(struct mec_i3c_host_regs *regs, uint32_t mask)
{
    regs->INTR_EN = mask;
}

/**
 * @brief Enable IBI interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_IBI_enable(struct mec_i3c_host_regs *regs)
{
    regs->INTR_EN |= sbit_IBI_THLD_STS;

    regs->INTR_SIG_EN |= sbit_IBI_THLD_STS;
}

/**
 * @brief Disable IBI interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_IBI_disable(struct mec_i3c_host_regs *regs)
{
    regs->INTR_EN &= (uint32_t)~sbit_IBI_THLD_STS;

    regs->INTR_SIG_EN &= (uint32_t)~sbit_IBI_THLD_STS;
}

/**
 * @brief Enable the TX Threshold interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_thresholds_tx_enable(struct mec_i3c_host_regs *regs)
{
    regs->INTR_EN |= sbit_TX_THLD_STS;

    regs->INTR_SIG_EN |= sbit_TX_THLD_STS;
}

/**
 * @brief Disable the TX Threshold interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_thresholds_tx_disable(struct mec_i3c_host_regs *regs)
{
    regs->INTR_EN &= (uint32_t)~sbit_TX_THLD_STS;

    regs->INTR_SIG_EN &= (uint32_t)~sbit_TX_THLD_STS;
}

/**
 * @brief Enable the RX Threshold interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_thresholds_rx_enable(struct mec_i3c_host_regs *regs)
{
    regs->INTR_EN |= sbit_RX_THLD_STS;

    regs->INTR_SIG_EN |= sbit_RX_THLD_STS;
}

/**
 * @brief Disable the RX Threshold interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_thresholds_rx_disable(struct mec_i3c_host_regs *regs)
{
    regs->INTR_EN &= (uint32_t)~sbit_RX_THLD_STS;

    regs->INTR_SIG_EN &= (uint32_t)~sbit_RX_THLD_STS;
}

/**
 * @brief Enable interrupt signal
 *
 * @param regs Pointer to controller registers
 */
void _i3c_intr_sgnl_enable(struct mec_i3c_host_regs *regs, uint32_t mask)
{
    regs->INTR_SIG_EN = mask;
}

/**
 * @brief Set Response Buffer Threshold to trigger interrupt
 *
 * @param regs Pointer to controller registers
 */
void _i3c_resp_queue_threshold_set(struct mec_i3c_host_regs *regs, uint8_t threshold)
{
    if (threshold < I3C_RESPONSE_BUFFER_DEPTH)
    {
        regs->QUE_THLD_CTRL &= (uint32_t)~(0xFFu << QUEUE_THLD_RESP_QUEUE_BITPOS);
        regs->QUE_THLD_CTRL |= (threshold << QUEUE_THLD_RESP_QUEUE_BITPOS);
    }
}

/**
 * @brief Reads the Response Buffer Level Value
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_resp_buf_level_get(struct mec_i3c_host_regs *regs)
{
    volatile uint8_t level = 0;

    level = (regs->QUE_STS_LVL >> Q_STS_LVL_RESP_BUFFER_BIT_POS) & 0xFF;

    return level;
}

/**
 * @brief Reads the IBI status count
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_ibi_status_count_get(struct mec_i3c_host_regs *regs)
{
    volatile uint8_t level = 0;

    level = (regs->QUE_STS_LVL >> Q_STS_LVL_IBI_STS_CNT_BIT_POS) & 0x1F;

    return level;
}

/**
 * @brief Reads the IBI status queue
 *
 * @param regs Pointer to controller registers
 */
uint32_t _i3c_ibi_queue_status_get(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t queue_sts = 0;

    queue_sts = regs->IBI_QUE_STS;

    return queue_sts;
}

/**
 * @brief Reads the Response Buffer Level Value
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_response_sts_get(struct mec_i3c_host_regs *regs, uint16_t *len, uint8_t *tid)
{
    volatile uint32_t response = 0;
    uint8_t resp_sts;

    response = regs->RESP;

    *len = response & 0xFFFFu;
    *tid = (response & RESPONSE_TID_BITMASK) >> RESPONSE_TID_BITPOS;

    resp_sts = (response & RESPONSE_ERR_STS_BITMASK) >> RESPONSE_ERR_STS_BITPOS;

    return resp_sts;
}

/**
 * @brief Reads the Response Buffer Level Value
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_tgt_response_sts_get(struct mec_i3c_sec_regs *regs, uint16_t *len, uint8_t *tid,
                                  bool *rx_response)
{
    volatile uint32_t response = 0;
    uint8_t resp_sts, rx_rsp_bit;

    response = regs->RESP;

    *len = response & 0xFFFFu;
    *tid = (response & RESPONSE_TID_TGT_BITMASK) >> RESPONSE_TID_BITPOS;

    resp_sts = (response & RESPONSE_ERR_STS_BITMASK) >> RESPONSE_ERR_STS_BITPOS;

    rx_rsp_bit = (response & RESPONSE_RX_RESP_BITMASK) >> RESPONSE_RX_RESP_BITPOS;

    if (rx_rsp_bit) {
        *rx_response = true;
    }

    return resp_sts;
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_cmd_queue_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->QUE_THLD_CTRL &= (uint32_t)~(0xFFu << QUEUE_THLD_CMD_QUEUE_BITPOS);
    regs->QUE_THLD_CTRL |= (val << QUEUE_THLD_CMD_QUEUE_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_ibi_data_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->QUE_THLD_CTRL &= (uint32_t)~(0xFFu << QUEUE_THLD_IBI_DATA_BITPOS);
    regs->QUE_THLD_CTRL |= (val << QUEUE_THLD_IBI_DATA_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_ibi_status_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->QUE_THLD_CTRL &= (uint32_t)~(0xFFu << QUEUE_THLD_IBI_STATUS_BITPOS);
    regs->QUE_THLD_CTRL |= (val << QUEUE_THLD_IBI_STATUS_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_tx_buf_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->DB_THLD_CTRL &= (uint32_t)~(0xFFu << DATA_BUF_THLD_TX_FIFO_EMPTY_BITPOS);
    regs->DB_THLD_CTRL |= (val << DATA_BUF_THLD_TX_FIFO_EMPTY_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_rx_buf_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->DB_THLD_CTRL &= (uint32_t)~(0xFFu << DATA_BUF_THLD_RX_FIFO_BITPOS);
    regs->DB_THLD_CTRL |= (val << DATA_BUF_THLD_RX_FIFO_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_tx_start_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->DB_THLD_CTRL &= (uint32_t)~(0xFFu << DATA_BUF_THLD_TX_FIFO_START_BITPOS);
    regs->DB_THLD_CTRL |= (val << DATA_BUF_THLD_TX_FIFO_START_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_rx_start_threshold_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
     regs->DB_THLD_CTRL &= ~(0xFF << DATA_BUF_THLD_RX_FIFO_START_BITPOS);
     regs->DB_THLD_CTRL |= (val << DATA_BUF_THLD_RX_FIFO_START_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_notify_sir_reject(struct mec_i3c_host_regs *regs, bool opt)
{
    regs->IBI_QUE_CTRL = (opt << IBI_QUEUE_CTRL_SIR_REJ_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_notify_mr_reject(struct mec_i3c_host_regs *regs, bool opt)
{
    regs->IBI_QUE_CTRL = (opt << IBI_QUEUE_CTRL_MR_REJ_BITPOS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_notify_hj_reject(struct mec_i3c_host_regs *regs, bool opt)
{
    regs->IBI_QUE_CTRL = (opt << IBI_QUEUE_CTRL_HJ_REJ_BITPOS);
}

/**
 * @brief Set the dynamic address of the controller
 *
 * @param regs Pointer to controller registers
 * @param address 7-bit dynamic address
 */
void _i3c_dynamic_addr_set(struct mec_i3c_host_regs *regs, uint8_t address)
{
    regs->DEV_ADDR = ((address & 0x7F) << DEVICE_ADDR_DYNAMIC_ADDR_BITPOS) |
                     sbit_DEVICE_ADDR_DYNAMIC_ADDR_VALID;
}

/**
 * @brief Set the static address of the controller
 *
 * @param regs Pointer to controller registers
 * @param address 7-bit static address
 */
void _i3c_static_addr_set(struct mec_i3c_host_regs *regs, uint8_t address)
{
    volatile uint32_t reg_val;

    reg_val = regs->DEV_ADDR;

    reg_val |= ((address & 0x7F) | sbit_DEVICE_ADDR_STATIC_ADDR_VALID);

    regs->DEV_ADDR = reg_val;
}

/**
 * @brief Set the operation mode of the controller
 *
 * @param regs Pointer to controller registers
 * @param mode device mode - 0-Controller, 1-Target
 */
void _i3c_operation_mode_set(struct mec_i3c_host_regs *regs, uint8_t mode)
{
    regs->DEV_EXT_CTRL = mode & 0x1;
}

/**
 * @brief Enable the controller
 *
 * @param regs Pointer to controller registers
 * @param mode device mode - 0-Controller, 1-Target
 */
void _i3c_enable(struct mec_i3c_host_regs *regs, uint8_t mode, bool enable_dma)
{
    uint32_t val;

    /* Read the control register */
    val = regs->DEV_CTRL;

    val |= sbit_ENABLE;

    if (DEV_OPERATION_MODE_CTL == mode)
    {
        /* I3C Broadcast Address is included for private transfers */
        val |= sbit_IBA_INCLUDE;
    }
    
    if (enable_dma) {
        val |= sbit_DMA_ENABLE;
    }
    
    regs->DEV_CTRL = val;    
}

/**
 * @brief Disable the controller
 *
 * @param regs Pointer to controller registers
 */
void _i3c_disable(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t val = 0;

    /* Read the control register */
    val = regs->DEV_CTRL;

    val &= ~sbit_ENABLE;

    regs->DEV_CTRL = val;
}

/**
 * @brief Resume the controller
 *
 * @param regs Pointer to controller registers
 */
void _i3c_resume(struct mec_i3c_host_regs *regs)
{
    regs->DEV_CTRL |= sbit_RESUME;
}

/**
 * @brief Clears transfer error status in Interrupt Status
 *
 * @param regs Pointer to controller registers
 */
void _i3c_xfer_err_sts_clr(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t sts = 0;

    sts = regs->INTR_STS;

    if (sts & sbit_TRANSFER_ERR_STS) {
        /* W1C */
        regs->INTR_STS = sbit_TRANSFER_ERR_STS;
    }
}

/**
 * @brief Disable hot join
 * used in master mode of operation
 *
 * @param regs Pointer to controller registers
 */
void _i3c_hot_join_disable(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t val = 0;

    /* Read the control register */
    val = regs->DEV_CTRL;

    /* sbit_HOT_JOIN_CTRL = 1 for NACK and send broadcast CCC
     * to disable Hot-join */
    val |= sbit_HOT_JOIN_CTRL;

    regs->DEV_CTRL = val;
}

/**
 * @brief Disable hot join
 * used in target mode of operation
 *
 * @param regs Pointer to secondary controller registers
 */
void _i3c_tgt_hot_join_disable(struct mec_i3c_sec_regs *regs)
{
    volatile uint32_t val = 0;

    /* Read the target event status register */
    val = regs->TGT_EVT_STS;

    val &= (uint32_t)~sbit_HJ_ENABLE;

    regs->DEV_CTRL = val;
}

/**
 * @brief Enable hot join
 * used in master mode of operation
 *
 * @param regs Pointer to controller registers
 */
void _i3c_hot_join_enable(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t val = 0;

    /* Read the control register */
    val = regs->DEV_CTRL;

    /* sbit_HOT_JOIN_CTRL = 0 ACK Hot-Join requests */
    val &= ~sbit_HOT_JOIN_CTRL;

    regs->DEV_CTRL = val;
}

/**
 * @brief Program I2C Fast Mode Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i2c_fm_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns)
{
    uint16_t low_count, high_count;
    uint32_t timing_val;

    high_count = (uint16_t)MEC_DIV_ROUND_UP(I2C_FM_SCL_MIN_HIGH_PERIOD_NS, core_clk_freq_ns);
    if(high_count < I3C_SCL_TIMING_COUNT_MIN) {
        high_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    low_count = (uint16_t)MEC_DIV_ROUND_UP(I2C_FM_SCL_MIN_LOW_PERIOD_NS, core_clk_freq_ns);
    if(low_count < I3C_SCL_TIMING_COUNT_MIN) {
        low_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    /* Program the I3C Push Pull Timing Register */
    timing_val = (high_count << 16) | low_count;
    regs->SCL_I2C_FM_TM = timing_val;

    /* This is a Mixed Bus system
     * Hence program the Bus Free Time (Master Mode) to tLOW of I2C Timing
     */
    regs->BUS_FREE_TM = low_count;
}

/**
 * @brief Program the I3C Bus Free Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_bus_free_timing_set(struct mec_i3c_sec_regs *regs, uint32_t core_clk_freq_ns)
{
    uint32_t bus_free_timing_count;

    /* To review */
    bus_free_timing_count = (uint32_t)MEC_DIV_ROUND_UP(TGT_BUS_FREE_DURATION_ns, core_clk_freq_ns);
    if(bus_free_timing_count < I3C_SCL_TIMING_COUNT_MIN) {
        bus_free_timing_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    regs->BUS_FREE_TM |= (bus_free_timing_count & 0xffffu);
}

/**
 * @brief Program the I3C Bus Free Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_bus_available_timing_set(struct mec_i3c_sec_regs *regs, uint32_t core_clk_freq_ns)
{
    uint32_t bus_avail_timing_count;

    bus_avail_timing_count = (uint32_t)MEC_DIV_ROUND_UP(TGT_BUS_AVAIL_COND_ns, core_clk_freq_ns);
    if(bus_avail_timing_count < I3C_SCL_TIMING_COUNT_MIN) {
        bus_avail_timing_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    regs->BUS_FREE_TM = (bus_avail_timing_count << 16);
}

/**
 * @brief Program the I3C Bus Free Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_bus_idle_timing_set(struct mec_i3c_sec_regs *regs, uint32_t core_clk_freq_ns)
{
    uint32_t idle_count;

    idle_count = (uint32_t)MEC_DIV_ROUND_UP(TGT_BUS_IDLE_COND_ns, core_clk_freq_ns);
    if(idle_count < I3C_SCL_TIMING_COUNT_MIN) {
        idle_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    regs->BUS_IDLE_TM = idle_count;
}

/**
 * @brief Program the I3C SDA Hold Switch Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_sda_hld_switch_delay_timing_set(struct mec_i3c_sec_regs *regs,
                                            uint8_t sda_od_pp_switch_dly,
                                            uint8_t sda_pp_od_switch_dly,
                                            uint8_t sda_tx_hold)
{
    regs->SDA_HMSD_TM = (sda_od_pp_switch_dly << SDA_OD_PP_SWITCH_DLY_BITPOS);
    regs->SDA_HMSD_TM |= (sda_pp_od_switch_dly << SDA_PP_OD_SWITCH_DLY_BITPOS);
    regs->SDA_HMSD_TM |= (sda_tx_hold << SDA_TX_HOLD_BITPOS);
}

/**
 * @brief Program the I3C SDA Hold time control value
 *
 * @param regs Pointer to controller registers
 * @param sda_tx_hold SDA TX Hold time control
 */
void _i3c_sda_hld_timing_set(struct mec_i3c_host_regs *regs,
                                            uint8_t sda_tx_hold)
{
    uint32_t reg_value = 0;

    reg_value = regs->SDA_HMSD_TM;
    regs->SDA_HMSD_TM = (reg_value & 0xFFF8FFFF) | (sda_tx_hold << SDA_TX_HOLD_BITPOS);
}

/**
 * @brief Program the I3C read termination bit low count
 *
 * @param regs Pointer to controller registers
 * @param sda_tx_hold SDA TX Hold time control
 */
void _i3c_read_term_bit_low_count_set(struct mec_i3c_host_regs *regs,
                                            uint8_t read_term_low_count)
{
    uint32_t reg_value = 0;

    reg_value = regs->SCL_TBLC_TM;
    regs->SCL_TBLC_TM = (reg_value & 0xFFFFFFF0) | (read_term_low_count);
}

/**
 * @brief Program the I3C SCL Low Master Extended Timeout register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_scl_low_mst_tout_set(struct mec_i3c_sec_regs *regs, uint32_t tout_val)
{
    regs->SCL_LMST_TM = tout_val;
}

/**
 * @brief Inform the core that I2C targets are present on the bus
 *
 * @param regs Pointer to controller registers
 */
void _i2c_target_present_set(struct mec_i3c_host_regs *regs)
{
    regs->DEV_CTRL |= sbit_I2C_TGT_PRESENT;
}

/**
 * @brief Inform the core that I2C targets are not present on the bus
 *
 * @param regs Pointer to controller registers
 */
void _i2c_target_present_reset(struct mec_i3c_host_regs *regs)
{
    regs->DEV_CTRL &= ~sbit_I2C_TGT_PRESENT;
}

/**
 * @brief Program I2C Fast Mode Plus Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i2c_fmp_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns)
{
    uint32_t low_count, high_count;
    uint32_t timing_val;

    high_count = (uint32_t)MEC_DIV_ROUND_UP(I2C_FMP_SCL_MIN_HIGH_PERIOD_NS, core_clk_freq_ns);
    if(high_count < I3C_SCL_TIMING_COUNT_MIN) {
        high_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    low_count = (uint32_t)MEC_DIV_ROUND_UP(I2C_FMP_SCL_MIN_LOW_PERIOD_NS, core_clk_freq_ns);
    if(low_count < I3C_SCL_TIMING_COUNT_MIN) {
        low_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    /* Program the I3C Push Pull Timing Register */
    timing_val = (high_count << 16) | low_count;
    regs->SCL_I2C_FMP_TM = timing_val;
}

/**
 * @brief Program I3C Push Pull Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_push_pull_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns,
                               uint32_t i3c_freq_ns)
{
    uint32_t low_count = 0, high_count = 0, base_count = 0;
    uint32_t timing_val = 0, sdr_ext_lcount = 0;

    base_count = (uint32_t)MEC_DIV_ROUND_UP(I3C_PUSH_PULL_SCL_MIN_HIGH_PERIOD_NS, core_clk_freq_ns);

    if(base_count < I3C_SCL_TIMING_COUNT_MIN) {
        base_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    high_count = (uint32_t)MEC_DIV_ROUND_UP(base_count * i3c_freq_ns, I3C_SCL_12_5MHZ_PERIOD_NS);

    if(high_count < I3C_SCL_TIMING_COUNT_MIN) {
        high_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    low_count = high_count;

    /* Program the I3C Push Pull Timing Register */
    timing_val = (high_count << 16) | low_count;
    regs->SCL_PP_TM = timing_val;

    /* If this is a PURE I3C bus
     * Program the Bus Free Time (Master Mode) to tCAS parameter
     */
    if (!(regs->DEV_CTRL & sbit_I2C_TGT_PRESENT))
    {
        regs->BUS_FREE_TM = low_count;
    }

    sdr_ext_lcount = MEC_DIV_ROUND_UP(I3C_BUS_SDR4_SCL_PERIOD_NS, core_clk_freq_ns) - high_count;
    sdr_ext_lcount = sdr_ext_lcount << 8;
    sdr_ext_lcount |= MEC_DIV_ROUND_UP(I3C_BUS_SDR3_SCL_PERIOD_NS, core_clk_freq_ns) - high_count;
    sdr_ext_lcount = sdr_ext_lcount << 8;
    sdr_ext_lcount |= MEC_DIV_ROUND_UP(I3C_BUS_SDR2_SCL_PERIOD_NS, core_clk_freq_ns) - high_count;
    sdr_ext_lcount = sdr_ext_lcount << 8;
    sdr_ext_lcount |= MEC_DIV_ROUND_UP(I3C_BUS_SDR1_SCL_PERIOD_NS, core_clk_freq_ns) - high_count;
    sdr_ext_lcount = sdr_ext_lcount << 8;

    regs->SCL_ELC_TM = sdr_ext_lcount;
}

/**
 * @brief Program I3C Open Drain Timing Register
 *
 * @param regs Pointer to controller registers
 * @param core_clk_freq_ns Core clock frequency in nanoseconds
 */
void _i3c_open_drain_timing_set(struct mec_i3c_host_regs *regs, uint32_t core_clk_freq_ns,
                                uint32_t i3c_freq_ns)
{
    uint32_t low_count = 0, high_count = 0;
    uint32_t timing_val;

    high_count = (uint32_t)MEC_DIV_ROUND_UP(I3C_OPEN_DRAIN_SCL_MIN_HIGH_PERIOD_NS, core_clk_freq_ns);

    high_count = (uint32_t)MEC_DIV_ROUND_UP(high_count * i3c_freq_ns, I3C_SCL_12_5MHZ_PERIOD_NS);

    if(high_count < I3C_SCL_TIMING_COUNT_MIN) {
        high_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    low_count = (uint32_t)MEC_DIV_ROUND_UP(I3C_OPEN_DRAIN_SCL_MIN_LOW_PERIOD_NS, core_clk_freq_ns);

    low_count = (uint32_t)MEC_DIV_ROUND_UP(low_count * i3c_freq_ns, I3C_SCL_12_5MHZ_PERIOD_NS);

    if(low_count < I3C_SCL_TIMING_COUNT_MIN) {
        low_count = I3C_SCL_TIMING_COUNT_MIN;
    }

    /* Program the I3C Push Pull Timing Register */
    timing_val = (high_count << 16) | low_count;
    regs->SCL_OD_TM = timing_val;
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_host_dma_tx_burst_length_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->HOST_CFG &= (uint32_t)~(0x03u << HOST_CFG_DMA_TX_BURST_LENGTH_BIT_POS);
    regs->HOST_CFG |= (val << HOST_CFG_DMA_TX_BURST_LENGTH_BIT_POS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_host_dma_rx_burst_length_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->HOST_CFG &= (uint32_t)~(0x03u << HOST_CFG_DMA_RX_BURST_LENGTH_BIT_POS);
    regs->HOST_CFG |= (val << HOST_CFG_DMA_RX_BURST_LENGTH_BIT_POS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_host_port_set(struct mec_i3c_host_regs *regs, uint32_t val)
{
    regs->HOST_CFG &= (uint32_t)~(0x0Fu << HOST_CFG_PORT_SEL_BIT_POS);
    regs->HOST_CFG |= (val << HOST_CFG_PORT_SEL_BIT_POS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_host_stuck_sda_config(struct mec_i3c_host_regs *regs, uint32_t en, uint32_t tout_val)
{
    regs->HOST_CFG &= (uint32_t)~(0x01u << HOST_CFG_STUCK_SDA_EN_BIT_POS);
    regs->HOST_CFG |= (en << HOST_CFG_STUCK_SDA_EN_BIT_POS);
    if(en) {
        regs->STK_SDA_TMOUT = tout_val;
    } else {
        regs->STK_SDA_TMOUT = 0U;
    }
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_host_tx_dma_tout_config(struct mec_i3c_host_regs *regs, uint32_t en, uint32_t tout_val)
{
    regs->HOST_CFG &= (uint32_t)~(0x01u << HOST_CFG_TX_DMA_TOUT_BITPOS);
    regs->HOST_CFG |= (en << HOST_CFG_TX_DMA_TOUT_BITPOS);
    if(en) {
        regs->HOST_DMA_TX_TMOUT = tout_val;
    } else {
        regs->HOST_DMA_TX_TMOUT = 0U;
    }
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_host_rx_dma_tout_config(struct mec_i3c_host_regs *regs, uint32_t en, uint32_t tout_val)
{
    regs->HOST_CFG &= (uint32_t)~(0x01u << HOST_CFG_TX_DMA_TOUT_BITPOS);
    regs->HOST_CFG |= (en << HOST_CFG_TX_DMA_TOUT_BITPOS);
    if(en) {
        regs->HOST_DMA_RX_TMOUT = tout_val;
    } else {
        regs->HOST_DMA_RX_TMOUT = 0U;
    }
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_dma_tx_burst_length_set(struct mec_i3c_sec_regs *regs, uint32_t val)
{
    regs->SEC_CFG &= (uint32_t)~(0x03u << SEC_HOST_CFG_DMA_TX_BURST_LENGTH_BIT_POS);
    regs->SEC_CFG |= (val << SEC_HOST_CFG_DMA_TX_BURST_LENGTH_BIT_POS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_dma_rx_burst_length_set(struct mec_i3c_sec_regs *regs, uint32_t val)
{
    regs->SEC_CFG &= (uint32_t)~(0x03u << SEC_HOST_CFG_DMA_RX_BURST_LENGTH_BIT_POS);
    regs->SEC_CFG |= (val << SEC_HOST_CFG_DMA_RX_BURST_LENGTH_BIT_POS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_port_set(struct mec_i3c_sec_regs *regs, uint32_t val)
{
    regs->SEC_CFG &= (uint32_t)~(0x0Fu << SEC_HOST_CFG_PORT_SEL_BIT_POS);
    regs->SEC_CFG |= (val << SEC_HOST_CFG_PORT_SEL_BIT_POS);
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_stuck_sda_scl_config(struct mec_i3c_sec_regs *regs, uint32_t en,
                                        uint32_t sda_tout_val, uint32_t scl_tout_val)
{
    regs->SEC_CFG &= (uint32_t)~(0x01u << SEC_HOST_CFG_STUCK_SDA_EN_BIT_POS);
    regs->SEC_CFG |= (en << SEC_HOST_CFG_STUCK_SDA_EN_BIT_POS);
    if(en) {
        regs->STK_SDA_TMOUT =
            ((sda_tout_val & (uint32_t)MEC_GENMASK(9 , 0)) << SEC_HOST_CFG_STUCK_SDA_TOUT_BITPOS);
        regs->STK_SDA_TMOUT =
            ((scl_tout_val & (uint32_t)MEC_GENMASK(9 , 0)) << SEC_HOST_CFG_STUCK_SCL_TOUT_BITPOS);
    } else {
        regs->STK_SDA_TMOUT = 0U;
    }
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_tx_dma_tout_config(struct mec_i3c_sec_regs *regs, uint32_t en, uint32_t tout_val)
{
    if(en) {
        regs->HOST_DMA_TX_TMOUT = tout_val;
    } else {
        regs->HOST_DMA_TX_TMOUT = 0U;
    }
}

/**
 * @brief
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_rx_dma_tout_config(struct mec_i3c_sec_regs *regs, uint32_t en, uint32_t tout_val)
{
    if(en) {
        regs->HOST_DMA_RX_TMOUT = tout_val;
    } else {
        regs->HOST_DMA_RX_TMOUT = 0U;
    }
}

/**
 * @brief 
 *
 * @param regs Pointer to controller registers
 */
void _i3c_sec_host_dma_fsm_enable(struct mec_i3c_sec_regs *regs)
{
    uint32_t bitmask;
    
    bitmask = (SEC_HOST_CFG_TX_DMA_FSM_ENABLE << SEC_HOST_CFG_TX_DMA_FSM_BITPOS) | \
              (SEC_HOST_CFG_RX_DMA_FSM_ENABLE << SEC_HOST_CFG_RX_DMA_FSM_BITPOS);
    
    regs->SEC_CFG |= bitmask;
}

/**
 * @brief Read the Device Address Table Pointer Register
 *
 * @param regs Pointer to controller registers
 * @param start_addr return the start address of device address table
 * @param depth return the depth of device address table
 */
void _i3c_dev_addr_table_ptr_get(struct mec_i3c_host_regs *regs, uint16_t *start_addr,
                                 uint16_t *depth)
{
    uint32_t val;

    val = regs->DAT_PTR;

    *start_addr = val & 0xFFFFu;
    *depth = (uint16_t)((val >> 16) & 0xFFFFu);
}

/**
 * @brief Read the Device Characteristics Table Pointer Register
 *
 * @param regs Pointer to controller registers
 * @param start_addr return the start address of device characteristics table
 * @param depth return the depth of device characteristics table
 */
void _i3c_dev_char_table_ptr_get(struct mec_i3c_host_regs *regs, uint16_t *start_addr,
                                 uint16_t *depth)
{
    uint32_t val;

    val = regs->DCT_PTR;

    *start_addr = val & 0xFFFu; /* Bits 0 to 11 */
    *depth = (val >> 12) & 0x7Fu; /* Bits 12 to 18 */
}

/**
 * @brief Retrieve the current operation of the the device
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_dev_operation_mode_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)(regs->DEV_EXT_CTRL & 0x03U);
}

/**
 * @brief Retrieve the current operation mode of the controller
 * (active or secondary)
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_dev_controller_role_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)(regs->PRES_STATE & 0x04U);
}

/**
 * @brief Retrieve the HW configured role of the core
 * (controller only or secondary controller or target only)
 *
 * @param regs Pointer to controller registers
 */
uint8_t _i3c_dev_role_config_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)(regs->HW_CAP & 0x07U);
}

/**
 * @brief Writes the DAT entry
 *
 * @param regs Pointer to controller registers
 * @param DAT_start Start location of DAT
 * @param DAT_idx Position in the Device Address table
 * @param val 32-bit value to program
 */
void _i3c_DAT_write(struct mec_i3c_host_regs *regs, uint16_t DAT_start, uint8_t DAT_idx,
                    uint32_t val)
{
     uint32_t *entry_addr;

     entry_addr = (uint32_t *)((uint32_t)regs + ((uint32_t)DAT_start + ((uint32_t)DAT_idx * 4u)));

     *entry_addr = val;
}

/**
 * @brief Reads the DAT entry
 *
 * @param regs Pointer to controller registers
 * @param DAT_start Start location of DAT
 * @param DAT_idx Position in the Device Address table
 * @return val 32-bit DAT value
 */
uint32_t _i3c_DAT_read(struct mec_i3c_host_regs *regs, uint16_t DAT_start, uint8_t DAT_idx)
{
     uint32_t *entry_addr;
     uint32_t val;

     entry_addr = (uint32_t *)((uint32_t)regs + ((uint32_t)DAT_start + ((uint32_t)DAT_idx * 4u)));

     val = *entry_addr;

     return val;
}

/**
 * @brief Read the DCT
 *
 * @param regs Pointer to controller registers
 * @param DAT_start Start location of DCT
 * @param DAT_idx Position in the Device Characteristics table
 * @param info DCT information read
 */
void _i3c_DCT_read(struct mec_i3c_host_regs *regs, uint16_t DCT_start, uint8_t DCT_idx,
                   struct mec_i3c_DCT_info *info)
{
     uint32_t *entry_addr;
     uint64_t prov_id = 0;

     entry_addr =
        (uint32_t *)((uint32_t)regs + ((uint32_t)DCT_start + ((uint32_t)DCT_idx * 4u * 4u)));

     prov_id = *entry_addr;

     entry_addr++;
     info->pid = (prov_id << 16) | (*entry_addr & 0xFFFF);

     entry_addr++;
     info->dcr = *entry_addr & 0xFF;
     info->bcr = (*entry_addr >> 8) & 0xFF;

     entry_addr++;
     info->dynamic_addr = *entry_addr & 0x7F;
}

/**
 * @brief Read the Secondary DCT
 *
 * @param regs Pointer to controller registers
 * @param DAT_start Start location of DCT
 * @param DAT_idx Position in the Device Characteristics table
 * @param info SDCT information read
 */
void _i3c_SDCT_read(struct mec_i3c_host_regs *regs, uint16_t DCT_start, uint8_t idx,
                    struct mec_i3c_SDCT_info *info)
{
     uint32_t *entry_addr;
     uint32_t sdct_val = 0;

     entry_addr = (uint32_t *)((uint32_t)regs + ((uint32_t)DCT_start + ((uint32_t)idx * 4u)));

     sdct_val = *entry_addr;

     info->dynamic_addr = sdct_val & 0xFFu;
     info->dcr = (sdct_val >> 8) & 0xFFu;
     info->bcr = (sdct_val >> 16) & 0xFFu;
     info->static_addr = (uint8_t)((sdct_val >> 24) & 0xFFu);
}

/**
 * @brief Write the FIFO with data
 *
 * @param regs Pointer to controller registers
 * @param buffer  buffer with data
 * @param len Length of data in the buffer
 */
void _i3c_fifo_write(struct mec_i3c_host_regs *regs, uint8_t *buffer, uint16_t len)
{
    uint32_t *dword_ptr;
    uint32_t last_dword = 0;
    uint16_t i, remaining_bytes;

    if (len >= 4) {

        dword_ptr = (uint32_t *)buffer;

        for (i = 0; i < len / 4; i++) {
            regs->TX_DATA = dword_ptr[i];
        }
    }

    remaining_bytes = len % 4;

    if (remaining_bytes) {
        memcpy(&last_dword, buffer + (len & ~0x3), remaining_bytes);
        regs->TX_DATA = last_dword;
    }
}

/**
 * @brief Read from FIFO
 *
 * @param regs Pointer to controller registers
 * @param buffer  buffer to copy data
 * @param len Length of data to read
 */
void _i3c_fifo_read(struct mec_i3c_host_regs *regs, uint8_t *buffer, uint16_t len)
{
    uint32_t *dword_ptr;
    uint32_t last_dword = 0;
    uint16_t i =0, remaining_bytes = 0;

    if (len >= 4) {

        dword_ptr = (uint32_t *)buffer;

        for (i = 0; i < len / 4; i++) {
            dword_ptr[i] = regs->RX_DATA;
        }
    }

    remaining_bytes = len % 4;

    if (remaining_bytes) {
        last_dword = regs->RX_DATA;
        memcpy(buffer + (len & ~0x3), &last_dword, remaining_bytes);
    }
}

/**
 * @brief Read from IBI Queue
 *
 * @param regs Pointer to controller registers
 * @param buffer  buffer to copy data
 * @param len Length of data to read
 */
void _i3c_ibi_data_read(struct mec_i3c_host_regs *regs, uint8_t *buffer, uint16_t len)
{
    uint32_t *dword_ptr;
    uint32_t last_dword = 0;
    uint16_t i =0, remaining_bytes = 0;
    volatile uint32_t drain_dword;
    bool drain_flag = false;

    if (NULL == buffer) {
        drain_flag = true;
    }

    if (len >= 4) {

        if (drain_flag) {
            for (i = 0; i < len / 4; i++) {
                drain_dword |= regs->IBI_QUE_STS;
            }
        } else {
            dword_ptr = (uint32_t *)buffer;

            for (i = 0; i < len / 4; i++) {
                dword_ptr[i] = regs->IBI_QUE_STS;
            }
        }
    }

    remaining_bytes = len % 4;

    if (remaining_bytes) {
        last_dword = regs->IBI_QUE_STS;
        if (!drain_flag) {
            memcpy(buffer + (len & ~0x3), &last_dword, remaining_bytes);
        }
    }
}

/**
 * @brief Reset all transfers
 *
 * @param regs Pointer to controller registers
 */
void _i3c_xfers_reset(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t reg_val = 1;

    regs->RST_CTRL = RESET_CTRL_RX_FIFO_RST | RESET_CTRL_TX_FIFO_RST |
                        RESET_CTRL_RES_Q_RST | RESET_CTRL_CMD_Q_RST;

    while (reg_val) {
        reg_val = regs->RST_CTRL;
    }
}

/**
 * @brief clears residual data by flushing transmit fifo
 *
 * @param regs Pointer to controller registers
 */
void _i3c_tx_fifo_rst(struct mec_i3c_host_regs *regs)
{
    regs->RST_CTRL = RESET_CTRL_TX_FIFO_RST;
}

/**
 * @brief resets RX Fifo
 *
 * @param regs Pointer to controller registers
 */
void _i3c_rx_fifo_rst(struct mec_i3c_host_regs *regs)
{
    regs->RST_CTRL = RESET_CTRL_RX_FIFO_RST;
}

/**
 * @brief Resets Command Queue
 *
 * @param regs Pointer to controller registers
 */
void _i3c_cmd_queue_rst(struct mec_i3c_host_regs *regs)
{
    regs->RST_CTRL = RESET_CTRL_CMD_Q_RST;
}

/**
 * @brief I3C core software reset
 *
 * @param regs Pointer to controller registers
 */
void _i3c_soft_reset(struct mec_i3c_host_regs *regs)
{
    volatile uint32_t reg_val = 1;

    regs->RST_CTRL = RESET_CTRL_SOFT_RST;

    while (reg_val & RESET_CTRL_SOFT_RST) {
        reg_val = regs->RST_CTRL;
    }
}
/**
 * @brief Write the command in the Command Queue Port
 *
 * @param regs Pointer to controller registers
 * @param cmd  The Command
  */
void _i3c_command_write(struct mec_i3c_host_regs *regs, uint32_t cmd)
{
    regs->CMD = cmd;
}

/**
 * @brief Retrieve the depth of the TX FIFO
 * in bytes
 */
uint8_t _i3c_tx_fifo_depth_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)((FIFO_DEPTH_MIN_DWORD << ((regs->QUE_SIZE_CAP & MEC_GENMASK(3, 0)) >> Q_CAP_TX_FIFO_DEPTH_BITPOS)) * 4u);
}

/**
 * @brief Retrieve the depth of the RX FIFO
 * in bytes
 */
uint8_t _i3c_rx_fifo_depth_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)((FIFO_DEPTH_MIN_DWORD << ((regs->QUE_SIZE_CAP & MEC_GENMASK(7, 4)) >> Q_CAP_RX_FIFO_DEPTH_BITPOS)) * 4u);
}

/**
 * @brief Retrieve the depth of the command FIFO
 * in bytes
 */
uint8_t _i3c_cmd_fifo_depth_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)(FIFO_DEPTH_MIN_DWORD << ((regs->QUE_SIZE_CAP & MEC_GENMASK(11, 8)) >> Q_CAP_CMD_FIFO_DEPTH_BITPOS));
}

/**
 * @brief Retrieve the depth of the response FIFO
 * in bytes
 */
uint8_t _i3c_resp_fifo_depth_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)(FIFO_DEPTH_MIN_DWORD << ((regs->QUE_SIZE_CAP & MEC_GENMASK(15, 12)) >> Q_CAP_RESP_FIFO_DEPTH_BITPOS));
}

/**
 * @brief Retrieve the depth of the IBI FIFO
 * in bytes
 */
uint8_t _i3c_ibi_fifo_depth_get(struct mec_i3c_host_regs *regs)
{
    return (uint8_t)(FIFO_DEPTH_MIN_DWORD << ((regs->QUE_SIZE_CAP & MEC_GENMASK(19, 16)) >> Q_CAP_IBI_FIFO_DEPTH_BITPOS));
}

/**
 * @brief Set the PID of secondary controller (in target mode)
 */
void _i3c_tgt_pid_set(struct mec_i3c_sec_regs *regs,
                        uint16_t tgt_mipi_mfg_id,
                        bool is_random_prov_id,
                        uint16_t tgt_part_id,
                        uint8_t tgt_inst_id,
                        uint16_t tgt_pid_dcr)
{
    regs->MIPI_MAN_ID = (tgt_mipi_mfg_id << TGT_MIPI_MFG_ID_BITPOS);

    if(false == is_random_prov_id) {
        regs->NORM_PROV_ID = (tgt_part_id << TGT_PART_ID_BITPOS) |
                            (tgt_inst_id << TGT_INST_ID_BITPOS) |
                            (tgt_pid_dcr << TGT_PID_DCR_BITPOS);
    }
}

/**
 * @brief Get the Dynamic address valid bit
 * of secondary controller (in target mode)
 */
bool _i3c_tgt_dyn_addr_valid_get(struct mec_i3c_sec_regs *regs)
{
    return (bool)(regs->DEV_ADDR & sbit_DEVICE_ADDR_DYNAMIC_ADDR_VALID);
}

/**
 * @brief Get the Dynamic address
 * of secondary controller (in target mode)
 */
uint8_t _i3c_tgt_dyn_addr_get(struct mec_i3c_sec_regs *regs)
{
    return (uint8_t)((regs->DEV_ADDR & MEC_GENMASK(22, 16)) >> DEVICE_ADDR_DYNAMIC_ADDR_BITPOS);
}

/**
 * @brief Set the MRL of secondary controller (in target mode)
 */
void _i3c_tgt_mrl_set(struct mec_i3c_sec_regs *regs, uint16_t mrl)
{
    regs->MAX_RW_LEN = (regs->MAX_RW_LEN & ~(MEC_GENMASK(31, 16))) | (mrl << MRL_BITPOS);
}

/**
 * @brief Set the MWL of secondary controller (in target mode)
 */
void _i3c_tgt_mwl_set(struct mec_i3c_sec_regs *regs, uint16_t mwl)
{
    regs->MAX_RW_LEN = (regs->MAX_RW_LEN & ~(MEC_GENMASK(15, 0))) | (mwl << MWL_BITPOS);
}

/**
 * @brief Set the MXDS value of secondary controller (in target mode)
 */
void _i3c_tgt_mxds_set(struct mec_i3c_sec_regs *regs,
                        uint8_t wr_speed,
                        uint8_t rd_speed,
                        uint8_t tsco,
                        uint32_t rd_trnd_us)
{
    regs->MAX_DS = (wr_speed << MXDS_MAX_WR_SPEED_BITPOS) |
                            (rd_speed << MXDS_MAX_RD_SPEED_BITPOS) |
                            (tsco << MXDS_TSCO_BITPOS);
    regs->MAX_RD_TAR = MXDS_MAX_RD_TURN_MASK(rd_trnd_us);
}

/**
 * @brief Check if SIR is enabled by the controller
 */
bool _i3c_tgt_SIR_enabled(struct mec_i3c_sec_regs *regs)
{
    bool ret = false;
    if (regs->TGT_EVT_STS & TGT_EVT_STS_SIR_EN) {
        ret = true;
    }

    return ret;
}

/**
 * @brief Check if SIR is enabled by the controller
 */
bool _i3c_tgt_MR_enabled(struct mec_i3c_sec_regs *regs)
{
    bool ret = false;
    if (regs->TGT_EVT_STS & TGT_EVT_STS_MIR_EN) {
        ret = true;
    }

    return ret;
}

/**
 * @brief Raise IBI Target Interrupt Request (SIR)
 */
void _i3c_tgt_raise_ibi_SIR(struct mec_i3c_sec_regs *regs, uint8_t *sir_data, uint8_t sir_datalen,
                            uint8_t mdb)
{
    uint32_t sir_data_dword = 0;

    regs->TARG_IREQ = (mdb << TGT_INTR_REQ_MDB_BITPOS) |
                        (sir_datalen << TGT_INTR_REQ_SIR_DATALEN_BITPOS);

    if (sir_datalen ) {
        for (int i = 0; i < sir_datalen; i++) {
            sir_data_dword <<= 8;
            sir_data_dword |= sir_data[i];
        }
        regs->TARG_IREQ_DATA = sir_data_dword;
    }
    regs->TARG_IREQ |= TGT_INTR_REQ_SIR;
}

/**
 * @brief Raise IBI Master Request (MR)
 */
void _i3c_tgt_raise_ibi_MR(struct mec_i3c_sec_regs *regs)
{
    regs->TARG_IREQ = TGT_INTR_REQ_MR;

    /* Enable ACK for GETACCMST CCC from master */
    regs->DEV_EXT_CTRL &= ~(DEV_REQMST_ACK_CTRL_NACK);
}

/**
 * @brief Retrieve the IBI response from IBI Response register
 */
bool _i3c_tgt_ibi_resp_get(struct mec_i3c_sec_regs *regs, uint8_t *sir_rem_datalen)
{
    bool ret = false;
    /* Databook mentions SIR RESP DATA LENGTH as bits 8 t0 23, but we are using only
     * 8 bits because IBI Datalen is not supposed to be more than 4
     */
    *sir_rem_datalen = (regs->TARG_IBI_RESP >>  TGT_IBI_RESP_DATALEN_BITPOS) & 0xFF;

    if (TGT_IBI_RESP_SUCCESS == (regs->TARG_IBI_RESP & 0x3)) {
            ret = true;
    }

    return ret;
}

/**
 * @brief Retrieve target max read length
 */
void _i3c_tgt_MRL_get(struct mec_i3c_sec_regs *regs, uint16_t *max_rd_len)
{
    *max_rd_len = (uint16_t)(regs->MAX_RW_LEN >> 16);
}

/**
 * @brief Retrieve target max write length
 */
void _i3c_tgt_MWL_get(struct mec_i3c_sec_regs *regs, uint16_t *max_wr_len)
{
    *max_wr_len = (uint16_t)(regs->MAX_RW_LEN & 0xFFFF);
}

/**
 * @brief Set target max read and write length
 */
void _i3c_tgt_MRL_MWL_set(struct mec_i3c_sec_regs *regs, uint16_t max_rd_len, uint16_t max_wr_len)
{
    regs->MAX_RW_LEN  = ((uint32_t)max_rd_len << 16) | max_wr_len;
}

/**
 * @brief Retrieve target max write length
 */
void _i3c_tgt_MWL_set(struct mec_i3c_sec_regs *regs, uint16_t *max_wr_len)
{
    *max_wr_len = (uint16_t)(regs->MAX_RW_LEN & 0xFFFFu);
}

/**
 * @brief Returns true if controller updated MRL
 */
bool _i3c_tgt_MRL_updated(struct mec_i3c_sec_regs *regs)
{
    bool ret = false;

    if (regs->TGT_EVT_STS & TGT_EVT_STS_MRL_UPDATED)    {
        ret = true;
        /* Write 1 to clear */
        regs->TGT_EVT_STS = TGT_EVT_STS_MRL_UPDATED;
    }

    return ret;
}

/**
 * @brief Returns true if controller updated MWL
 */
bool _i3c_tgt_MWL_updated(struct mec_i3c_sec_regs *regs)
{
    bool ret = false;

    if (regs->TGT_EVT_STS & TGT_EVT_STS_MWL_UPDATED)    {
        ret = true;
        /* Write 1 to clear */
        regs->TGT_EVT_STS = TGT_EVT_STS_MWL_UPDATED;
    }

    return ret;
}

/**
 * @brief Set target max read and write speed
 */
void _i3c_tgt_max_speed_update(struct mec_i3c_sec_regs *regs, uint8_t max_rd_speed,
                               uint8_t max_wr_speed)
{
    regs->MAX_DS &= (uint32_t)~(TGT_MAX_WR_DATA_SPEED_MASK << TGT_MAX_WR_DATA_SPEED_POS);
    regs->MAX_DS &= (uint32_t)~(TGT_MAX_RD_DATA_SPEED_MASK << TGT_MAX_RD_DATA_SPEED_POS);

    regs->MAX_DS |= (max_wr_speed << TGT_MAX_WR_DATA_SPEED_POS);
    regs->MAX_DS |= (max_rd_speed << TGT_MAX_RD_DATA_SPEED_POS);
}

/**
 * @brief Set target max read and write speed
 */
void _i3c_tgt_clk_to_data_turn_update(struct mec_i3c_sec_regs *regs, uint8_t clk_data_turn_time)
{
    regs->MAX_DS &= (uint32_t)~(TGT_CLK_TO_DATA_TURN_MASK << TGT_CLK_TO_DATA_TURN_POS);

    regs->MAX_DS |= ((uint32_t)clk_data_turn_time << TGT_CLK_TO_DATA_TURN_POS);
}
