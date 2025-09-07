/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef RGB_MATRIX_ENABLE

// https://docs.qmk.fm/features/rgblight#keycodes
// Do not share keycodes between RGBMATRIX and RGBLIGHT
// #define RGB_MATRIX_DISABLE_SHARED_KEYCODES

// #define ENABLE_RGB_MATRIX_PIXEL_FLOW

// RGB Matrix Effect Typing Heatmap
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP

// This effect will color the RGB matrix according to a heatmap of recently
// pressed keys. Whenever a key is pressed its "temperature" increases as
// well as that of its neighboring keys. The temperature of each key is
// then decreased automatically every 25 milliseconds by default.

// In order to change the delay of temperature decrease define
// RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS:
// #define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50

// As heatmap uses the physical position of the leds set in the g_led_config,
// you may need to tweak the following options to get the best effect for
// your keyboard. Note the size of this grid is 224x64.

// Limit the distance the effect spreads to surrounding keys.
// #define RGB_MATRIX_TYPING_HEATMAP_SPREAD 40

// Limit how hot surrounding keys get from each press.
// #define RGB_MATRIX_TYPING_HEATMAP_AREA_LIMIT 16

// Remove the spread effect entirely.
// #define RGB_MATRIX_TYPING_HEATMAP_SLIM

// It's also possible to adjust the tempo of heating up. It's defined as the
// number of shades that are increased on the HSV scale. Decreasing this value
// increases the number of keystrokes needed to fully heat up the key.// c
// #define RGB_MATRIX_TYPING_HEATMAP_INCREASE_STEP 32

#endif

#ifdef OLED_DRIVER_ENABLE
#    define OLED_DISPLAY_128X64
#endif

// Tap-hold configurations
// Using suggested settings from:
// https://getreuer.info/posts/keyboards/faqs/index.html#home-row-mods-are-hard-to-use
#define TAPPING_TERM 250

// QMK default implementation of the legacy Achordion
#define CHORDAL_HOLD

#define PERMISSIVE_HOLD

// #define IGNORE_MOD_TAP_INTERRUPT

// Fixes clockwise/anticlockwise detection
#define ENCODER_DIRECTION_FLIP

#define LEADER_NO_TIMEOUT
#define LEADER_TIMEOUT 250
#define LEADER_PER_KEY_TIMING

#define DYNAMIC_MACRO_SIZE 1024

// load our own font, with custom QMK logo
#define OLED_FONT_H "./font.c"

#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 15

// define quadratic speed
#define MK_KINETIC_SPEED

#define CAPS_WORD_INVERT_ON_SHIFT
