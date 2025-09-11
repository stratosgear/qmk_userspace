// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// #include "quantum.h"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP1
#define SERIAL_USART_RX_PIN GP0


// ┌─────────────────────────────────────────────────┐
// │ S P L I T   K E Y B O A R D                     │
// └─────────────────────────────────────────────────┘

// set keyboard half handness (left/right)
// Left: pinned to 3.3V
// Right: pinned to GND
// https://docs.qmk.fm/features/split_keyboard#handedness-by-pin
#define SPLIT_HAND_PIN GP23


// ┌─────────────────────────────────────────────────┐
// │ R A W   I N T E R F A C E                       │
// └─────────────────────────────────────────────────┘

#define RAW_USAGE_PAGE	  0xFF60	// The usage page of the Raw HID interface
#define RAW_USAGE_ID	  0x61	    // The usage ID of the Raw HID interface


// ┌─────────────────────────────────────────────────┐
// │ B O O T M A G I C                               │
// └─────────────────────────────────────────────────┘
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 5
#define BOOTMAGIC_ROW_RIGHT 4
#define BOOTMAGIC_COLUMN_RIGHT 0

// ┌─────────────────────────────────────────────────┐
// │ E N C O D E R S                                 │
// └─────────────────────────────────────────────────┘

#define ENCODER_A_PINS { GP17 }
#define ENCODER_B_PINS { GP16 }
// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3


// ┌─────────────────────────────────────────────────┐
// │ L E A D E R S   /  M A C R O S                  │
// └─────────────────────────────────────────────────┘

#define LEADER_NO_TIMEOUT
#define LEADER_TIMEOUT 500
#define LEADER_PER_KEY_TIMING

#define DYNAMIC_MACRO_SIZE 1024

// ┌─────────────────────────────────────────────────┐
// │ O L E D  Display                                │
// └─────────────────────────────────────────────────┘

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




// ┌─────────────────────────────────────────────────┐
// │ a u d i o                                       │
// └─────────────────────────────────────────────────┘

#ifdef AUDIO_ENABLE
    #define AUDIO_PIN GP22
    #define AUDIO_PWM_DRIVER PWMD3
    #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
    #define AUDIO_INIT_DELAY
    // #define AUDIO_DAC_SAMPLE_MAX 3071U
    // #define AUDIO_DAC_SAMPLE_MAX 1023U

    #define KLOR_SOUND W__NOTE(_DS0), W__NOTE(_DS1), H__NOTE(_DS2), H__NOTE(_DS3), Q__NOTE(_DS4), Q__NOTE(_DS5), E__NOTE(_DS6), E__NOTE(_DS7), S__NOTE(_DS8), Q__NOTE(_GS0)
    #define STARTUP_SONG SONG(KLOR_SOUND)
    #define BYE_SOUND H__NOTE(_DS4), H__NOTE(_DS3), W__NOTE(_DS1)
    #define GOODBYE_SONG SONG(BYE_SOUND)
    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND) }
#endif
