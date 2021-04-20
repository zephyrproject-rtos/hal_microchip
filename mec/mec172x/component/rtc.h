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

/** @file rtc.h
 * MEC172x Real Time Clock definitions
 */
/** @defgroup MEC172x Peripherals RTC
 */

#ifndef _COMPONENT_RTC_H
#define _COMPONENT_RTC_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

/* interrupt routing */
#define MCHP_RTC_GIRQ			21u
#define MCHP_RTC_GIRQ_IDX		13u
#define MCHP_RTC_NVIC_AGGR		13u
#define MCHP_RTC_NVIC			119u
#define MCHP_RTC_ALARM_NVIC		120u
#define MCHP_RTC_GIRQ_POS		8u
#define MCHP_RTC_ALARM_GIRQ_POS		9u
#define MCHP_RTC_GIRQ_VAL		BIT(MCHP_RTC_GIRQ_POS)
#define MCHP_RTC_ALARM_GIRQ_VAL		BIT(MCHP_RTC_ALARM_GIRQ_POS)

/* Hours register */
#define MCHP_RTC_HOURS_REG_OFS		0x04u
#define MCHP_RTC_HOURS_MASK		0x7Fu
#define MCHP_RTC_HOURS_AM_PM_MASK	0x80u
#define MCHP_RTC_HOURS_PM		0x80u

/* RegA */
#define MCHP_RTC_REGA_REG_OFS			0x0Aul
#define MCHP_RTC_REGA_MASK			0xFFu
#define MCHP_RTC_REGA_RATE_SEL_POS		0
#define MCHP_RTC_REGA_RATE_SEL_MASK0		0x0Fu
#define MCHP_RTC_REGA_RATE_SEL_MASK		0x0Fu
#define MCHP_RTC_REGA_RATE_NONE			0x00u
#define MCHP_RTC_REGA_RATE_3906250_NS		0x01u
#define MCHP_RTC_REGA_RATE_7812500_NS		0x02u
#define MCHP_RTC_REGA_RATE_122070_NS		0x03u
#define MCHP_RTC_REGA_RATE_244141_NS		0x04u
#define MCHP_RTC_REGA_RATE_488281_NS		0x05u
#define MCHP_RTC_REGA_RATE_976563_NS		0x06u
#define MCHP_RTC_REGA_RATE_1953125_NS		0x07u
#define MCHP_RTC_REGA_RATE_3906250_NS_ALT	0x08u
#define MCHP_RTC_REGA_RATE_7812500_NS_ALT	0x09u
#define MCHP_RTC_REGA_RATE_15625_US		0x0Au
#define MCHP_RTC_REGA_RATE_31250_US		0x0Bu
#define MCHP_RTC_REGA_RATE_62500_US		0x0Cu
#define MCHP_RTC_REGA_RATE_125000_US		0x0Du
#define MCHP_RTC_REGA_RATE_250000_US		0x0Du
#define MCHP_RTC_REGA_RATE_500000_US		0x0Du
#define MCHP_RTC_REGA_DIVC_SEL_POS		4
#define MCHP_RTC_REGA_DIVC_SEL_MASK0		0x07u
#define MCHP_RTC_REGA_DIVC_SEL_MASK		0x70u
#define MCHP_RTC_REGA_DIVC_SEL_NORM		0x20u
#define MCHP_RTC_REGA_DIVC_SEL_HALT		0x30u
/* bit[7] is read-only status */
#define MCHP_RTC_REGA_UPDATE_IN_PROGESS_POS	7
#define MCHP_RTC_REGA_UPDATE_IN_PROGESS		0x80

/* RegB */
#define MCHP_RTC_REGB_REG_OFS		0x0Bul
#define MCHP_RTC_REGB_MASK		0xF7u
#define MCHP_RTC_REGB_DS_EN		0x01u
#define MCHP_RTC_REGB_FMT_12H		0x00u
#define MCHP_RTC_REGB_FMT_24H		0x02u
#define MCHP_RTC_REGB_DATA_BCD		0x00u
#define MCHP_RTC_REGB_DATA_BIN		0x04u
#define MCHP_RTC_REGB_UPDATE_DONE_IEN	0x10u
#define MCHP_RTC_REGB_ALARM_IEN		0x20u
#define MCHP_RTC_REGB_PERIODIC_IEN	0x40u
#define MCHP_RTC_REGB_UPDATE_INHIBIT	0x80u

/* RegC contains read-to-clear status */
#define MCHP_RTC_REGC_REG_OFS		0x0Cul
#define MCHP_RTC_REGC_MASK		0xF0u
#define MCHP_RTC_REGC_UPDATE_DONE_STS	0x10u
#define MCHP_RTC_REGC_ALARM_STS		0x20u
#define MCHP_RTC_REGC_PERIODIC_STS	0x40u
#define MCHP_RTC_REGC_INT_REQ_STS	0x80u

/* RegD */
#define MCHP_RTC_REGD_REG_OFS		0x0Dul
#define MCHP_RTC_REGD_MASK		0x3Fu
#define MCHP_RTC_REGD_DATE_ALARM_MASK	0x3Fu

/* Control */
#define MCHP_RTC_CTRL_REG_OFS		0x10ul
#define MCHP_RTC_CTRL_MASK		0x0Fu
#define MCHP_RTC_CTRL_BLK_EN		0x01u
#define MCHP_RTC_CTRL_SRST		0x02u
#define MCHP_RTC_CTRL_RSVD2		0x04u
#define MCHP_RTC_CTRL_ALARM_EN		0x08u

/* Daylight savings forward (DLSF) and backward (DLSB) registers */
#define MCHP_RTC_DLSF_REG_OFS		0x18ul
#define MCHP_RTC_DLSB_REG_OFS		0x1Cul
#define MCHP_RTC_DLS_MASK		0xFF0707FFul
#define MCHP_RTC_DLS_MON_POS		0
#define MCHP_RTC_DLS_MON_MASK		0xFFul
#define MCHP_RTC_DLS_DOFW_POS		8
#define MCHP_RTC_DLS_DOFW_MASK		(0x700ul << 8)
#define MCHP_RTC_DLS_WEEK_POS		16
#define MCHP_RTC_DLS_WEEK_MASK		0x70000ul
#define MCHP_RTC_DLS_WEEK_1		SHLU32(1u, 16)
#define MCHP_RTC_DLS_WEEK_2		SHLU32(2u, 16)
#define MCHP_RTC_DLS_WEEK_3		SHLU32(3u, 16)
#define MCHP_RTC_DLS_WEEK_4		SHLU32(4u, 16)
#define MCHP_RTC_DLS_WEEK_LAST		SHLU32(5u, 16)
#define MCHP_RTC_DLS_HOUR_POS		24
#define MCHP_RTC_DLS_HOUR_MASK		SHLU32(0x3Fu, 24)
#define MCHP_RTC_DLS_AM_PM_POS		31
#define MCHP_RTC_DLS_PM			BIT(31)

#endif /* #ifndef _RTC_H */
/* end rtc.h */
/**   @}
 */
