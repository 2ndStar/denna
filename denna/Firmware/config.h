#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* Custom matrix pins and port select array */
#define MATRIX_ROW_PINS \
    { B15, A8, B0, A7, B1 }
#define MATRIX_COL_CHANNELS \
    { 0, 3, 1, 2, 5, 7, 6, 4 }
#define MUX_SEL_PINS \
    { B6, B5, B4 }

/* Hardware peripherals pins */
#define APLEX_EN_PIN_0 B7
#define APLEX_EN_PIN_1 B3
#define DISCHARGE_PIN A6
#define ANALOG_PORT A3

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define DEBUG_MATRIX_SCAN_RATE
