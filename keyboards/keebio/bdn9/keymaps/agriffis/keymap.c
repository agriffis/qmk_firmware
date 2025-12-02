#include QMK_KEYBOARD_H

enum encoder_names {
    _LEFT,
    _RIGHT,
};

enum my_keycodes {
    KC_MICM = KC_F20,  // mute mic (gnome)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MUTE,     KC_PAUSE,  KC_MICM,
        S(KC_PSCR),  KC_PSCR,   A(KC_PSCR),
        KC_WBAK,     KC_MPLY,   KC_WFWD
    ),
};

void encoder_update_user(uint8_t index, bool counter_clockwise) {
    if (index == _LEFT) {
        tap_code(counter_clockwise ? KC_VOLD : KC_VOLU);
    }
    else if (index == _RIGHT) {
        /* YouTube speed control */
        tap_code16(counter_clockwise ? S(KC_COMMA) : S(KC_DOT));
    }
}
