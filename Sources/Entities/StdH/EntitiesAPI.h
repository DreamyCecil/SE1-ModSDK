/* Copyright (c) 2024 Dreamy Cecil
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

// [Cecil] This header is an alternative to EntitiesAPI.h from the regular EntitiesTFE project
// that should be used for importing this legacy Entities library to the Game library of this SDK

#include <Game/SessionProperties.h>

// [Cecil] Link appropriate library
#ifdef NDEBUG
  #pragma comment(lib, "Entities.lib")
#else
  #pragma comment(lib, "EntitiesD.lib")
#endif

#define DECL_DLL __declspec(dllimport)

#include "../Global.h"
#include "../Common/Flags.h"
#include "../Common/Common.h"
#include "../Common/Particles.h"
#include "../Common/GameInterface.h"
