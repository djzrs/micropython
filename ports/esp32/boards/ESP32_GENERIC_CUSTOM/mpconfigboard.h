// 创建文件: ports/esp32/boards/ESP32_GENERIC_CUSTOM/mpconfigboard.h
// 这是一个自定义开发板配置示例

#define MICROPY_HW_BOARD_NAME "ESP32 Custom"
#define MICROPY_HW_MCU_NAME "ESP32"

// 启用额外的模块
#define MICROPY_PY_MACHINE_DAC (1)
#define MICROPY_PY_MACHINE_I2C (1)
#define MICROPY_PY_MACHINE_SPI (1)
#define MICROPY_PY_MACHINE_UART (1)
#define MICROPY_PY_MACHINE_PWM (1)
#define MICROPY_PY_MACHINE_ADC (1)
#define MICROPY_PY_MACHINE_TIMER (1)
#define MICROPY_PY_MACHINE_RTC (1)
#define MICROPY_PY_NETWORK_WLAN (1)
#define MICROPY_PY_NETWORK_AP (1)
#define MICROPY_PY_BLUETOOTH (1)

// 内存配置
#define MICROPY_GC_STACK_ENTRY_TYPE size_t
#define MICROPY_MEM_STATS (1)

// 文件系统配置
#define MICROPY_VFS_FAT (1)
#define MICROPY_VFS_LFS2 (1)

// 启用异步IO
#define MICROPY_PY_ASYNCIO (1)
#define MICROPY_PY_ASYNCIO_WEBSOCKET (1)

// 启用SSL/TLS
#define MICROPY_PY_USSL (1)
#define MICROPY_SSL_MBEDTLS (1)

// 启用JSON
#define MICROPY_PY_UJSON (1)

// 启用hashlib
#define MICROPY_PY_UHASHLIB (1)

// 启用binascii
#define MICROPY_PY_UBINASCII (1)

// 启用更多的内置模块
#define MICROPY_PY_UWEBSOCKET (1)
#define MICROPY_PY_UREQUESTS (1)

// 包含默认配置
#include "mpconfigboard_common.h"
