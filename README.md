# Introduction

The **hal_microchip** is a set of register definitions for Microchip SoC's.
The HAL directory structure detailed below.

## Directory Structure


```
.
├── CMakeLists.txt
├── dts
│   └── microchip
│       └── mec5
│           ├── MEC5 PINCTRL DTSI files
│
├── include
│   └── dt-bindings
│       ├── sam
│       │   └── sam_d5x_e5x — dt-binding header files for the SAM_D5X_E5X family devices
│
├── mec
│   ├── Legacy MEC150x/2x C chip and peripheral header files
│
├── mec5
│   ├── CMakeLists.txt
│   ├── devices
│   │   ├── MEC5 HAL chip and peripheral header files
│   └── drivers
│       ├── MEC5 HAL peripheral C source files
│
├── mpfs
│   ├── PolarFire board and HAL files
│
├── packs
│   ├── CMakeLists.txt
│   ├── pic32c
│   │   ├── CMakeLists.txt
│   │   ├── pic32cm_jh    — DFP header files for PIC32CM JH family devices
│   │   ├── pic32cm_pl    — DFP header files for PIC32CM PL family devices
|   |   ├── pic32ck_sg_gc — DFP header files for PIC32CK SG GC family devices
│   │   ├── pic32cx_sg    — DFP header files for PIC32CX SG family devices
│   │   ├── pic32cz_ca    — DFP header files for PIC32CZ CA family devices
│   │
│   └── sam
│       ├── CMakeLists.txt
│       ├── sam_d5x_e5x — DFP header files for SAM_D5X_E5X family devices
│
├── README.md
│
└── zephyr
    └── module.yml

```

 - MEC5 chips Zephyr device tree PINCFG DTSI files
 - Includes specific for these platforms
   - devicetree bindings
 - Legacy MEC152x header files
 - MEC5 HAL chip and peripheral header and C source files
 - Device family DFP header files of PIC32C devices
 - Device family DFP header files of SAM devices
 - This README file
 - ZephyrRTOS module directory (`zephyr`).

# How to submit code

Any contribution should follow the `How to submit code` using as premisses the
[Zephyr Contribution Guidelines](https://docs.zephyrproject.org/latest/contribute/index.html).
For more information about External Modules see
[Modules Section](https://docs.zephyrproject.org/latest/develop/modules.html) in special
[Submitting Changes to Modules](https://docs.zephyrproject.org/latest/develop/modules.html#submitting-changes-to-modules)

## MEC5 HAL
The MEC5 HAL currently support Microchip MEC172x (named MECH172x in Zephyr SoC), MEC174x, and MEC175x.<br/>
On the Zephyr side the SoC layer build rules set CONFIG_HAS_MEC5_HAL=y.<br/>
The top level CMakeLists.txt then processes the hal_microchip/mec5 subfolder.<br/>
The MEC5 HAL device is chosen using Zephyr CONFIG_SOC_SERIES and CONFIG_SOC.<br/>
Zephyr SoC layer soc.h for MECH172x, MEC174x, and MEC175x include device_mec5.h from the MEC5 HAL.<br/>
Zephyr drivres and applications should include individual HAL API headers to access specific peripherals.<br/>

## MPFS PolarFile HAL
The Microchip Polarfire SOC HAL was downloaded from:

https://github.com/polarfire-soc/platform

Addditionally, the bare metal samples from https://github.com/polarfire-soc/polarfire-soc-bare-metal-examples
are required to extract the Icicle Kit bopard configuration files.

Both are from Tag 21.08

The following changes were made:

 - platform-2021.08 top folder renamed to mpfs and located at modules/hal/microchip
 - The applications/mpfs-pmp-demo/mpfs-pmp-app-u54-1/src/boards folder is copied to modules/hal/microchip/mpfs

