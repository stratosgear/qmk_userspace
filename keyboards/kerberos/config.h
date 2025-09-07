// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
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
