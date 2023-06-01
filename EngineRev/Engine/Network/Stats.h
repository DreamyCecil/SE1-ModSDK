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

#ifndef SE1_REV_INCL_STATS_H
#define SE1_REV_INCL_STATS_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Network/PlayerPaths.h>
#include <Engine/Steam/Steam.h>

class ENGINE_API CSessionStats {
  public:
    CStaticStackArray<CPlayerPath> stat_aPaths;
    CTFileName stat_fnmField1; // Unknown field
    CTString stat_strField2; // Unknown field

  public:
    CSessionStats();
    CSessionStats(const CSessionStats &);
    ~CSessionStats();
    CSessionStats &operator=(const CSessionStats &);

    void Clear(void);

    // Check if there are any paths written in stats
    BOOL CouldSave(void);

    // Find path for a player
    CPlayerPath *FindPath(CPlayerEntity *pen);

    // Make new path for a player
    CPlayerPath *MakePath(CPlayerEntity *pen);

    // Serialize the stats
    void Save_t(const CTFileName &fnmSave);
    void Load_t(const CTFileName &fnmLoad);
};

class ENGINE_API CGatherStats : public CSessionStats {
  public:
    // Unknown fields
    ULONG gs_ulField1;
    U64 gs_llField2;
    DOUBLE gs_fField3;

  public:
    CGatherStats();
    CGatherStats(const CGatherStats &);
    ~CGatherStats();
    CGatherStats &operator=(const CGatherStats &);

    void Clear(void);
    void Flush(void);
    void Update(void);
};

class ENGINE_API CWorldStats {
  public:
    CListNode ws_lnStats; // Node in wld_lhStats
    CTFileName ws_fnmFile; // Stats file

    ULONG ws_ulFields1[8]; // Unknown data
    CSteamID ws_SteamID; // Account with the stats

    ULONG ws_ulFields2[3]; // Unknown data
    ULONG ws_ulHash; // Unique hash of the stats

  public:
    CWorldStats();
    CWorldStats(const CWorldStats &);
    ~CWorldStats();
    CWorldStats &operator=(const CWorldStats &);

    CTFileName GetFilename(void);
    CTFileName GetFilename(const CTFileName &);

    // Get hash of the stats
    ULONG GetHash(void);

    // Destroy world stats if they don't belong to this Steam account
    void SelfDestruct(void);

    void Save(void);
    void Load(const CTFileName &fnmLoad);
};

// Stats gatherer
ENGINE_API extern CGatherStats *_pGatherStats;

// Get stats for some world
ENGINE_API CWorldStats *wldGetLoadedStatsForFile(BOOL, const CTFileName &fnmWorld);

// Reload all world stats
ENGINE_API void wldReloadWorldStats(void);

// Currently loaded world stats
ENGINE_API extern CListHead wld_lhStats;

#endif
