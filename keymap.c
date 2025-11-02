/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define VOL_UP KC_KB_VOLUME_UP
#define VOL_DOWN KC_KB_VOLUME_DOWN
#define VOL_MUTE KC_KB_MUTE
#define PR_SCR KC_PRINT_SCREEN

enum crkbd_layers {
    _QWERTY,
    _MACOS_QWERTY,
    _SCROLL,
    _MOUSE,
    _ADJUST,
};

enum custom_keycodes {
    KC_QWERTY,
    KC_SCROLL,
    KC_MOUSE,
    KC_ADJUST,
    KC_BSPC_DEL,
    KC_LAYER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
OSM(MOD_LGUI),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
OSM(MOD_LSFT),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                     MO(_SCROLL),  OSM(MOD_RALT),  KC_SPC,  KC_SPC, OSM(MOD_LCTL),   MO(_MOUSE)
                                      //`--------------------------'  `--------------------------'
                                      //
  ),
    [_MACOS_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
OSM(MOD_RALT),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
OSM(MOD_LSFT),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                     MO(_SCROLL),  OSM(MOD_LGUI),  KC_SPC,  KC_SPC, OSM(MOD_LCTL),   MO(_MOUSE)
                                      //`--------------------------'  `--------------------------'
                                      //
  ),
    [_SCROLL] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI,     KC_4,   KC_5,    KC_6, KC_MINS, KC_EQL ,                      KC_MINS,  KC_LBRC, KC_RBRC,KC_EQL,XXXXXXX, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,     KC_7,   KC_8,    KC_9,    KC_0, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                     _______,_______,  KC_SPC,          KC_SPC, _______, MO(_ADJUST)
                                      //`--------------------------'  `--------------------------'
  ),

    [_MOUSE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_WH_U, KC_BTN2,  KC_UP,  KC_DOT, KC_SLSH,  KC_BSPC,
  //|--------+-----+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|com
      KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_WH_D,  KC_LEFT, KC_DOWN ,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+-----+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_HOME, KC_PGUP, KC_PGDN,  KC_END,XXXXXXX, KC_TAB,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                     KC_CAPS,_______,  KC_BTN1,     KC_BTN2, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
    [_ADJUST] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, KC_F1  , KC_F2  , KC_F3  ,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F10,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, VOL_UP, VOL_DOWN,VOL_MUTE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PR_SCR ,                      KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,  KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           _______,OSM(MOD_LCTL),  KC_SPC,     KC_ENT, OSM(MOD_RALT), _______
                                      //`--------------------------'  `--------------------------'
  ),

};

bool process_detected_host_os_kb(os_variant_t detected_os) {
    if (!process_detected_host_os_user(detected_os)) {
        return false;
    }
    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            set_single_default_layer(_MACOS_QWERTY);
            break;
        case OS_WINDOWS:
        case OS_UNSURE:
        case OS_LINUX:
            set_single_default_layer(_QWERTY);
            break;
    }

    return true;
}
bool should_process_keypress(void) { return true; }
