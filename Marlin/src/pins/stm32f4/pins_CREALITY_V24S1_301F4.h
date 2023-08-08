/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD:Marlin/src/HAL/SAMD21/ServoTimers.h
 * SAMD21 HAL developed by Bart Meijer (brupje)
 * Based on SAMD51 HAL by Giuliano Zaro (AKA GMagician)
 */

#define _useTimer1
#define _useTimer2

#define TRIM_DURATION           5   // compensation ticks to trim adjust for digitalWrite delays
#define SERVO_TIMER_PRESCALER   64  // timer prescaler factor to 64 (avoid overflowing 16-bit clock counter, at 120MHz this is 1831 ticks per millisecond

#define SERVO_TC                3

typedef enum {
  #ifdef _useTimer1
    _timer1,
  #endif
  #ifdef _useTimer2
    _timer2,
  #endif
  _Nbr_16timers
} timer16_Sequence_t;
=======
>>>>>>> master
 * Creality V24S1_301F4 (STM32F401RC) board pin assignments as found on Ender-3 S1.
 */

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "Creality V24S1-301F4"
#endif
#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME "Ender-3 S1 F4"
#endif

#define DISABLE_DEBUG false // DISABLE_(DEBUG|JTAG) is not supported for STM32F4.
#define ALLOW_STM32F4

#include "../stm32f1/pins_CREALITY_V24S1_301.h"
<<<<<<< HEAD
=======
>>>>>>> master:Marlin/src/pins/stm32f4/pins_CREALITY_V24S1_301F4.h
>>>>>>> master
