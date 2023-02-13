/* Copyright (c) 2002-2012 Croteam Ltd. 
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#ifndef __SECOLORS_H
#define __SECOLORS_H 1

/* [Cecil] Reference table
 * SE_COL_ORANGE_LIGHT    - used by: SeriousSam through CGame::LCDGetColor(<several>), Entities (text in HUD.cpp)
 * SE_COL_ORANGE_NEUTRAL  - used by: SeriousSam through CGame::LCDGetColor(<several>), Entities (snooping in HUD.cpp)
 * SE_COL_ORANGE_DARK     - used by: SeriousSam through CGame::LCDGetColor("disabled unselected"), Entities (snooping in HUD.cpp)
 * SE_COL_ORANGE_DARK_LT  - used by: SeriousSam through CGame::LCDGetColor("disabled selected")
 * SE_COL_BLUE_DARK_HV    - used by: Game
 * SE_COL_BLUE_DARK       - used by: Game
 * SE_COL_BLUE_DARK_LT    - used by: SeriousSam through CGame::LCDGetColor("edit fill"); alpha is set to 64 (TFE) and 75 (TSE)
 * SE_COL_BLUE_NEUTRAL    - used by: Game
 * SE_COL_BLUE_NEUTRAL_LT - used by: Entities (Analyzing and connected text in Player.es)
 * SE_COL_BLUE_LIGHT      - used by: Game
 * SE_COL_BLUEGREEN_LT    - used by: Game
 */

// [Cecil] Specify default green colors for TFE here
#if SE1_GAME == SS_TFE

#define SE_COL_ORANGE_LIGHT     C_GREEN
#define SE_COL_ORANGE_NEUTRAL   C_GREEN
#define SE_COL_ORANGE_DARK      C_dGREEN
#define SE_COL_ORANGE_DARK_LT   C_GRAY
#define SE_COL_BLUE_DARK_HV     C_vdGREEN
#define SE_COL_BLUE_DARK        C_dGREEN
#define SE_COL_BLUE_DARK_LT     C_dGREEN | 64
#define SE_COL_BLUE_NEUTRAL     C_GREEN
#define SE_COL_BLUE_NEUTRAL_LT  C_GREEN
#define SE_COL_BLUE_LIGHT       C_GREEN
#define SE_COL_BLUEGREEN_LT     C_GREEN

#else

#define SE_COL_ORANGE_LIGHT     0xffd70000
#define SE_COL_ORANGE_NEUTRAL   0xee9c0000
#define SE_COL_ORANGE_DARK      0x9b4b0000
#define SE_COL_ORANGE_DARK_LT   0xbc6a0000
#define SE_COL_BLUE_DARK_HV     0x151c2300
#define SE_COL_BLUE_DARK        0x2a384600
#define SE_COL_BLUE_DARK_LT     0x43596f00 | 75
#define SE_COL_BLUE_NEUTRAL     0x5c7a9900
#define SE_COL_BLUE_NEUTRAL_LT  0x6097cc00
#define SE_COL_BLUE_LIGHT       0x64b4ff00
#define SE_COL_BLUEGREEN_LT     0x6cff6c00

#endif

#endif
