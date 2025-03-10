/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stddef.h>
#include <stdint.h>

#include <device_mec5.h>

#ifdef MEC5_HAS_EEPROM

#include "mec_defs.h"
#include "mec_adc_api.h"
#include "mec_ecia_api.h"
#include "mec_eeprom_api.h"
#include "mec_pcr_api.h"
#include "mec_retval.h"

#define MEC_EEPROM_GIRQ        18
#define MEC_EEPROM_GIRQ_POS    13
#define MEC_EEPROM_AGGR_NVIC   10
#define MEC_EEPROM_DIRECT_NVIC 155
#define MEC_EEPROM_ECIA_INFO   \
    MEC5_ECIA_INFO(MEC_EEPROM_GIRQ, MEC_EEPROM_GIRQ_POS, \
                   MEC_EEPROM_AGGR_NVIC, MEC_EEPROM_DIRECT_NVIC)

/* ---- Public API ---- */

/* Initialize EEPROM controller */
int mec_hal_eeprom_init(struct mec_eeprom_ctrl_regs *regs, uint32_t flags, uint32_t password)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_pcr_clr_blk_slp_en(MEC_PCR_PSPI); /* clear sleep enable */

    mec_hal_girq_ctrl(MEC_EEPROM_ECIA_INFO, 0);
    mec_hal_girq_clr_src(MEC_EEPROM_ECIA_INFO);

    if (flags & MEC_HAL_EEPROM_CFG_SRST) {
        regs->MODE |= MEC_BIT(MEC_EEPROM_CTRL_MODE_SRST_Pos);
    } else {
        regs->MODE = 0;
        regs->INTR_EN = 0;
        regs->STATUS = UINT32_MAX;
    }

    if (flags & MEC_HAL_EEPROM_CFG_LOAD_PSWD) {
        regs->PSWD = password;
    }

    if (flags & MEC_HAL_EEPROM_CFG_LOCK_ON_PSWD) {
        regs->LOCK |= MEC_BIT(MEC_EEPROM_CTRL_LOCK_LOCK_Pos);
    }

    if (flags & MEC_HAL_EEPROM_CFG_LOCK_ON_JTAG) {
        regs->LOCK |= MEC_BIT(MEC_EEPROM_CTRL_LOCK_JTAG_LOCK_Pos);
    }

    if (flags & MEC_HAL_EEPROM_CFG_DONE_IEN) {
        regs->INTR_EN |= MEC_BIT(MEC_EEPROM_CTRL_INTR_EN_XFR_DONE_Pos);
    }
    if (flags & MEC_HAL_EEPROM_CFG_EXE_ERR_IEN) {
        regs->INTR_EN |= MEC_BIT(MEC_EEPROM_CTRL_INTR_EN_ERROR_Pos);
    }

    if (flags & MEC_HAL_EEPROM_CFG_ENABLE) {
        regs->MODE |= MEC_BIT(MEC_EEPROM_CTRL_MODE_ACTV_Pos);
    }

    return MEC_RET_OK;
}

int mec_hal_eeprom_girq_ctrl(struct mec_eeprom_ctrl_regs *regs, uint8_t enable)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_ctrl(MEC_EEPROM_ECIA_INFO, enable);

    return 0;
}

int mec_hal_eeprom_girq_status_clr(struct mec_eeprom_ctrl_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    mec_hal_girq_clr_src(MEC_EEPROM_ECIA_INFO);

    return 0;
}

int mec_hal_eeprom_activate(struct mec_eeprom_ctrl_regs *regs, uint8_t enable)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (enable) {
        regs->MODE |= MEC_BIT(MEC_EEPROM_CTRL_MODE_ACTV_Pos);
    } else {
        regs->MODE &= (uint32_t)~MEC_BIT(MEC_EEPROM_CTRL_MODE_ACTV_Pos);
    }

    return MEC_RET_OK;
}

uint32_t mec_hal_eeprom_status(struct mec_eeprom_ctrl_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return 0;
    }

    return regs->STATUS;
}

int mec_hal_eeprom_status_clr(struct mec_eeprom_ctrl_regs *regs, uint32_t clrmsk)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->STATUS = clrmsk;

    return MEC_RET_OK;
}

bool mec_hal_eeprom_is_busy(struct mec_eeprom_ctrl_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return false;
    }

    if (regs->STATUS & MEC_BIT(MEC_EEPROM_CTRL_STATUS_XFR_ACTIVE_Pos)) {
        return true;
    }

    return false;
}

int mec_hal_eeprom_intr_en(struct mec_eeprom_ctrl_regs *regs, uint8_t enable, uint32_t flags)
{
    uint32_t msk = 0, rval = 0;

    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (flags & MEC_BIT(MEC_HAL_EEPROM_INTR_DONE_POS)) {
        msk |= MEC_BIT(MEC_EEPROM_CTRL_INTR_EN_XFR_DONE_Pos);
        if (enable) {
            rval |= MEC_BIT(MEC_EEPROM_CTRL_INTR_EN_XFR_DONE_Pos);
        }
    }
    if (flags & MEC_BIT(MEC_HAL_EEPROM_INTR_ERR_POS)) {
        msk |= MEC_BIT(MEC_EEPROM_CTRL_INTR_EN_ERROR_Pos);
        if (enable) {
            rval |= MEC_BIT(MEC_EEPROM_CTRL_INTR_EN_XFR_DONE_Pos);
        }
    }

    if (msk) {
        regs->INTR_EN = (regs->INTR_EN & (uint32_t)~msk) | rval;
    }

    return 0;
}

/* Write-once. No indicator if it has been written before */
int mec_hal_eeprom_set_password(struct mec_eeprom_ctrl_regs *regs, uint32_t password)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PSWD = password;

    return MEC_RET_OK;
}

int mec_hal_eeprom_lock(struct mec_eeprom_ctrl_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->LOCK |= MEC_BIT(MEC_EEPROM_CTRL_LOCK_LOCK_Pos);

    return MEC_RET_OK;
}

bool mec_hal_eeprom_is_locked(struct mec_eeprom_ctrl_regs *regs)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return false;
    }

    if (regs->LOCK & MEC_BIT(MEC_EEPROM_CTRL_LOCK_LOCK_Pos)) {
        return true;
    }

    return false;
}

int mec_hal_eeprom_unlock(struct mec_eeprom_ctrl_regs *regs, uint32_t password)
{
    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    regs->PSWD = password;

    return MEC_RET_OK;
}

int mec_hal_eeprom_buffer_rd(struct mec_eeprom_ctrl_regs *regs, uint8_t *dest, uint32_t nbytes)
{
    uint32_t buf_addr = 0;

    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (!dest || !nbytes || (nbytes > MEC_HAL_EEPROM_MAX_XFR_LEN)) {
        return MEC_RET_ERR_INVAL;
    }


    buf_addr = (uint32_t)&regs->DATA;
    for (uint32_t n = 0; n < nbytes; n++) {
        dest[n] = MEC_MMCR8(buf_addr);
        buf_addr++;
    }

    return MEC_RET_OK;
}

int mec_hal_eeprom_buffer_wr(struct mec_eeprom_ctrl_regs *regs, const uint8_t *src,
                             uint32_t nbytes)
{
    uint32_t buf_addr = 0;

    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (!src || !nbytes || (nbytes > MEC_HAL_EEPROM_MAX_XFR_LEN)) {
        return MEC_RET_ERR_INVAL;
    }

    buf_addr = (uint32_t)&regs->DATA;
    for (uint32_t n = 0; n < nbytes; n++) {
        MEC_MMCR8(buf_addr) = src[n];
        buf_addr++;
    }

    return MEC_RET_OK;
}


/* Send command to EEPROM
 * Read/Write data. Read can be at any address.
 * Writes cannot cross any 32 byte page boundary.
 * Read/Write Status
 * Timing: read transfer 7 us / byte plus 50 us if full 32-bytes.
 *         write transfer ~5ms
 */
/* TODO BUG
 * if op is MEC_HAL_EEPROM_OP_READ_STATUS then offset and nbytes are don't cares
 * if op is MEC_HAL_EEPROM_OP_WRITE_STATUS then offset is don't care and nbytes should be 1
 */
int mec_hal_eeprom_xfr_start(struct mec_eeprom_ctrl_regs *regs, uint8_t op,
                             uint32_t offset, uint32_t nbytes)
{
    uint32_t rexe = 0, temp = 0;
    uint8_t cmd = 0;
    uint8_t xfrsz = 0; /* 0 transfer size encoded in HW as maximum (32 bytes) */

    if ((uintptr_t)regs != (uintptr_t)MEC_EEPROM_CTRL0_BASE) {
        return MEC_RET_ERR_INVAL;
    }

    if (op == MEC_HAL_EEPROM_OP_READ_DATA) {
        if (!nbytes) {
            return MEC_RET_ERR_INVAL;
        }
        /* reads can cross page boundaries */
        if (nbytes < MEC_HAL_EEPROM_MAX_XFR_LEN) {
            xfrsz = (uint8_t)nbytes;
        }
        rexe = ((uint32_t)offset << MEC_EEPROM_CTRL_EXE_TADDR_Pos)
                & MEC_EEPROM_CTRL_EXE_TADDR_Msk;
        cmd = MEC_EEPROM_CTRL0_EXE_CMD_READ;
    } else if (op == MEC_HAL_EEPROM_OP_WRITE_DATA) {
        if (!nbytes) {
            return MEC_RET_ERR_INVAL;
        }
        /* writes cannot cross 32-byte page boundaries */
        xfrsz = (uint8_t)nbytes;
        rexe = offset & (MEC5_EEPROM_SIZE_IN_BYTES - 1u);
        temp = MEC5_EEPROM_WRITE_PAGE_SIZE - (rexe % MEC5_EEPROM_WRITE_PAGE_SIZE);
        if ((uint32_t)xfrsz > temp) {
            xfrsz = (uint8_t)temp;
        }
        if (xfrsz >= MEC5_EEPROM_WRITE_PAGE_SIZE) {
            xfrsz = 0;
        }
        rexe <<= MEC_EEPROM_CTRL_EXE_TADDR_Pos;
        rexe &= MEC_EEPROM_CTRL_EXE_TADDR_Msk;
        cmd = MEC_EEPROM_CTRL0_EXE_CMD_WRITE;
    } else if (op == MEC_HAL_EEPROM_OP_READ_STATUS) {
        /* offset and nbytes are don't cares */
        cmd = MEC_EEPROM_CTRL0_EXE_CMD_RDSTS;
    } else if (op == MEC_HAL_EEPROM_OP_WRITE_STATUS) {
        /* offset is don't care. Data sheet is not clear if nbytes is don't care */
        cmd = MEC_EEPROM_CTRL0_EXE_CMD_WRSTS;
    } else {
        return MEC_RET_ERR_INVAL;
    }

    rexe |= ((uint32_t)cmd << MEC_EEPROM_CTRL_EXE_CMD_Pos) |
             (((uint32_t)xfrsz << MEC_EEPROM_CTRL_EXE_XFRSZ_Pos)
                & MEC_EEPROM_CTRL_EXE_XFRSZ_Msk);

    regs->EXE = rexe; /* transfer started */

    return MEC_RET_OK;
}
#endif /* MEC5_HAS_EEPROM */
/* end mec_eeprom.c */
