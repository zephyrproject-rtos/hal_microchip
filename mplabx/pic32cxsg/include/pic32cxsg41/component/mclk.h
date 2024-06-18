/*
 * Component description for MCLK
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-03-17T09:48:34Z */
#ifndef _PIC32CXSG41_MCLK_COMPONENT_H_
#define _PIC32CXSG41_MCLK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MCLK                                         */
/* ************************************************************************** */

/* -------- MCLK_INTENCLR : (MCLK Offset: 0x01) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CKRDY:1;          /*!< bit:      0  Clock Ready Interrupt Enable       */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTENCLR_RESETVALUE              _UINT8_(0x00)                                        /*  (MCLK_INTENCLR) Interrupt Enable Clear  Reset Value */

#define MCLK_INTENCLR_CKRDY_Pos               _UINT8_(0)                                           /* (MCLK_INTENCLR) Clock Ready Interrupt Enable Position */
#define MCLK_INTENCLR_CKRDY_Msk               (_UINT8_(0x1) << MCLK_INTENCLR_CKRDY_Pos)            /* (MCLK_INTENCLR) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENCLR_CKRDY(value)            (MCLK_INTENCLR_CKRDY_Msk & (_UINT8_(value) << MCLK_INTENCLR_CKRDY_Pos)) /* Assigment of value for CKRDY in the MCLK_INTENCLR register */
#define MCLK_INTENCLR_Msk                     _UINT8_(0x01)                                        /* (MCLK_INTENCLR) Register Mask  */


/* -------- MCLK_INTENSET : (MCLK Offset: 0x02) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CKRDY:1;          /*!< bit:      0  Clock Ready Interrupt Enable       */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTENSET_RESETVALUE              _UINT8_(0x00)                                        /*  (MCLK_INTENSET) Interrupt Enable Set  Reset Value */

#define MCLK_INTENSET_CKRDY_Pos               _UINT8_(0)                                           /* (MCLK_INTENSET) Clock Ready Interrupt Enable Position */
#define MCLK_INTENSET_CKRDY_Msk               (_UINT8_(0x1) << MCLK_INTENSET_CKRDY_Pos)            /* (MCLK_INTENSET) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENSET_CKRDY(value)            (MCLK_INTENSET_CKRDY_Msk & (_UINT8_(value) << MCLK_INTENSET_CKRDY_Pos)) /* Assigment of value for CKRDY in the MCLK_INTENSET register */
#define MCLK_INTENSET_Msk                     _UINT8_(0x01)                                        /* (MCLK_INTENSET) Register Mask  */


/* -------- MCLK_INTFLAG : (MCLK Offset: 0x03) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  CKRDY:1;          /*!< bit:      0  Clock Ready                        */
    __I uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTFLAG_RESETVALUE               _UINT8_(0x01)                                        /*  (MCLK_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define MCLK_INTFLAG_CKRDY_Pos                _UINT8_(0)                                           /* (MCLK_INTFLAG) Clock Ready Position */
#define MCLK_INTFLAG_CKRDY_Msk                (_UINT8_(0x1) << MCLK_INTFLAG_CKRDY_Pos)             /* (MCLK_INTFLAG) Clock Ready Mask */
#define MCLK_INTFLAG_CKRDY(value)             (MCLK_INTFLAG_CKRDY_Msk & (_UINT8_(value) << MCLK_INTFLAG_CKRDY_Pos)) /* Assigment of value for CKRDY in the MCLK_INTFLAG register */
#define MCLK_INTFLAG_Msk                      _UINT8_(0x01)                                        /* (MCLK_INTFLAG) Register Mask  */


/* -------- MCLK_HSDIV : (MCLK Offset: 0x04) ( R/ 8) HS Clock Division -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIV:8;            /*!< bit:  0.. 7  CPU Clock Division Factor          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_HSDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_HSDIV_RESETVALUE                 _UINT8_(0x01)                                        /*  (MCLK_HSDIV) HS Clock Division  Reset Value */

#define MCLK_HSDIV_DIV_Pos                    _UINT8_(0)                                           /* (MCLK_HSDIV) CPU Clock Division Factor Position */
#define MCLK_HSDIV_DIV_Msk                    (_UINT8_(0xFF) << MCLK_HSDIV_DIV_Pos)                /* (MCLK_HSDIV) CPU Clock Division Factor Mask */
#define MCLK_HSDIV_DIV(value)                 (MCLK_HSDIV_DIV_Msk & (_UINT8_(value) << MCLK_HSDIV_DIV_Pos)) /* Assigment of value for DIV in the MCLK_HSDIV register */
#define   MCLK_HSDIV_DIV_DIV1_Val             _UINT8_(0x1)                                         /* (MCLK_HSDIV) Divide by 1  */
#define MCLK_HSDIV_DIV_DIV1                   (MCLK_HSDIV_DIV_DIV1_Val << MCLK_HSDIV_DIV_Pos)      /* (MCLK_HSDIV) Divide by 1 Position  */
#define MCLK_HSDIV_Msk                        _UINT8_(0xFF)                                        /* (MCLK_HSDIV) Register Mask  */


/* -------- MCLK_CPUDIV : (MCLK Offset: 0x05) (R/W 8) CPU Clock Division -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIV:8;            /*!< bit:  0.. 7  Low-Power Clock Division Factor    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_CPUDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_CPUDIV_RESETVALUE                _UINT8_(0x01)                                        /*  (MCLK_CPUDIV) CPU Clock Division  Reset Value */

#define MCLK_CPUDIV_DIV_Pos                   _UINT8_(0)                                           /* (MCLK_CPUDIV) Low-Power Clock Division Factor Position */
#define MCLK_CPUDIV_DIV_Msk                   (_UINT8_(0xFF) << MCLK_CPUDIV_DIV_Pos)               /* (MCLK_CPUDIV) Low-Power Clock Division Factor Mask */
#define MCLK_CPUDIV_DIV(value)                (MCLK_CPUDIV_DIV_Msk & (_UINT8_(value) << MCLK_CPUDIV_DIV_Pos)) /* Assigment of value for DIV in the MCLK_CPUDIV register */
#define   MCLK_CPUDIV_DIV_DIV1_Val            _UINT8_(0x1)                                         /* (MCLK_CPUDIV) Divide by 1  */
#define   MCLK_CPUDIV_DIV_DIV2_Val            _UINT8_(0x2)                                         /* (MCLK_CPUDIV) Divide by 2  */
#define   MCLK_CPUDIV_DIV_DIV4_Val            _UINT8_(0x4)                                         /* (MCLK_CPUDIV) Divide by 4  */
#define   MCLK_CPUDIV_DIV_DIV8_Val            _UINT8_(0x8)                                         /* (MCLK_CPUDIV) Divide by 8  */
#define   MCLK_CPUDIV_DIV_DIV16_Val           _UINT8_(0x10)                                        /* (MCLK_CPUDIV) Divide by 16  */
#define   MCLK_CPUDIV_DIV_DIV32_Val           _UINT8_(0x20)                                        /* (MCLK_CPUDIV) Divide by 32  */
#define   MCLK_CPUDIV_DIV_DIV64_Val           _UINT8_(0x40)                                        /* (MCLK_CPUDIV) Divide by 64  */
#define   MCLK_CPUDIV_DIV_DIV128_Val          _UINT8_(0x80)                                        /* (MCLK_CPUDIV) Divide by 128  */
#define MCLK_CPUDIV_DIV_DIV1                  (MCLK_CPUDIV_DIV_DIV1_Val << MCLK_CPUDIV_DIV_Pos)    /* (MCLK_CPUDIV) Divide by 1 Position  */
#define MCLK_CPUDIV_DIV_DIV2                  (MCLK_CPUDIV_DIV_DIV2_Val << MCLK_CPUDIV_DIV_Pos)    /* (MCLK_CPUDIV) Divide by 2 Position  */
#define MCLK_CPUDIV_DIV_DIV4                  (MCLK_CPUDIV_DIV_DIV4_Val << MCLK_CPUDIV_DIV_Pos)    /* (MCLK_CPUDIV) Divide by 4 Position  */
#define MCLK_CPUDIV_DIV_DIV8                  (MCLK_CPUDIV_DIV_DIV8_Val << MCLK_CPUDIV_DIV_Pos)    /* (MCLK_CPUDIV) Divide by 8 Position  */
#define MCLK_CPUDIV_DIV_DIV16                 (MCLK_CPUDIV_DIV_DIV16_Val << MCLK_CPUDIV_DIV_Pos)   /* (MCLK_CPUDIV) Divide by 16 Position  */
#define MCLK_CPUDIV_DIV_DIV32                 (MCLK_CPUDIV_DIV_DIV32_Val << MCLK_CPUDIV_DIV_Pos)   /* (MCLK_CPUDIV) Divide by 32 Position  */
#define MCLK_CPUDIV_DIV_DIV64                 (MCLK_CPUDIV_DIV_DIV64_Val << MCLK_CPUDIV_DIV_Pos)   /* (MCLK_CPUDIV) Divide by 64 Position  */
#define MCLK_CPUDIV_DIV_DIV128                (MCLK_CPUDIV_DIV_DIV128_Val << MCLK_CPUDIV_DIV_Pos)  /* (MCLK_CPUDIV) Divide by 128 Position  */
#define MCLK_CPUDIV_Msk                       _UINT8_(0xFF)                                        /* (MCLK_CPUDIV) Register Mask  */


/* -------- MCLK_AHBMASK : (MCLK Offset: 0x10) (R/W 32) AHB Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HPB0_:1;          /*!< bit:      0  HPB0 AHB Clock Mask                */
    uint32_t HPB1_:1;          /*!< bit:      1  HPB1 AHB Clock Mask                */
    uint32_t HPB2_:1;          /*!< bit:      2  HPB2 AHB Clock Mask                */
    uint32_t HPB3_:1;          /*!< bit:      3  HPB3 AHB Clock Mask                */
    uint32_t DSU_:1;           /*!< bit:      4  DSU AHB Clock Mask                 */
    uint32_t HMATRIX_:1;       /*!< bit:      5  HMATRIX AHB Clock Mask             */
    uint32_t NVMCTRL_:1;       /*!< bit:      6  NVMCTRL AHB Clock Mask             */
    uint32_t HSRAM_:1;         /*!< bit:      7  HSRAM AHB Clock Mask               */
    uint32_t CMCC_:1;          /*!< bit:      8  CMCC AHB Clock Mask                */
    uint32_t DMAC_:1;          /*!< bit:      9  DMAC AHB Clock Mask                */
    uint32_t USB_:1;           /*!< bit:     10  USB AHB Clock Mask                 */
    uint32_t BKUPRAM_:1;       /*!< bit:     11  BKUPRAM AHB Clock Mask             */
    uint32_t PAC_:1;           /*!< bit:     12  PAC AHB Clock Mask                 */
    uint32_t QSPI_:1;          /*!< bit:     13  QSPI AHB Clock Mask                */
    uint32_t GMAC_:1;          /*!< bit:     14  GMAC AHB Clock Mask                */
    uint32_t SDHC0_:1;         /*!< bit:     15  SDHC0 AHB Clock Mask               */
    uint32_t SDHC1_:1;         /*!< bit:     16  SDHC1 AHB Clock Mask               */
    uint32_t CAN0_:1;          /*!< bit:     17  CAN0 AHB Clock Mask                */
    uint32_t CAN1_:1;          /*!< bit:     18  CAN1 AHB Clock Mask                */
    uint32_t ICM_:1;           /*!< bit:     19  ICM AHB Clock Mask                 */
    uint32_t PUKCC_:1;         /*!< bit:     20  PUKCC AHB Clock Mask               */
    uint32_t QSPI_2X_:1;       /*!< bit:     21  QSPI_2X AHB Clock Mask             */
    uint32_t NVMCTRL_SMEEPROM_:1; /*!< bit:     22  NVMCTRL_SMEEPROM AHB Clock Mask    */
    uint32_t NVMCTRL_CACHE_:1; /*!< bit:     23  NVMCTRL_CACHE AHB Clock Mask       */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_AHBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_AHBMASK_RESETVALUE               _UINT32_(0xFFFFFF)                                   /*  (MCLK_AHBMASK) AHB Mask  Reset Value */

#define MCLK_AHBMASK_HPB0_Pos                 _UINT32_(0)                                          /* (MCLK_AHBMASK) HPB0 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB0_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB0_Pos)             /* (MCLK_AHBMASK) HPB0 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB0(value)              (MCLK_AHBMASK_HPB0_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB0_Pos)) /* Assigment of value for HPB0 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB1_Pos                 _UINT32_(1)                                          /* (MCLK_AHBMASK) HPB1 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB1_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB1_Pos)             /* (MCLK_AHBMASK) HPB1 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB1(value)              (MCLK_AHBMASK_HPB1_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB1_Pos)) /* Assigment of value for HPB1 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB2_Pos                 _UINT32_(2)                                          /* (MCLK_AHBMASK) HPB2 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB2_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB2_Pos)             /* (MCLK_AHBMASK) HPB2 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB2(value)              (MCLK_AHBMASK_HPB2_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB2_Pos)) /* Assigment of value for HPB2 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB3_Pos                 _UINT32_(3)                                          /* (MCLK_AHBMASK) HPB3 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB3_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB3_Pos)             /* (MCLK_AHBMASK) HPB3 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB3(value)              (MCLK_AHBMASK_HPB3_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB3_Pos)) /* Assigment of value for HPB3 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_DSU_Pos                  _UINT32_(4)                                          /* (MCLK_AHBMASK) DSU AHB Clock Mask Position */
#define MCLK_AHBMASK_DSU_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_DSU_Pos)              /* (MCLK_AHBMASK) DSU AHB Clock Mask Mask */
#define MCLK_AHBMASK_DSU(value)               (MCLK_AHBMASK_DSU_Msk & (_UINT32_(value) << MCLK_AHBMASK_DSU_Pos)) /* Assigment of value for DSU in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_NVMCTRL_Pos              _UINT32_(6)                                          /* (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_Msk              (_UINT32_(0x1) << MCLK_AHBMASK_NVMCTRL_Pos)          /* (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL(value)           (MCLK_AHBMASK_NVMCTRL_Msk & (_UINT32_(value) << MCLK_AHBMASK_NVMCTRL_Pos)) /* Assigment of value for NVMCTRL in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_CMCC_Pos                 _UINT32_(8)                                          /* (MCLK_AHBMASK) CMCC AHB Clock Mask Position */
#define MCLK_AHBMASK_CMCC_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_CMCC_Pos)             /* (MCLK_AHBMASK) CMCC AHB Clock Mask Mask */
#define MCLK_AHBMASK_CMCC(value)              (MCLK_AHBMASK_CMCC_Msk & (_UINT32_(value) << MCLK_AHBMASK_CMCC_Pos)) /* Assigment of value for CMCC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_DMAC_Pos                 _UINT32_(9)                                          /* (MCLK_AHBMASK) DMAC AHB Clock Mask Position */
#define MCLK_AHBMASK_DMAC_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_DMAC_Pos)             /* (MCLK_AHBMASK) DMAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_DMAC(value)              (MCLK_AHBMASK_DMAC_Msk & (_UINT32_(value) << MCLK_AHBMASK_DMAC_Pos)) /* Assigment of value for DMAC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_USB_Pos                  _UINT32_(10)                                         /* (MCLK_AHBMASK) USB AHB Clock Mask Position */
#define MCLK_AHBMASK_USB_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_USB_Pos)              /* (MCLK_AHBMASK) USB AHB Clock Mask Mask */
#define MCLK_AHBMASK_USB(value)               (MCLK_AHBMASK_USB_Msk & (_UINT32_(value) << MCLK_AHBMASK_USB_Pos)) /* Assigment of value for USB in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_PAC_Pos                  _UINT32_(12)                                         /* (MCLK_AHBMASK) PAC AHB Clock Mask Position */
#define MCLK_AHBMASK_PAC_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_PAC_Pos)              /* (MCLK_AHBMASK) PAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_PAC(value)               (MCLK_AHBMASK_PAC_Msk & (_UINT32_(value) << MCLK_AHBMASK_PAC_Pos)) /* Assigment of value for PAC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_QSPI_Pos                 _UINT32_(13)                                         /* (MCLK_AHBMASK) QSPI AHB Clock Mask Position */
#define MCLK_AHBMASK_QSPI_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_QSPI_Pos)             /* (MCLK_AHBMASK) QSPI AHB Clock Mask Mask */
#define MCLK_AHBMASK_QSPI(value)              (MCLK_AHBMASK_QSPI_Msk & (_UINT32_(value) << MCLK_AHBMASK_QSPI_Pos)) /* Assigment of value for QSPI in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_GMAC_Pos                 _UINT32_(14)                                         /* (MCLK_AHBMASK) GMAC AHB Clock Mask Position */
#define MCLK_AHBMASK_GMAC_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_GMAC_Pos)             /* (MCLK_AHBMASK) GMAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_GMAC(value)              (MCLK_AHBMASK_GMAC_Msk & (_UINT32_(value) << MCLK_AHBMASK_GMAC_Pos)) /* Assigment of value for GMAC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_SDHC0_Pos                _UINT32_(15)                                         /* (MCLK_AHBMASK) SDHC0 AHB Clock Mask Position */
#define MCLK_AHBMASK_SDHC0_Msk                (_UINT32_(0x1) << MCLK_AHBMASK_SDHC0_Pos)            /* (MCLK_AHBMASK) SDHC0 AHB Clock Mask Mask */
#define MCLK_AHBMASK_SDHC0(value)             (MCLK_AHBMASK_SDHC0_Msk & (_UINT32_(value) << MCLK_AHBMASK_SDHC0_Pos)) /* Assigment of value for SDHC0 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_SDHC1_Pos                _UINT32_(16)                                         /* (MCLK_AHBMASK) SDHC1 AHB Clock Mask Position */
#define MCLK_AHBMASK_SDHC1_Msk                (_UINT32_(0x1) << MCLK_AHBMASK_SDHC1_Pos)            /* (MCLK_AHBMASK) SDHC1 AHB Clock Mask Mask */
#define MCLK_AHBMASK_SDHC1(value)             (MCLK_AHBMASK_SDHC1_Msk & (_UINT32_(value) << MCLK_AHBMASK_SDHC1_Pos)) /* Assigment of value for SDHC1 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_CAN0_Pos                 _UINT32_(17)                                         /* (MCLK_AHBMASK) CAN0 AHB Clock Mask Position */
#define MCLK_AHBMASK_CAN0_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_CAN0_Pos)             /* (MCLK_AHBMASK) CAN0 AHB Clock Mask Mask */
#define MCLK_AHBMASK_CAN0(value)              (MCLK_AHBMASK_CAN0_Msk & (_UINT32_(value) << MCLK_AHBMASK_CAN0_Pos)) /* Assigment of value for CAN0 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_CAN1_Pos                 _UINT32_(18)                                         /* (MCLK_AHBMASK) CAN1 AHB Clock Mask Position */
#define MCLK_AHBMASK_CAN1_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_CAN1_Pos)             /* (MCLK_AHBMASK) CAN1 AHB Clock Mask Mask */
#define MCLK_AHBMASK_CAN1(value)              (MCLK_AHBMASK_CAN1_Msk & (_UINT32_(value) << MCLK_AHBMASK_CAN1_Pos)) /* Assigment of value for CAN1 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_ICM_Pos                  _UINT32_(19)                                         /* (MCLK_AHBMASK) ICM AHB Clock Mask Position */
#define MCLK_AHBMASK_ICM_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_ICM_Pos)              /* (MCLK_AHBMASK) ICM AHB Clock Mask Mask */
#define MCLK_AHBMASK_ICM(value)               (MCLK_AHBMASK_ICM_Msk & (_UINT32_(value) << MCLK_AHBMASK_ICM_Pos)) /* Assigment of value for ICM in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_PUKCC_Pos                _UINT32_(20)                                         /* (MCLK_AHBMASK) PUKCC AHB Clock Mask Position */
#define MCLK_AHBMASK_PUKCC_Msk                (_UINT32_(0x1) << MCLK_AHBMASK_PUKCC_Pos)            /* (MCLK_AHBMASK) PUKCC AHB Clock Mask Mask */
#define MCLK_AHBMASK_PUKCC(value)             (MCLK_AHBMASK_PUKCC_Msk & (_UINT32_(value) << MCLK_AHBMASK_PUKCC_Pos)) /* Assigment of value for PUKCC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_QSPI_2X_Pos              _UINT32_(21)                                         /* (MCLK_AHBMASK) QSPI_2X AHB Clock Mask Position */
#define MCLK_AHBMASK_QSPI_2X_Msk              (_UINT32_(0x1) << MCLK_AHBMASK_QSPI_2X_Pos)          /* (MCLK_AHBMASK) QSPI_2X AHB Clock Mask Mask */
#define MCLK_AHBMASK_QSPI_2X(value)           (MCLK_AHBMASK_QSPI_2X_Msk & (_UINT32_(value) << MCLK_AHBMASK_QSPI_2X_Pos)) /* Assigment of value for QSPI_2X in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_NVMCTRL_SMEEPROM_Pos     _UINT32_(22)                                         /* (MCLK_AHBMASK) NVMCTRL_SMEEPROM AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_SMEEPROM_Msk     (_UINT32_(0x1) << MCLK_AHBMASK_NVMCTRL_SMEEPROM_Pos) /* (MCLK_AHBMASK) NVMCTRL_SMEEPROM AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL_SMEEPROM(value)  (MCLK_AHBMASK_NVMCTRL_SMEEPROM_Msk & (_UINT32_(value) << MCLK_AHBMASK_NVMCTRL_SMEEPROM_Pos)) /* Assigment of value for NVMCTRL_SMEEPROM in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_NVMCTRL_CACHE_Pos        _UINT32_(23)                                         /* (MCLK_AHBMASK) NVMCTRL_CACHE AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_CACHE_Msk        (_UINT32_(0x1) << MCLK_AHBMASK_NVMCTRL_CACHE_Pos)    /* (MCLK_AHBMASK) NVMCTRL_CACHE AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL_CACHE(value)     (MCLK_AHBMASK_NVMCTRL_CACHE_Msk & (_UINT32_(value) << MCLK_AHBMASK_NVMCTRL_CACHE_Pos)) /* Assigment of value for NVMCTRL_CACHE in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_Msk                      _UINT32_(0x00FFF75F)                                 /* (MCLK_AHBMASK) Register Mask  */

#define MCLK_AHBMASK_HPB_Pos                  _UINT32_(0)                                          /* (MCLK_AHBMASK Position) HPBx AHB Clock Mask */
#define MCLK_AHBMASK_HPB_Msk                  (_UINT32_(0xF) << MCLK_AHBMASK_HPB_Pos)              /* (MCLK_AHBMASK Mask) HPB */
#define MCLK_AHBMASK_HPB(value)               (MCLK_AHBMASK_HPB_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB_Pos)) 
#define MCLK_AHBMASK_SDHC_Pos                 _UINT32_(15)                                         /* (MCLK_AHBMASK Position) SDHCx AHB Clock Mask */
#define MCLK_AHBMASK_SDHC_Msk                 (_UINT32_(0x3) << MCLK_AHBMASK_SDHC_Pos)             /* (MCLK_AHBMASK Mask) SDHC */
#define MCLK_AHBMASK_SDHC(value)              (MCLK_AHBMASK_SDHC_Msk & (_UINT32_(value) << MCLK_AHBMASK_SDHC_Pos)) 
#define MCLK_AHBMASK_CAN_Pos                  _UINT32_(17)                                         /* (MCLK_AHBMASK Position) CANx AHB Clock Mask */
#define MCLK_AHBMASK_CAN_Msk                  (_UINT32_(0x3) << MCLK_AHBMASK_CAN_Pos)              /* (MCLK_AHBMASK Mask) CAN */
#define MCLK_AHBMASK_CAN(value)               (MCLK_AHBMASK_CAN_Msk & (_UINT32_(value) << MCLK_AHBMASK_CAN_Pos)) 

/* -------- MCLK_APBAMASK : (MCLK Offset: 0x14) (R/W 32) APBA Mask -------- */
/* -------- MCLK_APBAMASK : (MCLK Offset: 0x14) (R/W 32) APBA Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PAC_:1;           /*!< bit:      0  PAC APB Clock Enable               */
    uint32_t PM_:1;            /*!< bit:      1  PM APB Clock Enable                */
    uint32_t MCLK_:1;          /*!< bit:      2  MCLK APB Clock Enable              */
    uint32_t RSTC_:1;          /*!< bit:      3  RSTC APB Clock Enable              */
    uint32_t OSCCTRL_:1;       /*!< bit:      4  OSCCTRL APB Clock Enable           */
    uint32_t OSC32KCTRL_:1;    /*!< bit:      5  OSC32KCTRL APB Clock Enable        */
    uint32_t SUPC_:1;          /*!< bit:      6  SUPC APB Clock Enable              */
    uint32_t GCLK_:1;          /*!< bit:      7  GCLK APB Clock Enable              */
    uint32_t WDT_:1;           /*!< bit:      8  WDT APB Clock Enable               */
    uint32_t RTC_:1;           /*!< bit:      9  RTC APB Clock Enable               */
    uint32_t EIC_:1;           /*!< bit:     10  EIC APB Clock Enable               */
    uint32_t FREQM_:1;         /*!< bit:     11  FREQM APB Clock Enable             */
    uint32_t SERCOM0_:1;       /*!< bit:     12  SERCOM0 APB Clock Enable           */
    uint32_t SERCOM1_:1;       /*!< bit:     13  SERCOM1 APB Clock Enable           */
    uint32_t TC0_:1;           /*!< bit:     14  TC0 APB Clock Enable               */
    uint32_t TC1_:1;           /*!< bit:     15  TC1 APB Clock Enable               */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBAMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBAMASK_RESETVALUE              _UINT32_(0x7FF)                                      /*  (MCLK_APBAMASK) APBA Mask  Reset Value */

#define MCLK_APBAMASK_PAC_Pos                 _UINT32_(0)                                          /* (MCLK_APBAMASK) PAC APB Clock Enable Position */
#define MCLK_APBAMASK_PAC_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_PAC_Pos)             /* (MCLK_APBAMASK) PAC APB Clock Enable Mask */
#define MCLK_APBAMASK_PAC(value)              (MCLK_APBAMASK_PAC_Msk & (_UINT32_(value) << MCLK_APBAMASK_PAC_Pos)) /* Assigment of value for PAC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_PM_Pos                  _UINT32_(1)                                          /* (MCLK_APBAMASK) PM APB Clock Enable Position */
#define MCLK_APBAMASK_PM_Msk                  (_UINT32_(0x1) << MCLK_APBAMASK_PM_Pos)              /* (MCLK_APBAMASK) PM APB Clock Enable Mask */
#define MCLK_APBAMASK_PM(value)               (MCLK_APBAMASK_PM_Msk & (_UINT32_(value) << MCLK_APBAMASK_PM_Pos)) /* Assigment of value for PM in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_MCLK_Pos                _UINT32_(2)                                          /* (MCLK_APBAMASK) MCLK APB Clock Enable Position */
#define MCLK_APBAMASK_MCLK_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_MCLK_Pos)            /* (MCLK_APBAMASK) MCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_MCLK(value)             (MCLK_APBAMASK_MCLK_Msk & (_UINT32_(value) << MCLK_APBAMASK_MCLK_Pos)) /* Assigment of value for MCLK in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_RSTC_Pos                _UINT32_(3)                                          /* (MCLK_APBAMASK) RSTC APB Clock Enable Position */
#define MCLK_APBAMASK_RSTC_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_RSTC_Pos)            /* (MCLK_APBAMASK) RSTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RSTC(value)             (MCLK_APBAMASK_RSTC_Msk & (_UINT32_(value) << MCLK_APBAMASK_RSTC_Pos)) /* Assigment of value for RSTC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_OSCCTRL_Pos             _UINT32_(4)                                          /* (MCLK_APBAMASK) OSCCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSCCTRL_Msk             (_UINT32_(0x1) << MCLK_APBAMASK_OSCCTRL_Pos)         /* (MCLK_APBAMASK) OSCCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSCCTRL(value)          (MCLK_APBAMASK_OSCCTRL_Msk & (_UINT32_(value) << MCLK_APBAMASK_OSCCTRL_Pos)) /* Assigment of value for OSCCTRL in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_OSC32KCTRL_Pos          _UINT32_(5)                                          /* (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSC32KCTRL_Msk          (_UINT32_(0x1) << MCLK_APBAMASK_OSC32KCTRL_Pos)      /* (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSC32KCTRL(value)       (MCLK_APBAMASK_OSC32KCTRL_Msk & (_UINT32_(value) << MCLK_APBAMASK_OSC32KCTRL_Pos)) /* Assigment of value for OSC32KCTRL in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_SUPC_Pos                _UINT32_(6)                                          /* (MCLK_APBAMASK) SUPC APB Clock Enable Position */
#define MCLK_APBAMASK_SUPC_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_SUPC_Pos)            /* (MCLK_APBAMASK) SUPC APB Clock Enable Mask */
#define MCLK_APBAMASK_SUPC(value)             (MCLK_APBAMASK_SUPC_Msk & (_UINT32_(value) << MCLK_APBAMASK_SUPC_Pos)) /* Assigment of value for SUPC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_GCLK_Pos                _UINT32_(7)                                          /* (MCLK_APBAMASK) GCLK APB Clock Enable Position */
#define MCLK_APBAMASK_GCLK_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_GCLK_Pos)            /* (MCLK_APBAMASK) GCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_GCLK(value)             (MCLK_APBAMASK_GCLK_Msk & (_UINT32_(value) << MCLK_APBAMASK_GCLK_Pos)) /* Assigment of value for GCLK in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_WDT_Pos                 _UINT32_(8)                                          /* (MCLK_APBAMASK) WDT APB Clock Enable Position */
#define MCLK_APBAMASK_WDT_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_WDT_Pos)             /* (MCLK_APBAMASK) WDT APB Clock Enable Mask */
#define MCLK_APBAMASK_WDT(value)              (MCLK_APBAMASK_WDT_Msk & (_UINT32_(value) << MCLK_APBAMASK_WDT_Pos)) /* Assigment of value for WDT in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_RTC_Pos                 _UINT32_(9)                                          /* (MCLK_APBAMASK) RTC APB Clock Enable Position */
#define MCLK_APBAMASK_RTC_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_RTC_Pos)             /* (MCLK_APBAMASK) RTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RTC(value)              (MCLK_APBAMASK_RTC_Msk & (_UINT32_(value) << MCLK_APBAMASK_RTC_Pos)) /* Assigment of value for RTC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_EIC_Pos                 _UINT32_(10)                                         /* (MCLK_APBAMASK) EIC APB Clock Enable Position */
#define MCLK_APBAMASK_EIC_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_EIC_Pos)             /* (MCLK_APBAMASK) EIC APB Clock Enable Mask */
#define MCLK_APBAMASK_EIC_Val(value)          (MCLK_APBAMASK_EIC_Msk & (_UINT32_(value) << MCLK_APBAMASK_EIC_Pos)) /* Assigment of value for EIC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_FREQM_Pos               _UINT32_(11)                                         /* (MCLK_APBAMASK) FREQM APB Clock Enable Position */
#define MCLK_APBAMASK_FREQM_Msk               (_UINT32_(0x1) << MCLK_APBAMASK_FREQM_Pos)           /* (MCLK_APBAMASK) FREQM APB Clock Enable Mask */
#define MCLK_APBAMASK_FREQM(value)            (MCLK_APBAMASK_FREQM_Msk & (_UINT32_(value) << MCLK_APBAMASK_FREQM_Pos)) /* Assigment of value for FREQM in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_SERCOM0_Pos             _UINT32_(12)                                         /* (MCLK_APBAMASK) SERCOM0 APB Clock Enable Position */
#define MCLK_APBAMASK_SERCOM0_Msk             (_UINT32_(0x1) << MCLK_APBAMASK_SERCOM0_Pos)         /* (MCLK_APBAMASK) SERCOM0 APB Clock Enable Mask */
#define MCLK_APBAMASK_SERCOM0(value)          (MCLK_APBAMASK_SERCOM0_Msk & (_UINT32_(value) << MCLK_APBAMASK_SERCOM0_Pos)) /* Assigment of value for SERCOM0 in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_SERCOM1_Pos             _UINT32_(13)                                         /* (MCLK_APBAMASK) SERCOM1 APB Clock Enable Position */
#define MCLK_APBAMASK_SERCOM1_Msk             (_UINT32_(0x1) << MCLK_APBAMASK_SERCOM1_Pos)         /* (MCLK_APBAMASK) SERCOM1 APB Clock Enable Mask */
#define MCLK_APBAMASK_SERCOM1(value)          (MCLK_APBAMASK_SERCOM1_Msk & (_UINT32_(value) << MCLK_APBAMASK_SERCOM1_Pos)) /* Assigment of value for SERCOM1 in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_TC0_Pos                 _UINT32_(14)                                         /* (MCLK_APBAMASK) TC0 APB Clock Enable Position */
#define MCLK_APBAMASK_TC0_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_TC0_Pos)             /* (MCLK_APBAMASK) TC0 APB Clock Enable Mask */
#define MCLK_APBAMASK_TC0(value)              (MCLK_APBAMASK_TC0_Msk & (_UINT32_(value) << MCLK_APBAMASK_TC0_Pos)) /* Assigment of value for TC0 in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_TC1_Pos                 _UINT32_(15)                                         /* (MCLK_APBAMASK) TC1 APB Clock Enable Position */
#define MCLK_APBAMASK_TC1_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_TC1_Pos)             /* (MCLK_APBAMASK) TC1 APB Clock Enable Mask */
#define MCLK_APBAMASK_TC1(value)              (MCLK_APBAMASK_TC1_Msk & (_UINT32_(value) << MCLK_APBAMASK_TC1_Pos)) /* Assigment of value for TC1 in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_Msk                     _UINT32_(0x0000FFFF)                                /* (MCLK_APBAMASK) Register Mask  */
#define MCLK_APBAMASK_SERCOM_Pos              _UINT32_(12)                                         /* (MCLK_APBAMASK Position) SERCOMx APB Clock Enable */
#define MCLK_APBAMASK_SERCOM_Msk              (_UINT32_(0x3) << MCLK_APBAMASK_SERCOM_Pos)          /* (MCLK_APBAMASK Mask) SERCOM */
#define MCLK_APBAMASK_SERCOM(value)           (MCLK_APBAMASK_SERCOM_Msk & (_UINT32_(value) << MCLK_APBAMASK_SERCOM_Pos)) 
#define MCLK_APBAMASK_TC_Pos                  _UINT32_(14)                                         /* (MCLK_APBAMASK Position) TCx APB Clock Enable */
#define MCLK_APBAMASK_TC_Msk                  (_UINT32_(0x3) << MCLK_APBAMASK_TC_Pos)              /* (MCLK_APBAMASK Mask) TC */
#define MCLK_APBAMASK_TC(value)               (MCLK_APBAMASK_TC_Msk & (_UINT32_(value) << MCLK_APBAMASK_TC_Pos)) 

/* For SAM0 compatibily start */
#define MCLK_APBAMASK_EIC	                  (_UINT32_(0x1) << MCLK_APBAMASK_EIC_Pos)             /* (MCLK_APBAMASK) EIC APB Clock Enable Mask */
/* For SAM0 compatibily end */


/* -------- MCLK_APBBMASK : (MCLK Offset: 0x18) (R/W 32) APBB Mask -------- */
/* -------- MCLK_APBBMASK : (MCLK Offset: 0x18) (R/W 32) APBB Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t USB_:1;           /*!< bit:      0  USB APB Clock Enable               */
    uint32_t DSU_:1;           /*!< bit:      1  DSU APB Clock Enable               */
    uint32_t NVMCTRL_:1;       /*!< bit:      2  NVMCTRL APB Clock Enable           */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PORT_:1;          /*!< bit:      4  PORT APB Clock Enable              */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t HMATRIX_:1;       /*!< bit:      6  HMATRIX APB Clock Enable           */
    uint32_t EVSYS_:1;         /*!< bit:      7  EVSYS APB Clock Enable             */
    uint32_t :1;               /*!< bit:      8  Reserved                           */
    uint32_t SERCOM2_:1;       /*!< bit:      9  SERCOM2 APB Clock Enable           */
    uint32_t SERCOM3_:1;       /*!< bit:     10  SERCOM3 APB Clock Enable           */
    uint32_t TCC0_:1;          /*!< bit:     11  TCC0 APB Clock Enable              */
    uint32_t TCC1_:1;          /*!< bit:     12  TCC1 APB Clock Enable              */
    uint32_t TC2_:1;           /*!< bit:     13  TC2 APB Clock Enable               */
    uint32_t TC3_:1;           /*!< bit:     14  TC3 APB Clock Enable               */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t RAMECC_:1;        /*!< bit:     16  RAMECC APB Clock Enable            */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBBMASK_RESETVALUE              _UINT32_(0x18056)                                    /*  (MCLK_APBBMASK) APBB Mask  Reset Value */

#define MCLK_APBBMASK_USB_Pos                 _UINT32_(0)                                          /* (MCLK_APBBMASK) USB APB Clock Enable Position */
#define MCLK_APBBMASK_USB_Msk                 (_UINT32_(0x1) << MCLK_APBBMASK_USB_Pos)             /* (MCLK_APBBMASK) USB APB Clock Enable Mask */
#define MCLK_APBBMASK_USB(value)              (MCLK_APBBMASK_USB_Msk & (_UINT32_(value) << MCLK_APBBMASK_USB_Pos)) /* Assigment of value for USB in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_DSU_Pos                 _UINT32_(1)                                          /* (MCLK_APBBMASK) DSU APB Clock Enable Position */
#define MCLK_APBBMASK_DSU_Msk                 (_UINT32_(0x1) << MCLK_APBBMASK_DSU_Pos)             /* (MCLK_APBBMASK) DSU APB Clock Enable Mask */
#define MCLK_APBBMASK_DSU(value)              (MCLK_APBBMASK_DSU_Msk & (_UINT32_(value) << MCLK_APBBMASK_DSU_Pos)) /* Assigment of value for DSU in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_NVMCTRL_Pos             _UINT32_(2)                                          /* (MCLK_APBBMASK) NVMCTRL APB Clock Enable Position */
#define MCLK_APBBMASK_NVMCTRL_Msk             (_UINT32_(0x1) << MCLK_APBBMASK_NVMCTRL_Pos)         /* (MCLK_APBBMASK) NVMCTRL APB Clock Enable Mask */
#define MCLK_APBBMASK_NVMCTRL(value)          (MCLK_APBBMASK_NVMCTRL_Msk & (_UINT32_(value) << MCLK_APBBMASK_NVMCTRL_Pos)) /* Assigment of value for NVMCTRL in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_PORT_Pos                _UINT32_(4)                                          /* (MCLK_APBBMASK) PORT APB Clock Enable Position */
#define MCLK_APBBMASK_PORT_Msk                (_UINT32_(0x1) << MCLK_APBBMASK_PORT_Pos)            /* (MCLK_APBBMASK) PORT APB Clock Enable Mask */
#define MCLK_APBBMASK_PORT(value)             (MCLK_APBBMASK_PORT_Msk & (_UINT32_(value) << MCLK_APBBMASK_PORT_Pos)) /* Assigment of value for PORT in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_EVSYS_Pos               _UINT32_(7)                                          /* (MCLK_APBBMASK) EVSYS APB Clock Enable Position */
#define MCLK_APBBMASK_EVSYS_Msk               (_UINT32_(0x1) << MCLK_APBBMASK_EVSYS_Pos)           /* (MCLK_APBBMASK) EVSYS APB Clock Enable Mask */
#define MCLK_APBBMASK_EVSYS(value)            (MCLK_APBBMASK_EVSYS_Msk & (_UINT32_(value) << MCLK_APBBMASK_EVSYS_Pos)) /* Assigment of value for EVSYS in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_SERCOM2_Pos             _UINT32_(9)                                          /* (MCLK_APBBMASK) SERCOM2 APB Clock Enable Position */
#define MCLK_APBBMASK_SERCOM2_Msk             (_UINT32_(0x1) << MCLK_APBBMASK_SERCOM2_Pos)         /* (MCLK_APBBMASK) SERCOM2 APB Clock Enable Mask */
#define MCLK_APBBMASK_SERCOM2(value)          (MCLK_APBBMASK_SERCOM2_Msk & (_UINT32_(value) << MCLK_APBBMASK_SERCOM2_Pos)) /* Assigment of value for SERCOM2 in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_SERCOM3_Pos             _UINT32_(10)                                         /* (MCLK_APBBMASK) SERCOM3 APB Clock Enable Position */
#define MCLK_APBBMASK_SERCOM3_Msk             (_UINT32_(0x1) << MCLK_APBBMASK_SERCOM3_Pos)         /* (MCLK_APBBMASK) SERCOM3 APB Clock Enable Mask */
#define MCLK_APBBMASK_SERCOM3(value)          (MCLK_APBBMASK_SERCOM3_Msk & (_UINT32_(value) << MCLK_APBBMASK_SERCOM3_Pos)) /* Assigment of value for SERCOM3 in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_TCC0_Pos                _UINT32_(11)                                         /* (MCLK_APBBMASK) TCC0 APB Clock Enable Position */
#define MCLK_APBBMASK_TCC0_Msk                (_UINT32_(0x1) << MCLK_APBBMASK_TCC0_Pos)            /* (MCLK_APBBMASK) TCC0 APB Clock Enable Mask */
#define MCLK_APBBMASK_TCC0(value)             (MCLK_APBBMASK_TCC0_Msk & (_UINT32_(value) << MCLK_APBBMASK_TCC0_Pos)) /* Assigment of value for TCC0 in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_TCC1_Pos                _UINT32_(12)                                         /* (MCLK_APBBMASK) TCC1 APB Clock Enable Position */
#define MCLK_APBBMASK_TCC1_Msk                (_UINT32_(0x1) << MCLK_APBBMASK_TCC1_Pos)            /* (MCLK_APBBMASK) TCC1 APB Clock Enable Mask */
#define MCLK_APBBMASK_TCC1(value)             (MCLK_APBBMASK_TCC1_Msk & (_UINT32_(value) << MCLK_APBBMASK_TCC1_Pos)) /* Assigment of value for TCC1 in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_TC2_Pos                 _UINT32_(13)                                         /* (MCLK_APBBMASK) TC2 APB Clock Enable Position */
#define MCLK_APBBMASK_TC2_Msk                 (_UINT32_(0x1) << MCLK_APBBMASK_TC2_Pos)             /* (MCLK_APBBMASK) TC2 APB Clock Enable Mask */
#define MCLK_APBBMASK_TC2(value)              (MCLK_APBBMASK_TC2_Msk & (_UINT32_(value) << MCLK_APBBMASK_TC2_Pos)) /* Assigment of value for TC2 in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_TC3_Pos                 _UINT32_(14)                                         /* (MCLK_APBBMASK) TC3 APB Clock Enable Position */
#define MCLK_APBBMASK_TC3_Msk                 (_UINT32_(0x1) << MCLK_APBBMASK_TC3_Pos)             /* (MCLK_APBBMASK) TC3 APB Clock Enable Mask */
#define MCLK_APBBMASK_TC3(value)              (MCLK_APBBMASK_TC3_Msk & (_UINT32_(value) << MCLK_APBBMASK_TC3_Pos)) /* Assigment of value for TC3 in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_RAMECC_Pos              _UINT32_(16)                                         /* (MCLK_APBBMASK) RAMECC APB Clock Enable Position */
#define MCLK_APBBMASK_RAMECC_Msk              (_UINT32_(0x1) << MCLK_APBBMASK_RAMECC_Pos)          /* (MCLK_APBBMASK) RAMECC APB Clock Enable Mask */
#define MCLK_APBBMASK_RAMECC(value)           (MCLK_APBBMASK_RAMECC_Msk & (_UINT32_(value) << MCLK_APBBMASK_RAMECC_Pos)) /* Assigment of value for RAMECC in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_Msk                     _UINT32_(0x00017E97)                                 /* (MCLK_APBBMASK) Register Mask  */

#define MCLK_APBBMASK_SERCOM_Pos              _UINT32_(9)                                          /* (MCLK_APBBMASK Position) SERCOM2 APB Clock Enable */
#define MCLK_APBBMASK_SERCOM_Msk              (_UINT32_(0x3) << MCLK_APBBMASK_SERCOM_Pos)          /* (MCLK_APBBMASK Mask) SERCOM */
#define MCLK_APBBMASK_SERCOM(value)           (MCLK_APBBMASK_SERCOM_Msk & (_UINT32_(value) << MCLK_APBBMASK_SERCOM_Pos)) 
#define MCLK_APBBMASK_TCC_Pos                 _UINT32_(11)                                         /* (MCLK_APBBMASK Position) TCCx APB Clock Enable */
#define MCLK_APBBMASK_TCC_Msk                 (_UINT32_(0x3) << MCLK_APBBMASK_TCC_Pos)             /* (MCLK_APBBMASK Mask) TCC */
#define MCLK_APBBMASK_TCC(value)              (MCLK_APBBMASK_TCC_Msk & (_UINT32_(value) << MCLK_APBBMASK_TCC_Pos)) 
#define MCLK_APBBMASK_TC_Pos                  _UINT32_(13)                                         /* (MCLK_APBBMASK Position) TC2 APB Clock Enable */
#define MCLK_APBBMASK_TC_Msk                  (_UINT32_(0x3) << MCLK_APBBMASK_TC_Pos)              /* (MCLK_APBBMASK Mask) TC */
#define MCLK_APBBMASK_TC(value)               (MCLK_APBBMASK_TC_Msk & (_UINT32_(value) << MCLK_APBBMASK_TC_Pos)) 

/* -------- MCLK_APBCMASK : (MCLK Offset: 0x1C) (R/W 32) APBC Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t GMAC_:1;          /*!< bit:      2  GMAC APB Clock Enable              */
    uint32_t TCC2_:1;          /*!< bit:      3  TCC2 APB Clock Enable              */
    uint32_t TCC3_:1;          /*!< bit:      4  TCC3 APB Clock Enable              */
    uint32_t TC4_:1;           /*!< bit:      5  TC4 APB Clock Enable               */
    uint32_t TC5_:1;           /*!< bit:      6  TC5 APB Clock Enable               */
    uint32_t PDEC_:1;          /*!< bit:      7  PDEC APB Clock Enable              */
    uint32_t AC_:1;            /*!< bit:      8  AC APB Clock Enable                */
    uint32_t AES_:1;           /*!< bit:      9  AES APB Clock Enable               */
    uint32_t TRNG_:1;          /*!< bit:     10  TRNG APB Clock Enable              */
    uint32_t ICM_:1;           /*!< bit:     11  ICM APB Clock Enable               */
    uint32_t :1;               /*!< bit:     12  Reserved                           */
    uint32_t QSPI_:1;          /*!< bit:     13  QSPI APB Clock Enable              */
    uint32_t CCL_:1;           /*!< bit:     14  CCL APB Clock Enable               */
    uint32_t :17;              /*!< bit: 15..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBCMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBCMASK_RESETVALUE              _UINT32_(0x2000)                                     /*  (MCLK_APBCMASK) APBC Mask  Reset Value */

#define MCLK_APBCMASK_GMAC_Pos                _UINT32_(2)                                          /* (MCLK_APBCMASK) GMAC APB Clock Enable Position */
#define MCLK_APBCMASK_GMAC_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_GMAC_Pos)            /* (MCLK_APBCMASK) GMAC APB Clock Enable Mask */
#define MCLK_APBCMASK_GMAC(value)             (MCLK_APBCMASK_GMAC_Msk & (_UINT32_(value) << MCLK_APBCMASK_GMAC_Pos)) /* Assigment of value for GMAC in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TCC2_Pos                _UINT32_(3)                                          /* (MCLK_APBCMASK) TCC2 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC2_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TCC2_Pos)            /* (MCLK_APBCMASK) TCC2 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC2(value)             (MCLK_APBCMASK_TCC2_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC2_Pos)) /* Assigment of value for TCC2 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TCC3_Pos                _UINT32_(4)                                          /* (MCLK_APBCMASK) TCC3 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC3_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TCC3_Pos)            /* (MCLK_APBCMASK) TCC3 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC3(value)             (MCLK_APBCMASK_TCC3_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC3_Pos)) /* Assigment of value for TCC3 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TC4_Pos                 _UINT32_(5)                                          /* (MCLK_APBCMASK) TC4 APB Clock Enable Position */
#define MCLK_APBCMASK_TC4_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_TC4_Pos)             /* (MCLK_APBCMASK) TC4 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC4(value)              (MCLK_APBCMASK_TC4_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC4_Pos)) /* Assigment of value for TC4 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TC5_Pos                 _UINT32_(6)                                          /* (MCLK_APBCMASK) TC5 APB Clock Enable Position */
#define MCLK_APBCMASK_TC5_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_TC5_Pos)             /* (MCLK_APBCMASK) TC5 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC5(value)              (MCLK_APBCMASK_TC5_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC5_Pos)) /* Assigment of value for TC5 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_PDEC_Pos                _UINT32_(7)                                          /* (MCLK_APBCMASK) PDEC APB Clock Enable Position */
#define MCLK_APBCMASK_PDEC_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_PDEC_Pos)            /* (MCLK_APBCMASK) PDEC APB Clock Enable Mask */
#define MCLK_APBCMASK_PDEC(value)             (MCLK_APBCMASK_PDEC_Msk & (_UINT32_(value) << MCLK_APBCMASK_PDEC_Pos)) /* Assigment of value for PDEC in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_AC_Pos                  _UINT32_(8)                                          /* (MCLK_APBCMASK) AC APB Clock Enable Position */
#define MCLK_APBCMASK_AC_Msk                  (_UINT32_(0x1) << MCLK_APBCMASK_AC_Pos)              /* (MCLK_APBCMASK) AC APB Clock Enable Mask */
#define MCLK_APBCMASK_AC(value)               (MCLK_APBCMASK_AC_Msk & (_UINT32_(value) << MCLK_APBCMASK_AC_Pos)) /* Assigment of value for AC in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_AES_Pos                 _UINT32_(9)                                          /* (MCLK_APBCMASK) AES APB Clock Enable Position */
#define MCLK_APBCMASK_AES_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_AES_Pos)             /* (MCLK_APBCMASK) AES APB Clock Enable Mask */
#define MCLK_APBCMASK_AES(value)              (MCLK_APBCMASK_AES_Msk & (_UINT32_(value) << MCLK_APBCMASK_AES_Pos)) /* Assigment of value for AES in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TRNG_Pos                _UINT32_(10)                                         /* (MCLK_APBCMASK) TRNG APB Clock Enable Position */
#define MCLK_APBCMASK_TRNG_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TRNG_Pos)            /* (MCLK_APBCMASK) TRNG APB Clock Enable Mask */
#define MCLK_APBCMASK_TRNG(value)             (MCLK_APBCMASK_TRNG_Msk & (_UINT32_(value) << MCLK_APBCMASK_TRNG_Pos)) /* Assigment of value for TRNG in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_ICM_Pos                 _UINT32_(11)                                         /* (MCLK_APBCMASK) ICM APB Clock Enable Position */
#define MCLK_APBCMASK_ICM_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_ICM_Pos)             /* (MCLK_APBCMASK) ICM APB Clock Enable Mask */
#define MCLK_APBCMASK_ICM(value)              (MCLK_APBCMASK_ICM_Msk & (_UINT32_(value) << MCLK_APBCMASK_ICM_Pos)) /* Assigment of value for ICM in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_QSPI_Pos                _UINT32_(13)                                         /* (MCLK_APBCMASK) QSPI APB Clock Enable Position */
#define MCLK_APBCMASK_QSPI_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_QSPI_Pos)            /* (MCLK_APBCMASK) QSPI APB Clock Enable Mask */
#define MCLK_APBCMASK_QSPI(value)             (MCLK_APBCMASK_QSPI_Msk & (_UINT32_(value) << MCLK_APBCMASK_QSPI_Pos)) /* Assigment of value for QSPI in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_CCL_Pos                 _UINT32_(14)                                         /* (MCLK_APBCMASK) CCL APB Clock Enable Position */
#define MCLK_APBCMASK_CCL_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_CCL_Pos)             /* (MCLK_APBCMASK) CCL APB Clock Enable Mask */
#define MCLK_APBCMASK_CCL(value)              (MCLK_APBCMASK_CCL_Msk & (_UINT32_(value) << MCLK_APBCMASK_CCL_Pos)) /* Assigment of value for CCL in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_Msk                     _UINT32_(0x00006FFC)                                 /* (MCLK_APBCMASK) Register Mask  */

#define MCLK_APBCMASK_TCC_Pos                 _UINT32_(3)                                          /* (MCLK_APBCMASK Position) TCC2 APB Clock Enable */
#define MCLK_APBCMASK_TCC_Msk                 (_UINT32_(0x3) << MCLK_APBCMASK_TCC_Pos)             /* (MCLK_APBCMASK Mask) TCC */
#define MCLK_APBCMASK_TCC(value)              (MCLK_APBCMASK_TCC_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC_Pos)) 
#define MCLK_APBCMASK_TC_Pos                  _UINT32_(5)                                          /* (MCLK_APBCMASK Position) TC4 APB Clock Enable */
#define MCLK_APBCMASK_TC_Msk                  (_UINT32_(0x3) << MCLK_APBCMASK_TC_Pos)              /* (MCLK_APBCMASK Mask) TC */
#define MCLK_APBCMASK_TC(value)               (MCLK_APBCMASK_TC_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC_Pos)) 

/* -------- MCLK_APBDMASK : (MCLK Offset: 0x20) (R/W 32) APBD Mask -------- */
/* -------- MCLK_APBDMASK : (MCLK Offset: 0x20) (R/W 32) APBD Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SERCOM4_:1;       /*!< bit:      0  SERCOM4 APB Clock Enable           */
    uint32_t SERCOM5_:1;       /*!< bit:      1  SERCOM5 APB Clock Enable           */
    uint32_t SERCOM6_:1;       /*!< bit:      2  SERCOM6 APB Clock Enable           */
    uint32_t SERCOM7_:1;       /*!< bit:      3  SERCOM7 APB Clock Enable           */
    uint32_t TCC4_:1;          /*!< bit:      4  TCC4 APB Clock Enable              */
    uint32_t TC6_:1;           /*!< bit:      5  TC6 APB Clock Enable               */
    uint32_t TC7_:1;           /*!< bit:      6  TC7 APB Clock Enable               */
    uint32_t ADC0_:1;          /*!< bit:      7  ADC0 APB Clock Enable              */
    uint32_t ADC1_:1;          /*!< bit:      8  ADC1 APB Clock Enable              */
    uint32_t DAC_:1;           /*!< bit:      9  DAC APB Clock Enable               */
    uint32_t I2S_:1;           /*!< bit:     10  I2S APB Clock Enable               */
    uint32_t PCC_:1;           /*!< bit:     11  PCC APB Clock Enable               */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBDMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBDMASK_RESETVALUE              _UINT32_(0x00)                                       /*  (MCLK_APBDMASK) APBD Mask  Reset Value */

#define MCLK_APBDMASK_SERCOM4_Pos             _UINT32_(0)                                          /* (MCLK_APBDMASK) SERCOM4 APB Clock Enable Position */
#define MCLK_APBDMASK_SERCOM4_Msk             (_UINT32_(0x1) << MCLK_APBDMASK_SERCOM4_Pos)         /* (MCLK_APBDMASK) SERCOM4 APB Clock Enable Mask */
#define MCLK_APBDMASK_SERCOM4(value)          (MCLK_APBDMASK_SERCOM4_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM4_Pos)) /* Assigment of value for SERCOM4 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_SERCOM5_Pos             _UINT32_(1)                                          /* (MCLK_APBDMASK) SERCOM5 APB Clock Enable Position */
#define MCLK_APBDMASK_SERCOM5_Msk             (_UINT32_(0x1) << MCLK_APBDMASK_SERCOM5_Pos)         /* (MCLK_APBDMASK) SERCOM5 APB Clock Enable Mask */
#define MCLK_APBDMASK_SERCOM5(value)          (MCLK_APBDMASK_SERCOM5_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM5_Pos)) /* Assigment of value for SERCOM5 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_SERCOM6_Pos             _UINT32_(2)                                          /* (MCLK_APBDMASK) SERCOM6 APB Clock Enable Position */
#define MCLK_APBDMASK_SERCOM6_Msk             (_UINT32_(0x1) << MCLK_APBDMASK_SERCOM6_Pos)         /* (MCLK_APBDMASK) SERCOM6 APB Clock Enable Mask */
#define MCLK_APBDMASK_SERCOM6(value)          (MCLK_APBDMASK_SERCOM6_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM6_Pos)) /* Assigment of value for SERCOM6 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_SERCOM7_Pos             _UINT32_(3)                                          /* (MCLK_APBDMASK) SERCOM7 APB Clock Enable Position */
#define MCLK_APBDMASK_SERCOM7_Msk             (_UINT32_(0x1) << MCLK_APBDMASK_SERCOM7_Pos)         /* (MCLK_APBDMASK) SERCOM7 APB Clock Enable Mask */
#define MCLK_APBDMASK_SERCOM7(value)          (MCLK_APBDMASK_SERCOM7_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM7_Pos)) /* Assigment of value for SERCOM7 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_TCC4_Pos                _UINT32_(4)                                          /* (MCLK_APBDMASK) TCC4 APB Clock Enable Position */
#define MCLK_APBDMASK_TCC4_Msk                (_UINT32_(0x1) << MCLK_APBDMASK_TCC4_Pos)            /* (MCLK_APBDMASK) TCC4 APB Clock Enable Mask */
#define MCLK_APBDMASK_TCC4(value)             (MCLK_APBDMASK_TCC4_Msk & (_UINT32_(value) << MCLK_APBDMASK_TCC4_Pos)) /* Assigment of value for TCC4 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_TC6_Pos                 _UINT32_(5)                                          /* (MCLK_APBDMASK) TC6 APB Clock Enable Position */
#define MCLK_APBDMASK_TC6_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_TC6_Pos)             /* (MCLK_APBDMASK) TC6 APB Clock Enable Mask */
#define MCLK_APBDMASK_TC6(value)              (MCLK_APBDMASK_TC6_Msk & (_UINT32_(value) << MCLK_APBDMASK_TC6_Pos)) /* Assigment of value for TC6 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_TC7_Pos                 _UINT32_(6)                                          /* (MCLK_APBDMASK) TC7 APB Clock Enable Position */
#define MCLK_APBDMASK_TC7_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_TC7_Pos)             /* (MCLK_APBDMASK) TC7 APB Clock Enable Mask */
#define MCLK_APBDMASK_TC7(value)              (MCLK_APBDMASK_TC7_Msk & (_UINT32_(value) << MCLK_APBDMASK_TC7_Pos)) /* Assigment of value for TC7 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_ADC0_Pos                _UINT32_(7)                                          /* (MCLK_APBDMASK) ADC0 APB Clock Enable Position */
#define MCLK_APBDMASK_ADC0_Msk                (_UINT32_(0x1) << MCLK_APBDMASK_ADC0_Pos)            /* (MCLK_APBDMASK) ADC0 APB Clock Enable Mask */
#define MCLK_APBDMASK_ADC0(value)             (MCLK_APBDMASK_ADC0_Msk & (_UINT32_(value) << MCLK_APBDMASK_ADC0_Pos)) /* Assigment of value for ADC0 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_ADC1_Pos                _UINT32_(8)                                          /* (MCLK_APBDMASK) ADC1 APB Clock Enable Position */
#define MCLK_APBDMASK_ADC1_Msk                (_UINT32_(0x1) << MCLK_APBDMASK_ADC1_Pos)            /* (MCLK_APBDMASK) ADC1 APB Clock Enable Mask */
#define MCLK_APBDMASK_ADC1(value)             (MCLK_APBDMASK_ADC1_Msk & (_UINT32_(value) << MCLK_APBDMASK_ADC1_Pos)) /* Assigment of value for ADC1 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_DAC_Pos                 _UINT32_(9)                                          /* (MCLK_APBDMASK) DAC APB Clock Enable Position */
#define MCLK_APBDMASK_DAC_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_DAC_Pos)             /* (MCLK_APBDMASK) DAC APB Clock Enable Mask */
#define MCLK_APBDMASK_DAC(value)              (MCLK_APBDMASK_DAC_Msk & (_UINT32_(value) << MCLK_APBDMASK_DAC_Pos)) /* Assigment of value for DAC in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_I2S_Pos                 _UINT32_(10)                                         /* (MCLK_APBDMASK) I2S APB Clock Enable Position */
#define MCLK_APBDMASK_I2S_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_I2S_Pos)             /* (MCLK_APBDMASK) I2S APB Clock Enable Mask */
#define MCLK_APBDMASK_I2S(value)              (MCLK_APBDMASK_I2S_Msk & (_UINT32_(value) << MCLK_APBDMASK_I2S_Pos)) /* Assigment of value for I2S in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_PCC_Pos                 _UINT32_(11)                                         /* (MCLK_APBDMASK) PCC APB Clock Enable Position */
#define MCLK_APBDMASK_PCC_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_PCC_Pos)             /* (MCLK_APBDMASK) PCC APB Clock Enable Mask */
#define MCLK_APBDMASK_PCC(value)              (MCLK_APBDMASK_PCC_Msk & (_UINT32_(value) << MCLK_APBDMASK_PCC_Pos)) /* Assigment of value for PCC in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_Msk                     _UINT32_(0x00000FFF)                                 /* (MCLK_APBDMASK) Register Mask  */

#define MCLK_APBDMASK_SERCOM_Pos              _UINT32_(0)                                          /* (MCLK_APBDMASK Position) SERCOM4 APB Clock Enable */
#define MCLK_APBDMASK_SERCOM_Msk              (_UINT32_(0xF) << MCLK_APBDMASK_SERCOM_Pos)          /* (MCLK_APBDMASK Mask) SERCOM */
#define MCLK_APBDMASK_SERCOM(value)           (MCLK_APBDMASK_SERCOM_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM_Pos)) 
#define MCLK_APBDMASK_TCC_Pos                 _UINT32_(4)                                          /* (MCLK_APBDMASK Position) TCC4 APB Clock Enable */
#define MCLK_APBDMASK_TCC_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_TCC_Pos)             /* (MCLK_APBDMASK Mask) TCC */
#define MCLK_APBDMASK_TCC(value)              (MCLK_APBDMASK_TCC_Msk & (_UINT32_(value) << MCLK_APBDMASK_TCC_Pos)) 
#define MCLK_APBDMASK_TC_Pos                  _UINT32_(5)                                          /* (MCLK_APBDMASK Position) TC6 APB Clock Enable */
#define MCLK_APBDMASK_TC_Msk                  (_UINT32_(0x3) << MCLK_APBDMASK_TC_Pos)              /* (MCLK_APBDMASK Mask) TC */
#define MCLK_APBDMASK_TC(value)               (MCLK_APBDMASK_TC_Msk & (_UINT32_(value) << MCLK_APBDMASK_TC_Pos)) 
#define MCLK_APBDMASK_ADC_Pos                 _UINT32_(7)                                          /* (MCLK_APBDMASK Position) ADCx APB Clock Enable */
#define MCLK_APBDMASK_ADC_Msk                 (_UINT32_(0x3) << MCLK_APBDMASK_ADC_Pos)             /* (MCLK_APBDMASK Mask) ADC */
#define MCLK_APBDMASK_ADC(value)              (MCLK_APBDMASK_ADC_Msk & (_UINT32_(value) << MCLK_APBDMASK_ADC_Pos)) 

/** \brief MCLK register offsets definitions */
#define MCLK_INTENCLR_REG_OFST         _UINT32_(0x01)      /* (MCLK_INTENCLR) Interrupt Enable Clear Offset */
#define MCLK_INTENSET_REG_OFST         _UINT32_(0x02)      /* (MCLK_INTENSET) Interrupt Enable Set Offset */
#define MCLK_INTFLAG_REG_OFST          _UINT32_(0x03)      /* (MCLK_INTFLAG) Interrupt Flag Status and Clear Offset */
#define MCLK_HSDIV_REG_OFST            _UINT32_(0x04)      /* (MCLK_HSDIV) HS Clock Division Offset */
#define MCLK_CPUDIV_REG_OFST           _UINT32_(0x05)      /* (MCLK_CPUDIV) CPU Clock Division Offset */
#define MCLK_AHBMASK_REG_OFST          _UINT32_(0x10)      /* (MCLK_AHBMASK) AHB Mask Offset */
#define MCLK_APBAMASK_REG_OFST         _UINT32_(0x14)      /* (MCLK_APBAMASK) APBA Mask Offset */
#define MCLK_APBBMASK_REG_OFST         _UINT32_(0x18)      /* (MCLK_APBBMASK) APBB Mask Offset */
#define MCLK_APBCMASK_REG_OFST         _UINT32_(0x1C)      /* (MCLK_APBCMASK) APBC Mask Offset */
#define MCLK_APBDMASK_REG_OFST         _UINT32_(0x20)      /* (MCLK_APBDMASK) APBD Mask Offset */

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
       RoReg8                    Reserved1[0x1];
  __IO MCLK_INTENCLR_Type        INTENCLR;    /**< \brief Offset: 0x01 (R/W  8) Interrupt Enable Clear */
  __IO MCLK_INTENSET_Type        INTENSET;    /**< \brief Offset: 0x02 (R/W  8) Interrupt Enable Set */
  __IO MCLK_INTFLAG_Type         INTFLAG;     /**< \brief Offset: 0x03 (R/W  8) Interrupt Flag Status and Clear */
  __I  MCLK_HSDIV_Type           HSDIV;       /**< \brief Offset: 0x04 (R/   8) HS Clock Division */
  __IO MCLK_CPUDIV_Type          CPUDIV;      /**< \brief Offset: 0x05 (R/W  8) CPU Clock Division */
       RoReg8                    Reserved2[0xA];
  __IO MCLK_AHBMASK_Type         AHBMASK;     /**< \brief Offset: 0x10 (R/W 32) AHB Mask */
  __IO MCLK_APBAMASK_Type        APBAMASK;    /**< \brief Offset: 0x14 (R/W 32) APBA Mask */
  __IO MCLK_APBBMASK_Type        APBBMASK;    /**< \brief Offset: 0x18 (R/W 32) APBB Mask */
  __IO MCLK_APBCMASK_Type        APBCMASK;    /**< \brief Offset: 0x1C (R/W 32) APBC Mask */
  __IO MCLK_APBDMASK_Type        APBDMASK;    /**< \brief Offset: 0x20 (R/W 32) APBD Mask */
} Mclk;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MCLK register API structure */
typedef struct
{  /* Main Clock */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        MCLK_INTENCLR;      /**< Offset: 0x01 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        MCLK_INTENSET;      /**< Offset: 0x02 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        MCLK_INTFLAG;       /**< Offset: 0x03 (R/W  8) Interrupt Flag Status and Clear */
  __I   uint8_t                        MCLK_HSDIV;         /**< Offset: 0x04 (R/   8) HS Clock Division */
  __IO  uint8_t                        MCLK_CPUDIV;        /**< Offset: 0x05 (R/W  8) CPU Clock Division */
  __I   uint8_t                        Reserved2[0x0A];
  __IO  uint32_t                       MCLK_AHBMASK;       /**< Offset: 0x10 (R/W  32) AHB Mask */
  __IO  uint32_t                       MCLK_APBAMASK;      /**< Offset: 0x14 (R/W  32) APBA Mask */
  __IO  uint32_t                       MCLK_APBBMASK;      /**< Offset: 0x18 (R/W  32) APBB Mask */
  __IO  uint32_t                       MCLK_APBCMASK;      /**< Offset: 0x1C (R/W  32) APBC Mask */
  __IO  uint32_t                       MCLK_APBDMASK;      /**< Offset: 0x20 (R/W  32) APBD Mask */
} mclk_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXSG41_MCLK_COMPONENT_H_ */
