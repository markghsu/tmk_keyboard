#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(ESC, 1,   2,   3,   4,   5,   PAUS,   END,   6, 7, 8,   9,   0, RSFT, \
	 TAB, Q,   W,   E,   R,   T,   SLCK,  PGUP, Y,  U,   I,   O,  P, BSLS, \
	 CAPS, A,   S,   D,   F,   G,  QUOT, PGDN, H,  J,   K,   L,  SCLN, GRV,\
	 LSFT, Z,   X,   C,   V,   B,  DEL,  FN0, MINS, N,  M,  COMM, DOT, SLSH,\
	 Z  ,LCTL,LALT, LBRC,RBRC,BSPC,LGUI, ENT, SPC, EQL, LEFT, UP, DOWN, RGHT),
  /* 1: Num/Nav */
  KEYMAP(TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,F9,F10,F11,  F12, APP,\
	 TRNS,TRNS,TRNS, UP, TRNS,TRNS,TRNS,TRNS,HOME,7,   8,   9, TRNS,TRNS, \
	 TRNS,TRNS,LEFT,DOWN,RGHT,CALC,TRNS,TRNS, END,4,   5,   6, TRNS,TRNS,\
	 TRNS,WHOM,MUTE,VOLD,VOLU,TRNS,TRNS,TRNS,INS, 1,   2,   3, TRNS,TRNS, \
	 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,0, TRNS,TRNS,TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
      [0] = ACTION_LAYER_TOGGLE(1),
      [1] = ACTION_LAYER_TOGGLE(1),
};