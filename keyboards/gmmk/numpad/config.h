/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
 * Modified 2022 by rustedaperture for qmk_firmware
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

#define SLIDER_PIN B0
#define MIDI_ADVANCED

#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4

#define AW20216S_CS_PIN_1 B12
#define AW20216S_EN_PIN A15
#define AW20216S_PW_EN_PIN B13

#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN B61
// Min 0, max 32
#define JOYSTICK_BUTTON_COUNT 0
// Min 0, max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXIS_COUNT 1
// Min 8, max 16
#define JOYSTICK_AXIS_RESOLUTION 8
