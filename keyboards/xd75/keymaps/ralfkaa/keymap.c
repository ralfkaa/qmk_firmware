/* Copyright 2017 Wunder
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
#include "xd75.h"
#include QMK_KEYBOARD_H

// Layer shorthand
#define _QW 0
#define _WH 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QW] = { /* QWERTY */
  { TO(1), KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL },
  { KC_HOME, KC_END, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC },
  { KC_INS, KC_PGDN, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT },
  { KC_MUTE, KC_UP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_RSFT },
  { KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, KC_SPC, KC_SPC, KC_DEL, KC_APP, KC_RGUI, KC_RALT, KC_RCTL, RESET },
 },
 
 [_WH] = { /* WICKI HAYDEN MUSIC LAYOUT */
  { TO(0), MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3, MI_Fs_3, MI_Gs_3, MI_As_3, MI_C_4, MI_D_4, MI_E_4, MI_Fs_4 },
  { MI_TRNSU, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2, MI_B_2, MI_Cs_3, MI_Ds_3, MI_F_3, MI_G_3, MI_A_3, MI_B_3 },
  { MI_TRNSD, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2, MI_E_2, MI_Fs_2, MI_Gs_2, MI_As_2, MI_C_3, MI_D_3, MI_E_3 },
  { MI_OCTU, MI_G, MI_A, MI_B, MI_Cs_1, MI_Ds_1, MI_F_1, MI_G_1, MI_A_1, MI_B_1, MI_Cs_2, MI_Ds_2, MI_F_2, MI_G_2, MI_A_2 },
  { MI_OCTD, MI_C, MI_D, MI_E, MI_Fs, MI_Gs, MI_As, MI_C_1, MI_D_1, MI_E_1, MI_Fs_1, MI_Gs_1, MI_As_1, MI_C_2, MI_D_2 },
 }
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
}
