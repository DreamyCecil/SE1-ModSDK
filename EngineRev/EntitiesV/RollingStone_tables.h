// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CRollingStone

CEntityProperty CRollingStone_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+1, 0x340, "Bounce", 'B', "m_fBounce", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+2, 0x344, "Health", 'H', "m_fHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+3, 0x348, "Damage", 'D', "m_fDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25c<<8)+4, 0x34C, "Fixed damage", 'F', "m_bFixedDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+5, 0x350, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+6, 0x354, "Deceleration", 0, "m_fDeceleration", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+7, 0x358, "Start Speed", 'Z', "m_fStartSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x25c<<8)+8, 0x35C, "Start Direction", 'A', "m_vStartDir", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25c<<8)+9, 0x368, "Death target", 'T', "m_penDeathTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25c<<8)+20, 0x36C, "", 0, "m_soBounce0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25c<<8)+21, 0x3E8, "", 0, "m_soBounce1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25c<<8)+22, 0x464, "", 0, "m_soBounce2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25c<<8)+23, 0x4E0, "", 0, "m_soBounce3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25c<<8)+24, 0x55C, "", 0, "m_soBounce4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x25c<<8)+30, 0x5D8, "", 0, "m_iNextChannel", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25c<<8)+31, 0x5DC, "", 0, "m_soRoll", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25c<<8)+32, 0x658, "", 0, "m_bRollPlaying", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0x25c<<8)+40, 0x65C, "", 0, "m_qA", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0x25c<<8)+41, 0x66C, "", 0, "m_qALast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25c<<8)+42, 0x67C, "", 0, "m_fASpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x25c<<8)+43, 0x680, "", 0, "m_vR", 0x0UL, 0),
};
#define CRollingStone_propertiesct ARRAYCOUNT(CRollingStone_properties)

CEntityComponent CRollingStone_components[] = {
#define MODEL_ROLLINGSTONE ((0x0000025c<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_ROLLINGSTONE, "EFNM" "Models\\Ages\\Egypt\\Traps\\RollingStone\\RollingStone.mdl"),
#define MODEL_STONESPHERE ((0x0000025c<<8)+2)
 CEntityComponent(ECT_MODEL, MODEL_STONESPHERE, "EFNM" "Models\\Ages\\Egypt\\Traps\\RollingStone\\Stone.mdl"),
#define TEXTURE_ROLLINGSTONE ((0x0000025c<<8)+3)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROLLINGSTONE, "EFNM" "Models\\Ages\\Egypt\\Traps\\RollingStone\\Stone.tex"),
#define TEXTURE_DETAIL ((0x0000025c<<8)+5)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DETAIL, "EFNM" "Models\\Ages\\Egypt\\Traps\\RollingStone\\Detail.tex"),
#define MODEL_STONE ((0x0000025c<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_STONE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.mdl"),
#define TEXTURE_STONE ((0x0000025c<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STONE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.tex"),
#define CLASS_DEBRIS ((0x0000025c<<8)+16)
 CEntityComponent(ECT_CLASS, CLASS_DEBRIS, "EFNM" "Classes\\Debris.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000025c<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define SOUND_BOUNCE ((0x0000025c<<8)+20)
 CEntityComponent(ECT_SOUND, SOUND_BOUNCE, "EFNM" "Sounds\\Misc\\RollingStone.wav"),
#define SOUND_ROLL ((0x0000025c<<8)+21)
 CEntityComponent(ECT_SOUND, SOUND_ROLL, "EFNM" "Sounds\\Misc\\RollingStoneEnvironment.wav"),
};
#define CRollingStone_componentsct ARRAYCOUNT(CRollingStone_components)

CEventHandlerEntry CRollingStone_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CRollingStone::Main),DEBUGSTRING("CRollingStone::Main")},
 {0x025c0000, -1, CEntity::pEventHandler(&CRollingStone::H0x025c0000_Main_01), DEBUGSTRING("CRollingStone::H0x025c0000_Main_01")},
 {0x025c0001, -1, CEntity::pEventHandler(&CRollingStone::H0x025c0001_Main_02), DEBUGSTRING("CRollingStone::H0x025c0001_Main_02")},
 {0x025c0002, -1, CEntity::pEventHandler(&CRollingStone::H0x025c0002_Main_03), DEBUGSTRING("CRollingStone::H0x025c0002_Main_03")},
 {0x025c0003, -1, CEntity::pEventHandler(&CRollingStone::H0x025c0003_Main_04), DEBUGSTRING("CRollingStone::H0x025c0003_Main_04")},
};
#define CRollingStone_handlersct ARRAYCOUNT(CRollingStone_handlers)

CEntity *CRollingStone_New(void) { return new CRollingStone; };
void CRollingStone_OnInitClass(void) {};
void CRollingStone_OnEndClass(void) {};
void CRollingStone_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CRollingStone_OnWorldEnd(CWorld *pwo) {};
void CRollingStone_OnWorldInit(CWorld *pwo) {};
void CRollingStone_OnWorldTick(CWorld *pwo) {};
void CRollingStone_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CRollingStone, CMovableModelEntity, "RollingStone", "Thumbnails\\RollingStone.tbn", 604);
DECLARE_CTFILENAME(_fnmCRollingStone_tbn, "Thumbnails\\RollingStone.tbn");
