/* Copyright 2015-2021 Jack Humbert
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
 * 
 * http://www.keyboard-layout-editor.com/##@@_a:7%3B&=Gesc&=Q&=W&=E&=R&=T&=Y&=U&=I&=O&=P&=Back%20Space&_x:0.25&f:5&d:true%3B&=Base%3B&@_f:3%3B&=Tab&=A&=S&=D&_n:true%3B&=F&=G&=H&_n:true%3B&=J&=K&=L&_a:5%3B&=%2F:%0A%2F%3B&_a:7%3B&=Return%3B&@_a:5%3B&=Shift%0A(&_a:7%3B&=Z&=X&=C&=V&=B&=N&=M&_a:5%3B&=%3C%0A,&=%3E%0A.&=%3F%0A%2F%2F&=Shift%0A)%3B&@=Ctrl%0A%5B&_a:7%3B&=Gui&=Alt&_a:5%3B&=%2F&larr%2F%3B%0ANAV&=%2F&darr%2F%3B%0A%2F&dArr%2F%3B&_a:7&w:2%3B&=&_a:5%3B&=%2F&uarr%2F%3B%0A%2F&uArr%2F%3B&=%2F&rarr%2F%3B%0ANAV&_a:7%3B&=Alt&=Gui&_a:5%3B&=Ctrl%0A%5D%3B&@_y:0.75%3B&=~%0A%0A%0A%0A%0A%0A%60&_a:7%3B&=1&=2&=3&=4&=5&=6&=7&=8&=9&=0&=&_x:0.25&f:5&d:true%3B&=Lower%3B&@_f:3%3B&=&=&=&=&_n:true%3B&=&=&=&_a:5&n:true%3B&=%2F_%0A-&=+%0A%2F=&=%22%0A'&=%7C%0A%5C&_a:7%3B&=%3B&@=&=&=&=&=&=&=&=%5B&=%5D&=%7B&=%7D&=%3B&@=&=&=&=&=&_w:2%3B&=&=&=&=&=&=%3B&@_y:1%3B&=~&=!&=%2F@&=%23&=$&=%25&=%5E&=%2F&&=*&=(&=)&=&_x:0.25&f:5&d:true%3B&=Raise%3B&@_f:3%3B&=F1&=F2&=F3&=F4&_n:true%3B&=F5&=F6&=&_n:true%3B&=%2F_&=+&=%22&=%7C&=%3B&@=F7&=F8&=F9&=F10&=F11&=F12&=&=&=&=&=&=%3B&@=&=&=&=&=&_w:2%3B&=&=&=&=&=&=%3B&@_y:1%3B&=&=&=&=&=&=&=&=&=&=&=&=&_x:0.25&f:5&d:true%3B&=Nav%3B&@_f:3%3B&=&=Home&=Pg%20Up&=Pg%20Dn&_n:true%3B&=End&=&=&_n:true%3B&=Ctrl%20%2F&larr%2F%3B&=Ctrl%20%2F&darr%2F%3B&=Ctrl%20%2F&uarr%2F%3B&=Ctrl%20%2F&rarr%2F%3B&=%3B&@=&=&=&=&=&=&=&=&=Vol%20Down&=Vol%20Up&=Mute&=%3B&@=&=&=&=&=&_w:2%3B&=&=&=&=&=&=
 */

#include QMK_KEYBOARD_H
#include "muse.h"


enum planck_layers {
  _WINDOWS,
  _MAC,
  _LOWER,
  _RAISE,
  _NAV,
  _ADJUST,
  _BLANK
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  MAC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_WINDOWS] = LAYOUT_planck_grid(
    KC_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   KC_ENT,
    KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSPC,
    LCTL_T(KC_LBRC), KC_LGUI, KC_LALT, LT(_NAV, KC_LEFT),  LT(_LOWER, KC_DOWN),   KC_SPC,  KC_SPC,  LT(_RAISE, KC_UP), LT(_NAV, KC_RGHT), KC_RALT, KC_RGUI, RCTL_T(KC_RBRC)
),

[_MAC] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LALT, KC_LGUI, _______, _______, _______, _______, _______, _______, KC_RGUI, KC_RALT, _______
),

[_LOWER] = LAYOUT_planck_grid(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_QUOT, KC_BSLS, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_planck_grid(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______, KC_UNDS, KC_PLUS, KC_DQUO, KC_PIPE, _______,
    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_NAV] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_UP), LCTL(KC_RIGHT), _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT_planck_grid(
    _______, QK_BOOT, DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, _______, AU_TOG,  AU_ON,   AU_OFF,  _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    QWERTY,  MAC,     _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
),

[_BLANK] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST); // lower + raise = adjust layer
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_WINDOWS);
      }
      return false;
    case MAC:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MAC);
      }
      return false;
  }
  return true;
}

enum combos { LSFTRSFT_CAPSLOCK, COMBO_LENGTH };
uint16_t COMBO_LEN = COMBO_LENGTH;

/*
Tapping both left and right shift toggles CAPS_WORD
Even though QMK provides `#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD`
Tapping both shifts causes a 0 or 9 to be outputted as well
Using combos prevents that
*/
const uint16_t PROGMEM lsftrsft_capslock_combo[] = {KC_LSPO, KC_RSPC, COMBO_END}; 
combo_t key_combos[] = { 
  [LSFTRSFT_CAPSLOCK] = COMBO(lsftrsft_capslock_combo, CAPS_WORD), 
};