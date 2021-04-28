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

/** @file spi_slave.h
 * MEC172x SPI Peripheral controller registers
 */
/** @defgroup MEC172x Peripherals SPI Slave
 */

#ifndef _COMPONENT_SPI_PERIPH_H
#define _COMPONENT_SPI_PERIPH_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_SPIP_BASE_ADDR	0x40007000ul

/* SPIP interrupts */
#define MCHP_SPIP_GIRQ		18u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_SPIP_GIRQ_POS	0u

#define MCHP_SPIP_GIRQ_VAL	BIT(MCHP_SPIP_GIRQ_POS)

/* SPIP GIRQ aggregated NVIC input */
#define MCHP_SPIP_NVIC_AGGR	10u

/* SPIP direct NVIC inputs */
#define MCHP_SPIP_NVIC_DIRECT	90u

/* SPIP Configuration register */
#define MCHP_SPIP_CFG_REG_OFS		0u
#define MCHP_SPIP_CFG_REG_MASK		0x00ff0301ul
#define MCHP_SPIP_CFG_SQ_SEL_POS	0
#define MCHP_SPIP_CFG_SINGLE		0ul
#define MCHP_SPIP_CFG_QUAD		BIT(0)
#define MCHP_SPIP_CFG_TAR_POS		8
#define MCHP_SPIP_CFG_TAR_MASK0		0x03u
#define MCHP_SPIP_CFG_TAR_MASK		0x0300u
#define MCHP_SPIP_CFG_TAR_1		0x00u
#define MCHP_SPIP_CFG_TAR_2		0x0100ul
#define MCHP_SPIP_CFG_TAR_4		0x0200ul
#define MCHP_SPIP_CFG_TAR_8		0x0300ul
#define MCHP_SPIP_CFG_WTM_POS		16
#define MCHP_SPIP_CFG_WTM_MASK0		0xffu
#define MCHP_SPIP_CFG_WTM_MASK		0xff0000ul

/* SPIP Status register */
#define MCHP_SPIP_STS_REG_OFS		4u
#define MCHP_SPIP_STS_REG_MASK		0x1FFFEF7Bul
#define MCHP_SPIP_SPI_STS_MWD		BIT(0)
#define MCHP_SPIP_SPI_STS_MRD		BIT(1)
#define MCHP_SPIP_SPI_STS_MWB		BIT(3)
#define MCHP_SPIP_SPI_STS_MRB		BIT(4)
#define MCHP_SPIP_SPI_STS_SRTB		BIT(5)
#define MCHP_SPIP_SPI_STS_PHI_REQ	BIT(6)
#define MCHP_SPIP_SPI_STS_RXFE		BIT(8)
#define MCHP_SPIP_SPI_STS_RXFF		BIT(9)
#define MCHP_SPIP_SPI_STS_TXFE		BIT(10)
#define MCHP_SPIP_SPI_STS_TXFF		BIT(11)
#define MCHP_SPIP_SPI_STS_SCCE		BIT(13)
#define MCHP_SPIP_SPI_STS_OBF		BIT(15)
#define MCHP_SPIP_SPI_STS_SPIMR		BIT(16)
#define MCHP_SPIP_SPI_STS_RXF_RSTD	BIT(17)
#define MCHP_SPIP_SPI_STS_TXF_RSTD	BIT(18)
#define MCHP_SPIP_SPI_STS_LIM0		BIT(19)
#define MCHP_SPIP_SPI_STS_LIM1		BIT(20)
#define MCHP_SPIP_SPI_STS_ABERR		BIT(21)
#define MCHP_SPIP_SPI_STS_UNDEF_CMD	BIT(22)
#define MCHP_SPIP_SPI_STS_DVB		BIT(23)
#define MCHP_SPIP_SPI_STS_RXF_SZ	BIT(24)
#define MCHP_SPIP_SPI_STS_TXF_UNF	BIT(25)
#define MCHP_SPIP_SPI_STS_TXF_OVF	BIT(26)
#define MCHP_SPIP_SPI_STS_RXF_UNF	BIT(27)
#define MCHP_SPIP_SPI_STS_RXF_OVF	BIT(28)

/* SPIP EC Status register */
#define MCHP_SPIP_EC_STS_REG_OFS	8u
#define MCHP_SPIP_EC_STS_REG_MASK	0x1FFFEF7Bul
#define MCHP_SPIP_EC_STS_MWD		BIT(0)
#define MCHP_SPIP_EC_STS_MRD		BIT(1)
#define MCHP_SPIP_EC_STS_MWB		BIT(3)
#define MCHP_SPIP_EC_STS_MRB		BIT(4)
#define MCHP_SPIP_EC_STS_SRTB		BIT(5)
#define MCHP_SPIP_EC_STS_PHI_REQ	BIT(6)
#define MCHP_SPIP_EC_STS_RXFE		BIT(8)
#define MCHP_SPIP_EC_STS_RXFF		BIT(9)
#define MCHP_SPIP_EC_STS_TXFE		BIT(10)
#define MCHP_SPIP_EC_STS_TXFF		BIT(11)
#define MCHP_SPIP_EC_STS_SCCE		BIT(13)
#define MCHP_SPIP_EC_STS_IBF		BIT(14)
#define MCHP_SPIP_EC_STS_OBF		BIT(15)
#define MCHP_SPIP_EC_STS_SPIMR		BIT(16)
#define MCHP_SPIP_EC_STS_RXF_RSTD	BIT(17)
#define MCHP_SPIP_EC_STS_TXF_RSTD	BIT(18)
#define MCHP_SPIP_EC_STS_LIM0		BIT(19)
#define MCHP_SPIP_EC_STS_LIM1		BIT(20)
#define MCHP_SPIP_EC_STS_ABERR		BIT(21)
#define MCHP_SPIP_EC_STS_UNDEF_CMD	BIT(22)
#define MCHP_SPIP_EC_STS_DVB		BIT(23)
#define MCHP_SPIP_EC_STS_RXF_SZ		BIT(24)
#define MCHP_SPIP_EC_STS_TXF_UNF	BIT(25)
#define MCHP_SPIP_EC_STS_TXF_OVF	BIT(26)
#define MCHP_SPIP_EC_STS_RXF_UNF	BIT(27)
#define MCHP_SPIP_EC_STS_RXF_OVF	BIT(28)

/* SPIP SPI Interrupt Enable register */
#define MCHP_SPIP_SPI_IEN_REG_OFS	0x0Cu
#define MCHP_SPIP_SPI_IEN_REG_MASK	0x1FFFAF7Bul
#define MCHP_SPIP_SPI_IEN_MWD		BIT(0)
#define MCHP_SPIP_SPI_IEN_MRD		BIT(1)
#define MCHP_SPIP_SPI_IEN_MWB		BIT(3)
#define MCHP_SPIP_SPI_IEN_MRB		BIT(4)
#define MCHP_SPIP_SPI_IEN_SRTB		BIT(5)
#define MCHP_SPIP_SPI_IEN_PHI_REQ	BIT(6)
#define MCHP_SPIP_SPI_IEN_RXFE		BIT(8)
#define MCHP_SPIP_SPI_IEN_RXFF		BIT(9)
#define MCHP_SPIP_SPI_IEN_TXFE		BIT(10)
#define MCHP_SPIP_SPI_IEN_TXFF		BIT(11)
#define MCHP_SPIP_SPI_IEN_SCCE		BIT(13)
#define MCHP_SPIP_SPI_IEN_OBF		BIT(15)
#define MCHP_SPIP_SPI_IEN_SPIMR		BIT(16)
#define MCHP_SPIP_SPI_IEN_RXF_RSTD	BIT(17)
#define MCHP_SPIP_SPI_IEN_TXF_RSTD	BIT(18)
#define MCHP_SPIP_SPI_IEN_LIM0		BIT(19)
#define MCHP_SPIP_SPI_IEN_LIM1		BIT(20)
#define MCHP_SPIP_SPI_IEN_ABERR		BIT(21)
#define MCHP_SPIP_SPI_IEN_UNDEF_CMD	BIT(22)
#define MCHP_SPIP_SPI_IEN_DVB		BIT(23)
#define MCHP_SPIP_SPI_IEN_RXF_SZ	BIT(24)
#define MCHP_SPIP_SPI_IEN_TXF_UNF	BIT(25)
#define MCHP_SPIP_SPI_IEN_TXF_OVF	BIT(26)
#define MCHP_SPIP_SPI_IEN_RXF_UNF	BIT(27)
#define MCHP_SPIP_SPI_IEN_RXF_OVF	BIT(28)

/* SPIP EC Interrupt Enable register */
#define MCHP_SPIP_EC_IEN_REG_OFS	0x10u
#define MCHP_SPIP_EC_IEN_REG_MASK	0x1FFFEF7Bul
#define MCHP_SPIP_EC_IEN_MWD		BIT(0)
#define MCHP_SPIP_EC_IEN_MRD		BIT(1)
#define MCHP_SPIP_EC_IEN_MWB		BIT(3)
#define MCHP_SPIP_EC_IEN_MRB		BIT(4)
#define MCHP_SPIP_EC_IEN_SRTB		BIT(5)
#define MCHP_SPIP_EC_IEN_PHI_REQ	BIT(6)
#define MCHP_SPIP_EC_IEN_RXFE		BIT(8)
#define MCHP_SPIP_EC_IEN_RXFF		BIT(9)
#define MCHP_SPIP_EC_IEN_TXFE		BIT(10)
#define MCHP_SPIP_EC_IEN_TXFF		BIT(11)
#define MCHP_SPIP_EC_IEN_SCCE		BIT(13)
#define MCHP_SPIP_EC_IEN_IBF		BIT(14)
#define MCHP_SPIP_EC_IEN_OBF		BIT(15)
#define MCHP_SPIP_EC_IEN_SPIMR		BIT(16)
#define MCHP_SPIP_EC_IEN_RXF_RSTD	BIT(17)
#define MCHP_SPIP_EC_IEN_TXF_RSTD	BIT(18)
#define MCHP_SPIP_EC_IEN_LIM0		BIT(19)
#define MCHP_SPIP_EC_IEN_LIM1		BIT(20)
#define MCHP_SPIP_EC_IEN_ABERR		BIT(21)
#define MCHP_SPIP_EC_IEN_UNDEF_CMD	BIT(22)
#define MCHP_SPIP_EC_IEN_DVB		BIT(23)
#define MCHP_SPIP_EC_IEN_RXF_SZ		BIT(24)
#define MCHP_SPIP_EC_IEN_TXF_UNF	BIT(25)
#define MCHP_SPIP_EC_IEN_TXF_OVF	BIT(26)
#define MCHP_SPIP_EC_IEN_RXF_UNF	BIT(27)
#define MCHP_SPIP_EC_IEN_RXF_OVF	BIT(28)

/* SPIP Memory Config register */
#define MCHP_SPIP_MCFG_REG_OFS		0x14u
#define MCHP_SPIP_MCFG_REG_MASK		0x03ul
#define MCHP_SPIP_MCFG_BAR0_EN_POS	0
#define MCHP_SPIP_MCFG_BAR0_EN		BIT(0)
#define MCHP_SPIP_MCFG_BAR1_EN_POS	1
#define MCHP_SPIP_MCFG_BAR1_EN		BIT(1)

/* SPIP Memory Base Address 0 register */
#define MCHP_SPIP_MBA0_REG_OFS		0x18u
#define MCHP_SPIP_MBA0_REG_MASK		0xFFFFFFFCul

/* SPIP Memory Write Limit 0 register */
#define MCHP_SPIP_MWLIM0_REG_OFS	0x1Cu
#define MCHP_SPIP_MWLIM0_REG_MASK	0xFFFFFFFCul

/* SPIP Memory Read Limit 0 register */
#define MCHP_SPIP_MRLIM0_REG_OFS	0x20u
#define MCHP_SPIP_MRLIM0_REG_MASK	0xFFFFFFFCul

/* SPIP Memory Base Address 1 register */
#define MCHP_SPIP_MBA1_REG_OFS		0x24u
#define MCHP_SPIP_MBA1_REG_MASK		0xFFFFFFFCul

/* SPIP Memory Write Limit 1 register */
#define MCHP_SPIP_MWLIM1_REG_OFS	0x28u
#define MCHP_SPIP_MWLIM1_REG_MASK	0xFFFFFFFCul

/* SPIP Memory Read Limit 1 register */
#define MCHP_SPIP_MRLIM1_REG_OFS	0x2Cu
#define MCHP_SPIP_MRLIM1_REG_MASK	0xFFFFFFFCul

/* SPIP RX FIFO Host BAR register */
#define MCHP_SPIP_RXFHB_REG_OFS		0x30u
#define MCHP_SPIP_RXFHB_REG_MASK	0xFFFFul

/* SPIP RX FIFO Host BAR register */
#define MCHP_SPIP_RXFBC_REG_OFS		0x34u
#define MCHP_SPIP_RXFBC_REG_MASK	0x7FFFul

/* SPIP TX FIFO Host BAR register */
#define MCHP_SPIP_TXFHB_REG_OFS		0x38u
#define MCHP_SPIP_TXFHB_REG_MASK	0xFFFFul

/* SPIP TX FIFO Host BAR register */
#define MCHP_SPIP_TXFBC_REG_OFS		0x3Cu
#define MCHP_SPIP_TXFBC_REG_MASK	0x7FFFul

/* SPIP System Configuration register */
#define MCHP_SPIP_SYSCFG_REG_OFS	0x40u
#define MCHP_SPIP_SYSCFG_REG_MASK	0x000F04FFul
#define MCHP_SPIP_SYSCFG_SRST		BIT(0)
#define MCHP_SPIP_SYSCFG_LOCK_WM	BIT(1)
#define MCHP_SPIP_SYSCFG_LOCK_TAR	BIT(2)
#define MCHP_SPIP_SYSCFG_LOCK_WC	BIT(3)
#define MCHP_SPIP_SYSCFG_LOCK_SPI_STS	BIT(4)
#define MCHP_SPIP_SYSCFG_LOCK_SPI_IEN	BIT(5)
#define MCHP_SPIP_SYSCFG_LOCK_MBA0	BIT(6)
#define MCHP_SPIP_SYSCFG_LOCK_MBA1	BIT(7)
#define MCHP_SPIP_SYSCFG_LOCK_TST	BIT(10)
#define MCHP_SPIP_SYSCFG_LOCK_ALL	0x04FEul
#define MCHP_SPIP_SYSCFG_ACT		BIT(16)
#define MCHP_SPIP_SYSCFG_MASK_EC	BIT(17)
#define MCHP_SPIP_SYSCFG_SIMPLE_MODE	BIT(18)
#define MCHP_SPIP_SYSCFG_ECDA		BIT(19)

/* SPIP SPI Master to EC Mailbox register */
#define MCHP_SPIP_MB_S2EC_REG_OFS	0x44u
#define MCHP_SPIP_MB_S2EC_REG_MASK	0xFFFFFFFFul
#define MCHP_SPIP_MB_S2EC_CLR		0xFFFFFFFFul

/* SPIP EC to SPI Master Mailbox register */
#define MCHP_SPIP_MB_EC2S_REG_OFS	0x48u
#define MCHP_SPIP_MB_EC2S_REG_MASK	0xFFFFFFFFul
#define MCHP_SPIP_MB_EC2S_CLR		0xFFFFFFFFul

/* SPI commands supported by SPIP */
#define SPIP_CMD_IN_BAND_RST		0xFFu
#define SPIP_CMD_UNDEF_W32		0x01u
#define SPIP_CMD_UNDEF_W8		0x02u
#define SPIP_CMD_UNDEF_R32		0x05u
#define SPIP_CMD_UNDEF_R8		0x06u
#define SPIP_CMD_SREG_W8		0x09u
#define SPIP_CMD_SREG_W16		0x0Au
#define SPIP_CMD_SREG_W32		0x0Bu
#define SPIP_CMD_SREG_R8		0x0Du
#define SPIP_CMD_SREG_R16		0x0Eu
#define SPIP_CMD_SREG_R32		0x0Fu
#define SPIP_CMD_RST_RX_FIFO		0x12u
#define SPIP_CMD_RST_TX_FIFO		0x14u
#define SPIP_CMD_RST_RXTX_FIFO		0x16u
#define SPIP_CMD_MEM_W8			0x21u
#define SPIP_CMD_MEM_W16		0x22u
#define SPIP_CMD_MEM_W32		0x23u
#define SPIP_CMD_MEM_R8			0x25u
#define SPIP_CMD_MEM_R16		0x26u
#define SPIP_CMD_MEM_R32		0x27u
#define SPIP_CMD_RS_FIFO8		0x28u
#define SPIP_CMD_RS_FIFO16		0x29u
#define SPIP_CMD_RS_FIFO32		0x2Bu
#define SPIP_CMD_POLL_LO		0x2Cu
#define SPIP_CMD_POLL_HI		0x2Du
#define SPIP_CMD_POLL_ALL		0x2Fu
#define SPIP_CMD_EXT_REG_W8		0x41u
#define SPIP_CMD_EXT_REG_R8		0x45u
#define SPIP_CMD_RS_FIFO8_FSR		0x68u
#define SPIP_CMD_RS_FIFO16_FSR		0x69u
#define SPIP_CMD_RS_FIFO32_FSR		0x6Bu
#define SPIP_CMD_EXT_END		0x6Cu
#define SPIP_CMD_MBLK_W			0x80u
#define SPIP_CMD_MBLK_R			0xA0u
#define SPIP_CMD_RD_BLK_FIFO		0xC0u
#define SPIP_CMD_RD_BLK_FIFO_FSR	0xE0u

#endif	/* #ifndef _COMPONENT_SPI_PERIPH_H */
/* end spi_periph.h */
/**   @}
 */
