# Copyright (c) 2025 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

add_subdirectory_ifdef(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CM_JH pic32cm_jh)
add_subdirectory_ifdef(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CM_PL pic32cm_pl)
add_subdirectory_ifdef(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CX_SG pic32cx_sg)
add_subdirectory_ifdef(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CZ_CA pic32cz_ca)
