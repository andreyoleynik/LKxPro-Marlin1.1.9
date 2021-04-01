/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

//
// R25 = 200 kOhm, beta25 = 4338 K, 4.7 kOhm pull-up, ATC Semitec 204GT-2
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
//
const short temptable_2[][2] PROGMEM = {
{ OV(23), 299},
{ OV(25), 294},
{ OV(27), 290},
{ OV(28), 288},
{ OV(31), 282},
{ OV(33), 278},
{ OV(35), 275},
{ OV(38), 270},
{ OV(41), 267},
{ OV(44), 264},
{ OV(48), 257},
{ OV(52), 254},
{ OV(56), 249},
{ OV(61), 244},
{ OV(66), 240},
{ OV(71), 235},
{ OV(78), 230},
{ OV(84 ),  226},
{ OV(92 ),  221},
{ OV(100  ),  216},
{ OV(109  ),  211},
{ OV(120  ),  206},
{ OV(131  ),  201},
{ OV(143  ),  196},
{ OV(156  ),  191},
{ OV(171  ),  186},
{ OV(187  ),  181},
{ OV(205  ),  176},
{ OV(224  ),  171},
{ OV(245  ),  166},
{ OV(380  ),  136},
{ OV(591  ),  106},
{ OV(801  ),  70},
{ OV( 830),  65 },
{ OV( 857),  60 },
{ OV( 881),  55 },
{ OV( 903),  50 },
{ OV( 922),  45 },
{ OV( 939),  40 },
{ OV( 954),  35 },
{ OV( 966),  27 },
{ OV( 970),  25 },
{ OV( 985),  20 },
{ OV( 993),  15 },
{ OV( 999),  10 },
{ OV(1004),   5 },
{ OV(1008),   0 },
{ OV(1012),  -5 },
{ OV(1016), -10 },
{ OV(1020), -15 }
};
