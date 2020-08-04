#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _ADJUST 1

enum custom_keycodes {
	QWERTY = SAFE_RANGE,
	ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] =  LAYOUT_all(
		KC_ESC,           KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,            KC_PSCR, KC_SLCK, KC_PAUS, \
		KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,  KC_INS,KC_HOME, KC_PGUP,   \
		KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC, KC_RBRC, KC_BSLS,           KC_DEL, KC_END, KC_PGDN,   \
		KC_CAPS,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, KC_NUHS, KC_ENT,         KC_NO,  KC_NO, KC_NO,      \
		KC_LSFT,KC_NUBS,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT,        KC_NO,  KC_UP, KC_NO,      \
		KC_LCTL,KC_LGUI,KC_LALT,                                  KC_SPC,                 KC_RALT,KC_RGUI, ADJUST ,KC_RCTL,         KC_LEFT,KC_DOWN,KC_RGHT
		),

  /* Qwerty
 * ,---------------------------------------------------------------------------------------------------------------------------.
 * | Esc  |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |  F12 |   PSCR |  SLCK  |  PAU  |
 * ,---------------------------------------------------------------------------------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | BSPC |  INS   |  HOME  | PGUP  |
 * ,---------------------------------------------------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | [    |   ]  |   \  |   Del  |   End  | PGDW  |
 * |------+------+------+------+------+-------------+------+------+------+------+---------------------------------------------.
 * | Cap  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   | ENT  |      |        |        |       |
 * |------+------+------+------+------+------|------+------+------+------+------+---------------------------------------------.
 * | LShi | Nubs |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | RSft | RSft |        |   Up   |       |
 * |------+------+------+------+------+------+------+------+------+------+------+---------------------------------------------.
 * | LCtr | GUI  |  Alt |      |      |      |      | Space|      |      | Ralt | RGui |Adjust| RCTL |  Left  |  Down  | Right |
 * `--------------------------------------------------------------------------------------------------------------------------.
 */

	[_ADJUST] =  LAYOUT_all(
		RGB_TOG,          KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,            KC_PSCR, KC_SLCK, KC_PAUS, \
		KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,  RGB_HUI,RGB_SAI, RGB_VAI,   \
		RGB_MOD,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC, KC_RBRC, KC_BSLS,           RGB_HUD, RGB_SAD, RGB_VAD,   \
		KC_CAPS,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, KC_NUHS, KC_ENT,         KC_NO,  KC_NO, KC_NO,      \
		KC_LSFT,KC_NUBS,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT,        KC_NO,  KC_UP, KC_NO,      \
		KC_LCTL,KC_LGUI,KC_LALT,                                  KC_SPC,                 KC_RALT,KC_RGUI, QWERTY , KC_RCTL,         KC_LEFT,KC_DOWN,KC_RGHT
		)

 /* Adjust
 * ,---------------------------------------------------------------------------------------------------------------------------.
 * |ON-OFF|      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |  F12 |   PSCR |  SLCK  |  PAU  |
 * ,---------------------------------------------------------------------------------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | BSPC | Hue_Up | Sat_Up |Val_Up |
 * ,---------------------------------------------------------------------------------------------------------------------------.
 * |RGBMOD|   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | [    |   ]  |   \  | Hue_Dw | Sat_Dw |Val_Dw |
 * |------+------+------+------+------+-------------+------+------+------+------+---------------------------------------------.
 * | Cap  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   | ENT  |      |        |        |       |
 * |------+------+------+------+------+------|------+------+------+------+------+---------------------------------------------.
 * | LShi | Nubs |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | RSft | RSft |        |   Up   |       |
 * |------+------+------+------+------+------+------+------+------+------+------+---------------------------------------------.
 * | LCtr | GUI  |  Alt |      |      |      |      | Space|      |      | Ralt | RGui |Adjust| RCTL |  Left  |  Down  | Right |
 * `--------------------------------------------------------------------------------------------------------------------------.
 */

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case QWERTY:
		if (record->event.pressed) {
			set_single_persistent_default_layer(_QWERTY);
		}
		return false;
		break;
		case ADJUST:
		if (record->event.pressed) {
			layer_on(_ADJUST);
		} else {
			layer_off(_ADJUST);
		}
		return false;
		break;
	}
	return true;
};

