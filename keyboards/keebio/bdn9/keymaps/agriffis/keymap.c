#include QMK_KEYBOARD_H

enum encoder_names {
  _LEFT,
  _RIGHT,
};

enum my_keycodes {
    KC_MICM = KC_F20,  // mute mic
    KC_NXTD = KC_F21,  // next sound device
    KC_MICD = KC_F23,  // mic sensitivity down
    KC_MICU = KC_F24,  // mic sensitivity up
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NXTD,  KC_PAUSE,  S(KC_NXTD),
        KC_MUTE,  KC_ESC,   KC_MICM,
        KC_LEFT,  KC_SPC,   KC_RGHT
    ),
};

void encoder_update_user(uint8_t index, bool counter_clockwise) {
    if (index == _LEFT) {
        tap_code(counter_clockwise ? KC_VOLD : KC_VOLU);
    }
    else if (index == _RIGHT) {
        tap_code(counter_clockwise ? KC_MICD : KC_MICU);
    }
}
