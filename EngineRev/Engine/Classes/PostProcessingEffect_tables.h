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

#define ENTITYCLASS CPostProcessingEffect

CEntityProperty CPostProcessingEffect_properties[] = {
 CEntityProperty(),
};
#define CPostProcessingEffect_propertiesct ARRAYCOUNT(CPostProcessingEffect_properties)

CEntityComponent CPostProcessingEffect_components[] = {
#define CPostProcessingEffect_MODEL_1 0x7101 // (0x71<<8)+1
 CEntityComponent(ECT_MODEL, CPostProcessingEffect_MODEL_1, "EFNM" "Models\\Editor\\Teapot.mdl"),
#define CPostProcessingEffect_TEXTURE_2 0x7102 // (0x71<<8)+2
 CEntityComponent(ECT_TEXTURE, CPostProcessingEffect_TEXTURE_2, "EFNM" "Models\\Editor\\Teapot.tex"),
};
#define CPostProcessingEffect_componentsct ARRAYCOUNT(CPostProcessingEffect_components)

CEventHandlerEntry CPostProcessingEffect_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPostProcessingEffect::Main), DEBUGSTRING("CPostProcessingEffect::Main")},
};
#define CPostProcessingEffect_handlersct ARRAYCOUNT(CPostProcessingEffect_handlers)

CEntity *CPostProcessingEffect_New(void) { return new CPostProcessingEffect; };
void CPostProcessingEffect_OnInitClass(void) {};
void CPostProcessingEffect_OnEndClass(void) {};
void CPostProcessingEffect_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPostProcessingEffect_OnWorldEnd(CWorld *pwo) {};
void CPostProcessingEffect_OnWorldInit(CWorld *pwo) {};
void CPostProcessingEffect_OnWorldTick(CWorld *pwo) {};
void CPostProcessingEffect_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPostProcessingEffect, CPostProcessingEffectEntity, "PostProcessingEffect", "Thumbnails\\Marker.tbn", 0x71);
DECLARE_CTFILENAME(_fnmCPostProcessingEffect_tbn, "Thumbnails\\Marker.tbn");
