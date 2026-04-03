#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x12(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_QUOT, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RCTL, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(1), KC_GRV, KC_BSLS, KC_LALT, KC_SPC, KC_SPC, KC_BSPC, KC_BSPC, KC_RALT, KC_LBRC, KC_RBRC, MO(1)),
    [1] = LAYOUT_ortho_5x12(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_RCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_RSFT, KC_TRNS, KC_NO, KC_NO, KC_LALT, KC_TAB, KC_TAB, KC_ENT, KC_ENT, KC_RALT, KC_NO, KC_NO, KC_TRNS)
};

void keyboard_post_init_user(void) {
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_speed_noeeprom(64);
    rgb_matrix_mode_noeeprom(RGB_MATRIX_HUE_BREATHING);
    rgb_matrix_sethsv_noeeprom(HSV_RED);
    rgb_matrix_set_flags_noeeprom(2+4);
#endif // RGB_MATRIX_ENABLE
}
