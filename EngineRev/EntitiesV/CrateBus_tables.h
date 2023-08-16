// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CCrateBus

CEntityProperty CCrateBus_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x160<<8)+1, 0x340, "Active", 0, "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x160<<8)+2, 0x344, "Explosion Stretch", 'E', "m_fExplosionStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x160<<8)+3, 0x348, "", 0, "m_tmDeath", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x160<<8)+4, 0x34C, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x160<<8)+5, 0x350, "", 0, "m_ctMentals", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x160<<8)+6, 0x354, "", 0, "m_bShowTrail", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x160<<8)+7, 0x358, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+11, 0x35C, "Head texture 01", 'H', "m_fnmHeadTex01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+12, 0x364, "Head texture 02", 0, "m_fnmHeadTex02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+13, 0x36C, "Head texture 03", 0, "m_fnmHeadTex03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+14, 0x374, "Head texture 04", 0, "m_fnmHeadTex04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+15, 0x37C, "Head texture 05", 0, "m_fnmHeadTex05", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+16, 0x384, "Head texture 06", 0, "m_fnmHeadTex06", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+17, 0x38C, "Head texture 07", 0, "m_fnmHeadTex07", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+18, 0x394, "Head texture 08", 0, "m_fnmHeadTex08", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+19, 0x39C, "Head texture 09", 0, "m_fnmHeadTex09", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+20, 0x3A4, "Head texture 10", 0, "m_fnmHeadTex10", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+21, 0x3AC, "Head texture 11", 0, "m_fnmHeadTex11", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+22, 0x3B4, "Head texture 12", 0, "m_fnmHeadTex12", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+23, 0x3BC, "Head texture 13", 0, "m_fnmHeadTex13", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+24, 0x3C4, "Head texture 14", 0, "m_fnmHeadTex14", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+25, 0x3CC, "Head texture 15", 0, "m_fnmHeadTex15", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+26, 0x3D4, "Head texture 16", 0, "m_fnmHeadTex16", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+27, 0x3DC, "Head texture 17", 0, "m_fnmHeadTex17", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+28, 0x3E4, "Head texture 18", 0, "m_fnmHeadTex18", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+29, 0x3EC, "Head texture 19", 0, "m_fnmHeadTex19", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+30, 0x3F4, "Head texture 20", 0, "m_fnmHeadTex20", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+31, 0x3FC, "Head texture 21", 0, "m_fnmHeadTex21", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+32, 0x404, "Head texture 22", 0, "m_fnmHeadTex22", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+33, 0x40C, "Head texture 23", 0, "m_fnmHeadTex23", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x160<<8)+34, 0x414, "Head texture 24", 0, "m_fnmHeadTex24", 0x7F0000FFUL, 0),
};
#define CCrateBus_propertiesct ARRAYCOUNT(CCrateBus_properties)

CEntityComponent CCrateBus_components[] = {
#define CLASS_BASIC_EFFECT ((0x00000160<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_PROJECTILE ((0x00000160<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_SPAWNER_PROJECTILE ((0x00000160<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_SPAWNER_PROJECTILE, "EFNM" "Classes\\SpawnerProjectile.ecl"),
#define MODEL_MENTAL ((0x00000160<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_MENTAL, "EFNM" "ModelsMP\\Enemies\\Mental\\Mental.mdl"),
#define TEXTURE_MENTAL ((0x00000160<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MENTAL, "EFNM" "ModelsMP\\Enemies\\Mental\\Mental.tex"),
#define MODEL_CRATE_BUS ((0x00000160<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_CRATE_BUS, "EFNM" "ModelsMP\\CutSequences\\CrateBus\\CrateBus.mdl"),
#define TEXTURE_CRATE_BUS ((0x00000160<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CRATE_BUS, "EFNM" "ModelsMP\\CutSequences\\CrateBus\\CrateBus.tex"),
#define MODEL_HEAD ((0x00000160<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_HEAD, "EFNM" "ModelsMP\\Enemies\\Mental\\Head.mdl"),
#define TEXTURE_HEAD ((0x00000160<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEAD, "EFNM" "ModelsMP\\Enemies\\Mental\\Head.tex"),
};
#define CCrateBus_componentsct ARRAYCOUNT(CCrateBus_components)

CEventHandlerEntry CCrateBus_handlers[] = {
 {0x01600000, -1, CEntity::pEventHandler(&CCrateBus::Die),DEBUGSTRING("CCrateBus::Die")},
 {0x01600001, -1, CEntity::pEventHandler(&CCrateBus::H0x01600001_Die_01), DEBUGSTRING("CCrateBus::H0x01600001_Die_01")},
 {0x01600002, -1, CEntity::pEventHandler(&CCrateBus::H0x01600002_Die_02), DEBUGSTRING("CCrateBus::H0x01600002_Die_02")},
 {1, -1, CEntity::pEventHandler(&CCrateBus::Main),DEBUGSTRING("CCrateBus::Main")},
 {0x01600003, -1, CEntity::pEventHandler(&CCrateBus::H0x01600003_Main_01), DEBUGSTRING("CCrateBus::H0x01600003_Main_01")},
 {0x01600004, -1, CEntity::pEventHandler(&CCrateBus::H0x01600004_Main_02), DEBUGSTRING("CCrateBus::H0x01600004_Main_02")},
 {0x01600005, -1, CEntity::pEventHandler(&CCrateBus::H0x01600005_Main_03), DEBUGSTRING("CCrateBus::H0x01600005_Main_03")},
 {0x01600006, -1, CEntity::pEventHandler(&CCrateBus::H0x01600006_Main_04), DEBUGSTRING("CCrateBus::H0x01600006_Main_04")},
};
#define CCrateBus_handlersct ARRAYCOUNT(CCrateBus_handlers)

CEntity *CCrateBus_New(void) { return new CCrateBus; };
void CCrateBus_OnInitClass(void) {};
void CCrateBus_OnEndClass(void) {};
void CCrateBus_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCrateBus_OnWorldEnd(CWorld *pwo) {};
void CCrateBus_OnWorldInit(CWorld *pwo) {};
void CCrateBus_OnWorldTick(CWorld *pwo) {};
void CCrateBus_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCrateBus, CMovableModelEntity, "CrateBus", "Thumbnails\\CrateBus.tbn", 352);
DECLARE_CTFILENAME(_fnmCCrateBus_tbn, "Thumbnails\\CrateBus.tbn");
