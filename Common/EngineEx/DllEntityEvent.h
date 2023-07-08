/* Copyright (c) 2022-2023 Dreamy Cecil
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

#ifndef CECIL_INCL_ENGINEEX_DLLENTITYEVENT_H
#define CECIL_INCL_ENGINEEX_DLLENTITYEVENT_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <EngineEx/Base.h>

#if SE1_VER < SE1_150

#include <Engine/Entities/EntityEvent.h>

// Reimplementation of DLL entity event class from 1.50
class CDLLEntityEvent {
  public:
    SLONG dee_slEvent; // Event code
    CEntityEvent *(*dee_New)(void); // Pointer to the event class constructor

    // [Cecil] NOTE: Event class size to compensate for the lack of CEntityEvent::GetSizeOf virtual method
    SLONG dee_slSizeOf;
};

#endif

#endif
