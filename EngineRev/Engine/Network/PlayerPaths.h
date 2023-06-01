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

#ifndef SE1_REV_INCL_PLAYERPATHS_H
#define SE1_REV_INCL_PLAYERPATHS_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

// Pre-declare
class CPlayerEntity;

class ENGINE_API CPlayerPathNode {
  public:
    TIME pn_tmCreationTime;
    TIME pn_tmCreationTick;
    ULONG pn_ulFields[12]; // Unknown data

  public:
    CPlayerPathNode();
    ~CPlayerPathNode();
    CPlayerPathNode &operator=(const CPlayerPathNode &);

    // Fill path node with player data
    void FillData(CPlayerEntity *pen);
};

class ENGINE_API CPlayerPath {
  public:
    CPlayerEntity *plp_penPlayer;
    ULONG plp_ulPlayerHash;
    CStaticStackArray<CPlayerPathNode> plp_aPathNodes;
    ULONG plp_ulField; // Unknown field

  public:
    CPlayerPath();
    ~CPlayerPath();
    CPlayerPath &operator=(const CPlayerPath &);

    // Add new node
    CPlayerPathNode *AddNode(void);

    // Create player hash out of player properties
    ULONG CreatePlayerHash(void);

    // Serialize the player path
    void Read_t(CTStream &strm);
    void Write_t(CTStream &strm);
};

#endif
