// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CFlame

CEntityProperty CFlame_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f8<<8)+1, 0x340, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f8<<8)+2, 0x344, "", 0, "m_penAttach", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f8<<8)+5, 0x348, "", 0, "m_bLoop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+8, 0x34C, "", 0, "m_vHitPoint", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x1f8<<8)+10, 0x358, "", 0, "m_soEffect", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f8<<8)+20, 0x3D4, "", 0, "m_tmStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f8<<8)+21, 0x3D8, "", 0, "m_fDamageToApply", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f8<<8)+22, 0x3DC, "", 0, "m_fDamageStep", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f8<<8)+23, 0x3E0, "", 0, "m_fAppliedDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f8<<8)+24, 0x3E4, "", 0, "m_tmFirstStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1f8<<8)+29, 0x3E8, "", 0, "m_ctFlames", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+30, 0x3EC, "", 0, "m_vPos01", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+31, 0x3F8, "", 0, "m_vPos02", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+32, 0x404, "", 0, "m_vPos03", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+33, 0x410, "", 0, "m_vPos04", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+34, 0x41C, "", 0, "m_vPos05", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+35, 0x428, "", 0, "m_vPos06", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+36, 0x434, "", 0, "m_vPos07", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+37, 0x440, "", 0, "m_vPos08", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+38, 0x44C, "", 0, "m_vPos09", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+39, 0x458, "", 0, "m_vPos10", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f8<<8)+40, 0x464, "", 0, "m_vPlaneNormal", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f8<<8)+51, 0x470, "", 0, "m_bBurningBrush", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f8<<8)+52, 0x474, "", 0, "m_tmDeathParticlesStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f8<<8)+255, 0x478, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CFlame_propertiesct ARRAYCOUNT(CFlame_properties)

CEntityComponent CFlame_components[] = {
#define CLASS_LIGHT ((0x000001f8<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define MODEL_FLAME ((0x000001f8<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_FLAME, "EFNM" "ModelsMP\\Effects\\Flame\\Flame.mdl"),
#define TEXTURE_FLAME ((0x000001f8<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLAME, "EFNM" "ModelsMP\\Effects\\Flame\\Flame.tex"),
#define SOUND_FLAME ((0x000001f8<<8)+12)
 CEntityComponent(ECT_SOUND, SOUND_FLAME, "EFNM" "SoundsMP\\Fire\\Burning.wav"),
};
#define CFlame_componentsct ARRAYCOUNT(CFlame_components)

CEventHandlerEntry CFlame_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CFlame::Main),DEBUGSTRING("CFlame::Main")},
 {0x01f80002, -1, CEntity::pEventHandler(&CFlame::H0x01f80002_Main_01), DEBUGSTRING("CFlame::H0x01f80002_Main_01")},
 {0x01f80003, -1, CEntity::pEventHandler(&CFlame::H0x01f80003_Main_02), DEBUGSTRING("CFlame::H0x01f80003_Main_02")},
 {0x01f80004, -1, CEntity::pEventHandler(&CFlame::H0x01f80004_Main_03), DEBUGSTRING("CFlame::H0x01f80004_Main_03")},
 {0x01f80005, -1, CEntity::pEventHandler(&CFlame::H0x01f80005_Main_04), DEBUGSTRING("CFlame::H0x01f80005_Main_04")},
};
#define CFlame_handlersct ARRAYCOUNT(CFlame_handlers)

CEntity *CFlame_New(void) { return new CFlame; };
void CFlame_OnInitClass(void) {};
void CFlame_OnEndClass(void) {};
void CFlame_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CFlame_OnWorldEnd(CWorld *pwo) {};
void CFlame_OnWorldInit(CWorld *pwo) {};
void CFlame_OnWorldTick(CWorld *pwo) {};
void CFlame_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CFlame, CMovableModelEntity, "Flame", "", 504);
DECLARE_CTFILENAME(_fnmCFlame_tbn, "");
