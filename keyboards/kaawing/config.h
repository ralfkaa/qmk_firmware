#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0002
#define MANUFACTURER    Ralf Korbmacher
#define PRODUCT         kaawing
#define DESCRIPTION     a symmetrical isomorphic keyboard

#define FORCE_NKRO

#define MATRIX_ROWS 6
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B7, D0, D1, D2, D3, C6, C7, D5, D7 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

#define PREVENT_STUCK_MODIFIERS

#define MIDI_BASIC
#define MIDI_ADVANCED

#endif