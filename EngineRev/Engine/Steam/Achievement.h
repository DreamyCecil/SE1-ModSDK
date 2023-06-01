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

#ifndef SE1_REV_INCL_ACHIEVEMENT_H
#define SE1_REV_INCL_ACHIEVEMENT_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

class ENGINE_API CAchievement {
  public:
    CTString strID; // Achievement identifier
    CTString strName; // Achievement display name
    CTString strDescription;

    BOOL bUnlocked;
    INDEX iProgress;

    ULONG ulField; // Unknown field

    CTextureObject toIcon;

  public:
    CAchievement();
    CAchievement(const CAchievement &achOther);
    ~CAchievement();

    CAchievement &operator=(const CAchievement &achOther);

    void Set(INDEX iSetProgress, INDEX iMaxProgress);
    void Unlock(void);
};

#endif
