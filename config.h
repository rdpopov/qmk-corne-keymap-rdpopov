/* This is the c configuration file for the keymap
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN 12
#define I2C1_SCL_PIN 13


#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS
#define SPLIT_TRANSPORT_MIRROR
#define AZOTEQ_IQS5XX_TPS43
/* #define POINTING_DEVICE_ROTATION_90 */
#define TAPPING_TOGGLE 2
/* #define TAPPING_TERM 175 */
#define SPLIT_WPM_ENABLE
/* #define QUICK_TAP_TERM 1 */

#define POINTING_DEVICE_MODES_ENABLE
#define AZOTEQ_IQS5XX_TAP_ENABLE true
#define AZOTEQ_IQS5XX_TWO_FINGER_TAP_ENABLE true
#define AZOTEQ_IQS5XX_SCROLL_ENABLE true
#define AZOTEQ_IQS5XX_ROTATION_90

// Mouse kinetic -> https://github.com/qmk/qmk_firmware/blob/master/docs/feature_mouse_keys.md
#define MK_KINETIC_SPEED
