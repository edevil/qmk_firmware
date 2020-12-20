/* Copyright 2020
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

#pragma once

#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ º │ ´ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ç │ ~ │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define PTM_SECT KC_GRV  // (section)
#define PTM_1    KC_1    // 1
#define PTM_2    KC_2    // 2
#define PTM_3    KC_3    // 3
#define PTM_4    KC_4    // 4
#define PTM_5    KC_5    // 5
#define PTM_6    KC_6    // 6
#define PTM_7    KC_7    // 7
#define PTM_8    KC_8    // 8
#define PTM_9    KC_9    // 9
#define PTM_0    KC_0    // 0
#define PTM_QUOT KC_MINS // '
#define PTM_PLUS KC_EQL  // +
// Row 2
#define PTM_Q    KC_Q    // Q
#define PTM_W    KC_W    // W
#define PTM_E    KC_E    // E
#define PTM_R    KC_R    // R
#define PTM_T    KC_T    // T
#define PTM_Y    KC_Y    // Y
#define PTM_U    KC_U    // U
#define PTM_I    KC_I    // I
#define PTM_O    KC_O    // O
#define PTM_P    KC_P    // P
#define PTM_MORD KC_LBRC // º
#define PTM_ACUT KC_RBRC // ´ (dead)
// Row 3
#define PTM_A    KC_A    // A
#define PTM_S    KC_S    // S
#define PTM_D    KC_D    // D
#define PTM_F    KC_F    // F
#define PTM_G    KC_G    // G
#define PTM_H    KC_H    // H
#define PTM_J    KC_J    // J
#define PTM_K    KC_K    // K
#define PTM_L    KC_L    // L
#define PTM_CCED KC_SCLN // Ç
#define PTM_TILD KC_QUOT // ~ (dead)
#define PTM_BSLS KC_NUHS  // (backslash)
// Row 4
#define PTM_LABK KC_NUBS // <
#define PTM_Z    KC_Z    // Z
#define PTM_X    KC_X    // X
#define PTM_C    KC_C    // C
#define PTM_V    KC_V    // V
#define PTM_B    KC_B    // B
#define PTM_N    KC_N    // N
#define PTM_M    KC_M    // M
#define PTM_COMM KC_COMM // ,
#define PTM_DOT  KC_DOT  // .
#define PTM_MINS KC_SLSH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ± │ ! │ " │ # │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ * │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ª │ ` │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ^ │ ^ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define PTM_PLMN S(PTM_BSLS) // ±
#define PTM_EXLM S(PTM_1)    // !
#define PTM_DQUO S(PTM_2)    // "
#define PTM_HASH S(PTM_3)    // #
#define PTM_DLR  S(PTM_4)    // $
#define PTM_PERC S(PTM_5)    // %
#define PTM_AMPR S(PTM_6)    // &
#define PTM_SLSH S(PTM_7)    // /
#define PTM_LPRN S(PTM_8)    // (
#define PTM_RPRN S(PTM_9)    // )
#define PTM_EQL  S(PTM_0)    // =
#define PTM_QUES S(PTM_QUOT) // ?
#define PTM_ASTR S(PTM_PLUS) // *
// Row 2
#define PTM_FORD S(PTM_MORD) // ª
#define PTM_GRV  S(PTM_ACUT) // ` (dead)
// Row 3
#define PTM_CIRC S(PTM_TILD) // ^ (dead)
#define PTM_PIPE S(PTM_BSLS) // |
// Row 4
#define PTM_RABK S(PTM_LABK) // >
#define PTM_SCLN S(PTM_COMM) // ;
#define PTM_COLN S(PTM_DOT)  // :
#define PTM_UNDS S(PTM_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ € │ £ │   │   │   │ [ │ ] │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define PTM_AT   ALGR(PTM_2)    // @
#define PTM_EURO ALGR(PTM_3)    // €
#define PTM_PND  ALGR(PTM_4)    // £
#define PTM_LBRC ALGR(PTM_8)    // [
#define PTM_RBRC ALGR(PTM_9)    // ]

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │ { │ } │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define PTM_LCBR S(ALGR(PTM_8)) // {
#define PTM_RCBR S(ALGR(PTM_9)) // }
