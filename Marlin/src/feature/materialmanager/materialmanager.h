/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

#include "../../inc/MarlinConfig.h"

/**
 * Material Profile
 * Name:
 * Type: [ABS,PLA,PETG,NYLAN,PC,TPE,TPU,HIPS,PVA,PTG]
 * Temperatur:
 *  Printing:
 *    Tool:
 *    Bed:
 *    Chamber
 *  Preheat:
 *    Tool:
 *    Bed:
 *    Chamber:
 *  Pause:
 *    Tool:
 *    Bed:
 *    Chamber:
 * Retraction:
 *  Raise:
 *  Length:
 *  Feedrate:
 *  Recovery:
 *    Length:
 *    Feedrate:
 * Feedrate:
 *  Max:
 *  Factor:
 * Extrution:
 *  Factor:
 */

class MaterialManager {
public:
  MaterialManager();
};

extern MaterialManager materialmanager;