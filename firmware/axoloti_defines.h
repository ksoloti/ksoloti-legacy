/**
 * Copyright (C) 2013, 2014 Johannes Taelman
 *
 * This file is part of Axoloti.
 *
 * Axoloti is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * Axoloti is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * Axoloti. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __AXOLOTI_DEFINES_H
#define __AXOLOTI_DEFINES_H

#include <stdint.h>

#define PI_F 3.1415927f
#define SAMPLERATE 48000
#define BUFSIZE 16
#define BUFSIZE_POW 4
typedef int32_t int32buffer[BUFSIZE];

#define BOARD_AXOLOTI_V05 1
#define USING_ADAU1761 1 /* Works with ADAU1961/ADAU1361 too so we just leave this defined */
#define HAS_SD_CARD_DETECT 1

// firmware version 1.0.0.4 - Ksoloti v0.4
#define FWVERSION1 1
#define FWVERSION2 0
#define FWVERSION3 0
#define FWVERSION4 4

#define BOARD_OTG_NOVBUSSENS

#if (BOARD_AXOLOTI_V05)
#else
#error Must define board!
#endif

#endif
