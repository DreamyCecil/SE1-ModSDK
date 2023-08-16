// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CDemon

CEntityProperty CDemon_properties[] = {
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x150<<8)+2, 0x5C0, "", 0, "m_iCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x150<<8)+3, 0x5C4, "", 0, "m_penFireFX", 0x0UL, 0),
};
#define CDemon_propertiesct ARRAYCOUNT(CDemon_properties)

CEntityComponent CDemon_components[] = {
#define CLASS_BASE ((0x00000150<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_PROJECTILE ((0x00000150<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000150<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_DEMON ((0x00000150<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_DEMON, "EFNM" "ModelsMP\\Enemies\\Demon\\Demon.mdl"),
#define TEXTURE_DEMON ((0x00000150<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DEMON, "EFNM" "ModelsMP\\Enemies\\Demon\\Demon.tex"),
#define MODEL_FIREBALL ((0x00000150<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_FIREBALL, "EFNM" "ModelsMP\\Enemies\\Demon\\Projectile\\Projectile.mdl"),
#define TEXTURE_FIREBALL ((0x00000150<<8)+16)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FIREBALL, "EFNM" "ModelsMP\\Enemies\\Demon\\Projectile\\Projectile.tex"),
#define SOUND_IDLE ((0x00000150<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000150<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000150<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Wound.wav"),
#define SOUND_DEATH ((0x00000150<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Death.wav"),
#define SOUND_CAST ((0x00000150<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_CAST, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Cast.wav"),
};
#define CDemon_componentsct ARRAYCOUNT(CDemon_components)

CEventHandlerEntry CDemon_handlers[] = {
 {0x01500000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CDemon::Fire),DEBUGSTRING("CDemon::Fire")},
 {0x01500001, -1, CEntity::pEventHandler(&CDemon::H0x01500001_Fire_01), DEBUGSTRING("CDemon::H0x01500001_Fire_01")},
 {0x01500002, -1, CEntity::pEventHandler(&CDemon::H0x01500002_Fire_02), DEBUGSTRING("CDemon::H0x01500002_Fire_02")},
 {0x01500003, -1, CEntity::pEventHandler(&CDemon::H0x01500003_Fire_03), DEBUGSTRING("CDemon::H0x01500003_Fire_03")},
 {0x01500004, -1, CEntity::pEventHandler(&CDemon::H0x01500004_Fire_04), DEBUGSTRING("CDemon::H0x01500004_Fire_04")},
 {0x01500005, -1, CEntity::pEventHandler(&CDemon::H0x01500005_Fire_05), DEBUGSTRING("CDemon::H0x01500005_Fire_05")},
 {0x01500006, -1, CEntity::pEventHandler(&CDemon::H0x01500006_Fire_06), DEBUGSTRING("CDemon::H0x01500006_Fire_06")},
 {0x01500007, -1, CEntity::pEventHandler(&CDemon::H0x01500007_Fire_07), DEBUGSTRING("CDemon::H0x01500007_Fire_07")},
 {0x01500008, -1, CEntity::pEventHandler(&CDemon::H0x01500008_Fire_08), DEBUGSTRING("CDemon::H0x01500008_Fire_08")},
 {0x01500009, -1, CEntity::pEventHandler(&CDemon::H0x01500009_Fire_09), DEBUGSTRING("CDemon::H0x01500009_Fire_09")},
 {0x0150000a, -1, CEntity::pEventHandler(&CDemon::H0x0150000a_Fire_10), DEBUGSTRING("CDemon::H0x0150000a_Fire_10")},
 {0x0150000b, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CDemon::Hit),DEBUGSTRING("CDemon::Hit")},
 {0x0150000c, -1, CEntity::pEventHandler(&CDemon::H0x0150000c_Hit_01), DEBUGSTRING("CDemon::H0x0150000c_Hit_01")},
 {0x0150000d, -1, CEntity::pEventHandler(&CDemon::H0x0150000d_Hit_02), DEBUGSTRING("CDemon::H0x0150000d_Hit_02")},
 {0x0150000e, -1, CEntity::pEventHandler(&CDemon::H0x0150000e_Hit_03), DEBUGSTRING("CDemon::H0x0150000e_Hit_03")},
 {0x0150000f, -1, CEntity::pEventHandler(&CDemon::H0x0150000f_Hit_04), DEBUGSTRING("CDemon::H0x0150000f_Hit_04")},
 {0x01500010, -1, CEntity::pEventHandler(&CDemon::H0x01500010_Hit_05), DEBUGSTRING("CDemon::H0x01500010_Hit_05")},
 {0x01500011, -1, CEntity::pEventHandler(&CDemon::H0x01500011_Hit_06), DEBUGSTRING("CDemon::H0x01500011_Hit_06")},
 {1, -1, CEntity::pEventHandler(&CDemon::Main),DEBUGSTRING("CDemon::Main")},
};
#define CDemon_handlersct ARRAYCOUNT(CDemon_handlers)

CEntity *CDemon_New(void) { return new CDemon; };
void CDemon_OnInitClass(void) {};
void CDemon_OnEndClass(void) {};
void CDemon_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDemon_OnWorldEnd(CWorld *pwo) {};
void CDemon_OnWorldInit(CWorld *pwo) {};
void CDemon_OnWorldTick(CWorld *pwo) {};
void CDemon_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDemon, CEnemyBase, "Demon", "Thumbnails\\Demon.tbn", 336);
DECLARE_CTFILENAME(_fnmCDemon_tbn, "Thumbnails\\Demon.tbn");
