// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(RobotFlyingChar)
  EP_ENUMVALUE(RFC_KAMIKAZE, "Kamikaze"),
  EP_ENUMVALUE(RFC_FIGHTER, "Fighter"),
EP_ENUMEND(RobotFlyingChar);

#define ENTITYCLASS CRobotFlying

CEntityProperty CRobotFlying_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &RobotFlyingChar_enum, (0x0000014e<<8)+1, offsetof(CRobotFlying, m_rfcChar), "Character", 'C', 0x7F0000FFUL, 0),
};
#define CRobotFlying_propertiesct ARRAYCOUNT(CRobotFlying_properties)

CEntityComponent CRobotFlying_components[] = {
#define CLASS_BASE ((0x0000014e<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyFly.ecl"),
#define MODEL_KAMIKAZE ((0x0000014e<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_KAMIKAZE, "EFNM" "Models\\Enemies\\Robots\\FloatKamikaze\\FloatKamikaze.mdl"),
#define TEXTURE_KAMIKAZE ((0x0000014e<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_KAMIKAZE, "EFNM" "Models\\Enemies\\Robots\\SentryBall\\Ball.tex"),
#define MODEL_FIGHTER ((0x0000014e<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_FIGHTER, "EFNM" "Models\\Enemies\\Robots\\FlyingFighter\\Ship.mdl"),
#define TEXTURE_FIGHTER ((0x0000014e<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FIGHTER, "EFNM" "Models\\Enemies\\Robots\\FlyingFighter\\Ship.tex"),
#define SOUND_IDLE ((0x0000014e<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x0000014e<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x0000014e<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x0000014e<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x0000014e<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x0000014e<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Death.wav"),
};
#define CRobotFlying_componentsct ARRAYCOUNT(CRobotFlying_components)

CEventHandlerEntry CRobotFlying_handlers[] = {
 {0x014e0000, STATE_CEnemyFly_FlyHit, CEntity::pEventHandler(&CRobotFlying::FlyHit),DEBUGSTRING("CRobotFlying::FlyHit")},
 {0x014e0001, STATE_CEnemyFly_FlyFire, CEntity::pEventHandler(&CRobotFlying::FlyFire),DEBUGSTRING("CRobotFlying::FlyFire")},
 {0x014e0002, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CRobotFlying::Death),DEBUGSTRING("CRobotFlying::Death")},
 {1, -1, CEntity::pEventHandler(&CRobotFlying::Main),DEBUGSTRING("CRobotFlying::Main")},
};
#define CRobotFlying_handlersct ARRAYCOUNT(CRobotFlying_handlers)

CEntity *CRobotFlying_New(void) { return new CRobotFlying; };
void CRobotFlying_OnInitClass(void) {};
void CRobotFlying_OnEndClass(void) {};
void CRobotFlying_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CRobotFlying_OnWorldEnd(CWorld *pwo) {};
void CRobotFlying_OnWorldInit(CWorld *pwo) {};
void CRobotFlying_OnWorldTick(CWorld *pwo) {};
void CRobotFlying_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CRobotFlying, CEnemyFly, "RobotFlying", "Thumbnails\\RobotFlying.tbn", 0x0000014e);
DECLARE_CTFILENAME(_fnmCRobotFlying_tbn, "Thumbnails\\RobotFlying.tbn");