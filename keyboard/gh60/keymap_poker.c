#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(ESC, 1,   2,   3,   4,   5,   PSCR,   F8,   6, 7, 8,   9,   0, APP, \
	 TAB, Q,   W,   E,   R,   T,   PAUS,  PGUP, Y,  U,   I,   O,  P, BSLS, \
	 CAPS, A,   S,   D,   F,   G,  GRV, PGDN, H,  J,   K,   L,  SCLN, QUOT,\
	 LSFT, Z,   X,   C,   V,   B,  FN0,  DEL, MINS, N,  M,  COMM, DOT, SLSH,\
	 LCTL,LGUI,LALT, LBRC,RBRC,BSPC,RSFT, ENT, SPC, EQL, LEFT, DOWN, UP, RGHT),
  /* 1: Num/Nav */
  KEYMAP(TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,F9,F10,F11,  F12, TRNS,\
	 TRNS,TRNS,TRNS, UP, TRNS,TRNS,TRNS,TRNS,HOME,7,   8,   9, TRNS,TRNS, \
	 TRNS,TRNS,LEFT,DOWN,RGHT,CALC,TRNS,TRNS, END,4,   5,   6, TRNS,TRNS,\
	 TRNS,WHOM,MUTE,VOLU,VOLD,SLCK,TRNS,TRNS,INS, 1,   2,   3, TRNS,TRNS, \
	 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,0, TRNS,TRNS,TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
      [0] = ACTION_LAYER_TOGGLE(1),
      [1] = ACTION_LAYER_TOGGLE(1),
};