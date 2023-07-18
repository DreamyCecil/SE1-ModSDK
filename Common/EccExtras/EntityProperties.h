/* Copyright (c) 2023 Dreamy Cecil
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

#ifndef CECIL_INCL_ECCEXTRAS_ENTITYPROPERTIES_H
#define CECIL_INCL_ECCEXTRAS_ENTITYPROPERTIES_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#if SE1_GAME != SS_REV
  // Property type for TIME
  #define ENGINE_SPECIFIC_EPT_TIME CEntityProperty::EPT_FLOAT

  // Property definition
  #define ENGINE_SPECIFIC_PROP_DEF(_Type, _EnumPtr, _ID, _Offset, _Name, _Shortcut, _Variable, _Color, _Flags) \
    CEntityProperty(_Type, _EnumPtr, _ID, _Offset, _Name, _Shortcut, _Color, _Flags)

#else
  // Property type for TIME
  #define ENGINE_SPECIFIC_EPT_TIME CEntityProperty::EPT_DOUBLE

  // Property definition
  #define ENGINE_SPECIFIC_PROP_DEF(_Type, _EnumPtr, _ID, _Offset, _Name, _Shortcut, _Variable, _Color, _Flags) \
    CEntityProperty(_Type, _EnumPtr, _ID, _Offset, _Name, _Shortcut, _Variable, _Color, _Flags)

#endif

#endif
