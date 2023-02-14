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

#include <Engine/Engine.h>
#include "Game.h"
#include "SEColors.h"

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#if SE1_GAME == SS_TSE
  #include <EntitiesTSE/Global.h>
  #include <EntitiesTSE/Common/Common.h>
  #include <EntitiesTSE/Common/GameInterface.h>
  #include <EntitiesTSE/Players/Player.h>
#else
  #include <EntitiesTFE/Global.h>
  #include <EntitiesTFE/Common/Common.h>
  #include <EntitiesTFE/Common/GameInterface.h>
  #include <EntitiesTFE/Players/Player.h>
#endif

#undef DECL_DLL