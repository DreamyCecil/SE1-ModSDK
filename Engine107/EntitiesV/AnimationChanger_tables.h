// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CAnimationChanger

CEntityProperty CAnimationChanger_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x000000da<<8)+1, offsetof(CAnimationChanger, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x000000da<<8)+2, offsetof(CAnimationChanger, m_strDescription), "", 0, "m_strDescription", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000da<<8)+3, offsetof(CAnimationChanger, m_penTarget), "Target", 'T', "m_penTarget", C_GREEN  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+4, offsetof(CAnimationChanger, m_iModelAnim), "Model Animation", 'M', "m_iModelAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+5, offsetof(CAnimationChanger, m_bModelLoop), "Model Looping", 0, "m_bModelLoop", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+6, offsetof(CAnimationChanger, m_iTextureAnim), "Texture Animation", 'X', "m_iTextureAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+7, offsetof(CAnimationChanger, m_bTextureLoop), "Texture Looping", 0, "m_bTextureLoop", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+8, offsetof(CAnimationChanger, m_iLightAnim), "Diffuse Light Animation", 'L', "m_iLightAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+9, offsetof(CAnimationChanger, m_bLightLoop), "Diffuse Light Looping", 0, "m_bLightLoop", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000da<<8)+10, offsetof(CAnimationChanger, m_iAmbientLightAnim), "Ambient Light Animation", 'B', "m_iAmbientLightAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000da<<8)+11, offsetof(CAnimationChanger, m_bAmbientLightLoop), "Ambient Light Looping", 0, "m_bAmbientLightLoop", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_COLOR, NULL, (0x000000da<<8)+12, offsetof(CAnimationChanger, m_colAmbient), "Ambient Light Color", 'A', "m_colAmbient", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_COLOR, NULL, (0x000000da<<8)+13, offsetof(CAnimationChanger, m_colDiffuse), "Diffuse Light Color", 'C', "m_colDiffuse", 0x7F0000FFUL, 0),
};
#define CAnimationChanger_propertiesct ARRAYCOUNT(CAnimationChanger_properties)

CEntityComponent CAnimationChanger_components[] = {
#define MODEL_CHANGER ((0x000000da<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_CHANGER, "EFNM" "Models\\Editor\\AnimationChanger.mdl"),
#define TEXTURE_CHANGER ((0x000000da<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CHANGER, "EFNM" "Models\\Editor\\AnimationChanger.tex"),
};
#define CAnimationChanger_componentsct ARRAYCOUNT(CAnimationChanger_components)

CEventHandlerEntry CAnimationChanger_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CAnimationChanger::Main),DEBUGSTRING("CAnimationChanger::Main")},
 {0x00da0001, -1, CEntity::pEventHandler(&CAnimationChanger::H0x00da0001_Main_01), DEBUGSTRING("CAnimationChanger::H0x00da0001_Main_01")},
 {0x00da0002, -1, CEntity::pEventHandler(&CAnimationChanger::H0x00da0002_Main_02), DEBUGSTRING("CAnimationChanger::H0x00da0002_Main_02")},
};
#define CAnimationChanger_handlersct ARRAYCOUNT(CAnimationChanger_handlers)

CEntity *CAnimationChanger_New(void) { return new CAnimationChanger; };
void CAnimationChanger_OnInitClass(void) {};
void CAnimationChanger_OnEndClass(void) {};
void CAnimationChanger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAnimationChanger_OnWorldEnd(CWorld *pwo) {};
void CAnimationChanger_OnWorldInit(CWorld *pwo) {};
void CAnimationChanger_OnWorldTick(CWorld *pwo) {};
void CAnimationChanger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAnimationChanger, CRationalEntity, "AnimationChanger", "Thumbnails\\AnimationChanger.tbn", 0x000000da);
DECLARE_CTFILENAME(_fnmCAnimationChanger_tbn, "Thumbnails\\AnimationChanger.tbn");
