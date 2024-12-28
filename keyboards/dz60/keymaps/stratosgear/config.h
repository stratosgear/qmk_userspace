// #include "../../config.h"

// Disable all Animations to save firmware memory!
// List of animation: https://docs.qmk.fm/#/feature_rgblight?id=effect-and-animation-toggles
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL

// Set leader key timeout to 0.8 secs
#define LEADER_TIMEOUT 800

// reset the leader key timeout after each key press
#define LEADER_PER_KEY_TIMING

// This is as much dynamic macro memory the controller will allow!
// Even one byte more results in:
// Compiling: tmk_core/protocol/lufa/usb_util.c                                                        [OK]
// Linking: .build/dz60_stratosgear.elf                                                                [ERRORS]
//  |
//  | /nix/store/xdyw5ah9p41yaqfvxg2r1h0kxyc3ldzb-avr-binutils-2.43.1/bin/avr-ld: address 0x800b01 of .build/dz60_stratosgear.elf section `.bss' is not within region `data'
//  | /nix/store/xdyw5ah9p41yaqfvxg2r1h0kxyc3ldzb-avr-binutils-2.43.1/bin/avr-ld: address 0x800b05 of .build/dz60_stratosgear.elf section `.noinit' is not within region `data'
//  | /nix/store/xdyw5ah9p41yaqfvxg2r1h0kxyc3ldzb-avr-binutils-2.43.1/bin/avr-ld: address 0x800b01 of .build/dz60_stratosgear.elf section `.bss' is not within region `data'
//  | /nix/store/xdyw5ah9p41yaqfvxg2r1h0kxyc3ldzb-avr-binutils-2.43.1/bin/avr-ld: address 0x800b05 of .build/dz60_stratosgear.elf section `.noinit' is not within region `data'
//  | collect2: error: ld returned 1 exit status
// Maybe it depends on the overall memory usage?
//#define DYNAMIC_MACRO_SIZE 265
