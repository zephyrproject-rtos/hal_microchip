/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ACPI_EC_API_H
#define _MEC_ACPI_EC_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "mec_defs.h"
#include "mec_retval.h"

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C"
{
#endif

/* ACPI EC Controller */

/* MEC5_ACPI_EC_INSTANCES from mec5_defs.h */
#define MEC_ACPI_EC_NUM_IRQS 2 /* number of IRQ sources per instance */

struct mec_acpi_ec_regs;

enum mec_acpi_ec_flags {
    MEC_ACPI_EC_IBF_IRQ    = MEC_BIT(0),
    MEC_ACPI_EC_OBE_IRQ    = MEC_BIT(1),
    MEC_ACPI_EC_4BYTE_MODE = MEC_BIT(2),
    MEC_ACPI_EC_BURST_MODE = MEC_BIT(4),
    MEC_ACPI_EC_RESET      = MEC_BIT(7),
    MEC_ACPI_EC_UD0A_SET   = MEC_BIT(8),
    MEC_ACPI_EC_UD1A_SET   = MEC_BIT(9),
    MEC_ACPI_EC_UD0A_ONE   = MEC_BIT(16),
    MEC_ACPI_EC_UD1A_ONE   = MEC_BIT(17),
};

enum mec_acpi_ec_status {
    MEC_ACPI_EC_STS_OBF   = MEC_BIT(0),
    MEC_ACPI_EC_STS_IBF   = MEC_BIT(1),
    MEC_ACPI_EC_STS_UD1A  = MEC_BIT(2),
    MEC_ACPI_EC_STS_CMD   = MEC_BIT(3),
    MEC_ACPI_EC_STS_BURST = MEC_BIT(4),
    MEC_ACPI_EC_STS_SCI   = MEC_BIT(5),
    MEC_ACPI_EC_STS_SMI   = MEC_BIT(6),
    MEC_ACPI_EC_STS_UD0A  = MEC_BIT(7),
};

int mec_hal_acpi_ec_init(struct mec_acpi_ec_regs *regs, uint32_t flags);
int mec_hal_acpi_ec_is_enabled(struct mec_acpi_ec_regs *regs);
int mec_hal_acpi_ec_is_4byte_mode(struct mec_acpi_ec_regs *regs);

uint8_t mec_hal_acpi_ec_status(struct mec_acpi_ec_regs *regs);
void mec_hal_acpi_ec_status_wr(struct mec_acpi_ec_regs *regs, uint8_t val);
void mec_hal_acpi_ec_status_set(struct mec_acpi_ec_regs *regs, uint8_t val);
void mec_hal_acpi_ec_status_mask(struct mec_acpi_ec_regs *regs, uint8_t val, uint8_t msk);
uint8_t mec_hal_acpi_ec_status_obf(struct mec_acpi_ec_regs *regs);
uint8_t mec_hal_acpi_ec_status_ibf(struct mec_acpi_ec_regs *regs);

uint32_t mec_hal_acpi_ec_host_to_ec_data_rd32(struct mec_acpi_ec_regs *regs);
void mec_hal_acpi_ec_host_to_ec_data_wr32(struct mec_acpi_ec_regs *regs, uint32_t data);
uint8_t mec_hal_acpi_ec_host_to_ec_data_rd8(struct mec_acpi_ec_regs *regs, uint8_t offset);
void mec_hal_acpi_ec_host_to_ec_data_wr8(struct mec_acpi_ec_regs *regs, uint8_t offset,
                                         uint8_t data);

uint32_t mec_hal_acpi_ec_e2h_data_rd32(struct mec_acpi_ec_regs *regs);
void mec_hal_acpi_ec_e2h_to_ec_data_wr32(struct mec_acpi_ec_regs *regs, uint32_t data);
uint8_t mec_hal_acpi_ec_e2h_data_rd8(struct mec_acpi_ec_regs *regs, uint8_t offset);
void mec_hal_acpi_ec_e2h_data_wr8(struct mec_acpi_ec_regs *regs, uint8_t offset, uint8_t data);

int mec_hal_acpi_ec_girq_en(struct mec_acpi_ec_regs *regs, uint32_t flags);
int mec_hal_acpi_ec_girq_dis(struct mec_acpi_ec_regs *regs, uint32_t flags);
int mec_hal_acpi_ec_girq_clr(struct mec_acpi_ec_regs *regs, uint32_t flags);
uint32_t mec_hal_acpi_ec_girq_result(struct mec_acpi_ec_regs *regs);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MEC_ACPI_EC_API_H */
