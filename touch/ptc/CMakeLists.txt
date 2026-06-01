# Copyright (c) 2026 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

# ptc library path for all the targets
set(PTC_LIB_PATH ${ZEPHYR_HAL_MICROCHIP_MODULE_DIR}/zephyr/blobs/ptc)

# ptc common header file path
zephyr_include_directories(common)

# PIC32C
add_subdirectory_ifdef(CONFIG_MICROCHIP_PIC32C  pic32c)

# touch libraries for CORTEX-M0+
if (CONFIG_CPU_CORTEX_M0PLUS)
    # frequency hop library
    if (CONFIG_INPUT_MCHP_TOUCH_EN_FREQ_HOP)
        add_library(lib_freq_hop STATIC IMPORTED GLOBAL)
        set_target_properties(lib_freq_hop PROPERTIES IMPORTED_LOCATION ${PTC_LIB_PATH}/common/cortex_m0p/qtm_freq_hop_cm0p_0x0006.X.a)
        target_link_libraries(app PUBLIC lib_freq_hop)
    endif()

    # freq_hop_auto library
    if (CONFIG_INPUT_MCHP_TOUCH_EN_FREQ_AUTO_TUNE)
        add_library(lib_freq_hop_auto STATIC IMPORTED GLOBAL)
        set_target_properties(lib_freq_hop_auto PROPERTIES IMPORTED_LOCATION ${PTC_LIB_PATH}/common/cortex_m0p/qtm_freq_hop_auto_cm0p_0x0004.X.a)
        target_link_libraries(app PUBLIC lib_freq_hop_auto)
    endif()

    # button library
    if (CONFIG_INPUT_MCHP_TOUCH_EN_BTTN_MODULE)
        add_library(lib_touch_key STATIC IMPORTED GLOBAL)
        set_target_properties(lib_touch_key PROPERTIES IMPORTED_LOCATION ${PTC_LIB_PATH}/common/cortex_m0p/qtm_touch_key_cm0p_0x0002.X.a)
        target_link_libraries(app PUBLIC lib_touch_key)
    endif()

    # scroller library
    if (CONFIG_INPUT_MCHP_TOUCH_EN_SCROLLER)
        add_library(lib_scroller STATIC IMPORTED GLOBAL)
        set_target_properties(lib_scroller PROPERTIES IMPORTED_LOCATION ${PTC_LIB_PATH}/common/cortex_m0p/qtm_scroller_cm0p_0x000b.X.a)
        target_link_libraries(app PUBLIC lib_scroller)
    endif()
endif()
