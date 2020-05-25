#include "kaaboard6x13.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSPC, 
		KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, 
		KC_PSCR, KC_GRAVE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, 
		KC_NO, KC_CLCK, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT,
		OSL(2), KC_LCTL, KC_LGUI, KC_LALT, KC_LBRC, KC_BSLS, KC_SPC, KC_SPC, KC_EQL, KC_RBRC, KC_RALT, KC_SLSH, KC_RCTL),

	KEYMAP(
		KC_NO, MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds, MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, 
		MI_OCTU, MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, MI_As_N1, MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, 
		KC_NO, MI_F_N2, MI_G_N2, MI_A_N2, MI_B_N2, MI_Cs_N1, MI_Ds_N1, MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds,
		MI_OCTD, MI_C_N2, MI_D_N2, MI_E_N2, MI_Fs_N2, MI_Gs_N2, MI_As_N2, MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, MI_As_N1, 
		KC_NO, MI_F_N3, MI_G_N3, MI_A_N3, MI_B_N3, MI_Cs_N2, MI_Ds_N2, MI_F_N2, MI_G_N2, MI_A_N2, MI_B_N2, MI_Cs_N1, MI_Ds_N1,
		OSL(2), MI_C_N3, MI_D_N3, MI_E_N3, MI_Fs_N3, MI_Gs_N3, MI_As_N3, MI_C_N2, MI_D_N2, MI_E_N2, MI_Fs_N2, MI_Gs_N2, MI_As_N2),

	KEYMAP(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, TO(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
