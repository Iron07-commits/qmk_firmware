/* Copyright 2022 Studio Kestra
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

#include "quantum.h"

#define ___ KC_NO

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐   ┌───────┐
 * │00 │10 │01 │11 │02 │12 │03 │13 │04 │14 │05 │15 │06 │16 │07 │17 │   │07     │ 2u Backspace
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤   └───────┘
 * │20   │30 │21 │31 │22 │32 │23 │33 │24 │34 │25 │35 │26 │27   │37 │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │40    │50 │41 │51 │42 │52 │43 │53 │44 │54 │45 │55 │47      │57 │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │60      │61 │71 │62 │72 │63 │73 │64 │74 │65 │75 │66    │67 │77 │
 * ├─────┬──┴┬──┴──┬┴───┴───┴──┬┴──┬┴───┴───┴──┬┴───┴┬─┬───┼───┼───┤
 * │80   │90 │81   │82         │83 │84         │85   │ │86 │87 │97 │
 * └─────┴───┴─────┴───────────┴───┴───────────┴─────┘ └───┴───┴───┘
 * ┌─────┬───┬─────┬───────────────────────────┬─────┐
 * │80   │90 │81   │83                         │85   │ Tsangan
 * └─────┴───┴─────┴───────────────────────────┴─────┘
 * ┌────┬────┬────┬────────────────────────┬────┬────┐
 * │80  │90  │81  │83                      │84  │85  │ Standard
 * └────┴────┴────┴────────────────────────┴────┴────┘
 */

#define LAYOUT_all(\
    K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07, K17, \
    K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K27, K37, \
    K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55,      K47, K57, \
    K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K67, K77, \
    K80, K90, K81,           K82, K83, K84,           K85,      K86, K87, K97  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, ___, K37 }, \
    { K40, K41, K42, K43, K44, K45, ___, K47 }, \
    { K50, K51, K52, K53, K54, K55, ___, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { ___, K71, K72, K73, K74, K75, ___, K77 }, \
    { K80, K81, K82, K83, K84, K85, K86, K87 }, \
    { K90, ___, ___, ___, ___, ___, ___, K97 } \
}

#define LAYOUT_65_ansi_blocker(\
    K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K07, K17, \
    K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K27, K37, \
    K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55,      K47, K57, \
    K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K67, K77, \
    K80, K90, K81,                K83,           K84, K85,      K86, K87, K97  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, ___, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, ___, K37 }, \
    { K40, K41, K42, K43, K44, K45, ___, K47 }, \
    { K50, K51, K52, K53, K54, K55, ___, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { ___, K71, K72, K73, K74, K75, ___, K77 }, \
    { K80, K81, ___, K83, K84, K85, K86, K87 }, \
    { K90, ___, ___, ___, ___, ___, ___, K97 } \
}

#define LAYOUT_65_ansi_blocker_split_bs(\
    K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07, K17, \
    K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K27, K37, \
    K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55,      K47, K57, \
    K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K67, K77, \
    K80, K90, K81,                K83,           K84, K85,      K86, K87, K97  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, ___, K37 }, \
    { K40, K41, K42, K43, K44, K45, ___, K47 }, \
    { K50, K51, K52, K53, K54, K55, ___, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { ___, K71, K72, K73, K74, K75, ___, K77 }, \
    { K80, K81, ___, K83, K84, K85, K86, K87 }, \
    { K90, ___, ___, ___, ___, ___, ___, K97 } \
}

#define LAYOUT_65_ansi_blocker_tsangan(\
    K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K07, K17, \
    K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K27, K37, \
    K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55,      K47, K57, \
    K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K67, K77, \
    K80, K90, K81,                K83,                K85,      K86, K87, K97  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, ___, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, ___, K37 }, \
    { K40, K41, K42, K43, K44, K45, ___, K47 }, \
    { K50, K51, K52, K53, K54, K55, ___, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { ___, K71, K72, K73, K74, K75, ___, K77 }, \
    { K80, K81, ___, K83, ___, K85, K86, K87 }, \
    { K90, ___, ___, ___, ___, ___, ___, K97 } \
}

#define LAYOUT_65_ansi_blocker_tsangan_split_bs(\
    K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07, K17, \
    K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K27, K37, \
    K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55,      K47, K57, \
    K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K67, K77, \
    K80, K90, K81,                K83,                K85,      K86, K87, K97  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, ___, K37 }, \
    { K40, K41, K42, K43, K44, K45, ___, K47 }, \
    { K50, K51, K52, K53, K54, K55, ___, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { ___, K71, K72, K73, K74, K75, ___, K77 }, \
    { K80, K81, ___, K83, ___, K85, K86, K87 }, \
    { K90, ___, ___, ___, ___, ___, ___, K97 } \
}