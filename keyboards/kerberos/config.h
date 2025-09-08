// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// #include "quantum.h"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP1
#define SERIAL_USART_RX_PIN GP0

// set keybard half handness (left/right) by writting to the EEPROM
// https://docs.qmk.fm/features/split_keyboard#handedness-by-eeprom
#define EE_HANDS

// ENCODERS_SETUP
#define ENCODER_A_PINS { GP17 }
#define ENCODER_B_PINS { GP16 }
// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3


// OLED_SETUP

// load our own font, with custom QMK logo
#define OLED_FONT_H "./font.c"

#define OLED_IC OLED_IC_SSD1306 // default
#define I2C_DRIVER I2CD0
#define OLED_DISPLAY_128X64
#define OLED_BRIGHTNESS 196
#define I2C1_SDA_PIN GP4
#define I2C1_SCL_PIN GP5
// #define I2C1_CLOCK_SPEED 400000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 15
#define OLED_TIMEOUT 60000

#define SPLIT_OLED_ENABLE
