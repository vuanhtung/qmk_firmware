/* Copyright 2021 Steven Karrmann
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
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2
};

#define MO_FN1 MO(_FN1)
#define MO_FN2 MO(_FN2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_UP  , KC_LEFT, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_BSPC, MO_FN1 , KC_SPC , KC_DOWN, KC_RGHT, KC_SPC , MO_FN2 , KC_BSPC, KC_RALT, KC_RCTL, KC_DEL
    ),
    [_FN1] = LAYOUT(
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
        KC_CAPS, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_EQL ,                   KC_INS , KC_HOME, KC_PGUP, _______, _______, _______,
        _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______, _______, KC_DEL , KC_END , KC_PGDN, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_ENT , _______, _______, KC_ENT , _______, _______, _______, _______, _______
    ),
    [_FN2] = LAYOUT(
        S(KC_GRV),S(KC_1),S(KC_2), S(KC_3), S(KC_4), S(KC_5),                   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0),S(KC_MINS),
        KC_CAPS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , _______, _______, _______, _______, _______,
        _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , _______, _______, KC_F12 , _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_ENT , _______, _______, KC_ENT , _______, _______, _______, _______, _______
    )
};