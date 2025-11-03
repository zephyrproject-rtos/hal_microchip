# Copyright (c) 2025 Microchip Technology Inc.
# SPDX-License-Identifier: Apache-2.0

zephyr_include_directories(${CONFIG_SOC_SERIES}/include)


if(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CX_BZ2)
  set(PIC32CX_LIB_DIR   ${ZEPHYR_HAL_MICROCHIP_MODULE_DIR}/zephyr/blobs/pic32c/pic32cx_bz/bz2x)
  set(DEV_SUP_LIB pic32cx_bz2_device_support.a)
  set(BT_CTLR_LIB ble_stack_bz2_lib.a)
  set(IEEE802154_PHY_LIB lib-ieee802154_phy_pic32cxbz2.a)
elseif(CONFIG_SOC_FAMILY_MICROCHIP_PIC32CX_BZ6)
  set(PIC32CX_LIB_DIR   ${ZEPHYR_HAL_MICROCHIP_MODULE_DIR}/zephyr/blobs/pic32c/pic32cx_bz/bz6x)
  set(DEV_SUP_LIB pic32cx_bz6_device_support.a)
  set(BT_CTLR_LIB ble_stack_bz6_lib.a)
  set(IEEE802154_PHY_LIB lib-ieee802154_phy_pic32cxbz6.a)
endif()

if(CONFIG_DEVICE_SUPPORT_REQUIRED)
  zephyr_include_directories(${PIC32CX_LIB_DIR}/wireless-dev)
  add_library(lib_devsup STATIC IMPORTED GLOBAL)
  set_target_properties(lib_devsup PROPERTIES IMPORTED_LOCATION ${PIC32CX_LIB_DIR}/wireless-dev/${DEV_SUP_LIB})
  target_link_libraries(app PUBLIC lib_devsup)
endif()

if(CONFIG_BT_DRIVERS)
  zephyr_include_directories(${PIC32CX_LIB_DIR}/wireless-ble)
  add_library(lib_btctlr STATIC IMPORTED GLOBAL)
  set_target_properties(lib_btctlr PROPERTIES IMPORTED_LOCATION ${PIC32CX_LIB_DIR}/wireless-ble/${BT_CTLR_LIB})
  target_link_libraries(app PUBLIC lib_btctlr)
endif()

if(CONFIG_IEEE802154)
  zephyr_include_directories(${PIC32CX_LIB_DIR}/wireless-154)
  add_library(lib_ieee802154_phy STATIC IMPORTED GLOBAL)
  set_target_properties(lib_ieee802154_phy PROPERTIES IMPORTED_LOCATION ${PIC32CX_LIB_DIR}/wireless-154/${IEEE802154_PHY_LIB})
  target_link_libraries(app PUBLIC lib_ieee802154_phy)
endif()

zephyr_include_directories(${CONFIG_SOC_SERIES}/include)
