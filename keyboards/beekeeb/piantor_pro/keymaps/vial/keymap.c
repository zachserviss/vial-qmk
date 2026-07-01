/* SPDX-License-Identifier: GPL-2.0-or-later */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_NO, KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,    KC_J, KC_L,         KC_U,         KC_Y,         KC_QUOT,       KC_NO,
		KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,    KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O),  KC_NO,
		KC_NO, LT(7, KC_Z),  KC_X,         KC_C,         KC_D,         KC_V,    KC_K, KC_H,         KC_COMM,      KC_DOT,       LT(7, KC_SLSH),KC_NO,
		                                   LT(1, KC_ESC),LT(2, KC_SPC),LT(3, KC_TAB),LT(4, KC_ENT),LT(6, KC_DEL),LT(5, KC_BSPC)
	)
};
