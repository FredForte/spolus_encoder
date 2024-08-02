// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_F, LT(2,KC_MEDIA_PLAY_PAUSE), LT(1, KC_LEFT), LT(3,KC_RIGHT), KC_MEDIA_PLAY_PAUSE
    ),

    [1] = LAYOUT_ortho_4x4(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE
    ),

    [2] = LAYOUT_ortho_4x4(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE
    ),

    [3] = LAYOUT_ortho_4x4(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE
    ),
};

// #if defined(ENCODER_MAP_ENABLE) -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP) },
    [1] = { ENCODER_CCW_CW(KC_MEDIA_REWIND, KC_MEDIA_FAST_FORWARD) },
    [2] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [3] = { ENCODER_CCW_CW(KC_MS_WH_LEFT, KC_MS_WH_RIGHT) },


};

const uint16_t PROGMEM test_combo1[] = {KC_F, KC_MEDIA_PLAY_PAUSE, COMBO_END};
combo_t key_combos[] = {
    COMBO(test_combo1, QK_BOOT),
};
// #endif

// bool encoder_update_user(uint8_t index, bool clockwise) {
//   if (index == 0) {
//     if (clockwise) {
//       tap_code(KC_1);
//     } else {
//       tap_code(KC_2);
//     }
//   }
//   return false;


// KC_MEDIA_FAST_FORWARD
// KC_MEDIA_REWIND

// KC_MS_WH_UP
// KC_MS_WH_DOWN
// KC_MS_WH_LEFT
// KC_MS_WH_RIGHT