#include "kaaboard8x15.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_LSCR, KC_PAUSE, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_RGHT,
		KC_NO, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_LEFT, KC_DOWN,
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,
		KC_NO, KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
		KC_HOME, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		OSL(8), KC_END, KC_CLCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LEFT, KC_UP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_PGUP,
		KC_NO, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RALT, KC_APP, KC_RCTL, KC_PGDN),       

	KEYMAP(
		MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, 
		MI_TRNSU, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, 
		MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, 
		MI_TRNSD, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, 
		MI_Fs_0, MI_Gs_0, MI_As_0, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, 
		OSL(8), MI_Cs_0, MI_Ds_0, MI_F_0, MI_G_0, MI_A_0, MI_B_0, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2,
		MI_Fs_N1, MI_Gs_N1, MI_As_N1, MI_C_0, MI_D_0, MI_E_0, MI_Fs_0, MI_Gs_0, MI_As_0, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, 
		KC_NO, MI_Cs_N1, MI_Ds_N1, MI_F_N1, MI_G_N1, MI_A_N1, MI_B_N1, MI_Cs_0, MI_Ds_0, MI_F_0, MI_G_0, MI_A_0, MI_B_0, MI_Cs_1, MI_Ds_1),

	KEYMAP(
		MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, 
		MI_TRNSU, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5, 
		MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, 
		MI_TRNSD, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, 
		MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, 
		OSL(8), MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3,
		MI_Fs_0, MI_Gs_0, MI_As_0, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, 
		KC_NO, MI_Cs_0, MI_Ds_0, MI_F_0, MI_G_0, MI_A_0, MI_B_0, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2),

	KEYMAP(
		MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, 
		MI_TRNSU, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6, 
		MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, 
		MI_TRNSD, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5, 
		MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, 
		OSL(8), MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4,
		MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, 
		KC_NO, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3),

	KEYMAP(
		MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, 
		MI_TRNSU, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_7, MI_Ds_7, 
		MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, 
		MI_TRNSD, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6, 
		MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, 
		OSL(8), MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5,
		MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, 
		KC_NO, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4),

	KEYMAP(
		MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, MI_C_8, MI_D_8, MI_E_8, MI_Fs_8, MI_Gs_8, MI_As_8, 
		MI_TRNSU, MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_7, MI_Ds_7, MI_F_7, MI_G_7, MI_A_7, MI_B_7, MI_Cs_8, MI_Ds_8, 
		MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, 
		MI_TRNSD, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_6, MI_Ds_6, 
		MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, 
		OSL(8), MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6,
		MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, 
		KC_NO, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5),

	KEYMAP(
		MI_Fs_7, MI_Gs_7, MI_As_7, MI_C_8, MI_D_8, MI_E_8, MI_Fs_8, MI_Gs_8, MI_As_8, MI_C_9, MI_D_9, MI_E_9, MI_Fs_9, KC_NO, KC_NO, 
		MI_TRNSU, MI_Cs_7, MI_Ds_7, MI_F_7, MI_G_7, MI_A_7, MI_B_7, MI_Cs_8, MI_Ds_8, MI_F_8, MI_G_8, MI_A_8, MI_B_8, MI_Cs_9, MI_Ds_9, 
		MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, MI_C_8, MI_D_8, MI_E_8, MI_Fs_8, MI_Gs_8, MI_As_8, 
		MI_TRNSD, MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_7, MI_Ds_7, MI_F_7, MI_G_7, MI_A_7, MI_B_7, MI_Cs_8, MI_Ds_8, 
		MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, 
		OSL(8), MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_7, MI_Ds_7,
		MI_Fs_4, MI_Gs_4, MI_As_4, MI_C_5, MI_D_5, MI_E_5, MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, 
		KC_NO, MI_Cs_4, MI_Ds_4, MI_F_4, MI_G_4, MI_A_4, MI_B_4, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6),

	KEYMAP(
		MI_Fs_8, MI_Gs_8, MI_As_8, MI_C_9, MI_D_9, MI_E_9, MI_Fs_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		MI_TRNSU, MI_Cs_8, MI_Ds_8, MI_F_8, MI_G_8, MI_A_8, MI_B_8, MI_Cs_9, MI_Ds_9, MI_F_9, MI_G_9, KC_NO, KC_NO, KC_NO, KC_NO, 
		MI_Fs_7, MI_Gs_7, MI_As_7, MI_C_8, MI_D_8, MI_E_8, MI_Fs_8, MI_Gs_8, MI_As_8, MI_C_9, MI_D_9, MI_E_9, MI_Fs_9, KC_NO, KC_NO, 
		MI_TRNSD, MI_Cs_7, MI_Ds_7, MI_F_7, MI_G_7, MI_A_7, MI_B_7, MI_Cs_8, MI_Ds_8, MI_F_8, MI_G_8, MI_A_8, MI_B_8, MI_Cs_9, MI_Ds_9, 
		MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, MI_C_8, MI_D_8, MI_E_8, MI_Fs_8, MI_Gs_8, MI_As_8, 
		OSL(8), MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_7, MI_Ds_7, MI_F_7, MI_G_7, MI_A_7, MI_B_7, MI_Cs_8, MI_Ds_8, 
		MI_Fs_5, MI_Gs_5, MI_As_5, MI_C_6, MI_D_6, MI_E_6, MI_Fs_6, MI_Gs_6, MI_As_6, MI_C_7, MI_D_7, MI_E_7, MI_Fs_7, MI_Gs_7, MI_As_7, 
		KC_NO, MI_Cs_5, MI_Ds_5, MI_F_5, MI_G_5, MI_A_5, MI_B_5, MI_Cs_6, MI_Ds_6, MI_F_6, MI_G_6, MI_A_6, MI_B_6, MI_Cs_7, MI_Ds_7),

	KEYMAP(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, TO(2), TO(3), TO(4), TO(5), TO(6), TO(7), KC_NO, KC_NO, KC_NO, TO(1), KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
