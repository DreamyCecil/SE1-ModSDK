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

#define ENTITYCLASS CPostProcessingEffectEntity

CEntityProperty CPostProcessingEffectEntity_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x70<<8)+1, 0xE8, "Global", 0, "m_bGlobal", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x70<<8)+2, 0xEC, "Range", 0, "m_fRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x70<<8)+3, 0xF0, "Shader (fragment)", 0, "m_fnmFrgShader", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x70<<8)+4, 0xF8, "Shader (vertex)", 0, "m_fnmVtxShader", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x70<<8)+5, 0x100, "uniform: param0", 0, "m_fParam0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x70<<8)+6, 0x104, "uniform: param1", 0, "m_fParam1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x70<<8)+7, 0x108, "uniform: param2", 0, "m_fParam2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x70<<8)+8, 0x10C, "uniform: param3", 0, "m_fParam3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x70<<8)+9, 0x110, "uniform: param4", 0, "m_fParam4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x70<<8)+10, 0x114, "", 0, "m_fTimeStarted", 0x0UL, 0),
};
#define CPostProcessingEffectEntity_propertiesct ARRAYCOUNT(CPostProcessingEffectEntity_properties)

CEntityComponent CPostProcessingEffectEntity_components[] = {
 CEntityComponent(),
};
#define CPostProcessingEffectEntity_componentsct ARRAYCOUNT(CPostProcessingEffectEntity_components)

CEventHandlerEntry CPostProcessingEffectEntity_handlers[] = {
 {0x700000, -1, CEntity::pEventHandler(&CPostProcessingEffectEntity::Dummy), DEBUGSTRING("CPostProcessingEffectEntity::Dummy")},
};
#define CPostProcessingEffectEntity_handlersct ARRAYCOUNT(CPostProcessingEffectEntity_handlers)

CEntity *CPostProcessingEffectEntity_New(void) { return new CPostProcessingEffectEntity; };
void CPostProcessingEffectEntity_OnInitClass(void) {};
void CPostProcessingEffectEntity_OnEndClass(void) {};
void CPostProcessingEffectEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPostProcessingEffectEntity_OnWorldEnd(CWorld *pwo) {};
void CPostProcessingEffectEntity_OnWorldInit(CWorld *pwo) {};
void CPostProcessingEffectEntity_OnWorldTick(CWorld *pwo) {};
void CPostProcessingEffectEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPostProcessingEffectEntity, CEntity, "PostProcessingEffectBase", "Thumbnails\\Marker.tbn", 0x70);
DECLARE_CTFILENAME(_fnmCPostProcessingEffectEntity_tbn, "Thumbnails\\Marker.tbn");
