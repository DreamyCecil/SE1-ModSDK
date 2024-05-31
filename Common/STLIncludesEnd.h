/* Copyright (c) 2023-2024 Dreamy Cecil
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

// [Cecil] NOTE: If you need to include any C++ Standard Library headers after you've already included Serious Engine (Engine/Engine.h) headers
// at some point in your source file, you need to surround STL headers with "STLIncludesBegin.h" and "STLIncludesEnd.h" to avoid compilation errors.

// Not yet included
#ifndef CECIL_INCLUDING_STL_HEADERS_H
  #error Missing "STLIncludesBegin.h" include before "STLIncludesEnd.h"!
#endif

// Redefine 'new' operator in debug
#ifndef NDEBUG
  #define new DEBUG_NEW_CT
#endif

// Unmark as included
#undef CECIL_INCLUDING_STL_HEADERS_H
