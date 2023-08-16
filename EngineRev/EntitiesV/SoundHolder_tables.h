// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSoundHolder

CEntityProperty CSoundHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xcc<<8)+1, 0x110, "Sound", 'S', "m_fnSound", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xcc<<8)+2, 0x118, "Fall-off", 'F', "m_rFallOffRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xcc<<8)+3, 0x11C, "Hot-spot", 'H', "m_rHotSpotRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcc<<8)+4, 0x120, "Volume", 'V', "m_fVolume", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcc<<8)+6, 0x124, "Looping", 'L', "m_bLoop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcc<<8)+7, 0x128, "Surround", 'R', "m_bSurround", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcc<<8)+8, 0x12C, "Volumetric", 'O', "m_bVolumetric", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xcc<<8)+9, 0x130, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xcc<<8)+10, 0x134, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcc<<8)+11, 0x138, "Auto start", 'A', "m_bAutoStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xcc<<8)+12, 0x13C, "", 0, "m_iPlayType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xcc<<8)+13, 0x140, "", 0, "m_soSound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcc<<8)+14, 0x1BC, "Destroyable", 'Q', "m_bDestroyable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcc<<8)+15, 0x1C0, "Pitch", 0, "m_fPitch", 0x7F0000FFUL, 0),
};
#define CSoundHolder_propertiesct ARRAYCOUNT(CSoundHolder_properties)

CEntityComponent CSoundHolder_components[] = {
#define MODEL_MARKER ((0x000000cc<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\SoundHolder.mdl"),
#define TEXTURE_MARKER ((0x000000cc<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\SoundHolder.tex"),
};
#define CSoundHolder_componentsct ARRAYCOUNT(CSoundHolder_components)

CEventHandlerEntry CSoundHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CSoundHolder::Main),DEBUGSTRING("CSoundHolder::Main")},
 {0x00cc0000, -1, CEntity::pEventHandler(&CSoundHolder::H0x00cc0000_Main_01), DEBUGSTRING("CSoundHolder::H0x00cc0000_Main_01")},
 {0x00cc0001, -1, CEntity::pEventHandler(&CSoundHolder::H0x00cc0001_Main_02), DEBUGSTRING("CSoundHolder::H0x00cc0001_Main_02")},
 {0x00cc0002, -1, CEntity::pEventHandler(&CSoundHolder::H0x00cc0002_Main_03), DEBUGSTRING("CSoundHolder::H0x00cc0002_Main_03")},
 {0x00cc0003, -1, CEntity::pEventHandler(&CSoundHolder::H0x00cc0003_Main_04), DEBUGSTRING("CSoundHolder::H0x00cc0003_Main_04")},
 {0x00cc0004, -1, CEntity::pEventHandler(&CSoundHolder::H0x00cc0004_Main_05), DEBUGSTRING("CSoundHolder::H0x00cc0004_Main_05")},
};
#define CSoundHolder_handlersct ARRAYCOUNT(CSoundHolder_handlers)

CEntity *CSoundHolder_New(void) { return new CSoundHolder; };
void CSoundHolder_OnInitClass(void) {};
void CSoundHolder_OnEndClass(void) {};
void CSoundHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSoundHolder_OnWorldEnd(CWorld *pwo) {};
void CSoundHolder_OnWorldInit(CWorld *pwo) {};
void CSoundHolder_OnWorldTick(CWorld *pwo) {};
void CSoundHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSoundHolder, CRationalEntity, "SoundHolder", "Thumbnails\\SoundHolder.tbn", 204);
DECLARE_CTFILENAME(_fnmCSoundHolder_tbn, "Thumbnails\\SoundHolder.tbn");
