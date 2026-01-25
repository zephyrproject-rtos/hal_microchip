/*
 * Component description for PORT
 *
 * Copyright (c) 2026 Microchip Technology Inc. and its subsidiaries.
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _PIC32CMPL10_PORT_COMPONENT_H_
#define _PIC32CMPL10_PORT_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PORT                      */
/* ************************************************************************** */

/* -------- PORT_DIR : (PORT Offset: 0x00) (R/W 32) Data Direction -------- */
#define PORT_DIR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PORT_DIR) Data Direction  Reset Value */

#define PORT_DIR_DIR0_Pos                     _UINT32_(0)                                          /* (PORT_DIR) Port Data Direction 0 Position */
#define PORT_DIR_DIR0_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR0_Pos)                 /* (PORT_DIR) Port Data Direction 0 Mask */
#define PORT_DIR_DIR0(value)                  (PORT_DIR_DIR0_Msk & (_UINT32_(value) << PORT_DIR_DIR0_Pos)) /* Assignment of value for DIR0 in the PORT_DIR register */
#define PORT_DIR_DIR1_Pos                     _UINT32_(1)                                          /* (PORT_DIR) Port Data Direction 1 Position */
#define PORT_DIR_DIR1_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR1_Pos)                 /* (PORT_DIR) Port Data Direction 1 Mask */
#define PORT_DIR_DIR1(value)                  (PORT_DIR_DIR1_Msk & (_UINT32_(value) << PORT_DIR_DIR1_Pos)) /* Assignment of value for DIR1 in the PORT_DIR register */
#define PORT_DIR_DIR2_Pos                     _UINT32_(2)                                          /* (PORT_DIR) Port Data Direction 2 Position */
#define PORT_DIR_DIR2_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR2_Pos)                 /* (PORT_DIR) Port Data Direction 2 Mask */
#define PORT_DIR_DIR2(value)                  (PORT_DIR_DIR2_Msk & (_UINT32_(value) << PORT_DIR_DIR2_Pos)) /* Assignment of value for DIR2 in the PORT_DIR register */
#define PORT_DIR_DIR3_Pos                     _UINT32_(3)                                          /* (PORT_DIR) Port Data Direction 3 Position */
#define PORT_DIR_DIR3_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR3_Pos)                 /* (PORT_DIR) Port Data Direction 3 Mask */
#define PORT_DIR_DIR3(value)                  (PORT_DIR_DIR3_Msk & (_UINT32_(value) << PORT_DIR_DIR3_Pos)) /* Assignment of value for DIR3 in the PORT_DIR register */
#define PORT_DIR_DIR4_Pos                     _UINT32_(4)                                          /* (PORT_DIR) Port Data Direction 4 Position */
#define PORT_DIR_DIR4_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR4_Pos)                 /* (PORT_DIR) Port Data Direction 4 Mask */
#define PORT_DIR_DIR4(value)                  (PORT_DIR_DIR4_Msk & (_UINT32_(value) << PORT_DIR_DIR4_Pos)) /* Assignment of value for DIR4 in the PORT_DIR register */
#define PORT_DIR_DIR5_Pos                     _UINT32_(5)                                          /* (PORT_DIR) Port Data Direction 5 Position */
#define PORT_DIR_DIR5_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR5_Pos)                 /* (PORT_DIR) Port Data Direction 5 Mask */
#define PORT_DIR_DIR5(value)                  (PORT_DIR_DIR5_Msk & (_UINT32_(value) << PORT_DIR_DIR5_Pos)) /* Assignment of value for DIR5 in the PORT_DIR register */
#define PORT_DIR_DIR6_Pos                     _UINT32_(6)                                          /* (PORT_DIR) Port Data Direction 6 Position */
#define PORT_DIR_DIR6_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR6_Pos)                 /* (PORT_DIR) Port Data Direction 6 Mask */
#define PORT_DIR_DIR6(value)                  (PORT_DIR_DIR6_Msk & (_UINT32_(value) << PORT_DIR_DIR6_Pos)) /* Assignment of value for DIR6 in the PORT_DIR register */
#define PORT_DIR_DIR7_Pos                     _UINT32_(7)                                          /* (PORT_DIR) Port Data Direction 7 Position */
#define PORT_DIR_DIR7_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR7_Pos)                 /* (PORT_DIR) Port Data Direction 7 Mask */
#define PORT_DIR_DIR7(value)                  (PORT_DIR_DIR7_Msk & (_UINT32_(value) << PORT_DIR_DIR7_Pos)) /* Assignment of value for DIR7 in the PORT_DIR register */
#define PORT_DIR_DIR8_Pos                     _UINT32_(8)                                          /* (PORT_DIR) Port Data Direction 8 Position */
#define PORT_DIR_DIR8_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR8_Pos)                 /* (PORT_DIR) Port Data Direction 8 Mask */
#define PORT_DIR_DIR8(value)                  (PORT_DIR_DIR8_Msk & (_UINT32_(value) << PORT_DIR_DIR8_Pos)) /* Assignment of value for DIR8 in the PORT_DIR register */
#define PORT_DIR_DIR9_Pos                     _UINT32_(9)                                          /* (PORT_DIR) Port Data Direction 9 Position */
#define PORT_DIR_DIR9_Msk                     (_UINT32_(0x1) << PORT_DIR_DIR9_Pos)                 /* (PORT_DIR) Port Data Direction 9 Mask */
#define PORT_DIR_DIR9(value)                  (PORT_DIR_DIR9_Msk & (_UINT32_(value) << PORT_DIR_DIR9_Pos)) /* Assignment of value for DIR9 in the PORT_DIR register */
#define PORT_DIR_DIR10_Pos                    _UINT32_(10)                                         /* (PORT_DIR) Port Data Direction 10 Position */
#define PORT_DIR_DIR10_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR10_Pos)                /* (PORT_DIR) Port Data Direction 10 Mask */
#define PORT_DIR_DIR10(value)                 (PORT_DIR_DIR10_Msk & (_UINT32_(value) << PORT_DIR_DIR10_Pos)) /* Assignment of value for DIR10 in the PORT_DIR register */
#define PORT_DIR_DIR11_Pos                    _UINT32_(11)                                         /* (PORT_DIR) Port Data Direction 11 Position */
#define PORT_DIR_DIR11_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR11_Pos)                /* (PORT_DIR) Port Data Direction 11 Mask */
#define PORT_DIR_DIR11(value)                 (PORT_DIR_DIR11_Msk & (_UINT32_(value) << PORT_DIR_DIR11_Pos)) /* Assignment of value for DIR11 in the PORT_DIR register */
#define PORT_DIR_DIR12_Pos                    _UINT32_(12)                                         /* (PORT_DIR) Port Data Direction 12 Position */
#define PORT_DIR_DIR12_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR12_Pos)                /* (PORT_DIR) Port Data Direction 12 Mask */
#define PORT_DIR_DIR12(value)                 (PORT_DIR_DIR12_Msk & (_UINT32_(value) << PORT_DIR_DIR12_Pos)) /* Assignment of value for DIR12 in the PORT_DIR register */
#define PORT_DIR_DIR13_Pos                    _UINT32_(13)                                         /* (PORT_DIR) Port Data Direction 13 Position */
#define PORT_DIR_DIR13_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR13_Pos)                /* (PORT_DIR) Port Data Direction 13 Mask */
#define PORT_DIR_DIR13(value)                 (PORT_DIR_DIR13_Msk & (_UINT32_(value) << PORT_DIR_DIR13_Pos)) /* Assignment of value for DIR13 in the PORT_DIR register */
#define PORT_DIR_DIR14_Pos                    _UINT32_(14)                                         /* (PORT_DIR) Port Data Direction 14 Position */
#define PORT_DIR_DIR14_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR14_Pos)                /* (PORT_DIR) Port Data Direction 14 Mask */
#define PORT_DIR_DIR14(value)                 (PORT_DIR_DIR14_Msk & (_UINT32_(value) << PORT_DIR_DIR14_Pos)) /* Assignment of value for DIR14 in the PORT_DIR register */
#define PORT_DIR_DIR15_Pos                    _UINT32_(15)                                         /* (PORT_DIR) Port Data Direction 15 Position */
#define PORT_DIR_DIR15_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR15_Pos)                /* (PORT_DIR) Port Data Direction 15 Mask */
#define PORT_DIR_DIR15(value)                 (PORT_DIR_DIR15_Msk & (_UINT32_(value) << PORT_DIR_DIR15_Pos)) /* Assignment of value for DIR15 in the PORT_DIR register */
#define PORT_DIR_DIR16_Pos                    _UINT32_(16)                                         /* (PORT_DIR) Port Data Direction 16 Position */
#define PORT_DIR_DIR16_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR16_Pos)                /* (PORT_DIR) Port Data Direction 16 Mask */
#define PORT_DIR_DIR16(value)                 (PORT_DIR_DIR16_Msk & (_UINT32_(value) << PORT_DIR_DIR16_Pos)) /* Assignment of value for DIR16 in the PORT_DIR register */
#define PORT_DIR_DIR17_Pos                    _UINT32_(17)                                         /* (PORT_DIR) Port Data Direction 17 Position */
#define PORT_DIR_DIR17_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR17_Pos)                /* (PORT_DIR) Port Data Direction 17 Mask */
#define PORT_DIR_DIR17(value)                 (PORT_DIR_DIR17_Msk & (_UINT32_(value) << PORT_DIR_DIR17_Pos)) /* Assignment of value for DIR17 in the PORT_DIR register */
#define PORT_DIR_DIR18_Pos                    _UINT32_(18)                                         /* (PORT_DIR) Port Data Direction 18 Position */
#define PORT_DIR_DIR18_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR18_Pos)                /* (PORT_DIR) Port Data Direction 18 Mask */
#define PORT_DIR_DIR18(value)                 (PORT_DIR_DIR18_Msk & (_UINT32_(value) << PORT_DIR_DIR18_Pos)) /* Assignment of value for DIR18 in the PORT_DIR register */
#define PORT_DIR_DIR19_Pos                    _UINT32_(19)                                         /* (PORT_DIR) Port Data Direction 19 Position */
#define PORT_DIR_DIR19_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR19_Pos)                /* (PORT_DIR) Port Data Direction 19 Mask */
#define PORT_DIR_DIR19(value)                 (PORT_DIR_DIR19_Msk & (_UINT32_(value) << PORT_DIR_DIR19_Pos)) /* Assignment of value for DIR19 in the PORT_DIR register */
#define PORT_DIR_DIR20_Pos                    _UINT32_(20)                                         /* (PORT_DIR) Port Data Direction 20 Position */
#define PORT_DIR_DIR20_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR20_Pos)                /* (PORT_DIR) Port Data Direction 20 Mask */
#define PORT_DIR_DIR20(value)                 (PORT_DIR_DIR20_Msk & (_UINT32_(value) << PORT_DIR_DIR20_Pos)) /* Assignment of value for DIR20 in the PORT_DIR register */
#define PORT_DIR_DIR21_Pos                    _UINT32_(21)                                         /* (PORT_DIR) Port Data Direction 21 Position */
#define PORT_DIR_DIR21_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR21_Pos)                /* (PORT_DIR) Port Data Direction 21 Mask */
#define PORT_DIR_DIR21(value)                 (PORT_DIR_DIR21_Msk & (_UINT32_(value) << PORT_DIR_DIR21_Pos)) /* Assignment of value for DIR21 in the PORT_DIR register */
#define PORT_DIR_DIR22_Pos                    _UINT32_(22)                                         /* (PORT_DIR) Port Data Direction 22 Position */
#define PORT_DIR_DIR22_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR22_Pos)                /* (PORT_DIR) Port Data Direction 22 Mask */
#define PORT_DIR_DIR22(value)                 (PORT_DIR_DIR22_Msk & (_UINT32_(value) << PORT_DIR_DIR22_Pos)) /* Assignment of value for DIR22 in the PORT_DIR register */
#define PORT_DIR_DIR23_Pos                    _UINT32_(23)                                         /* (PORT_DIR) Port Data Direction 23 Position */
#define PORT_DIR_DIR23_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR23_Pos)                /* (PORT_DIR) Port Data Direction 23 Mask */
#define PORT_DIR_DIR23(value)                 (PORT_DIR_DIR23_Msk & (_UINT32_(value) << PORT_DIR_DIR23_Pos)) /* Assignment of value for DIR23 in the PORT_DIR register */
#define PORT_DIR_DIR24_Pos                    _UINT32_(24)                                         /* (PORT_DIR) Port Data Direction 24 Position */
#define PORT_DIR_DIR24_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR24_Pos)                /* (PORT_DIR) Port Data Direction 24 Mask */
#define PORT_DIR_DIR24(value)                 (PORT_DIR_DIR24_Msk & (_UINT32_(value) << PORT_DIR_DIR24_Pos)) /* Assignment of value for DIR24 in the PORT_DIR register */
#define PORT_DIR_DIR25_Pos                    _UINT32_(25)                                         /* (PORT_DIR) Port Data Direction 25 Position */
#define PORT_DIR_DIR25_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR25_Pos)                /* (PORT_DIR) Port Data Direction 25 Mask */
#define PORT_DIR_DIR25(value)                 (PORT_DIR_DIR25_Msk & (_UINT32_(value) << PORT_DIR_DIR25_Pos)) /* Assignment of value for DIR25 in the PORT_DIR register */
#define PORT_DIR_DIR26_Pos                    _UINT32_(26)                                         /* (PORT_DIR) Port Data Direction 26 Position */
#define PORT_DIR_DIR26_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR26_Pos)                /* (PORT_DIR) Port Data Direction 26 Mask */
#define PORT_DIR_DIR26(value)                 (PORT_DIR_DIR26_Msk & (_UINT32_(value) << PORT_DIR_DIR26_Pos)) /* Assignment of value for DIR26 in the PORT_DIR register */
#define PORT_DIR_DIR27_Pos                    _UINT32_(27)                                         /* (PORT_DIR) Port Data Direction 27 Position */
#define PORT_DIR_DIR27_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR27_Pos)                /* (PORT_DIR) Port Data Direction 27 Mask */
#define PORT_DIR_DIR27(value)                 (PORT_DIR_DIR27_Msk & (_UINT32_(value) << PORT_DIR_DIR27_Pos)) /* Assignment of value for DIR27 in the PORT_DIR register */
#define PORT_DIR_DIR28_Pos                    _UINT32_(28)                                         /* (PORT_DIR) Port Data Direction 28 Position */
#define PORT_DIR_DIR28_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR28_Pos)                /* (PORT_DIR) Port Data Direction 28 Mask */
#define PORT_DIR_DIR28(value)                 (PORT_DIR_DIR28_Msk & (_UINT32_(value) << PORT_DIR_DIR28_Pos)) /* Assignment of value for DIR28 in the PORT_DIR register */
#define PORT_DIR_DIR29_Pos                    _UINT32_(29)                                         /* (PORT_DIR) Port Data Direction 29 Position */
#define PORT_DIR_DIR29_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR29_Pos)                /* (PORT_DIR) Port Data Direction 29 Mask */
#define PORT_DIR_DIR29(value)                 (PORT_DIR_DIR29_Msk & (_UINT32_(value) << PORT_DIR_DIR29_Pos)) /* Assignment of value for DIR29 in the PORT_DIR register */
#define PORT_DIR_DIR30_Pos                    _UINT32_(30)                                         /* (PORT_DIR) Port Data Direction 30 Position */
#define PORT_DIR_DIR30_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR30_Pos)                /* (PORT_DIR) Port Data Direction 30 Mask */
#define PORT_DIR_DIR30(value)                 (PORT_DIR_DIR30_Msk & (_UINT32_(value) << PORT_DIR_DIR30_Pos)) /* Assignment of value for DIR30 in the PORT_DIR register */
#define PORT_DIR_DIR31_Pos                    _UINT32_(31)                                         /* (PORT_DIR) Port Data Direction 31 Position */
#define PORT_DIR_DIR31_Msk                    (_UINT32_(0x1) << PORT_DIR_DIR31_Pos)                /* (PORT_DIR) Port Data Direction 31 Mask */
#define PORT_DIR_DIR31(value)                 (PORT_DIR_DIR31_Msk & (_UINT32_(value) << PORT_DIR_DIR31_Pos)) /* Assignment of value for DIR31 in the PORT_DIR register */
#define PORT_DIR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIR) Register Mask  */

#define PORT_DIR_DIR_Pos                      _UINT32_(0)                                          /* (PORT_DIR Position) Port Data Direction 3x */
#define PORT_DIR_DIR_Msk                      (_UINT32_(0xFFFFFFFF) << PORT_DIR_DIR_Pos)           /* (PORT_DIR Mask) DIR */
#define PORT_DIR_DIR(value)                   (PORT_DIR_DIR_Msk & (_UINT32_(value) << PORT_DIR_DIR_Pos)) 

/* -------- PORT_DIRCLR : (PORT Offset: 0x04) (R/W 32) Data Direction Clear -------- */
#define PORT_DIRCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_DIRCLR) Data Direction Clear  Reset Value */

#define PORT_DIRCLR_DIR0CLR_Pos               _UINT32_(0)                                          /* (PORT_DIRCLR) Port Data Direction 0 Clear Position */
#define PORT_DIRCLR_DIR0CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR0CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 0 Clear Mask */
#define PORT_DIRCLR_DIR0CLR(value)            (PORT_DIRCLR_DIR0CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR0CLR_Pos)) /* Assignment of value for DIR0CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR1CLR_Pos               _UINT32_(1)                                          /* (PORT_DIRCLR) Port Data Direction 1 Clear Position */
#define PORT_DIRCLR_DIR1CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR1CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 1 Clear Mask */
#define PORT_DIRCLR_DIR1CLR(value)            (PORT_DIRCLR_DIR1CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR1CLR_Pos)) /* Assignment of value for DIR1CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR2CLR_Pos               _UINT32_(2)                                          /* (PORT_DIRCLR) Port Data Direction 2 Clear Position */
#define PORT_DIRCLR_DIR2CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR2CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 2 Clear Mask */
#define PORT_DIRCLR_DIR2CLR(value)            (PORT_DIRCLR_DIR2CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR2CLR_Pos)) /* Assignment of value for DIR2CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR3CLR_Pos               _UINT32_(3)                                          /* (PORT_DIRCLR) Port Data Direction 3 Clear Position */
#define PORT_DIRCLR_DIR3CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR3CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 3 Clear Mask */
#define PORT_DIRCLR_DIR3CLR(value)            (PORT_DIRCLR_DIR3CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR3CLR_Pos)) /* Assignment of value for DIR3CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR4CLR_Pos               _UINT32_(4)                                          /* (PORT_DIRCLR) Port Data Direction 4 Clear Position */
#define PORT_DIRCLR_DIR4CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR4CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 4 Clear Mask */
#define PORT_DIRCLR_DIR4CLR(value)            (PORT_DIRCLR_DIR4CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR4CLR_Pos)) /* Assignment of value for DIR4CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR5CLR_Pos               _UINT32_(5)                                          /* (PORT_DIRCLR) Port Data Direction 5 Clear Position */
#define PORT_DIRCLR_DIR5CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR5CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 5 Clear Mask */
#define PORT_DIRCLR_DIR5CLR(value)            (PORT_DIRCLR_DIR5CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR5CLR_Pos)) /* Assignment of value for DIR5CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR6CLR_Pos               _UINT32_(6)                                          /* (PORT_DIRCLR) Port Data Direction 6 Clear Position */
#define PORT_DIRCLR_DIR6CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR6CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 6 Clear Mask */
#define PORT_DIRCLR_DIR6CLR(value)            (PORT_DIRCLR_DIR6CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR6CLR_Pos)) /* Assignment of value for DIR6CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR7CLR_Pos               _UINT32_(7)                                          /* (PORT_DIRCLR) Port Data Direction 7 Clear Position */
#define PORT_DIRCLR_DIR7CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR7CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 7 Clear Mask */
#define PORT_DIRCLR_DIR7CLR(value)            (PORT_DIRCLR_DIR7CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR7CLR_Pos)) /* Assignment of value for DIR7CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR8CLR_Pos               _UINT32_(8)                                          /* (PORT_DIRCLR) Port Data Direction 8 Clear Position */
#define PORT_DIRCLR_DIR8CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR8CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 8 Clear Mask */
#define PORT_DIRCLR_DIR8CLR(value)            (PORT_DIRCLR_DIR8CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR8CLR_Pos)) /* Assignment of value for DIR8CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR9CLR_Pos               _UINT32_(9)                                          /* (PORT_DIRCLR) Port Data Direction 9 Clear Position */
#define PORT_DIRCLR_DIR9CLR_Msk               (_UINT32_(0x1) << PORT_DIRCLR_DIR9CLR_Pos)           /* (PORT_DIRCLR) Port Data Direction 9 Clear Mask */
#define PORT_DIRCLR_DIR9CLR(value)            (PORT_DIRCLR_DIR9CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR9CLR_Pos)) /* Assignment of value for DIR9CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR10CLR_Pos              _UINT32_(10)                                         /* (PORT_DIRCLR) Port Data Direction 10 Clear Position */
#define PORT_DIRCLR_DIR10CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR10CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 10 Clear Mask */
#define PORT_DIRCLR_DIR10CLR(value)           (PORT_DIRCLR_DIR10CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR10CLR_Pos)) /* Assignment of value for DIR10CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR11CLR_Pos              _UINT32_(11)                                         /* (PORT_DIRCLR) Port Data Direction 11 Clear Position */
#define PORT_DIRCLR_DIR11CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR11CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 11 Clear Mask */
#define PORT_DIRCLR_DIR11CLR(value)           (PORT_DIRCLR_DIR11CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR11CLR_Pos)) /* Assignment of value for DIR11CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR12CLR_Pos              _UINT32_(12)                                         /* (PORT_DIRCLR) Port Data Direction 12 Clear Position */
#define PORT_DIRCLR_DIR12CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR12CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 12 Clear Mask */
#define PORT_DIRCLR_DIR12CLR(value)           (PORT_DIRCLR_DIR12CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR12CLR_Pos)) /* Assignment of value for DIR12CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR13CLR_Pos              _UINT32_(13)                                         /* (PORT_DIRCLR) Port Data Direction 13 Clear Position */
#define PORT_DIRCLR_DIR13CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR13CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 13 Clear Mask */
#define PORT_DIRCLR_DIR13CLR(value)           (PORT_DIRCLR_DIR13CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR13CLR_Pos)) /* Assignment of value for DIR13CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR14CLR_Pos              _UINT32_(14)                                         /* (PORT_DIRCLR) Port Data Direction 14 Clear Position */
#define PORT_DIRCLR_DIR14CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR14CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 14 Clear Mask */
#define PORT_DIRCLR_DIR14CLR(value)           (PORT_DIRCLR_DIR14CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR14CLR_Pos)) /* Assignment of value for DIR14CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR15CLR_Pos              _UINT32_(15)                                         /* (PORT_DIRCLR) Port Data Direction 15 Clear Position */
#define PORT_DIRCLR_DIR15CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR15CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 15 Clear Mask */
#define PORT_DIRCLR_DIR15CLR(value)           (PORT_DIRCLR_DIR15CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR15CLR_Pos)) /* Assignment of value for DIR15CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR16CLR_Pos              _UINT32_(16)                                         /* (PORT_DIRCLR) Port Data Direction 16 Clear Position */
#define PORT_DIRCLR_DIR16CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR16CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 16 Clear Mask */
#define PORT_DIRCLR_DIR16CLR(value)           (PORT_DIRCLR_DIR16CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR16CLR_Pos)) /* Assignment of value for DIR16CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR17CLR_Pos              _UINT32_(17)                                         /* (PORT_DIRCLR) Port Data Direction 17 Clear Position */
#define PORT_DIRCLR_DIR17CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR17CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 17 Clear Mask */
#define PORT_DIRCLR_DIR17CLR(value)           (PORT_DIRCLR_DIR17CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR17CLR_Pos)) /* Assignment of value for DIR17CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR18CLR_Pos              _UINT32_(18)                                         /* (PORT_DIRCLR) Port Data Direction 18 Clear Position */
#define PORT_DIRCLR_DIR18CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR18CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 18 Clear Mask */
#define PORT_DIRCLR_DIR18CLR(value)           (PORT_DIRCLR_DIR18CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR18CLR_Pos)) /* Assignment of value for DIR18CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR19CLR_Pos              _UINT32_(19)                                         /* (PORT_DIRCLR) Port Data Direction 19 Clear Position */
#define PORT_DIRCLR_DIR19CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR19CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 19 Clear Mask */
#define PORT_DIRCLR_DIR19CLR(value)           (PORT_DIRCLR_DIR19CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR19CLR_Pos)) /* Assignment of value for DIR19CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR20CLR_Pos              _UINT32_(20)                                         /* (PORT_DIRCLR) Port Data Direction 20 Clear Position */
#define PORT_DIRCLR_DIR20CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR20CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 20 Clear Mask */
#define PORT_DIRCLR_DIR20CLR(value)           (PORT_DIRCLR_DIR20CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR20CLR_Pos)) /* Assignment of value for DIR20CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR21CLR_Pos              _UINT32_(21)                                         /* (PORT_DIRCLR) Port Data Direction 21 Clear Position */
#define PORT_DIRCLR_DIR21CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR21CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 21 Clear Mask */
#define PORT_DIRCLR_DIR21CLR(value)           (PORT_DIRCLR_DIR21CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR21CLR_Pos)) /* Assignment of value for DIR21CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR22CLR_Pos              _UINT32_(22)                                         /* (PORT_DIRCLR) Port Data Direction 22 Clear Position */
#define PORT_DIRCLR_DIR22CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR22CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 22 Clear Mask */
#define PORT_DIRCLR_DIR22CLR(value)           (PORT_DIRCLR_DIR22CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR22CLR_Pos)) /* Assignment of value for DIR22CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR23CLR_Pos              _UINT32_(23)                                         /* (PORT_DIRCLR) Port Data Direction 23 Clear Position */
#define PORT_DIRCLR_DIR23CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR23CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 23 Clear Mask */
#define PORT_DIRCLR_DIR23CLR(value)           (PORT_DIRCLR_DIR23CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR23CLR_Pos)) /* Assignment of value for DIR23CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR24CLR_Pos              _UINT32_(24)                                         /* (PORT_DIRCLR) Port Data Direction 24 Clear Position */
#define PORT_DIRCLR_DIR24CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR24CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 24 Clear Mask */
#define PORT_DIRCLR_DIR24CLR(value)           (PORT_DIRCLR_DIR24CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR24CLR_Pos)) /* Assignment of value for DIR24CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR25CLR_Pos              _UINT32_(25)                                         /* (PORT_DIRCLR) Port Data Direction 25 Clear Position */
#define PORT_DIRCLR_DIR25CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR25CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 25 Clear Mask */
#define PORT_DIRCLR_DIR25CLR(value)           (PORT_DIRCLR_DIR25CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR25CLR_Pos)) /* Assignment of value for DIR25CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR26CLR_Pos              _UINT32_(26)                                         /* (PORT_DIRCLR) Port Data Direction 26 Clear Position */
#define PORT_DIRCLR_DIR26CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR26CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 26 Clear Mask */
#define PORT_DIRCLR_DIR26CLR(value)           (PORT_DIRCLR_DIR26CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR26CLR_Pos)) /* Assignment of value for DIR26CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR27CLR_Pos              _UINT32_(27)                                         /* (PORT_DIRCLR) Port Data Direction 27 Clear Position */
#define PORT_DIRCLR_DIR27CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR27CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 27 Clear Mask */
#define PORT_DIRCLR_DIR27CLR(value)           (PORT_DIRCLR_DIR27CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR27CLR_Pos)) /* Assignment of value for DIR27CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR28CLR_Pos              _UINT32_(28)                                         /* (PORT_DIRCLR) Port Data Direction 28 Clear Position */
#define PORT_DIRCLR_DIR28CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR28CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 28 Clear Mask */
#define PORT_DIRCLR_DIR28CLR(value)           (PORT_DIRCLR_DIR28CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR28CLR_Pos)) /* Assignment of value for DIR28CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR29CLR_Pos              _UINT32_(29)                                         /* (PORT_DIRCLR) Port Data Direction 29 Clear Position */
#define PORT_DIRCLR_DIR29CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR29CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 29 Clear Mask */
#define PORT_DIRCLR_DIR29CLR(value)           (PORT_DIRCLR_DIR29CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR29CLR_Pos)) /* Assignment of value for DIR29CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR30CLR_Pos              _UINT32_(30)                                         /* (PORT_DIRCLR) Port Data Direction 30 Clear Position */
#define PORT_DIRCLR_DIR30CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR30CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 30 Clear Mask */
#define PORT_DIRCLR_DIR30CLR(value)           (PORT_DIRCLR_DIR30CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR30CLR_Pos)) /* Assignment of value for DIR30CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_DIR31CLR_Pos              _UINT32_(31)                                         /* (PORT_DIRCLR) Port Data Direction 31 Clear Position */
#define PORT_DIRCLR_DIR31CLR_Msk              (_UINT32_(0x1) << PORT_DIRCLR_DIR31CLR_Pos)          /* (PORT_DIRCLR) Port Data Direction 31 Clear Mask */
#define PORT_DIRCLR_DIR31CLR(value)           (PORT_DIRCLR_DIR31CLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIR31CLR_Pos)) /* Assignment of value for DIR31CLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIRCLR) Register Mask  */


/* -------- PORT_DIRSET : (PORT Offset: 0x08) (R/W 32) Data Direction Set -------- */
#define PORT_DIRSET_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_DIRSET) Data Direction Set  Reset Value */

#define PORT_DIRSET_DIR0SET_Pos               _UINT32_(0)                                          /* (PORT_DIRSET) Port Data Direction 0 Set Position */
#define PORT_DIRSET_DIR0SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR0SET_Pos)           /* (PORT_DIRSET) Port Data Direction 0 Set Mask */
#define PORT_DIRSET_DIR0SET(value)            (PORT_DIRSET_DIR0SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR0SET_Pos)) /* Assignment of value for DIR0SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR1SET_Pos               _UINT32_(1)                                          /* (PORT_DIRSET) Port Data Direction 1 Set Position */
#define PORT_DIRSET_DIR1SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR1SET_Pos)           /* (PORT_DIRSET) Port Data Direction 1 Set Mask */
#define PORT_DIRSET_DIR1SET(value)            (PORT_DIRSET_DIR1SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR1SET_Pos)) /* Assignment of value for DIR1SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR2SET_Pos               _UINT32_(2)                                          /* (PORT_DIRSET) Port Data Direction 2 Set Position */
#define PORT_DIRSET_DIR2SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR2SET_Pos)           /* (PORT_DIRSET) Port Data Direction 2 Set Mask */
#define PORT_DIRSET_DIR2SET(value)            (PORT_DIRSET_DIR2SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR2SET_Pos)) /* Assignment of value for DIR2SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR3SET_Pos               _UINT32_(3)                                          /* (PORT_DIRSET) Port Data Direction 3 Set Position */
#define PORT_DIRSET_DIR3SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR3SET_Pos)           /* (PORT_DIRSET) Port Data Direction 3 Set Mask */
#define PORT_DIRSET_DIR3SET(value)            (PORT_DIRSET_DIR3SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR3SET_Pos)) /* Assignment of value for DIR3SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR4SET_Pos               _UINT32_(4)                                          /* (PORT_DIRSET) Port Data Direction 4 Set Position */
#define PORT_DIRSET_DIR4SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR4SET_Pos)           /* (PORT_DIRSET) Port Data Direction 4 Set Mask */
#define PORT_DIRSET_DIR4SET(value)            (PORT_DIRSET_DIR4SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR4SET_Pos)) /* Assignment of value for DIR4SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR5SET_Pos               _UINT32_(5)                                          /* (PORT_DIRSET) Port Data Direction 5 Set Position */
#define PORT_DIRSET_DIR5SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR5SET_Pos)           /* (PORT_DIRSET) Port Data Direction 5 Set Mask */
#define PORT_DIRSET_DIR5SET(value)            (PORT_DIRSET_DIR5SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR5SET_Pos)) /* Assignment of value for DIR5SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR6SET_Pos               _UINT32_(6)                                          /* (PORT_DIRSET) Port Data Direction 6 Set Position */
#define PORT_DIRSET_DIR6SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR6SET_Pos)           /* (PORT_DIRSET) Port Data Direction 6 Set Mask */
#define PORT_DIRSET_DIR6SET(value)            (PORT_DIRSET_DIR6SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR6SET_Pos)) /* Assignment of value for DIR6SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR7SET_Pos               _UINT32_(7)                                          /* (PORT_DIRSET) Port Data Direction 7 Set Position */
#define PORT_DIRSET_DIR7SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR7SET_Pos)           /* (PORT_DIRSET) Port Data Direction 7 Set Mask */
#define PORT_DIRSET_DIR7SET(value)            (PORT_DIRSET_DIR7SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR7SET_Pos)) /* Assignment of value for DIR7SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR8SET_Pos               _UINT32_(8)                                          /* (PORT_DIRSET) Port Data Direction 8 Set Position */
#define PORT_DIRSET_DIR8SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR8SET_Pos)           /* (PORT_DIRSET) Port Data Direction 8 Set Mask */
#define PORT_DIRSET_DIR8SET(value)            (PORT_DIRSET_DIR8SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR8SET_Pos)) /* Assignment of value for DIR8SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR9SET_Pos               _UINT32_(9)                                          /* (PORT_DIRSET) Port Data Direction 9 Set Position */
#define PORT_DIRSET_DIR9SET_Msk               (_UINT32_(0x1) << PORT_DIRSET_DIR9SET_Pos)           /* (PORT_DIRSET) Port Data Direction 9 Set Mask */
#define PORT_DIRSET_DIR9SET(value)            (PORT_DIRSET_DIR9SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR9SET_Pos)) /* Assignment of value for DIR9SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR10SET_Pos              _UINT32_(10)                                         /* (PORT_DIRSET) Port Data Direction 10 Set Position */
#define PORT_DIRSET_DIR10SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR10SET_Pos)          /* (PORT_DIRSET) Port Data Direction 10 Set Mask */
#define PORT_DIRSET_DIR10SET(value)           (PORT_DIRSET_DIR10SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR10SET_Pos)) /* Assignment of value for DIR10SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR11SET_Pos              _UINT32_(11)                                         /* (PORT_DIRSET) Port Data Direction 11 Set Position */
#define PORT_DIRSET_DIR11SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR11SET_Pos)          /* (PORT_DIRSET) Port Data Direction 11 Set Mask */
#define PORT_DIRSET_DIR11SET(value)           (PORT_DIRSET_DIR11SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR11SET_Pos)) /* Assignment of value for DIR11SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR12SET_Pos              _UINT32_(12)                                         /* (PORT_DIRSET) Port Data Direction 12 Set Position */
#define PORT_DIRSET_DIR12SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR12SET_Pos)          /* (PORT_DIRSET) Port Data Direction 12 Set Mask */
#define PORT_DIRSET_DIR12SET(value)           (PORT_DIRSET_DIR12SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR12SET_Pos)) /* Assignment of value for DIR12SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR13SET_Pos              _UINT32_(13)                                         /* (PORT_DIRSET) Port Data Direction 13 Set Position */
#define PORT_DIRSET_DIR13SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR13SET_Pos)          /* (PORT_DIRSET) Port Data Direction 13 Set Mask */
#define PORT_DIRSET_DIR13SET(value)           (PORT_DIRSET_DIR13SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR13SET_Pos)) /* Assignment of value for DIR13SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR14SET_Pos              _UINT32_(14)                                         /* (PORT_DIRSET) Port Data Direction 14 Set Position */
#define PORT_DIRSET_DIR14SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR14SET_Pos)          /* (PORT_DIRSET) Port Data Direction 14 Set Mask */
#define PORT_DIRSET_DIR14SET(value)           (PORT_DIRSET_DIR14SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR14SET_Pos)) /* Assignment of value for DIR14SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR15SET_Pos              _UINT32_(15)                                         /* (PORT_DIRSET) Port Data Direction 15 Set Position */
#define PORT_DIRSET_DIR15SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR15SET_Pos)          /* (PORT_DIRSET) Port Data Direction 15 Set Mask */
#define PORT_DIRSET_DIR15SET(value)           (PORT_DIRSET_DIR15SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR15SET_Pos)) /* Assignment of value for DIR15SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR16SET_Pos              _UINT32_(16)                                         /* (PORT_DIRSET) Port Data Direction 16 Set Position */
#define PORT_DIRSET_DIR16SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR16SET_Pos)          /* (PORT_DIRSET) Port Data Direction 16 Set Mask */
#define PORT_DIRSET_DIR16SET(value)           (PORT_DIRSET_DIR16SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR16SET_Pos)) /* Assignment of value for DIR16SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR17SET_Pos              _UINT32_(17)                                         /* (PORT_DIRSET) Port Data Direction 17 Set Position */
#define PORT_DIRSET_DIR17SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR17SET_Pos)          /* (PORT_DIRSET) Port Data Direction 17 Set Mask */
#define PORT_DIRSET_DIR17SET(value)           (PORT_DIRSET_DIR17SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR17SET_Pos)) /* Assignment of value for DIR17SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR18SET_Pos              _UINT32_(18)                                         /* (PORT_DIRSET) Port Data Direction 18 Set Position */
#define PORT_DIRSET_DIR18SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR18SET_Pos)          /* (PORT_DIRSET) Port Data Direction 18 Set Mask */
#define PORT_DIRSET_DIR18SET(value)           (PORT_DIRSET_DIR18SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR18SET_Pos)) /* Assignment of value for DIR18SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR19SET_Pos              _UINT32_(19)                                         /* (PORT_DIRSET) Port Data Direction 19 Set Position */
#define PORT_DIRSET_DIR19SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR19SET_Pos)          /* (PORT_DIRSET) Port Data Direction 19 Set Mask */
#define PORT_DIRSET_DIR19SET(value)           (PORT_DIRSET_DIR19SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR19SET_Pos)) /* Assignment of value for DIR19SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR20SET_Pos              _UINT32_(20)                                         /* (PORT_DIRSET) Port Data Direction 20 Set Position */
#define PORT_DIRSET_DIR20SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR20SET_Pos)          /* (PORT_DIRSET) Port Data Direction 20 Set Mask */
#define PORT_DIRSET_DIR20SET(value)           (PORT_DIRSET_DIR20SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR20SET_Pos)) /* Assignment of value for DIR20SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR21SET_Pos              _UINT32_(21)                                         /* (PORT_DIRSET) Port Data Direction 21 Set Position */
#define PORT_DIRSET_DIR21SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR21SET_Pos)          /* (PORT_DIRSET) Port Data Direction 21 Set Mask */
#define PORT_DIRSET_DIR21SET(value)           (PORT_DIRSET_DIR21SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR21SET_Pos)) /* Assignment of value for DIR21SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR22SET_Pos              _UINT32_(22)                                         /* (PORT_DIRSET) Port Data Direction 22 Set Position */
#define PORT_DIRSET_DIR22SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR22SET_Pos)          /* (PORT_DIRSET) Port Data Direction 22 Set Mask */
#define PORT_DIRSET_DIR22SET(value)           (PORT_DIRSET_DIR22SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR22SET_Pos)) /* Assignment of value for DIR22SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR23SET_Pos              _UINT32_(23)                                         /* (PORT_DIRSET) Port Data Direction 23 Set Position */
#define PORT_DIRSET_DIR23SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR23SET_Pos)          /* (PORT_DIRSET) Port Data Direction 23 Set Mask */
#define PORT_DIRSET_DIR23SET(value)           (PORT_DIRSET_DIR23SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR23SET_Pos)) /* Assignment of value for DIR23SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR24SET_Pos              _UINT32_(24)                                         /* (PORT_DIRSET) Port Data Direction 24 Set Position */
#define PORT_DIRSET_DIR24SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR24SET_Pos)          /* (PORT_DIRSET) Port Data Direction 24 Set Mask */
#define PORT_DIRSET_DIR24SET(value)           (PORT_DIRSET_DIR24SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR24SET_Pos)) /* Assignment of value for DIR24SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR25SET_Pos              _UINT32_(25)                                         /* (PORT_DIRSET) Port Data Direction 25 Set Position */
#define PORT_DIRSET_DIR25SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR25SET_Pos)          /* (PORT_DIRSET) Port Data Direction 25 Set Mask */
#define PORT_DIRSET_DIR25SET(value)           (PORT_DIRSET_DIR25SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR25SET_Pos)) /* Assignment of value for DIR25SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR26SET_Pos              _UINT32_(26)                                         /* (PORT_DIRSET) Port Data Direction 26 Set Position */
#define PORT_DIRSET_DIR26SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR26SET_Pos)          /* (PORT_DIRSET) Port Data Direction 26 Set Mask */
#define PORT_DIRSET_DIR26SET(value)           (PORT_DIRSET_DIR26SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR26SET_Pos)) /* Assignment of value for DIR26SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR27SET_Pos              _UINT32_(27)                                         /* (PORT_DIRSET) Port Data Direction 27 Set Position */
#define PORT_DIRSET_DIR27SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR27SET_Pos)          /* (PORT_DIRSET) Port Data Direction 27 Set Mask */
#define PORT_DIRSET_DIR27SET(value)           (PORT_DIRSET_DIR27SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR27SET_Pos)) /* Assignment of value for DIR27SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR28SET_Pos              _UINT32_(28)                                         /* (PORT_DIRSET) Port Data Direction 28 Set Position */
#define PORT_DIRSET_DIR28SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR28SET_Pos)          /* (PORT_DIRSET) Port Data Direction 28 Set Mask */
#define PORT_DIRSET_DIR28SET(value)           (PORT_DIRSET_DIR28SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR28SET_Pos)) /* Assignment of value for DIR28SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR29SET_Pos              _UINT32_(29)                                         /* (PORT_DIRSET) Port Data Direction 29 Set Position */
#define PORT_DIRSET_DIR29SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR29SET_Pos)          /* (PORT_DIRSET) Port Data Direction 29 Set Mask */
#define PORT_DIRSET_DIR29SET(value)           (PORT_DIRSET_DIR29SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR29SET_Pos)) /* Assignment of value for DIR29SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR30SET_Pos              _UINT32_(30)                                         /* (PORT_DIRSET) Port Data Direction 30 Set Position */
#define PORT_DIRSET_DIR30SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR30SET_Pos)          /* (PORT_DIRSET) Port Data Direction 30 Set Mask */
#define PORT_DIRSET_DIR30SET(value)           (PORT_DIRSET_DIR30SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR30SET_Pos)) /* Assignment of value for DIR30SET in the PORT_DIRSET register */
#define PORT_DIRSET_DIR31SET_Pos              _UINT32_(31)                                         /* (PORT_DIRSET) Port Data Direction 31 Set Position */
#define PORT_DIRSET_DIR31SET_Msk              (_UINT32_(0x1) << PORT_DIRSET_DIR31SET_Pos)          /* (PORT_DIRSET) Port Data Direction 31 Set Mask */
#define PORT_DIRSET_DIR31SET(value)           (PORT_DIRSET_DIR31SET_Msk & (_UINT32_(value) << PORT_DIRSET_DIR31SET_Pos)) /* Assignment of value for DIR31SET in the PORT_DIRSET register */
#define PORT_DIRSET_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIRSET) Register Mask  */


/* -------- PORT_DIRTGL : (PORT Offset: 0x0C) (R/W 32) Data Direction Toggle -------- */
#define PORT_DIRTGL_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_DIRTGL) Data Direction Toggle  Reset Value */

#define PORT_DIRTGL_DIR0TGL_Pos               _UINT32_(0)                                          /* (PORT_DIRTGL) Port Data Direction 0 Toggle Position */
#define PORT_DIRTGL_DIR0TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR0TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 0 Toggle Mask */
#define PORT_DIRTGL_DIR0TGL(value)            (PORT_DIRTGL_DIR0TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR0TGL_Pos)) /* Assignment of value for DIR0TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR1TGL_Pos               _UINT32_(1)                                          /* (PORT_DIRTGL) Port Data Direction 1 Toggle Position */
#define PORT_DIRTGL_DIR1TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR1TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 1 Toggle Mask */
#define PORT_DIRTGL_DIR1TGL(value)            (PORT_DIRTGL_DIR1TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR1TGL_Pos)) /* Assignment of value for DIR1TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR2TGL_Pos               _UINT32_(2)                                          /* (PORT_DIRTGL) Port Data Direction 2 Toggle Position */
#define PORT_DIRTGL_DIR2TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR2TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 2 Toggle Mask */
#define PORT_DIRTGL_DIR2TGL(value)            (PORT_DIRTGL_DIR2TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR2TGL_Pos)) /* Assignment of value for DIR2TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR3TGL_Pos               _UINT32_(3)                                          /* (PORT_DIRTGL) Port Data Direction 3 Toggle Position */
#define PORT_DIRTGL_DIR3TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR3TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 3 Toggle Mask */
#define PORT_DIRTGL_DIR3TGL(value)            (PORT_DIRTGL_DIR3TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR3TGL_Pos)) /* Assignment of value for DIR3TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR4TGL_Pos               _UINT32_(4)                                          /* (PORT_DIRTGL) Port Data Direction 4 Toggle Position */
#define PORT_DIRTGL_DIR4TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR4TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 4 Toggle Mask */
#define PORT_DIRTGL_DIR4TGL(value)            (PORT_DIRTGL_DIR4TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR4TGL_Pos)) /* Assignment of value for DIR4TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR5TGL_Pos               _UINT32_(5)                                          /* (PORT_DIRTGL) Port Data Direction 5 Toggle Position */
#define PORT_DIRTGL_DIR5TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR5TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 5 Toggle Mask */
#define PORT_DIRTGL_DIR5TGL(value)            (PORT_DIRTGL_DIR5TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR5TGL_Pos)) /* Assignment of value for DIR5TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR6TGL_Pos               _UINT32_(6)                                          /* (PORT_DIRTGL) Port Data Direction 6 Toggle Position */
#define PORT_DIRTGL_DIR6TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR6TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 6 Toggle Mask */
#define PORT_DIRTGL_DIR6TGL(value)            (PORT_DIRTGL_DIR6TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR6TGL_Pos)) /* Assignment of value for DIR6TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR7TGL_Pos               _UINT32_(7)                                          /* (PORT_DIRTGL) Port Data Direction 7 Toggle Position */
#define PORT_DIRTGL_DIR7TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR7TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 7 Toggle Mask */
#define PORT_DIRTGL_DIR7TGL(value)            (PORT_DIRTGL_DIR7TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR7TGL_Pos)) /* Assignment of value for DIR7TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR8TGL_Pos               _UINT32_(8)                                          /* (PORT_DIRTGL) Port Data Direction 8 Toggle Position */
#define PORT_DIRTGL_DIR8TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR8TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 8 Toggle Mask */
#define PORT_DIRTGL_DIR8TGL(value)            (PORT_DIRTGL_DIR8TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR8TGL_Pos)) /* Assignment of value for DIR8TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR9TGL_Pos               _UINT32_(9)                                          /* (PORT_DIRTGL) Port Data Direction 9 Toggle Position */
#define PORT_DIRTGL_DIR9TGL_Msk               (_UINT32_(0x1) << PORT_DIRTGL_DIR9TGL_Pos)           /* (PORT_DIRTGL) Port Data Direction 9 Toggle Mask */
#define PORT_DIRTGL_DIR9TGL(value)            (PORT_DIRTGL_DIR9TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR9TGL_Pos)) /* Assignment of value for DIR9TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR10TGL_Pos              _UINT32_(10)                                         /* (PORT_DIRTGL) Port Data Direction 10 Toggle Position */
#define PORT_DIRTGL_DIR10TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR10TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 10 Toggle Mask */
#define PORT_DIRTGL_DIR10TGL(value)           (PORT_DIRTGL_DIR10TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR10TGL_Pos)) /* Assignment of value for DIR10TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR11TGL_Pos              _UINT32_(11)                                         /* (PORT_DIRTGL) Port Data Direction 11 Toggle Position */
#define PORT_DIRTGL_DIR11TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR11TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 11 Toggle Mask */
#define PORT_DIRTGL_DIR11TGL(value)           (PORT_DIRTGL_DIR11TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR11TGL_Pos)) /* Assignment of value for DIR11TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR12TGL_Pos              _UINT32_(12)                                         /* (PORT_DIRTGL) Port Data Direction 12 Toggle Position */
#define PORT_DIRTGL_DIR12TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR12TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 12 Toggle Mask */
#define PORT_DIRTGL_DIR12TGL(value)           (PORT_DIRTGL_DIR12TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR12TGL_Pos)) /* Assignment of value for DIR12TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR13TGL_Pos              _UINT32_(13)                                         /* (PORT_DIRTGL) Port Data Direction 13 Toggle Position */
#define PORT_DIRTGL_DIR13TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR13TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 13 Toggle Mask */
#define PORT_DIRTGL_DIR13TGL(value)           (PORT_DIRTGL_DIR13TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR13TGL_Pos)) /* Assignment of value for DIR13TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR14TGL_Pos              _UINT32_(14)                                         /* (PORT_DIRTGL) Port Data Direction 14 Toggle Position */
#define PORT_DIRTGL_DIR14TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR14TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 14 Toggle Mask */
#define PORT_DIRTGL_DIR14TGL(value)           (PORT_DIRTGL_DIR14TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR14TGL_Pos)) /* Assignment of value for DIR14TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR15TGL_Pos              _UINT32_(15)                                         /* (PORT_DIRTGL) Port Data Direction 15 Toggle Position */
#define PORT_DIRTGL_DIR15TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR15TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 15 Toggle Mask */
#define PORT_DIRTGL_DIR15TGL(value)           (PORT_DIRTGL_DIR15TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR15TGL_Pos)) /* Assignment of value for DIR15TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR16TGL_Pos              _UINT32_(16)                                         /* (PORT_DIRTGL) Port Data Direction 16 Toggle Position */
#define PORT_DIRTGL_DIR16TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR16TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 16 Toggle Mask */
#define PORT_DIRTGL_DIR16TGL(value)           (PORT_DIRTGL_DIR16TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR16TGL_Pos)) /* Assignment of value for DIR16TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR17TGL_Pos              _UINT32_(17)                                         /* (PORT_DIRTGL) Port Data Direction 17 Toggle Position */
#define PORT_DIRTGL_DIR17TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR17TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 17 Toggle Mask */
#define PORT_DIRTGL_DIR17TGL(value)           (PORT_DIRTGL_DIR17TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR17TGL_Pos)) /* Assignment of value for DIR17TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR18TGL_Pos              _UINT32_(18)                                         /* (PORT_DIRTGL) Port Data Direction 18 Toggle Position */
#define PORT_DIRTGL_DIR18TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR18TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 18 Toggle Mask */
#define PORT_DIRTGL_DIR18TGL(value)           (PORT_DIRTGL_DIR18TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR18TGL_Pos)) /* Assignment of value for DIR18TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR19TGL_Pos              _UINT32_(19)                                         /* (PORT_DIRTGL) Port Data Direction 19 Toggle Position */
#define PORT_DIRTGL_DIR19TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR19TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 19 Toggle Mask */
#define PORT_DIRTGL_DIR19TGL(value)           (PORT_DIRTGL_DIR19TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR19TGL_Pos)) /* Assignment of value for DIR19TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR20TGL_Pos              _UINT32_(20)                                         /* (PORT_DIRTGL) Port Data Direction 20 Toggle Position */
#define PORT_DIRTGL_DIR20TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR20TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 20 Toggle Mask */
#define PORT_DIRTGL_DIR20TGL(value)           (PORT_DIRTGL_DIR20TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR20TGL_Pos)) /* Assignment of value for DIR20TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR21TGL_Pos              _UINT32_(21)                                         /* (PORT_DIRTGL) Port Data Direction 21 Toggle Position */
#define PORT_DIRTGL_DIR21TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR21TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 21 Toggle Mask */
#define PORT_DIRTGL_DIR21TGL(value)           (PORT_DIRTGL_DIR21TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR21TGL_Pos)) /* Assignment of value for DIR21TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR22TGL_Pos              _UINT32_(22)                                         /* (PORT_DIRTGL) Port Data Direction 22 Toggle Position */
#define PORT_DIRTGL_DIR22TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR22TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 22 Toggle Mask */
#define PORT_DIRTGL_DIR22TGL(value)           (PORT_DIRTGL_DIR22TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR22TGL_Pos)) /* Assignment of value for DIR22TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR23TGL_Pos              _UINT32_(23)                                         /* (PORT_DIRTGL) Port Data Direction 23 Toggle Position */
#define PORT_DIRTGL_DIR23TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR23TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 23 Toggle Mask */
#define PORT_DIRTGL_DIR23TGL(value)           (PORT_DIRTGL_DIR23TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR23TGL_Pos)) /* Assignment of value for DIR23TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR24TGL_Pos              _UINT32_(24)                                         /* (PORT_DIRTGL) Port Data Direction 24 Toggle Position */
#define PORT_DIRTGL_DIR24TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR24TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 24 Toggle Mask */
#define PORT_DIRTGL_DIR24TGL(value)           (PORT_DIRTGL_DIR24TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR24TGL_Pos)) /* Assignment of value for DIR24TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR25TGL_Pos              _UINT32_(25)                                         /* (PORT_DIRTGL) Port Data Direction 25 Toggle Position */
#define PORT_DIRTGL_DIR25TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR25TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 25 Toggle Mask */
#define PORT_DIRTGL_DIR25TGL(value)           (PORT_DIRTGL_DIR25TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR25TGL_Pos)) /* Assignment of value for DIR25TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR26TGL_Pos              _UINT32_(26)                                         /* (PORT_DIRTGL) Port Data Direction 26 Toggle Position */
#define PORT_DIRTGL_DIR26TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR26TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 26 Toggle Mask */
#define PORT_DIRTGL_DIR26TGL(value)           (PORT_DIRTGL_DIR26TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR26TGL_Pos)) /* Assignment of value for DIR26TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR27TGL_Pos              _UINT32_(27)                                         /* (PORT_DIRTGL) Port Data Direction 27 Toggle Position */
#define PORT_DIRTGL_DIR27TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR27TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 27 Toggle Mask */
#define PORT_DIRTGL_DIR27TGL(value)           (PORT_DIRTGL_DIR27TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR27TGL_Pos)) /* Assignment of value for DIR27TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR28TGL_Pos              _UINT32_(28)                                         /* (PORT_DIRTGL) Port Data Direction 28 Toggle Position */
#define PORT_DIRTGL_DIR28TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR28TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 28 Toggle Mask */
#define PORT_DIRTGL_DIR28TGL(value)           (PORT_DIRTGL_DIR28TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR28TGL_Pos)) /* Assignment of value for DIR28TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR29TGL_Pos              _UINT32_(29)                                         /* (PORT_DIRTGL) Port Data Direction 29 Toggle Position */
#define PORT_DIRTGL_DIR29TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR29TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 29 Toggle Mask */
#define PORT_DIRTGL_DIR29TGL(value)           (PORT_DIRTGL_DIR29TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR29TGL_Pos)) /* Assignment of value for DIR29TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR30TGL_Pos              _UINT32_(30)                                         /* (PORT_DIRTGL) Port Data Direction 30 Toggle Position */
#define PORT_DIRTGL_DIR30TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR30TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 30 Toggle Mask */
#define PORT_DIRTGL_DIR30TGL(value)           (PORT_DIRTGL_DIR30TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR30TGL_Pos)) /* Assignment of value for DIR30TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_DIR31TGL_Pos              _UINT32_(31)                                         /* (PORT_DIRTGL) Port Data Direction 31 Toggle Position */
#define PORT_DIRTGL_DIR31TGL_Msk              (_UINT32_(0x1) << PORT_DIRTGL_DIR31TGL_Pos)          /* (PORT_DIRTGL) Port Data Direction 31 Toggle Mask */
#define PORT_DIRTGL_DIR31TGL(value)           (PORT_DIRTGL_DIR31TGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIR31TGL_Pos)) /* Assignment of value for DIR31TGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIRTGL) Register Mask  */


/* -------- PORT_OUT : (PORT Offset: 0x10) (R/W 32) Data Output Value -------- */
#define PORT_OUT_RESETVALUE                   _UINT32_(0x00)                                       /*  (PORT_OUT) Data Output Value  Reset Value */

#define PORT_OUT_OUT0_Pos                     _UINT32_(0)                                          /* (PORT_OUT) PORT Data Output Value 0 Position */
#define PORT_OUT_OUT0_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT0_Pos)                 /* (PORT_OUT) PORT Data Output Value 0 Mask */
#define PORT_OUT_OUT0(value)                  (PORT_OUT_OUT0_Msk & (_UINT32_(value) << PORT_OUT_OUT0_Pos)) /* Assignment of value for OUT0 in the PORT_OUT register */
#define PORT_OUT_OUT1_Pos                     _UINT32_(1)                                          /* (PORT_OUT) PORT Data Output Value 1 Position */
#define PORT_OUT_OUT1_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT1_Pos)                 /* (PORT_OUT) PORT Data Output Value 1 Mask */
#define PORT_OUT_OUT1(value)                  (PORT_OUT_OUT1_Msk & (_UINT32_(value) << PORT_OUT_OUT1_Pos)) /* Assignment of value for OUT1 in the PORT_OUT register */
#define PORT_OUT_OUT2_Pos                     _UINT32_(2)                                          /* (PORT_OUT) PORT Data Output Value 2 Position */
#define PORT_OUT_OUT2_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT2_Pos)                 /* (PORT_OUT) PORT Data Output Value 2 Mask */
#define PORT_OUT_OUT2(value)                  (PORT_OUT_OUT2_Msk & (_UINT32_(value) << PORT_OUT_OUT2_Pos)) /* Assignment of value for OUT2 in the PORT_OUT register */
#define PORT_OUT_OUT3_Pos                     _UINT32_(3)                                          /* (PORT_OUT) PORT Data Output Value 3 Position */
#define PORT_OUT_OUT3_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT3_Pos)                 /* (PORT_OUT) PORT Data Output Value 3 Mask */
#define PORT_OUT_OUT3(value)                  (PORT_OUT_OUT3_Msk & (_UINT32_(value) << PORT_OUT_OUT3_Pos)) /* Assignment of value for OUT3 in the PORT_OUT register */
#define PORT_OUT_OUT4_Pos                     _UINT32_(4)                                          /* (PORT_OUT) PORT Data Output Value 4 Position */
#define PORT_OUT_OUT4_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT4_Pos)                 /* (PORT_OUT) PORT Data Output Value 4 Mask */
#define PORT_OUT_OUT4(value)                  (PORT_OUT_OUT4_Msk & (_UINT32_(value) << PORT_OUT_OUT4_Pos)) /* Assignment of value for OUT4 in the PORT_OUT register */
#define PORT_OUT_OUT5_Pos                     _UINT32_(5)                                          /* (PORT_OUT) PORT Data Output Value 5 Position */
#define PORT_OUT_OUT5_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT5_Pos)                 /* (PORT_OUT) PORT Data Output Value 5 Mask */
#define PORT_OUT_OUT5(value)                  (PORT_OUT_OUT5_Msk & (_UINT32_(value) << PORT_OUT_OUT5_Pos)) /* Assignment of value for OUT5 in the PORT_OUT register */
#define PORT_OUT_OUT6_Pos                     _UINT32_(6)                                          /* (PORT_OUT) PORT Data Output Value 6 Position */
#define PORT_OUT_OUT6_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT6_Pos)                 /* (PORT_OUT) PORT Data Output Value 6 Mask */
#define PORT_OUT_OUT6(value)                  (PORT_OUT_OUT6_Msk & (_UINT32_(value) << PORT_OUT_OUT6_Pos)) /* Assignment of value for OUT6 in the PORT_OUT register */
#define PORT_OUT_OUT7_Pos                     _UINT32_(7)                                          /* (PORT_OUT) PORT Data Output Value 7 Position */
#define PORT_OUT_OUT7_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT7_Pos)                 /* (PORT_OUT) PORT Data Output Value 7 Mask */
#define PORT_OUT_OUT7(value)                  (PORT_OUT_OUT7_Msk & (_UINT32_(value) << PORT_OUT_OUT7_Pos)) /* Assignment of value for OUT7 in the PORT_OUT register */
#define PORT_OUT_OUT8_Pos                     _UINT32_(8)                                          /* (PORT_OUT) PORT Data Output Value 8 Position */
#define PORT_OUT_OUT8_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT8_Pos)                 /* (PORT_OUT) PORT Data Output Value 8 Mask */
#define PORT_OUT_OUT8(value)                  (PORT_OUT_OUT8_Msk & (_UINT32_(value) << PORT_OUT_OUT8_Pos)) /* Assignment of value for OUT8 in the PORT_OUT register */
#define PORT_OUT_OUT9_Pos                     _UINT32_(9)                                          /* (PORT_OUT) PORT Data Output Value 9 Position */
#define PORT_OUT_OUT9_Msk                     (_UINT32_(0x1) << PORT_OUT_OUT9_Pos)                 /* (PORT_OUT) PORT Data Output Value 9 Mask */
#define PORT_OUT_OUT9(value)                  (PORT_OUT_OUT9_Msk & (_UINT32_(value) << PORT_OUT_OUT9_Pos)) /* Assignment of value for OUT9 in the PORT_OUT register */
#define PORT_OUT_OUT10_Pos                    _UINT32_(10)                                         /* (PORT_OUT) PORT Data Output Value 10 Position */
#define PORT_OUT_OUT10_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT10_Pos)                /* (PORT_OUT) PORT Data Output Value 10 Mask */
#define PORT_OUT_OUT10(value)                 (PORT_OUT_OUT10_Msk & (_UINT32_(value) << PORT_OUT_OUT10_Pos)) /* Assignment of value for OUT10 in the PORT_OUT register */
#define PORT_OUT_OUT11_Pos                    _UINT32_(11)                                         /* (PORT_OUT) PORT Data Output Value 11 Position */
#define PORT_OUT_OUT11_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT11_Pos)                /* (PORT_OUT) PORT Data Output Value 11 Mask */
#define PORT_OUT_OUT11(value)                 (PORT_OUT_OUT11_Msk & (_UINT32_(value) << PORT_OUT_OUT11_Pos)) /* Assignment of value for OUT11 in the PORT_OUT register */
#define PORT_OUT_OUT12_Pos                    _UINT32_(12)                                         /* (PORT_OUT) PORT Data Output Value 12 Position */
#define PORT_OUT_OUT12_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT12_Pos)                /* (PORT_OUT) PORT Data Output Value 12 Mask */
#define PORT_OUT_OUT12(value)                 (PORT_OUT_OUT12_Msk & (_UINT32_(value) << PORT_OUT_OUT12_Pos)) /* Assignment of value for OUT12 in the PORT_OUT register */
#define PORT_OUT_OUT13_Pos                    _UINT32_(13)                                         /* (PORT_OUT) PORT Data Output Value 13 Position */
#define PORT_OUT_OUT13_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT13_Pos)                /* (PORT_OUT) PORT Data Output Value 13 Mask */
#define PORT_OUT_OUT13(value)                 (PORT_OUT_OUT13_Msk & (_UINT32_(value) << PORT_OUT_OUT13_Pos)) /* Assignment of value for OUT13 in the PORT_OUT register */
#define PORT_OUT_OUT14_Pos                    _UINT32_(14)                                         /* (PORT_OUT) PORT Data Output Value 14 Position */
#define PORT_OUT_OUT14_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT14_Pos)                /* (PORT_OUT) PORT Data Output Value 14 Mask */
#define PORT_OUT_OUT14(value)                 (PORT_OUT_OUT14_Msk & (_UINT32_(value) << PORT_OUT_OUT14_Pos)) /* Assignment of value for OUT14 in the PORT_OUT register */
#define PORT_OUT_OUT15_Pos                    _UINT32_(15)                                         /* (PORT_OUT) PORT Data Output Value 15 Position */
#define PORT_OUT_OUT15_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT15_Pos)                /* (PORT_OUT) PORT Data Output Value 15 Mask */
#define PORT_OUT_OUT15(value)                 (PORT_OUT_OUT15_Msk & (_UINT32_(value) << PORT_OUT_OUT15_Pos)) /* Assignment of value for OUT15 in the PORT_OUT register */
#define PORT_OUT_OUT16_Pos                    _UINT32_(16)                                         /* (PORT_OUT) PORT Data Output Value 16 Position */
#define PORT_OUT_OUT16_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT16_Pos)                /* (PORT_OUT) PORT Data Output Value 16 Mask */
#define PORT_OUT_OUT16(value)                 (PORT_OUT_OUT16_Msk & (_UINT32_(value) << PORT_OUT_OUT16_Pos)) /* Assignment of value for OUT16 in the PORT_OUT register */
#define PORT_OUT_OUT17_Pos                    _UINT32_(17)                                         /* (PORT_OUT) PORT Data Output Value 17 Position */
#define PORT_OUT_OUT17_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT17_Pos)                /* (PORT_OUT) PORT Data Output Value 17 Mask */
#define PORT_OUT_OUT17(value)                 (PORT_OUT_OUT17_Msk & (_UINT32_(value) << PORT_OUT_OUT17_Pos)) /* Assignment of value for OUT17 in the PORT_OUT register */
#define PORT_OUT_OUT18_Pos                    _UINT32_(18)                                         /* (PORT_OUT) PORT Data Output Value 18 Position */
#define PORT_OUT_OUT18_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT18_Pos)                /* (PORT_OUT) PORT Data Output Value 18 Mask */
#define PORT_OUT_OUT18(value)                 (PORT_OUT_OUT18_Msk & (_UINT32_(value) << PORT_OUT_OUT18_Pos)) /* Assignment of value for OUT18 in the PORT_OUT register */
#define PORT_OUT_OUT19_Pos                    _UINT32_(19)                                         /* (PORT_OUT) PORT Data Output Value 19 Position */
#define PORT_OUT_OUT19_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT19_Pos)                /* (PORT_OUT) PORT Data Output Value 19 Mask */
#define PORT_OUT_OUT19(value)                 (PORT_OUT_OUT19_Msk & (_UINT32_(value) << PORT_OUT_OUT19_Pos)) /* Assignment of value for OUT19 in the PORT_OUT register */
#define PORT_OUT_OUT20_Pos                    _UINT32_(20)                                         /* (PORT_OUT) PORT Data Output Value 20 Position */
#define PORT_OUT_OUT20_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT20_Pos)                /* (PORT_OUT) PORT Data Output Value 20 Mask */
#define PORT_OUT_OUT20(value)                 (PORT_OUT_OUT20_Msk & (_UINT32_(value) << PORT_OUT_OUT20_Pos)) /* Assignment of value for OUT20 in the PORT_OUT register */
#define PORT_OUT_OUT21_Pos                    _UINT32_(21)                                         /* (PORT_OUT) PORT Data Output Value 21 Position */
#define PORT_OUT_OUT21_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT21_Pos)                /* (PORT_OUT) PORT Data Output Value 21 Mask */
#define PORT_OUT_OUT21(value)                 (PORT_OUT_OUT21_Msk & (_UINT32_(value) << PORT_OUT_OUT21_Pos)) /* Assignment of value for OUT21 in the PORT_OUT register */
#define PORT_OUT_OUT22_Pos                    _UINT32_(22)                                         /* (PORT_OUT) PORT Data Output Value 22 Position */
#define PORT_OUT_OUT22_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT22_Pos)                /* (PORT_OUT) PORT Data Output Value 22 Mask */
#define PORT_OUT_OUT22(value)                 (PORT_OUT_OUT22_Msk & (_UINT32_(value) << PORT_OUT_OUT22_Pos)) /* Assignment of value for OUT22 in the PORT_OUT register */
#define PORT_OUT_OUT23_Pos                    _UINT32_(23)                                         /* (PORT_OUT) PORT Data Output Value 23 Position */
#define PORT_OUT_OUT23_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT23_Pos)                /* (PORT_OUT) PORT Data Output Value 23 Mask */
#define PORT_OUT_OUT23(value)                 (PORT_OUT_OUT23_Msk & (_UINT32_(value) << PORT_OUT_OUT23_Pos)) /* Assignment of value for OUT23 in the PORT_OUT register */
#define PORT_OUT_OUT24_Pos                    _UINT32_(24)                                         /* (PORT_OUT) PORT Data Output Value 24 Position */
#define PORT_OUT_OUT24_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT24_Pos)                /* (PORT_OUT) PORT Data Output Value 24 Mask */
#define PORT_OUT_OUT24(value)                 (PORT_OUT_OUT24_Msk & (_UINT32_(value) << PORT_OUT_OUT24_Pos)) /* Assignment of value for OUT24 in the PORT_OUT register */
#define PORT_OUT_OUT25_Pos                    _UINT32_(25)                                         /* (PORT_OUT) PORT Data Output Value 25 Position */
#define PORT_OUT_OUT25_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT25_Pos)                /* (PORT_OUT) PORT Data Output Value 25 Mask */
#define PORT_OUT_OUT25(value)                 (PORT_OUT_OUT25_Msk & (_UINT32_(value) << PORT_OUT_OUT25_Pos)) /* Assignment of value for OUT25 in the PORT_OUT register */
#define PORT_OUT_OUT26_Pos                    _UINT32_(26)                                         /* (PORT_OUT) PORT Data Output Value 26 Position */
#define PORT_OUT_OUT26_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT26_Pos)                /* (PORT_OUT) PORT Data Output Value 26 Mask */
#define PORT_OUT_OUT26(value)                 (PORT_OUT_OUT26_Msk & (_UINT32_(value) << PORT_OUT_OUT26_Pos)) /* Assignment of value for OUT26 in the PORT_OUT register */
#define PORT_OUT_OUT27_Pos                    _UINT32_(27)                                         /* (PORT_OUT) PORT Data Output Value 27 Position */
#define PORT_OUT_OUT27_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT27_Pos)                /* (PORT_OUT) PORT Data Output Value 27 Mask */
#define PORT_OUT_OUT27(value)                 (PORT_OUT_OUT27_Msk & (_UINT32_(value) << PORT_OUT_OUT27_Pos)) /* Assignment of value for OUT27 in the PORT_OUT register */
#define PORT_OUT_OUT28_Pos                    _UINT32_(28)                                         /* (PORT_OUT) PORT Data Output Value 28 Position */
#define PORT_OUT_OUT28_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT28_Pos)                /* (PORT_OUT) PORT Data Output Value 28 Mask */
#define PORT_OUT_OUT28(value)                 (PORT_OUT_OUT28_Msk & (_UINT32_(value) << PORT_OUT_OUT28_Pos)) /* Assignment of value for OUT28 in the PORT_OUT register */
#define PORT_OUT_OUT29_Pos                    _UINT32_(29)                                         /* (PORT_OUT) PORT Data Output Value 29 Position */
#define PORT_OUT_OUT29_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT29_Pos)                /* (PORT_OUT) PORT Data Output Value 29 Mask */
#define PORT_OUT_OUT29(value)                 (PORT_OUT_OUT29_Msk & (_UINT32_(value) << PORT_OUT_OUT29_Pos)) /* Assignment of value for OUT29 in the PORT_OUT register */
#define PORT_OUT_OUT30_Pos                    _UINT32_(30)                                         /* (PORT_OUT) PORT Data Output Value 30 Position */
#define PORT_OUT_OUT30_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT30_Pos)                /* (PORT_OUT) PORT Data Output Value 30 Mask */
#define PORT_OUT_OUT30(value)                 (PORT_OUT_OUT30_Msk & (_UINT32_(value) << PORT_OUT_OUT30_Pos)) /* Assignment of value for OUT30 in the PORT_OUT register */
#define PORT_OUT_OUT31_Pos                    _UINT32_(31)                                         /* (PORT_OUT) PORT Data Output Value 31 Position */
#define PORT_OUT_OUT31_Msk                    (_UINT32_(0x1) << PORT_OUT_OUT31_Pos)                /* (PORT_OUT) PORT Data Output Value 31 Mask */
#define PORT_OUT_OUT31(value)                 (PORT_OUT_OUT31_Msk & (_UINT32_(value) << PORT_OUT_OUT31_Pos)) /* Assignment of value for OUT31 in the PORT_OUT register */
#define PORT_OUT_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUT) Register Mask  */

#define PORT_OUT_OUT_Pos                      _UINT32_(0)                                          /* (PORT_OUT Position) PORT Data Output Value 3x */
#define PORT_OUT_OUT_Msk                      (_UINT32_(0xFFFFFFFF) << PORT_OUT_OUT_Pos)           /* (PORT_OUT Mask) OUT */
#define PORT_OUT_OUT(value)                   (PORT_OUT_OUT_Msk & (_UINT32_(value) << PORT_OUT_OUT_Pos)) 

/* -------- PORT_OUTCLR : (PORT Offset: 0x14) (R/W 32) Data Output Value Clear -------- */
#define PORT_OUTCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_OUTCLR) Data Output Value Clear  Reset Value */

#define PORT_OUTCLR_OUT0CLR_Pos               _UINT32_(0)                                          /* (PORT_OUTCLR) PORT Data Output Value 0 Clear Position */
#define PORT_OUTCLR_OUT0CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT0CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 0 Clear Mask */
#define PORT_OUTCLR_OUT0CLR(value)            (PORT_OUTCLR_OUT0CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT0CLR_Pos)) /* Assignment of value for OUT0CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT1CLR_Pos               _UINT32_(1)                                          /* (PORT_OUTCLR) PORT Data Output Value 1 Clear Position */
#define PORT_OUTCLR_OUT1CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT1CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 1 Clear Mask */
#define PORT_OUTCLR_OUT1CLR(value)            (PORT_OUTCLR_OUT1CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT1CLR_Pos)) /* Assignment of value for OUT1CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT2CLR_Pos               _UINT32_(2)                                          /* (PORT_OUTCLR) PORT Data Output Value 2 Clear Position */
#define PORT_OUTCLR_OUT2CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT2CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 2 Clear Mask */
#define PORT_OUTCLR_OUT2CLR(value)            (PORT_OUTCLR_OUT2CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT2CLR_Pos)) /* Assignment of value for OUT2CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT3CLR_Pos               _UINT32_(3)                                          /* (PORT_OUTCLR) PORT Data Output Value 3 Clear Position */
#define PORT_OUTCLR_OUT3CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT3CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 3 Clear Mask */
#define PORT_OUTCLR_OUT3CLR(value)            (PORT_OUTCLR_OUT3CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT3CLR_Pos)) /* Assignment of value for OUT3CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT4CLR_Pos               _UINT32_(4)                                          /* (PORT_OUTCLR) PORT Data Output Value 4 Clear Position */
#define PORT_OUTCLR_OUT4CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT4CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 4 Clear Mask */
#define PORT_OUTCLR_OUT4CLR(value)            (PORT_OUTCLR_OUT4CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT4CLR_Pos)) /* Assignment of value for OUT4CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT5CLR_Pos               _UINT32_(5)                                          /* (PORT_OUTCLR) PORT Data Output Value 5 Clear Position */
#define PORT_OUTCLR_OUT5CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT5CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 5 Clear Mask */
#define PORT_OUTCLR_OUT5CLR(value)            (PORT_OUTCLR_OUT5CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT5CLR_Pos)) /* Assignment of value for OUT5CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT6CLR_Pos               _UINT32_(6)                                          /* (PORT_OUTCLR) PORT Data Output Value 6 Clear Position */
#define PORT_OUTCLR_OUT6CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT6CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 6 Clear Mask */
#define PORT_OUTCLR_OUT6CLR(value)            (PORT_OUTCLR_OUT6CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT6CLR_Pos)) /* Assignment of value for OUT6CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT7CLR_Pos               _UINT32_(7)                                          /* (PORT_OUTCLR) PORT Data Output Value 7 Clear Position */
#define PORT_OUTCLR_OUT7CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT7CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 7 Clear Mask */
#define PORT_OUTCLR_OUT7CLR(value)            (PORT_OUTCLR_OUT7CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT7CLR_Pos)) /* Assignment of value for OUT7CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT8CLR_Pos               _UINT32_(8)                                          /* (PORT_OUTCLR) PORT Data Output Value 8 Clear Position */
#define PORT_OUTCLR_OUT8CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT8CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 8 Clear Mask */
#define PORT_OUTCLR_OUT8CLR(value)            (PORT_OUTCLR_OUT8CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT8CLR_Pos)) /* Assignment of value for OUT8CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT9CLR_Pos               _UINT32_(9)                                          /* (PORT_OUTCLR) PORT Data Output Value 9 Clear Position */
#define PORT_OUTCLR_OUT9CLR_Msk               (_UINT32_(0x1) << PORT_OUTCLR_OUT9CLR_Pos)           /* (PORT_OUTCLR) PORT Data Output Value 9 Clear Mask */
#define PORT_OUTCLR_OUT9CLR(value)            (PORT_OUTCLR_OUT9CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT9CLR_Pos)) /* Assignment of value for OUT9CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT10CLR_Pos              _UINT32_(10)                                         /* (PORT_OUTCLR) PORT Data Output Value 10 Clear Position */
#define PORT_OUTCLR_OUT10CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT10CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 10 Clear Mask */
#define PORT_OUTCLR_OUT10CLR(value)           (PORT_OUTCLR_OUT10CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT10CLR_Pos)) /* Assignment of value for OUT10CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT11CLR_Pos              _UINT32_(11)                                         /* (PORT_OUTCLR) PORT Data Output Value 11 Clear Position */
#define PORT_OUTCLR_OUT11CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT11CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 11 Clear Mask */
#define PORT_OUTCLR_OUT11CLR(value)           (PORT_OUTCLR_OUT11CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT11CLR_Pos)) /* Assignment of value for OUT11CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT12CLR_Pos              _UINT32_(12)                                         /* (PORT_OUTCLR) PORT Data Output Value 12 Clear Position */
#define PORT_OUTCLR_OUT12CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT12CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 12 Clear Mask */
#define PORT_OUTCLR_OUT12CLR(value)           (PORT_OUTCLR_OUT12CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT12CLR_Pos)) /* Assignment of value for OUT12CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT13CLR_Pos              _UINT32_(13)                                         /* (PORT_OUTCLR) PORT Data Output Value 13 Clear Position */
#define PORT_OUTCLR_OUT13CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT13CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 13 Clear Mask */
#define PORT_OUTCLR_OUT13CLR(value)           (PORT_OUTCLR_OUT13CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT13CLR_Pos)) /* Assignment of value for OUT13CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT14CLR_Pos              _UINT32_(14)                                         /* (PORT_OUTCLR) PORT Data Output Value 14 Clear Position */
#define PORT_OUTCLR_OUT14CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT14CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 14 Clear Mask */
#define PORT_OUTCLR_OUT14CLR(value)           (PORT_OUTCLR_OUT14CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT14CLR_Pos)) /* Assignment of value for OUT14CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT15CLR_Pos              _UINT32_(15)                                         /* (PORT_OUTCLR) PORT Data Output Value 15 Clear Position */
#define PORT_OUTCLR_OUT15CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT15CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 15 Clear Mask */
#define PORT_OUTCLR_OUT15CLR(value)           (PORT_OUTCLR_OUT15CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT15CLR_Pos)) /* Assignment of value for OUT15CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT16CLR_Pos              _UINT32_(16)                                         /* (PORT_OUTCLR) PORT Data Output Value 16 Clear Position */
#define PORT_OUTCLR_OUT16CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT16CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 16 Clear Mask */
#define PORT_OUTCLR_OUT16CLR(value)           (PORT_OUTCLR_OUT16CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT16CLR_Pos)) /* Assignment of value for OUT16CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT17CLR_Pos              _UINT32_(17)                                         /* (PORT_OUTCLR) PORT Data Output Value 17 Clear Position */
#define PORT_OUTCLR_OUT17CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT17CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 17 Clear Mask */
#define PORT_OUTCLR_OUT17CLR(value)           (PORT_OUTCLR_OUT17CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT17CLR_Pos)) /* Assignment of value for OUT17CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT18CLR_Pos              _UINT32_(18)                                         /* (PORT_OUTCLR) PORT Data Output Value 18 Clear Position */
#define PORT_OUTCLR_OUT18CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT18CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 18 Clear Mask */
#define PORT_OUTCLR_OUT18CLR(value)           (PORT_OUTCLR_OUT18CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT18CLR_Pos)) /* Assignment of value for OUT18CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT19CLR_Pos              _UINT32_(19)                                         /* (PORT_OUTCLR) PORT Data Output Value 19 Clear Position */
#define PORT_OUTCLR_OUT19CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT19CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 19 Clear Mask */
#define PORT_OUTCLR_OUT19CLR(value)           (PORT_OUTCLR_OUT19CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT19CLR_Pos)) /* Assignment of value for OUT19CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT20CLR_Pos              _UINT32_(20)                                         /* (PORT_OUTCLR) PORT Data Output Value 20 Clear Position */
#define PORT_OUTCLR_OUT20CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT20CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 20 Clear Mask */
#define PORT_OUTCLR_OUT20CLR(value)           (PORT_OUTCLR_OUT20CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT20CLR_Pos)) /* Assignment of value for OUT20CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT21CLR_Pos              _UINT32_(21)                                         /* (PORT_OUTCLR) PORT Data Output Value 21 Clear Position */
#define PORT_OUTCLR_OUT21CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT21CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 21 Clear Mask */
#define PORT_OUTCLR_OUT21CLR(value)           (PORT_OUTCLR_OUT21CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT21CLR_Pos)) /* Assignment of value for OUT21CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT22CLR_Pos              _UINT32_(22)                                         /* (PORT_OUTCLR) PORT Data Output Value 22 Clear Position */
#define PORT_OUTCLR_OUT22CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT22CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 22 Clear Mask */
#define PORT_OUTCLR_OUT22CLR(value)           (PORT_OUTCLR_OUT22CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT22CLR_Pos)) /* Assignment of value for OUT22CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT23CLR_Pos              _UINT32_(23)                                         /* (PORT_OUTCLR) PORT Data Output Value 23 Clear Position */
#define PORT_OUTCLR_OUT23CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT23CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 23 Clear Mask */
#define PORT_OUTCLR_OUT23CLR(value)           (PORT_OUTCLR_OUT23CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT23CLR_Pos)) /* Assignment of value for OUT23CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT24CLR_Pos              _UINT32_(24)                                         /* (PORT_OUTCLR) PORT Data Output Value 24 Clear Position */
#define PORT_OUTCLR_OUT24CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT24CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 24 Clear Mask */
#define PORT_OUTCLR_OUT24CLR(value)           (PORT_OUTCLR_OUT24CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT24CLR_Pos)) /* Assignment of value for OUT24CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT25CLR_Pos              _UINT32_(25)                                         /* (PORT_OUTCLR) PORT Data Output Value 25 Clear Position */
#define PORT_OUTCLR_OUT25CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT25CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 25 Clear Mask */
#define PORT_OUTCLR_OUT25CLR(value)           (PORT_OUTCLR_OUT25CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT25CLR_Pos)) /* Assignment of value for OUT25CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT26CLR_Pos              _UINT32_(26)                                         /* (PORT_OUTCLR) PORT Data Output Value 26 Clear Position */
#define PORT_OUTCLR_OUT26CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT26CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 26 Clear Mask */
#define PORT_OUTCLR_OUT26CLR(value)           (PORT_OUTCLR_OUT26CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT26CLR_Pos)) /* Assignment of value for OUT26CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT27CLR_Pos              _UINT32_(27)                                         /* (PORT_OUTCLR) PORT Data Output Value 27 Clear Position */
#define PORT_OUTCLR_OUT27CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT27CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 27 Clear Mask */
#define PORT_OUTCLR_OUT27CLR(value)           (PORT_OUTCLR_OUT27CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT27CLR_Pos)) /* Assignment of value for OUT27CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT28CLR_Pos              _UINT32_(28)                                         /* (PORT_OUTCLR) PORT Data Output Value 28 Clear Position */
#define PORT_OUTCLR_OUT28CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT28CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 28 Clear Mask */
#define PORT_OUTCLR_OUT28CLR(value)           (PORT_OUTCLR_OUT28CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT28CLR_Pos)) /* Assignment of value for OUT28CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT29CLR_Pos              _UINT32_(29)                                         /* (PORT_OUTCLR) PORT Data Output Value 29 Clear Position */
#define PORT_OUTCLR_OUT29CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT29CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 29 Clear Mask */
#define PORT_OUTCLR_OUT29CLR(value)           (PORT_OUTCLR_OUT29CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT29CLR_Pos)) /* Assignment of value for OUT29CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT30CLR_Pos              _UINT32_(30)                                         /* (PORT_OUTCLR) PORT Data Output Value 30 Clear Position */
#define PORT_OUTCLR_OUT30CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT30CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 30 Clear Mask */
#define PORT_OUTCLR_OUT30CLR(value)           (PORT_OUTCLR_OUT30CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT30CLR_Pos)) /* Assignment of value for OUT30CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_OUT31CLR_Pos              _UINT32_(31)                                         /* (PORT_OUTCLR) PORT Data Output Value 31 Clear Position */
#define PORT_OUTCLR_OUT31CLR_Msk              (_UINT32_(0x1) << PORT_OUTCLR_OUT31CLR_Pos)          /* (PORT_OUTCLR) PORT Data Output Value 31 Clear Mask */
#define PORT_OUTCLR_OUT31CLR(value)           (PORT_OUTCLR_OUT31CLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUT31CLR_Pos)) /* Assignment of value for OUT31CLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUTCLR) Register Mask  */


/* -------- PORT_OUTSET : (PORT Offset: 0x18) (R/W 32) Data Output Value Set -------- */
#define PORT_OUTSET_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_OUTSET) Data Output Value Set  Reset Value */

#define PORT_OUTSET_OUT0SET_Pos               _UINT32_(0)                                          /* (PORT_OUTSET) PORT Data Output Value 0 Set Position */
#define PORT_OUTSET_OUT0SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT0SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 0 Set Mask */
#define PORT_OUTSET_OUT0SET(value)            (PORT_OUTSET_OUT0SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT0SET_Pos)) /* Assignment of value for OUT0SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT1SET_Pos               _UINT32_(1)                                          /* (PORT_OUTSET) PORT Data Output Value 1 Set Position */
#define PORT_OUTSET_OUT1SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT1SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 1 Set Mask */
#define PORT_OUTSET_OUT1SET(value)            (PORT_OUTSET_OUT1SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT1SET_Pos)) /* Assignment of value for OUT1SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT2SET_Pos               _UINT32_(2)                                          /* (PORT_OUTSET) PORT Data Output Value 2 Set Position */
#define PORT_OUTSET_OUT2SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT2SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 2 Set Mask */
#define PORT_OUTSET_OUT2SET(value)            (PORT_OUTSET_OUT2SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT2SET_Pos)) /* Assignment of value for OUT2SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT3SET_Pos               _UINT32_(3)                                          /* (PORT_OUTSET) PORT Data Output Value 3 Set Position */
#define PORT_OUTSET_OUT3SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT3SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 3 Set Mask */
#define PORT_OUTSET_OUT3SET(value)            (PORT_OUTSET_OUT3SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT3SET_Pos)) /* Assignment of value for OUT3SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT4SET_Pos               _UINT32_(4)                                          /* (PORT_OUTSET) PORT Data Output Value 4 Set Position */
#define PORT_OUTSET_OUT4SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT4SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 4 Set Mask */
#define PORT_OUTSET_OUT4SET(value)            (PORT_OUTSET_OUT4SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT4SET_Pos)) /* Assignment of value for OUT4SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT5SET_Pos               _UINT32_(5)                                          /* (PORT_OUTSET) PORT Data Output Value 5 Set Position */
#define PORT_OUTSET_OUT5SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT5SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 5 Set Mask */
#define PORT_OUTSET_OUT5SET(value)            (PORT_OUTSET_OUT5SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT5SET_Pos)) /* Assignment of value for OUT5SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT6SET_Pos               _UINT32_(6)                                          /* (PORT_OUTSET) PORT Data Output Value 6 Set Position */
#define PORT_OUTSET_OUT6SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT6SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 6 Set Mask */
#define PORT_OUTSET_OUT6SET(value)            (PORT_OUTSET_OUT6SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT6SET_Pos)) /* Assignment of value for OUT6SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT7SET_Pos               _UINT32_(7)                                          /* (PORT_OUTSET) PORT Data Output Value 7 Set Position */
#define PORT_OUTSET_OUT7SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT7SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 7 Set Mask */
#define PORT_OUTSET_OUT7SET(value)            (PORT_OUTSET_OUT7SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT7SET_Pos)) /* Assignment of value for OUT7SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT8SET_Pos               _UINT32_(8)                                          /* (PORT_OUTSET) PORT Data Output Value 8 Set Position */
#define PORT_OUTSET_OUT8SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT8SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 8 Set Mask */
#define PORT_OUTSET_OUT8SET(value)            (PORT_OUTSET_OUT8SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT8SET_Pos)) /* Assignment of value for OUT8SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT9SET_Pos               _UINT32_(9)                                          /* (PORT_OUTSET) PORT Data Output Value 9 Set Position */
#define PORT_OUTSET_OUT9SET_Msk               (_UINT32_(0x1) << PORT_OUTSET_OUT9SET_Pos)           /* (PORT_OUTSET) PORT Data Output Value 9 Set Mask */
#define PORT_OUTSET_OUT9SET(value)            (PORT_OUTSET_OUT9SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT9SET_Pos)) /* Assignment of value for OUT9SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT10SET_Pos              _UINT32_(10)                                         /* (PORT_OUTSET) PORT Data Output Value 10 Set Position */
#define PORT_OUTSET_OUT10SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT10SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 10 Set Mask */
#define PORT_OUTSET_OUT10SET(value)           (PORT_OUTSET_OUT10SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT10SET_Pos)) /* Assignment of value for OUT10SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT11SET_Pos              _UINT32_(11)                                         /* (PORT_OUTSET) PORT Data Output Value 11 Set Position */
#define PORT_OUTSET_OUT11SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT11SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 11 Set Mask */
#define PORT_OUTSET_OUT11SET(value)           (PORT_OUTSET_OUT11SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT11SET_Pos)) /* Assignment of value for OUT11SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT12SET_Pos              _UINT32_(12)                                         /* (PORT_OUTSET) PORT Data Output Value 12 Set Position */
#define PORT_OUTSET_OUT12SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT12SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 12 Set Mask */
#define PORT_OUTSET_OUT12SET(value)           (PORT_OUTSET_OUT12SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT12SET_Pos)) /* Assignment of value for OUT12SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT13SET_Pos              _UINT32_(13)                                         /* (PORT_OUTSET) PORT Data Output Value 13 Set Position */
#define PORT_OUTSET_OUT13SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT13SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 13 Set Mask */
#define PORT_OUTSET_OUT13SET(value)           (PORT_OUTSET_OUT13SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT13SET_Pos)) /* Assignment of value for OUT13SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT14SET_Pos              _UINT32_(14)                                         /* (PORT_OUTSET) PORT Data Output Value 14 Set Position */
#define PORT_OUTSET_OUT14SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT14SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 14 Set Mask */
#define PORT_OUTSET_OUT14SET(value)           (PORT_OUTSET_OUT14SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT14SET_Pos)) /* Assignment of value for OUT14SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT15SET_Pos              _UINT32_(15)                                         /* (PORT_OUTSET) PORT Data Output Value 15 Set Position */
#define PORT_OUTSET_OUT15SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT15SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 15 Set Mask */
#define PORT_OUTSET_OUT15SET(value)           (PORT_OUTSET_OUT15SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT15SET_Pos)) /* Assignment of value for OUT15SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT16SET_Pos              _UINT32_(16)                                         /* (PORT_OUTSET) PORT Data Output Value 16 Set Position */
#define PORT_OUTSET_OUT16SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT16SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 16 Set Mask */
#define PORT_OUTSET_OUT16SET(value)           (PORT_OUTSET_OUT16SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT16SET_Pos)) /* Assignment of value for OUT16SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT17SET_Pos              _UINT32_(17)                                         /* (PORT_OUTSET) PORT Data Output Value 17 Set Position */
#define PORT_OUTSET_OUT17SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT17SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 17 Set Mask */
#define PORT_OUTSET_OUT17SET(value)           (PORT_OUTSET_OUT17SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT17SET_Pos)) /* Assignment of value for OUT17SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT18SET_Pos              _UINT32_(18)                                         /* (PORT_OUTSET) PORT Data Output Value 18 Set Position */
#define PORT_OUTSET_OUT18SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT18SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 18 Set Mask */
#define PORT_OUTSET_OUT18SET(value)           (PORT_OUTSET_OUT18SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT18SET_Pos)) /* Assignment of value for OUT18SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT19SET_Pos              _UINT32_(19)                                         /* (PORT_OUTSET) PORT Data Output Value 19 Set Position */
#define PORT_OUTSET_OUT19SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT19SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 19 Set Mask */
#define PORT_OUTSET_OUT19SET(value)           (PORT_OUTSET_OUT19SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT19SET_Pos)) /* Assignment of value for OUT19SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT20SET_Pos              _UINT32_(20)                                         /* (PORT_OUTSET) PORT Data Output Value 20 Set Position */
#define PORT_OUTSET_OUT20SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT20SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 20 Set Mask */
#define PORT_OUTSET_OUT20SET(value)           (PORT_OUTSET_OUT20SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT20SET_Pos)) /* Assignment of value for OUT20SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT21SET_Pos              _UINT32_(21)                                         /* (PORT_OUTSET) PORT Data Output Value 21 Set Position */
#define PORT_OUTSET_OUT21SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT21SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 21 Set Mask */
#define PORT_OUTSET_OUT21SET(value)           (PORT_OUTSET_OUT21SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT21SET_Pos)) /* Assignment of value for OUT21SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT22SET_Pos              _UINT32_(22)                                         /* (PORT_OUTSET) PORT Data Output Value 22 Set Position */
#define PORT_OUTSET_OUT22SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT22SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 22 Set Mask */
#define PORT_OUTSET_OUT22SET(value)           (PORT_OUTSET_OUT22SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT22SET_Pos)) /* Assignment of value for OUT22SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT23SET_Pos              _UINT32_(23)                                         /* (PORT_OUTSET) PORT Data Output Value 23 Set Position */
#define PORT_OUTSET_OUT23SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT23SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 23 Set Mask */
#define PORT_OUTSET_OUT23SET(value)           (PORT_OUTSET_OUT23SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT23SET_Pos)) /* Assignment of value for OUT23SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT24SET_Pos              _UINT32_(24)                                         /* (PORT_OUTSET) PORT Data Output Value 24 Set Position */
#define PORT_OUTSET_OUT24SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT24SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 24 Set Mask */
#define PORT_OUTSET_OUT24SET(value)           (PORT_OUTSET_OUT24SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT24SET_Pos)) /* Assignment of value for OUT24SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT25SET_Pos              _UINT32_(25)                                         /* (PORT_OUTSET) PORT Data Output Value 25 Set Position */
#define PORT_OUTSET_OUT25SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT25SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 25 Set Mask */
#define PORT_OUTSET_OUT25SET(value)           (PORT_OUTSET_OUT25SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT25SET_Pos)) /* Assignment of value for OUT25SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT26SET_Pos              _UINT32_(26)                                         /* (PORT_OUTSET) PORT Data Output Value 26 Set Position */
#define PORT_OUTSET_OUT26SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT26SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 26 Set Mask */
#define PORT_OUTSET_OUT26SET(value)           (PORT_OUTSET_OUT26SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT26SET_Pos)) /* Assignment of value for OUT26SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT27SET_Pos              _UINT32_(27)                                         /* (PORT_OUTSET) PORT Data Output Value 27 Set Position */
#define PORT_OUTSET_OUT27SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT27SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 27 Set Mask */
#define PORT_OUTSET_OUT27SET(value)           (PORT_OUTSET_OUT27SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT27SET_Pos)) /* Assignment of value for OUT27SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT28SET_Pos              _UINT32_(28)                                         /* (PORT_OUTSET) PORT Data Output Value 28 Set Position */
#define PORT_OUTSET_OUT28SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT28SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 28 Set Mask */
#define PORT_OUTSET_OUT28SET(value)           (PORT_OUTSET_OUT28SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT28SET_Pos)) /* Assignment of value for OUT28SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT29SET_Pos              _UINT32_(29)                                         /* (PORT_OUTSET) PORT Data Output Value 29 Set Position */
#define PORT_OUTSET_OUT29SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT29SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 29 Set Mask */
#define PORT_OUTSET_OUT29SET(value)           (PORT_OUTSET_OUT29SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT29SET_Pos)) /* Assignment of value for OUT29SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT30SET_Pos              _UINT32_(30)                                         /* (PORT_OUTSET) PORT Data Output Value 30 Set Position */
#define PORT_OUTSET_OUT30SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT30SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 30 Set Mask */
#define PORT_OUTSET_OUT30SET(value)           (PORT_OUTSET_OUT30SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT30SET_Pos)) /* Assignment of value for OUT30SET in the PORT_OUTSET register */
#define PORT_OUTSET_OUT31SET_Pos              _UINT32_(31)                                         /* (PORT_OUTSET) PORT Data Output Value 31 Set Position */
#define PORT_OUTSET_OUT31SET_Msk              (_UINT32_(0x1) << PORT_OUTSET_OUT31SET_Pos)          /* (PORT_OUTSET) PORT Data Output Value 31 Set Mask */
#define PORT_OUTSET_OUT31SET(value)           (PORT_OUTSET_OUT31SET_Msk & (_UINT32_(value) << PORT_OUTSET_OUT31SET_Pos)) /* Assignment of value for OUT31SET in the PORT_OUTSET register */
#define PORT_OUTSET_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUTSET) Register Mask  */


/* -------- PORT_OUTTGL : (PORT Offset: 0x1C) (R/W 32) Data Output Value Toggle -------- */
#define PORT_OUTTGL_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_OUTTGL) Data Output Value Toggle  Reset Value */

#define PORT_OUTTGL_OUT0TGL_Pos               _UINT32_(0)                                          /* (PORT_OUTTGL) PORT Data Output Value 0 Toggle Position */
#define PORT_OUTTGL_OUT0TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT0TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 0 Toggle Mask */
#define PORT_OUTTGL_OUT0TGL(value)            (PORT_OUTTGL_OUT0TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT0TGL_Pos)) /* Assignment of value for OUT0TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT1TGL_Pos               _UINT32_(1)                                          /* (PORT_OUTTGL) PORT Data Output Value 1 Toggle Position */
#define PORT_OUTTGL_OUT1TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT1TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 1 Toggle Mask */
#define PORT_OUTTGL_OUT1TGL(value)            (PORT_OUTTGL_OUT1TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT1TGL_Pos)) /* Assignment of value for OUT1TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT2TGL_Pos               _UINT32_(2)                                          /* (PORT_OUTTGL) PORT Data Output Value 2 Toggle Position */
#define PORT_OUTTGL_OUT2TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT2TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 2 Toggle Mask */
#define PORT_OUTTGL_OUT2TGL(value)            (PORT_OUTTGL_OUT2TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT2TGL_Pos)) /* Assignment of value for OUT2TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT3TGL_Pos               _UINT32_(3)                                          /* (PORT_OUTTGL) PORT Data Output Value 3 Toggle Position */
#define PORT_OUTTGL_OUT3TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT3TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 3 Toggle Mask */
#define PORT_OUTTGL_OUT3TGL(value)            (PORT_OUTTGL_OUT3TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT3TGL_Pos)) /* Assignment of value for OUT3TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT4TGL_Pos               _UINT32_(4)                                          /* (PORT_OUTTGL) PORT Data Output Value 4 Toggle Position */
#define PORT_OUTTGL_OUT4TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT4TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 4 Toggle Mask */
#define PORT_OUTTGL_OUT4TGL(value)            (PORT_OUTTGL_OUT4TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT4TGL_Pos)) /* Assignment of value for OUT4TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT5TGL_Pos               _UINT32_(5)                                          /* (PORT_OUTTGL) PORT Data Output Value 5 Toggle Position */
#define PORT_OUTTGL_OUT5TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT5TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 5 Toggle Mask */
#define PORT_OUTTGL_OUT5TGL(value)            (PORT_OUTTGL_OUT5TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT5TGL_Pos)) /* Assignment of value for OUT5TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT6TGL_Pos               _UINT32_(6)                                          /* (PORT_OUTTGL) PORT Data Output Value 6 Toggle Position */
#define PORT_OUTTGL_OUT6TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT6TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 6 Toggle Mask */
#define PORT_OUTTGL_OUT6TGL(value)            (PORT_OUTTGL_OUT6TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT6TGL_Pos)) /* Assignment of value for OUT6TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT7TGL_Pos               _UINT32_(7)                                          /* (PORT_OUTTGL) PORT Data Output Value 7 Toggle Position */
#define PORT_OUTTGL_OUT7TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT7TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 7 Toggle Mask */
#define PORT_OUTTGL_OUT7TGL(value)            (PORT_OUTTGL_OUT7TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT7TGL_Pos)) /* Assignment of value for OUT7TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT8TGL_Pos               _UINT32_(8)                                          /* (PORT_OUTTGL) PORT Data Output Value 8 Toggle Position */
#define PORT_OUTTGL_OUT8TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT8TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 8 Toggle Mask */
#define PORT_OUTTGL_OUT8TGL(value)            (PORT_OUTTGL_OUT8TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT8TGL_Pos)) /* Assignment of value for OUT8TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT9TGL_Pos               _UINT32_(9)                                          /* (PORT_OUTTGL) PORT Data Output Value 9 Toggle Position */
#define PORT_OUTTGL_OUT9TGL_Msk               (_UINT32_(0x1) << PORT_OUTTGL_OUT9TGL_Pos)           /* (PORT_OUTTGL) PORT Data Output Value 9 Toggle Mask */
#define PORT_OUTTGL_OUT9TGL(value)            (PORT_OUTTGL_OUT9TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT9TGL_Pos)) /* Assignment of value for OUT9TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT10TGL_Pos              _UINT32_(10)                                         /* (PORT_OUTTGL) PORT Data Output Value 10 Toggle Position */
#define PORT_OUTTGL_OUT10TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT10TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 10 Toggle Mask */
#define PORT_OUTTGL_OUT10TGL(value)           (PORT_OUTTGL_OUT10TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT10TGL_Pos)) /* Assignment of value for OUT10TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT11TGL_Pos              _UINT32_(11)                                         /* (PORT_OUTTGL) PORT Data Output Value 11 Toggle Position */
#define PORT_OUTTGL_OUT11TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT11TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 11 Toggle Mask */
#define PORT_OUTTGL_OUT11TGL(value)           (PORT_OUTTGL_OUT11TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT11TGL_Pos)) /* Assignment of value for OUT11TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT12TGL_Pos              _UINT32_(12)                                         /* (PORT_OUTTGL) PORT Data Output Value 12 Toggle Position */
#define PORT_OUTTGL_OUT12TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT12TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 12 Toggle Mask */
#define PORT_OUTTGL_OUT12TGL(value)           (PORT_OUTTGL_OUT12TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT12TGL_Pos)) /* Assignment of value for OUT12TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT13TGL_Pos              _UINT32_(13)                                         /* (PORT_OUTTGL) PORT Data Output Value 13 Toggle Position */
#define PORT_OUTTGL_OUT13TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT13TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 13 Toggle Mask */
#define PORT_OUTTGL_OUT13TGL(value)           (PORT_OUTTGL_OUT13TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT13TGL_Pos)) /* Assignment of value for OUT13TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT14TGL_Pos              _UINT32_(14)                                         /* (PORT_OUTTGL) PORT Data Output Value 14 Toggle Position */
#define PORT_OUTTGL_OUT14TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT14TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 14 Toggle Mask */
#define PORT_OUTTGL_OUT14TGL(value)           (PORT_OUTTGL_OUT14TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT14TGL_Pos)) /* Assignment of value for OUT14TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT15TGL_Pos              _UINT32_(15)                                         /* (PORT_OUTTGL) PORT Data Output Value 15 Toggle Position */
#define PORT_OUTTGL_OUT15TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT15TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 15 Toggle Mask */
#define PORT_OUTTGL_OUT15TGL(value)           (PORT_OUTTGL_OUT15TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT15TGL_Pos)) /* Assignment of value for OUT15TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT16TGL_Pos              _UINT32_(16)                                         /* (PORT_OUTTGL) PORT Data Output Value 16 Toggle Position */
#define PORT_OUTTGL_OUT16TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT16TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 16 Toggle Mask */
#define PORT_OUTTGL_OUT16TGL(value)           (PORT_OUTTGL_OUT16TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT16TGL_Pos)) /* Assignment of value for OUT16TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT17TGL_Pos              _UINT32_(17)                                         /* (PORT_OUTTGL) PORT Data Output Value 17 Toggle Position */
#define PORT_OUTTGL_OUT17TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT17TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 17 Toggle Mask */
#define PORT_OUTTGL_OUT17TGL(value)           (PORT_OUTTGL_OUT17TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT17TGL_Pos)) /* Assignment of value for OUT17TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT18TGL_Pos              _UINT32_(18)                                         /* (PORT_OUTTGL) PORT Data Output Value 18 Toggle Position */
#define PORT_OUTTGL_OUT18TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT18TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 18 Toggle Mask */
#define PORT_OUTTGL_OUT18TGL(value)           (PORT_OUTTGL_OUT18TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT18TGL_Pos)) /* Assignment of value for OUT18TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT19TGL_Pos              _UINT32_(19)                                         /* (PORT_OUTTGL) PORT Data Output Value 19 Toggle Position */
#define PORT_OUTTGL_OUT19TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT19TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 19 Toggle Mask */
#define PORT_OUTTGL_OUT19TGL(value)           (PORT_OUTTGL_OUT19TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT19TGL_Pos)) /* Assignment of value for OUT19TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT20TGL_Pos              _UINT32_(20)                                         /* (PORT_OUTTGL) PORT Data Output Value 20 Toggle Position */
#define PORT_OUTTGL_OUT20TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT20TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 20 Toggle Mask */
#define PORT_OUTTGL_OUT20TGL(value)           (PORT_OUTTGL_OUT20TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT20TGL_Pos)) /* Assignment of value for OUT20TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT21TGL_Pos              _UINT32_(21)                                         /* (PORT_OUTTGL) PORT Data Output Value 21 Toggle Position */
#define PORT_OUTTGL_OUT21TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT21TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 21 Toggle Mask */
#define PORT_OUTTGL_OUT21TGL(value)           (PORT_OUTTGL_OUT21TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT21TGL_Pos)) /* Assignment of value for OUT21TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT22TGL_Pos              _UINT32_(22)                                         /* (PORT_OUTTGL) PORT Data Output Value 22 Toggle Position */
#define PORT_OUTTGL_OUT22TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT22TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 22 Toggle Mask */
#define PORT_OUTTGL_OUT22TGL(value)           (PORT_OUTTGL_OUT22TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT22TGL_Pos)) /* Assignment of value for OUT22TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT23TGL_Pos              _UINT32_(23)                                         /* (PORT_OUTTGL) PORT Data Output Value 23 Toggle Position */
#define PORT_OUTTGL_OUT23TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT23TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 23 Toggle Mask */
#define PORT_OUTTGL_OUT23TGL(value)           (PORT_OUTTGL_OUT23TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT23TGL_Pos)) /* Assignment of value for OUT23TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT24TGL_Pos              _UINT32_(24)                                         /* (PORT_OUTTGL) PORT Data Output Value 24 Toggle Position */
#define PORT_OUTTGL_OUT24TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT24TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 24 Toggle Mask */
#define PORT_OUTTGL_OUT24TGL(value)           (PORT_OUTTGL_OUT24TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT24TGL_Pos)) /* Assignment of value for OUT24TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT25TGL_Pos              _UINT32_(25)                                         /* (PORT_OUTTGL) PORT Data Output Value 25 Toggle Position */
#define PORT_OUTTGL_OUT25TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT25TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 25 Toggle Mask */
#define PORT_OUTTGL_OUT25TGL(value)           (PORT_OUTTGL_OUT25TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT25TGL_Pos)) /* Assignment of value for OUT25TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT26TGL_Pos              _UINT32_(26)                                         /* (PORT_OUTTGL) PORT Data Output Value 26 Toggle Position */
#define PORT_OUTTGL_OUT26TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT26TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 26 Toggle Mask */
#define PORT_OUTTGL_OUT26TGL(value)           (PORT_OUTTGL_OUT26TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT26TGL_Pos)) /* Assignment of value for OUT26TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT27TGL_Pos              _UINT32_(27)                                         /* (PORT_OUTTGL) PORT Data Output Value 27 Toggle Position */
#define PORT_OUTTGL_OUT27TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT27TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 27 Toggle Mask */
#define PORT_OUTTGL_OUT27TGL(value)           (PORT_OUTTGL_OUT27TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT27TGL_Pos)) /* Assignment of value for OUT27TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT28TGL_Pos              _UINT32_(28)                                         /* (PORT_OUTTGL) PORT Data Output Value 28 Toggle Position */
#define PORT_OUTTGL_OUT28TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT28TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 28 Toggle Mask */
#define PORT_OUTTGL_OUT28TGL(value)           (PORT_OUTTGL_OUT28TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT28TGL_Pos)) /* Assignment of value for OUT28TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT29TGL_Pos              _UINT32_(29)                                         /* (PORT_OUTTGL) PORT Data Output Value 29 Toggle Position */
#define PORT_OUTTGL_OUT29TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT29TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 29 Toggle Mask */
#define PORT_OUTTGL_OUT29TGL(value)           (PORT_OUTTGL_OUT29TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT29TGL_Pos)) /* Assignment of value for OUT29TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT30TGL_Pos              _UINT32_(30)                                         /* (PORT_OUTTGL) PORT Data Output Value 30 Toggle Position */
#define PORT_OUTTGL_OUT30TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT30TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 30 Toggle Mask */
#define PORT_OUTTGL_OUT30TGL(value)           (PORT_OUTTGL_OUT30TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT30TGL_Pos)) /* Assignment of value for OUT30TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_OUT31TGL_Pos              _UINT32_(31)                                         /* (PORT_OUTTGL) PORT Data Output Value 31 Toggle Position */
#define PORT_OUTTGL_OUT31TGL_Msk              (_UINT32_(0x1) << PORT_OUTTGL_OUT31TGL_Pos)          /* (PORT_OUTTGL) PORT Data Output Value 31 Toggle Mask */
#define PORT_OUTTGL_OUT31TGL(value)           (PORT_OUTTGL_OUT31TGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUT31TGL_Pos)) /* Assignment of value for OUT31TGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUTTGL) Register Mask  */


/* -------- PORT_IN : (PORT Offset: 0x20) ( R/ 32) Data Input Value -------- */
#define PORT_IN_RESETVALUE                    _UINT32_(0x00)                                       /*  (PORT_IN) Data Input Value  Reset Value */

#define PORT_IN_IN0_Pos                       _UINT32_(0)                                          /* (PORT_IN) PORT Data Input Value 0 Position */
#define PORT_IN_IN0_Msk                       (_UINT32_(0x1) << PORT_IN_IN0_Pos)                   /* (PORT_IN) PORT Data Input Value 0 Mask */
#define PORT_IN_IN0(value)                    (PORT_IN_IN0_Msk & (_UINT32_(value) << PORT_IN_IN0_Pos)) /* Assignment of value for IN0 in the PORT_IN register */
#define PORT_IN_IN1_Pos                       _UINT32_(1)                                          /* (PORT_IN) PORT Data Input Value 1 Position */
#define PORT_IN_IN1_Msk                       (_UINT32_(0x1) << PORT_IN_IN1_Pos)                   /* (PORT_IN) PORT Data Input Value 1 Mask */
#define PORT_IN_IN1(value)                    (PORT_IN_IN1_Msk & (_UINT32_(value) << PORT_IN_IN1_Pos)) /* Assignment of value for IN1 in the PORT_IN register */
#define PORT_IN_IN2_Pos                       _UINT32_(2)                                          /* (PORT_IN) PORT Data Input Value 2 Position */
#define PORT_IN_IN2_Msk                       (_UINT32_(0x1) << PORT_IN_IN2_Pos)                   /* (PORT_IN) PORT Data Input Value 2 Mask */
#define PORT_IN_IN2(value)                    (PORT_IN_IN2_Msk & (_UINT32_(value) << PORT_IN_IN2_Pos)) /* Assignment of value for IN2 in the PORT_IN register */
#define PORT_IN_IN3_Pos                       _UINT32_(3)                                          /* (PORT_IN) PORT Data Input Value 3 Position */
#define PORT_IN_IN3_Msk                       (_UINT32_(0x1) << PORT_IN_IN3_Pos)                   /* (PORT_IN) PORT Data Input Value 3 Mask */
#define PORT_IN_IN3(value)                    (PORT_IN_IN3_Msk & (_UINT32_(value) << PORT_IN_IN3_Pos)) /* Assignment of value for IN3 in the PORT_IN register */
#define PORT_IN_IN4_Pos                       _UINT32_(4)                                          /* (PORT_IN) PORT Data Input Value 4 Position */
#define PORT_IN_IN4_Msk                       (_UINT32_(0x1) << PORT_IN_IN4_Pos)                   /* (PORT_IN) PORT Data Input Value 4 Mask */
#define PORT_IN_IN4(value)                    (PORT_IN_IN4_Msk & (_UINT32_(value) << PORT_IN_IN4_Pos)) /* Assignment of value for IN4 in the PORT_IN register */
#define PORT_IN_IN5_Pos                       _UINT32_(5)                                          /* (PORT_IN) PORT Data Input Value 5 Position */
#define PORT_IN_IN5_Msk                       (_UINT32_(0x1) << PORT_IN_IN5_Pos)                   /* (PORT_IN) PORT Data Input Value 5 Mask */
#define PORT_IN_IN5(value)                    (PORT_IN_IN5_Msk & (_UINT32_(value) << PORT_IN_IN5_Pos)) /* Assignment of value for IN5 in the PORT_IN register */
#define PORT_IN_IN6_Pos                       _UINT32_(6)                                          /* (PORT_IN) PORT Data Input Value 6 Position */
#define PORT_IN_IN6_Msk                       (_UINT32_(0x1) << PORT_IN_IN6_Pos)                   /* (PORT_IN) PORT Data Input Value 6 Mask */
#define PORT_IN_IN6(value)                    (PORT_IN_IN6_Msk & (_UINT32_(value) << PORT_IN_IN6_Pos)) /* Assignment of value for IN6 in the PORT_IN register */
#define PORT_IN_IN7_Pos                       _UINT32_(7)                                          /* (PORT_IN) PORT Data Input Value 7 Position */
#define PORT_IN_IN7_Msk                       (_UINT32_(0x1) << PORT_IN_IN7_Pos)                   /* (PORT_IN) PORT Data Input Value 7 Mask */
#define PORT_IN_IN7(value)                    (PORT_IN_IN7_Msk & (_UINT32_(value) << PORT_IN_IN7_Pos)) /* Assignment of value for IN7 in the PORT_IN register */
#define PORT_IN_IN8_Pos                       _UINT32_(8)                                          /* (PORT_IN) PORT Data Input Value 8 Position */
#define PORT_IN_IN8_Msk                       (_UINT32_(0x1) << PORT_IN_IN8_Pos)                   /* (PORT_IN) PORT Data Input Value 8 Mask */
#define PORT_IN_IN8(value)                    (PORT_IN_IN8_Msk & (_UINT32_(value) << PORT_IN_IN8_Pos)) /* Assignment of value for IN8 in the PORT_IN register */
#define PORT_IN_IN9_Pos                       _UINT32_(9)                                          /* (PORT_IN) PORT Data Input Value 9 Position */
#define PORT_IN_IN9_Msk                       (_UINT32_(0x1) << PORT_IN_IN9_Pos)                   /* (PORT_IN) PORT Data Input Value 9 Mask */
#define PORT_IN_IN9(value)                    (PORT_IN_IN9_Msk & (_UINT32_(value) << PORT_IN_IN9_Pos)) /* Assignment of value for IN9 in the PORT_IN register */
#define PORT_IN_IN10_Pos                      _UINT32_(10)                                         /* (PORT_IN) PORT Data Input Value 10 Position */
#define PORT_IN_IN10_Msk                      (_UINT32_(0x1) << PORT_IN_IN10_Pos)                  /* (PORT_IN) PORT Data Input Value 10 Mask */
#define PORT_IN_IN10(value)                   (PORT_IN_IN10_Msk & (_UINT32_(value) << PORT_IN_IN10_Pos)) /* Assignment of value for IN10 in the PORT_IN register */
#define PORT_IN_IN11_Pos                      _UINT32_(11)                                         /* (PORT_IN) PORT Data Input Value 11 Position */
#define PORT_IN_IN11_Msk                      (_UINT32_(0x1) << PORT_IN_IN11_Pos)                  /* (PORT_IN) PORT Data Input Value 11 Mask */
#define PORT_IN_IN11(value)                   (PORT_IN_IN11_Msk & (_UINT32_(value) << PORT_IN_IN11_Pos)) /* Assignment of value for IN11 in the PORT_IN register */
#define PORT_IN_IN12_Pos                      _UINT32_(12)                                         /* (PORT_IN) PORT Data Input Value 12 Position */
#define PORT_IN_IN12_Msk                      (_UINT32_(0x1) << PORT_IN_IN12_Pos)                  /* (PORT_IN) PORT Data Input Value 12 Mask */
#define PORT_IN_IN12(value)                   (PORT_IN_IN12_Msk & (_UINT32_(value) << PORT_IN_IN12_Pos)) /* Assignment of value for IN12 in the PORT_IN register */
#define PORT_IN_IN13_Pos                      _UINT32_(13)                                         /* (PORT_IN) PORT Data Input Value 13 Position */
#define PORT_IN_IN13_Msk                      (_UINT32_(0x1) << PORT_IN_IN13_Pos)                  /* (PORT_IN) PORT Data Input Value 13 Mask */
#define PORT_IN_IN13(value)                   (PORT_IN_IN13_Msk & (_UINT32_(value) << PORT_IN_IN13_Pos)) /* Assignment of value for IN13 in the PORT_IN register */
#define PORT_IN_IN14_Pos                      _UINT32_(14)                                         /* (PORT_IN) PORT Data Input Value 14 Position */
#define PORT_IN_IN14_Msk                      (_UINT32_(0x1) << PORT_IN_IN14_Pos)                  /* (PORT_IN) PORT Data Input Value 14 Mask */
#define PORT_IN_IN14(value)                   (PORT_IN_IN14_Msk & (_UINT32_(value) << PORT_IN_IN14_Pos)) /* Assignment of value for IN14 in the PORT_IN register */
#define PORT_IN_IN15_Pos                      _UINT32_(15)                                         /* (PORT_IN) PORT Data Input Value 15 Position */
#define PORT_IN_IN15_Msk                      (_UINT32_(0x1) << PORT_IN_IN15_Pos)                  /* (PORT_IN) PORT Data Input Value 15 Mask */
#define PORT_IN_IN15(value)                   (PORT_IN_IN15_Msk & (_UINT32_(value) << PORT_IN_IN15_Pos)) /* Assignment of value for IN15 in the PORT_IN register */
#define PORT_IN_IN16_Pos                      _UINT32_(16)                                         /* (PORT_IN) PORT Data Input Value 16 Position */
#define PORT_IN_IN16_Msk                      (_UINT32_(0x1) << PORT_IN_IN16_Pos)                  /* (PORT_IN) PORT Data Input Value 16 Mask */
#define PORT_IN_IN16(value)                   (PORT_IN_IN16_Msk & (_UINT32_(value) << PORT_IN_IN16_Pos)) /* Assignment of value for IN16 in the PORT_IN register */
#define PORT_IN_IN17_Pos                      _UINT32_(17)                                         /* (PORT_IN) PORT Data Input Value 17 Position */
#define PORT_IN_IN17_Msk                      (_UINT32_(0x1) << PORT_IN_IN17_Pos)                  /* (PORT_IN) PORT Data Input Value 17 Mask */
#define PORT_IN_IN17(value)                   (PORT_IN_IN17_Msk & (_UINT32_(value) << PORT_IN_IN17_Pos)) /* Assignment of value for IN17 in the PORT_IN register */
#define PORT_IN_IN18_Pos                      _UINT32_(18)                                         /* (PORT_IN) PORT Data Input Value 18 Position */
#define PORT_IN_IN18_Msk                      (_UINT32_(0x1) << PORT_IN_IN18_Pos)                  /* (PORT_IN) PORT Data Input Value 18 Mask */
#define PORT_IN_IN18(value)                   (PORT_IN_IN18_Msk & (_UINT32_(value) << PORT_IN_IN18_Pos)) /* Assignment of value for IN18 in the PORT_IN register */
#define PORT_IN_IN19_Pos                      _UINT32_(19)                                         /* (PORT_IN) PORT Data Input Value 19 Position */
#define PORT_IN_IN19_Msk                      (_UINT32_(0x1) << PORT_IN_IN19_Pos)                  /* (PORT_IN) PORT Data Input Value 19 Mask */
#define PORT_IN_IN19(value)                   (PORT_IN_IN19_Msk & (_UINT32_(value) << PORT_IN_IN19_Pos)) /* Assignment of value for IN19 in the PORT_IN register */
#define PORT_IN_IN20_Pos                      _UINT32_(20)                                         /* (PORT_IN) PORT Data Input Value 20 Position */
#define PORT_IN_IN20_Msk                      (_UINT32_(0x1) << PORT_IN_IN20_Pos)                  /* (PORT_IN) PORT Data Input Value 20 Mask */
#define PORT_IN_IN20(value)                   (PORT_IN_IN20_Msk & (_UINT32_(value) << PORT_IN_IN20_Pos)) /* Assignment of value for IN20 in the PORT_IN register */
#define PORT_IN_IN21_Pos                      _UINT32_(21)                                         /* (PORT_IN) PORT Data Input Value 21 Position */
#define PORT_IN_IN21_Msk                      (_UINT32_(0x1) << PORT_IN_IN21_Pos)                  /* (PORT_IN) PORT Data Input Value 21 Mask */
#define PORT_IN_IN21(value)                   (PORT_IN_IN21_Msk & (_UINT32_(value) << PORT_IN_IN21_Pos)) /* Assignment of value for IN21 in the PORT_IN register */
#define PORT_IN_IN22_Pos                      _UINT32_(22)                                         /* (PORT_IN) PORT Data Input Value 22 Position */
#define PORT_IN_IN22_Msk                      (_UINT32_(0x1) << PORT_IN_IN22_Pos)                  /* (PORT_IN) PORT Data Input Value 22 Mask */
#define PORT_IN_IN22(value)                   (PORT_IN_IN22_Msk & (_UINT32_(value) << PORT_IN_IN22_Pos)) /* Assignment of value for IN22 in the PORT_IN register */
#define PORT_IN_IN23_Pos                      _UINT32_(23)                                         /* (PORT_IN) PORT Data Input Value 23 Position */
#define PORT_IN_IN23_Msk                      (_UINT32_(0x1) << PORT_IN_IN23_Pos)                  /* (PORT_IN) PORT Data Input Value 23 Mask */
#define PORT_IN_IN23(value)                   (PORT_IN_IN23_Msk & (_UINT32_(value) << PORT_IN_IN23_Pos)) /* Assignment of value for IN23 in the PORT_IN register */
#define PORT_IN_IN24_Pos                      _UINT32_(24)                                         /* (PORT_IN) PORT Data Input Value 24 Position */
#define PORT_IN_IN24_Msk                      (_UINT32_(0x1) << PORT_IN_IN24_Pos)                  /* (PORT_IN) PORT Data Input Value 24 Mask */
#define PORT_IN_IN24(value)                   (PORT_IN_IN24_Msk & (_UINT32_(value) << PORT_IN_IN24_Pos)) /* Assignment of value for IN24 in the PORT_IN register */
#define PORT_IN_IN25_Pos                      _UINT32_(25)                                         /* (PORT_IN) PORT Data Input Value 25 Position */
#define PORT_IN_IN25_Msk                      (_UINT32_(0x1) << PORT_IN_IN25_Pos)                  /* (PORT_IN) PORT Data Input Value 25 Mask */
#define PORT_IN_IN25(value)                   (PORT_IN_IN25_Msk & (_UINT32_(value) << PORT_IN_IN25_Pos)) /* Assignment of value for IN25 in the PORT_IN register */
#define PORT_IN_IN26_Pos                      _UINT32_(26)                                         /* (PORT_IN) PORT Data Input Value 26 Position */
#define PORT_IN_IN26_Msk                      (_UINT32_(0x1) << PORT_IN_IN26_Pos)                  /* (PORT_IN) PORT Data Input Value 26 Mask */
#define PORT_IN_IN26(value)                   (PORT_IN_IN26_Msk & (_UINT32_(value) << PORT_IN_IN26_Pos)) /* Assignment of value for IN26 in the PORT_IN register */
#define PORT_IN_IN27_Pos                      _UINT32_(27)                                         /* (PORT_IN) PORT Data Input Value 27 Position */
#define PORT_IN_IN27_Msk                      (_UINT32_(0x1) << PORT_IN_IN27_Pos)                  /* (PORT_IN) PORT Data Input Value 27 Mask */
#define PORT_IN_IN27(value)                   (PORT_IN_IN27_Msk & (_UINT32_(value) << PORT_IN_IN27_Pos)) /* Assignment of value for IN27 in the PORT_IN register */
#define PORT_IN_IN28_Pos                      _UINT32_(28)                                         /* (PORT_IN) PORT Data Input Value 28 Position */
#define PORT_IN_IN28_Msk                      (_UINT32_(0x1) << PORT_IN_IN28_Pos)                  /* (PORT_IN) PORT Data Input Value 28 Mask */
#define PORT_IN_IN28(value)                   (PORT_IN_IN28_Msk & (_UINT32_(value) << PORT_IN_IN28_Pos)) /* Assignment of value for IN28 in the PORT_IN register */
#define PORT_IN_IN29_Pos                      _UINT32_(29)                                         /* (PORT_IN) PORT Data Input Value 29 Position */
#define PORT_IN_IN29_Msk                      (_UINT32_(0x1) << PORT_IN_IN29_Pos)                  /* (PORT_IN) PORT Data Input Value 29 Mask */
#define PORT_IN_IN29(value)                   (PORT_IN_IN29_Msk & (_UINT32_(value) << PORT_IN_IN29_Pos)) /* Assignment of value for IN29 in the PORT_IN register */
#define PORT_IN_IN30_Pos                      _UINT32_(30)                                         /* (PORT_IN) PORT Data Input Value 30 Position */
#define PORT_IN_IN30_Msk                      (_UINT32_(0x1) << PORT_IN_IN30_Pos)                  /* (PORT_IN) PORT Data Input Value 30 Mask */
#define PORT_IN_IN30(value)                   (PORT_IN_IN30_Msk & (_UINT32_(value) << PORT_IN_IN30_Pos)) /* Assignment of value for IN30 in the PORT_IN register */
#define PORT_IN_IN31_Pos                      _UINT32_(31)                                         /* (PORT_IN) PORT Data Input Value 31 Position */
#define PORT_IN_IN31_Msk                      (_UINT32_(0x1) << PORT_IN_IN31_Pos)                  /* (PORT_IN) PORT Data Input Value 31 Mask */
#define PORT_IN_IN31(value)                   (PORT_IN_IN31_Msk & (_UINT32_(value) << PORT_IN_IN31_Pos)) /* Assignment of value for IN31 in the PORT_IN register */
#define PORT_IN_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PORT_IN) Register Mask  */

#define PORT_IN_IN_Pos                        _UINT32_(0)                                          /* (PORT_IN Position) PORT Data Input Value 3x */
#define PORT_IN_IN_Msk                        (_UINT32_(0xFFFFFFFF) << PORT_IN_IN_Pos)             /* (PORT_IN Mask) IN */
#define PORT_IN_IN(value)                     (PORT_IN_IN_Msk & (_UINT32_(value) << PORT_IN_IN_Pos)) 

/* -------- PORT_CTRL : (PORT Offset: 0x24) (R/W 32) Control -------- */
#define PORT_CTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (PORT_CTRL) Control  Reset Value */

#define PORT_CTRL_SAMPLING0_Pos               _UINT32_(0)                                          /* (PORT_CTRL) Input Sampling Mode 0 Position */
#define PORT_CTRL_SAMPLING0_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING0_Pos)           /* (PORT_CTRL) Input Sampling Mode 0 Mask */
#define PORT_CTRL_SAMPLING0(value)            (PORT_CTRL_SAMPLING0_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING0_Pos)) /* Assignment of value for SAMPLING0 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING1_Pos               _UINT32_(1)                                          /* (PORT_CTRL) Input Sampling Mode 1 Position */
#define PORT_CTRL_SAMPLING1_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING1_Pos)           /* (PORT_CTRL) Input Sampling Mode 1 Mask */
#define PORT_CTRL_SAMPLING1(value)            (PORT_CTRL_SAMPLING1_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING1_Pos)) /* Assignment of value for SAMPLING1 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING2_Pos               _UINT32_(2)                                          /* (PORT_CTRL) Input Sampling Mode 2 Position */
#define PORT_CTRL_SAMPLING2_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING2_Pos)           /* (PORT_CTRL) Input Sampling Mode 2 Mask */
#define PORT_CTRL_SAMPLING2(value)            (PORT_CTRL_SAMPLING2_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING2_Pos)) /* Assignment of value for SAMPLING2 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING3_Pos               _UINT32_(3)                                          /* (PORT_CTRL) Input Sampling Mode 3 Position */
#define PORT_CTRL_SAMPLING3_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING3_Pos)           /* (PORT_CTRL) Input Sampling Mode 3 Mask */
#define PORT_CTRL_SAMPLING3(value)            (PORT_CTRL_SAMPLING3_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING3_Pos)) /* Assignment of value for SAMPLING3 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING4_Pos               _UINT32_(4)                                          /* (PORT_CTRL) Input Sampling Mode 4 Position */
#define PORT_CTRL_SAMPLING4_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING4_Pos)           /* (PORT_CTRL) Input Sampling Mode 4 Mask */
#define PORT_CTRL_SAMPLING4(value)            (PORT_CTRL_SAMPLING4_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING4_Pos)) /* Assignment of value for SAMPLING4 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING5_Pos               _UINT32_(5)                                          /* (PORT_CTRL) Input Sampling Mode 5 Position */
#define PORT_CTRL_SAMPLING5_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING5_Pos)           /* (PORT_CTRL) Input Sampling Mode 5 Mask */
#define PORT_CTRL_SAMPLING5(value)            (PORT_CTRL_SAMPLING5_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING5_Pos)) /* Assignment of value for SAMPLING5 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING6_Pos               _UINT32_(6)                                          /* (PORT_CTRL) Input Sampling Mode 6 Position */
#define PORT_CTRL_SAMPLING6_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING6_Pos)           /* (PORT_CTRL) Input Sampling Mode 6 Mask */
#define PORT_CTRL_SAMPLING6(value)            (PORT_CTRL_SAMPLING6_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING6_Pos)) /* Assignment of value for SAMPLING6 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING7_Pos               _UINT32_(7)                                          /* (PORT_CTRL) Input Sampling Mode 7 Position */
#define PORT_CTRL_SAMPLING7_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING7_Pos)           /* (PORT_CTRL) Input Sampling Mode 7 Mask */
#define PORT_CTRL_SAMPLING7(value)            (PORT_CTRL_SAMPLING7_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING7_Pos)) /* Assignment of value for SAMPLING7 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING8_Pos               _UINT32_(8)                                          /* (PORT_CTRL) Input Sampling Mode 8 Position */
#define PORT_CTRL_SAMPLING8_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING8_Pos)           /* (PORT_CTRL) Input Sampling Mode 8 Mask */
#define PORT_CTRL_SAMPLING8(value)            (PORT_CTRL_SAMPLING8_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING8_Pos)) /* Assignment of value for SAMPLING8 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING9_Pos               _UINT32_(9)                                          /* (PORT_CTRL) Input Sampling Mode 9 Position */
#define PORT_CTRL_SAMPLING9_Msk               (_UINT32_(0x1) << PORT_CTRL_SAMPLING9_Pos)           /* (PORT_CTRL) Input Sampling Mode 9 Mask */
#define PORT_CTRL_SAMPLING9(value)            (PORT_CTRL_SAMPLING9_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING9_Pos)) /* Assignment of value for SAMPLING9 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING10_Pos              _UINT32_(10)                                         /* (PORT_CTRL) Input Sampling Mode 10 Position */
#define PORT_CTRL_SAMPLING10_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING10_Pos)          /* (PORT_CTRL) Input Sampling Mode 10 Mask */
#define PORT_CTRL_SAMPLING10(value)           (PORT_CTRL_SAMPLING10_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING10_Pos)) /* Assignment of value for SAMPLING10 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING11_Pos              _UINT32_(11)                                         /* (PORT_CTRL) Input Sampling Mode 11 Position */
#define PORT_CTRL_SAMPLING11_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING11_Pos)          /* (PORT_CTRL) Input Sampling Mode 11 Mask */
#define PORT_CTRL_SAMPLING11(value)           (PORT_CTRL_SAMPLING11_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING11_Pos)) /* Assignment of value for SAMPLING11 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING12_Pos              _UINT32_(12)                                         /* (PORT_CTRL) Input Sampling Mode 12 Position */
#define PORT_CTRL_SAMPLING12_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING12_Pos)          /* (PORT_CTRL) Input Sampling Mode 12 Mask */
#define PORT_CTRL_SAMPLING12(value)           (PORT_CTRL_SAMPLING12_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING12_Pos)) /* Assignment of value for SAMPLING12 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING13_Pos              _UINT32_(13)                                         /* (PORT_CTRL) Input Sampling Mode 13 Position */
#define PORT_CTRL_SAMPLING13_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING13_Pos)          /* (PORT_CTRL) Input Sampling Mode 13 Mask */
#define PORT_CTRL_SAMPLING13(value)           (PORT_CTRL_SAMPLING13_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING13_Pos)) /* Assignment of value for SAMPLING13 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING14_Pos              _UINT32_(14)                                         /* (PORT_CTRL) Input Sampling Mode 14 Position */
#define PORT_CTRL_SAMPLING14_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING14_Pos)          /* (PORT_CTRL) Input Sampling Mode 14 Mask */
#define PORT_CTRL_SAMPLING14(value)           (PORT_CTRL_SAMPLING14_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING14_Pos)) /* Assignment of value for SAMPLING14 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING15_Pos              _UINT32_(15)                                         /* (PORT_CTRL) Input Sampling Mode 15 Position */
#define PORT_CTRL_SAMPLING15_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING15_Pos)          /* (PORT_CTRL) Input Sampling Mode 15 Mask */
#define PORT_CTRL_SAMPLING15(value)           (PORT_CTRL_SAMPLING15_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING15_Pos)) /* Assignment of value for SAMPLING15 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING16_Pos              _UINT32_(16)                                         /* (PORT_CTRL) Input Sampling Mode 16 Position */
#define PORT_CTRL_SAMPLING16_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING16_Pos)          /* (PORT_CTRL) Input Sampling Mode 16 Mask */
#define PORT_CTRL_SAMPLING16(value)           (PORT_CTRL_SAMPLING16_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING16_Pos)) /* Assignment of value for SAMPLING16 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING17_Pos              _UINT32_(17)                                         /* (PORT_CTRL) Input Sampling Mode 17 Position */
#define PORT_CTRL_SAMPLING17_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING17_Pos)          /* (PORT_CTRL) Input Sampling Mode 17 Mask */
#define PORT_CTRL_SAMPLING17(value)           (PORT_CTRL_SAMPLING17_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING17_Pos)) /* Assignment of value for SAMPLING17 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING18_Pos              _UINT32_(18)                                         /* (PORT_CTRL) Input Sampling Mode 18 Position */
#define PORT_CTRL_SAMPLING18_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING18_Pos)          /* (PORT_CTRL) Input Sampling Mode 18 Mask */
#define PORT_CTRL_SAMPLING18(value)           (PORT_CTRL_SAMPLING18_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING18_Pos)) /* Assignment of value for SAMPLING18 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING19_Pos              _UINT32_(19)                                         /* (PORT_CTRL) Input Sampling Mode 19 Position */
#define PORT_CTRL_SAMPLING19_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING19_Pos)          /* (PORT_CTRL) Input Sampling Mode 19 Mask */
#define PORT_CTRL_SAMPLING19(value)           (PORT_CTRL_SAMPLING19_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING19_Pos)) /* Assignment of value for SAMPLING19 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING20_Pos              _UINT32_(20)                                         /* (PORT_CTRL) Input Sampling Mode 20 Position */
#define PORT_CTRL_SAMPLING20_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING20_Pos)          /* (PORT_CTRL) Input Sampling Mode 20 Mask */
#define PORT_CTRL_SAMPLING20(value)           (PORT_CTRL_SAMPLING20_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING20_Pos)) /* Assignment of value for SAMPLING20 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING21_Pos              _UINT32_(21)                                         /* (PORT_CTRL) Input Sampling Mode 21 Position */
#define PORT_CTRL_SAMPLING21_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING21_Pos)          /* (PORT_CTRL) Input Sampling Mode 21 Mask */
#define PORT_CTRL_SAMPLING21(value)           (PORT_CTRL_SAMPLING21_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING21_Pos)) /* Assignment of value for SAMPLING21 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING22_Pos              _UINT32_(22)                                         /* (PORT_CTRL) Input Sampling Mode 22 Position */
#define PORT_CTRL_SAMPLING22_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING22_Pos)          /* (PORT_CTRL) Input Sampling Mode 22 Mask */
#define PORT_CTRL_SAMPLING22(value)           (PORT_CTRL_SAMPLING22_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING22_Pos)) /* Assignment of value for SAMPLING22 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING23_Pos              _UINT32_(23)                                         /* (PORT_CTRL) Input Sampling Mode 23 Position */
#define PORT_CTRL_SAMPLING23_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING23_Pos)          /* (PORT_CTRL) Input Sampling Mode 23 Mask */
#define PORT_CTRL_SAMPLING23(value)           (PORT_CTRL_SAMPLING23_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING23_Pos)) /* Assignment of value for SAMPLING23 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING24_Pos              _UINT32_(24)                                         /* (PORT_CTRL) Input Sampling Mode 24 Position */
#define PORT_CTRL_SAMPLING24_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING24_Pos)          /* (PORT_CTRL) Input Sampling Mode 24 Mask */
#define PORT_CTRL_SAMPLING24(value)           (PORT_CTRL_SAMPLING24_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING24_Pos)) /* Assignment of value for SAMPLING24 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING25_Pos              _UINT32_(25)                                         /* (PORT_CTRL) Input Sampling Mode 25 Position */
#define PORT_CTRL_SAMPLING25_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING25_Pos)          /* (PORT_CTRL) Input Sampling Mode 25 Mask */
#define PORT_CTRL_SAMPLING25(value)           (PORT_CTRL_SAMPLING25_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING25_Pos)) /* Assignment of value for SAMPLING25 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING26_Pos              _UINT32_(26)                                         /* (PORT_CTRL) Input Sampling Mode 26 Position */
#define PORT_CTRL_SAMPLING26_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING26_Pos)          /* (PORT_CTRL) Input Sampling Mode 26 Mask */
#define PORT_CTRL_SAMPLING26(value)           (PORT_CTRL_SAMPLING26_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING26_Pos)) /* Assignment of value for SAMPLING26 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING27_Pos              _UINT32_(27)                                         /* (PORT_CTRL) Input Sampling Mode 27 Position */
#define PORT_CTRL_SAMPLING27_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING27_Pos)          /* (PORT_CTRL) Input Sampling Mode 27 Mask */
#define PORT_CTRL_SAMPLING27(value)           (PORT_CTRL_SAMPLING27_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING27_Pos)) /* Assignment of value for SAMPLING27 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING28_Pos              _UINT32_(28)                                         /* (PORT_CTRL) Input Sampling Mode 28 Position */
#define PORT_CTRL_SAMPLING28_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING28_Pos)          /* (PORT_CTRL) Input Sampling Mode 28 Mask */
#define PORT_CTRL_SAMPLING28(value)           (PORT_CTRL_SAMPLING28_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING28_Pos)) /* Assignment of value for SAMPLING28 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING29_Pos              _UINT32_(29)                                         /* (PORT_CTRL) Input Sampling Mode 29 Position */
#define PORT_CTRL_SAMPLING29_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING29_Pos)          /* (PORT_CTRL) Input Sampling Mode 29 Mask */
#define PORT_CTRL_SAMPLING29(value)           (PORT_CTRL_SAMPLING29_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING29_Pos)) /* Assignment of value for SAMPLING29 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING30_Pos              _UINT32_(30)                                         /* (PORT_CTRL) Input Sampling Mode 30 Position */
#define PORT_CTRL_SAMPLING30_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING30_Pos)          /* (PORT_CTRL) Input Sampling Mode 30 Mask */
#define PORT_CTRL_SAMPLING30(value)           (PORT_CTRL_SAMPLING30_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING30_Pos)) /* Assignment of value for SAMPLING30 in the PORT_CTRL register */
#define PORT_CTRL_SAMPLING31_Pos              _UINT32_(31)                                         /* (PORT_CTRL) Input Sampling Mode 31 Position */
#define PORT_CTRL_SAMPLING31_Msk              (_UINT32_(0x1) << PORT_CTRL_SAMPLING31_Pos)          /* (PORT_CTRL) Input Sampling Mode 31 Mask */
#define PORT_CTRL_SAMPLING31(value)           (PORT_CTRL_SAMPLING31_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING31_Pos)) /* Assignment of value for SAMPLING31 in the PORT_CTRL register */
#define PORT_CTRL_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PORT_CTRL) Register Mask  */

#define PORT_CTRL_SAMPLING_Pos                _UINT32_(0)                                          /* (PORT_CTRL Position) Input Sampling Mode 3x */
#define PORT_CTRL_SAMPLING_Msk                (_UINT32_(0xFFFFFFFF) << PORT_CTRL_SAMPLING_Pos)     /* (PORT_CTRL Mask) SAMPLING */
#define PORT_CTRL_SAMPLING(value)             (PORT_CTRL_SAMPLING_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING_Pos)) 

/* -------- PORT_WRCONFIG : (PORT Offset: 0x28) ( /W 32) Write Configuration -------- */
#define PORT_WRCONFIG_RESETVALUE              _UINT32_(0x00)                                       /*  (PORT_WRCONFIG) Write Configuration  Reset Value */

#define PORT_WRCONFIG_PINMASK_Pos             _UINT32_(0)                                          /* (PORT_WRCONFIG) Pin Mask for Multiple Pin Configuration Position */
#define PORT_WRCONFIG_PINMASK_Msk             (_UINT32_(0xFFFF) << PORT_WRCONFIG_PINMASK_Pos)      /* (PORT_WRCONFIG) Pin Mask for Multiple Pin Configuration Mask */
#define PORT_WRCONFIG_PINMASK(value)          (PORT_WRCONFIG_PINMASK_Msk & (_UINT32_(value) << PORT_WRCONFIG_PINMASK_Pos)) /* Assignment of value for PINMASK in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_PMUXEN_Pos              _UINT32_(16)                                         /* (PORT_WRCONFIG) Peripheral Multiplexer Enable Position */
#define PORT_WRCONFIG_PMUXEN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_PMUXEN_Pos)          /* (PORT_WRCONFIG) Peripheral Multiplexer Enable Mask */
#define PORT_WRCONFIG_PMUXEN(value)           (PORT_WRCONFIG_PMUXEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_PMUXEN_Pos)) /* Assignment of value for PMUXEN in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_INEN_Pos                _UINT32_(17)                                         /* (PORT_WRCONFIG) Input Enable Position */
#define PORT_WRCONFIG_INEN_Msk                (_UINT32_(0x1) << PORT_WRCONFIG_INEN_Pos)            /* (PORT_WRCONFIG) Input Enable Mask */
#define PORT_WRCONFIG_INEN(value)             (PORT_WRCONFIG_INEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_INEN_Pos)) /* Assignment of value for INEN in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_PULLEN_Pos              _UINT32_(18)                                         /* (PORT_WRCONFIG) Pull Enable Position */
#define PORT_WRCONFIG_PULLEN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_PULLEN_Pos)          /* (PORT_WRCONFIG) Pull Enable Mask */
#define PORT_WRCONFIG_PULLEN(value)           (PORT_WRCONFIG_PULLEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_PULLEN_Pos)) /* Assignment of value for PULLEN in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_SLEWLIM_Pos             _UINT32_(20)                                         /* (PORT_WRCONFIG) Output Driver Slew Rate Limit Enable Position */
#define PORT_WRCONFIG_SLEWLIM_Msk             (_UINT32_(0x1) << PORT_WRCONFIG_SLEWLIM_Pos)         /* (PORT_WRCONFIG) Output Driver Slew Rate Limit Enable Mask */
#define PORT_WRCONFIG_SLEWLIM(value)          (PORT_WRCONFIG_SLEWLIM_Msk & (_UINT32_(value) << PORT_WRCONFIG_SLEWLIM_Pos)) /* Assignment of value for SLEWLIM in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_PMUX_Pos                _UINT32_(24)                                         /* (PORT_WRCONFIG) Peripheral Multiplexing Position */
#define PORT_WRCONFIG_PMUX_Msk                (_UINT32_(0xF) << PORT_WRCONFIG_PMUX_Pos)            /* (PORT_WRCONFIG) Peripheral Multiplexing Mask */
#define PORT_WRCONFIG_PMUX(value)             (PORT_WRCONFIG_PMUX_Msk & (_UINT32_(value) << PORT_WRCONFIG_PMUX_Pos)) /* Assignment of value for PMUX in the PORT_WRCONFIG register */
#define   PORT_WRCONFIG_PMUX_A_Val            _UINT32_(0x0)                                        /* (PORT_WRCONFIG) Peripheral function A selected  */
#define   PORT_WRCONFIG_PMUX_B_Val            _UINT32_(0x1)                                        /* (PORT_WRCONFIG) Peripheral function B selected  */
#define   PORT_WRCONFIG_PMUX_C_Val            _UINT32_(0x2)                                        /* (PORT_WRCONFIG) Peripheral function C selected  */
#define   PORT_WRCONFIG_PMUX_D_Val            _UINT32_(0x3)                                        /* (PORT_WRCONFIG) Peripheral function D selected  */
#define   PORT_WRCONFIG_PMUX_E_Val            _UINT32_(0x4)                                        /* (PORT_WRCONFIG) Peripheral function E selected  */
#define   PORT_WRCONFIG_PMUX_F_Val            _UINT32_(0x5)                                        /* (PORT_WRCONFIG) Peripheral function F selected  */
#define   PORT_WRCONFIG_PMUX_G_Val            _UINT32_(0x6)                                        /* (PORT_WRCONFIG) Peripheral function G selected  */
#define   PORT_WRCONFIG_PMUX_H_Val            _UINT32_(0x7)                                        /* (PORT_WRCONFIG) Peripheral function H selected  */
#define   PORT_WRCONFIG_PMUX_I_Val            _UINT32_(0x8)                                        /* (PORT_WRCONFIG) Peripheral function I selected  */
#define   PORT_WRCONFIG_PMUX_J_Val            _UINT32_(0x9)                                        /* (PORT_WRCONFIG) Peripheral function J selected  */
#define PORT_WRCONFIG_PMUX_A                  (PORT_WRCONFIG_PMUX_A_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function A selected Position */
#define PORT_WRCONFIG_PMUX_B                  (PORT_WRCONFIG_PMUX_B_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function B selected Position */
#define PORT_WRCONFIG_PMUX_C                  (PORT_WRCONFIG_PMUX_C_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function C selected Position */
#define PORT_WRCONFIG_PMUX_D                  (PORT_WRCONFIG_PMUX_D_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function D selected Position */
#define PORT_WRCONFIG_PMUX_E                  (PORT_WRCONFIG_PMUX_E_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function E selected Position */
#define PORT_WRCONFIG_PMUX_F                  (PORT_WRCONFIG_PMUX_F_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function F selected Position */
#define PORT_WRCONFIG_PMUX_G                  (PORT_WRCONFIG_PMUX_G_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function G selected Position */
#define PORT_WRCONFIG_PMUX_H                  (PORT_WRCONFIG_PMUX_H_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function H selected Position */
#define PORT_WRCONFIG_PMUX_I                  (PORT_WRCONFIG_PMUX_I_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function I selected Position */
#define PORT_WRCONFIG_PMUX_J                  (PORT_WRCONFIG_PMUX_J_Val << PORT_WRCONFIG_PMUX_Pos) /* (PORT_WRCONFIG) Peripheral function J selected Position */
#define PORT_WRCONFIG_WRPMUX_Pos              _UINT32_(28)                                         /* (PORT_WRCONFIG) Write PMUX Position */
#define PORT_WRCONFIG_WRPMUX_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_WRPMUX_Pos)          /* (PORT_WRCONFIG) Write PMUX Mask */
#define PORT_WRCONFIG_WRPMUX(value)           (PORT_WRCONFIG_WRPMUX_Msk & (_UINT32_(value) << PORT_WRCONFIG_WRPMUX_Pos)) /* Assignment of value for WRPMUX in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_WRPINCFG_Pos            _UINT32_(30)                                         /* (PORT_WRCONFIG) Write PINCFG Position */
#define PORT_WRCONFIG_WRPINCFG_Msk            (_UINT32_(0x1) << PORT_WRCONFIG_WRPINCFG_Pos)        /* (PORT_WRCONFIG) Write PINCFG Mask */
#define PORT_WRCONFIG_WRPINCFG(value)         (PORT_WRCONFIG_WRPINCFG_Msk & (_UINT32_(value) << PORT_WRCONFIG_WRPINCFG_Pos)) /* Assignment of value for WRPINCFG in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_HWSEL_Pos               _UINT32_(31)                                         /* (PORT_WRCONFIG) Half-Word Select Position */
#define PORT_WRCONFIG_HWSEL_Msk               (_UINT32_(0x1) << PORT_WRCONFIG_HWSEL_Pos)           /* (PORT_WRCONFIG) Half-Word Select Mask */
#define PORT_WRCONFIG_HWSEL(value)            (PORT_WRCONFIG_HWSEL_Msk & (_UINT32_(value) << PORT_WRCONFIG_HWSEL_Pos)) /* Assignment of value for HWSEL in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_Msk                     _UINT32_(0xDF17FFFF)                                 /* (PORT_WRCONFIG) Register Mask  */


/* -------- PORT_EVCTRL : (PORT Offset: 0x2C) (R/W 32) Event Control -------- */
#define PORT_EVCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_EVCTRL) Event Control  Reset Value */

#define PORT_EVCTRL_PID0_Pos                  _UINT32_(0)                                          /* (PORT_EVCTRL) Event 0 Pin Identifier Position */
#define PORT_EVCTRL_PID0_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID0_Pos)             /* (PORT_EVCTRL) Event 0 Pin Identifier Mask */
#define PORT_EVCTRL_PID0(value)               (PORT_EVCTRL_PID0_Msk & (_UINT32_(value) << PORT_EVCTRL_PID0_Pos)) /* Assignment of value for PID0 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_PID0_PIN0_Val           _UINT32_(0x0)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 0  */
#define   PORT_EVCTRL_PID0_PIN1_Val           _UINT32_(0x1)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 1  */
#define   PORT_EVCTRL_PID0_PIN2_Val           _UINT32_(0x2)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 2  */
#define   PORT_EVCTRL_PID0_PIN3_Val           _UINT32_(0x3)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 3  */
#define   PORT_EVCTRL_PID0_PIN4_Val           _UINT32_(0x4)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 4  */
#define   PORT_EVCTRL_PID0_PIN5_Val           _UINT32_(0x5)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 5  */
#define   PORT_EVCTRL_PID0_PIN6_Val           _UINT32_(0x6)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 6  */
#define   PORT_EVCTRL_PID0_PIN7_Val           _UINT32_(0x7)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 7  */
#define   PORT_EVCTRL_PID0_PIN8_Val           _UINT32_(0x8)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 8  */
#define   PORT_EVCTRL_PID0_PIN9_Val           _UINT32_(0x9)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 9  */
#define   PORT_EVCTRL_PID0_PIN10_Val          _UINT32_(0xA)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 10  */
#define   PORT_EVCTRL_PID0_PIN11_Val          _UINT32_(0xB)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 11  */
#define   PORT_EVCTRL_PID0_PIN12_Val          _UINT32_(0xC)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 12  */
#define   PORT_EVCTRL_PID0_PIN13_Val          _UINT32_(0xD)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 13  */
#define   PORT_EVCTRL_PID0_PIN14_Val          _UINT32_(0xE)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 14  */
#define   PORT_EVCTRL_PID0_PIN15_Val          _UINT32_(0xF)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 15  */
#define   PORT_EVCTRL_PID0_PIN16_Val          _UINT32_(0x10)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 16  */
#define   PORT_EVCTRL_PID0_PIN17_Val          _UINT32_(0x11)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 17  */
#define   PORT_EVCTRL_PID0_PIN18_Val          _UINT32_(0x12)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 18  */
#define   PORT_EVCTRL_PID0_PIN19_Val          _UINT32_(0x13)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 19  */
#define   PORT_EVCTRL_PID0_PIN20_Val          _UINT32_(0x14)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 20  */
#define   PORT_EVCTRL_PID0_PIN21_Val          _UINT32_(0x15)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 21  */
#define   PORT_EVCTRL_PID0_PIN22_Val          _UINT32_(0x16)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 22  */
#define   PORT_EVCTRL_PID0_PIN23_Val          _UINT32_(0x17)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 23  */
#define   PORT_EVCTRL_PID0_PIN24_Val          _UINT32_(0x18)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 24  */
#define   PORT_EVCTRL_PID0_PIN25_Val          _UINT32_(0x19)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 25  */
#define   PORT_EVCTRL_PID0_PIN26_Val          _UINT32_(0x1A)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 26  */
#define   PORT_EVCTRL_PID0_PIN27_Val          _UINT32_(0x1B)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 27  */
#define   PORT_EVCTRL_PID0_PIN28_Val          _UINT32_(0x1C)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 28  */
#define   PORT_EVCTRL_PID0_PIN29_Val          _UINT32_(0x1D)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 29  */
#define   PORT_EVCTRL_PID0_PIN30_Val          _UINT32_(0x1E)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 30  */
#define   PORT_EVCTRL_PID0_PIN31_Val          _UINT32_(0x1F)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 31  */
#define PORT_EVCTRL_PID0_PIN0                 (PORT_EVCTRL_PID0_PIN0_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 0 Position */
#define PORT_EVCTRL_PID0_PIN1                 (PORT_EVCTRL_PID0_PIN1_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 1 Position */
#define PORT_EVCTRL_PID0_PIN2                 (PORT_EVCTRL_PID0_PIN2_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 2 Position */
#define PORT_EVCTRL_PID0_PIN3                 (PORT_EVCTRL_PID0_PIN3_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 3 Position */
#define PORT_EVCTRL_PID0_PIN4                 (PORT_EVCTRL_PID0_PIN4_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 4 Position */
#define PORT_EVCTRL_PID0_PIN5                 (PORT_EVCTRL_PID0_PIN5_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 5 Position */
#define PORT_EVCTRL_PID0_PIN6                 (PORT_EVCTRL_PID0_PIN6_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 6 Position */
#define PORT_EVCTRL_PID0_PIN7                 (PORT_EVCTRL_PID0_PIN7_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 7 Position */
#define PORT_EVCTRL_PID0_PIN8                 (PORT_EVCTRL_PID0_PIN8_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 8 Position */
#define PORT_EVCTRL_PID0_PIN9                 (PORT_EVCTRL_PID0_PIN9_Val << PORT_EVCTRL_PID0_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 9 Position */
#define PORT_EVCTRL_PID0_PIN10                (PORT_EVCTRL_PID0_PIN10_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 10 Position */
#define PORT_EVCTRL_PID0_PIN11                (PORT_EVCTRL_PID0_PIN11_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 11 Position */
#define PORT_EVCTRL_PID0_PIN12                (PORT_EVCTRL_PID0_PIN12_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 12 Position */
#define PORT_EVCTRL_PID0_PIN13                (PORT_EVCTRL_PID0_PIN13_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 13 Position */
#define PORT_EVCTRL_PID0_PIN14                (PORT_EVCTRL_PID0_PIN14_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 14 Position */
#define PORT_EVCTRL_PID0_PIN15                (PORT_EVCTRL_PID0_PIN15_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 15 Position */
#define PORT_EVCTRL_PID0_PIN16                (PORT_EVCTRL_PID0_PIN16_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 16 Position */
#define PORT_EVCTRL_PID0_PIN17                (PORT_EVCTRL_PID0_PIN17_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 17 Position */
#define PORT_EVCTRL_PID0_PIN18                (PORT_EVCTRL_PID0_PIN18_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 18 Position */
#define PORT_EVCTRL_PID0_PIN19                (PORT_EVCTRL_PID0_PIN19_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 19 Position */
#define PORT_EVCTRL_PID0_PIN20                (PORT_EVCTRL_PID0_PIN20_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 20 Position */
#define PORT_EVCTRL_PID0_PIN21                (PORT_EVCTRL_PID0_PIN21_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 21 Position */
#define PORT_EVCTRL_PID0_PIN22                (PORT_EVCTRL_PID0_PIN22_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 22 Position */
#define PORT_EVCTRL_PID0_PIN23                (PORT_EVCTRL_PID0_PIN23_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 23 Position */
#define PORT_EVCTRL_PID0_PIN24                (PORT_EVCTRL_PID0_PIN24_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 24 Position */
#define PORT_EVCTRL_PID0_PIN25                (PORT_EVCTRL_PID0_PIN25_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 25 Position */
#define PORT_EVCTRL_PID0_PIN26                (PORT_EVCTRL_PID0_PIN26_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 26 Position */
#define PORT_EVCTRL_PID0_PIN27                (PORT_EVCTRL_PID0_PIN27_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 27 Position */
#define PORT_EVCTRL_PID0_PIN28                (PORT_EVCTRL_PID0_PIN28_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 28 Position */
#define PORT_EVCTRL_PID0_PIN29                (PORT_EVCTRL_PID0_PIN29_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 29 Position */
#define PORT_EVCTRL_PID0_PIN30                (PORT_EVCTRL_PID0_PIN30_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 30 Position */
#define PORT_EVCTRL_PID0_PIN31                (PORT_EVCTRL_PID0_PIN31_Val << PORT_EVCTRL_PID0_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 31 Position */
#define PORT_EVCTRL_EVACT0_Pos                _UINT32_(5)                                          /* (PORT_EVCTRL) Event 0 Action Position */
#define PORT_EVCTRL_EVACT0_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT0_Pos)            /* (PORT_EVCTRL) Event 0 Action Mask */
#define PORT_EVCTRL_EVACT0(value)             (PORT_EVCTRL_EVACT0_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT0_Pos)) /* Assignment of value for EVACT0 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_EVACT0_OUT_Val          _UINT32_(0x0)                                        /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event  */
#define   PORT_EVCTRL_EVACT0_SET_Val          _UINT32_(0x1)                                        /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT0_CLR_Val          _UINT32_(0x2)                                        /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT0_TGL_Val          _UINT32_(0x3)                                        /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event  */
#define PORT_EVCTRL_EVACT0_OUT                (PORT_EVCTRL_EVACT0_OUT_Val << PORT_EVCTRL_EVACT0_Pos) /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event Position */
#define PORT_EVCTRL_EVACT0_SET                (PORT_EVCTRL_EVACT0_SET_Val << PORT_EVCTRL_EVACT0_Pos) /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT0_CLR                (PORT_EVCTRL_EVACT0_CLR_Val << PORT_EVCTRL_EVACT0_Pos) /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT0_TGL                (PORT_EVCTRL_EVACT0_TGL_Val << PORT_EVCTRL_EVACT0_Pos) /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_PORTEI0_Pos               _UINT32_(7)                                          /* (PORT_EVCTRL) PORT Event 0 Input Enable Position */
#define PORT_EVCTRL_PORTEI0_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI0_Pos)           /* (PORT_EVCTRL) PORT Event 0 Input Enable Mask */
#define PORT_EVCTRL_PORTEI0(value)            (PORT_EVCTRL_PORTEI0_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI0_Pos)) /* Assignment of value for PORTEI0 in the PORT_EVCTRL register */
#define PORT_EVCTRL_PID1_Pos                  _UINT32_(8)                                          /* (PORT_EVCTRL) Event 1 Pin Identifier Position */
#define PORT_EVCTRL_PID1_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID1_Pos)             /* (PORT_EVCTRL) Event 1 Pin Identifier Mask */
#define PORT_EVCTRL_PID1(value)               (PORT_EVCTRL_PID1_Msk & (_UINT32_(value) << PORT_EVCTRL_PID1_Pos)) /* Assignment of value for PID1 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_PID1_PIN0_Val           _UINT32_(0x0)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 0  */
#define   PORT_EVCTRL_PID1_PIN1_Val           _UINT32_(0x1)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 1  */
#define   PORT_EVCTRL_PID1_PIN2_Val           _UINT32_(0x2)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 2  */
#define   PORT_EVCTRL_PID1_PIN3_Val           _UINT32_(0x3)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 3  */
#define   PORT_EVCTRL_PID1_PIN4_Val           _UINT32_(0x4)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 4  */
#define   PORT_EVCTRL_PID1_PIN5_Val           _UINT32_(0x5)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 5  */
#define   PORT_EVCTRL_PID1_PIN6_Val           _UINT32_(0x6)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 6  */
#define   PORT_EVCTRL_PID1_PIN7_Val           _UINT32_(0x7)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 7  */
#define   PORT_EVCTRL_PID1_PIN8_Val           _UINT32_(0x8)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 8  */
#define   PORT_EVCTRL_PID1_PIN9_Val           _UINT32_(0x9)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 9  */
#define   PORT_EVCTRL_PID1_PIN10_Val          _UINT32_(0xA)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 10  */
#define   PORT_EVCTRL_PID1_PIN11_Val          _UINT32_(0xB)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 11  */
#define   PORT_EVCTRL_PID1_PIN12_Val          _UINT32_(0xC)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 12  */
#define   PORT_EVCTRL_PID1_PIN13_Val          _UINT32_(0xD)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 13  */
#define   PORT_EVCTRL_PID1_PIN14_Val          _UINT32_(0xE)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 14  */
#define   PORT_EVCTRL_PID1_PIN15_Val          _UINT32_(0xF)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 15  */
#define   PORT_EVCTRL_PID1_PIN16_Val          _UINT32_(0x10)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 16  */
#define   PORT_EVCTRL_PID1_PIN17_Val          _UINT32_(0x11)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 17  */
#define   PORT_EVCTRL_PID1_PIN18_Val          _UINT32_(0x12)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 18  */
#define   PORT_EVCTRL_PID1_PIN19_Val          _UINT32_(0x13)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 19  */
#define   PORT_EVCTRL_PID1_PIN20_Val          _UINT32_(0x14)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 20  */
#define   PORT_EVCTRL_PID1_PIN21_Val          _UINT32_(0x15)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 21  */
#define   PORT_EVCTRL_PID1_PIN22_Val          _UINT32_(0x16)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 22  */
#define   PORT_EVCTRL_PID1_PIN23_Val          _UINT32_(0x17)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 23  */
#define   PORT_EVCTRL_PID1_PIN24_Val          _UINT32_(0x18)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 24  */
#define   PORT_EVCTRL_PID1_PIN25_Val          _UINT32_(0x19)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 25  */
#define   PORT_EVCTRL_PID1_PIN26_Val          _UINT32_(0x1A)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 26  */
#define   PORT_EVCTRL_PID1_PIN27_Val          _UINT32_(0x1B)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 27  */
#define   PORT_EVCTRL_PID1_PIN28_Val          _UINT32_(0x1C)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 28  */
#define   PORT_EVCTRL_PID1_PIN29_Val          _UINT32_(0x1D)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 29  */
#define   PORT_EVCTRL_PID1_PIN30_Val          _UINT32_(0x1E)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 30  */
#define   PORT_EVCTRL_PID1_PIN31_Val          _UINT32_(0x1F)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 31  */
#define PORT_EVCTRL_PID1_PIN0                 (PORT_EVCTRL_PID1_PIN0_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 0 Position */
#define PORT_EVCTRL_PID1_PIN1                 (PORT_EVCTRL_PID1_PIN1_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 1 Position */
#define PORT_EVCTRL_PID1_PIN2                 (PORT_EVCTRL_PID1_PIN2_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 2 Position */
#define PORT_EVCTRL_PID1_PIN3                 (PORT_EVCTRL_PID1_PIN3_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 3 Position */
#define PORT_EVCTRL_PID1_PIN4                 (PORT_EVCTRL_PID1_PIN4_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 4 Position */
#define PORT_EVCTRL_PID1_PIN5                 (PORT_EVCTRL_PID1_PIN5_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 5 Position */
#define PORT_EVCTRL_PID1_PIN6                 (PORT_EVCTRL_PID1_PIN6_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 6 Position */
#define PORT_EVCTRL_PID1_PIN7                 (PORT_EVCTRL_PID1_PIN7_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 7 Position */
#define PORT_EVCTRL_PID1_PIN8                 (PORT_EVCTRL_PID1_PIN8_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 8 Position */
#define PORT_EVCTRL_PID1_PIN9                 (PORT_EVCTRL_PID1_PIN9_Val << PORT_EVCTRL_PID1_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 9 Position */
#define PORT_EVCTRL_PID1_PIN10                (PORT_EVCTRL_PID1_PIN10_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 10 Position */
#define PORT_EVCTRL_PID1_PIN11                (PORT_EVCTRL_PID1_PIN11_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 11 Position */
#define PORT_EVCTRL_PID1_PIN12                (PORT_EVCTRL_PID1_PIN12_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 12 Position */
#define PORT_EVCTRL_PID1_PIN13                (PORT_EVCTRL_PID1_PIN13_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 13 Position */
#define PORT_EVCTRL_PID1_PIN14                (PORT_EVCTRL_PID1_PIN14_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 14 Position */
#define PORT_EVCTRL_PID1_PIN15                (PORT_EVCTRL_PID1_PIN15_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 15 Position */
#define PORT_EVCTRL_PID1_PIN16                (PORT_EVCTRL_PID1_PIN16_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 16 Position */
#define PORT_EVCTRL_PID1_PIN17                (PORT_EVCTRL_PID1_PIN17_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 17 Position */
#define PORT_EVCTRL_PID1_PIN18                (PORT_EVCTRL_PID1_PIN18_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 18 Position */
#define PORT_EVCTRL_PID1_PIN19                (PORT_EVCTRL_PID1_PIN19_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 19 Position */
#define PORT_EVCTRL_PID1_PIN20                (PORT_EVCTRL_PID1_PIN20_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 20 Position */
#define PORT_EVCTRL_PID1_PIN21                (PORT_EVCTRL_PID1_PIN21_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 21 Position */
#define PORT_EVCTRL_PID1_PIN22                (PORT_EVCTRL_PID1_PIN22_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 22 Position */
#define PORT_EVCTRL_PID1_PIN23                (PORT_EVCTRL_PID1_PIN23_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 23 Position */
#define PORT_EVCTRL_PID1_PIN24                (PORT_EVCTRL_PID1_PIN24_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 24 Position */
#define PORT_EVCTRL_PID1_PIN25                (PORT_EVCTRL_PID1_PIN25_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 25 Position */
#define PORT_EVCTRL_PID1_PIN26                (PORT_EVCTRL_PID1_PIN26_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 26 Position */
#define PORT_EVCTRL_PID1_PIN27                (PORT_EVCTRL_PID1_PIN27_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 27 Position */
#define PORT_EVCTRL_PID1_PIN28                (PORT_EVCTRL_PID1_PIN28_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 28 Position */
#define PORT_EVCTRL_PID1_PIN29                (PORT_EVCTRL_PID1_PIN29_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 29 Position */
#define PORT_EVCTRL_PID1_PIN30                (PORT_EVCTRL_PID1_PIN30_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 30 Position */
#define PORT_EVCTRL_PID1_PIN31                (PORT_EVCTRL_PID1_PIN31_Val << PORT_EVCTRL_PID1_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 31 Position */
#define PORT_EVCTRL_EVACT1_Pos                _UINT32_(13)                                         /* (PORT_EVCTRL) Event 1 Action Position */
#define PORT_EVCTRL_EVACT1_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT1_Pos)            /* (PORT_EVCTRL) Event 1 Action Mask */
#define PORT_EVCTRL_EVACT1(value)             (PORT_EVCTRL_EVACT1_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT1_Pos)) /* Assignment of value for EVACT1 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_EVACT1_OUT_Val          _UINT32_(0x0)                                        /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event  */
#define   PORT_EVCTRL_EVACT1_SET_Val          _UINT32_(0x1)                                        /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT1_CLR_Val          _UINT32_(0x2)                                        /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT1_TGL_Val          _UINT32_(0x3)                                        /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event  */
#define PORT_EVCTRL_EVACT1_OUT                (PORT_EVCTRL_EVACT1_OUT_Val << PORT_EVCTRL_EVACT1_Pos) /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event Position */
#define PORT_EVCTRL_EVACT1_SET                (PORT_EVCTRL_EVACT1_SET_Val << PORT_EVCTRL_EVACT1_Pos) /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT1_CLR                (PORT_EVCTRL_EVACT1_CLR_Val << PORT_EVCTRL_EVACT1_Pos) /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT1_TGL                (PORT_EVCTRL_EVACT1_TGL_Val << PORT_EVCTRL_EVACT1_Pos) /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_PORTEI1_Pos               _UINT32_(15)                                         /* (PORT_EVCTRL) PORT Event 1 Input Enable Position */
#define PORT_EVCTRL_PORTEI1_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI1_Pos)           /* (PORT_EVCTRL) PORT Event 1 Input Enable Mask */
#define PORT_EVCTRL_PORTEI1(value)            (PORT_EVCTRL_PORTEI1_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI1_Pos)) /* Assignment of value for PORTEI1 in the PORT_EVCTRL register */
#define PORT_EVCTRL_PID2_Pos                  _UINT32_(16)                                         /* (PORT_EVCTRL) Event 2 Pin Identifier Position */
#define PORT_EVCTRL_PID2_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID2_Pos)             /* (PORT_EVCTRL) Event 2 Pin Identifier Mask */
#define PORT_EVCTRL_PID2(value)               (PORT_EVCTRL_PID2_Msk & (_UINT32_(value) << PORT_EVCTRL_PID2_Pos)) /* Assignment of value for PID2 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_PID2_PIN0_Val           _UINT32_(0x0)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 0  */
#define   PORT_EVCTRL_PID2_PIN1_Val           _UINT32_(0x1)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 1  */
#define   PORT_EVCTRL_PID2_PIN2_Val           _UINT32_(0x2)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 2  */
#define   PORT_EVCTRL_PID2_PIN3_Val           _UINT32_(0x3)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 3  */
#define   PORT_EVCTRL_PID2_PIN4_Val           _UINT32_(0x4)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 4  */
#define   PORT_EVCTRL_PID2_PIN5_Val           _UINT32_(0x5)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 5  */
#define   PORT_EVCTRL_PID2_PIN6_Val           _UINT32_(0x6)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 6  */
#define   PORT_EVCTRL_PID2_PIN7_Val           _UINT32_(0x7)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 7  */
#define   PORT_EVCTRL_PID2_PIN8_Val           _UINT32_(0x8)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 8  */
#define   PORT_EVCTRL_PID2_PIN9_Val           _UINT32_(0x9)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 9  */
#define   PORT_EVCTRL_PID2_PIN10_Val          _UINT32_(0xA)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 10  */
#define   PORT_EVCTRL_PID2_PIN11_Val          _UINT32_(0xB)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 11  */
#define   PORT_EVCTRL_PID2_PIN12_Val          _UINT32_(0xC)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 12  */
#define   PORT_EVCTRL_PID2_PIN13_Val          _UINT32_(0xD)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 13  */
#define   PORT_EVCTRL_PID2_PIN14_Val          _UINT32_(0xE)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 14  */
#define   PORT_EVCTRL_PID2_PIN15_Val          _UINT32_(0xF)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 15  */
#define   PORT_EVCTRL_PID2_PIN16_Val          _UINT32_(0x10)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 16  */
#define   PORT_EVCTRL_PID2_PIN17_Val          _UINT32_(0x11)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 17  */
#define   PORT_EVCTRL_PID2_PIN18_Val          _UINT32_(0x12)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 18  */
#define   PORT_EVCTRL_PID2_PIN19_Val          _UINT32_(0x13)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 19  */
#define   PORT_EVCTRL_PID2_PIN20_Val          _UINT32_(0x14)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 20  */
#define   PORT_EVCTRL_PID2_PIN21_Val          _UINT32_(0x15)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 21  */
#define   PORT_EVCTRL_PID2_PIN22_Val          _UINT32_(0x16)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 22  */
#define   PORT_EVCTRL_PID2_PIN23_Val          _UINT32_(0x17)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 23  */
#define   PORT_EVCTRL_PID2_PIN24_Val          _UINT32_(0x18)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 24  */
#define   PORT_EVCTRL_PID2_PIN25_Val          _UINT32_(0x19)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 25  */
#define   PORT_EVCTRL_PID2_PIN26_Val          _UINT32_(0x1A)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 26  */
#define   PORT_EVCTRL_PID2_PIN27_Val          _UINT32_(0x1B)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 27  */
#define   PORT_EVCTRL_PID2_PIN28_Val          _UINT32_(0x1C)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 28  */
#define   PORT_EVCTRL_PID2_PIN29_Val          _UINT32_(0x1D)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 29  */
#define   PORT_EVCTRL_PID2_PIN30_Val          _UINT32_(0x1E)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 30  */
#define   PORT_EVCTRL_PID2_PIN31_Val          _UINT32_(0x1F)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 31  */
#define PORT_EVCTRL_PID2_PIN0                 (PORT_EVCTRL_PID2_PIN0_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 0 Position */
#define PORT_EVCTRL_PID2_PIN1                 (PORT_EVCTRL_PID2_PIN1_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 1 Position */
#define PORT_EVCTRL_PID2_PIN2                 (PORT_EVCTRL_PID2_PIN2_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 2 Position */
#define PORT_EVCTRL_PID2_PIN3                 (PORT_EVCTRL_PID2_PIN3_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 3 Position */
#define PORT_EVCTRL_PID2_PIN4                 (PORT_EVCTRL_PID2_PIN4_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 4 Position */
#define PORT_EVCTRL_PID2_PIN5                 (PORT_EVCTRL_PID2_PIN5_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 5 Position */
#define PORT_EVCTRL_PID2_PIN6                 (PORT_EVCTRL_PID2_PIN6_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 6 Position */
#define PORT_EVCTRL_PID2_PIN7                 (PORT_EVCTRL_PID2_PIN7_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 7 Position */
#define PORT_EVCTRL_PID2_PIN8                 (PORT_EVCTRL_PID2_PIN8_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 8 Position */
#define PORT_EVCTRL_PID2_PIN9                 (PORT_EVCTRL_PID2_PIN9_Val << PORT_EVCTRL_PID2_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 9 Position */
#define PORT_EVCTRL_PID2_PIN10                (PORT_EVCTRL_PID2_PIN10_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 10 Position */
#define PORT_EVCTRL_PID2_PIN11                (PORT_EVCTRL_PID2_PIN11_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 11 Position */
#define PORT_EVCTRL_PID2_PIN12                (PORT_EVCTRL_PID2_PIN12_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 12 Position */
#define PORT_EVCTRL_PID2_PIN13                (PORT_EVCTRL_PID2_PIN13_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 13 Position */
#define PORT_EVCTRL_PID2_PIN14                (PORT_EVCTRL_PID2_PIN14_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 14 Position */
#define PORT_EVCTRL_PID2_PIN15                (PORT_EVCTRL_PID2_PIN15_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 15 Position */
#define PORT_EVCTRL_PID2_PIN16                (PORT_EVCTRL_PID2_PIN16_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 16 Position */
#define PORT_EVCTRL_PID2_PIN17                (PORT_EVCTRL_PID2_PIN17_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 17 Position */
#define PORT_EVCTRL_PID2_PIN18                (PORT_EVCTRL_PID2_PIN18_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 18 Position */
#define PORT_EVCTRL_PID2_PIN19                (PORT_EVCTRL_PID2_PIN19_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 19 Position */
#define PORT_EVCTRL_PID2_PIN20                (PORT_EVCTRL_PID2_PIN20_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 20 Position */
#define PORT_EVCTRL_PID2_PIN21                (PORT_EVCTRL_PID2_PIN21_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 21 Position */
#define PORT_EVCTRL_PID2_PIN22                (PORT_EVCTRL_PID2_PIN22_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 22 Position */
#define PORT_EVCTRL_PID2_PIN23                (PORT_EVCTRL_PID2_PIN23_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 23 Position */
#define PORT_EVCTRL_PID2_PIN24                (PORT_EVCTRL_PID2_PIN24_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 24 Position */
#define PORT_EVCTRL_PID2_PIN25                (PORT_EVCTRL_PID2_PIN25_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 25 Position */
#define PORT_EVCTRL_PID2_PIN26                (PORT_EVCTRL_PID2_PIN26_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 26 Position */
#define PORT_EVCTRL_PID2_PIN27                (PORT_EVCTRL_PID2_PIN27_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 27 Position */
#define PORT_EVCTRL_PID2_PIN28                (PORT_EVCTRL_PID2_PIN28_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 28 Position */
#define PORT_EVCTRL_PID2_PIN29                (PORT_EVCTRL_PID2_PIN29_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 29 Position */
#define PORT_EVCTRL_PID2_PIN30                (PORT_EVCTRL_PID2_PIN30_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 30 Position */
#define PORT_EVCTRL_PID2_PIN31                (PORT_EVCTRL_PID2_PIN31_Val << PORT_EVCTRL_PID2_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 31 Position */
#define PORT_EVCTRL_EVACT2_Pos                _UINT32_(21)                                         /* (PORT_EVCTRL) Event 2 Action Position */
#define PORT_EVCTRL_EVACT2_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT2_Pos)            /* (PORT_EVCTRL) Event 2 Action Mask */
#define PORT_EVCTRL_EVACT2(value)             (PORT_EVCTRL_EVACT2_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT2_Pos)) /* Assignment of value for EVACT2 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_EVACT2_OUT_Val          _UINT32_(0x0)                                        /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event  */
#define   PORT_EVCTRL_EVACT2_SET_Val          _UINT32_(0x1)                                        /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT2_CLR_Val          _UINT32_(0x2)                                        /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT2_TGL_Val          _UINT32_(0x3)                                        /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event  */
#define PORT_EVCTRL_EVACT2_OUT                (PORT_EVCTRL_EVACT2_OUT_Val << PORT_EVCTRL_EVACT2_Pos) /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event Position */
#define PORT_EVCTRL_EVACT2_SET                (PORT_EVCTRL_EVACT2_SET_Val << PORT_EVCTRL_EVACT2_Pos) /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT2_CLR                (PORT_EVCTRL_EVACT2_CLR_Val << PORT_EVCTRL_EVACT2_Pos) /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT2_TGL                (PORT_EVCTRL_EVACT2_TGL_Val << PORT_EVCTRL_EVACT2_Pos) /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_PORTEI2_Pos               _UINT32_(23)                                         /* (PORT_EVCTRL) PORT Event 2 Input Enable Position */
#define PORT_EVCTRL_PORTEI2_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI2_Pos)           /* (PORT_EVCTRL) PORT Event 2 Input Enable Mask */
#define PORT_EVCTRL_PORTEI2(value)            (PORT_EVCTRL_PORTEI2_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI2_Pos)) /* Assignment of value for PORTEI2 in the PORT_EVCTRL register */
#define PORT_EVCTRL_PID3_Pos                  _UINT32_(24)                                         /* (PORT_EVCTRL) Event 3 Pin Identifier Position */
#define PORT_EVCTRL_PID3_Msk                  (_UINT32_(0x1F) << PORT_EVCTRL_PID3_Pos)             /* (PORT_EVCTRL) Event 3 Pin Identifier Mask */
#define PORT_EVCTRL_PID3(value)               (PORT_EVCTRL_PID3_Msk & (_UINT32_(value) << PORT_EVCTRL_PID3_Pos)) /* Assignment of value for PID3 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_PID3_PIN0_Val           _UINT32_(0x0)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 0  */
#define   PORT_EVCTRL_PID3_PIN1_Val           _UINT32_(0x1)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 1  */
#define   PORT_EVCTRL_PID3_PIN2_Val           _UINT32_(0x2)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 2  */
#define   PORT_EVCTRL_PID3_PIN3_Val           _UINT32_(0x3)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 3  */
#define   PORT_EVCTRL_PID3_PIN4_Val           _UINT32_(0x4)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 4  */
#define   PORT_EVCTRL_PID3_PIN5_Val           _UINT32_(0x5)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 5  */
#define   PORT_EVCTRL_PID3_PIN6_Val           _UINT32_(0x6)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 6  */
#define   PORT_EVCTRL_PID3_PIN7_Val           _UINT32_(0x7)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 7  */
#define   PORT_EVCTRL_PID3_PIN8_Val           _UINT32_(0x8)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 8  */
#define   PORT_EVCTRL_PID3_PIN9_Val           _UINT32_(0x9)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 9  */
#define   PORT_EVCTRL_PID3_PIN10_Val          _UINT32_(0xA)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 10  */
#define   PORT_EVCTRL_PID3_PIN11_Val          _UINT32_(0xB)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 11  */
#define   PORT_EVCTRL_PID3_PIN12_Val          _UINT32_(0xC)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 12  */
#define   PORT_EVCTRL_PID3_PIN13_Val          _UINT32_(0xD)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 13  */
#define   PORT_EVCTRL_PID3_PIN14_Val          _UINT32_(0xE)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 14  */
#define   PORT_EVCTRL_PID3_PIN15_Val          _UINT32_(0xF)                                        /* (PORT_EVCTRL) Event actions will be executed on pin 15  */
#define   PORT_EVCTRL_PID3_PIN16_Val          _UINT32_(0x10)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 16  */
#define   PORT_EVCTRL_PID3_PIN17_Val          _UINT32_(0x11)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 17  */
#define   PORT_EVCTRL_PID3_PIN18_Val          _UINT32_(0x12)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 18  */
#define   PORT_EVCTRL_PID3_PIN19_Val          _UINT32_(0x13)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 19  */
#define   PORT_EVCTRL_PID3_PIN20_Val          _UINT32_(0x14)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 20  */
#define   PORT_EVCTRL_PID3_PIN21_Val          _UINT32_(0x15)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 21  */
#define   PORT_EVCTRL_PID3_PIN22_Val          _UINT32_(0x16)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 22  */
#define   PORT_EVCTRL_PID3_PIN23_Val          _UINT32_(0x17)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 23  */
#define   PORT_EVCTRL_PID3_PIN24_Val          _UINT32_(0x18)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 24  */
#define   PORT_EVCTRL_PID3_PIN25_Val          _UINT32_(0x19)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 25  */
#define   PORT_EVCTRL_PID3_PIN26_Val          _UINT32_(0x1A)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 26  */
#define   PORT_EVCTRL_PID3_PIN27_Val          _UINT32_(0x1B)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 27  */
#define   PORT_EVCTRL_PID3_PIN28_Val          _UINT32_(0x1C)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 28  */
#define   PORT_EVCTRL_PID3_PIN29_Val          _UINT32_(0x1D)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 29  */
#define   PORT_EVCTRL_PID3_PIN30_Val          _UINT32_(0x1E)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 30  */
#define   PORT_EVCTRL_PID3_PIN31_Val          _UINT32_(0x1F)                                       /* (PORT_EVCTRL) Event actions will be executed on pin 31  */
#define PORT_EVCTRL_PID3_PIN0                 (PORT_EVCTRL_PID3_PIN0_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 0 Position */
#define PORT_EVCTRL_PID3_PIN1                 (PORT_EVCTRL_PID3_PIN1_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 1 Position */
#define PORT_EVCTRL_PID3_PIN2                 (PORT_EVCTRL_PID3_PIN2_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 2 Position */
#define PORT_EVCTRL_PID3_PIN3                 (PORT_EVCTRL_PID3_PIN3_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 3 Position */
#define PORT_EVCTRL_PID3_PIN4                 (PORT_EVCTRL_PID3_PIN4_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 4 Position */
#define PORT_EVCTRL_PID3_PIN5                 (PORT_EVCTRL_PID3_PIN5_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 5 Position */
#define PORT_EVCTRL_PID3_PIN6                 (PORT_EVCTRL_PID3_PIN6_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 6 Position */
#define PORT_EVCTRL_PID3_PIN7                 (PORT_EVCTRL_PID3_PIN7_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 7 Position */
#define PORT_EVCTRL_PID3_PIN8                 (PORT_EVCTRL_PID3_PIN8_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 8 Position */
#define PORT_EVCTRL_PID3_PIN9                 (PORT_EVCTRL_PID3_PIN9_Val << PORT_EVCTRL_PID3_Pos)  /* (PORT_EVCTRL) Event actions will be executed on pin 9 Position */
#define PORT_EVCTRL_PID3_PIN10                (PORT_EVCTRL_PID3_PIN10_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 10 Position */
#define PORT_EVCTRL_PID3_PIN11                (PORT_EVCTRL_PID3_PIN11_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 11 Position */
#define PORT_EVCTRL_PID3_PIN12                (PORT_EVCTRL_PID3_PIN12_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 12 Position */
#define PORT_EVCTRL_PID3_PIN13                (PORT_EVCTRL_PID3_PIN13_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 13 Position */
#define PORT_EVCTRL_PID3_PIN14                (PORT_EVCTRL_PID3_PIN14_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 14 Position */
#define PORT_EVCTRL_PID3_PIN15                (PORT_EVCTRL_PID3_PIN15_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 15 Position */
#define PORT_EVCTRL_PID3_PIN16                (PORT_EVCTRL_PID3_PIN16_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 16 Position */
#define PORT_EVCTRL_PID3_PIN17                (PORT_EVCTRL_PID3_PIN17_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 17 Position */
#define PORT_EVCTRL_PID3_PIN18                (PORT_EVCTRL_PID3_PIN18_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 18 Position */
#define PORT_EVCTRL_PID3_PIN19                (PORT_EVCTRL_PID3_PIN19_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 19 Position */
#define PORT_EVCTRL_PID3_PIN20                (PORT_EVCTRL_PID3_PIN20_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 20 Position */
#define PORT_EVCTRL_PID3_PIN21                (PORT_EVCTRL_PID3_PIN21_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 21 Position */
#define PORT_EVCTRL_PID3_PIN22                (PORT_EVCTRL_PID3_PIN22_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 22 Position */
#define PORT_EVCTRL_PID3_PIN23                (PORT_EVCTRL_PID3_PIN23_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 23 Position */
#define PORT_EVCTRL_PID3_PIN24                (PORT_EVCTRL_PID3_PIN24_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 24 Position */
#define PORT_EVCTRL_PID3_PIN25                (PORT_EVCTRL_PID3_PIN25_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 25 Position */
#define PORT_EVCTRL_PID3_PIN26                (PORT_EVCTRL_PID3_PIN26_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 26 Position */
#define PORT_EVCTRL_PID3_PIN27                (PORT_EVCTRL_PID3_PIN27_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 27 Position */
#define PORT_EVCTRL_PID3_PIN28                (PORT_EVCTRL_PID3_PIN28_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 28 Position */
#define PORT_EVCTRL_PID3_PIN29                (PORT_EVCTRL_PID3_PIN29_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 29 Position */
#define PORT_EVCTRL_PID3_PIN30                (PORT_EVCTRL_PID3_PIN30_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 30 Position */
#define PORT_EVCTRL_PID3_PIN31                (PORT_EVCTRL_PID3_PIN31_Val << PORT_EVCTRL_PID3_Pos) /* (PORT_EVCTRL) Event actions will be executed on pin 31 Position */
#define PORT_EVCTRL_EVACT3_Pos                _UINT32_(29)                                         /* (PORT_EVCTRL) Event 3 Action Position */
#define PORT_EVCTRL_EVACT3_Msk                (_UINT32_(0x3) << PORT_EVCTRL_EVACT3_Pos)            /* (PORT_EVCTRL) Event 3 Action Mask */
#define PORT_EVCTRL_EVACT3(value)             (PORT_EVCTRL_EVACT3_Msk & (_UINT32_(value) << PORT_EVCTRL_EVACT3_Pos)) /* Assignment of value for EVACT3 in the PORT_EVCTRL register */
#define   PORT_EVCTRL_EVACT3_OUT_Val          _UINT32_(0x0)                                        /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event  */
#define   PORT_EVCTRL_EVACT3_SET_Val          _UINT32_(0x1)                                        /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT3_CLR_Val          _UINT32_(0x2)                                        /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event  */
#define   PORT_EVCTRL_EVACT3_TGL_Val          _UINT32_(0x3)                                        /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event  */
#define PORT_EVCTRL_EVACT3_OUT                (PORT_EVCTRL_EVACT3_OUT_Val << PORT_EVCTRL_EVACT3_Pos) /* (PORT_EVCTRL) The output value of pin PIDn will be set to the level of the event Position */
#define PORT_EVCTRL_EVACT3_SET                (PORT_EVCTRL_EVACT3_SET_Val << PORT_EVCTRL_EVACT3_Pos) /* (PORT_EVCTRL) Set the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT3_CLR                (PORT_EVCTRL_EVACT3_CLR_Val << PORT_EVCTRL_EVACT3_Pos) /* (PORT_EVCTRL) Clear the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_EVACT3_TGL                (PORT_EVCTRL_EVACT3_TGL_Val << PORT_EVCTRL_EVACT3_Pos) /* (PORT_EVCTRL) Toggle the output value of pin PIDn on the rising edge of the event Position */
#define PORT_EVCTRL_PORTEI3_Pos               _UINT32_(31)                                         /* (PORT_EVCTRL) PORT Event 3 Input Enable Position */
#define PORT_EVCTRL_PORTEI3_Msk               (_UINT32_(0x1) << PORT_EVCTRL_PORTEI3_Pos)           /* (PORT_EVCTRL) PORT Event 3 Input Enable Mask */
#define PORT_EVCTRL_PORTEI3(value)            (PORT_EVCTRL_PORTEI3_Msk & (_UINT32_(value) << PORT_EVCTRL_PORTEI3_Pos)) /* Assignment of value for PORTEI3 in the PORT_EVCTRL register */
#define PORT_EVCTRL_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_EVCTRL) Register Mask  */


/* -------- PORT_PMUX : (PORT Offset: 0x30) (R/W 8) Peripheral Multiplexing # -------- */
#define PORT_PMUX_RESETVALUE                  _UINT8_(0x00)                                        /*  (PORT_PMUX) Peripheral Multiplexing #  Reset Value */

#define PORT_PMUX_PMUXE_Pos                   _UINT8_(0)                                           /* (PORT_PMUX) Peripheral Multiplexing for Even-Numbered Pin Position */
#define PORT_PMUX_PMUXE_Msk                   (_UINT8_(0xF) << PORT_PMUX_PMUXE_Pos)                /* (PORT_PMUX) Peripheral Multiplexing for Even-Numbered Pin Mask */
#define PORT_PMUX_PMUXE(value)                (PORT_PMUX_PMUXE_Msk & (_UINT8_(value) << PORT_PMUX_PMUXE_Pos)) /* Assignment of value for PMUXE in the PORT_PMUX register */
#define   PORT_PMUX_PMUXE_A_Val               _UINT8_(0x0)                                         /* (PORT_PMUX) Peripheral function A selected  */
#define   PORT_PMUX_PMUXE_B_Val               _UINT8_(0x1)                                         /* (PORT_PMUX) Peripheral function B selected  */
#define   PORT_PMUX_PMUXE_C_Val               _UINT8_(0x2)                                         /* (PORT_PMUX) Peripheral function C selected  */
#define   PORT_PMUX_PMUXE_D_Val               _UINT8_(0x3)                                         /* (PORT_PMUX) Peripheral function D selected  */
#define   PORT_PMUX_PMUXE_E_Val               _UINT8_(0x4)                                         /* (PORT_PMUX) Peripheral function E selected  */
#define   PORT_PMUX_PMUXE_F_Val               _UINT8_(0x5)                                         /* (PORT_PMUX) Peripheral function F selected  */
#define   PORT_PMUX_PMUXE_G_Val               _UINT8_(0x6)                                         /* (PORT_PMUX) Peripheral function G selected  */
#define   PORT_PMUX_PMUXE_H_Val               _UINT8_(0x7)                                         /* (PORT_PMUX) Peripheral function H selected  */
#define   PORT_PMUX_PMUXE_I_Val               _UINT8_(0x8)                                         /* (PORT_PMUX) Peripheral function I selected  */
#define   PORT_PMUX_PMUXE_J_Val               _UINT8_(0x9)                                         /* (PORT_PMUX) Peripheral function J selected  */
#define PORT_PMUX_PMUXE_A                     (PORT_PMUX_PMUXE_A_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function A selected Position */
#define PORT_PMUX_PMUXE_B                     (PORT_PMUX_PMUXE_B_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function B selected Position */
#define PORT_PMUX_PMUXE_C                     (PORT_PMUX_PMUXE_C_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function C selected Position */
#define PORT_PMUX_PMUXE_D                     (PORT_PMUX_PMUXE_D_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function D selected Position */
#define PORT_PMUX_PMUXE_E                     (PORT_PMUX_PMUXE_E_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function E selected Position */
#define PORT_PMUX_PMUXE_F                     (PORT_PMUX_PMUXE_F_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function F selected Position */
#define PORT_PMUX_PMUXE_G                     (PORT_PMUX_PMUXE_G_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function G selected Position */
#define PORT_PMUX_PMUXE_H                     (PORT_PMUX_PMUXE_H_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function H selected Position */
#define PORT_PMUX_PMUXE_I                     (PORT_PMUX_PMUXE_I_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function I selected Position */
#define PORT_PMUX_PMUXE_J                     (PORT_PMUX_PMUXE_J_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function J selected Position */
#define PORT_PMUX_PMUXO_Pos                   _UINT8_(4)                                           /* (PORT_PMUX) Peripheral Multiplexing for Odd-Numbered Pin Position */
#define PORT_PMUX_PMUXO_Msk                   (_UINT8_(0xF) << PORT_PMUX_PMUXO_Pos)                /* (PORT_PMUX) Peripheral Multiplexing for Odd-Numbered Pin Mask */
#define PORT_PMUX_PMUXO(value)                (PORT_PMUX_PMUXO_Msk & (_UINT8_(value) << PORT_PMUX_PMUXO_Pos)) /* Assignment of value for PMUXO in the PORT_PMUX register */
#define   PORT_PMUX_PMUXO_A_Val               _UINT8_(0x0)                                         /* (PORT_PMUX) Peripheral function A selected  */
#define   PORT_PMUX_PMUXO_B_Val               _UINT8_(0x1)                                         /* (PORT_PMUX) Peripheral function B selected  */
#define   PORT_PMUX_PMUXO_C_Val               _UINT8_(0x2)                                         /* (PORT_PMUX) Peripheral function C selected  */
#define   PORT_PMUX_PMUXO_D_Val               _UINT8_(0x3)                                         /* (PORT_PMUX) Peripheral function D selected  */
#define   PORT_PMUX_PMUXO_E_Val               _UINT8_(0x4)                                         /* (PORT_PMUX) Peripheral function E selected  */
#define   PORT_PMUX_PMUXO_F_Val               _UINT8_(0x5)                                         /* (PORT_PMUX) Peripheral function F selected  */
#define   PORT_PMUX_PMUXO_G_Val               _UINT8_(0x6)                                         /* (PORT_PMUX) Peripheral function G selected  */
#define   PORT_PMUX_PMUXO_H_Val               _UINT8_(0x7)                                         /* (PORT_PMUX) Peripheral function H selected  */
#define   PORT_PMUX_PMUXO_I_Val               _UINT8_(0x8)                                         /* (PORT_PMUX) Peripheral function I selected  */
#define   PORT_PMUX_PMUXO_J_Val               _UINT8_(0x9)                                         /* (PORT_PMUX) Peripheral function J selected  */
#define PORT_PMUX_PMUXO_A                     (PORT_PMUX_PMUXO_A_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function A selected Position */
#define PORT_PMUX_PMUXO_B                     (PORT_PMUX_PMUXO_B_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function B selected Position */
#define PORT_PMUX_PMUXO_C                     (PORT_PMUX_PMUXO_C_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function C selected Position */
#define PORT_PMUX_PMUXO_D                     (PORT_PMUX_PMUXO_D_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function D selected Position */
#define PORT_PMUX_PMUXO_E                     (PORT_PMUX_PMUXO_E_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function E selected Position */
#define PORT_PMUX_PMUXO_F                     (PORT_PMUX_PMUXO_F_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function F selected Position */
#define PORT_PMUX_PMUXO_G                     (PORT_PMUX_PMUXO_G_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function G selected Position */
#define PORT_PMUX_PMUXO_H                     (PORT_PMUX_PMUXO_H_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function H selected Position */
#define PORT_PMUX_PMUXO_I                     (PORT_PMUX_PMUXO_I_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function I selected Position */
#define PORT_PMUX_PMUXO_J                     (PORT_PMUX_PMUXO_J_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function J selected Position */
#define PORT_PMUX_Msk                         _UINT8_(0xFF)                                        /* (PORT_PMUX) Register Mask  */


/* -------- PORT_PINCFG : (PORT Offset: 0x40) (R/W 8) Pin Configuration # -------- */
#define PORT_PINCFG_RESETVALUE                _UINT8_(0x00)                                        /*  (PORT_PINCFG) Pin Configuration #  Reset Value */

#define PORT_PINCFG_PMUXEN_Pos                _UINT8_(0)                                           /* (PORT_PINCFG) Peripheral Multiplexer Enable Position */
#define PORT_PINCFG_PMUXEN_Msk                (_UINT8_(0x1) << PORT_PINCFG_PMUXEN_Pos)             /* (PORT_PINCFG) Peripheral Multiplexer Enable Mask */
#define PORT_PINCFG_PMUXEN(value)             (PORT_PINCFG_PMUXEN_Msk & (_UINT8_(value) << PORT_PINCFG_PMUXEN_Pos)) /* Assignment of value for PMUXEN in the PORT_PINCFG register */
#define PORT_PINCFG_INEN_Pos                  _UINT8_(1)                                           /* (PORT_PINCFG) Input Buffer Enable Position */
#define PORT_PINCFG_INEN_Msk                  (_UINT8_(0x1) << PORT_PINCFG_INEN_Pos)               /* (PORT_PINCFG) Input Buffer Enable Mask */
#define PORT_PINCFG_INEN(value)               (PORT_PINCFG_INEN_Msk & (_UINT8_(value) << PORT_PINCFG_INEN_Pos)) /* Assignment of value for INEN in the PORT_PINCFG register */
#define PORT_PINCFG_PULLEN_Pos                _UINT8_(2)                                           /* (PORT_PINCFG) Pull Enable Position */
#define PORT_PINCFG_PULLEN_Msk                (_UINT8_(0x1) << PORT_PINCFG_PULLEN_Pos)             /* (PORT_PINCFG) Pull Enable Mask */
#define PORT_PINCFG_PULLEN(value)             (PORT_PINCFG_PULLEN_Msk & (_UINT8_(value) << PORT_PINCFG_PULLEN_Pos)) /* Assignment of value for PULLEN in the PORT_PINCFG register */
#define PORT_PINCFG_SLEWLIM_Pos               _UINT8_(4)                                           /* (PORT_PINCFG) Output Driver Slew Rate Limit Enable Position */
#define PORT_PINCFG_SLEWLIM_Msk               (_UINT8_(0x1) << PORT_PINCFG_SLEWLIM_Pos)            /* (PORT_PINCFG) Output Driver Slew Rate Limit Enable Mask */
#define PORT_PINCFG_SLEWLIM(value)            (PORT_PINCFG_SLEWLIM_Msk & (_UINT8_(value) << PORT_PINCFG_SLEWLIM_Pos)) /* Assignment of value for SLEWLIM in the PORT_PINCFG register */
#define PORT_PINCFG_Msk                       _UINT8_(0x17)                                        /* (PORT_PINCFG) Register Mask  */


/* PORT register offsets definitions */
#define PORT_DIR_REG_OFST              _UINT32_(0x00)      /* (PORT_DIR) Data Direction Offset */
#define PORT_DIRCLR_REG_OFST           _UINT32_(0x04)      /* (PORT_DIRCLR) Data Direction Clear Offset */
#define PORT_DIRSET_REG_OFST           _UINT32_(0x08)      /* (PORT_DIRSET) Data Direction Set Offset */
#define PORT_DIRTGL_REG_OFST           _UINT32_(0x0C)      /* (PORT_DIRTGL) Data Direction Toggle Offset */
#define PORT_OUT_REG_OFST              _UINT32_(0x10)      /* (PORT_OUT) Data Output Value Offset */
#define PORT_OUTCLR_REG_OFST           _UINT32_(0x14)      /* (PORT_OUTCLR) Data Output Value Clear Offset */
#define PORT_OUTSET_REG_OFST           _UINT32_(0x18)      /* (PORT_OUTSET) Data Output Value Set Offset */
#define PORT_OUTTGL_REG_OFST           _UINT32_(0x1C)      /* (PORT_OUTTGL) Data Output Value Toggle Offset */
#define PORT_IN_REG_OFST               _UINT32_(0x20)      /* (PORT_IN) Data Input Value Offset */
#define PORT_CTRL_REG_OFST             _UINT32_(0x24)      /* (PORT_CTRL) Control Offset */
#define PORT_WRCONFIG_REG_OFST         _UINT32_(0x28)      /* (PORT_WRCONFIG) Write Configuration Offset */
#define PORT_EVCTRL_REG_OFST           _UINT32_(0x2C)      /* (PORT_EVCTRL) Event Control Offset */
#define PORT_PMUX_REG_OFST             _UINT32_(0x30)      /* (PORT_PMUX) Peripheral Multiplexing # Offset */
#define PORT_PMUX0_REG_OFST            _UINT32_(0x30)      /* (PORT_PMUX0) Peripheral Multiplexing # Offset */
#define PORT_PMUX1_REG_OFST            _UINT32_(0x31)      /* (PORT_PMUX1) Peripheral Multiplexing # Offset */
#define PORT_PMUX2_REG_OFST            _UINT32_(0x32)      /* (PORT_PMUX2) Peripheral Multiplexing # Offset */
#define PORT_PMUX3_REG_OFST            _UINT32_(0x33)      /* (PORT_PMUX3) Peripheral Multiplexing # Offset */
#define PORT_PMUX4_REG_OFST            _UINT32_(0x34)      /* (PORT_PMUX4) Peripheral Multiplexing # Offset */
#define PORT_PMUX5_REG_OFST            _UINT32_(0x35)      /* (PORT_PMUX5) Peripheral Multiplexing # Offset */
#define PORT_PMUX6_REG_OFST            _UINT32_(0x36)      /* (PORT_PMUX6) Peripheral Multiplexing # Offset */
#define PORT_PMUX7_REG_OFST            _UINT32_(0x37)      /* (PORT_PMUX7) Peripheral Multiplexing # Offset */
#define PORT_PMUX8_REG_OFST            _UINT32_(0x38)      /* (PORT_PMUX8) Peripheral Multiplexing # Offset */
#define PORT_PMUX9_REG_OFST            _UINT32_(0x39)      /* (PORT_PMUX9) Peripheral Multiplexing # Offset */
#define PORT_PMUX10_REG_OFST           _UINT32_(0x3A)      /* (PORT_PMUX10) Peripheral Multiplexing # Offset */
#define PORT_PMUX11_REG_OFST           _UINT32_(0x3B)      /* (PORT_PMUX11) Peripheral Multiplexing # Offset */
#define PORT_PMUX12_REG_OFST           _UINT32_(0x3C)      /* (PORT_PMUX12) Peripheral Multiplexing # Offset */
#define PORT_PMUX13_REG_OFST           _UINT32_(0x3D)      /* (PORT_PMUX13) Peripheral Multiplexing # Offset */
#define PORT_PMUX14_REG_OFST           _UINT32_(0x3E)      /* (PORT_PMUX14) Peripheral Multiplexing # Offset */
#define PORT_PMUX15_REG_OFST           _UINT32_(0x3F)      /* (PORT_PMUX15) Peripheral Multiplexing # Offset */
#define PORT_PINCFG_REG_OFST           _UINT32_(0x40)      /* (PORT_PINCFG) Pin Configuration # Offset */
#define PORT_PINCFG0_REG_OFST          _UINT32_(0x40)      /* (PORT_PINCFG0) Pin Configuration # Offset */
#define PORT_PINCFG1_REG_OFST          _UINT32_(0x41)      /* (PORT_PINCFG1) Pin Configuration # Offset */
#define PORT_PINCFG2_REG_OFST          _UINT32_(0x42)      /* (PORT_PINCFG2) Pin Configuration # Offset */
#define PORT_PINCFG3_REG_OFST          _UINT32_(0x43)      /* (PORT_PINCFG3) Pin Configuration # Offset */
#define PORT_PINCFG4_REG_OFST          _UINT32_(0x44)      /* (PORT_PINCFG4) Pin Configuration # Offset */
#define PORT_PINCFG5_REG_OFST          _UINT32_(0x45)      /* (PORT_PINCFG5) Pin Configuration # Offset */
#define PORT_PINCFG6_REG_OFST          _UINT32_(0x46)      /* (PORT_PINCFG6) Pin Configuration # Offset */
#define PORT_PINCFG7_REG_OFST          _UINT32_(0x47)      /* (PORT_PINCFG7) Pin Configuration # Offset */
#define PORT_PINCFG8_REG_OFST          _UINT32_(0x48)      /* (PORT_PINCFG8) Pin Configuration # Offset */
#define PORT_PINCFG9_REG_OFST          _UINT32_(0x49)      /* (PORT_PINCFG9) Pin Configuration # Offset */
#define PORT_PINCFG10_REG_OFST         _UINT32_(0x4A)      /* (PORT_PINCFG10) Pin Configuration # Offset */
#define PORT_PINCFG11_REG_OFST         _UINT32_(0x4B)      /* (PORT_PINCFG11) Pin Configuration # Offset */
#define PORT_PINCFG12_REG_OFST         _UINT32_(0x4C)      /* (PORT_PINCFG12) Pin Configuration # Offset */
#define PORT_PINCFG13_REG_OFST         _UINT32_(0x4D)      /* (PORT_PINCFG13) Pin Configuration # Offset */
#define PORT_PINCFG14_REG_OFST         _UINT32_(0x4E)      /* (PORT_PINCFG14) Pin Configuration # Offset */
#define PORT_PINCFG15_REG_OFST         _UINT32_(0x4F)      /* (PORT_PINCFG15) Pin Configuration # Offset */
#define PORT_PINCFG16_REG_OFST         _UINT32_(0x50)      /* (PORT_PINCFG16) Pin Configuration # Offset */
#define PORT_PINCFG17_REG_OFST         _UINT32_(0x51)      /* (PORT_PINCFG17) Pin Configuration # Offset */
#define PORT_PINCFG18_REG_OFST         _UINT32_(0x52)      /* (PORT_PINCFG18) Pin Configuration # Offset */
#define PORT_PINCFG19_REG_OFST         _UINT32_(0x53)      /* (PORT_PINCFG19) Pin Configuration # Offset */
#define PORT_PINCFG20_REG_OFST         _UINT32_(0x54)      /* (PORT_PINCFG20) Pin Configuration # Offset */
#define PORT_PINCFG21_REG_OFST         _UINT32_(0x55)      /* (PORT_PINCFG21) Pin Configuration # Offset */
#define PORT_PINCFG22_REG_OFST         _UINT32_(0x56)      /* (PORT_PINCFG22) Pin Configuration # Offset */
#define PORT_PINCFG23_REG_OFST         _UINT32_(0x57)      /* (PORT_PINCFG23) Pin Configuration # Offset */
#define PORT_PINCFG24_REG_OFST         _UINT32_(0x58)      /* (PORT_PINCFG24) Pin Configuration # Offset */
#define PORT_PINCFG25_REG_OFST         _UINT32_(0x59)      /* (PORT_PINCFG25) Pin Configuration # Offset */
#define PORT_PINCFG26_REG_OFST         _UINT32_(0x5A)      /* (PORT_PINCFG26) Pin Configuration # Offset */
#define PORT_PINCFG27_REG_OFST         _UINT32_(0x5B)      /* (PORT_PINCFG27) Pin Configuration # Offset */
#define PORT_PINCFG28_REG_OFST         _UINT32_(0x5C)      /* (PORT_PINCFG28) Pin Configuration # Offset */
#define PORT_PINCFG29_REG_OFST         _UINT32_(0x5D)      /* (PORT_PINCFG29) Pin Configuration # Offset */
#define PORT_PINCFG30_REG_OFST         _UINT32_(0x5E)      /* (PORT_PINCFG30) Pin Configuration # Offset */
#define PORT_PINCFG31_REG_OFST         _UINT32_(0x5F)      /* (PORT_PINCFG31) Pin Configuration # Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* GROUP register API structure */
typedef struct
{
  __IO  uint32_t                       PORT_DIR;           /* Offset: 0x00 (R/W  32) Data Direction */
  __IO  uint32_t                       PORT_DIRCLR;        /* Offset: 0x04 (R/W  32) Data Direction Clear */
  __IO  uint32_t                       PORT_DIRSET;        /* Offset: 0x08 (R/W  32) Data Direction Set */
  __IO  uint32_t                       PORT_DIRTGL;        /* Offset: 0x0C (R/W  32) Data Direction Toggle */
  __IO  uint32_t                       PORT_OUT;           /* Offset: 0x10 (R/W  32) Data Output Value */
  __IO  uint32_t                       PORT_OUTCLR;        /* Offset: 0x14 (R/W  32) Data Output Value Clear */
  __IO  uint32_t                       PORT_OUTSET;        /* Offset: 0x18 (R/W  32) Data Output Value Set */
  __IO  uint32_t                       PORT_OUTTGL;        /* Offset: 0x1C (R/W  32) Data Output Value Toggle */
  __I   uint32_t                       PORT_IN;            /* Offset: 0x20 (R/   32) Data Input Value */
  __IO  uint32_t                       PORT_CTRL;          /* Offset: 0x24 (R/W  32) Control */
  __O   uint32_t                       PORT_WRCONFIG;      /* Offset: 0x28 ( /W  32) Write Configuration */
  __IO  uint32_t                       PORT_EVCTRL;        /* Offset: 0x2C (R/W  32) Event Control */
  __IO  uint8_t                        PORT_PMUX[16];      /* Offset: 0x30 (R/W  8) Peripheral Multiplexing # */
  __IO  uint8_t                        PORT_PINCFG[32];    /* Offset: 0x40 (R/W  8) Pin Configuration # */
  __I   uint8_t                        Reserved1[0x20];
} port_group_registers_t;

#define PORT_GROUP_NUMBER 2

/* PORT register API structure */
typedef struct
{  /* I/O Pin Controller */
        port_group_registers_t         GROUP[PORT_GROUP_NUMBER]; /* Offset: 0x00  */
} port_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_PORT_COMPONENT_H_ */
