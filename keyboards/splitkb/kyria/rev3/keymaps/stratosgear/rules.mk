SRC += features/achordion.c
SRC += features/select_word.c

# Convert from Elite-C to standard RP2040
# CONVERT_TO=promicro_rp2040
CONVERT_TO=rp2040_ce

OLED_ENABLE = yes
# OLED_DRIVER = ssd1306      # Enables the use of OLED displays

ENCODER_ENABLE = yes       # Enables the use of one or more encoders

# Enabling backlight fails, with a request to set BACKLIGHT_PIN, that I do not know
# I believe Kyria does NOT have a single backlight but an array of colored leds
# BACKLIGHT_ENABLE = yes

RGB_MATRIX_ENABLE = yes

# Seems to be working without a driver
# RGB_MATRIX_DRIVER = ws2812

# Enabling this compiles, but fails to perform correctly with "snow" on the  OLED display
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow

TAP_DANCE_ENABLE = yes

MOUSEKEY_ENABLE = yes

# Allows the creation of encoder keymap arrays.
# ENCODER_MAP_ENABLE = yes

CONSOLE_ENABLE = yes


LEADER_ENABLE = yes

DYNAMIC_MACRO_ENABLE = yes

DYNAMIC_TAPPING_TERM_ENABLE = yes
