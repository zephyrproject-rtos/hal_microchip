if(CONFIG_HAS_MEC5_HAL)
  zephyr_library()
endif()

string(TOUPPER ${CONFIG_SOC_SERIES} MEC5_SERIES)
string(TOUPPER ${CONFIG_SOC} MEC5_DEVICE)

if (DEFINED CONFIG_SOC_MEC175X_REV_B)
  add_compile_definitions(MEC5_MEC175X_REV_B)
endif()

message(STATUS "HAL mec5 SoC series: MEC5_SERIES = ${MEC5_SERIES}")
message(STATUS "HAL mec5 SoC device: MEC5_DEVICE = ${MEC5_DEVICE}")

add_subdirectory(drivers)
add_subdirectory(devices)
add_subdirectory(devices/${MEC5_SERIES})
