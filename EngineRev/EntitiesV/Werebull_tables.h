// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(BullChar)
  EP_ENUMVALUE(BUC_SUMMER, "Summer"),
  EP_ENUMVALUE(BUC_WINTER, "Winter"),
EP_ENUMEND(BullChar);

#define ENTITYCLASS CWerebull

CEntityProperty CWerebull_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x133<<8)+1, 0x5E8, "", 0, "m_bRunAttack", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x133<<8)+2, 0x5EC, "", 0, "m_bHornHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x133<<8)+3, 0x5F0, "", 0, "m_penLastTouched", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x133<<8)+4, 0x5F4, "", 0, "m_soFeet", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x133<<8)+5, 0x670, "", 0, "m_bRunSoundPlaying", 0x0UL, 0),
};
#define CWerebull_propertiesct ARRAYCOUNT(CWerebull_properties)

CEntityComponent CWerebull_components[] = {
#define CLASS_BASE ((0x00000133<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyRunInto.ecl"),
#define MODEL_WEREBULL ((0x00000133<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_WEREBULL, "EFNM" "Models\\Enemies\\Werebull\\Werebull.mdl"),
#define TEXTURE_WEREBULL_SUMMER ((0x00000133<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WEREBULL_SUMMER, "EFNM" "Models\\Enemies\\Werebull\\Werebull.tex"),
#define SOUND_IDLE ((0x00000133<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Werebull\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000133<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Werebull\\Sounds\\Sight.wav"),
#define SOUND_KICKHORN ((0x00000133<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_KICKHORN, "EFNM" "Models\\Enemies\\Werebull\\Sounds\\KickHorn.wav"),
#define SOUND_IMPACT ((0x00000133<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_IMPACT, "EFNM" "Models\\Enemies\\Werebull\\Sounds\\Impact.wav"),
#define SOUND_DEATH ((0x00000133<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Werebull\\Sounds\\Death.wav"),
#define SOUND_RUN ((0x00000133<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_RUN, "EFNM" "Models\\Enemies\\Werebull\\Sounds\\Run.wav"),
};
#define CWerebull_componentsct ARRAYCOUNT(CWerebull_components)

CEventHandlerEntry CWerebull_handlers[] = {
 {0x01330000, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CWerebull::Hit),DEBUGSTRING("CWerebull::Hit")},
 {0x01330001, -1, CEntity::pEventHandler(&CWerebull::H0x01330001_Hit_01), DEBUGSTRING("CWerebull::H0x01330001_Hit_01")},
 {0x01330002, -1, CEntity::pEventHandler(&CWerebull::H0x01330002_Hit_02), DEBUGSTRING("CWerebull::H0x01330002_Hit_02")},
 {0x01330003, -1, CEntity::pEventHandler(&CWerebull::H0x01330003_Hit_03), DEBUGSTRING("CWerebull::H0x01330003_Hit_03")},
 {0x01330004, -1, CEntity::pEventHandler(&CWerebull::H0x01330004_Hit_04), DEBUGSTRING("CWerebull::H0x01330004_Hit_04")},
 {0x01330005, -1, CEntity::pEventHandler(&CWerebull::H0x01330005_Hit_05), DEBUGSTRING("CWerebull::H0x01330005_Hit_05")},
 {0x01330006, -1, CEntity::pEventHandler(&CWerebull::H0x01330006_Hit_06), DEBUGSTRING("CWerebull::H0x01330006_Hit_06")},
 {0x01330007, -1, CEntity::pEventHandler(&CWerebull::H0x01330007_Hit_07), DEBUGSTRING("CWerebull::H0x01330007_Hit_07")},
 {1, -1, CEntity::pEventHandler(&CWerebull::Main),DEBUGSTRING("CWerebull::Main")},
};
#define CWerebull_handlersct ARRAYCOUNT(CWerebull_handlers)

CEntity *CWerebull_New(void) { return new CWerebull; };
void CWerebull_OnInitClass(void) {};
void CWerebull_OnEndClass(void) {};
void CWerebull_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWerebull_OnWorldEnd(CWorld *pwo) {};
void CWerebull_OnWorldInit(CWorld *pwo) {};
void CWerebull_OnWorldTick(CWorld *pwo) {};
void CWerebull_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWerebull, CEnemyRunInto, "Werebull", "Thumbnails\\Werebull.tbn", 307);
DECLARE_CTFILENAME(_fnmCWerebull_tbn, "Thumbnails\\Werebull.tbn");
