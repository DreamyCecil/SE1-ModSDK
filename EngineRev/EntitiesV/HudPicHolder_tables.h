// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CHudPicHolder

CEntityProperty CHudPicHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf1<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf1<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf1<<8)+3, 0x118, "Picture file", 'P', "m_fnmPicture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+4, 0x120, "", 0, "m_tmFadeInStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+5, 0x124, "", 0, "m_tmFadeOutStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+6, 0x128, "Fade in time", 'I', "m_tmFadeInLen", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+7, 0x12C, "Fade out time", 'O', "m_tmFadeOutLen", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+8, 0x130, "Auto fade out time", 'A', "m_tmAutoFadeOut", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+9, 0x134, "Vertical position ratio", 'Y', "m_fYRatio", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+10, 0x138, "Horizontal position ratio", 'X', "m_fXRatio", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf1<<8)+11, 0x13C, "Picture stretch", 'S', "m_fPictureStretch", 0x7F0000FFUL, 0),
};
#define CHudPicHolder_propertiesct ARRAYCOUNT(CHudPicHolder_properties)

CEntityComponent CHudPicHolder_components[] = {
#define MODEL_MARKER ((0x000000f1<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MessageHolder.mdl"),
#define TEXTURE_MARKER ((0x000000f1<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\MessageHolder.tex"),
};
#define CHudPicHolder_componentsct ARRAYCOUNT(CHudPicHolder_components)

CEventHandlerEntry CHudPicHolder_handlers[] = {
 {0x00f10000, -1, CEntity::pEventHandler(&CHudPicHolder::WaitAndFadeOut),DEBUGSTRING("CHudPicHolder::WaitAndFadeOut")},
 {0x00f10001, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10001_WaitAndFadeOut_01), DEBUGSTRING("CHudPicHolder::H0x00f10001_WaitAndFadeOut_01")},
 {0x00f10002, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10002_WaitAndFadeOut_02), DEBUGSTRING("CHudPicHolder::H0x00f10002_WaitAndFadeOut_02")},
 {0x00f10003, -1, CEntity::pEventHandler(&CHudPicHolder::ApplyFadeOut),DEBUGSTRING("CHudPicHolder::ApplyFadeOut")},
 {0x00f10004, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10004_ApplyFadeOut_01), DEBUGSTRING("CHudPicHolder::H0x00f10004_ApplyFadeOut_01")},
 {0x00f10005, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10005_ApplyFadeOut_02), DEBUGSTRING("CHudPicHolder::H0x00f10005_ApplyFadeOut_02")},
 {0x00f10006, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10006_ApplyFadeOut_03), DEBUGSTRING("CHudPicHolder::H0x00f10006_ApplyFadeOut_03")},
 {1, -1, CEntity::pEventHandler(&CHudPicHolder::Main),DEBUGSTRING("CHudPicHolder::Main")},
 {0x00f10007, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10007_Main_01), DEBUGSTRING("CHudPicHolder::H0x00f10007_Main_01")},
 {0x00f10008, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10008_Main_02), DEBUGSTRING("CHudPicHolder::H0x00f10008_Main_02")},
 {0x00f10009, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f10009_Main_03), DEBUGSTRING("CHudPicHolder::H0x00f10009_Main_03")},
 {0x00f1000a, -1, CEntity::pEventHandler(&CHudPicHolder::H0x00f1000a_Main_04), DEBUGSTRING("CHudPicHolder::H0x00f1000a_Main_04")},
};
#define CHudPicHolder_handlersct ARRAYCOUNT(CHudPicHolder_handlers)

CEntity *CHudPicHolder_New(void) { return new CHudPicHolder; };
void CHudPicHolder_OnInitClass(void) {};
void CHudPicHolder_OnEndClass(void) {};
void CHudPicHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CHudPicHolder_OnWorldEnd(CWorld *pwo) {};
void CHudPicHolder_OnWorldInit(CWorld *pwo) {};
void CHudPicHolder_OnWorldTick(CWorld *pwo) {};
void CHudPicHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CHudPicHolder, CRationalEntity, "HudPicHolder", "Thumbnails\\HudPicHolder.tbn", 241);
DECLARE_CTFILENAME(_fnmCHudPicHolder_tbn, "Thumbnails\\HudPicHolder.tbn");
