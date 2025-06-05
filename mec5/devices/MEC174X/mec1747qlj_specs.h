/**
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */
#ifndef __MEC5_SPECS_H__
#define __MEC5_SPECS_H__

/* MEC1747-QLJ */
#define MEC5_MEC1747_QLJ
#define MEC5_PKG176

#define MEC_SERIES_ID  4

#define MEC5_FAM4_ID        0x26u
#define MEC174X_FAM_ID      0x00260000u
#define MEC1747QLJ_DEV_ID   0x00267700u

#define MEC5_CODE_SRAM_BASE 0xb0000
#define MEC5_CODE_SRAM_SIZE 0x68000
#define MEC5_DATA_SRAM_BASE 0x118000
#define MEC5_DATA_SRAM_SIZE 0x10000
#define MEC5_PUF_DATA_SRAM_BASE 0x127800
#define MEC5_PUF_DATA_SRAM_SIZE 0x800

#define MEC5_ECIA_NUM_GIRQS 19
#define MEC5_NVIC_NUM_REGS  7
#define MEC5_MAX_NVIC_EXT_INPUTS 194
#define MEC5_NVIC_NUM_IP_REGS 49
#define MEC5_ECIA_FIRST_GIRQ_NOS 8
#define MEC5_ECIA_LAST_GIRQ_NOS 26

/* ARM Cortex-Mx NVIC hardware numeric priority value 0 is highest priority */
#define MEC5_NVIC_PRI_LO_VAL 7
#define MEC5_NVIC_PRI_HI_VAL 0

#define MEC5_ECIA_DIRECT_BITMAP 0x00bfe000u
#define MEC5_ECIA_ALL_BITMAP 0x07ffff00u

#define MEC_MAX_PCR_SCR_REGS 5

#define MEC5_ADC_CHANNELS 16

#define MEC5_BASIC_TIMER_INSTANCES 6
#define MEC5_BASIC_TIMER_16_MSK 0x0fu
#define MEC5_BASIC_TIMER_32_MSK 0x30u

#define MEC5_HIB_TIMER_INSTANCES 2
#define MEC5_CTMR_TIMER_INSTANCES 4
#define MEC5_CCT_INSTANCES 1

#define MEC5_DMAC_NUM_CHANNELS 16

#define MEC5_ESPI_HW_VER_15 15
#define MEC5_ESPI_IOBAR_MSK_LO 0xf7ffffu
#define MEC5_ESPI_IOBAR_MSK_HI 0
#define MEC5_ESPI_LDN_IOB_MSK_LO 0x00379fffu
#define MEC5_ESPI_LDN_IOB_MSK_HI 0x00008003u
#define MEC5_ESPI_MEMBAR_MSK_LO 0x3ffu
#define MEC5_ESPI_MEMBAR_MSK_HI 0
#define MEC5_ESPI_LDN_MEMB_MSK_LO 0x0007007du
#define MEC5_ESPI_LDN_MEMB_MSK_HI 0x00008000u
#define MEC5_ESPI_PC_SIRQ_BITMAP 0x2fffffu
#define MEC5_ESPI_NUM_CTVW 11
#define MEC5_ESPI_NUM_TCVW 11

/* 32 GPIO pins per port */
#define MEC5_GPIO_NUM_PORTS 6
#define MEC5_GPIO_PORT0_BITMAP 0x7fffffffu /* GPIO 0000 - 0036 */
#define MEC5_GPIO_PORT1_BITMAP 0x0fffffffu /* GPIO 0040 - 0076 */
#define MEC5_GPIO_PORT2_BITMAP 0x3fff3ff7u /* GPIO 0100 - 0036 */
#define MEC5_GPIO_PORT3_BITMAP 0x3f67ffffu /* GPIO 0140 - 0176 */
#define MEC5_GPIO_PORT4_BITMAP 0x7fffffffu /* GPIO 0200 - 0236 */
#define MEC5_GPIO_PORT5_BITMAP 0x0003fe7fu /* GPIO 0240 - 0276 */

/* some pins may not implement Control2 register */
#define MEC5_GPIO_PORT0_C2_BITMAP 0x7fffffffu
#define MEC5_GPIO_PORT1_C2_BITMAP 0x0fffffffu
#define MEC5_GPIO_PORT2_C2_BITMAP 0x3fff3ff7u
#define MEC5_GPIO_PORT3_C2_BITMAP 0x3f67ffffu
#define MEC5_GPIO_PORT4_C2_BITMAP 0x7fffffffu
#define MEC5_GPIO_PORT5_C2_BITMAP 0x0001fe7fu

#define MEC5_I2C_SMB_HW_VER 38
#define MEC5_I2C_SMB_INSTANCES 5
#define MEC5_I2C_SMB_BAUD_CLOCK 16000000
#define MEC5_I2C_SMB_PORT_MAP 0xffffu
#define MEC5_I2C_SMB_HAS_STOP_DETECT_IRQ

#define MEC5_QSPI_INSTANCES 1
#define MEC5_QSPI_NUM_DESCRS 16
/* Individual TX and RX FIFO byte lengths */
#define MEC5_QSPI_FIFO_LEN 8
/* TX and RX each implement this number of Local DMA channels */
#define MEC5_QSPI_LDMA_CHANNELS 3

#define MEC5_GPSPI_CTRL_VERSION 2
#define MEC5_GPSPI_INSTANCES 2

#define MEC5_UART_INSTANCES 4
#define MEC5_UART_INSTANCE_MAP 0xfu
#define MEC5_UART_HAS_LSR2_REGISTER 1

#define MEC5_ACPI_EC_INSTANCES 5

#define MEC5_EMI_INSTANCES 3

#define MEC5_MAILBOX_INSTANCES 1

#define MEC5_PS2_INSTANCES 2

#define MEC5_KSCAN_INSTANCES 1

#define MEC5_PWM_INSTANCES 12

#define MEC5_TACH_INSTANCES 4

#define MEC5_BBLED_INSTANCES 4

/* Length in bytes of VBAT memory region */
#define MEC_VBAT_MEM_SIZE 128u

#define MEC5_VCI_PINS 5
#define MEC5_VCI_PINS_MASK 0x3fu
#define MEC5_VCI_GPIO_PINS_MASK 0x3eu
#define MEC5_VCI_HAS_LID_DETECT

#define MEC5_HAS_ROM_TIMER 1
#define MEC5_HAS_PERIPH_PRIVILEGE 1

#define MEC5_HAS_INTERNAL_SPI_FLASH 1
#define MEC5_INTERNAL_SPI_FLASH_SIZE (512u * 1024u)
#define MEC5_INTERNAL_SPI_FLASH_PAGE_SIZE 256u
#define MEC5_INTERNAL_SPI_FLASH_ERASE_SIZE_1 (4u * 1024u)
#define MEC5_INTERNAL_SPI_FLASH_ERASE_SIZE_2 0
#define MEC5_INTERNAL_SPI_FLASH_ERASE_SIZE_3 (64u * 1024u)

/* BC-Link */
#define MEC5_BCL_INSTANCES 1

#endif /* __MEC5_SPECS_H__ */
