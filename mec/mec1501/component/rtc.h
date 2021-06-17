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

/** @file rtc.h
 *MEC1501 Real Time Clock definitions
 */
/** @defgroup MEC1501 Peripherals RTC
 */

#ifndef _RTC_H
#define _RTC_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 RTC 			=================== */
/* =========================================================================*/

/* Hours register */
#define MCHP_RTC_HOURS_REG_OFS		0x04u
#define MCHP_RTC_HOURS_MASK		0x7fu
#define MCHP_RTC_HOURS_AM_PM_MASK	0x80u
#define MCHP_RTC_HOURS_PM		0x80u

/* RegA */
#define MCHP_RTC_REGA_REG_OFS			0x0au
#define MCHP_RTC_REGA_MASK			0xffu
#define MCHP_RTC_REGA_RATE_SEL_POS		0
#define MCHP_RTC_REGA_RATE_SEL_MASK0		0x0fu
#define MCHP_RTC_REGA_RATE_SEL_MASK		0x0fu
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
#define MCHP_RTC_REGA_RATE_15625_US		0x0au
#define MCHP_RTC_REGA_RATE_31250_US		0x0bu
#define MCHP_RTC_REGA_RATE_62500_US		0x0cu
#define MCHP_RTC_REGA_RATE_125000_US		0x0du
#define MCHP_RTC_REGA_RATE_250000_US		0x0du
#define MCHP_RTC_REGA_RATE_500000_US		0x0du
#define MCHP_RTC_REGA_DIVC_SEL_POS		4
#define MCHP_RTC_REGA_DIVC_SEL_MASK0		0x07u
#define MCHP_RTC_REGA_DIVC_SEL_MASK		0x70u
#define MCHP_RTC_REGA_DIVC_SEL_NORM		(0x02u << 4)
#define MCHP_RTC_REGA_DIVC_SEL_HALT		(0x03u << 4)
/* bit[7] is read-only status */
#define MCHP_RTC_REGA_UPDATE_IN_PROGESS_POS	7
#define MCHP_RTC_REGA_UPDATE_IN_PROGESS		0x80

/* RegB */
#define MCHP_RTC_REGB_REG_OFS		0x0bu
#define MCHP_RTC_REGB_MASK		0xf7u
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
#define MCHP_RTC_REGC_REG_OFS		0x0cu
#define MCHP_RTC_REGC_MASK		0xf0u
#define MCHP_RTC_REGC_UPDATE_DONE_STS	0x10u
#define MCHP_RTC_REGC_ALARM_STS		0x20u
#define MCHP_RTC_REGC_PERIODIC_STS	0x40u
#define MCHP_RTC_REGC_INT_REQ_STS	0x80u

/* RegD */
#define MCHP_RTC_REGD_REG_OFS		0x0du
#define MCHP_RTC_REGD_MASK		0x3fu
#define MCHP_RTC_REGD_DATE_ALARM_MASK	0x3fu

/* Control */
#define MCHP_RTC_CTRL_REG_OFS		0x10u
#define MCHP_RTC_CTRL_MASK		0x0fu
#define MCHP_RTC_CTRL_BLK_EN		0x01u
#define MCHP_RTC_CTRL_SRST		0x02u
#define MCHP_RTC_CTRL_RSVD2		0x04u
#define MCHP_RTC_CTRL_ALARM_EN		0x08u

/* Daylight savings forward (DLSF) and backward (DLSB) registers */
#define MCHP_RTC_DLSF_REG_OFS		0x18u
#define MCHP_RTC_DLSB_REG_OFS		0x1cu
#define MCHP_RTC_DLS_MASK		0xff0707ffu
#define MCHP_RTC_DLS_MON_POS		0
#define MCHP_RTC_DLS_MON_MASK		0xffu
#define MCHP_RTC_DLS_DOFW_POS		8
#define MCHP_RTC_DLS_DOFW_MASK		(0x07u << 8)
#define MCHP_RTC_DLS_WEEK_POS		16
#define MCHP_RTC_DLS_WEEK_MASK		(0x07u << 16)
#define MCHP_RTC_DLS_WEEK_1		(1u << 16)
#define MCHP_RTC_DLS_WEEK_2		(2u << 16)
#define MCHP_RTC_DLS_WEEK_3		(3u << 16)
#define MCHP_RTC_DLS_WEEK_4		(4u << 16)
#define MCHP_RTC_DLS_WEEK_LAST		(5u << 16)
#define MCHP_RTC_DLS_HOUR_POS		24
#define MCHP_RTC_DLS_HOUR_MASK		(0x3fu << 24)
#define MCHP_RTC_DLS_AM_PM_POS		31
#define MCHP_RTC_DLS_PM			(1u << 31)


/**
  * @brief Real Time Clock (RTC)
  */
typedef struct rtc_regs {
	__IOM uint8_t  SECONDS;		/*! (@ 0x0000) RTC seconds */
	__IOM uint8_t  SEC_ALARM;	/*! (@ 0x0001) RTC seconds alarm */
	__IOM uint8_t  MINUTES;		/*! (@ 0x0002) RTC minutes */
	__IOM uint8_t  MIN_ALARM;	/*! (@ 0x0003) RTC minutes alarm */
	__IOM uint8_t  HOURS;		/*! (@ 0x0004) RTC hours */
	__IOM uint8_t  HOURS_ALARM;	/*! (@ 0x0005) RTC hours alarm */
	__IOM uint8_t  DAY_OF_WEEK;	/*! (@ 0x0006) RTC day of week */
	__IOM uint8_t  DAY_OF_MONTH;	/*! (@ 0x0007) RTC day of month */
	__IOM uint8_t  MONTH;		/*! (@ 0x0008) RTC month */
	__IOM uint8_t  YEAR;		/*! (@ 0x0009) RTC year */
	__IOM uint8_t  REGA;		/*! (@ 0x000a) RTC Reg A */
	__IOM uint8_t  REGB;		/*! (@ 0x000b) RTC Reg B */
	__IOM uint8_t  REGC;		/*! (@ 0x000c) RTC Reg C */
	__IOM uint8_t  REGD;		/*! (@ 0x000d) RTC Reg D */
	uint8_t RSVD1[2];
	__IOM uint8_t  CONTROL;		/*! (@ 0x0010) RTC Control */
	uint8_t RSVD2[3];
	__IOM uint8_t  WEEK_ALARM;	/*! (@ 0x0014) RTC Alarm day of week */
	uint8_t RSVD3[3];
	__IOM uint32_t  DLSF;		/*! (@ 0x0018) RTC Daylight savings forward */
	__IOM uint32_t  DLSB;		/*! (@ 0x0018) RTC Daylight savings backward */
} RTC_Type;

#endif /* #ifndef _RTC_H */
/* end rtc.h */
/**   @}
 */
