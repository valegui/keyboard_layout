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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
OSM(MOD_LALT),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, OSM(MOD_RALT),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
OSM(MOD_LSFT),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TO(3),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         OSM(MOD_LCTL), KC_BSPC, LT(1,KC_TAB),   LT(2,KC_ENT), KC_SPC,  OSM(MOD_RSFT)
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_DEL , KC_TILD,  KC_GRV, KC_LBRC, KC_LCBR,                     KC_RCBR, KC_RBRC, KC_COLN, KC_SCLN, KC_QUES, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,  KC_TRNS, TO(1),    KC_TRNS, KC_TRNS, KC_TRNS 
                                      //`--------------------------'  `--------------------------'
    ),


  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_DEL , XXXXXXX, KC_UNDS, KC_PLUS, KC_PGUP,                     XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_HOME, KC_END , KC_MINS, KC_EQL , KC_PGDN,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_APP ,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_LT  , KC_GT  , KC_COPY, KC_PSTE, KC_SCLN,                     KC_BSLS, KC_PIPE, XXXXXXX, KC_SCLN, XXXXXXX,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_TRNS, XXXXXXX,    TO(2)  , KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_F1  , KC_F2  , KC_F3   , KC_F4 ,  KC_F5 ,                     KC_F6   , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_F11 , KC_F12 , XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,                     XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX, QK_RBT  ,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, TG(3)   , XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ) 
};
