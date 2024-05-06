/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>
#include "mec_pcfg.h"
#include "mec_gpio_api.h"
#include "mec_retval.h"

/** @brief
 * Port 0: GPIO_0000 - 0036  GIRQ11
 * Port 1: GPIO_0040 - 0076  GIRQ10
 * Port 2: GPIO_0100 - 0136  GIRQ09
 * Port 3: GPIO_0140 - 0176  GIRQ08
 * Port 4: GPIO_0200 - 0236  GIRQ12
 * Port 5: GPIO_0240 - 0276  GIRQ26
 */

/* Work-around for GPIO hardware anonmaly when interrupt detection
 * field is changed.
 */
#define MEC_GPIO_EDGE_DLY_COUNT 4

/*
 * Pin numbers in data sheet are octal.
 * Use octal or decimal/hex equivalent.
 */
struct mec_gpio_cfg_field {
    uint8_t mask;
    uint8_t bitpos;
    uint8_t ctrl_reg;
    uint8_t rsvd3;
};

const struct mec_gpio_cfg_field mec_cfg_tbl[MEC_GPIO_MAX_PROP_ID] = {
    { 0x03u, 0, 0, 0 },  /* Pull Up/Down/Repeater-Mode */
    { 0x03u, 2, 0, 0 },  /* Power Gate */
    { 0x0Fu, 4, 0, 0 },  /* Interrupt detect & edge enable */
    { 0x01u, 8, 0, 0 },  /* Output buffer type */
    { 0x01u, 9, 0, 0 },  /* Direction */
    { 0x01u, 10, 0, 0 }, /* Output control select */
    { 0x01u, 11, 0, 0 }, /* Polarity */
    { 0x07u, 12, 0, 0 }, /* Mux control */
    { 0x01u, 15, 0, 0 }, /* Input disable */
    { 0x01u, 16, 0, 0 }, /* output value */
    { 0x01u, 0, 1, 0 },  /* slew rate in b[0] of control2 */
    { 0x03u, 4, 1, 0 },  /* drive strength in b[5:4] of control 2 */
};

/* All MEC5 GPIO interrupts are aggregated into GIRQ 8 - 12, and 26.
 * Lowest numbered pin starts at bit[0].
 * GIRQ does not implement bit[31] therefore each bank can only have
 * 31 pins.            GPIO Port number     GIRQ     ECIA->GIRQ[index]
 * GPIO 0000 - 0036    0                    GIRQ11   3
 * GPIO 0040 - 0076    1                    GIRQ10   2
 * GPIO 0100 - 0136    2                    GIRQ09   1
 * GPIO 0140 - 0176    3                    GIRQ08   0
 * GPIO 0200 - 0206    4                    GIRQ12   4
 * GPIO 0240 - 0276    5                    GIRQ26   18
 * Table is indexed by GPIO port number and contains the zero based
 * index into the ECIA->GIRQ[] structure array.
 */
const uint8_t mec_gpio_irq_routing[] = {
    3u, 2u, 1u, 0, 4u, 18u
};

const uint8_t mec_gpio_girq_blk_pos[] = {
    11u, 10u, 9u, 8u, 12u, 26u
};

/* Pin is a zero based pin number. */

static inline uint8_t pin_get_port(uint16_t pin)
{
    return (uint8_t)(((pin & 0x1FFu) >> 5) & 0xffu);
}

static inline uint8_t pin_get_bitpos(uint16_t pin)
{
    return (uint8_t)(pin & 0x1Fu);
}

#ifdef MEC_GPIO_PIN_VALIDATION

/*
 * These values need more testing.
 * They also change with the package!
 * SRAM: L=352KB, M=384KB, N=416KB
 * Version/Rev: B# L#(lenovo)
 * I/ -40C to +85C temperature range
 * Packages:
 * SZ = 144 pin WFBGA
 * LJ = 176 pin WFBGA
 *
 * MEC5200M-D0-I/LJ  176-pin
 * MEC1725N-B0-I/LJ  176-pin
 * MEC172X ?? is this SZ?
 * MEC1723M-177 pin
 * EG 144 pin
 * CG60 pin
 *
 * Packages:
 *  LJ = 176 pin
 *  SZ = 144 pin
 */
const uint32_t valid_ctrl_masks[] = {
    MEC5_GPIO_PORT0_BITMAP, MEC5_GPIO_PORT1_BITMAP,
    MEC5_GPIO_PORT2_BITMAP, MEC5_GPIO_PORT3_BITMAP,
    MEC5_GPIO_PORT4_BITMAP, MEC5_GPIO_PORT5_BITMAP,
};

const uint32_t valid_ctrl2_masks[] = {
    MEC5_GPIO_PORT0_C2_BITMAP, MEC5_GPIO_PORT1_C2_BITMAP,
    MEC5_GPIO_PORT2_C2_BITMAP, MEC5_GPIO_PORT3_C2_BITMAP,
    MEC5_GPIO_PORT4_C2_BITMAP, MEC5_GPIO_PORT5_C2_BITMAP,
};
/*-----------------------------------------------------------*/

static inline bool pin_is_valid(uint32_t pin)
{
    uint32_t port = pin_get_port((uint16_t)(pin & 0xffffu));
    uint8_t bitpos = pin_get_bitpos((uint16_t)(pin & 0xffffu));

    if ((port < MEC_GPIO_PORT_MAX) && (valid_ctrl_masks[port] & MEC_BIT(bitpos))) {
        return true;
    }

    return false;
}

int mec_gpio_pin_valid(uint32_t pin)
{
    if (pin_is_valid(pin)) {
        return 1;
    }

    return 0;
}

int mec_gpio_port_pin_valid(uint8_t port, uint8_t pin_port_pos)
{
    if ((port < MEC_GPIO_PORT_MAX) && (pin_port_pos < 32u)) {
        if (valid_ctrl_masks[port] & MEC_BIT(pin_port_pos)) {
            return MEC_RET_OK;
        }
    }

    return MEC_RET_ERR_INVAL;
}

int mec_gpio_port_valid_mask(uint8_t port, uint32_t *valid_msk)
{
    if ((port >= MEC_GPIO_PORT_MAX) || !valid_msk) {
        return MEC_RET_ERR_INVAL;
    }

    *valid_msk = valid_ctrl_masks[port];

    return 0;
}
#else
int mec_gpio_pin_valid(uint32_t pin)
{
    return 1u;
}

int mec_gpio_port_pin_valid(uint8_t port, uint8_t pin_port_pos)
{
    if ((port >= MEC_GPIO_PORT_MAX) || (pin_port_pos >= 32u)) {
        return MEC_RET_ERR_INVAL;
    }

    return MEC_RET_OK;
}

int mec_gpio_port_valid_mask(uint8_t port, uint32_t *valid_msk)
{
    if ((port >= MEC_GPIO_PORT_MAX) || !valid_msk) {
        return MEC_RET_ERR_INVAL;
    }

    *valid_msk = 0xffffffffu;

    return MEC_RET_OK;
}
#endif /* #ifdef MEC_GPIO_PIN_VALIDATION */

/*
 * Parameter pin is a zero based number.
 * Each GPIO control register is 32 bits located consecutively
 * from the base address.
 */
#define MEC_GPIO_CTRL_ADDR   (GPIO_BASE)
#define MEC_GPIO_CTRL2_ADDR  (GPIO_BASE + MEC_GPIO_CTRL2_OFS)
#define MEC_GPIO_PARIN_ADDR  (GPIO_BASE + MEC_GPIO_PARIN_OFS)
#define MEC_GPIO_PAROUT_ADDR (GPIO_BASE + MEC_GPIO_PAROUT_OFS)
/* NOTE: LOCK0 is at top of range */
#define MEC_GPIO_LOCK0_ADDR (GPIO_BASE + MEC_GPIO_LOCK_OFS_HI)

#define MEC_GPIO_PIN_CTRL_ADDR(pin) \
        ((MEC_GPIO_CTRL_ADDR) + ((uint32_t)(pin) * 4u));

#define MEC_GPIO_PIN_CTRL2_ADDR(pin) \
        ((MEC_GPIO_CTRL2_ADDR) + ((uint32_t)(pin) * 4u));

#define MEC_GPIO_PARIN_PORT_ADDR(p) \
        ((uintptr_t)(MEC_GPIO_PARIN_ADDR) + ((uintptr_t)(p) * 4U))

#define MEC_GPIO_PAROUT_PORT_ADDR(p) \
        ((uintptr_t)(MEC_GPIO_PAROUT_ADDR) + ((uintptr_t)(p) * 4U))

/* offset from AHB peripheral region */
#define MEC_GPIO_PAROUT_AHB_OFS(p) \
    ((uintptr_t)((MEC_GPIO_PAROUT_ADDR) & 0xFFFFFu) + ((uintptr_t)(p) * 4U))

static inline uintptr_t gpio_control_addr(uint32_t pin)
{
    return (uintptr_t)(MEC_GPIO_CTRL_ADDR) + (uint32_t)(pin * 4U);
}

static inline uintptr_t gpio_control2_addr(uint16_t pin)
{
    return (uintptr_t)(MEC_GPIO_CTRL2_ADDR) + (uint32_t)(pin * 4U);
}

/*--------------------- Public API -------------------------*/
int mec_gpio_pin_num(uint8_t port, uint8_t pin_port_pos, uint32_t *pin_num)
{
    if ((port > MEC_GPIO_PORT_MAX) || (pin_port_pos > 32u) || !pin_num) {
        return MEC_RET_ERR_INVAL;
    }

    *pin_num = ((uint32_t)port * 32U) + (uint32_t)pin_port_pos;

    return 0;
}

uintptr_t mec_gpio_ctrl_addr(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return 0;
    }
#endif
    return gpio_control_addr(pin);
}

uintptr_t mec_gpio_ctrl2_addr(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return 0;
    }
#endif
    return gpio_control2_addr(pin & 0xffffu);
}

int mec_gpio_is_output(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return 0;
    }
#endif
    if (GPIO->CTRL[pin] & (GPIO_CTRL_DIR_OUTPUT << GPIO_CTRL_DIR_Pos)) {
        return 1;
    }

    return 0;
}

int mec_gpio_disable_input_pad(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    GPIO->CTRL[pin] |= MEC_BIT(GPIO_CTRL_INPD_Pos);

    return MEC_RET_OK;
}

int mec_gpio_enable_input_pad(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    GPIO->CTRL[pin] &= ~MEC_BIT(GPIO_CTRL_INPD_Pos);

    return MEC_RET_OK;
}

/* Check if pin control registers are locked */
int mec_gpio_is_locked(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return 0;
    }
#endif
    uint32_t bitpos = pin_get_bitpos(pin & 0xffffu);
    uint32_t port = pin_get_port(pin & 0xffffu);

    /* lock registers are from high address to low address */
    if (GPIO->LOCK[MEC_GPIO_PORT_MAX - 1u - port] & MEC_BIT(bitpos)) {
        return 1;
    }

    return 0;
}

int mec_gpio_get_config(uint32_t pin, uint32_t *config)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!config) {
        return MEC_RET_ERR_INVAL;
    }

    *config = GPIO->CTRL[pin] & 0xffffu;

    return MEC_RET_OK;
}

int mec_gpio_set_config(uint32_t pin, uint32_t cfg)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    MEC_MMCR16_WR(&GPIO->CTRL[pin], cfg & 0xffffu);

    return MEC_RET_OK;
}

int mec_gpio_set_config_mask(uint32_t pin, uint32_t cfg, uint32_t mask)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    uint16_t pin_cfg = MEC_MMCR16_RD(&GPIO->CTRL[pin]) & (uint16_t)~mask;

    pin_cfg |= (uint16_t)(cfg & mask);
    MEC_MMCR16_WR(&GPIO->CTRL[pin], pin_cfg);

    return MEC_RET_OK;
}

int mec_gpio_get_ctrl_property(uint32_t ctrl, uint8_t prop_id, uint8_t *prop)
{
    if (prop_id >= MEC_GPIO_MAX_PROP_ID) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t msk0 = mec_cfg_tbl[prop_id].mask;
    uint32_t bpos = mec_cfg_tbl[prop_id].bitpos;

    *prop = (uint8_t)((ctrl >> bpos) & msk0);

    return MEC_RET_OK;
}

uint32_t mec_gpio_set_ctrl_property(uint32_t ctrl, uint8_t prop_id, uint8_t val)
{
    if (prop_id >= MEC_GPIO_MAX_PROP_ID) {
        return ctrl;
    }

    uint32_t msk0 = mec_cfg_tbl[prop_id].mask;
    uint32_t bpos = mec_cfg_tbl[prop_id].bitpos;

    ctrl = (ctrl & ~(msk0 << bpos)) | (((uint32_t)val & msk0) << bpos);

    return ctrl;
}

int mec_gpio_get_property(uint32_t pin, uint8_t prop_id, uint8_t *prop)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if ((prop_id >= MEC_GPIO_MAX_PROP_ID) || !prop) {
        return MEC_RET_ERR_INVAL;
    }

    uintptr_t regaddr = (uintptr_t)&GPIO->CTRL[pin];
    uint32_t msk0 = mec_cfg_tbl[prop_id].mask;
    uint32_t bpos = mec_cfg_tbl[prop_id].bitpos;

    if (mec_cfg_tbl[prop_id].ctrl_reg) {
        regaddr += MEC_GPIO_CTRL2_OFS;
    }

    *prop = (uint8_t)((MEC_MMCR32(regaddr) >> bpos) & msk0);

    return MEC_RET_OK;
}

int mec_gpio_set_property(uint32_t pin, uint8_t prop_id, uint8_t val)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (prop_id >= MEC_GPIO_MAX_PROP_ID) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t msk0 = mec_cfg_tbl[prop_id].mask;
    uint32_t bpos = mec_cfg_tbl[prop_id].bitpos;
    uintptr_t regaddr = (uintptr_t)&GPIO->CTRL[pin];

    if (mec_cfg_tbl[prop_id].ctrl_reg) {
        regaddr += MEC_GPIO_CTRL2_OFS;
    }

    MEC_MMCR32(regaddr) = ((MEC_MMCR32(regaddr) & ~(msk0 << bpos))
                           | (((uint32_t)val & msk0) << bpos));

#ifdef MEC_GPIO_IDET_CHG_ANOMALY_FIX
    if (prop_id == MEC_GPIO_IDET_PROP_ID) {
        for (int i = 0; i < MEC_GPIO_EDGE_DLY_COUNT; i++) {
            MEC_MMCR32(regaddr);
        }
    }
#endif

    return MEC_RET_OK;
}

int mec_gpio_set_props(uint32_t pin, const struct mec_gpio_props *gprops,
                       size_t nprops)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!nprops) {
        return MEC_RET_OK;
    }

    if (!gprops) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t ctrl = GPIO->CTRL[pin];
    uint32_t ctrl2 = GPIO->CTL2[pin];

    for (size_t n = 0; n < nprops; n++) {
        uint32_t prop = gprops[n].prop;
        uint32_t bitpos = mec_cfg_tbl[prop].bitpos;
        uint32_t mask = mec_cfg_tbl[prop].mask;
        uint32_t val = gprops[n].val & mask;

        if (mec_cfg_tbl[prop].ctrl_reg) {
            ctrl2 = (ctrl2 & ~(mask << bitpos)) | (val << bitpos);
        } else {
            ctrl = (ctrl & ~(mask << bitpos)) | (val << bitpos);
        }
    }

    GPIO->CTL2[pin] = ctrl2;
    GPIO->CTRL[pin] = ctrl;

    return MEC_RET_OK;
}

static uint32_t pull_config(uint32_t config)
{
    uint32_t val = GPIO_CTRL_PUD_NONE;

    switch (config & MEC5_GPIO_CFG_PULL_MSK) {
    case MEC5_GPIO_CFG_PULL_UP:
        val = GPIO_CTRL_PUD_PULLUP;
        break;
    case MEC5_GPIO_CFG_PULL_DN:
        val = GPIO_CTRL_PUD_PULLDN;
        break;
    case MEC5_GPIO_CFG_PULL_KEEPER:
        val = GPIO_CTRL_PUD_REPEATER;
        break;
    default:
        break;
    }

    return (val << GPIO_CTRL_PUD_Pos);
}

static uint32_t pwrgate_config(uint32_t config)
{
    uint32_t val = GPIO_CTRL_PGS_VTR;

    switch (config & MEC5_GPIO_CFG_PWR_GATE_MSK) {
    case MEC5_GPIO_CFG_PWRGT_VCC:
        val = GPIO_CTRL_PGS_VCC;
        break;
    case MEC5_GPIO_CFG_PWRGT_OFF:
        val = GPIO_CTRL_PGS_UNPWRD;
        break;
    default:
        break;
    }

    return (val << GPIO_CTRL_PGS_Pos);
}

static uint32_t idet_config(uint32_t config)
{
    uint32_t val = GPIO_CTRL_IDET_DIS;

    switch (config & MEC5_GPIO_CFG_IDET_POS) {
    case MEC5_GPIO_CFG_IDET_LVL_LO:
        val = GPIO_CTRL_IDET_LVL_LO;
        break;
    case MEC5_GPIO_CFG_IDET_LVL_HI:
        val = GPIO_CTRL_IDET_LVL_HI;
        break;
    case MEC5_GPIO_CFG_IDET_RISING_EDG:
        val = GPIO_CTRL_IDET_REDGE;
        break;
    case MEC5_GPIO_CFG_IDET_FALLING_EDG:
        val = GPIO_CTRL_IDET_FEDGE;
        break;
    case MEC5_GPIO_CFG_IDET_BOTH_EDG:
        val = GPIO_CTRL_IDET_BEDGE;
        break;
    default:
        break;
    }

    return (val << GPIO_CTRL_IDET_Pos);
}

/* Program specified GPIO pin's configuration.
 * NOTE 1: Parallel output bit cannot be written until parallel output
 * is enabled. If parallel output is selected and we want to set the output
 * value before enabling output then we must do:
 *   Set output value in Control register output bit.
 *   Program pin Control register as output. HW reflects the output value
 *   from Control register bit to corresponding bit in parallel output register.
 *   Enable parallel output mode.
 * NOTE 2: Enabling interrupt detect for one of the edge modes will always
 * trigger an edge was detected. We leave clearing this "enable" spurious status
 * to the driver/application.
 */
int mec_gpio_pin_config(uint32_t pin, uint32_t config)
{
    uint32_t ctrl;

#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    ctrl = (config & MEC5_GPIO_CFG_DRV_STR_MSK) >> MEC5_GPIO_CFG_DRV_STR_POS;
    ctrl <<= GPIO_CTL2_DRVSTR_Pos;
    ctrl &= GPIO_CTL2_DRVSTR_Msk;

    if (config & MEC_BIT(MEC5_GPIO_CFG_SLEW_RATE_POS)) {
        ctrl |= MEC_BIT(GPIO_CTL2_SLR_Pos);
    }
    GPIO->CTL2[pin] = ctrl;

    ctrl = (config & MEC5_GPIO_CFG_FUNC_MSK) >> MEC5_GPIO_CFG_FUNC_POS;
    ctrl = (ctrl << GPIO_CTRL_MUX_Pos) & GPIO_CTRL_MUX_Msk;
    if ((config & MEC5_GPIO_CFG_FUNC_MSK) && (config & MEC_BIT(MEC5_GPIO_CFG_FUNC_INV_POS))) {
        ctrl |= MEC_BIT(GPIO_CTRL_ALTPOL_Pos);
    }

    if (config & MEC_BIT(MEC5_GPIO_CFG_OUT_OPEN_DRAIN_POS)) { /* opendrain? */
        ctrl |= MEC_BIT(GPIO_CTRL_OBT_Pos);
    }

    if (config & MEC_BIT(MEC5_GPIO_CFG_DIR_OUT_POS)) { /* direction is output? */
        ctrl |= MEC_BIT(GPIO_CTRL_DIR_Pos);
        if (config & MEC_BIT(MEC5_GPIO_CFG_SET_OUT_VAL_POS)) {
            if (config & MEC_BIT(MEC5_GPIO_CFG_OUT_VAL_POS)) {
                ctrl |= MEC_BIT(GPIO_CTRL_ALTVAL_Pos);
            }
        }
    }

    ctrl |= pull_config(config);
    ctrl |= pwrgate_config(config);
    ctrl |= idet_config(config);

    GPIO->CTRL[pin] = ctrl;

    if (config & MEC_BIT(MEC5_GPIO_CFG_PAR_OUT_EN_POS)) {
        GPIO->CTRL[pin] |= MEC_BIT(GPIO_CTRL_PAREN_Pos);
    }

    return MEC_RET_OK;
}

uint32_t mec_gpio_get_ctrl_nc(uint32_t pin)
{
    return GPIO->CTRL[pin];
}

void mec_gpio_set_ctrl_nc(uint32_t pin, uint32_t ctrl_val)
{
    GPIO->CTRL[pin] = ctrl_val;
}

uint32_t mec_gpio_port_get_ctrl_nc(uint8_t port, uint8_t port_pin_pos)
{
    uint32_t pin = mec_gpio_pin_num_nc(port, port_pin_pos);

    return GPIO->CTRL[pin];
}

void mec_gpio_port_set_ctrl_nc(uint8_t port, uint8_t port_pin_pos,
                               uint32_t ctrl_val)
{
    uint32_t pin = mec_gpio_pin_num_nc(port, port_pin_pos);

    GPIO->CTRL[pin] = ctrl_val;
}

int mec_gpio_get_ctrl(uint32_t pin, uint32_t *ctrl)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!ctrl) {
        return MEC_RET_ERR_INVAL;
    }

    *ctrl = GPIO->CTRL[pin];

    return MEC_RET_OK;
}

int mec_gpio_set_ctrl(uint32_t pin, uint32_t new_ctrl)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    GPIO->CTRL[pin] = new_ctrl;

    return MEC_RET_OK;
}

int mec_gpio_set_ctrl_mask(uint32_t pin, uint32_t val, uint32_t mask)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    GPIO->CTRL[pin] = (GPIO->CTRL[pin] & ~mask) | (val & mask);

    return MEC_RET_OK;
}

int mec_gpio_get_ctrl2(uint32_t pin, uint32_t *ctrl2)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (!ctrl2) {
        return MEC_RET_ERR_INVAL;
    }

    *ctrl2 = GPIO->CTL2[pin];

    return MEC_RET_OK;
}

int mec_gpio_set_ctrl2(uint32_t pin, uint32_t new_ctrl2)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    GPIO->CTL2[pin] = new_ctrl2;

    return MEC_RET_OK;
}

int mec_gpio_ctrl2_mask(const uint32_t pin, uint32_t val, uint32_t mask)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    GPIO->CTL2[pin] = (GPIO->CTL2[pin] & ~mask) | (val & mask);

    return MEC_RET_OK;
}

int mec_gpio_get_slew_rate(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    return (int)((GPIO->CTL2[pin] & GPIO_CTL2_SLR_Msk) >> GPIO_CTL2_SLR_Pos);
}

int mec_gpio_set_slew_rate(uint32_t pin, enum mec_gpio_slew_rate slew_rate)
{
    uint32_t val = 0;

#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    switch (slew_rate) {
    case MEC_GPIO_SLEW_RATE_SLOW:
        val = GPIO_CTL2_SLR_SLOW;
        break;
    case MEC_GPIO_SLEW_RATE_FAST:
        val = GPIO_CTL2_SLR_FAST;
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    GPIO->CTL2[pin] = (GPIO->CTL2[pin] & ~(GPIO_CTL2_SLR_Msk)) | (val << GPIO_CTL2_SLR_Pos);

    return MEC_RET_OK;
}

int mec_gpio_get_drive_strength(uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    return (int)((GPIO->CTL2[pin] & GPIO_CTL2_DRVSTR_Msk) >> GPIO_CTL2_DRVSTR_Pos);
}

int mec_gpio_set_drive_strength(uint32_t pin, enum mec_gpio_drive_str drive_str)
{
    uint32_t val = 0;

#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    switch (drive_str) {
    case MEC_GPIO_DRIVE_STR_1X:
        val = GPIO_CTL2_DRVSTR_2MA;
        break;
    case MEC_GPIO_DRIVE_STR_2X:
        val = GPIO_CTL2_DRVSTR_4MA;
        break;
    case MEC_GPIO_DRIVE_STR_4X:
        val = GPIO_CTL2_DRVSTR_8MA;
        break;
    case MEC_GPIO_DRIVE_STR_6X:
        val = GPIO_CTL2_DRVSTR_12MA;
        break;
    default:
        return MEC_RET_ERR_INVAL;
    }

    GPIO->CTL2[pin] = (GPIO->CTL2[pin] & ~(GPIO_CTL2_DRVSTR_Msk)) | (val << GPIO_CTL2_DRVSTR_Pos);

    return MEC_RET_OK;
}

int mec_gpio_alt_out(const uint32_t pin, uint8_t val)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    if (val) {
        GPIO->CTRL[pin] |= MEC_BIT(GPIO_CTRL_ALTVAL_Pos);
    } else {
        GPIO->CTRL[pin] &= (uint32_t)~MEC_BIT(GPIO_CTRL_ALTVAL_Pos);
    }

    return MEC_RET_OK;
}

int mec_gpio_alt_out_toggle(const uint32_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif

    GPIO->CTRL[pin] ^= MEC_BIT(GPIO_CTRL_ALTVAL_Pos);

    return MEC_RET_OK;
}

int mec_gpio_pad_in(const uint32_t pin, uint8_t *padin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!padin) {
        return MEC_RET_ERR_INVAL;
    }

    *padin = (uint8_t)((GPIO->CTRL[pin] >> GPIO_CTRL_PADIN_Pos) & MEC_BIT(0));

    return MEC_RET_OK;
}

int mec_gpio_par_in(const uint32_t pin, uint8_t *pinval)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!pinval) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t bitpos = pin_get_bitpos(pin & 0xffffu);
    uint32_t port = pin_get_port(pin & 0xffffu);

    *pinval = (uint8_t)((GPIO->PARIN[port] >> bitpos) & MEC_BIT(0));

    return MEC_RET_OK;
}

int mec_gpio_par_out(const uint32_t pin, const uint8_t pin_state)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    uint32_t port = pin_get_port(pin & 0xffffu);
    uint32_t bitpos = pin_get_bitpos(pin & 0xffffu);

#ifdef MEC_GPIO_PAROUT_BITBAND
    uintptr_t bit_word_addr = (uintptr_t)(MEC_PERIPH_BITBAND_BASE)
                              + (MEC_GPIO_PAROUT_AHB_OFS(port) * 32U)
                              + (uintptr_t)(bitpos * 4U);
    uint32_t bbval = (pin_state) ? 1: 0;

    MMCR32_WR(bit_word_addr, bbval);
#else
    if (pin_state) {
        GPIO->PAROUT[port] |= MEC_BIT(bitpos);
    } else {
        GPIO->PAROUT[port] &= (uint32_t)~MEC_BIT(bitpos);
    }
#endif
    return MEC_RET_OK;
}

int mec_gpio_parin_port(const uint8_t port, uint32_t *val)
{
    if ((port >= MEC_GPIO_PORT_MAX) || !val) {
        return MEC_RET_ERR_INVAL;
    }

    *val = GPIO->PARIN[port];

    return MEC_RET_OK;
}

int mec_gpio_parin_by_pin(uint32_t pin, uint32_t *val)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!val) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t port = pin_get_port(pin & 0xffffu);

    *val = GPIO->PARIN[port];

    return MEC_RET_OK;
}

int mec_gpio_parout_port_get(const uint8_t port, uint32_t *val)
{
    if ((port >= MEC_GPIO_PORT_MAX) || !val) {
        return MEC_RET_ERR_INVAL;
    }

    *val = GPIO->PAROUT[port];

    return MEC_RET_OK;
}

int mec_gpio_parout_port_get_by_pin(uint32_t pin, uint32_t *val)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    if (!val) {
        return MEC_RET_ERR_INVAL;
    }

    uint32_t port = pin_get_port(pin & 0xffffu);

    *val = GPIO->PAROUT[port];

    return MEC_RET_OK;
}

int mec_gpio_parout_port(const uint8_t port, const uint32_t newval)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    GPIO->PAROUT[port] = newval;

    return MEC_RET_OK;
}

int mec_gpio_parout_port_xor(const uint8_t port, const uint32_t xormask)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    GPIO->PAROUT[port] ^= xormask;

    return MEC_RET_OK;
}

int mec_gpio_parout_port_set_bits(const uint8_t port, const uint32_t mask)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    GPIO->PAROUT[port] |= mask;

    return MEC_RET_OK;
}

int mec_gpio_parout_port_mask(const uint8_t port, const uint32_t newval, const uint32_t mask)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    GPIO->PAROUT[port] = (GPIO->PAROUT[port] & ~mask) | (newval & mask);

    return MEC_RET_OK;
}

int mec_gpio_port_ia_ctrl(uint8_t port, uint8_t enable)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t bitpos = mec_gpio_girq_blk_pos[port];

    if (enable) {
        ECIA0->BLK_EN_SET = MEC_BIT(bitpos);
    } else {
        ECIA0->BLK_EN_CLR = MEC_BIT(bitpos);
    }

    return 0;
}

int mec_gpio_port_pin_ia_enable(uint8_t port, uint8_t port_pin_pos, uint8_t enable)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t girq_idx = mec_gpio_irq_routing[port];

    port_pin_pos &= 0x1fu;
    if (enable) {
        ECIA0->GIRQ[girq_idx].EN_SET = MEC_BIT(port_pin_pos);
    } else {
        ECIA0->GIRQ[girq_idx].EN_CLR = MEC_BIT(port_pin_pos);
    }

    return 0;
}

int mec_gpio_pin_ia_enable(uint8_t pin, uint8_t enable)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    const uint8_t port = pin_get_port(pin);
    const uint8_t bitpos = pin_get_bitpos(pin);

    return mec_gpio_port_pin_ia_enable(port, bitpos, enable);
}

int mec_gpio_port_pin_ia_status_clear(uint8_t port, uint8_t port_pin_pos)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t girq_idx = mec_gpio_irq_routing[port];

    ECIA0->GIRQ[girq_idx].SOURCE = MEC_BIT(port_pin_pos & 0x1fu);

    return 0;
}

int mec_gpio_pin_ia_status_clr(uint8_t pin)
{
#ifdef MEC_GPIO_PIN_VALIDATION
    if (!pin_is_valid(pin)) {
        return MEC_RET_ERR_INVAL;
    }
#endif
    const uint8_t port = pin_get_port(pin);
    const uint8_t bitpos = pin_get_bitpos(pin);

    return mec_gpio_port_pin_ia_status_clear(port, bitpos);
}

int mec_gpio_port_ia_status_clr_mask(uint8_t port, uint32_t mask)
{
    if (port >= MEC_GPIO_PORT_MAX) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t girq_idx = mec_gpio_irq_routing[port];

    ECIA0->GIRQ[girq_idx].SOURCE = mask;

    return 0;
}

int mec_gpio_port_ia_result(uint8_t port, uint32_t *result)
{
    if ((port >= MEC_GPIO_PORT_MAX) || !result) {
        return MEC_RET_ERR_INVAL;
    }

    uint8_t girq_idx = mec_gpio_irq_routing[port];

    *result = ECIA0->GIRQ[girq_idx].RESULT;

    return 0;
}
/* end mec_gpio.c */
