// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTextFXHolder

CEntityProperty CTextFXHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xef<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xef<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xef<<8)+3, 0x118, "Text file", 'T', "m_fnmMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xef<<8)+4, 0x120, "", 0, "m_tmFadeInStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xef<<8)+5, 0x124, "", 0, "m_tmFadeOutStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xef<<8)+6, 0x128, "Fade in time", 'I', "m_tmFadeInLen", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xef<<8)+7, 0x12C, "Fade out time", 'O', "m_tmFadeOutLen", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xef<<8)+8, 0x130, "Auto fade out time", 'A', "m_tmAutoFadeOut", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xef<<8)+20, 0x134, "", 0, "m_bDataError", 0x0UL, 0),
};
#define CTextFXHolder_propertiesct ARRAYCOUNT(CTextFXHolder_properties)

CEntityComponent CTextFXHolder_components[] = {
#define MODEL_MARKER ((0x000000ef<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MessageHolder.mdl"),
#define TEXTURE_MARKER ((0x000000ef<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\MessageHolder.tex"),
};
#define CTextFXHolder_componentsct ARRAYCOUNT(CTextFXHolder_components)

CEventHandlerEntry CTextFXHolder_handlers[] = {
 {0x00ef0000, -1, CEntity::pEventHandler(&CTextFXHolder::WaitAndFadeOut),DEBUGSTRING("CTextFXHolder::WaitAndFadeOut")},
 {0x00ef0001, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0001_WaitAndFadeOut_01), DEBUGSTRING("CTextFXHolder::H0x00ef0001_WaitAndFadeOut_01")},
 {0x00ef0002, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0002_WaitAndFadeOut_02), DEBUGSTRING("CTextFXHolder::H0x00ef0002_WaitAndFadeOut_02")},
 {0x00ef0003, -1, CEntity::pEventHandler(&CTextFXHolder::ApplyFadeOut),DEBUGSTRING("CTextFXHolder::ApplyFadeOut")},
 {0x00ef0004, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0004_ApplyFadeOut_01), DEBUGSTRING("CTextFXHolder::H0x00ef0004_ApplyFadeOut_01")},
 {0x00ef0005, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0005_ApplyFadeOut_02), DEBUGSTRING("CTextFXHolder::H0x00ef0005_ApplyFadeOut_02")},
 {0x00ef0006, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0006_ApplyFadeOut_03), DEBUGSTRING("CTextFXHolder::H0x00ef0006_ApplyFadeOut_03")},
 {1, -1, CEntity::pEventHandler(&CTextFXHolder::Main),DEBUGSTRING("CTextFXHolder::Main")},
 {0x00ef0007, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0007_Main_01), DEBUGSTRING("CTextFXHolder::H0x00ef0007_Main_01")},
 {0x00ef0008, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0008_Main_02), DEBUGSTRING("CTextFXHolder::H0x00ef0008_Main_02")},
 {0x00ef0009, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef0009_Main_03), DEBUGSTRING("CTextFXHolder::H0x00ef0009_Main_03")},
 {0x00ef000a, -1, CEntity::pEventHandler(&CTextFXHolder::H0x00ef000a_Main_04), DEBUGSTRING("CTextFXHolder::H0x00ef000a_Main_04")},
};
#define CTextFXHolder_handlersct ARRAYCOUNT(CTextFXHolder_handlers)

CEntity *CTextFXHolder_New(void) { return new CTextFXHolder; };
void CTextFXHolder_OnInitClass(void) {};
void CTextFXHolder_OnEndClass(void) {};
void CTextFXHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTextFXHolder_OnWorldEnd(CWorld *pwo) {};
void CTextFXHolder_OnWorldInit(CWorld *pwo) {};
void CTextFXHolder_OnWorldTick(CWorld *pwo) {};
void CTextFXHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTextFXHolder, CRationalEntity, "TextFXHolder", "Thumbnails\\TextFXHodler.tbn", 239);
DECLARE_CTFILENAME(_fnmCTextFXHolder_tbn, "Thumbnails\\TextFXHodler.tbn");
