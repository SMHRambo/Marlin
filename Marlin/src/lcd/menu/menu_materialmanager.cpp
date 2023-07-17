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

#include "../../inc/MarlinConfig.h"

#if BOTH(HAS_MARLINUI_MENU, MATERIALMANAGER)

#include "../../MarlinCore.h"
#include "../../feature/materialmanager/materialmanager.h"
#include "menu_materialmanager.h"
#include "menu_item.h"
#include <ArduinoJson.h>

void menu_materialmanager() {
  START_MENU();

  BACK_ITEM(MSG_MAIN);
  END_MENU();
}

void menu_materialmanager_materiallist() {
  ui.encoder_direction_menus();

  card.cd("/materialmanager");

  #if HAS_MARLINUI_U8GLIB
    static uint16_t fileCnt;
    if (ui.first_page) fileCnt = card.get_num_Files();
  #else
    const uint16_t fileCnt = card.get_num_Files();
  #endif

  START_MENU();
  if (ui.should_draw()) for (uint16_t i = 0; i < fileCnt; i++) {
    if (_menuLineNr == _thisItemNr) {
      card.getfilename_sorted(SD_ORDER(i, fileCnt));
      if (!card.flag.filenameIsDir) {
        if (file.isOpened) {
          FileStream jsonStream(file);
        }
      }
    }
    else
      SKIP_ITEM();
  }
  END_MENU();
}

#endif  // HAS_MARLINUI_MENU && MATERIALMANAGER