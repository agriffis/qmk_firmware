#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
KC_EQL,   KC_1,        KC_2,     KC_3,      KC_4,     KC_5,     /**/      /**/      KC_6,     KC_7,     KC_8,     KC_9,      KC_0,           KC_MINS,
KC_TAB,   KC_Q,        KC_W,     KC_E,      KC_R,     KC_T,     /**/      /**/      KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,           KC_BSLS,
KC_LCTL,  KC_A,        KC_S,     KC_D,      KC_F,     KC_G,     /**/      /**/      KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,        KC_QUOT,
KC_LSFT,  LT(1,KC_Z),  KC_X,     KC_C,      KC_V,     KC_B,     KC_LGUI,  KC_LALT,  KC_N,     KC_M,     KC_COMM,  KC_DOT,    LT(1,KC_SLSH),  KC_RSFT,
/**/      /**/         /**/      /**/       KC_LBRC,  KC_BSPC,  KC_ESC,   KC_ENT,   KC_SPC,   KC_RBRC   /**/      /**/       /**/            /**/
),

[1] = LAYOUT(
KC_HOME,  KC_F1,       KC_F2,    KC_F3,     KC_F4,    KC_F5,    /**/      /**/      KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,         KC_END,
RGB_MOD,  XXXXXXX,     KC_UP,    XXXXXXX,   RGB_TOG,  KC_EXEC,  /**/      /**/      KC_APP,   KC_RGUI,  KC_SLCK,  KC_PAUS,   KC_PSCR,        KC_PGUP,
_______,  KC_LEFT,     KC_DOWN,  KC_RIGHT,  KC_F11,   KC_F12,   /**/      /**/      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  XXXXXXX,        KC_PGDN,
_______,  KC_GRV,      KC_WBAK,  KC_WFWD,   KC_INS,   XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   TT(2),          _______,
/**/      /**/         /**/      /**/       XXXXXXX,  KC_DEL,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   /**/      /**/       /**/            /**/
),

[2] = LAYOUT(
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  /**/      /**/      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        RESET,
XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  /**/      /**/      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
XXXXXXX,  KC_MRWD,     KC_MPRV,  KC_MPLY,   KC_MNXT,  KC_MFFD,  /**/      /**/      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,        XXXXXXX,
XXXXXXX,  TG(2),       KC_MUTE,  KC_VOLD,   KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   TG(2),          XXXXXXX,
/**/      /**/         /**/      /**/       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   /**/      /**/       /**/            /**/
)};
