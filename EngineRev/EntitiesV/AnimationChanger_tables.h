// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAnimationChanger

CEntityProperty CAnimationChanger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xda<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xda<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xda<<8)+3, 0x118, "Target", 'T', "m_penTarget", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xda<<8)+4, 0x11C, "Model Animation", 'M', "m_iModelAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xda<<8)+5, 0x120, "Model Looping", 0, "m_bModelLoop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xda<<8)+6, 0x124, "Texture Animation", 'X', "m_iTextureAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xda<<8)+7, 0x128, "Texture Looping", 0, "m_bTextureLoop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xda<<8)+8, 0x12C, "Diffuse Light Animation", 'L', "m_iLightAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xda<<8)+9, 0x130, "Diffuse Light Looping", 0, "m_bLightLoop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xda<<8)+10, 0x134, "Ambient Light Animation", 'B', "m_iAmbientLightAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xda<<8)+11, 0x138, "Ambient Light Looping", 0, "m_bAmbientLightLoop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xda<<8)+12, 0x13C, "Ambient Light Color", 'A', "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xda<<8)+13, 0x140, "Diffuse Light Color", 'C', "m_colDiffuse", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CAnimationChanger, CRationalEntity, "AnimationChanger", "Thumbnails\\AnimationChanger.tbn", 218);
DECLARE_CTFILENAME(_fnmCAnimationChanger_tbn, "Thumbnails\\AnimationChanger.tbn");
