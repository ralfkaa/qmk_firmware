#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0002
#define MANUFACTURER    Ralf Korbmacher
#define PRODUCT         kaaboard
#define DESCRIPTION     a trapezoidal uniform matrix keyboard

#define FORCE_NKRO

#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B0, B7, D3, D4, B5, F5 }
#define MATRIX_COL_PINS { B1, B2, B3, D0, D1, D2, C6, C7, D7, B4, B6, F7, F6, F4, F1, F0 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

#define PREVENT_STUCK_MODIFIERS

#define MIDI_BASIC
#define MIDI_ADVANCED

#endif