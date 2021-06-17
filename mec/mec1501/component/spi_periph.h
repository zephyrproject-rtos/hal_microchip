/**
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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

/** @file spi_periph.h
 *MEC1501 SPI Peripheral registers
 */
/** @defgroup MEC152x SPI peripheral device
 */

#ifndef _SPI_PERIPH_H
#define _SPI_PERIPH_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 SPI Peripheral 		=========== */
/* =========================================================================*/

#define MCHP_SPIP_BASE_ADDR	0x40007000u

/*
 * SPIP interrupts
 */
#define MCHP_SPIP_GIRQ			18u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_SPIP_GIRQ_POS		0u

#define MCHP_SPIP_GIRQ_VAL		(1u << MCHP_SPIP_GIRQ_POS)

/* SPIP GIRQ aggregated NVIC input */
#define MCHP_SPIP_NVIC_AGGR		10u

/* SPIP direct NVIC inputs */
#define MCHP_SPIP_NVIC_DIRECT		90u

/* SPIP Configuration register */
#define MCHP_SPIP_CFG_REG_OFS		0
#define MCHP_SPIP_CFG_REG_MASK		0x00ff0301u
#define MCHP_SPIP_CFG_SQ_SEL_POS	0
#define MCHP_SPIP_CFG_SINGLE		(0u << 0)
#define MCHP_SPIP_CFG_QUAD			(1u << 0)
#define MCHP_SPIP_CFG_TAR_POS		8
#define MCHP_SPIP_CFG_TAR_MASK0		0x03u
#define MCHP_SPIP_CFG_TAR_MASK		(0x03u << 8)
#define MCHP_SPIP_CFG_TAR_1			0
#define MCHP_SPIP_CFG_TAR_2			(1u << 8)
#define MCHP_SPIP_CFG_TAR_4			(2u << 8)
#define MCHP_SPIP_CFG_TAR_8			(3u << 8)
#define MCHP_SPIP_CFG_WTM_POS		16
#define MCHP_SPIP_CFG_WTM_MASK0		0xffu
#define MCHP_SPIP_CFG_WTM_MASK		0xff0000u

/* SPIP Status register */
#define MCHP_SPIP_STS_REG_OFS		4
#define MCHP_SPIP_STS_REG_MASK		0x1fffef7bu
#define MCHP_SPIP_SPI_STS_MWD		(1u << 0)
#define MCHP_SPIP_SPI_STS_MRD		(1u << 1)
#define MCHP_SPIP_SPI_STS_MWB		(1u << 3)
#define MCHP_SPIP_SPI_STS_MRB		(1u << 4)
#define MCHP_SPIP_SPI_STS_SRTB		(1u << 5)
#define MCHP_SPIP_SPI_STS_PHI_REQ	(1u << 6)
#define MCHP_SPIP_SPI_STS_RXFE		(1u << 8)
#define MCHP_SPIP_SPI_STS_RXFF		(1u << 9)
#define MCHP_SPIP_SPI_STS_TXFE		(1u << 10)
#define MCHP_SPIP_SPI_STS_TXFF		(1u << 11)
#define MCHP_SPIP_SPI_STS_SCCE		(1u << 13)
#define MCHP_SPIP_SPI_STS_OBF		(1u << 15)
#define MCHP_SPIP_SPI_STS_SPIMR		(1u << 16)
#define MCHP_SPIP_SPI_STS_RXF_RSTD	(1u << 17)
#define MCHP_SPIP_SPI_STS_TXF_RSTD	(1u << 18)
#define MCHP_SPIP_SPI_STS_LIM0		(1u << 19)
#define MCHP_SPIP_SPI_STS_LIM1		(1u << 20)
#define MCHP_SPIP_SPI_STS_ABERR		(1u << 21)
#define MCHP_SPIP_SPI_STS_UNDEF_CMD	(1u << 22)
#define MCHP_SPIP_SPI_STS_DVB		(1u << 23)
#define MCHP_SPIP_SPI_STS_RXF_SZ	(1u << 24)
#define MCHP_SPIP_SPI_STS_TXF_UNF	(1u << 25)
#define MCHP_SPIP_SPI_STS_TXF_OVF	(1u << 26)
#define MCHP_SPIP_SPI_STS_RXF_UNF	(1u << 27)
#define MCHP_SPIP_SPI_STS_RXF_OVF	(1u << 28)

/* SPIP EC Status register */
#define MCHP_SPIP_EC_STS_REG_OFS	8
#define MCHP_SPIP_EC_STS_REG_MASK	0x1fffef7bu
#define MCHP_SPIP_EC_STS_MWD		(1u << 0)
#define MCHP_SPIP_EC_STS_MRD		(1u << 1)
#define MCHP_SPIP_EC_STS_MWB		(1u << 3)
#define MCHP_SPIP_EC_STS_MRB		(1u << 4)
#define MCHP_SPIP_EC_STS_SRTB		(1u << 5)
#define MCHP_SPIP_EC_STS_PHI_REQ	(1u << 6)
#define MCHP_SPIP_EC_STS_RXFE		(1u << 8)
#define MCHP_SPIP_EC_STS_RXFF		(1u << 9)
#define MCHP_SPIP_EC_STS_TXFE		(1u << 10)
#define MCHP_SPIP_EC_STS_TXFF		(1u << 11)
#define MCHP_SPIP_EC_STS_SCCE		(1u << 13)
#define MCHP_SPIP_EC_STS_IBF		(1u << 14)
#define MCHP_SPIP_EC_STS_OBF		(1u << 15)
#define MCHP_SPIP_EC_STS_SPIMR		(1u << 16)
#define MCHP_SPIP_EC_STS_RXF_RSTD	(1u << 17)
#define MCHP_SPIP_EC_STS_TXF_RSTD	(1u << 18)
#define MCHP_SPIP_EC_STS_LIM0		(1u << 19)
#define MCHP_SPIP_EC_STS_LIM1		(1u << 20)
#define MCHP_SPIP_EC_STS_ABERR		(1u << 21)
#define MCHP_SPIP_EC_STS_UNDEF_CMD	(1u << 22)
#define MCHP_SPIP_EC_STS_DVB		(1u << 23)
#define MCHP_SPIP_EC_STS_RXF_SZ		(1u << 24)
#define MCHP_SPIP_EC_STS_TXF_UNF	(1u << 25)
#define MCHP_SPIP_EC_STS_TXF_OVF	(1u << 26)
#define MCHP_SPIP_EC_STS_RXF_UNF	(1u << 27)
#define MCHP_SPIP_EC_STS_RXF_OVF	(1u << 28)

/* SPIP SPI Interrupt Enable register */
#define MCHP_SPIP_SPI_IEN_REG_OFS	0x0c
#define MCHP_SPIP_SPI_IEN_REG_MASK	0x1fffaf7au
#define MCHP_SPIP_SPI_IEN_MWD		(1u << 0)
#define MCHP_SPIP_SPI_IEN_MRD		(1u << 1)
#define MCHP_SPIP_SPI_IEN_MWB		(1u << 3)
#define MCHP_SPIP_SPI_IEN_MRB		(1u << 4)
#define MCHP_SPIP_SPI_IEN_SRTB		(1u << 5)
#define MCHP_SPIP_SPI_IEN_PHI_REQ	(1u << 6)
#define MCHP_SPIP_SPI_IEN_RXFE		(1u << 8)
#define MCHP_SPIP_SPI_IEN_RXFF		(1u << 9)
#define MCHP_SPIP_SPI_IEN_TXFE		(1u << 10)
#define MCHP_SPIP_SPI_IEN_TXFF		(1u << 11)
#define MCHP_SPIP_SPI_IEN_SCCE		(1u << 13)
#define MCHP_SPIP_SPI_IEN_OBF		(1u << 15)
#define MCHP_SPIP_SPI_IEN_SPIMR		(1u << 16)
#define MCHP_SPIP_SPI_IEN_RXF_RSTD	(1u << 17)
#define MCHP_SPIP_SPI_IEN_TXF_RSTD	(1u << 18)
#define MCHP_SPIP_SPI_IEN_LIM0		(1u << 19)
#define MCHP_SPIP_SPI_IEN_LIM1		(1u << 20)
#define MCHP_SPIP_SPI_IEN_ABERR		(1u << 21)
#define MCHP_SPIP_SPI_IEN_UNDEF_CMD	(1u << 22)
#define MCHP_SPIP_SPI_IEN_DVB		(1u << 23)
#define MCHP_SPIP_SPI_IEN_RXF_SZ	(1u << 24)
#define MCHP_SPIP_SPI_IEN_TXF_UNF	(1u << 25)
#define MCHP_SPIP_SPI_IEN_TXF_OVF	(1u << 26)
#define MCHP_SPIP_SPI_IEN_RXF_UNF	(1u << 27)
#define MCHP_SPIP_SPI_IEN_RXF_OVF	(1u << 28)

/* SPIP EC Interrupt Enable register */
#define MCHP_SPIP_EC_IEN_REG_OFS	0x10
#define MCHP_SPIP_EC_IEN_REG_MASK	0x1fffef7bu
#define MCHP_SPIP_EC_IEN_MWD		(1u << 0)
#define MCHP_SPIP_EC_IEN_MRD		(1u << 1)
#define MCHP_SPIP_EC_IEN_MWB		(1u << 3)
#define MCHP_SPIP_EC_IEN_MRB		(1u << 4)
#define MCHP_SPIP_EC_IEN_SRTB		(1u << 5)
#define MCHP_SPIP_EC_IEN_PHI_REQ	(1u << 6)
#define MCHP_SPIP_EC_IEN_RXFE		(1u << 8)
#define MCHP_SPIP_EC_IEN_RXFF		(1u << 9)
#define MCHP_SPIP_EC_IEN_TXFE		(1u << 10)
#define MCHP_SPIP_EC_IEN_TXFF		(1u << 11)
#define MCHP_SPIP_EC_IEN_SCCE		(1u << 13)
#define MCHP_SPIP_EC_IEN_IBF		(1u << 14)
#define MCHP_SPIP_EC_IEN_OBF		(1u << 15)
#define MCHP_SPIP_EC_IEN_SPIMR		(1u << 16)
#define MCHP_SPIP_EC_IEN_RXF_RSTD	(1u << 17)
#define MCHP_SPIP_EC_IEN_TXF_RSTD	(1u << 18)
#define MCHP_SPIP_EC_IEN_LIM0		(1u << 19)
#define MCHP_SPIP_EC_IEN_LIM1		(1u << 20)
#define MCHP_SPIP_EC_IEN_ABERR		(1u << 21)
#define MCHP_SPIP_EC_IEN_UNDEF_CMD	(1u << 22)
#define MCHP_SPIP_EC_IEN_DVB		(1u << 23)
#define MCHP_SPIP_EC_IEN_RXF_SZ		(1u << 24)
#define MCHP_SPIP_EC_IEN_TXF_UNF	(1u << 25)
#define MCHP_SPIP_EC_IEN_TXF_OVF	(1u << 26)
#define MCHP_SPIP_EC_IEN_RXF_UNF	(1u << 27)
#define MCHP_SPIP_EC_IEN_RXF_OVF	(1u << 28)

/* SPIP Memory Config register */
#define MCHP_SPIP_MCFG_REG_OFS		0x14
#define MCHP_SPIP_MCFG_REG_MASK		0x03u
#define MCHP_SPIP_MCFG_BAR0_EN_POS	0
#define MCHP_SPIP_MCFG_BAR0_EN		(1u << 0)
#define MCHP_SPIP_MCFG_BAR1_EN_POS	1
#define MCHP_SPIP_MCFG_BAR1_EN		(1u << 1)

/* SPIP Memory Base Address 0 register */
#define MCHP_SPIP_MBA0_REG_OFS		0x18
#define MCHP_SPIP_MBA0_REG_MASK		0xfffffffcu

/* SPIP Memory Write Limit 0 register */
#define MCHP_SPIP_MWLIM0_REG_OFS	0x1c
#define MCHP_SPIP_MWLIM0_REG_MASK	0xfffffffcu

/* SPIP Memory Read Limit 0 register */
#define MCHP_SPIP_MRLIM0_REG_OFS	0x20
#define MCHP_SPIP_MRLIM0_REG_MASK	0xfffffffcu

/* SPIP Memory Base Address 1 register */
#define MCHP_SPIP_MBA1_REG_OFS		0x24
#define MCHP_SPIP_MBA1_REG_MASK		0xfffffffcu

/* SPIP Memory Write Limit 1 register */
#define MCHP_SPIP_MWLIM1_REG_OFS	0x28
#define MCHP_SPIP_MWLIM1_REG_MASK	0xfffffffcu

/* SPIP Memory Read Limit 1 register */
#define MCHP_SPIP_MRLIM1_REG_OFS	0x2c
#define MCHP_SPIP_MRLIM1_REG_MASK	0xfffffffcu

/* SPIP RX FIFO Host BAR register */
#define MCHP_SPIP_RXFHB_REG_OFS	0x30
#define MCHP_SPIP_RXFHB_REG_MASK	0xffffu

/* SPIP RX FIFO Host BAR register */
#define MCHP_SPIP_RXFBC_REG_OFS	0x34
#define MCHP_SPIP_RXFBC_REG_MASK	0x7fffu

/* SPIP TX FIFO Host BAR register */
#define MCHP_SPIP_TXFHB_REG_OFS	0x38
#define MCHP_SPIP_TXFHB_REG_MASK	0xffffu

/* SPIP TX FIFO Host BAR register */
#define MCHP_SPIP_TXFBC_REG_OFS	0x3c
#define MCHP_SPIP_TXFBC_REG_MASK	0x7fffu

/* SPIP System Configuration register */
#define MCHP_SPIP_SYSCFG_REG_OFS		0x40
#define MCHP_SPIP_SYSCFG_REG_MASK		0x000f04ffu
#define MCHP_SPIP_SYSCFG_SRST			(1u << 0)
#define MCHP_SPIP_SYSCFG_LOCK_WM		(1u << 1)
#define MCHP_SPIP_SYSCFG_LOCK_TAR		(1u << 2)
#define MCHP_SPIP_SYSCFG_LOCK_WC		(1u << 3)
#define MCHP_SPIP_SYSCFG_LOCK_SPI_STS	(1u << 4)
#define MCHP_SPIP_SYSCFG_LOCK_SPI_IEN	(1u << 5)
#define MCHP_SPIP_SYSCFG_LOCK_MBA0		(1u << 6)
#define MCHP_SPIP_SYSCFG_LOCK_MBA1		(1u << 7)
#define MCHP_SPIP_SYSCFG_LOCK_TST		(1u << 10)
#define MCHP_SPIP_SYSCFG_LOCK_ALL		0x04feu
#define MCHP_SPIP_SYSCFG_ACT			(1u << 16)
#define MCHP_SPIP_SYSCFG_MASK_EC		(1u << 17)
#define MCHP_SPIP_SYSCFG_SIMPLE_MODE	(1u << 18)
#define MCHP_SPIP_SYSCFG_ECDA			(1u << 19)

/* SPIP SPI Master to EC Mailbox register */
#define MCHP_SPIP_MB_S2EC_REG_OFS		0x44
#define MCHP_SPIP_MB_S2EC_REG_MASK		0xffffffffu
#define MCHP_SPIP_MB_S2EC_CLR			0xffffffffu

/* SPIP EC to SPI Master Mailbox register */
#define MCHP_SPIP_MB_EC2S_REG_OFS		0x48
#define MCHP_SPIP_MB_EC2S_REG_MASK		0xffffffffu
#define MCHP_SPIP_MB_EC2S_CLR			0xffffffffu

/* SPI commands supported by SPIP */
#define SPIP_CMD_IN_BAND_RST		0xffu
#define SPIP_CMD_UNDEF_W32			0x01u
#define SPIP_CMD_UNDEF_W8			0x02u
#define SPIP_CMD_UNDEF_R32			0x05u
#define SPIP_CMD_UNDEF_R8			0x06u
#define SPIP_CMD_SREG_W8			0x09u
#define SPIP_CMD_SREG_W16			0x0au
#define SPIP_CMD_SREG_W32			0x0bu
#define SPIP_CMD_SREG_R8			0x0du
#define SPIP_CMD_SREG_R16			0x0eu
#define SPIP_CMD_SREG_R32			0x0fu
#define SPIP_CMD_RST_RX_FIFO		0x12u
#define SPIP_CMD_RST_TX_FIFO		0x14u
#define SPIP_CMD_RST_RXTX_FIFO		0x16u
#define SPIP_CMD_MEM_W8				0x21u
#define SPIP_CMD_MEM_W16			0x22u
#define SPIP_CMD_MEM_W32			0x23u
#define SPIP_CMD_MEM_R8				0x25u
#define SPIP_CMD_MEM_R16			0x26u
#define SPIP_CMD_MEM_R32			0x27u
#define SPIP_CMD_RS_FIFO8			0x28u
#define SPIP_CMD_RS_FIFO16			0x29u
#define SPIP_CMD_RS_FIFO32			0x2bu
#define SPIP_CMD_POLL_LO			0x2cu
#define SPIP_CMD_POLL_HI			0x2du
#define SPIP_CMD_POLL_ALL			0x2fu
#define SPIP_CMD_EXT_REG_W8			0x41u
#define SPIP_CMD_EXT_REG_R8			0x45u
#define SPIP_CMD_RS_FIFO8_FSR		0x68u
#define SPIP_CMD_RS_FIFO16_FSR		0x69u
#define SPIP_CMD_RS_FIFO32_FSR		0x6bu
#define SPIP_CMD_EXT_END			0x6cu
#define SPIP_CMD_MBLK_W				0x80u
#define SPIP_CMD_MBLK_R				0xa0u
#define SPIP_CMD_RD_BLK_FIFO		0xc0u
#define SPIP_CMD_RD_BLK_FIFO_FSR	0xe0u

/** @brief SPI Slave registers (SPIP) */
typedef struct spip_regs {
	__IOM uint32_t CONFIG;		/*!< (@ 0x0000) SPIP Control */
	__IOM uint32_t SPI_STATUS;	/*!< (@ 0x0004) SPIP Host Status */
	__IOM uint32_t EC_STATUS;	/*!< (@ 0x0008) SPIP EC Status */
	__IOM uint32_t SPI_INT_EN;	/*!< (@ 0x000c) SPIP SPI Interrupt Enable */
	__IOM uint32_t EC_INT_EN;	/*!< (@ 0x0010) SPIP EC Interrupt Enable */
	__IOM uint32_t MCONFIG;		/*!< (@ 0x0014) SPIP Memory Config */
	__IOM uint32_t MBA0;		/*!< (@ 0x0018) SPIP Memory Base Address 0 */
	__IOM uint32_t MBA0_WLIM;	/*!< (@ 0x001c) SPIP Memory Base Address 0 Write Limit */
	__IOM uint32_t MBA0_RLIM;	/*!< (@ 0x0020) SPIP Memory Base Address 0 Read Limit */
	__IOM uint32_t MBA1;		/*!< (@ 0x0024) SPIP Memory Base Address 1 */
	__IOM uint32_t MBA1_WLIM;	/*!< (@ 0x0028) SPIP Memory Base Address 0 Write Limit */
	__IOM uint32_t MBA1_RLIM;	/*!< (@ 0x002c) SPIP Memory Base Address 0 Read Limit */
	__IOM uint32_t RXF_HBAR;	/*!< (@ 0x0030) SPIP RX FIFO Host BAR */
	__IOM uint32_t RXF_BCNT;	/*!< (@ 0x0034) SPIP RX FIFO Byte Counter */
	__IOM uint32_t TXF_HBAR;	/*!< (@ 0x0038) SPIP RX FIFO Host BAR */
	__IOM uint32_t TXF_BCNT;	/*!< (@ 0x003c) SPIP TX FIFO Byte Counter */
	__IOM uint32_t SYS_CONFIG;	/*!< (@ 0x0040) SPIP System Config */
	__IOM uint32_t MBOX_S2EC;	/*!< (@ 0x0044) SPIP SPI Host to EC Mailbox */
	__IOM uint32_t MBOX_EC2S;	/*!< (@ 0x0048) SPIP EC to SPI Host Mailbox */
} SPIP_Type;

#endif	/* #ifndef _SPI_PERIPH_H */
/* end spi_periph.h */
/**   @}
 */
