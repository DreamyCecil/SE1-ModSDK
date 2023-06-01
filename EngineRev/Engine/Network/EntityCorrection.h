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

#ifndef SE1_REV_INCL_ENTITYCORRECTION_H
#define SE1_REV_INCL_ENTITYCORRECTION_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

class ENGINE_API CEntityCorrectionInfoProperty {
  public:
    class CEntityProperty *pepProperty;
    BOOL bInternal; // Non-property variable, e.g. "en_plPlacement"
    CTString strProperty;

  public:
    CEntityCorrectionInfoProperty();
    CEntityCorrectionInfoProperty(const CEntityCorrectionInfoProperty &ecipOther);
    ~CEntityCorrectionInfoProperty();

    CEntityCorrectionInfoProperty &operator=(const CEntityCorrectionInfoProperty &ecipOther);
};

class ENGINE_API CEntityCorrectionInfo {
  public:
    // Set client's CSteam::bModifiedEntities to TRUE if 'this->bMarkAsModified || scr_bEntitiesModified || _lbTampered'
    BOOL bMarkAsModified;

    ULONG ulEntityID; // Entity ID
    CEntityCorrectionInfoProperty aPropertyInfos[50]; // 50 properties

    INDEX ctProperties; // How many properties are set to be corrected

  public:
    CEntityCorrectionInfo();
    CEntityCorrectionInfo(const CEntityCorrectionInfo &eciOther);
    ~CEntityCorrectionInfo();

    CEntityCorrectionInfo &operator=(const CEntityCorrectionInfo &eciOther);

    void Clear(void);

    void AddProperty(class CEntity *penEntity, const char *strProperty);
    void AddProperty(class CEntityProperty *pepProperty);
    void AddPropertyException(class CEntity *penEntity, const char *strProperty);

    CNetworkMessage CreateMessage(void);
};

#endif
