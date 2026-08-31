#Set the Minimum Cmak version
cmake_minimum_required(VERSION 3.13)

#Include the Zephyr build system
find_package(Zephyr REQUIRED)

zephyr_library()

zephyr_include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/phy
	${CMAKE_CURRENT_SOURCE_DIR}/pal
	${CMAKE_CURRENT_SOURCE_DIR}/buffer
	${CMAKE_CURRENT_SOURCE_DIR}/queue
)

zephyr_library_sources(
    ${CMAKE_CURRENT_SOURCE_DIR}/phy/phy_ed_end_cb.c
    ${CMAKE_CURRENT_SOURCE_DIR}/phy/phy_rx_frame_cb.c
    ${CMAKE_CURRENT_SOURCE_DIR}/phy/phy_task.c
    ${CMAKE_CURRENT_SOURCE_DIR}/phy/phy_tx_frame_done_cb.c
	${CMAKE_CURRENT_SOURCE_DIR}/phy/phy_utils.c
	${CMAKE_CURRENT_SOURCE_DIR}/pal/pal.c
	${CMAKE_CURRENT_SOURCE_DIR}/pal/pal_pta_interface.c
	${CMAKE_CURRENT_SOURCE_DIR}/buffer/bmm.c
	${CMAKE_CURRENT_SOURCE_DIR}/queue/qmm.c
) 

message(STATUS "1. BOARD at top of CMakeLists: ${BOARD}")

if(CONFIG_DEVICE_SUPPORT_REQUIRED)
  zephyr_blobs_verify(MODULE hal_microchip REQUIRED)
endif()

add_subdirectory_ifdef(CONFIG_IEEE802154_PIC32CX_BZ_CRYPTO sal)
