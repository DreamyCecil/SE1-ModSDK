/* Copyright (c) 2022 Dreamy Cecil
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

#ifndef CECIL_INCL_ECCEXTRAS_H
#define CECIL_INCL_ECCEXTRAS_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

// STL-styled comparator of CTString classes for sorting
struct CompareCTString
{
  bool operator()(const CTString &lhs, const CTString &rhs) const {
    return strcmp(lhs, rhs) < 0;
  };
};

// Declare extra features used by the custom entity class compiler
#include "EccExtras/DllEntityEvent.h"
#include "EccExtras/EntityTable.h"

#endif