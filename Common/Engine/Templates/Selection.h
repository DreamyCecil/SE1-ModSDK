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

#ifndef SE_INCL_SELECTION_H
#define SE_INCL_SELECTION_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Templates/DynamicContainer.h>

// A selection of some objects that support selecting
template <class cType, unsigned long ulFlag>
class CSelection : public CDynamicContainer<cType> {
  public:
    // Destructor
    ~CSelection(void) {
      Clear();
    };

    // Select one object
    void Select(cType &tToSelect);

    // Deselect one object
    void Deselect(cType &tToDeselect);

    // Check if an object is selected
    BOOL IsSelected(cType &tToSelect);

    // Deselect all objects
    void Clear(void);

    // Get first in selection (NULL if empty selection)
    cType *GetFirstInSelection(void);
};

// Macro for implementing selecting features in a class
#define IMPLEMENT_SELECTING(m_ulFlags)                 \
  inline void Select(unsigned long ulFlag) {           \
    m_ulFlags |= ulFlag;                               \
  }                                                    \
  inline void Deselect(unsigned long ulFlag) {         \
    m_ulFlags &= ~ulFlag;                              \
  }                                                    \
  inline BOOL IsSelected(unsigned long ulFlag) const { \
    return m_ulFlags & ulFlag;                         \
  }

// [Cecil] Inline definition
#include <Engine/Templates/Selection.cpp>

#endif // include-once check
