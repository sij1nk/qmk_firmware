/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 5

#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE

#define ONESHOT_TIMEOUT 1000

#define NO_ALT_REPEAT_KEY

#define MK_COMBINED
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_TIME_TO_MAX 64
#define MK_C_OFFSET_2 12
#define MK_C_INTERVAL_2 16

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    ifndef RGBLIGHT_LIMIT_VAL
#    	define RGBLIGHT_LIMIT_VAL 150
#    endif
#endif

// Lets you roll mod-tap keys
// #define IGNORE_MOD_TAP_INTERRUPT
