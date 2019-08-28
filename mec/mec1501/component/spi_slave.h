/**
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
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

/** @file spi_slave.h
 *MEC1501 SPI Slave registers
 */
/** @defgroup MEC1501 Peripherals SPI Slave
 */

#ifndef _SPI_SLAVE_H
#define _SPI_SLAVE_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 SPISLV 			=========== */
/* =========================================================================*/

#define MCHP_SPISLV_BASE_ADDR	0x40007000ul

/*
 * SPISLV interrupts
 */
#define MCHP_SPISLV_GIRQ	18u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_SPISLV_GIRQ_POS	0u

#define MCHP_SPISLV_GIRQ_VAL	(1ul << MCHP_SPISLV_GIRQ_POS)

/* SPISLV GIRQ aggregated NVIC input */
#define MCHP_SPISLV_NVIC_AGGR	10u

/* SPISLV direct NVIC inputs */
#define MCHP_SPISLV_NVIC_DIRECT	90u

/* SPISLV Configuration register */
#define MCHP_SPISLV_CFG_REG_OFS		0
#define MCHP_SPISLV_CFG_REG_MASK	0x00ff0301ul
#define MCHP_SPISLV_CFG_SQ_SEL_POS	0
#define MCHP_SPISLV_CFG_SINGLE		(0ul << 0)
#define MCHP_SPISLV_CFG_QUAD		(1ul << 0)
#define MCHP_SPISLV_CFG_TAR_POS		8
#define MCHP_SPISLV_CFG_TAR_MASK0	0x03u
#define MCHP_SPISLV_CFG_TAR_MASK	(0x03ul << 8)
#define MCHP_SPISLV_CFG_TAR_1		(0x00ul << 8)
#define MCHP_SPISLV_CFG_TAR_2		(0x01ul << 8)
#define MCHP_SPISLV_CFG_TAR_4		(0x02ul << 8)
#define MCHP_SPISLV_CFG_TAR_8		(0x03ul << 8)
#define MCHP_SPISLV_CFG_WTM_POS		16
#define MCHP_SPISLV_CFG_WTM_MASK0	0xffu
#define MCHP_SPISLV_CFG_WTM_MASK	(0xfful << 16)

/* SPISLV Status register */
#define MCHP_SPISLV_STS_REG_OFS		4
#define MCHP_SPISLV_STS_REG_MASK	0x1FFFEF7Bul
#define MCHP_SPISLV_SPI_STS_MWD		(1ul << 0)
#define MCHP_SPISLV_SPI_STS_MRD		(1ul << 1)
#define MCHP_SPISLV_SPI_STS_MWB		(1ul << 3)
#define MCHP_SPISLV_SPI_STS_MRB		(1ul << 4)
#define MCHP_SPISLV_SPI_STS_SRTB	(1ul << 5)
#define MCHP_SPISLV_SPI_STS_PHI_REQ	(1ul << 6)
#define MCHP_SPISLV_SPI_STS_RXFE	(1ul << 8)
#define MCHP_SPISLV_SPI_STS_RXFF	(1ul << 9)
#define MCHP_SPISLV_SPI_STS_TXFE	(1ul << 10)
#define MCHP_SPISLV_SPI_STS_TXFF	(1ul << 11)
#define MCHP_SPISLV_SPI_STS_SCCE	(1ul << 13)
#define MCHP_SPISLV_SPI_STS_OBF		(1ul << 15)
#define MCHP_SPISLV_SPI_STS_SPIMR	(1ul << 16)
#define MCHP_SPISLV_SPI_STS_RXF_RSTD	(1ul << 17)
#define MCHP_SPISLV_SPI_STS_TXF_RSTD	(1ul << 18)
#define MCHP_SPISLV_SPI_STS_LIM0	(1ul << 19)
#define MCHP_SPISLV_SPI_STS_LIM1	(1ul << 20)
#define MCHP_SPISLV_SPI_STS_ABERR	(1ul << 21)
#define MCHP_SPISLV_SPI_STS_UNDEF_CMD	(1ul << 22)
#define MCHP_SPISLV_SPI_STS_DVB		(1ul << 23)
#define MCHP_SPISLV_SPI_STS_RXF_SZ	(1ul << 24)
#define MCHP_SPISLV_SPI_STS_TXF_UNF	(1ul << 25)
#define MCHP_SPISLV_SPI_STS_TXF_OVF	(1ul << 26)
#define MCHP_SPISLV_SPI_STS_RXF_UNF	(1ul << 27)
#define MCHP_SPISLV_SPI_STS_RXF_OVF	(1ul << 28)

/* SPISLV EC Status register */
#define MCHP_SPISLV_EC_STS_REG_OFS	8
#define MCHP_SPISLV_EC_STS_REG_MASK	0x1FFFEF7Bul
#define MCHP_SPISLV_EC_STS_MWD		(1ul << 0)
#define MCHP_SPISLV_EC_STS_MRD		(1ul << 1)
#define MCHP_SPISLV_EC_STS_MWB		(1ul << 3)
#define MCHP_SPISLV_EC_STS_MRB		(1ul << 4)
#define MCHP_SPISLV_EC_STS_SRTB		(1ul << 5)
#define MCHP_SPISLV_EC_STS_PHI_REQ	(1ul << 6)
#define MCHP_SPISLV_EC_STS_RXFE		(1ul << 8)
#define MCHP_SPISLV_EC_STS_RXFF		(1ul << 9)
#define MCHP_SPISLV_EC_STS_TXFE		(1ul << 10)
#define MCHP_SPISLV_EC_STS_TXFF		(1ul << 11)
#define MCHP_SPISLV_EC_STS_SCCE		(1ul << 13)
#define MCHP_SPISLV_EC_STS_IBF		(1ul << 14)
#define MCHP_SPISLV_EC_STS_OBF		(1ul << 15)
#define MCHP_SPISLV_EC_STS_SPIMR	(1ul << 16)
#define MCHP_SPISLV_EC_STS_RXF_RSTD	(1ul << 17)
#define MCHP_SPISLV_EC_STS_TXF_RSTD	(1ul << 18)
#define MCHP_SPISLV_EC_STS_LIM0		(1ul << 19)
#define MCHP_SPISLV_EC_STS_LIM1		(1ul << 20)
#define MCHP_SPISLV_EC_STS_ABERR	(1ul << 21)
#define MCHP_SPISLV_EC_STS_UNDEF_CMD	(1ul << 22)
#define MCHP_SPISLV_EC_STS_DVB		(1ul << 23)
#define MCHP_SPISLV_EC_STS_RXF_SZ	(1ul << 24)
#define MCHP_SPISLV_EC_STS_TXF_UNF	(1ul << 25)
#define MCHP_SPISLV_EC_STS_TXF_OVF	(1ul << 26)
#define MCHP_SPISLV_EC_STS_RXF_UNF	(1ul << 27)
#define MCHP_SPISLV_EC_STS_RXF_OVF	(1ul << 28)

/* SPISLV SPI Interrupt Enable register */
#define MCHP_SPISLV_SPI_IEN_REG_OFS	0x0C
#define MCHP_SPISLV_SPI_IEN_REG_MASK	0x1FFFAF7Bul
#define MCHP_SPISLV_SPI_IEN_MWD		(1ul << 0)
#define MCHP_SPISLV_SPI_IEN_MRD		(1ul << 1)
#define MCHP_SPISLV_SPI_IEN_MWB		(1ul << 3)
#define MCHP_SPISLV_SPI_IEN_MRB		(1ul << 4)
#define MCHP_SPISLV_SPI_IEN_SRTB	(1ul << 5)
#define MCHP_SPISLV_SPI_IEN_PHI_REQ	(1ul << 6)
#define MCHP_SPISLV_SPI_IEN_RXFE	(1ul << 8)
#define MCHP_SPISLV_SPI_IEN_RXFF	(1ul << 9)
#define MCHP_SPISLV_SPI_IEN_TXFE	(1ul << 10)
#define MCHP_SPISLV_SPI_IEN_TXFF	(1ul << 11)
#define MCHP_SPISLV_SPI_IEN_SCCE	(1ul << 13)
#define MCHP_SPISLV_SPI_IEN_OBF		(1ul << 15)
#define MCHP_SPISLV_SPI_IEN_SPIMR	(1ul << 16)
#define MCHP_SPISLV_SPI_IEN_RXF_RSTD	(1ul << 17)
#define MCHP_SPISLV_SPI_IEN_TXF_RSTD	(1ul << 18)
#define MCHP_SPISLV_SPI_IEN_LIM0	(1ul << 19)
#define MCHP_SPISLV_SPI_IEN_LIM1	(1ul << 20)
#define MCHP_SPISLV_SPI_IEN_ABERR	(1ul << 21)
#define MCHP_SPISLV_SPI_IEN_UNDEF_CMD	(1ul << 22)
#define MCHP_SPISLV_SPI_IEN_DVB		(1ul << 23)
#define MCHP_SPISLV_SPI_IEN_RXF_SZ	(1ul << 24)
#define MCHP_SPISLV_SPI_IEN_TXF_UNF	(1ul << 25)
#define MCHP_SPISLV_SPI_IEN_TXF_OVF	(1ul << 26)
#define MCHP_SPISLV_SPI_IEN_RXF_UNF	(1ul << 27)
#define MCHP_SPISLV_SPI_IEN_RXF_OVF	(1ul << 28)

/* SPISLV EC Interrupt Enable register */
#define MCHP_SPISLV_EC_IEN_REG_OFS	0x10
#define MCHP_SPISLV_EC_IEN_REG_MASK	0x1FFFEF7Bul
#define MCHP_SPISLV_EC_IEN_MWD		(1ul << 0)
#define MCHP_SPISLV_EC_IEN_MRD		(1ul << 1)
#define MCHP_SPISLV_EC_IEN_MWB		(1ul << 3)
#define MCHP_SPISLV_EC_IEN_MRB		(1ul << 4)
#define MCHP_SPISLV_EC_IEN_SRTB		(1ul << 5)
#define MCHP_SPISLV_EC_IEN_PHI_REQ	(1ul << 6)
#define MCHP_SPISLV_EC_IEN_RXFE		(1ul << 8)
#define MCHP_SPISLV_EC_IEN_RXFF		(1ul << 9)
#define MCHP_SPISLV_EC_IEN_TXFE		(1ul << 10)
#define MCHP_SPISLV_EC_IEN_TXFF		(1ul << 11)
#define MCHP_SPISLV_EC_IEN_SCCE		(1ul << 13)
#define MCHP_SPISLV_EC_IEN_IBF		(1ul << 14)
#define MCHP_SPISLV_EC_IEN_OBF		(1ul << 15)
#define MCHP_SPISLV_EC_IEN_SPIMR	(1ul << 16)
#define MCHP_SPISLV_EC_IEN_RXF_RSTD	(1ul << 17)
#define MCHP_SPISLV_EC_IEN_TXF_RSTD	(1ul << 18)
#define MCHP_SPISLV_EC_IEN_LIM0		(1ul << 19)
#define MCHP_SPISLV_EC_IEN_LIM1		(1ul << 20)
#define MCHP_SPISLV_EC_IEN_ABERR	(1ul << 21)
#define MCHP_SPISLV_EC_IEN_UNDEF_CMD	(1ul << 22)
#define MCHP_SPISLV_EC_IEN_DVB		(1ul << 23)
#define MCHP_SPISLV_EC_IEN_RXF_SZ	(1ul << 24)
#define MCHP_SPISLV_EC_IEN_TXF_UNF	(1ul << 25)
#define MCHP_SPISLV_EC_IEN_TXF_OVF	(1ul << 26)
#define MCHP_SPISLV_EC_IEN_RXF_UNF	(1ul << 27)
#define MCHP_SPISLV_EC_IEN_RXF_OVF	(1ul << 28)

/* SPISLV Memory Config register */
#define MCHP_SPISLV_MCFG_REG_OFS	0x14
#define MCHP_SPISLV_MCFG_REG_MASK	0x03ul
#define MCHP_SPISLV_MCFG_BAR0_EN_POS	0
#define MCHP_SPISLV_MCFG_BAR0_EN	(1ul << 0)
#define MCHP_SPISLV_MCFG_BAR1_EN_POS	1
#define MCHP_SPISLV_MCFG_BAR1_EN	(1ul << 1)

/* SPISLV Memory Base Address 0 register */
#define MCHP_SPISLV_MBA0_REG_OFS	0x18
#define MCHP_SPISLV_MBA0_REG_MASK	0xFFFFFFFCul

/* SPISLV Memory Write Limit 0 register */
#define MCHP_SPISLV_MWLIM0_REG_OFS	0x1C
#define MCHP_SPISLV_MWLIM0_REG_MASK	0xFFFFFFFCul

/* SPISLV Memory Read Limit 0 register */
#define MCHP_SPISLV_MRLIM0_REG_OFS	0x20
#define MCHP_SPISLV_MRLIM0_REG_MASK	0xFFFFFFFCul

/* SPISLV Memory Base Address 1 register */
#define MCHP_SPISLV_MBA1_REG_OFS	0x24
#define MCHP_SPISLV_MBA1_REG_MASK	0xFFFFFFFCul

/* SPISLV Memory Write Limit 1 register */
#define MCHP_SPISLV_MWLIM1_REG_OFS	0x28
#define MCHP_SPISLV_MWLIM1_REG_MASK	0xFFFFFFFCul

/* SPISLV Memory Read Limit 1 register */
#define MCHP_SPISLV_MRLIM1_REG_OFS	0x2C
#define MCHP_SPISLV_MRLIM1_REG_MASK	0xFFFFFFFCul

/* SPISLV RX FIFO Host BAR register */
#define MCHP_SPISLV_RXFHB_REG_OFS	0x30
#define MCHP_SPISLV_RXFHB_REG_MASK	0xFFFFul

/* SPISLV RX FIFO Host BAR register */
#define MCHP_SPISLV_RXFBC_REG_OFS	0x34
#define MCHP_SPISLV_RXFBC_REG_MASK	0x7FFFul

/* SPISLV TX FIFO Host BAR register */
#define MCHP_SPISLV_TXFHB_REG_OFS	0x38
#define MCHP_SPISLV_TXFHB_REG_MASK	0xFFFFul

/* SPISLV TX FIFO Host BAR register */
#define MCHP_SPISLV_TXFBC_REG_OFS	0x3C
#define MCHP_SPISLV_TXFBC_REG_MASK	0x7FFFul

/* SPISLV System Configuration register */
#define MCHP_SPISLV_SYSCFG_REG_OFS	0x40
#define MCHP_SPISLV_SYSCFG_REG_MASK	0x000F04FFul
#define MCHP_SPISLV_SYSCFG_SRST		(1ul << 0)
#define MCHP_SPISLV_SYSCFG_LOCK_WM	(1ul << 1)
#define MCHP_SPISLV_SYSCFG_LOCK_TAR	(1ul << 2)
#define MCHP_SPISLV_SYSCFG_LOCK_WC	(1ul << 3)
#define MCHP_SPISLV_SYSCFG_LOCK_SPI_STS	(1ul << 4)
#define MCHP_SPISLV_SYSCFG_LOCK_SPI_IEN	(1ul << 5)
#define MCHP_SPISLV_SYSCFG_LOCK_MBA0	(1ul << 6)
#define MCHP_SPISLV_SYSCFG_LOCK_MBA1	(1ul << 7)
#define MCHP_SPISLV_SYSCFG_LOCK_TST	(1ul << 10)
#define MCHP_SPISLV_SYSCFG_LOCK_ALL	0x04FEul
#define MCHP_SPISLV_SYSCFG_ACT		(1ul << 16)
#define MCHP_SPISLV_SYSCFG_MASK_EC	(1ul << 17)
#define MCHP_SPISLV_SYSCFG_SIMPLE_MODE	(1ul << 18)
#define MCHP_SPISLV_SYSCFG_ECDA		(1ul << 19)

/* SPISLV SPI Master to EC Mailbox register */
#define MCHP_SPISLV_MB_S2EC_REG_OFS	0x44
#define MCHP_SPISLV_MB_S2EC_REG_MASK	0xFFFFFFFFul
#define MCHP_SPISLV_MB_S2EC_CLR		0xFFFFFFFFul

/* SPISLV EC to SPI Master Mailbox register */
#define MCHP_SPISLV_MB_EC2S_REG_OFS	0x48
#define MCHP_SPISLV_MB_EC2S_REG_MASK	0xFFFFFFFFul
#define MCHP_SPISLV_MB_EC2S_CLR		0xFFFFFFFFul

/* SPI commands supported by SPISLV */
#define SPISLV_CMD_IN_BAND_RST		0xFFu
#define SPISLV_CMD_UNDEF_W32		0x01u
#define SPISLV_CMD_UNDEF_W8		0x02u
#define SPISLV_CMD_UNDEF_R32		0x05u
#define SPISLV_CMD_UNDEF_R8		0x06u
#define SPISLV_CMD_SREG_W8		0x09u
#define SPISLV_CMD_SREG_W16		0x0Au
#define SPISLV_CMD_SREG_W32		0x0Bu
#define SPISLV_CMD_SREG_R8		0x0Du
#define SPISLV_CMD_SREG_R16		0x0Eu
#define SPISLV_CMD_SREG_R32		0x0Fu
#define SPISLV_CMD_RST_RX_FIFO		0x12u
#define SPISLV_CMD_RST_TX_FIFO		0x14u
#define SPISLV_CMD_RST_RXTX_FIFO	0x16u
#define SPISLV_CMD_MEM_W8		0x21u
#define SPISLV_CMD_MEM_W16		0x22u
#define SPISLV_CMD_MEM_W32		0x23u
#define SPISLV_CMD_MEM_R8		0x25u
#define SPISLV_CMD_MEM_R16		0x26u
#define SPISLV_CMD_MEM_R32		0x27u
#define SPISLV_CMD_RS_FIFO8		0x28u
#define SPISLV_CMD_RS_FIFO16		0x29u
#define SPISLV_CMD_RS_FIFO32		0x2Bu
#define SPISLV_CMD_POLL_LO		0x2Cu
#define SPISLV_CMD_POLL_HI		0x2Du
#define SPISLV_CMD_POLL_ALL		0x2Fu
#define SPISLV_CMD_EXT_REG_W8		0x41u
#define SPISLV_CMD_EXT_REG_R8		0x45u
#define SPISLV_CMD_RS_FIFO8_FSR		0x68u
#define SPISLV_CMD_RS_FIFO16_FSR	0x69u
#define SPISLV_CMD_RS_FIFO32_FSR	0x6Bu
#define SPISLV_CMD_EXT_END		0x6Cu
#define SPISLV_CMD_MBLK_W		0x80u
#define SPISLV_CMD_MBLK_R		0xA0u
#define SPISLV_CMD_RD_BLK_FIFO		0xC0u
#define SPISLV_CMD_RD_BLK_FIFO_FSR	0xE0u


/**
  * @brief SPI Slave registers (SPISLV)
  */
typedef struct spislv_regs {
	__IOM uint32_t CONFIG; /*!< (@ 0x0000) SPISLV Control */
	__IOM uint32_t SLV_STATUS; /*!< (@ 0x0004) SPISLV Slave Status */
	__IOM uint32_t EC_STATUS; /*!< (@ 0x0008) SPISLV EC Status */
	__IOM uint32_t SPI_INT_EN; /*!< (@ 0x000C) SPISLV SPI Interrupt Enable */
	__IOM uint32_t EC_INT_EN; /*!< (@ 0x0010) SPISLV EC Interrupt Enable */
	__IOM uint32_t MCONFIG; /*!< (@ 0x0014) SPISLV Memory Config */
	__IOM uint32_t MBA0; /*!< (@ 0x0018) SPISLV Memory Base Address 0 */
	__IOM uint32_t MBA0_WLIM; /*!< (@ 0x001C) SPISLV Memory Base Address 0 Write Limit */
	__IOM uint32_t MBA0_RLIM; /*!< (@ 0x0020) SPISLV Memory Base Address 0 Read Limit */
	__IOM uint32_t MBA1; /*!< (@ 0x0024) SPISLV Memory Base Address 1 */
	__IOM uint32_t MBA1_WLIM; /*!< (@ 0x0028) SPISLV Memory Base Address 0 Write Limit */
	__IOM uint32_t MBA1_RLIM; /*!< (@ 0x002C) SPISLV Memory Base Address 0 Read Limit */
	__IOM uint32_t RXF_HBAR; /*!< (@ 0x0030) SPISLV RX FIFO Host BAR */
	__IOM uint32_t RXF_BCNT; /*!< (@ 0x0034) SPISLV RX FIFO Byte Counter */
	__IOM uint32_t TXF_HBAR; /*!< (@ 0x0038) SPISLV RX FIFO Host BAR */
	__IOM uint32_t TXF_BCNT; /*!< (@ 0x003C) SPISLV TX FIFO Byte Counter */
	__IOM uint32_t SYS_CONFIG; /*!< (@ 0x0040) SPISLV System Config */
	__IOM uint32_t MBOX_S2EC; /*!< (@ 0x0044) SPISLV SPI Master to EC Mailbox */
	__IOM uint32_t MBOX_EC2S; /*!< (@ 0x0048) SPISLV EC to SPI Master Mailbox */
} SPISLV_Type;

#endif	/* #ifndef _SPI_SLAVE_H */
/* end spi_slave.h */
/**   @}
 */
