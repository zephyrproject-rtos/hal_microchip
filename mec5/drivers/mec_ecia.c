/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_defs.h"
#include "mec_ecia_api.h"
#include "mec_retval.h"
#include "mec_ecia_api.h"

/* #define MEC_ECIA_ENABLE_CHECKS */
#ifdef MEC_ECIA_ENABLE_CHECKS
#include <assert.h>
#endif

/*
 * EC Interrupt Aggregator and NVIC configuration.
 * Implementation:
 * All NVIC enables and priorities will be set at initialization based
 * upon the supplied direct bitmap and NVIC priority.
 * Peripheral level code will use the ECIA GIRQ and any peripheral interrupt
 * enable/status registers.
 * Reason:
 * NVIC interrupt registers may only be accessed when the Cortex-M4 is in
 * privileged mode.
 */

/* b[4:0] = number of interrupt lines in groups of 32.
 * 0 = 32
 * 1 = 64
 * 2 = 96
 * ...
 * 7 = 256
 */

struct mec_nvic_map {
    uint8_t girq_bitpos;
    uint8_t nvic_direct;
};

struct mec_girq_route {
    uint8_t nvic_aggr;
    uint8_t num_direct;
    const struct mec_nvic_map *nmap;
};

static const struct mec_nvic_map girq13_nvic_map[] = {
    { 0U, 20U }, { 1U, 21U }, { 2U, 22U }, { 3U, 23U }, { 4U, 158U },
#if defined(MEC5_I3C_HOST_CTRL_INSTANCES)
    { 8U, 181U },
#endif
#if defined(MEC5_I3C_SEC_CTRL_INSTANCES)
    { 9U, 182U },
#endif
#if defined(MEC5_HAS_USB_OTG_0)
    { 10U, 192U },
#endif
};
#define GIRQ13_NUM_DIRECT (sizeof(girq13_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq14_nvic_map[] = {
    { 0U, 24U }, { 1U, 25U }, { 2U, 26U }, { 3U, 27U }, { 4U, 28U },
    { 5U, 29U }, { 6U, 30U }, { 7U, 31U }, { 8U, 32U }, { 9U, 33U },
    { 10U, 34U }, { 11U, 35U }, { 12U, 36U }, { 13U, 37U }, { 14U, 38U },
    { 15U, 39U },
#if MEC5_DMAC_NUM_CHANNELS == 20
    { 16U, 194U }, { 17U, 195U }, { 18U, 196U }, { 19U, 197U },
#endif
};
#define GIRQ14_NUM_DIRECT (sizeof(girq14_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq15_nvic_map[] = {
    { 0U, 40U }, { 1U, 41U }, { 2U, 42U }, { 3U, 43U }, { 4U, 44U },
    { 5U, 45U }, { 6U, 46U }, { 7U, 47U }, { 8U, 48U }, { 9U, 49U },
    { 10U, 50U }, { 11U, 51U }, { 12U, 52U }, { 13U, 53U }, { 14U, 54U },
    { 15U, 55U }, { 16U, 56U }, { 17U, 57U }, { 18U, 58U }, { 19U, 59U },
    { 20U, 60U }, { 22U, 62U },
#if MEC5_UART_INSTANCES > 2
    { 25U, 183U },
#endif
#if MEC5_UART_INSTANCES > 3
    { 26U, 184 },
#endif
};
#define GIRQ15_NUM_DIRECT (sizeof(girq15_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq16_nvic_map[] = {
    { 0U, 65U }, { 2U, 67U }, { 3U, 68U }
};
#define GIRQ16_NUM_DIRECT (sizeof(girq16_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq17_nvic_map[] = {
    { 0U, 70U }, { 1U, 71U }, { 2U, 72U }, { 3U, 73U }, { 4U, 159U },
    { 8U, 78U }, { 9U, 79U }, { 10U, 80U }, { 11U, 81U }, { 12U, 82U },
    { 13U, 83U }, { 14U, 84U }, { 15U, 85U }, { 16U, 86U }, { 17U, 87U },
    { 18U, 88U }, { 19U, 89U }, { 20U, 74U }, { 21U, 75U }, { 22U, 76U },
    { 23U, 77U }
};
#define GIRQ17_NUM_DIRECT (sizeof(girq17_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq18_nvic_map[] = {
    { 1U, 91U },
    { 2U, 92U },
#if MEC5_GPSPI_CTRL_VERSION == 1
    { 3U, 93U},
#endif
    { 4U, 94U },
#if MEC5_GPSPI_CTRL_VERSION == 1
    { 5U, 95U},
#endif
    { 6U, 97U }, { 7U, 96U },
    { 10U, 100U },
#if MEC5_P2S_INSTANCES == 2
    { 11U, 101U },
#endif
    { 20U, 146U }, { 21U, 147U }, { 22U, 148U }, { 23U, 149U }, { 24U, 150U },
    { 25U, 151U }, { 26U, 152U }, { 27U, 153U }, { 28U, 154U },
};
#define GIRQ18_NUM_DIRECT (sizeof(girq18_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq19_nvic_map[] = {
    { 0U, 103U }, { 1U, 104U }, { 2U, 105U }, { 3U, 106U }, { 4U, 107U },
    { 5U, 108U }, { 6U, 109U }, { 7U, 110U }, { 8U, 156U }, { 9U, 166U },
    { 10U, 167U },
};
#define GIRQ19_NUM_DIRECT (sizeof(girq19_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq20_nvic_map[] = {
    { 3U, 173U }, { 9U, 174U }
};
#define GIRQ20_NUM_DIRECT (sizeof(girq20_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_nvic_map girq21_nvic_map[] = {
    { 2U, 171U },  { 3U, 114U },  { 4U, 115U },  { 5U, 116U },  { 6U, 117U },
    { 7U, 118U },  { 8U, 119U },  { 9U, 120U },  { 10U, 121U }, { 11U, 122U },
    { 12U, 123U }, { 13U, 124U }, { 14U, 125U }, { 18U, 129U }, { 19U, 130U },
#if MEC5_P2S_INSTANCES == 2
    { 21U, 132U },
#endif
    { 24U, 134U }, { 26U, 172U },
#ifdef MEC5_HAS_ROM_TIMER
    { 27U, 193U }
#endif
};
#define GIRQ21_NUM_DIRECT (sizeof(girq21_nvic_map) / sizeof(struct mec_nvic_map))

/* NOTE: GIRQ22 aggregated output and individual source interrupt signals
 * are not connected to the NVIC. GIRQ22's purpose is to signal MEC's power
 * managemente HW to turn on the PLL to process incoming signal/data from
 * an external device. HW determins if the event requires EC notification.
 * If EC notification required the respective peripheral interrupt signal
 * will assert otherwise HW will turn off the PLL and re-enter full deep sleep.
 */
static const struct mec_nvic_map girq22_nvic_map[] = {
    { 0U, 255U }, /* Process event received on SPI Target */
    { 1U, 255U }, /* Process event received on I2C Controller 0 */
    { 2U, 255U },
    { 3U, 255U },
    { 4U, 255U },
    { 5U, 255U }, /* Process event received on I2C Controller 4 */
    { 9U, 255U }, /* Process event received on eSPI interface */
#if defined(MEC5_I3C_HOST_CTRL_INSTANCES)
    { 16U, 255U }, /* Process event received on I3C Primary Controller */
#endif
#if defined(MEC5_I3C_SEC_CTRL_INSTANCES)
    { 17U, 255U }, /* Process event received on I3C Secondary Controller */
#endif
};
#define GIRQ22_NUM_DIRECT 0

static const struct mec_nvic_map girq23_nvic_map[] = {
    { 0U, 136U }, { 1U, 137U }, { 2U, 138U }, { 3U, 139U }, { 4U, 140U },
    { 5U, 141U }, { 6U, 142U }, { 7U, 143U }, { 8U, 144U }, { 9U, 145U },
    { 10U, 111U }, { 16U, 112U }, { 17U, 113U },
};
#define GIRQ23_NUM_DIRECT (sizeof(girq23_nvic_map) / sizeof(struct mec_nvic_map))

static const struct mec_girq_route girq_routing_tbl[MEC5_ECIA_NUM_GIRQS]  = {
    { 0U, 0U, NULL }, /* GIRQ08 - GIRQ12 aggregated only */
    { 1U, 0U, NULL },
    { 2U, 0U, NULL },
    { 3U, 0U, NULL },
    { 4U, 0U, NULL },
    { 5U, GIRQ13_NUM_DIRECT, girq13_nvic_map },
    { 6U, GIRQ14_NUM_DIRECT, girq14_nvic_map },
    { 7U, GIRQ15_NUM_DIRECT, girq15_nvic_map },
    { 8U, GIRQ16_NUM_DIRECT, girq16_nvic_map },
    { 9U, GIRQ17_NUM_DIRECT, girq17_nvic_map },
    { 10U, GIRQ18_NUM_DIRECT, girq18_nvic_map },
    { 11U, GIRQ19_NUM_DIRECT, girq19_nvic_map },
    { 12U, GIRQ20_NUM_DIRECT, girq20_nvic_map },
    { 13U, GIRQ21_NUM_DIRECT, girq21_nvic_map },
    { 255U, GIRQ22_NUM_DIRECT, girq22_nvic_map }, /* GIRQ22 clock wake only */
    { 14U, GIRQ23_NUM_DIRECT, girq23_nvic_map },
    { 15U, 0U, NULL }, /* GIRQ24 - GIRQ26 aggregated only */
    { 16U, 0U, NULL },
    { 17U, 0U, NULL }
};

static void nvic_extirq_enable(uint32_t extn)
{
    if (extn >= MEC5_MAX_NVIC_EXT_INPUTS) {
        return;
    }

    NVIC_EnableIRQ(extn);
}

static void nvic_extirq_disable(uint32_t extn)
{
    if (extn >= MEC5_MAX_NVIC_EXT_INPUTS) {
        return;
    }

    NVIC_DisableIRQ(extn);
}

static void nvic_extirq_pend_clear(uint32_t extn)
{
    if (extn >= MEC5_MAX_NVIC_EXT_INPUTS) {
        return;
    }

    NVIC_ClearPendingIRQ(extn);
}

static uint32_t nvic_extirq_pend_get(uint32_t extn)
{
    if (extn >= MEC5_MAX_NVIC_EXT_INPUTS) {
        return 0;
    }

    return NVIC_GetPendingIRQ(extn);
}

/* priority = Cortex-M4 NVIC for this SoC. 3-bits where 0 = highest and 7 is
 * lowest priority. Each external interrupt priority is an 8-bit register
 * where the priority is stored in the upper 3 bits.
 */
static void nvic_extirq_priority_set(uint32_t extn, uint8_t priority)
{
    if (extn >= MEC5_MAX_NVIC_EXT_INPUTS) {
        return;
    }

    NVIC_SetPriority(extn, priority);
}

static uint32_t nvic_extirq_priority_get(uint32_t extn)
{
    if (extn >= MEC5_MAX_NVIC_EXT_INPUTS) {
        return 0; /* NVIC POR default priority */
    }

    return NVIC_GetPriority(extn);
}

static void enable_nvic_aggregated(uint32_t aggr_bitmap)
{
    uint32_t abm = aggr_bitmap & MEC5_ECIA_ALL_BITMAP;

    for (uint32_t n = MEC5_ECIA_FIRST_GIRQ_NOS; n < MEC5_ECIA_LAST_GIRQ_NOS; n++) {
        if (!abm) {
            break;
        }

        if (abm & MEC_BIT(n)) {
            const struct mec_girq_route *pgr = &girq_routing_tbl[n - MEC5_ECIA_FIRST_GIRQ_NOS];

            NVIC_EnableIRQ(pgr->nvic_aggr);
            abm &= (uint32_t)~MEC_BIT(n);
        }
    }
}

static void enable_nvic_directs(uint32_t girq_bitmap)
{
    for (size_t n = 0; n < MEC5_ECIA_NUM_GIRQS; n++) {
        const struct mec_girq_route *gr = &girq_routing_tbl[n];

        if ((gr->nvic_aggr == 0xffu) || (gr->num_direct == 0u)) {
            continue;
        }

        if (!(girq_bitmap & MEC_BIT(n + 8u))) {
            continue;
        }

        const struct mec_nvic_map *map = gr->nmap;

        for (uint8_t m = 0; m < gr->num_direct; m++) {
            NVIC_EnableIRQ(map[m].nvic_direct);
        }
    }
}

/* Set all GIRQ enables for specified direct GIRQ's */
static void enable_girq_direct_bitmap(uint32_t bitmap)
{
    uint32_t dbm = bitmap & MEC5_ECIA_DIRECT_BITMAP;
    uint32_t bpos = 0;
    uint8_t msb = 0;

    while (dbm) {
        /* returns 32 if no bits are set */
        msb = __CLZ(dbm);
        if (msb == 32U) {
            break;
        }

        bpos = 31u - msb; /* convert number of leading zeros to bit position */
        if ((bpos >= MEC5_ECIA_FIRST_GIRQ_NOS) && (bpos <= MEC5_ECIA_LAST_GIRQ_NOS)) {
            const struct mec_girq_route *pgr =
                &girq_routing_tbl[bpos - MEC5_ECIA_FIRST_GIRQ_NOS];

            if (pgr->nmap && !(MEC_ECIA0->BLK_EN_SET & MEC_BIT(bpos))) {
                MEC_ECIA0->GIRQ[0].EN_SET = UINT32_MAX;
            }
        }

        dbm &= (uint32_t)~MEC_BIT(bpos);
    }
}

/* !!! Touches NVIC registers. Caller must be Privileged !!!
 * NOTE: Cortex-M4 NVIC encodes priority where 0 = highest and lowests
 * is equal to all bits set. The number of bits implemented is set at
 * hardware design time (MEC_NVIC_NUM_PRI_BITS).
 */
static void set_all_pri(uint8_t dflt_priority)
{
    uint32_t pri32 = ((uint32_t)(dflt_priority & 0x7U) << (8U - __NVIC_PRIO_BITS)) & 0xffu;
    uintptr_t nvic_ip_addr = (uintptr_t)&NVIC->IPR[0];

    pri32 |= (pri32 << 8);
    pri32 |= (pri32 << 16);

    for (uint32_t n = 0; n < MEC5_NVIC_NUM_IP_REGS; n++) {
        MEC_MMCR32(nvic_ip_addr) = pri32;
        nvic_ip_addr += 4U;
    }
}

static inline int is_direct_allowed(void)
{
    if (MEC_ECS->INTR_CTRL & MEC_BIT(MEC_ECS_INTR_CTRL_DIRECT_Pos)) {
        return 1;
    }
    return 0;
}

/**
 * mec_ecia_init - Initial EC Interrupt Aggregator and NVIC
 * external interrupt registers.
 *
 * @param direct_bitmap Bit map of GIRQ's caller wants to use direct NVIC
 * connection.
 *
 * @param dflt_priority - Priority 0=highest to 7=lowest to set all
 * external peripheral NVIC priority to.
 *
 * @note - Touches NVIC registers. Caller must be Privileged.
 * Restrictions on GIRQ's:
 * Aggregated only: 8-12 and 24-26
 * Direct or Aggregated: 13-21 and 23
 * No connection to NVIC: GIRQ22 used to wake AHB fabric only.
 * The function parameters will be masked with allowed bitmaps.
 *
 * Sets all NVIC enables for direct and aggregated interrupt
 * sources.
 * TODO - change to set all GIRQ enables for direct. Do not
 * set any NVIC enables. Drivers will handle NVIC enables.
 * How to handle Aggregated only GIRQ's?
 * GIRQ's 8 - 12, and 26 are GPIO's. The GPIO control registers
 * have interrupt enable fields but ROM enable some. Enabling
 * the aggregated GIRQ's may cause an issue.
 * GIRQ's 24 and 25 are for eSPI Controller to Target virtual wires.
 * Each C2T VWire has an interrupt enable field. We should be able
 * to enable these.
 */
void mec_hal_ecia_init(uint32_t direct_bitmap, uint8_t dflt_priority, uint32_t flags)
{
    uint32_t aggr_bitmap = 0, i = 0;

    /* Clear ECIA PCR sleep enable */
    /* TODO mec_pcr_clr_blk_slp_en(MEC_PCR_ECIA); */

    /* Disconnect all direct capable GIRQ sources from the NVIC
     * allowing us to clear direct NVIC pending bits
     */
    MEC_ECS->INTR_CTRL &= ~(MEC_ECS_INTR_CTRL_DIRECT_Msk);

    /* disconnect all GIRQ aggregated block outputs from NVIC */
    MEC_ECIA0->BLK_EN_CLR = UINT32_MAX;

    /* clear all ECIA GIRQ individual enables and status(source) bits */
    for (i = 0; i < MEC5_ECIA_NUM_GIRQS; i++) {
        MEC_ECIA0->GIRQ[i].EN_CLR = UINT32_MAX;
        MEC_ECIA0->GIRQ[i].SOURCE = UINT32_MAX;
    }

    /* clear all NVIC enables and pending status */
    for (i = 0; i < MEC5_NVIC_NUM_REGS; i++) {
        NVIC->ICER[i] = UINT32_MAX;
        NVIC->ICPR[i] = UINT32_MAX;
    }

    set_all_pri(dflt_priority);

    /* mask out GIRQ's that cannot do direct */
    direct_bitmap &= MEC5_ECIA_DIRECT_BITMAP;
    aggr_bitmap = MEC5_ECIA_ALL_BITMAP & ~(direct_bitmap);

    /* Route all aggregated GIRQn outputs to NVIC */
    MEC_ECIA0->BLK_EN_SET = aggr_bitmap;
    if (flags & MEC_ECIA_INIT_FLAG_ALL_AGGR_GIRQ) {
        enable_nvic_aggregated(aggr_bitmap);
    }

    /* enable any direct connections? */
    if (direct_bitmap) {
        /* Disconnect aggregated GIRQ output for direct mapped */
        MEC_ECIA0->BLK_EN_CLR = direct_bitmap;
        MEC_ECS->INTR_CTRL |= MEC_BIT(MEC_ECS_INTR_CTRL_DIRECT_Pos);
        if (flags & MEC_ECIA_INIT_FLAG_ALL_DIRECT_GIRQ) {
            enable_girq_direct_bitmap(direct_bitmap);
        }
        if (flags & MEC_ECIA_INIT_FLAG_ALL_DIRECT_NVIC) {
            enable_nvic_directs(direct_bitmap);
        }
    }
}

/* Enable/disable multiple GIRQ sources */
int mec_hal_girq_bm_en(uint32_t girq_num, uint32_t bitmap, uint8_t enable)
{
    if ((girq_num < MEC5_ECIA_FIRST_GIRQ_NOS) || (girq_num > MEC5_ECIA_LAST_GIRQ_NOS)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!bitmap) {
        return MEC_RET_OK;
    }

    uint32_t gidx = girq_num - MEC5_ECIA_FIRST_GIRQ_NOS;

    if (enable) {
        MEC_ECIA0->GIRQ[gidx].EN_SET = bitmap;
    } else {
        MEC_ECIA0->GIRQ[gidx].EN_CLR = bitmap;
    }

    return MEC_RET_OK;
}

/* Clear multiple GIRQ source(status) bits */
int mec_hal_girq_bm_clr_src(uint32_t girq_num, uint32_t bitmap)
{
    if ((girq_num < MEC5_ECIA_FIRST_GIRQ_NOS) || (girq_num > MEC5_ECIA_LAST_GIRQ_NOS)) {
        return MEC_RET_ERR_INVAL;
    }

    if (!bitmap) {
        return MEC_RET_OK;
    }

    uint32_t gidx = girq_num - MEC5_ECIA_FIRST_GIRQ_NOS;

    MEC_ECIA0->GIRQ[gidx].SOURCE = bitmap;

    return MEC_RET_OK;
}

uint32_t mec_hal_girq_source_get(uint32_t girq_num)
{
    if ((girq_num < MEC5_ECIA_FIRST_GIRQ_NOS) || (girq_num > MEC5_ECIA_LAST_GIRQ_NOS)) {
        return 0u;
    }

    uint32_t gidx = girq_num - MEC5_ECIA_FIRST_GIRQ_NOS;

    return MEC_ECIA0->GIRQ[gidx].SOURCE;
}

uint32_t mec_hal_girq_result_get(uint32_t girq_num)
{
    if ((girq_num < MEC5_ECIA_FIRST_GIRQ_NOS) || (girq_num > MEC5_ECIA_LAST_GIRQ_NOS)) {
        return 0u;
    }

    uint32_t gidx = girq_num - MEC5_ECIA_FIRST_GIRQ_NOS;

    return MEC_ECIA0->GIRQ[gidx].RESULT;
}

uint32_t mec_hal_girq_result_test(uint32_t girq_num, uint32_t bitpos)
{
    uint32_t result = mec_hal_girq_result_get(girq_num);

    return (result & MEC_BIT(bitpos));
}

/* Set or clear GIRQ enable for a peripheral source. */
void mec_hal_girq_ctrl(uint32_t devi, int enable)
{
    uint32_t gidx = MEC5_ECIA_INFO_GIRQZ(devi);
    uint32_t gpos = MEC5_ECIA_INFO_GIRQ_POS(devi);

    if (gidx >= MEC5_ECIA_NUM_GIRQS) {
        return;
    }

    if (enable) { /* write 1 to set register */
        MEC_ECIA0->GIRQ[gidx].EN_SET = MEC_BIT(gpos);
    } else { /* write 1 to clear register */
        MEC_ECIA0->GIRQ[gidx].EN_CLR = MEC_BIT(gpos);
    }
}

/*
 * Return 0 if source not set else non-zero
 * (single bit should be set in word)
 */
uint32_t mec_hal_girq_src(uint32_t devi)
{
    uint32_t gidx = MEC5_ECIA_INFO_GIRQZ(devi);
    uint32_t gpos = MEC5_ECIA_INFO_GIRQ_POS(devi);

    if (gidx >= MEC5_ECIA_NUM_GIRQS) {
        return 0;
    }

    return MEC_ECIA0->GIRQ[gidx].SOURCE & MEC_BIT(gpos);
}

uint32_t mec_hal_girq_result(uint32_t devi)
{
    uint32_t gidx = MEC5_ECIA_INFO_GIRQZ(devi);
    uint32_t gpos = MEC5_ECIA_INFO_GIRQ_POS(devi);

    if (gidx >= MEC5_ECIA_NUM_GIRQS) {
        return 0;
    }

    return MEC_ECIA0->GIRQ[gidx].RESULT & MEC_BIT(gpos);
}

/* Clear GIRQ source(status) for a peripheral source. */
void mec_hal_girq_clr_src(uint32_t devi)
{
    uint32_t gidx = MEC5_ECIA_INFO_GIRQZ(devi);
    uint32_t gpos = MEC5_ECIA_INFO_GIRQ_POS(devi);

    if (gidx >= MEC5_ECIA_NUM_GIRQS) {
        return;
    }

    /* register is write 1 to clear bit(s) */
    MEC_ECIA0->GIRQ[gidx].SOURCE = MEC_BIT(gpos);
}

int mec_hal_ecia_girq_aggr_enable(uint32_t girq_num, uint8_t enable)
{
    uint8_t gid = (uint8_t)(girq_num & 0xffu);

    if ((gid < MEC5_ECIA_FIRST_GIRQ_NOS) || (girq_num > MEC5_ECIA_LAST_GIRQ_NOS)) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        MEC_ECIA0->BLK_EN_SET = MEC_BIT(gid);
    } else {
        MEC_ECIA0->BLK_EN_CLR = MEC_BIT(gid);
    }

    return MEC_RET_OK;
}

/*
 * This is not a simple question.
 * This routine only works if Method 1 initialization
 * is implemented in mec_ecia_init() and the application
 * developer calls mec_ecia_init() or duplicates its
 * functionality.
 */
int mec_hal_ecia_is_direct(uint32_t devi)
{
    /* Is direct mode disabled? */
    if (!is_direct_allowed()) {
        return 0;
    }

    uint32_t girq_num = MEC5_ECIA_INFO_GIRQZ(devi) + MEC5_ECIA_FIRST_GIRQ_NOS;

    if (!(MEC_BIT(girq_num) & MEC5_ECIA_DIRECT_BITMAP)) {
        return 0;
    }

    /* Is aggregated GIRQ routed to NVIC? */
    if (MEC_ECIA0->BLK_EN_SET & MEC_BIT(girq_num)) {
        return 0; /* Yes, don't use direct */
    }

    return 1;
}

/* !!! Touches NVIC register(s). Caller must be Privileged !!! */

void mec_hal_ecia_nvic_enable(uint32_t devi)
{
    uint32_t nvic_extn = MEC5_ECIA_INFO_NVIC_AGGR(devi);

    if (mec_hal_ecia_is_direct(devi)) {
        nvic_extn = MEC5_ECIA_INFO_NVIC_DIRECT(devi);
    }

    nvic_extirq_enable(nvic_extn);
}

void mec_hal_ecia_nvic_disable(uint32_t devi)
{
    uint32_t nvic_extn = MEC5_ECIA_INFO_NVIC_AGGR(devi);

    if (mec_hal_ecia_is_direct(devi)) {
        nvic_extn = MEC5_ECIA_INFO_NVIC_DIRECT(devi);
    }

    nvic_extirq_disable(nvic_extn);
}

void mec_hal_ecia_nvic_clr_pend(uint32_t devi)
{
    uint32_t nvic_extn = MEC5_ECIA_INFO_NVIC_AGGR(devi);

    if (mec_hal_ecia_is_direct(devi)) {
        nvic_extn = MEC5_ECIA_INFO_NVIC_DIRECT(devi);
    }

    nvic_extirq_pend_clear(nvic_extn);
}

uint32_t mec_hal_ecia_nvic_get_pending(uint32_t devi)
{
    uint32_t extn = MEC5_ECIA_INFO_NVIC_AGGR(devi);

    if (mec_hal_ecia_is_direct(devi)) {
        extn = MEC5_ECIA_INFO_NVIC_DIRECT(devi);
    }

    return nvic_extirq_pend_get(extn);
}

uint8_t mec_hal_ecia_nvic_get_pri(uint32_t devi)
{
    uint32_t extn = MEC5_ECIA_INFO_NVIC_AGGR(devi);

    if (mec_hal_ecia_is_direct(devi)) {
        extn = MEC5_ECIA_INFO_NVIC_DIRECT(devi);
    }

    return (uint8_t)(nvic_extirq_priority_get(extn));
}

void mec_hal_ecia_nvic_set_pri(uint32_t devi, uint8_t priority)
{
    uint32_t extn = MEC5_ECIA_INFO_NVIC_AGGR(devi);

    if (mec_hal_ecia_is_direct(devi)) {
        extn = MEC5_ECIA_INFO_NVIC_DIRECT(devi);
    }

    if (priority > MEC5_NVIC_PRI_LO_VAL) {
        priority = MEC5_NVIC_PRI_LO_VAL;
    }

    nvic_extirq_priority_set(extn, priority);
}

/* end mec_ecia.c */
