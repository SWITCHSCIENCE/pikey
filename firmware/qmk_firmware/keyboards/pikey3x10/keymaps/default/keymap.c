#include QMK_KEYBOARD_H

#include "keymap.h"

#define _______ KC_TRNS
#define RS_N LT(1, KC_N)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* LAYER 0 _QWERTY
   * |-------------------------------------------------------------------------------|
   * |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |
   * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   * |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |  Ent  |
   * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   * |   Z   |   X   |   C   |   V   |   B   |  N/1  |   M   |  Ctl  |  Spc  |  Sft  |
   * |-------------------------------------------------------------------------------|
   */
  [0] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    RS_N,    KC_M, KC_RCTL,    KC_SPC,  KC_RSFT
  ),
  /* LAYER 1
   * |-------------------------------------------------------------------------------|
   * |  1/!  |  2/@  |  3/#  |  4/$  |  5/%  |  6/^  |  7/&  |  8|*  |  9/(  |  0/)  |
   * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   * |  -/_  |  =/+  |  [/{  |  }/]  |  \/|  |  ;/:  |  '/"  |  ,/<  |  ./>  |  /|?  |
   * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   * |  `/~  |  <-   |  Up   | Down  |   ->  |       |  Tab  |  Esc  |  Bs   |  Sft  |
   * |-------------------------------------------------------------------------------|
   */
  [1] = LAYOUT_ortho_3x10(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT,  KC_SLSH,
    KC_GRV,  KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, _______, KC_TAB,  KC_ESC,  KC_BSPC, KC_RSFT 
  ),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {
}
