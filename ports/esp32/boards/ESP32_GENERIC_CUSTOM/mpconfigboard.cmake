# 创建文件: ports/esp32/boards/ESP32_GENERIC_CUSTOM/mpconfigboard.cmake
# 这是自定义开发板的CMake配置

set(IDF_TARGET esp32)

# 设置分区表
set(MICROPY_PARTITION_TABLE_FILE "partitions.csv")

# Flash大小设置
set(MICROPY_FLASH_SIZE "4MB")

# 启用SPIRAM支持 (如果你的开发板有PSRAM)
# set(MICROPY_SPIRAM 1)

# 启用蓝牙
set(MICROPY_BLUETOOTH_NIMBLE 1)

# 启用Wi-Fi
set(MICROPY_NETWORK_WLAN 1)

# 设置构建选项
set(MICROPY_GC_STACK_ENTRY_TYPE "size_t")

# 包含默认配置
include(${MICROPY_BOARD_DIR}/../ESP32_GENERIC/mpconfigboard.cmake)
