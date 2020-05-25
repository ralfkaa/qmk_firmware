#include "kaaboard8x12.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_LEFT, KC_UP, KC_PGUP, KC_WBAK, KC_WFWD, KC_WREF, KC_BRID, KC_BRIU, KC_MUTE, KC_VOLD, KC_VOLU, KC_ESC,
		KC_DOWN, KC_RGHT, KC_PGDN, KC_MPLY, KC_MFFD, KC_MRWD, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS, KC_DEL, KC_BSPC,
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,  KC_EQL, KC_MINS, 
		KC_GRAVE, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
		KC_QUOT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
		KC_LSFT, KC_SLSH, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT,
		KC_LCTL, KC_LGUI, KC_LALT, KC_LBRC, KC_HOME, KC_TAB, KC_SPC, KC_END, KC_RBRC, KC_RALT, KC_RCTL, OSL(4)),

	KEYMAP(
		MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, 
		MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, 
		MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, 
		MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, 
		MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, 
		MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, 
		MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds, MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, 
		MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, MI_As_N1, MI_C, MI_D, MI_E, MI_Fs, MI_Gs, OSL(4)), 

	KEYMAP(
		MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, 
		MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, 
		MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, 
		MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, 
		MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds, MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, 
		MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, MI_As_N1, MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, 
		MI_F_N2, MI_G_N2, MI_A_N2, MI_B_N2, MI_Cs_N1, MI_Ds_N1, MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds,
		MI_C_N2, MI_D_N2, MI_E_N2, MI_Fs_N2, MI_Gs_N2, MI_As_N2, MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, OSL(4)), 

	KEYMAP(
		MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, 
		MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, 
		MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds, MI_F, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, 
		MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, MI_As_N1, MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, 
		MI_F_N2, MI_G_N2, MI_A_N2, MI_B_N2, MI_Cs_N1, MI_Ds_N1, MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs, MI_Ds,
		MI_C_N2, MI_D_N2, MI_E_N2, MI_Fs_N2, MI_Gs_N2, MI_As_N2, MI_C_N1, MI_D_N1, MI_E_N1, MI_Fs_N1, MI_Gs_N1, MI_As_N1, 
		MI_F_N3, MI_G_N3, MI_A_N3, MI_B_N3, MI_Cs_N2, MI_Ds_N2, MI_F_N2, MI_G_N2, MI_A_N2, MI_B_N2, MI_Cs_N1, MI_Ds_N1,
		MI_C_N3, MI_D_N3, MI_E_N3, MI_Fs_N3, MI_Gs_N3, MI_As_N3, MI_C_N2, MI_D_N2, MI_E_N2, MI_Fs_N2, MI_Gs_N2, OSL(4)),

	KEYMAP(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		TO(1), KC_NO, TO(2), KC_NO, TO(3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
