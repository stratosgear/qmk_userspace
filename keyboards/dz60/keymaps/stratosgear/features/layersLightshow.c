
#include QMK_KEYBOARD_H
#include "layersLightshow.h"
#include "../keymap.h"

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_QWERTY:
        case L_COLEMAK_DH:
            // rgblight_mode(9);
            // backlight_disable();
            rgblight_mode(0);
            break;
        case L_FUNCTIONAL:
            rgblight_mode(29);
            // backlight_enable();
            break;
        case L_FUNCTIONAL2:
            rgblight_mode(26);
            break;
        case L_KEYBOARD:
            rgblight_mode(1);
            // rgblight_mode(25);
            break;
    }
    return state;
}
