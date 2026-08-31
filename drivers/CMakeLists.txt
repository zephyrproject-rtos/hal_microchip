
#Set the Minimum Cmak version
cmake_minimum_required(VERSION 3.13)

#Include the Zephyr build system
find_package(Zephyr REQUIRED)

# zephyr_library()

#Include subdirectories for the different modules
add_subdirectory_ifdef(CONFIG_IEEE802154 phy_802154)
if(CONFIG_ENTROPY_GENERATOR OR CONFIG_CRYPTO)
    add_subdirectory(crypto)
endif()
