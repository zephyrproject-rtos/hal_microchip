# PolarFire&reg; SoC platform source code

## Repo organization

```
<platform>
  |
  |-- drivers
  |     |- fpga_ip
  |     |     | .
  |     |     | .  
  |     |-  mss
  |     |     |- mss-ethernet-mac
  |     |     |- mss-can
  |     |     |- mss-gpio
  |     |     |     .
  |     |     |     .
  |     |     |     .
  |     |     |- mss-mmc
  |     |     |- mss-watchdog  
  |     |           |- mss-watchdog.c
  |     |           |- mss-watchdog.h
  |     |
  |     |- off_chip
  |     |     |  .
  |     |     |  .
  |     |
  |-- hal
  |     |
  |-- mpfs_hal
  |     |
  |-- platform_config_reference
  |     |     |- linker
  |     |     |     |- mpfs-ddr-loaded-by-boot-loader.ld                
  |     |     |     |- mpfs-envm-lma-scratchpad-vma.ld
  |     |     |     |- mpfs-envm.ld                
  |     |     |     |- mpfs-lim-lma-scratchpad-vma.ld
  |     |     |     |- mpfs-lim.ld
  |     |     |
  |     |     |
  |     |     |- mpfs_hal_config
  |     |           |- mss_sw_config.h 
  |     | 
  |-- soc_config_generator
  |           |
  |           |- mpfs_configuration_generator.py
  
```

For detailed description about the contents of the platform sub-directories and the overall bare metal software project folder structure, please refer to the
[Bare Metal Software Projects Structure](https://github.com/polarfire-soc/polarfire-soc-documentation/blob/master/bare-metal-project-structure/bare-metal-software-project-structure.md)
