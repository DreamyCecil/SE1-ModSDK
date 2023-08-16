// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEnvironmentBase

CEntityProperty CEnvironmentBase_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x384<<8)+1, 0x338, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x384<<8)+2, 0x33C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x384<<8)+3, 0x340, "Range", 'R', "m_fDistance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x384<<8)+4, 0x344, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x384<<8)+5, 0x348, "Target", 'T', "m_penTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x384<<8)+6, 0x34C, "", 0, "m_penWatcher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x384<<8)+7, 0x350, "Watcher frequency", 0, "m_fWatcherFrequency", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x384<<8)+8, 0x354, "", 0, "m_vDesiredPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x384<<8)+10, 0x360, "Move speed", 'V', "m_fMoveSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x384<<8)+11, 0x364, "Rotate speed", 'B', "m_fRotateSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x384<<8)+12, 0x368, "Move frequency", 0, "m_fMoveFrequency", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x384<<8)+13, 0x36C, "Use watcher", 0, "m_bUseWatcher", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x384<<8)+14, 0x370, "Flying", 'F', "m_bFlying", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x384<<8)+16, 0x374, "", 0, "m_fWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+20, 0x378, "Model", 'M', "m_fnMdl", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+21, 0x380, "Texture", 'X', "m_fnTex", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x384<<8)+22, 0x388, "Animation", 0, "m_iAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+25, 0x38C, "Attachment 1 Model", 0, "m_fnAtt1Mdl", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+26, 0x394, "Attachment 1 Texture", 0, "m_fnAtt1Tex", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x384<<8)+27, 0x39C, "Attachment 1 position", 0, "m_iAtt1Position", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x384<<8)+28, 0x3A0, "Attachment 1 animation", 0, "m_iAtt1Anim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+30, 0x3A4, "Attachment 2 Model", 0, "m_fnAtt2Mdl", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+31, 0x3AC, "Attachment 2 Texture", 0, "m_fnAtt2Tex", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x384<<8)+32, 0x3B4, "Attachment 2 position", 0, "m_iAtt2Position", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x384<<8)+33, 0x3B8, "Attachment 2 animation", 0, "m_iAtt2Anim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+35, 0x3BC, "Attachment 3 Model", 0, "m_fnAtt3Mdl", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x384<<8)+36, 0x3C4, "Attachment 3 Texture", 0, "m_fnAtt3Tex", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x384<<8)+37, 0x3CC, "Attachment 3 position", 0, "m_iAtt3Position", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x384<<8)+38, 0x3D0, "Attachment 3 animation", 0, "m_iAtt3Anim", 0x7F0000FFUL, 0),
};
#define CEnvironmentBase_propertiesct ARRAYCOUNT(CEnvironmentBase_properties)

CEntityComponent CEnvironmentBase_components[] = {
#define CLASS_WATCHPLAYERS ((0x00000384<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_WATCHPLAYERS, "EFNM" "Classes\\WatchPlayers.ecl"),
};
#define CEnvironmentBase_componentsct ARRAYCOUNT(CEnvironmentBase_components)

CEventHandlerEntry CEnvironmentBase_handlers[] = {
 {0x03840000, -1, CEntity::pEventHandler(&CEnvironmentBase::MoveToMarker),DEBUGSTRING("CEnvironmentBase::MoveToMarker")},
 {0x03840001, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840001_MoveToMarker_01), DEBUGSTRING("CEnvironmentBase::H0x03840001_MoveToMarker_01")},
 {0x03840002, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840002_MoveToMarker_02), DEBUGSTRING("CEnvironmentBase::H0x03840002_MoveToMarker_02")},
 {0x03840003, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840003_MoveToMarker_03), DEBUGSTRING("CEnvironmentBase::H0x03840003_MoveToMarker_03")},
 {0x03840004, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840004_MoveToMarker_04), DEBUGSTRING("CEnvironmentBase::H0x03840004_MoveToMarker_04")},
 {0x03840005, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840005_MoveToMarker_05), DEBUGSTRING("CEnvironmentBase::H0x03840005_MoveToMarker_05")},
 {0x03840006, -1, CEntity::pEventHandler(&CEnvironmentBase::Activate),DEBUGSTRING("CEnvironmentBase::Activate")},
 {0x03840007, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840007_Activate_01), DEBUGSTRING("CEnvironmentBase::H0x03840007_Activate_01")},
 {0x03840008, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840008_Activate_02), DEBUGSTRING("CEnvironmentBase::H0x03840008_Activate_02")},
 {0x03840009, -1, CEntity::pEventHandler(&CEnvironmentBase::Stop),DEBUGSTRING("CEnvironmentBase::Stop")},
 {0x0384000a, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384000a_Stop_01), DEBUGSTRING("CEnvironmentBase::H0x0384000a_Stop_01")},
 {0x0384000b, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384000b_Stop_02), DEBUGSTRING("CEnvironmentBase::H0x0384000b_Stop_02")},
 {0x0384000c, -1, CEntity::pEventHandler(&CEnvironmentBase::DoAction),DEBUGSTRING("CEnvironmentBase::DoAction")},
 {0x0384000d, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384000d_DoAction_01), DEBUGSTRING("CEnvironmentBase::H0x0384000d_DoAction_01")},
 {0x0384000e, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384000e_DoAction_02), DEBUGSTRING("CEnvironmentBase::H0x0384000e_DoAction_02")},
 {0x0384000f, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384000f_DoAction_03), DEBUGSTRING("CEnvironmentBase::H0x0384000f_DoAction_03")},
 {0x03840010, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840010_DoAction_04), DEBUGSTRING("CEnvironmentBase::H0x03840010_DoAction_04")},
 {0x03840011, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840011_DoAction_05), DEBUGSTRING("CEnvironmentBase::H0x03840011_DoAction_05")},
 {0x03840012, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840012_DoAction_06), DEBUGSTRING("CEnvironmentBase::H0x03840012_DoAction_06")},
 {0x03840013, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840013_DoAction_07), DEBUGSTRING("CEnvironmentBase::H0x03840013_DoAction_07")},
 {0x03840014, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840014_DoAction_08), DEBUGSTRING("CEnvironmentBase::H0x03840014_DoAction_08")},
 {0x03840015, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840015_DoAction_09), DEBUGSTRING("CEnvironmentBase::H0x03840015_DoAction_09")},
 {0x03840016, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840016_DoAction_10), DEBUGSTRING("CEnvironmentBase::H0x03840016_DoAction_10")},
 {0x03840017, -1, CEntity::pEventHandler(&CEnvironmentBase::MainLoop),DEBUGSTRING("CEnvironmentBase::MainLoop")},
 {0x03840018, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840018_MainLoop_01), DEBUGSTRING("CEnvironmentBase::H0x03840018_MainLoop_01")},
 {0x03840019, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x03840019_MainLoop_02), DEBUGSTRING("CEnvironmentBase::H0x03840019_MainLoop_02")},
 {1, -1, CEntity::pEventHandler(&CEnvironmentBase::Main),DEBUGSTRING("CEnvironmentBase::Main")},
 {0x0384001a, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384001a_Main_01), DEBUGSTRING("CEnvironmentBase::H0x0384001a_Main_01")},
 {0x0384001b, -1, CEntity::pEventHandler(&CEnvironmentBase::H0x0384001b_Main_02), DEBUGSTRING("CEnvironmentBase::H0x0384001b_Main_02")},
};
#define CEnvironmentBase_handlersct ARRAYCOUNT(CEnvironmentBase_handlers)

CEntity *CEnvironmentBase_New(void) { return new CEnvironmentBase; };
void CEnvironmentBase_OnInitClass(void) {};
void CEnvironmentBase_OnEndClass(void) {};
void CEnvironmentBase_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnvironmentBase_OnWorldEnd(CWorld *pwo) {};
void CEnvironmentBase_OnWorldInit(CWorld *pwo) {};
void CEnvironmentBase_OnWorldTick(CWorld *pwo) {};
void CEnvironmentBase_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnvironmentBase, CMovableEntity, "Environment Base", "Thumbnails\\EnvironmentBase.tbn", 900);
DECLARE_CTFILENAME(_fnmCEnvironmentBase_tbn, "Thumbnails\\EnvironmentBase.tbn");
