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

// [Cecil] Include this file before including any C++ Standard Library headers after including Serious Engine

// Already included
#ifdef CECIL_INCLUDING_STL_HEADERS_H
  #error "STLIncludesBegin.h" is included more than once!
#endif

// Undefine 'new' operator in debug
#ifndef NDEBUG
  #undef new
#endif

// Mark as included
#define CECIL_INCLUDING_STL_HEADERS_H
