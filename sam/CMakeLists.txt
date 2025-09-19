# Copyright (C) 2025 Microchip Technology Inc. and its subsidiaries
#
# SPDX-License-Identifier: Apache-2.0
#

add_subdirectory_ifdef(CONFIG_SOC_SERIES_SAMA7D6 sama7d6)
add_subdirectory_ifdef(CONFIG_SOC_SERIES_SAMA7G5 sama7g5)
add_subdirectory_ifdef(CONFIG_SOC_FAMILY_MICROCHIP_SAM_D5X_E5X sam_d5x_e5x)
