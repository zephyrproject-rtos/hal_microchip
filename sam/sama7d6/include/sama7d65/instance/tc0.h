/*
 * Instance header file for ATSAMA7D65D5M
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2025-05-27T09:30:00Z */
#ifndef _SAMA7D_TC0_INSTANCE_
#define _SAMA7D_TC0_INSTANCE_


/* ========== Instance Parameter definitions for TC0 peripheral ========== */
#define TC0_CLOCK_ID_CHANNEL0                    (83)
#define TC0_CLOCK_ID_CHANNEL1                    (84)
#define TC0_CLOCK_ID_CHANNEL2                    (85)
#define TC0_DMAC_ID_CHANNEL1_CPA                 (63)
#define TC0_DMAC_ID_CHANNEL1_CPB                 (65)
#define TC0_DMAC_ID_CHANNEL1_CPC                 (67)
#define TC0_DMAC_ID_CHANNEL1_ETRG                (69)
#define TC0_DMAC_ID_RX                           (51)
#define TC0_INSTANCE_ID_CHANNEL0                 (83)       /* 32-bit Timer Counter 0 Channel 0. Max Generic Clock Frequency = FPCLOCK  3. */
#define TC0_INSTANCE_ID_CHANNEL1                 (84)       /* 32-bit Timer Counter 0 Channel 1 */
#define TC0_INSTANCE_ID_CHANNEL2                 (85)       /* 32-bit Timer Counter 0 Channel 2 */
#define TC0_NUM_INTERRUPT_LINES                  (3)        /* Number of interrupt lines */
#define TC0_TCCLKS_TIMER_CLOCK1                  (0)        /* GCLK */
#define TC0_TCCLKS_TIMER_CLOCK2                  (1)        /* MCK0/8 */
#define TC0_TCCLKS_TIMER_CLOCK3                  (2)        /* MCK0/32 */
#define TC0_TCCLKS_TIMER_CLOCK4                  (3)        /* MCK0/128 */
#define TC0_TCCLKS_TIMER_CLOCK5                  (4)        /* TD_SLCK */
#define TC0_TCCLKS_XC0                           (5)        /* XC0 */
#define TC0_TCCLKS_XC1                           (6)        /* XC1 */
#define TC0_TCCLKS_XC2                           (7)        /* XC2 */
#define TC0_TIMER_WIDTH                          (32)       /* Timer width */

#endif /* _SAMA7D_TC0_INSTANCE_ */
