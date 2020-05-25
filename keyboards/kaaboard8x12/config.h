#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0003
#define MANUFACTURER    Ralf Korbmacher
#define PRODUCT         kaaboard8x12
#define DESCRIPTION     a modular matrix keyboard

#define FORCE_NKRO

#define MATRIX_ROWS 8
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { F4, F5, F6, F7, B6, B5, B4, D7 }
#define MATRIX_COL_PINS { C7, C6, D3, D2, D1, D0, B7, E6, B3, B2, B1, B0 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

#define PREVENT_STUCK_MODIFIERS

#define MIDI_BASIC
#define MIDI_ADVANCED

#endif