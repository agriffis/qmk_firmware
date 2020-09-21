#include QMK_KEYBOARD_H
#include "version.h"

#define LAYOUT LAYOUT_ergodox_pretty

enum custom_keycodes {
    VRSN = SAFE_RANGE,
    KC_P00,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
KC_EQL,   KC_1,        KC_2,     KC_3,      KC_4,     KC_5,     KC_WWW_BACK,  /**/      /**/      /**/      /**/      KC_WWW_FORWARD,  KC_6,     KC_7,     KC_8,     KC_9,      KC_0,           KC_MINS,
KC_TAB,   KC_Q,        KC_W,     KC_E,      KC_R,     KC_T,     TT(1),        /**/      /**/      /**/      /**/      TT(2),           KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,           KC_BSLS,
KC_LCTL,  KC_A,        KC_S,     KC_D,      KC_F,     KC_G,     /**/          /**/      /**/      /**/      /**/      /**/             KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,        KC_QUOT,
KC_LSFT,  LT(1,KC_Z),  KC_X,     KC_C,      KC_V,     KC_B,     KC_LGUI,      /**/      /**/      /**/      /**/      KC_RGUI,         KC_N,     KC_M,     KC_COMM,  KC_DOT,    LT(1,KC_SLSH),  KC_RSFT,
KC_CAPS,  KC_GRV,      KC_INS,   KC_LEFT,   KC_RGHT,  /**/      /**/          /**/      /**/      /**/      /**/      /**/             /**/      KC_DOWN,  KC_UP,    KC_LBRC,   KC_RBRC,        KC_EXEC,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          KC_LCTL,  KC_LALT,  KC_RALT,  KC_RCTL,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          /**/      KC_HOME,  KC_PGUP,
/**/      /**/         /**/      /**/       /**/      /**/      KC_BSPC,      KC_ESC,   KC_END,   KC_PGDN,  KC_ENT,   KC_SPC
),

[1] = LAYOUT(
KC_HOME,  KC_F1,       KC_F2,    KC_F3,     KC_F4,    KC_F5,    XXXXXXX,      /**/      /**/      /**/      /**/      XXXXXXX,         KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,         KC_END,
XXXXXXX,  XXXXXXX,     KC_UP,    XXXXXXX,   XXXXXXX,  KC_EXEC,  _______,      /**/      /**/      /**/      /**/      MO(3),           KC_APP,   KC_RGUI,  KC_SLCK,  KC_PAUS,   KC_PSCR,        KC_PGUP,
_______,  KC_LEFT,     KC_DOWN,  KC_RIGHT,  KC_F11,   KC_F12,   /**/          /**/      /**/      /**/      /**/      /**/             KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  XXXXXXX,        KC_PGDN,
_______,  XXXXXXX,     KC_WBAK,  KC_WFWD,   KC_INS,   XXXXXXX,  _______,      /**/      /**/      /**/      /**/      _______,         XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        _______,
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  /**/      /**/          /**/      /**/      /**/      /**/      /**/             /**/      XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          _______,  _______,  _______,  _______,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          /**/      _______,  _______,
/**/      /**/         /**/      /**/       /**/      /**/      KC_DEL,       _______,  _______,  _______,  _______,  _______
),

[2] = LAYOUT(
XXXXXXX,  KC_F11,      KC_F12,   KC_F13,    KC_F14,   KC_F15,   XXXXXXX,      /**/      /**/      /**/      /**/      XXXXXXX,         XXXXXXX,  XXXXXXX,  KC_PSLS,  KC_PAST,   KC_BSPC,        XXXXXXX,
KC_TAB,   KC_F16,      KC_F17,   KC_F18,    KC_F19,   KC_F20,   MO(3),        /**/      /**/      /**/      /**/      _______,         KC_TAB,   KC_P7,    KC_P8,    KC_P9,     KC_PMNS,        XXXXXXX,
_______,  KC_MRWD,     KC_MPRV,  KC_MPLY,   KC_MNXT,  KC_MFFD,  /**/          /**/      /**/      /**/      /**/      /**/             XXXXXXX,  KC_P4,    KC_P5,    KC_P6,     KC_PPLS,        XXXXXXX,
_______,  XXXXXXX,     KC_MUTE,  KC_VOLD,   KC_VOLU,  XXXXXXX,  _______,      /**/      /**/      /**/      /**/      _______,         XXXXXXX,  KC_P1,    KC_P2,    KC_P3,     KC_PENT,        _______,
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  /**/      /**/          /**/      /**/      /**/      /**/      /**/             /**/      KC_P0,    KC_P00,   KC_PDOT,   KC_PEQL,        XXXXXXX,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          _______,  _______,  _______,  _______,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          /**/      _______,  _______,
/**/      /**/         /**/      /**/       /**/      /**/      KC_DEL,       _______,  _______,  _______,  _______,  _______
),

[3] = LAYOUT(
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,      /**/      /**/      /**/      /**/      XXXXXXX,         XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,      /**/      /**/      /**/      /**/      XXXXXXX,         XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  /**/          /**/      /**/      /**/      /**/      /**/             XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,      /**/      /**/      /**/      /**/      XXXXXXX,         XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
RESET,    XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  /**/      /**/          /**/      /**/      /**/      /**/      /**/             /**/      XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
/**/      /**/         /**/      /**/       /**/      /**/      /**/          /**/      XXXXXXX,  XXXXXXX,
/**/      /**/         /**/      /**/       /**/      /**/      XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
            case KC_P00:
                SEND_STRING("00");
                return false;
        }
    }
    return true;
}

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    ergodox_right_led_on(get_highest_layer(state));
    return state;
}
