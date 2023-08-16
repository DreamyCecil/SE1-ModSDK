// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEntityStateDisplay

CEntityProperty CEntityStateDisplay_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe9<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe9<<8)+2, 0x114, "Target", 'T', "m_penTarget", 0x7F00FFUL, 0),
};
#define CEntityStateDisplay_propertiesct ARRAYCOUNT(CEntityStateDisplay_properties)

CEntityComponent CEntityStateDisplay_components[] = {
#define MODEL_MARKER ((0x000000e9<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "ModelsMP\\Editor\\Debug_EntityStack.mdl"),
#define TEXTURE_MARKER ((0x000000e9<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "ModelsMP\\Editor\\Debug_EntityStack.tex"),
};
#define CEntityStateDisplay_componentsct ARRAYCOUNT(CEntityStateDisplay_components)

CEventHandlerEntry CEntityStateDisplay_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEntityStateDisplay::Main),DEBUGSTRING("CEntityStateDisplay::Main")},
 {0x00e90000, -1, CEntity::pEventHandler(&CEntityStateDisplay::H0x00e90000_Main_01), DEBUGSTRING("CEntityStateDisplay::H0x00e90000_Main_01")},
 {0x00e90001, -1, CEntity::pEventHandler(&CEntityStateDisplay::H0x00e90001_Main_02), DEBUGSTRING("CEntityStateDisplay::H0x00e90001_Main_02")},
 {0x00e90002, -1, CEntity::pEventHandler(&CEntityStateDisplay::H0x00e90002_Main_03), DEBUGSTRING("CEntityStateDisplay::H0x00e90002_Main_03")},
 {0x00e90003, -1, CEntity::pEventHandler(&CEntityStateDisplay::H0x00e90003_Main_04), DEBUGSTRING("CEntityStateDisplay::H0x00e90003_Main_04")},
};
#define CEntityStateDisplay_handlersct ARRAYCOUNT(CEntityStateDisplay_handlers)

CEntity *CEntityStateDisplay_New(void) { return new CEntityStateDisplay; };
void CEntityStateDisplay_OnInitClass(void) {};
void CEntityStateDisplay_OnEndClass(void) {};
void CEntityStateDisplay_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEntityStateDisplay_OnWorldEnd(CWorld *pwo) {};
void CEntityStateDisplay_OnWorldInit(CWorld *pwo) {};
void CEntityStateDisplay_OnWorldTick(CWorld *pwo) {};
void CEntityStateDisplay_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEntityStateDisplay, CRationalEntity, "EntityStateDisplay", "Thumbnails\\EntityStateDisplay.tbn", 233);
DECLARE_CTFILENAME(_fnmCEntityStateDisplay_tbn, "Thumbnails\\EntityStateDisplay.tbn");
